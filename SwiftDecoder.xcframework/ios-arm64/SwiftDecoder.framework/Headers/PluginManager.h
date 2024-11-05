/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  PluginManager.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/14/13.
//
//

#import "SwiftPlugin.h"
#import "PluginMonitorEventListener.h"
#import "PluginUILayer.h"

@interface PluginManager : SwiftPlugin
+(NSMutableArray *) getLoadedPlugins;
+ (void) addPlugin:(SwiftPlugin*) plugin;
+ (void) removePlugin:(SwiftPlugin*) plugin;
+ (void) removeAllPlugins;
+ (void) enable;
+ (void) disable;
+ (Boolean) isEnabled;
+ (void) onFinish;
+ (void) addPluginMonitorEventListener:(id<PluginMonitorEventListener>) eventListener;
+ (void) removePluginMonitorEventListener:(id<PluginMonitorEventListener>) eventListener;
+ (PluginUILayer*)getPluginUILayer;
+ (void) startPlugins;
+ (void) stopPlugins;
+ (void) onDecode:(HSMDecodeResultArray*) results;
+ (void) onDecode:(NSArray*) results withResultType:(DecodeResultType) resultType;
+ (void) onImage:(unsigned char*) image Width:(int)width Height:(int)height;
+ (void) onDecodeFailed;
+ (void)onDecodeFailed:(DecodeResultType) resultType;
@end
