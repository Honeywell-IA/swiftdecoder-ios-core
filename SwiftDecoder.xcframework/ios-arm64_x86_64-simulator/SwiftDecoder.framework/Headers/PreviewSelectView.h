//
//  PreviewSelectView.h
//  SwiftDecoder
//
//  Created by H454944 on 11/03/24.
//
#import "AROverlayView.h"
#import "PreviewAndSelectTouchListener.h"
NS_ASSUME_NONNULL_BEGIN

@interface PreviewSelectView : AROverlayView
-(id) initWithFrame:(CGRect)frame withFrameColor:(UIColor*)frameColor withListener:(id<PreviewAndSelectTouchListener>)listener;
@end

NS_ASSUME_NONNULL_END
