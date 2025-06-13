/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//======================================================================================
// SwiftSettings.h
//======================================================================================
// $Source: SwiftSettings.h $
// $Revision: 93 $
// $Date: 2010/05/10 12:57:44EDT $
// $Author: Meier,Timothy (E412415) $
//======================================================================================

//======================================================================================




//---------------------------------------------------------------------------
//
//  Module Interface Description:
//      This file contains the configurable settings that apply only when the Swift decoder
//		is used. 
//
//---------------------------------------------------------------------------

/* Copyright 2009, Honeywell.  All Rights Reserved */

#ifndef _SWIFT_SETTINGS_H
#define _SWIFT_SETTINGS_H

/* Preamble */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Decoder Menu Types 
 *	These are the expected type for each command. They are embedded in the menu tag so 
 *	the user knows what type of information to pass into the menu function
 */
#define MENU_TYPE_INT		0x10000000
#define MENU_TYPE_STRING	0x20000000
#define MENU_TYPE_BITFIELD	0x40000000
#define MENU_TYPE_MASK		0xF0000000


/* System Control Settings
 *	These settings are general decoder control. 
 */
 
// Basic
#define DEC_BLACK_LEVEL							(MENU_TYPE_INT + 0x0B001001)
#define DEC_OPERATING_MODE						(MENU_TYPE_INT + 0x0B001002)
#define DEC_TYPICAL_IMAGE_DENSITY				(MENU_TYPE_INT + 0x0B001003)
#define DEC_SUBREGION_PROCESSING				(MENU_TYPE_INT + 0x0B001004)
#define DEC_LINE_DELTA							(MENU_TYPE_INT + 0x0B001005)

// Advanced
#define DEC_CELL_PHONE_IMPROVEMENTS				(MENU_TYPE_INT + 0x0B001005)
#define DEC_ECI_HANDLING						(MENU_TYPE_INT + 0x0B001006)
#define DEC_GENERAL_IMPROVEMENTS				(MENU_TYPE_INT + 0x0B001007)
#define DEC_ISSUE_IDENTICAL_SYMBOLS				(MENU_TYPE_INT + 0x0B001008)
#define DEC_ISSUE_IDENTICAL_SPACING				(MENU_TYPE_INT + 0x0B001009)
#define DEC_LOW_ASPECT_RATIO					(MENU_TYPE_INT + 0x0B00100A)
#define DEC_LOW_CONTRAST_IMPROVEMENTS			(MENU_TYPE_INT + 0x0B00100B)
#define DEC_MISENCODED_SYMBOLS					(MENU_TYPE_INT + 0x0B00100D)
#define DEC_PASS_THROUGH						(MENU_TYPE_INT + 0x0B00100E)
#define DEC_UNDECODABLE_SYMBOLS					(MENU_TYPE_INT + 0x0B00100F)
#define DEC_UNDECODABLE_SYMBOLS_EX				(MENU_TYPE_INT + 0x0B001010)

#define DEC_USE_DISTANCE_MAP					(MENU_TYPE_INT + 0x0B002001)
#define DEC_EDGE_DETECTOR						(MENU_TYPE_INT + 0x0B002002)
#define DEC_SUBPIXEL_FINDER						(MENU_TYPE_INT + 0x0B002003)
#define DEC_USE_SUBPIXEL_MLD					(MENU_TYPE_INT + 0x0B002004)
#define DEC_CYCLING_FINDER						(MENU_TYPE_INT + 0x0B002005)

	// Linear Specific
#define DEC_MIN_1D_HEIGHT						(MENU_TYPE_INT + 0x0B003001)
#define DEC_SUBREGION_HEIGHT					(MENU_TYPE_INT + 0x0B003002)
#define DEC_SUBREGION_LEFT						(MENU_TYPE_INT + 0x0B003003)
#define DEC_SUBREGION_TOP						(MENU_TYPE_INT + 0x0B003004)
#define DEC_SUBREGION_WIDTH						(MENU_TYPE_INT + 0x0B003005)

//AGC
#define DEC_AGC_EXPOSURE_QUALITY				(MENU_TYPE_INT + 0x0B003006)
#define DEC_AGC_NEXT_GAIN						(MENU_TYPE_INT + 0x0B003007)
#define DEC_AGC_SAMPLING_OPTIONS				(MENU_TYPE_INT + 0x0B003008)


/* Symbology Specific Settings
 *	These settings are specific for each symbology.
 */

/* Linear Symbologies */

//UPC-Misc
#define DEC_UPC_IMPROVE_BOUNDS					(MENU_TYPE_INT + 0x0B010001)
#define DEC_UPC_SHORT_MARGIN					(MENU_TYPE_INT + 0x0B010002)

//Code 128/GS1-128 Misc
#define DEC_C128_IMPROVE_BOUNDS					(MENU_TYPE_INT + 0x0B014001)
#define DEC_C128_PARTIAL						(MENU_TYPE_INT + 0x0B014002)
#define DEC_C128_SHORT_MARGIN					(MENU_TYPE_INT + 0x0B014003)
#define DEC_C128_SUPPRESS_CODABAR_CONFLICT		(MENU_TYPE_INT + 0x0B014004)

