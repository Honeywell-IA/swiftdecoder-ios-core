//
//  AgeVerificationPlugin.h
//  SwiftDecoder
//
//  Created by Jenith Raja A, Mohamed on 11/09/24.
//

#import <Foundation/Foundation.h>
#import "BarcodeARBasePlugin.h"
#import "DLResultListener.h"

NS_ASSUME_NONNULL_BEGIN
/**
  * @brief This plugin is used to verify age limit on the DL
  */

@interface DLAgeVerificationPlugin : BarcodeARBasePlugin {
@private
HSMDecodeResultArray *ARresults;
}
@property (nonatomic, strong) UIColor *frameColor;
@property (nonatomic, strong) UIColor *touchColor;
@property (nonatomic, assign) int age;

/**
 @brief Sets the age limit and returns age verification plugin

 @param age dl age for verification
 @return return a DLAgeVerificationPlugin
 */

- (id)initWithAgeLimit:(int)age;
/**
 * @brief API to set the age for verification
 * @param ageForVerification
 */
-(void)setAgeForVerification:(int)age;

/**
 * @brief set this listener to get the DL result
 * @param dlResultListener
 */
-(void)setDLResultListener:(id<DLResultListener>)listener;
@end

NS_ASSUME_NONNULL_END
