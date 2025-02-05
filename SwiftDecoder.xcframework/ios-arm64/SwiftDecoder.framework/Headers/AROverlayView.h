//
//  AROverlayView.h
//  SwiftDecoder
//
//  Created by H454944 on 26/09/23.
//

#import <UIKit/UIKit.h>
#import "DecodeResult.h"
#import "HSMDecodeResult.h"
NS_ASSUME_NONNULL_BEGIN
@protocol AROverlayProtocol <NSObject>
-(int)getViewIndex;
-(BOOL)isDrawImage;
@end
@interface AROverlayView : UIView<AROverlayProtocol>

@property(nonatomic,retain) UIView* contentView;
@property(nonatomic,assign) BOOL shouldUpdateConstraints;
@property (nonatomic, assign) CGPoint tl;
@property (nonatomic, assign) CGPoint tr;
@property (nonatomic, assign) CGPoint bl;
@property (nonatomic, assign) CGPoint br;
@property (nonatomic, retain) DecodeResult *result;
@property (nonatomic, assign) DecodeResultType resultType;

@property (nonatomic, assign) BOOL markedForRemoval;

@property (nonatomic, assign) CGRect oldFrame;
@property (nonatomic, retain) NSString *barcodeData;
@property (nonatomic, retain) NSString *overlayText;
@property (nonatomic, assign) float width;
@property (nonatomic, assign) float height;
@property (nonatomic, assign)BOOL renderUndecodedOverlay;

-(void) clearOverlayData;
-(void)updateOverlayData:(AROverlayView*)ref;
-(void)addOverlayData:(CGPoint)tl :(CGPoint)tr :(CGPoint)bl :(CGPoint)br :(DecodeResult*)decodeResult withBarcodeData:(NSString*)barcode;
-(void) calculateLayoutParams;
- (CGPoint)getCentroid;
- (BOOL)isPointWithin:(CGPoint)point;
-(CGRect)getFrame;
-(void)onTouchWithPoint:(CGPoint)touchPoint;
-(CGFloat) calculateAngleOfRectangle;
-(void) decrementDisplayCountDown;
-(int) getDisplayCountDown;
-(void) resetDisplayCountDown;
-(void) setUndecodedOverlayRendering:(BOOL) flag;
-(void)removeRotationforSubviews;
@end

NS_ASSUME_NONNULL_END
