/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  CameraManager.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 11/13/13.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <QuartzCore/QuartzCore.h>
#import <AudioToolbox/AudioToolbox.h>
#import <UIKit/UIKit.h>
#import "DecodeManager.h"
#import "CameraManagerEventListener.h"
#import "ActiveCamera.h"
#import "DependencyCallbackManager.h"
typedef void (^Handler)(UIImage *fullResolutionImage);
typedef NS_ENUM(int, Resolution)  {
    /** @brief Auto*/
    Auto = 0,
    /** @brief HD resolution for AVcapture Video Output */
    HD = 1 ,
    /** @brief  Full HD resolution for AVcapture Video Output */
    Full_HD = 2,
    /** @brief UHD 4k*/
    UHD = 3,
    /**@brief Max Resolution**/
    MAX_DOF = 4
};

@interface CameraManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate,AVCapturePhotoCaptureDelegate>
{
    @private
    AVCaptureSession *captureSession;
	AVCaptureVideoPreviewLayer *previewLayer;
    AVCaptureDeviceInput *videoIn;
    AVCaptureVideoDataOutput *videoOutPreview;
    int cameraFocusMode;
    bool isAutoFocusing, isFlashEnabled,ARPluginRegistered;
    unsigned char *lastDecodedPtr, *lastImgPtrCropped ,*lastProcessedImgPtr;
    int lastDecodedImgHeight;
    int lastDecodedImgWidth;
    int lastProcessedImgHeight;
    int lastProcessedImgWidth;
    
    unsigned char savedImage[20000000];//supports up to 1920x1080 resolutions, may need to be increased in the future
    NSMutableArray *eventListeners;
    DecodeManager* decodeMgr;
    HSMDecodeResultArray *results;
}

@property (retain) AVCaptureSession *captureSession;
@property (retain) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain) AVCapturePhotoOutput *stillImageOutput;

@property (retain) NSString* videoResolution;
@property (assign) unsigned char* lastDecodedPtr;
@property (assign) unsigned char* lastProcessedImgPtr;
@property (assign) unsigned char* lastImgPtrCropped;
@property (assign) int lastDecodedImgHeight;
@property (assign) int lastDecodedImgWidth;
@property (assign) int lastProcessedImgHeight;
@property (assign) int lastProcessedImgWidth;
@property int cameraFocusMode;
@property (assign) Boolean keepCameraInitialized;
@property (copy, nonatomic) Handler handler;
@property BOOL shouldDecodeFrames;

//static singelton methods
+ (CameraManager*) getInstance;
+ (void) disposeInstance;

//instance methods
- (void) focusCamera;
- (Boolean) isAutoFocusing;
- (Boolean) isFrontCameraActive;
- (void) setVideoFrameDelegate:(id<AVCaptureVideoDataOutputSampleBufferDelegate>)delegate;
- (void) removeVideoDataOutput;
- (UIImage*) getLastBarcodeImage:(BarcodeBounds*)bounds;
- (UIImage*) getLastProcessedImage;
- (UIImage*) getLastDecodedImage;
- (void)getHighResolutionImageWithCompletionHandler:(void (^)(UIImage *image))handler;
- (void) enableFlash:(Boolean)enable;
- (Boolean) enableFlashWithLevel:(float)torchLevel;
- (Boolean) isFlashEnabled;
- (void) addOnEventListener:(id<CameraManagerEventListener>)eventListener;
- (void) removeOnEventListener:(id<CameraManagerEventListener>)eventListener;
- (void) switchCameraPosition:(ActiveCamera)camera;
- (Boolean) setTorchMode:(int)mode;
- (Boolean) setFocusMode:(int)mode;
- (Boolean) setExposureMode:(int)mode;
- (Boolean) setWhiteBalanceMode:(int)mode;
- (void)startPreview;
- (void)stopPreview;
- (void) openCameraSession;
- (void) closeCameraSession;
- (Boolean)isCameraSessionOpen;
-(CGFloat) getZoomRatio;
-(void) setZoomRatio: (CGFloat)zoomRatio;
-(BOOL)setCameraResolution:(Resolution)resolution;
-(NSArray*)getCameraResolution;
-(Resolution)getCurrentCameraResolution;
-(NSString*)getStringForCameraResolution:(int)resolution;
-(Resolution)getCameraResolutionForString:(NSString*)resolutionStr;
-(Boolean) ARPluginRegistered;
- (void) RegisterARPlugin:(Boolean)isRegister;
@end
