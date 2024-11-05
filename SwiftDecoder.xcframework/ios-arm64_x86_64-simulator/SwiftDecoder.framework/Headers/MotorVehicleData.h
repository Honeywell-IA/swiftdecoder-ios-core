//
//  MotorVehicleData.h
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * @brief This class contains all information that can be parsed out of a
 *        Motor Vehicle license.
 */
@interface MotorVehicleData : NSObject

/**
 * @brief EZMV Data: fileType
 * @details  fileType of Motor Vehicle.
 */
@property (retain) NSString* fileType;
/**
 * @brief EZMV Data: issuerIdentificationNumber
 * @details  issuerIdentificationNumber of Motor Vehicle.
 */
@property (retain) NSString* issuerIdentificationNumber;
/**
 * @brief EZMV Data: aamvaVersionNumber
 * @details  aamvaVersionNumber of Motor Vehicle.
 */
@property (retain) NSString* aamvaVersionNumber;
/**
 * @brief EZMV Data: subfileType
 * @details  subfileType of Motor Vehicle.
 */
@property (retain) NSString* subfileType;
/**
 * @brief EZMV Data: Titling jurisdiction
 * @details The code for the jurisdiction (U.S., Canadian, or Mexican) that titled the vehicle.
 */
@property (retain) NSString* TDTitlingJurisdiction;
/**
 * @brief EZMV Data: Title number
 * @details A unique set of alphanumeric characters assigned by the titling jurisdiction to the certificate of title of a vehicle.
 */
@property (retain) NSString* TDTitleNumber;
/**
 * @brief EZMV Data: Title issue date
 * @details The date the jurisdiction’s titling authority issued a title to the owner of the vehicle. The format is CCYYMMDD.
 */
@property (retain) NSString* TDTitleIssueDate;
/**
 * @brief EZMV Data: Vehicle model year
 * @details The year that is assigned to a vehicle by the manufacturer. The format is CCYY.
 */
@property (retain) NSString* TDVehicleModelYear;
/**
 * @brief EZMV Data: Vehicle make
 * @details The distinctive (coded) name applied to a group of vehicles by a manufacturer.
 */
@property (retain) NSString* TDVehicleMake;
/**
 * @brief EZMV Data: Vehicle identification number (VIN)
 * @details A unique combination of alphanumeric characters that identifies a specific vehicle or component. The VIN is affixed to the vehicle in specific locations and formulated by the manufacturer. State agencies under some controlled instances may assign a VIN to a vehicle.
 */
@property (retain) NSString* TDVehicleIDNumber;
/**
 * @brief EZMV Data: Odometer reading— mileage
 * @details This is the odometer reading registered with the DMV either at the time of titling or registration renewal.
 */
@property (retain) NSString* TDOdometerReading;
/**
 * @brief EZMV Data: Vehicle purchase date
 * @details The date a vehicle was purchased by the current owner. The format is CCYYMMDD.
 */
@property (retain) NSString* TDVehiclePurchaseDate;
/**
 * @brief EZMV Data: Family name
 * @details Family name (commonly called surname or last name) of the owner of the vehicle.
 */
@property (retain) NSString* TDLastName;
/**
 * @brief EZMV Data: Given name
 * @details Given name or names (includes all of what are commonly referred to as first and middle names) of the owner of the vehicle.
 */
@property (retain) NSString* TDFirstName;
/**
 * @brief EZMV Data: Address-street
 * @details Street portion of the owner’s address.
 */
@property (retain) NSString* TDAddressStreet;
/**
 * @brief EZMV Data: Address-city
 * @details City portion of the owner’s address.
 */
@property (retain) NSString* TDAddressCity;
/**
 * @brief EZMV Data: Address- jurisdiction code
 * @details Jurisdiction portion of the owner’s address.
 */
@property (retain) NSString* TDAddressJurisdictionCode;
/**
 * @brief EZMV Data: Address-zip code
 * @details The ZIP code or Postal code portion of the owner’s address.
 */
@property (retain) NSString* TDAddressZipCode;
/**
 * @brief EZMV Data: Odometer disclosure
 * @details This is the federal odometer mileage disclosure. The mandatory information is: (1) Actual vehicle mileage; (2) Mileage exceeds mechanical limitations; (3) Not actual mileage; (4) Mileage disclosure not required.
 */
