//
//  DecodeResult.h
//  SwiftDecoder
//
//  Created by H454944 on 26/02/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum
 {
    DecodeResultType_BARCODE,
    DecodeResultType_OCR,
    DecodeResultType_OCR_WITH_BARCODE
}DecodeResultType;
@interface DecodeResult : NSObject

/**
 * @brief Returns status of the result Symbology is decoded or undecoded
 *
 */
@property (assign) BOOL decodedSymbology;

-(id)initWithDecodeResultType:(DecodeResultType)resultType;
@end

NS_ASSUME_NONNULL_END
