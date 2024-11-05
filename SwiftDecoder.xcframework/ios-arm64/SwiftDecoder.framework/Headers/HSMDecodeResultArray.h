/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  HSMDecodeResultArray.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BarcodeBounds.h"
#import "HSMDecodeResult.h"

/**
 *  @brief This class contains all the necessary information obtained during a barcode scan event.
 */
@interface HSMDecodeResultArray : NSObject
{
    @private
    NSMutableArray *results;
}

/**
 * @brief This method returns the number of decode results in the array
 *
 * @return
 *   A number of decode results in the array
 */
- (int) count;

/**
 * @brief This method returns the DecodeResult at the specified index
 *
 * @param index
 *   The index of the DecodeResult
 *
 * @return
 *   The DecodeResult object
 */
-(HSMDecodeResult*)resultAtIndex:(NSUInteger)index;

/**
* @brief Add a DecodeResult object to the array
*
* @param result
*   The DecodeResult onject to add to the array
*/
-(void)addObject:(HSMDecodeResult*)result;

/**
 * @brief This method remove all the DecodeResult onjects in the aray
 */
-(void)removeAllObjects;

@end
