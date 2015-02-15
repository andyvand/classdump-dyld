/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/SyncServices-Structs.h>
#import <SyncServices/ISDDatabase.h>

@interface ISDRecordIdMapDatabase : ISDDatabase {

	sqlite3_stmtRef _addMappingStatement;
	sqlite3_stmtRef _allMappingsStatement;
	sqlite3_stmtRef _allGlobalIdsStatement;
	sqlite3_stmtRef _allLocalIdsStatement;
	sqlite3_stmtRef _countMappingsStatement;
	sqlite3_stmtRef _getMappingForGlobalIdStatement;
	sqlite3_stmtRef _getMappingForLocalIdStatement;
	sqlite3_stmtRef _removeMappingsForEntityNamesStatement;
	sqlite3_stmtRef _removeMappingsForGlobalIdsStatement;
	sqlite3_stmtRef _removeOneMappingForGlobalIdStatement;
	sqlite3_stmtRef _addUnknownRecordTypeStatement;
	sqlite3_stmtRef _getUnknownRecordIdsStatement;
	sqlite3_stmtRef _getUnknownTypeForRecordIdStatement;
	sqlite3_stmtRef _removeUnknownRecordTypeStatement;
	sqlite3_stmtRef _removeAllUnknownRecordsTypeStatement;

}
+(char)createDatabaseAtPath:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)finalizeStatements;
-(void)closeDatabase;
-(void)removeMappingsForGlobalIds:(id)arg1 ;
-(void)removeMappingsForEntityNames:(id)arg1 ;
-(void)removeMappingForGlobalId:(id)arg1 ;
-(id)allLocalIds;
-(id)allGlobalIds;
-(unsigned)numberOfMappings;
-(id)initDatabaseAtPath:(id)arg1 ;
-(void)addMapping:(id)arg1 ;
-(void)addMappings:(id)arg1 ;
-(id)newIdMapForLocalId:(id)arg1 uniqueEntityNames:(id)arg2 ;
-(id)newIdMapForGlobalId:(id)arg1 uniqueEntityNames:(id)arg2 ;
-(void)addUnknownRecordType:(id)arg1 forRecordId:(id)arg2 ;
-(id)getRecordIdsOfUnknownType;
-(id)getUnknownTypeForRecordId:(id)arg1 ;
-(void)removeUnknownRecordId:(id)arg1 ;
-(void)removeAllUnknownRecordIds;
@end

