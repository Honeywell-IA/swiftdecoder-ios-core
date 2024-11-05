/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  OnPluginMonitorEventListener.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/12/13.
//
//

#import <Foundation/Foundation.h>

/**
 * @brief Protocol used for monitoring plug-in results.  Used by HSMCameraPreview to tell when a plug-in has finished processing and wants to return context back to the caller.
 */
@protocol PluginMonitorEventListener <NSObject>
- (void) onPluginFinished;
@end
