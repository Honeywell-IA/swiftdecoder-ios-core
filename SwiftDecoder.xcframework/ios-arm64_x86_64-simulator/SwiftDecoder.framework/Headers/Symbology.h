/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

/** @file Symbology.h
 *
 *  This header file contains enumerations used for enabling and identifying symbologies
 */

/**
 *  @brief This enumeration represents all available symbology types that can be enabled via the enableSymbology: method in the HSMDecodeViewController class
 */
typedef enum
{
    /* Linear Symbologies */

    /** @brief This property specifies whether UPC-A decoding is enabled */
    UPCA                        = 0x1A010011,
    /** @brief This property specifies whether UPC-A - 2 Character Addenda decoding is enabled */
    UPCA_2CHAR_ADDENDA          = 0x1A010004, 
    /** @brief This property specifies whether UPC-A - 5 Character Addenda decoding is enabled */
    UPCA_5CHAR_ADDENDA          = 0x1A010005,
     
    /** @brief This property specifies whether UPC-E0 decoding is enabled */
    UPCE0                       = 0x1A011001, 
    /** @brief This property specifies whether UPC-E1 decoding is enabled */
    UPCE1                       = 0x1A011002, 
    /** @brief This property specifies whether UPC-E decoding is enabled */
    UPCE_EXPAND                 = 0x1A011003,
    /** @brief This property specifies whether UPC-E - 2 Character Addenda decoding is enabled */
    UPCE_2CHAR_ADDENDA          = 0x1A011006, 
    /** @brief This property specifies whether UPC-E - 5 Character Addenda decoding is enabled */
    UPCE_5CHAR_ADDENDA          = 0x1A011007, 

    /** @brief This property specifies whether EAN 8 decoding is enabled */
    EAN8                        = 0x1A012001, 
    /** @brief This property specifies whether EAN 8 - 2 Character Addenda decoding is enabled */
    EAN8_2CHAR_ADDENDA          = 0x1A012003, 
    /** @brief This property specifies whether EAN 8 - 5 Character Addenda decoding is enabled */
    EAN8_5CHAR_ADDENDA          = 0x1A012004, 

    /** @brief This property specifies whether EAN 13 decoding is enabled */
    EAN13                       = 0x1A013001, 
    /** @brief This property specifies whether EAN 13 - 2 Character Addenda decoding is enabled */
    EAN13_2CHAR_ADDENDA         = 0x1A013003, 
    /** @brief This property specifies whether EAN 13 - 5 Character Addenda decoding is enabled */
    EAN13_5CHAR_ADDENDA         = 0x1A013004,  
    /** @brief This property specifies whether EAN 13 - ISBN decoding is enabled */
    EAN13_ISBN                  = 0x1A013007, 

    /** @brief This property specifies whether Code 128 decoding is enable */
    CODE128                     = 0x1A014001, 

    /** @brief This property specifies whether GS1 128 decoding is enabled */
    GS1_128                     = 0x1A015001, 

    /** @brief This property specifies whether Code 128/GS1-128 Misc decoding is enabled */
    C128_ISBT                   = 0x1A014005, 

    /** @brief This property specifies whether Code 39 decoding is enabled */
    CODE39                      = 0x1A016001, 

    /** @brief This property specifies whether Trioptic decoding is enabled */
    TRIOPTIC                    = 0x1A018001, 

    /** @brief This property specifies whether Interleaved 2 of 5 decoding is enabled */
    I25                         = 0x1A019001, 

    /** @brief This property specifies whether Standard 2 of 5 (3 bar; - Industrial 2 of 5) decoding is enabled */
    S25                         = 0x1A01A001, 

    /** @brief This property specifies whether IATA 2 of 5 (2 bar) - Airline 2 of 5 decoding is enabled */
    IATA25                      = 0x1A01B001, 

    /** @brief This property specifies whether Matrix 2 of 5 decoding is enabled */
    M25                         = 0x1A01C001,  

    /** @brief This property specifies whether Code 93 decoding is enabled */
    CODE93                      = 0x1A01D001, 

    /** @brief This property specifies whether Code 11 decoding is enabled */
    CODE11                      = 0x1A01E001,  

    /** @brief This property specifies whether Codabar decoding is enabled */
    CODABAR                     = 0x1A01F001, 
        
    /** @brief This property specifies whether Coupon Code decoding is enabled */
    COUPON_CODE                 = 0x1A006001,

    /** @brief This property specifies whether Telepen decoding is enabled */
    TELEPEN                     = 0x1A020001, 

    /** @brief This property specifies whether MSI decoding is enabled */
    MSI                         = 0x1A021001, 

    /** @brief This property specifies whether RSS (GS1) decoding is enabled */
    RSS_14                      = 0x1A022001, 
    /** @brief This property specifies whether RSS (GS1) Limited decoding is enabled */
    RSS_LIMITED                 = 0x1A022002, 
    /** @brief This property specifies whether RSS (GS1) Expanded decoding is enabled */
    RSS_EXPANDED                = 0x1A022003, 


    /* Stacked Linear Symbologies */

    /** @brief This property specifies whether Codablock F decoding is enabled */
    CODABLOCK_F                 = 0x1A023001, 

    /** @brief This property specifies whether PDF417 decoding is enabled */
    PDF417                      = 0x1A024001, 

    /** @brief This property specifies whether Micro PDF417 decoding is enabled */
    MICROPDF                    = 0x1A025001, 

    /** @brief This property specifies whether Composite decoding is enabled */
    COMPOSITE                   = 0x1A026001, 
    /** @brief This property specifies whether Composite with UPC decoding is enabled */
    COMPOSITE_WITH_UPC          = 0x1A026004,


    /* Matrix 2D Symbologies */

    /** @brief This property specifies whether Aztec decoding is enabled */
    AZTEC                       = 0x1A027001, 

    /** @brief This property specifies whether Maxicode decoding is enabled */
    MAXICODE                    = 0x1A028001,  

    /** @brief This property specifies whether Data Matrix decoding is enabled */
    DATAMATRIX                  = 0x1A029001, 
    /** @brief This property specifies whether Rectangle Data Matrix decoding is enabled */
    DATAMATRIX_RECTANGLE        = 0x40010402, 

    /** @brief This property specifies whether QR decoding is enabled */
    QR                          = 0x1A02A001,
    
    /** @brief This property specifies whether gridmatrix decoding is enabled */
    GRIDMATRIX                  = 0x1A160001,
    
    /** @brief This property specifies whether QR decoding is enabled */
    DOT                         = 0x1A161001,
    
    /** @brief This property specifies whether HanXin decoding is enabled */
    HANXIN                      = 0x1A02B001, 

    /** @brief This property specifies whether Hong Kong 2 of 5 - aka China Post decoding is enabled */
    HK25                        = 0x1A02C001, 

    /** @brief This property specifies whether Korea Post decoding is enabled */
    KOREA_POST                  = 0x1A100001,
    
    /** @brief This property specifies whether Optical Character Recognition (OCR) is enabled */
    OCR                  = 0x1A02D001,

}Symbology;

