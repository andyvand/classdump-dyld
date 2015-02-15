/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/NSURLConnectionDelegate.h>
#import <InternetAccounts/IADataPluginDelegate.h>

@class NSURLCredential, NSError, NSURLRequest, NSURLConnection, NSMutableData, NSData, NSHTTPURLResponse, IAMailAccountSetupInput, IADataPlugin, NSString;

@interface IAAccountAuthenticator : NSObject <NSURLConnectionDelegate, IADataPluginDelegate> {

	NSURLCredential* _credential;
	long long _authType;
	/*^block*/id _authCompletionBlock;
	NSError* _error;
	char _result;
	NSURLRequest* _urlRequest;
	NSURLConnection* _loginConnection;
	NSMutableData* _incomingData;
	NSData* _urlResponseData;
	NSHTTPURLResponse* _urlResponse;
	IAMailAccountSetupInput* _input;
	IADataPlugin* _mailPlugin;
	IAAccountAuthenticator* _strongSelf;

}

@property (retain) NSURLCredential * credential;                    //@synthesize credential=_credential - In the implementation block
@property (assign) long long authType;                              //@synthesize authType=_authType - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign) char result;                                     //@synthesize result=_result - In the implementation block
@property (retain) NSURLRequest * urlRequest;                       //@synthesize urlRequest=_urlRequest - In the implementation block
@property (readonly) NSData * urlResponseData;                      //@synthesize urlResponseData=_urlResponseData - In the implementation block
@property (readonly) NSHTTPURLResponse * urlResponse;               //@synthesize urlResponse=_urlResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)authType;
+(id)parseGoogleResponse:(id)arg1 ;
+(id)errorForHTTPStatus:(long long)arg1 ;
-(void)setAuthType:(long long)arg1 ;
-(long long)authType;
-(void)authSuccess;
-(void)authFailure:(id)arg1 ;
-(void)authenticateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setUrlRequest:(NSURLRequest *)arg1 ;
-(NSData *)urlResponseData;
-(NSHTTPURLResponse *)urlResponse;
-(NSURLCredential *)credential;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(id)accountProperties;
-(NSURLRequest *)urlRequest;
-(void)plugin:(id)arg1 accountSetupUpdate:(id)arg2 withStatus:(long long)arg3 ;
-(void)plugin:(id)arg1 accountSetupDidFail:(id)arg2 withError:(id)arg3 ;
-(void)plugin:(id)arg1 accountSetupDidFinish:(id)arg2 withResult:(id)arg3 ;
-(void)plugin:(id)arg1 didCreateAccountUID:(id)arg2 ;
-(void)plugin:(id)arg1 didDeleteAccountUID:(id)arg2 ;
-(void)plugin:(id)arg1 didChangeAccountUID:(id)arg2 ;
-(char)plugin:(id)arg1 handleCertificateError:(id)arg2 ;
-(void)setResult:(char)arg1 ;
-(void)cancel;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(char)result;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)cleanup;
@end

