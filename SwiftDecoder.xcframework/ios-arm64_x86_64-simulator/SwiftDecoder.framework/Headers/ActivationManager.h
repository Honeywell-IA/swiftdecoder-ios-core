/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s: https://www.honeywellaidc.com/Pages/patents.aspx
 */
#import <Foundation/Foundation.h>
#import "ActivationResult.h"
#import "ActivationResponseListener.h"

/**
 * @brief This class is responsible for managing the activaiton and deactivation of the API.  The API must be activated before any useful functionality can be used.  Please note that any setting changes made to HSMDecoder before Activation has occurred will be wiped during the activation process and must be reset.
 */
@interface ActivationManager : NSObject

/**
 * @brief Queries the activation state of SwiftMobile
 *
 * @return
 * 	Boolean
 */
+ (Boolean) isActivated;

/// @brief Activate SwiftMobile asynchronously
/// @param entitlementId The entitlement ID provided with your SDK
/// @param listener The ActivationResponseListener that will handle the result
+ (void) entitlementIdActivateAsync:(NSString*)entitlementId withListener:(id<ActivationResponseListener>)listener;

/// @brief Activate SwiftMobile
/// @param entitlementId The entitlement ID provided with your SDK
/// @return Activation result
+ (ActivationResult) entitlementIdActivate:(NSString*)entitlementId;
/**
 *@brief Activate SwiftMobile with proxyserver
 *
 *@param entitlementId
 *  The entitlement ID key provided with your SDK
 *
 *@param proxyServer
 *  The http proxy server address . such as  http://127.0.0.1:8001
 *
 * @param proxyUsernamePwd
 *  The username and passwrod to login the http proxy server. Input @"" without name&password
 *  If you have a name and password. you can input as @"name:password"
 *
 * @return
 *  ActivationResult
 */
+ (ActivationResult) entitlementIDActivate:(NSString *)entitlementId withProxyServer:(NSString *)proxyServer withProxyUsernamePwd:(NSString *)proxyUsernamePwd;
/**
 * @brief Activate SwiftMobile asynchronously
 *
 * @param licenseKey
 * 	The license key provided with your SDK
 *
 * @param listener
 * The ActivationResponseListener that will handle the result
 *
 */
+ (void) activateAsync:(NSString*)licenseKey withListener:(id<ActivationResponseListener>)listener;

/**
 * @brief Activate SwiftMobile
 *
 * @param licenseKey
 * 	The license key provided with your SDK
 *
 * @return
 * 	Boolean
 */
+ (ActivationResult) activate:(NSString*)licenseKey;

/**
*@brief Activate SwiftMobile with proxyserver asynchronously
*
*@param licenseKey
*  The license key provided with your SDK
*
*@param proxyServer
*  The http proxy server address . such as  http://127.0.0.1:8001
*
*@param  proxyUsernamePwd
*  The username and passwrod to login the http proxy server. Input @"" without name&password
*  If you have a name and password. you can input as @"name:password"
*
*@param listener
* The ActivationResponseListener that will handle the result
*/
+ (void)activateAsync:(NSString *)licenseKey withProxyServer:(NSString *)proxyServer withProxyUsernamePwd:(NSString *)proxyUsernamePwd withListener:(id<ActivationResponseListener>)listener;

/**
 *@brief Activate SwiftMobile with proxyserver
 *
 *@param licenseKey
 *  The license key provided with your SDK
 *
 *@param proxyServer
 *  The http proxy server address . such as  http://127.0.0.1:8001
 *
 * @param proxyUsernamePwd
 *  The username and passwrod to login the http proxy server. Input @"" without name&password
 *  If you have a name and password. you can input as @"name:password"
 *
 * @return
 *  ActivationResult
 */
+ (ActivationResult) activate:(NSString *)licenseKey withProxyServer:(NSString *)proxyServer withProxyUsernamePwd:(NSString *)proxyUsernamePwd;

/**
 * @brief Activate SwiftMobile asynchronously
 *
 * @param licenseKey
 * 	The license key provided with your SDK
 *
 * @param activationFile
 * 	The activation file provided with your SDK
 *
 * @param listener
 * The ActivationResponseListener that will handle the result
 */
+ (void) activateAsync:(NSString*)licenseKey WithFile:(NSData*)activationFile withListener:(id<ActivationResponseListener>)listener;

