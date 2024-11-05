/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  DependencyCallback.h
//  SwiftDecoder
//
//

#import <Foundation/Foundation.h>
#import "HSMDecodeResultArray.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum
{
    TEMPLATEOCR = 0,
    DLOCR = 1
}CALLBACK_TYPE;

@interface DependencyCallback : NSObject
{
    @private
    CALLBACK_TYPE mCallbackType;
}

-(void)setCallbackType:(CALLBACK_TYPE)callbackType;
-(CALLBACK_TYPE)getCallbackType;
- (void)swiftCallback:(HSMDecodeResultArray*)results withImageData:(char *)imageData withImageWidth:(int)imageWidth withImageHeight:(int)imageHeight;
- (void)swiftCallback: (UIImage *)imageData withResults:(HSMDecodeResultArray*)results;
- (void)swiftCallback:(unsigned char*)imgData withWidth:(int) width withHeight:(int) height;
@end

NS_ASSUME_NONNULL_END
