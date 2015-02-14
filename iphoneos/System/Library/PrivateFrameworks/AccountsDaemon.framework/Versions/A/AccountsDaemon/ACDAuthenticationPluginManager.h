/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ACDQueueDictionary, NSMutableDictionary, NSObject;

@interface ACDAuthenticationPluginManager : NSObject {

	ACDQueueDictionary* _verificationHandlerQueues;
	ACDQueueDictionary* _renewalHandlerQueues;
	NSMutableDictionary* _authenticationPluginsByType;
	NSObject*<OS_dispatch_queue> _authenticationPluginQueue;

}
-(void)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 saveWhenAuthorized:(char)arg3 handler:(/*^block*/id)arg4 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)isPushSupportedForAccount:(id)arg1 ;
-(id)_authenticationTypeForAccount:(id)arg1 ;
-(id)_pluginForAuthenticationType:(id)arg1 ;
-(id)_authCapableParentAccountForAccount:(id)arg1 ;
-(void)_handleVerificationCompletionForAccount:(id)arg1 verifiedAccount:(id)arg2 error:(id)arg3 store:(id)arg4 shouldSave:(char)arg5 ;
-(void)_handleRenewalCompletionResult:(long long)arg1 forAccount:(id)arg2 renewalID:(id)arg3 accountStore:(id)arg4 error:(id)arg5 ;
-(id)_descriptionForRenewalResult:(long long)arg1 ;
-(id)init;
@end

