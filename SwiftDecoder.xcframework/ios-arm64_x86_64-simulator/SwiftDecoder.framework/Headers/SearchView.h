//
//  SearchView.h
//  SwiftDecoder
//
//  Created by H454944 on 27/09/23.
//

#import <UIKit/UIKit.h>
#import "AROverlayView.h"
#import "SearchLayoutDataSource.h"
#import "SearchListener.h"
NS_ASSUME_NONNULL_BEGIN

@interface SearchView : AROverlayView

@property(nonatomic,weak) id<SearchLayoutDataSource> datasource;

-(id)initWithDataSource:(id<SearchLayoutDataSource>) dataSource withSearchListener:(id<SearchListener>) searchListener;

@end

NS_ASSUME_NONNULL_END
