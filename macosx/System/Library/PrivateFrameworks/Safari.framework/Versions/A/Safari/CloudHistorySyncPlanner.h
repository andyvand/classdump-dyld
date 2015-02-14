/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSTimer;

@interface CloudHistorySyncPlanner : NSObject {

	NSTimer* _historyItemsAddedOrChangedIdleTimer;
	NSTimer* _historyItemsRemovedIdleTimer;
	BOOL _ignoresDisplaysDidSleepNotification;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _pendingCloudOperationSuddenTerminationDisabler;
	NSTimer* _saveChangesBeforeTerminationTimeoutTimer;

}
+(id)sharedPlanner;
-(char)shouldDeferTerminationToSaveChangesToCloud;
-(void)savePendingChangesToCloudAndTerminate;
-(void)syncOnAppStartup;
-(void)_safariSyncStatusChanged:(id)arg1 ;
-(void)_sync;
-(void)_startMonitoringForTriggersAndSyncAttemptNotifications;
-(void)_stopMonitoringForTriggersAndSyncAttemptNotifications;
-(void)_historyItemsWereAddedOrChanged:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyWasCleared:(id)arg1 ;
-(void)_cloudHistorySaveAttemptDidComplete:(id)arg1 ;
-(void)_systemWillSleep:(id)arg1 ;
-(void)_displaysDidSleep:(id)arg1 ;
-(void)_displaysDidWake:(id)arg1 ;
-(void)_invalidateHistoryTimers;
-(char)_isDeferringTerminationToSaveChanges;
-(void)_saveAttemptDuringTerminationDidFinish;
-(void)_historyItemsWereAddedOrChangedTimerFired:(id)arg1 ;
-(void)_historyItemsWereRemovedTimerFired:(id)arg1 ;
-(void)_saveChanges;
-(void)_saveChangesBeforeTerminationTimerFired:(id)arg1 ;
-(void)syncForDebugPurposesBypassingThrottler:(char)arg1 ;
-(id)init;
@end

