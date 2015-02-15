/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface SSCredentialsManager : NSObject {

	NSLock* mRequestsMapLock;
	NSLock* mOptionsLock;
	NSMutableDictionary* mRequestsToIDsMap;
	NSMutableDictionary* mRequestsToOptionsMap;

}
+(id)kerberosCacheActiveSet;
+(id)kerberosUniquePrincipalNamesInSet:(id)arg1 ;
+(id)kerberosCacheSet;
+(void)initialize;
+(id)sharedManager;
-(void)endRequestForRequester:(id)arg1 ;
-(void)requestCredentialsForAuthType:(id)arg1 forRequester:(id)arg2 withOptions:(id)arg3 ;
-(id)optionsForRequester:(id)arg1 ;
-(void)_endRequestForRequester:(id)arg1 closeNetAuth:(char)arg2 ;
-(int)_killNetAuthProcesses;
-(void)requestCredentialsForInvalidAuthenticationTypeForRequester:(id)arg1 withOptions:(id)arg2 ;
-(void*)requestIDForRequester:(id)arg1 ;
-(void)removeRequestIDForRequester:(id)arg1 ;
-(void)returnPassword:(id)arg1 forCompositeKey:(id)arg2 withStatus:(int)arg3 ;
-(void)gatherCredentialsWithOptions:(id)arg1 forRequester:(id)arg2 ;
-(void)returnUsername:(id)arg1 password:(id)arg2 forCompositeKey:(id)arg3 withStatus:(int)arg4 ;
-(void)gatherCredentialsWithoutNetAuthWithOptions:(id)arg1 forRequester:(id)arg2 ;
-(void)requestCredentialsForAskToControlForRequester:(id)arg1 withOptions:(id)arg2 ;
-(void)requestCredentialsForKerberosForRequester:(id)arg1 withOptions:(id)arg2 ;
-(void)returnClientPrincipal:(id)arg1 servicePrincipal:(id)arg2 forCompositeKey:(id)arg3 withStatus:(int)arg4 ;
-(void)returnCredentials:(id)arg1 forCompositeKey:(id)arg2 withStatus:(int)arg3 ;
-(void)returnCompositeKey:(id)arg1 withStatus:(int)arg2 ;
-(void)returnRequestGuestAccessForCompositeKey:(id)arg1 ;
-(void)displayError:(id)arg1 forRequester:(id)arg2 ;
-(void)cleanupAllRequests;
-(void)requestCredentialsForNoAuthenticationNeededForRequester:(id)arg1 withOptions:(id)arg2 ;
-(void)requestCredentialsForVNCAuthenticationForRequester:(id)arg1 withOptions:(id)arg2 ;
-(void)requestCredentialsForDiffieHellmanNamePasswordForRequester:(id)arg1 withOptions:(id)arg2 ;
-(void)requestCredentialsForAskToObserveForRequester:(id)arg1 withOptions:(id)arg2 ;
-(void)requestCredentialsForKerberosNoUIForRequester:(id)arg1 withOptions:(id)arg2 ;
-(void)requestCredentialsForKerberosTGTForRequester:(id)arg1 withOptions:(id)arg2 ;
-(void)requestCredentialsForPriorAuthorized:(id)arg1 withOptions:(id)arg2 ;
-(id)requesterForRequestID:(void*)arg1 ;
-(id)init;
-(void)dealloc;
@end
