//
//  FKFlickrPushUnsubscribe.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPushUnsubscribeError_RequiredParameterMissing = 1,		 /* One of the required arguments for the method was not provided. */
	FKFlickrPushUnsubscribeError_InvalidParameterValue = 2,		 /* One of the arguments was specified with an illegal value. */
	FKFlickrPushUnsubscribeError_CallbackFailedOrInvalidResponse = 4,		 /* The verification callback failed, or failed to return the expected response to confirm the un-subscription. */
	FKFlickrPushUnsubscribeError_SubscriptionAwaitingVerificationCallbackResponseTryAgainLater = 6,		 /* A subscription with those details exists already, but it is in a pending (non-verified) state. Please wait a bit for the verification callback to complete before attempting to update the subscription. */
	FKFlickrPushUnsubscribeError_SubscriptionNotFound = 7,		 /* No subscription matching the provided details for this user could be found. */
	FKFlickrPushUnsubscribeError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPushUnsubscribeError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPushUnsubscribeError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPushUnsubscribeError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPushUnsubscribeError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPushUnsubscribeError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPushUnsubscribeError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPushUnsubscribeError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPushUnsubscribeError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPushUnsubscribeError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPushUnsubscribeError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPushUnsubscribeError;

/*

Why would you want to do this?
<br><br>
<i>(this method is experimental and may change)</i>




*/
@interface FKFlickrPushUnsubscribe : NSObject <FKFlickrAPIMethod>

/* The type of subscription. See <a href="http://www.flickr.com/services/api/flickr.push.getTopics.htm">flickr.push.getTopics</a>. */
@property (nonatomic, strong) NSString *topic; /* (Required) */

/* The url for the subscription endpoint (must be the same url as was used when creating the subscription). */
@property (nonatomic, strong) NSString *callback; /* (Required) */

/* The verification mode, either 'sync' or 'async'. See the <a href="http://pubsubhubbub.googlecode.com/svn/trunk/pubsubhubbub-core-0.3.html#subscribingl">Google PubSubHubbub spec</a> for details. */
@property (nonatomic, strong) NSString *verify; /* (Required) */

/* The verification token to be echoed back to the subscriber during the verification callback, as per the <a href="http://pubsubhubbub.googlecode.com/svn/trunk/pubsubhubbub-core-0.3.html#subscribing">Google PubSubHubbub spec</a>. Limited to 200 bytes. */
@property (nonatomic, strong) NSString *verify_token;


@end