//Code 39
#define DEC_CODE39_IMPROVE_BOUNDS				(MENU_TYPE_INT + 0x0B016001)
#define DEC_CODE39_PARTIAL						(MENU_TYPE_INT + 0x0B016002)
#define DEC_CODE39_SHORT_MARGIN					(MENU_TYPE_INT + 0x0B016003)
#define DEC_CODE39_SUPPRESS_CODABAR_CONFLICT	(MENU_TYPE_INT + 0x0B016004)

//Trioptic
#define DEC_TRIOPTIC_SHORT_MARGIN				(MENU_TYPE_INT + 0x0B018001)

//Interleaved 2 of 5
#define DEC_I25_IMPROVE_BOUNDS					(MENU_TYPE_INT + 0x0B019001)
#define DEC_I25_PARTIAL							(MENU_TYPE_INT + 0x0B019002)
#define DEC_I25_SHORT_MARGIN					(MENU_TYPE_INT + 0x0B019003)

//Standard 2 of 5 (3 bar) - Industrial 2 of 5	
#define DEC_S25_IMPROVE_BOUNDS					(MENU_TYPE_INT + 0x0B01A001)

//IATA 2 of 5 (2 bar) - Airline 2 of 5
#define DEC_IATA25_IMPROVE_BOUNDS				(MENU_TYPE_INT + 0x0B01B001)

//Matrix 2 of 5
#define DEC_M25_IMPROVE_BOUNDS					(MENU_TYPE_INT + 0x0B01C001)

//NEC 2 of 5
#define DEC_NEC25_ENABLED						(MENU_TYPE_INT + 0x0B02F001)
#define DEC_NEC25_MIN_LENGTH					(MENU_TYPE_INT + 0x0B02F002)
#define DEC_NEC25_MAX_LENGTH					(MENU_TYPE_INT + 0x0B02F003)
#define DEC_NEC25_CHECK_DIGIT_MODE				(MENU_TYPE_INT + 0x0B02F004)
#define DEC_NEC25_IMPROVE_BOUNDS				(MENU_TYPE_INT + 0x0B02F005)

//Code 93
#define DEC_CODE93_IMPROVE_BOUNDS				(MENU_TYPE_INT + 0x0B01D001)
#define DEC_CODE93_SHORT_MARGIN					(MENU_TYPE_INT + 0x0B01D002)

//Code 11
#define DEC_CODE11_IMPROVE_BOUNDS				(MENU_TYPE_INT + 0x0B01E001)

//Codabar
#define DEC_CODABAR_IMPROVE_BOUNDS				(MENU_TYPE_INT + 0x0B01F001)
#define DEC_CODABAR_SHORT_MARGIN				(MENU_TYPE_INT + 0x0B01F002)

//Telepen
#define DEC_TELEPEN_IMPROVE_BOUNDS				(MENU_TYPE_INT + 0x0B020001)

//MSI
#define DEC_MSI_IMPROVE_BOUNDS					(MENU_TYPE_INT + 0x0B021001)


/* Stacked Linear Symbologies */

//Codablock A
#define DEC_CODABLOCK_A_ENABLED					(MENU_TYPE_INT + 0x0B030001)
#define DEC_CODABLOCK_A_MIN_LENGTH				(MENU_TYPE_INT + 0x0B030002)
#define DEC_CODABLOCK_A_MAX_LENGTH				(MENU_TYPE_INT + 0x0B030003)

//Micro PDF417
#define DEC_MICROPDF_IMPROVE_BOUNDS				(MENU_TYPE_INT + 0x0B025001)


/* Matrix 2D Symbologies */

//Aztec
#define DEC_AZTEC_SYMBOL_SIZE					(MENU_TYPE_INT + 0x0B027001)
//Maxicode
#define DEC_MAXICODE_SYMBOL_SIZE				(MENU_TYPE_INT + 0x0B028001)

