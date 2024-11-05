/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  HSMCameraPreview.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/15/13.
//

#import <UIKit/UIKit.h>
#import "HSMDecodeComponent.h"
#import "PluginMonitorEventListener.h"

@interface HSMCameraPreview : UIViewController <PluginMonitorEventListener>
@property (retain, nonatomic) IBOutlet UIButton *btnBack;
- (IBAction)onBackPressed:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet HSMDecodeComponent *decodeComponent;
@end
