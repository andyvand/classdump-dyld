/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLConnectionInternal.h>
#import <CFNetwork/NSURLConnectionRequired.h>

@class NSURLAuthenticationChallenge, _NSHTTPBodyStreamWrapper, NSString;

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {

	int _cfConnLock;
	CFURLConnectionRef _cfConn;
	CFURLAuthChallengeRef _currCFChallenge;
	NSURLAuthenticationChallenge* _currNSChallenge;
	CFStringRef _fileName;
	BOOL _shouldSkipCancelOnRelease;
	_NSHTTPBodyStreamWrapper* _bodyStreamWrapper;
	long long _totalBytes;
	long long _expectedTotalBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_timingData;
-(id)initWithInfo:(const InternalInit*)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)dealloc;
-(void)start;
-(void)cancel;
-(void)_invalidate;
-(void)_setDelegateQueue:(id)arg1 ;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)sendCFChallenge:(CFURLAuthChallengeRef)arg1 toSelector:(SEL)arg2 ;
-(CFURLConnectionRef)_retainCFURLConnection;
-(CFURLConnectionRef)_atomic_CFURLConnection;
-(void)cleanupChallenges;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg1 ;
-(CFURLConnectionRef)_CFURLConnection;
-(void)invokeForDelegate:(/*^block*/id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
@end

