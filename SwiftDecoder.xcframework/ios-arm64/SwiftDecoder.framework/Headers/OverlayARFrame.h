//
//  OverlayARFrame.h
//  SwiftDecoderDemo
//
//  Created by Misra, Vaibhav on 10/27/15.
//  Copyright © 2015 Honeywell. All rights reserved.
//

#import "HSMDecodeResult.h"

@interface OverlayARFrame : NSObject

@property (nonatomic, strong) HSMDecodeResult *result;
@property (nonatomic, assign) CGPoint tl;
@property (nonatomic, assign) CGPoint tr;
@property (nonatomic, assign) CGPoint bl;
@property (nonatomic, assign) CGPoint br;
@property (nonatomic, assign) int number;
@property (nonatomic, assign) BOOL isSelected;

- (instancetype)initWithResult:(HSMDecodeResult*)result
                       topLeft:(CGPoint)tl
                      topRight:(CGPoint)tr
                    bottomLeft:(CGPoint)bl
                   bottomRight:(CGPoint)br
                        number:(int)number;

- (CGPoint)getCentroid;
- (BOOL)isPointWithin:(CGPoint)point;

@end