/**
 *  This enumeration represents the symbology ID returned within the DecodeData class
 */
typedef enum
{
    ID_UPC			= (1 << 2), //includes UPC, EAN, and JAN
    ID_AUS_POST		= (1 << 3),
    ID_CODE128		= (1 << 4),
    ID_CODABLOCK_F	= ((ID_CODE128) + 1),
    ID_CODE39		= (1 << 5),
    ID_CODABLOCK_A	= ((ID_CODE39) + 1),
    ID_CODABAR		= (1 << 6),
    ID_PLANETCODE	= (1 << 7),
    ID_DATAMATRIX	= (1 << 8),
    ID_I25			= (1 << 9),
    ID_MAXICODE		= (1 << 11),
    ID_PDF			= (1 << 12), //include MicroPDF
    ID_POSTNET		= (1 << 13),
    ID_QRCODE		= (1 << 14),
    ID_RSS			= (1 << 15),
    ID_RSS_EXP		= ((ID_RSS) + 1), //Expanded
    ID_RSS_EXP_ST	= ((ID_RSS) + 2), //Expanded Stacked
    ID_RSS_14_LIM	= ((ID_RSS) + 4), //Limited
    ID_RSS_14		= ((ID_RSS) + 8), 
    ID_RSS_14_ST		= ((ID_RSS) + 16), //Stacked
    ID_JAPAN_POST	= (1 << 17),
    ID_CODE93		= (1 << 18),
    ID_AZTEC_CODE	= (1 << 19),
    ID_ROYAL_MAIL	= (1 << 21),
    ID_KIX			= ((ID_ROYAL_MAIL) + 1),
    ID_S25			= (1 << 22),
    ID_S25_2BAR		= ((ID_S25)),
    ID_S25_3BAR		= ((ID_S25) + 1),
    ID_MSI_PLESSEY	= (1 << 23),
    ID_GO_CODE		= (1 << 24),
    ID_PHARMACODE	= (1 << 26),
    ID_UPU_4_STATE	= (1 << 27),
    ID_CODE11		= (1 << 28),
    ID_USPS_4_STATE	= (1U << 31U)
}SymbologyId;

