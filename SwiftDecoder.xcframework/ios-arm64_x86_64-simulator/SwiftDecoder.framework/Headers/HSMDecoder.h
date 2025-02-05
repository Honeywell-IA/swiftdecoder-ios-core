/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "DecodeResultListener.h"
#import "SwiftPlugin.h"
#import "PluginMonitorEventListener.h"
#import "BarcodeBounds.h"
#import "WindowMode.h"
#import "ActiveCamera.h"
#import "OCRActiveTemplate.h"
#import "PluginHelper.h"
#import "CameraManager.h"
#import "FreezeFrameListener.h"
/**
 * @brief This class is used to display a real time barcode scanning preview screen and to return the decoded barcode results to the calling activity
 */
@interface HSMDecoder : NSObject

//static singelton methods

/**
 * @brief Gets the singleton instance of HSMDecoder.
 *
 */
+ (HSMDecoder*) getInstance;
/**
 * @brief This stops the local Camera service and disposes of all resources used by the HSMDecoder singleton.  This must be called before exiting or the Camera may be left locked!
 *
 */
+ (void) disposeInstance;

//general instance methods
/**
 * @brief Sets the camera that will be used for decoding
 *
 * @param camera
 *	The camera identifier
 *
 */
- (void) setActiveCamera:(ActiveCamera)camera;

/**
 * @brief This method enables or disabled decoding and is enabled by default (Note: The only affects the HSMDecodeComponent)
 *
 * @param enable
 *	The enable state of the decoder
 *
 */
- (void) enableDecoding:(Boolean)enable;
/**
 * @brief This method returns the enable state of the decoder (Note: The only pertains to the state of the HSMDecodeComponent)
 *
 *
 * @return
 * 	The enable state of the decoder
 */
- (Boolean) isDecodingEnabled;
/**
 * @brief Get the last image that was sent to the decoder
 *
 * @return Returns the image
 */
- (UIImage*) getLastProcessedImage;
/**
 * @brief Get the last image that was decoded by the decoder
 *
 * @return Returns the image
 */
- (UIImage*) getLastDecodedImage;
/**
 * @brief Captures  Hi-Res coloured image if camera is open
 *
 * @param handler
 *  Returns the full color image with high resolution through completion handler
 *
 */
- (void)getHighResolutionImageWithCompletionHandler:(void (^)(UIImage *image))handler;
/**
 * @brief Get a cropped image of the last decoded barcode
 *
 * @param bounds
 *    An array that specifies the coordinates of the crop operation
 *
 * @return
 *     Returns the cropped image
 */
- (UIImage*) getLastBarcodeImage:(BarcodeBounds*)bounds;
/**
 * @brief Gets the full version details of the Decoder
 *
 * @return
 * 	A string containing  decoder and SDK version information
 */
- (NSString*) getFullDecoderVersion;
/**
 * @brief Gets the current version of the Decoder
 *
 * @return
 *     A string containing the decoder version information
 */
- (NSString*) getDecoderVersion;
/**
 * @brief Gets the current version of the SwiftDecoder SDK
 *
 * @return
 *     A string containing the decoder SDK version information
 */
- (NSString*) getAPIVersion;
/**
 *  @brief This call will result in the real-time camera preview activity to be displayed and the decoding routine to start.
 *
 *  @param context
 *  reference to the active UIViewController
 *
 */
- (void) scanBarcode:(UIViewController*)context;
/**
 * @brief Enables a specified symbology for decoding
 *
 * @param symbology
 * 	A symbology to enable
 *
 * @return
 *  Boolean If the symbology was enabled or not
 */
- (Boolean) enableSymbology:(int)symbology;
/**
 * @brief Enables specified symbologies for decoding
 *
 * @param symbologies
 *  An array of symbologies to enable (symbology object would be enum of Symbology type)
 *
 */
- (void) enableSymbologies:(NSArray *) symbologies;
/**
 * @brief Disables a specified symbology from decoding
 *
 * @param symbology
 * 	A symbology to disable
 *
 * @return
 *  Boolean If the symbology was disabled or not
 */
- (Boolean) disableSymbology:(int)symbology;
/**
 * @brief Disables specified symbologies from decoding
 *
 * @param symbologies
 *  An array of symbologies to disable (symbology object would be enum of Symbology type)
 *
 */
- (void) disableSymbologies:(NSArray *) symbologies;
/**
 * @brief Checks if a specified symbology is enabled
 *
 * @param symbology
 * 	The symbology in question
 *
 * @return
 *  Boolean If the symbology was enabled or not
 */
