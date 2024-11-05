//
//  BarcodeARBasePlugin.h
//  SwiftDecoder
//
//  Created by H454944 on 05/03/24.
//

#import <UIKit/UIKit.h>
#import "AROverlayView.h"
#import "ARBasePlugin.h"
#import "HSMDecoder.h"

NS_ASSUME_NONNULL_BEGIN

@interface BarcodeARBasePlugin : ARBasePlugin

@property (nonatomic, strong) UIColor *frameColor;
@property (nonatomic, strong) UIColor *touchColor;

/**
@brief This method changes the color of the Accent(frame and number text)

@param color accent color that has to be set
*/
- (void)setAccentColor:(UIColor *)color;

/**
@brief  Only override drawRect: if you perform custom drawing. An empty implementation adversely affects performance during animation.

@param rect The portion of the view’s bounds that needs to be updated.
*/
-(void)drawRect:(CGRect)rect;

/**
* @brief Called when video preview comes to the foreground. This should be used to initialize the plug-in on each scan attempt.
*/
- (void)onStart;

/**
* @brief Called when a barcode(s) has been decoded in the image
*
* @param results
*      An array results for all decode barcodes
*/
-(void)onDecode:(HSMDecodeResultArray *)results;

/**
* @brief Called each time a frame cannot be successfully decoded
*/
-(void)onDecodeFailed;

///**
//* @brief sets the  image icon for stock plugin view
//*
//* @param image
//*      UIImage that needs to be set as icon.
//*/
//-(AROverlayView*) getAROverlayViewInst;

-(void)onTouchWithPoint:(CGPoint)touchPoint;

@end

NS_ASSUME_NONNULL_END