/**
 *  This enumeration represents the symbology ID Extension returned within the DecodeData class
 */
typedef enum
{
    ID_EX_M25			= (1 << 0),
    ID_EX_TELEPEN		= (1 << 1),
    ID_EX_NEC25			= (1 << 2),
    ID_EX_TRIOPTIC		= (1 << 3),
    ID_EX_OCR			= (1 << 4),
    ID_EX_HK25			= (1 << 6),
    ID_EX_INFOMAIL		= (1 << 12),
    ID_EX_KOREA_POST		= (1 << 14),
    ID_EX_HAN_XIN_CODE	= (1 << 15),
    ID_EX_CANADIAN_POST		= (1 << 16)
}SymbologyIdEx;

/**
 *  This enumeration represents the AIM Code Letter returned within the DecodeData class
 */
typedef enum
{
    /* AIM Codeletters
     *	These defines have no bearing on the decoding capability of the decoder(s)
     *	included in the API. These defines are simply meant to provide a macro which 
     *	aligns with the current AIM specification. 
     */

    AIM_CODELETTER_CODE39		='A',
    AIM_CODELETTER_TELEPEN		='B',
    AIM_CODELETTER_CODE128		='C',
    AIM_CODELETTER_GS1_128		='C',
    AIM_CODELETTER_CODE1		='D',
    AIM_CODELETTER_UPC			='E',	//includes EAN and Jan
    AIM_CODELETTER_CODABAR		='F',
    AIM_CODELETTER_CODE93		='G',
    AIM_CODELETTER_CODE11		='H',
    AIM_CODELETTER_I25			='I',
    //RESERVED								'J'
    AIM_CODELETTER_CODE16K		='K',
    AIM_CODELETTER_PDF417		='L', //include MicroPDF417
    AIM_CODELETTER_TLC39		='L', //Not a typo. 'L' is defined in TLC39 spec, which is a PDF/Code 39 combo
    AIM_CODELETTER_MSI			='M',
    AIM_CODELETTER_ANKER		='N',
    AIM_CODELETTER_CODABLOCK	='O', //includes both A and F
    AIM_CODELETTER_PLESSEY		='P',
    AIM_CODELETTER_QRCODE		='Q',
    AIM_CODELETTER_S25_2BAR		='R', //Straight 2of5 with 2 bar start/stop (aka IATA 2of5)
    AIM_CODELETTER_S25_3BAR		='S', //Straight 2of5 with 3 bar start/stop (aka Industrial 2of5)
    AIM_CODELETTER_CODE49		='T',
    AIM_CODELETTER_MAXICODE		='U',
    //RESERVED								'V'
    //RESERVED								'W'
    AIM_CODELETTER_OTHER		='X',
    AIM_CODELETTER_EXPANSION	='Y',
    AIM_CODELETTER_NONBARCODE	='Z',
    //RESERVED								'a'
    //RESERVED								'b'
    AIM_CODELETTER_CHANNELCODE	='c',
    AIM_CODELETTER_DATAMATRIX	='d',
    AIM_CODELETTER_RSS			='e',
    AIM_CODELETTER_GS1_DATABAR	='e',
    AIM_CODELETTER_COMPOSITE	='e',
    //RESERVED								'f'
    //RESERVED								'g'
    //RESERVED								'h'
    //RESERVED								'i'
    //RESERVED								'j'
    //RESERVED								'k'
    //RESERVED								'l'
    //RESERVED								'm'
    //RESERVED								'n'
    AIM_CODELETTER_OCR			='o',
    AIM_CODELETTER_POSICODE		='p',
    //RESERVED								'q'
    //RESERVED								'r'
    AIM_CODELETTER_SUPERCODE	='s',
    //RESERVED								't'
    //RESERVED								'u'
    AIM_CODELETTER_ULTRACODE	='v',
    //RESERVED								'w'
    //RESERVED								'x'
    //RESERVED								'y'
    AIM_CODELETTER_AZTEC_CODE	='z' //Including Mesas
}AIMCodeLetter;

