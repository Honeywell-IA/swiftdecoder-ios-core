//
//  BatchScanView.h
//  SwiftDecoder
//
//  Created by H454944 on 06/03/24.
//

#import <UIKit/UIKit.h>
#import "AROverlayView.h"
NS_ASSUME_NONNULL_BEGIN

@interface BatchScanView : AROverlayView

@property(nonatomic,retain) UILabel* batchNumberLabel;
+(void)setDecodeResultRequirement:(int)resultRequirement;
-(void)setFrameNumber:(int)frameNumber;
-(void) setResultList:(HSMDecodeResultArray*)result;
-(id)initWithFrame:(CGRect)frame withFrameColor:(UIColor*)frameColor;
@end

NS_ASSUME_NONNULL_END
