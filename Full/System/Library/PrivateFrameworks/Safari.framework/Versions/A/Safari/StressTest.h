/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSTimer, NSMutableArray, NSFileHandle, StressHUD;

@interface StressTest : NSObject {

	NSDate* startTime;
	NSDate* webProcessStartTime;
	NSTimer* loadTimer;
	NSMutableArray* URLHistory;
	unsigned long long webProcessCrashCount;
	NSFileHandle* sessionFileHandle;
	NSMutableArray* sessionHistory;
	char logNextURLForReplay;
	StressHUD* stressHUD;

}
+(id)shared;
-(void)webProcessDidCrash;
-(char)isStressTestRunning;
-(void)pageLoadStartedWithURL:(id)arg1 ;
-(void)pageLoadFinishedWithURL:(id)arg1 ;
-(void)replaySession:(id)arg1 ;
-(double)upTime;
-(double)webProcessUpTime;
-(unsigned long long)webProcessCrashCount;
-(void)validatedStart;
-(void)loadWillFail;
-(void)validateStressTest;
-(void)navigateToNextStressTestPage:(id)arg1 ;
-(void)readSession:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(unsigned long long)pageCount;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

