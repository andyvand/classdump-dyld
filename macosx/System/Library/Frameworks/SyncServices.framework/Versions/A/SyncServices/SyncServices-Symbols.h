_logFileDirectory
+[ISDDataWrapper initialize]
+[ISDDataWrapper setDataReferenceDirectory:]
_syncServerPreferenceBool
+[NSException(ISDFriendlyException) _isdUseFriendlyExceptions:]
_connectionTimeout
+[NSConnection(SyncServicesExtensions) isd_rootProxyForConnectionWithRegisteredName:requestTimeout:replyTimeout:protocol:enableMultipleThreads:independentConversations:]
+[ISDSyncPlan initialize]
-[ISDSyncPlan(EncoderMethods) initWithCoder:]
-[ISDSyncParticipant(EncoderMethods) initWithCoder:]
-[ISDObjectGraphWrapper initWithCoder:]
+[ISDEntity initialize]
-[ISDEntity initWithCoder:]
+[ISDDataClass initialize]
-[ISDDataClass initWithCoder:]
+[ISDFileReference initialize]
-[ISDFileReference initWithCoder:]
+[ISDProperty initialize]
-[ISDProperty initWithCoder:]
+[ISDRelationship initialize]
-[ISDRelationship initWithCoder:]
-[ISDEntity _createEntityNamePropertyIfNeeded]
-[ISDEntity attributeWithName:]
-[ISDEntity propertyWithName:]
-[ISDEntity _buildPropertyNameCache]
-[ISDEntity attributes]
-[ISDProperty name]
-[ISDEntity relationships]
-[ISDProperty isRelationship]
-[ISDObjectGraphWrapper dealloc]
+[ISDClient initialize]
-[ISDClient initWithCoder:]
+[ISDSyncState initialize]
-[ISDSyncState initWithCoder:]
-[ISDDataObject setTopParent:]
-[ISDClient anchorChildren]
-[ISDDataObject anchorChildren]
-[PresetNameNumberProvider initWithNameNumberMapping:takesPrecedence:canBeReplaced:]
-[ISDNameNumberMapping initMappingNamed:withNameNumberMap:providedBy:]
-[ISDNameNumberMapping refreshFromNameNumberMap:]
-[ISDNameNumberProvider clientMapping]
-[ISDNameNumberMapping setZeroMapping:]
+[ISDNameNumberProvider setProvider:]
-[ISDSyncPlan planIdentifier]
-[ISDSyncPlan closureOfEntityNamesBeingMingled]
-[NSMutableDictionary(SyncServicesExtensions) ensureAllEqualValuesAreIdentical]
-[ISDRecordStore initWithEntityNameToTruthSegment:]
-[ISDRecordStore initWithEntityNameToTruthSegment:delegate:usingDataDirectory:]
-[NSDictionary(SyncServicesExtensions) allDistinctValues]
+[ISDDatabase initialize]
-[ISDDataDatabase initWithDatabaseInDirectory:delegate:]
+[ISDDataDatabase defaultDatabasePath:]
-[ISDDatabase setDirtyCoderDelegate:]
-[ISDDatabase initWithDatabaseAtPath:]
-[ISDDatabase openDatabaseAtPath:]
+[ISDDatabase(SqliteHelpers) maybeEnableSqlLogging]
-[ISDDatabase setDataVersionGivenPath:]
-[ISDDataDirectoryVersion initFromPath:]
+[ISDDatabase getThreadGlobalUniqueStringTable]
-[ISDDatabase(SqliteHelpers) execute:]
-[ISDDatabase sqliteDatabase]
-[ISDDatabase(SqliteHelpers) setSqliteCacheSize:]
-[ISDSyncParticipant clientId]
+[ISDDigestMaker sharedDigestMaker]
-[ISDDigestMaker computeDigestForData:]
-[ISDSyncParticipant fastClient]
-[ISDClientState initWithClientDataDirectory:clientId:clientType:clientIsTransferType:]
-[ISDSyncParticipant setClientState:]
-[ISDConflictManager initWithDataDirectory:lastSyncedGeneration:]
-[ISDConflictManager initWithDataDirectory:lastSyncedGeneration:validateConflictsOnRead:]
-[ISDConflictManager _readConflicts:]
-[ISDConflictManager _clearConflictState]
-[ISyncFileLocker initWithPath:delegate:timeout:]
-[ISyncFileLocker computeHostname]
-[ISyncFileLocker isOnLocalHost]
-[ISyncFileLocker lock]
-[ISyncFileLocker lockFileResultByAnalyzingLockFile:reasonIfStealable:]
-[ISyncFileLocker actionTestingDirectoryExistance:]
-[ISyncFileLocker lockDirectoryPath]
-[ISyncFileLocker lockFileContentsDictionary]
-[ISyncFileLocker lockFilePath]
-[ISyncFileLocker createLockDirectory:]
-[ISyncFileLocker path]
-[ISyncFileLocker incrementCountAndReturnError:]
-[ISyncFileLocker changeRetainCountIncrementing:error:]
-[ISyncFileLocker processProfile]
-[ISyncFileLocker writeLockInfoFile:error:]
-[ISyncFileLocker actionOnVerifyLockInfoFileAgainstCurrentProcess:reason:]
-[ISyncFileLocker matchesHostUUIDFromLockDictionary:]
+[ISyncFileLocker stringFromISyncLockResult:]
-[ISDConflictManager _readConflictsFromFile:]
-[ISDConflictManager unarchiver:didDecodeObject:]
-[ISDConflictManager _validConflictsFromConflicts:]
-[ISDConflictManager _buildDeltaFileNames]
-[ISDConflictManager _clearDeltaFileNames]
-[ISyncFileLocker unlock]
-[ISyncFileLocker decrementCountAndReturnError:]
-[ISyncFileLocker refCount]
-[ISyncFileLocker removeLockDirectoryAndReturnError:]
-[ISDSyncParticipant fastEntityNames]
-[ISDSyncParticipant useLocalIdsForGUIDs]
-[ISDSyncParticipant formatterBundle]
-[ISDSyncParticipant newMappingFromEntityNameToFirstCompoundIdentityAlternativeWithPropertiesBeingSynced:]
-[ISDSyncParticipant syncStates]
-[ISDSyncState(SpeedConveniences) fastEntityName]
-[ISDSyncState(SpeedConveniences) fastPropertyNames]
-[ISDEntity identityKeys:]
-[ISDEntity _identityKeys:]
__addIdentityKeysFromArrayToResultArray
-[ISDProperty isIdentityKey]
-[ISDProperty identityAlternative]
-[ISDSyncParticipant clientState]
-[ISDEntity name]
-[ISDClientState commonClientId]
-[ISDClientState setDirtyCoderDelegate:]
-[ISDClientState isConflictManager]
-[ISDClientState isUndoManager]
-[ISDClientState disableFlush]
-[ISDRecordStore disableFlush]
-[ISDDatabase beginTransaction]
-[ISDConflictManager disableFlush]
-[ISDRecordStore(DataReferences) setDirtyCoderDelegate:]
-[ISDClientState entityNamesOfAddedRecords]
-[ISDClientState changeStore]
-[ISDSqliteChangeStore initWithDataDirectory:forClientWithIdentifier:delegate:]
+[ISDSqliteChangeStore defaultFileName]
-[ISDSqliteChangeStore initWithPath:forClientWithIdentifier:delegate:]
-[ISDSqliteChangeStoreDatabase initDatabaseAtPath:forClientWithIdentifier:delegate:]
-[ISDSqliteChangeStore disableFlush]
-[ISDSqliteChangeStore entityNamesOfAddedRecords]
-[ISDSqliteChangeStoreDatabase _entityNamesOfAddedRecords:]
-[ISDDatabase(SqliteHelpers) prepareStatement:]
-[ISDDatabase(SqliteHelpers) bindInt:atIndex:inStatement:]
-[ISDDatabase(SqliteHelpers) stepStatement:]
+[ISDNameNumberProvider provider]
-[ISDNameNumberProvider entityMapping]
-[ISDNameNumberMapping nameForInt:]
-[ISDNameNumberMapping nameForNumber:]
-[ISDDatabase(SqliteHelpers) resetStatement:unbindValuesThroughIndex:]
-[ISDRecordStore _partitionEntityNamesBySegment:]
-[ISDClientState earliestFromGenerationOfAddedRecordsForEntityName:]
-[ISDSqliteChangeStore earliestFromGenerationOfAddedRecordsForEntityName:]
-[ISDSqliteChangeStoreDatabase _earliestFromGenerationOfRecordsForEntityName:processed:changeType:]
-[ISDNameNumberMapping numberForName:]
-[ISDDatabase(SqliteHelpers) intFromColumn:inStatement:]
-[ISDRecordStore rowids:addedAfterGeneration:forEntityWithName:fromAnyClientsExceptClientWithId:]
-[ISDRecordStore databaseForEntityName:]
-[ISDDataDatabase rowids:addedAfterGeneration:forEntityWithName:fromAnyClientsExceptClientWithId:]
-[ISDDatabase(SqliteHelpers) bindUnsignedLongLong:atIndex:inStatement:]
-[ISDClientState unacceptedRecordIdsForEntityName:]
-[ISDClientState recordStore]
-[ISDRecordStore initWithDatabaseInDirectory:delegate:]
-[ISDRecordStore _initClientData]
-[ISDRecordStore recordIdentifiersOfRecordsInStates:count:entityNames:]
-[ISDDataDatabase recordIdentifiersOfRecordsInStates:count:entityNames:]
-[ISDDatabase(SqliteHelpers) runStatement:withBoundRecordStates:count:withBoundEntityNumbers:callback:context:]
-[ISDDatabase(SqliteHelpers) bindObject:atIndex:inStatement:]
+[ISDGlobalId initialize]
-[ISDClientState newSetOfDeletedRecordIdsForEntityNames:]
-[ISDSqliteChangeStore newSetOfDeletedRecordIdsForEntityNames:]
-[ISDSqliteChangeStoreDatabase _newSetOfDeletedRecordIdsForEntityNames:]
-[ISDSqliteChangeStoreDatabase _numberOfDeletes]
-[ISDClientState enumerateAddsForEntityNames:state:maxToEnumerate:asArgumentToFunction:context:]
-[ISDSqliteChangeStore enumerateAddsForEntityNames:state:maxToEnumerate:asArgumentToFunction:context:]
-[ISDSqliteChangeStore _enumerateChangesOfType:forEntityNames:state:maxToEnumerate:asArgumentToFunction:context:]
-[ISDSqliteChangeStoreDatabase _enumerateChangesForEntityNames:changeType:processed:changeStore:asArgumentToFunction:context:]
-[ISDSqliteChangeStore(Helpers) enumerateChangesFromRow]
-[ISDDatabase(SqliteHelpers) runStatement:callback:context:]
__handleEnumeratedChanges
-[ISDDatabase(SqliteHelpers) createGlobalIdStringFromColumn:inStatement:uniqueInStringTable:]
-[ISDDataDirectoryVersion usesISDGlobalId]
-[ISDDatabase(SqliteHelpers) createGlobalIdFromColumn:inStatement:]
+[ISDGlobalId newGlobalIdFromBytes:]
+[ISDGlobalId globalIdFromBytes:]
-[ISDGlobalId initWithBytes:]
+[ISDGlobalId globalIdOrExistingEquivalent:]
+[ISDGlobalId getThreadUniqueGlobalIdTable]
-[ISDGlobalId hash]
-[ISDGlobalId length]
-[ISDGlobalId characterAtIndex:]
-[ISDDatabase(SqliteHelpers) createDataFromColumn:inStatement:copyBytes:]
-[ISDQuickDirtyCoder initForReadingWithData:]
-[ISDQuickDirtyCoder decodeArchiveHeader]
-[ISDQuickDirtyCoder decodeUnsignedInt32]
-[ISDQuickDirtyCoder decodeStringTable:]
-[ISDQuickDirtyCoder decodeClassVersionTable:]
-[ISDQuickDirtyCoder setDelegate:]
-[ISDQuickDirtyCoder setRecordIdentifierForDelegate:]
-[ISDQuickDirtyCoder isNextObjectOfType:]
-[ISDQuickDirtyCoder decodeObject]
-[ISDQuickDirtyCoder decodeString]
-[ISDQuickDirtyCoder decodeArray]
-[ISDQuickDirtyCoder decodeChangeDelta]
-[ISDPropertyChange initWithQuickDirtyCoder:]
-[ISDQuickDirtyCoder decodePropertyValue]
+[ISDPropertyValue initialize]
-[ISDPropertyValue initWithQuickDirtyCoder:]
+[ISDDataManager initialize]
+[ISDDataManager dataVersionIsPreNameNumber]
-[ISDQuickDirtyCoder decodeUnsignedInt64]
-[ISDQuickDirtyCoder decodeUnsignedInt16]
-[ISDQuickDirtyCoder setPropertyNameForDelegate:]
-[ISDQuickDirtyCoder versionForClass:]
-[ISDQuickDirtyCoder finishDecoding]
-[ISDQuickDirtyCoder dealloc]
+[ISDChange initialize]
-[ISDSqliteChangeStoreDatabase clientId]
-[ISDChange initWithChangeType:entityName:recordId:propertyChanges:clientId:fromGeneration:toGeneration:index:]
-[ISDGlobalId copy]
-[ISDChange setIdentityHash:]
-[ISDSqliteChangeStore(Helpers) setGreatestEnumeratedToGeneration:]
-[ISDClientState clientId]
-[ISDChange(SpeedConveniences) fastRecordId]
-[ISDChange entityName]
-[ISDChange type]
-[ISDRecordStore containsRecordWithId:]
-[ISDDataDatabase containsRecordWithId:]
-[ISDDatabase(SqliteHelpers) bindGlobalId:atIndex:inStatement:]
+[ISDGlobalId globalIdFromString:]
-[ISDGlobalId uuidPtr]
-[ISDDatabase(SqliteHelpers) checkBinding:forValue:atIndex:]
-[ISDChange(SpeedConveniences) fastClientId]
-[NSObject(ISyncSummaryDescriptions) isd_summary]
-[NSObject(ISyncSummaryDescriptions) isd_summaryWithIndent:]
-[ISDChange description]
-[NSArray(ISyncSummaryDescriptions) isd_summaryWithIndent:]
-[ISDPropertyChange description]
-[ISDPropertyValue value]
-[ISDPropertyValue name]
-[ISDGlobalId description]
-[ISDGlobalId copyWithZone:]
-[ISDChange propertyChanges]
-[ISDPropertyChange(SpeedConveniences) fastClientId]
-[ISDPropertyValue(SpeedConveniences) fastLastModifiedByClientId]
-[ISDPropertyChange(SpeedConveniences) fastName]
-[ISDPropertyValue(SpeedConveniences) fastName]
-[ISDPropertyChange(SpeedConveniences) fastValue]
-[ISDPropertyValue(SpeedConveniences) fastValue]
-[ISDPropertyChange propertyType]
-[ISDPropertyValue propertyType]
-[ISDPropertyValue initWithPropertyType:name:value:lastModifiedGeneration:clientId:]
-[NSObject(SyncServicesExtensions) isd_collectionType]
-[ISDPropertyChange propertyCollectionType]
-[ISDPropertyValue collectionType]
-[ISDPropertyValue setCollectionType:]
-[ISDRecord initWithRecordId:entityName:propertyValues:addedGeneration:lastChangedGeneration:state:lastChangedByClientId:isDeleted:]
-[ISDEntity identityKeysForRecord:]
-[ISDEntity identityKeysForRecord:identityComponent:minimumAlternate:]
-[ISDRecord(Conveniences) propertyValueWithName:]
-[ISDPropertyValue isDeleted]
-[ISDRecord entityName]
-[ISDEntity primaryRelationships]
-[ISDProperty isMatchable]
-[ISDProperty(SpeedConveniences) fastName]
-[ISDSqliteChangeStore(ArchivedChanges) addIndexToIndexSetOfEnumeratedChanges:]
-[ISDSqliteChangeStore(Helpers) rowWasEnumerated]
-[ISDRecordStore createDictionaryWithRecordsWithIdentifiers:]
-[ISDRecordStore createDictionaryWithRecordsWithIdentifiers:constructRelationshipMap:]
-[ISDDataDatabase createDictionaryWithRecordsWithIdentifiers:constructRelationshipMap:]
-[ISDDataDatabase createDictionaryAndArray:withRecordsWithIdentifiers:constructRelationshipMap:]
-[ISDRecordStore addRecord:state:toBeAppliedFlag:ignoreDeletedRelationshipTuples:]
-[ISDRecord(SpeedConveniences) fastEntityName]
-[ISDDataDatabase addRecord:state:toBeAppliedFlag:ignoreDeletedRelationshipTuples:]
-[ISDQuickDirtyCoder initForWritingWithMutableData:]
-[ISDQuickDirtyCoder encodeArchiveHeader]
-[ISDQuickDirtyCoder encodeUnsignedInt32:]
-[ISDRecord recordId]
-[ISDQuickDirtyCoder userInfo]
-[ISDRecord propertyValues]
-[ISDQuickDirtyCoder encodeObject:]
-[NSArray(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[ISDQuickDirtyCoder encodeArray:]
-[ISDQuickDirtyCoder finishEncoding]
-[ISDQuickDirtyCoder encodeClassVersionTable]
-[ISDQuickDirtyCoder encodeStringTable]
-[ISDRecord(SpeedConveniences) fastRecordId]
-[ISDRecord entityNumber]
-[ISDRecord lastChangedGeneration]
-[ISDRecord addedGeneration]
-[ISDRecord lastChangedByClientNumber]
-[ISDDataDatabase _updateRelationshipsInRecord:ignoreDeletedRelationshipTuples:removeTuplesFirst:]
-[ISDRecord dealloc]
-[ISDChange dealloc]
-[ISDPropertyChange dealloc]
-[ISDPropertyValue dealloc]
-[ISDClientState enumerateChangesForEntityNames:changeType:state:maxToEnumerate:asArgumentToFunction:context:]
-[ISDSqliteChangeStore enumerateChangesForEntityNames:changeType:state:maxToEnumerate:asArgumentToFunction:context:]
-[ISDGlobalId isEqual:]
-[ISDGlobalId _globalIdIsEqual:]
-[NSSet(SyncServicesExtensions) isd_createArrayWithAllObjects]
-[ISDDataDirectoryVersion arrayAsGlobalIds:]
-[ISDDataDatabase enumerateRecordsForRecordIds:includeProperties:asArgumentsToFunction:context:]
-[ISDDatabase(SqliteHelpers) runStatement:withBoundGlobalIds:startingAtIndex:callback:context:]
-[ISDDatabase(SqliteHelpers) runStatement:withBoundObjects:startingAtIndex:callback:context:]
__handleRecordHeaderInStatement
-[ISDDatabase(SqliteHelpers) unsignedLongLongFromColumn:inStatement:]
-[ISDDatabase(SqliteHelpers) createPropertiesFromDataInColumn:statement:forRecordWithIdentifier:]
-[ISDRecord initWithRecordId:entityNumber:propertyValues:addedGeneration:lastChangedGeneration:state:lastChangedByClientNumber:isDeleted:]
-[ISDRecord(Mutators) setPropertyValuesIncludeDataReferences:]
__addRecordToDictionary
-[ISDDataDatabase updateRelationshipsForRecordsInDictionary:withRecordIds:stringTable:constructRelationshipMap:]
-[ISDRecord state]
-[ISDRecord isDeleted]
-[ISDChange clientId]
-[ISDRecord lastChangedByClientId]
-[ISDEntity dataClass]
-[ISDDataClass name]
-[ISDPropertyChange propertyValueInstance]
-[ISDChange fromGeneration]
-[ISDEntity propertyDependenciesForPropertyName:]
-[ISDConflictManager conflictForRecordWithId:]
-[ISDPropertyChange isDefaultValue]
-[ISDPropertyValue isDefaultValue]
-[ISDPropertyChange name]
-[ISDPropertyChange action]
-[ISDPropertyChange clientId]
-[ISDPropertyValue lastModifiedByClientId]
-[ISDPropertyChange value]
-[ISDRecord(Mutators) setPropertyValueWithType:name:value:inGeneration:byClientId:]
-[ISDRecord(Mutators) setPropertyValueWithType:name:value:unformattedValue:inGeneration:byClientId:]
-[ISDRecord description]
-[ISDPropertyValue descriptionWithLocale:indent:]
-[ISDEntity excludeFromAirbagCount]
-[ISDPropertyValue lastModifiedGeneration]
-[ISDProperty excludeFromAirbagCount]
-[ISDRecord(Conveniences) isReorderOnlyChangeForPropertyName:]
-[ISDEntity parentName]
-[ISDRecordStore updateRecord:ignoreDeletedRelationshipTuples:]
-[ISDRecord(SpeedConveniences) fastLastChangedByClientId]
-[ISDDataDatabase updateRecord:inGeneration:lastChangedByClientId:ignoreDeletedRelationshipTuples:]
-[ISDPropertyValue isd_quickDirtyCoderType]
-[ISDQuickDirtyCoder encodePropertyValue:]
-[ISDQuickDirtyCoder addClassToClassTable:]
-[ISDQuickDirtyCoder addStringToStringTable:]
-[ISDPropertyValue encodeWithQuickDirtyCoder:]
-[NSString(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[ISDQuickDirtyCoder encodeString:]
-[ISDQuickDirtyCoder encodeUnsignedInt64:]
-[ISDQuickDirtyCoder encodeUnsignedInt16:]
-[ISDSyncParticipant client]
-[ISDClient clientId]
-[ISDClient enabledEntityNames]
-[ISDSyncState enabled]
-[ISDSyncState entityName]
-[ISDRecordStore recordCountsForEntityNames:]
-[ISDRecordStore databaseForTruthSegment:]
-[ISDDataDatabase recordCountsForEntityNames:]
__updateCountForEntityName
-[ISDRecordStore addCountsForEntityNames:generation:]
-[ISDDataDatabase addCountsForEntityNames:generation:]
-[ISDRecordStore deleteCountsForEntityNames:generation:]
-[ISDDataDatabase deleteCountsForEntityNames:generation:]
-[ISDRecordStore createArrayOfEntityNamesEntityNamesWithUndeletedRecords:lessThanGeneration:]
-[ISDDataDatabase createArrayOfEntityNamesEntityNamesWithUndeletedRecords:lessThanGeneration:]
__collectEntityNames
-[ISDSyncParticipant syncModeForEntityName:]
-[ISDConflictManager enableFlush]
-[ISDConflictManager commit]
-[ISDConflictManager _writeConflicts:toFile:obtainLock:]
-[ISDConflictManager archiver:willEncodeObject:]
-[ISDConflictManager updateCountFile]
-[ISDConflictManager unresolvedConflictCount]
-[ISDRecordStore enableFlush]
-[ISDDatabase commitTransaction]
-[ISDClientState removeEnumeratedChanges]
-[ISDSqliteChangeStore removeEnumeratedChanges]
-[ISDSqliteChangeStore(ArchivedChanges) numGenerationsToRetain]
-[ISDSqliteChangeStore removeEnumeratedChanges:]
-[ISDSqliteChangeStoreDatabase _deleteEnumeratedChanges:]
-[ISDSqliteChangeStoreDatabase _setupDeleteStatements]
-[ISDDatabase(SqliteHelpers) runStatement:withBoundRowIds:startingAtIndex:callback:context:]
-[ISDDatabase(SqliteHelpers) runStatement:withBoundRowIds:count:startingAtIndex:callback:context:]
-[ISDSqliteChangeStore(DataReferences) setDirtyCoderDelegate:]
-[ISDClientState enableFlush]
-[ISDSqliteChangeStore enableFlush]
-[ISDClientState releaseState]
-[ISDRecordStore closeDatabase]
-[ISDDataDatabase closeDatabase]
-[ISDDataDatabase finalizeStatements]
-[ISDDatabase(SqliteHelpers) finalizeStatement:]
-[ISDDatabase closeDatabase]
-[ISDDataDatabase dealloc]
-[ISDDatabase dealloc]
-[ISDRecordStore dealloc]
-[ISDSqliteChangeStore closeDatabase]
-[ISDSqliteChangeStoreDatabase closeDatabase]
-[ISDSqliteChangeStoreDatabase finalizeStatements]
-[ISDSqliteChangeStoreDatabase dealloc]
-[ISDSqliteChangeStore dealloc]
-[ISyncFileLocker dealloc]
-[ISDSyncState dealloc]
-[ISDDataObject dealloc]
-[ISDConflictManager isConflictManager]
-[ISDConflictManager commonClientId]
-[ISDConflictManager entityNamesOfAddedRecords]
-[ISDConflictManager enumerateChangesForEntityNames:changeType:state:maxToEnumerate:asArgumentToFunction:context:]
-[ISDConflictManager enumerateChangesForEntityNames:asArgumentToFunction:context:]
-[ISDConflictChangeEnumerator initWithConflictEnumerator:conflictManager:entityNames:generation:]
-[ISDConflictChangeEnumerator nextObject]
-[ISDConflictChangeEnumerator dealloc]
-[ISDConflictManager recordIdsWithDataReferences]
-[ISDConflictManager removeEnumeratedChanges]
-[ISDConflictManager setDirtyCoderDelegate:]
-[ISDConflictManager releaseState]
-[ISDSyncState syncMode]
-[ISDSyncParticipant getTransientSyncMode:forEntityName:]
-[ISDSyncState setSyncMode:]
-[ISDSyncState lastSyncGeneration]
-[ISDClientState recordIdMapper]
+[ISDSqliteRecordIdMapper recordIdMapperInDataDirectory:]
+[ISDRecordIdMapper defaultMapperFileName]
-[ISDSqliteRecordIdMapper initRecordIdMapperInDataDirectory:]
+[ISDSqliteRecordIdMapper defaultMapperFileName]
-[ISDRecordIdMapper init]
-[ISDRecordIdMapDatabase initDatabaseAtPath:]
-[ISDRecordIdMapper constructedIdMapper]
-[ISDIdMapDatabase initWithDatabaseInDirectory:]
+[ISDIdMapDatabase defaultDatabasePath:]
-[ISDSqliteRecordIdMapper disableFlush]
-[ISDIdMapDatabase disableFlushAndLockImmediately]
-[ISDDatabase beginImmediateTransaction]
-[ISDRecordIdMapper setUseLocalIdsAsGlobalIds:]
-[ISDRecordStore enumerateRecordHeadersForRecordsAlteredSinceLastSyncedGenerations:asArgumentsToFunction:context:]
-[ISDDataDatabase enumerateRecordHeadersForRecordsAlteredSinceLastSyncedGenerations:asArgumentsToFunction:context:]
-[ISDRecordStore unappliedRecordIdentifiers]
-[ISDDataDatabase unappliedRecordIdentifiers]
-[ISDSqliteRecordIdMapper hasMappingForGlobalId:]
-[ISDRecordIdMapper hasMappingForGlobalId:]
-[ISDRecordIdMapDatabase newIdMapForGlobalId:uniqueEntityNames:]
-[ISDDatabase(SqliteHelpers) createStringFromColumn:inStatement:uniqueInStringTable:]
-[ISDRecordIdMap setLocalId:]
-[ISDRecordIdMap setEntityName:]
-[ISDDataDirectoryVersion asGlobalId:]
-[ISDRecordIdMap setGlobalId:]
-[ISDRecordIdMap localId]
-[ISDRecordIdMapper recordIdMapForGlobalId:isCached:]
-[ISDRecordIdMap dealloc]
-[ISDIdMapDatabase enableFlush]
-[ISDRecordStore setRecordState:toBeAppliedFlag:forRecordIds:removeProperties:]
-[ISDDataDatabase setRecordState:toBeAppliedFlag:forRecordIds:removeProperties:]
-[ISDSyncState shouldRefilter]
-[ISDSqliteRecordIdMapper enableFlush]
-[ISDRecordIdMapper commit]
-[ISDSqliteRecordIdMapper dealloc]
-[ISDRecordIdMapDatabase dealloc]
-[ISDRecordIdMapDatabase closeDatabase]
-[ISDRecordIdMapDatabase finalizeStatements]
-[ISDRecordIdMapper dealloc]
-[ISDIdMapDatabase dealloc]
-[ISDIdMapDatabase closeDatabase]
-[ISDIdMapDatabase finalizeStatements]
-[ISDSyncState setLastSyncGeneration:]
-[ISDRecordStore truthSegmentForEntityName:]
-[ISDSyncParticipant initWithClient:]
-[ISDRecordIdMapper localIdForGlobalId:]
-[ISDRecordIdMapper localIdForGlobalId:useLocalIdAsGlobalId:]
-[ISDSqliteRecordIdMapper recordIdMapForGlobalId:isCached:]
-[ISDRecordIdMapper localIdConstructedFromGlobalId:useLocalIdAsGlobalId:]
-[ISDIdMapDatabase getOrCreateMappingForGlobalId:useLocalIdAsGlobalId:]
-[ISDIdMapDatabase getMappingForGlobalId:]
-[ISDIdMapDatabase getMappingForId:isLocal:]
-[ISDGlobalId init]
-[ISDIdMapDatabase addMappingFromGlobalId:toLocalId:]
-[ISDDatabase(SqliteHelpers) bindString:atIndex:inStatement:]
+[IDMapping mappingFromGlobalId:toLocalId:]
-[IDMapping initMappingFromGlobalId:toLocalId:]
-[IDMapping localId]
-[ISDRecordIdMapper setMappingWithGlobalId:localId:entityName:]
-[ISDSqliteRecordIdMapper recordIdMapForLocalId:isCached:]
-[ISDRecordIdMapper recordIdMapForLocalId:isCached:]
-[ISDRecordIdMapDatabase newIdMapForLocalId:uniqueEntityNames:]
-[ISDRecordIdMapper removeUnresolvedLocalId:]
-[ISDRecordIdMapper noteNewMappingForLocalId:]
-[ISDRecordIdMap entityName]
-[ISDSqliteRecordIdMapper setDirty:]
-[ISDRecordIdMapper setDirty:]
-[ISDSqliteRecordIdMapper flushMappingsIfNowIsAGoodTime]
-[IDMapping dealloc]
-[ISDSqliteRecordIdMapper commitMappings]
-[ISDSqliteRecordIdMapper commitMappings:]
-[ISDRecordIdMapDatabase addMapping:]
-[ISDRecordIdMap fastGlobalId]
-[ISDRecordIdMap fastLocalId]
-[ISDRecordIdMap entityNumber]
-[ISDIdMapDatabase purgeMappingsForLocalIdentifiers:]
-[ISDClientState dealloc]
-[ISDSyncParticipant dealloc]
-[ISDSyncParticipant synchronizesAllEntities]
-[ISDSyncPlan minglerException]
__releaseGlobalStringTable
__releaseGlobalIdTable
-[ISDSyncPlan dealloc]
-[ISDConflictManager dealloc]
-[ISDClient dealloc]
-[ISDFileReference dealloc]
-[ISDQuickDirtyCoder decodeGlobalId]
-[ISDGlobalId initWithQuickDirtyCoder:]
-[ISDQuickDirtyCoder decodeBytesWithReturnedLength:]
-[ISDPropertyValue description]
-[ISDChange propertyChangeForName:]
-[ISDPropertyChange lastModifiedGeneration]
-[ISDPropertyChange initWithAction:propertyType:name:value:lastModifiedGeneration:clientId:]
-[ISDPropertyValue initDeletedPropertyValueWithPropertyType:name:deletedValue:lastModifiedGeneration:clientId:]
-[ISDPropertyChange initWithAction:propertyValue:]
-[ISDEntity relationshipWithName:]
-[ISDRelationship isRelationship]
-[ISDRelationship isToMany]
-[ISDRelationship ordering]
-[ISDGlobalId isd_uniquedGlobalId]
-[NSMutableDictionary(SyncServicesExtensions) isd_addObject:toArrayForKey:]
-[ISDRecordStore recordWithIdentifier:]
-[ISDRecordStore recordsWithIdentifiers:]
__updateRelationshipTuples
-[ISDDatabase(SqliteHelpers) createGlobalIdStringFromColumn:inStatement:]
-[ISDRecord(Mutators) setRelationshipMap:]
-[ISDRecord relationshipMap]
-[ISDGlobalId isEqualToString:]
-[ISDGlobalId _globalIdIsEqualToString:]
-[ISDRelationship inverseRelationships]
-[ISDRelationship anonymousInverseRelationshipNames]
-[ISDRelationship source]
-[ISDRecord recordWithId:isInCachedRelationship:atIndex:]
-[ISDRecordStore setToBeApplied:forRecordIds:]
-[ISDDataDatabase setToBeApplied:forRecordIds:]
-[ISDPropertyValue copyWithZone:]
-[NSObject(SyncServicesIsEqualExtensions) isd_isEqual:]
-[ISDPropertyValue setValue:inGeneration:byClientWithId:]
-[ISDQuickDirtyCoder(DataWrapperExtensions) decodeDataWrapper]
-[ISDDataWrapper(Private) initWithQuickDirtyCoder:]
-[ISDQuickDirtyCoder decodeData]
-[ISDQuickDirtyCoder decodeNumber]
-[ISDQuickDirtyCoder decodeUnsignedInt8]
-[ISDQuickDirtyCoder decodeSignedInt64]
-[ISDQuickDirtyCoder delegate]
-[ISDDataWrapper(Private) description]
-[ISDDataWrapper(Private) dealloc]
-[ISDDataWrapper(UtilityMethods) isd_isAttributeSelfConsistent]
-[ISDDataWrapper _backingStoreExists]
-[ISDDataWrapper(UtilityMethods) _pathToData]
-[ISDDataWrapper(UtilityMethods) _composePathToData:]
-[ISDDataWrapper(UtilityMethods) _pathToDataDirectory]
-[ISDDataWrapper hash]
+[ISDDataWrapper dataReferenceDirectory]
-[ISDDataWrapper(UtilityMethods) _pathToDataUsingPreviousExtension]
-[ISDDataWrapper(UtilityMethods) signature]
-[ISDDataWrapper(UtilityMethods) setExtension:savePrevious:]
-[ISDDataWrapper(UtilityMethods) setExtension:]
-[ISDDataWrapper isd_quickDirtyCoderType]
-[ISDDataWrapper(UtilityMethods) extension]
-[ISDQuickDirtyCoder(DataWrapperExtensions) encodeDataWrapper:]
-[ISDDataWrapper(Private) encodeWithQuickDirtyCoder:]
-[NSData(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[ISDQuickDirtyCoder encodeData:]
-[NSNumber(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[ISDQuickDirtyCoder encodeNumber:]
-[ISDQuickDirtyCoder encodeUnsignedInt8:]
-[ISDQuickDirtyCoder encodeSignedInt64:]
-[ISDRecordStore(DataReferences) addDataReferences:withRecordId:forPropertyName:]
-[ISDRecordStore(DataReferences) addDataReferences:withRecordId:forPropertyName:savedReferences:error:]
-[ISDRecordStore(DataReferences) removeDataReferencesWithRecordId:forPropertyName:dataWrappers:updateRecord:]
-[ISDRecordStore(DataReferences) enumerateRecordDataReferencesForRecordIds:asArgumentsToFunction:context:]
-[ISDRecordStore(DataReferences) enumerateRecordDataReferencesForRecordIds:inDatabase:asArgumentsToFunction:context:]
-[ISDDataDatabase enumerateRecordDataReferencesForRecordIds:asArgumentsToFunction:context:]
-[ISDRecordStore _truthSegmentNameForRecordId:]
-[ISDDataDatabase removeDataReferencesWithRecordId:forPropertyName:updateRecord:]
-[ISDDataWrapper saveDataReference:withExtension:]
-[ISDRecordStore(DataReferences) _addDataReference:withRecordId:forPropertyName:]
-[ISDDataDatabase addDataReference:withRecordId:forPropertyName:]
-[ISDDataWrapper(ReallyPrivate) setRecordId:]
-[ISDDataWrapper(ReallyPrivate) setPropertyName:]
-[ISDDataDatabase createDataFromDataWrapperForSqlite:]
-[NSObject(DataWrapperDelegation) isd_willEncodeDataWrapper:forRecordWithIdentifier:withPropertyName:]
-[ISDDataDatabase setRecordHasDataReferences:forRecordIds:]
-[ISDRecord propertyValuesIncludeDataReferences]
-[ISDRecord(Mutators) setDeletedInGeneration:byClientId:]
-[ISDRecordStore removeClientDataForRecordWithId:]
-[ISDDataDatabase setDeleted:forRecord:inGeneration:lastChangedByClientId:]
-[ISDRecordStore enumerateSourcesOfRelationshipNames:toRecordIds:asArgumentsToFunction:context:]
-[ISDDataDatabase fastEnumerateSourcesOfRelationshipNames:toRecordIds:asArgumentsToFunction:context:]
-[ISDRelationship deleteRule]
-[ISDRecordStore enumerateTargetsOfRelationshipNames:fromRecordIds:asArgumentsToFunction:context:]
-[ISDDataDatabase fastEnumerateTargetsOfRelationshipNames:fromRecordIds:asArgumentsToFunction:context:]
-[ISDRecordStore removePropertiesForRecordsWithIdentifiers:]
-[ISDDataDatabase removePropertiesForRecordsWithIdentifiers:]
-[ISDDataDatabase removeTuplesForRecordsWithIds:nullifyReferencesToRemovedRecords:]
-[ISDRecordStore removeRecordsWithIds:nullifyReferencesToRemovedRecords:]
-[ISDRecordStore _removeRecordsWithIds:inDatabase:nullifyReferencesToRemovedRecords:]
-[ISDDataDatabase removeRecordsWithIds:nullifyReferencesToRemovedRecords:]
-[ISDRecordStore(DataReferences) removeDataReferencesWithRecordIds:inDatabase:dataWrappers:]
-[ISDRecordStore(DataReferences) _removeDataReferencesWithRecordIds:inDatabase:]
-[ISDDataDatabase removeDataReferencesWithRecordIds:]
-[ISDSqliteRecordIdMapper removeMappingsForGlobalIds:]
-[ISDRecordIdMapper removeMappingsForGlobalIds:]
-[ISDRecordIdMapDatabase removeMappingsForGlobalIds:]
-[ISDDataWrapper copyWithZone:]
-[ISDRecordStore(DataReferences) removeDataReferencesWithRecordIds:dataWrappers:]
__handleRecordDataReferences
-[ISDDatabase(SqliteHelpers) createDataWrapperFromDataInColumn:statement:]
__deleteRecordDataReference
-[ISDDataWrapper deleteDataReference:]
-[ISDRecordStore(DataReferences) _removeDataReferencesWithRecordIds:]
-[ISDRecordStore _truthSegmentNamesForRecordIds:]
-[ISDDataDatabase recordIdsInTruth:includeDeletedRecords:]
__handleRecordIdExistStatement
-[ISDRecordStore recordsWithRowids:count:inTruthSegment:]
-[ISDDataDatabase recordsWithRowids:count:]
-[ISDDataDatabase createRecordIdsForRowids:count:]
__addRecordIdToArrayFromRowid
-[ISDDataDatabase recordsWithIdentifiers:]
-[ISDDataDatabase createArrayWithRecordsWithIdentifiers:constructRelationshipMap:]
-[ISDQuickDirtyCoder decodeSignedInt8]
-[ISDQuickDirtyCoder decodeDate]
-[ISDQuickDirtyCoder decodeDouble]
-[ISDEntity identityKeysForRecord:minimumAlternate:]
-[NSMutableDictionary(SyncServicesExtensions) isd_addObject:toSetForKey:]
-[ISDQuickDirtyCoder decodeURL]
-[ISDChange identityHash]
-[NSData(ISyncSummaryDescriptions) isd_summaryWithIndent:]
-[ISDRecord(Conveniences) propertyNames]
-[ISDProperty isIdentityKeyForAlternative:]
-[ISDChange replaceRecordId:withRecordId:]
-[ISDPropertyChange replaceRecordId:withRecordId:]
-[ISDPropertyValue replaceRecordId:withRecordId:]
-[ISDDataWrapper isEqual:]
-[ISDDataWrapper(UtilityMethods) length]
-[ISDPropertyValue(CollectionExtensions) valueDecodedIfNecessary]
-[ISDChange idsReferencedByChangeInDictionary:]
-[ISDChange enumerateIdsAsArgumentToFunction:context:skipTupleId:]
-[ISDPropertyValue(SpeedConveniences) fastDeletedValue]
__accumulateReferencedIds
-[ISDProperty init]
-[ISDProperty setName:]
-[ISDProperty setType:]
-[ISDProperty setExcludeFromAirbagCount:]
-[ISDProperty dealloc]
-[ISDGlobalId compare:]
-[ISDRecord(Mutators) removePropertyValueWithName:]
-[ISDClientState replaceRecordId:withRecordId:]
-[ISDSqliteRecordIdMapper replaceGlobalId:withGlobalId:]
-[ISDRecordIdMapper replaceGlobalId:withGlobalId:]
-[ISDRecordStore replaceRecordId:withRecordId:]
-[ISDDataDatabase replaceRecordId:withRecordId:]
-[ISDRecordStore clientDataForRecordWithId:]
-[ISDPropertyValue isEqual:]
-[ISDPropertyValue(CollectionExtensions) _decodedCollectionsAreEqual:]
-[NSObject(SyncServicesAttributeExtensions) isd_isAttributeSelfConsistent]
-[ISDPropertyValue replaceRelationshipTupleId:withRelationshipTupleId:]
-[ISDPropertyValue hash]
-[ISDDataWrapper isd_isEqual:]
-[NSData(SyncServicesIsEqualExtensions) isd_isEqual:]
-[ISDRecord(Conveniences) addReorderOnlyPropertyName:]
-[NSURL(SyncServicesIsEqualExtensions) isd_isEqual:]
-[NSNumber(SyncServicesIsEqualExtensions) isd_isEqual:]
-[ISDClientState compact]
-[ISDSqliteChangeStore compact]
-[ISDDatabase(SqliteHelpers) vacuum]
-[ISDQuickDirtyCoder decodeColor]
-[ISDQuickDirtyCoder decodeCalendarDate]
-[ISDPropertyValue(CollectionExtensions) _decodeCollectionData:forType:]
-[NSMutableArray(AddObjectIfNotNil) isd_collectionType]
-[ISDQuickDirtyCoder decodeSignedInt32]
-[ISDQuickDirtyCoder encodeSignedInt8:]
-[NSColor(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[ISDQuickDirtyCoder encodeColor:]
-[ISDProperty isRequired]
-[ISDRecordStore deleteTuple:inGeneration:inSegment:]
-[ISDDataDatabase deleteTuple:inGeneration:]
+[ISyncManager initialize]
-[ISyncConcreteManager init]
-[ISyncConcreteManager _enableFlagChanged:]
-[ISyncConcreteManager _setupNotifies]
__setupNotify
+[ISyncManager sharedManager]
-[ISyncConcreteManager logDirectoryPath]
-[ISyncConcreteManager clientWithIdentifier:]
-[ISyncConcreteManager _performSelectorOnServer:withArg:withArg:]
-[ISyncConcreteManager _performSelectorOnServer:numberOfArguments:]
-[ISyncConcreteManager _connectToServer]
-[ISyncConcreteManager _connectToServerNoLock]
-[ISyncConcreteManager _addRunLoopModesToConnection:]
-[SyncClientNameNumberProvider initWithSyncManager:]
-[ISDNameNumberProvider init]
-[ISyncConcreteManager setSyncClientNameNumberProvider:]
-[ISDNameNumberProvider refreshFromNameNumberMappings:]
-[ISyncConcreteManager _processChangesToClientDescriptions:]
-[ISyncConcreteManager _processChangesToClientDescription:withIdentifier:]
-[ISyncConcreteClient initWithClient:]
-[ISyncConcreteClient setSyncManager:]
-[ISyncConcreteClient displayName]
-[ISyncConcreteManager fetchChangesToClientDescriptions]
-[ISyncConcreteManager _fetchChangesToClients:whither:]
-[ISyncConcreteManager _logDescriptionChange]
_makeSureClientIsValid
-[ISDClient displayName]
-[ISDClient localizationBundle]
-[ISDFileReference path]
-[ISyncConcreteManager _truthRecordStore:]
-[ISyncConcreteManager fetchChangesToSchemaDescriptionsForDataclassesNamed:orEntitiesNamed:fetchAll:]
-[ISyncConcreteManager _identifyNewSchemaNames:usingDictionary:intoArrayAtLocation:]
-[ISyncConcreteManager _performSelectorOnServer:withArg:withArg:withArg:]
-[ISyncConcreteManager _processChangesToSchemaDescriptions:]
-[ISyncConcreteManager _processChangesToDataClassDescription:withName:]
-[ISyncConcreteManager _processChangesToEntityDescription:withName:]
-[ISDEntity(SpeedConveniences) fastDataclass]
-[ISDDataClass(SpeedConveniences) fastName]
-[ISyncConcreteManager dataDirectoryPath]
-[ISDRecordStore isRecordStoreAvailableForReading]
-[ISDRecordStore _isRecordStoreAvailableForMode:]
-[ISDDatabase databaseAccessStatus]
-[ISyncConcreteManager viewOfRecordsInTruthWithEntityNames:]
+[ISyncRecordView allocWithZone:]
-[ISyncConcreteRecordView initWithRecordStore:identityMatchedIdMapper:entityNames:]
+[ISyncRecordSnapshot allocWithZone:]
-[ISyncConcreteRecordSnapshot initWithTruthRecordStore:clientRecordIdMapper:entityNames:]
-[ISyncConcreteManager defaultConflictManager]
-[ISyncConcreteClient clientIdentifier]
-[ISyncConcreteManager viewOfRecordsInStoreOfClientWithIdentifier:identityMatchedIdMapper:forEntityNames:]
-[ISyncConcreteClient isInvalid]
-[ISyncConcreteClient _dataDirectoryPath]
-[ISDRecordStore initWithDatabaseInDirectory:]
-[NSDictionary(SyncServicesExtensions) isd_reversedDictionaryUsingStrings]
-[NSDictionary(SyncServicesExtensions) isd_reversedDictionaryUsingSets]
-[ISyncConcreteManager dataClassNameForEntityName:]
-[ISyncConcreteManager imageForDataClassName:]
-[ISDDataClass imagePath]
-[ISyncConcreteManager displayNameForDataClassName:]
-[ISDDataClass displayName]
-[ISDDataClass bundle]
-[NSMutableAttributedString(SyncServicesAdditions) isd_appendAttributedString:]
-[ISyncConcreteManager longNameForDataClassName:]
-[ISDDataClass longName]
-[ISyncConcreteManager airbagThreshold]
-[ISyncConcreteManager entityNamesInDataClassName:]
-[ISyncConcreteManager _entityNamesInDataClassName:]
-[ISyncConcreteRecordView recordGraphNodesWithIdentifiers:]
-[ISDGlobalId initWithUUIDString:]
+[ISyncRecordGraphNode allocWithZone:]
-[ISyncConcreteRecordGraphNode initWithRecordView:recordIdentifier:]
-[ISyncConcreteRecordGraphNode setChangeType:]
-[ISyncConcreteRecordGraphNode record]
-[ISyncConcreteRecordGraphNode recordIdentifier]
-[ISyncConcreteRecordView actualRecordsWithIdentifiers:]
-[ISyncConcreteRecordSnapshot recordsWithIdentifiers:useUnformattedValues:]
-[ISyncConcreteRecordSnapshot checkForCancelledSession]
-[ISDDataReference initWithDataWrapper:]
+[ISDStructuredDelta recordDictionaryFromRecord:usingRecordIdMapper:useUnformattedValues:]
-[ISDPropertyValue(SpeedConveniences) fastPrimativeUnformattedValue]
-[ISyncConcreteRecordSnapshot _localIdForGlobalId:]
-[ISyncConcreteRecordGraphNode relationshipNames]
-[ISyncConcreteRecordGraphNode entityName]
-[ISyncConcreteManager relationshipNamesOnEntityName:]
-[ISyncConcreteRecordGraphNode setDisplayKeys:]
-[ISyncConcreteRecordGraphNode propertiesByExcludingExcludedPropertiesFromProperties:]
-[ISyncConcreteManager excludeFromAirbagPropertyName:onEntityName:]
-[ISyncConcreteRecordGraphNode setChangedKeys:]
-[ISyncConcreteRecordGraphNode setChangedRelationshipNames:]
-[ISyncConcreteRecordGraphNode entityDisplayName]
-[ISyncConcreteManager displayNameForEntityName:]
-[ISDEntity displayName]
-[ISDEntity bundle]
-[ISyncConcreteManager uiHelperForEntityName:]
-[ISDEntity uiHelperClass]
-[ISDEntity uiHelperClassName]
-[ISyncConcreteRecordGraphNode changedKeys]
-[ISyncConcreteRecordGraphNode topLevelParentNode]
-[ISyncConcreteRecordGraphNode setTopLevelParentNode:]
-[ISyncConcreteRecordGraphNode displayKeys]
-[ISyncConcreteRecordGraphNode dependenciesForPropertyName:]
-[ISyncConcreteManager propertyDependenciesForPropertyName:onEntityName:]
-[ISyncConcreteManager uiHelperForPropertyName:onEntityName:]
-[ISDProperty uiHelperClass]
-[ISDProperty bundle]
-[ISDProperty uiHelperClassName]
-[ISDDataReference length]
-[ISDDataReference bytes]
-[ISDDataWrapper data]
-[ISDDataWrapper(Private) _loadData]
-[ISDDataReference copyWithZone:]
-[ISyncConcreteManager displayNameForPropertyName:onEntityName:]
-[ISDProperty displayName]
-[ISyncConcreteManager typeForPropertyName:onEntityName:]
-[ISDProperty type]
-[ISyncConcreteRecordGraphNode interestingAttributeKeysByComparingGraphNode:interestingAttributeKeysForOther:unInterestingAttributeKeysForOther:includeRelationship:forClientWithIdentifier:]
-[ISyncConcreteClient _client]
-[ISDClient syncStateForEntityName:]
-[ISDSyncState propertyNames]
-[ISyncConcreteRecordGraphNode _formattedAwayProperties]
-[ISyncConcreteRecordView formattedAwayPropertiesForRecordWithIdentifier:]
-[ISDRecordStore(FormattingSupport) formattedAwayPropertiesForRecordWithIdentifier:]
-[ISDDataReference isEqual:]
-[ISDDataReference dataWrapper]
-[NSAttributedString(SyncServicesAdditions) isd_isEqualToAttributedString:]
-[ISyncConcreteManager dataClassNamesInEntityNames:]
-[ISyncConcreteManager registerClientWithIdentifier:descriptionFilePath:]
-[ISyncConcreteManager _registerClientWithIdentifier:description:descriptionFilePath:descriptionBundleId:descriptionBundleRelativePath:]
-[ISyncConcreteManager _performSelectorOnServer:withArg:withArg:withArg:withArg:withArg:]
-[ISyncConcreteClient setSyncsAfterClients:]
-[ISyncConcreteManager setSyncsAfterClients:forClient:]
-[ISDClient morphInToObject:]
-[ISDDataObject setValueFromObject:forKey:didChange:]
-[ISDClient descriptionFile]
-[ISDFileReference isEqual:]
-[ISDClient clientType]
-[ISDClient imageFile]
-[ISDClient syncAlertTool]
-[ISDClient syncAlertTypes]
-[ISDClient syncStates]
-[ISDClient setSyncStates:]
-[ISDDataObject setDataManager:]
-[ISDClient filterData]
-[ISDClient synchronizesAllEntities]
-[ISDClient hasDynamicSyncAlertHandler]
-[ISDClient useLocalIdsForGUIDs]
-[ISDClient neverFormatsRelationships]
-[ISDClient idNumber]
-[ISDClient syncsAfterClients]
-[ISDClient trackRecordModificationTimes]
-[ISyncConcreteClient setShouldSynchronize:withClientsOfType:]
-[ISyncConcreteManager setShouldSynchronize:withClientsOfType:forClient:]
-[ISyncConcreteManager isEnabled]
-[ISyncConcreteManager _isAvailable:]
-[ISyncConcreteManager _performSelectorOnServer:withArg:]
-[ISyncConcreteClient shouldReplaceClientRecordsForEntityName:]
-[ISyncConcreteClient _syncStateForEntityName:]
-[ISyncConcreteManager fetchChangesToClientSyncStates]
-[ISDClient syncStateForEntityWithName:createIfAppropriate:]
-[ISDSyncState clientWantsToPullTruth]
-[ISyncConcreteClient _syncStates]
-[ISyncConcreteClient objectForKey:]
-[ISyncConcreteManager unresolvedConflictCount]
+[ISDConflictManager unresolvedConflictsCountPathnameComponent]
+[ISyncSession beginSessionWithClient:entityNames:beforeDate:]
+[ISyncSession _sessionWithClient:entityNames:beforeDate:clientHasTruthForEntityNames:quietlyPushTruth:target:selector:anchors:hasChanges:skip:error:]
-[ISyncConcreteClient syncManager]
-[ISyncConcreteClient clientType]
-[ISyncConcreteManager laggardClientIdentifiersWithChanges:]
-[ISyncConcreteClient enabledEntityNames]
-[ISyncConcreteClient allowUnknownEntitiesAndUnresolvedReferences]
-[ISyncConcreteClient useLocalIdsForGUIDs]
-[ISyncConcreteClient supportedEntityNames]
-[ISyncConcreteManager allEntityNames]
-[ISDDataClass morphInToObject:]
-[ISDDataClass bundleRef]
-[ISDDataClass uiHelperClassName]
-[ISDDataClass category]
-[ISDDataClass versionInfo]
-[ISDEntity morphInToObject:]
-[ISDEntity morphInToObjectExceptingProperties:]
-[ISDDataClass isEqual:]
-[ISDDataClass appProviderIdentifier]
-[ISDEntity bundleRef]
-[ISDEntity propertyDependencies]
-[ISDEntity versionInfo]
-[ISDEntity _updatePropertiesFromEntity:forKey:didChange:]
-[ISDProperty isEqual:]
-[ISDProperty subtype]
-[ISDProperty enumValues]
-[ISDProperty preferredClientTypesForAutomaticConflictResolution]
-[ISDProperty preferredRecordTypeForAutomaticConflictResolution]
-[ISDRelationship isEqual:]
-[ISDRelationship targets]
-[ISDProperty fullName]
__removeUnknownEntitiesFromList
+[ISyncSession _validateClient:entityNames:beforeDate:clientHasTruthForEntityNames:target:selector:]
-[ISyncConcreteClient syncSession]
-[ISyncConcreteClient synchronizesAllEntities]
+[ISyncConcreteSession initialize]
-[ISyncConcreteSession initWithClient:entityNames:]
-[ISyncConcreteClient setSyncSession:]
-[ISyncConcreteSession _stateMachinePhase]
-[ISyncConcreteSession _setTarget:selector:]
-[ISyncConcreteManager sessionWantsToBegin:beforeDate:pushTruthForEntityNames:quietlyPushTruth:hasChanges:skip:]
-[ISyncConcreteSession _client]
-[ISyncConcreteSession entityNames]
-[ISyncConcreteManager _performSelectorOnServer:withArg:withArg:withArg:withArg:withArg:withArg:withArg:withArg:withArg:]
-[ISyncConcreteSession _setSyncPlanIdentifier:]
-[ISyncConcreteSession _setRunning:]
-[ISyncConcreteSession _waitForTransitionFromPhase:untilDate:]
-[ISyncConcreteClient finalize]
-[ISyncConcreteManager stopObservingClient:]
-[ISyncConcreteManager _stopObservingClient:]
-[ISyncConcreteSession clientWithId:canBeginSyncingPlanWithId:currentGeneration:syncModes:entities:truthPullers:]
-[ISyncConcreteSession isCancelled]
-[ISyncConcreteSession _transitionStateMachine:]
-[ISyncConcreteSession _leavePending]
-[ISyncConcreteSession _forceCompleteRefreshSyncs]
-[ISyncConcreteSession _enterNegotiating]
-[ISyncConcreteSession _applyAnchorSyncModes]
-[ISyncConcreteSession _notifyTheGuyWaitingToTransitionPhases]
-[ISyncConcreteSession _syncPlanIdentifier]
-[ISyncConcreteClient setObject:forKey:]
-[ISyncConcreteSession shouldPushChangesForEntityName:]
-[ISyncConcreteSession _syncStateForEntityName:]
-[ISyncConcreteManager _logSyncStateChange]
-[ISDSyncState clientCanPullOnly]
-[ISyncConcreteSession shouldPullChangesForEntityName:]
-[ISDSyncState clientCanPushOnly]
-[ISyncConcreteSession shouldPushAllRecordsForEntityName:]
-[ISyncConcreteSession shouldReplaceAllRecordsOnClientForEntityName:]
-[ISyncConcreteSession prepareToPullChangesForEntityNames:beforeDate:]
-[ISyncConcreteSession _prepareToPullChangesForEntityNames:inBackground:target:selector:]
-[ISyncConcreteSession _leaveNegotiating]
-[ISyncConcreteSession _enterPushing]
-[ISyncConcreteSession _createClientState]
-[ISyncConcreteClient shouldTrackRecordModificationTimes]
-[ISDClient shouldTrackRecordModificationTimes]
-[ISDClientState setResetHandler:]
-[ISyncConcreteClient neverFormatsRelationships]
-[ISDStructuredDelta initWithClientState:syncStates:entities:currentGeneration:clientIsTrusted:clientFormatsRelationships:]
-[ISDClientState isLocalClientType]
-[ISDClientState isTransferClient]
-[ISDStructuredDelta setRelationshipValidationDelegate:]
-[ISyncConcreteManager sessionDidBeginPushingChanges:negotiatedSyncStates:]
-[ISDSyncState replacementObjectForPortCoder:]
-[ISDSyncState encodeWithCoder:]
-[ISDEntity(SpeedConveniences) fastName]
-[ISDRecordStore(FilteredReferenceSupport) _createSetOfRecordIdsWithFilteredTargets:]
-[ISyncConcreteSession _prepareRecordStoreForSyncing]
-[ISyncConcreteSession _prepareRecordStoreForSlowSyncingEntityNames:]
-[ISyncConcreteSession _prepareRecordStoreForRefreshSyncingEntityNames:]
-[ISyncConcreteSession _prepareRecordStoreForTruthPushingEntityNames:]
-[ISyncConcreteSession _prepareRecordStoreForTruthPullingEntityNames:]
-[ISyncConcreteSession _leavePushing]
-[ISyncConcreteSession _processPushedStuff]
-[ISyncConcreteSession _processModifiedRecords]
-[ISyncConcreteSession _newDictionaryWithRecordsPushedByClient]
-[ISyncConcreteSession _processRemainingChangesAsAdds]
-[ISyncConcreteSession _processRemainingRecordsAsAdds]
-[ISDSqliteChangeStore flushTempChanges]
-[ISyncConcreteSession _convertUnresolvedReferencesToGlobalIds]
-[ISDClientState didCreateRecordIdMapper]
-[ISDRecordIdMapper hasUnresolvedReferences]
-[ISyncConcreteSession _completePushingPhase]
-[ISyncConcreteSession _processLostRecords]
-[ISyncConcreteSession _deleteUnreferencedRecords]
-[ISyncConcreteSession _validateRelationshipTargets]
-[ISDRecordIdMapper unresolvedGlobalIdentifiers]
-[ISyncConcreteSession _resolveRecordIdTypes:]
-[ISyncConcreteSession _updateDataReferencesForRecordsWithIdentifiers:resetOnError:]
-[ISyncConcreteSession _updateDataReferencesForRecordsWithIdentifiers:]
-[ISyncConcreteSession _logPushSummary]
-[ISDSqliteChangeStore(Helpers) numberOfPendingChangesForEntities:]
-[ISDSqliteChangeStoreDatabase _numberOfPendingChangesForEntities:]
__numChangesWithEntities
-[ISyncConcreteSession _releaseClientState]
+[ISDDatabase clearThreadGlobalUniqueStringTable]
+[ISDGlobalId clearThreadUniqueGlobalIdTable]
-[ISyncConcreteSession _enterMingling]
-[ISyncConcreteManager sessionDidEndPushingChanges:changeStoreHasChanges:]
-[ISyncConcreteSession _validateCanPullChangesForEntityNames:]
-[ISDIdMapDatabase finalize]
-[ISDRecordIdMapDatabase finalize]
-[ISDDataDatabase finalize]
-[ISDSqliteChangeStoreDatabase finalize]
+[ISyncChange allocWithZone:]
-[ISyncConcreteChange initWithChangeType:recordIdentifier:changes:]
-[ISyncConcreteSession clientWithIdCanStartPullingChanges:]
-[ISyncConcreteSession _leaveMingling]
-[ISyncConcreteSession _enterReadyToPull]
+[ISyncManager clearThreadISyncRecordSnapshotTable]
-[ISyncConcreteSession changeEnumeratorForEntityNames:]
-[ISyncConcreteSession _leaveReadyToPull]
-[ISyncConcreteSession _enterPulling]
-[ISyncConcreteSession _filterRecords]
-[ISyncConcreteSession _applicableFilters]
-[ISyncConcreteClient filters]
-[ISyncConcreteClient _filters:]
-[ISyncConcreteManager filterDataForClient:]
+[ISyncFilter filterRejectingLocalRecords:]
-[ISyncSimplyIgnoreLocalsFilter initWithEntityNames:]
-[ISyncSimplyIgnoreLocalsFilter supportedEntityNames]
-[ISDRecordStore toBeAppliedRecordIdentifiersForEntityNames:]
-[ISDDataDatabase toBeAppliedRecordIdentifiersForEntityNames:]
__addRecordIdForRecordIdsToBeAppliedWithEntityName
-[ISDFiltratorThingy initWithFilter:client:entities:recordIdMapper:clientRecordStore:truthRecordStore:]
-[ISDFiltratorThingy _createReferringAndRequiredRelationshipNamesMapping]
-[ISDFiltratorThingy setRecordsIdsForFiltering:]
-[ISDFiltratorThingy setIsServerClientType:]
-[ISDFiltratorThingy filterRecords]
-[ISyncConcreteSession _doPeriodicPingToServer]
-[ISDFiltratorThingy applyFiltersToClientRecord:truthRecord:]
+[ISDStructuredDelta recordDictionaryFromRecord:usingRecordIdMapper:]
-[ISyncSimplyIgnoreLocalsFilter shouldApplyRecord:withRecordIdentifier:]
-[ISDFiltratorThingy _checkForEmptyRequiredRelationshipsInRecord:]
-[ISDFiltratorThingy entityDescriptionWithName:]
-[ISDFiltratorThingy setShouldApply:recordWithId:clientRecord:truthRecord:]
-[ISDFiltratorThingy isServerClientType]
-[ISDIdMapDatabase disableFlush]
+[ISDStructuredDelta _localRecordIdentifiersFromTuples:usingRecordIdMapper:]
-[ISDPropertyValue(SpeedConveniences) createRelationshipValueAsIdentifiers]
-[ISDFiltratorThingy _zapRecordIds:state:toBeApplied:]
-[ISDRecordStore enableFlushIgnoringClientData]
-[ISDRecordStore deletedRecordIdsInTruth:]
-[ISDDataDatabase deletedRecordIdsInTruth:]
-[ISDChangeEnumerator initWithSession:clientRecordStore:truth:recordIds:]
-[ISDChangeEnumerator nextObject]
-[ISDChangeEnumerator _fillCache]
-[ISyncConcreteSession _setIgnoreDataWrapperDecode:]
-[ISyncConcreteSession _setClientRecordCache:]
-[ISyncConcreteSession _changeForChangeEnumerator:betweenTruthRecord:clientRecord:]
-[ISyncConcreteSession _hasAlreadyReturnedOrAcceptedChangeForRecordWithIdentifier:]
-[ISDStructuredDelta changeForClientBetweenOldRecord:newRecord:]
-[ISDChangePuller initWithRecordIdMapper:]
-[ISDChangePuller prepareForNewChange]
-[ISDChangeBuilder initWithClientId:recordId:entity:propertyNamesSynchronizedByClient:lastModifiedGeneration:currentGeneration:clientIsTrusted:clientState:]
-[ISDChangeBuilder setDelegate:]
-[ISDChangeBuilder takeNewValuesFromRecord:]
-[ISDChangeBuilder isSpecialGlobalProperty:propertyDescription:]
-[ISDChangeBuilder setProduceDeletesForMissingNewValues:]
-[ISDChangeBuilder takeOldValuesFromRecord:]
-[ISDRecord unformattedRelationshipValues]
-[ISDChangeBuilder change]
-[ISDChangeBuilder buildDeltas]
-[ISDChangeBuilder buildDeltasForExistingProperties]
-[ISDChangeBuilder shouldCreateDeltaForProperty:]
-[ISDChangeBuilder shouldCreateDeltaBetweenOldValue:newValue:propertyDescription:]
-[ISDChangeBuilder isOldValue:equalToNewValue:propertyDescription:]
-[ISDPropertyValue(SpeedConveniences) fastUnformattedValue]
-[ISDChangePuller changeBuilder:didCreateDelta:betweenOldValue:newValue:]
-[ISDChangeBuilder buildDeltasForNewProperties]
-[ISDChangeBuilder buildDeltasForMissingCodependentProperties]
-[ISDChangeBuilder validateValue:forPropertyDescription:]
-[ISDChangeBuilder makeSureToPushCodependentPropertiesForPropertyName:]
-[ISDChangePuller changeBuilder:createDeltaBetweenOldValue:newValue:propertyDescription:name:lastModifiedGeneration:]
-[ISDChangeBuilder _isDefaultValue:]
-[ISDChangePuller changeBuilder:createChangeWithEntityName:recordId:changeType:deltas:fromGeneration:toGeneration:]
-[ISyncConcreteChange _setRecord:]
-[ISyncConcreteChange type]
-[ISyncConcreteChange changes]
-[ISyncConcreteChange record]
-[ISyncConcreteSession _updateClientRecord:withChangesFromTruth:formattedRecordDictionary:saveUnformattedValues:]
-[ISyncConcreteSession _entityDescriptionWithName:]
+[ISDStructuredDelta applyRecordDictionary:toRecord:forClient:generation:entity:syncState:takeUnformattedRelationshipsFromRecord:saveUnformattedValues:ignoredProperties:]
-[ISDRecordIdMapper changeByConvertingGlobalIdsToLocalIdsInChange:entity:]
-[ISDRecordIdMapper changeByConvertingRecordIdsInChange:entity:fromLocalToGlobal:]
-[ISDRecordIdMapper recordDictionaryByConvertingRecordIdsInRecordDictionary:entity:fromLocalToGlobal:]
-[ISyncConcreteChange recordIdentifier]
+[ISyncChange changeWithType:recordIdentifier:changes:]
-[ISyncChange description]
-[ISyncConcreteSession clientAcceptedChangesForRecordWithIdentifier:formattedRecord:newRecordIdentifier:]
-[ISyncConcreteSession clientAcceptedChangesForRecordWithIdentifier:formattedRecord:newRecordIdentifier:keepAwayFromServer:]
-[ISDRecordIdMapper hasMappingForLocalId:]
-[ISDSqliteRecordIdMapper hasMappingForLocalId:useConstructedIdMap:]
-[ISDRecordIdMapper hasMappingForLocalId:useConstructedIdMap:]
-[ISDSqliteRecordIdMapper _hasMappingForLocalId:]
-[ISDRecordIdMap globalId]
-[ISDChangeBuilder unformattedTuplesForRelationshipName:]
_getUndeletedRecordIdsFromTuples
-[ISDChangeBuilder _isTargetIdFiltered:]
-[ISDRecordStore(FilteredReferenceSupport) _isTargetId:filteredForRecordWithId:]
-[ISDChangeBuilder _newUndeletedRecordIdsFromTuples:]
-[ISyncConcreteManager versionInformationForDataclassNamed:]
-[ISyncConcreteSession clientCommittedAcceptedChanges]
-[ISyncConcreteSession _clientCommittedAcceptedChanges]
-[ISDRecordStore markRecordsKeepAwayFromServer:forClient:inGeneration:]
-[ISyncConcreteSession _commitAcceptedChangesAndStartAnotherTransaction:]
-[ISyncConcreteSession _commitUnknownAccepts:deletedRecordIds:filteredRecordIds:]
-[ISyncConcreteSession _processAllAcceptedClientRecords:deletedRecordIds:filteredRecordIds:]
-[ISyncConcreteSession _processAcceptedClientRecord:acceptedRecordIds:deletedRecordIds:filteredRecordIds:]
-[ISDPropertyValue(CollectionExtensions) encodeCollectionData:forType:]
-[NSDate(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[ISDQuickDirtyCoder encodeDate:]
-[ISDQuickDirtyCoder encodeDouble:]
-[ISDDataDatabase _updateUnformattedRelationshipsInRecord:ignoreDeletedRelationshipTuples:removeTuplesFirst:]
-[ISyncConcreteSession _commitUnknownRejects:acceptedRecordIds:]
-[ISyncConcreteSession _finishTransactionAndStartAnother:]
-[ISyncConcreteSession finishSyncing]
-[ISyncConcreteSession _leavePulling]
-[ISDRecordIdMapper removePurgedMappings]
-[ISDIdMapDatabase removePurgedMappings]
-[ISyncConcreteSession _logPullSummary]
-[ISyncConcreteSession _enterFinished]
-[ISyncConcreteManager sessionDidEnd:finishedSyncing:]
-[ISyncConcreteClient _setSyncStatesAfterSyncSession:]
-[ISDClient setSyncStatesAfterSyncSession:]
-[ISyncConcreteManager _clearClientSyncStateNotify]
-[ISyncConcreteSession isd_didDecodeDataWrapper:forRecordWithIdentifier:withPropertyName:]
-[ISyncConcreteSession _noteDataWrapper:forRecordWithIdentifier:withPropertyName:]
-[ISyncConcreteSession _noteDataWrapper:forRecordWithIdentifier:withPropertyName:onlyForUpdate:]
-[ISDRecord(Conveniences) unformattedRelationshipValueWithName:]
-[ISDRecord(Mutators) takeUnformattedRelationshipValueWithName:fromRecord:inGeneration:byClientId:]
+[ISDStructuredDelta _newRelationshipTuplesByApplyingRecordIds:toRelationshipWithName:tuples:lastModifiedGeneration:lastModifiedByClientId:forClient:]
-[ISDRecord(Mutators) deleteUnformattedRelationshipValueWithName:]
-[ISDRecordIdMapper convertRecordIdentifiers:fromLocalToGlobal:]
-[ISDChangeBuilder computeActualChangesNewValues:oldValues:forProperty:]
-[ISyncConcreteSession isd_willEncodeDataWrapper:forRecordWithIdentifier:withPropertyName:]
__addrecordIdForSql
-[ISyncConcreteManager clearHasChangesIndicatorForLaggardClientsWithIdentifiers:]
-[ISyncConcreteSession pushChange:]
-[ISDRecordIdMapper cleanLocalIdForLocalId:]
-[ISyncConcreteChange setRecordIdentifier:]
-[ISDRecordIdMapper globalIdForLocalId:]
-[ISDRecordIdMapper globalIdForLocalId:useLocalIdAsGlobalId:useConstructedIdMap:]
-[ISDRecordIdMapper _safeGlobalIdForLocalId:useConstructedIdMap:]
-[ISDRecordIdMapper entityNameForLocalId:]
-[ISyncConcreteChange(PrivateAPI) _entityName]
-[ISyncConcreteChange(PrivateAPI) _propertyChangeForName:]
-[ISyncConcreteSession _validatePushedChange:againstEntity:]
_classForISyncDataType
-[ISyncConcreteSession _validateSubType:forProperty:onEntityName:]
-[ISyncConcreteSession _notePushingOfKnownPropertyNotRegisteredToSyncByClient:forPropertyName:forEntityName:]
-[ISDRecordIdMapper changeByConvertingLocalIdsToGlobalIdsInChange:entity:]
-[ISyncConcreteSession _pushChange:]
-[ISyncConcreteSession _processPushedStuffIfNowIsAGoodTime]
-[ISDRecordIdMapper globalIdForUnresolvedLocalId:]
-[ISDRecordIdMapper createUnresolvedGlobalIdForLocalId:]
-[ISDRecordIdMapper setGlobalId:forUnresolvedLocalId:]
-[ISDSqliteRecordIdMapper isRecordIdentifierOfUnknownType:]
-[ISDRecordIdMapper isRecordIdentifierOfUnknownType:]
-[ISDRecordIdMapper isRecordIdentifierOfUnknownTypeFromThisSession:]
-[ISDRecordIdMapDatabase getUnknownTypeForRecordId:]
-[ISDEntity requiredPropertyNames]
-[ISDIdMapDatabase removeMappingForLocalId:]
-[ISDStructuredDelta changeForMinglerBetweenOldRecord:newChange:recordId:applyDeltasToRecord:]
-[ISDStructuredDelta prepareChangePusherToUpdateRecord:clientFormatsRelationships:]
-[ISDChangePusher initWithClientId:clientFormatsRelationships:]
-[ISDChangePusher prepareForNewChange:]
-[ISDStructuredDelta createChangeBuilderForPushingChangesFromRecord:recordId:entityName:]
-[ISDChangeBuilder setShouldTakeMissingCodependentValuesFromOldValues:]
-[ISDChangeBuilder takeNewValuesFromChange:]
-[ISDChangeBuilder actionFromDeltaDictionary:inChange:]
-[ISDChangePusher changeBuilder:didCreateDelta:betweenOldValue:newValue:]
-[ISDChangePusher changeBuilder:createDeltaBetweenOldValue:newValue:propertyDescription:name:lastModifiedGeneration:]
-[ISDChangePusher updateRecordWithPropertyValue:unformattedRelationshipTuples:propertyDescription:name:lastModifiedGeneration:isDefaultValue:]
-[ISDPropertyValue setUnformattedValue:]
-[ISDPropertyChange setIsDefaultValue:]
-[ISDPropertyValue setIsDefaultValue:]
-[ISDDataReference isd_isAttributeSelfConsistent]
-[ISDDataWrapper(UtilityMethods) dataCache]
-[ISDChangePusher changeBuilder:createChangeWithEntityName:recordId:changeType:deltas:fromGeneration:toGeneration:]
-[ISDChange initWithChangeType:entityName:recordId:propertyChanges:clientId:fromGeneration:toGeneration:]
-[ISDChangeBuilder relationshipNewReferences]
-[ISDStructuredDelta _validateChange:againstEntity:]
-[ISDChange recordId]
-[ISyncConcreteSession setEntityName:forRecordId:]
-[ISDRecord(Mutators) setLastChangedGeneration:]
-[ISDEntity hasPropertiesWithLastModifiedResolutionPolicy]
-[NSData(DataWrapping) dataWrapper]
+[ISDDataWrapper dataWrapperWithData:]
-[ISDDataWrapper(Private) initDataWrapperWithData:]
__simpleDataHash
-[ISyncConcreteSession _appendChangeToChangeStore:]
-[ISDSqliteChangeStore appendChange:]
-[ISDSqliteChangeStoreDatabase _insertChange:]
-[ISDChange toGeneration]
-[ISDSqliteChangeStoreDatabase _createDataWithPropertiesEncodedForSqlite:]
-[ISDPropertyChange isd_quickDirtyCoderType]
-[ISDQuickDirtyCoder encodeChangeDelta:]
-[ISDPropertyChange encodeWithQuickDirtyCoder:]
-[ISDChange enumerateIdsAsArgumentToFunction:context:]
-[ISDQuickDirtyCoder resetForWritingWithMutableData:]
-[ISDChangeBuilder entity]
-[ISDRecord initWithRecordId:propertyChanges:]
-[ISDChangeBuilder isPushingTruth]
-[ISDEntity hashValueOfIdentityKeyValuesForRecord:]
-[ISDDigestMaker computeBase64DigestForData:useMD4:]
-[ISDDigestMaker computeMD4DigestForData:]
-[ISyncConcreteSession ping]
-[ISyncConcreteManager pingServerAndCheckIfSessionIsCancelled:]
-[ISDChangeBuilder setHasOldValue:]
+[ISyncSession beginSessionWithClient:entityNames:beforeDate:clientHasTruthForEntityNames:quietlyPushTruth:]
-[ISyncConcreteManager _createEntitiesMappingForEntitiesWithNames:]
__computeClosureOfEntityNames
-[ISyncConcreteSession clientWantsToPushAllRecordsForEntityNames:]
-[ISyncConcreteSession _negotiateSyncMode:forEntityNames:]
-[ISDSyncState setRequestedSyncMode:]
-[ISDRecordStore setSqliteCacheSize:]
-[ISyncConcreteSession _supportedEntityNamesIsEqualToEntityNames:forClient:]
-[ISyncConcreteSession _clientIsKnownToSyncAllSupportedEntities:]
-[ISDSqliteChangeStore removeAllChangesForEntityNames:]
-[ISDSqliteChangeStoreDatabase _removeAllChangesForEntityNames:processed:]
-[ISDRecordStore removeRecordsForEntityNames:]
-[ISDRecordStore removeRecordsForEntityNames:nullifyReferencesToRemovedRecords:]
-[ISDDataDatabase recordIdsForEntityNames:]
-[ISDDataDatabase enumerateRecordIdsForEntityNames:ignoreDeletedRecords:asArgumentsToFunction:context:]
__handleRecordIdInStatement
-[ISDRecordIdMapper removeMappingsForEntityNames:]
-[ISDSqliteRecordIdMapper removeMappingsForEntityNames:truth:]
-[ISDRecordIdMapper removeMappingsForEntityNames:truth:]
-[ISDRecordIdMapDatabase removeMappingsForEntityNames:]
-[ISDSqliteChangeStore dropIndexes]
-[ISDSqliteChangeStoreDatabase dropIndexes]
-[ISDRecordIdMapper globalIdForLocalIdUsingConstructedIdMap:]
-[ISDRecordIdMapper globalIdFromConstructedLocalId:]
-[ISDIdMapDatabase getMappingForLocalId:]
+[ISDStructuredDelta changeByApplyingChange:toChange:]
-[ISyncConcreteSession _pushDeleteForRecordWithGlobalId:]
-[ISDRecordIdMapper noteUnresolvedPhantomWithGlobalId:]
-[ISDRecordIdMapper noteUnresolvedPhantomWithGlobalId:forLocalId:]
-[ISDSqliteRecordIdMapper removeMappingForGlobalId:]
-[ISDRecordIdMapper removeMappingForGlobalId:]
-[ISDRecordIdMapDatabase removeMappingForGlobalId:]
-[ISDChangeBuilder setIsPushingTruth:]
-[ISDChangePusher createArrayOfFormattedTuples:unformattedTuples:byCombiningNewRecordIds:withOldTuples:oldUnformattedTuples:relationshipIsToMany:builder:]
-[ISyncConcreteSession setRelationshipPropChanges:forEntity:relationshipName:forRecordId:]
-[ISyncConcreteSession getInfoForRelationship:ofEntity:]
-[RelationshipInformation initWithName:forEntity:inSession:]
-[ISDEntity idNumber]
-[ISyncConcreteSession knownRecordTypes]
-[RelationshipInformation setReferencesToCheck:forRecord:]
-[ISDGlobalId isd_quickDirtyCoderType]
-[ISDQuickDirtyCoder encodeGlobalId:]
-[ISDGlobalId encodeWithQuickDirtyCoder:]
-[ISDQuickDirtyCoder encodeBytes:ofLength:]
-[NSURL(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[ISDQuickDirtyCoder encodeURL:]
-[ISDSqliteChangeStore recreateIndexes]
-[ISDSqliteChangeStoreDatabase recreateIndexes]
_createRecordStoreIndexes
-[ISDSqliteChangeStore(ChangeStoreBaseRollingLegacyMethods) clearSpuriousUnresolvedReferencesToPhantomsInIdMapper:]
-[ISDRecordIdMapper unresolvedPhantoms]
-[ISDSqliteChangeStore(Helpers) changeExistsWhichReferencesRecordWithId:]
-[ISDSqliteChangeStore(Helpers) changeExistsWhichReferencesRecordWithId:referringChanges:]
-[ISDSqliteChangeStoreDatabase _enumerateChangesWithReferencesToId:function:context:]
-[ISDRecordIdMapper unresolvedReferences]
-[RelationshipInformation allUnknownReferences]
-[RelationshipInformation validateReferences:]
-[ISyncConcreteSession _vacuumClientState]
-[ISDClientState vacuum]
-[ISDSqliteRecordIdMapper vacuum]
-[ISDRecordIdMapper vacuum]
-[ISDRecordStore vacuum]
+[NSKeyedArchiver(isd_Convenience) archivedDataWithRootObject:delegate:]
+[ISDKeyedArchiverHelperToRemoveSyncStates helper]
-[ISDKeyedArchiverHelperToRemoveSyncStates archiver:willEncodeObject:]
+[ISDAdminDatabase createDatabaseAtPath:]
-[ISDAdminDatabase ensureRecentTablesPresent]
-[ISDAdminDatabase initWithDatabaseAtPath:dataManager:]
-[ISDAdminDatabase init]
-[ISDAdminDatabase initializeIVars]
-[ISDAdminDatabase finalizeStatements]
-[ISDAdminDatabase closeDatabase]
-[ISDAdminDatabase dealloc]
-[ISDAdminDatabase finalize]
-[ISDAdminDatabase setDataManager:]
-[ISDAdminDatabase executeSQLToUpdateOrInsertSyncState:]
-[ISDAdminDatabase executeSQLToRemoveSyncStatesForClient:]
-[ISDAdminDatabase executeSQLToRemoveSyncStatesForEntity:]
-[ISDAdminDatabase executeSQLToFetchSyncStatesForClient:]
-[ISDAdminDatabase executeSQLToUpdateOrInsertClient:]
-[ISDAdminDatabase executeSQLToRemoveClient:]
-[ISDAdminDatabase executeSQLToFetchClientsByIdentifier]
-[ISDAdminDatabase executeSQLToUpdateSyncGeneration:]
-[ISDAdminDatabase executeSQLToFetchSyncGeneration]
-[ISDAdminDatabase beginTransaction]
-[ISDAdminDatabase commitTransaction:]
-[ISDAdminDatabase commitTransaction]
-[ISDAdminDatabase rollbackTransaction:]
-[ISDAdminDatabase rollbackTransaction]
-[ISDAdminDatabase _releaseAdminDBLockIfNecessary]
-[ISDAdminDatabase readClients:syncGeneration:]
-[ISDAdminDatabase updateClient:]
-[ISDAdminDatabase addClient:]
-[ISDAdminDatabase removeClient:]
-[ISDAdminDatabase updateSyncState:]
-[ISDAdminDatabase removeSyncStateForEntity:]
-[ISDAdminDatabase setSyncGeneration:]
-[ISDAdminDatabase freeEarliestSyncGenerationsForEntityNamesMapping:]
-[ISDAdminDatabase createSyncDatesForClientsEarlierThanDate:]
-[ISDAdminDatabase earliestSyncGenerationMappings]
_newEarliestSyncGenerationForEntityNamesMapping
-[ISDAdminDatabase recordClientSyncModes:forClient:inSyncPlan:]
-[ISDAdminDatabase expectedSyncMode:]
-[ISDAdminDatabase recordSyncPlanInformation:]
___46-[ISDAdminDatabase recordSyncPlanInformation:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISDAdminDatabase purgeSyncPlanDetailBefore:]
___46-[ISDAdminDatabase purgeSyncPlanDetailBefore:]_block_invoke
___copy_helper_block_361
___destroy_helper_block_362
-[DataMgrBasedNameNumberProvider manager]
-[DataMgrBasedNameNumberProvider foundMappingForNewName:inMap:]
-[DataMgrBasedNameNumberProvider initWithDataManager:]
-[ISDDataManager initWithDataDirectory:]
-[ISDDataManager dataVersionIsTigerOrOlder]
-[ISDDataManager dataVersionIsLeopard]
+[ISDDataManager setDataVersionIsPreNameNumber:]
-[ISDDataManager rememberIfDataVersionIsPreNameNumber]
-[ISDDataManager loadAdminDatabase]
-[ISDDataManager loadAdminDatabaseWithoutNotifications]
-[ISDDataManager dealloc]
-[ISDDataManager _updateDataClassNamesToClientIdentifiers:forClient:]
-[ISDDataManager _updateListOfClientsThatSyncWithOtherClients]
___62-[ISDDataManager _updateListOfClientsThatSyncWithOtherClients]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISDDataManager writeSchemasArchive]
-[ISDDataManager updateMetadataAndPostChangeNotifications]
-[ISDDataManager unarchiver:didDecodeObject:]
-[ISDDataManager assignNameNumberMappings:]
-[ISDDataManager refreshNameNumberProvider:]
-[ISDDataManager readSchemasArchive]
-[ISDDataManager nameNumberProvider]
-[ISDDataManager readObjectGraph]
-[ISDDataManager disableFlush]
-[ISDDataManager enableFlush]
-[ISDDataManager rollback]
-[ISDDataManager _releaseAdminDBLockIfNecessary]
-[ISDDataManager recordSyncPlanInformation:]
-[ISDDataManager anchor]
-[ISDDataManager setShouldBumpAnchorOnNextChange:]
-[ISDDataManager bumpAnchor]
-[ISDDataManager noteChangesFromClient:key:value:]
-[ISDDataManager noteChangesFromFileReference:key:value:]
-[ISDDataManager noteChangesFromSchema:key:value:]
-[ISDDataManager noteChangesFromDataClass:key:value:]
-[ISDDataManager noteChangesFromEntity:key:value:]
-[ISDDataManager noteChangesFromSyncState:key:value:]
-[ISDDataManager replacementObjectForObject:]
-[ISDDataManager fileReferenceWithPath:bundleId:bundleRelativePath:]
-[ISDDataManager fileReferenceWithPath:bundleId:bundleRelativePath:windowsBinRelativePath:]
-[ISDDataManager dataDirectory]
-[ISDDataManager dataDirectoryForClientWithIdentifier:]
-[ISDDataManager allClients]
-[ISDDataManager allClientIdentifiers]
-[ISDDataManager clientIdentifiersThatSyncEntityNamesForMingler:]
___65-[ISDDataManager clientIdentifiersThatSyncEntityNamesForMingler:]_block_invoke
___copy_helper_block_318
___destroy_helper_block_319
-[ISDDataManager clientsSyncingEntityNames:]
___44-[ISDDataManager clientsSyncingEntityNames:]_block_invoke
___copy_helper_block_322
___destroy_helper_block_323
-[ISDDataManager clientWithIdentifier:]
-[ISDDataManager _replaceFileReferenceInObject:forKey:withPath:bundleId:bundleRelativePath:binRelativePath:]
-[ISDDataManager _replaceFileReferenceInObject:forKey:withPath:bundleId:bundleRelativePath:]
-[ISDDataManager _replaceFileReferenceInObject:forKey:withPath:relativeToAnchorFilePath:bundleId:bundleRelativePath:]
-[ISDDataManager _ensureDataDirectoryExistsForClientWithId:]
-[ISDDataManager _ensureTruthDirectoryExistsForDataclassNamed:]
-[ISDDataManager _removeDataDirectoryForClientWithId:]
-[ISDDataManager _updateSyncAlertToolForClient:fromDescription:]
-[ISDDataManager _updateSyncStatesForClient:fromDescription:forceRefresh:]
___74-[ISDDataManager _updateSyncStatesForClient:fromDescription:forceRefresh:]_block_invoke
___copy_helper_block_437
___destroy_helper_block_438
-[ISDDataManager _updatePullOnlyEntitiesForClient:fromDescription:]
-[ISDDataManager _updatePushOnlyEntitiesForClient:fromDescription:]
-[ISDDataManager latestGenerationForEntitiesNamed:]
-[ISDDataManager _updateClientInfoForClient:fromDescription:]
-[ISDDataManager _shouldValidateClient:]
-[ISDDataManager _isInvalidClient:]
-[ISDDataManager _unregisterInvalidatedClientsRegisteredForEntities:usingHelper:]
-[ISDDataManager _validateClient:]
-[ISDDataManager _updateClient:fromDescription:forceRefresh:]
-[ISDDataManager shouldParseDescriptionForObject:withDescriptionFilePath:descriptionBundleId:descriptionBundleRelativePath:descriptionBinRelativePath:updateFileReference:]
-[ISDDataManager shouldReparseDescriptionFileForObject:]
-[ISDDataManager _validateClientDescriptionFilesAndUnregisterIfNecessary]
-[ISDDataManager updateClientIfDescriptionFileChanged:]
-[ISDDataManager registerClientWithIdentifier:description:descriptionFilePath:descriptionBundleId:descriptionBundleRelativePath:descriptionBinRelativePath:wasChanged:]
-[ISDDataManager unregisterClientWithIdentifier:]
-[ISDDataManager shouldSyncClient:withClient:entityNames:]
-[ISDDataManager clientsToAlertForClient:entityNames:]
___54-[ISDDataManager clientsToAlertForClient:entityNames:]_block_invoke
___copy_helper_block_660
___destroy_helper_block_661
-[ISDDataManager shouldSyncClient:forEntityNames:]
-[ISDDataManager entitiesWithDataClassName:]
-[ISDDataManager dataclassNamesForEntitiesWithNames:]
-[ISDDataManager _entityNamesToDataclassNames:]
-[ISDDataManager entityNamesToTruthSegmentNames:]
-[ISDDataManager dataClassNamesForEntities:]
-[ISDDataManager entitiesIncludingRelatedEntities:]
-[ISDDataManager computeConservativeClosureOfEntityNames:]
-[ISDDataManager computeClosureOfEntityNames:includeReferringEntities:]
-[ISDDataManager dataClasses]
-[ISDDataManager dataClassWithName:]
-[ISDDataManager entities]
-[ISDDataManager entitiesMapping]
-[ISDDataManager entityWithName:]
-[ISDDataManager schemas]
-[ISDDataManager schemaWithName:]
-[ISDDataManager schemaNameForDataclass:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___41-[ISDDataManager schemaNameForDataclass:]_block_invoke
___copy_helper_block_670
___destroy_helper_block_671
-[ISDDataManager schemaDefiningEntityComponentWithExtensionName:entityName:]
___76-[ISDDataManager schemaDefiningEntityComponentWithExtensionName:entityName:]_block_invoke
___copy_helper_block_676
___destroy_helper_block_677
-[ISDDataManager _validateUndefinedObjectsInParsedSchemas:schemaBundlePath:]
-[ISDDataManager _dataClassNameFromStubEntity:]
-[ISDDataManager _validateNoCrossDataClassRelationshipsInParsedSchemas:schemaBundlePath:]
-[ISDDataManager _validateExtensionNameSuppliedInParsedSchemas:schemaBundlePath:]
-[ISDDataManager _validateParsedSchemas:schemaBundlePath:]
-[ISDDataManager _applyChangesFromDataClassesFromSchema:]
-[ISDDataManager _applyChangesFromEntityComponentsFromSchema:]
-[ISDDataManager _applyChangesFromSchemas:]
-[ISDDataManager _whackDeletedDataClasses:]
-[ISDDataManager _whackDeletedEntityComponents:]
-[ISDDataManager _getEntityComponentsDeleted:modified:incompatiblyModified:inParsedSchemas:]
-[ISDDataManager _getDataClassesDeleted:dataClassesAdded:inParsedSchemas:]
-[ISDDataManager _shouldUpdateSyncStateForClient:entityName:]
-[ISDDataManager _updateClientSyncStatesForModifiedEntities:incompatiblyModifiedEntities:]
___90-[ISDDataManager _updateClientSyncStatesForModifiedEntities:incompatiblyModifiedEntities:]_block_invoke
___copy_helper_block_761
___destroy_helper_block_762
-[ISDDataManager _entityNamesSetFromEntities:]
-[ISDDataManager _removeSyncStates:forClient:]
-[ISDDataManager _processChangesForSchemas:ecDeletions:ecModifications:ecIncompatibleModifications:dcDeletions:helper:]
___119-[ISDDataManager _processChangesForSchemas:ecDeletions:ecModifications:ecIncompatibleModifications:dcDeletions:helper:]_block_invoke
___copy_helper_block_779
___destroy_helper_block_780
-[ISDDataManager registerSchemaWithDescription:descriptionFilePath:helper:linkedOnTiger:]
-[ISDDataManager _ensureTruthDatabasesExistForDataclasses:andNoteDeletedDataclasses:]
-[ISDDataManager registerSchemaWithDescription:descriptionFilePath:bundlePath:helper:linkedOnTiger:]
-[ISDDataManager unregisterSchemaWithName:helper:]
-[ISDDataManager syncGeneration]
-[ISDDataManager nextSyncGeneration]
-[ISDDataManager _recoveryTempFileInfo]
-[ISDDataManager noteSyncServicesDirectoryNeedsToBeReset]
-[ISDDataManager noteSyncServicesDirectoryNeedsToBeResetRemovingAdminDB:]
-[ISDDataManager _clearClientStateForClientWithDirectory:]
-[ISDDataManager removeTruthSegmentDatabasesInDirectory:usingFileManager:]
-[ISDDataManager createTruthSegmentsIfNecessaryInDirectory:usingFileManager:]
-[ISDDataManager resetSyncDataIncludingClientsAndSchemas:]
-[ISDDataManager purgeDeletedRecordsAndTuplesInTruth:]
-[ISDDataManager purgeDeletedRecordsAndTuplesInTruth]
-[ISDDataManager resetSyncData]
-[ISDDataManager resetSyncHistory]
-[ISDDataManager resetSyncModesForClientWithIdentifier:]
-[ISDDataManager probeTruthAndAdminDatabasesForStaleLocksAndRepairIfNecessary]
-[ISDDataManager probeClientDatabasesForStaleLocksAndRepairIfNecessary]
-[ISDDataManager checkForInconsistentResetDataStateAndRepairIfNeeded]
-[ISDDataManager checkForInconsistentRunningStateAndRepairIfNeeded]
-[ISDDataManager resetSyncModesForAllClientsSyncingEntities:]
-[ISDDataManager resetClientWithIdentifier:]
-[ISDDataManager syncDatesForClientsEarlierThanDate:]
-[ISDDataManager resetClientsWithLastSyncDatesEarlierThanDate:purgeTruth:andVacuum:]
-[ISDDataManager shouldWriteSchemasArchiveToDisk]
-[ISDDataManager setShouldWriteSchemasArchiveToDisk:]
-[ISDDataManager purgeSyncPlanDetailBefore:]
+[ISDSchema initialize]
-[ISDSchema initWithName:bundleRef:]
-[ISDSchema initWithCoder:]
-[ISDSchema encodeWithCoder:]
-[ISDSchema dealloc]
-[ISDSchema description]
-[ISDSchema anchorChildren]
-[ISDSchema morphInToObject:]
-[ISDSchema name]
-[ISDSchema bundleRef]
-[ISDSchema setBundleRef:]
-[ISDSchema bundle]
-[ISDSchema descriptionFile]
-[ISDSchema setDescriptionFile:]
-[ISDSchema dataClasses]
-[ISDSchema setDataClasses:]
-[ISDSchema dataClassWithName:]
-[ISDSchema entityComponents]
-[ISDSchema setEntityComponents:]
-[ISDSchema entityComponentWithExtensionName:entityName:]
-[ISDSchema validatorClassName]
-[ISDSchema setValidatorClassName:]
-[ISDSchema conflictResolverClassName]
-[ISDSchema setConflictResolverClassName:]
-[ISDSchema uiHelperClassName]
-[ISDSchema conflictUIHelperClassName]
-[ISDSchema setUIHelperClassName:]
-[ISDSchemaParser initWithExistingEntities:andDataclasses:]
-[ISDSchemaParser dealloc]
-[ISDSchemaParser _dataClassWithName:create:]
-[ISDSchemaParser _entityWithName:create:]
-[ISDSchemaParser _relationshipWithName:forEntity:create:]
-[ISDSchemaParser _schemaWithName:create:bundleRef:]
-[ISDSchemaParser _setHasDefinition:forObject:]
-[ISDSchemaParser _findVersionEntryForSchema:inVersionInfo:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___60-[ISDSchemaParser _findVersionEntryForSchema:inVersionInfo:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISDSchemaParser _setVersionInformation:forObject:isExtension:]
-[ISDSchemaParser schemas]
-[ISDSchemaParser dataClasses]
-[ISDSchemaParser entities]
-[ISDSchemaParser undefinedObjects]
-[ISDSchemaParser _dataClassNameForManagedObjectEntity:inSchema:]
-[ISDSchemaParser _fullyQualifiedNameForManagedObjectEntity:inSchema:]
-[ISDSchemaParser _isCoreDataEntitySyncable:inSchema:]
-[ISDSchemaParser _isCoreDataPropertySyncable:inSchema:]
-[ISDSchemaParser _syncAttributeTypeFromCoreDataAttributeType:]
-[ISDSchemaParser _syncDeleteRuleFromCoreDataDeleteRule:]
-[ISDSchemaParser _newUserInfoForCoreDataEntity:schema:]
-[ISDSchemaParser _identityPropertyNamesSetFromCoreDataEntity:]
-[ISDSchemaParser _parseDataClassesInDescription:schema:versionInfo:]
-[ISDSchemaParser _parseDataClassesInManagedObjectModel:schema:versionInfo:]
-[ISDSchemaParser _validateTypeSimply:]
-[ISDSchemaParser _validateType:subtype:enumValues:]
-[ISDSchemaParser _validatePreferredClientTypes:]
-[ISDSchemaParser _propertyIsRequiredInDescription:propertyName:withEntityComponent:]
-[ISDSchemaParser _parseAttributesInDescription:component:schema:]
-[ISDSchemaParser _parseAttributesInCoreDataEntity:component:userInfo:schema:]
___78-[ISDSchemaParser _parseAttributesInCoreDataEntity:component:userInfo:schema:]_block_invoke
___copy_helper_block_276
___destroy_helper_block_277
-[ISDSchemaParser _relationshipTargetsInDescription:withComponent:]
-[ISDSchemaParser _relationshipDeleteRuleInDescription:withComponent:]
-[ISDSchemaParser _relationshipOrderingInDescription:withComponent:]
-[ISDSchemaParser _relationshipIsToManyInDescription:withComponent:]
-[ISDSchemaParser _relationshipIsMatchableInDescription:withComponent:]
-[ISDSchemaParser _newRelationshipInDescription:component:schema:]
-[ISDSchemaParser _parseRelationshipsInDescription:component:schema:]
-[ISDSchemaParser _addEntitiesForCoreDataEntityAndChildren:toArray:schema:]
-[ISDSchemaParser _parseRelationshipsInCoreDataEntity:component:userInfo:schema:]
___81-[ISDSchemaParser _parseRelationshipsInCoreDataEntity:component:userInfo:schema:]_block_invoke
___copy_helper_block_397
___destroy_helper_block_398
-[ISDSchemaParser _findInverseRelationshipForDefinition:entity:]
-[ISDSchemaParser _parseInverseRelationshipsInRelationshipDescription:forRelationship:entity:]
-[ISDSchemaParser _parseInverseRelationshipsInDescription:schema:]
-[ISDSchemaParser _parseInverseRelationshipsInCoreDataRelationship:forEntity:]
-[ISDSchemaParser _parseInverseRelationshipsInManagedObjectModel:schema:]
___73-[ISDSchemaParser _parseInverseRelationshipsInManagedObjectModel:schema:]_block_invoke
___73-[ISDSchemaParser _parseInverseRelationshipsInManagedObjectModel:schema:]_block_invoke_2
___copy_helper_block_453
___destroy_helper_block_454
___copy_helper_block_457
___destroy_helper_block_458
-[ISDSchemaParser _parseDependenciesInDescription:component:]
-[ISDSchemaParser _parseDependenciesInCoreDataEntity:component:userInfo:schema:]
-[ISDSchemaParser _parseIdentityKeysInDescription:component:]
-[ISDSchemaParser _validateParentRelationshipInEntityComponent:parentName:]
-[ISDSchemaParser _newEntityInDescription:schema:versionInfo:]
-[ISDSchemaParser _newEntityFromCoreDataEntity:inManagedObjectModel:schema:versionInfo:]
-[ISDSchemaParser _mergedManagedObjectModelsInDescription:schema:]
-[ISDSchemaParser _parseEntitiesInManagedObjectModel:schema:versionInfo:]
___73-[ISDSchemaParser _parseEntitiesInManagedObjectModel:schema:versionInfo:]_block_invoke
___copy_helper_block_572
___destroy_helper_block_573
-[ISDSchemaParser _parseEntitiesInDescription:schema:versionInfo:]
-[ISDSchemaParser _parseFileReferencesInDescription:schema:]
-[ISDSchemaParser _parseManagedObjectModelsInDescription:schema:versionInfo:]
-[ISDSchemaParser _ensureDescriptionComponent:hasNoUnknownKeysForComponentType:parentEntity:]
-[ISDSchemaParser parseDescription:linkedOnTiger:]
-[ISDSchemaParser parseDescription:bundleRef:linkedOnTiger:]
-[ISDSyncPlan initWithDataManager:delegate:]
-[ISDSyncPlan setWatchdog:]
-[ISDSyncPlan watchdog]
-[ISDSyncPlan setMinglerProcess:]
-[ISDSyncPlan minglerProcess]
-[ISDSyncPlan setMinglerException:]
-[ISDSyncPlan description]
-[ISDSyncPlan fastPlanIdentifier]
-[ISDSyncPlan createDate]
-[ISDSyncPlan startDate]
-[ISDSyncPlan endDate]
-[ISDSyncPlan syncPhase]
-[ISDSyncPlan generation]
-[ISDSyncPlan _syncingClientIdentifiers]
-[ISDSyncPlan entityNamesSet]
_createEntityNamesSetForParticipants
-[ISDSyncPlan participantEntityNames:usingEntityNames:]
-[ISDSyncPlan _mingledEntityNamesSet]
-[ISDSyncPlan isSyncingAnyEntityWithNameInSet:]
-[ISDSyncPlan computeClosureOfEntityNamesBeingMingled]
-[ISDSyncPlan _postNotificationWithObject:entityNames:timeStamp:syncPlanStatus:]
-[ISDSyncPlan notifyObserversAboutPushingStart]
-[ISDSyncPlan notifyObserversAboutMinglingStart]
-[ISDSyncPlan notifyObserversAboutPullingStart]
-[ISDSyncPlan notifyObserversAboutPlanEnd:]
-[ISDSyncPlan notifyObserversAboutPlanCancellationStart:]
-[ISDSyncPlan notifyObserversAboutPlanCancellation:]
-[ISDSyncPlan notifyObserversAboutRemovedParticipant:]
-[ISDSyncPlan _setRecoverySyncModesForParticipantFromNegotiatedSyncStates:]
-[ISDSyncPlan _updateRecoverySyncModesForParticipantAfterPushing:]
-[ISDSyncPlan _updateSyncModesForAllParticipantsAfterMingling]
-[ISDSyncPlan _updateSyncModesForAllClientsAfterCatestrophicMinglerFailure:]
-[ISDSyncPlan _updateSyncModesForParticipant:afterFinishing:]
-[ISDSyncPlan participants]
-[ISDSyncPlan fastParticipants]
-[ISDSyncPlan pendingParticipants]
-[ISDSyncPlan participantWithClientId:]
-[ISDSyncPlan canAcceptMoreParticipants]
-[ISDSyncPlan addParticipant:]
-[ISDSyncPlan _participantsSyncPhase]
-[ISDSyncPlan _removeParticipant:didFinishSyncing:notifyClient:reason:]
-[ISDSyncPlan _shouldCancelPlanForRemovedParticipant:didFinishSyncing:]
-[ISDSyncPlan removeParticipant:didFinishSyncing:notifyClient:reason:]
-[ISDSyncPlan clientWithIdentifierWasRemovedFromPlan:]
-[ISDSyncPlan forgetThatClientWithIdentifierWasRemovedFromPlan:]
-[ISDSyncPlan cancelledClients]
-[ISDSyncPlan recordNegotiatedModes:forClientId:]
-[ISDSyncPlan negotiatedClientModes]
-[ISDSyncPlan canStartSyncing]
-[ISDSyncPlan canStartMingling]
-[ISDSyncPlan _contestingTruthPushersForEntityName:]
-[ISDSyncPlan _negotiateTruthPushingForParticipant:]
-[ISDSyncPlan _computeUnpushedEntitiesToReset]
-[ISDSyncPlan makeSureTruthPushersAreNegotiated]
___48-[ISDSyncPlan makeSureTruthPushersAreNegotiated]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISDSyncPlan doneNegotiatingTruthPushers:]
___43-[ISDSyncPlan doneNegotiatingTruthPushers:]_block_invoke
___copy_helper_block_263
___destroy_helper_block_264
___43-[ISDSyncPlan doneNegotiatingTruthPushers:]_block_invoke267
___copy_helper_block_268
___destroy_helper_block_269
-[ISDSyncPlan resetPushersForCancelledPlan]
___43-[ISDSyncPlan resetPushersForCancelledPlan]_block_invoke
__cleanupCancelledPusherSyncState
___43-[ISDSyncPlan resetPushersForCancelledPlan]_block_invoke_2
-[ISDSyncPlan isSyncing]
-[ISDSyncPlan isMingling]
-[ISDSyncPlan isBeforeMingling]
-[ISDSyncPlan isPullOnly]
-[ISDSyncPlan setIsPullOnly:]
-[ISDSyncPlan isOneShotPlan]
-[ISDSyncPlan setIsOneShotPlan:]
-[ISDSyncPlan isSyncAfterPlan]
-[ISDSyncPlan setIsSyncAfterPlan:]
-[ISDSyncPlan skipSyncAfterClients]
-[ISDSyncPlan setSkipSyncAfterClients:]
-[ISDSyncPlan participantRequiresMingle]
-[ISDSyncPlan setParticipantRequiresMingle:]
-[ISDSyncPlan _notifyParticipantToBeginSyncing:truthPullers:]
-[ISDSyncPlan _prepareToSyncParticipant:]
-[ISDSyncPlan startSyncing]
-[ISDSyncPlan _removeAllParticipants:]
-[ISDSyncPlan finishSyncing]
-[ISDSyncPlan cancelMinglerProcessWaitUntil:]
-[ISDSyncPlan cancelSyncing:]
-[ISDSyncPlan isCancelled]
-[ISDSyncPlan setIsCancelled:]
-[ISDSyncPlan startMingling]
-[ISDSyncPlan _minglerProcessDied:]
-[ISDSyncPlan startMinglerProcess]
-[ISDSyncPlan _buildEntityNamesForDatabaseRebuildNoticeForEntityNames:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___71-[ISDSyncPlan _buildEntityNamesForDatabaseRebuildNoticeForEntityNames:]_block_invoke
___copy_helper_block_489
___destroy_helper_block_490
-[ISDSyncPlan _whackTruthAndBarf:clientIds:]
-[ISDSyncPlan _didFinishMingling]
-[ISDSyncPlan _skipMingling]
-[ISDSyncPlan startPullingChanges]
-[ISDSyncPlan _shouldTransitionToPushingPhase]
-[ISDSyncPlan _removeAllPendingParticipants]
-[ISDSyncPlan participantWantsToBeginRightNow:]
-[ISDSyncPlan participantDidBeginPushingChanges:negotiatedSyncStates:]
-[ISDSyncPlan participantDidEndPushingChanges:]
-[ISDSyncPlan(GrownSupport) clientIdentifiersInPlan]
-[ISDSyncPlan(GrownSupport) performGrowlNotification:title:msgFormat:]
-[ISDSyncPlan(EncoderMethods) replacementObjectForPortCoder:]
-[ISDSyncPlan(EncoderMethods) encodeWithCoder:]
____createEntityNameToDataclassNameMap_block_invoke
___copy_helper_block_820
___destroy_helper_block_821
-[ISDSyncParticipant description]
-[ISDSyncParticipant syncPhase]
-[ISDSyncParticipant setSyncPhase:]
-[ISDSyncParticipant entityNames]
-[ISDSyncParticipant setEntityNames:]
-[ISDSyncParticipant clearSyncStates]
-[ISDSyncParticipant setSyncMode:forEntityName:]
-[ISDSyncParticipant setTransientSyncMode:forEntityName:]
-[ISDSyncParticipant entityNamesHavingTruthPulled]
-[ISDSyncParticipant removeTransientSyncModeForEntityName:]
-[ISDSyncParticipant setApprovedToPushTruth:forEntityName:]
-[ISDSyncParticipant isApprovedToPushTruthForEntityName:]
-[ISDSyncParticipant callbackTarget]
-[ISDSyncParticipant setCallbackTarget:]
-[ISDSyncParticipant alerted]
-[ISDSyncParticipant setAlerted:]
-[ISDSyncParticipant responseDate]
-[ISDSyncParticipant setResponseDate:]
-[ISDSyncParticipant(EncoderMethods) replacementObjectForPortCoder:]
-[ISDSyncParticipant(EncoderMethods) encodeWithCoder:]
-[ISDEntityComponent initWithExtensionName:entity:]
-[ISDEntityComponent initWithCoder:]
-[ISDEntityComponent encodeWithCoder:]
-[ISDEntityComponent dealloc]
-[ISDEntityComponent description]
-[ISDEntityComponent hash]
-[ISDEntityComponent isCompatibleExtensionOf:]
-[ISDEntityComponent isEqual:]
-[ISDEntityComponent _updatePropertiesFromComponent:forKey:didChange:]
-[ISDEntityComponent morphInToObject:]
-[ISDEntityComponent extensionName]
-[ISDEntityComponent mainEntity]
-[ISDEntityComponent setMainEntity:]
-[ISDEntityComponent attributes]
-[ISDEntityComponent setAttributes:]
-[ISDEntityComponent relationships]
-[ISDEntityComponent setRelationships:]
-[ISDEntityComponent propertyNames]
-[ISDEntityComponent attributeWithName:]
-[ISDEntityComponent relationshipWithName:]
-[ISDEntityComponent propertyWithName:]
-[ISDEntityComponent mainEntityName]
+[NSException(ISDFriendlyException) _isdFriendlyExceptionsIsEnabled]
-[NSException(ISDFriendlyException) _friendlyInitWithName:reason:userInfo:]
-[NSException(ISDFriendlyException) _friendlyRaise]
-[NSException(ISDNSErrorConversion) _isdErrorWithCode:domain:]
+[ISDException initialize]
+[ISDException exceptionWithName:reason:userInfo:]
+[ISDException exceptionWithName:reason:userInfo:logStackTraceMode:]
+[ISDException exceptionWithName:reason:userInfo:logStackTraceMode:logReasonOnly:]
-[ISDException initWithName:reason:userInfo:]
-[ISDException initWithName:reason:userInfo:logStackTraceMode:]
-[ISDException initWithName:reason:userInfo:logStackTraceMode:logReasonOnly:]
+[ISDException raise:format:]
-[ISDException raise]
+[ISDException setLogStackTraceOnException:]
+[ISDException logStackTraceOnException]
-[ISDException setLogStackTraceOnException:]
-[ISDException logStackTraceOnException]
+[ISDException _logStackTraceWithExceptionName:reason:]
+[ISDException _logStackTraceWithExceptionReason:]
+[NSMachPort(NSMachBootstrapServerExtensions) checkinForName:]
-[ISDSyncManager initWithDataManager:]
-[ISDSyncManager setSyncServerName:]
-[ISDSyncManager setDataDirectory:]
-[ISDSyncManager syncServerName]
-[ISDSyncManager dataDirectory]
-[ISDSyncManager dealloc]
-[ISDSyncManager _validateEntityNames:]
-[ISDSyncManager _validateClientHasRegisteredToSync:entityNames:]
-[ISDSyncManager _validateClientCanSync:]
-[ISDSyncManager _validateClientCanPushTruth:forEntityNames:]
-[ISDSyncManager _validateEntityNames:areSubsetOfEntityNames:]
-[ISDSyncManager _validateClient:entityNames:truth:]
-[ISDSyncManager _sendDynamicSyncAlertToClient:forPlan:entityNames:getShouldTryAlertTool:]
-[ISDSyncManager _syncAlertToolDied:]
-[ISDSyncManager _launchSyncAlertToolForClient:forPlan:entityNames:shouldUnregisterClient:]
-[ISDSyncManager _sendSyncAlertToClient:forPlan:entityNames:shouldUnregisterClient:]
-[ISDSyncManager _alertAnyUnalertedClients]
-[ISDSyncManager _noteSyncAfterParticipant:usingEntityNames:forPlan:]
-[ISDSyncManager _addSyncAlertsForClient:plan:]
-[ISDSyncManager _getSyncPlan:participant:forClient:]
-[ISDSyncManager _createSyncPlan:]
-[ISDSyncManager _bestSyncPlanForClient:entityNames:skip:]
-[ISDSyncManager _addClient:entityNames:toPlan:alertOtherClients:]
-[ISDSyncManager allSyncPlans]
-[ISDSyncManager numberOfSyncPlans]
-[ISDSyncManager syncPlanWithIdentifier:]
-[ISDSyncManager _sanitizeClientEntityNames:]
-[ISDSyncManager addClients:toSyncPlan:entityNames:]
-[ISDSyncManager setOneShotSyncGroupWithClients:entityNames:]
-[ISDSyncManager addClients:toSyncPlanWithIdentifier:]
-[ISDSyncManager scheduleClient:beforeDate:entityNames:pushingTruthForEntityNames:quietlyPushingTruth:callbackTarget:hasChanges:skip:]
-[ISDSyncManager removeClient:fromSpecificSyncPlan:didFinishSyncing:notifyClient:reason:]
-[ISDSyncManager removeClient:fromPendingSyncPlans:fromRunningSyncPlans:didFinishSyncing:notifyClient:reason:]
-[ISDSyncManager cancelSyncPlansInvolvingEntityNames:]
-[ISDSyncManager cancelAllSyncPlans]
-[ISDSyncManager _canStartSyncingPlan:]
-[ISDSyncManager _canStartMinglingPlan:]
-[ISDSyncManager _cleanupPlan:]
-[ISDSyncManager lastSyncDate]
-[ISDSyncManager _cancelSyncingPlan:reason:]
-[ISDSyncManager _finishSyncingPlan:]
-[ISDSyncManager _cancelSyncPlan:reason:doCleanupPlan:doScheduleNextReadySyncPlan:]
-[ISDSyncManager cancelSyncPlan:]
-[ISDSyncManager _startSyncingPlan:]
-[ISDSyncManager _reallyAddSyncJob:]
-[ISDSyncManager addSyncJobWithTarget:selector:object:canRunWithRunningSyncPlans:shouldRunBeforePendingSyncPlans:]
-[ISDSyncManager _reallyResetSyncData:]
_ISDLogAlways
-[ISDSyncManager resetSyncData]
-[ISDSyncManager reallyResetSyncData]
-[ISDSyncManager exclusiveSyncJobIsRunning]
-[ISDSyncManager pendingJobs]
-[ISDSyncManager _reallyCleanupFinishedJob:]
-[ISDSyncManager _cleanupFinishedJob:]
-[ISDSyncManager runJobInThread:]
-[ISDSyncManager _reallyScheduleNextReadyJob]
-[ISDSyncManager _setIsKillable:]
-[ISDSyncManager _reallyScheduleSyncsAfterParticipant]
-[ISDSyncManager _cleanPlansOfLaggardClients]
-[ISDSyncManager _reallyScheduleNextReadySyncPlan:]
-[ISDSyncManager _reallyScheduleNextReadySyncPlan]
-[ISDSyncManager _scheduleNextReadySyncPlan]
-[ISDSyncManager client:wantsToBeginSyncPlanRightNow:]
-[ISDSyncManager client:didBeginPushingChangesInSyncPlan:negotiatedSyncStates:]
-[ISDSyncManager client:didEndPushingChangesInSyncPlan:hasChanges:]
-[ISDSyncManager syncPlanDidFinishMingling:]
-[ISDSyncManager syncPlanIsMingling:hasChanges:]
-[ISDSyncManager _cancelSyncPlanWaitingForNegotiation:reason:]
-[ISDSyncManager _userNegotiatedSyncPlan:]
-[ISDSyncManager _syncPlanTimedOutWaitingForNegotiation:]
-[ISDSyncManager _askUserInterfaceToNegotiatePlan:]
___51-[ISDSyncManager _askUserInterfaceToNegotiatePlan:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___51-[ISDSyncManager _askUserInterfaceToNegotiatePlan:]_block_invoke727
___copy_helper_block_734
___destroy_helper_block_735
___51-[ISDSyncManager _askUserInterfaceToNegotiatePlan:]_block_invoke754
___copy_helper_block_755
___destroy_helper_block_756
-[ISDSyncManager syncPlanNeedsNegotiation:uncontestedPushers:confusedTruthPushers:contestedTruthPushers:]
-[ISDSyncManager _handleWatchdog:]
+[ISDSyncManager(GrowlSupport) performGrowlRegistration]
-[ISDSyncJob initWithTarget:selector:object:]
-[ISDSyncJob description]
-[ISDSyncJob dealloc]
-[ISDSyncJob canRunWithRunningSyncPlans]
-[ISDSyncJob setCanRunWithRunningSyncPlans:]
-[ISDSyncJob shouldRunBeforePendingSyncPlans]
-[ISDSyncJob setShouldRunBeforePendingSyncPlans:]
-[ISDSyncJob isRunning]
-[ISDSyncJob run]
-[ISDSyncJob setJobIsRunning:]
-[ServerBasedNameNumberProvider initWithDataManager:]
-[ServerBasedNameNumberProvider saveMappingsFor:]
-[ServerBasedNameNumberProvider saveMappings]
+[ISDServerFileLockerDelegate instance]
-[ISDServerFileLockerDelegate fileLocker:actionForApparentlyAbandonedLock:onAttempt:]
-[ISDServerFileLockerDelegate fileLocker:lockWasStolen:]
+[ISDServer initialize]
+[ISDServer defaultServer]
-[ISDServer setFileLocker:]
-[ISDServer init]
-[ISDServer dealloc]
-[ISDServer setDataManager:]
-[ISDServer dataManager]
-[ISDServer setSyncManager:]
-[ISDServer isPrivateInstance]
-[ISDServer setIsPrivateInstance:]
-[ISDServer isSyncServerAvailable:]
-[ISDServer removeLockFile]
-[ISDServer pingFromClientWithIdentifier:withPlanIdentifier:]
-[ISDServer serverPID]
-[ISDServer _vacuum]
-[ISDServer sayGoodnightGracie]
-[ISDServer _sayGoodnightGracieSkippingVacuum:]
_ISDLogAlways
-[ISDServer resetSyncModesForClientWithIdentifier:]
-[ISDServer resetClientWithIdentifier:]
-[ISDServer detectedDataDirectoryCorruption]
-[ISDServer _resetEntityNamesAndSetAllClientsToRefresh:]
__deleteDataWrapper
-[ISDServer resetEntityNamesAndSetAllClientsToRefresh:]
-[ISDServer fileLockWasStolen]
-[ISDServer setTimerRefreshDate:]
-[ISDServer setCalendarRequestPort:]
-[ISDServer startWatchdog]
-[ISDServer stopWatchdog]
-[ISDServer refreshWatchdogTimer]
-[ISDServer setTimeIntervalToWaitBeforeDying:]
-[ISDServer _timeToDie:]
-[ISDServer _refreshLockFile:]
-[ISDServer clientsWithIdentifiers:modifiedSinceAnchor:]
-[ISDServer registerClientWithIdentifier:description:descriptionFilePath:descriptionBundleId:descriptionBundleRelativePath:descriptionBinRelativePath:]
-[ISDServer registerClientWithIdentifier:description:descriptionFilePath:descriptionBundleId:descriptionBundleRelativePath:]
-[ISDServer unregisterClientWithIdentifier:]
-[ISDServer allClients]
-[ISDServer latestGenerationForEntitiesNamed:]
-[ISDServer setUseLocalIdsForGUIDs:forClientWithIdentifier:]
-[ISDServer setNeverFormatsRelationships:forClientWithIdentifier:]
-[ISDServer setDisplayName:forClientWithIdentifier:]
-[ISDServer setImagePath:bundleId:bundleRelativePath:forClientWithIdentifier:]
-[ISDServer setSyncAlertToolPath:bundleId:bundleRelativePath:forClientWithIdentifier:]
-[ISDServer setHasDynamicSyncAlertHandler:forClientWithIdentifier:]
-[ISDServer setEnabled:forEntityNames:forClientWithIdentifier:]
-[ISDServer setShouldReplaceClientRecords:forEntityNames:forClientWithIdentifier:]
-[ISDServer setSyncMode:forEntityNames:forClientWithIdentifier:]
-[ISDServer setShouldSynchronize:withClientsOfType:forClientWithIdentifier:]
-[ISDServer setSyncsAfterClients:forClientWithIdentifier:]
-[ISDServer setTrackRecordModificationTimes:forClientWithIdentifier:]
-[ISDServer filterDataForClientWithIdentifier:]
-[ISDServer setFilterData:filteredEntityNames:forClientWithIdentifier:]
-[ISDServer validateClientDescriptionFilesAndUnregisterIfNecessary]
-[ISDServer schemaDataModifiedSinceAnchor:dataClassesNamed:entitiesNamed:]
___74-[ISDServer schemaDataModifiedSinceAnchor:dataClassesNamed:entitiesNamed:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISDServer cancelSyncPlansInvolvingEntityNames:]
-[ISDServer registerSchemaWithDescription:descriptionFilePath:linkedOnTiger:]
-[ISDServer registerSchemaWithDescription:descriptionFilePath:bundlePath:linkedOnTiger:]
-[ISDServer _autoregisterSystemSchemaWithPath:]
-[ISDServer autoregisterSystemSchemas]
-[ISDServer autoregisterDefaultClients]
-[ISDServer unregisterSchemaWithName:]
-[ISDServer schemaNameForDataclass:]
-[ISDServer _startMonitoringConnectionForProxy:clientId:]
-[ISDServer _stopMonitoringConnectionForClientId:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___50-[ISDServer _stopMonitoringConnectionForClientId:]_block_invoke
___copy_helper_block_660
___destroy_helper_block_661
-[ISDServer _lostClientConnection:]
-[ISDServer clientWithId:wantsToBeginSyncPlanBeforeDate:entityNames:pushTruthForEntityNames:quietlyPushingTruth:callback:withPlanIdentifier:hasChanges:skip:]
-[ISDServer mingler:hasStartedMinglingPlanWithIdentifier:]
-[ISDServer minglerHasFinishedMinglingPlanWithIdentifier:exception:]
-[ISDServer mingleForPlanCanceled:]
-[ISDServer getServerNameNumberMappings]
-[ISDServer clientWithId:wantsToBeginSyncPlanRightNow:]
-[ISDServer clientNumberForClient:]
-[ISDServer clientWithId:didBeginPushingChangesInSyncPlan:negotiatedSyncStates:]
-[ISDServer clientWithId:didEndPushingChangesInSyncPlan:hasChanges:]
-[ISDServer clientWithId:didEndSyncPlan:finishedSyncing:]
-[ISDServer setOneShotSyncGroupWithClientIdentifiers:entityNames:]
-[ISDServer addClients:toSyncPlanWithIdentifier:]
-[ISDServer syncServerStatistics]
-[ISDServer dictionaryWithInfoForSyncPlan:]
-[ISDServer allSyncPlans]
-[ISDServer syncPlanWithIdentifier:]
-[ISDServer _reallyCancelSyncSessionForPlanWithIdentifier:]
-[ISDServer cancelSyncSessionForPlanWithIdentifier:]
-[ISDServer killConnection:]
-[ISDServer _resetSyncData]
-[ISDServer _reallyResetSyncData]
-[ISDServer _syncDatesForClientsEarlierThanDate:]
-[ISDServer _resetClientsWithLastSyncDatesEarlierThanDate:purgeTruth:andVacuum:]
-[ISDServer detectedSyncAnchorMismatch:forClient:]
-[ISDServer _cleanupUIHandlerConnection:]
-[ISDServer _uiHandlerDied:]
-[ISDServer uiHandler]
-[ISDServer handleMachMessage:]
+[ISDDisabledServer defaultServer]
-[ISDDisabledServer isSyncServerAvailable:]
-[ISDDisabledServer removeLockFile]
-[ISDDisabledServer sayGoodnightGracie]
-[ISDDisabledServer detectedDataDirectoryCorruption]
-[ISDDisabledServer resetEntityNamesAndSetAllClientsToRefresh:]
-[ISDDisabledServer schemaDataModifiedSinceAnchor:dataClassesNamed:entitiesNamed:]
-[ISDDisabledServer registerSchemaWithDescription:descriptionFilePath:]
-[ISDDisabledServer registerSchemaWithDescription:descriptionFilePath:bundlePath:]
-[ISDDisabledServer unregisterSchemaWithName:]
-[ISDDisabledServer schemaNameForDataclass:]
-[ISDDisabledServer allClients]
-[ISDDisabledServer clientsWithIdentifiers:modifiedSinceAnchor:]
-[ISDDisabledServer registerClientWithIdentifier:description:descriptionFilePath:]
-[ISDDisabledServer unregisterClientWithIdentifier:]
-[ISDDisabledServer setDisplayName:forClientWithIdentifier:]
-[ISDDisabledServer setUseLocalIdsForGUIDs:forClientWithIdentifier:]
-[ISDDisabledServer setImagePath:bundleId:bundleRelativePath:forClientWithIdentifier:]
-[ISDDisabledServer setSyncAlertToolPath:bundleId:bundleRelativePath:forClientWithIdentifier:]
-[ISDDisabledServer setHasDynamicSyncAlertHandler:forClientWithIdentifier:]
-[ISDDisabledServer setEnabled:forEntityNames:forClientWithIdentifier:]
-[ISDDisabledServer setShouldReplaceClientRecords:forEntityNames:forClientWithIdentifier:]
-[ISDDisabledServer setSyncMode:forEntityNames:forClientWithIdentifier:]
-[ISDDisabledServer setShouldSynchronize:withClientsOfType:forClientWithIdentifier:]
-[ISDDisabledServer filterDataForClientWithIdentifier:]
-[ISDDisabledServer setFilterData:filteredEntityNames:forClientWithIdentifier:]
-[ISDDisabledServer _resetSyncData]
-[ISDDisabledServer _reallyResetSyncData]
-[ISDDisabledServer clientWithId:wantsToBeginSyncPlanBeforeDate:entityNames:pushTruthForEntityNames:quietlyPushingTruth:callback:withPlanIdentifier:hasChanges:skip:]
-[ISDDisabledServer clientWithId:wantsToBeginSyncPlanRightNow:]
-[ISDDisabledServer clientWithId:didBeginPushingChangesInSyncPlan:negotiatedSyncStates:]
-[ISDDisabledServer clientWithId:didEndPushingChangesInSyncPlan:]
-[ISDDisabledServer clientWithId:didEndSyncPlan:finishedSyncing:]
-[ISDDisabledServer syncServerStatistics]
-[ISDDisabledServer allSyncPlans]
-[ISDDisabledServer syncPlanWithIdentifier:]
-[ISDDisabledServer cancelSyncSessionForPlanWithIdentifier:]
-[ISDDisabledServer killConnection:]
-[ISDDisabledServer setOneShotSyncGroupWithClientIdentifiers:entityNames:]
-[ISDDisabledServer addClients:toSyncPlanWithIdentifier:]
-[ISDDisabledServer dataManager]
-[ISDDisabledServer setDataManager:]
-[ISDDisabledServer setSyncManager:]
-[ISDDisabledServer autoregisterSystemSchemas]
-[ISDDisabledServer autoregisterDefaultClients]
-[SyncClientNameNumberProvider dealloc]
-[SyncClientNameNumberProvider allowNonPersistentCreation]
-[SyncClientNameNumberProvider canCreateNewMapping]
-[SyncClientNameNumberProvider manager]
-[SyncClientNameNumberProvider foundMappingForNewName:inMap:]
-[ISyncConcreteManager _cancelNotifies]
__cancelNotify
-[ISyncConcreteManager _resetNotifies]
-[ISyncConcreteManager _cleanupCyclicReferences]
-[ISyncConcreteManager dealloc]
-[ISyncConcreteManager finalize]
-[ISyncConcreteManager _invalidateClient:]
_ISDLogAlways
-[ISyncConcreteManager registerClientWithIdentifier:description:]
-[ISyncConcreteManager registerClientWithIdentifier:descriptionBundleId:descriptionBundleRelativePath:]
-[ISyncConcreteManager unregisterClient:]
-[ISyncConcreteManager setDisplayName:forClient:]
-[ISyncConcreteManager setUseLocalIdsForGUIDs:forClient:]
-[ISyncConcreteManager setNeverFormatsRelationships:forClient:]
-[ISyncConcreteManager _setImagePath:bundleId:bundleRelativePath:forClient:]
-[ISyncConcreteManager setImagePath:forClient:]
-[ISyncConcreteManager setImageBundleId:bundleRelativePath:forClient:]
-[ISyncConcreteManager setEnabled:forEntityNames:forClient:]
-[ISyncConcreteManager setShouldReplaceClientRecords:forEntityNames:forClient:]
-[ISyncConcreteManager setFilterData:filteredEntityNames:forClient:]
-[ISyncConcreteManager allClients]
-[ISyncConcreteManager _newDataclassNamesForClient:]
-[ISyncConcreteManager clientsSyncingDataclasses]
-[ISyncConcreteManager _registerSchemaWithDescription:descriptionFilePath:]
-[ISyncConcreteManager _registerSchemaWithDescription:descriptionFilePath:bundlePath:]
-[ISyncConcreteManager registerSchemaWithDescription:]
-[ISyncConcreteManager registerSchemaWithDescriptionFilePath:]
-[ISyncConcreteManager registerSchemaWithBundlePath:]
-[ISyncConcreteManager unregisterSchemaWithName:]
-[ISyncConcreteManager schemaNameForDataclass:]
-[ISyncConcreteManager clientWithIdentifier:needsSyncing:]
-[ISyncConcreteManager _getIdNumberForEntityNamed:]
-[ISyncConcreteManager versionInformationForEntityNamed:]
-[ISyncConcreteManager entityNamesInDataClassNames:]
-[ISyncConcreteManager entityWithNameHasPropertiesWithLastModifiedResolutionPolicy:]
-[ISyncConcreteManager parentNameForEntityName:]
-[ISyncConcreteManager identityKeysForEntityName:withRecord:]
-[ISyncConcreteManager identityKeysForEntityName:]
-[ISyncConcreteManager attributeNamesOnEntityName:]
-[ISyncConcreteManager subtypeForPropertyName:onEntityName:]
-[ISyncConcreteManager enumValuesForPropertyName:onEntityName:]
-[ISyncConcreteManager displayNameForEnumValue:forAttributeName:onEntityName:]
-[ISyncConcreteManager relationshipOrderingForRelationshipName:onEntityName:]
-[ISyncConcreteManager targetTypesForRelationshipName:onEntityName:]
-[ISyncConcreteManager inverseRelationshipNamesForSourceEntityName:relationshipName:targetEntityName:]
-[ISyncConcreteManager allDataClassNames]
-[ISyncConcreteManager singularDisplayNameForDataClassName:]
-[ISyncConcreteManager categoryForDataClassName:]
-[ISyncConcreteManager sessionWantsToBeginRightNow:]
-[ISyncConcreteManager latestGenerationForEntitiesNamed:]
-[ISyncConcreteManager _setSyncAlertToolPath:bundleId:bundleRelativePath:forClient:]
-[ISyncConcreteManager setSyncAlertToolPath:forClient:]
-[ISyncConcreteManager setSyncAlertToolBundleId:bundleRelativePath:forClient:]
-[ISyncConcreteManager setTrackRecordModificationTimes:forClient:]
-[ISyncConcreteManager _registerSyncAlertConnection:forClientWithIdentifier:]
-[ISyncConcreteManager _removeSyncAlertConnection:forClientWithIdentifier:notifyServer:]
-[ISyncConcreteManager _removeAllSyncAlertHandlers:]
-[ISyncConcreteManager _addAllSyncAlertHandlersToRunLoopMode:]
-[ISyncConcreteManager addRequestMode:]
-[ISyncConcreteManager _removeAllSyncAlertHandlersFromRunLoopMode:]
-[ISyncConcreteManager removeRequestMode:]
-[ISyncConcreteManager requestModes]
-[ISyncConcreteManager setSyncAlertHandler:selector:forClient:notifyServer:]
-[ISyncConcreteManager _setRemoveClientFromSyncPlanIfClientDoesntBeginSession]
-[ISyncConcreteManager _fireLocalSyncAlertAfterDelay:]
-[ISyncConcreteManager fireLocalSyncAlertForClientWithIdentifier:syncPlan:entityNames:]
-[ISyncConcreteManager setOneShotSyncGroupWithClients:]
-[ISyncConcreteManager setOneShotSyncGroupWithClients:entityNames:]
-[ISyncConcreteManager addClients:toSyncPlanWithIdentifier:]
-[ISyncConcreteManager applySyncPlanInfo:toSyncPlan:]
-[ISyncConcreteManager _stopObservingSyncPlan:]
-[ISyncConcreteManager stopObservingSyncPlan:]
-[ISyncConcreteManager syncPlanWithIdentifier:infoDictionary:]
-[ISyncConcreteManager syncPlanWithIdentifier:]
-[ISyncConcreteManager fetchChangesToSyncPlan:]
-[ISyncConcreteManager allSyncPlans]
-[ISyncConcreteManager cancelSyncPlan:]
-[ISyncConcreteManager resetSyncData]
-[ISyncConcreteManager reallyResetSyncData]
-[ISyncConcreteManager resetClientsWithLastSyncDatesEarlierThanDate:purgeTruth:andVacuum:]
-[ISyncConcreteManager syncDatesForClientsEarlierThanDate:]
-[ISyncConcreteManager _launchServer]
-[ISyncConcreteManager _cleanupWhenSyncServerLostNoLock]
-[ISyncConcreteManager _cleanupWhenSyncServerLost]
-[ISyncConcreteManager _disconnectFromServer:]
-[ISyncConcreteManager _theDamnThingDied:]
-[ISyncConcreteManager _cleanupServerConnection:]
-[ISyncConcreteManager _invokeMethodOnServer:]
-[ISyncConcreteManager _performSelectorOnServer:]
-[ISyncConcreteManager _performSelectorOnServer:withArg:withArg:withArg:withArg:]
-[ISyncConcreteManager _performSelectorOnServer:withArg:withArg:withArg:withArg:withArg:withArg:]
-[ISyncConcreteManager _performSelectorOnServer:withArg:withArg:withArg:withArg:withArg:withArg:withArg:]
-[ISyncConcreteManager _performSelectorOnServer:withArg:withArg:withArg:withArg:withArg:withArg:withArg:withArg:]
-[ISyncConcreteManager shutDownSyncServerMach]
-[ISyncConcreteManager shutDownSyncServer]
-[ISyncConcreteManager tellServerDetectedDataDirectoryCorruption]
-[ISyncConcreteManager tellServerDetectedSyncAnchorMismatch:forClient:]
-[ISyncConcreteManager tellServerResetClientWithIdentifier:]
-[ISyncConcreteManager resetEntityNamesAndSetAllClientsToRefresh:]
-[ISyncConcreteManager _registerAllClientSyncAlertConnectionsToServer]
-[ISyncConcreteManager isAvailable:]
-[ISyncConcreteManager removeServerLock]
-[ISyncConcreteManager syncDisabledReason]
-[ISyncConcreteManager setEnabled:]
-[ISyncConcreteManager addRunLoopMode:]
-[ISyncConcreteManager removeRunLoopMode:]
-[ISyncConcreteManager _setSyncServerName:dataDirectoryPath:]
-[ISyncConcreteManager _setDataReferencesDirectory:]
-[ISyncConcreteManager snapshotOfRecordsInTruthWithEntityNames:usingIdentifiersForClient:]
-[ISyncConcreteManager viewOfRecordsApplyingConflictsForClientWithIdentifier:]
-[ISyncConcreteManager pushTruthFromClient:forEntityNames:]
-[ISyncConcreteManager setSyncMode:forEntityNames:forClientWithIdentifier:]
-[ISyncConcreteManager syncServerStatistics]
-[ISyncConcreteManager isAirbagEnabled]
-[ISyncConcreteManager setAirbagEnabled:]
-[ISyncConcreteManager setAirbagThreshold:]
-[ISyncConcreteManager resolvedConflictCountWithEntityNames:]
-[ISyncConcreteManager refreshNameNumberProvider:]
-[ISyncConcreteManager nameNumberProvider]
__releaseISyncRecordSnapshotTable
+[ISyncManager getThreadISyncRecordSnapshotTable]
+[ISyncManager setSyncServerName:dataDirectoryPath:]
+[ISyncManager setDataReferencesDirectory:]
+[ISyncManager dataWrapperThresholdSize]
-[ISyncManager isEnabled]
-[ISyncManager syncDisabledReason]
-[ISyncManager clientWithIdentifier:]
-[ISyncManager registerClientWithIdentifier:description:]
-[ISyncManager registerClientWithIdentifier:descriptionFilePath:]
-[ISyncManager unregisterClient:]
-[ISyncManager registerSchemaWithDescriptionFilePath:]
-[ISyncManager registerSchemaWithBundlePath:]
-[ISyncManager unregisterSchemaWithName:]
-[ISyncManager clientWithIdentifier:needsSyncing:]
-[ISyncManager snapshotOfRecordsInTruthWithEntityNames:usingIdentifiersForClient:]
-[ISyncManager resetSyncData]
-[ISyncManager resetClientsWithLastSyncDatesEarlierThanDate:purgeTruth:andVacuum:]
-[ISyncManager syncDatesForClientsEarlierThanDate:]
-[ISyncManager addRequestMode:]
-[ISyncManager removeRequestMode:]
-[ISyncManager requestModes]
-[RelationshipInformation dealloc]
-[RelationshipInformation _relationshipName]
-[RelationshipInformation _entityName]
-[RelationshipInformation _referencesToCheck]
__ISyncRecordPreconditionFailed
-[ISDChangeEnumerator dealloc]
-[ISDFiltratorThingy dealloc]
-[ISDFiltratorThingy relationshipNamesReferringToEntityNamed:]
-[ISDFiltratorThingy noteFilteredChangeForRecord:isNowFiltered:]
__noteFilteredRecordInfo
-[ISDFiltratorThingy cascadeTargetsFromRecord:forceRemove:]
__addRecordIdToFilterReject
-[ISDFiltratorThingy _markToRefilterRecordsReferringToRecordWithId:]
-[ISyncConcreteSession attentionClassDumpUser:reverseEngineeringThisClassAndCallingPrivateMethodsIsFunButMayLeadToCompleteAndIrrevocableDataLoss:atTheVeryLeastItWillCauseUnexpectedBehaviourForOtherApplications:youHaveBeenWarnedAgainstDoingSo:]
-[ISyncConcreteSession setApplyPushedChanges:]
-[ISyncConcreteSession _doFinalCleanupIfNeeded:]
-[ISyncConcreteSession dealloc]
-[ISyncConcreteSession finalize]
-[ISyncConcreteSession _cleanupClientAfterFailedAttemptToBeginSession]
-[ISyncConcreteSession _syncPhase]
-[ISyncConcreteSession _truthPullingClients]
-[ISyncConcreteSession _setAnchorSlowSyncEntities:]
-[ISyncConcreteSession _setAnchorRefreshSyncEntities:]
-[ISyncConcreteSession _findRecordInCacheWithId:]
-[ISyncConcreteSession anchorPhase]
-[ISyncConcreteSession setAnchorPhase:]
-[ISyncConcreteSession setPendingNextAnchors:]
-[ISyncConcreteSession setSyncStates:]
-[ISyncConcreteSession _newEntitiesMapping]
-[ISyncConcreteSession _recordIdMapper]
-[ISyncConcreteSession _releaseSnapshot]
-[ISyncConcreteSession _replaceRecordIdentifier:withRecordIdentifier:inSet:]
-[ISyncConcreteSession _updateGlobalRecordIdentifiers:inRecordDictionaries:]
-[ISyncConcreteSession _updateGlobalRecordIdentifiers:inKnownTargetsMap:]
-[ISyncConcreteSession _entityDescriptionForChange:]
-[ISyncConcreteSession _updateGlobalRecordIdentifiers:inChanges:]
-[ISyncConcreteSession _updateGlobalRecordIdentifiers:inRecords:]
-[ISyncConcreteSession _updateRecordStoresWithNewGlobalIdentifiers:]
-[ISyncConcreteSession _updateRecordStoresWithNewLocalIdentifiers:]
-[ISyncConcreteSession _updateRecordIdMapperWithNewLocalIdentifiers:]
___63-[ISyncConcreteSession _convertUnresolvedReferencesToGlobalIds]_block_invoke
_ISDLogAlways
___copy_helper_block_
___destroy_helper_block_
-[ISyncConcreteSession clientChangedRecordIdentifiers:]
-[ISyncConcreteSession clientInfoForRecordWithIdentifier:]
-[ISyncConcreteSession setClientInfo:forRecordWithIdentifier:]
-[ISyncConcreteSession snapshotOfRecordsInTruth]
-[ISyncConcreteSession clientLostRecordWithIdentifier:shouldReplaceOnNextSync:]
__processLostRecordId
__processReplacementRecordId
-[ISyncConcreteSession _enterPullingDirectly]
-[ISyncConcreteSession _clientDidResetEntityNames:]
-[ISyncConcreteSession clientDidResetEntityNames:]
-[ISyncConcreteSession _noteRecordWithDataReferenceWasFormatted:]
-[ISyncConcreteSession _recordWithDataReferenceWasFormatted:]
-[ISyncConcreteSession _raiseAndResetEntities:reason:]
-[ISyncConcreteSession _processDeletedRecords:]
__appendChangeFromRecordheaderToChangeStore
-[ISyncConcreteSession _pushChangesFromRecord:withGlobalId:]
-[ISyncConcreteSession unresolvedReferencesAreForUnknownTypes:]
-[ISyncConcreteSession notifyUserOfUnresolvedReferences:onlyUnknownTypeReferences:]
-[ISyncConcreteSession notePushingOfUnknownPropertyNamed:forEntityNamed:inChange:]
-[ISyncConcreteSession notePushingOfUnknownEntityNamed:forRecordWithIdentifier:]
-[ISyncConcreteSession _validatePushedRecord:againstEntity:]
-[ISyncConcreteSession _rollbackPushingPhase]
-[ISyncConcreteSession _logUnresolvedReferencesInconsistency]
-[ISyncConcreteSession setPushCacheSize:]
-[ISyncConcreteSession _resetClientAfterException:]
-[ISyncConcreteSession pushChangesFromRecord:withIdentifier:]
-[ISyncConcreteSession pushChangesFromRecord:withIdentifier:withDefaultedPropertyValues:]
-[ISyncConcreteSession deleteRecordWithIdentifier:]
-[ISyncConcreteSession clientFinishedPushingChangesWithNextAnchors:]
-[ISyncConcreteSession prepareToPullChangesInBackgroundForEntityNames:target:selector:]
-[ISyncConcreteSession _setKeepAwayFromServerForRecordWithId:ofType:]
-[ISyncConcreteSession clientRefusedChangesForRecordWithIdentifier:]
-[ISyncConcreteSession _snapshot:willReturnRecordToClient:]
-[ISyncConcreteSession _processRejectedClientRecord:rejectedRecordIds:acceptedRecordIds:]
-[ISyncConcreteSession clientCommittedAcceptedChangesWithNextAnchors:]
-[ISyncConcreteSession _enterCancelled]
-[ISyncConcreteSession _setPendingCancel]
-[ISyncConcreteSession cancelSyncing:notifyServer:pendingCancel:]
-[ISyncConcreteSession cancelSyncing:]
-[ISyncConcreteSession cancelSyncing]
-[ISyncConcreteSession setPushedChangesObserver:]
-[ISyncConcreteSession isRunning]
-[ISyncConcreteSession sessionWasCancelledForClientWithIdentifier:reason:userInfo:]
-[ISyncConcreteSession sessionWasCancelledForClientWithIdentifier:reason:]
-[ISDInstrumentedEnumerator initWithCallHistory:enumerator:]
-[ISDInstrumentedEnumerator dealloc]
-[ISDInstrumentedEnumerator nextObject]
-[ISDInstrumentedEnumerator allObjects]
-[ISyncInstrumentedSession initWithClient:entityNames:]
-[ISyncInstrumentedSession dealloc]
-[ISyncInstrumentedSession clientDidResetEntityNames:]
-[ISyncInstrumentedSession clientWantsToPushAllRecordsForEntityNames:]
-[ISyncInstrumentedSession shouldPushChangesForEntityName:]
-[ISyncInstrumentedSession shouldPushAllRecordsForEntityName:]
-[ISyncInstrumentedSession shouldPullChangesForEntityName:]
-[ISyncInstrumentedSession shouldReplaceAllRecordsOnClientForEntityName:]
-[ISyncInstrumentedSession pushChange:]
-[ISyncInstrumentedSession pushChangesFromRecord:withIdentifier:]
-[ISyncInstrumentedSession deleteRecordWithIdentifier:]
-[ISyncInstrumentedSession clientLostRecordWithIdentifier:shouldReplaceOnNextSync:]
-[ISyncInstrumentedSession clientFinishedPushingChangesWithNextAnchors:]
-[ISyncInstrumentedSession prepareToPullChangesForEntityNames:beforeDate:]
-[ISyncInstrumentedSession prepareToPullChangesInBackgroundForEntityNames:target:selector:]
-[ISyncInstrumentedSession changeEnumeratorForEntityNames:]
-[ISyncInstrumentedSession clientAcceptedChangesForRecordWithIdentifier:formattedRecord:newRecordIdentifier:]
-[ISyncInstrumentedSession clientRefusedChangesForRecordWithIdentifier:]
-[ISyncInstrumentedSession clientCommittedAcceptedChanges]
-[ISyncInstrumentedSession clientCommittedAcceptedChangesWithNextAnchors:]
-[ISyncInstrumentedSession clientChangedRecordIdentifiers:]
-[ISyncInstrumentedSession _enterFinished]
-[ISyncInstrumentedSession finishSyncing]
-[ISyncInstrumentedSession cancelSyncing:]
-[ISyncInstrumentedSession _enterCancelled]
-[ISyncInstrumentedSession cancelSyncing]
-[ISyncInstrumentedSession clientInfoForRecordWithIdentifier:]
-[ISyncInstrumentedSession setClientInfo:forRecordWithIdentifier:]
-[ISyncInstrumentedSession snapshotOfRecordsInTruth]
+[ISyncSession client:hasPendingChangesForEntityNames:]
+[ISyncSession hasChangesForClient:entityNames:]
+[ISyncSession beginSessionWithClient:entityNames:beforeDate:lastAnchors:]
+[ISyncSession beginSessionWithClient:entityNames:beforeDate:clientHasTruthForEntityNames:]
+[ISyncSession beginSessionInBackgroundWithClient:entityNames:target:selector:]
+[ISyncSession beginSessionInBackgroundWithClient:entityNames:target:selector:lastAnchors:]
+[ISyncSession beginSessionWithClient:entityNames:beforeDate:hasChanges:error:]
+[ISyncSession beginSessionWithClient:entityNames:beforeDate:hasChanges:skipSyncAfterClients:error:]
+[ISyncSession beginSessionWithClient:entityNames:beforeDate:lastAnchors:hasChanges:error:]
+[ISyncSession beginSessionWithClient:entityNames:beforeDate:lastAnchors:hasChanges:skipSyncAfterClients:error:]
+[ISyncSession cancelPreviousBeginSessionWithClient:]
-[ISyncSession clientDidResetEntityNames:]
-[ISyncSession clientWantsToPushAllRecordsForEntityNames:]
-[ISyncSession shouldPushChangesForEntityName:]
-[ISyncSession shouldPushAllRecordsForEntityName:]
-[ISyncSession shouldPullChangesForEntityName:]
-[ISyncSession shouldReplaceAllRecordsOnClientForEntityName:]
-[ISyncSession pushChange:]
-[ISyncSession pushChangesFromRecord:withIdentifier:]
-[ISyncSession deleteRecordWithIdentifier:]
-[ISyncSession clientLostRecordWithIdentifier:shouldReplaceOnNextSync:]
-[ISyncSession clientFinishedPushingChangesWithNextAnchors:]
-[ISyncSession prepareToPullChangesForEntityNames:beforeDate:]
-[ISyncSession prepareToPullChangesInBackgroundForEntityNames:target:selector:]
-[ISyncSession changeEnumeratorForEntityNames:]
-[ISyncSession clientAcceptedChangesForRecordWithIdentifier:formattedRecord:newRecordIdentifier:]
-[ISyncSession clientAcceptedChangesForRecordWithIdentifier:formattedRecord:newRecordIdentifier:keepAwayFromServer:]
-[ISyncSession clientRefusedChangesForRecordWithIdentifier:]
-[ISyncSession clientCommittedAcceptedChanges]
-[ISyncSession clientCommittedAcceptedChangesWithNextAnchors:]
-[ISyncSession clientChangedRecordIdentifiers:]
-[ISyncSession isCancelled]
-[ISyncSession cancelSyncing]
-[ISyncSession finishSyncing]
-[ISyncSession clientInfoForRecordWithIdentifier:]
-[ISyncSession setClientInfo:forRecordWithIdentifier:]
-[ISyncSession snapshotOfRecordsInTruth]
-[ISyncSession ping]
-[ISyncSession addTargetNames:forEntityName:relationshipName:]
-[ISyncSession addTargetIds:forRecordId:relationshipName:]
-[ISyncSession setEntityName:forRecordId:]
-[ISyncConcreteChange initWithCoder:]
-[ISyncConcreteChange copyWithZone:]
-[ISyncConcreteChange dealloc]
-[ISyncConcreteChange encodeWithCoder:]
-[ISyncConcreteChange(PrivateAPI) _clientId]
-[ISyncConcreteChange(PrivateAPI) clientNumber]
-[ISyncConcreteChange(PrivateAPI) _setClientId:]
-[ISyncConcreteChange(PrivateAPI) _propertyChangeNames]
-[ISyncConcreteChange(PrivateAPI) setMinglerChange:]
-[ISyncConcreteChange(PrivateAPI) _minglerChange]
-[ISyncChange initWithChangeType:recordIdentifier:changes:]
-[ISyncChange copyWithZone:]
-[ISyncChange hash]
-[ISyncChange isEqual:]
-[ISyncChange type]
-[ISyncChange recordIdentifier]
-[ISyncChange entityName]
-[ISyncChange record]
-[ISyncChange changes]
-[ISyncConjunctionFilter _computeSupportedEntityNames]
-[ISyncConjunctionFilter initWithFilters:isAndConjunction:shouldApplyUnsupportedRecords:ignoreLocalRecords:]
-[ISyncConjunctionFilter initWithFilters:isAndConjunction:shouldApplyUnsupportedRecords:]
-[ISyncConjunctionFilter initWithCoder:]
-[ISyncConjunctionFilter encodeWithCoder:]
-[ISyncConjunctionFilter dealloc]
-[ISyncConjunctionFilter description]
-[ISyncConjunctionFilter isEqual:]
-[ISyncConjunctionFilter supportedEntityNames]
-[ISyncConjunctionFilter shouldApplyRecord:withRecordIdentifier:]
+[ISyncFilter filterMatchingAllFilters:]
+[ISyncFilter filterMatchingAllFilters:shouldApplyUnsupportedRecords:]
+[ISyncFilter filterMatchingAtLeastOneFilter:]
+[ISyncFilter filterMatchingAtLeastOneFilter:shouldApplyUnsupportedRecords:]
+[ISyncFilter filterRejectingLocalRecordsAndMatchingAllFilters:shouldApplyUnsupportedRecords:]
+[ISyncFilter filterAlwaysAcceptingRecordsWithEntityNames:]
-[ISyncSimplyIgnoreLocalsFilter dealloc]
-[ISyncSimplyIgnoreLocalsFilter isEqual:]
-[ISyncSimplyIgnoreLocalsFilter initWithCoder:]
-[ISyncSimplyIgnoreLocalsFilter encodeWithCoder:]
-[ISyncAlwaysAcceptFilter initWithEntityNames:]
-[ISyncAlwaysAcceptFilter dealloc]
-[ISyncAlwaysAcceptFilter isEqual:]
-[ISyncAlwaysAcceptFilter supportedEntityNames]
-[ISyncAlwaysAcceptFilter shouldApplyRecord:withRecordIdentifier:]
-[ISyncAlwaysAcceptFilter initWithCoder:]
-[ISyncAlwaysAcceptFilter encodeWithCoder:]
-[ISyncTCCAccessOperation start]
___32-[ISyncTCCAccessOperation start]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISyncTCCAccessOperation finish:]
-[ISyncTCCAccessOperation isConcurrent]
-[ISyncTCCAccessOperation isExecuting]
-[ISyncTCCAccessOperation isFinished]
-[ISyncTCCAccessOperation accessGranted]
____ISDSyncingEntitiesAllowed_block_invoke
___copy_helper_block_597
___destroy_helper_block_598
+[ISDSaveSyncServicesDirectoryCopyHandler fileManager:shouldProceedAfterError:]
-[ISyncConcreteClient dealloc]
-[ISyncConcreteClient description]
-[ISyncConcreteClient _logDirectoryPath]
-[ISyncConcreteClient invalidate]
-[ISyncConcreteClient _setClosureComputationIsDisabled:]
-[ISyncConcreteClient _closureComputationIsDisabled]
-[ISyncConcreteClient descriptionFile]
-[ISyncConcreteClient setDisplayName:]
-[ISyncConcreteClient imagePath]
-[ISyncConcreteClient idNumber]
-[ISyncConcreteClient setImagePath:]
-[ISyncConcreteClient setImageBundleId:bundleRelativePath:]
-[ISyncConcreteClient isClientFastSyncingAllEntitiesWithNames:]
-[ISyncConcreteClient canPushChangesForEntityName:]
-[ISyncConcreteClient canPullChangesForEntityName:]
-[ISyncConcreteClient lastSyncDate]
-[ISyncConcreteClient lastSyncGeneration:]
-[ISyncConcreteClient lastSyncDateForEntityName:]
-[ISyncConcreteClient lastSyncStatusForEntityName:]
-[ISyncConcreteClient isEnabledForEntityName:]
-[ISyncConcreteClient setEnabled:forEntityNames:]
-[ISyncConcreteClient setShouldReplaceClientRecords:forEntityNames:]
-[ISyncConcreteClient shouldPushTruthOnNextSyncForEntityName:]
-[ISyncConcreteClient unarchiver:cannotDecodeObjectOfClassName:originalClasses:]
-[ISyncConcreteClient _shouldReplaceOldFilters:withFilters:entityNamesToRefilter:]
-[ISyncConcreteClient _addRelatedEntitiesFilterIfNecessary:]
-[ISyncConcreteClient setFilters:]
-[ISyncConcreteClient shouldSynchronizeWithClientsOfType:]
-[ISyncConcreteClient syncAlertToolPath]
-[ISyncConcreteClient setSyncAlertToolPath:]
-[ISyncConcreteClient syncsAfterClients]
-[ISyncConcreteClient setTrackRecordModificationTimes:]
-[ISyncConcreteClient trackRecordModificationTimes]
-[ISyncConcreteClient setSyncAlertToolBundleId:bundleRelativePath:]
-[ISyncConcreteClient setSyncAlertHandler:selector:]
-[ISyncConcreteClient setUseLocalIdsForGUIDs:]
-[ISyncConcreteClient formatsRelationships]
-[ISyncConcreteClient setNeverFormatsRelationships:]
-[ISyncConcreteClient setFormatsRelationships:]
-[ISyncConcreteClient _reduceAnchorMapping:]
-[ISyncConcreteClient _saveAnchors:]
-[ISyncConcreteClient _compareAnchors:forEntityNames:entitiesToRefreshSync:entitiesToSlowSync:]
-[ISyncClient init]
-[ISyncClient clientIdentifier]
-[ISyncClient clientType]
-[ISyncClient displayName]
-[ISyncClient setDisplayName:]
-[ISyncClient imagePath]
-[ISyncClient setImagePath:]
-[ISyncClient supportedEntityNames]
-[ISyncClient canPushChangesForEntityName:]
-[ISyncClient canPullChangesForEntityName:]
-[ISyncClient lastSyncDate]
-[ISyncClient lastSyncGeneration]
-[ISyncClient lastSyncDateForEntityName:]
-[ISyncClient lastSyncStatusForEntityName:]
-[ISyncClient enabledEntityNames]
-[ISyncClient isEnabledForEntityName:]
-[ISyncClient setEnabled:forEntityNames:]
-[ISyncClient shouldReplaceClientRecordsForEntityName:]
-[ISyncClient setShouldReplaceClientRecords:forEntityNames:]
-[ISyncClient objectForKey:]
-[ISyncClient setObject:forKey:]
-[ISyncClient filters]
-[ISyncClient setFilters:]
-[ISyncClient shouldSynchronizeWithClientsOfType:]
-[ISyncClient setShouldSynchronize:withClientsOfType:]
-[ISyncClient syncsAfterClients]
-[ISyncClient setSyncsAfterClients:]
-[ISyncClient syncAlertToolPath]
-[ISyncClient idNumber]
-[ISyncClient setSyncAlertToolPath:]
-[ISyncClient setSyncAlertHandler:selector:]
-[ISyncClient setFormatsRelationships:]
-[ISyncClient formatsRelationships]
-[NSFileManager(FileAliases) isd_fileAliasForFileAtPath:]
-[NSFileManager(FileAliases) isd_pathForFileAlias:getNewAliasData:]
-[ISyncConcreteRecordSnapshot initWithTruthRecordStore:clientRecordIdMapper:entityNames:session:]
-[ISyncConcreteRecordSnapshot freeOSResources]
-[ISyncConcreteRecordSnapshot dealloc]
-[ISyncConcreteRecordSnapshot _globalIdForLocalId:]
-[ISyncConcreteRecordSnapshot _recordIdMapper]
-[ISyncConcreteRecordSnapshot _swapMapper:]
-[ISyncConcreteRecordSnapshot recordsWithIdentifiers:]
-[ISyncConcreteRecordSnapshot targetIdentifiersForRelationshipName:withSourceIdentifier:]
__addLocalIdForTargetRecordId
-[ISyncConcreteRecordSnapshot sourceIdentifiersForRelationshipName:withTargetIdentifier:]
-[ISyncConcreteRecordSnapshot recordsWithMatchingAttributes:useUnformattedValues:matchAll:]
__addRecordId
-[ISyncConcreteRecordSnapshot recordsWithMatchingAttributes:useUnformattedValues:]
-[ISyncConcreteRecordSnapshot recordsWithMatchingAttributes:]
-[ISyncConcreteRecordSnapshot recordStore]
-[ISyncRecordSnapshot recordsWithIdentifiers:]
-[ISyncRecordSnapshot targetIdentifiersForRelationshipName:withSourceIdentifier:]
-[ISyncRecordSnapshot sourceIdentifiersForRelationshipName:withTargetIdentifier:]
-[ISyncRecordSnapshot recordsWithMatchingAttributes:]
-[ISyncRecordSnapshot(ReallyPrivateAPI) recordsMatchingAllAttributes:]
-[ISyncRecordSnapshot(ReallyPrivateAPI) initWithTruthRecordStore:clientRecordIdMapper:entityNames:]
-[ISyncRecordSnapshot(ReallyPrivateAPI) initWithTruthRecordStore:clientRecordIdMapper:entityNames:session:]
-[ISyncRecordSnapshot(ReallyPrivateAPI) freeOSResources]
-[ISyncRecordSnapshot(ReallyPrivateAPI) recordsWithIdentifiers:useUnformattedValues:]
-[ISyncRecordSnapshot(ReallyPrivateAPI) recordStore]
+[ISDDataDatabase createDatabaseAtPath:]
__createRecordStoreIndices
-[ISDDataDatabase initWithDatabaseInDirectory:]
-[ISDDataDatabase dropIndexes]
-[ISDDataDatabase recreateIndexes]
-[ISDDataDatabase newDataWithPropertiesEncodedForSqlite:]
-[ISDDataDatabase removeAllRecordDataReferences]
-[ISDDataDatabase removeAllRecords]
-[ISDDataDatabase setPropertyValueNamed:toValue:forClient:inGeneration:forRecordsWithIdentifiers:]
-[ISDDataDatabase removeAttributes:andRelationships:forRecordsWithIdentifiers:]
-[ISDDataDatabase setRecordState:forRecordIds:]
-[ISDDataDatabase setToBeApplied:forRecordsWithEntityNames:]
-[ISDDataDatabase getRecordDataReferencesForRecordId:forPropertyName:]
-[ISDDataDatabase getRecordDataReferencesForRecordWithIdentifiers:]
__noteDataReferencesForRecordIds
-[ISDDataDatabase addRowidsToIndexSet:forRecordsWithIds:]
__addRowidToIndexSet
-[ISDDataDatabase recordIdsAddedAfterGeneration:forEntityWithName:fromAnyClientsExceptClientWithId:]
-[ISDDataDatabase enumerateRecordIdsWithDataReferencesForEntityNames:asArgumentsToFunction:context:]
-[ISDDataDatabase recordIdsInTruth:]
-[ISDDataDatabase recordIdsWithDataReferencesForEntityNames:]
-[ISDDataDatabase entityNumbersForRecords:]
__mapEntityNumberToRecordId
-[ISDDataDatabase replaceRelationshipTupleId:withRelationshipTupleId:]
__updateUnformattedTuples
-[ISDDataDatabase createDictionaryWithRecordsWithIdentifiers:]
_fastEnumerateOfRelationshipDispatch
-[ISDDataDatabase setLastChangedGeneration:forRecordIds:]
-[ISDDataDatabase haveAnyMatchingAttributes:inPropertyValues:]
-[ISDDataDatabase haveAllMatchingAttributes:inPropertyValues:]
-[ISDDataDatabase enumerateRecordIdsForRecordsWithMatchingAttributes:asArgumentsToFunction:context:]
-[ISDDataDatabase enumerateRecordIdsForRecordsWithMatchingAttributes:asArgumentsToFunction:context:matchAll:]
-[ISDDataDatabase enumerateRecordHeadersForRecordsWithIds:asArgumentsToFunction:context:]
-[ISDDataDatabase allRecordIdentifiers]
-[ISDDataDatabase toBeAppliedRecordCountForEntityNames:]
__getToBeAppliedCount
-[ISDDataDatabase latestGenerationForEntitiesNamed:]
__latestGenerationForEntitiesNamedCallback
-[ISDDataDatabase addEquivalentGlobalIds:forNativeGlobalId:]
-[ISDDataDatabase removeEquivalentGlobalsIdsForNativeGlobalId:]
-[ISDDataDatabase nativeGlobalIdForEquivalentId:]
-[ISDDataDatabase globalIdEquivalentsForNativeRecordId:]
-[ISDDataDatabase deleteStillBornRecords]
-[ISDDataDatabase purgeRecordsForEntitiesNamed:inGenerationsLessThan:]
__gatherRecordIdsToDelete
__gatherTupleRowidsToDelete
+[ISDDatabase defaultDatabasePath:]
-[ISDDatabase reopenDatabaseAtPath:]
-[ISDDatabase setTracingPrefix:]
-[ISDDatabase dirtyCoderDelegate]
-[ISDDatabase isDatabaseAvailableForWriting]
-[ISDDatabase isDatabaseAvailableForReading]
-[ISDDatabase _isDatabaseAvailableForMode:]
-[ISDDatabase beginExclusiveTransaction]
-[ISDDatabase rollbackTransaction]
-[ISDDatabase beginTransactionWithCallback:numberOfAttempts:interval:]
-[ISDDatabase beginImmediateTransactionWithCallback:numberOfAttempts:interval:]
-[ISDDatabase beginExclusiveTransactionWithCallback:numberOfAttempts:interval:]
-[ISDDatabase commitTransactionWithCallback:numberOfAttempts:interval:]
-[ISDDatabase rollbackTransactionWithCallback:numberOfAttempts:interval:]
-[ISDDatabase executeSQL:withCallback:context:]
-[ISDDatabase executeWithCallback:context:sql:]
+[ISDDatabase(SqliteHelpers) toggleSqlLogging]
-[ISDDatabase(SqliteHelpers) enableSqliteTracing:]
-[ISDDatabase(SqliteHelpers) disableSqliteTracing]
-[ISDDatabase(SqliteHelpers) executeWithCallback:context:rollbackOnError:sql:]
-[ISDDatabase(SqliteHelpers) executeWithBlob:length:format:]
-[ISDDatabase(SqliteHelpers) executeWithRollbackOnError:]
-[ISDDatabase(SqliteHelpers) raiseSQLiteInternalInconsistencyException:]
-[ISDDatabase(SqliteHelpers) raiseSQLiteExceptionWithName:format:]
-[ISDChange initWithCoder:]
-[ISDChange encodeWithCoder:]
-[ISDChange initWithQuickDirtyCoder:]
-[ISDChange encodeWithQuickDirtyCoder:]
-[ISDChange isd_quickDirtyCoderType]
-[ISDChange isEqual:]
-[ISDChange changeSourceIndex]
-[ISDChange setPropertyChanges:]
-[ISDChange setPropertyType:]
-[ISDChange setRecordId:]
-[ISDChange relationshipsWhichReferenceRecordWithId:entity:]
-[ISDChange enumeratePropertyChangesUsingBlock:]
-[ISDChange cleanupTuplesWithId:]
-[ISDChange replaceRelationshipTupleId:withRelationshipTupleId:]
-[ISDChange mergeGlobalIdEquivalents:]
-[ISDChange modificationDate]
-[ISDChange setModificationDate:]
-[ISDChange noteModificationDate:]
+[ISDPropertyChange propertyChangeWithAction:propertyType:name:value:lastModifiedGeneration:clientId:]
-[ISDPropertyChange initWithCoder:]
-[ISDPropertyChange encodeWithCoder:]
-[ISDPropertyChange _valuesAreEqual:]
-[ISDPropertyChange isEqual:]
-[ISDPropertyChange replaceRelationshipTupleId:withRelationshipTupleId:]
+[ISDChangeStore defaultFileName]
-[ISDChangeStore initWithPath:]
-[ISDChangeStore initWithDataDirectory:delegate:]
-[ISDChangeStore initWithDataDirectory:]
-[ISDChangeStore dealloc]
-[ISDChangeStore finalize]
-[ISDChangeStore resetState]
-[ISDChangeStore compact]
-[ISDChangeStore flush]
-[ISDChangeStore disableFlush]
-[ISDChangeStore disableFlushAndLockImmediately]
-[ISDChangeStore enableFlush]
-[ISDChangeStore addReferenceToChange:forRecordId:]
-[ISDChangeStore indexRecordIds:]
-[ISDChangeStore changesWithReferenceToRecordId:]
-[ISDChangeStore replaceRecordId:withRecordId:]
-[ISDChangeStore replaceRelationshipTupleId:withRelationshipTupleId:]
-[ISDChangeStore clearSpuriousUnresolvedReferencesToPhantomsInIdMapper:]
-[ISDChangeStore count]
-[ISDChangeStore enumerateChangesInArray:forEntityNames:asArgumentToFunction:context:]
-[ISDChangeStore enumerateAddsForEntityNames:asArgumentToFunction:context:]
-[ISDChangeStore enumerateAddsForEntityNames:state:maxToEnumerate:asArgumentToFunction:context:]
-[ISDChangeStore enumerateChangesForEntityNames:asArgumentToFunction:context:]
-[ISDChangeStore appendDeleteChange:]
-[ISDChangeStore appendAddChange:]
-[ISDChangeStore appendModifyChange:]
-[ISDChangeStore appendChange:]
-[ISDChangeStore removeEnumeratedChanges]
-[ISDChangeStore _removeChangesForEntityNames:fromArray:]
-[ISDChangeStore removeAllChangesForEntityNames:]
-[ISDChangeStore entityNamesOfAddedRecords]
-[ISDChangeStore earliestFromGenerationOfAddedRecordsForEntityName:]
-[ISDChangeStore(DataReferences) setDirtyCoderDelegate:]
-[ISDChangeStore(DataReferences) dirtyCoderDelegate]
-[ISDRecord copyWithZone:]
-[ISDRecord initWithCoder:]
-[ISDRecord encodeWithCoder:]
-[ISDRecord(Mutators) setState:]
-[ISDRecord(Mutators) addedOrModifiedPropertyValue:]
-[ISDRecord(Mutators) setDeleted:forPropertyValueWithName:inGeneration:byClientId:]
-[ISDRecord(Mutators) addPropertyValue:]
-[ISDRecord(Mutators) noteModificationDate:inGeneration:byClientWithId:]
-[ISDRecord(Mutators) addUnformattedRelationshipValue:]
-[ISDRecord(Mutators) removeAllPropertyValues]
-[ISDRecord(Mutators) removePropertyValuesWithNames:]
-[ISDRecord(Mutators) replaceRecordIds:]
-[ISDRecord(Mutators) replaceRecordId:withRecordId:]
-[ISDRecord(Mutators) setRecordId:]
-[ISDRecord(Conveniences) propertyValuesWithNames:]
-[ISDRecord(Conveniences) createRecordDictionary]
-[ISDRecord(Conveniences) undeletedRecordIdsForRelationshipNamed:]
-[ISDRecordStore initWithEntityNameToTruthSegment:delegate:]
-[ISDRecordStore truthSegmentNames]
-[ISDRecordStore truthSegmentCount]
-[ISDRecordStore deleteStillBornRecords]
-[ISDRecordStore disableFlushAndLockImmediately]
-[ISDRecordStore rollbackChanges]
-[ISDRecordStore rollbackChangesIgnoringClientData]
-[ISDRecordStore addRowidsToIndexSet:forRecordsWithIds:inTruthSegment:]
-[ISDRecordStore recordIdsAddedAfterGeneration:forEntityWithName:fromAnyClientsExceptClientWithId:]
-[ISDRecordStore removeAllAuxillaryRecordData]
-[ISDRecordStore removeAllRecords]
-[ISDRecordStore removeAttributes:andRelationships:forEntityName:]
-[ISDRecordStore replaceRecordId:withRecordId:forEntityName:]
-[ISDRecordStore replaceRelationshipTupleId:withRelationshipTupleId:]
-[ISDRecordStore setRecordState:forRecordIds:]
-[ISDRecordStore setToBeApplied:forRecordsWithEntityNames:]
-[ISDRecordStore setClientData:forRecordWithIdentifier:]
-[ISDRecordStore enumerateTargetsOfRelationshipWithName:fromRecordWithId:asArgumentsToFunction:context:]
__callFunctionWithTargetOfRelationship
-[ISDRecordStore enumerateSourcesOfRelationshipWithName:toRecordWithId:asArgumentsToFunction:context:]
__callFunctionWithSourceOfRelationship
-[ISDRecordStore entityNumbersForRecords:]
-[ISDRecordStore setLastChangedGeneration:forRecordIds:]
-[ISDRecordStore enumerateRecordIdsForRecordsWithMatchingAttributes:asArgumentsToFunction:context:matchAll:]
-[ISDRecordStore enumerateRecordIdsForRecordsWithMatchingAttributes:asArgumentsToFunction:context:]
-[ISDRecordStore enumerateRecordHeadersForRecordsWithIds:asArgumentsToFunction:context:]
-[ISDRecordStore enumerateRecordIdsForEntityNames:ignoreDeletedRecords:asArgumentsToFunction:context:]
-[ISDRecordStore toBeAppliedRecordCountForEntityNames:]
-[ISDRecordStore allRecordIdentifiers]
-[ISDRecordStore recordIdsForEntityNames:]
-[ISDRecordStore isRecordStoreAvailableForWriting]
-[ISDRecordStore purgeRecordsForEntitiesNamed:inGenerationsLessThan:]
-[ISDRecordStore recreateIndexes]
-[ISDRecordStore dropIndexes]
-[ISDRecordStore enableSqliteTracing:]
-[ISDRecordStore enableSqliteTracing]
-[ISDRecordStore disableSqliteTracing]
-[ISDRecordStore(DataReferences) getRecordDataReferencesForRecordId:forPropertyName:]
-[ISDRecordStore(DataReferences) getRecordDataReferencesForRecordWithIdentifiers:]
-[ISDRecordStore(DataReferences) setRecordHasDataReferences:forRecordIds:]
-[ISDRecordStore(DataReferences) recordIdsWithDataReferencesForEntityNames:]
-[ISDRecordStore(DataReferences) removeAllDataReferences:updateRecords:]
-[ISDRecordStore(DataReferences) dirtyCoderDelegate]
-[ISDRecordStore(GlobalEquivalents) addEquivalentGlobalIds:forNativeGlobalId:]
-[ISDRecordStore(GlobalEquivalents) removeEquivalentGlobalsIdsForNativeGlobalId:]
-[ISDRecordStore(GlobalEquivalents) nativeGlobalIdForEquivalentId:]
-[ISDRecordStore(GlobalEquivalents) globalIdEquivalentsForNativeRecordId:]
-[ISDRecordStore(FilteredReferenceSupport) updateRecordStatesForPreviouslyFilteredRecordsWithEntityNames:]
__findPreviouslyFilteredRecords
-[ISDRecordStore(FormattingSupport) addFormattedAwayProperties:forRecordWithIdentifier:]
-[ISDChangeBuilder dealloc]
-[ISDChangeBuilder _removeNullValuesAndDefaultPropertyNamesFromDictionary:]
-[ISDChangeBuilder takeNewValuesFromDictionary:]
-[ISDChangeBuilder recordId]
-[ISDChangePusher dealloc]
-[ISDChangePusher _addDeletedTuple:tuples:]
-[ISDChangePuller dealloc]
-[ISDStructuredDelta initWithClientState:syncStates:entities:currentGeneration:clientIsTrusted:]
-[ISDStructuredDelta dealloc]
__ISyncRecordPreconditionFailed
-[ISDStructuredDelta changeForMinglerBetweenOldRecord:newRecordDictionary:recordId:applyDeltasToRecord:]
+[ISDStructuredDelta updateISDChangeByApplyingISDChange:toChange:]
+[ISDStructuredDelta recordDictionaryByApplyingChange:toRecordDictionary:]
-[NSString(DEBUGFASTNAME) fastName]
-[ISDPropertyValue initWithCoder:]
-[ISDPropertyValue encodeWithCoder:]
-[ISDPropertyValue _valuesAreEqual:]
-[ISDPropertyValue deletedValue]
-[ISDPropertyValue unformattedValue]
-[ISDPropertyValue setValue:]
-[ISDPropertyValue setName:]
-[ISDPropertyValue deleteValueInGeneration:byClientWithId:]
-[ISDPropertyValue markDeletedInGeneration:]
-[ISDPropertyValue replaceRecordIds:]
-[ISDPropertyValue findTuplesWithValueEqualToId:]
-[ISDPropertyValue(SpeedConveniences) fastValueOrDeletedValue]
-[ISDPropertyValue(SpeedConveniences) lastModifiedByClientNumber]
-[ISDPropertyValue(CollectionExtensions) decodeCollectionData:forType:]
-[ISDConflict initWithRecordId:entityName:dataClassName:identityKeys:]
-[ISDConflict initWithCoder:]
-[ISDConflict dealloc]
-[ISDConflict encodeWithCoder:]
-[ISDConflict descriptionWithLocale:indent:]
-[ISDConflict description]
-[ISDConflict _addPropertyChanges:forDependentPropertyNames:fromClientId:]
-[ISDConflict addDependentPropertyValues:forDependentPropertyNames:]
-[ISDConflict addPropertyChanges:forDependentPropertyNames:]
-[ISDConflict recordId]
-[ISDConflict entityName]
-[ISDConflict dataClassName]
-[ISDConflict identityKeys]
-[ISDConflict isModified]
-[ISDConflict clearModified]
-[ISDConflict purgeResolvedConflicts]
-[ISDConflict propertyConflicts]
-[ISDConflict(SyncServicesConveniences) clientIds]
-[ISDConflict(SyncServicesConveniences) containsConflictOnPropertyNames:]
-[ISDConflict(SyncServicesConveniences) conflictWithPropertyNames:areDefaultValues:]
-[ISDConflict(SyncServicesConveniences) unresolvedPropertyConflicts]
-[ISDConflict(SyncServicesConveniences) resolvedPropertyConflicts]
-[ISDConflict(SyncServicesConveniences) propertyNames]
-[ISDConflict(SyncServicesConveniences) propertyConflictForPropertyName:]
-[ISDConflict(SyncServicesConveniences) propertyConflictForPropertyNames:]
-[ISDConflict(SyncServicesConveniences) winningClientId]
-[ISDConflict(SyncServicesConveniences) setWinningClientId:]
-[ISDConflict(SyncServicesPrivateMethods) addDeletedRecord:]
-[ISDConflict(SyncServicesPrivateMethods) deletedRecordMap]
-[ISDConflict(SyncServicesPrivateMethods) removePropertyConflict:]
-[ISDConflictManager(EnumeratorHelpers) noteAddedChange:]
-[ISDConflictManager(EnumeratorHelpers) noteConflictToRemove:]
-[ISDConflictChangeEnumerator _processConflict:]
-[ISDConflictAddEnumerator _processConflict:]
___45-[ISDConflictAddEnumerator _processConflict:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISDConflictManager fileLocker:actionForApparentlyAbandonedLock:onAttempt:]
-[ISDConflictManager fileLocker:lockWasStolen:]
-[ISDConflictManager _validateConflict:]
-[ISDConflictManager _sortDeltaFileNamesAndSetNextDeltaNumber:]
__sortDeltaFileNames
-[ISDConflictManager disableFlushAndLockImmediately]
-[ISDConflictManager save]
+[ISDConflictManager conflictsDirectoryPathnameComponent]
-[ISDConflictManager rollbackChanges]
+[ISDConflictManager postConflictsChangedDistributedNotification]
-[ISDConflictManager postConflictsChangedDistributedNotification]
-[ISDConflictManager commitNewlyResolvedConflictsPostingNotification:]
-[ISDConflictManager commitNewlyResolvedConflicts]
-[ISDConflictManager _clearBadConflictWithRecordId:]
-[ISDConflictManager enumerateAddsForEntityNames:asArgumentToFunction:context:]
-[ISDConflictManager isUndoManager]
-[ISDConflictManager enumerateAddsForEntityNames:state:maxToEnumerate:asArgumentToFunction:context:]
-[ISDConflictManager freezeDriedRecordWithId:]
-[ISDConflictManager conflicts]
-[ISDConflictManager deletedRecordMap]
___38-[ISDConflictManager deletedRecordMap]_block_invoke
___copy_helper_block_392
___destroy_helper_block_393
-[ISDConflictManager conflictCount]
-[ISDConflictManager addConflict:]
_ISDLogAlways
-[ISDConflictManager removeAllConflicts]
-[ISDConflictManager removeConflict:]
-[ISDConflictManager replaceRecordId:withRecordId:]
-[ISDConflictManager replaceRelationshipTupleId:withRelationshipTupleId:]
-[ISDConflictManager updateChangePropertiesForChange:]
-[ISDConflictManager compact]
-[ISDConflictManager recycleDatabaseConnection]
-[ISDConflictManager newSetOfDeletedRecordIdsForEntityNames:]
-[ISDConflictManager removeAllConflictsForEntityNames:]
-[ISDConflictManager unacceptedRecordIdsForEntityName:]
-[ISDConflictManager earliestFromGenerationOfAddedRecordsForEntityName:]
-[ISDConflictManager resolvedConflictsForEntitiesCount:]
-[ISDConflictManager reloadAndReturnConflictsInfo]
-[ISDConflictManager addConflictWrappers:]
-[ISDConflictManager associateDataReference:withRecordId:andPropertyName:]
-[ISDConflictManager clearDataReferenceAssociationsForRecordIds:]
-[ISDConflictManager dataReferencesWithRecordId:]
-[ISDConflictManager isd_didDecodeDataWrapper:forRecordWithIdentifier:withPropertyName:]
-[ISDConflictManager dirtyCoderDelegate]
-[ISDRecordIdMap checkInvariant]
-[ISDRecordIdMap initWithCoder:]
-[ISDRecordIdMap encodeWithCoder:]
-[ISDRecordIdMap initWithQuickDirtyCoder:]
-[ISDRecordIdMap encodeWithQuickDirtyCoder:]
-[ISDRecordIdMap isd_quickDirtyCoderType]
-[ISDRecordIdMap description]
-[ISDRecordIdMap fastEntityName]
+[ISDRecordIdMapper recordIdMapperWithContentsOfFile:]
+[ISDRecordIdMapper recordIdMapperInDataDirectory:]
-[ISDRecordIdMapper description]
-[ISDRecordIdMapper verboseDescription]
-[ISDRecordIdMapper resetState]
-[ISDRecordIdMapper initWithCoder:]
-[ISDRecordIdMapper encodeWithCoder:]
-[ISDRecordIdMapper initWithQuickDirtyCoder:]
-[ISDRecordIdMapper encodeWithQuickDirtyCoder:]
-[ISDRecordIdMapper freeOSResources]
-[ISDRecordIdMapper isd_quickDirtyCoderType]
-[ISDRecordIdMapper _writeToFile:]
-[ISDRecordIdMapper disableFlush]
-[ISDRecordIdMapper enableFlush]
-[ISDRecordIdMapper commitMappings]
+[ISDRecordIdMapper legacyGlobalIdFromConstructedLocalId:]
-[ISDRecordIdMapper isLocalIdConstructedFromGlobalId:]
-[ISDRecordIdMapper localIdConstructedFromGlobalId:]
-[ISDRecordIdMapper _localIdForGlobalIdIgnoringConstructedIds:]
-[ISDRecordIdMapper entityNameForGlobalId:]
-[ISDRecordIdMapper allLocalIds]
-[ISDRecordIdMapper allGlobalIds]
-[ISDRecordIdMapper useLocalIdsAsGlobalIds]
-[ISDRecordIdMapper replaceLocalId:withLocalId:]
-[ISDRecordIdMapper recordDictionaryByConvertingLocalIdsToGlobalIdsInRecordDictionary:entity:]
-[ISDRecordIdMapper recordDictionaryByConvertingGlobalIdsToLocalIdsInRecordDictionary:entity:]
-[ISDRecordIdMapper _valueByConvertingIds:inValue:]
-[ISDRecordIdMapper recordDictionaryByConvertingIds:inRecordDictionary:entity:]
-[ISDRecordIdMapper changeByConvertingIds:inChange:entity:]
-[ISDRecordIdMapper unresolvedLocalIdentifiers]
-[ISDRecordIdMapper changeUnresolvedLocalId:toUnresolvedLocalId:]
-[ISDRecordIdMapper noteRecordIdentifier:withUnknownType:]
-[ISDRecordIdMapper removeRecordIdentifierOfUnknownType:]
-[ISDRecordIdMapper recordIdentifiersOfUnknownType]
-[ISDDataObject fastDataManager]
-[ISDDataObject dataManager]
-[ISDDataObject anchor]
-[ISDDataObject setAnchor:]
-[ISDDataObject topParent]
-[ISDDataObject morphInToObject:]
-[ISDDataObject comment]
-[ISDDataObject setComment:]
-[ISDSyncState initWithEntityName:propertyNames:]
-[ISDSyncState copyWithZone:]
-[ISDSyncState description]
-[ISDSyncState setPropertyNames:]
-[ISDSyncState lastSyncDate]
-[ISDSyncState setLastSyncDate:]
-[ISDSyncState lastSyncStatus]
-[ISDSyncState setLastSyncStatus:]
-[ISDSyncState _isSupportedEntity]
-[ISDSyncState setEnabled:]
-[ISDSyncState setClientCanPullOnly:]
-[ISDSyncState setClientCanPushOnly:]
-[ISDSyncState setClientWantsToPullTruth:]
-[ISDSyncState setShouldRefilter:]
-[ISDSyncState requestedSyncMode]
-[NSArray(SyncServicesExtensions) isd_arrayByMappingElements:]
-[NSArray(SyncServicesExtensions) isd_flattenArray]
_flattenArray
-[NSArray(SyncServicesExtensions) isd_collectionType]
-[NSMutableArray(AddObjectIfNotNil) isd_addObjectIfNotNil:]
-[ISDClientState initWithClientDataDirectory:clientId:clientType:]
+[ISDClientState recordIdMapperForClientWithIdentifier:inDataDirectory:]
-[ISDClientState didCreateRecordStore]
-[ISDClientState didCreateChangeStore]
-[ISDClientState enableSqliteTracing]
-[ISDClientState disableSqliteTracing]
-[ISDClientState disableFlushAndLockImmediately]
-[ISDClientState recreateIndexes]
-[ISDClientState dropIndexes]
-[ISDClientState rollbackChanges]
-[ISDClientState enumerateAddsForEntityNames:asArgumentToFunction:context:]
-[ISDClientState enumerateChangesForEntityNames:asArgumentToFunction:context:]
-[ISDClientState recycleDatabaseConnection]
-[ISDClientState removeAllChangesForEntityNames:]
-[ISDClientState replaceRelationshipTupleId:withRelationshipTupleId:]
-[ISDClientState updateChangePropertiesForChange:]
-[ISDClientState dirtyCoderDelegate]
-[ISDClientState resetHandler]
___71-[NSDictionary(SyncServicesExtensions) isd_reversedDictionaryUsingSets]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___74-[NSDictionary(SyncServicesExtensions) isd_reversedDictionaryUsingStrings]_block_invoke
___copy_helper_block_28
___destroy_helper_block_29
-[NSDictionary(SyncServicesExtensions) isd_reverseDictionaryMapping]
-[NSDictionary(SyncServicesExtensions) isd_collectionType]
-[NSDictionary(SyncServicesExtensions) isd_dictionarySubsetWithKeys:]
___69-[NSDictionary(SyncServicesExtensions) isd_dictionarySubsetWithKeys:]_block_invoke
___copy_helper_block_47
___destroy_helper_block_48
-[NSMutableDictionary(SyncServicesExtensions) isd_setObjectOrRemoveNil:forKey:]
-[NSMutableDictionary(SyncServicesExtensions) isd_collectionType]
_ISDLogAlways
_compressedLogFilePathWithNumber
-[NSDictionary(ISyncSummaryDescriptions) isd_summaryWithIndent:]
___64-[NSDictionary(ISyncSummaryDescriptions) isd_summaryWithIndent:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISDFileReference initWithPath:]
-[ISDFileReference initWithPath:bundleId:bundleRelativePath:]
-[ISDFileReference initWithPath:bundleId:bundleRelativePath:windowsBinRelativePath:]
-[ISDFileReference encodeWithCoder:]
-[ISDFileReference replacementObjectForPortCoder:]
-[ISDFileReference description]
-[ISDFileReference persistentId]
-[ISDFileReference timestamp]
-[ISDFileReference aliasData]
-[ISDFileReference bundleId]
-[ISDFileReference bundleRelativePath]
-[ISDFileReference windowsBinRelativePath]
-[ISDFileReference validateFileReference]
-[ISDFileReference fileHasBeenModified]
-[ISDFileReference updateTimestamp]
-[ISDFileReference refersToFileAtPath:]
-[ISDClient initWithClientId:]
-[ISDClient encodeWithCoder:]
-[ISDClient replacementObjectForPortCoder:]
-[ISDClient description]
-[ISDClient isEqualClientDescription:]
-[ISDClient setDescriptionFile:]
-[ISDClient setClientType:]
-[ISDClient setDisplayName:]
-[ISDClient setImageFile:]
-[ISDClient setSyncAlertTool:]
-[ISDClient setSyncAlertTypes:]
-[ISDClient formatterBundle]
-[ISDClient setFormatterBundle:]
-[ISDClient formatterBundleClassName]
-[ISDClient setFormatterBundleClassName:]
-[ISDClient setLocalizationBundleRef:]
-[ISDClient syncStatesForEntityNames:]
-[ISDClient syncStatesByEntityName:]
-[ISDClient setFilterData:filteredEntityNames:]
-[ISDClient setSynchronizesAllEntities:]
-[ISDClient setHasDynamicSyncAlertHandler:]
-[ISDClient setUseLocalIdsForGUIDs:]
-[ISDClient formatsRelationships]
-[ISDClient setNeverFormatsRelationships:]
-[ISDClient setFormatsRelationships:]
-[ISDClient setSyncsAfterClients:]
-[ISDClient setTrackRecordModificationTimes:]
-[ISDClient isAppProvider]
-[ISDClient setIsAppProvider:]
-[ISDClient isExplicitlyRegisteredToSyncEntityName:]
-[ISDClient isExplicitlyRegisteredToSyncEntityName:andPropertyName:]
-[ISDClient entityNames]
-[ISDClient entityNamesForMinglerToUpdate]
-[ISDClient _setIdNumber:]
-[ISDClient fastClientId]
-[ISDClient setSyncMode:forEntityNamed:]
-[ISDClient setShouldRefilter:forEntityNamed:]
-[ISDClient setLastSyncGeneration:forEntityNamed:]
-[ISDEntity initWithName:]
-[ISDEntity encodeWithCoder:]
-[ISDEntity replacementObjectForPortCoder:]
-[ISDEntity dealloc]
-[ISDEntity description]
-[ISDEntity hash]
-[ISDEntity isEqual:]
-[ISDEntity anchorChildren]
-[ISDEntity _setIdNumber:]
-[ISDEntity setParentName:]
-[ISDEntity setDataClass:]
-[ISDEntity setBundleRef:]
-[ISDEntity setAttributes:]
-[ISDEntity setRelationships:]
-[ISDEntity addPropertyDependencySet:]
-[ISDEntity conflictUIHelperClassName]
-[ISDEntity setUIHelperClassName:]
-[ISDEntity setExcludeFromAirbagCount:]
-[ISDEntity identityKeys]
-[ISDEntity identityKeysForDictionary:minimumAlternate:]
-[ISDEntity identityKeysForDictionary:]
-[ISDEntity propertyNames]
-[ISDEntity newListOfRequiredRelationshipNames]
-[ISDEntity setVersionInfo:]
+[ISDEntity(DangerousSmack) _cleanUp:]
+[ISDEntity(DangerousSmack) cleanupCyclicReferences:]
-[ISDProperty initWithName:entity:]
-[ISDProperty encodeWithCoder:]
-[ISDProperty replacementObjectForPortCoder:]
-[ISDProperty description]
-[ISDProperty hash]
-[ISDProperty isCompatibleExtensionOf:]
-[ISDProperty morphInToObject:]
-[ISDProperty setSubtype:]
-[ISDProperty setEnumValues:]
-[ISDProperty bundleRef]
-[ISDProperty setBundleRef:]
-[ISDProperty setUIHelperClassName:]
-[ISDProperty automagicConflictResolverClassName]
-[ISDProperty setAutomagicConflictResolverClassName:]
-[ISDProperty setIdentityKey:]
-[ISDProperty setIdentityAlternative:]
-[ISDProperty setRequired:]
-[ISDProperty setIsMatchable:]
-[ISDProperty automagicConflictResolverClass]
-[ISDProperty displayNameForEnumValue:]
-[ISDProperty setPreferredRecordTypeForAutomaticConflictResolution:]
-[ISDProperty setPreferredClientTypesForAutomaticConflictResolution:]
-[ISDProperty isToMany]
-[ISDProperty(SpeedConveniences) fastSubtype]
-[ISDRelationship init]
-[ISDRelationship encodeWithCoder:]
-[ISDRelationship replacementObjectForPortCoder:]
-[ISDRelationship dealloc]
-[ISDRelationship description]
-[ISDRelationship isCompatibleExtensionOf:]
-[ISDRelationship morphInToObject:]
-[ISDRelationship setSource:]
-[ISDRelationship sourceName]
-[ISDRelationship setTargets:]
-[ISDRelationship setInverseRelationships:]
-[ISDRelationship setAnonymousInverseRelationshipNames:]
-[ISDRelationship setDeleteRule:]
-[ISDRelationship setToMany:]
-[ISDRelationship setOrdering:]
-[ISDDataClass init]
-[ISDDataClass initWithName:]
-[ISDDataClass encodeWithCoder:]
-[ISDDataClass replacementObjectForPortCoder:]
-[ISDDataClass dealloc]
-[ISDDataClass description]
-[ISDDataClass hash]
-[ISDDataClass setBundleRef:]
-[ISDDataClass setUIHelperClassName:]
-[ISDDataClass setImagePath:]
-[ISDDataClass uiHelperClass]
-[ISDDataClass singularDisplayName]
-[ISDDataClass setAppProviderIdentifier:]
-[ISDDataClass setCategory:]
-[ISDDataClass setLongName:]
-[ISDDataClass setVersionInfo:]
-[ISyncPlan initWithSyncManager:planIdentifier:]
-[ISyncPlan dealloc]
-[ISyncPlan finalize]
-[ISyncPlan _fetchChanges]
-[ISyncPlan planIdentifier]
-[ISyncPlan createDate]
-[ISyncPlan startDate]
-[ISyncPlan endDate]
-[ISyncPlan syncPhaseDescription]
-[ISyncPlan syncStatus]
-[ISyncPlan setSyncStatus:]
-[ISyncPlan participants]
-[ISyncPlan entityNames]
-[ISyncPlan entityNamesForClient:]
-[ISyncPlan cancelSyncing]
-[ISDCallHistory initWithFilename:clientIdentifier:entityNames:]
-[ISDCallHistory dealloc]
-[ISDCallHistory clientIdentifier]
-[ISDCallHistory addCallHistoryWithMethodName:parameters:]
-[ISDCallHistory _findUnreturnedMethodForMethodName:]
-[ISDCallHistory setReturnedValue:forMethodName:]
-[ISDCallHistory setException:forMethodName:]
-[ISDCallHistory saveCallHistory]
__makeCopyOfFileWithPath
_createNewSaveDirectory
__addChange
____addChange_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[NSObject(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSObject(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSObject(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSObject(SyncServicesSqliteExtensions) isd_propertyValueUnarchivedFromBytesEncodedForSqlite:]
-[NSObject(SyncServicesSqliteExtensions) isd_bytesEncodedForSqliteForArchivedPropertyValue]
+[NSNull(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSNull(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSNull(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSArray(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSArray(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSArray(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSDictionary(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSDictionary(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSDictionary(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSString(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSString(SyncServicesSqliteExtensions) isd_initWithBytesEncodedForSqlite:]
-[NSString(SyncServicesSqliteExtensions) isd_initWithBytesEncodedForSqlite:stringTable:]
-[NSString(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSString(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSNumber(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSNumber(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSNumber(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSDecimalNumber(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSDecimalNumber(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSDecimalNumber(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSData(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSData(SyncServicesSqliteExtensions) isd_initWithBytesEncodedForSqlite:]
-[NSData(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSData(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSDate(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSDate(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSDate(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSCalendarDate(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSCalendarDate(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSCalendarDate(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSURL(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSURL(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSURL(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
+[NSColor(SyncServicesSqliteExtensions) isd_propertyValueWithType:bytesEncodedForSqlite:]
-[NSColor(SyncServicesSqliteExtensions) isd_bytesEncodedForSqlite]
-[NSColor(SyncServicesSqliteExtensions) isd_sqlitePropertyValueType]
-[ISDPropertyConflict initWithPropertyNames:recordId:]
-[ISDPropertyConflict initWithCoder:]
-[ISDPropertyConflict dealloc]
-[ISDPropertyConflict encodeWithCoder:]
-[ISDPropertyConflict descriptionWithLocale:indent:]
-[ISDPropertyConflict description]
-[ISDPropertyConflict _propertyChanges:areEqualTo:]
-[ISDPropertyConflict addPropertyChanges:fromClientId:]
___55-[ISDPropertyConflict addPropertyChanges:fromClientId:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISDPropertyConflict propertyChangesAreDefaultValues]
-[ISDPropertyConflict propertyNames]
-[ISDPropertyConflict setWinningClientWithId:]
-[ISDPropertyConflict setUserValues:]
-[ISDPropertyConflict propertyChangeFromClientWithId:]
-[ISDPropertyConflict clientIds]
-[ISDPropertyConflict winningClientId]
-[ISDPropertyConflict isResolved]
-[ISDPropertyConflict isModified]
-[ISDPropertyConflict clearModified]
-[ISDPropertyConflict setModified]
-[ISDPropertyConflict winningValueForProperty:]
-[ISDPropertyConflict winningPropertyChanges]
-[ISDPropertyConflict(ConflictManagerPrivate) relationshipChangeReferencesRecordIdsInMap:updateTupleReferences:]
-[ISyncFileLocker refresh]
-[ISyncFileLocker removeLockDirectory]
+[ISyncFileLocker cleanupStaleLockDirectories]
-[ISyncFileLocker cleanupStaleLockDirectories]
-[ISyncFileLocker staleLockDirectoryPath]
-[ISyncFileLocker lockInfoForDelegate:]
-[ISyncFileLocker isLockStaleOnNFS]
-[ISyncFileLocker updateLockFileAndReturnError:]
-[ISyncFileLocker actionOnVerifyFileAgeAndReturnReason:]
-[ISyncFileLocker _checkPIDisRunning:]
-[ISyncFileLocker actionOnVerifyIfLockInfoFileProcessIsRunning:reason:]
-[ISyncFileLocker UUIDString]
-[ISyncFileLocker matchesHostNameFromLockDictionary:]
+[ISyncFileLocker stringFromISyncLockPotentialAction:]
+[ISyncFileLocker _cleanupStaleLockDirectoriesAtPath:]
-[ISyncFileLocker actionForApparentlyAbandonedLock:onAttempt:]
-[NSFileManager(SyncServicesExtensions) isd_bzip2FileAtPathInThread:]
-[NSFileManager(SyncServicesExtensions) isd_bzip2FileAtPath:replace:]
-[NSObject(SyncServicesDeepCopyExtensions) isd_deepCopy]
-[NSDictionary(SyncServicesDeepCopyExtensions) isd_deepCopy]
-[NSArray(SyncServicesDeepCopyExtensions) isd_deepCopy]
-[NSSet(SyncServicesDeepCopyExtensions) isd_deepCopy]
-[ISDObjectGraphWrapper initWithObject:]
+[ISDObjectGraphWrapper graphWrapperWithObject:]
-[ISDObjectGraphWrapper replacementObjectForPortCoder:]
-[ISDObjectGraphWrapper encodeWithCoder:]
-[ISDQuickDirtyCoder initForWritingToFile:]
-[ISDQuickDirtyCoder initForReadingWithFile:]
___45-[ISDQuickDirtyCoder encodeClassVersionTable]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISDQuickDirtyCoder encodeSignedInt16:]
-[ISDQuickDirtyCoder decodeSignedInt16]
-[ISDQuickDirtyCoder encodeSignedInt32:]
-[ISDQuickDirtyCoder encodeNull]
-[ISDQuickDirtyCoder decodeNull]
-[ISDQuickDirtyCoder encodeDecimalNumber:]
-[ISDQuickDirtyCoder decodeDecimalNumber]
-[ISDQuickDirtyCoder encodeCalendarDate:]
-[ISDQuickDirtyCoder encodeSet:]
-[ISDQuickDirtyCoder decodeSet]
-[ISDQuickDirtyCoder encodeDictionary:]
___39-[ISDQuickDirtyCoder encodeDictionary:]_block_invoke
___copy_helper_block_259
___destroy_helper_block_260
-[ISDQuickDirtyCoder decodeDictionary]
-[ISDQuickDirtyCoder encodeRecordIdMap:]
-[ISDQuickDirtyCoder decodeRecordIdMap]
-[ISDQuickDirtyCoder encodeRecordIdMapper:]
-[ISDQuickDirtyCoder decodeRecordIdMapper]
-[ISDQuickDirtyCoder encodeChange:]
-[ISDQuickDirtyCoder decodeChange]
-[NSObject(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[NSNull(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[NSSet(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[NSDictionary(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[NSDecimalNumber(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[NSCalendarDate(SyncServicesQuickDirtyCoderExtensions) isd_quickDirtyCoderType]
-[NSSet(SyncServicesExtensions) isd_setByRemovingSet:]
-[NSSet(SyncServicesExtensions) isd_collectionType]
-[NSMutableSet(SyncServicesExtensions) isd_removeObjectsFromArray:]
-[NSMutableSet(SyncServicesExtensions) isd_collectionType]
+[ISyncSessionDriver allocWithZone:]
+[ISyncSessionDriver sessionDriverWithDataSource:]
-[ISyncSessionDriver sync]
-[ISyncSessionDriver startAsynchronousSync:]
-[ISyncSessionDriver lastError]
-[ISyncSessionDriver dataSource]
-[ISyncSessionDriver setDelegate:]
-[ISyncSessionDriver delegate]
-[ISyncSessionDriver setHandlesSyncAlerts:]
-[ISyncSessionDriver handlesSyncAlerts]
-[ISyncSessionDriver client]
-[ISyncSessionDriver session]
-[ISyncSessionDriver finishSyncing]
-[ISyncSessionDriver _setClient:]
-[ISyncConcreteSessionDriver init]
-[ISyncConcreteSessionDriver dealloc]
-[ISyncConcreteSessionDriver _hashDataSource]
-[ISyncConcreteSessionDriver _hashDelegate]
-[ISyncConcreteSessionDriver _initWithDataSource:]
-[ISyncConcreteSessionDriver _setDataSource:]
-[ISyncConcreteSessionDriver dataSource]
-[ISyncConcreteSessionDriver setDelegate:]
-[ISyncConcreteSessionDriver delegate]
-[ISyncConcreteSessionDriver _setClient:]
-[ISyncConcreteSessionDriver client]
-[ISyncConcreteSessionDriver session]
-[ISyncConcreteSessionDriver finishSyncing]
-[ISyncConcreteSessionDriver _preSync]
-[ISyncConcreteSessionDriver _sync:]
-[ISyncConcreteSessionDriver sync]
-[ISyncConcreteSessionDriver _doAsynchronousSync]
-[ISyncConcreteSessionDriver _doFullyAsynchronousSync]
-[ISyncConcreteSessionDriver startAsynchronousSync:]
-[ISyncConcreteSessionDriver _client:mightWantToSyncEntityNames:]
-[ISyncConcreteSessionDriver lastError]
-[ISyncConcreteSessionDriver _setLastError:]
-[ISyncConcreteSessionDriver setHandlesSyncAlerts:]
-[ISyncConcreteSessionDriver handlesSyncAlerts]
-[ISyncConcreteSessionDriver _registerClient]
-[ISyncConcreteSessionDriver _lastAnchorsFromClientForEntityNames:sessionFinished:]
-[ISyncConcreteSessionDriver _nextAnchorsFromClientForEntityNames:sessionFinished:]
-[ISyncConcreteSessionDriver _beginSyncSession:]
-[ISyncConcreteSessionDriver _negotiateSyncSession]
-[ISyncConcreteSessionDriver _pushPhaseOfSession]
-[ISyncConcreteSessionDriver _pullPhaseOfSession]
-[ISyncConcreteSessionDriver _finishSession]
-[ISyncConcreteSessionDriver _cancelSync:]
-[ISyncConcreteRecordReference initWithGlobalRecordIdentifier:entityName:attributes:]
-[ISyncConcreteRecordReference initWithGlobalRecordIdentifier:record:entityName:]
__attributeIdentityKeysForEntityNameWithRecord
-[ISyncConcreteRecordReference dealloc]
-[ISyncConcreteRecordReference isEqual:]
-[ISyncConcreteRecordReference hash]
-[ISyncConcreteRecordReference description]
-[ISyncConcreteRecordReference initWithCoder:]
-[ISyncConcreteRecordReference encodeWithCoder:]
-[ISyncConcreteRecordReference setGlobalRecordIdentifier:]
-[ISyncConcreteRecordReference setAttributes:]
-[ISyncConcreteRecordReference _changedAttributesFromTruthRecord:]
-[ISyncConcreteRecordReference recordIdentifierUsingSnapshot:isModified:]
+[ISyncRecordReference recordReferenceForRecordWithIdentifier:usingSnapshot:]
-[ISyncRecordReference initWithCoder:]
-[ISyncRecordReference encodeWithCoder:]
-[ISyncRecordSnapshot(ISyncRecordReference) recordReferenceForRecordWithIdentifier:]
-[ISyncRecordSnapshot(ISyncRecordReference) recordIdentifierForReference:isModified:]
+[ISDRecordIdMapDatabase createDatabaseAtPath:]
-[ISDRecordIdMapDatabase numberOfMappings]
-[ISDRecordIdMapDatabase addMappings:]
-[ISDRecordIdMapDatabase allGlobalIds]
-[ISDRecordIdMapDatabase allLocalIds]
-[ISDRecordIdMapDatabase addUnknownRecordType:forRecordId:]
-[ISDRecordIdMapDatabase getRecordIdsOfUnknownType]
-[ISDRecordIdMapDatabase removeUnknownRecordId:]
-[ISDRecordIdMapDatabase removeAllUnknownRecordIds]
-[ISDPreNameNumberMapIdMapDatabase addMapping:]
-[ISDPreNameNumberMapIdMapDatabase addMappings:]
-[ISDPreNameNumberMapIdMapDatabase newIdMapForLocalId:uniqueEntityNames:]
-[ISDPreNameNumberMapIdMapDatabase newIdMapForGlobalId:uniqueEntityNames:]
-[ISDPreNameNumberMapIdMapDatabase removeMappingsForEntityNames:]
+[ISDSqliteRecordIdMapper setLegacyMode:]
-[ISDSqliteRecordIdMapper initRecordIdMapperWithPath:]
-[ISDSqliteRecordIdMapper init]
-[ISDSqliteRecordIdMapper freeOSResources]
-[ISDSqliteRecordIdMapper description]
-[ISDSqliteRecordIdMapper verboseDescription]
-[ISDSqliteRecordIdMapper resetState]
___42-[ISDSqliteRecordIdMapper commitMappings:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___42-[ISDSqliteRecordIdMapper commitMappings:]_block_invoke259
___copy_helper_block_261
___destroy_helper_block_262
-[ISDSqliteRecordIdMapper allLocalIds]
-[ISDSqliteRecordIdMapper allGlobalIds]
-[ISDSqliteRecordIdMapper replaceLocalId:withLocalId:]
-[ISDSqliteRecordIdMapper recordIdentifiersOfUnknownType]
-[ISDSqliteRecordIdMapper removeRecordIdentifierOfUnknownType:]
-[ISDSqliteRecordIdMapper enableSqliteTracing:]
-[ISDSqliteRecordIdMapper disableSqliteTracing]
-[IDMapping globalId]
-[IDMapping setLocalId:]
-[IDMapping description]
+[ISDIdMapDatabase createDatabaseAtPath:]
-[ISDIdMapDatabase resetState]
-[ISDIdMapDatabase dropIndexes]
-[ISDIdMapDatabase recreateIndexes]
-[ISDIdMapDatabase addMapping:]
-[ISDIdMapDatabase removeMappingForGlobalId:]
-[ISDIdMapDatabase removeMappingsForLocalIdentifiers:]
-[ISDIdMapDatabase removeMappingsForGlobalIdentifiers:]
-[ISDIdMapDatabase removeMappingsForEntityNames:withTruth:andClearLocalIdsCache:]
_addGlobalIdToArray
-[ISDIdMapDatabase getOrCreateMappingForGlobalId:]
-[ISDIdMapDatabase updateMapping:]
-[ISDIdMapDatabase allMappings]
-[ISDIdMapDatabase removeAllMappings]
-[ISyncRecordView recordGraphNodesWithIdentifiers:]
-[ISyncConcreteRecordView flushAndResetConflictManager]
-[ISyncConcreteRecordView resetCache]
-[ISyncConcreteRecordView dealloc]
-[ISyncConcreteRecordView recordByApplyingIdentityMatchedIdMapToRecord:withRecordId:]
-[ISyncRecordViewWithConflicts initWithRecordStore:entityNames:clientIdentifier:]
-[ISyncRecordViewWithConflicts dealloc]
-[ISyncRecordViewWithConflicts recordByApplyingConflictValuesToRecord:withRecordId:]
-[ISyncRecordViewWithConflicts recordGraphNodesWithIdentifiers:]
-[ISyncRecordViewWithConflicts actualRecordsWithIdentifiers:]
-[ISyncRecordGraphNode recordView]
-[ISyncRecordGraphNode record]
-[ISyncRecordGraphNode recordIdentifier]
-[ISyncRecordGraphNode entityName]
-[ISyncRecordGraphNode relationshipNames]
-[ISyncRecordGraphNode identityKeys]
-[ISyncRecordGraphNode dependenciesForPropertyName:]
-[ISyncRecordGraphNode displayKeys]
-[ISyncRecordGraphNode changedKeys]
-[ISyncRecordGraphNode changeType]
-[ISyncRecordGraphNode addedChildNodesByRelationship]
-[ISyncRecordGraphNode modifiedChildNodesByRelationship]
-[ISyncRecordGraphNode deletedChildNodesByRelationship]
-[ISyncRecordGraphNode childNodesByRecordIdentifier]
-[ISyncRecordGraphNode topLevelParentNode]
-[ISyncRecordGraphNode parentNode]
-[ISyncRecordGraphNode initWithRecordView:recordIdentifier:]
-[ISyncRecordGraphNode setChangeType:]
-[ISyncRecordGraphNode setDisplayKeys:]
-[ISyncRecordGraphNode setChangedKeys:]
-[ISyncRecordGraphNode orderedSubentityIdsFromIds:usingEntityNames:]
-[ISyncRecordGraphNode orderedSubentityIdsFromIds:usingEntityNames:defaultOrder:]
-[ISyncRecordGraphNode orderedSubentityIdsFromIds:usingEntityNames:isAdd:]
-[ISyncConcreteRecordGraphNode dealloc]
-[ISyncConcreteRecordGraphNode changeType]
-[ISyncConcreteRecordGraphNode identityKeys]
-[ISyncConcreteRecordGraphNode interestingAttributeKeysByComparingGraphNode:interestingAttributeKeysForOther:includeRelationship:]
-[ISyncConcreteRecordGraphNode interestingAttributeKeysByComparingGraphNode:interestingAttributeKeysForOther:]
-[ISyncConcreteRecordGraphNode changedRelationshipNames]
-[ISyncConcreteRecordGraphNode description]
-[ISyncConcreteRecordGraphNode descriptionForEntireTreeTabs:]
-[ISyncConcreteRecordGraphNode descriptionForEntireTree]
-[ISyncConcreteRecordGraphNode recordView]
-[ISyncConcreteRecordGraphNode addedChildNodesByRelationship]
-[ISyncConcreteRecordGraphNode modifiedChildNodesByRelationship]
-[ISyncConcreteRecordGraphNode deletedChildNodesByRelationship]
-[ISyncConcreteRecordGraphNode parentNode]
-[ISyncConcreteRecordGraphNode setParentNode:]
-[ISyncConcreteRecordGraphNode childNodesByRecordIdentifier]
-[ISyncConcreteRecordGraphNode mergeChangesFromNode:childChangeType:]
-[ISyncConcreteRecordGraphNode mergeChangesFromNode:]
-[ISyncConcreteRecordGraphNode mergeChildrenTree:atRelationship:childChangeType:]
-[ISyncConcreteRecordGraphNode orderedSubentityIdsFromIds:usingEntityNames:defaultOrder:isAdd:]
-[ISyncConcreteRecordGraphNode orderedSubentityIdsFromIds:usingEntityNames:defaultOrder:]
-[ISyncConcreteRecordGraphNode orderedSubentityIdsFromIds:usingEntityNames:]
-[ISyncRecordWithConflictGraphNode dealloc]
-[ISyncRecordWithConflictGraphNode description]
-[ISyncRecordWithConflictGraphNode descriptionForEntireTreeTabs:]
-[ISyncRecordWithConflictGraphNode record]
-[ISyncRecordWithConflictGraphNode isdConflict]
-[ISyncRecordWithConflictGraphNode setISDConflict:]
-[ISyncRecordWithConflictGraphNode freezeDriedRecord]
-[ISyncRecordWithConflictGraphNode setFreezeDriedRecord:]
-[ISyncRecordWithConflictGraphNode conflictingPropertyNames]
-[ISyncRecordWithConflictGraphNode changedKeys]
-[ISyncRecordWithConflictGraphNode conflictingValuesForPropertyName:]
-[ISyncRecordWithConflictGraphNode displayKeys]
-[ISyncRecordWithConflictGraphNode setWinningClientId:]
-[ISyncRecordWithConflictGraphNode mergeChangesFromNode:]
-[ISyncRecordWithConflictGraphNode mergeChildrenTree:atRelationship:childChangeType:]
+[NSError(ErrorExtensions) errorWithDomain:code:]
+[ISDDataWrapper dataReferencePathNamesWithExtension:prependSubdirs:]
-[ISDDataWrapper dataReference]
-[ISDDataWrapper isd_data]
-[ISDDataWrapper loadData]
-[ISDDataWrapper swapPreviousBackingStore:]
-[ISDDataWrapper initWithCoder:]
-[ISDDataWrapper encodeWithCoder:]
+[ISDDataWrapper(UtilityMethods) deleteAllReferencesForClientWithId:]
-[ISDDataWrapper(UtilityMethods) guid]
-[ISDDataWrapper(UtilityMethods) setGuid:]
-[ISDDataWrapper(UtilityMethods) setPreviousExtension:]
-[ISDDataWrapper(UtilityMethods) previousExtension]
-[ISDDataWrapper(UtilityMethods) moddate]
-[ISDDataWrapper(UtilityMethods) setModdate:]
-[ISDDataWrapper(UtilityMethods) setSignature:]
-[ISDDataWrapper(UtilityMethods) dataFaultFailure]
-[ISDDataWrapper(UtilityMethods) backingStoreEqual:]
-[ISDDataWrapper(UtilityMethods) _dataReferenceCount:]
-[ISDDataWrapper(UtilityMethods) _dataReferenceWasSaved]
+[ISDDataReference dataReferenceWithData:]
+[ISDDataReference dataReferenceWithDataWrapper:]
+[ISDDataReference setCopyDataReferencesAsData:]
-[ISDDataReference dealloc]
-[ISDDataReference hash]
-[ISDDataReference dataFaultFailure]
-[ISDDataReference isd_isEqual:]
-[ISDDataReference description]
-[ISDDataReference _data]
+[NSData(DataWrapping) isd_dataWithDataWrapper:]
-[NSData(DataWrapping) dataReference]
-[NSData(DataWrapping) isd_data]
-[NSObject(DataWrapperDelegation) isd_didDecodeDataWrapper:forRecordWithIdentifier:withPropertyName:]
-[ISDDataWrapper(ReallyPrivate) dataWrapper]
-[ISDDataWrapper(ReallyPrivate) recordId]
-[ISDDataWrapper(ReallyPrivate) propertyName]
-[ISDDataWrapper(ReallyPrivate) _isUpToDateWithData]
-[ISDDataWrapper(ReallyPrivate) _updateWrapperWithData]
-[ISDDigestMaker computeDigestForFile:]
-[ISDDigestMaker computeSHA1DigestForData:]
___75-[NSAttributedString(SyncServicesAdditions) isd_isEqualToAttributedString:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[NSAttributedString(SyncServicesAdditions) attributedStringByIncrementingIndentBy:]
-[ISDPersistentStoreSyncer dealloc]
-[ISDPersistentStoreSyncer setSyncHandler:]
-[ISDPersistentStoreSyncer syncHandler]
-[ISDPersistentStoreSyncer setFastSyncHelpers:]
-[ISDPersistentStoreSyncer fastSyncHelpers]
-[ISDPersistentStoreSyncer syncSession]
-[ISDPersistentStoreSyncer setSyncClient:]
-[ISDPersistentStoreSyncer syncClient]
-[ISDPersistentStoreSyncer setPersistentStoreCoordinator:]
-[ISDPersistentStoreSyncer persistentStoreCoordinator]
-[ISDPersistentStoreSyncer setContextsToMonitor:]
-[ISDPersistentStoreSyncer setContextsToReload:]
-[ISDPersistentStoreSyncer synchronizedEntities]
-[ISDPersistentStoreSyncer setError:]
-[ISDPersistentStoreSyncer error]
-[ISDPersistentStoreSyncer synchronizeInBackground:]
-[ISDPersistentStoreSyncer client:canBeginSyncingWithSession:]
-[ISDPersistentStoreSyncer synchronizerThreadMain]
-[ISDPersistentStoreSyncer synchronize]
-[ISDPersistentStoreSyncer _beginSyncing]
-[ISDPersistentStoreSyncer _negotiateSyncMode]
-[ISDPersistentStoreSyncer _pushChanges]
-[ISDPersistentStoreSyncer _pushAllRecordForSyncEntityName:]
-[ISDPersistentStoreSyncer _pushChangesForSyncEntityName:]
-[ISDPersistentStoreSyncer _changeIsValidInEditingContexts:]
-[ISDPersistentStoreSyncer _prepareToPullChanges]
-[ISDPersistentStoreSyncer _pullChanges]
-[ISDPersistentStoreSyncer _cleanUpAfterSyncing]
-[ISDPersistentStoreSyncer _finishSyncing]
-[ISDPersistentStoreSyncer _cancelSyncing]
-[ISDPersistentStoreSyncer _revertObjectFromErrorDictionary:]
-[ISDPersistentStoreSyncer _saveSyncContext]
-[ISDPersistentStoreSyncer _deleteAllObjectsForSyncEntityName:]
-[ISDPersistentStoreSyncer _recordFromObject:ofSyncEntityName:]
-[ISDPersistentStoreSyncer _deleteManagedObjectForChange:]
-[ISDPersistentStoreSyncer _insertManagedObject:fromChange:entityName:]
-[ISDPersistentStoreSyncer _updateObjectWithChange:]
-[ISDPersistentStoreSyncer _updateObject:withChange:]
-[ISDPersistentStoreSyncer _updateRelations]
-[ISDPersistentStoreSyncer syncContextDidSave:]
-[ISDPersistentStoreSyncer _cdEntityNameFromSyncEntityName:]
-[ISDPersistentStoreSyncer _addDeepUserInfoOfEntityDescription:inMutableDictionary:]
-[ISDPersistentStoreSyncer _syncEntityNameFromCDEntity:]
-[ISDPersistentStoreSyncer _managedObjectWithIdentifier:]
-[ISDPersistentStoreSyncer _managedObjectWithIdentifier:inContext:]
-[ISDPersistentStoreSyncer _syncEntityNames]
-[ISDPersistentStoreSyncer _syncEntityNamesForPushing]
-[ISDPersistentStoreSyncer _syncEntityNamesForPulling]
-[ISDPersistentStoreSyncer _notifyShouldStartSyncSession]
-[ISDPersistentStoreSyncer _notifyWillPushChangesInSyncSession]
-[ISDPersistentStoreSyncer _notifyDidPushChangesInSyncSession]
-[ISDPersistentStoreSyncer _notifyWillPullChangesInSyncSession]
-[ISDPersistentStoreSyncer _notifyDidPullChangesInSyncSession]
-[ISDPersistentStoreSyncer _notifyDidCommitChangesInSyncSession:]
-[ISDPersistentStoreSyncer _notifyDidFinishSyncSession]
-[ISDPersistentStoreSyncer _notifyDidCancelSyncSession]
+[NSPersistentStoreCoordinator(CoreDataSync) syncservices_setValue:forKey:inCoordinator:]
+[NSPersistentStoreCoordinator(CoreDataSync) syncservices_valueForKey:inCoordinator:]
+[NSPersistentStoreCoordinator(CoreDataSync) syncservices_removeIVarsForCoordinator:]
-[NSPersistentStoreCoordinator(CoreDataSync) syncWithClient:inBackground:handler:error:]
-[NSPersistentStoreCoordinator(CoreDataSync) setStoresFastSyncDetailsAtURL:forPersistentStore:]
-[NSPersistentStoreCoordinator(CoreDataSync) syncservices_storeWasRemoved:]
-[ISDFastCDSyncHelper initForUpdatingWithPersistentStore:fastSyncStorageURL:]
-[ISDFastCDSyncHelper initForSyncingWithFastSyncStorageURL:]
-[ISDFastCDSyncHelper dealloc]
-[ISDFastCDSyncHelper setSyncContext:]
-[ISDFastCDSyncHelper setStoragePath:]
-[ISDFastCDSyncHelper storagePath]
-[ISDFastCDSyncHelper isUpToDate]
-[ISDFastCDSyncHelper _modificationDateForPath:]
-[ISDFastCDSyncHelper _updateStorageStateWithModifications:]
-[ISDFastCDSyncHelper _storeFastSyncInfos:]
-[ISDFastCDSyncHelper modifiedObjects]
-[ISDFastCDSyncHelper modifiedObjectsForEntityName:]
-[ISDFastCDSyncHelper removeChange:]
-[ISDFastCDSyncHelper clearFastSyncInfosForEntityName:]
-[ISDFastCDSyncHelper clearAllFastSyncInfos]
-[ISDFastCDSyncHelper resetFastSyncInfos]
-[ISDFastCDSyncHelper syncContextDidPushChanges]
-[ISDFastCDSyncHelper _tryOpeningFastSyncStorage]
-[ISDFastCDSyncHelper _openFastSyncStorage]
-[ISDFastCDSyncHelper _prepareStatements]
-[ISDFastCDSyncHelper _finishStatements]
-[ISDFastCDSyncHelper _beginTransaction]
-[ISDFastCDSyncHelper _commitTransaction]
-[ISDFastCDSyncHelper _updateChangeWithIdentifier:withEntityName:asState:]
-[ISDFastCDSyncHelper _nextChangesForEntityName:]
-[ISDFastCDSyncHelper _changeForIdentifier:]
-[ISDFastCDSyncHelper _removeChangeWithIdentifier:]
-[ISDFastCDSyncHelper _deleteAllChangesForEntity:]
-[ISDFastCDSyncHelper _setObject:forKey:]
-[ISDFastCDSyncHelper _objectForKey:]
+[ISDSqliteChangeStoreDatabase createDatabaseAtPath:]
-[ISDSqliteChangeStoreDatabase _latestFromGenerationOfRecordsForEntityName:processed:changeType:]
-[ISDSqliteChangeStoreDatabase _newPropertiesFromDataInColumn:statement:forRecordWithIdentifier:identityHash:]
-[ISDSqliteChangeStoreDatabase _newSetOfDeletedRecordIds]
__gatherRecordRowidsToDelete
-[ISDSqliteChangeStoreDatabase _enumerateProcessedChangesForEntityNames:asArgumentToFunction:context:]
__handleEnumeratedReferences
-[ISDSqliteChangeStoreDatabase _flushIdReferences]
-[ISDSqliteChangeStoreDatabase _updateChange:atRowId:]
-[ISDSqliteChangeStoreDatabase _markChangesAsEnumerated:]
-[ISDSqliteChangeStoreDatabase _purgeEnumeratedChangesLessThanToGeneration:]
__gatherRowIdsIntoIndexSet
-[ISDSqliteChangeStoreDatabase _updateChanges:andReferences:withNewId:]
-[ISDSqliteChangeStoreDatabase _numberOfChanges:]
-[ISDSqliteChangeStoreDatabase _cachedIdReferencesCount]
-[ISDSqliteChangeStoreDatabase _shouldFlushIdReferences]
-[ISDSqliteChangeStore initWithDataDirectory:forClientWithIdentifier:]
-[ISDSqliteChangeStore recycleDatabaseConnection]
-[ISDSqliteChangeStore resetState]
-[ISDSqliteChangeStore setSqliteCacheSize:]
-[ISDSqliteChangeStore _insertChange:]
-[ISDSqliteChangeStore enumerateAddsForEntityNames:asArgumentToFunction:context:]
-[ISDSqliteChangeStore enumerateChangesForEntityNames:asArgumentToFunction:context:]
-[ISDSqliteChangeStore deleteChanges:]
-[ISDSqliteChangeStore replaceRecordId:withRecordId:]
__updateRecordIdReference
-[ISDSqliteChangeStore replaceRelationshipTupleId:withRelationshipTupleId:]
__updateTupleIdReference
-[ISDSqliteChangeStore updateChangePropertiesForChange:]
-[ISDSqliteChangeStore(DataReferences) dirtyCoderDelegate]
___115-[ISDSqliteChangeStore(ChangeStoreBaseRollingLegacyMethods) clearSpuriousUnresolvedReferencesToPhantomsInIdMapper:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[ISDSqliteChangeStore(Helpers) numberOfUnprocessedChanges]
-[ISDSqliteChangeStore(Helpers) numberOfProcessedChanges]
-[ISDSqliteChangeStore(Helpers) greatestEnumeratedToGeneration]
__markExistsFlag
-[ISDSqliteChangeStore(Helpers) enumeratedChangesCount]
-[ISDSqliteChangeStore(Helpers) enableSqliteTracing:]
-[ISDSqliteChangeStore(Helpers) disableSqliteTracing]
-[ISDSqliteChangeStore(ArchivedChanges) enumerateProcessedChangesForEntityNames:asArgumentToFunction:context:]
-[ISDSqliteChangeStore(ArchivedChanges) purgeProcessedChangesLessThanToGeneration:]
-[ISDSqliteChangeStore(ArchivedChanges) removeAllProcessedChangesForEntityNames:]
-[ISDSqliteChangeStore(ArchivedChanges) earliestFromGenerationOfProcessedRecordsForEntityName:]
-[ISDSqliteChangeStore(ArchivedChanges) latestFromGenerationOfProcessedRecordsForEntityName:]
-[ISDSqliteChangeStore(ArchivedChanges) indexSetOfEnumeratedChanges]
-[ISDSqliteChangeStore(ArchivedChanges) setNumGenerationsToRetain:]
-[PresetNameNumberProvider invalidate]
-[PresetNameNumberProvider reset]
+[ISDNameNumberProvider defaultProvider]
+[ISDNameNumberProvider revertToDefault]
+[ISDNameNumberProvider replaceProvider:]
+[ISDNameNumberProvider setSyncClientCanCreateMappings:]
+[ISDNameNumberProvider syncClientCanCreateMappings]
-[ISDNameNumberProvider isDefaultProvider]
-[ISDNameNumberProvider clear]
-[ISDNameNumberProvider invalidate]
-[ISDNameNumberProvider isReplaceable]
-[ISDNameNumberProvider makeIrreplaceable]
-[ISDNameNumberProvider allMappings]
-[ISDNameNumberProvider dealloc]
-[ISDNameNumberProvider finalize]
-[ISDNameNumberProvider foundMappingForNewName:inMap:]
-[ISDNameNumberProvider refresh]
-[ISDNameNumberProvider reset]
-[ISDNameNumberProvider canSaveMappings]
-[ISDNameNumberProvider saveMappingsFor:]
-[ISDNameNumberProvider saveMappings]
-[ISDNameNumberProvider mergeMissingMappingsFrom:]
-[ISDNameNumberProvider canCreateNewMapping]
-[ISDNameNumberProvider allowNonPersistentCreation]
-[DefaultNameNumberProvider init]
-[DefaultNameNumberProvider isDefaultProvider]
-[DefaultNameNumberProvider makeIrreplaceable]
-[DefaultNameNumberProvider clear]
-[DefaultNameNumberProvider invalidate]
-[ISDNameNumberMapping mergeOrReplaceFromMap:]
-[ISDNameNumberMapping isClientMapping]
-[ISDNameNumberMapping isEntityMapping]
-[ISDNameNumberMapping canBeMergedWith:]
-[ISDNameNumberMapping mergeNameNumberMapping:]
-[ISDNameNumberMapping nameToNumberMap]
-[ISDNameNumberMapping dealloc]
-[ISDNameNumberMapping clear]
-[ISDNameNumberMapping intForName:]
-[ISDNameNumberMapping setInt:forName:]
-[ISDNameNumberMapping setNumber:forName:]
-[ISDNameNumberMapping mapNextIntToName:]
-[ISDNameNumberMapping hasMappingForName:]
-[ISDDataDirectoryVersion initWithDataVersion:]
-[ISDDataDirectoryVersion isTiger]
-[ISDDataDirectoryVersion isLeopard]
-[ISDDataDirectoryVersion isSnowLeopard]
-[ISDDataDirectoryVersion dataDirectoryType]
-[ISDGlobalId classForCoder]
-[ISDGlobalId initWithCoder:]
-[ISDGlobalId encodeWithCoder:]
-[ISDGlobalId retainedDescription]
-[ISDGlobalId isEqualTo:]
-[NSString(ISDGlobalIdSupport) isd_uniquedGlobalId]
-[NSTextAttachment(SyncServicesAdditions) isd_isEqualToNSTextAttachment:]
GCC_except_table3
GCC_except_table19
GCC_except_table23
GCC_except_table25
GCC_except_table28
GCC_except_table29
GCC_except_table31
GCC_except_table32
GCC_except_table33
GCC_except_table34
GCC_except_table36
GCC_except_table37
GCC_except_table10
GCC_except_table11
GCC_except_table22
GCC_except_table23
GCC_except_table25
GCC_except_table80
GCC_except_table81
GCC_except_table103
GCC_except_table109
GCC_except_table137
GCC_except_table139
GCC_except_table148
GCC_except_table7
GCC_except_table46
GCC_except_table87
GCC_except_table93
GCC_except_table98
GCC_except_table99
GCC_except_table105
GCC_except_table108
GCC_except_table12
GCC_except_table14
GCC_except_table40
GCC_except_table54
GCC_except_table70
GCC_except_table10
GCC_except_table20
GCC_except_table22
GCC_except_table38
GCC_except_table67
GCC_except_table69
GCC_except_table73
GCC_except_table79
GCC_except_table98
GCC_except_table106
GCC_except_table10
GCC_except_table12
GCC_except_table13
GCC_except_table14
GCC_except_table15
GCC_except_table16
GCC_except_table17
GCC_except_table18
GCC_except_table24
GCC_except_table25
GCC_except_table26
GCC_except_table28
GCC_except_table29
GCC_except_table30
GCC_except_table35
GCC_except_table36
GCC_except_table48
GCC_except_table59
GCC_except_table60
GCC_except_table61
GCC_except_table62
GCC_except_table63
GCC_except_table64
GCC_except_table65
GCC_except_table67
GCC_except_table68
GCC_except_table69
GCC_except_table70
GCC_except_table71
GCC_except_table72
GCC_except_table73
GCC_except_table74
GCC_except_table75
GCC_except_table76
GCC_except_table77
GCC_except_table78
GCC_except_table79
GCC_except_table80
GCC_except_table81
GCC_except_table82
GCC_except_table83
GCC_except_table84
GCC_except_table85
GCC_except_table86
GCC_except_table87
GCC_except_table88
GCC_except_table89
GCC_except_table90
GCC_except_table91
GCC_except_table92
GCC_except_table93
GCC_except_table94
GCC_except_table98
GCC_except_table99
GCC_except_table109
GCC_except_table110
GCC_except_table112
GCC_except_table114
GCC_except_table115
GCC_except_table117
GCC_except_table122
GCC_except_table123
GCC_except_table125
GCC_except_table126
GCC_except_table127
GCC_except_table128
GCC_except_table134
GCC_except_table135
GCC_except_table136
GCC_except_table137
GCC_except_table139
GCC_except_table140
GCC_except_table141
GCC_except_table142
GCC_except_table144
GCC_except_table155
GCC_except_table161
GCC_except_table162
GCC_except_table163
GCC_except_table166
GCC_except_table169
GCC_except_table170
GCC_except_table171
GCC_except_table172
GCC_except_table173
GCC_except_table174
GCC_except_table175
GCC_except_table176
GCC_except_table177
GCC_except_table183
GCC_except_table191
GCC_except_table192
GCC_except_table12
GCC_except_table36
GCC_except_table58
GCC_except_table78
GCC_except_table79
GCC_except_table80
GCC_except_table86
GCC_except_table109
GCC_except_table118
GCC_except_table126
GCC_except_table141
GCC_except_table143
GCC_except_table153
GCC_except_table154
GCC_except_table156
GCC_except_table158
GCC_except_table181
GCC_except_table182
GCC_except_table190
GCC_except_table194
GCC_except_table202
GCC_except_table207
GCC_except_table212
GCC_except_table213
GCC_except_table216
GCC_except_table217
GCC_except_table218
GCC_except_table219
GCC_except_table220
GCC_except_table221
GCC_except_table222
GCC_except_table223
GCC_except_table224
GCC_except_table225
GCC_except_table226
GCC_except_table227
GCC_except_table228
GCC_except_table229
GCC_except_table230
GCC_except_table231
GCC_except_table232
GCC_except_table233
GCC_except_table234
GCC_except_table236
GCC_except_table237
GCC_except_table239
GCC_except_table240
GCC_except_table241
GCC_except_table242
GCC_except_table243
GCC_except_table244
GCC_except_table246
GCC_except_table57
GCC_except_table58
GCC_except_table143
GCC_except_table156
GCC_except_table157
GCC_except_table41
GCC_except_table44
GCC_except_table48
GCC_except_table0
GCC_except_table5
GCC_except_table7
GCC_except_table26
GCC_except_table28
GCC_except_table30
GCC_except_table31
GCC_except_table1
GCC_except_table0
GCC_except_table13
GCC_except_table13
GCC_except_table14
GCC_except_table15
GCC_except_table18
GCC_except_table21
GCC_except_table33
GCC_except_table37
GCC_except_table18
GCC_except_table8
GCC_except_table37
GCC_except_table26
GCC_except_table7
GCC_except_table7
GCC_except_table15
GCC_except_table1
GCC_except_table30
GCC_except_table31
GCC_except_table32
GCC_except_table40
GCC_except_table41
GCC_except_table42
GCC_except_table43
GCC_except_table44
GCC_except_table45
GCC_except_table46
GCC_except_table7
GCC_except_table12
GCC_except_table13
GCC_except_table0
GCC_except_table25
GCC_except_table33
GCC_except_table39
GCC_except_table7
GCC_except_table34
GCC_except_table30
GCC_except_table32
GCC_except_table47
GCC_except_table0
GCC_except_table0
GCC_except_table18
GCC_except_table32
GCC_except_table44
GCC_except_table45
GCC_except_table9
GCC_except_table10
GCC_except_table11
GCC_except_table12
GCC_except_table13
GCC_except_table14
GCC_except_table15
GCC_except_table16
GCC_except_table0
GCC_except_table5
GCC_except_table8
GCC_except_table9
GCC_except_table13
GCC_except_table15
GCC_except_table16
GCC_except_table19
GCC_except_table25
GCC_except_table26
GCC_except_table44
GCC_except_table45
GCC_except_table50
GCC_except_table51
GCC_except_table52
GCC_except_table54
GCC_except_table56
GCC_except_table58
GCC_except_table59
GCC_except_table61
GCC_except_table62
-[ISDClientState unacceptedRecordIdsForEntityName:].states
__waitABit.rqtp
-[ISDGlobalId characterAtIndex:].guid_offset
-[ISDGlobalId characterAtIndex:].hexLetters
___block_descriptor_tmp
___block_descriptor_tmp365
___block_descriptor_tmp
___block_descriptor_tmp321
___block_descriptor_tmp325
___block_descriptor_tmp440
___block_descriptor_tmp663
___block_descriptor_tmp673
___block_descriptor_tmp679
___block_descriptor_tmp764
___block_descriptor_tmp782
___block_descriptor_tmp
___block_descriptor_tmp280
___block_descriptor_tmp400
___block_descriptor_tmp456
___block_descriptor_tmp460
___block_descriptor_tmp575
___block_descriptor_tmp
___block_descriptor_tmp266
___block_descriptor_tmp271
___block_descriptor_tmp275
___block_literal_global
___block_descriptor_tmp279
___block_literal_global280
___block_descriptor_tmp492
___block_descriptor_tmp823
___block_descriptor_tmp
___block_descriptor_tmp737
___block_descriptor_tmp758
___block_descriptor_tmp519
___block_descriptor_tmp664
-[ISyncConcreteManager init].valueCallBacks
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp601
-[ISDChange description].changeTypeNames
-[ISDPropertyChange description].actionNames
___block_descriptor_tmp
___block_descriptor_tmp395
___block_descriptor_tmp
___block_descriptor_tmp31
___block_descriptor_tmp50
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp262
___block_descriptor_tmp
___block_descriptor_tmp264
___block_descriptor_tmp
___block_descriptor_tmp
_pLogFile
__CopyDataReferencesAsData
-[ISDAdminDatabase expectedSyncMode:].expectedSlowSyncClients
_FlushCounterKey
_PreNameNumberKey
-[ISDDataManager _isInvalidClient:].privatePropertyNames
___schemaKnownKeys
___dataclassKnownKeys
___entityKnownKeys
___attributeKnownKeys
___relationshipKnownKeys
___inverseRelationshipKnownKeys
-[ISDSchemaParser _validateTypeSimply:].pAtomicTypeSet
___ISDFriendlyExceptionIsOn
___ISDExceptionLogStackTraceOnException
_pServer
_pGate
_pDefaultManager
-[ISyncConcreteManager registerSchemaWithDescriptionFilePath:].pScreamAndShout
_pSyncServerName
_ISyncRecordSnapshotTableKey
_InstalledSpecialMachPortKey
_metaPropertiesSet
_classForISyncDataType.pTypeMap
_ISDIsAppleInternalUser.runOnce
_ISDIsAppleInternalUser.isAppleInternalUser
_sFiguredOutIfHomeDirectoryIsOnSharedNetworkDrive
_sHomeDirectoryIsOnSharedNetworkDrive
___ISDDefaultSyncServicesDirectoryPath.pSyncServicesDirectoryPath
___ISDDefaultSyncServicesLogDirectoryPath.pSyncServicesLogDirectoryPath
__ISDDefaultLogDirectoryPath.pLogDirectoryPath
__ISDDefaultDataDirectoryPath.pDataDirectoryPath
_ISDGetHostUUIDString.__hostUUIDString
_sFiguredOutThatDataWrappersAreDisbled
_sDataWrappersAreDisabled
_UniquingStringTableKey
_pLogSql
_pEnabledFacilities
_pFormatter
_pLogPersonalData
_pKeysToAlwayBeLogged
__ISDLogAllFacilities
_pPID
_processName
_sLogFileNames
_pLogFileDirectory
_pUseNSLog
_pWarnedAboutLogFileOpenFailure
_pLastStatDate
_pInode
__WarnAboutUsingISyncDataClassImageKey.pScreamAndShout
-[ISDQuickDirtyCoder decodeRecordIdMap].pClass
-[ISDQuickDirtyCoder decodeGlobalId].pClass
-[ISDQuickDirtyCoder decodeRecordIdMapper].pClass
-[ISDQuickDirtyCoder decodeChange].pClass
-[ISDQuickDirtyCoder decodeChangeDelta].pClass
_LegacyMode
__DataReferenceDirectory
__SharedDigestMaker
__cdIVarExtensions
_SharedDefaultProvider
_NameNumberMapProvider
__syncClientCanCreateNewMapping
_isd_clientAsNumber.zero
-[ISDNameNumberMapping numberForName:].zeroNum
_UniquingGlobalIdKey
_ISDArrayAsGlobalIds
_ISDAsGlobalId
_ISDAvailabilityChangedNotification
_ISDBadNewsException
_ISDCleanupExtraLogFiles
_ISDCleanupLogFiles
_ISDDefaultDoublePrecision
_ISDEnableAllFacilities
_ISDEnableFacility
_ISDGetHostUUIDString
_ISDGlobalIdException
_ISDInitializeLogging
_ISDIsAppleInternalUser
_ISDMessageTrace
_ISDMinglerRunLoopMode
_ISDPropertyValueShouldNotEncodeTuplesKey
_ISDRemoveOrMoveAside
_ISDRollLogsInDirectory
_ISDSQLiteCannotOpenDatabaseException
_ISDSQLiteNotSQLiteDatabaseException
_ISDSQLiteObjectBindingException
_ISDSQLiteStatementExecutionException
_ISDSQLiteStatementPreparationException
_ISDSQLiteTimeoutReachedException
_ISDServerIsRunningPort
_ISDSetLogFileDirectory
_ISDStringFromSyncMode
_ISDSyncDatabaseIsClosedException
_ISDSyncingWithOtherClients
_ISyncAbstractClassException
_ISyncAddedConflictsKey
_ISyncAirbagAddedRecordIdsKey
_ISyncAirbagChangesKey
_ISyncAirbagClientIdKey
_ISyncAirbagDeletedRecordIdsKey
_ISyncAirbagDeletedSubEntityIds
_ISyncAirbagIdentityMatchedRecordIdMap
_ISyncAirbagModifiedRecordIdsKey
_ISyncAirbagSubEntityToClientParentKey
_ISyncAirbagSubEntityToEntityName
_ISyncAirbagSubEntityToTruthParentKey
_ISyncAttribute_Bookmarks_Bookmark_Name
_ISyncAttribute_Bookmarks_Bookmark_Position
_ISyncAttribute_Bookmarks_Bookmark_Url
_ISyncAttribute_Bookmarks_Folder_Name
_ISyncAttribute_Bookmarks_Folder_Position
_ISyncAttribute_Calendars_Attendee_CommonName
_ISyncAttribute_Calendars_Attendee_Delegatedfrom
_ISyncAttribute_Calendars_Attendee_Delegatedto
_ISyncAttribute_Calendars_Attendee_DirectoryEntry
_ISyncAttribute_Calendars_Attendee_Email
_ISyncAttribute_Calendars_Attendee_Role
_ISyncAttribute_Calendars_Attendee_Rsvp
_ISyncAttribute_Calendars_Attendee_Status
_ISyncAttribute_Calendars_Attendee_UserType
_ISyncAttribute_Calendars_AudioAlarm_Description
_ISyncAttribute_Calendars_AudioAlarm_RepeatCount
_ISyncAttribute_Calendars_AudioAlarm_RepeatInterval
_ISyncAttribute_Calendars_AudioAlarm_Summary
_ISyncAttribute_Calendars_AudioAlarm_Triggerdate
_ISyncAttribute_Calendars_AudioAlarm_Triggerduration
_ISyncAttribute_Calendars_CalDAVAccount_DisplayName
_ISyncAttribute_Calendars_CalDAVAccount_FullName
_ISyncAttribute_Calendars_CalDAVAccount_IsAutoDiscovery
_ISyncAttribute_Calendars_CalDAVAccount_Login
_ISyncAttribute_Calendars_CalDAVAccount_Order
_ISyncAttribute_Calendars_CalDAVAccount_PrincipalURL
_ISyncAttribute_Calendars_CalDAVAccount_RefreshInterval
_ISyncAttribute_Calendars_CalDAVAccount_UseKerberos
_ISyncAttribute_Calendars_CalendarOrder_Identity
_ISyncAttribute_Calendars_Calendar_Color
_ISyncAttribute_Calendars_Calendar_Notes
_ISyncAttribute_Calendars_Calendar_ReadOnly
_ISyncAttribute_Calendars_Calendar_Title
_ISyncAttribute_Calendars_Calendar_Url
_ISyncAttribute_Calendars_DisplayAlarm_Description
_ISyncAttribute_Calendars_DisplayAlarm_RepeatCount
_ISyncAttribute_Calendars_DisplayAlarm_RepeatInterval
_ISyncAttribute_Calendars_DisplayAlarm_Triggerdate
_ISyncAttribute_Calendars_DisplayAlarm_Triggerduration
_ISyncAttribute_Calendars_Event_AllDay
_ISyncAttribute_Calendars_Event_Classification
_ISyncAttribute_Calendars_Event_Description
_ISyncAttribute_Calendars_Event_EndDate
_ISyncAttribute_Calendars_Event_ExceptionDates
_ISyncAttribute_Calendars_Event_InvitationId
_ISyncAttribute_Calendars_Event_InvitationSequence
_ISyncAttribute_Calendars_Event_InvitationTimestamp
_ISyncAttribute_Calendars_Event_Location
_ISyncAttribute_Calendars_Event_OriginalDate
_ISyncAttribute_Calendars_Event_Priority
_ISyncAttribute_Calendars_Event_StartDate
_ISyncAttribute_Calendars_Event_Status
_ISyncAttribute_Calendars_Event_Summary
_ISyncAttribute_Calendars_Event_Url
_ISyncAttribute_Calendars_MailAlarm_Description
_ISyncAttribute_Calendars_MailAlarm_Recipients
_ISyncAttribute_Calendars_MailAlarm_RepeatCount
_ISyncAttribute_Calendars_MailAlarm_RepeatInterval
_ISyncAttribute_Calendars_MailAlarm_Summary
_ISyncAttribute_Calendars_MailAlarm_Triggerdate
_ISyncAttribute_Calendars_MailAlarm_Triggerduration
_ISyncAttribute_Calendars_Organizer_CommonName
_ISyncAttribute_Calendars_Organizer_DirectoryEntry
_ISyncAttribute_Calendars_Organizer_Email
_ISyncAttribute_Calendars_Recurrence_Bydaydays
_ISyncAttribute_Calendars_Recurrence_Bydayfreq
_ISyncAttribute_Calendars_Recurrence_Bymonth
_ISyncAttribute_Calendars_Recurrence_Bymonthday
_ISyncAttribute_Calendars_Recurrence_Bysetpos
_ISyncAttribute_Calendars_Recurrence_Byweeknumber
_ISyncAttribute_Calendars_Recurrence_Byyearday
_ISyncAttribute_Calendars_Recurrence_Count
_ISyncAttribute_Calendars_Recurrence_Frequency
_ISyncAttribute_Calendars_Recurrence_Interval
_ISyncAttribute_Calendars_Recurrence_Until
_ISyncAttribute_Calendars_Recurrence_Weekstartday
_ISyncAttribute_Calendars_Task_Classification
_ISyncAttribute_Calendars_Task_CompletionDate
_ISyncAttribute_Calendars_Task_Description
_ISyncAttribute_Calendars_Task_DueDate
_ISyncAttribute_Calendars_Task_DueDateIsDateOnly
_ISyncAttribute_Calendars_Task_ExceptionDates
_ISyncAttribute_Calendars_Task_OriginalDate
_ISyncAttribute_Calendars_Task_Priority
_ISyncAttribute_Calendars_Task_StartDate
_ISyncAttribute_Calendars_Task_Status
_ISyncAttribute_Calendars_Task_Summary
_ISyncAttribute_Calendars_Task_Url
_ISyncAttribute_Com_Apple_Notes_Attachment_AttachmentID
_ISyncAttribute_Com_Apple_Notes_Attachment_Content
_ISyncAttribute_Com_Apple_Notes_Attachment_ContentType
_ISyncAttribute_Com_Apple_Notes_Attachment_Name
_ISyncAttribute_Com_Apple_Notes_Keyword_Name
_ISyncAttribute_Com_Apple_Notes_Note_Author
_ISyncAttribute_Com_Apple_Notes_Note_Content
_ISyncAttribute_Com_Apple_Notes_Note_ContentType
_ISyncAttribute_Com_Apple_Notes_Note_DateCreated
_ISyncAttribute_Com_Apple_Notes_Note_DateModified
_ISyncAttribute_Com_Apple_Notes_Note_Subject
_ISyncAttribute_Contacts_CalendarURI_Label
_ISyncAttribute_Contacts_CalendarURI_Type
_ISyncAttribute_Contacts_CalendarURI_Value
_ISyncAttribute_Contacts_Contact_Birthday
_ISyncAttribute_Contacts_Contact_Birthday_Calendar_Identifier
_ISyncAttribute_Contacts_Contact_CompanyName
_ISyncAttribute_Contacts_Contact_CompanyNameYomi
_ISyncAttribute_Contacts_Contact_Department
_ISyncAttribute_Contacts_Contact_DisplayAsCompany
_ISyncAttribute_Contacts_Contact_DisplayOrder
_ISyncAttribute_Contacts_Contact_DisplayType
_ISyncAttribute_Contacts_Contact_FirstName
_ISyncAttribute_Contacts_Contact_FirstNameYomi
_ISyncAttribute_Contacts_Contact_Hobby
_ISyncAttribute_Contacts_Contact_Image
_ISyncAttribute_Contacts_Contact_JobTitle
_ISyncAttribute_Contacts_Contact_LastName
_ISyncAttribute_Contacts_Contact_LastNameYomi
_ISyncAttribute_Contacts_Contact_MaidenName
_ISyncAttribute_Contacts_Contact_MiddleName
_ISyncAttribute_Contacts_Contact_MiddleNameYomi
_ISyncAttribute_Contacts_Contact_Nickname
_ISyncAttribute_Contacts_Contact_Notes
_ISyncAttribute_Contacts_Contact_OriginalImage
_ISyncAttribute_Contacts_Contact_ShortName
_ISyncAttribute_Contacts_Contact_Suffix
_ISyncAttribute_Contacts_Contact_TickerSymbol
_ISyncAttribute_Contacts_Contact_Title
_ISyncAttribute_Contacts_CustomField_Label
_ISyncAttribute_Contacts_CustomField_Value
_ISyncAttribute_Contacts_Date_Calendar_Identifier
_ISyncAttribute_Contacts_Date_Label
_ISyncAttribute_Contacts_Date_Type
_ISyncAttribute_Contacts_Date_Value
_ISyncAttribute_Contacts_EmailAddress_Label
_ISyncAttribute_Contacts_EmailAddress_Type
_ISyncAttribute_Contacts_EmailAddress_Value
_ISyncAttribute_Contacts_Group_Name
_ISyncAttribute_Contacts_Group_Qualifier
_ISyncAttribute_Contacts_IM_Extended_Service_Type
_ISyncAttribute_Contacts_IM_Label
_ISyncAttribute_Contacts_IM_Service
_ISyncAttribute_Contacts_IM_Type
_ISyncAttribute_Contacts_IM_User
_ISyncAttribute_Contacts_ImageTransformationInfo_Height
_ISyncAttribute_Contacts_ImageTransformationInfo_OriginX
_ISyncAttribute_Contacts_ImageTransformationInfo_OriginY
_ISyncAttribute_Contacts_ImageTransformationInfo_Type
_ISyncAttribute_Contacts_ImageTransformationInfo_Width
_ISyncAttribute_Contacts_PhoneNumber_Label
_ISyncAttribute_Contacts_PhoneNumber_Type
_ISyncAttribute_Contacts_PhoneNumber_Value
_ISyncAttribute_Contacts_RelatedName_Label
_ISyncAttribute_Contacts_RelatedName_Type
_ISyncAttribute_Contacts_RelatedName_Value
_ISyncAttribute_Contacts_StreetAddress_City
_ISyncAttribute_Contacts_StreetAddress_Country
_ISyncAttribute_Contacts_StreetAddress_CountryCode
_ISyncAttribute_Contacts_StreetAddress_Label
_ISyncAttribute_Contacts_StreetAddress_PostalCode
_ISyncAttribute_Contacts_StreetAddress_State
_ISyncAttribute_Contacts_StreetAddress_Street
_ISyncAttribute_Contacts_StreetAddress_Type
_ISyncAttribute_Contacts_URL_Label
_ISyncAttribute_Contacts_URL_Type
_ISyncAttribute_Contacts_URL_Value
_ISyncAttribute_Contacts_Value
_ISyncAutomaticConflictResolutionPolicyKey
_ISyncAvailabilityChangedNotification
_ISyncChangePropertyActionKey
_ISyncChangePropertyClear
_ISyncChangePropertyNameKey
_ISyncChangePropertySet
_ISyncChangePropertyValueIsDefaultKey
_ISyncChangePropertyValueKey
_ISyncChangedConflictsKey
_ISyncClientAlreadySyncingException
_ISyncClientClientInfoKey
_ISyncClientDataCorruptedException
_ISyncClientDisplayNameKey
_ISyncClientDisplayNameVistaOrLaterKey
_ISyncClientEntitiesKey
_ISyncClientFormatsRelationships
_ISyncClientFormatterBundleClassKey
_ISyncClientFormatterBundlePathKey
_ISyncClientImageBundleIdKey
_ISyncClientImageBundleRelativePathKey
_ISyncClientImagePathKey
_ISyncClientLocalizationBundlePathKey
_ISyncClientNeverFormatsRelationships
_ISyncClientPullOnlyEntitiesKey
_ISyncClientPushOnlyEntitiesKey
_ISyncClientSyncAlertToolBundleIdKey
_ISyncClientSyncAlertToolBundleRelativePathKey
_ISyncClientSyncAlertToolPathKey
_ISyncClientSyncAlertTypesKey
_ISyncClientSyncAllEntitiesKey
_ISyncClientSyncChangesOnlyKey
_ISyncClientSyncsAfterKey
_ISyncClientSyncsWithKey
_ISyncClientTypeApplication
_ISyncClientTypeDevice
_ISyncClientTypeKey
_ISyncClientTypePeer
_ISyncClientTypeServer
_ISyncConflictDeletedPropertyNamesKey
_ISyncConflictPropertiesKey
_ISyncConflictsChangedNotification
_ISyncCoreDataEntityDataClassKey
_ISyncCoreDataEntityParentKey
_ISyncCoreDataEntitySyncNameKey
_ISyncCoreDataExcludeFromDataChangeAlertKey
_ISyncCoreDataPropertyIdentityPropertiesKey
_ISyncCoreDataSyncableKey
_ISyncDataClassCategoryKey
_ISyncDataClassImageKey
_ISyncDataClassImagePathKey
_ISyncDataClassLongNameKey
_ISyncDataClassNameKey
_ISyncDataClass_Bookmarks
_ISyncDataClass_Calendars
_ISyncDataClass_Com_Apple_Notes
_ISyncDataClass_Contacts
_ISyncDataDirectoryCorruptedException
_ISyncDataReferenceException
_ISyncDataTypeArray
_ISyncDataTypeBoolean
_ISyncDataTypeCalendarDate
_ISyncDataTypeColor
_ISyncDataTypeData
_ISyncDataTypeDate
_ISyncDataTypeDictionary
_ISyncDataTypeEnum
_ISyncDataTypeNumber
_ISyncDataTypeSet
_ISyncDataTypeString
_ISyncDataTypeURL
_ISyncDataWrapperErrorDomain
_ISyncDeletedConflictsKey
_ISyncEntityAttributeEnumValuesKey
_ISyncEntityAttributeNameKey
_ISyncEntityAttributeRequiredKey
_ISyncEntityAttributeSubtypeKey
_ISyncEntityAttributeTypeKey
_ISyncEntityAttributesKey
_ISyncEntityCompoundIdentityPropertiesKey
_ISyncEntityDataClassNameKey
_ISyncEntityExtensionNameKey
_ISyncEntityIdentityPropertiesKey
_ISyncEntityNameKey
_ISyncEntityParentKey
_ISyncEntityPropertyDependenciesKey
_ISyncEntityPropertyIdentityKey
_ISyncEntityPropertyRequiredKey
_ISyncEntityRelationshipDeleteRuleCascade
_ISyncEntityRelationshipDeleteRuleKey
_ISyncEntityRelationshipDeleteRuleNullify
_ISyncEntityRelationshipInverseRelationshipEntityNameKey
_ISyncEntityRelationshipInverseRelationshipRelationshipNameKey
_ISyncEntityRelationshipInverseRelationshipsKey
_ISyncEntityRelationshipMatchableKey
_ISyncEntityRelationshipNameKey
_ISyncEntityRelationshipOrderingKey
_ISyncEntityRelationshipOrderingNone
_ISyncEntityRelationshipOrderingStrong
_ISyncEntityRelationshipOrderingWeak
_ISyncEntityRelationshipOrdinalityKey
_ISyncEntityRelationshipOrdinalityMany
_ISyncEntityRelationshipOrdinalityOne
_ISyncEntityRelationshipRequiredKey
_ISyncEntityRelationshipTargetKey
_ISyncEntityRelationshipsKey
_ISyncEntity_Bookmarks_Bookmark
_ISyncEntity_Bookmarks_Folder
_ISyncEntity_Calendars_Attendee
_ISyncEntity_Calendars_AudioAlarm
_ISyncEntity_Calendars_CalDAVAccount
_ISyncEntity_Calendars_Calendar
_ISyncEntity_Calendars_CalendarOrder
_ISyncEntity_Calendars_DisplayAlarm
_ISyncEntity_Calendars_Event
_ISyncEntity_Calendars_MailAlarm
_ISyncEntity_Calendars_Organizer
_ISyncEntity_Calendars_Recurrence
_ISyncEntity_Calendars_Task
_ISyncEntity_Com_Apple_Notes_Attachment
_ISyncEntity_Com_Apple_Notes_Keyword
_ISyncEntity_Com_Apple_Notes_Note
_ISyncEntity_Contacts_CalendarURI
_ISyncEntity_Contacts_Contact
_ISyncEntity_Contacts_CustomField
_ISyncEntity_Contacts_Date
_ISyncEntity_Contacts_EmailAddress
_ISyncEntity_Contacts_Group
_ISyncEntity_Contacts_IM
_ISyncEntity_Contacts_ImageTransformationInfo
_ISyncEntity_Contacts_PhoneNumber
_ISyncEntity_Contacts_RelatedName
_ISyncEntity_Contacts_StreetAddress
_ISyncEntity_Contacts_URL
_ISyncEnumValue_Contacts_Date_Type_Anniversary
_ISyncEnumValue_Contacts_Date_Type_Other
_ISyncEnumValue_Contacts_EmailAddress_Type_Home
_ISyncEnumValue_Contacts_EmailAddress_Type_Other
_ISyncEnumValue_Contacts_EmailAddress_Type_Work
_ISyncEnumValue_Contacts_PhoneNumber_Type_Home
_ISyncEnumValue_Contacts_PhoneNumber_Type_HomeFax
_ISyncEnumValue_Contacts_PhoneNumber_Type_Main
_ISyncEnumValue_Contacts_PhoneNumber_Type_Mobile
_ISyncEnumValue_Contacts_PhoneNumber_Type_Other
_ISyncEnumValue_Contacts_PhoneNumber_Type_Pager
_ISyncEnumValue_Contacts_PhoneNumber_Type_Work
_ISyncEnumValue_Contacts_PhoneNumber_Type_WorkFax
_ISyncEnumValue_Contacts_RelatedName_Type_Assistant
_ISyncEnumValue_Contacts_RelatedName_Type_Brother
_ISyncEnumValue_Contacts_RelatedName_Type_Child
_ISyncEnumValue_Contacts_RelatedName_Type_Father
_ISyncEnumValue_Contacts_RelatedName_Type_Friend
_ISyncEnumValue_Contacts_RelatedName_Type_Manager
_ISyncEnumValue_Contacts_RelatedName_Type_Mother
_ISyncEnumValue_Contacts_RelatedName_Type_Other
_ISyncEnumValue_Contacts_RelatedName_Type_Parent
_ISyncEnumValue_Contacts_RelatedName_Type_Partner
_ISyncEnumValue_Contacts_RelatedName_Type_Sister
_ISyncEnumValue_Contacts_RelatedName_Type_Spouse
_ISyncEnumValue_Contacts_StreetAddress_Type_Home
_ISyncEnumValue_Contacts_StreetAddress_Type_Other
_ISyncEnumValue_Contacts_StreetAddress_Type_Work
_ISyncEnumValue_Contacts_URL_IM_Type_Home
_ISyncEnumValue_Contacts_URL_IM_Type_Other
_ISyncEnumValue_Contacts_URL_IM_Type_Work
_ISyncEnumValue_Contacts_URL_Type_Home
_ISyncEnumValue_Contacts_URL_Type_HomePage
_ISyncEnumValue_Contacts_URL_Type_Other
_ISyncEnumValue_Contacts_URL_Type_Work
_ISyncErrorDomain
_ISyncExcludeFromDataChangeAlertKey
_ISyncFilesystemFullException
_ISyncInvalidArgumentsException
_ISyncInvalidEntityException
_ISyncInvalidRecordException
_ISyncInvalidRecordIdentifiersKey
_ISyncInvalidRecordReasonsKey
_ISyncInvalidRecordsKey
_ISyncInvalidSchemaException
_ISyncInvalidSchemaVersion
_ISyncJobChangedNotification
_ISyncJobEndedObject
_ISyncManagerException
_ISyncMinglerCrashedException
_ISyncNameNumberMappingException
_ISyncPlanAddedParticipantObject
_ISyncPlanCanceledFromUINotification
_ISyncPlanCancellingObject
_ISyncPlanChangedNotification
_ISyncPlanClientIdentifiersKey
_ISyncPlanCreatedObject
_ISyncPlanDataclassNamesKey
_ISyncPlanEndedObject
_ISyncPlanEntityNamesKey
_ISyncPlanIdentifierKey
_ISyncPlanMinglingObject
_ISyncPlanPullingObject
_ISyncPlanPushingObject
_ISyncPlanRemovedParticipantObject
_ISyncPlanStatusCancelledValue
_ISyncPlanStatusFinishedValue
_ISyncPlanStatusKey
_ISyncPlanTimestampKey
_ISyncRecordDefaultedPropertyNamesKey
_ISyncRecordEntityNameKey
_ISyncRecordGlobalIdEquivalentsKey
_ISyncRecordGlobalIdentityKey
_ISyncRecordKeepAwayFromServersKey
_ISyncRecordModificationTimestampKey
_ISyncRelationship_Bookmarks_Bookmark_Parent
_ISyncRelationship_Bookmarks_Folder_Children
_ISyncRelationship_Bookmarks_Folder_Parent
_ISyncRelationship_Calendars_Attendee_Owner
_ISyncRelationship_Calendars_AudioAlarm_Owner
_ISyncRelationship_Calendars_CalendarOrder_Calendars
_ISyncRelationship_Calendars_Calendar_Events
_ISyncRelationship_Calendars_Calendar_Tasks
_ISyncRelationship_Calendars_DisplayAlarm_Owner
_ISyncRelationship_Calendars_Event_Attendees
_ISyncRelationship_Calendars_Event_AudioAlarms
_ISyncRelationship_Calendars_Event_Calendar
_ISyncRelationship_Calendars_Event_DetachedEvents
_ISyncRelationship_Calendars_Event_DisplayAlarms
_ISyncRelationship_Calendars_Event_MailAlarms
_ISyncRelationship_Calendars_Event_MainEvent
_ISyncRelationship_Calendars_Event_Organizer
_ISyncRelationship_Calendars_Event_Recurrences
_ISyncRelationship_Calendars_MailAlarm_Owner
_ISyncRelationship_Calendars_Organizer_Owner
_ISyncRelationship_Calendars_Recurrence_Owner
_ISyncRelationship_Calendars_Task_Attendees
_ISyncRelationship_Calendars_Task_AudioAlarms
_ISyncRelationship_Calendars_Task_Calendar
_ISyncRelationship_Calendars_Task_DetachedTasks
_ISyncRelationship_Calendars_Task_DisplayAlarms
_ISyncRelationship_Calendars_Task_MailAlarms
_ISyncRelationship_Calendars_Task_MainTask
_ISyncRelationship_Calendars_Task_Organizer
_ISyncRelationship_Calendars_Task_Recurrences
_ISyncRelationship_Com_Apple_Notes_Attachment_Note
_ISyncRelationship_Com_Apple_Notes_Note_Attachments
_ISyncRelationship_Com_Apple_Notes_Note_Keywords
_ISyncRelationship_Contacts_CalendarURI_Contact
_ISyncRelationship_Contacts_Contact_CalendarURIs
_ISyncRelationship_Contacts_Contact_CustomFields
_ISyncRelationship_Contacts_Contact_Dates
_ISyncRelationship_Contacts_Contact_EmailAddresses
_ISyncRelationship_Contacts_Contact_IMs
_ISyncRelationship_Contacts_Contact_ImageTransformationInfo
_ISyncRelationship_Contacts_Contact_ParentGroups
_ISyncRelationship_Contacts_Contact_PhoneNumbers
_ISyncRelationship_Contacts_Contact_PrimaryCalendarURI
_ISyncRelationship_Contacts_Contact_PrimaryCustomField
_ISyncRelationship_Contacts_Contact_PrimaryDate
_ISyncRelationship_Contacts_Contact_PrimaryEmailAddress
_ISyncRelationship_Contacts_Contact_PrimaryIM
_ISyncRelationship_Contacts_Contact_PrimaryPhoneNumber
_ISyncRelationship_Contacts_Contact_PrimaryRelatedName
_ISyncRelationship_Contacts_Contact_PrimaryStreetAddress
_ISyncRelationship_Contacts_Contact_PrimaryURL
_ISyncRelationship_Contacts_Contact_RelatedNames
_ISyncRelationship_Contacts_Contact_StreetAddresses
_ISyncRelationship_Contacts_Contact_URLs
_ISyncRelationship_Contacts_CustomField_Contact
_ISyncRelationship_Contacts_Date_Contact
_ISyncRelationship_Contacts_EmailAddress_Contact
_ISyncRelationship_Contacts_Group_DistributionEmailAddresses
_ISyncRelationship_Contacts_Group_DistributionPhoneNumbers
_ISyncRelationship_Contacts_Group_DistributionStreetAddresses
_ISyncRelationship_Contacts_Group_Members
_ISyncRelationship_Contacts_Group_ParentGroups
_ISyncRelationship_Contacts_IM_Contact
_ISyncRelationship_Contacts_ImageTransformationInfo_Contact
_ISyncRelationship_Contacts_PhoneNumber_Contact
_ISyncRelationship_Contacts_RelatedName_Contact
_ISyncRelationship_Contacts_StreetAddress_Contact
_ISyncRelationship_Contacts_URL_Contact
_ISyncResolutionPolicyClient
_ISyncResolutionPolicyLastModified
_ISyncResolutionPolicyPreferredClientTypesKey
_ISyncResolutionPolicyPreferredRecordKey
_ISyncResolutionPolicyTruth
_ISyncResolvedConflictsKey
_ISyncSchemaBaseMajorVersionKey
_ISyncSchemaBaseMinorVersionKey
_ISyncSchemaBaseNameKey
_ISyncSchemaCommentKey
_ISyncSchemaConflictResolverClassKey
_ISyncSchemaConflictUIHelperClassKey
_ISyncSchemaDataClassesKey
_ISyncSchemaEntitiesKey
_ISyncSchemaMajorVersionKey
_ISyncSchemaManagedObjectModelsKey
_ISyncSchemaMinorVersionKey
_ISyncSchemaNameKey
_ISyncSchemaStrictParsingKey
_ISyncSchemaUIHelperClassKey
_ISyncSchemaValidatorClassKey
_ISyncServerDisabledByPreferenceReason
_ISyncServerDisabledSharedNetworkHomeReason
_ISyncServerDisabledUnknownReason
_ISyncServerDisabledUnresponsiveReason
_ISyncServerNotDisabledReason
_ISyncServerUnavailableAnotherComputerRunningSyncServer
_ISyncServerUnavailableException
_ISyncSessionCancelledException
_ISyncSessionRunLoopMode
_ISyncSessionUnavailableException
_ISyncTruthPusherClientIdKey
_ISyncTruthPusherReasonKey
_ISyncTruthPusherWantsToPullTruthKey
_ISyncUnsupportedEntityException
_OBJC_CLASS_$_DataMgrBasedNameNumberProvider
_OBJC_CLASS_$_DefaultNameNumberProvider
_OBJC_CLASS_$_IDMapping
_OBJC_CLASS_$_ISDAdminDatabase
_OBJC_CLASS_$_ISDCallHistory
_OBJC_CLASS_$_ISDChange
_OBJC_CLASS_$_ISDChangeBuilder
_OBJC_CLASS_$_ISDChangeEnumerator
_OBJC_CLASS_$_ISDChangePuller
_OBJC_CLASS_$_ISDChangePusher
_OBJC_CLASS_$_ISDChangeStore
_OBJC_CLASS_$_ISDClient
_OBJC_CLASS_$_ISDClientState
_OBJC_CLASS_$_ISDConflict
_OBJC_CLASS_$_ISDConflictAddEnumerator
_OBJC_CLASS_$_ISDConflictChangeEnumerator
_OBJC_CLASS_$_ISDConflictManager
_OBJC_CLASS_$_ISDDataClass
_OBJC_CLASS_$_ISDDataDatabase
_OBJC_CLASS_$_ISDDataDirectoryVersion
_OBJC_CLASS_$_ISDDataManager
_OBJC_CLASS_$_ISDDataObject
_OBJC_CLASS_$_ISDDataReference
_OBJC_CLASS_$_ISDDataWrapper
_OBJC_CLASS_$_ISDDatabase
_OBJC_CLASS_$_ISDDigestMaker
_OBJC_CLASS_$_ISDDisabledServer
_OBJC_CLASS_$_ISDEntity
_OBJC_CLASS_$_ISDEntityComponent
_OBJC_CLASS_$_ISDException
_OBJC_CLASS_$_ISDFastCDSyncHelper
_OBJC_CLASS_$_ISDFileReference
_OBJC_CLASS_$_ISDFiltratorThingy
_OBJC_CLASS_$_ISDGlobalId
_OBJC_CLASS_$_ISDIdMapDatabase
_OBJC_CLASS_$_ISDInstrumentedEnumerator
_OBJC_CLASS_$_ISDKeyedArchiverHelperToRemoveSyncStates
_OBJC_CLASS_$_ISDNameNumberMapping
_OBJC_CLASS_$_ISDNameNumberProvider
_OBJC_CLASS_$_ISDObjectGraphWrapper
_OBJC_CLASS_$_ISDPersistentStoreSyncer
_OBJC_CLASS_$_ISDPreNameNumberMapIdMapDatabase
_OBJC_CLASS_$_ISDProperty
_OBJC_CLASS_$_ISDPropertyChange
_OBJC_CLASS_$_ISDPropertyConflict
_OBJC_CLASS_$_ISDPropertyValue
_OBJC_CLASS_$_ISDQuickDirtyCoder
_OBJC_CLASS_$_ISDRecord
_OBJC_CLASS_$_ISDRecordIdMap
_OBJC_CLASS_$_ISDRecordIdMapDatabase
_OBJC_CLASS_$_ISDRecordIdMapper
_OBJC_CLASS_$_ISDRecordStore
_OBJC_CLASS_$_ISDRelationship
_OBJC_CLASS_$_ISDSaveSyncServicesDirectoryCopyHandler
_OBJC_CLASS_$_ISDSchema
_OBJC_CLASS_$_ISDSchemaParser
_OBJC_CLASS_$_ISDServer
_OBJC_CLASS_$_ISDServerFileLockerDelegate
_OBJC_CLASS_$_ISDSqliteChangeStore
_OBJC_CLASS_$_ISDSqliteChangeStoreDatabase
_OBJC_CLASS_$_ISDSqliteRecordIdMapper
_OBJC_CLASS_$_ISDStructuredDelta
_OBJC_CLASS_$_ISDSyncJob
_OBJC_CLASS_$_ISDSyncManager
_OBJC_CLASS_$_ISDSyncParticipant
_OBJC_CLASS_$_ISDSyncPlan
_OBJC_CLASS_$_ISDSyncState
_OBJC_CLASS_$_ISyncAlwaysAcceptFilter
_OBJC_CLASS_$_ISyncChange
_OBJC_CLASS_$_ISyncClient
_OBJC_CLASS_$_ISyncConcreteChange
_OBJC_CLASS_$_ISyncConcreteClient
_OBJC_CLASS_$_ISyncConcreteManager
_OBJC_CLASS_$_ISyncConcreteRecordGraphNode
_OBJC_CLASS_$_ISyncConcreteRecordReference
_OBJC_CLASS_$_ISyncConcreteRecordSnapshot
_OBJC_CLASS_$_ISyncConcreteRecordView
_OBJC_CLASS_$_ISyncConcreteSession
_OBJC_CLASS_$_ISyncConcreteSessionDriver
_OBJC_CLASS_$_ISyncConjunctionFilter
_OBJC_CLASS_$_ISyncFileLocker
_OBJC_CLASS_$_ISyncFilter
_OBJC_CLASS_$_ISyncInstrumentedSession
_OBJC_CLASS_$_ISyncManager
_OBJC_CLASS_$_ISyncPlan
_OBJC_CLASS_$_ISyncRecordGraphNode
_OBJC_CLASS_$_ISyncRecordReference
_OBJC_CLASS_$_ISyncRecordSnapshot
_OBJC_CLASS_$_ISyncRecordView
_OBJC_CLASS_$_ISyncRecordViewWithConflicts
_OBJC_CLASS_$_ISyncRecordWithConflictGraphNode
_OBJC_CLASS_$_ISyncSession
_OBJC_CLASS_$_ISyncSessionDriver
_OBJC_CLASS_$_ISyncSimplyIgnoreLocalsFilter
_OBJC_CLASS_$_ISyncTCCAccessOperation
_OBJC_CLASS_$_PresetNameNumberProvider
_OBJC_CLASS_$_RelationshipInformation
_OBJC_CLASS_$_ServerBasedNameNumberProvider
_OBJC_CLASS_$_SyncClientNameNumberProvider
_OBJC_EHTYPE_$_ISDException
_OBJC_IVAR_$_IDMapping._globalId
_OBJC_IVAR_$_IDMapping._localId
_OBJC_IVAR_$_ISDAdminDatabase._dataManager
_OBJC_IVAR_$_ISDAdminDatabase._dataObjectsToConfigureWithDataManager
_OBJC_IVAR_$_ISDAdminDatabase._getAllClientsStatement
_OBJC_IVAR_$_ISDAdminDatabase._getEarliestGenerationsForEntitiesStatement
_OBJC_IVAR_$_ISDAdminDatabase._getMostRecentSyncDatesForClientsStatement
_OBJC_IVAR_$_ISDAdminDatabase._getSyncGenerationStatement
_OBJC_IVAR_$_ISDAdminDatabase._getSyncPlanBeforeDateStatement
_OBJC_IVAR_$_ISDAdminDatabase._getSyncStateStatement
_OBJC_IVAR_$_ISDAdminDatabase._getTableNamesStatement
_OBJC_IVAR_$_ISDAdminDatabase._insertClientStatement
_OBJC_IVAR_$_ISDAdminDatabase._purgeClientSyncModesStatement
_OBJC_IVAR_$_ISDAdminDatabase._purgeSyncDetailStatement
_OBJC_IVAR_$_ISDAdminDatabase._recordSyncModesStatement
_OBJC_IVAR_$_ISDAdminDatabase._recordSyncPlanStatement
_OBJC_IVAR_$_ISDAdminDatabase._removeClientStatement
_OBJC_IVAR_$_ISDAdminDatabase._removeSyncStateForClientStatement
_OBJC_IVAR_$_ISDAdminDatabase._removeSyncStateForEntityStatement
_OBJC_IVAR_$_ISDAdminDatabase._setSyncGenerationStatement
_OBJC_IVAR_$_ISDAdminDatabase._setSyncStateStatement
_OBJC_IVAR_$_ISDAdminDatabase._threadWithLock
_OBJC_IVAR_$_ISDAdminDatabase._transactionLock
_OBJC_IVAR_$_ISDCallHistory._callHistory
_OBJC_IVAR_$_ISDCallHistory._clientIdentifier
_OBJC_IVAR_$_ISDCallHistory._filename
_OBJC_IVAR_$_ISDCallHistory._saveCallHistoryAggressively
_OBJC_IVAR_$_ISDChange._changeSourceIndex
_OBJC_IVAR_$_ISDChange._clientId
_OBJC_IVAR_$_ISDChange._entityName
_OBJC_IVAR_$_ISDChange._fromGeneration
_OBJC_IVAR_$_ISDChange._identityHash
_OBJC_IVAR_$_ISDChange._modificationDate
_OBJC_IVAR_$_ISDChange._propertyChanges
_OBJC_IVAR_$_ISDChange._recordId
_OBJC_IVAR_$_ISDChange._toGeneration
_OBJC_IVAR_$_ISDChange._type
_OBJC_IVAR_$_ISDChangeBuilder._change
_OBJC_IVAR_$_ISDChangeBuilder._clientId
_OBJC_IVAR_$_ISDChangeBuilder._clientIsTrusted
_OBJC_IVAR_$_ISDChangeBuilder._clientRecordStore
_OBJC_IVAR_$_ISDChangeBuilder._defaultPropertyNames
_OBJC_IVAR_$_ISDChangeBuilder._delegate
_OBJC_IVAR_$_ISDChangeBuilder._deletedPropertyNames
_OBJC_IVAR_$_ISDChangeBuilder._deltas
_OBJC_IVAR_$_ISDChangeBuilder._entity
_OBJC_IVAR_$_ISDChangeBuilder._fromGeneration
_OBJC_IVAR_$_ISDChangeBuilder._hasNewRecord
_OBJC_IVAR_$_ISDChangeBuilder._hasOldRecord
_OBJC_IVAR_$_ISDChangeBuilder._isPushingTruth
_OBJC_IVAR_$_ISDChangeBuilder._missingCodependentPropertyNames
_OBJC_IVAR_$_ISDChangeBuilder._newRelationshipValuesAreTuples
_OBJC_IVAR_$_ISDChangeBuilder._newValues
_OBJC_IVAR_$_ISDChangeBuilder._oldUnformattedRelationships
_OBJC_IVAR_$_ISDChangeBuilder._oldValues
_OBJC_IVAR_$_ISDChangeBuilder._produceDeletesForMissingNewValues
_OBJC_IVAR_$_ISDChangeBuilder._recordId
_OBJC_IVAR_$_ISDChangeBuilder._relationshipNewReferences
_OBJC_IVAR_$_ISDChangeBuilder._supportedPropertyNames
_OBJC_IVAR_$_ISDChangeBuilder._takeMissingCodependentValuesFromOldValues
_OBJC_IVAR_$_ISDChangeBuilder._toGeneration
_OBJC_IVAR_$_ISDChangeEnumerator._clientRecordCache
_OBJC_IVAR_$_ISDChangeEnumerator._clientRecordCacheIndex
_OBJC_IVAR_$_ISDChangeEnumerator._clientStore
_OBJC_IVAR_$_ISDChangeEnumerator._recordIdIndex
_OBJC_IVAR_$_ISDChangeEnumerator._recordIds
_OBJC_IVAR_$_ISDChangeEnumerator._session
_OBJC_IVAR_$_ISDChangeEnumerator._truth
_OBJC_IVAR_$_ISDChangeEnumerator._truthRecordCache
_OBJC_IVAR_$_ISDChangeEnumerator._truthRecordCacheIndex
_OBJC_IVAR_$_ISDChangePuller._mapper
_OBJC_IVAR_$_ISDChangePuller._record
_OBJC_IVAR_$_ISDChangePusher._clientFormatsRelationships
_OBJC_IVAR_$_ISDChangePusher._clientId
_OBJC_IVAR_$_ISDChangePusher._record
_OBJC_IVAR_$_ISDChangeStore._addChanges
_OBJC_IVAR_$_ISDChangeStore._addedChangeIndex
_OBJC_IVAR_$_ISDChangeStore._changes
_OBJC_IVAR_$_ISDChangeStore._deletedAddedRecordIdsIndex
_OBJC_IVAR_$_ISDChangeStore._didSkipRecordsWhenEnumerating
_OBJC_IVAR_$_ISDChangeStore._dirty
_OBJC_IVAR_$_ISDChangeStore._dirtyCoderDelegate
_OBJC_IVAR_$_ISDChangeStore._enumeratedRecordIds
_OBJC_IVAR_$_ISDChangeStore._flushCount
_OBJC_IVAR_$_ISDChangeStore._modifiedChangeIndex
_OBJC_IVAR_$_ISDChangeStore._path
_OBJC_IVAR_$_ISDChangeStore._recordIdReferences
_OBJC_IVAR_$_ISDClient._clientId
_OBJC_IVAR_$_ISDClient._clientType
_OBJC_IVAR_$_ISDClient._descriptionFile
_OBJC_IVAR_$_ISDClient._displayName
_OBJC_IVAR_$_ISDClient._filterData
_OBJC_IVAR_$_ISDClient._formatterBundle
_OBJC_IVAR_$_ISDClient._formatterBundleClassName
_OBJC_IVAR_$_ISDClient._hasDynamicSyncAlertHandler
_OBJC_IVAR_$_ISDClient._idNumber
_OBJC_IVAR_$_ISDClient._imageFile
_OBJC_IVAR_$_ISDClient._isAppProvider
_OBJC_IVAR_$_ISDClient._localizationBundleRef
_OBJC_IVAR_$_ISDClient._neverFormatsRelationships
_OBJC_IVAR_$_ISDClient._syncAlertTool
_OBJC_IVAR_$_ISDClient._syncAlertTypes
_OBJC_IVAR_$_ISDClient._syncStates
_OBJC_IVAR_$_ISDClient._synchronizesAllEntities
_OBJC_IVAR_$_ISDClient._syncsAfterClients
_OBJC_IVAR_$_ISDClient._trackRecordModificationTimes
_OBJC_IVAR_$_ISDClient._useLocalIdsForGUIDs
_OBJC_IVAR_$_ISDClientState._changeStore
_OBJC_IVAR_$_ISDClientState._clientId
_OBJC_IVAR_$_ISDClientState._dataDirectory
_OBJC_IVAR_$_ISDClientState._dirtyCoderDelegate
_OBJC_IVAR_$_ISDClientState._flushCount
_OBJC_IVAR_$_ISDClientState._isLocalClientType
_OBJC_IVAR_$_ISDClientState._isTransferClient
_OBJC_IVAR_$_ISDClientState._recordIdMapper
_OBJC_IVAR_$_ISDClientState._recordStore
_OBJC_IVAR_$_ISDClientState._resetHandler
_OBJC_IVAR_$_ISDConflict._dataClassName
_OBJC_IVAR_$_ISDConflict._deletedRecordMap
_OBJC_IVAR_$_ISDConflict._entityName
_OBJC_IVAR_$_ISDConflict._identityKeys
_OBJC_IVAR_$_ISDConflict._propertyConflicts
_OBJC_IVAR_$_ISDConflict._propertyDependencies
_OBJC_IVAR_$_ISDConflict._recordId
_OBJC_IVAR_$_ISDConflictChangeEnumerator._changeQueue
_OBJC_IVAR_$_ISDConflictChangeEnumerator._conflictEnumerator
_OBJC_IVAR_$_ISDConflictChangeEnumerator._conflictManager
_OBJC_IVAR_$_ISDConflictChangeEnumerator._entityNames
_OBJC_IVAR_$_ISDConflictChangeEnumerator._generation
_OBJC_IVAR_$_ISDConflictManager._addedChanges
_OBJC_IVAR_$_ISDConflictManager._conflictWrappers
_OBJC_IVAR_$_ISDConflictManager._conflicts
_OBJC_IVAR_$_ISDConflictManager._deletedRecordMap
_OBJC_IVAR_$_ISDConflictManager._deltaFileNames
_OBJC_IVAR_$_ISDConflictManager._directory
_OBJC_IVAR_$_ISDConflictManager._flushCount
_OBJC_IVAR_$_ISDConflictManager._lastSyncedGeneration
_OBJC_IVAR_$_ISDConflictManager._nextDeltaNumber
_OBJC_IVAR_$_ISDConflictManager._recordIdDataReferenceMap
_OBJC_IVAR_$_ISDConflictManager._resolvedConflicts
_OBJC_IVAR_$_ISDConflictManager._validateConflictsOnRead
_OBJC_IVAR_$_ISDConflictManager._validateConflictsOnWrite
_OBJC_IVAR_$_ISDDataClass._appProviderIdentifier
_OBJC_IVAR_$_ISDDataClass._bundleRef
_OBJC_IVAR_$_ISDDataClass._category
_OBJC_IVAR_$_ISDDataClass._imagePath
_OBJC_IVAR_$_ISDDataClass._longName
_OBJC_IVAR_$_ISDDataClass._name
_OBJC_IVAR_$_ISDDataClass._uiHelperClassName
_OBJC_IVAR_$_ISDDataClass._versionInfo
_OBJC_IVAR_$_ISDDataDatabase._addGlobalEquivalents
_OBJC_IVAR_$_ISDDataDatabase._addRecordDataReferenceStatement
_OBJC_IVAR_$_ISDDataDatabase._addRecordStatement
_OBJC_IVAR_$_ISDDataDatabase._addRelationshipTupleStatement
_OBJC_IVAR_$_ISDDataDatabase._addUnformattedRelationshipTupleStatement
_OBJC_IVAR_$_ISDDataDatabase._containsRecordStatement
_OBJC_IVAR_$_ISDDataDatabase._deleteGlobalEquivalentsByNativeId
_OBJC_IVAR_$_ISDDataDatabase._deleteRecordsByRowid
_OBJC_IVAR_$_ISDDataDatabase._deleteStillBornRecords
_OBJC_IVAR_$_ISDDataDatabase._deleteTuplesByRowid
_OBJC_IVAR_$_ISDDataDatabase._fastSourceEnumerateStatement
_OBJC_IVAR_$_ISDDataDatabase._fastTargetEnumerateStatement
_OBJC_IVAR_$_ISDDataDatabase._getAddCountsStatement
_OBJC_IVAR_$_ISDDataDatabase._getAllRecordDataReferencesStatement
_OBJC_IVAR_$_ISDDataDatabase._getAllRecordIdsThatHaveDataRefsStatement
_OBJC_IVAR_$_ISDDataDatabase._getDeleteCountsStatement
_OBJC_IVAR_$_ISDDataDatabase._getEntitiesForRecordIdsStatement
_OBJC_IVAR_$_ISDDataDatabase._getEntitiesInTruthStatement
_OBJC_IVAR_$_ISDDataDatabase._getEquivalentIds
_OBJC_IVAR_$_ISDDataDatabase._getNativeRecordId
_OBJC_IVAR_$_ISDDataDatabase._getRecordCountsStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordDataReferencesForRecordIdAndPropertyStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordDataReferencesForRecordIdsStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsAddedAfterGenerationStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsFromRowidsStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsOfRecordsWithStatesAndWithEntityNumbersStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsOfRecordsWithoutStatesAndWithEntityNumbersStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsThatExist
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsThatExistIncludeDeleted
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsThatHaveDataRefsWithEntityNumberStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsToBeAppliedWithEntityNumberStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsToPurge
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsUnappliedStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordIdsWithEntityNumberStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordPropertiesForEntityStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordPropertiesStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordsAlteredSinceGenerationStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordsWithPropertiesStatement
_OBJC_IVAR_$_ISDDataDatabase._getRecordsWithoutPropertiesStatement
_OBJC_IVAR_$_ISDDataDatabase._getRelationshipTuplesStatement
_OBJC_IVAR_$_ISDDataDatabase._getRowidsAddedAfterGenerationStatement
_OBJC_IVAR_$_ISDDataDatabase._getRowidsForRecordIdsStatement
_OBJC_IVAR_$_ISDDataDatabase._getToBeAppliedCountWithEntityNumberStatement
_OBJC_IVAR_$_ISDDataDatabase._getTupleRowsToPurge
_OBJC_IVAR_$_ISDDataDatabase._getUndeletedRecordIdsWithEntityNumberStatement
_OBJC_IVAR_$_ISDDataDatabase._getUnformattedTuplesStatement
_OBJC_IVAR_$_ISDDataDatabase._lastGenerationForEntitiesStatement
_OBJC_IVAR_$_ISDDataDatabase._removeAllTuplesStatement
_OBJC_IVAR_$_ISDDataDatabase._removeAllUnformattedTuplesStatement
_OBJC_IVAR_$_ISDDataDatabase._removeGlobalEquivalents
_OBJC_IVAR_$_ISDDataDatabase._removePropertiesStatement
_OBJC_IVAR_$_ISDDataDatabase._removeRecordDataReferencesForRecordIdWithPropertyStatement
_OBJC_IVAR_$_ISDDataDatabase._removeRecordDataReferencesForRecordIdsStatement
_OBJC_IVAR_$_ISDDataDatabase._removeRecordsStatement
_OBJC_IVAR_$_ISDDataDatabase._removeSelectedTuplesStatement
_OBJC_IVAR_$_ISDDataDatabase._removeSelectedUnformattedTuplesStatement
_OBJC_IVAR_$_ISDDataDatabase._removeTupleReferencesStatement
_OBJC_IVAR_$_ISDDataDatabase._removeTuplesStatement
_OBJC_IVAR_$_ISDDataDatabase._removeUnformattedTupleReferencesStatement
_OBJC_IVAR_$_ISDDataDatabase._removeUnformattedTuplesStatement
_OBJC_IVAR_$_ISDDataDatabase._replaceRecordIdInDataReferencesStatement
_OBJC_IVAR_$_ISDDataDatabase._replaceRecordIdInRecordStatement
_OBJC_IVAR_$_ISDDataDatabase._replaceRecordIdInRelationshipFromStatement
_OBJC_IVAR_$_ISDDataDatabase._replaceRecordIdInRelationshipToStatement
_OBJC_IVAR_$_ISDDataDatabase._replaceRecordIdInUnformattedFromStatement
_OBJC_IVAR_$_ISDDataDatabase._replaceRecordIdInUnformattedToStatement
_OBJC_IVAR_$_ISDDataDatabase._replaceTupleIdInRelationshipStatement
_OBJC_IVAR_$_ISDDataDatabase._replaceTupleIdInUnformattedStatement
_OBJC_IVAR_$_ISDDataDatabase._setDeletedStatement
_OBJC_IVAR_$_ISDDataDatabase._setDeletedTupleStatement
_OBJC_IVAR_$_ISDDataDatabase._setLastChangedGenerationStatement
_OBJC_IVAR_$_ISDDataDatabase._setRecordIdsHaveDataReferencesStatement
_OBJC_IVAR_$_ISDDataDatabase._setRecordStateStatement
_OBJC_IVAR_$_ISDDataDatabase._setRecordStateToBeAppliedStatement
_OBJC_IVAR_$_ISDDataDatabase._setToBeAppliedByEntityStatement
_OBJC_IVAR_$_ISDDataDatabase._setToBeAppliedStatement
_OBJC_IVAR_$_ISDDataDatabase._updateRecordPropertiesStatement
_OBJC_IVAR_$_ISDDataDatabase._updateRecordStatement
_OBJC_IVAR_$_ISDDataDirectoryVersion._version
_OBJC_IVAR_$_ISDDataManager._adminDatabase
_OBJC_IVAR_$_ISDDataManager._adminDatabasePath
_OBJC_IVAR_$_ISDDataManager._anchor
_OBJC_IVAR_$_ISDDataManager._associatedNameNumberProvider
_OBJC_IVAR_$_ISDDataManager._clientAdminDataChanged
_OBJC_IVAR_$_ISDDataManager._clientSyncStateChanged
_OBJC_IVAR_$_ISDDataManager._clients
_OBJC_IVAR_$_ISDDataManager._dataClasses
_OBJC_IVAR_$_ISDDataManager._dataDirectory
_OBJC_IVAR_$_ISDDataManager._dataVersion
_OBJC_IVAR_$_ISDDataManager._entities
_OBJC_IVAR_$_ISDDataManager._schemaAdminDataChanged
_OBJC_IVAR_$_ISDDataManager._schemas
_OBJC_IVAR_$_ISDDataManager._schemasArchivePath
_OBJC_IVAR_$_ISDDataManager._shouldBumpAnchorOnNextChange
_OBJC_IVAR_$_ISDDataManager._shouldUpdateMetadataOnEnableFlush
_OBJC_IVAR_$_ISDDataManager._shouldWriteSchemasArchiveToDisk
_OBJC_IVAR_$_ISDDataManager._syncGeneration
_OBJC_IVAR_$_ISDDataManager._syncingClientListPath
_OBJC_IVAR_$_ISDDataObject._anchor
_OBJC_IVAR_$_ISDDataObject._comment
_OBJC_IVAR_$_ISDDataObject._dataManager
_OBJC_IVAR_$_ISDDataObject._topParent
_OBJC_IVAR_$_ISDDataReference._data
_OBJC_IVAR_$_ISDDataReference._dataWrapper
_OBJC_IVAR_$_ISDDataWrapper._dataCache
_OBJC_IVAR_$_ISDDataWrapper._extension
_OBJC_IVAR_$_ISDDataWrapper._faultFailure
_OBJC_IVAR_$_ISDDataWrapper._guid
_OBJC_IVAR_$_ISDDataWrapper._hash
_OBJC_IVAR_$_ISDDataWrapper._length
_OBJC_IVAR_$_ISDDataWrapper._moddate
_OBJC_IVAR_$_ISDDataWrapper._previousExtension
_OBJC_IVAR_$_ISDDataWrapper._propertyName
_OBJC_IVAR_$_ISDDataWrapper._recordId
_OBJC_IVAR_$_ISDDataWrapper._signature
_OBJC_IVAR_$_ISDDataWrapper._subdir
_OBJC_IVAR_$_ISDDatabase._dataVersion
_OBJC_IVAR_$_ISDDatabase._db
_OBJC_IVAR_$_ISDDatabase._dirtyCoderDelegate
_OBJC_IVAR_$_ISDDatabase._globalStringTable
_OBJC_IVAR_$_ISDDatabase._tracingPrefix
_OBJC_IVAR_$_ISDEntity._attributes
_OBJC_IVAR_$_ISDEntity._bundleRef
_OBJC_IVAR_$_ISDEntity._dataClass
_OBJC_IVAR_$_ISDEntity._excludeFromAirbagCount
_OBJC_IVAR_$_ISDEntity._hasPropertiesWithLastModifiedResolutionPolicy
_OBJC_IVAR_$_ISDEntity._idNumber
_OBJC_IVAR_$_ISDEntity._name
_OBJC_IVAR_$_ISDEntity._parentName
_OBJC_IVAR_$_ISDEntity._propertiesByName
_OBJC_IVAR_$_ISDEntity._propertyDependencies
_OBJC_IVAR_$_ISDEntity._relationships
_OBJC_IVAR_$_ISDEntity._uiHelperClassName
_OBJC_IVAR_$_ISDEntity._versionInfo
_OBJC_IVAR_$_ISDEntityComponent._attributes
_OBJC_IVAR_$_ISDEntityComponent._entity
_OBJC_IVAR_$_ISDEntityComponent._extensionName
_OBJC_IVAR_$_ISDEntityComponent._relationships
_OBJC_IVAR_$_ISDException.mLogReasonOnly
_OBJC_IVAR_$_ISDException.mLogStackTraceMode
_OBJC_IVAR_$_ISDFastCDSyncHelper._changeWithIdentifierStatement
_OBJC_IVAR_$_ISDFastCDSyncHelper._db
_OBJC_IVAR_$_ISDFastCDSyncHelper._deleteAllChangesForEntityStatement
_OBJC_IVAR_$_ISDFastCDSyncHelper._deleteAllChangesStatement
_OBJC_IVAR_$_ISDFastCDSyncHelper._isUpdater
_OBJC_IVAR_$_ISDFastCDSyncHelper._lock
_OBJC_IVAR_$_ISDFastCDSyncHelper._nextChangesForEntityStatement
_OBJC_IVAR_$_ISDFastCDSyncHelper._nextChangesStatement
_OBJC_IVAR_$_ISDFastCDSyncHelper._objectForKeyStatement
_OBJC_IVAR_$_ISDFastCDSyncHelper._persistentStore
_OBJC_IVAR_$_ISDFastCDSyncHelper._removeChangeStatement
_OBJC_IVAR_$_ISDFastCDSyncHelper._removeObjectForKeyStatement
_OBJC_IVAR_$_ISDFastCDSyncHelper._setObjectForKeyStatement
_OBJC_IVAR_$_ISDFastCDSyncHelper._storagePath
_OBJC_IVAR_$_ISDFastCDSyncHelper._syncContext
_OBJC_IVAR_$_ISDFastCDSyncHelper._updateChangeStatement
_OBJC_IVAR_$_ISDFileReference._aliasData
_OBJC_IVAR_$_ISDFileReference._bundleId
_OBJC_IVAR_$_ISDFileReference._bundleRelativePath
_OBJC_IVAR_$_ISDFileReference._path
_OBJC_IVAR_$_ISDFileReference._persistentId
_OBJC_IVAR_$_ISDFileReference._timestamp
_OBJC_IVAR_$_ISDFileReference._windowsBinRelativePath
_OBJC_IVAR_$_ISDFiltratorThingy._clearDirtyRecordIds
_OBJC_IVAR_$_ISDFiltratorThingy._client
_OBJC_IVAR_$_ISDFiltratorThingy._clientRecordStore
_OBJC_IVAR_$_ISDFiltratorThingy._currentRecordIdsForFilter
_OBJC_IVAR_$_ISDFiltratorThingy._entities
_OBJC_IVAR_$_ISDFiltratorThingy._filter
_OBJC_IVAR_$_ISDFiltratorThingy._filterRemovedRecordIds
_OBJC_IVAR_$_ISDFiltratorThingy._filterReplacedRecordIds
_OBJC_IVAR_$_ISDFiltratorThingy._filteredOrRejectedIds
_OBJC_IVAR_$_ISDFiltratorThingy._filteredRecordIds
_OBJC_IVAR_$_ISDFiltratorThingy._isServerClientType
_OBJC_IVAR_$_ISDFiltratorThingy._mapper
_OBJC_IVAR_$_ISDFiltratorThingy._modifiedRecordIds
_OBJC_IVAR_$_ISDFiltratorThingy._processedRecords
_OBJC_IVAR_$_ISDFiltratorThingy._recordIdsForFilter
_OBJC_IVAR_$_ISDFiltratorThingy._recordIdsToRejectOutOfHand
_OBJC_IVAR_$_ISDFiltratorThingy._recordIdsWithReferrersToRefilter
_OBJC_IVAR_$_ISDFiltratorThingy._referringRelationshipNames
_OBJC_IVAR_$_ISDFiltratorThingy._rejectedRecordIds
_OBJC_IVAR_$_ISDFiltratorThingy._requiredRelationshipNames
_OBJC_IVAR_$_ISDFiltratorThingy._skipMarkingAsProcessed
_OBJC_IVAR_$_ISDFiltratorThingy._sourceIdsForFilter
_OBJC_IVAR_$_ISDFiltratorThingy._truthRecordStore
_OBJC_IVAR_$_ISDFiltratorThingy._unappliedRecordIds
_OBJC_IVAR_$_ISDGlobalId._bytes
_OBJC_IVAR_$_ISDGlobalId._hash
_OBJC_IVAR_$_ISDIdMapDatabase._addMappingStatement
_OBJC_IVAR_$_ISDIdMapDatabase._allMappingStatement
_OBJC_IVAR_$_ISDIdMapDatabase._flushCount
_OBJC_IVAR_$_ISDIdMapDatabase._getMappingForGlobalIdStatement
_OBJC_IVAR_$_ISDIdMapDatabase._getMappingForLocalIdStatement
_OBJC_IVAR_$_ISDIdMapDatabase._purgeMappingsForLocalIdsStatement
_OBJC_IVAR_$_ISDIdMapDatabase._removeLocalIdMappingStatement
_OBJC_IVAR_$_ISDIdMapDatabase._removeMappingStatement
_OBJC_IVAR_$_ISDIdMapDatabase._removeMappingsForGlobalIdsStatement
_OBJC_IVAR_$_ISDIdMapDatabase._removeMappingsForLocalIdsStatement
_OBJC_IVAR_$_ISDIdMapDatabase._updateMappingStatement
_OBJC_IVAR_$_ISDInstrumentedEnumerator._callHistory
_OBJC_IVAR_$_ISDInstrumentedEnumerator._enumerator
_OBJC_IVAR_$_ISDNameNumberMapping._last
_OBJC_IVAR_$_ISDNameNumberMapping._mappingName
_OBJC_IVAR_$_ISDNameNumberMapping._nameToNumber
_OBJC_IVAR_$_ISDNameNumberMapping._numberToName
_OBJC_IVAR_$_ISDNameNumberMapping._providedBy
_OBJC_IVAR_$_ISDNameNumberMapping._zeroMapping
_OBJC_IVAR_$_ISDNameNumberProvider._basis
_OBJC_IVAR_$_ISDNameNumberProvider._canCreate
_OBJC_IVAR_$_ISDNameNumberProvider._canSave
_OBJC_IVAR_$_ISDNameNumberProvider._clientMapping
_OBJC_IVAR_$_ISDNameNumberProvider._entityMapping
_OBJC_IVAR_$_ISDNameNumberProvider._inRefresh
_OBJC_IVAR_$_ISDNameNumberProvider._irreplaceable
_OBJC_IVAR_$_ISDNameNumberProvider._isValid
_OBJC_IVAR_$_ISDNameNumberProvider._mapsInitialized
_OBJC_IVAR_$_ISDNameNumberProvider._useRegardless
_OBJC_IVAR_$_ISDObjectGraphWrapper._data
_OBJC_IVAR_$_ISDPersistentStoreSyncer._contextsToMonitor
_OBJC_IVAR_$_ISDPersistentStoreSyncer._contextsToReload
_OBJC_IVAR_$_ISDPersistentStoreSyncer._deletedObjects
_OBJC_IVAR_$_ISDPersistentStoreSyncer._error
_OBJC_IVAR_$_ISDPersistentStoreSyncer._fastSyncHelpers
_OBJC_IVAR_$_ISDPersistentStoreSyncer._isSyncing
_OBJC_IVAR_$_ISDPersistentStoreSyncer._objectsToFormat
_OBJC_IVAR_$_ISDPersistentStoreSyncer._persistentStoreCoordinator
_OBJC_IVAR_$_ISDPersistentStoreSyncer._qualifiedEntityNames
_OBJC_IVAR_$_ISDPersistentStoreSyncer._relations
_OBJC_IVAR_$_ISDPersistentStoreSyncer._session
_OBJC_IVAR_$_ISDPersistentStoreSyncer._syncClient
_OBJC_IVAR_$_ISDPersistentStoreSyncer._syncContext
_OBJC_IVAR_$_ISDPersistentStoreSyncer._syncEntityNames
_OBJC_IVAR_$_ISDPersistentStoreSyncer._syncHandler
_OBJC_IVAR_$_ISDPersistentStoreSyncer._synchronizedEntities
_OBJC_IVAR_$_ISDPersistentStoreSyncer._updatedObjects
_OBJC_IVAR_$_ISDProperty._automagicConflictResolverClassName
_OBJC_IVAR_$_ISDProperty._bundleRef
_OBJC_IVAR_$_ISDProperty._enumValues
_OBJC_IVAR_$_ISDProperty._flags
_OBJC_IVAR_$_ISDProperty._fullName
_OBJC_IVAR_$_ISDProperty._name
_OBJC_IVAR_$_ISDProperty._preferredClientTypesForAutomagicResolution
_OBJC_IVAR_$_ISDProperty._subtype
_OBJC_IVAR_$_ISDProperty._type
_OBJC_IVAR_$_ISDProperty._uiHelperClassName
_OBJC_IVAR_$_ISDPropertyChange._action
_OBJC_IVAR_$_ISDPropertyChange._propertyValue
_OBJC_IVAR_$_ISDPropertyConflict._modified
_OBJC_IVAR_$_ISDPropertyConflict._propertyChangesPerClientId
_OBJC_IVAR_$_ISDPropertyConflict._propertyNames
_OBJC_IVAR_$_ISDPropertyConflict._recordId
_OBJC_IVAR_$_ISDPropertyConflict._userValues
_OBJC_IVAR_$_ISDPropertyConflict._winningClientId
_OBJC_IVAR_$_ISDPropertyValue._clientNumber
_OBJC_IVAR_$_ISDPropertyValue._collectionType
_OBJC_IVAR_$_ISDPropertyValue._deletedValue
_OBJC_IVAR_$_ISDPropertyValue._generation
_OBJC_IVAR_$_ISDPropertyValue._isDefaultValue
_OBJC_IVAR_$_ISDPropertyValue._name
_OBJC_IVAR_$_ISDPropertyValue._type
_OBJC_IVAR_$_ISDPropertyValue._unformattedValue
_OBJC_IVAR_$_ISDPropertyValue._value
_OBJC_IVAR_$_ISDQuickDirtyCoder._bytes
_OBJC_IVAR_$_ISDQuickDirtyCoder._classVersionTable
_OBJC_IVAR_$_ISDQuickDirtyCoder._data
_OBJC_IVAR_$_ISDQuickDirtyCoder._delegate
_OBJC_IVAR_$_ISDQuickDirtyCoder._isReading
_OBJC_IVAR_$_ISDQuickDirtyCoder._path
_OBJC_IVAR_$_ISDQuickDirtyCoder._propertyName
_OBJC_IVAR_$_ISDQuickDirtyCoder._recordid
_OBJC_IVAR_$_ISDQuickDirtyCoder._stringIndexTable
_OBJC_IVAR_$_ISDQuickDirtyCoder._strings
_OBJC_IVAR_$_ISDQuickDirtyCoder._userInfo
_OBJC_IVAR_$_ISDRecord._addedGeneration
_OBJC_IVAR_$_ISDRecord._deleted
_OBJC_IVAR_$_ISDRecord._entityNumber
_OBJC_IVAR_$_ISDRecord._lastChangedByClientNumber
_OBJC_IVAR_$_ISDRecord._lastChangedGeneration
_OBJC_IVAR_$_ISDRecord._propertyValues
_OBJC_IVAR_$_ISDRecord._propertyValuesIncludeDataReferences
_OBJC_IVAR_$_ISDRecord._recordId
_OBJC_IVAR_$_ISDRecord._relationshipMap
_OBJC_IVAR_$_ISDRecord._reorderOnlyPropertyNames
_OBJC_IVAR_$_ISDRecord._state
_OBJC_IVAR_$_ISDRecord._unformattedRelationshipValues
_OBJC_IVAR_$_ISDRecordIdMap._entityNumber
_OBJC_IVAR_$_ISDRecordIdMap._globalId
_OBJC_IVAR_$_ISDRecordIdMap._localId
_OBJC_IVAR_$_ISDRecordIdMapDatabase._addMappingStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._addUnknownRecordTypeStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._allGlobalIdsStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._allLocalIdsStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._allMappingsStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._countMappingsStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._getMappingForGlobalIdStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._getMappingForLocalIdStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._getUnknownRecordIdsStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._getUnknownTypeForRecordIdStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._removeAllUnknownRecordsTypeStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._removeMappingsForEntityNamesStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._removeMappingsForGlobalIdsStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._removeOneMappingForGlobalIdStatement
_OBJC_IVAR_$_ISDRecordIdMapDatabase._removeUnknownRecordTypeStatement
_OBJC_IVAR_$_ISDRecordIdMapper._constructedIdMapper
_OBJC_IVAR_$_ISDRecordIdMapper._dirty
_OBJC_IVAR_$_ISDRecordIdMapper._entityNames
_OBJC_IVAR_$_ISDRecordIdMapper._flushCount
_OBJC_IVAR_$_ISDRecordIdMapper._globalIdMap
_OBJC_IVAR_$_ISDRecordIdMapper._localIdMap
_OBJC_IVAR_$_ISDRecordIdMapper._newLocalIdMappings
_OBJC_IVAR_$_ISDRecordIdMapper._path
_OBJC_IVAR_$_ISDRecordIdMapper._phantomUnresolvedIdMap
_OBJC_IVAR_$_ISDRecordIdMapper._unknownRecordTypes
_OBJC_IVAR_$_ISDRecordIdMapper._unresolvedLocalIdMap
_OBJC_IVAR_$_ISDRecordIdMapper._useLocalsAsGlobals
_OBJC_IVAR_$_ISDRecordStore._clientData
_OBJC_IVAR_$_ISDRecordStore._dataDirectory
_OBJC_IVAR_$_ISDRecordStore._database
_OBJC_IVAR_$_ISDRecordStore._filteredTupleReferences
_OBJC_IVAR_$_ISDRecordStore._flushCount
_OBJC_IVAR_$_ISDRecordStore._formattedAwayProperties
_OBJC_IVAR_$_ISDRecordStore._recordIdentifiersToFormattedAwayProperties
_OBJC_IVAR_$_ISDRecordStore._segmentNameForEntity
_OBJC_IVAR_$_ISDRecordStore._truthDatabaseForSegment
_OBJC_IVAR_$_ISDRecordStore._truthDatabases
_OBJC_IVAR_$_ISDRelationship._anonymousInverseRelationshipNames
_OBJC_IVAR_$_ISDRelationship._inverseRelationships
_OBJC_IVAR_$_ISDRelationship._source
_OBJC_IVAR_$_ISDRelationship._targets
_OBJC_IVAR_$_ISDSchema._bundleRef
_OBJC_IVAR_$_ISDSchema._conflictResolverClassName
_OBJC_IVAR_$_ISDSchema._dataClasses
_OBJC_IVAR_$_ISDSchema._descriptionFile
_OBJC_IVAR_$_ISDSchema._entityComponents
_OBJC_IVAR_$_ISDSchema._name
_OBJC_IVAR_$_ISDSchema._uiHelperClassName
_OBJC_IVAR_$_ISDSchema._validatorClassName
_OBJC_IVAR_$_ISDSchemaParser._dataClasses
_OBJC_IVAR_$_ISDSchemaParser._entities
_OBJC_IVAR_$_ISDSchemaParser._existingDataclasses
_OBJC_IVAR_$_ISDSchemaParser._existingEntities
_OBJC_IVAR_$_ISDSchemaParser._relaxSchemaParsing
_OBJC_IVAR_$_ISDSchemaParser._schemas
_OBJC_IVAR_$_ISDSchemaParser._undefinedObjects
_OBJC_IVAR_$_ISDServer._calendarRequestPort
_OBJC_IVAR_$_ISDServer._clientConnections
_OBJC_IVAR_$_ISDServer._dataManager
_OBJC_IVAR_$_ISDServer._fileLocker
_OBJC_IVAR_$_ISDServer._fileLockerTimer
_OBJC_IVAR_$_ISDServer._inactivityInterval
_OBJC_IVAR_$_ISDServer._inactivityTimer
_OBJC_IVAR_$_ISDServer._isPrivateInstance
_OBJC_IVAR_$_ISDServer._launchDate
_OBJC_IVAR_$_ISDServer._syncManager
_OBJC_IVAR_$_ISDServer._tickCount
_OBJC_IVAR_$_ISDServer._timerRefreshDate
_OBJC_IVAR_$_ISDServer._uiHandlerConnection
_OBJC_IVAR_$_ISDSqliteChangeStore._changesMap
_OBJC_IVAR_$_ISDSqliteChangeStore._db
_OBJC_IVAR_$_ISDSqliteChangeStore._enumeratedChanges
_OBJC_IVAR_$_ISDSqliteChangeStore._flushCount
_OBJC_IVAR_$_ISDSqliteChangeStore._fromRow
_OBJC_IVAR_$_ISDSqliteChangeStore._greatestEnumeratedToGeneration
_OBJC_IVAR_$_ISDSqliteChangeStore._lastRowEnumerated
_OBJC_IVAR_$_ISDSqliteChangeStore._maxToEnumerate
_OBJC_IVAR_$_ISDSqliteChangeStore._numGenerationsToRetain
_OBJC_IVAR_$_ISDSqliteChangeStore._numberEnumerated
_OBJC_IVAR_$_ISDSqliteChangeStore._path
_OBJC_IVAR_$_ISDSqliteChangeStore._referencesRowsMap
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._cachedIdReferencesCount
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._clientId
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._coder
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._coderWriteData
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._deleteChangesWithRowIds
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._deleteReferencedIdsForChangesWithRowIds
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getChangesForAllEntities
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getChangesForEntityNames
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getChangesWithReferencesToRecordId
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getEarliestGenerationOfRecordsForEntityName
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getEntityNamesOfAddedRecords
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getLatestGenerationOfRecordsForEntityName
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getProcessedChanges
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getProcessedChangesForEntityNames
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getRowIdsForChanges
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getRowIdsForChangesWithEntityNames
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getRowIdsForEnumeratedChangesLessThanGeneration
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getUnprocessedDeletedRecordIds
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._getUnprocessedDeletedRecordIdsWithEntityNames
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._insertChangeStatement
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._insertReferencesToChangesStatement
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._markChangesAsEnumerated
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._numberOfChanges
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._numberOfChangesForEntities
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._numberOfDeletes
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._removeAllChangesForEntityNames
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._removeReferencesToChangesStatement
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._updateChangeStatement
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._updateReferencedId
_OBJC_IVAR_$_ISDSqliteChangeStoreDatabase._updateReferencedIdAndChangeId
_OBJC_IVAR_$_ISDSqliteRecordIdMapper._mapDatabase
_OBJC_IVAR_$_ISDStructuredDelta._changePuller
_OBJC_IVAR_$_ISDStructuredDelta._changePusher
_OBJC_IVAR_$_ISDStructuredDelta._clientFormatsRelationships
_OBJC_IVAR_$_ISDStructuredDelta._clientIsTrusted
_OBJC_IVAR_$_ISDStructuredDelta._clientState
_OBJC_IVAR_$_ISDStructuredDelta._currentGeneration
_OBJC_IVAR_$_ISDStructuredDelta._entities
_OBJC_IVAR_$_ISDStructuredDelta._relationshipValidationDelegate
_OBJC_IVAR_$_ISDStructuredDelta._supportedPropertyNames
_OBJC_IVAR_$_ISDStructuredDelta._syncStates
_OBJC_IVAR_$_ISDSyncJob._canRunWithRunningSyncPlans
_OBJC_IVAR_$_ISDSyncJob._context
_OBJC_IVAR_$_ISDSyncJob._isRunning
_OBJC_IVAR_$_ISDSyncJob._selector
_OBJC_IVAR_$_ISDSyncJob._shouldRunBeforePendingSyncPlans
_OBJC_IVAR_$_ISDSyncJob._target
_OBJC_IVAR_$_ISDSyncManager._dataDirectory
_OBJC_IVAR_$_ISDSyncManager._dataManager
_OBJC_IVAR_$_ISDSyncManager._deviceParticipantTimeoutInterval
_OBJC_IVAR_$_ISDSyncManager._isKillable
_OBJC_IVAR_$_ISDSyncManager._jobs
_OBJC_IVAR_$_ISDSyncManager._lastSyncDate
_OBJC_IVAR_$_ISDSyncManager._otherParticipantTimeoutInterval
_OBJC_IVAR_$_ISDSyncManager._pendingPlans
_OBJC_IVAR_$_ISDSyncManager._pendingSyncAfterParticipants
_OBJC_IVAR_$_ISDSyncManager._plans
_OBJC_IVAR_$_ISDSyncManager._runningPlans
_OBJC_IVAR_$_ISDSyncManager._syncAfterParticipants
_OBJC_IVAR_$_ISDSyncManager._syncAfterParticipantsPlanMap
_OBJC_IVAR_$_ISDSyncManager._syncCount
_OBJC_IVAR_$_ISDSyncManager._syncPlansAwaitingNegotiation
_OBJC_IVAR_$_ISDSyncManager._syncServerName
_OBJC_IVAR_$_ISDSyncParticipant._alerted
_OBJC_IVAR_$_ISDSyncParticipant._callbackTarget
_OBJC_IVAR_$_ISDSyncParticipant._client
_OBJC_IVAR_$_ISDSyncParticipant._clientId
_OBJC_IVAR_$_ISDSyncParticipant._clientState
_OBJC_IVAR_$_ISDSyncParticipant._clientSyncStates
_OBJC_IVAR_$_ISDSyncParticipant._entityNames
_OBJC_IVAR_$_ISDSyncParticipant._entityNamesHavingTruthPulled
_OBJC_IVAR_$_ISDSyncParticipant._formatterBundle
_OBJC_IVAR_$_ISDSyncParticipant._phase
_OBJC_IVAR_$_ISDSyncParticipant._pushTruthApprovalTable
_OBJC_IVAR_$_ISDSyncParticipant._responseDate
_OBJC_IVAR_$_ISDSyncParticipant._synchronizesAllEntities
_OBJC_IVAR_$_ISDSyncParticipant._transientSyncModes
_OBJC_IVAR_$_ISDSyncParticipant._useLocalIdsForGuids
_OBJC_IVAR_$_ISDSyncPlan._allClients
_OBJC_IVAR_$_ISDSyncPlan._cancelledClientIdentifiers
_OBJC_IVAR_$_ISDSyncPlan._clientIdTypeMapping
_OBJC_IVAR_$_ISDSyncPlan._closureOfEntitiesBeingMingled
_OBJC_IVAR_$_ISDSyncPlan._confusedPushers
_OBJC_IVAR_$_ISDSyncPlan._contestedPushers
_OBJC_IVAR_$_ISDSyncPlan._createDate
_OBJC_IVAR_$_ISDSyncPlan._dataClassesWithRecordsInTruth
_OBJC_IVAR_$_ISDSyncPlan._dataDirectory
_OBJC_IVAR_$_ISDSyncPlan._dataManager
_OBJC_IVAR_$_ISDSyncPlan._delegate
_OBJC_IVAR_$_ISDSyncPlan._endDate
_OBJC_IVAR_$_ISDSyncPlan._entitiesMapping
_OBJC_IVAR_$_ISDSyncPlan._entitiesToMarkAsRefreshedAfterPushPhase
_OBJC_IVAR_$_ISDSyncPlan._entityNameToEntityMapping
_OBJC_IVAR_$_ISDSyncPlan._isCancelled
_OBJC_IVAR_$_ISDSyncPlan._isOneShotPlan
_OBJC_IVAR_$_ISDSyncPlan._isPullOnly
_OBJC_IVAR_$_ISDSyncPlan._isSyncAfterPlan
_OBJC_IVAR_$_ISDSyncPlan._mingler
_OBJC_IVAR_$_ISDSyncPlan._minglerException
_OBJC_IVAR_$_ISDSyncPlan._minglerProcess
_OBJC_IVAR_$_ISDSyncPlan._minglerTask
_OBJC_IVAR_$_ISDSyncPlan._negotiatedClientModes
_OBJC_IVAR_$_ISDSyncPlan._participantRequiresMingle
_OBJC_IVAR_$_ISDSyncPlan._participants
_OBJC_IVAR_$_ISDSyncPlan._phase
_OBJC_IVAR_$_ISDSyncPlan._pushersHaveBeenNegotiated
_OBJC_IVAR_$_ISDSyncPlan._removedClientIdentifiers
_OBJC_IVAR_$_ISDSyncPlan._skipSyncAfterClients
_OBJC_IVAR_$_ISDSyncPlan._startDate
_OBJC_IVAR_$_ISDSyncPlan._syncGeneration
_OBJC_IVAR_$_ISDSyncPlan._syncingClientIdentifiers
_OBJC_IVAR_$_ISDSyncPlan._syncingEntityNamesSet
_OBJC_IVAR_$_ISDSyncPlan._toBeMingled
_OBJC_IVAR_$_ISDSyncPlan._unapprovedUncontestedPushers
_OBJC_IVAR_$_ISDSyncPlan._uncontestedPushers
_OBJC_IVAR_$_ISDSyncPlan._unpushedResetEntityNames
_OBJC_IVAR_$_ISDSyncPlan._uuid
_OBJC_IVAR_$_ISDSyncPlan._waitingToNegotiate
_OBJC_IVAR_$_ISDSyncPlan._watchdog
_OBJC_IVAR_$_ISDSyncPlan._winningPushers
_OBJC_IVAR_$_ISDSyncState._clientCanPullOnly
_OBJC_IVAR_$_ISDSyncState._clientCanPushOnly
_OBJC_IVAR_$_ISDSyncState._clientWantsToPullTruth
_OBJC_IVAR_$_ISDSyncState._enabled
_OBJC_IVAR_$_ISDSyncState._entityName
_OBJC_IVAR_$_ISDSyncState._lastSyncDate
_OBJC_IVAR_$_ISDSyncState._lastSyncGeneration
_OBJC_IVAR_$_ISDSyncState._lastSyncStatus
_OBJC_IVAR_$_ISDSyncState._propertyNames
_OBJC_IVAR_$_ISDSyncState._requestedMode
_OBJC_IVAR_$_ISDSyncState._shouldRefilter
_OBJC_IVAR_$_ISDSyncState._syncMode
_OBJC_IVAR_$_ISyncAlwaysAcceptFilter._entityNames
_OBJC_IVAR_$_ISyncConcreteChange._changes
_OBJC_IVAR_$_ISyncConcreteChange._clientNumber
_OBJC_IVAR_$_ISyncConcreteChange._minglerChange
_OBJC_IVAR_$_ISyncConcreteChange._record
_OBJC_IVAR_$_ISyncConcreteChange._recordId
_OBJC_IVAR_$_ISyncConcreteChange._type
_OBJC_IVAR_$_ISyncConcreteClient._client
_OBJC_IVAR_$_ISyncConcreteClient._closureComputationIsDisabled
_OBJC_IVAR_$_ISyncConcreteClient._isInvalid
_OBJC_IVAR_$_ISyncConcreteClient._syncManager
_OBJC_IVAR_$_ISyncConcreteClient._syncSession
_OBJC_IVAR_$_ISyncConcreteManager._allSchemaDataWasFetched
_OBJC_IVAR_$_ISyncConcreteManager._clientAnchor
_OBJC_IVAR_$_ISyncConcreteManager._clientPlanIdentifiers
_OBJC_IVAR_$_ISyncConcreteManager._clients
_OBJC_IVAR_$_ISyncConcreteManager._dataClasses
_OBJC_IVAR_$_ISyncConcreteManager._dataDirectoryPath
_OBJC_IVAR_$_ISyncConcreteManager._dataReferencesDirectory
_OBJC_IVAR_$_ISyncConcreteManager._enabled
_OBJC_IVAR_$_ISyncConcreteManager._entities
_OBJC_IVAR_$_ISyncConcreteManager._initialPlanIdentifier
_OBJC_IVAR_$_ISyncConcreteManager._lastAvailableServerPID
_OBJC_IVAR_$_ISyncConcreteManager._logDirectoryPath
_OBJC_IVAR_$_ISyncConcreteManager._nameNumberProvider
_OBJC_IVAR_$_ISyncConcreteManager._needToFetchAllClients
_OBJC_IVAR_$_ISyncConcreteManager._notifyClientSyncStateToken
_OBJC_IVAR_$_ISyncConcreteManager._notifyClientToken
_OBJC_IVAR_$_ISyncConcreteManager._notifyPlansToken
_OBJC_IVAR_$_ISyncConcreteManager._notifySchemaCacheInvalidToken
_OBJC_IVAR_$_ISyncConcreteManager._notifySchemaToken
_OBJC_IVAR_$_ISyncConcreteManager._removeClientFromSyncPlanIfClientDoesntBeginSession
_OBJC_IVAR_$_ISyncConcreteManager._runLoopModes
_OBJC_IVAR_$_ISyncConcreteManager._schemaAnchor
_OBJC_IVAR_$_ISyncConcreteManager._server
_OBJC_IVAR_$_ISyncConcreteManager._serverPID
_OBJC_IVAR_$_ISyncConcreteManager._syncAlertHandlers
_OBJC_IVAR_$_ISyncConcreteManager._syncPlans
_OBJC_IVAR_$_ISyncConcreteManager._task
_OBJC_IVAR_$_ISyncConcreteManager._unavailableCheckDate
_OBJC_IVAR_$_ISyncConcreteManager._unavailableReason
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._addedChildNodes
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._cachedRecord
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._changeType
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._changedKeys
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._changedRelationshipNames
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._deletedChildNodes
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._displayKeys
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._identityKeys
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._modifiedChildNodes
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._parentNode
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._recordIdentifier
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._recordView
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._relationshipNames
_OBJC_IVAR_$_ISyncConcreteRecordGraphNode._topLevelParentNode
_OBJC_IVAR_$_ISyncConcreteRecordReference._attributes
_OBJC_IVAR_$_ISyncConcreteRecordReference._entityNumber
_OBJC_IVAR_$_ISyncConcreteRecordReference._globalRecordIdentifier
_OBJC_IVAR_$_ISyncConcreteRecordSnapshot._entityNames
_OBJC_IVAR_$_ISyncConcreteRecordSnapshot._mapper
_OBJC_IVAR_$_ISyncConcreteRecordSnapshot._session
_OBJC_IVAR_$_ISyncConcreteRecordSnapshot._truth
_OBJC_IVAR_$_ISyncConcreteRecordView._cachedRecords
_OBJC_IVAR_$_ISyncConcreteRecordView._clientStoreIdToTruthIdMap
_OBJC_IVAR_$_ISyncConcreteRecordView._conflictManager
_OBJC_IVAR_$_ISyncConcreteRecordView._recordStore
_OBJC_IVAR_$_ISyncConcreteRecordView._snapshot
_OBJC_IVAR_$_ISyncConcreteRecordView._truthIdToClientStoreIdMap
_OBJC_IVAR_$_ISyncConcreteSession._acceptedClientRecords
_OBJC_IVAR_$_ISyncConcreteSession._acceptedFormattedRecordsWithDataReferences
_OBJC_IVAR_$_ISyncConcreteSession._acceptedUnknowns
_OBJC_IVAR_$_ISyncConcreteSession._accumulatedPulledAdds
_OBJC_IVAR_$_ISyncConcreteSession._accumulatedPulledDeletes
_OBJC_IVAR_$_ISyncConcreteSession._accumulatedPulledModifies
_OBJC_IVAR_$_ISyncConcreteSession._accumulatedPushedAdds
_OBJC_IVAR_$_ISyncConcreteSession._accumulatedPushedDeletes
_OBJC_IVAR_$_ISyncConcreteSession._accumulatedPushedModifies
_OBJC_IVAR_$_ISyncConcreteSession._addCount
_OBJC_IVAR_$_ISyncConcreteSession._addedRecordIdentifiers
_OBJC_IVAR_$_ISyncConcreteSession._anchorPhase
_OBJC_IVAR_$_ISyncConcreteSession._anchorRefreshSyncEntities
_OBJC_IVAR_$_ISyncConcreteSession._anchorSlowSyncEntities
_OBJC_IVAR_$_ISyncConcreteSession._applyPushedChanges
_OBJC_IVAR_$_ISyncConcreteSession._callbackSelector
_OBJC_IVAR_$_ISyncConcreteSession._callbackSessionArgument
_OBJC_IVAR_$_ISyncConcreteSession._callbackTarget
_OBJC_IVAR_$_ISyncConcreteSession._cancelReason
_OBJC_IVAR_$_ISyncConcreteSession._cancelUserInfo
_OBJC_IVAR_$_ISyncConcreteSession._changeStoreHasChanges
_OBJC_IVAR_$_ISyncConcreteSession._client
_OBJC_IVAR_$_ISyncConcreteSession._clientId
_OBJC_IVAR_$_ISyncConcreteSession._clientRecordCache
_OBJC_IVAR_$_ISyncConcreteSession._clientState
_OBJC_IVAR_$_ISyncConcreteSession._currentGeneration
_OBJC_IVAR_$_ISyncConcreteSession._dataReferencesToSave
_OBJC_IVAR_$_ISyncConcreteSession._deleteCount
_OBJC_IVAR_$_ISyncConcreteSession._deletedGlobalIds
_OBJC_IVAR_$_ISyncConcreteSession._deletedRecordIdentifiers
_OBJC_IVAR_$_ISyncConcreteSession._entities
_OBJC_IVAR_$_ISyncConcreteSession._entityNames
_OBJC_IVAR_$_ISyncConcreteSession._ignoreDecodedDataWrapper
_OBJC_IVAR_$_ISyncConcreteSession._knownRecordEntityNumbers
_OBJC_IVAR_$_ISyncConcreteSession._lastServerPingDate
_OBJC_IVAR_$_ISyncConcreteSession._lostRecordIds
_OBJC_IVAR_$_ISyncConcreteSession._lostRecordIdsForReplacement
_OBJC_IVAR_$_ISyncConcreteSession._modifiedRecordIdentifiers
_OBJC_IVAR_$_ISyncConcreteSession._modifiesDuringPushing
_OBJC_IVAR_$_ISyncConcreteSession._modifyCount
_OBJC_IVAR_$_ISyncConcreteSession._newPhase
_OBJC_IVAR_$_ISyncConcreteSession._pendingCancel
_OBJC_IVAR_$_ISyncConcreteSession._pendingNextAnchors
_OBJC_IVAR_$_ISyncConcreteSession._phase
_OBJC_IVAR_$_ISyncConcreteSession._planId
_OBJC_IVAR_$_ISyncConcreteSession._pushCount
_OBJC_IVAR_$_ISyncConcreteSession._pushedAddedRecordIds
_OBJC_IVAR_$_ISyncConcreteSession._pushedCacheSize
_OBJC_IVAR_$_ISyncConcreteSession._pushedChangesCache
_OBJC_IVAR_$_ISyncConcreteSession._pushedChangesObserver
_OBJC_IVAR_$_ISyncConcreteSession._pushedDeletesCache
_OBJC_IVAR_$_ISyncConcreteSession._pushedRecordsCache
_OBJC_IVAR_$_ISyncConcreteSession._rebuildIndicesAfterPushing
_OBJC_IVAR_$_ISyncConcreteSession._recordBeingPushed
_OBJC_IVAR_$_ISyncConcreteSession._recordIdsNotToPropagate
_OBJC_IVAR_$_ISyncConcreteSession._recordIdsToDeleteAfterPushing
_OBJC_IVAR_$_ISyncConcreteSession._recordIdsWithDataReferencesToDelete
_OBJC_IVAR_$_ISyncConcreteSession._refreshSyncingEntityNames
_OBJC_IVAR_$_ISyncConcreteSession._rejectedClientRecords
_OBJC_IVAR_$_ISyncConcreteSession._rejectedUnknowns
_OBJC_IVAR_$_ISyncConcreteSession._relationshipInfoMap
_OBJC_IVAR_$_ISyncConcreteSession._running
_OBJC_IVAR_$_ISyncConcreteSession._sessionResponse
_OBJC_IVAR_$_ISyncConcreteSession._shouldInvokeCallback
_OBJC_IVAR_$_ISyncConcreteSession._slowSyncingEntityNames
_OBJC_IVAR_$_ISyncConcreteSession._snapshot
_OBJC_IVAR_$_ISyncConcreteSession._structuredDelta
_OBJC_IVAR_$_ISyncConcreteSession._syncStates
_OBJC_IVAR_$_ISyncConcreteSession._truth
_OBJC_IVAR_$_ISyncConcreteSession._truthPullers
_OBJC_IVAR_$_ISyncConcreteSession._unacceptedClientRecords
_OBJC_IVAR_$_ISyncConcreteSession._unchangedRecordIds
_OBJC_IVAR_$_ISyncConcreteSession._vacuumClientStateAfterSync
_OBJC_IVAR_$_ISyncConcreteSession._waitingRunLoop
_OBJC_IVAR_$_ISyncConcreteSession.enterMinglingTime
_OBJC_IVAR_$_ISyncConcreteSession.enterPullingTime
_OBJC_IVAR_$_ISyncConcreteSession.enterPushingTime
_OBJC_IVAR_$_ISyncConcreteSession.enterSessionCreateTime
_OBJC_IVAR_$_ISyncConcreteSessionDriver._client
_OBJC_IVAR_$_ISyncConcreteSessionDriver._dataSource
_OBJC_IVAR_$_ISyncConcreteSessionDriver._dataSourceSupportedMethodsHash
_OBJC_IVAR_$_ISyncConcreteSessionDriver._delegate
_OBJC_IVAR_$_ISyncConcreteSessionDriver._delegateSupportedMethodsHash
_OBJC_IVAR_$_ISyncConcreteSessionDriver._failure
_OBJC_IVAR_$_ISyncConcreteSessionDriver._filteredEntityNames
_OBJC_IVAR_$_ISyncConcreteSessionDriver._finishCalled
_OBJC_IVAR_$_ISyncConcreteSessionDriver._handlesSyncAlerts
_OBJC_IVAR_$_ISyncConcreteSessionDriver._inCallback
_OBJC_IVAR_$_ISyncConcreteSessionDriver._lastError
_OBJC_IVAR_$_ISyncConcreteSessionDriver._session
_OBJC_IVAR_$_ISyncConjunctionFilter._filters
_OBJC_IVAR_$_ISyncConjunctionFilter._ignoreLocals
_OBJC_IVAR_$_ISyncConjunctionFilter._isAndConjunction
_OBJC_IVAR_$_ISyncConjunctionFilter._shouldApplyUnsupportedRecords
_OBJC_IVAR_$_ISyncConjunctionFilter._supportedEntityNames
_OBJC_IVAR_$_ISyncFileLocker._delegate
_OBJC_IVAR_$_ISyncFileLocker._hostname
_OBJC_IVAR_$_ISyncFileLocker._hostuuid
_OBJC_IVAR_$_ISyncFileLocker._lockResult
_OBJC_IVAR_$_ISyncFileLocker._path
_OBJC_IVAR_$_ISyncFileLocker._secondsToTimeout
_OBJC_IVAR_$_ISyncInstrumentedSession._callHistory
_OBJC_IVAR_$_ISyncPlan._createDate
_OBJC_IVAR_$_ISyncPlan._endDate
_OBJC_IVAR_$_ISyncPlan._participantInfos
_OBJC_IVAR_$_ISyncPlan._planId
_OBJC_IVAR_$_ISyncPlan._startDate
_OBJC_IVAR_$_ISyncPlan._syncManager
_OBJC_IVAR_$_ISyncPlan._syncPhase
_OBJC_IVAR_$_ISyncPlan._syncStatus
_OBJC_IVAR_$_ISyncRecordViewWithConflicts._clientId
_OBJC_IVAR_$_ISyncRecordWithConflictGraphNode._freezeDriedRecord
_OBJC_IVAR_$_ISyncRecordWithConflictGraphNode._isdConflict
_OBJC_IVAR_$_ISyncSimplyIgnoreLocalsFilter._entityNames
_OBJC_IVAR_$_ISyncTCCAccessOperation._accessGranted
_OBJC_IVAR_$_ISyncTCCAccessOperation._isExecuting
_OBJC_IVAR_$_ISyncTCCAccessOperation._isFinished
_OBJC_IVAR_$_RelationshipInformation._entityName
_OBJC_IVAR_$_RelationshipInformation._legalTypes
_OBJC_IVAR_$_RelationshipInformation._modsToCheckPerRecord
_OBJC_IVAR_$_RelationshipInformation._relationship
_OBJC_IVAR_$_RelationshipInformation._session
_OBJC_IVAR_$_RelationshipInformation._typeMap
_OBJC_METACLASS_$_DataMgrBasedNameNumberProvider
_OBJC_METACLASS_$_DefaultNameNumberProvider
_OBJC_METACLASS_$_IDMapping
_OBJC_METACLASS_$_ISDAdminDatabase
_OBJC_METACLASS_$_ISDCallHistory
_OBJC_METACLASS_$_ISDChange
_OBJC_METACLASS_$_ISDChangeBuilder
_OBJC_METACLASS_$_ISDChangeEnumerator
_OBJC_METACLASS_$_ISDChangePuller
_OBJC_METACLASS_$_ISDChangePusher
_OBJC_METACLASS_$_ISDChangeStore
_OBJC_METACLASS_$_ISDClient
_OBJC_METACLASS_$_ISDClientState
_OBJC_METACLASS_$_ISDConflict
_OBJC_METACLASS_$_ISDConflictAddEnumerator
_OBJC_METACLASS_$_ISDConflictChangeEnumerator
_OBJC_METACLASS_$_ISDConflictManager
_OBJC_METACLASS_$_ISDDataClass
_OBJC_METACLASS_$_ISDDataDatabase
_OBJC_METACLASS_$_ISDDataDirectoryVersion
_OBJC_METACLASS_$_ISDDataManager
_OBJC_METACLASS_$_ISDDataObject
_OBJC_METACLASS_$_ISDDataReference
_OBJC_METACLASS_$_ISDDataWrapper
_OBJC_METACLASS_$_ISDDatabase
_OBJC_METACLASS_$_ISDDigestMaker
_OBJC_METACLASS_$_ISDDisabledServer
_OBJC_METACLASS_$_ISDEntity
_OBJC_METACLASS_$_ISDEntityComponent
_OBJC_METACLASS_$_ISDException
_OBJC_METACLASS_$_ISDFastCDSyncHelper
_OBJC_METACLASS_$_ISDFileReference
_OBJC_METACLASS_$_ISDFiltratorThingy
_OBJC_METACLASS_$_ISDGlobalId
_OBJC_METACLASS_$_ISDIdMapDatabase
_OBJC_METACLASS_$_ISDInstrumentedEnumerator
_OBJC_METACLASS_$_ISDKeyedArchiverHelperToRemoveSyncStates
_OBJC_METACLASS_$_ISDNameNumberMapping
_OBJC_METACLASS_$_ISDNameNumberProvider
_OBJC_METACLASS_$_ISDObjectGraphWrapper
_OBJC_METACLASS_$_ISDPersistentStoreSyncer
_OBJC_METACLASS_$_ISDPreNameNumberMapIdMapDatabase
_OBJC_METACLASS_$_ISDProperty
_OBJC_METACLASS_$_ISDPropertyChange
_OBJC_METACLASS_$_ISDPropertyConflict
_OBJC_METACLASS_$_ISDPropertyValue
_OBJC_METACLASS_$_ISDQuickDirtyCoder
_OBJC_METACLASS_$_ISDRecord
_OBJC_METACLASS_$_ISDRecordIdMap
_OBJC_METACLASS_$_ISDRecordIdMapDatabase
_OBJC_METACLASS_$_ISDRecordIdMapper
_OBJC_METACLASS_$_ISDRecordStore
_OBJC_METACLASS_$_ISDRelationship
_OBJC_METACLASS_$_ISDSaveSyncServicesDirectoryCopyHandler
_OBJC_METACLASS_$_ISDSchema
_OBJC_METACLASS_$_ISDSchemaParser
_OBJC_METACLASS_$_ISDServer
_OBJC_METACLASS_$_ISDServerFileLockerDelegate
_OBJC_METACLASS_$_ISDSqliteChangeStore
_OBJC_METACLASS_$_ISDSqliteChangeStoreDatabase
_OBJC_METACLASS_$_ISDSqliteRecordIdMapper
_OBJC_METACLASS_$_ISDStructuredDelta
_OBJC_METACLASS_$_ISDSyncJob
_OBJC_METACLASS_$_ISDSyncManager
_OBJC_METACLASS_$_ISDSyncParticipant
_OBJC_METACLASS_$_ISDSyncPlan
_OBJC_METACLASS_$_ISDSyncState
_OBJC_METACLASS_$_ISyncAlwaysAcceptFilter
_OBJC_METACLASS_$_ISyncChange
_OBJC_METACLASS_$_ISyncClient
_OBJC_METACLASS_$_ISyncConcreteChange
_OBJC_METACLASS_$_ISyncConcreteClient
_OBJC_METACLASS_$_ISyncConcreteManager
_OBJC_METACLASS_$_ISyncConcreteRecordGraphNode
_OBJC_METACLASS_$_ISyncConcreteRecordReference
_OBJC_METACLASS_$_ISyncConcreteRecordSnapshot
_OBJC_METACLASS_$_ISyncConcreteRecordView
_OBJC_METACLASS_$_ISyncConcreteSession
_OBJC_METACLASS_$_ISyncConcreteSessionDriver
_OBJC_METACLASS_$_ISyncConjunctionFilter
_OBJC_METACLASS_$_ISyncFileLocker
_OBJC_METACLASS_$_ISyncFilter
_OBJC_METACLASS_$_ISyncInstrumentedSession
_OBJC_METACLASS_$_ISyncManager
_OBJC_METACLASS_$_ISyncPlan
_OBJC_METACLASS_$_ISyncRecordGraphNode
_OBJC_METACLASS_$_ISyncRecordReference
_OBJC_METACLASS_$_ISyncRecordSnapshot
_OBJC_METACLASS_$_ISyncRecordView
_OBJC_METACLASS_$_ISyncRecordViewWithConflicts
_OBJC_METACLASS_$_ISyncRecordWithConflictGraphNode
_OBJC_METACLASS_$_ISyncSession
_OBJC_METACLASS_$_ISyncSessionDriver
_OBJC_METACLASS_$_ISyncSimplyIgnoreLocalsFilter
_OBJC_METACLASS_$_ISyncTCCAccessOperation
_OBJC_METACLASS_$_PresetNameNumberProvider
_OBJC_METACLASS_$_RelationshipInformation
_OBJC_METACLASS_$_ServerBasedNameNumberProvider
_OBJC_METACLASS_$_SyncClientNameNumberProvider
_SyncServicesVersionNumber
_SyncServicesVersionString
__ISDActiveClientCheckIntervalDefault
__ISDActiveClientCheckKey
__ISDAirbagAnimationInterval
__ISDAirbagDataclassBlacklist
__ISDAirbagIsEnabled
__ISDAirbagMinimumRecordsInTruthForDataclass
__ISDAirbagSetAnimationInterval
__ISDAirbagSetEnabled
__ISDAirbagSetThreshold
__ISDAirbagThreshold
__ISDAirbagTimeout
__ISDAllocUUID
__ISDAllocUUIDString
__ISDAllowMultipleAppClients
__ISDAllowUnresolvedReferences
__ISDAlwaysShowAirbagIsEnabled
__ISDAlwaysShowAirbagSetEnabled
__ISDAreDataWrappersDisabled
__ISDArrayOfDictionariesFromQueryCallback
__ISDBackdoorListenerPort
__ISDBrandString
__ISDChangeSourceVacuumThreshold
__ISDCleanStringForFileSystem
__ISDCleanupCallHistory
__ISDCleanupExtraBeehiveBackupFiles
__ISDClientNameSymlinkPathForClient
__ISDClientReceiveTimeout
__ISDClientSendTimeout
__ISDClientSyncAlertHandlerBootstrapName
__ISDComputeClosureOfEntityNames
__ISDComputeConservativeClosureOfEntityNames
__ISDComputeFileSystemNodeSize
__ISDConnectRetryCount
__ISDConnectTimeout
__ISDCopyUUIDAsData
__ISDCopyUUIDAsString
__ISDCreateUUID
__ISDDataDirectoryPathForClient
__ISDDataWrapperThresholdSize
__ISDDatabaseAccessStatus
__ISDDefaultDataDirectoryPath
__ISDDefaultLogDirectoryPath
__ISDDefaultSyncServicesDirectoryPath
__ISDDefaultSyncServicesLogDirectoryPath
__ISDDisableLogAlways
__ISDDisableMessageTracing
__ISDDisableUIHelpers
__ISDDisabledServer
__ISDDomainString
__ISDEnsureDirectoryPathExists
__ISDEntityNamesToDataclassNames
__ISDFileSystemSafeString
__ISDFileSystemSafeStringUsingHash
__ISDFileSystemSafeStringUsingHex
__ISDGetToplevelDataDirectory
__ISDGetTruthDatabaseDirectoryForSegmentNamed
__ISDHexDataDirectoryPathForClient
__ISDHomeDirectoryIsOnSharedNetworkDrive
__ISDInitializeLogging
__ISDIsContactSyncingAllowed
__ISDIsDatabaseAtPathCorrupted
__ISDIsSyncingEnabled
__ISDLimitAlwaysShowAirbagDataclasses
__ISDLog
__ISDLogDirectoryPathForClient
__ISDLogEverythingPrefsKey
__ISDLogLevel
__ISDLogLevelPrefsKey
__ISDLogLevelToString
__ISDLogSql
__ISDLogStackTraceOnException
__ISDLogSuppressKey
__ISDMaxSessionCreationTime
__ISDMessageTrace
__ISDNewActiveClientCheckDate
__ISDNewPurgeAndVacuumDate
__ISDNumberOfBeehiveBackupFilesToKeep
__ISDNumberOfLogFiles
__ISDPotentialLogFileNames
__ISDPruneFilePath
__ISDPurgeAndVacuumIntervalDefault
__ISDPurgeTimeKey
__ISDSPathForSQLiteDatabase
__ISDSQLiteBlowOut
__ISDSQLiteTraceSQL
__ISDSQliteFullIOErrCorruptionHandler
__ISDSaveClientDataBeforeMingler
__ISDSaveDataDirectorySnapshot
__ISDSaveDirectoryPathInDirectory
__ISDSaveSyncServicesDirectoryForException
__ISDServerBootstrapName
__ISDServerPath
__ISDSetActiveClientCheckIntervalDefault
__ISDSetAllowUnresolvedReferences
__ISDSetAreDataWrappersDisabled
__ISDSetDisabledServer
__ISDSetNumberOfLogFiles
__ISDSetShouldCompressClientState
__ISDSetShouldEnableBackdoorListener
__ISDSetShouldEnableDebugMenu
__ISDSetShouldEnableGrowlNotifications
__ISDSetShouldExcludeSyncingPreferences
__ISDSetShouldSaveAdditionalInfoWhenMingleFails
__ISDSetShouldSaveCallHistory
__ISDSetShouldSaveCallHistoryForEveryCall
__ISDSetShouldSaveClientState
__ISDSetShouldSavePushedChanges
__ISDSetShouldUseSmartExceptionsInSyncServer
__ISDSetShowAnchorMismatchDialog
__ISDSetShowDetailOnLoad
__ISDSetSyncingEnabled
__ISDShouldCleanupAllCallHistory
__ISDShouldCompressClientState
__ISDShouldDisableUIHelpers
__ISDShouldEnableBackdoorListener
__ISDShouldEnableDebugMenu
__ISDShouldEnableGrowlNotifications
__ISDShouldExcludeSyncingPreferences
__ISDShouldLog
__ISDShouldLogEverything
__ISDShouldLogKey
__ISDShouldLogPersonalInfo
__ISDShouldRequireLowercaseTypes
__ISDShouldSaveAdditionalInfoWhenMingleFails
__ISDShouldSaveCallHistory
__ISDShouldSaveCallHistoryForEveryCall
__ISDShouldSaveClientState
__ISDShouldSavePushedChanges
__ISDShouldUseSmartExceptionsInSyncServer
__ISDShouldValidateClients
__ISDShouldValidatePushedChangesAndRecords
__ISDShouldValidateTypesInSchemas
__ISDShowAnchorMismatchDialog
__ISDShowDetailOnLoad
__ISDSqliteCacheSize
__ISDStringToLogLevel
__ISDSyncAlertReceiveTimeout
__ISDSyncAlertSendTimeout
__ISDSyncDirectoryFileSystemSupportsHardLinks
__ISDSyncPlanKeepCheckKey
__ISDSyncUIDaemonReceiveTimeout
__ISDSyncUIDaemonSendTimeout
__ISDSyncingEntitiesAllowed
__ISDSyncsAfterHysteresis
__ISDUnregisteredClientName
__ISDUseExtendedFiltering
__ISDVLog
__ISD_UTNameNumberSetup
__ISD_UTNameNumberTearDown
__ISDfileIsLocked
__ISyncAssertFailed
__ISyncPreconditionFailed
__ISyncPrivateInstance
__WarnAboutUsingISyncDataClassImageKey
___ISDDefaultSyncServicesDirectoryPath
___ISDDefaultSyncServicesLogDirectoryPath
___ISyncThouShallNotSubclass
__dataclassNamesForEntities
__executeSQL
__executeStatement
__gDataDirectoryPath
__insertIdReferences
__isRunningInServer
__runningInServer
__setIsRunningInServer
_beginExclusiveTransaction
_beginImmediateTransaction
_beginTransaction
_checkin_mach_service
_commitTransaction
_conflictsCount
_createCalendarRequestPort
_databaseGotCorrupted
_databasePath
_getColumnDescriptionWithSql
_googleFound
_integrityResult
_isd_addRecordIdToArray
_isd_clientAsNumber
_isd_clientName
_isd_clientNumber
_isd_entityAsNumber
_isd_entityName
_isd_entityNumber
_isd_mapArray
_kConflictResolver
_kSSUID
_kSyncMenu
_kUUIDExpectedDataLength
_kUUIDExpectedStringLength
_rollbackTransaction
_sqliteExecute
_sqliteExecuteWithCallback
_sqliteExecuteWithCallbackAndOptions
_syncServerPreference
_BZ2_bzWrite
_BZ2_bzWriteClose
_BZ2_bzWriteOpen
_CC_MD4_Final
_CC_MD4_Init
_CC_MD4_Update
_CC_SHA1_Final
_CC_SHA1_Init
_CC_SHA1_Update
_CFAbsoluteTimeGetCurrent
_CFCopyDescription
_CFDateFormatterCreate
_CFDateFormatterCreateStringWithAbsoluteTime
_CFDateFormatterSetFormat
_CFDictionaryCreateMutable
_CFDictionaryGetKeysAndValues
_CFEqual
_CFMakeCollectable
_CFPreferencesCopyAppValue
_CFPreferencesCopyValue
_CFPreferencesGetAppBooleanValue
_CFPreferencesSetAppValue
_CFPreferencesSetValue
_CFPreferencesSynchronize
_CFRelease
_CFRetain
_CFRunLoopRunInMode
_CFRunLoopStop
_CFSetGetValues
_CFStringCreateWithFormat
_CFStringCreateWithFormatAndArguments
_CFStringGetBytes
_CFStringGetCStringPtr
_CFStringGetCharacters
_CFStringGetCharactersPtr
_CFStringGetLength
_CFURLCreateFromFSRef
_CFURLGetFSRef
_CFUUIDCreate
_CFUUIDCreateFromString
_CFUUIDCreateFromUUIDBytes
_CFUUIDCreateString
_CFUUIDGetUUIDBytes
_CFUserNotificationDisplayAlert
_DisposeHandle
_FSGetCatalogInfo
_FSNewAlias
_FSPathMakeRef
_FSResolveAlias
_FSSetCatalogInfo
_GetAliasSize
_HLock
_HUnlock
_NSAccessibilityException
_NSAllocateObject
_NSBinaryStoreType
_NSClassFromString
_NSCocoaErrorDomain
_NSConnectionDidDieNotification
_NSCreateMapTable
_NSDefaultRunLoopMode
_NSDeletedObjectsKey
_NSDestinationInvalidException
_NSEndMapTableEnumeration
_NSEnumerateMapTable
_NSEqualSizes
_NSFileModificationDate
_NSFilePosixPermissions
_NSFileReferenceCount
_NSFileSize
_NSFileSystemFreeSize
_NSFileType
_NSFileTypeDirectory
_NSFileTypeSymbolicLink
_NSFullUserName
_NSHomeDirectory
_NSIntegerMapKeyCallBacks
_NSIntegerMapValueCallBacks
_NSInternalInconsistencyException
_NSInvalidArgumentException
_NSInvalidReceivePortException
_NSInvalidSendPortException
_NSLocalizedDescriptionKey
_NSLog
_NSManagedObjectContextDidSaveNotification
_NSMapInsert
_NSMapMember
_NSNextMapEnumeratorPair
_NSObjectInaccessibleException
_NSObjectMapKeyCallBacks
_NSObjectMapValueCallBacks
_NSObjectNotAvailableException
_NSParagraphStyleAttributeName
_NSPersistentStoreCoordinatorWillRemoveStoreNotification
_NSPortReceiveException
_NSPortSendException
_NSPortTimeoutException
_NSResetMapTable
_NSSearchPathForDirectoriesInDomains
_NSStringFromClass
_NSStringFromSelector
_NSTaskDidTerminateNotification
_NSUpdatedObjectsKey
_NSUserName
_NSVersionOfLinkTimeLibrary
_NSXMLStoreType
_NewHandle
_OBJC_CLASS_$_NSArchiver
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAttributeDescription
_OBJC_CLASS_$_NSAttributedString
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCalendarDate
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSColor
_OBJC_CLASS_$_NSConditionLock
_OBJC_CLASS_$_NSConnection
_OBJC_CLASS_$_NSCountedSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDecimalNumber
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSEntityDescription
_OBJC_CLASS_$_NSEnumerator
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFetchRequest
_OBJC_CLASS_$_NSFileHandle
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSInvocation
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLock
_OBJC_CLASS_$_NSMachBootstrapServer
_OBJC_CLASS_$_NSMachPort
_OBJC_CLASS_$_NSManagedObject
_OBJC_CLASS_$_NSManagedObjectContext
_OBJC_CLASS_$_NSManagedObjectModel
_OBJC_CLASS_$_NSMapTable
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableAttributedString
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableParagraphStyle
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperation
_OBJC_CLASS_$_NSParagraphStyle
_OBJC_CLASS_$_NSPersistentStoreCoordinator
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSProtocolChecker
_OBJC_CLASS_$_NSRecursiveLock
_OBJC_CLASS_$_NSRelationshipDescription
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTask
_OBJC_CLASS_$_NSTextAttachment
_OBJC_CLASS_$_NSTextTab
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimeZone
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUnarchiver
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSWorkspace
_OBJC_EHTYPE_$_NSException
_OBJC_EHTYPE_id
_OBJC_METACLASS_$_NSData
_OBJC_METACLASS_$_NSEnumerator
_OBJC_METACLASS_$_NSException
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSOperation
_OBJC_METACLASS_$_NSString
_TCCAccessRequest
__Block_object_assign
__Block_object_dispose
__CFMachPortInstallNotifyPort
__DefaultRuneLocale
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___bzero
___error
___objc_personality_v0
___snprintf_chk
___stack_chk_fail
___stack_chk_guard
___stderrp
__objc_empty_cache
_bootstrap_check_in
_bootstrap_port
_bootstrap_strerror
_class_getInstanceMethod
_close
_exit
_fclose
_fcntl
_floor
_fopen
_fprintf
_free
_fstat$INODE64
_getdtablesize
_gethostuuid
_getpid
_host_request_notification
_kCFAllocatorDefault
_kCFPreferencesAnyApplication
_kCFPreferencesAnyHost
_kCFPreferencesCurrentApplication
_kCFPreferencesCurrentHost
_kCFPreferencesCurrentUser
_kCFRunLoopDefaultMode
_kCFTypeDictionaryKeyCallBacks
_kTCCServiceAddressBook
_kill
_mach_host_self
_mach_port_allocate
_mach_port_insert_right
_mach_task_self_
_malloc
_memcmp
_memcpy
_memset
_method_exchangeImplementations
_msgtracer_domain_free
_msgtracer_domain_new
_msgtracer_log
_msgtracer_msg_free
_msgtracer_msg_new
_msgtracer_set
_nanosleep
_notify_cancel
_notify_check
_notify_post
_notify_register_check
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_begin_catch
_objc_collectingEnabled
_objc_ehtype_vtable
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_exception_throw
_objc_getClass
_objc_msgSend
_objc_msgSendSuper2
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_open
_pthread_getspecific
_pthread_key_create
_pthread_setspecific
_read
_realloc
_rename
_sel_getName
_sqlite3_bind_blob
_sqlite3_bind_int
_sqlite3_bind_int64
_sqlite3_bind_null
_sqlite3_bind_text
_sqlite3_close
_sqlite3_column_blob
_sqlite3_column_bytes
_sqlite3_column_int
_sqlite3_column_int64
_sqlite3_column_text
_sqlite3_errcode
_sqlite3_errmsg
_sqlite3_exec
_sqlite3_file_control
_sqlite3_finalize
_sqlite3_free
_sqlite3_last_insert_rowid
_sqlite3_next_stmt
_sqlite3_open_v2
_sqlite3_prepare_v2
_sqlite3_reset
_sqlite3_step
_sqlite3_trace
_sqlite3_vmprintf
_stat$INODE64
_statfs$INODE64
_strcmp
_strdup
_strerror
_strlen
_strncmp
_strtod
_strtol
_strtoll
_strtoul
_strtoull
_unlink
_write
dyld_stub_binder
