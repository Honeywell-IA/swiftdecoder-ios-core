//
//  DLResultListener.h
//  SwiftDecoder
//

#import "LicenseData.h"
/**
 * @brief This protocol must be implemented by any class that wishes to receive License results
 * 
 */
@protocol DLResultListener <PluginResultListener>

/**
 * @brief This method is called when a DL is scanned.  This will be called when a DL was successfully decoded .
 *
 * @param dlResult
 *    This is an object with License data.
 *
 */

-(void) onDLResult:(LicenseData*) dlResult;

@end
