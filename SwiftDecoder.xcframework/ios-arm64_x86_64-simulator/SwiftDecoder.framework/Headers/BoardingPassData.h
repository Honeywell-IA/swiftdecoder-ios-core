//
//  BoardingPassData.h
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * @brief This class contains all information that can be parsed out of a
 *       BCBP string.
 */
@interface BoardingPassData : NSObject

/**
 * @brief BCBP Data: Segment1 FormatCode
 * @details Segment1 FormateCode of airline ticket.
 */
@property (retain) NSString* formatCode;
/**
 * @brief BCBP Data: Number of Legs for Passenger
 * @details Segment1 Number of Legs for Passenger
 */
@property (retain) NSString* numberOfLegs;
/**
 * @brief BCBP Data: Passenger Name
 * @details Segment1 passengerName of airline ticket.
 */
@property (retain) NSString* passengerName;
/**
 * @brief BCBP Data: Electronic Ticket Indicator
 * @details Segment1 Electronic Ticket Indicator of airline ticket.
 */
@property (retain) NSString* electTicketInd;
/**
 * @brief BCBP Data: Operating Carrier PNR Code
 * @details Segment1 Operating Carrier PNR Code of airline ticket.
 */
@property (retain) NSString* oprCarrierPNR;
/**
 * @brief BCBP Data: From City Airport Code
 * @details Segment1 From City Airport Code of airline ticket.
 */
@property (retain) NSString* fromCityAirCode;
/**
 * @brief BCBP Data: To City Airport Code
 * @details Segment1 To City Airport Code of airline ticket.
 */
@property (retain) NSString* toCityAirCode;
/**
 * @brief BCBP Data: Operating Carrier Designator
 * @details Segment1 Operating Carrier Designator of airline ticket.
 */
@property (retain) NSString* oprCarriDesig;
/**
 * @brief BCBP Data: Flight Number
 * @details Segment1 Flight Number of airline ticket.
 */
@property (retain) NSString* flightNumber;
/**
 * @brief BCBP Data: Date of Flight (Julian Date)
 * @details Segment1 Date of Flight  of airline ticket.
 */
@property (retain) NSString* dateOfFlight;
/**
 * @brief BCBP Data: Compartment Code
 * @details Segment1 Compartment Code of airline ticket.
 */
@property (retain) NSString* compartmentCode;
/**
 * @brief BCBP Data:Seat Number
 * @details Segment1 Seat Number of airline ticket.
 */
@property (retain) NSString* seatNumber;
/**
 * @brief BCBP Data: Check-in Sequence Number
 * @details Segment1 Check-in Sequence Number of airline ticket.
 */
@property (retain) NSString* checkInSequence;
/**
 * @brief BCBP Data: Passenger Status
 * @details Segment1 Passenger Status of airline ticket.
 */
@property (retain) NSString* passengerStatus;
/**
 * @brief BCBP Data: Variable FieldSize
 * @details Segment1 Variable FieldSize of airline ticket.
 */
@property (retain) NSString* fieldSizeVarField;
/**
 * @brief BCBP Data: Beginning of Version Number
 * @details Segment1 Beginning of Version Number of airline ticket.
 */
@property (retain) NSString* beginningVersionNumber;
/**
 * @brief BCBP Data: Version Number
 * @details Segment1 Version Number of airline ticket.
 */
@property (retain) NSString* versionNumber;
/**
 * @brief BCBP Data: fieldSizeOfStructMessageUnique
 * @details Segment1 FieldSize of Unique Message of airline ticket.
 */
@property (retain) NSString* fieldSizeOfStructMessageUnique;
/**
 * @brief BCBP Data: Passenger Description
 * @details Segment1 Passenger Description of airline ticket.
 */
@property (retain) NSString* passengerDescription;
/**
 * @brief BCBP Data: Source of Check-in
 * @details Segment1 Source of Check-in of airline ticket.
 */
@property (retain) NSString* sourceOfCheckIn;
/**
 * @brief BCBP Data:  Source of Boarding Pass Issuance
 * @details Segment1 Source of Boarding Pass Issuance of airline ticket.
 */
