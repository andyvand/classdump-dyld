/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISURLOperation.h>

@class ISAuthenticationContext, NSNumber, NSString;

@interface ISStoreURLOperation : ISURLOperation {

	ISAuthenticationContext* _authenticationContext;
	NSNumber* _authenticatedDSID;
	int _bagType;
	char _needsAuthentication;
	char _sendToken;
	NSString* _urlBagKey;
	char _urlKnownToBeTrusted;
	char _useDSIDSpecificBag;
	char _adiActionInResponse;
	long long _adiSilentActionRetryCount;
	char _shouldRetryOnSilentADIAction;
	/*^block*/id _authenticationCompletedHandler;
	/*^block*/id _requestMutationHandler;
	NSString* _strongToken;

}

@property (__weak) id<ISStoreURLOperationDelegate><ISURLOperationDelegate><ISOperationDelegate> delegate; 
@property (retain) NSString * urlBagKey;                                                                               //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (retain) NSNumber * authenticatedDSID;                                                                       //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
@property (assign) char urlKnownToBeTrusted;                                                                           //@synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted - In the implementation block
@property (retain) ISAuthenticationContext * authenticationContext;                                                    //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign) char needsAuthentication;                                                                           //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign) char sendToken;                                                                                     //@synthesize sendToken=_sendToken - In the implementation block
@property (assign) char useDSIDSpecificBag;                                                                            //@synthesize useDSIDSpecificBag=_useDSIDSpecificBag - In the implementation block
@property (copy) id authenticationCompletedHandler;                                                                    //@synthesize authenticationCompletedHandler=_authenticationCompletedHandler - In the implementation block
@property (copy) id requestMutationHandler;                                                                            //@synthesize requestMutationHandler=_requestMutationHandler - In the implementation block
@property (assign) char shouldRetryOnSilentADIAction;                                                                  //@synthesize shouldRetryOnSilentADIAction=_shouldRetryOnSilentADIAction - In the implementation block
@property (nonatomic,copy) NSString * strongToken;                                                                     //@synthesize strongToken=_strongToken - In the implementation block
+(id)acceptLanguageHeaderString;
+(id)cacheBusterString;
+(void)addITunesStoreHeadersToRequest:(id)arg1 withStoreClient:(id)arg2 storeAccount:(id)arg3 ;
+(void)addStandardQueryParametersForURL:(id)arg1 request:(id*)arg2 serviceProxy:(id)arg3 ;
+(id)pingOperationWithUrl:(id)arg1 storeClient:(id)arg2 ;
+(id)propertyListOperationWithURLBagKey:(id)arg1 storeClient:(id)arg2 ;
-(id)init;
-(id)description;
-(void)run;
-(NSString *)urlBagKey;
-(void)setUrlBagKey:(NSString *)arg1 ;
-(NSNumber *)authenticatedDSID;
-(id)authenticatedAccountDSID;
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
-(void)setNeedsAuthentication:(char)arg1 ;
-(char)handleRedirectFromDataProvider:(id)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(id)newRequestWithURL:(id)arg1 ;
-(char)needsAuthentication;
-(char)sendToken;
-(NSString *)strongToken;
-(id)requestMutationHandler;
-(char)_authenticateReturningError:(id*)arg1 ;
-(void)_runURLOperation;
-(char)_dataProviderDidProcessDialog;
-(char)shouldRetryOnSilentADIAction;
-(ISAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(ISAuthenticationContext *)arg1 ;
-(id)authenticationCompletedHandler;
-(void)setStrongToken:(NSString *)arg1 ;
-(char)urlKnownToBeTrusted;
-(char)_canSendTokenToURL:(id)arg1 ;
-(void)_addStandardQueryParametersForURL:(id)arg1 ;
-(char)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2 ;
-(void)setSendToken:(char)arg1 ;
-(void)setUrlKnownToBeTrusted:(char)arg1 ;
-(char)useDSIDSpecificBag;
-(void)setUseDSIDSpecificBag:(char)arg1 ;
-(void)setAuthenticationCompletedHandler:(id)arg1 ;
-(void)setRequestMutationHandler:(id)arg1 ;
-(void)setShouldRetryOnSilentADIAction:(char)arg1 ;
@end