@property (retain) NSString* TDOdometerDisclosure;
/**
 * @brief EZMV Data: Previous titling jurisdiction
 * @details The code for the jurisdiction (U.S., Canadian, or Mexican) that titled the vehicle immediately prior to the current titling jurisdiction.
 */
@property (retain) NSString* TDPreviousTitlingJurisdiction;
/**
 * @brief EZMV Data: Previous title number
 * @details The title number assigned to the vehicle by the previous titling jurisdiction.
 */
@property (retain) NSString* TDPreviousTitleNumber;
/**
 * @brief EZMV Data: Title brand
 * @details Code providing information about the brand applied to the title.
 */
@property (retain) NSString* TDTitleBrand;
/**
 * @brief EZMV Data: Vehicle body style
 * @details The general configuration or shape of a vehicle distinguished by characteristics such as number of doors, seats, windows, roofline, and type of top. The vehicle body type is 2-character alphanumeric.
 */
@property (retain) NSString* TDVehicleBodyStyle;
/**
 * @brief EZMV Data: Odometer date
 * @details The date the odometer reading was recorded by the jurisdiction.
 */
@property (retain) NSString* TDOdometerDate;
/**
 * @brief EZMV Data: New / used indicator
 * @details This code represents whether the vehicle/vessel is new or used. Note: jurisdictions’ definitions of these classifications may vary a little due to state regulations on demo vehicles, slates between dealers, application of state taxes, etc. N = New, U = Used.
 */
@property (retain) NSString* TDNewOrUsedIndicator;
/**
 * @brief EZMV Data: First lien holder name
 * @details Name of the first lien holder of the vehicle.
 */
@property (retain) NSString* TDFirstLienHolderName;
/**
 * @brief EZMV Data: First lien holder ID
 * @details A code that uniquely identifies the first holder of a lien.
 */
@property (retain) NSString* TDFirstLienHolderID;
/**
 * @brief EZMV Data: Vehicle model
 * @details A code denoting a family of vehicles (within a make), which has a degree of similarity in construction, such as body, chassis, etc. The field does not necessarily contain a standard code; it may contain a value provided by the originator of the field.
 */
@property (retain) NSString* TDVehicleModel;
/**
 * @brief EZMV Data: Odometer reading— kilometers
 * @details This is the odometer reading registered with the DMV either at the time of titling or registration renewal in kilometers.
 */
@property (retain) NSString* TDOdometerReadingKM;
/**
 * @brief EZMV Data: Business Name
 * @details The name of business that owns the vehicle.
 */
@property (retain) NSString* TDBusinessName;
/**
 * @brief EZMV Data: Vehicle color
 * @details Where the vehicle/vessel is one color, this is the appropriate code describing that color. When the vehicle is two colors, this is the code for the top-most or front-most color.
 */
@property (retain) NSString* TDVehicleName;
/**
 * @brief EZMV Data: Registration issue date
 * @details The date in which the registration was issued. Format is CCYYMMDD.
 */
@property (retain) NSString* RGIssueDate;
/**
 * @brief EZMV Data: Registration expiry date
 * @details The date in which the registration expired. Format is CCYYMMDD.
 */
@property (retain) NSString* RGExpiryDate;
/**
 * @brief EZMV Data: Registration plate number
 * @details The characters assigned to a registration plate or tag affixed to the vehicle, assigned by the jurisdiction.
 */
@property (retain) NSString* RGPlateNumber;
/**
 * @brief EZMV Data: Registrant family name
 * @details Family name (commonly called surname or last name) of the registered owner of a vehicle.
 */
@property (retain) NSString* RGFamilyName;
/**
 * @brief EZMV Data: Registrant given name
 * @details Given name or names (includes all of what are commonly referred to as first and middle names) of the registered owner of a vehicle.
 */
@property (retain) NSString* RGGivenName;
/**
 * @brief EZMV Data: Address-street
 * @details Street portion of the owner’s address.
 */
@property (retain) NSString* RGAddressStreet;
/**
 * @brief EZMV Data: Address-city
 * @details City portion of the owner’s address.
 */
@property (retain) NSString* RGAddressCity;
/**
 * @brief EZMV Data: Address-jurisdiction code
 * @details Jurisdiction portion of the owner’s address.
 */
@property (retain) NSString* RGAddressJurisdictionCode;
/**
 * @brief EZMV Data: Address-zip code
 * @details The Zip code or Postal code of the vehicle owner’s residence address.
 */
