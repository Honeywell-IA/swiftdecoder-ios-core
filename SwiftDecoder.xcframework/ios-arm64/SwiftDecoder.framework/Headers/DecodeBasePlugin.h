//
//  DecodeBasePlugin.h
//  HSMDecoderAPI
//
//  Created by eltodesc on 9/2/15.
//
//

#import "SwiftPlugin.h"
#import "PluginHelper.h"

@protocol DecodeBasePluginProtocol <NSObject>
-(void)updateChildFrame;
@end

/**
 * @brief This is a decoder base pulg-in class.  It is used to give a base feature set to all plug-ins that sub-class it.  This allows one to easily add a consistent base set of feature to a group of plug-ins.  This does not handle any results, as it relies on any derived class to add this functionality.
 *
 */
@interface DecodeBasePlugin : SwiftPlugin
{
    @private
    Boolean enableAimer, enableSound, enableFlash, hideAimer, hideOverlayText, enableVibration;
    float flashIntensity;
    NSString *overlayText;
    UIColor *overlayTextColor, *aimerColor;
    VibrateStyle vibrateStyle;
    CGFloat overlayTextHeight;
}

@property (nonatomic, assign) BOOL enableTouchResizingEnable;
@property(weak, nonatomic) id<DecodeBasePluginProtocol> delegateDecodeBasePluginProtocol;

/// @brief This method enables vibration when a barcode is successfully decoded.
/// @param enable The enable state of the vibration:TRUE or FALSE
-(void)enableVibration:(Boolean)enable;


/// @brief This mehod enable vibration with different style, such as Light, Medium, Heavy
/// @param style A VibrateStyle value.
- (void)enableVirationWithStyle:(VibrateStyle)style;


/// @brief This methoad queries the state of the vibration
/// @return Booleam
- (Boolean)isVibrationEnabled;

/// @brief Thie method queries the current style of vibration
/// @return VibrateStyle
- (VibrateStyle)GetVibrationStyle;

/**
 * @brief This method enables a beep sound when a barcode is successfully decoded.
 *
 * @param enable
 *   The enable state of the beep
 *
 */
- (void)enableSound:(Boolean)enable;

/**
 * @brief This method queries the sound enable state
 *
 *
 * @return
 *   Boolean
 */
- (Boolean)isSoundEnabled;

/**
 * @brief This method enables a graphical aimer overlay during image capture.
 *
 * @param enable
 *   The enable state of the aimer
 *
 */
- (void)enableAimer:(Boolean)enable;

/**
 * @brief Lets a plug-in hide the aimer regardless of its enable state
 *
 * @param hide
 *   The visibiliy of the aimer
 *
 */
- (void)hideAimer:(Boolean)hide;

/**
 * @brief This method enables flash
 *
 * @param enable
 *   The enable state of the flash
 *
 */
- (void)enableFlash:(Boolean)enable;

/**
 * @brief This method enables flash with the specified intensity
 *
 * @param intensity
 *   The brightness of the flash (must be a value between 0.0 and 1.0)
 *
 */
- (void)enableFlashWithIntensity:(float)intensity;


/**
 * @brief This method queries the flash enable state
 *
 *
 */
- (Boolean)isFlashEnabled;

/**
 * @brief This method configures the overlaid text that is displayed during image capture.
 *
 * @param message
 *   The overlaid text message
 *
 */
- (void)setOverlayText:(NSString*)message;

/**
 * @brief Lets a plug-in hide the overlay text regardless of its enable state
 *
 * @param hide
 *   The visibiliy of the overlay text
 *
 */
- (void)hideOverlayText:(Boolean)hide;

/**
 * @brief This method changes the color of the overlaid text that is displayed during image capture.
 *
 * @param color
 *   The color of the overlaid text
 *
 */
- (void)setOverlayTextColor:(UIColor*)color;

/**
 * @brief This method changes the color of the aimer
 *
 * @param color
 *   The color of the aimer
 *
 */
- (void)setAimerColor:(UIColor*)color;

/**
 * @brief This method changes the color of the Accent
 *
 * @param color
 *   The color of the accent
 *
 */
- (void)setAccentColor:(UIColor*)color;
/**
 * @brief This method changes the color of the Overlay Borders
 *
 * @param color
 *   The color of the overlay border
 *
 */
-(void)setOverlayColor:(UIColor*)color;
/**
 * @brief This method draws overlay text
 *
 * @param context
 *   current context
 *
 * @param rect
 *   The frame where text has to be drawn
 *
 */
-(void) drawOverlayText:(CGContextRef)context Rect:(CGRect)rect;

-(void) solveOverlayTextStretchIssue:(CGRect)rect;
-(void)setEnableTouchResizingEnable:(BOOL)enable;

@end