@property (retain) NSString* sourceOfBoardingPassIssuance;
/**
 * @brief BCBP Data: Date of Issue of Boarding Pass (Julian Date)
 * @details Segment1 Date of Issue of Boarding Pass  of airline ticket.
 */
@property (retain) NSString* dateOfIssueBoardingPass;
/**
 * @brief BCBP Data: Document Type
 * @details Segment1 Document Type of airline ticket.
 */
@property (retain) NSString* documentType;
/**
 * @brief BCBP Data: Airline Designator of Boarding Pass Issuer
 * @details Segment1 Airline Designator of Boarding Pass Issuer of airline ticket.
 */
@property (retain) NSString* airlineDesigBoardingPassIssuer;
/**
 * @brief BCBP Data: Baggage Tag License Plate Number(s)
 * @details Segment1 Baggage Tag License Plate Number of airline ticket.
 */
@property (retain) NSString* baggageTagLicensePlateNumber;
/**
 * @brief BCBP Data: fieldSizeOfStructMessageRepeat
 * @details Segment1 fieldSizeOfStructMessageRepeat of airline ticket.
 */
@property (retain) NSString* fieldSizeOfStructMessageRepeat;
/**
 * @brief BCBP Data: Airline Numeric Code
 * @details Segment1 Airline Numeric Code of airline ticket.
 */
@property (retain) NSString* airlineNumericCode;
/**
 * @brief BCBP Data: Document Form/Serial Number
 * @details Segment1 Airline of airline ticket.
 */
@property (retain) NSString* documentFormOrSerialNumber;
/**
 * @brief BCBP Data: Selectee Indicator
 * @details Segment1 Selectee Indicator of airline ticket.
 */
@property (retain) NSString* selecteeIndicator;
/**
 * @brief BCBP Data: International Documentation Verification
 * @details Segment1 International Documentation Verification of airline ticket.
 */
@property (retain) NSString* internationalDocumentVerification;
/**
 * @brief BCBP Data: Marketing Carrier Designator
 * @details Segment1 Marketing Carrier Designator of airline ticket.
 */
@property (retain) NSString* marketingCarrierDesignator;
/**
 * @brief BCBP Data: Frequent Flyer Airline Designator
 * @details Segment1 Frequent Flyer Airline Designator of airline ticket.
 */
@property (retain) NSString* freqFlierAirlineDesignator;
/**
 * @brief BCBP Data: Frequent Flyer Number
 * @details Segment1 Frequent Flyer Number of airline ticket.
 */
@property (retain) NSString* freqFlierNumber;
/**
 * @brief BCBP Data: ID/AD Indicator
 * @details Segment1 ID/AD Indicator of airline ticket.
 */
@property (retain) NSString* idOrAdIndicator;
/**
 * @brief BCBP Data: Free Baggage Allowance
 * @details Segment1 Free Baggage Allowance of airline ticket.
 */
@property (retain) NSString* freeBaggageAllowance;
/**
 * @brief BCBP Data: For Individual Airline Use
 * @details Segment1For Individual Airline Use of airline ticket.
 */
@property (retain) NSString* forIndividualAirlineUse;
/**
 * @brief BCBP Data: Operating Carrier PNR Code
 * @details Segment2 Operating Carrier PNR Code of airline ticket.
 */
@property (retain) NSString* oprCarrierPNR2;
/**
 * @brief BCBP Data: From City Airport Code
 * @details Segment2 From City Airport Code of airline ticket.
 */
@property (retain) NSString* fromCityAirCode2;
/**
 * @brief BCBP Data: To City Airport Code
 * @details Segment2 To City Airport Code of airline ticket.
 */
@property (retain) NSString* toCityAirCode2;
/**
 * @brief BCBP Data: Operating Carrier Designator
 * @details Segment2 Operating Carrier Designator of airline ticket.
 */
@property (retain) NSString* oprCarriDesig2;
/**
 * @brief BCBP Data: Flight Number
 * @details Segment2 Flight Number of airline ticket.
 */
@property (retain) NSString* flightNumber2;
/**
 * @brief BCBP Data: Date of Flight (Julian Date)
 * @details Segment2 Date of Flight  of airline ticket.
 */