@property (retain) NSString* RGAddressZipCode;
/**
 * @brief EZMV Data: Vehicle identification number (VIN)
 * @details A unique combination of alphanumeric characters that identifies a specific vehicle or component. The VIN is affixed to the vehicle in specific locations and formulated by the manufacturer. State agencies under some controlled instances my assign a VIN to a vehicle.
 */
@property (retain) NSString* RGVehicleIdentficationNumber;
/**
 * @brief EZMV Data: Vehicle make
 * @details The distinctive (coded) name applied to a group of vehicles by a manufacturer.
 */
@property (retain) NSString* RGVehicleMake;
/**
 * @brief EZMV Data: Vehicle model year
 * @details The year which is assigned to a vehicle by the manufacturer. The format is CCYY.
 */
@property (retain) NSString* RGVehicleModelYear;
/**
 * @brief EZMV Data: Vehicle body style
 * @details The general configuration or shape of a vehicle distinguished by characteristics such as number of doors, seats, windows, roofline, and type of top. The vehicle body type is 2-character alphanumeric.
 */
@property (retain) NSString* RGVehicleBodyStyle;
/**
 * @brief EZMV Data: Registration year
 * @details The year of registration. Format is CCYYMMDD.
 */
@property (retain) NSString* RGRegistrationYear;
/**
 * @brief EZMV Data: Registration window sticker decal
 * @details A unique number printed on the tab/decal and stored as part of the registration record.
 */
@property (retain) NSString* RGRegistrationWindowStickerDecal;
/**
 * @brief EZMV Data: Vehicle use
 * @details Indicates the use of the vehicle.
 */
@property (retain) NSString* RGVehicleUse;
/**
 * @brief EZMV Data: Fuel
 * @details The type of fuel used by the vehicle. In most cases, the fuel type would be diesel.
 */
@property (retain) NSString* RGFuel;
/**
 * @brief EZMV Data: Axles
 * @details The number of common axles of rotation of one or more wheels of a vehicle,whether power driven or freely rotating.
 */
@property (retain) NSString* RGAxles;
/**
 * @brief EZMV Data: Gross vehicle weight
 * @details The unladen weight of the vehicle (e.g., the single-unit truck, truck combination) plus the weight of the load being carried at a specific point in time.
 */
@property (retain) NSString* RGGrossVehicleWeight;
/**
 * @brief EZMV Data: Vehicle model
 * @details A code denoting a family of vehicles (within a make), which has a degree of similarity in construction, such as body, chassis, etc. The field does not necessarily contain a standard code; it may contain a value provided by the originator of the field.
 */
@property (retain) NSString* RGVehicleModel;
/**
 * @brief EZMV Data: Business Name
 * @details The business name of the first registrant of a vehicle.
 */
@property (retain) NSString* RGBusinessName;
/**
 * @brief EZMV Data: Vehicle color
 * @details Where the vehicle is one color, this is the appropriate code describing that color. When the vehicle is two colors, this is the code for the top-most or front-most color.
 */
@property (retain) NSString* RGVehicleColor;
/**
 * @brief EZMV Data: USDOT number
 * @details A unique identifier assigned to the carrier responsible for safety issued by the U.S. Department of Transportation – Federal Motor Carrier Safety Administration.
 */
@property (retain) NSString* MCUSDOTNumber;
/**
 * @brief EZMV Data: Carrier name
 * @details The name of the carrier responsible for safety. This can be an individual, partnership or corporation responsible for the transportation of persons or property. This is the name that is recognized by law.
 */
@property (retain) NSString* MCCarrierName;
/**
 * @brief EZMV Data: Street address
 * @details This is the mailing address of the individual carrier. This information is utilized by the base jurisdiction to send information to the carrier that purchased the IRP credentials.
 */
@property (retain) NSString* MCStreetAddress;
/**
 * @brief EZMV Data: City
 * @details This is the city for the mailing address of the individual carrier. This information is utilized by the base jurisdiction to send information to the carrier that purchased the IRP credentials.
 */
@property (retain) NSString* MCCity;
/**
 * @brief EZMV Data: Jurisdiction
 * @details This is the jurisdiction of the residential address of the individual carrier. This information is utilized by the base jurisdiction to send information to the carrier that purchased the IRP credentials.
 */
@property (retain) NSString* MCJurisdiction;
/**
 * @brief EZMV Data: Zip
 * @details The ZIP or Postal code of the resident address of the vehicle owner.
 */
