/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/SOAPMessage.h>
#import <ExchangeWebServices/NSURLConnectionDelegate.h>

@protocol SOAPRequestDelegate;
@class NSURL, NSPort, NSURLConnection, NSHTTPURLResponse, SOAPParser, NSError, NSString;

@interface SOAPRequest : SOAPMessage <NSURLConnectionDelegate> {

	double _timeout;
	NSURL* _URL;
	id<SOAPRequestDelegate> _delegate;
	long long _state;
	id _stateLock;
	NSPort* _stopPort;
	NSURLConnection* _connection;
	NSHTTPURLResponse* _response;
	SOAPParser* _parser;
	NSError* _error;
	char _isAsynchronous;
	char _triedKerberosAuthentication;
	char _triedPasswordAuthentication;
	char _logsActivity;

}

@property (nonatomic,retain) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (assign) char logsActivity;                               //@synthesize logsActivity=_logsActivity - In the implementation block
@property (retain) id<SOAPRequestDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long state; 
@property (retain) NSHTTPURLResponse * response;                    //@synthesize response=_response - In the implementation block
@property (retain) NSError * error; 
@property (nonatomic,readonly) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)protectionSpaceForURL:(id)arg1 ;
-(char)logsActivity;
-(id)sendSynchronously:(id*)arg1 ;
-(void)_setConnection:(id)arg1 ;
-(void)_didFailWithError:(id)arg1 ;
-(void)_didFinishWithResponse:(id)arg1 ;
-(id)initWithURL:(id)arg1 document:(id)arg2 delegate:(id)arg3 timeout:(double)arg4 ;
-(id)_newURLRequest;
-(id)_newConnectionWithRequest:(id)arg1 scheduledInMode:(id)arg2 error:(id*)arg3 ;
-(void)_stopConnectionRunLoop;
-(void)setLogsActivity:(char)arg1 ;
-(double)timeout;
-(void)setDelegate:(id<SOAPRequestDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)start;
-(NSURL *)URL;
-(void)cancel;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id<SOAPRequestDelegate>)delegate;
-(id)initWithDocument:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(char)connectionShouldUseCredentialStorage:(id)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(NSHTTPURLResponse *)response;
@end

