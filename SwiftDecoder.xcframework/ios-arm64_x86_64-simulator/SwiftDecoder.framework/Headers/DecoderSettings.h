//======================================================================================
// DecoderSettings.h
//======================================================================================
 
//---------------------------------------------------------------------------
//
//  Module Interface Description:
//      This file contains the settings / properties for the generic decoder 
//
//---------------------------------------------------------------------------

/* Copyright 2009, Honeywell.  All Rights Reserved */

#ifndef _DECODER_SETTINGS_H
#define _DECODER_SETTINGS_H

/* Preamble */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Decoder Menu Types 
 *	These are the expected type for each command. They are embedded in the menu tag so 
 *	the user knows what type of information to pass into the menu function
 */
#define MENU_TYPE_INT		0x10000000 //single integer
#define MENU_TYPE_CHAR		0x20000000 //single ASCII char
#define MENU_TYPE_ARRAY		0x80000000 //used in conjunction with INT or CHAR
#define MENU_TYPE_MASK		0xF0000000 //mask that can be used by software to determine types.


/* System Control Settings
 *	These settings are general decoder control. 
 */
 
// Basic
#define DEC_DECODE_VIGOR						(MENU_TYPE_INT + 0x0A001001)
#define DEC_IQ_FILTER_MODE						(MENU_TYPE_INT + 0x0A001002) //need to pull inside decoder, also need to check Rapid energy
#define DEC_VIDEO_REVERSE_ENABLED				(MENU_TYPE_INT + 0x0A001004)
#define DEC_SHOW_NO_READ_ENABLED				(MENU_TYPE_INT + 0x0A001005) //still done in system
#define DEC_SHOW_DECODE_DEBUG					(MENU_TYPE_INT + 0x0A001006) //need to find functionality and port (if possible)
#define DEC_COMBINE_COMPOSITES					(MENU_TYPE_INT + 0x0A001007)
#define DEC_IMAGE_HEIGHT						(MENU_TYPE_INT + 0x0A001008)
#define DEC_IMAGE_WIDTH							(MENU_TYPE_INT + 0x0A001009)
#define DEC_IMAGE_LINE_DELTA					(MENU_TYPE_INT + 0x0A00100A) //wrap
#define DEC_WINDOW_MODE							(MENU_TYPE_INT + 0x0A00100B)
#define DEC_WINDOW_TOP							(MENU_TYPE_INT + 0x0A00100C)
#define DEC_WINDOW_BOTTOM						(MENU_TYPE_INT + 0x0A00100D)
#define DEC_WINDOW_LEFT							(MENU_TYPE_INT + 0x0A00100E)
#define DEC_WINDOW_RIGHT						(MENU_TYPE_INT + 0x0A00100F)
#define DEC_WINDOWING_OFF						0
#define DEC_WINDOWING_ON						2
#define DEC_WINDOWING_ON_INSIDE_ONLY			3
#define DEC_IMAGE_CENTER_X						(MENU_TYPE_INT + 0x0A001011)
#define DEC_IMAGE_CENTER_Y						(MENU_TYPE_INT + 0x0A001012)
#define DEC_GET_ENERGY							(MENU_TYPE_INT + 0x0A001013)
#define DEC_IMAGE_MIRRORED						(MENU_TYPE_BITFIELD + 0x00004003)

#define DEC_USE_MLD								(MENU_TYPE_INT + 0x0A002001) //Check with tim to make sure this works
#define DEC_SECURITY_LEVEL						(MENU_TYPE_INT + 0x0A002002) 

// Timing
#define DEC_DECODE_TIMING_CONTROL				(MENU_TYPE_INT + 0x0A003001) //Don't think this doesn anything with ID
#define DEC_DECODE_TIME							(MENU_TYPE_INT + 0x0A003002) //For now, not handled inside
#define DEC_SEARCH_TIME							(MENU_TYPE_INT + 0x0A003003) //For now, not handled inside
#define DEC_ADD_SEARCH_TIME_ADDENDA				(MENU_TYPE_INT + 0x0A003004) 
#define DEC_ADD_SEARCH_TIME_CONCAT				(MENU_TYPE_INT + 0x0A003005) 
#define DEC_ADD_SEARCH_TIME_UPC_COMPOSITE		(MENU_TYPE_INT + 0x0A003006) //VERIFY: timing is in there, need to check what Swift does with UPC composite

// Customer Specific - special code build for adaptus, not sure for swift
//#define DEC_DEPT_OF_AGG_CHINA_MODE				(MENU_TYPE_INT + 0x0A004001)

//Misc Commands
#define DEC_PRINT_RESULTS						(MENU_TYPE_INT + 0x0A005001) 
#define DEC_DUMP_SETTINGS						(MENU_TYPE_INT + 0x0A005002) //not implemented
#define DEC_DISPLAY_DATA						(MENU_TYPE_INT + 0x0A005003) //possibly remove, depends on how dump settings is implemented
#define DEC_RESET_DECODER						(MENU_TYPE_INT + 0x0A005004) //Hooked to local menu settings at the moment, need to define if this is that or if we need this at all
#define DEC_FAST_DECODER_ENABLED				(MENU_TYPE_INT + 0x0A005005) 
#define DEC_FULL_DECODER_ENABLED				(MENU_TYPE_INT + 0x0A005006) 