@property (retain) NSString* MCZip;
/**
 * @brief EZMV Data: Carrier name- registrant
 * @details The name of the first registrant of a vehicle. Registrant’s name may be a combined individual name or the name of a business
 */
@property (retain) NSString* IRCarrierNameRegistrant;
/**
 * @brief EZMV Data: Address
 * @details The first line of the registrant’s residence address.
 */
@property (retain) NSString* IRAddressStreet;
/**
 * @brief EZMV Data: City
 * @details The registrant’s residence city name.
 */
@property (retain) NSString* IRCity;
/**
 * @brief EZMV Data: Jurisdiction
 * @details The state or province of the registrant’s residence address.
 */
@property (retain) NSString* IRJurisdiction;
/**
 * @brief EZMV Data: Zip code
 * @details The ZIP or Postal code of the resident address of the registrant.
 */
@property (retain) NSString* IRZipCode;
/**
 * @brief EZMV Data: Unit number
 * @details A number, assigned by the registrant of the commercial vehicle or trailer, to identify the vehicle or trailer in the fleet. No two units in a fleet can have the same number. A.K.A vehicle unit number or owner’s equipment number.
 */
@property (retain) NSString* IRUnitNumber;
/**
 * @brief EZMV Data: Vehicle identification number (VIN)
 * @details A unique combination of alphanumeric characters that identifies a specific vehicle or component. The VIN is affixed to the vehicle in specific locations and formulated by the manufacturer. State agencies under some controlled instances may assign a VIN to a vehicle.
 */
@property (retain) NSString* IRVehicleIdentificationNumber;
/**
 * @brief EZMV Data: Model year
 * @details The year which is assigned to a vehicle by the manufacturer. The format is YY.
 */
@property (retain) NSString* IRModelYear;
/**
 * @brief EZMV Data: Vehicle make
 * @details The distinctive (coded) name applied to a group of vehicles by a manufacturer.
 */
@property (retain) NSString* IRVehicleMake;
/**
 * @brief EZMV Data: Type of vehicle
 * @details The type of vehicle operated for the transportation of persons or property in the furtherance of any commercial or industrial enterprise, for hire or not for hire. Not all states will use all values.
 */
@property (retain) NSString* IRTypeOfVehicle;
/**
 * @brief EZMV Data: Number of axles
 * @details The number of common axles of rotation of one or more wheels of a vehicle, whether power design or freely rotating.
 */
@property (retain) NSString* IRNumberOfAxles;
/**
 * @brief EZMV Data: Number of seats
 * @details The seat capacity of a commercial vehicle designed for transportation of more than then passengers.
 */
@property (retain) NSString* IRNumberOfSeats;
/**
 * @brief EZMV Data: Registration year
 * @details This field is the registration year assigned by the jurisdiction. The format is CCYY.
 */
@property (retain) NSString* IRRegistrationYear;
/**
 * @brief EZMV Data: Registration issue date
 * @details The date in which the registration was issued. CCYYMMDD format.
 */
@property (retain) NSString* IRRegistrationIssueDate;
/**
 * @brief EZMV Data: Registration plate number
 * @details The characters assigned to a registration plate or tag affixed to the vehicle, assigned by the jurisdiction.
 */
@property (retain) NSString* IRRegistrationPlateNumber;
/**
 * @brief EZMV Data: Registration decal number
 * @details The number assigned to the registration decal  in those jurisdictions that issue decals.
 */
@property (retain) NSString* IRRegistrationDecalNumber;
/**
 * @brief EZMV Data: Registration enforcement date
 * @details The registration enforcement date is the date that the current registration was enforced. This may or may not be the original registration date. The date format is CCYYMMDD.
 */
@property (retain) NSString* IRRegistrationEnforcementDate;
/**
 * @brief EZMV Data: Registration expiration date
 * @details The date in which the registration expired. The date format is CCYYMMDD.
 */
@property (retain) NSString* IRRegistrationExpirationDate;
/**
 * @brief EZMV Data: Gross vehicle weight
 * @details The unladen weight of the vehicle (e.g., single-unit truck, truck combination) plus the weight of the maximum load for which vehicle registration fees have been paid within a particular jurisdiction.
 */
@property (retain) NSString* IRGrossVehicleWeight;
/**
 * @brief EZMV Data: Base jurisdiction registered weight
 * @details The declared base jurisdiction registration weight.
 */