@property (retain) NSString* dateOfFlight2;
/**
 * @brief BCBP Data: Compartment Code
 * @details Segment2 Compartment Code of airline ticket.
 */
@property (retain) NSString* compartmentCode2;
/**
 * @brief BCBP Data:Seat Number
 * @details Segment2 Seat Number of airline ticket.
 */
@property (retain) NSString* seatNumber2;
/**
 * @brief BCBP Data: Check-in Sequence Number
 * @details Segment2 Check-in Sequence Number of airline ticket.
 */
@property (retain) NSString* checkInSequence2;
/**
 * @brief BCBP Data: Passenger Status
 * @details Segment2 Passenger Status of airline ticket.
 */
@property (retain) NSString* passengerStatus2;
/**
 * @brief BCBP Data: Variable FieldSize
 * @details Segment2 Variable FieldSize of airline ticket.
 */
@property (retain) NSString* fieldSizeVarField2;
/**
 * @brief BCBP Data: fieldSizeOfStructMessageRepeat
 * @details Segment2 fieldSizeOfStructMessageRepeat of airline ticket.
 */
@property (retain) NSString* fieldSizeOfStructMessageRepeat2;

/**
 * @brief BCBP Data: Airline Numeric Code
 * @details Segment2 Airline Numeric Code of airline ticket.
 */
@property (retain) NSString* airlineNumericCode2;
/**
 * @brief BCBP Data: Document Form/Serial Number
 * @details Segment2 Airline of airline ticket.
 */
@property (retain) NSString* documentFormOrSerialNumber2;
/**
 * @brief BCBP Data: Selectee Indicator
 * @details Segment2 Selectee Indicator of airline ticket.
 */
@property (retain) NSString* selecteeIndicator2;
/**
 * @brief BCBP Data: International Documentation Verification
 * @details Segment2 International Documentation Verification of airline ticket.
 */
@property (retain) NSString* internationalDocumentVerification2;
/**
 * @brief BCBP Data: Marketing Carrier Designator
 * @details Segment2 Marketing Carrier Designator of airline ticket.
 */
@property (retain) NSString* marketingCarrierDesignator2;
/**
 * @brief BCBP Data: Frequent Flyer Airline Designator
 * @details Segment2 Frequent Flyer Airline Designator of airline ticket.
 */
@property (retain) NSString* freqFlierAirlineDesignator2;
/**
 * @brief BCBP Data: Frequent Flyer Number
 * @details Segment2 Frequent Flyer Number of airline ticket.
 */
@property (retain) NSString* freqFlierNumber2;
/**
 * @brief BCBP Data: ID/AD Indicator
 * @details Segment2 ID/AD Indicator of airline ticket.
 */
@property (retain) NSString* idOrAdIndicator2;
/**
 * @brief BCBP Data: Free Baggage Allowance
 * @details Segment2 Free Baggage Allowance of airline ticket.
 */
@property (retain) NSString* freeBaggageAllowance2;
/**
 * @brief BCBP Data: For Individual Airline Use
 * @details Segment2 For Individual Airline Use of airline ticket.
 */
@property (retain) NSString* forIndividualAirlineUse2;
/**
 * @brief BCBP Data: Operating Carrier PNR Code
 * @details Segment3 Operating Carrier PNR Code of airline ticket.
 */
@property (retain) NSString* oprCarrierPNR3;
/**
 * @brief BCBP Data: From City Airport Code
 * @details Segment3 From City Airport Code of airline ticket.
 */
@property (retain) NSString* fromCityAirCode3;
/**
 * @brief BCBP Data: To City Airport Code
 * @details Segment3 To City Airport Code of airline ticket.
 */
@property (retain) NSString* toCityAirCode3;
/**
 * @brief BCBP Data: Operating Carrier Designator
 * @details Segment3 Operating Carrier Designator of airline ticket.
 */
@property (retain) NSString* oprCarriDesig3;
/**
 * @brief BCBP Data: Flight Number
 * @details Segment3 Flight Number of airline ticket.
 */
