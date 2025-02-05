/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  DecodeResult.h
//
//  Copyright (c) 2012 Honeywell International, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Symbology.h"
#import "BarcodeBounds.h"
#import "DecoderInterface.h"
#import "DecodeResult.h"
/**
 *  @brief This class contains all the necessary information abount a decoded barcode
 */
@interface HSMDecodeResult : DecodeResult

/**
 * @brief This property contains the barcode's decoded data
 */
@property (retain) NSString* barcodeData;

/**
 * @brief This property contains the barcode's unformatted decoded data
 */
@property (retain) NSData* barcodeByteData;

/**
 * @brief This property contains the type of symbology that was decoded
 */
@property (retain) NSString* symbology;

/**
 * @brief This property contains the length of the barcode's decoded data
 */
@property (assign) int length;

/**
 * @brief This property contains the time it took for the decoder to decode the image
 */
@property (assign) int decodeTime;

/**
 * @brief This property contains the bounds of the decoded barcode within the image.
 */
@property (retain) BarcodeBounds* bounds;

/**
 * @brief This property contains the symbology ID
 */
@property (assign) SymbologyId symbologyId;

/**
 * @brief This property contains the symbology ID extension
 */
@property (assign) SymbologyIdEx symbologyIdEx;

/**
 * @brief This property contains the modifier
 */
@property (assign) int modifier;

/**
 * @brief This property contains the modifier extension
 */
@property (assign) int modifierEx;

/**
 * @brief This property contains the Code ID
 */
@property (assign) CodeId hhpCodeID;

/**
 * @brief This property contains the AIM code letter
 */
@property (assign) AIMCodeLetter aimCodeLetter;

/**
 * @brief This property contains the AIM modifier
 */
@property (assign) char aimModifier;


@end