@property (retain) NSString* IRBaseJurisdictionRegisteredWeight;
/**
 * @brief EZMV Data: Inspection station number
 * @details Station number performing the inspection.
 */
@property (retain) NSString* VSInspectionStationNumber;
/**
 * @brief EZMV Data: Inspector identification number
 * @details A unique number assigned to each licensed vehicle inspector.
 */
@property (retain) NSString* VSInspectorIdentificationNumber;
/**
 * @brief EZMV Data: Vehicle make
 * @details The distinctive (coded) name applied to a group of vehicles by a manufacturer.
 */
@property (retain) NSString* VSVehicleMake;
/**
 * @brief EZMV Data: Vehicle model year
 * @details The year which is assigned to a vehicle by the manufacturer. The format is CCYY.
 */
@property (retain) NSString* VSVehicleModelYear;
/**
 * @brief EZMV Data: Vehicle body type
 * @details The general configuration or shape of a vehicle distinguished by characteristics such as number of doors, seats, windows, roofline, and type of top. The vehicle body type is 2- character alphanumeric.
 */
@property (retain) NSString* VSVehicleBodyType;
/**
 * @brief EZMV Data: Odometer reading at inspection
 * @details The vehicle’s odometer reading (to the nearest mile or kilometer) at the time of inspection.
 */
@property (retain) NSString* VSOdometerReadingAtInspection;
/**
 * @brief EZMV Data: Inspection address
 * @details The street name and number, city, state and zip code of the inspection facility.
 */
@property (retain) NSString* VSInspectionAddress;
/**
 * @brief EZMV Data: Inspection air pollution device conditions
 * @details Identifies whether the pollution control devices meet the minimum inspection criteria.
 */
@property (retain) NSString* VSInspectionAirPollutionDeviceConditions;
/**
 * @brief EZMV Data: Inspection facility identifier
 * @details The unique number assigned to an inspection facility.
 */
@property (retain) NSString* VSInspectionFacilityIdentifier;
/**
 * @brief EZMV Data: Inspection form number, current
 * @details A unique number assigned to a current vehicle inspection form for identification purposes.
 */
@property (retain) NSString* VSInspectionFormNumberCurrent;
/**
 * @brief EZMV Data: Inspection form number, previous
 * @details The number of the last inspection form excluding the current inspection.
 */
@property (retain) NSString* VSInspectionFormNumberPrevious;
/**
 * @brief EZMV Data: Inspection smog certificate indicator
 * @details An indicator that specifies whether or not the vehicle has a current smog certificate.
 */
@property (retain) NSString* VSInspectionSmogCertificateIndicator;
/**
 * @brief EZMV Data: Inspection sticker number, current
 * @details Preprinted unique number on the motor vehicle inspection sticker currently issued to a motor vehicle which has passed inspection.
 */
@property (retain) NSString* VSInspectionStickerNumberCurrent;
/**
 * @brief EZMV Data: Inspection sticker number, previous
 * @details The certification number of the last inspection sticker, excluding the current inspection.
 */
@property (retain) NSString* VSInspectionStickerNumberPrevious;
/**
 * @brief EZMV Data: First owner total name
 * @details Name of the (or one of the) individual(s) who owns the Vehicle as defined in the ANSI D- 20 Data Element Dictionary. (Lastname@Firstname@MI@Suffix if any.)
 */
@property (retain) NSString* OWFirstOwnerFullName;
/**
 * @brief EZMV Data: First owner last name
 * @details Last Name or Surname of the Owner. Hyphenated names acceptable, spaces between names acceptable, but no other use of special symbols.
 */
@property (retain) NSString* OWFirstOwnerLastName;
/**
 * @brief EZMV Data: First owner name
 * @details First Name or Given Name of the Owner. Hyphenated names acceptable, but no other use of special symbols.
 */
@property (retain) NSString* OWFirstOwnerFirstName;
/**
 * @brief EZMV Data: First owner middle name
 * @details Middle Name(s) or Initial(s) of the Owner. Hyphenated names acceptable, spaces, between names acceptable, but no other use of special symbols.
 */
@property (retain) NSString* OWFirstOwnerMiddleName;
/**
 * @brief EZMV Data: Second owner total name
 * @details Name of the (or one of the) individual(s) who owns the Vehicle as defined in the ANSI D- 20 Data Element Dictionary. (Lastname@Firstname@MI@Suffix if any.)
 */
