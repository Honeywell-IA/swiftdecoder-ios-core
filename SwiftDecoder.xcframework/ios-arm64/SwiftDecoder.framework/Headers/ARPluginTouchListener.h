//
//  ARPluginTouchListener.h
//  SwiftDecoder
//
//

#import <Foundation/Foundation.h>
#import "PluginResultListener.h"

@protocol ARPluginTouchListener <PluginResultListener>

-(void)onResultSelected:(NSDictionary*)arPluginResult;
@end