//UPC-Misc
#define DEC_COUPON_CODE_MODE					(MENU_TYPE_INT + 0x0A006001) 
#define DEC_EANUCC_EMULATION_MODE				(MENU_TYPE_INT + 0x0A006002) 
//#define DEC_COUPON_SECONDARY_OUTPUT				(MENU_TYPE_INT + 0x0A006003) 
#define DEC_COMBINE_COUPON_CODES				(MENU_TYPE_INT + 0x0A006004) 

//Color / Misc
#define DEC_MONOCOLOR_ENABLED					(MENU_TYPE_INT + 0x0A007001) // enable appreciation / interpolation for monocolor image

/* Symbology Specific Settings
 *	These settings are specific for each symbology.
 */

/* Linear Symbologies */

//UPC-A
#define DEC_UPCA_ENABLED						(MENU_TYPE_INT + 0x0A010011)
#define DEC_UPCA_TRANSLATE_TO_EAN13             (MENU_TYPE_INT + 0x0A010001)

#define DEC_UPCA_CHECK_DIGIT_TRANSMIT			(MENU_TYPE_INT + 0x0A010002) 
#define DEC_UPCA_NUMBER_SYSTEM_TRANSMIT			(MENU_TYPE_INT + 0x0A010003) 
#define DEC_UPCA_2CHAR_ADDENDA_ENABLED			(MENU_TYPE_INT + 0x0A010004) 
#define DEC_UPCA_5CHAR_ADDENDA_ENABLED			(MENU_TYPE_INT + 0x0A010005) 
#define DEC_UPCA_ADDENDA_REQUIRED				(MENU_TYPE_INT + 0x0A010006) 
#define DEC_UPCA_ADDENDA_SEPARATOR				(MENU_TYPE_INT + 0x0A010007) 



//UPC-E
#define DEC_UPCE0_ENABLED						(MENU_TYPE_INT + 0x0A011001) 
#define DEC_UPCE1_ENABLED						(MENU_TYPE_INT + 0x0A011002) 
#define DEC_UPCE_EXPAND							(MENU_TYPE_INT + 0x0A011003) 
#define DEC_UPCE_CHECK_DIGIT_TRANSMIT			(MENU_TYPE_INT + 0x0A011004) 
#define DEC_UPCE_NUMBER_SYSTEM_TRANSMIT			(MENU_TYPE_INT + 0x0A011005) 
#define DEC_UPCE_2CHAR_ADDENDA_ENABLED			(MENU_TYPE_INT + 0x0A011006) 
#define DEC_UPCE_5CHAR_ADDENDA_ENABLED			(MENU_TYPE_INT + 0x0A011007) 
#define DEC_UPCE_ADDENDA_REQUIRED				(MENU_TYPE_INT + 0x0A011008) 
#define DEC_UPCE_ADDENDA_SEPARATOR				(MENU_TYPE_INT + 0x0A011009) 

//EAN-8
#define DEC_EAN8_ENABLED						(MENU_TYPE_INT + 0x0A012001) 
#define DEC_EAN8_CHECK_DIGIT_TRANSMIT			(MENU_TYPE_INT + 0x0A012002) 
#define DEC_EAN8_2CHAR_ADDENDA_ENABLED			(MENU_TYPE_INT + 0x0A012003) 
#define DEC_EAN8_5CHAR_ADDENDA_ENABLED			(MENU_TYPE_INT + 0x0A012004) 
#define DEC_EAN8_ADDENDA_REQUIRED				(MENU_TYPE_INT + 0x0A012005) 
#define DEC_EAN8_ADDENDA_SEPARATOR				(MENU_TYPE_INT + 0x0A012006) 

//EAN-13
#define DEC_EAN13_ENABLED						(MENU_TYPE_INT + 0x0A013001) 
#define DEC_EAN13_CHECK_DIGIT_TRANSMIT			(MENU_TYPE_INT + 0x0A013002) 
#define DEC_EAN13_2CHAR_ADDENDA_ENABLED			(MENU_TYPE_INT + 0x0A013003) 
#define DEC_EAN13_5CHAR_ADDENDA_ENABLED			(MENU_TYPE_INT + 0x0A013004) 
#define DEC_EAN13_ADDENDA_REQUIRED				(MENU_TYPE_INT + 0x0A013005) 
#define DEC_EAN13_ADDENDA_SEPARATOR				(MENU_TYPE_INT + 0x0A013006) 
#define DEC_EAN13_ISBN_ENABLED					(MENU_TYPE_INT + 0x0A013007) 

//Code 128
#define DEC_CODE128_ENABLED						(MENU_TYPE_INT + 0x0A014001) 
#define DEC_CODE128_MIN_LENGTH					(MENU_TYPE_INT + 0x0A014002) 
#define DEC_CODE128_MAX_LENGTH					(MENU_TYPE_INT + 0x0A014003) 

//GS1-128
#define DEC_GS1_128_ENABLED						(MENU_TYPE_INT + 0x0A015001) 
#define DEC_GS1_128_MIN_LENGTH					(MENU_TYPE_INT + 0x0A015002) 
#define DEC_GS1_128_MAX_LENGTH					(MENU_TYPE_INT + 0x0A015003) 

//Code 128/GS1-128 Misc
#define DEC_C128_ISBT_ENABLED					(MENU_TYPE_INT + 0x0A014005) 
#define DEC_C128_FNC1_SUBSTITUTE				(MENU_TYPE_INT + 0x0A014006) //not yet implemented
#define DEC_C128_FNC_TRANSMIT					(MENU_TYPE_INT + 0x0A014007) //not yet implemented

