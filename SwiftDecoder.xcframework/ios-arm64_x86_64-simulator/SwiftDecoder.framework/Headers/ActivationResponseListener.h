/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s: https://www.honeywellaidc.com/Pages/patents.aspx
 */
#import <Foundation/Foundation.h>
#import "ActivationResult.h"

/**
 * @brief An interface that facilitaes result handling for an activation operation
 */
@protocol ActivationResponseListener

/**
 * @brief Called when an activation operation has completed
 *
 * @param result
 * 	the result of the operation
 */
- (void) onActivationComplete:(ActivationResult)result;

/**
 * @brief Called when a deactivation operation has completed
 *
 * @param result
 *     the result of the operation
 */
- (void) onDeactivationComplete:(ActivationResult)result;

@end
