//
//  PreviewAndSelectTouchListener.h
//  SwiftDecoder
//
//  Created by H454944 on 11/03/24.
//

#import <Foundation/Foundation.h>

@protocol PreviewAndSelectTouchListener

@optional
- (void) onFrameSelected:(HSMDecodeResult*) barcodeSelected;
@end
