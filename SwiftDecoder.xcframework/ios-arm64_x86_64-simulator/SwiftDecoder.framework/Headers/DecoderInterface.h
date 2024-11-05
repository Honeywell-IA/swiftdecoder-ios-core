/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//======================================================================================
// DecoderInterface.h
//======================================================================================
// $Source: DecoderInterface.h $
// $Revision: 93 $
// $Date: 2010/06/19 14:19:03EDT $
// $Author: Deloge,Stephen (E412317) $
//======================================================================================

//======================================================================================




//---------------------------------------------------------------------------
//
//  Module Interface Description:
//      This file contains the interface definitions to create and interact with
//		the decoder(s). This module will create separate decoder threads for each
//		decoder it will interact with.
//
//---------------------------------------------------------------------------

/* Copyright 2009, Honeywell.  All Rights Reserved */

#ifndef _DECODER_INTERFACE_H
#define _DECODER_INTERFACE_H

/* Preamble */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

//Include the settings that apply to only the decoder that is built in.
//#ifdef SWIFT_SOLO
#include "SwiftSettings.h"
//#else
//#include "AdaptusSettings.h"
//#endif
#include "DecoderSettings.h"	// architecturally felt necessary to separate properties and API, perhaps apply always

/* Decoder Structures
 *	These are the structures by the decoder.
 */
typedef enum {
	CB_PRINTF,
	CB_TIMER,
	CB_RESULT,
	CB_RESULT_NOTIFY,
	CB_WATCHDOG,
	CB_STATUS,
	CB_PROGRESS
} CallbackTag;

typedef struct {
	int x;
	int y;
} Point_tag;

typedef struct {
	Point_tag corners[4];
} Bounds;

typedef struct {
	Bounds bounds;
	int d_corner;
	int pdfRows;
	int pdfCols;
} IQImageInfo_t;

typedef struct {
	int frameID;
	int line;
	int state;
} CircluarBufferState;

typedef enum {
	DEC_TYPE_FAST = 0,
	DEC_TYPE_FULL = 1
} DecodeType_t;

typedef struct {
	unsigned char Data[MAX_DECODED_DATA_LENGTH];
	int Length;
	Bounds MainBounds;
	Point_tag GraphicalCenter;
	unsigned int Symbology;
	unsigned int SymbologyEx;
	int Modifier;
	int ModifierEx;
	char CodeID;
	char AIMCodeLetter;
	char AIMModifier;
	IQImageInfo_t IQImageInfo;
	int Parity;
	int AppendType;
	int AppendIndex;
	int AppendTotal;
	int LinkFlag;
	int ProgrammingCode;
	DecodeType_t DecodeType;
} DecoderResult;

/* Decoder Functions
 *	These are the functions used to communicate to the decoder.
 */

int InitDecoder( int width, int height, int wrap );
void DestroyDecoder( void );

void ReportDecoderVersion( int type, char *reportString );

int InstallCallback( /*Callback*/ unsigned int tag, void *function );

int Decode( void *image, int decodeType );
int StopDecode(void);
int ContinueDecode(void);
int PauseDecode(void);

int DecodeGet( unsigned int tag, void *data );
int DecodeSet( unsigned int tag, void *data );
void DecodeReset( void );

int GetLastDecoderError(void); //doesn't do anything, need to define how this will work.

/*
	Temperature -- measure of how far along decoder is, not sure how to make portable
*/
 #define COLD 2    // Just searching for symbols
 #define LUKEWARM 5   // Evidence of a particular symbol has been found
 #define WARM 8    // The type of symbol has been confirmed; Data is being collected
 #define HOT 16    // Data capture has been successful at some level, with more to go
 #define COOKED 48 //  A fully valid read has occurred; putting on finishing touches


/* Debug
 *
 * These are the constants to dig into a specific level of the interface. Used only for debug set/get purposes for now.
 * They are what is passed into the "level" parameter of the debug functions below.
 */

#define DECODER_INTERFACE		0xDEC0
#define SWIFT_INTERFACE			0xDEC1
#define SWIFT_DECODER			0xDEC2
#define RAPIDSCAN_INTERFACE		0xDEC3
#define RAPIDSCAN_DECODER		0xDEC4

int DecodeGetDebug( unsigned int level, unsigned int tag, void *data );
int DecodeSetDebug( unsigned int level, unsigned int tag, void *data );

/* Postamble */
#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif //_DECODER_INTERFACE_H

