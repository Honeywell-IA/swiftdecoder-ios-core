//
//  SearchListener.h
//  SwiftDecoder
//
//  Created by H454944 on 27/09/23.
//
#import "HSMDecodeResult.h"
@protocol SearchListener <NSObject>
-(void) onSearchEnd:(HSMDecodeResult*) barcodeSelected;
@end

