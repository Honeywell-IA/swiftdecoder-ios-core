/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  DependencyCallbackManager.h
//  SwiftDecoder
//
//

#import <Foundation/Foundation.h>
#import "SwiftPlugin.h"
#import "PluginMonitorEventListener.h"
#import "PluginUILayer.h"
#import "DependencyCallback.h"
#import "ActivationManager.h"
NS_ASSUME_NONNULL_BEGIN

@interface DependencyCallbackManager : NSObject

+ (void) addCallback:(DependencyCallback*) callback;
+ (void) removeCallback:(DependencyCallback*) callback;
+ (void)swiftCallback:(HSMDecodeResultArray*)results withImageData:(char*)imageData withImageWidth:(int)imageWidth withImageHeight:(int)imageHeight;
+(void)enableDLScanFeature:(BOOL) dlScanenable withType: (int) type;
+(BOOL) isDLScanFeatureEnabled;
+(BOOL) isScanCompleted;
+(void) setScanCompleted:(BOOL) scanCompleted;
+(void) setCallBackDataType:(int)type;
+(int) getCallBackDataType;
+(BOOL)isFeatureAvailable:(NSString*)featureName;
+(int)imageWithResult;
+(int)imageOnly;
+(int)resultOnly;
+(void) enableSwiftOCR:(BOOL) isSwiftOCREnabled;
+(BOOL) isSwiftOCREnabled;

@end

NS_ASSUME_NONNULL_END