- (Boolean) isSymbologyEnabled:(int)symbology;
/**
 * @brief Sets the OCR user template
 *
 * @param userTemplate
 *  The OCR template used in USER mode. Please refer OEM-API-OCR-UG Rev A.PDF on how to set the user template.
 *
 * @return
 *  Boolean The success of the operation
 */
- (Boolean) setOCRUserTemplate:(Byte*)userTemplate;
/**
 * @brief Sets the Active OCR Template
 *
 * @param activeTemplate
 *  The active OCR template
 *
 * @return
 *  Boolean The success of the operation
 */
- (Boolean) setOCRActiveTemplate:(OCRActiveTemplate)activeTemplate;
/**
 *  @brief Immediately turns on/off the camera flash (if the device supports it)
 *
 *  @param enable
 *   Enable or disable flash
 *
 */
- (void) toggleFlash:(Boolean)enable;
/**
 *  @brief Immediately turns on the camera flash (if the device supports it) with the specified intensity
 *
 *  @param flashIntensity
 *   The brightness of the flash (must be between 0.0 and 1.0)
 *
 */
- (void) toggleFlashOnWithIntensity:(float)flashIntensity;
/**
 *  @brief gets the current state of the camera flash (if the device supports it)
 *
 *  @return
 *   flash state
 */
- (Boolean) isFlashToggled;

/// @brief This method enables vibration when a barcode is successfully decoded.
/// @param enable The state of vibration
-(void) enableVibration:(Boolean)enable;

/// @brief This mehod enable vibration with different style, such as Light, Medium, Heavy
/// @param style A VibrateStyle value.
-(void) enableVibrationOnWithStyle:(VibrateStyle)style;

/// @brief This methoad queries the state of the vibration
/// @return Booleam
-(Boolean) isVibrarionEnabled;

/// @brief Thie method queries the current style of vibration
/// @return VibrateStyle
-(VibrateStyle)getVibrationStyle;
/**
 *  @brief Windowing allows you to define a specific region within the image that will be decoded
 *
 * 	@param windowMode
 *   This specifies the type of windowing that will be used
 *
 */
- (void) setWindowMode:(WindowMode)windowMode;
/**
 *  @brief Gets the current Windowing mode
 *
 *  @return
 *   Returns the Windowing mode that is currently set
 */
- (WindowMode) getWindowMode;
/**
 *  @brief This allows you to define a subset of the image to decode.  Only barcodes found within the defined region will be decoded. Note: These bounds are relative to the position of the camera sensor.  Most devices have their camera sensor mounted in landscape mode so left=50, right=100, top=0, bottom=50 would mean the upper right quadrant of the screen.
 *
 * 	@param left
 *   This defines the left bound of the window as a percentage of the entire image.  (e.g. 15 would indicate: .15 * imgWidth)
 *
 * 	@param right
 *   This defines the right bound of the window as a percentage of the entire image.  (e.g. 85 would indicate: .85 * imgWidth)
 *
 * 	@param top
 *   This defines the top bound of the window as a percentage of the entire image.  (e.g. 15 would indicate: .15 * imgHeight)
 *
 * 	@param bottom
 *   This defines the bottom bound of the window as a percentage of the entire image.  (e.g. 85 would indicate: .85 * imgHeight)
 *
 */
- (void) setWindowLeft:(int)left Right:(int)right Top:(int)top Bottom:(int)bottom;
/**
 *  @brief Gets the defined subset of the image to decode. Only barcodes found within the defined region will be decoded.
 *
 *  @return
 *   Returns bounds (as a percentage) of the subset of the image to decode.  The returned array is length 4 where {left, right, top, bottom}
 */
- (NSArray*) getWindow;
/**
 *  @brief This method allows you to get some of the more obscure settings within the decoder
 *
 * 	@param property
 *   The parameter to get
 *
 *  @return
 *   The result of the get operation
 */
- (int) getDecoderProperty:(int)property;
/**
 *  @brief This method allows you to set some of the more obscure settings within the decoder
 *
 * 	@param property
 *   The parameter to set
 *
 *	@param value
 *   The value passed to the specified parameter
 *
 *  @return
 *   The result of the set operation
 */
- (int) setDecoderProperty:(int)property Value:(int)value;

//default decoder plugin methods

/**
 * @brief This method adds an OnDecodeResultListener that will be notified of decode results.
 * Any class that wishes to receive results must implement OnDecodeResultListener
 *
 * @param resultListener
 *	The OnDecodeResultListener that will receive decode results on a decode event.
 *
 */
- (void) addOnResultListener:(id<DecodeResultListener>)resultListener;
/**
 * @brief This method removes an OnDecodeResultListener that will be notified of decode results.
 *
 * @param resultListener
 *	The OnDecodeResultListener that will be removed
 *
 */