/**
 * @brief Activate SwiftMobile
 *
 * @param licenseKey
 * 	The license key provided with your SDK
 *
 * @param activationFile
 * 	The activation file provided with your SDK

 * @return
 * 	Boolean
 */
+ (ActivationResult) activate:(NSString*)licenseKey WithFile:(NSData*)activationFile;
/**
* @brief Activate SwiftMobile with proxyserver asynchronously
*
* @param entitlementId
*  The entitlement ID key provided with your SDK
*
* @param proxyServer
*  The http proxy server address . such as  http://127.0.0.1:8001
*
* @param  proxyUsernamePwd
*  The username and passwrod to login the http proxy server. Input @"" without name&password
*  If you have a name and password. you can input as @"name:password"
*
* @param listener
* The ActivationResponseListener that will handle the result
*/
+ (void) entitlementIdActivateAsync:(NSString *)entitlementId withProxyServer:(NSString *)proxyServer withProxyUsernamePwd:(NSString *)proxyUsernamePwd withListener:(id<ActivationResponseListener>)listener;
/**
 * @brief Activate SwiftMobile asynchronously
 *
 * @param licenseKey
 * 	The license key provided with your SDK
 *
 * @param localLicenseServerURL
 * 	The URL of the local licensing server
 *
 * @param identity
 * 	The identity client file for the server you are trying to reach
 *
 * @param listener
 * The ActivationResponseListener that will handle the result
 *
 */
+ (void) activateAsync:(NSString*)licenseKey WithLocalServer:(NSString*)localLicenseServerURL andIdentity:(NSData*)identity withListener:(id<ActivationResponseListener>)listener;

/**
 * @brief Activate SwiftMobile
 *
 * @param licenseKey
 * 	The license key provided with your SDK
 *
 * @param localLicenseServerURL
 * 	The URL of the local licensing server
 *
 * @param identity
 * 	The identity client file for the server you are trying to reach
 *
 * @return
 * 	Boolean
 */
+ (ActivationResult) activate:(NSString*)licenseKey WithLocalServer:(NSString*)localLicenseServerURL andIdentity:(NSData*)identity;


/**
 * @brief Deactivates SwiftMobile and returns the license asynchronously
 *
 * @param licenseKey
 * 	The license key provided with your SDK
 *
 * @param localLicenseServerURL
 * 	The URL of the local licensing server
 *
 * @param identity
 * 	The identity client file for the server you are trying to reach
 *
 * @param listener
 *  The ActivationResponseListener that will handle the result
 *
 */
+ (void) deactivateAsync:(NSString*)licenseKey WithLocalServer:(NSString*)localLicenseServerURL andIdentity:(NSData*)identity withListener:(id<ActivationResponseListener>)listener;

/**
 * @brief Deactivates SwiftMobile and returns the license
 *
 * @param licenseKey
 * 	The license key provided with your SDK
 *
 * @param localLicenseServerURL
 * 	The URL of the local licensing server
 *
 * @param identity
 * 	The identity client file for the server you are trying to reach
 *
 * @return
 * 	ActivationResult
 */
+ (ActivationResult) deactivate:(NSString*)licenseKey WithLocalServer:(NSString*)localLicenseServerURL andIdentity:(NSData*)identity;


/**
 * @brief Deactivates SwiftMobile and returns the license asynchronously
 *
 * @param licenseKey
 *     The license key provided with your SDK
 *
 * @param listener
 *     The ActivationResponseListener that will handle the result
 */
+ (void) deactivateAsync:(NSString*)licenseKey withListener:(id<ActivationResponseListener>)listener;

/**
 * @brief Deactivates SwiftMobile and returns the license
 *
 * @param licenseKey
 *     The license key provided with your SDK
 *
 * @return
 *     ActivationResult
 */
+ (ActivationResult) deactivate:(NSString*)licenseKey;

/**
 * @brief Deactivates SwiftMobile and returns the license asynchronously
 *
 * @param entitlementId
 *     The entitlement Id provided with your SDK
 *
 * @param listener
 *     The ActivationResponseListener that will handle the result
 */
+ (void) entitlementIdDeactivateAsync:(NSString*)entitlementId withListener:(id<ActivationResponseListener>)listener;

/**
 * @brief Deactivates SwiftMobile and returns the license
 *
 * @param entitlementId
 *     The entitlement ID provided with your SDK
 *
 * @return
 *     ActivationResult
 */
