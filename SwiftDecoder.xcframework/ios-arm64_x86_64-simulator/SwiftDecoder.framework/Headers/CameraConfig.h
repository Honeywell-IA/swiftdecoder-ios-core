//
//  CameraConfig.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 2/12/15.
//
//

#import <Foundation/Foundation.h>

@interface CameraConfig : NSObject
+ (Boolean) setTorchMode:(int)mode;
+ (Boolean) setTorchModeOnWithLevel:(float)torchLevel;
+ (Boolean) setFocusMode:(int)mode;
+ (Boolean) setExposureMode:(int)mode;
+ (Boolean) setWhiteBalanceMode:(int)mode;
@end
