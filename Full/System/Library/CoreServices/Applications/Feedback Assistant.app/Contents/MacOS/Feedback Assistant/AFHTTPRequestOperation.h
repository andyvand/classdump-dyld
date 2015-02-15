/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/AFURLConnectionOperation.h>

@protocol OS_dispatch_queue;
@class NSError, NSString, NSObject, NSHTTPURLResponse, NSURLRequest, NSRecursiveLock;

@interface AFHTTPRequestOperation : AFURLConnectionOperation {

	NSError* _HTTPError;
	NSString* _HTTPResponseString;
	NSObject*<OS_dispatch_queue> _successCallbackQueue;
	NSObject*<OS_dispatch_queue> _failureCallbackQueue;
	long long _totalContentLength;
	long long _offsetContentLength;

}

@property (nonatomic,retain) NSHTTPURLResponse * response; 
@property (nonatomic,readonly) char hasAcceptableStatusCode; 
@property (nonatomic,readonly) char hasAcceptableContentType; 
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> successCallbackQueue;              //@synthesize successCallbackQueue=_successCallbackQueue - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> failureCallbackQueue;              //@synthesize failureCallbackQueue=_failureCallbackQueue - In the implementation block
@property (nonatomic,retain) NSURLRequest * request; 
@property (nonatomic,retain) NSError * HTTPError;                                            //@synthesize HTTPError=_HTTPError - In the implementation block
@property (nonatomic,copy) NSString * HTTPResponseString;                                    //@synthesize HTTPResponseString=_HTTPResponseString - In the implementation block
@property (assign,nonatomic) long long totalContentLength;                                   //@synthesize totalContentLength=_totalContentLength - In the implementation block
@property (assign,nonatomic) long long offsetContentLength;                                  //@synthesize offsetContentLength=_offsetContentLength - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock; 
+(char)canProcessRequest:(id)arg1 ;
+(id)acceptableContentTypes;
+(id)acceptableStatusCodes;
+(void)addAcceptableStatusCodes:(id)arg1 ;
+(void)addAcceptableContentTypes:(id)arg1 ;
-(void)setCompletionBlockWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(id)responseString;
-(NSObject*<OS_dispatch_queue>)failureCallbackQueue;
-(NSObject*<OS_dispatch_queue>)successCallbackQueue;
-(NSError *)HTTPError;
-(char)hasAcceptableStatusCode;
-(char)hasAcceptableContentType;
-(void)setHTTPError:(NSError *)arg1 ;
-(NSString *)HTTPResponseString;
-(void)setHTTPResponseString:(NSString *)arg1 ;
-(void)setOffsetContentLength:(long long)arg1 ;
-(void)setTotalContentLength:(long long)arg1 ;
-(void)setSuccessCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFailureCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)totalContentLength;
-(long long)offsetContentLength;
-(void)dealloc;
-(id)error;
-(void)pause;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