//Code 39
#define DEC_CODE39_ENABLED						(MENU_TYPE_INT + 0x0A016001) 
#define DEC_CODE39_MIN_LENGTH					(MENU_TYPE_INT + 0x0A016002) 
#define DEC_CODE39_MAX_LENGTH					(MENU_TYPE_INT + 0x0A016003) 
#define DEC_CODE39_CHECK_DIGIT_MODE				(MENU_TYPE_INT + 0x0A016004) //VERIFY
#define DEC_CODE39_APPEND_ENABLED				(MENU_TYPE_INT + 0x0A016005) 
#define DEC_CODE39_FULL_ASCII_ENABLED			(MENU_TYPE_INT + 0x0A016006)
#define DEC_CODE39_START_STOP_TRANSMIT			(MENU_TYPE_INT + 0x0A016007)
#define DEC_CODE39_BASE32_ENABLED				(MENU_TYPE_INT + 0x0A016008)

//TLC 39
#define DEC_TLC39_ENABLED						(MENU_TYPE_INT + 0x0A017001) 

//Trioptic
#define DEC_TRIOPTIC_ENABLED					(MENU_TYPE_INT + 0x0A018001) 

//Interleaved 2 of 5
#define DEC_I25_ENABLED							(MENU_TYPE_INT + 0x0A019001) 
#define DEC_I25_MIN_LENGTH						(MENU_TYPE_INT + 0x0A019002) 
#define DEC_I25_MAX_LENGTH						(MENU_TYPE_INT + 0x0A019003) 
#define DEC_I25_CHECK_DIGIT_MODE				(MENU_TYPE_INT + 0x0A019004) 

//Standard 2 of 5 (3 bar) - Industrial 2 of 5
#define DEC_S25_ENABLED							(MENU_TYPE_INT + 0x0A01A001) 
#define DEC_S25_MIN_LENGTH						(MENU_TYPE_INT + 0x0A01A002) 
#define DEC_S25_MAX_LENGTH						(MENU_TYPE_INT + 0x0A01A003) 

//IATA 2 of 5 (2 bar) - Airline 2 of 5
#define DEC_IATA25_ENABLED						(MENU_TYPE_INT + 0x0A01B001) 
#define DEC_IATA25_MIN_LENGTH					(MENU_TYPE_INT + 0x0A01B002) 
#define DEC_IATA25_MAX_LENGTH					(MENU_TYPE_INT + 0x0A01B003) 

//Matrix 2 of 5
#define DEC_M25_ENABLED							(MENU_TYPE_INT + 0x0A01C001) 
#define DEC_M25_MIN_LENGTH						(MENU_TYPE_INT + 0x0A01C002) 
#define DEC_M25_MAX_LENGTH						(MENU_TYPE_INT + 0x0A01C003) 
#define DEC_M25_CHECK_DIGIT_MODE				(MENU_TYPE_INT + 0x0A01C004) 

//Code 93
#define DEC_CODE93_ENABLED						(MENU_TYPE_INT + 0x0A01D001) 
#define DEC_CODE93_MIN_LENGTH					(MENU_TYPE_INT + 0x0A01D002) 
#define DEC_CODE93_MAX_LENGTH					(MENU_TYPE_INT + 0x0A01D003) 

//Code 11
#define DEC_CODE11_ENABLED						(MENU_TYPE_INT + 0x0A01E001) 
#define DEC_CODE11_MIN_LENGTH					(MENU_TYPE_INT + 0x0A01E002) 
#define DEC_CODE11_MAX_LENGTH					(MENU_TYPE_INT + 0x0A01E003) 
#define DEC_CODE11_CHECK_DIGIT_MODE				(MENU_TYPE_INT + 0x0A01E004) 

//Codabar
#define DEC_CODABAR_ENABLED						(MENU_TYPE_INT + 0x0A01F001) 
#define DEC_CODABAR_MIN_LENGTH					(MENU_TYPE_INT + 0x0A01F002) 
#define DEC_CODABAR_MAX_LENGTH					(MENU_TYPE_INT + 0x0A01F003) 
#define DEC_CODABAR_START_STOP_TRANSMIT			(MENU_TYPE_INT + 0x0A01F004) 
#define DEC_CODABAR_CHECK_DIGIT_MODE			(MENU_TYPE_INT + 0x0A01F005) 
#define DEC_CODABAR_CONCAT_ENABLED				(MENU_TYPE_INT + 0x0A01F007) 

//Telepen
#define DEC_TELEPEN_ENABLED						(MENU_TYPE_INT + 0x0A020001) 
#define DEC_TELEPEN_MIN_LENGTH					(MENU_TYPE_INT + 0x0A020002) 
#define DEC_TELEPEN_MAX_LENGTH					(MENU_TYPE_INT + 0x0A020003) 
#define DEC_TELEPEN_OLD_STYLE					(MENU_TYPE_INT + 0x0A020004) 

//MSI
#define DEC_MSI_ENABLED							(MENU_TYPE_INT + 0x0A021001) 
#define DEC_MSI_MIN_LENGTH						(MENU_TYPE_INT + 0x0A021002) 
#define DEC_MSI_MAX_LENGTH						(MENU_TYPE_INT + 0x0A021003) 
#define DEC_MSI_CHECK_DIGIT_MODE				(MENU_TYPE_INT + 0x0A021004) 

