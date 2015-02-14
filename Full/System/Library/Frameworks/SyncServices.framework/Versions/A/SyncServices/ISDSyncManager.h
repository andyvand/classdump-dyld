/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ISDDataManager, NSMutableArray, NSMutableDictionary, NSDate, NSString;

@interface ISDSyncManager : NSObject {

	ISDDataManager* _dataManager;
	NSMutableArray* _plans;
	NSMutableArray* _runningPlans;
	NSMutableArray* _pendingPlans;
	NSMutableDictionary* _syncPlansAwaitingNegotiation;
	NSMutableArray* _jobs;
	NSMutableDictionary* _pendingSyncAfterParticipants;
	NSMutableDictionary* _syncAfterParticipants;
	NSMutableDictionary* _syncAfterParticipantsPlanMap;
	NSDate* _lastSyncDate;
	unsigned long long _syncCount;
	double _deviceParticipantTimeoutInterval;
	double _otherParticipantTimeoutInterval;
	NSString* _syncServerName;
	NSString* _dataDirectory;
	char _isKillable;

}
+(void)performGrowlRegistration;
-(void)dealloc;
-(id)lastSyncDate;
-(id)initWithDataManager:(id)arg1 ;
-(void)cancelSyncPlansInvolvingEntityNames:(id)arg1 ;
-(id)dataDirectory;
-(void)resetSyncData;
-(void)syncPlanNeedsNegotiation:(id)arg1 uncontestedPushers:(id)arg2 confusedTruthPushers:(id)arg3 contestedTruthPushers:(id)arg4 ;
-(void)syncPlanIsMingling:(id)arg1 hasChanges:(char)arg2 ;
-(id)syncServerName;
-(void)syncPlanDidFinishMingling:(id)arg1 ;
-(void)_getSyncPlan:(id*)arg1 participant:(id*)arg2 forClient:(id)arg3 ;
-(void)_validateEntityNames:(id)arg1 areSubsetOfEntityNames:(id)arg2 ;
-(void)_validateEntityNames:(id)arg1 ;
-(void)_validateClientHasRegisteredToSync:(id)arg1 entityNames:(id)arg2 ;
-(void)_validateClientCanSync:(id)arg1 ;
-(void)_validateClientCanPushTruth:(id)arg1 forEntityNames:(id)arg2 ;
-(id)syncPlanWithIdentifier:(id)arg1 ;
-(void)_scheduleNextReadySyncPlan;
-(void)_syncAlertToolDied:(id)arg1 ;
-(char)_sendDynamicSyncAlertToClient:(id)arg1 forPlan:(id)arg2 entityNames:(id)arg3 getShouldTryAlertTool:(char*)arg4 ;
-(char)_launchSyncAlertToolForClient:(id)arg1 forPlan:(id)arg2 entityNames:(id)arg3 shouldUnregisterClient:(char*)arg4 ;
-(char)_sendSyncAlertToClient:(id)arg1 forPlan:(id)arg2 entityNames:(id)arg3 shouldUnregisterClient:(char*)arg4 ;
-(void)_noteSyncAfterParticipant:(id)arg1 usingEntityNames:(id)arg2 forPlan:(id)arg3 ;
-(void)_addSyncAlertsForClient:(id)arg1 plan:(id)arg2 ;
-(id)_createSyncPlan:(id)arg1 ;
-(id)_sanitizeClientEntityNames:(id)arg1 ;
-(id)_addClient:(id)arg1 entityNames:(id)arg2 toPlan:(id)arg3 alertOtherClients:(char)arg4 ;
-(void)addClients:(id)arg1 toSyncPlan:(id)arg2 entityNames:(id)arg3 ;
-(void)_validateClient:(id)arg1 entityNames:(id)arg2 truth:(id)arg3 ;
-(id)_bestSyncPlanForClient:(id)arg1 entityNames:(id)arg2 skip:(char)arg3 ;
-(char)exclusiveSyncJobIsRunning;
-(void)_cleanupPlan:(id)arg1 ;
-(void)_cancelSyncPlan:(id)arg1 reason:(id)arg2 doCleanupPlan:(char)arg3 doScheduleNextReadySyncPlan:(char)arg4 ;
-(void)_handleWatchdog:(id)arg1 ;
-(void)_reallyAddSyncJob:(id)arg1 ;
-(void)_reallyResetSyncData:(id)arg1 ;
-(void)addSyncJobWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 canRunWithRunningSyncPlans:(char)arg4 shouldRunBeforePendingSyncPlans:(char)arg5 ;
-(void)_reallyCleanupFinishedJob:(id)arg1 ;
-(void)_cleanupFinishedJob:(id)arg1 ;
-(void)runJobInThread:(id)arg1 ;
-(void)_reallyScheduleSyncsAfterParticipant;
-(void)_setIsKillable:(char)arg1 ;
-(void)_finishSyncingPlan:(id)arg1 ;
-(char)_canStartMinglingPlan:(id)arg1 ;
-(void)_alertAnyUnalertedClients;
-(void)_reallyScheduleNextReadyJob;
-(char)_canStartSyncingPlan:(id)arg1 ;
-(void)_startSyncingPlan:(id)arg1 ;
-(char)pendingJobs;
-(void)_reallyScheduleNextReadySyncPlan:(char)arg1 ;
-(void)_reallyScheduleNextReadySyncPlan;
-(void)_cancelSyncingPlan:(id)arg1 reason:(id)arg2 ;
-(void)_cancelSyncPlanWaitingForNegotiation:(id)arg1 reason:(id)arg2 ;
-(void)_userNegotiatedSyncPlan:(id)arg1 ;
-(void)_syncPlanTimedOutWaitingForNegotiation:(id)arg1 ;
-(void)_askUserInterfaceToNegotiatePlan:(id)arg1 ;
-(void)removeClient:(id)arg1 fromSpecificSyncPlan:(id)arg2 didFinishSyncing:(char)arg3 notifyClient:(char)arg4 reason:(id)arg5 ;
-(void)setSyncServerName:(id)arg1 ;
-(void)setDataDirectory:(id)arg1 ;
-(id)allSyncPlans;
-(unsigned long long)numberOfSyncPlans;
-(id)setOneShotSyncGroupWithClients:(id)arg1 entityNames:(id)arg2 ;
-(id)addClients:(id)arg1 toSyncPlanWithIdentifier:(id)arg2 ;
-(id)scheduleClient:(id)arg1 beforeDate:(id)arg2 entityNames:(id)arg3 pushingTruthForEntityNames:(id)arg4 quietlyPushingTruth:(char)arg5 callbackTarget:(id)arg6 hasChanges:(char)arg7 skip:(char)arg8 ;
-(void)removeClient:(id)arg1 fromPendingSyncPlans:(char)arg2 fromRunningSyncPlans:(char)arg3 didFinishSyncing:(char)arg4 notifyClient:(char)arg5 reason:(id)arg6 ;
-(void)cancelAllSyncPlans;
-(void)cancelSyncPlan:(id)arg1 ;
-(void)reallyResetSyncData;
-(void)_cleanPlansOfLaggardClients;
-(char)client:(id)arg1 wantsToBeginSyncPlanRightNow:(id)arg2 ;
-(void)client:(id)arg1 didBeginPushingChangesInSyncPlan:(id)arg2 negotiatedSyncStates:(id)arg3 ;
-(void)client:(id)arg1 didEndPushingChangesInSyncPlan:(id)arg2 hasChanges:(char)arg3 ;
@end

