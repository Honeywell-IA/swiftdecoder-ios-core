/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */
/** @file WindowMode.h
 *
 *  This header file contains enumerations used for setting window modes
 */

/**
 * @brief This enumeration defines the type of windowing that will be used.  Windowing allows you to define a specific region within the image that will be decoded
 */
typedef enum
{
    /** @brief Windowing disabled, full image is decoded */
	OFF,
	/** @brief Only barcodes that are within or crossing the defined window will be decoded  */
	CENTERINGMODE,
	/** @brief Only barcodes completely within the defined window will be decoded */
	WINDOWINGMODE
        
}WindowMode;
