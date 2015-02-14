/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ISyncClient : NSObject
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(id)filters;
-(void)setFilters:(id)arg1 ;
-(id)clientIdentifier;
-(void)setImagePath:(id)arg1 ;
-(id)lastSyncDate;
-(unsigned)lastSyncGeneration;
-(int)idNumber;
-(id)enabledEntityNames;
-(void)setSyncsAfterClients:(char)arg1 ;
-(char)formatsRelationships;
-(void)setFormatsRelationships:(char)arg1 ;
-(id)clientType;
-(id)imagePath;
-(char)syncsAfterClients;
-(id)supportedEntityNames;
-(char)shouldReplaceClientRecordsForEntityName:(id)arg1 ;
-(char)canPushChangesForEntityName:(id)arg1 ;
-(char)canPullChangesForEntityName:(id)arg1 ;
-(id)lastSyncDateForEntityName:(id)arg1 ;
-(int)lastSyncStatusForEntityName:(id)arg1 ;
-(char)isEnabledForEntityName:(id)arg1 ;
-(void)setEnabled:(char)arg1 forEntityNames:(id)arg2 ;
-(void)setShouldReplaceClientRecords:(char)arg1 forEntityNames:(id)arg2 ;
-(char)shouldSynchronizeWithClientsOfType:(id)arg1 ;
-(void)setShouldSynchronize:(char)arg1 withClientsOfType:(id)arg2 ;
-(id)syncAlertToolPath;
-(void)setSyncAlertToolPath:(id)arg1 ;
-(void)setSyncAlertHandler:(id)arg1 selector:(SEL)arg2 ;
@end

