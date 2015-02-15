/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <fmfd/NSURLSessionDelegate.h>
#import <fmfd/NSURLSessionTaskDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSHTTPCookieStorage, NSOperationQueue, NSURLSession, NSString;

@interface ServerInteractionController : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	NSObject*<OS_dispatch_queue> dq_inFlightCommands;
	NSMutableSet* inFlightCommands;
	NSHTTPCookieStorage* _cookieStorage;
	NSOperationQueue* _queue;
	NSURLSession* _session;
	double _lastSuccessfulResponseTimestamp;

}

@property (retain) NSOperationQueue * queue;                            //@synthesize queue=_queue - In the implementation block
@property (retain) NSURLSession * session;                              //@synthesize session=_session - In the implementation block
@property (assign) double lastSuccessfulResponseTimestamp;              //@synthesize lastSuccessfulResponseTimestamp=_lastSuccessfulResponseTimestamp - In the implementation block
@property (retain) NSHTTPCookieStorage * cookieStorage;                 //@synthesize cookieStorage=_cookieStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendCommand:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(double)lastSuccessfulResponseTimestamp;
-(NSHTTPCookieStorage *)cookieStorage;
-(void)setCookieStorage:(NSHTTPCookieStorage *)arg1 ;
-(void)preflightValidateCommand:(id)arg1 ;
-(double)_simulatedLatency;
-(void)processResponseForCommand:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)networkActivityStatus:(char)arg1 ;
-(void)setLastSuccessfulResponseTimestamp:(double)arg1 ;
-(void)cancelCommand:(id)arg1 ;
-(void)cancelAllCommands;
-(void)setSession:(NSURLSession *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSOperationQueue *)queue;
-(NSURLSession *)session;
-(void)setQueue:(NSOperationQueue *)arg1 ;
@end
