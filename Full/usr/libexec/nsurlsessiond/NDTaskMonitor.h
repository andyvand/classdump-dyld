/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/nsurlsessiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nsurlsessiond/NDApplicationObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSURLSessionTask, NSString, NSObject, NSMutableArray, NDApplication, NDDuetReporter;

@interface NDTaskMonitor : NSObject <NDApplicationObserver> {

	NSURLSessionTask* _task;
	NSString* _clientBundleIdentifier;
	NSString* _clientSecondaryIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _throughputTimer;
	NSMutableArray* _progressTimestamps;
	NSMutableArray* _progressValues;
	unsigned long long _throughputInterval;
	NDApplication* _monitoredApplication;
	NDDuetReporter* _duetReporter;
	char _startedDuetReporter;
	char _connectionIsCellular;
	char _hasTransferredData;
	char _discretionary;
	char _explicitlyDiscretionary;
	char _performsNonDiscretionaryThrougputMonitoring;
	long long _basePriority;

}

@property (assign) long long basePriority;                          //@synthesize basePriority=_basePriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_onqueue_taskWillResume;
-(void)_onqueue_taskWillSuspend;
-(id)initWithTask:(id)arg1 clientBundleIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 monitoredApplication:(id)arg4 priority:(long long)arg5 options:(unsigned long long)arg6 queue:(id)arg7 ;
-(void)taskTransferredData:(unsigned long long)arg1 countOfBytesReceived:(unsigned long long)arg2 ;
-(void)applicationEnteredForeground:(id)arg1 ;
-(void)applicationNoLongerInForeground:(id)arg1 ;
-(double)currentThroughputThreshold;
-(void)_onqueue_setThroughputTimerForCurrentInterval;
-(long long)currentIntervalEndDelta;
-(void)_onqueue_calculateThroughput;
-(void)_onqueue_taskTransferredData:(unsigned long long)arg1 countOfBytesReceived:(unsigned long long)arg2 ;
-(void)_onqueue_startThroughputMonitoring;
-(void)_onqueue_stopThroughputMonitoring;
-(void)applicationWasQuitFromAppSwitcher:(id)arg1 ;
-(void)backgroundUpdatesDisabledForApplication:(id)arg1 ;
-(void)_onqueue_cancel;
-(long long)basePriority;
-(void)setBasePriority:(long long)arg1 ;
@end
