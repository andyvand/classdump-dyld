/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISDServer.h>

@interface ISDDisabledServer : ISDServer
+(id)defaultServer;
-(oneway void)removeLockFile;
-(oneway void)sayGoodnightGracie;
-(void)setDataManager:(id)arg1 ;
-(bycopy id)allClients;
-(void)unregisterClientWithIdentifier:(bycopy id)arg1 ;
-(bycopy id)schemaNameForDataclass:(bycopy id)arg1 ;
-(bycopy id)syncPlanWithIdentifier:(bycopy id)arg1 ;
-(bycopy id)allSyncPlans;
-(bycopy id)addClients:(bycopy id)arg1 toSyncPlanWithIdentifier:(bycopy id)arg2 ;
-(bycopy id)clientsWithIdentifiers:(bycopy id)arg1 modifiedSinceAnchor:(inout unsigned*)arg2 ;
-(oneway void)detectedDataDirectoryCorruption;
-(void)resetEntityNamesAndSetAllClientsToRefresh:(bycopy id)arg1 ;
-(bycopy id)isSyncServerAvailable:(inout id*)arg1 ;
-(bycopy id)schemaDataModifiedSinceAnchor:(inout unsigned*)arg1 dataClassesNamed:(id)arg2 entitiesNamed:(id)arg3 ;
-(void)unregisterSchemaWithName:(bycopy id)arg1 ;
-(void)setDisplayName:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2 ;
-(void)setImagePath:(bycopy id)arg1 bundleId:(bycopy id)arg2 bundleRelativePath:(bycopy id)arg3 forClientWithIdentifier:(bycopy id)arg4 ;
-(void)setSyncAlertToolPath:(bycopy id)arg1 bundleId:(bycopy id)arg2 bundleRelativePath:(bycopy id)arg3 forClientWithIdentifier:(bycopy id)arg4 ;
-(void)setHasDynamicSyncAlertHandler:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2 ;
-(void)setEnabled:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3 ;
-(void)setShouldReplaceClientRecords:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3 ;
-(bycopy id)setSyncMode:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3 ;
-(void)setShouldSynchronize:(bycopy id)arg1 withClientsOfType:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3 ;
-(bycopy id)filterDataForClientWithIdentifier:(bycopy id)arg1 ;
-(void)setFilterData:(bycopy id)arg1 filteredEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3 ;
-(void)setUseLocalIdsForGUIDs:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2 ;
-(bycopy id)clientWithId:(bycopy id)arg1 wantsToBeginSyncPlanBeforeDate:(bycopy id)arg2 entityNames:(bycopy id)arg3 pushTruthForEntityNames:(bycopy id)arg4 quietlyPushingTruth:(bycopy id)arg5 callback:(R)arg6 withPlanIdentifier:(id)arg7 hasChanges:(id)arg8 skip:(bycopy id)arg9 :(bycopy id)arg10 ;
-(bycopy id)clientWithId:(bycopy id)arg1 wantsToBeginSyncPlanRightNow:(bycopy id)arg2 ;
-(void)clientWithId:(bycopy id)arg1 didBeginPushingChangesInSyncPlan:(bycopy id)arg2 negotiatedSyncStates:(bycopy id)arg3 ;
-(bycopy id)clientWithId:(bycopy id)arg1 didEndSyncPlan:(bycopy id)arg2 finishedSyncing:(bycopy id)arg3 ;
-(bycopy id)syncServerStatistics;
-(oneway void)cancelSyncSessionForPlanWithIdentifier:(bycopy id)arg1 ;
-(void)killConnection:(R)arg1 :(id)arg2 ;
-(bycopy id)setOneShotSyncGroupWithClientIdentifiers:(bycopy id)arg1 entityNames:(bycopy id)arg2 ;
-(void)_resetSyncData;
-(void)_reallyResetSyncData;
-(id)dataManager;
-(void)setSyncManager:(id)arg1 ;
-(void)autoregisterSystemSchemas;
-(void)autoregisterDefaultClients;
-(void)registerSchemaWithDescription:(bycopy id)arg1 descriptionFilePath:(bycopy id)arg2 ;
-(void)registerSchemaWithDescription:(bycopy id)arg1 descriptionFilePath:(bycopy id)arg2 bundlePath:(bycopy id)arg3 ;
-(bycopy id)registerClientWithIdentifier:(bycopy id)arg1 description:(bycopy id)arg2 descriptionFilePath:(bycopy id)arg3 ;
-(void)clientWithId:(bycopy id)arg1 didEndPushingChangesInSyncPlan:(bycopy id)arg2 ;
@end

