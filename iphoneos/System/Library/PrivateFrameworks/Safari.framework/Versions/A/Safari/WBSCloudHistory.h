/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/WBSCloudHistorySyncThrottlerDataStore.h>

@protocol OS_dispatch_queue, NSObject;
@class NSObject, WBSCloudHistorySyncThrottler, NSTimer, NSMutableDictionary, NSString;

@interface WBSCloudHistory : NSObject <WBSCloudHistorySyncThrottlerDataStore> {

	NSObject*<OS_dispatch_queue> _cloudHistoryQueue;
	char _cloudHistoryEnabled;
	char _saveChangesWhenHistoryLoads;
	char _fetchChangesWhenHistoryLoads;
	id<NSObject> _historyWasLoadedObserver;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _saveOperationSuddenTerminationDisabler;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _fetchOperationSuddenTerminationDisabler;
	char _removedHistoryItemsArePendingSave;
	WBSCloudHistorySyncThrottler* _saveChangesThrottler;
	WBSCloudHistorySyncThrottler* _fetchChangesThrottler;
	WBSCloudHistorySyncThrottler* _syncCircleSizeRetrievalThrottler;
	NSTimer* _serverBackoffTimer;
	char _saveChangesWhenBackoffTimerFires;
	char _fetchChangesWhenBackoffTimerFires;
	unsigned long long _numberOfDevicesInSyncCircle;
	NSMutableDictionary* _syncCircleSizeRetrievalCompletionHandlersByOperation;

}

@property (assign,getter=isCloudHistoryEnabled,nonatomic) char cloudHistoryEnabled; 
@property (assign,nonatomic) unsigned long long numberOfDevicesInSyncCircle;                     //@synthesize numberOfDevicesInSyncCircle=_numberOfDevicesInSyncCircle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCloudHistory;
-(char)isCloudHistoryEnabled;
-(void)setCloudHistoryEnabled:(char)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)saveChangesToCloudHistoryStore;
-(void)fetchAndMergeChanges;
-(id)dateOfNextPermittedSaveChangesAttempt;
-(void)fetchAndMergeChangesBypassingThrottler;
-(void)saveChangesToCloudHistoryStoreBypassingThrottler;
-(id)currentSaveChangesThrottlerPolicyString;
-(id)_currentFetchChangesThrottlerPolicyString;
-(id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
-(void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(/*^block*/id)arg1 ;
-(void)_cloudHistoryConfigurationChanged:(id)arg1 ;
-(char)_hasCloudHistoryEntitlement;
-(void)_saveChangesToCloudHistoryStoreBypassingThrottler:(char)arg1 ;
-(void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(char)arg1 ;
-(void)_saveChangesWhenHistoryLoads;
-(void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_backoffTimeIntervalFromError:(id)arg1 ;
-(void)_backOffWithInterval:(double)arg1 ;
-(void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(char)arg3 withCallback:(/*^block*/id)arg4 ;
-(long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(char)arg3 ;
-(long long)_resultFromError:(id)arg1 ;
-(long long)_estimatedPriorityForPotentialSaveAttempt;
-(void)_fetchAndMergeChangesBypassingThrottler:(char)arg1 ;
-(void)_fetchChangesWhenHistoryLoads;
-(void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 intoHistory:(id)arg2 withPriority:(long long)arg3 ;
-(unsigned long long)_cachedNumberOfDevicesInSyncCircle;
-(void)setNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(void)_registerForHistoryWasLoadedNotificationIfNecessary;
-(void)_historyWasLoaded:(id)arg1 ;
-(void)_serverBackoffTimerFired:(id)arg1 ;
-(void)_updateFetchThrottlerAndSaveThrottlerPolicies;
-(void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1 ;
-(id)recordOfPastOperationsForThrottler:(id)arg1 ;
-(void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2 ;
-(unsigned long long)numberOfDevicesInSyncCircle;
-(id)init;
-(void)dealloc;
@end