+ (ActivationResult) entitlementIdDeactivate:(NSString*)entitlementId;

/**
 * @brief Deactivates SwiftMobile and returns the license asynchronously
 *
 * @param entitlementId
 *     The entitlement Id provided with your SDK
 *
 *@param proxyServer
 *  The http proxy server address . such as  http://127.0.0.1:8001
 *
 * @param proxyUsernamePwd
 *  The username and passwrod to login the http proxy server. Input @"" without name&password
 *  If you have a name and password. you can input as @"name:password"
 *
 * @param listener
 *     The ActivationResponseListener that will handle the result
 */

+(void)entitlementIdDeactivateAsync:(NSString *)entitlementId withProxyServer:(NSString*)proxyURL withProxyUsernamePwd:(NSString *)proxyUsernamePwd withListener:(id<ActivationResponseListener>)listener;

/**
 * @brief Deactivates SwiftMobile and returns the license
 *
 * @param entitlementId
 *     The entitlement ID provided with your SDK
 *
 *@param proxyServer
 *  The http proxy server address . such as  http://127.0.0.1:8001
 *
 * @param proxyUsernamePwd
 *  The username and passwrod to login the http proxy server. Input @"" without name&password
 *  If you have a name and password. you can input as @"name:password"
 *
 * @return
 *     ActivationResult
 */

+(ActivationResult)entitlementIdDeactivate:(NSString *)entitlementId withProxyServer:(NSString*)proxyURL withProxyUsernamePwd:(NSString *)proxyUsernamePwd;

/**
 * @brief Sets the server url and port for license activation
 *
 *  @param serverURL
 *     The URL of the custom licensing server
 *  @param port
 *     The net port of the server , such as 8080
 *
 */
+ (void) setServerURL:(NSString*)serverURL withPort:(int)port;
/**
 * @brief Get a license activation request into a NSData object.
 *
 * @param licenseKey
 *     The license key provided with your SDK
 *
 * @return
 *     NSData (nil will be returned if passed licenseKey is empty or nil)
 */
+ (NSData*) getLicenseRequest:(NSString*)licenseKey;

/**
 * @brief Consume a license activation response to activate SwiftDecoder.
 *
 * @param licenseKey
 *     The license key provided with your SDK
 *
 */
+ (ActivationResult) consumeLicenseReponse:(NSString*)licenseKey WithActivationFile:(NSData*)file;


/**
 @brief This function is same as consumeLicenseReponse just return result asynchronously.

 @param licenseKey
        The license key provided with your SDK
 @param file
        The reponse file
 @param listener
        The ActivationResponseListener that will handle the result
 */
+ (void) consumeLicenseReponse:(NSString*)licenseKey WithActivationFile:(NSData*)file withListener:(id<ActivationResponseListener>)listener;

/**
 * @brief Gets a description of the last error
 *
 * @return
 * 	NSString
 */
+ (NSString*) getLastErrorString;

/**
 * @brief This function returns the license manager version being used.
 *
 * @return
 *     NSString
 */
+ (NSString*) getLicenseManagerVersion;

/**
 * @brief This function returns the DeviceID which is a combination of UDID and LICENSE KEY..
 *
 * @return
 *     NSString
 */
+ (NSString*) getDeviceId;

/**
 * @brief Gets license return allowed
 *
 * @return
 *     ActivationResult
 */
+ (BOOL) isLicenseReturnAllowed:(NSString*)licenseKey;

/**
 * @brief This function returns the number days before the license expires for a subscription account.
 * @param days
 *        Remaining number of days
 * @return SUCCESS
 *         FAILED_UNKNOWN
 *         FAILED_LICENSE_PERPETUAL  if license is perpetual
 *         FAILED_LICENSE_INACTIVE     if license is inactive
 */
+ (ActivationResult) getTimeRemaining:(unsigned int*)days;


/**
 * @brief Replaces the trusted storage with a fresh license copy obtained from server and activates against the same. This API is expected to refresh existing local copy i.e license should be activated first through any of the available activation methods.
 * @return SUCCESS
 *         FAILED_UNKNOWN
 *         FAILED_DEVICEID_ERROR  if device id could not be found
 */
+ (ActivationResult)refreshLicense;

+(BOOL)isFeatureAvailable:(NSString*)featureName;
@end