/**
 *  This enumeration represents the HHP Code ID returned within the DecodeData class
 */
typedef enum
{
    /* HHP Codeletters
     *	These defines have no bearing on the decoding capability of the decoder(s)
     *	included in the API. These defines are simply meant to provide a macro which 
     *	aligns with the legacy WA codeletters (called code IDs) and updated 
     *	when this decoder when WA data collection became HandHeld Products
     */

    CODE_ID_DOTCODE			='.',
    CODE_ID_CODE1			='1',
    CODE_ID_MERGED_COUPON	=';',
    CODE_ID_CODE39_BASE32	='<', //aka Code 32, Italian Pharmacode, PARAF
    CODE_ID_TRIOPTIC		='=',
    CODE_ID_KOREAN_POST		='?',
    CODE_ID_INFOMAIL		=',',
    CODE_ID_NO_READ			=0x9C,

    CODE_ID_AUS_POST		='A',
    CODE_ID_BRITISH_POST	='B',
    CODE_ID_CANADIAN_POST	='C',
    CODE_ID_EAN8			='D',
    CODE_ID_UPCE			='E',
    CODE_ID_LABELCODE		='F',
    CODE_ID_BC412			='G',
    CODE_ID_HAN_XIN_CODE	='H',
    CODE_ID_GS1_128			='I',
    CODE_ID_JAPAN_POST		='J',
    CODE_ID_KIX_CODE		='K',
    CODE_ID_PLANET_CODE		='L',
    CODE_ID_USPS_4_STATE	='M', //Intelligent Mail
    CODE_ID_UPU_4_STATE		='N', //ID Tags
    CODE_ID_OCR				='O',
    CODE_ID_POSTNET			='P',
    CODE_ID_HK25			='Q', //aka China Post
    CODE_ID_MICROPDF		='R',
    CODE_ID_SECURE_CODE		='S',
    CODE_ID_TLC39			='T',
    CODE_ID_ULTRACODE		='U',
    CODE_ID_CODABLOCK_A		='V',
    CODE_ID_POSICODE		='W',
    CODE_ID_GRID_MATRIX		='X',
    CODE_ID_NEC25			='Y',
    CODE_ID_MESA			='Z',

    CODE_ID_CODABAR			='a',
    CODE_ID_CODE39			='b',
    CODE_ID_UPCA			='c',
    CODE_ID_EAN13			='d',
    CODE_ID_I25				='e',
    CODE_ID_S25				='f', //both 2bar and 3bar
    CODE_ID_MSI				='g',
    CODE_ID_CODE11			='h',
    CODE_ID_CODE93			='i',
    CODE_ID_CODE128			='j',
    CODE_ID_UNUSED			='k',
    CODE_ID_CODE49			='l',
    CODE_ID_M25				='m',
    CODE_ID_PLESSEY			='n',
    CODE_ID_CODE16K			='o',
    CODE_ID_CHANNELCODE		='p',
    CODE_ID_CODABLOCK_F		='q',
    CODE_ID_PDF417			='r',
    CODE_ID_QRCODE			='s',
    CODE_ID_TELEPEN			='t',
    CODE_ID_CODEZ			='u',
    CODE_ID_VERICODE		='v',
    CODE_ID_DATAMATRIX		='w',
    CODE_ID_MAXICODE		='x',
    CODE_ID_RSS				='y',
    CODE_ID_GS1_DATABAR		='y',
    CODE_ID_COMPOSITE		='y',
    CODE_ID_AZTEC_CODE		='z'
}CodeId;