- (void) removeOnResultListener:(id<DecodeResultListener>)resultListener;
/**
 * @brief Enables/disables an audible beep on a successful decode
 *
 * @param enable
 *  Enable or disable audio
 *
 */
- (void) enableSound:(Boolean)enable;
/**
 * @brief Enables/disables an aimer that will be displayed on the preview screen
 *
 * @param enable
 *  Enable or disable aimer
 *
 */
- (void) enableAimer:(Boolean)enable;
/**
 *  @brief Enables/disables the camera flash on a barcode scan attempt (if the device supports it)
 *
 *  @param enable
 *   Enable or disable flash
 *
 */
- (void) enableFlashOnDecode:(Boolean)enable;
/**
 *  @brief Enables/disables the camera flash on a barcode scan attempt (if the device supports it) with the specified flash intensity
 *
 *  @param flashIntensity
 *   The flash brightness (must be a value between 0.0 and 1.0)
 *
 */
- (void) enableFlashOnDecodeWithIntensity:(float)flashIntensity;
/**
 *  @brief Sets the color of the camera aimer graphic
 *
 *  @param color
 *   The desired color value of the aimer graphic (ex. Color.Red)
 *
 */
- (void) setAimerColor:(UIColor*)color;
/**
 *  @brief Sets the color of the camera aimer graphic
 *
 *	@param red
 *	 The desired RGB red component color value of the aimer graphic
 *
 *	@param blue
 *	 The desired RGB blue component color value of the aimer graphic
 *
 *	@param green
 *	 The desired RGB green component color value of the aimer graphic
 *
 */
- (void) setAimerColorRed:(int)red Blue:(int)blue Green:(int)green;
/**
 *  @brief Sets the text of the overlay on the camera preview screen
 *
 *  @param text
 *    The desired text
 *
 */
- (void) setOverlayText:(NSString*)text;
/**
 *  @brief Sets the color of the text overlay
 *
 *  @param color
 *   The desired color value of the text overlay (ex. Color.Red)
 *
 */
- (void) setOverlayTextColor:(UIColor*)color;
/**
 *  @brief Sets the color of the text overlay
 *
 * 	@param red
 *   The desired RGB red component color value of the text overlay
 *
 *	@param blue
 *   The desired RGB blue component color value of the text overlay
 *
 *	@param green
 *   The desired RGB green component color value of the text overlay
 *
 */
- (void) setOverlayTextColorRed:(int)red Blue:(int)blue Green:(int)green;

//plugin management methods

/**
 * @brief This method registers a SwiftMobile plug-in to be used during a barcode scan operation.  SwiftMobile plug-ins are designed to work on a particular type of data and can render their own User Interface.  There are several plug-ins available within SwiftMobile, however, 3rd party plug-ins can be used as well by extending the SwiftMobile class. See the SwiftMobile plug-in documentation for further help.
 *
 * @param plugin
 *	Specifies the SwiftMobile instance to register
 *
 */
- (void) registerPlugin:(SwiftPlugin*)plugin;

-(NSMutableArray *) getLoadedPlugins;

/**
 * @brief This method unregisters a SwiftMobile plug-in from the system.  SwiftMobile plug-ins are designed to work on a particular type of data and can render their own User Interface.  There are several plug-ins available within SwiftMobile, however, 3rd party plug-ins can be used as well by extending the SwiftMobile class. See the Data Cognition plug-in documentation for further help.
 *
 * @param plugin
 *	Specifies the SwiftMobile instance to unregister
 *
 */
- (void) unRegisterPlugin:(SwiftPlugin*)plugin;

/**
 * @brief This method allows you to manually release the connection to the camera.  The camera will be automatically reconnected when scanBarcode is called
 *
 */
- (void) releaseCameraConnection;

/**
 * @brief This method allows you to manually initialize/open and default the camera connection
 *
 */
- (void) initCameraConnection;

/**
 * @brief This method controls whether or not the camera stays initialized between decode attempts. Setting this to false will cause the camera to be released after each decode. This means that it will also need to be re-initialized each time as well which will degrade overall decode time.  If set to true, the camera will be kept initialized for the life of the HSMDecoder object. This will result in some CPU usage when not decoding.  Developers must weigh which is more important, speed to decode or power conservation.
 *
 * @param enable
 *	Determines whether or not the camera will stay initialized between decode attempts
 *
 */
- (void) keepCameraInitialized:(Boolean)enable;

/**
 * @brief This method returns whether or not the front camera is currently active.
 *
 * @return
 *  True if front camera is active and false otherwise.
 */
