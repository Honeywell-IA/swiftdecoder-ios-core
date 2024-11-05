/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  PluginHelper.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/18/13.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PluginHelper : NSObject

///@brief the enum of the the vibration style
typedef NS_ENUM(NSInteger, VibrateStyle) {
    VibrationLight,
    VibrationMedium,
    VibrationHeavy,
    VibrationSoft  API_AVAILABLE(ios(13.0)),
    VibrationRigid  API_AVAILABLE(ios(13.0))
};

+(void)beep;
+(void)vibrate:(VibrateStyle) vibrateStyle;
+ (void)drawAimerForRect:(CGRect)rect center:(CGPoint)center aimerSize:(int)aimerSize aimerColor:(UIColor*)aimerColor;
+ (CGPoint)convertImgCoord:(FixedPoint)imgCoord
   toViewCoordForViewWidth:(int)viewWidth
                viewHeight:(int)viewHeight
                  imgWidth:(int)imgWidth
                 imgHeight:(int)imgHeight;
@end
