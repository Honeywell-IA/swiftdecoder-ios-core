/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  BarcodeBounds.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 8/14/12.
//  Copyright (c) 2012 Honeywell International, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  @brief This class contains a barcode's location within an image by defining the four corners of the barcode's bounds as points within the image.
 */
@interface BarcodeBounds : NSObject
{
    @private
    FixedPoint upperLeft, upperRight, bottomLeft, bottomRight;
}

- (id) init:(int*)barcodeBounds ImgWidth:(int)width ImgHeight:(int)height;

/**
 * @brief The upper-left point of the barcode's bounds witin the image
 */
@property (assign) FixedPoint upperLeft;

/**
 * @brief The upper-right point of the barcode's bounds witin the image
 */
@property (assign) FixedPoint upperRight;

/**
 * @brief The bottom-left point of the barcode's bounds witin the image
 */
@property (assign) FixedPoint bottomLeft;

/**
 * @brief The bottom-right point of the barcode's bounds witin the image
 */
@property (assign) FixedPoint bottomRight;

/**
 * @brief The width of the image the barcode was found in
 */
@property (assign) int imageWidth;

/**
 * @brief The height of the image the barcode was found in
 */
@property (assign) int imageHeight;

- (CGPoint)getCentroid;
@end