@property (retain) NSString* OWSecondOwnerFullName;
/**
 * @brief EZMV Data: Second owner last name
 * @details Last Name or Surname of the Owner. Hyphenated names acceptable, spaces between names acceptable, but no other use of special symbols.
 */
@property (retain) NSString* OWSecondOwnerLastName;
/**
 * @brief EZMV Data: Second owner name
 * @details First Name or Given Name of the Owner. Hyphenated names acceptable, but no other use of special symbols.
 */
@property (retain) NSString* OWSecondOwnerFirstName;
/**
 * @brief EZMV Data: Second owner middle name
 * @details Middle Name(s) or Initial(s) of the Owner. Hyphenated names acceptable, spaces between names acceptable, but no other use of special symbols.
 */
@property (retain) NSString* OWSecondOwnerMiddleName;
/**
 * @brief EZMV Data: Mailing address 1
 * @details Street address line 1. (Mailing)
 */
@property (retain) NSString* OWMailingAddress1;
/**
 * @brief EZMV Data: Mailing address 2
 * @details Street address line 2. (Mailing)
 */
@property (retain) NSString* OWMailingAddress2;
/**
 * @brief EZMV Data: Mailing City
 * @details Name of city for mailing address.
 */
@property (retain) NSString* OWMailingCity;
/**
 * @brief EZMV Data: Mailing jurisdiction code
 * @details Jurisdiction code for mailing address. Conforms to Canadian, Mexican and US jurisdictions as appropriate. Codes for provinces (Canada) and states (US and Mexico).
 */
@property (retain) NSString* OWMailingJurisdictionCode;
/**
 * @brief EZMV Data: Mailing zip code
 * @details The ZIP code or Postal code used for mailing. (As used by Canadian, Mexican and US jurisdictions.)
 */
@property (retain) NSString* OWMailingZipCode;
/**
 * @brief EZMV Data: Residence address 1
 * @details Street address line 1. (Mailing)
 */
@property (retain) NSString* OWResidenceAddress1;
/**
 * @brief EZMV Data: Residence address 2
 * @details Street address line 2. (Mailing)
 */
@property (retain) NSString* OWResidenceAddress2;
/**
 * @brief EZMV Data: Residence city
 * @details Name of city for mailing address.
 */
@property (retain) NSString* OWResidinceCity;
/**
 * @brief EZMV Data: Residence jurisdiction code
 * @details Jurisdiction code for mailing address. Conforms to Canadian, Mexican and US jurisdictions as appropriate. Codes for provinces (Canada) and states (US and Mexico).
 */
@property (retain) NSString* OWResidenceJurisdictionCode;
/**
 * @brief EZMV Data: Residence zip code
 * @details The ZIP code or Postal code used for mailing. (As used by Canadian, Mexican and US jurisdictions).
 */
@property (retain) NSString* OWResidenceZipCode;
/**
 * @brief EZMV Data: First owner ID number
 * @details The unique customer number/ID of the first vehicle owner.
 */
@property (retain) NSString* OWFirstOwnerIDNumber;
/**
 * @brief EZMV Data: Second owner ID number
 * @details The unique customer number/ID of the second vehicle owner.
 */
@property (retain) NSString* OWSecondOwnerIDNumber;
/**
 * @brief EZMV Data: First owner legal status
 * @details The legal status of the first vehicle owner. This is only used when a vehicle has multiple owners. A legal status may be (“AND”, “OR”).
 */
@property (retain) NSString* OWFirstOwnerLegalStatus;
/**
 * @brief EZMV Data: Second owner legal status
 * @details The legal status of the second vehicle owner. This is only used when a vehicle has multiple owners. A legal status may be (“AND”, “OR”).
 */
@property (retain) NSString* OWSecondOwnerLegalStatus;
/**
 * @brief EZMV Data: Major code
 * @details State to provide definition.
 */
@property (retain) NSString* VHMajorCode;
/**
 * @brief EZMV Data: Minor code
 * @details State to provide definition.
 */
@property (retain) NSString* VHMinorCode;
/**
 * @brief EZMV Data: Transmission code
 * @details Type of transmission the vehicle carries.
 */
@property (retain) NSString* VHTransmissionCode;
/**
 * @brief EZMV Data: Vehicle identification number
 * @details A unique combination of alphanumeric characters that identifies a specific vehicle or component. The VIN is affixed to the vehicle in specific locations and formulated by the manufacturer. State agencies under some controlled instances may assign a VIN to a vehicle.
 */