//======================================================================================
//$Log: DecoderInterface.h  $
//Revision 1.32.1.3 2010/06/19 14:19:03EDT Deloge,Stephen (E412317)
//Added Temperature Stuff mostly as placeholder
//Revision 1.32.1.2 2010/06/19 10:54:33EDT Deloge,Stephen (E412317)
//Relocated settings to unique file because they will be included at mulitple levels in PDT build.
//Likely a change worth considering globally, but done in variant for now.
//Revision 1.32 2010/06/02 16:04:57EDT McGovern,Matt (E412472)
//Added error codes. Same codes as sd.h, will add more for logic level.
//Revision 1.31 2010/05/25 00:20:47EDT McGovern,Matt (E412472)
//Removed ProgrammingFlag from decoderresult struct. Apparently that was the original flag, but in version 1.8
//of this file, i added ProgrammingCode, which is used throughout the logic and the system, so I'm just sticking with
//that.
//Revision 1.30 2010/05/10 12:57:20EDT Meier,Timothy (E412415)
//New function headers for ContinueDecoding and PauseDecoding
//Revision 1.29 2010/03/26 14:45:32EST McGovern,Matt (E412472)
//Added more macros for AIM and Code IDs.
//Revision 1.28 2010/03/18 14:37:04EDT Meier,Timothy (E412415)
//Added support for the enabling of CANENA2 which will allow the bar output for Canadian post instead
//  of the actual bar code data.  This is to be matched up with ID 9.15.
//Revision 1.27 2010/03/17 15:18:13EST McGovern,Matt (E412472)
//Hooked up mirror image setting.
//Revision 1.26 2010/03/04 23:53:31EST McGovern,Matt (E412472)
//Added new debug set/get in order to get/set variables at different levels. At the beginning stages of development.
//In its current form, you can only really get/set into the swift decoder directly. DECSET can still be used
//in its original form controling things from the outside using non-debug functions.
//Revision 1.25 2010/02/18 04:28:15EST McGovern,Matt (E412472)
//Moved get energy from adaptus to common decoder to use with Rapidscan.
//Revision 1.24 2010/02/18 03:26:59EST McGovern,Matt (E412472)
//Moved Security Level setting from adaptus only to common decoder since it does apply to Rapidscan.
//Revision 1.23 2010/02/15 14:16:15EST McGovern,Matt (E412472)
//Changed symbology variables in decoder struct to unsigned ints to remove compile warning.
//Revision 1.22 2010/02/15 13:56:36EST McGovern,Matt (E412472)
//Added canadian post option to the postal options table.
//Revision 1.21 2010/02/09 15:23:54EST McGovern,Matt (E412472)
//Changed korea post check digit required to check digit transmit since it's always required.
//Revision 1.20 2010/02/04 16:15:00EST McGovern,Matt (E412472)
//Changed version reporting function to have a type parameter, so it can get just any combination of the control logic,
//fast decoder, and full decoder revisions.
//Revision 1.19 2010/02/03 01:12:54EST McGovern,Matt (E412472)
//Added a DEC_HALT flag. used for length checking on composites.
//Revision 1.18 2010/01/22 14:15:12EST Meier,Timothy (E412415)
//DEC_IMAGE_CENTER_X and DEC_IMAGE_CENTER_Y now part of DecodeInterface instead of AdaptusSettings, because
//  it can be used with ID as well.
//Revision 1.17 2010/01/22 10:19:37EST McGovern,Matt (E412472) 
//Added GraphicalCenter point to result structure.
//Revision 1.16 2010/01/22 05:02:38EST McGovern,Matt (E412472) 
//Moved decode in window settings to the common decoder.
//Revision 1.15 2010/01/21 16:12:33EST McGovern,Matt (E412472) 
//Removed a whole ton of comments about the status of certain commands. Some still remain and will stay 
//until the comment is no longer valid. Added code 39 start/stop and base 32 settings.
//Revision 1.14 2010/01/18 16:12:37EST McGovern,Matt (e412472) 
//Added image height,width,wrap settings.
//Revision 1.13 2010/01/14 03:15:10EST McGovern, Matthew (e412472) 
//Removed some comments saying the OCR was not implemented, since it is now. 
//Revision 1.12 2009/12/17 16:34:49EST McGovern, Matthew (e412472) 
//Removed depricated tags. Added postal enable tag. Added AIM, HHP, and Swift constants.
//Added comments to each tag describing it's state, Most likely these are already out of date so please
//do not refer to them. I mention it only to describe the amount of change to most of the tags. 
//Revision 1.11 2009/12/03 13:15:53EST McGovern, Matthew (e412472) 
//Added a COMBINE_COMPOSITES tag. Changed DecodeGet() to return an int.
//Revision 1.10 2009/11/30 17:56:18EST McGovern, Matthew (e412472) 
//Changed the IQImageInfo corners to be "bounds", since Bounds are defined as 4 corners.
//Revision 1.9 2009/11/25 16:13:02EST McGovern, Matthew (e412472) 
//Added security level tag and fast/full decoder enable tags. Removed supplemental stuff from structure.
//Added decodeType to structure and Decode().
//Revision 1.8 2009/11/17 17:50:55EST McGovern, Matthew (e412472) 
//Redid all of the tag values so they have some order and structure. Removed many commands and placed
//then in separate files if they were valid only with a specific decoder. Also added ProgrammingCode value
//so the decode result structure.
//Revision 1.7 2009/11/12 17:27:32EST McGovern, Matthew (e412472) 
//Removed the quick addition of DEC_ID tags.
//Revision 1.6 2009/11/11 18:11:23EST McGovern, Matthew (e412472) 
//Added ID_prop settings. Can be changed/seen with DECSET only for now. 
//Revision 1.5 2009/11/11 17:39:47EST McGovern, Matthew (e412472) 
//Changed some tags. 
//Revision 1.4 2009/10/29 15:23:02EDT McGovern, Matthew (e412472) 
//Added new ID MLD settings. 
//Revision 1.3 2009/10/09 12:04:22EDT McGovern, Matthew (e412472) 
//Again, too many changed to capture here. This interface is very much in development, and
//there was a change to the development points. This is to capture a workign version now and
//test with something known. 
//Revision 1.2 2009/09/22 10:04:28EDT McGovern, Matthew (e412472) 
//Added DEC_ prefix to each config tag in order to keep mxapi.h tags as they were for the 
//sake of previous version testing. 
//Revision 1.1 2009/09/16 18:34:20EDT McGovern, Matthew (e412472) 
//Initial revision
//Member added to project d:/MKS_IT/Matrix/DecoderController/SharedDecCtrlIncl.pj
//======================================================================================
