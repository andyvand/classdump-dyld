/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLConnectionRequired <NSObject>
@optional
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
-(void)start;
-(void)cancel;
-(void)_setDelegateQueue:(id)arg1;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg1;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

@end