@property (retain) NSString* VHVehicleIdentificationNumber;
/**
 * @brief EZMV Data: MSRP/FLP
 * @details Manufacturer’s Suggested Retail Price. No decimal places. Right Justified Zero or space fill.
 */
@property (retain) NSString* VHMSRPOrFLP;
/**
 * @brief EZMV Data: Junked indicator
 * @details Vehicle has been junked.
 */
@property (retain) NSString* VHJunkedIndicator;
/**
 * @brief EZMV Data: Date junked
 * @details CCYYMMDD; Date vehicle reported junked.
 */
@property (retain) NSString* VHDateJunked;
/**
 * @brief EZMV Data: Stolen indicator
 * @details Indicates stolen vehicle.
 */
@property (retain) NSString* VHStolenIndicator;
/**
 * @brief EZMV Data: Date stolen
 * @details CCYYMMDD; Date vehicle reported stolen.
 */
@property (retain) NSString* VHDateStolen;
/**
 * @brief EZMV Data: Date recovered
 * @details CCYYMMDD; Date vehicle reported recovered.
 */
@property (retain) NSString* VHDateRecovered;
/**
 * @brief EZMV Data: Vehicle make
 * @details The distinctive (coded) name applied to a group of vehicles by a manufacturer.
 */
@property (retain) NSString* VHVehicleMake;
/**
 * @brief EZMV Data: Make Year
 * @details Vehicle manufacture year.
 */
@property (retain) NSString* VHMakeYear;
/**
 * @brief EZMV Data: Vehicle model
 * @details Vehicle manufacture model.
 */
@property (retain) NSString* VHVehicleModel;
/**
 * @brief EZMV Data: Fuel type
 * @details Type of fuel the vehicle utilizes.
 */
@property (retain) NSString* VHFuelType;
/**
 * @brief EZMV Data: Body style
 * @details Vehicle manufacture body style.
 */
@property (retain) NSString* VHBodyStyle;
/**
 * @brief EZMV Data: Number of doors
 * @details Number of doors on the vehicle.
 */
@property (retain) NSString* VHNumberOfDoors;
/**
 * @brief EZMV Data: Number of cylinders
 * @details Number of cylinders the vehicle has.
 */
@property (retain) NSString* VHNumberOfCylinders;
/**
 * @brief EZMV Data: Engine size
 * @details The size of a vehicle’s engine.
 */
@property (retain) NSString* VHEngineSize;
/**
 * @brief EZMV Data: Vehicle status code
 * @details This is the status of the vehicle (e.g., active, suspend, etc.)
 */
@property (retain) NSString* VHVehicleStatusCode;
/**
 * @brief EZMV Data: Manufacture gross weight
 * @details Manufacturer’s gross vehicle weight rating.
 */
@property (retain) NSString* VHManufactureGrossWeight;
/**
 * @brief EZMV Data: Horsepower
 * @details Manufacturer’s rated horsepower.
 */
@property (retain) NSString* VHHorsePower;
/**
 * @brief EZMV Data: Unladen weight
 * @details Gross weight of the vehicle unloaded.
 */
@property (retain) NSString* VHUnladenWeight;
/**
 * @brief EZMV Data: Engine displacement
 * @details Manufacturer’s rated engine displacement.
 */
@property (retain) NSString* VHEngineDisplacement;
/**
 * @brief EZMV Data: IRP indicator
 * @details International registration plan indicator.
 */
@property (retain) NSString* VHIRPIndicator;
/**
 * @brief EZMV Data: IFTA indicator
 * @details International fuel tax indicator
 */
@property (retain) NSString* VHIFTAIndicator;
/**
 * @brief EZMV Data: VLT clac from date
 * @details Vehicle license tax calculation from date of purchase.
 */
@property (retain) NSString* VHVLTClacFromDate;
/**
 * @brief EZMV Data: Vehicle ID number
 * @details Unique number to identify the vehicle record.
 */
@property (retain) NSString* VHVehicleIDNumber;
/**
 * @brief EZMV Data: Vehicle type code
 * @details EPA vehicle classification.
 */
@property (retain) NSString* VHVehicleTypeCode;
/**
 * @brief EZMV Data: Number of Axles
 * @details Number of axles the vehicle has.
 */
@property (retain) NSString* VHNumberOfAxles;


@end

NS_ASSUME_NONNULL_END
