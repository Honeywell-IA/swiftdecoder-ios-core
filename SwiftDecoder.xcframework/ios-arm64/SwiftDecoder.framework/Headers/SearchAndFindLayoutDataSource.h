//
//  SearchAndFindLayoutDataSource.h
//  SwiftDecoder
//
//  Created by H454944 on 28/09/23.
//
#import <UIKit/UIKit.h>
@protocol SearchAndFindLayoutDataSource <NSObject>
-(UIView*)overlayLayoutForPlugin;
-(UIView*)layoutForFindView;
-(UIView*)layoutForSearchView;
@end
