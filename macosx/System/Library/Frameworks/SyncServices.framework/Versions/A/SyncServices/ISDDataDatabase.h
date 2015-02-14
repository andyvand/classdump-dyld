/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/SyncServices-Structs.h>
#import <SyncServices/ISDDatabase.h>

@interface ISDDataDatabase : ISDDatabase {

	sqlite3_stmtRef _addRecordStatement;
	sqlite3_stmtRef _addRelationshipTupleStatement;
	sqlite3_stmtRef _addUnformattedRelationshipTupleStatement;
	sqlite3_stmtRef _containsRecordStatement;
	sqlite3_stmtRef _getRecordCountsStatement;
	sqlite3_stmtRef _getAddCountsStatement;
	sqlite3_stmtRef _getDeleteCountsStatement;
	sqlite3_stmtRef _getEntitiesInTruthStatement;
	sqlite3_stmtRef _getEntitiesForRecordIdsStatement;
	sqlite3_stmtRef _getRecordIdsStatement;
	sqlite3_stmtRef _getRecordIdsAddedAfterGenerationStatement;
	sqlite3_stmtRef _getRowidsAddedAfterGenerationStatement;
	sqlite3_stmtRef _getRowidsForRecordIdsStatement;
	sqlite3_stmtRef _getRecordIdsFromRowidsStatement;
	sqlite3_stmtRef _getRecordIdsToBeAppliedWithEntityNumberStatement;
	sqlite3_stmtRef _getToBeAppliedCountWithEntityNumberStatement;
	sqlite3_stmtRef _getRecordIdsWithEntityNumberStatement;
	sqlite3_stmtRef _getRecordIdsOfRecordsWithStatesAndWithEntityNumbersStatement;
	sqlite3_stmtRef _getRecordIdsOfRecordsWithoutStatesAndWithEntityNumbersStatement;
	sqlite3_stmtRef _getRecordIdsThatHaveDataRefsWithEntityNumberStatement;
	sqlite3_stmtRef _getRecordIdsUnappliedStatement;
	sqlite3_stmtRef _getRecordIdsThatExist;
	sqlite3_stmtRef _getRecordIdsThatExistIncludeDeleted;
	sqlite3_stmtRef _getRecordPropertiesStatement;
	sqlite3_stmtRef _getRecordPropertiesForEntityStatement;
	sqlite3_stmtRef _getRecordsAlteredSinceGenerationStatement;
	sqlite3_stmtRef _getRecordsWithPropertiesStatement;
	sqlite3_stmtRef _getRecordsWithoutPropertiesStatement;
	sqlite3_stmtRef _getRelationshipTuplesStatement;
	sqlite3_stmtRef _getUndeletedRecordIdsWithEntityNumberStatement;
	sqlite3_stmtRef _getUnformattedTuplesStatement;
	sqlite3_stmtRef _removeAllTuplesStatement;
	sqlite3_stmtRef _removeAllUnformattedTuplesStatement;
	sqlite3_stmtRef _removePropertiesStatement;
	sqlite3_stmtRef _removeRecordsStatement;
	sqlite3_stmtRef _removeSelectedTuplesStatement;
	sqlite3_stmtRef _removeSelectedUnformattedTuplesStatement;
	sqlite3_stmtRef _removeTupleReferencesStatement;
	sqlite3_stmtRef _removeTuplesStatement;
	sqlite3_stmtRef _removeUnformattedTupleReferencesStatement;
	sqlite3_stmtRef _removeUnformattedTuplesStatement;
	sqlite3_stmtRef _replaceRecordIdInRecordStatement;
	sqlite3_stmtRef _replaceRecordIdInRelationshipFromStatement;
	sqlite3_stmtRef _replaceRecordIdInRelationshipToStatement;
	sqlite3_stmtRef _replaceRecordIdInUnformattedFromStatement;
	sqlite3_stmtRef _replaceRecordIdInUnformattedToStatement;
	sqlite3_stmtRef _replaceTupleIdInRelationshipStatement;
	sqlite3_stmtRef _replaceTupleIdInUnformattedStatement;
	sqlite3_stmtRef _setDeletedStatement;
	sqlite3_stmtRef _setDeletedTupleStatement;
	sqlite3_stmtRef _setLastChangedGenerationStatement;
	sqlite3_stmtRef _setRecordStateStatement;
	sqlite3_stmtRef _setRecordStateToBeAppliedStatement;
	sqlite3_stmtRef _setToBeAppliedStatement;
	sqlite3_stmtRef _setToBeAppliedByEntityStatement;
	sqlite3_stmtRef _updateRecordStatement;
	sqlite3_stmtRef _updateRecordPropertiesStatement;
	sqlite3_stmtRef _lastGenerationForEntitiesStatement;
	sqlite3_stmtRef _fastSourceEnumerateStatement;
	sqlite3_stmtRef _fastTargetEnumerateStatement;
	sqlite3_stmtRef _addRecordDataReferenceStatement;
	sqlite3_stmtRef _removeRecordDataReferencesForRecordIdWithPropertyStatement;
	sqlite3_stmtRef _removeRecordDataReferencesForRecordIdsStatement;
	sqlite3_stmtRef _getRecordDataReferencesForRecordIdsStatement;
	sqlite3_stmtRef _getRecordDataReferencesForRecordIdAndPropertyStatement;
	sqlite3_stmtRef _getAllRecordDataReferencesStatement;
	sqlite3_stmtRef _getAllRecordIdsThatHaveDataRefsStatement;
	sqlite3_stmtRef _setRecordIdsHaveDataReferencesStatement;
	sqlite3_stmtRef _replaceRecordIdInDataReferencesStatement;
	sqlite3_stmtRef _addGlobalEquivalents;
	sqlite3_stmtRef _removeGlobalEquivalents;
	sqlite3_stmtRef _getNativeRecordId;
	sqlite3_stmtRef _getEquivalentIds;
	sqlite3_stmtRef _getRecordIdsToPurge;
	sqlite3_stmtRef _getTupleRowsToPurge;
	sqlite3_stmtRef _deleteRecordsByRowid;
	sqlite3_stmtRef _deleteTuplesByRowid;
	sqlite3_stmtRef _deleteGlobalEquivalentsByNativeId;
	sqlite3_stmtRef _deleteStillBornRecords;

}
+(char)createDatabaseAtPath:(id)arg1 ;
+(id)defaultDatabasePath:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)finalizeStatements;
-(void)closeDatabase;
-(id)initWithDatabaseInDirectory:(id)arg1 ;
-(unsigned)latestGenerationForEntitiesNamed:(id)arg1 ;
-(void)purgeRecordsForEntitiesNamed:(id)arg1 inGenerationsLessThan:(unsigned)arg2 ;
-(void)setToBeApplied:(char)arg1 forRecordsWithEntityNames:(id)arg2 ;
-(id)recordIdsForEntityNames:(id)arg1 ;
-(void)enumerateRecordDataReferencesForRecordIds:(id)arg1 asArgumentsToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(void)removeDataReferencesWithRecordIds:(id)arg1 ;
-(void)removeRecordsWithIds:(id)arg1 nullifyReferencesToRemovedRecords:(char)arg2 ;
-(id)recordsWithIdentifiers:(id)arg1 ;
-(void)setRecordState:(int)arg1 toBeAppliedFlag:(char)arg2 forRecordIds:(id)arg3 removeProperties:(char)arg4 ;
-(id)createDictionaryWithRecordsWithIdentifiers:(id)arg1 ;
-(void)setToBeApplied:(char)arg1 forRecordIds:(id)arg2 ;
-(void)replaceRecordId:(id)arg1 withRecordId:(id)arg2 ;
-(void)enumerateRecordHeadersForRecordsWithIds:(id)arg1 asArgumentsToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)toBeAppliedRecordIdentifiersForEntityNames:(id)arg1 ;
-(id)recordIdentifiersOfRecordsInStates:(int*)arg1 count:(unsigned long long)arg2 entityNames:(id)arg3 ;
-(void)removeAllRecords;
-(void)dropIndexes;
-(void)addRecord:(id)arg1 state:(int)arg2 toBeAppliedFlag:(char)arg3 ignoreDeletedRelationshipTuples:(char)arg4 ;
-(id)entityNumbersForRecords:(id)arg1 ;
-(void)recreateIndexes;
-(id)deletedRecordIdsInTruth:(id)arg1 ;
-(unsigned long long)toBeAppliedRecordCountForEntityNames:(id)arg1 ;
-(void)enumerateRecordIdsForRecordsWithMatchingAttributes:(id)arg1 asArgumentsToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 matchAll:(char)arg4 ;
-(void)enumerateRecordIdsForEntityNames:(id)arg1 ignoreDeletedRecords:(char)arg2 asArgumentsToFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(id)initWithDatabaseInDirectory:(id)arg1 delegate:(id)arg2 ;
-(id)createDataFromDataWrapperForSqlite:(id)arg1 ;
-(void)setRecordHasDataReferences:(char)arg1 forRecordIds:(id)arg2 ;
-(id)newDataWithPropertiesEncodedForSqlite:(id)arg1 ;
-(void)_updateRelationshipsInRecord:(id)arg1 ignoreDeletedRelationshipTuples:(char)arg2 removeTuplesFirst:(char)arg3 ;
-(void)_updateUnformattedRelationshipsInRecord:(id)arg1 ignoreDeletedRelationshipTuples:(char)arg2 removeTuplesFirst:(char)arg3 ;
-(void)removeTuplesForRecordsWithIds:(id)arg1 nullifyReferencesToRemovedRecords:(char)arg2 ;
-(void)removePropertiesForRecordsWithIdentifiers:(id)arg1 ;
-(id)recordIdsInTruth:(id)arg1 includeDeletedRecords:(char)arg2 ;
-(void)enumerateRecordIdsWithDataReferencesForEntityNames:(id)arg1 asArgumentsToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(void)enumerateRecordsForRecordIds:(id)arg1 includeProperties:(char)arg2 asArgumentsToFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(void)updateRelationshipsForRecordsInDictionary:(id)arg1 withRecordIds:(id)arg2 stringTable:(id)arg3 constructRelationshipMap:(char)arg4 ;
-(id)createDictionaryAndArray:(id*)arg1 withRecordsWithIdentifiers:(id)arg2 constructRelationshipMap:(char)arg3 ;
-(id)createDictionaryWithRecordsWithIdentifiers:(id)arg1 constructRelationshipMap:(char)arg2 ;
-(id)createArrayWithRecordsWithIdentifiers:(id)arg1 constructRelationshipMap:(char)arg2 ;
-(id)createRecordIdsForRowids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(char)haveAllMatchingAttributes:(id)arg1 inPropertyValues:(id)arg2 ;
-(char)haveAnyMatchingAttributes:(id)arg1 inPropertyValues:(id)arg2 ;
-(char)containsRecordWithId:(id)arg1 ;
-(void)addDataReference:(id)arg1 withRecordId:(id)arg2 forPropertyName:(id)arg3 ;
-(void)updateRecord:(id)arg1 inGeneration:(unsigned)arg2 lastChangedByClientId:(id)arg3 ignoreDeletedRelationshipTuples:(char)arg4 ;
-(void)setDeleted:(char)arg1 forRecord:(id)arg2 inGeneration:(unsigned)arg3 lastChangedByClientId:(id)arg4 ;
-(void)removeDataReferencesWithRecordId:(id)arg1 forPropertyName:(id)arg2 updateRecord:(char)arg3 ;
-(void)removeAllRecordDataReferences;
-(void)setPropertyValueNamed:(id)arg1 toValue:(id)arg2 forClient:(id)arg3 inGeneration:(unsigned)arg4 forRecordsWithIdentifiers:(id)arg5 ;
-(void)removeAttributes:(id)arg1 andRelationships:(id)arg2 forRecordsWithIdentifiers:(id)arg3 ;
-(void)setRecordState:(int)arg1 forRecordIds:(id)arg2 ;
-(id)getRecordDataReferencesForRecordId:(id)arg1 forPropertyName:(id)arg2 ;
-(id)getRecordDataReferencesForRecordWithIdentifiers:(id)arg1 ;
-(void)rowids:(id)arg1 addedAfterGeneration:(unsigned)arg2 forEntityWithName:(id)arg3 fromAnyClientsExceptClientWithId:(id)arg4 ;
-(void)addRowidsToIndexSet:(id)arg1 forRecordsWithIds:(id)arg2 ;
-(id)recordIdsAddedAfterGeneration:(unsigned)arg1 forEntityWithName:(id)arg2 fromAnyClientsExceptClientWithId:(id)arg3 ;
-(id)recordIdsInTruth:(id)arg1 ;
-(id)recordIdsWithDataReferencesForEntityNames:(id)arg1 ;
-(id)recordCountsForEntityNames:(id)arg1 ;
-(id)addCountsForEntityNames:(id)arg1 generation:(unsigned)arg2 ;
-(id)deleteCountsForEntityNames:(id)arg1 generation:(unsigned)arg2 ;
-(id)createArrayOfEntityNamesEntityNamesWithUndeletedRecords:(id)arg1 lessThanGeneration:(unsigned)arg2 ;
-(void)replaceRelationshipTupleId:(id)arg1 withRelationshipTupleId:(id)arg2 ;
-(void)enumerateRecordHeadersForRecordsAlteredSinceLastSyncedGenerations:(id)arg1 asArgumentsToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)recordsWithRowids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)fastEnumerateSourcesOfRelationshipNames:(id)arg1 toRecordIds:(id)arg2 asArgumentsToFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(void)fastEnumerateTargetsOfRelationshipNames:(id)arg1 fromRecordIds:(id)arg2 asArgumentsToFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(void)setLastChangedGeneration:(unsigned)arg1 forRecordIds:(id)arg2 ;
-(void)enumerateRecordIdsForRecordsWithMatchingAttributes:(id)arg1 asArgumentsToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(void)deleteTuple:(id)arg1 inGeneration:(unsigned)arg2 ;
-(id)allRecordIdentifiers;
-(id)unappliedRecordIdentifiers;
-(void)addEquivalentGlobalIds:(id)arg1 forNativeGlobalId:(id)arg2 ;
-(void)removeEquivalentGlobalsIdsForNativeGlobalId:(id)arg1 ;
-(id)nativeGlobalIdForEquivalentId:(id)arg1 ;
-(id)globalIdEquivalentsForNativeRecordId:(id)arg1 ;
-(void)deleteStillBornRecords;
@end

