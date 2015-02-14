/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>

@class NSNumber, ISAuthenticationContext, ISDialog, NSURL;

@interface ISServerAuthenticationOperation : ISOperation {

	NSNumber* _authenticatedAccountDSID;
	ISAuthenticationContext* _authenticationContext;
	ISDialog* _dialog;
	NSURL* _redirectURL;

}

@property (retain) ISAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (readonly) ISDialog * dialog;                                          //@synthesize dialog=_dialog - In the implementation block
@property (retain) NSNumber * authenticatedAccountDSID;                          //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (retain) NSURL * redirectURL;                                          //@synthesize redirectURL=_redirectURL - In the implementation block
+(id)operationWithDialog:(id)arg1 storeClient:(id)arg2 ;
-(ISDialog *)dialog;
-(void)run;
-(id)initWithDialog:(id)arg1 storeClient:(id)arg2 ;
-(NSNumber *)authenticatedAccountDSID;
-(ISAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(ISAuthenticationContext *)arg1 ;
-(id)_authenticationContext;
-(void)setAuthenticatedAccountDSID:(NSNumber *)arg1 ;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(id)_authentciateReturningError:(id*)arg1 ;
-(char)_handleSelectedButton:(id)arg1 ;
-(void)_sendClientToURL:(id)arg1 ;
-(char)_shouldAuthenticateForButton:(id)arg1 ;
@end

