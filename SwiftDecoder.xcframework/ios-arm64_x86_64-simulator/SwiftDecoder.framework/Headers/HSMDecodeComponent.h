/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  HSMDecodeComponent.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/14/13.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "CameraManagerEventListener.h"
/**
 * @brief An HSMDecodeComponent is a real-time camera preview frame layout that can be include in your own activity for greater control over the look and feel of the barcode scanning operation.
 * This allows you to resize the camera preview as you see fit.  This can be used as a replacement for the HSMCameraPreview activity that is launched by the HSMDecoder scanBarcode() method.
 * An example of where you may wish to use this is within a tabbed activity.  Using an HSMDecodeComponent embedded within your own activity allows you to customize the look and feel of the barcode scanning operation.
 */
@interface HSMDecodeComponent : UIView <CameraManagerEventListener>
{
    @private
    Boolean isComponentEnabled;
}
/**
 * @brief This API allows to start/stop the preview shown in the camera view.
 * @param enable
 */
-(void) enable:(Boolean)enable;

/**
 * @brief This method returns the enable state of the HSMDecodeComponent
 *
 *
 * @return
 *     The enable state of the HSMDecodeComponent
 */

-(Boolean) isEnabled;
/**
 *  @brief This call will set  freeze mode (applicable only for AR plugin) .
 *
 *  @param mode
 *  Enable or disable freeze frame mode
 *
 */
-(void) setFreezeMode:(Boolean)mode;
/**
 * @brief API to dispose the current instance of HSMDecodeComponent
 */
-(void)dispose;
@end