@property (retain) NSString* flightNumber3;
/**
 * @brief BCBP Data: Date of Flight (Julian Date)
 * @details Segment3 Date of Flight  of airline ticket.
 */
@property (retain) NSString* dateOfFlight3;
/**
 * @brief BCBP Data: Compartment Code
 * @details Segment3 Compartment Code of airline ticket.
 */
@property (retain) NSString* compartmentCode3;
/**
 * @brief BCBP Data:Seat Number
 * @details Segment3 Seat Number of airline ticket.
 */
@property (retain) NSString* seatNumber3;
/**
 * @brief BCBP Data: Check-in Sequence Number
 * @details Segment3 Check-in Sequence Number of airline ticket.
 */
@property (retain) NSString* checkInSequence3;
/**
 * @brief BCBP Data: Passenger Status
 * @details Segment3 Passenger Status of airline ticket.
 */
@property (retain) NSString* passengerStatus3;
/**
 * @brief BCBP Data: Variable FieldSize
 * @details Segment3 Variable FieldSize of airline ticket.
 */
@property (retain) NSString* fieldSizeVarField3;
/**
 * @brief BCBP Data: fieldSizeOfStructMessageRepeat
 * @details Segment3 fieldSizeOfStructMessageRepeat of airline ticket.
 */
@property (retain) NSString* fieldSizeOfStructMessageRepeat3;

/**
 * @brief BCBP Data: Airline Numeric Code
 * @details Segment3 Airline Numeric Code of airline ticket.
 */
@property (retain) NSString* airlineNumericCode3;
/**
 * @brief BCBP Data: Document Form/Serial Number
 * @details Segment3 Airline of airline ticket.
 */
@property (retain) NSString* documentFormOrSerialNumber3;
/**
 * @brief BCBP Data: Selectee Indicator
 * @details Segment3 Selectee Indicator of airline ticket.
 */
@property (retain) NSString* selecteeIndicator3;
/**
 * @brief BCBP Data: International Documentation Verification
 * @details Segment3 International Documentation Verification of airline ticket.
 */
@property (retain) NSString* internationalDocumentVerification3;
/**
 * @brief BCBP Data: Marketing Carrier Designator
 * @details Segment3 Marketing Carrier Designator of airline ticket.
 */
@property (retain) NSString* marketingCarrierDesignator3;
/**
 * @brief BCBP Data: Frequent Flyer Airline Designator
 * @details Segment3 Frequent Flyer Airline Designator of airline ticket.
 */
@property (retain) NSString* freqFlierAirlineDesignator3;
/**
 * @brief BCBP Data: Frequent Flyer Number
 * @details Segment3 Frequent Flyer Number of airline ticket.
 */
@property (retain) NSString* freqFlierNumber3;
/**
 * @brief BCBP Data: ID/AD Indicator
 * @details Segment3 ID/AD Indicator of airline ticket.
 */
@property (retain) NSString* idOrAdIndicator3;
/**
 * @brief BCBP Data: Free Baggage Allowance
 * @details Segment3 Free Baggage Allowance of airline ticket.
 */
@property (retain) NSString* freeBaggageAllowance3;
/**
 * @brief BCBP Data: For Individual Airline Use
 * @details Segment3For Individual Airline Use of airline ticket.
 */
@property (retain) NSString* forIndividualAirlineUse3;
/**
 * @brief BCBP Data: Operating Carrier PNR Code
 * @details Segment4 Operating Carrier PNR Code of airline ticket.
 */
@property (retain) NSString* oprCarrierPNR4;
/**
 * @brief BCBP Data: From City Airport Code
 * @details Segment4 From City Airport Code of airline ticket.
 */
@property (retain) NSString* fromCityAirCode4;
/**
 * @brief BCBP Data: To City Airport Code
 * @details Segment4 To City Airport Code of airline ticket.
 */
@property (retain) NSString* toCityAirCode4;
/**
 * @brief BCBP Data: Operating Carrier Designator
 * @details Segment4 Operating Carrier Designator of airline ticket.
 */
