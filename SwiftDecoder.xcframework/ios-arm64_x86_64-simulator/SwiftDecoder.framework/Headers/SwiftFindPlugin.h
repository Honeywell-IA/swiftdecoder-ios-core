//
//  SwiftFindPlugin.h
//  SwiftDecoder
//
//  Created by H454944 on 27/09/23.
//

#import <Foundation/Foundation.h>
#import "BarcodeARBasePlugin.h"
#import "SearchAndFindLayoutDataSource.h"
#import "SearchView.h"
#import "FindView.h"
NS_ASSUME_NONNULL_BEGIN
/**
  * @brief The mode of search. this could be text search or scan search
  */
typedef enum {

    SEARCH_TYPE_TEXT = 0,
    SEARCH_TYPE_SCAN

}SearchType;

/**
 * @brief A SwiftPlugin used for rendering searching and finding barcodes within the preview.
 *
 * The bounding boxes which overlays on the preview allow the touch functionality to select one barcode and search it in a list of barcodes.
 * This plugin also allows the user enter the barcode data manually and search it
 * The application can register SearchFindListener call back using HSMDecoder::addResultListener API to have further action on selected barcode.
  *
 */
@interface SwiftFindPlugin : BarcodeARBasePlugin<SearchListener,SearchLayoutDataSource,FindLayoutDataSource>
/**
 * @brief this method is a constructor which takes datasource as a parameter
 *
 * @param  dataSource - datasource for layouts to be passed
 */
-(id)initWithDataSource:(id<SearchAndFindLayoutDataSource>) dataSource;
/**
 * @brief this method is used to set the barcode data to to be searched when the data to be searched is entered manually
 *
 * @param  barcodeText entered  barcode data
 */
-(void) setSearchBarcode:(NSString*) barcodeText;
/**
   * @brief set search type
   *
   * @param  searchType
   */
-(void) setSearchType:(SearchType) searchType;

/**
    * @brief set search and Find Listener to start the process
    *
    * @param  listener instance
    */
-(void) setSearchFindListener:(id<SearchFindListener>) listener;
/**
 * @brief start the find operation. Once the data that has to be searched is manually entered or scanned, use this method to start the Find opertaion
 *
 * @param  decodeResult entered or scanned barcode data
 */
-(void)setStartFind:(HSMDecodeResult*)decodeResult;
/**
   * @brief reset serach and find. clears all the data
   *
   *
   */
-(void)resetSearchFind;
@end

NS_ASSUME_NONNULL_END
