//
//  LicenseData.h
//  EZDL_SDK_iOS
//
//  Created by Snake Xing on 2019/3/18.
//  Copyright © 2019 Honeywell. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * @brief This class contains all information that can be parsed out of a
 *        driver's license.
 */
@interface LicenseData : NSObject

/**
 * @brief Drivers License: Issuer Identification Number
 * @details The issuer's 6 digit AAMVA indentification number.
 */
@property (retain) NSString* DLIIN;

/**
 * @brief Drivers License: Name
 * @details Cardholder's full name including any prefix and/or suffix.
 */
@property (retain) NSString* DLName;
/**
 * @brief Drivers License: last name
 * @details Family name of the cardholder. (Family name is sometimes also
 *          called 'last name' or 'surname.') Collect full name for record,
 *          print as many characters as possible on portrait side of DL/ID.
 */
@property (retain) NSString* DLNameLast;
/**
 * @brief Drivers License: first name
 * @details First name of the cardholder.
 */
@property (retain) NSString* DLNameFirst;
/**
 * @brief Drivers License: middle name
 * @details Middle name(s) of the cardholder. In the case of multiple middle
 *          names they shall be separated by a comma ','.
 */
@property (retain) NSString* DLNameMid;
/**
 * @brief Drivers License: name suffix
 * @details Name Suffix (If jurisdiction participates in systems requiring
 *          name suffix (PDPS, CDLIS, etc.), the suffix must be collected
 *          and displayed on the DL/ID and in the MRT). Collect full name
 *          for record, print as many characters as possible on portrait
 *          side of DL/ID. JR (Junior), SR (Senior), 1ST or I (First), 2ND
 *          or II (Second), 3RD or III (Third), 4TH or IV (Fourth), 5TH or V
 *          (Fifth), 6TH or VI (Sixth), 7TH or VII (Seventh), 8TH or VIII
 *          (Eighth), 9TH or IX (Ninth).
 */
@property (retain) NSString* DLNameSfx;
/**
 * @brief Drivers License: name prefix
 * @details Name prefix for the cardholder (e.g. Mr, Dr, etc.).
 */
@property (retain) NSString* DLNamePrfx;
/**
 * @brief Drivers License: mail address 1
 * @details Street portion of the cardholder address.
 */
@property (retain) NSString* DLMailAddress1;
/**
 * @brief Drivers License: mail address 2
 * @details Second line of street portion of the cardholder address.
 */
@property (retain) NSString* DLMailAddress2;
/**
 * @brief Drivers License: mail city
 * @details City portion of the cardholder address.
 */
@property (retain) NSString* DLMailCity;
/**
 * @brief Drivers License: mail state
 * @details State portion of the cardholder address.
 */
@property (retain) NSString* DLMailState;
/**
 * @brief Drivers License: mail postal code
 * @details Postal code portion of the cardholder address in the U.S. and
 *          Canada. If the trailing portion of the postal code in the U.S.
 *          is not known, zeros will be used to fill the trailing set of
 *          numbers up to nine (9) digits.
 */
@property (retain) NSString* DLMailPostalCode;

/**
 * @brief Drivers License: address 1
 * @details Street portion of the cardholder residence address.
 */
@property (retain) NSString* DLAddress1;
/**
 * @brief Drivers License: address 2
 * @details Second line of street portion of the cardholder residence
 *          address.
 */
@property (retain) NSString* DLAddress2;
/**
 * @brief Drivers License: city
 * @details City portion of the cardholder residence address.
 */
@property (retain) NSString* DLCity;
/**
 * @brief Drivers License: state
 * @details State portion of the cardholder residence address.
 */
@property (retain) NSString* DLState;
/**
 * @brief Drivers License: postal code
 * @details Postal code portion of the cardholder residence address in the
 *          U.S. and Canada. If the trailing portion of the postal code in
 *          the U.S. is not known, zeros will be used to fill the trailing
 *          set of numbers up to nine (9) digits.
 */
@property (retain) NSString* DLPostalCode;

/**
 * @brief Drivers License: ID number
 * @details ID number
 */
@property (retain) NSString* DLIDNumber;
/**
 * @brief Drivers License: class
 * @details Jurisdiction-specific vehicle class / group code, designating
 *          the type of vehicle the cardholder has privilege to drive.
 */