@property (retain) NSString* oprCarriDesig4;
/**
 * @brief BCBP Data: Flight Number
 * @details Segment4 Flight Number of airline ticket.
 */
@property (retain) NSString* flightNumber4;
/**
 * @brief BCBP Data: Date of Flight (Julian Date)
 * @details Segment4 Date of Flight  of airline ticket.
 */
@property (retain) NSString* dateOfFlight4;
/**
 * @brief BCBP Data: Compartment Code
 * @details Segment4 Compartment Code of airline ticket.
 */
@property (retain) NSString* compartmentCode4;
/**
 * @brief BCBP Data:Seat Number
 * @details Segment4 Seat Number of airline ticket.
 */
@property (retain) NSString* seatNumber4;
/**
 * @brief BCBP Data: Check-in Sequence Number
 * @details Segment4 Check-in Sequence Number of airline ticket.
 */
@property (retain) NSString* checkInSequence4;
/**
 * @brief BCBP Data: Passenger Status
 * @details Segment4 Passenger Status of airline ticket.
 */
@property (retain) NSString* passengerStatus4;
/**
 * @brief BCBP Data: Variable FieldSize
 * @details Segment4 Variable FieldSize of airline ticket.
 */
@property (retain) NSString* fieldSizeVarField4;
/**
 * @brief BCBP Data: fieldSizeOfStructMessageRepeat
 * @details Segment4 fieldSizeOfStructMessageRepeat of airline ticket.
 */
@property (retain) NSString* fieldSizeOfStructMessageRepeat4;

/**
 * @brief BCBP Data: Airline Numeric Code
 * @details Segment4 Airline Numeric Code of airline ticket.
 */
@property (retain) NSString* airlineNumericCode4;
/**
 * @brief BCBP Data: Document Form/Serial Number
 * @details Segment4 Airline of airline ticket.
 */
@property (retain) NSString* documentFormOrSerialNumber4;
/**
 * @brief BCBP Data: Selectee Indicator
 * @details Segment4 Selectee Indicator of airline ticket.
 */
@property (retain) NSString* selecteeIndicator4;
/**
 * @brief BCBP Data: International Documentation Verification
 * @details Segment4 International Documentation Verification of airline ticket.
 */
@property (retain) NSString* internationalDocumentVerification4;
/**
 * @brief BCBP Data: Marketing Carrier Designator
 * @details Segment4 Marketing Carrier Designator of airline ticket.
 */
@property (retain) NSString* marketingCarrierDesignator4;
/**
 * @brief BCBP Data: Frequent Flyer Airline Designator
 * @details Segment4 Frequent Flyer Airline Designator of airline ticket.
 */
@property (retain) NSString* freqFlierAirlineDesignator4;
/**
 * @brief BCBP Data: Frequent Flyer Number
 * @details Segment4 Frequent Flyer Number of airline ticket.
 */
@property (retain) NSString* freqFlierNumber4;
/**
 * @brief BCBP Data: ID/AD Indicator
 * @details Segment4 ID/AD Indicator of airline ticket.
 */
@property (retain) NSString* idOrAdIndicator4;
/**
 * @brief BCBP Data: Free Baggage Allowance
 * @details Segment4 Free Baggage Allowance of airline ticket.
 */
@property (retain) NSString* freeBaggageAllowance4;
/**
 * @brief BCBP Data: For Individual Airline Use
 * @details Segment4 For Individual Airline Use of airline ticket.
 */
@property (retain) NSString* forIndividualAirlineUse4;
/**
 * @brief BCBP Data: Beginning of Security Data
 * @details Beginning of Security Data of airline ticket.
 */
@property (retain) NSString* beginningSecurityData;
/**
 * @brief BCBP Data: Type of Security Data
 * @details Type of Security Data of airline ticket.
 */
@property (retain) NSString* typeSecurityData;
/**
 * @brief BCBP Data: Length of Security Data
 * @details Length of Security Data of airline ticket.
 */
@property (retain) NSString* lengthSecurityData;
/**
 * @brief BCBP Data: Security Data
 * @details Security Data of airline ticket.
 */
@property (retain) NSString* securityData;

@end

NS_ASSUME_NONNULL_END
