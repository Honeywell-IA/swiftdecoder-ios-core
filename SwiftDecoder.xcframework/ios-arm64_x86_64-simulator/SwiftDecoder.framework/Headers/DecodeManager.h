/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  DecodeManager.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/13/13.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "HSMDecodeResult.h"
#import "HSMDecodeResultArray.h"

@interface DecodeManager : NSObject
{
    @private
    HSMDecodeResultArray* decodeResults;
}

//static singelton methods
+ (DecodeManager*) getInstance;
+ (void) disposeInstance;

//member methods
- (int) hsmSetProperty:(int)property Value:(int) value;
- (int) hsmSetStringProperty:(int)property Value:(char*) value;
- (int) hsmGetProperty:(int)property;
- (NSString*) hsmGetStringProperty:(int)property;
- (int) hsmSetByteProperty:(int)property Value:(Byte*) value;

- (NSString*) reportDecoderVersion:(int)decoder;
- (NSData*) dumpDecoderSettings;
- (void) enableDecoding:(Boolean)enable;
- (void) setFreezeFrame:(Boolean)enable;
- (Boolean) isDecodingEnabled;
- (Boolean) isFreezeFrame;
- (void) setFreezeFrameMode:(Boolean)enable;
- (Boolean) isFreezeFrameMode;
- (HSMDecodeResultArray*) decode:(unsigned char *)image Width:(int)previewWidth Height:(int)previewHeight;
-(void)setBoundCorrection:(int)boundCorrection;
-(BOOL)isBoundCorrectionEnabled;
-(int)setCodabarLength:(NSArray*)array;
-(NSArray*)getCodabarLength;
- (NSString*)getSymbologyString:(int)symb SymbEx:(int)symbEx;
-(void)objectDetectorDetect:(char*)image_data withWidth:(int)width withHeight:(int)height;
-(BOOL)enableMLROI;
-(void)disableMLROI;
-(int)ObjectDetectorGetXMinAtIndex:(int)index;
- (HSMDecodeResultArray*) decodeForMLROI:(unsigned char *)image Width:(int)previewWidth Height:(int)previewHeight;
-(BOOL)isMLROIEnabled;
-(int)objectDetectorGetNumberOfROIs;
//-(void)decodeMultiEngine :(CVPixelBufferRef) pixelBuffer;
-(HSMDecodeResultArray*)decodeMultiEngine :(char*) imgPtr withWidth:(int)imageWidth withHeight:(int)imageHeight;

-(HSMDecodeResultArray*)getResultsForMLROI;
@end
