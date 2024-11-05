//
//  FindLayoutDataSource.h
//  SwiftDecoder
//
//  Created by H454944 on 28/09/23.
//

#import <UIKit/UIKit.h>
@protocol FindLayoutDataSource <NSObject>
-(UIView*)findLayoutForFindView;
-(UIView*)searchLayoutForFindView;
@end