//RSS (GS1)
#define DEC_RSS_14_ENABLED						(MENU_TYPE_INT + 0x0A022001) 
#define DEC_RSS_LIMITED_ENABLED					(MENU_TYPE_INT + 0x0A022002) 
#define DEC_RSS_EXPANDED_ENABLED				(MENU_TYPE_INT + 0x0A022003) 
#define DEC_RSS_EXPANDED_MIN_LENGTH				(MENU_TYPE_INT + 0x0A022004) 
#define DEC_RSS_EXPANDED_MAX_LENGTH				(MENU_TYPE_INT + 0x0A022005) 


/* Stacked Linear Symbologies */

//Codablock F
#define DEC_CODABLOCK_F_ENABLED					(MENU_TYPE_INT + 0x0A023001) 
#define DEC_CODABLOCK_F_MIN_LENGTH				(MENU_TYPE_INT + 0x0A023002) 
#define DEC_CODABLOCK_F_MAX_LENGTH				(MENU_TYPE_INT + 0x0A023003) 

//PDF417
#define DEC_PDF417_ENABLED						(MENU_TYPE_INT + 0x0A024001) 
#define DEC_PDF417_MIN_LENGTH					(MENU_TYPE_INT + 0x0A024002) 
#define DEC_PDF417_MAX_LENGTH					(MENU_TYPE_INT + 0x0A024003) 
#define DEC_PDF417_SHOW_GLI						(MENU_TYPE_INT + 0x0A024004) //Looked to be linked to ECI_HANLDING
#define DEC_PDF417_MACRO_ENABLED				(MENU_TYPE_INT + 0x0A024005) //not yet implemented
#define DEC_PDF417_SHOW_MACRO					(MENU_TYPE_INT + 0x0A024006) //REMOVE - related to system ECI and not used anymore

//Micro PDF417
#define DEC_MICROPDF_ENABLED					(MENU_TYPE_INT + 0x0A025001) 
#define DEC_MICROPDF_MIN_LENGTH					(MENU_TYPE_INT + 0x0A025002) 
#define DEC_MICROPDF_MAX_LENGTH					(MENU_TYPE_INT + 0x0A025003) 

//Composite
#define DEC_COMPOSITE_ENABLED					(MENU_TYPE_INT + 0x0A026001) 
#define DEC_COMPOSITE_MIN_LENGTH				(MENU_TYPE_INT + 0x0A026002) 
#define DEC_COMPOSITE_MAX_LENGTH				(MENU_TYPE_INT + 0x0A026003) 
#define DEC_COMPOSITE_WITH_UPC_ENABLED			(MENU_TYPE_INT + 0x0A026004) //VERIFY in combo with the UPC COMP timing


/* Matrix 2D Symbologies */

//Aztec Code
#define DEC_AZTEC_ENABLED						(MENU_TYPE_INT + 0x0A027001) 
#define DEC_AZTEC_MIN_LENGTH					(MENU_TYPE_INT + 0x0A027002) 
#define DEC_AZTEC_MAX_LENGTH					(MENU_TYPE_INT + 0x0A027003) 

//Maxicode
#define DEC_MAXICODE_ENABLED					(MENU_TYPE_INT + 0x0A028001) 
#define DEC_MAXICODE_MIN_LENGTH					(MENU_TYPE_INT + 0x0A028002) 
#define DEC_MAXICODE_MAX_LENGTH					(MENU_TYPE_INT + 0x0A028003) 

//DataMatrix
#define DEC_DATAMATRIX_ENABLED					(MENU_TYPE_INT + 0x0A029001) 
#define DEC_DATAMATRIX_MIN_LENGTH				(MENU_TYPE_INT + 0x0A029002) 
#define DEC_DATAMATRIX_MAX_LENGTH				(MENU_TYPE_INT + 0x0A029003) 

//QR Code
#define DEC_QR_ENABLED							(MENU_TYPE_INT + 0x0A02A001) 
#define DEC_QR_MIN_LENGTH						(MENU_TYPE_INT + 0x0A02A002) 
#define DEC_QR_MAX_LENGTH						(MENU_TYPE_INT + 0x0A02A003) 

//HanXin
#define DEC_HANXIN_ENABLED						(MENU_TYPE_INT + 0x0A02B001) 
#define DEC_HANXIN_MIN_LENGTH					(MENU_TYPE_INT + 0x0A02B002) 
#define DEC_HANXIN_MAX_LENGTH					(MENU_TYPE_INT + 0x0A02B003) 

//OCR
#define DEC_OCR_MODE							(MENU_TYPE_INT + 0x0A02D001)
#define DEC_OCR_TEMPLATE						(MENU_TYPE_INT + MENU_TYPE_ARRAY + 0x0A02D002) //an array of ints
    
//POSTAL CODES
#define POSTAL_ENABLED             			    0x1A110001
#define POSTAL_INDEX_MIN                        1
#define POSTAL_INDEX_MAX                        30

//Hong Kong 2 of 5 - aka China Post
#define DEC_HK25_ENABLED						(MENU_TYPE_INT + 0x0A02C001) 
#define DEC_HK25_MIN_LENGTH						(MENU_TYPE_INT + 0x0A02C002) 
#define DEC_HK25_MAX_LENGTH						(MENU_TYPE_INT + 0x0A02C003) 

