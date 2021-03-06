/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/NSURLAuthenticationChallengeSender.h>
#import <ExchangeWebServices/NSURLConnectionDelegate.h>

@class EWSAutodiscoverRequest, EWSAutodiscoverResponse, EWSAutodiscoverBinding, NSString, NSError, NSURLConnection, NSURLAuthenticationChallenge, NSHTTPURLResponse, NSPort, NSMutableData, NSMutableArray, NSURL;

@interface EWSAutodiscoverOperation : NSObject <NSURLAuthenticationChallengeSender, NSURLConnectionDelegate> {

	EWSAutodiscoverRequest* _request;
	EWSAutodiscoverResponse* _response;
	EWSAutodiscoverBinding* _binding;
	NSString* _user;
	NSString* _password;
	NSError* _error;
	NSURLConnection* _connection;
	NSURLAuthenticationChallenge* _currentChallenge;
	NSHTTPURLResponse* _rawResponse;
	NSPort* _cancelPort;
	NSMutableData* _buffer;
	NSString* _host;
	NSString* _emailAddress;
	NSMutableArray* _activeDirectoryRecords;
	NSMutableArray* _srvRecords;
	NSURL* _autodiscoverURLUsed;
	char _autodiscoverState;
	char _isAsynchronous;
	char _inProgress;
	char _triedKerberosAuthentication;
	char _triedPasswordAuthentication;
	char _logsActivity;

}

@property (assign) char logsActivity;                                                      //@synthesize logsActivity=_logsActivity - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                        //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * host;                                                //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSURL * autodiscoverURLUsed;                                  //@synthesize autodiscoverURLUsed=_autodiscoverURLUsed - In the implementation block
@property (nonatomic,retain) NSURLAuthenticationChallenge * currentChallenge;              //@synthesize currentChallenge=_currentChallenge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)initWithRequest:(id)arg1 binding:(id)arg2 ;
-(char)logsActivity;
-(id)sendSynchronously:(id*)arg1 ;
-(void)_setConnection:(id)arg1 ;
-(id)_nextRequest;
-(void)setAutodiscoverURLUsed:(NSURL *)arg1 ;
-(void)_clearInProgress;
-(NSURLAuthenticationChallenge *)currentChallenge;
-(NSURL *)autodiscoverURLUsed;
-(char)_retryConnectionWithURLRequest:(id)arg1 ;
-(id)_autodiscoverURLWithScheme:(id)arg1 user:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 ;
-(id)_URLRequestWithURL:(id)arg1 isPost:(char)arg2 ;
-(id)_XMLRequest;
-(id)_nextURL;
-(void)setCurrentChallenge:(NSURLAuthenticationChallenge *)arg1 ;
-(void)_didFailWithError:(id)arg1 ;
-(id)_responseFromXML:(id)arg1 isRedirect:(char*)arg2 error:(id*)arg3 ;
-(void)_didFinishWithResponse:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)setLogsActivity:(char)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)start;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(void)cancel;
-(NSString *)host;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(char)connectionShouldUseCredentialStorage:(id)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end

