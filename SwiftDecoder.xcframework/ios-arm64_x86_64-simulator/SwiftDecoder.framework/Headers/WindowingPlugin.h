#import "DecodeBasePlugin.h"
#import "WindowMode.h"

/**
 * @brief A SwiftPlugin used to dynamically change the windowing used for decoding
 */
@interface WindowingPlugin : DecodeBasePlugin <DecodeBasePluginProtocol>
{
        @private
        Boolean enableWindowAimer,  hideWindowAimer;
}
/**
 * @brief Sets the window mode
 *
 * @param mode OFF, CENTERING or WINDOWING
 */
- (void)setWindowMode: (WindowMode)mode;

/**
 * @brief Sets the window size
 *
 * @param left Left border in image coordinates
 * @param top Top border in image coordinates
 * @param right Right border in image coordinates
 * @param bottom Bottom border in image coordinates
 *
 */
- (void)setWindow: (int)left top:(int)top right:(int)right bottom:(int)bottom;

/**
 *  @brief Gets the defined subset of the image to decode. Only barcodes found within the defined region will be decoded.
 *
 *  @return
 *   Returns bounds (as a percentage) of the subset of the image to decode.  The returned array is length 4 where {left, right, top, bottom}
 */
- (NSArray *) getWindow;

/**
 * @brief Enables the ability to resize the window with finger gestures
 *
 * @param enable The enable state
 */
- (void)enableTouchResizing: (BOOL)enable;

/**
 * @brief Sets the target window size
 *
 * @param size of the window(if value of the size is 35, then window size will be 35x35)
 */
-(void)setTargetSize:(int)size;
@end