//Korean Post
#define DEC_KOREA_POST_ENABLED					(MENU_TYPE_INT + 0x0A100001)
#define DEC_KOREA_POST_MIN_LENGTH				(MENU_TYPE_INT + 0x0A100002)
#define DEC_KOREA_POST_MAX_LENGTH				(MENU_TYPE_INT + 0x0A100003)
#define DEC_KOREA_POST_CHECK_DIGIT_TRANSMIT		(MENU_TYPE_INT + 0x0A100004)
#define DEC_KOREA_POST_REVERSE					(MENU_TYPE_INT + 0x0A100005)


/* Postal Symbologies */
//Enable for all 2D postal symbologies. 
//Please see PostalOptions array for values for this tag
#define DEC_POSTAL_ENABLED						(MENU_TYPE_INT + 0x0A110001)
#define DEC_POSTAL_ENABLED_DIRECT				(MENU_TYPE_INT + 0x0A110002)

//PostNet
#define DEC_POSTNET_CHECK_DIGIT_TRANSMIT		(MENU_TYPE_INT + 0x0A120001)

//Planet Code
#define DEC_PLANETCODE_CHECK_DIGIT_TRANSMIT		(MENU_TYPE_INT + 0x0A130001)

//Australian Post
#define DEC_AUS_POST_INTERPRET_MODE				(MENU_TYPE_INT + 0x0A140001)
#define DEC_AUS_POST_ZERO_FCC					(MENU_TYPE_INT + 0x0A140002)
#define DEC_CAN_POST_BAR_OUTPUT				    (MENU_TYPE_INT + 0x0A140003)


/* Decoder Constants
 *	These are constants used by the decoder.
 */

/* AIM Codeletters
 *	These defines have no bearing on the decoding capability of the decoder(s)
 *	included in the API. These defines are simply meant to provide a macro which 
 *	aligns with the current AIM specification. 
 */

#define DEC_AIM_CODELETTER_CODE39		'A'
#define DEC_AIM_CODELETTER_TELEPEN		'B'
#define DEC_AIM_CODELETTER_CODE128		'C'
#define DEC_AIM_CODELETTER_GS1_128		'C'
#define DEC_AIM_CODELETTER_CODE1		'D'
#define DEC_AIM_CODELETTER_UPC			'E'	//includes EAN and Jan
#define DEC_AIM_CODELETTER_CODABAR		'F'
#define DEC_AIM_CODELETTER_CODE93		'G'
#define DEC_AIM_CODELETTER_CODE11		'H'
#define DEC_AIM_CODELETTER_I25			'I'
//RESERVED								'J'
#define DEC_AIM_CODELETTER_CODE16K		'K'
#define DEC_AIM_CODELETTER_PDF417		'L' //include MicroPDF417
#define DEC_AIM_CODELETTER_TLC39		'L' //Not a typo. 'L' is defined in TLC39 spec, which is a PDF/Code 39 combo
#define DEC_AIM_CODELETTER_MSI			'M'
#define DEC_AIM_CODELETTER_ANKER		'N'
#define DEC_AIM_CODELETTER_CODABLOCK	'O' //includes both A and F
#define DEC_AIM_CODELETTER_PLESSEY		'P'
#define DEC_AIM_CODELETTER_QRCODE		'Q'
#define DEC_AIM_CODELETTER_S25_2BAR		'R' //Straight 2of5 with 2 bar start/stop (aka IATA 2of5)
#define DEC_AIM_CODELETTER_S25_3BAR		'S' //Straight 2of5 with 3 bar start/stop (aka Industrial 2of5)
#define DEC_AIM_CODELETTER_CODE49		'T'
#define DEC_AIM_CODELETTER_MAXICODE		'U'
//RESERVED								'V'
//RESERVED								'W'
#define DEC_AIM_CODELETTER_OTHER		'X'
#define DEC_AIM_CODELETTER_EXPANSION	'Y'
#define DEC_AIM_CODELETTER_NONBARCODE	'Z'

//RESERVED								'a'
//RESERVED								'b'
#define DEC_AIM_CODELETTER_CHANNELCODE	'c'
#define DEC_AIM_CODELETTER_DATAMATRIX	'd'
#define DEC_AIM_CODELETTER_RSS			'e'
#define DEC_AIM_CODELETTER_GS1_DATABAR	'e'
#define DEC_AIM_CODELETTER_COMPOSITE	'e'
//RESERVED								'f'
//RESERVED								'g'
//RESERVED								'h'
//RESERVED								'i'
//RESERVED								'j'
//RESERVED								'k'
//RESERVED								'l'
//RESERVED								'm'
//RESERVED								'n'
#define DEC_AIM_CODELETTER_OCR			'o'
#define DEC_AIM_CODELETTER_POSICODE		'p'
//RESERVED								'q'
//RESERVED								'r'
#define DEC_AIM_CODELETTER_SUPERCODE	's'
//RESERVED								't'
//RESERVED								'u'
#define DEC_AIM_CODELETTER_ULTRACODE	'v'
//RESERVED								'w'
//RESERVED                      		'x'
//RESERVED								'y'
#define DEC_AIM_CODELETTER_AZTEC_CODE	'z' //Including Mesas

/* Welch Allyn Codeletters or HHP Codeletters
 *	These defines have no bearing on the decoding capability of the decoder(s)
 *	included in the API. These defines are simply meant to provide a macro which 
 *	aligns with the legacy Welch Allyn codeletters (called code IDs) and updated 
 *	when this decoder when Welch Allyn data collection became HandHeld Products
 */