@property (retain) NSString* DLClass;
/**
 * @brief Drivers License: restrictions
 * @details Jurisdiction-specific codes that represent restrictions to
 *          driving privileges (such as airbrakes, automatic transmission,
 *          daylight only, etc.).
 */
@property (retain) NSString* DLRestrictions;
/**
 * @brief Drivers License: endorsements
 * @details Jurisdiction-specific codes that represent additional privileges
 *          granted to the cardholder beyond the vehicle class (such as
 *          transportation of passengers, hazardous materials, operation of
 *          motorcycles, etc.).
 */
@property (retain) NSString* DLEndorsements;
/**
 * @brief Drivers License: height
 * @details Height of cardholder. Inches (in): number of inches followed by
 *          ' in' ex. 6'1'' = '073 in' Centimeters (cm): number of
 *          centimeters followed by ' cm' ex. 181 centimeters='181 cm'.
 */
@property (retain) NSString* DLHeight;
/**
 * @brief Drivers License: height in centimeters
 * @details Height of cardholder in centimeters.
 */
@property (retain) NSString* DLHeightCM;
/**
 * @brief Drivers License: weight
 * @details Cardholder weight in pounds Ex. 185 lb = '185'.
 */
@property (retain) NSString* DLWeight;
/**
 * @brief Drivers License: weight in kilograms
 * @details Cardholder weight in kilograms Ex. 84 kg = '084'.
 */
@property (retain) NSString* DLWeightKG;
/**
 * @brief Drivers License: eye color
 * @details Color Color of cardholder's eyes. (ANSI D-20 codes).
 */
@property (retain) NSString* DLEyes;
/**
 * @brief Drivers License: hair color
 * @details Bald, black, blonde, brown, gray, red/auburn, sandy, white,
 *          unknown. If the issuing jurisdiction wishes to abbreviate
 *          colors, the three-character codes provided in ANSI D20 must be
 *          used.
 */
@property (retain) NSString* DLHair;

/**
 * @brief Drivers License: expiration date
 * @details Date on which the driving and identification privileges granted
 *          by the document are no longer valid. (MMDDCCYY for U.S.,
 *          CCYYMMDD fors Canada).
 */
@property (retain) NSString* DLExpires;
/**
 * @brief Drivers License: date of birth
 * @details Date on which the cardholder was born. (MMDDCCYY for U.S.,
 *          CCYYMMDD for Canada).
 */
@property (retain) NSString* DLBirthDate;
/**
 * @brief Drivers License: sex
 * @details Gender of the cardholder. 1 = male, 2 = female.
 */
@property (retain) NSString* DLSex;
/**
 * @brief Drivers License: date of issue
 * @details Date on which the document was issued. (MMDDCCYY for U.S.,
 *          CCYYMMDD for Canada).
 */
@property (retain) NSString* DLIssueDate;
/**
 * @brief Drivers License: Social Security Number
 * @details Cardholder's Social Security Number
 */
@property (retain) NSString* DLSSN;
/**
 * @brief Drivers License: security (mag stripe only)
 * @details security (mag stripe only)
 */
@property (retain) NSString* DLSecurity;
/**
 * @brief Permit: ID
 * @details The number assigned or calculated by the issuing authority.
 */
@property (retain) NSString* PermitID;
/**
 * @brief Drivers License: Issue Timestamp
 * @details Issue Timestamp
 */
@property (retain) NSString* DLIssTimestamp;
/**
 * @brief Drivers License: Number of Duplicates
 * @details Number of Duplicates
 */
@property (retain) NSString* DLNumDuplicates;
/**
 * @brief Drivers License: Medical Indicator/Codes
 * @details Medical Indicator/Codes
 */
@property (retain) NSString* DLMedicalCodes;
/**
 * @brief Drivers License: organ donor
 * @details Field that indicates that the cardholder is an organ donor =
 *          '1'.
 */
@property (retain) NSString* DLOrganDonor;
/**
 * @brief Drivers License: Non-Resident Indicator
 * @details Non-Resident Indicator
 */
@property (retain) NSString* DLNonResident;
/**
 * @brief Drivers License: Unique Customer Identifier
 * @details Unique Customer Identifier
 */
@property (retain) NSString* DLCustomerID;

/**
 * @brief Drivers License: weight range
 */
@property (retain) NSString* DLWeightRange;
/**
 * @brief Drivers License: Document Discriminator
 * @details Number must uniquely identify a particular document issued to
 *          that customer from others that may have been issued in the past.
 *          This number may serve multiple purposes of document
 *          discrimination, audit information number, and/or inventory
 *          control.
 */