- (BOOL) isFrontCameraActive;


/// @brief The method allow you dump the current decoder settings to a file that can help you debug
/// @param path The path where to write the dump settings files.
- (Boolean) saveDecoderSettings:(NSString *)path;

/**
 * @brief Accept Image  and returns the barcode results
 *
 * @param image
 *     Barcode Image to be decoded
 *
 * @return
 *   An array of Barcode data
 */
- (HSMDecodeResultArray*) decodeImage:(UIImage *)image;

/**
 * @brief This method returns the zoom ratio of the camera.
 *
 * @return
 *  Zoom Ratio of camera.
 */
-(CGFloat) getZoomRatio;

/**
 *  @brief Sets the zoom ratio of camera
 *
 *  @param zoomRatio
 *   The desired value of the zoom ratio (>=1.0)
 *
 */
-(void) setZoomRatio: (CGFloat)zoomRatio;

/**
 *  @brief This call will result in the real-time camera preview activity to be displayed and the decoding routine to start  with freeze mode(applicable only for AR plugin) .
 *
 *  @param context
 *  reference to the active UIViewController
 *
 */
- (void) scanBarcodeInFreezeMode:(UIViewController*)context;
/**
 *  @brief This method returns whether or not the freeze  mode is on.
 *
 *  @return
 *    True if freeze mode is on and false otherwise.
 */
- (BOOL) isFreezeMode;

/**
 * @brief This method adds an FreezeFrameListener that will be notified of freeze frame status.
 * Any class that wishes to receive results must implement FreezeFrameListener
 *
 * @param object
 *    The FreezeFrameListener that will receive freeze frame status  on a double tap event.
 */
- (void) registerFreezeFrameCallBack:(id<FreezeFrameListener>)object;
/**
 * @brief This method returns an FreezeFrameListener
 *
 *  @return
 *    an FreezeFrameListener.
 */
- (NSArray<FreezeFrameListener>*)getFreezeFrameListener;
/**
 *  @brief set codabar length for comparision to handle result
 *
 *  @param codabarLength
 *  arraylist containing maximum 4 values. Example  3,7,10,12.
 *
 *  @return
 *  1 if the length is set. -1 if the Array is null or size is greater than 4
 */
-(int)setCodabarLength:(NSArray*)codabarLength;
/**
 * @brief returns codabarLength array that was set
 *
 * @return  ArrayList of the set length
 */
-(NSArray*)getCodabarLength;

- (NSString*)getSymbologyString:(int)symb SymbEx:(int)symbEx;

/**
 * @brief Allows to set the required camera resolution while scanning.If not set by default will be set
 *          to AUTO mode.
 * @param resolution Resolution value that needs to be set
 * @return True if the passed resolution is set successfully
 *           False if any issue while setting the resolution. Also false will be returned if trying to set
 *           MAX_DOF but not suppoted on the activated License.
 *
 */
-(BOOL)setCameraResolution:(Resolution)resolution;
/**
 * @brief Returns the supported Camera Resolutions used for decode component scanning.
 *         To be called after license activation.
 *
 * @return Array list of Supported Resolution. Other than Auto Resolutions would only be returned
 *           if there is valid microservice on the license.
 */
-(NSArray*)getCameraResolution;

/**
 * @brief Allows to fetch the current camera resolution that is being set for scanning
 * @return Current resolution that is being set.
 *           If returned value is NONE_RESOLUTION then there would be some issue on the resolution setting.
 *           Try setting the required resolution using @setCameraResolution.
 */
-(Resolution)getCurrentCameraResolution;


/**
 * @brief this method returns Resolution in string for a Camera Resolution (pass raw value of enum Resolution)
 * @param resolution Resolution raw value
 * @return Camera resolution in string format
 *
 */

-(NSString*)getStringForCameraResolution:(int)resolution;

/**
 * @brief this method returns Resolution for a camera string returned from method getStringForCameraResolution
 * @param resolutionStr Resolution string
 * @return Camera resolution
 *
 */
-(Resolution)getCameraResolutionForString:(NSString*)resolutionStr;

/**
 * @brief Enables Undecoded Barcode  ROI's Detection as part of HSMDecodeResult.
 *             Once enabled the AR features Preview Select and Batch will render separate
 *             overlay for Undecoded Barcodes    ROI's
 * @return Boolean on Successful enable of this feature
 */
-(BOOL)enableUndecodedBarcodeDetection;

/**
 * @brief Disbales Undecoded Barcode ROI's Detection.
 */
-(void) disableUndecodedBarcodeDetection;
@end
