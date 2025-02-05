//======================================================================================
// DecoderInterface.h
//======================================================================================
 
//---------------------------------------------------------------------------
//
//  Module Interface Description:
//      This file contains the interface definitions to create and interact with 
//      the decoder(s). This module will create separate decoder threads for each 
//      decoder it will interact with. 
//
//---------------------------------------------------------------------------

/* Copyright 2020, Honeywell.  All Rights Reserved */

#ifndef DECODER_INTERFACE_H
#define DECODER_INTERFACE_H

/* Check if this is a DLL build */
#ifdef DCL_IS_DLL
   #define DCL_STDCALL __stdcall
   #ifdef DCL_EXPORT
      #define DCL_API __declspec(dllexport)
   #endif
   #ifndef DCL_API
      #define DCL_API __declspec(dllimport)
   #endif   /* !DCL_API */
#else
   #if __GNUC__ >= 4
      #define DCL_API __attribute__ ((visibility ("default")))
   #else
      #define DCL_API 
   #endif
   #define DCL_STDCALL
#endif   /* DCL_IS_DLL */

/* Preamble */
#ifdef __cplusplus
extern "C" {
#endif

//Constants file
#include "DecoderConstants.h"

//Overall config file for the control logic
#include "DecoderConfig.h"
   
//Settings that apply to multiple decoders. Still may not apply to all decoders, so be wary for now...
#include "DecoderSettings.h"

//size_t
#include <stddef.h>

//Include the settings that apply to decoders that are built in.
#if (DECODER_ID)
#include "SwiftSettings.h"
#endif

#if (DECODER_FLD)
//#include "FastLinearSettings.h" //not done yet, will have at least something in it
#endif

/* Decoder Structures
 *  These are the structures by the decoder.
 */

/**
 *  \brief Callback tags used in InstallCallback.
 */
typedef enum {
   CB_PRINT,
   CB_TIMER,
   CB_RESULT,
   CB_RESULT_NOTIFY,
   CB_WATCHDOG,
   CB_STATUS,
   CB_PROGRESS
} CallbackTag;

/** \brief An image's orientation. */
typedef enum DEC_Orientation {
   DEC_ORIENTATION_UPRIGHT           = 0,
   DEC_ORIENTATION_RIGHT_SIDE_DOWN   = 1,
   DEC_ORIENTATION_UPSIDE_DOWN       = 2,
   DEC_ORIENTATION_LEFT_SIDE_DOWN    = 3,
} DEC_Orientation;

/**
 *   \brief Defines a Point in the image coordinate system.
 */
typedef struct {
   int x;
   int y;
} Point_tag;

/**
 *   \brief The collection of points that defines the boundry of the barcode.
 */
typedef struct {
   Point_tag corners[4];
} Bounds;

/**
 *   \brief Information for IQ imaging functions with Image Core.
 */
typedef struct {
   Bounds bounds;
   int d_corner;
   int pdfRows;
   int pdfCols;
} IQImageInfo_t;

/**
 *   \brief Only used with Progressive Decoding.
 */
typedef struct {
   int frameID;
   int line;
   int state;
} CircluarBufferState;

/**
 * \brief Result structure that is passed through the Result Callback (CB_RESULT). Each result will have its own structure.
 */
typedef struct DecoderResult {
   unsigned char Data[MAX_DECODED_DATA_LENGTH]; /// Decoded data.
   int Length;                                  /// Number of characters in data. 
   Bounds MainBounds;                           /// Graphical boundry of barcode. 
   Point_tag GraphicalCenter;                   /// Graphical center of barcode.
   unsigned int Symbology;                      /// Symbology identifer. \see symbologyID
   unsigned int SymbologyEx;                    /// Extended symbology identifier. \see symbologyExID
   int Modifier;                                /// Modifier information of symbology identifier.
   int ModifierEx;                              /// Extended mofifier information.
   char HHPCodeID;                              /// HHP Code identifier. \see hhpID
   char AIMCodeLetter;                          /// AIM identifier. \see aimID
   char AIMModifier;                            /// AIM modifier information.
   IQImageInfo_t IQImageInfo;                   /// IQ imaging information.
   int Parity;                                  /// Parity information. Applies to Data Matrix Append
   int AppendType;                              /// Append idenfifier. \see appendType
   int AppendIndex;                             /// Index of the result in the append sequence.
   int AppendTotal;                             /// Total number of results in the append sequence.
   int LinkFlag;                                /// Composite linking flag type.
   int ProgrammingCode;                         /// Reader programming code flag.
   int DecodeType;                              /// Decoder type that issued the result.
} DecoderResult;

/**
 *   \brief Image structure used with DEC_INJECT_MODE_IMAGE.
 */
typedef struct DecoderImage {
   int Height;
   int Width;
   int LineDelta;
   int Monocolor;
   int CenterX;
   int CenterY;
   void *pixels;
   struct DecoderImage *next;
} DecoderImage;

#pragma pack(push, 1)
/**
*   \brief Monocolor settings for an image
*/
typedef struct MonocolorSettingsTag {
    int enabled;
    int offset_x;
    int offset_y;
    int spacing_x;
    int spacing_y;
} MonocolorSettings;


/** \brief Image with attributes to decode
 * \deprecated Direct access to the fields of this struct is deprecated.
 * \sa See DEC_ImagePropertiesAlloc, DEC_ImagePropertiesFree, and other DEC_ImageProperties functions.
 */
typedef struct ImagePropertiesTag {
    size_t size;
    unsigned char* buffer;
    int width;
    int height;
    int line_delta;
    int aimer_center_x;
    int aimer_center_y;
    MonocolorSettings monocolor;
    int noise_level;
    int orientation;
    int mirror_image;
    int binning_size;
} ImageProperties;
#pragma pack(pop)


/** \brief A Region Of Interest (ROI).
 *
 * This defines a region within the image in which the decoder should attempt
 * to decode barcodes.
 */
typedef struct DEC_Roi DEC_Roi;


/** \brief A list of Regions Of Interests (ROIs) input to the decoder.
 *
 * This list may be retrieved via the #DEC_ImagePropertiesInitRoiList function.
 */
typedef struct DEC_RoiList DEC_RoiList;


/**
 *  \defgroup apiFunctions Functions
 *  @{
 */

/** 
 *  InitDecoder:
 *  
 *  \brief Creates and initializes the Decoder Control Logic and all decoder libraries.
 *  
 *  \param [in] width The number of columns of the expected image data in pixels.
 *  \param [in] height The number of rows of the image data in pixels.
 *  \param [in] wrap The number of bytes a row of in memory.
 *  \return The combination of handles of the decoder libraries that are created and initialized.
 *  
 *  \details This must be called before using any other API function, aside from DestroyDecoder().
 */
DCL_API int DCL_STDCALL InitDecoder( int width, int height, int wrap );



/** 
 *  DestroyDecoder:
 *  
 *  \brief Destroys the DCL and any decoder libraries that were created and initialized with InitDecoder().
 *  
 *  \return Nothing.
 *  
 *  \details This function must be called when finished using any of the decoders.
 */
DCL_API void DCL_STDCALL DestroyDecoder( void );


/** 
 *  ReportDecoderVersion:
 * 
 *  \brief Copies the revision string of the type requested.
 *  
 *  \param [in] type Flag(s) of the revision string(s) being requested.
 *       DEC_REVISION_CONTROL_LOGIC   0x01
 *       DEC_REVISION_ID              0x02
 *       DEC_REVISION_FLD             0x08
 *  \param [out] reportString Memory space into which the revision string(s) will be copied.
 *  \return Nothing.
 *  
 *  \details The memory space must be long enough for the string(s) to be copied into. Since there is no length
 *       input to this function, the size of the memory cannot be checked. Each string is not more than 50 characters
 *       long, so if you are unsure of the length that will be returned, request one type at a time and copy the
 *       resulting string elsewhere.
 */
DCL_API void DCL_STDCALL ReportDecoderVersion( int type, char *reportString );


/** 
 *  InstallCallback:
 *  
 *  \brief Installs callback functions to the function tag to be used during decoding.
 *  
 *  \param [in] tag Function tag to tie the callback function to. 
 *  \param [in] function Function to be used for the callback.
 *  \return Non-zero if function succeeds. 
 *  
 *  \details The only reason for failure of this function is if the tag used is not part of the tag enum. If the
 *       function that is tied to a particular tag is incorrect, unexpected things will happen. 
 *       Callback functions prototypes:
 *          typedef  void (*fPrint_t)       (char *);
 *          typedef  int  (*fTimer_t)       (void);
 *          typedef  void (*fResult_t)      (int, DecoderResult *);
 *          typedef  void (*fResultNotify_t)(int);
 *          typedef  void (*fWatchDog_t)    (void);
 *          typedef  void (*fStatus_t)      (int, int);
 *          typedef  void (*fProgress_t)    (int);
 * 
 *  \see CallbackTag
 */
DCL_API int DCL_STDCALL InstallCallback( unsigned int tag, void *function );


/** 
 *  Decode:
 *  
 *  \brief Decodes the image data using the specified decoder library.
 *  
 *  \param [in] image Data to be decoded.
 *  \param [in] decodeType Decoder library to use.
 *  \return Depends on decoder library used to decode.
 *  
 *  \details The DCL can have many different decode libraries wrapped inside it. Each one has its own definitions of
 *       return values for their decode functions. There will be an attempt to harmonize the return values, or at 
 *       the very least document each one. 
 *
 *  \see decType
 */
DCL_API int DCL_STDCALL Decode( void *image, int decodeType );


/**
 *  DecodeImage:
 *
 *  \brief Decodes the image data with provided attributes using the specified decoder library.
 *
 *  \param [in] image data with attributes to be decoded.
 *  \param [in] decoder library to use.
 *  \return Depends on decoder library used to decode.
 *
 *  \details The DCL can have many different decode libraries wrapped inside it. Each one has its own definitions of
 *       return values for their decode functions. There will be an attempt to harmonize the return values, or at
 *       the very least document each one.
 *
 *  \see decType
 */
DCL_API int DCL_STDCALL DecodeImage(ImageProperties* imageProperties, int decodeType);


/** 
 *  StopDecode:
 *  
 *  \brief Stops the decoder library.
 *  
 *  \return Non-zero if the decoder was told to stop. 
 *  
 *  \details Depending on the decoder library, this function might not be applicable. Also depending on the library,
 *       this function might only be available to be called at certain times. In general, this function will be responded 
 *       to during the execution of any of the callbacks installed.
 */
DCL_API int DCL_STDCALL StopDecode(void);


/** 
 *  ContinueDecode:
 *  
 *  \brief Continues the symbology that was processing when the Status callback was called. 
 *  
 *  \return Non-zero if the decoder was successfully told to continue. 
 *  
 *  \details Details
 */
DCL_API int DCL_STDCALL ContinueDecode(void);


/** 
 *  PauseDecode:
 *  
 *  \brief Stops the current symbology being processed.
 *  
 *  \return Non-zero if the decoder was successfully told to pause.
 *  
 *  \details Details
 */
DCL_API int DCL_STDCALL PauseDecode(void);


/** 
 *  DecodeGet:
 *  
 *  \brief Copies the value of the API tag to the memory space pointed to by data.
 *  
 *  \param [in] tag Decoder configuration tag.
 *  \param [out] data Memory space for value to be copied into.
 *  \return Non-zero if the data was retrieved successfully.
 *  
 *  \details Details
 */
DCL_API int DCL_STDCALL DecodeGet( unsigned int tag, void *data );


/** 
 *  DecodeSet:
 *  
 *  \brief Configures the API tag with the data.
 *  
 *  \param [in] tag Decoder configuration tag.
 *  \param [in] data Value to be set.
 *  \return Non-zero if the data was stored successfully.
 *  
 *  \details Details
 *  
 */
DCL_API int DCL_STDCALL DecodeSet( unsigned int tag, void *data );

/** 
 *  DecodeReset:
 *  
 *  \brief Sets the DCL and decoder library settings to their default values.
 *  
 *  \return Nothing
 *  
 *  \details Details
 */
DCL_API void DCL_STDCALL DecodeReset( void );


/** 
 *  GetLastDecoderError:
 *  
 *  \brief Returns the error code of the last error that occurred.
 *  
 *  \return Error code of the last error that occurred.
 *  
 *  \details Details
 */
DCL_API int DCL_STDCALL GetLastDecoderError(void);


/**
 *  ClearDecoderResults:
 *  
 *  \brief This function clears all stored partial results.
 *
 *  \return Nothing.
 *  
 *  \details Some append types in certain modes can store partial results so that a full result
 *    can be read across multiple images. For append types that are allowed to go across multiple
 *    images, but not across multiple trigger activations (assuming there are more than 1), it is
 *    important to clear these partial results. Clearing these partial results will avoid mixing 
 *    other pieces of the same append type and coming up with the wrong ultimate result.
 *  
 *    The only example so far of potential mixing of multiple symbols possible is Travel Document 1
 *    Passport reading, specifically mixing the 3rd row with rows 1 and 2 of another passport. Rows 1 and 2
 *    have a Composite Checksum calculation, but that calculation does not include row 3. Therefore, if rows 1
 *    and 2 are read in 1 trigger pull, and row 3 of another TD-1 is read in another trigger pull, inside the
 *    number of images specified by DEC_OCR_SECURITY, then all rows would be combined into a single result and 
 *    returned by the decoder. 
 *  
 *  \see Partial Result
 *  \see DEC_OCR_SECURITY
 */
DCL_API void DCL_STDCALL ClearDecoderResults(void);


/** \brief Allocate an #ImageProperties object.
 *
 * The #ImageProperties object is the primary input to the decoder.
 *
 * \return pointer to #ImageProperties object on success, NULL on failure.
 */
DCL_API ImageProperties *DCL_STDCALL DEC_ImagePropertiesAlloc(void);

/** \brief Free an #ImageProperties object.
 *
 * If \c imageProperties is NULL or \c *imageProperties is NULL, this function
 * has no effect. Otherwise, this function frees the #ImageProperties object,
 * which must have been allocated by #DEC_ImagePropertiesAlloc, then sets the
 * supplied pointer, \c *imageProperties, to NULL.
 * 
 * \return 0 on success, DEC_ERR_INVALID_ARGUMENT on failure.
 */
DCL_API int DCL_STDCALL DEC_ImagePropertiesFree(
    //! [in,out] pointer to the #ImageProperties object to free
    const ImageProperties **imageProperties
    );

/** \brief Set the pointer to the image data in an #ImageProperties object.
 * \return 0 on success, DEC_ERR_INVALID_ARGUMENT on failure.
 */
DCL_API int DCL_STDCALL DEC_ImagePropertiesSetBuffer(
    ImageProperties *imageProperties,  //!< [in,out] image properties to modify
    unsigned char *buffer              //!< [in] pointer to the image data
    );

/** \brief Set the dimensions of the image in an #ImageProperties object.
 * \return 0 on success, one of DEC_ERR_xxx codes on failure.
 */
DCL_API int DCL_STDCALL DEC_ImagePropertiesSetDimensions(
    ImageProperties *imageProperties,  //!< [in,out] image properties to modify
    int width,                         //!< [in] image width in pixels
    int height,                        //!< [in] image height in pixels
    int line_delta                     //!< [in] number of bytes per row in the image
    );

/** \brief Set the coordinates of the search center (often the aimer) in an
 *         #ImageProperties object.
 * \return 0 on success, one of DEC_ERR_xxx codes on failure.
 */
DCL_API int DCL_STDCALL DEC_ImagePropertiesSetSearchCenter(
    ImageProperties *imageProperties,  //!< [in,out] image properties to modify
    int x,                             //!< [in] x-coordinate of the search center
    int y                              //!< [in] y-coordinate of the search center
    );

/** \brief Set the #MonocolorSettings in an #ImageProperties object.
 * \return 0 on success, one of DEC_ERR_xxx codes on failure.
 */
DCL_API int DCL_STDCALL DEC_ImagePropertiesSetMonocolorSettings(
    ImageProperties *imageProperties,            //!< [in,out] image properties to modify
    const MonocolorSettings *monocolor_settings  //!< [in] monocolor settings to set
    );

/** \brief Set the approximate noise level of the image in an #ImageProperties object.
 * 
 * The noise level affects the calculation of IQ Score in FLD and may be used
 * for other purposes as well.
 * 
 * \return 0 on success, one of DEC_ERR_xxx codes on failure.
 */
DCL_API int DCL_STDCALL DEC_ImagePropertiesSetNoise(
    ImageProperties *imageProperties,  //!< [in,out] image properties to modify
    int noise_level                    //!< [in] noise level; must be in the range [0, 255]
    );

/** \brief Set the orientation of the image in an #ImageProperties object.
 * \return 0 on success, one of DEC_ERR_xxx codes on failure.
 */
DCL_API int DCL_STDCALL DEC_ImagePropertiesSetOrientation(
    ImageProperties *imageProperties,  //!< [in,out] image properties to modify
    DEC_Orientation orientation        //!< [in] image orientation
    );

/** \brief Set a value indicating whether the image in an #ImageProperties object is mirrored.
 *
 * By default, the mirror property is 0 (not mirrored).
 *
 * \return 0 on success, one of DEC_ERR_xxx codes on failure.
 */
DCL_API int DCL_STDCALL DEC_ImagePropertiesSetMirror(
    ImageProperties *imageProperties,  //!< [in,out] image properties to modify
    int mirror_image                   //!< [in] 1 if the image is mirrored, 0 otherwise
    );

/** \brief Set the binning size in an #ImageProperties object.
 *
 * When the binning size, B, is greater than 1, the decoder will downsample
 * the image by averaging every BxB region in the image, with a stride of B.
 *
 * By default, the \p binning_size is 1, meaning binning is disabled.
 *
 * \return 0 on success, one of DEC_ERR_xxx codes on failure.
 */
DCL_API int DCL_STDCALL DEC_ImagePropertiesSetBinningSize(
   ImageProperties *imageProperties,  //!< [in,out] image properties to modify
   int binning_size                   //!< [in] binning size; must be 1 or 2
   );

/** \brief Initialize and retrieve the list of ROIs associated with an
 *         #ImageProperties object.
 *
 * Before this function is called for the first time on an #ImageProperties
 * object, the ROI list for that #ImageProperties object is empty. After this
 * function is called, the ROI list will be cleared. Whenever the list is
 * empty, a call to #DecodeImage will cause the decoder to decode the current
 * image using the currently configured DEC_ROI_MODE.
 * 
 * This function will only fail if the given #ImageProperties object was not
 * allocated by calling #DEC_ImagePropertiesAlloc.
 *
 * \return pointer to ROI list on success, NULL on failure.
 */
DCL_API DEC_RoiList *DCL_STDCALL DEC_ImagePropertiesInitRoiList(
    ImageProperties *imageProperties  //!< [in,out] image properties to modify
    );


/** \brief Add a new ROI to a #DEC_RoiList.
 *
 * The rectangle defined by the given upper-left and lower-right coordinate
 * pairs is half-open, meaning the upper-left point is included in the ROI,
 * but the lower-right point is not.
 * 
 * If the given ROI lies partially outside the input image, it will be clipped
 * to lie within the image. If it is fully outside the image, it will be
 * ignored.
 * 
 * \return pointer to newly-added ROI on success, NULL on failure.
 */
DCL_API DEC_Roi *DCL_STDCALL DEC_RoiListAddRoi(
   DEC_RoiList *roi_list,  //!< [in,out] The ROI list to which to add the ROI
   int x0,                 //!< [in] x-coordinate of top-left corner of ROI
   int y0,                 //!< [in] y-coordinate of top-left corner of ROI
   int x1,                 //!< [in] x-coordinate of bottom-right corner of ROI
   int y1                  //!< [in] y-coordinate of bottom-right corner of ROI
   );

/** \brief Set the symbologies that the decoder will try to decode in the ROI.
 *
 * By default, the decoder will try all enabled symbologies on a given ROI.
 * 
 * \return 0 on SUCCESS, one of DEC_ERR_xxx codes on failure.
 */
DCL_API int DCL_STDCALL DEC_RoiSetSymbologies(
   DEC_Roi *roi,  //!< [in,out] The ROI to which to apply the symbologies
   //! [in] List of symbologies to try within the ROI.
   //!      If NULL, decoder will try all enabled symbologies.
   //!      This parameter should point to an array composed of pairs of
   //!      unsigned ints of the form (DEC_SYMBOLOGY_x, 0) or
   //!      (0, DEC_SYMBOLOGY_EX_y). The non-EX symbology value should always
   //!      be the first value of each pair.
   const unsigned int *symbologies,
   //! [in] Number of symbologies in \p symbologies.
   //!      If 0, decoder will try all enabled symbologies.
   //!      This is the number of \e pairs of constants, each representing 1
   //!      symbology--not the number of unsigned ints in the array.
   size_t n_symbologies
   );



/** @} */
/* Postamble */
#ifdef __cplusplus
}
#endif

#endif //DECODER_INTERFACE_H
