//
//  LicenseParser.h
//  EZDL_SDK_iOS
//
//  Created by Snake Xing on 2019/3/19.
//  Copyright © 2019 Honeywell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LicenseData.h"

NS_ASSUME_NONNULL_BEGIN
/**
 * @brief This class is used to convert raw barcode data into a parsed, easy to
 *        use LicenseData object
 */
@interface LicenseParser : NSObject

/**
 * @brief This method returns the version
 *
 * @return LicenseParser version
 */
+ (NSString*) getVersion;

/**
 * @brief This method returns the if the license is enabled for EZDL or not
 *
 * @return BOOL
 */

+(BOOL)isLicenseEnabled;

/**
 * @brief This method accepts raw barcode data and returns a LicenseData
 *        class instance that contains the parsed driver's license data
 *
 * @param barcodeByteData Raw barcode data
 *
 * @return A LicenseData class instance that contains the parsed driver's
 *         license data
 */
+ (LicenseData*) parseRawData:(NSData*)barcodeByteData;


@end

NS_ASSUME_NONNULL_END
