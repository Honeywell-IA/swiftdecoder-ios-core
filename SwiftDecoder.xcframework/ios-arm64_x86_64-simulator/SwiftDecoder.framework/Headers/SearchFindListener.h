//
//  SearchFindListener.h
//  SwiftDecoder
//
//  Created by H454944 on 16/10/23.
//

/**
 * @brief This protocol must be implemented by any class that wishes to receive decoder results
 * @author E412474
 */
#import "PluginResultListener.h"

@protocol SearchFindListener <PluginResultListener>

-(void) onFindResultSelected:(HSMDecodeResult*) barcodeSelected;

-(void) onSearchResultEnd:(HSMDecodeResult*) barcodeSelected;

@end
