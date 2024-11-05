//
//  MRZDataParser.h
//
//

#import <Foundation/Foundation.h>
#import "MRZData.h"
NS_ASSUME_NONNULL_BEGIN

/**
 * @brief This class is used to convert MRZ raw string into a parsed, easy to
 *        use MRZData object
 */

@interface MRZParser : NSObject

/**
 * @brief This method accepts raw mrz string and returns a MRZData
 *        class instance that contains the parsed passport visa and TD1 ID's MRZ data
 *
 * @param mrzString Raw MRZ String from Decoder
 *
 * @return A MRZ class instance that contains the parsed passport visa and TD1 ID's
 *         MRZ data
 */

+ (MRZData*) parseRawData:(NSString*)mrzString;

/**
 * @brief This method returns the if the license is enabled for MRZ or not
 *
 * @return BOOL
 */

+(BOOL)isLicenseEnabled;

/**
 * @brief This method returns the version
 *
 * @return MRZ version
 */

+ (NSString*) getVersion;


@end

NS_ASSUME_NONNULL_END
