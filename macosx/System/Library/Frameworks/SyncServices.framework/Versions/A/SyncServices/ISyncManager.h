/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ISyncManager : NSObject
+(void)initialize;
+(id)sharedManager;
+(id)getThreadISyncRecordSnapshotTable;
+(void)clearThreadISyncRecordSnapshotTable;
+(void)setSyncServerName:(id)arg1 dataDirectoryPath:(id)arg2 ;
+(void)setDataReferencesDirectory:(id)arg1 ;
+(unsigned long long)dataWrapperThresholdSize;
-(void)addRequestMode:(id)arg1 ;
-(void)removeRequestMode:(id)arg1 ;
-(id)requestModes;
-(char)isEnabled;
-(id)clientWithIdentifier:(id)arg1 ;
-(id)registerClientWithIdentifier:(id)arg1 description:(id)arg2 ;
-(void)unregisterClient:(id)arg1 ;
-(void)resetSyncData;
-(id)syncDatesForClientsEarlierThanDate:(bycopy id)arg1 ;
-(void)resetClientsWithLastSyncDatesEarlierThanDate:(bycopy id)arg1 purgeTruth:(bycopy char)arg2 andVacuum:(bycopy char)arg3 ;
-(void)unregisterSchemaWithName:(id)arg1 ;
-(id)snapshotOfRecordsInTruthWithEntityNames:(id)arg1 usingIdentifiersForClient:(id)arg2 ;
-(id)registerClientWithIdentifier:(id)arg1 descriptionFilePath:(id)arg2 ;
-(void)registerSchemaWithDescriptionFilePath:(id)arg1 ;
-(char)registerSchemaWithBundlePath:(id)arg1 ;
-(void)clientWithIdentifier:(id)arg1 needsSyncing:(char)arg2 ;
-(id)syncDisabledReason;
@end

