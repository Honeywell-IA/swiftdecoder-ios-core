//
//  OnCameraManagerEventListener.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/26/13.
//
//

#import <Foundation/Foundation.h>
#import "HSMDecodeResultArray.h"

@protocol CameraManagerEventListener <NSObject>
- (void) onCameraFrame:(unsigned char *)image Width:(int)width Height:(int)height;
- (void) onDecodeResults:(HSMDecodeResultArray*)results;
@end
