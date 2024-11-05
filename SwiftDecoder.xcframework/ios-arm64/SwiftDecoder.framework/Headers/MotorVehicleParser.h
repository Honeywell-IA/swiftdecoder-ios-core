//
//  MotorVehicleParser.h
//

#import <Foundation/Foundation.h>
#import "MotorVehicleData.h"

NS_ASSUME_NONNULL_BEGIN
/**
 * @brief This class is used to convert raw barcode data into a parsed, easy to
 *        use MotorVehicleData object
 */

@interface MotorVehicleParser : NSObject

/**
 * @brief This method accepts raw barcode data into motor vehicle and returns a EZMV Data
 *
 * @param barcodeByteData Raw EZMV String from Decoder
 *
 * @return A EZMV class instance that contains the parsed motor Vehicle Data.
 *
 */

+ (MotorVehicleData*) parseRawData:(NSData*)barcodeByteData;

/**
 * @brief This method returns the version
 *
 * @return EZMV version
 */
+ (NSString*)getVersion;

/**
 * @brief This method returns the if the license is enabled for EZMV or not
 *
 * @return BOOL
 */

+(BOOL)isLicenseEnabled;

@end

NS_ASSUME_NONNULL_END
