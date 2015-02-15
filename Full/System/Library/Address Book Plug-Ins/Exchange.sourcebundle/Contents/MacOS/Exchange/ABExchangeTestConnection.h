/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Address Book Plug-Ins/Exchange.sourcebundle/Contents/MacOS/Exchange
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Exchange/EWSExchangeServiceBindingDelegate.h>

@class NSString, NSURL;

@interface ABExchangeTestConnection : NSObject <EWSExchangeServiceBindingDelegate> {

	NSString* _password;
	NSURL* _serverURL;
	NSString* _rootFolderId;
	char _requiresSecureAuthentication;
	char _serverSupportsSecureAuthentication;

}

@property (copy) NSString * password;                                //@synthesize password=_password - In the implementation block
@property (copy) NSURL * serverURL;                                  //@synthesize serverURL=_serverURL - In the implementation block
@property (copy) NSString * rootFolderId;                            //@synthesize rootFolderId=_rootFolderId - In the implementation block
@property (readonly) char requiresSecureAuthentication;              //@synthesize requiresSecureAuthentication=_requiresSecureAuthentication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 password:(id)arg2 requiresSecureAuthentication:(char)arg3 ;
-(long long)executeSynchronously:(id*)arg1 ;
-(char)requiresSecureAuthentication;
-(NSString *)password;
-(NSString *)rootFolderId;
-(void)setRootFolderId:(NSString *)arg1 ;
-(void)dealloc;
-(void)setPassword:(NSString *)arg1 ;
-(NSURL *)serverURL;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)exchangeServiceBinding:(id)arg1 didReceiveCertificateError:(id)arg2 ;
-(void)exchangeServiceBinding:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)exchangeServiceBinding:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
@end

