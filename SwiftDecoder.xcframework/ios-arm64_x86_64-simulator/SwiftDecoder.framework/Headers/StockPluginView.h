//
//  StockPluginView.h
//  SwiftDecoder
//
//  Created by K N, Vinod on 28/08/24.
//

#import <UIKit/UIKit.h>
#import "AROverlayView.h"
NS_ASSUME_NONNULL_BEGIN

@interface StockPluginView : AROverlayView

-(void)setStockData:(NSArray*)stockArray;
-(void)setStockIcon:(UIImage*)image;
@end

NS_ASSUME_NONNULL_END
