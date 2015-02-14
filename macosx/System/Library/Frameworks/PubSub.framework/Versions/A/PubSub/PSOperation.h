/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PubSub/NSURLConnectionDelegate.h>

@class PSMessageQueue, NSURL, NSString, NSMutableURLRequest, NSURLConnection, NSHTTPURLResponse, NSMutableData, NSError, NSData;

@interface PSOperation : NSObject <NSURLConnectionDelegate> {

	PSMessageQueue* _target;
	SEL _action;
	NSURL* _url;
	NSString* _eTag;
	unsigned _start;
	NSMutableURLRequest* _request;
	NSURLConnection* _connection;
	NSHTTPURLResponse* _response;
	NSMutableData* _responseData;
	NSError* _error;
	char _requiresDigestAuthentication;

}

@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (readonly) NSString * responseETag; 
@property (readonly) NSData * responseData;                         //@synthesize responseData=_responseData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorWithCode:(int)arg1 url:(id)arg2 ;
-(id)credential;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)setValue:(id)arg1 ofHeader:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 URL:(id)arg3 eTag:(id)arg4 start:(unsigned)arg5 ;
-(NSData *)responseData;
-(NSString *)responseETag;
-(char)runSynchronously;
-(void)setRequiresDigestAuthentication:(char)arg1 ;
-(void)setContentType:(id)arg1 body:(id)arg2 ;
-(id)responseHeader:(id)arg1 ;
-(void)_finished;
-(void)_gotResponse;
-(void)_setErrorCode:(int)arg1 ;
-(char)isAcceptableCredential:(id)arg1 forChallenge:(id)arg2 ;
-(char)requiresDigestAuthentication;
-(id)userAgent;
-(void)dealloc;
-(void)start;
-(NSString *)description;
-(void)cancel;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end