@property (retain) NSString* DLDocumentDiscr;
/**
 * @brief Drivers License: country
 * @details country
 */
@property (retain) NSString* DLCountry;
/**
 * @brief Drivers License: place of birth
 * @details Country and municipality and/or state/province.
 */
@property (retain) NSString* DLPlaceOfBirth;
/**
 * @brief Drivers License: audit info
 * @details A string of letters and/or numbers that identifies when, where,
 *          and by whom a driver license/ID card was made. If audit
 *          information is not used on the card or the MRT, it must be
 *          included in the driver record.
 */
@property (retain) NSString* DLAuditInfo;
/**
 * @brief Drivers License: Inventory control number
 * @details A string of letters and/or numbers that is affixed to the raw
 *          materials (card stock, laminate, etc.) used in producing driver
 *          licenses and ID cards. (DHS recommended field).
 */
@property (retain) NSString* DLInventoryCtrl;
/**
 * @brief Drivers License: race ethnicity
 * @details race ethnicity
 */
@property (retain) NSString* DLRaceEthnicity;
/**
 * @brief Drivers License: Std Vehicle Class
 * @details Standard Vehicle Class
 */
@property (retain) NSString* DLStdVehicleClass;
/**
 * @brief Drivers License: Std endorsements
 * @details Standard endorsements
 */
@property (retain) NSString* DLStdEndorsements;
/**
 * @brief Drivers License: Std restrictions
 * @details Standard restrictions
 */
@property (retain) NSString* DLStdRestrictions;
/**
 * @brief Drivers License: class description
 * @details class description
 */
@property (retain) NSString* DLClassDesc;
/**
 * @brief Drivers License: endorsements description
 * @details endorsements description
 */
@property (retain) NSString* DLEndorsementsDesc;
/**
 * @brief Drivers License: restriction description
 * @details restriction description
 */
@property (retain) NSString* DLRestrictionsDesc;

/**
 * @brief Height in Inches
 * @details Height in Inches
 */
@property (retain) NSString* XHeightInches;
/**
 * @brief Height in Centimeters
 * @details Height in Centimeters
 */
@property (retain) NSString* XHeightCentimeters;

/**
 * @brief Drivers License: Compliance Type
 * @details Compliance Type
 */
@property (retain) NSString* DLComplianceType;
/**
 * @brief Drivers License: Revision Date
 * @details Revision Date
 */
@property (retain) NSString* DLRevisionDate;
/**
 * @brief Drivers License: HAZMAT Expiration Date
 * @details HAZMAT Expiration Date
 */
@property (retain) NSString* DLHAZMATExpDate;
/**
 * @brief Drivers License: Limited Duration
 * @details Limited Duration
 */
@property (retain) NSString* DLLimitedDuration;
/**
 * @brief Drivers License: Trunc Last
 * @details Trunc Last
 */
@property (retain) NSString* DLNameTruncLast;
/**
 * @brief Drivers License: Trunc First
 * @details Trunc First
 */
@property (retain) NSString* DLNameTruncFirst;
/**
 * @brief Drivers License: Trunc Middle
 * @details Trunc Middle
 */
@property (retain) NSString* DLNameTruncMid;
/**
 * @brief Drivers License: Under 18 Until
 * @details Date on which the cardholder turns 18 years old. (MMDDCCYY for
 *          U.S., CCYYMMDD for Canada).
 */
@property (retain) NSString* DLUnder18Until;
/**
 * @brief Drivers License: Under 19 Until
 * @details Date on which the cardholder turns 19 years old. (MMDDCCYY for
 *          U.S., CCYYMMDD for Canada).
 */
@property (retain) NSString* DLUnder19Until;
/**
 * @brief Drivers License: Under 21 Until
 * @details Date on which the cardholder turns 21 years old. (MMDDCCYY for
 *          U.S., CCYYMMDD for Canada).
 */
@property (retain) NSString* DLUnder21Until;
/**
 * @brief Drivers License: Veteran
 * @details Field that indicates that the cardholder is a veteran = '1'.
 */
@property (retain) NSString* DLVeteran;

/**
 * @brief Drivers License: IssuingAuthority
 * @details Field that indicates that the Issuing Authority
 */

@property (retain) NSString* DLIssuingAuthority;

@end

NS_ASSUME_NONNULL_END
