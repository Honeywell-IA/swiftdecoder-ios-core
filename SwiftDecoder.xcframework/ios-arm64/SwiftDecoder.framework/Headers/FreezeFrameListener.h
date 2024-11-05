//
//  FreezeFrameListener.h
//  HSMDecoderAPI
//
//  Created by H279834 on 2022/9/15.
//

#ifndef FreezeFrameListener_h
#define FreezeFrameListener_h


#import <Foundation/Foundation.h>

/**
 * @brief This protocol must be implemented by any class that wishes to receive freeze frame  status
 */
@protocol FreezeFrameListener
/**
 * @brief This method is called when freeze frame is enabled
 *
 */
- (void)onFreezeFrame;
/**
 * @brief This method is called when freeze frame is disabled
 *
 */
- (void)onUnFreezeFrame;

@end
#endif /* FreezeFrameListener_h */
