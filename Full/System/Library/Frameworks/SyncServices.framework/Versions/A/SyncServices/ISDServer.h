/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISyncServer.h>
#import <SyncServices/SchemaModificationCallbacks.h>
#import <SyncServices/NSMachPortDelegate.h>

@class ISDDataManager, ISDSyncManager, NSMutableDictionary, NSDate, NSTimer, NSConnection, NSMachPort, NSString;

@interface ISDServer : NSObject <ISyncServer, SchemaModificationCallbacks, NSMachPortDelegate> {

	ISDDataManager* _dataManager;
	ISDSyncManager* _syncManager;
	NSMutableDictionary* _clientConnections;
	NSDate* _launchDate;
	NSTimer* _inactivityTimer;
	double _inactivityInterval;
	char _isPrivateInstance;
	id _fileLocker;
	NSTimer* _fileLockerTimer;
	long long _tickCount;
	NSConnection* _uiHandlerConnection;
	NSMachPort* _calendarRequestPort;
	NSDate* _timerRefreshDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)defaultServer;
-(void)startWatchdog;
-(void)stopWatchdog;
-(oneway void)removeLockFile;
-(void)_vacuum;
-(id)init;
-(void)dealloc;
-(void)handleMachMessage:(void*)arg1 ;
-(oneway void)sayGoodnightGracie;
-(void)setDataManager:(id)arg1 ;
-(bycopy id)allClients;
-(bycopy id)latestGenerationForEntitiesNamed:(bycopy id)arg1 ;
-(void)unregisterClientWithIdentifier:(bycopy id)arg1 ;
-(void)cancelSyncPlansInvolvingEntityNames:(id)arg1 ;
-(oneway void)resetSyncModesForClientWithIdentifier:(bycopy id)arg1 ;
-(oneway void)resetClientWithIdentifier:(bycopy id)arg1 ;
-(bycopy id)schemaNameForDataclass:(bycopy id)arg1 ;
-(char)isPrivateInstance;
-(id)uiHandler;
-(void)_sayGoodnightGracieSkippingVacuum:(char)arg1 ;
-(bycopy id)syncPlanWithIdentifier:(bycopy id)arg1 ;
-(bycopy id)allSyncPlans;
-(bycopy id)addClients:(bycopy id)arg1 toSyncPlanWithIdentifier:(bycopy id)arg2 ;
-(void)fileLockWasStolen;
-(void)_refreshLockFile:(id)arg1 ;
-(void)setCalendarRequestPort:(id)arg1 ;
-(void)_resetEntityNamesAndSetAllClientsToRefresh:(id)arg1 ;
-(void)_timeToDie:(id)arg1 ;
-(void)setTimerRefreshDate:(id)arg1 ;
-(void)refreshWatchdogTimer;
-(void)setTimeIntervalToWaitBeforeDying:(double)arg1 ;
-(bycopy id)clientsWithIdentifiers:(bycopy id)arg1 modifiedSinceAnchor:(inout unsigned*)arg2 ;
-(bycopy id)registerClientWithIdentifier:(bycopy id)arg1 description:(bycopy id)arg2 descriptionFilePath:(bycopy id)arg3 descriptionBundleId:(bycopy id)arg4 descriptionBundleRelativePath:(bycopy id)arg5 descriptionBinRelativePath:(bycopy id)arg6 ;
-(void)registerSchemaWithDescription:(bycopy id)arg1 descriptionFilePath:(bycopy id)arg2 bundlePath:(bycopy id)arg3 linkedOnTiger:(bycopy id)arg4 ;
-(void)_autoregisterSystemSchemaWithPath:(id)arg1 ;
-(bycopy id)registerClientWithIdentifier:(bycopy id)arg1 description:(bycopy id)arg2 descriptionFilePath:(bycopy id)arg3 descriptionBundleId:(bycopy id)arg4 descriptionBundleRelativePath:(bycopy id)arg5 ;
-(void)_lostClientConnection:(id)arg1 ;
-(void)_startMonitoringConnectionForProxy:(id)arg1 clientId:(id)arg2 ;
-(void)_stopMonitoringConnectionForClientId:(id)arg1 ;
-(id)dictionaryWithInfoForSyncPlan:(id)arg1 ;
-(void)_reallyCancelSyncSessionForPlanWithIdentifier:(bycopy id)arg1 ;
-(void)_cleanupUIHandlerConnection:(id)arg1 ;
-(bycopy id)serverPID;
-(oneway void)detectedDataDirectoryCorruption;
-(void)resetEntityNamesAndSetAllClientsToRefresh:(bycopy id)arg1 ;
-(oneway void)pingFromClientWithIdentifier:(bycopy id)arg1 withPlanIdentifier:(bycopy id)arg2 ;
-(bycopy id)isSyncServerAvailable:(inout id*)arg1 ;
-(bycopy id)schemaDataModifiedSinceAnchor:(inout unsigned*)arg1 dataClassesNamed:(id)arg2 entitiesNamed:(id)arg3 ;
-(void)registerSchemaWithDescription:(bycopy id)arg1 descriptionFilePath:(bycopy id)arg2 linkedOnTiger:(bycopy id)arg3 ;
-(void)unregisterSchemaWithName:(bycopy id)arg1 ;
-(void)setDisplayName:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2 ;
-(void)setImagePath:(bycopy id)arg1 bundleId:(bycopy id)arg2 bundleRelativePath:(bycopy id)arg3 forClientWithIdentifier:(bycopy id)arg4 ;
-(void)setSyncAlertToolPath:(bycopy id)arg1 bundleId:(bycopy id)arg2 bundleRelativePath:(bycopy id)arg3 forClientWithIdentifier:(bycopy id)arg4 ;
-(void)setHasDynamicSyncAlertHandler:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2 ;
-(void)setEnabled:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3 ;
-(void)setShouldReplaceClientRecords:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3 ;
-(bycopy id)setSyncMode:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3 ;
-(void)setShouldSynchronize:(bycopy id)arg1 withClientsOfType:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3 ;
-(void)setSyncsAfterClients:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2 ;
-(bycopy id)filterDataForClientWithIdentifier:(bycopy id)arg1 ;
-(void)setFilterData:(bycopy id)arg1 filteredEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3 ;
-(void)setUseLocalIdsForGUIDs:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2 ;
-(void)setNeverFormatsRelationships:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2 ;
-(void)setTrackRecordModificationTimes:(id)arg1 forClientWithIdentifier:(id)arg2 ;
-(bycopy id)clientWithId:(bycopy id)arg1 wantsToBeginSyncPlanBeforeDate:(bycopy id)arg2 entityNames:(bycopy id)arg3 pushTruthForEntityNames:(bycopy id)arg4 quietlyPushingTruth:(bycopy id)arg5 callback:(R)arg6 withPlanIdentifier:(id)arg7 hasChanges:(id)arg8 skip:(bycopy id)arg9 :(bycopy id)arg10 ;
-(bycopy id)clientWithId:(bycopy id)arg1 wantsToBeginSyncPlanRightNow:(bycopy id)arg2 ;
-(void)clientWithId:(bycopy id)arg1 didBeginPushingChangesInSyncPlan:(bycopy id)arg2 negotiatedSyncStates:(bycopy id)arg3 ;
-(void)clientWithId:(bycopy id)arg1 didEndPushingChangesInSyncPlan:(bycopy id)arg2 hasChanges:(bycopy id)arg3 ;
-(bycopy id)clientWithId:(bycopy id)arg1 didEndSyncPlan:(bycopy id)arg2 finishedSyncing:(bycopy id)arg3 ;
-(bycopy id)syncServerStatistics;
-(oneway void)cancelSyncSessionForPlanWithIdentifier:(bycopy id)arg1 ;
-(void)killConnection:(R)arg1 :(id)arg2 ;
-(bycopy id)setOneShotSyncGroupWithClientIdentifiers:(bycopy id)arg1 entityNames:(bycopy id)arg2 ;
-(bycopy id)detectedSyncAnchorMismatch:(bycopy id)arg1 forClient:(bycopy id)arg2 ;
-(bycopy id)mingler:(id)arg1 hasStartedMinglingPlanWithIdentifier:(bycopy id)arg2 ;
-(char)minglerHasFinishedMinglingPlanWithIdentifier:(bycopy id)arg1 exception:(bycopy id)arg2 ;
-(oneway void)mingleForPlanCanceled:(bycopy id)arg1 ;
-(bycopy id)getServerNameNumberMappings;
-(void)_resetSyncData;
-(void)_reallyResetSyncData;
-(void)_resetClientsWithLastSyncDatesEarlierThanDate:(bycopy id)arg1 purgeTruth:(bycopy id)arg2 andVacuum:(bycopy id)arg3 ;
-(bycopy id)_syncDatesForClientsEarlierThanDate:(bycopy id)arg1 ;
-(void)setFileLocker:(id)arg1 ;
-(id)dataManager;
-(void)setSyncManager:(id)arg1 ;
-(void)setIsPrivateInstance:(char)arg1 ;
-(void)validateClientDescriptionFilesAndUnregisterIfNecessary;
-(void)autoregisterSystemSchemas;
-(void)autoregisterDefaultClients;
-(int)clientNumberForClient:(id)arg1 ;
-(void)_uiHandlerDied:(id)arg1 ;
@end