#define DEC_HHP_CODE_ID_DOTCODE			'.'
#define DEC_HHP_CODE_ID_CODE1			'1'
#define DEC_HHP_CODE_ID_MERGED_COUPON	';'
#define DEC_HHP_CODE_ID_CODE39_BASE32	'<' //aka Code 32, Italian Pharmacode, PARAF
#define DEC_HHP_CODE_ID_TRIOPTIC		'='
#define DEC_HHP_CODE_ID_KOREAN_POST		'?'
#define DEC_HHP_CODE_ID_INFOMAIL		','
#define DEC_HHP_CODE_ID_NO_READ			0x9C

#define DEC_HHP_CODE_ID_AUS_POST		'A'
#define DEC_HHP_CODE_ID_BRITISH_POST	'B'
#define DEC_HHP_CODE_ID_CANADIAN_POST	'C'
#define DEC_HHP_CODE_ID_EAN8			'D'
#define DEC_HHP_CODE_ID_UPCE			'E'
#define DEC_HHP_CODE_ID_LABELCODE		'F'
#define DEC_HHP_CODE_ID_BC412			'G'
#define DEC_HHP_CODE_ID_HAN_XIN_CODE	'H'
#define DEC_HHP_CODE_ID_GS1_128			'I'
#define DEC_HHP_CODE_ID_JAPAN_POST		'J'
#define DEC_HHP_CODE_ID_KIX_CODE		'K'
#define DEC_HHP_CODE_ID_PLANET_CODE		'L'
#define DEC_HHP_CODE_ID_USPS_4_STATE	'M' //Intelligent Mail
#define DEC_HHP_CODE_ID_UPU_4_STATE		'N' //ID Tags
#define DEC_HHP_CODE_ID_OCR				'O'
#define DEC_HHP_CODE_ID_POSTNET			'P'
#define DEC_HHP_CODE_ID_HK25			'Q' //aka China Post
#define DEC_HHP_CODE_ID_MICROPDF		'R'
#define DEC_HHP_CODE_ID_SECURE_CODE		'S'
#define DEC_HHP_CODE_ID_TLC39			'T'
#define DEC_HHP_CODE_ID_ULTRACODE		'U'
#define DEC_HHP_CODE_ID_CODABLOCK_A		'V'
#define DEC_HHP_CODE_ID_POSICODE		'W'
#define DEC_HHP_CODE_ID_GRID_MATRIX		'X'
#define DEC_HHP_CODE_ID_NEC25			'Y'
#define DEC_HHP_CODE_ID_MESA			'Z'

#define DEC_HHP_CODE_ID_CODABAR			'a'
#define DEC_HHP_CODE_ID_CODE39			'b'
#define DEC_HHP_CODE_ID_UPCA			'c'
#define DEC_HHP_CODE_ID_EAN13			'd'
#define DEC_HHP_CODE_ID_I25				'e'
#define DEC_HHP_CODE_ID_S25				'f' //both 2bar and 3bar
#define DEC_HHP_CODE_ID_MSI				'g'
#define DEC_HHP_CODE_ID_CODE11			'h'
#define DEC_HHP_CODE_ID_CODE93			'i'
#define DEC_HHP_CODE_ID_CODE128			'j'
#define DEC_HHP_CODE_ID_UNUSED			'k'
#define DEC_HHP_CODE_ID_CODE49			'l'
#define DEC_HHP_CODE_ID_M25				'm'
#define DEC_HHP_CODE_ID_PLESSEY			'n'
#define DEC_HHP_CODE_ID_CODE16K			'o'
#define DEC_HHP_CODE_ID_CHANNELCODE		'p'
#define DEC_HHP_CODE_ID_CODABLOCK_F		'q'
#define DEC_HHP_CODE_ID_PDF417			'r'
#define DEC_HHP_CODE_ID_QRCODE			's'
#define DEC_HHP_CODE_ID_TELEPEN			't'
#define DEC_HHP_CODE_ID_CODEZ			'u'
#define DEC_HHP_CODE_ID_VERICODE		'v'
#define DEC_HHP_CODE_ID_DATAMATRIX		'w'
#define DEC_HHP_CODE_ID_MAXICODE		'x'
#define DEC_HHP_CODE_ID_RSS				'y'
#define DEC_HHP_CODE_ID_GS1_DATABAR		'y'
#define DEC_HHP_CODE_ID_COMPOSITE		'y'
#define DEC_HHP_CODE_ID_AZTEC_CODE		'z'
#define DEC_HHP_CODE_ID_GS1_DATABAR_LIM '{'
#define DEC_HHP_CODE_ID_GS1_DATABAR_EXP '}'

/* Swift Symbology Constants
 *	These defines have no bearing on the decoding capability of the decoder(s)
 *	included in the API. These defines are simply meant to provide a macro which 
 *	aligns with the legacy Swift Decoder symbology constants
 */

