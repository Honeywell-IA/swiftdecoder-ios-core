//
//  ARBasePlugin.h
//  SwiftDecoder
//
//  Created by H454944 on 26/09/23.
//

#import <Foundation/Foundation.h>
#import "DecodeBasePlugin.h"
#import "AROverlayView.h"
#import "HSMDecoder.h"
NS_ASSUME_NONNULL_BEGIN
@protocol ARPluginProtocol <NSObject>

-(AROverlayView*) getAROverlayViewInst;
-(void) handleOverlayConfiguration:(NSMutableArray*) arOverlayViewArrayList;
@end
@interface ARBasePlugin : DecodeBasePlugin <ARPluginProtocol>
{
    
}

@property(nonatomic,retain) NSMutableArray *arOverlayViewList;
@property (nonatomic, assign) int viewWidth;
@property (nonatomic, assign) int viewHeight;
@property (nonatomic, assign) int persistenceDelay;
@property (nonatomic, assign) long lastDecodefailedTime;
-(float)getCentroidDiffAndDistance:(CGPoint)currentCentroid withNewCentroid:(CGPoint)newCentroid;
-(void) updateOverlayViews:(NSMutableArray*) newAROverlayViewList;
-(void) clearOverlayView;
- (AROverlayView*) getAROverLayView:(HSMDecodeResult*) barcode withFrame:(CGRect) resultFrame;
-(void)onTouchWithPoint:(CGPoint)touchPoint;
@end

NS_ASSUME_NONNULL_END