//DataMatrix
#define DEC_DATAMATRIX_MIN_MODULE_COUNT			(MENU_TYPE_INT + 0x0B029001)
#define DEC_DATAMATRIX_MAX_MODULE_COUNT			(MENU_TYPE_INT + 0x0B029002)
#define DEC_DATAMATRIX_MIN_MODULE_SIZE			(MENU_TYPE_INT + 0x0B029003)
#define DEC_DATAMATRIX_MAX_MODULE_SIZE			(MENU_TYPE_INT + 0x0B029004)
#define DEC_DATAMATRIX_ORIENTATIONS				(MENU_TYPE_INT + 0x0B029005)
#define DEC_DATAMATRIX_BINARY_IMPROVEMENTS		(MENU_TYPE_INT + 0x0B029006)
#define DEC_DATAMATRIX_NON_SQUARE_MODULES		(MENU_TYPE_INT + 0x0B029007)
#define DEC_DATAMATRIX_SHIFTED_TILES			(MENU_TYPE_INT + 0x0B029008)
#define DEC_DATAMATRIX_LOW_CONTRAST				(MENU_TYPE_INT + 0x0B029009)
#define DEC_DATAMATRIX_SYMBOL_SIZE				(MENU_TYPE_INT + 0x0B02900A)
#define DEC_DATAMATRIX_RECTANGLE				0x40010402
#define DEC_DATAMATRIX_SUBREGION_HEIGHT			(MENU_TYPE_INT + 0x0B02900C)
#define DEC_DATAMATRIX_SUBREGION_LEFT			(MENU_TYPE_INT + 0x0B02900D)
#define DEC_DATAMATRIX_SUBREGION_TOP			(MENU_TYPE_INT + 0x0B02900E)
#define DEC_DATAMATRIX_SUBREGION_WIDTH			(MENU_TYPE_INT + 0x0B02900F)

//QR Code
#define DEC_QR_NON_SQUARE_MODULES				(MENU_TYPE_INT + 0x0B02A001)
#define DEC_QR_SYMBOL_SIZE						(MENU_TYPE_INT + 0x0B02A002)

//HongKong 2of5 - aka China Post
#define DEC_HK25_IMPROVE_BOUNDS					(MENU_TYPE_INT + 0x0A02C004)

//Pharmacode
#define DEC_PHARMACODE_ENABLED					(MENU_TYPE_INT + 0x0B02E001)
#define DEC_PHARMACODE_MIN_LENGTH				(MENU_TYPE_INT + 0x0B02E002)
#define DEC_PHARMACODE_MAX_LENGTH				(MENU_TYPE_INT + 0x0B02E003)
#define DEC_PHARMACODE_MIN_BAR_COUNT			(MENU_TYPE_INT + 0x0B02E004)
#define DEC_PHARMACODE_MAX_BAR_COUNT			(MENU_TYPE_INT + 0x0B02E005)
#define DEC_PHARMACODE_COLOR_BARS				(MENU_TYPE_INT + 0x0B02E006)
#define DEC_PHARMACODE_ORIENTATION				(MENU_TYPE_INT + 0x0B02E007)
#define DEC_PHARMACODE_REVERSE					(MENU_TYPE_INT + 0x0B02E008)

//Go Code
#define DEC_GOCODE_ENABLED						(MENU_TYPE_INT + 0x0B031001)


/* Postal Symbologies */

//Misc Postal - applies to all postal symbologies
#define DEC_POSTAL_MIN_BAR_COUNT				(MENU_TYPE_INT + 0x0B200001)
#define DEC_POSTAL_MAX_BAR_COUNT				(MENU_TYPE_INT + 0x0B200002)
#define DEC_POSTAL_ORIENTATIONS					(MENU_TYPE_INT + 0x0B200003)
#define DEC_POSTAL_SUBREGION_HEIGHT				(MENU_TYPE_INT + 0x0B200004)
#define DEC_POSTAL_SUBREGION_LEFT				(MENU_TYPE_INT + 0x0B200005)
#define DEC_POSTAL_SUBREGION_TOP				(MENU_TYPE_INT + 0x0B200006)
#define DEC_POSTAL_SUBREGION_WIDTH				(MENU_TYPE_INT + 0x0B200007)
#define DEC_POSTAL_UNDECODABLE_HEIGHT			(MENU_TYPE_INT + 0x0B200008)
#define DEC_POSTAL_UNDECODABLE_LEFT				(MENU_TYPE_INT + 0x0B200009)
#define DEC_POSTAL_UNDECODABLE_TOP				(MENU_TYPE_INT + 0x0B20000A)
#define DEC_POSTAL_UNDECODABLE_WIDTH			(MENU_TYPE_INT + 0x0B20000B)

#define DEC_OCR_ACTIVE_TEMPLATES				(MENU_TYPE_INT + 0x0B02D003) 

/* Postamble */
#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif //_SWIFT_SETTINGS_H

//======================================================================================
//$Log: SwiftSettings.h  $
//Revision 1.5 2010/05/10 12:57:44EDT Meier,Timothy (E412415) 
//New Swift property for configuring the cycling finder in ID
//Revision 1.4 2010/01/19 11:38:30EST Meier,Timothy (E412415) 
//New define for Aztec symbol size configuration
//Revision 1.3 2010/01/14 03:15:35EST McGovern, Matthew (e412472) 
//Added OCR_ACTIVE_TEMPLATES tag
//Revision 1.2 2009/11/17 17:49:38EST McGovern, Matthew (e412472) 
//Added missing command.
//Revision 1.1 2009/11/13 16:53:36EST McGovern, Matthew (e412472) 
//Initial revision
//Member added to project d:/MKS_IT/Gen6FoundationApp/Gen6FoundationApp/libraries/DecoderLib/SharedDecCtrlIncl.pj
//======================================================================================