//These settings apply to DecoderResult->Symbology
#define DEC_SYMBOLOGY_UPC			(1 << 2) //includes UPC, EAN, and JAN
#define DEC_SYMBOLOGY_AUS_POST		(1 << 3)
#define DEC_SYMBOLOGY_CODE128		(1 << 4)
#define DEC_SYMBOLOGY_CODABLOCK_F	((DEC_SYMBOLOGY_CODE128) + 1)
#define DEC_SYMBOLOGY_CODE39		(1 << 5)
#define DEC_SYMBOLOGY_CODABLOCK_A	((DEC_SYMBOLOGY_CODE39) + 1)
#define DEC_SYMBOLOGY_CODABAR		(1 << 6)
#define DEC_SYMBOLOGY_PLANETCODE	(1 << 7)
#define DEC_SYMBOLOGY_DATAMATRIX	(1 << 8)
#define DEC_SYMBOLOGY_I25			(1 << 9)
#define DEC_SYMBOLOGY_MAXICODE		(1 << 11)
#define DEC_SYMBOLOGY_PDF			(1 << 12) //include MicroPDF
#define DEC_SYMBOLOGY_POSTNET		(1 << 13)
#define DEC_SYMBOLOGY_QRCODE		(1 << 14)
#define DEC_SYMBOLOGY_RSS			(1 << 15)
#define DEC_SYMBOLOGY_RSS_EXP		((DEC_SYMBOLOGY_RSS) + 1) //Expanded
#define DEC_SYMBOLOGY_RSS_EXP_ST	((DEC_SYMBOLOGY_RSS) + 2) //Expanded Stacked
#define DEC_SYMBOLOGY_RSS_14_LIM	((DEC_SYMBOLOGY_RSS) + 4) //Limited
#define DEC_SYMBOLOGY_RSS_14		((DEC_SYMBOLOGY_RSS) + 8) 
#define DEC_SYMBOLOGY_RSS_14_ST		((DEC_SYMBOLOGY_RSS) + 16) //Stacked
#define DEC_SYMBOLOGY_JAPAN_POST	(1 << 17)
#define DEC_SYMBOLOGY_CODE93		(1 << 18)
#define DEC_SYMBOLOGY_AZTEC_CODE	(1 << 19)
#define DEC_SYMBOLOGY_ROYAL_MAIL	(1 << 21) 
#define DEC_SYMBOLOGY_KIX			((DEC_SYMBOLOGY_ROYAL_MAIL) + 1)
#define DEC_SYMBOLOGY_S25			(1 << 22)
#define DEC_SYMBOLOGY_S25_2BAR		((DEC_SYMBOLOGY_S25))
#define DEC_SYMBOLOGY_S25_3BAR		((DEC_SYMBOLOGY_S25) + 1)
#define DEC_SYMBOLOGY_MSI_PLESSEY	(1 << 23)
#define DEC_SYMBOLOGY_GO_CODE		(1 << 24)
#define DEC_SYMBOLOGY_PHARMACODE	(1 << 26)
#define DEC_SYMBOLOGY_UPU_4_STATE	(1 << 27)
#define DEC_SYMBOLOGY_CODE11		(1 << 28)
#define DEC_SYMBOLOGY_USPS_4_STATE	(1U << 31U)

//These settings apply to DecoderResult->SymbologyEx
#define DEC_SYMBOLOGY_EX_M25			(1 << 0)
#define DEC_SYMBOLOGY_EX_TELEPEN		(1 << 1)
#define DEC_SYMBOLOGY_EX_NEC25			(1 << 2)
#define DEC_SYMBOLOGY_EX_TRIOPTIC		(1 << 3)
#define	DEC_SYMBOLOGY_EX_OCR			(1 << 4)
#define	DEC_SYMBOLOGY_EX_HK25			(1 << 6)
#define DEC_SYMBOLOGY_EX_INFOMAIL		(1 << 12)
#define DEC_SYMBOLOGY_EX_KOREA_POST		(1 << 14)
#define DEC_SYMBOLOGY_EX_HAN_XIN_CODE	(1 << 15)
#define DEC_SYMBOLOGY_CANADIAN_POST		(1 << 16)
#define DEC_SYMBOLOGY_EX_CODE16K          (1 << 17)
#define DEC_SYMBOLOGY_EX_LABELCODE        (1 << 17) //Duplicate number, 16K not supported yet
#define DEC_SYMBOLOGY_EX_SWEEDISH_POST    (1 << 18)
#define DEC_SYMBOLOGY_EX_RM_MAILMARK      (1 << 19)
#define DEC_SYMBOLOGY_EX_BRAZIL_POST      (1 << 20)
#define DEC_SYMBOLOGY_EX_GRID_MATRIX      (1 << 22)
#define DEC_SYMBOLOGY_EX_DOTCODE          (1 << 23)


//Other constants
#define DEC_TRUE 		1
#define DEC_FALSE 		0

#define DEC_HALT		2
#define DEC_SUCCESS		1
#define DEC_FAILURE		0

#define DEC_ENABLED_7F		0x7F
#define DEC_ENABLED_0F		0x0F
#define DEC_ENABLED_3F      0x3F

#define DEC_INVERSE_ENABLED		2
#define DEC_ENABLED		1
#define DEC_DISABLED	0

//Revision Reporting types. Add together to get multiple types. They will come out in order specified here.
#define DEC_REVISION_CONTROL_LOGIC		0x01
#define DEC_REVISION_FULL_DECODER		0x02
#define DEC_REVISION_FAST_DECODER		0x04


#define MAX_DECODED_DATA_LENGTH		(8*1024)

//These constants apply to DecoderResult->Linkage
#define  DEC_NOT_LINKED		0
#define  DEC_LINKED_C128	11
#define  DEC_LINKED_RSS		12
#define  DEC_LINKED_C39		13
#define  DEC_LINKED_CC_A	21
#define  DEC_LINKED_CC_B	22
#define  DEC_LINKED_CC_C	23
#define  DEC_LINKED_UPDF	24

