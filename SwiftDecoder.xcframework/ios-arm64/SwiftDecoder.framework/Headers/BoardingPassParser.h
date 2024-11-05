//
//  BoardingPassParser.h
//
//

#import <Foundation/Foundation.h>
#import "BoardingPassData.h"
NS_ASSUME_NONNULL_BEGIN

/**
 * @brief This class is used to convert raw barcode data into a parsed, easy to
 *        use BoardingPassData object
 */
@interface BoardingPassParser : NSObject

/**
 * @brief This method accepts raw barcode data into boarding pass and returns a BCBP Data
 *
 * @param barcodeByteData Raw BCBP String from Decoder
 *
 * @return A BCBP class instance that contains the parsed boardingpass data 
 *        
 */

+ (BoardingPassData*) parseRawData:(NSData*)barcodeByteData;

/**
 * @brief This method returns the version
 *
 * @return BoardingPass version
 */
+ (NSString*) getVersion;

/**
 * @brief This method returns the if the license is enabled for EZBCBP or not
 *
 * @return BOOL
 */

+(BOOL)isLicenseEnabled;
@end

NS_ASSUME_NONNULL_END


