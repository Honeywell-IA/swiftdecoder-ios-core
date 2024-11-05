//
//  MRZData.h
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * @brief This class contains all information that can be parsed out of a
 *       MRZ string.
 */
@interface MRZData : NSObject

/**
 * @brief MRZ Data: Issuer Document Number
 * @details Indentification number for passport or visa or TD1 ID Document.
 */

@property (retain) NSString* DocumentNo;
/**
 * @brief MRZ Data: last name
 * @details Family name of the passport or visa or TD1 ID Document holder. (Family name is sometimes also
 *          called 'last name' or 'surname.') .
 */
@property (retain) NSString* LastName;
/**
 * @brief MRZ Data: first name
 * @details First name of the passport or visa or TD1 ID Document holder.
 */
@property (retain) NSString* GivenName;
/**
 * @brief MRZ Data: Gender
 * @details Gender of the passport or visa or TD1 ID Document holder. Possible values M/F/U. M = Male, F = Female, U = Unknown
 */
@property (retain) NSString* Gender;
/**
 * @brief MRZ Data: Nationality
 * @details Nationality of the passport or visa or TD1 ID Document holder
 */
@property (retain) NSString* Nationality;
/**
 * @brief MRZ Data: IssuingCountry
 * @details IssuingCountry of the passport or visa or TD1 ID Document
 */
@property (retain) NSString* IssuingCountry;
/**
 * @brief MRZ Data: DOB
 * @details Date on which the passport or visa or TD1 ID Document holder was born. (dd-mm-yy).
 */
@property (retain) NSString* DateofBirth;
/**
 * @brief MRZ Data: DocumentDateOfExpiry
 * @details Date on which the passport or visa or TD1 ID Document will be no longer be valid.(dd-mm-yy)
 */

@property (retain) NSString* DateofExpiry;
@end

NS_ASSUME_NONNULL_END
