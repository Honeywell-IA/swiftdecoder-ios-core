/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s: https://www.honeywellaidc.com/Pages/patents.aspx
 */

/** @file ActivationResult.h
 *
 *  This enumeration represents all available Activation/Deactivation responses
 */

/**
 *  @brief This enumeration represents all available Activation responses
 */
typedef enum
{
    /** @brief Activation Failed. Please check network related issues with your environment and honeywell servers. */
	FAILED_UNKNOWN = 0,
	/** @brief Activation was successful */
	SUCCESS = 1,
    /** @brief License perpetual*/
    FAILED_LICENSE_PERPETUAL=1000,
    /** @brief License inactive*/
    FAILED_LICENSE_INACTIVE=1001,
    /** @brief Entitlement or Activation ID is blank */
    FAILED_BLANK_ID = 1002,
    /** @brief Proxy  URL is blank */
    FAILED_BLANK_PROXY_URL = 1005,
	/** @brief Activation failed, License Manager not created. Create License Manager Object */
	FAILED_NOT_CREATED = 2000,
	/** @brief Activation failed, LM has insufficient memory */
	FAILED_INSUFFICIENT_MEMORY = 2001,
	/** @brief Activation failed, LM already created */
	FAILED_ALREADY_CREATED = 2002,
	/** @brief Activation failed, LM cannot write to specified path */
	FAILED_FOLDER_PATH_ERROR = 2003,
	/** @brief Activation failed, LM device ID error */
	FAILED_DEVICEID_ERROR = 2004,
	/** @brief Activation failed, LM device type error */
	FAILED_DEVICETYPE_ERROR = 2005,
	/** @brief Activation failed, License Manager customer ID error. Invalid Entitlement/Activation id. Please check the entitlement id on the license manager portal and reach out to Honeywell support */
	FAILED_CUSTOMERID_ERROR = 2006,
    /** @brief Deactivation is not allowed for your license type. Please reach out to Honeywell support to turn this feature on. */
    FAILED_DEACTIVATION_NOT_ALLOWED = 2007,
    /** @brief Activation failed, no valid activation id attached to the entitlement Id, please check the entitlement id on the license manager portal and reach out to Honeywell Support.*/
	FAILED_CURL_FAILURE = 2010,
    /** @brief Activation failed, Communication with server was succesfull, but activation has failed for an unknown reason. Please reach out to Honeywell support */
    FLEXERA_FAILURE = 3000,
    /** @brief Invalid license key */
    FAILED_INVALID_KEY = 3001,
    /** @brief All  the features of the key were expired*/
    FAILED_ALL_FEATURES_EXPIRED = 3005,
    /** @brief System time has been altered */
    FAILED_CLOCK_WINDBACK_DETECTED = 3008,
    /** @brief Activation failed, Communication with server was successful, but it is not responding. Please reach out to Honeywell support */
    FAILED_FLEXERA_COM = 4000,
    /** @brief No response from server, please check the access to Internet */
    FAILED_FLEXERA_NO_RESPONSE = 4001,
    /** @brief Curl returned an error while contacting the server */
    FAILED_CURL_ERROR = 5000,
    /** @brief Couldn't resolve host name */
    FAILED_CURL_HOST_NOT_FOUND =5006,
	/** @brief Deactivation failed, not activated */
	FAILED_NOT_ACTIVATED = 9999
}ActivationResult;
