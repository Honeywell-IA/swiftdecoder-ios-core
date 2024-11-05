//
//  OnDecodeResultListener.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/12/13.
//
//

#import <Foundation/Foundation.h>
#import "PluginResultListener.h"
#import "HSMDecodeResultArray.h"

/**
 * @brief This protocol must be implemented by any class that wishes to receive decoder results
 * @author E412474
 */
@protocol DecodeResultListener <PluginResultListener>

/**
 * @brief This method is called when a decode event has occurred.  This will be called when a barcode was successfully decode or when a decode attempt has been terminated
 *
 * @param barcodeData
 *	This is an array of HSMDecodeResult objects that contains all the data associated with each barcode decoded.
 *
 */
- (void) onHSMResult:(HSMDecodeResultArray*)barcodeData;

@end