//Postal constants
#define DEC_B_AND_B_FIELDS			(1 << 0) 
#define DEC_UNDECODABLE_POSTAL		(1 << 3)

#define POSTAL_OPTIONS	31

//These are the only combinations of postal codes allowed
//The value passed to DEC_POSTAL_ENABLED is the value at the beginning of each line.
//unsigned int PostalOptions[POSTAL_OPTIONS] = {
/* 0 */		//DEC_DISABLED,
/* 1 */		//DEC_SYMBOLOGY_AUS_POST,
/* 2 */		//DEC_SYMBOLOGY_EX_INFOMAIL,
/* 3 */		//DEC_SYMBOLOGY_JAPAN_POST,
/* 4 */		//DEC_SYMBOLOGY_KIX,
/* 5 */		//DEC_SYMBOLOGY_PLANETCODE,
/* 6 */		//DEC_SYMBOLOGY_POSTNET,
/* 7 */		//DEC_SYMBOLOGY_ROYAL_MAIL,
/* 8 */		//DEC_SYMBOLOGY_EX_INFOMAIL	+ //DEC_SYMBOLOGY_ROYAL_MAIL,
/* 9 */		//DEC_SYMBOLOGY_UPU_4_STATE,
/* 10 */	//DEC_SYMBOLOGY_USPS_4_STATE,
/* 11 */	//DEC_SYMBOLOGY_POSTNET		+ //DEC_B_AND_B_FIELDS,
/* 12 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_POSTNET,
/* 13 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_UPU_4_STATE,
/* 14 */	//DEC_SYMBOLOGY_POSTNET		+ //DEC_SYMBOLOGY_UPU_4_STATE,
/* 15 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_USPS_4_STATE,
/* 16 */	//DEC_SYMBOLOGY_POSTNET		+ //DEC_SYMBOLOGY_USPS_4_STATE,
/* 17 */	//DEC_SYMBOLOGY_UPU_4_STATE	+ //DEC_SYMBOLOGY_USPS_4_STATE,
/* 18 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_POSTNET			+ //DEC_B_AND_B_FIELDS,
/* 19 */	//DEC_SYMBOLOGY_POSTNET		+ //DEC_SYMBOLOGY_UPU_4_STATE		+ //DEC_B_AND_B_FIELDS,
/* 20 */	//DEC_SYMBOLOGY_POSTNET		+ //DEC_SYMBOLOGY_USPS_4_STATE	+ //DEC_B_AND_B_FIELDS,
/* 21 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_POSTNET			+ //DEC_SYMBOLOGY_UPU_4_STATE,
/* 22 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_POSTNET			+ //DEC_SYMBOLOGY_USPS_4_STATE,
/* 23 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_UPU_4_STATE		+ //DEC_SYMBOLOGY_USPS_4_STATE,
/* 24 */	//DEC_SYMBOLOGY_POSTNET		+ //DEC_SYMBOLOGY_UPU_4_STATE		+ //DEC_SYMBOLOGY_USPS_4_STATE,
/* 25 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_POSTNET			+ //DEC_SYMBOLOGY_UPU_4_STATE		+ //DEC_B_AND_B_FIELDS,
/* 26 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_POSTNET			+ //DEC_SYMBOLOGY_USPS_4_STATE	+ //DEC_B_AND_B_FIELDS,
/* 27 */	//DEC_SYMBOLOGY_POSTNET		+ //DEC_SYMBOLOGY_UPU_4_STATE		+ //DEC_SYMBOLOGY_USPS_4_STATE	+ //DEC_B_AND_B_FIELDS,
/* 28 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_POSTNET			+ //DEC_SYMBOLOGY_UPU_4_STATE		+ //DEC_SYMBOLOGY_USPS_4_STATE,
/* 29 */	//DEC_SYMBOLOGY_PLANETCODE	+ //DEC_SYMBOLOGY_POSTNET			+ //DEC_SYMBOLOGY_UPU_4_STATE		+ //DEC_SYMBOLOGY_USPS_4_STATE + //DEC_B_AND_B_FIELDS,
/* 30 */	//DEC_SYMBOLOGY_CANADIAN_POST
//};


/* Error Codes */
#define DEC_ERR_INVALID_HANDLE                1001
#define DEC_ERR_READ_ONLY                     1002
#define DEC_ERR_UNKNOWN_PROPERTY              1003
#define DEC_ERR_TOO_MANY_OBJECTS              1004
#define DEC_ERR_PROPERTY_LIFETIME             1005
#define DEC_ERR_COMPONENT_ABSENT              1006
#define DEC_ERR_COMPONENT_UNAUTHORIZED        1007
#define DEC_ERR_COMPONENT_UNAUTHORISED        1007 /* alternate spelling */
#define DEC_ERR_PROPERTY_VALUE                1008
#define DEC_ERR_IMAGE_PROPERTY_VALUE          1009
#define DEC_ERR_INSUFFICIENT_MEMORY           1010
#define DEC_ERR_AGC_COMPONENT_UNREACHABLE     1011
#define DEC_ERR_ILLEGAL_FUNCTION              1012

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif //_DECODER_SETTINGS_H

//======================================================================================
//$Log: DecoderSettings.h  $
//Revision 1.1 2010/06/19 10:52:45EDT Deloge,Stephen (E412317) 
//Initial revision
//Member added to project d:/MKS_Decoders/DecoderControllerInclude/DcdrCtrlInclude.pj
//======================================================================================
