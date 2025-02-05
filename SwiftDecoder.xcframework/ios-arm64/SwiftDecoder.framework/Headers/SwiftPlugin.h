/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  SwiftPlugin.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/12/13.
//

#import <Foundation/Foundation.h>
#import "PluginResultListener.h"
#import "HSMDecodeResultArray.h"
#import "DecodeResult.h"
typedef enum {
    DEFAULT,
    AR,
    PANAROMIC,
    WINDOWING_TARGETING,
    AR_STOCK,
    AR_PRICELABEL,
    ADVOCR,
    AR_BASE,
    DL_AGE_VERIFICATION
} PLUGIN_TYPE;
/**
 * @brief A SwiftPlugin is a special Objective-C plug-in class that allows you to completely control the look and function of a barcode scanning operation.
 * 	      All plug-ins have their own UI that is rendered over the real-time camera preview.
 *        A SwiftPlugin must extend the SwiftPlugin base class, which contains many callback methods that are fired throughout the plug-in life cycle.
 *        A SwiftPlugin utilizes the observer pattern to notify any observers of a decode result (or any notification).
 *        Any observer of a SwiftPlugin must register itself as a result listener with the plug-in.
 *        This is done by creating an interface that extends the OnPluginResultListener interface.
 *        A SwiftPlugin will be notified when a barcode is decoded, when the screen is drawn, when the screen is touched and many other times throughout the plug-in lifecycle.
 *        This allows you to completely control the barcode scanning experience.  You can register your plug-in with the system via the HSMDecoder registerPlugin() method where it will be run in both the default HSMCameraPreview activity, as well as within any HSMDecodeComponent.
 * @author E412474
 */
@interface SwiftPlugin : UIView //NSObject
{
    @private
    NSMutableArray *resultListeners;
    PLUGIN_TYPE mPluginType;
}

/**
 * @brief Called when the HSMCameraPreview or HSMDecodeComponent activity comes to the foreground.  This should be used to initialize the plug-in on each scan attempt.
 */
- (void)onStart;

/**
 * @brief Called when the HSMCameraPreview or HSMDecodeComponent is no longer visible.
 */
- (void)onStop;

/**
 * @brief This is used to clean up plug-in resources.
 */
- (void)onDestroy;

/**
 * @brief Called when a barcode(s) has been decoded in the image
 *
 * @param results
 * 	 An array results for all decode barcodes
 */
- (void)onDecode:(HSMDecodeResultArray*)results;

/**
 * @brief Called when a result of any specific type needs to be sent back
 * @param results
 * @param resultType
 */
-(void) onDecode:(NSArray*) results withResultType:(DecodeResultType) resultType;
/**
 * @brief Called each time a frame cannot be successfully decoded
 */
- (void)onDecodeFailed;

/**
 * @breif called ech time a frame cannot eb successfully decoded
 * @param resultType
 */
- (void)onDecodeFailed:(DecodeResultType) resultType;
/**
 * @brief Called each time an image is sent to the decoder
 *
 * @param image
 * 	 The greyscale image data
 *
 * @param width
 * 	 The image width
 *
 * @param height
 * 	 The image height
 *
 */
- (void)onImage:(unsigned char*)image Width:(int)width Height:(int)height;

/**
 * @brief Adds a listener for plug-in results/notifications
 *
 * @param resultListener
 * 	 This listener that will be notified of any results/notifications
 *
 */
- (void)addOnResultListener:(id<PluginResultListener>)resultListener;

/**
 * @brief Removes a listener for plug-in results/notifications
 *
 * @param resultListener
 * 	 This listener that will be no longer notified of any results/notifications
 *
 */
- (void)removeOnResultListener:(id<PluginResultListener>)resultListener;

/**
 * @brief Gets a list of all listeners
 *
 * @return
 * 	All plug-in listeners
 */
- (NSArray<PluginResultListener>*)getOnResultListeners;

/**
 * @brief Signals the plug-in that is should release all its resources
 *
 */
- (void)dispose;

/**
 * @brief This signals the system that our plug-in has completed its processing and that the system should return focus to the caller.
    This is only needed if scanBarcode() was called on an instance of HSMDecoder to launch this plug-in (as opposed to within an HSMDecodeComponent)
 */
- (void)finish;

/**
* @brief Tells the plug-in to re-draw itself.  Calling this will cause the drawRect() method to be called and the plug-in UI to be refreshed.  Call this anytime you wish to update the plug-in's UI
*/
- (void)updateDisplay;

/**
 * @brief Sets the plugin type
 *
 * @param plugin
 *      Type of plugin
 *
 */
-(void)setPluginType:(PLUGIN_TYPE)plugin;

/**
 * @brief Returns the Plugin type
 *
 */
-(PLUGIN_TYPE)pluginType;

@end
