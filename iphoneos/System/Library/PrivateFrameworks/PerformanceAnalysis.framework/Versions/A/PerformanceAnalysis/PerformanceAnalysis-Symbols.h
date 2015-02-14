-[MallocTotalDiff initWithMallocTotalBefore:After:]
-[MallocTotalDiff dealloc]
-[MallocTotalDiff totalForPurgeType:]
-[MallocTotalDiff printTotals:]
-[MallocTotalDiff totalBytesReclaimableDiff]
-[MallocTotalDiff setTotalBytesReclaimableDiff:]
-[MallocTotalDiff totalNodesReclaimableDiff]
-[MallocTotalDiff setTotalNodesReclaimableDiff:]
-[MallocTotalDiff totalBytesNonReclaimableDiff]
-[MallocTotalDiff setTotalBytesNonReclaimableDiff:]
-[MallocTotalDiff totalNodesNonReclaimableDiff]
-[MallocTotalDiff setTotalNodesNonReclaimableDiff:]
-[MallocTotalDiff purgeTypeTotalDiffs]
-[MallocTotalDiff setPurgeTypeTotalDiffs:]
-[MallocDataCategorySummaryDiff compare:]
-[MallocDataCategorySummaryDiff init]
-[MallocDataCategorySummaryDiff dealloc]
-[MallocDataCategorySummaryDiff passesFilter:]
-[MallocDataCategorySummaryDiff initWithBefore:After:]
-[MallocDataCategorySummaryDiff printIndent]
-[MallocDataCategorySummaryDiff printSubcategoryIndent]
-[MallocDataCategorySummaryDiff printData:]
-[MallocDataCategorySummaryDiff totalBytesLeakedDiff]
-[MallocDataCategorySummaryDiff setTotalBytesLeakedDiff:]
-[MallocDataCategorySummaryDiff totalNodesLeakedDiff]
-[MallocDataCategorySummaryDiff setTotalNodesLeakedDiff:]
-[MallocDataCategorySummaryDiff totalBytesNonLeakedDiff]
-[MallocDataCategorySummaryDiff setTotalBytesNonLeakedDiff:]
-[MallocDataCategorySummaryDiff totalNodesNonLeakedDiff]
-[MallocDataCategorySummaryDiff setTotalNodesNonLeakedDiff:]
-[MallocDataCategorySummaryDiff depth]
-[MallocDataCategorySummaryDiff setDepth:]
-[MallocDataCategorySummaryDiff name]
-[MallocDataCategorySummaryDiff setName:]
-[PurgeTypeTotalDiff initWithPurgeType:Before:After:]
-[PurgeTypeTotalDiff dealloc]
-[PurgeTypeTotalDiff printData:]
-[PurgeTypeTotalDiff zoneDiffs]
-[PurgeTypeTotalDiff setZoneDiffs:]
-[PurgeTypeTotalDiff purgeClass]
-[PurgeTypeTotalDiff setPurgeClass:]
-[ZoneTotalDiff initWithBefore:After:]
-[ZoneTotalDiff printData:]
-[ZoneTotalDiff dealloc]
+[ZoneTotalDiff newDictionaryOfZoneTotalDiffsBefore:After:]
-[ZoneTotalDiff allocationTotalDiffs]
-[ZoneTotalDiff setAllocationTotalDiffs:]
+[AllocationTotalDiff newDictionaryOfAllocationTotalDiffsBefore:After:]
-[MallocTotal totalForPurgeType:]
-[MallocTotal initWithMallocData:]
-[MallocTotal dealloc]
-[MallocTotal printTotals:]
-[MallocTotal totalBytesReclaimable]
-[MallocTotal setTotalBytesReclaimable:]
-[MallocTotal totalNodesReclaimable]
-[MallocTotal setTotalNodesReclaimable:]
-[MallocTotal totalBytesNonReclaimable]
-[MallocTotal setTotalBytesNonReclaimable:]
-[MallocTotal totalNodesNonReclaimable]
-[MallocTotal setTotalNodesNonReclaimable:]
-[MallocTotal purgeTypeTotals]
-[MallocTotal setPurgeTypeTotals:]
-[MallocDataCategorySummary compare:]
-[MallocDataCategorySummary init]
-[MallocDataCategorySummary dealloc]
-[MallocDataCategorySummary printIndent]
-[MallocDataCategorySummary printSubcategoryIndent]
-[MallocDataCategorySummary passesFilter:]
-[MallocDataCategorySummary printData:]
-[MallocDataCategorySummary addAllocation:]
-[MallocDataCategorySummary totalBytesNonLeaked]
-[MallocDataCategorySummary setTotalBytesNonLeaked:]
-[MallocDataCategorySummary totalNodesNonLeaked]
-[MallocDataCategorySummary setTotalNodesNonLeaked:]
-[MallocDataCategorySummary totalBytesLeaked]
-[MallocDataCategorySummary setTotalBytesLeaked:]
-[MallocDataCategorySummary totalNodesLeaked]
-[MallocDataCategorySummary setTotalNodesLeaked:]
-[MallocDataCategorySummary depth]
-[MallocDataCategorySummary setDepth:]
-[MallocDataCategorySummary name]
-[MallocDataCategorySummary setName:]
-[PurgeTypeTotal stringForType]
-[PurgeTypeTotal printData:]
-[PurgeTypeTotal zoneTotalForZoneName:]
-[PurgeTypeTotal addAllocation:]
-[PurgeTypeTotal initWithPurgeType:]
-[PurgeTypeTotal dealloc]
-[PurgeTypeTotal zones]
-[PurgeTypeTotal setZones:]
-[PurgeTypeTotal purgeClass]
-[PurgeTypeTotal setPurgeClass:]
-[ZoneTotal initWithAllocation:]
-[ZoneTotal dealloc]
-[ZoneTotal addAllocation:]
-[ZoneTotal printData:]
-[ZoneTotal allocationTotals]
-[ZoneTotal setAllocationTotals:]
-[AllocationTotal initWithAllocation:]
-[AllocationTotal dealloc]
-[AllocationTotal addAllocation:]
-[AllocationTotal printData:]
-[AllocationTotal allocations]
-[AllocationTotal setAllocations:]
-[PAProcess countObjectReferences]
-[PAProcess initPrivateResidency]
-[PAProcess initSharedResidency]
-[PAProcess gatherResidentInfoDetailed:]
-[PAProcess getPortInfo]
-[PAProcess getEventInfo]
-[PAProcess getKmem]
-[PAProcess getThreadAndCPUInfo]
-[PAProcess classifyMemoryRegions]
-[PAProcess gatherMallocInfo]
-[PAProcess gatherMallocDetails]
-[PAProcess gatherMallocDetailsNoStacks]
-[PAProcess mallocDataWithFilter:]
-[PAProcess userCpuTimeInSeconds]
-[PAProcess systemCpuTimeInSeconds]
-[PAProcess totalCpuTimeInSeconds]
-[PAProcess getPrivateResidency]
-[PAProcess mallocData]
-[PAProcess getSharedResidency]
-[PAProcess gatherImageInformation]
-[PAProcess initWithPid:]
-[PAProcess _gatherDisplayName]
-[PAProcess _gatherIdleExitStatus]
-[PAProcess dealloc]
-[PAProcess nameString]
-[PAProcess fullNameString]
-[PAProcess eventString]
-[PAProcess portString]
-[PAProcess privateResidencyString]
-[PAProcess privateResidencyBytesString]
-[PAProcess sharedResidencyString]
-[PAProcess sharedResidencyBytesString]
-[PAProcess cpuTimeString]
-[PAProcess messagesString]
-[PAProcess syscallString]
-[PAProcess contextSwitchString]
-[PAProcess wiredMemoryString]
-[PAProcess totalAllocatedMemoryString]
-[PAProcess totalLeakedMemoryString]
-[PAProcess memorySummaryString]
-[PAProcess architectureString]
-[PAProcess description]
-[PAProcess topLevelStatsString]
-[PAProcess allRegionsString]
-[PAProcess imageNamesString]
-[PAProcess imageNamesWithSegmentsString]
-[PAProcess imageNamesWithSegmentsAndSectionsString]
+[PAProcess nameForLivingProcessWithPid:]
+[PAProcess getProcessesWithName:]
+[PAProcess getAllProcesses]
+[PAProcess findChildProcessesOf:usingCandidateProcesses:]
+[PAProcess gatherGroupOfRunningChildProcessesFor:]
-[PAProcess initWithCoder:]
-[PAProcess encodeWithCoder:]
-[PAProcess isEqual:]
-[PAProcess discardDetailedData]
-[PAProcess procName]
-[PAProcess setProcName:]
-[PAProcess displayName]
-[PAProcess setDisplayName:]
-[PAProcess task]
-[PAProcess setTask:]
-[PAProcess pid]
-[PAProcess setPid:]
-[PAProcess responsiblePid]
-[PAProcess setResponsiblePid:]
-[PAProcess is64bit]
-[PAProcess setIs64bit:]
-[PAProcess memRegions]
-[PAProcess setMemRegions:]
-[PAProcess images]
-[PAProcess setImages:]
-[PAProcess imageSegments]
-[PAProcess setImageSegments:]
-[PAProcess numPorts]
-[PAProcess setNumPorts:]
-[PAProcess numThreads]
-[PAProcess setNumThreads:]
-[PAProcess userCPUTime]
-[PAProcess setUserCPUTime:]
-[PAProcess systemCPUTime]
-[PAProcess setSystemCPUTime:]
-[PAProcess numFaults]
-[PAProcess setNumFaults:]
-[PAProcess numPageins]
-[PAProcess setNumPageins:]
-[PAProcess numCOWFaults]
-[PAProcess setNumCOWFaults:]
-[PAProcess numMessagesSent]
-[PAProcess setNumMessagesSent:]
-[PAProcess numMessagesReceived]
-[PAProcess setNumMessagesReceived:]
-[PAProcess numSyscallsUnix]
-[PAProcess setNumSyscallsUnix:]
-[PAProcess numSyscallsMach]
-[PAProcess setNumSyscallsMach:]
-[PAProcess numContextSwitches]
-[PAProcess setNumContextSwitches:]
-[PAProcess kmem]
-[PAProcess setKmem:]
-[PAProcess idleExitStatus]
-[PAProcess kp]
+[PAMemRegion _memRegionsFromVMRegionInfo:andProcess:detailed:]
+[PAMemRegion memRegionsForProcess:detailed:]
+[PAMemRegion _classificationStringForUserTag:protection:andShareMode:]
-[PAMemRegion classifyRegion]
-[PAMemRegion initWithVMRegionInfo:andProcess:]
-[PAMemRegion regionInfo]
-[PAMemRegion setInProcObjectCount:]
-[PAMemRegion gatherDetailedResidency]
-[PAMemRegion getResidency]
-[PAMemRegion getPrivateResidency]
-[PAMemRegion getSharedResidency]
-[PAMemRegion _isPrivate]
-[PAMemRegion dealloc]
-[PAMemRegion residentString]
-[PAMemRegion privateResidentString]
-[PAMemRegion sharedResidentString]
-[PAMemRegion purgeStateString]
-[PAMemRegion sharedString]
-[PAMemRegion protectionString]
-[PAMemRegion regionSharePurgeProtString]
-[PAMemRegion residentAndInfoString]
-[PAMemRegion fullDetailsString]
-[PAMemRegion regionTypeSpecificString]
-[PAMemRegion initWithCoder:]
-[PAMemRegion encodeWithCoder:]
-[PAMemRegion isEqual:]
-[PAMemRegion compareDirtyAndSwapped:]
-[PAMemRegion compareClean:]
-[PAMemRegion compareSpec:]
-[PAMemRegion owningProcess]
-[PAMemRegion inProcObjectCount]
-[PAMemRegion validObjectCount]
-[PAMemRegion setValidObjectCount:]
-[PAMemRegion offsetFromObject]
-[PAMemRegion setOffsetFromObject:]
-[PAMemRegion purgeState]
-[PAMemRegion setPurgeState:]
-[PAMemRegion classification]
-[PAMemRegion setClassification:]
-[PASystem systemMemoryInfoDescription]
-[PASystem description]
-[PASystem initBuild]
-[PASystem initMemory]
-[PASystem init]
-[PASystem processCount]
-[PASystem getBuild]
-[PASystem dealloc]
-[PASystem initWithCoder:]
-[PASystem encodeWithCoder:]
-[PASystem isEqual:]
-[PASystem build]
-[PASystem setBuild:]
-[PASystem processes]
-[PASystem setProcesses:]
-[PASystem cards]
-[PASystem setCards:]
-[PASymbol setOffsetIntoOwner:]
-[PASymbol initWithCSSymbolRef:]
-[PASymbol sourceInfoWithOffsetIntoSymbol:]
-[PASymbol hasAnySourceInfo]
-[PASymbol addSourceInfo:]
-[PASymbol dealloc]
-[PASymbol initEmptySymbolWithOffsetIntoOwner:]
-[PASymbol isEmptySymbol]
-[PASymbol containsOffsetIntoSymbolOwner:]
-[PASymbol compareToSymbol:]
-[PASymbol compareInfoRichnessToSymbol:]
-[PASymbol copySourceInfoFromSymbol:]
-[PASymbol debugDescription]
-[PASymbol debugDescriptionForOffsetIntoOwner:]
-[PASymbol name]
-[PASymbol length]
-[PASymbol offsetIntoOwner]
-[PASymbolSourceInfo initWithCSSymbolOwner:andOffsetIntoSymbolOwner:]
-[PASymbolSourceInfo _initEmptySourceInfoWithOffsetIntoSymbolOwner:]
-[PASymbolSourceInfo isEmptySourceInfo]
-[PASymbolSourceInfo debugDescription]
-[PASymbolSourceInfo dealloc]
-[PASymbolSourceInfo sourceFileName]
-[PASymbolSourceInfo sourceFileLineNumber]
-[PASymbolSourceInfo sourceFileColumnNumber]
-[PASymbolSourceInfo offsetIntoSymbolOwner]
-[PASymbolSourceInfo length]
-[PACSRefWrapper initWithCSTypeRef:]
-[PACSRefWrapper dealloc]
-[PACSRefWrapper csRef]
-[PACSSymbolOwnerWrapper initWithSymbolOwner:]
-[PACSSymbolOwnerWrapper initWithSymbolOwner:andPath:]
-[PACSSymbolOwnerWrapper dealloc]
-[PACSSymbolOwnerWrapper path]
-[PACSSymbolOwnerWrapper debugDescription]
-[PASymbolOwner _insertionIndexInSymbols:forSymbolWithOffsetIntoSymbolOwner:]
___77-[PASymbolOwner _insertionIndexInSymbols:forSymbolWithOffsetIntoSymbolOwner:]_block_invoke
-[PASymbolOwner addSymbol:]
-[PASymbolOwner _symbolContainingOffsetIntoSymbolOwner:inSymbols:]
-[PASymbolOwner symbolContainingOffsetIntoSymbolOwner:]
-[PASymbolOwner oldSymbolContainingOffsetIntoSymbolOwner:]
-[PASymbolOwner incorporateDataFromCSSymbolOwner:andPath:]
-[PASymbolOwner incorporateDataFromPACSSymbolOwner:]
-[PASymbolOwner initWithUUID:andPath:]
-[PASymbolOwner initWithCSSymbolOwnerRef:andPath:]
-[PASymbolOwner initWithCSSymbolOwnerRef:]
-[PASymbolOwner initWithPACSSymbolOwner:]
-[PASymbolOwner gatherBundleInfo]
-[PASymbolOwner compareInfoRichnessToSymbolOwner:]
-[PASymbolOwner debugDescription]
-[PASymbolOwner dealloc]
-[PASymbolOwner name]
-[PASymbolOwner path]
-[PASymbolOwner textSegmentLength]
-[PASymbolOwner uuid]
-[PASymbolOwner bundleIdentifier]
-[PASymbolOwner bundleVersion]
-[PASymbolOwner bundleShortVersion]
-[PASymbolOwner binaryVersion]
+[PASymbolHandle getEmptySymbolHandle]
___38+[PASymbolHandle getEmptySymbolHandle]_block_invoke
-[PASymbolHandle hasSymbolOwner]
-[PASymbolHandle symbolOwnerName]
-[PASymbolHandle symbolOwnerUUID]
-[PASymbolHandle symbolOwnerPath]
-[PASymbolHandle symbolOwnerTextSegmentLength]
-[PASymbolHandle symbolOwnerBundleIdentifier]
-[PASymbolHandle symbolOwnerBundleVersion]
-[PASymbolHandle symbolOwnerBundleShortVersion]
-[PASymbolHandle symbolOwnerBinaryVersion]
-[PASymbolHandle hasSymbol]
-[PASymbolHandle symbolLength]
-[PASymbolHandle symbolStartAddressInTask]
-[PASymbolHandle symbolName]
-[PASymbolHandle _sourceInformationForAddress:]
-[PASymbolHandle hasSourceInformationForAddress:]
-[PASymbolHandle sourceFileNameForAddress:]
-[PASymbolHandle sourceColumnNumberForAddress:]
-[PASymbolHandle sourceLineNumberForAddress:]
-[PASymbolHandle compareInfoRichnessToSymbolHandle:forAddress:]
-[PASymbolHandle initWithSymbol:andSymbolOwnerStartAddress:andSymbolOwner:]
-[PASymbolHandle _initAsEmptyHandle]
-[PASymbolHandle dealloc]
-[PASymbolHandle debugDescription]
-[PASymbolHandle debugDescriptionForAddress:]
-[PASymbolHandle addToPersistentCache]
-[PASymbolHandle symbolOwnerStartAddressInTask]
-[PASymbolDataStore _addNewSymbolOwnerForCSSymbolOwnerRef:]
-[PASymbolDataStore _fillUUIDCacheWithKernelSymbolOwners]
___57-[PASymbolDataStore _fillUUIDCacheWithKernelSymbolOwners]_block_invoke
___57-[PASymbolDataStore _fillUUIDCacheWithKernelSymbolOwners]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_345
___destroy_helper_block_346
-[PASymbolDataStore makeSureKernelBinaryLocationsAreKnown]
-[PASymbolDataStore _fillUUIDCacheWithSymbolOwnersFromCurrentProcesses]
___71-[PASymbolDataStore _fillUUIDCacheWithSymbolOwnersFromCurrentProcesses]_block_invoke
___71-[PASymbolDataStore _fillUUIDCacheWithSymbolOwnersFromCurrentProcesses]_block_invoke_2
___copy_helper_block_354
___destroy_helper_block_355
___copy_helper_block_358
___destroy_helper_block_359
-[PASymbolDataStore _populateSharedCacheMappingsDictionaryWithSharedCachesInLivingProcesses]
-[PASymbolDataStore _populateCSSymbolOwnerCacheWithLivingProcesses]
___CreateSymbolOwnerForUUIDAtPath_block_invoke
___CreateSymbolOwnerForUUIDAtPath_block_invoke_2
___copy_helper_block_366
___destroy_helper_block_367
___copy_helper_block_370
___destroy_helper_block_371
___CreateDsymSymbolOwnerForUUID_block_invoke
___CreateDsymSymbolOwnerForUUID_block_invoke_2
-[PASymbolDataStore _PACSSymbolOwnerForImageUUID:andPath:andPidHint:]
___69-[PASymbolDataStore _PACSSymbolOwnerForImageUUID:andPath:andPidHint:]_block_invoke
___copy_helper_block_395
___destroy_helper_block_396
-[PASymbolDataStore _sharedCacheMappingsForSharedCacheUUID:]
___60-[PASymbolDataStore _sharedCacheMappingsForSharedCacheUUID:]_block_invoke
___copy_helper_block_410
___destroy_helper_block_411
___60-[PASymbolDataStore _sharedCacheMappingsForSharedCacheUUID:]_block_invoke415
-[PASymbolDataStore _symbolHandleForAddress:withImageUUIDMappings:andImageMappingSlide:andPidHint:]
-[PASymbolDataStore _symbolHandleForAddress:inImageUUID:andImageMappingSlide:andPidHint:]
-[PASymbolDataStore _symbolHandleForOffsetIntoSymbolOwner:withSymbolOwner:andSymbolOwnerBaseAddress:andPidHint:]
-[PASymbolDataStore symbolHandleForAddress:inSampleTask:isLiving:]
-[PASymbolDataStore symbolHandleForOffset:inBinaryWithUUID:inLivingPid:]
-[PASymbolDataStore symbolHandleForOffset:inBinaryWithUUID:withBinaryOffsetInTask:inLivingPid:]
-[PASymbolDataStore csSymbolicatorForPid:]
-[PASymbolDataStore cacheSymbolicatorForPid:]
-[PASymbolDataStore flushCachedSymbolicatorForPid:]
-[PASymbolDataStore flushSymbolicatorCache]
-[PASymbolDataStore init]
-[PASymbolDataStore dealloc]
-[PASymbolDataStore symbolHandleForAddress:inLivingPid:]
-[PASymbolDataStore copyImageInfosForLivingPid:]
___48-[PASymbolDataStore copyImageInfosForLivingPid:]_block_invoke
___copy_helper_block_473
___destroy_helper_block_474
___48-[PASymbolDataStore copyImageInfosForLivingPid:]_block_invoke477
-[PASymbolDataStore _isLikelyToBeKernelAddress:]
___48-[PASymbolDataStore _isLikelyToBeKernelAddress:]_block_invoke
___48-[PASymbolDataStore _isLikelyToBeKernelAddress:]_block_invoke_2
___copy_helper_block_485
___destroy_helper_block_486
-[PASymbolDataStore symbolHandleForAddress:withSymbolicator:]
-[PASymbolDataStore shouldDiscoverUncachedInformation]
-[PASymbolDataStore setShouldDiscoverUncachedInformation:]
-[PASymbolDataStore shouldReportSymbolInformation]
-[PASymbolDataStore setShouldReportSymbolInformation:]
-[PASymbolDataStore shouldUseDsymForUUIDToFindBinaries]
-[PASymbolDataStore setShouldUseDsymForUUIDToFindBinaries:]
____csSymbolOwnerContainsAddress_block_invoke
___copy_helper_block_535
___destroy_helper_block_536
-[PAMemRange end]
-[PAMemRange isConsistent]
-[PAMemRange isEqual:]
-[PAMemRange contains:]
-[PAMemRange intersects:]
+[PAMemRange newMemRangeThatIsIntersectionOf:with:]
-[PAMemRange isContiguous:]
-[PAMemRange compareSize:]
-[PAMemRange compare:]
-[PAMemRange compare:equalWhenContained:equalWhenIntersects:]
-[PAMemRange rangeString]
-[PAMemRange description]
-[PAMemRange initWithAddress:andSize:]
-[PAMemRange initWithCoder:]
-[PAMemRange encodeWithCoder:]
-[PAMemRange containsSwappedPages:]
-[PAMemRange start]
-[PAMemRange setStart:]
-[PAMemRange size]
-[PAMemRange setSize:]
-[PAMappedFileRegion initWithVMRegionInfo:andProcess:]
-[PAMappedFileRegion dealloc]
-[PAMappedFileRegion initWithCoder:]
-[PAMappedFileRegion encodeWithCoder:]
-[PAMappedFileRegion residentAndInfoString]
-[PAMappedFileRegion regionTypeSpecificString]
-[PAMappedFileRegion shortName]
-[PAMappedFileRegion setShortName:]
-[PAMappedFileRegion path]
-[PAMappedFileRegion setPath:]
-[PAMappedFileRegion bytesOnDisk]
-[PAMappedFileRegion setBytesOnDisk:]
-[PAImage dealloc]
-[PAImage isExecutable]
-[PAImage compare:]
-[PAImage nameString]
-[PAImage segmentsString]
-[PAImage segmentsAndSectionsString]
-[PAImage initWithCoder:]
-[PAImage encodeWithCoder:]
-[PAImage isEqual:]
-[PAImage slide]
-[PAImage setSlide:]
-[PAImage name]
-[PAImage setName:]
-[PAImage path]
-[PAImage setPath:]
-[PAImage segments]
-[PAImage setSegments:]
-[PAImage fileType]
-[PAImage setFileType:]
-[PAImage isInSharedCache]
-[PAImage setIsInSharedCache:]
-[PAImageSegment dealloc]
-[PAImageSegment summaryString]
-[PAImageSegment sectionsStringWithPrefix:]
-[PAImageSegment initWithCoder:]
-[PAImageSegment encodeWithCoder:]
-[PAImageSegment isEqual:]
-[PAImageSegment compare:]
-[PAImageSegment name]
-[PAImageSegment setName:]
-[PAImageSegment parentImage]
-[PAImageSegment setParentImage:]
-[PAImageSegment sections]
-[PAImageSegment setSections:]
-[PAMountSnapshot initWithStatus:atMachTime:]
-[PAMountSnapshot dealloc]
-[PAMountSnapshot isBlockingThread:]
-[PAMountSnapshot isUnresponsive]
-[PAMountSnapshot machTimestampWhenMeasured]
-[PAMountSnapshot machTimestampOfLastResponse]
-[PAMountSnapshot blockedThreadIDs]
-[PAMountStatus initWithName:andType:]
-[PAMountStatus dealloc]
-[PAMountStatus addStatus:atMachTime:]
-[PAMountStatus isBlockingThread:betweenMachStartTime:andEndTime:]
-[PAMountStatus isUnresponsiveBetweenMachStartTime:andEndTime:]
-[PAMountStatus copyName]
-[PAMountStatus copySanitizedName]
-[PAMountStatus copyUnresponsiveDescriptionForThread:withSanitizedPaths:betweenMachStartTime:andEndTime:includeThreadIDs:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___122-[PAMountStatus copyUnresponsiveDescriptionForThread:withSanitizedPaths:betweenMachStartTime:andEndTime:includeThreadIDs:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PAMountStatusTracker init]
-[PAMountStatusTracker dealloc]
-[PAMountStatusTracker takeCurrentMountStatusForMachTime:]
-[PAMountStatusTracker forEachMountBlockingThread:withSanitizedPaths:betweenMachStartTime:andEndTime:runBlock:]
-[PAMountStatusTracker forEachUnresponsiveMountWithSanitizedPaths:BetweenMachStartTime:andEndTime:runBlock:]
___CopyMountStatusData_block_invoke
___CopyMountStatusData_block_invoke_2
_sysctl_fsid
+[PAMountStatusTracker(PAMountStatusTrackerSerialization) classDictionaryKey]
-[PAMountStatusTracker(PAMountStatusTrackerSerialization) sizeInBytesForSerializedVersion]
-[PAMountStatusTracker(PAMountStatusTrackerSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PAMountStatusTracker(PAMountStatusTrackerSerialization) addSelfToSerializationDictionary:]
+[PAMountStatusTracker(PAMountStatusTrackerSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PAMountStatusTracker(PAMountStatusTrackerSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PAMountSnapshot(PAMountSnapshotSerialization) classDictionaryKey]
-[PAMountSnapshot(PAMountSnapshotSerialization) sizeInBytesForSerializedVersion]
-[PAMountSnapshot(PAMountSnapshotSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PAMountSnapshot(PAMountSnapshotSerialization) addSelfToSerializationDictionary:]
-[PAMountSnapshot(PAMountSnapshotSerialization) initWithSerializedMountSnapshot:]
+[PAMountSnapshot(PAMountSnapshotSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PAMountSnapshot(PAMountSnapshotSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PAMountStatus(PAMountStatusSerialization) classDictionaryKey]
-[PAMountStatus(PAMountStatusSerialization) sizeInBytesForSerializedVersion]
-[PAMountStatus(PAMountStatusSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PAMountStatus(PAMountStatusSerialization) addSelfToSerializationDictionary:]
+[PAMountStatus(PAMountStatusSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PAMountStatus(PAMountStatusSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
-[PAImageSection dealloc]
-[PAImageSection summaryString]
-[PAImageSection initWithCoder:]
-[PAImageSection encodeWithCoder:]
-[PAImageSection isEqual:]
-[PAImageSection name]
-[PAImageSection setName:]
-[PAImageSection parent]
-[PAImageSection setParent:]
___PAMachTimeForMachAbsTime_block_invoke
____PALogTimestamp_block_invoke
___MachToNano_block_invoke
__uniqueNSUUID
+[PAGenealogyTracker(PAGenealogyTrackerSerialization) classDictionaryKey]
-[PAGenealogyTracker(PAGenealogyTrackerSerialization) sizeInBytesForSerializedVersion]
-[PAGenealogyTracker(PAGenealogyTrackerSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PAGenealogyTracker(PAGenealogyTrackerSerialization) addSelfToSerializationDictionary:]
+[PAGenealogyTracker(PAGenealogyTrackerSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PAGenealogyTracker(PAGenealogyTrackerSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PAGenealogyTraceMessage(PAGenealogyTraceMessageSerialization) classDictionaryKey]
-[PAGenealogyTraceMessage(PAGenealogyTraceMessageSerialization) sizeInBytesForSerializedVersion]
-[PAGenealogyTraceMessage(PAGenealogyTraceMessageSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PAGenealogyTraceMessage(PAGenealogyTraceMessageSerialization) addSelfToSerializationDictionary:]
-[PAGenealogyTraceMessage(PAGenealogyTraceMessageSerialization) initWithSerializedGenealogyTraceMessage:]
+[PAGenealogyTraceMessage(PAGenealogyTraceMessageSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PAGenealogyTraceMessage(PAGenealogyTraceMessageSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PAGenealogyBreadcrumb(PAGenealogyBreadcrumbSerialization) classDictionaryKey]
-[PAGenealogyBreadcrumb(PAGenealogyBreadcrumbSerialization) sizeInBytesForSerializedVersion]
-[PAGenealogyBreadcrumb(PAGenealogyBreadcrumbSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PAGenealogyBreadcrumb(PAGenealogyBreadcrumbSerialization) addSelfToSerializationDictionary:]
-[PAGenealogyBreadcrumb(PAGenealogyBreadcrumbSerialization) initWithSerializedGenealogyBreadcrumb:]
+[PAGenealogyBreadcrumb(PAGenealogyBreadcrumbSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PAGenealogyBreadcrumb(PAGenealogyBreadcrumbSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
-[PAPageResidency isSane]
-[PAPageResidency init]
-[PAPageResidency initWithPageResidency:]
-[PAPageResidency initWithCoder:]
-[PAPageResidency encodeWithCoder:]
-[PAPageResidency addResidency:]
-[PAPageResidency subtractResidency:]
-[PAPageResidency resString]
-[PAPageResidency resBytesString]
-[PAPageResidency residentBytes]
-[PAPageResidency dirtyBytes]
-[PAPageResidency copiedBytes]
-[PAPageResidency reclaimableBytes]
-[PAPageResidency swappedBytes]
-[PAPageResidency speculativeBytes]
-[PAPageResidency residentNonSpecBytes]
-[PAPageResidency cleanNonSpecBytes]
-[PAPageResidency isEqual:]
-[PAPageResidency compareResident:]
-[PAPageResidency compareNonSpecResident:]
-[PAPageResidency compareDirty:]
-[PAPageResidency compareDirtyAndSwapped:]
-[PAPageResidency compareClean:]
-[PAPageResidency compareSpec:]
-[PAPageResidency residentPages]
-[PAPageResidency setResidentPages:]
-[PAPageResidency dirtyPages]
-[PAPageResidency setDirtyPages:]
-[PAPageResidency copiedPages]
-[PAPageResidency setCopiedPages:]
-[PAPageResidency reclaimablePages]
-[PAPageResidency setReclaimablePages:]
-[PAPageResidency swappedPages]
-[PAPageResidency setSwappedPages:]
-[PAPageResidency speculativePages]
-[PAPageResidency setSpeculativePages:]
-[PAPageResidency residentNonSpecPages]
-[PAPageResidency setResidentNonSpecPages:]
-[PAPageResidency isDetailed]
-[PAPageResidency setIsDetailed:]
-[PAPageResidencyDiff initWithResidencyBefore:After:]
-[PAPageResidencyDiff residentBytes]
-[PAPageResidencyDiff dirtyBytes]
-[PAPageResidencyDiff copiedBytes]
-[PAPageResidencyDiff swappedBytes]
-[PAPageResidencyDiff speculativeBytes]
-[PAPageResidencyDiff residentNonSpecBytes]
-[PAPageResidencyDiff cleanNonSpecBytes]
-[PAPageResidencyDiff compareResident:]
-[PAPageResidencyDiff compareNonSpecResident:]
-[PAPageResidencyDiff compareDirty:]
-[PAPageResidencyDiff compareDirtyAndSwapped:]
-[PAPageResidencyDiff compareClean:]
-[PAPageResidencyDiff compareSpec:]
-[PAPageResidencyDiff residentPages]
-[PAPageResidencyDiff setResidentPages:]
-[PAPageResidencyDiff dirtyPages]
-[PAPageResidencyDiff setDirtyPages:]
-[PAPageResidencyDiff copiedPages]
-[PAPageResidencyDiff setCopiedPages:]
-[PAPageResidencyDiff swappedPages]
-[PAPageResidencyDiff setSwappedPages:]
-[PAPageResidencyDiff speculativePages]
-[PAPageResidencyDiff setSpeculativePages:]
-[PAPageResidencyDiff residentNonSpecPages]
-[PAPageResidencyDiff setResidentNonSpecPages:]
-[PAPageResidencyDiff isDetailed]
-[PAPageResidencyDiff setIsDetailed:]
+[NSString(NSStringPASerializable) classDictionaryKey]
-[NSString(NSStringPASerializable) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[NSString(NSStringPASerializable) addSelfToSerializationDictionary:]
-[NSString(NSStringPASerializable) sizeInBytesForSerializedVersion]
+[NSString(NSStringPASerializable) newInstanceWithoutReferencesFromBufferPosition:]
-[NSString(NSStringPASerializable) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[NSUUID(NSUUIDPASerializable) classDictionaryKey]
-[NSUUID(NSUUIDPASerializable) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[NSUUID(NSUUIDPASerializable) addSelfToSerializationDictionary:]
-[NSUUID(NSUUIDPASerializable) sizeInBytesForSerializedVersion]
+[NSUUID(NSUUIDPASerializable) newInstanceWithoutReferencesFromBufferPosition:]
-[NSUUID(NSUUIDPASerializable) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
____ShouldSymbolicatePid_block_invoke
____ShouldSymbolicatePid_block_invoke_2
___CSSymbolOwnerGetRangeOfText_SP_block_invoke
___copy_helper_block_
___destroy_helper_block_
____audio_is_running_block_invoke
____copy_commerce_info_strings_block_invoke
-[PAMallocData calculateTotals]
-[PAMallocData organizeAndCalculateTotals]
-[PAMallocData addCopyOfMemAllocationFromOtherMallocData:]
+[PAMallocData newMemRangeArrayFromVMURangeArray:MallocZone:]
-[PAMallocData extractDataFromPointersDict:]
___44-[PAMallocData extractDataFromPointersDict:]_block_invoke
-[PAMallocData calculateLeaksTotalsWithArray:]
___46-[PAMallocData calculateLeaksTotalsWithArray:]_block_invoke
___46-[PAMallocData calculateLeaksTotalsWithArray:]_block_invoke_2
+[PAMallocData newAllAllocationsFromPointersDict:]
-[PAMallocData sortedAllocationCategories]
-[PAMallocData sortedLeaksCategories]
-[PAMallocData findLeaks:WithPointers:]
-[PAMallocData fillMallocDataHeader:]
-[PAMallocData fillBufferWithZones:StringDict:]
-[PAMallocData fillIndexToStringMapping:FromStringDict:]
-[PAMallocData fillInStringsSection:BufferLength:IndexToString:NumStrings:]
-[PAMallocData serializedAllocationsWithStringsDict:]
-[PAMallocData serializedAllocationCategoriesWithStringsDict:]
-[PAMallocData serializedStackTreeWithStringsDict:]
-[PAMallocData serializedStringsWithStringsDict:]
-[PAMallocData encodeWithCoder:]
-[PAMallocData init]
-[PAMallocData initWithTask:]
-[PAMallocData dealloc]
-[PAMallocData memorySummaryString]
-[PAMallocData totalAllocatedMemoryString]
-[PAMallocData totalLeakedMemoryString]
-[PAMallocData totalAllocatedShortString]
-[PAMallocData totalLeakedShortString]
-[PAMallocData stackTreeStringWithMemoryStats:]
-[PAMallocData identifyObject:FromZone:WithIdentifier:]
-[PAMallocData gatherObjectTypes:withStacks:]
-[PAMallocData gatherPurgeStateOfAllocs:]
___41-[PAMallocData gatherPurgeStateOfAllocs:]_block_invoke
-[PAMallocData mallocDataWithFilter:]
-[PAMallocData populateInstanceFields:]
-[PAMallocData initWithCoder:]
-[PAMallocData deserializedMallocStackTreeAndReturnIndexArray:WithStringsIndexArray:]
-[PAMallocData deserializeMemAllocationCategoriesAndReturnIndexArray:WithStringsIndexArray:]
-[PAMallocData newNSStringArrayWithStringIndexHeader:]
-[PAMallocData getPointersByZoneDictFromSerializedMemAllocations:WithIndexToMemCategoriesArray:WithIndexToStackFramesArray:WithStringsIndex:]
-[PAMallocData isEqual:]
-[PAMallocData totalBytes]
-[PAMallocData totalNodes]
-[PAMallocData totalLeakedBytes]
-[PAMallocData totalLeakedNodes]
-[PAMallocData discardIndividualAllocations]
-[PAMallocData pointersByZone]
-[PAMallocData setPointersByZone:]
-[PAMallocData leaksArray]
-[PAMallocData setLeaksArray:]
-[PAMallocData allocationCategoryDict]
-[PAMallocData setAllocationCategoryDict:]
-[PAMallocData leaksCategoryDict]
-[PAMallocData setLeaksCategoryDict:]
-[PAMallocData setTotalBytes:]
-[PAMallocData setTotalNodes:]
-[PAMallocData setTotalLeakedBytes:]
-[PAMallocData setTotalLeakedNodes:]
-[PAMallocData calculatedTotals]
-[PAMallocData setCalculatedTotals:]
-[PAMallocData calculatedLeaksTotals]
-[PAMallocData setCalculatedLeaksTotals:]
-[PAMemAllocationCategory numAllocations]
-[PAMemAllocationCategory averageSize]
-[PAMemAllocationCategory keyForCategory]
+[PAMemAllocationCategory keyForMemAllocation:]
+[PAMemAllocationCategory keyForName:Type:Binary:Zone:]
-[PAMemAllocationCategory addAllocation:]
-[PAMemAllocationCategory serializeToBuffer:WithStringsDict:Index:]
-[PAMemAllocationCategory initWithSerializedMemAllocationCategory:WithStringsArray:]
-[PAMemAllocationCategory initWithSameMetaInfoAsCategory:]
-[PAMemAllocationCategory initWithName:Type:Binary:Zone:IsLeaks:]
-[PAMemAllocationCategory compare:]
-[PAMemAllocationCategory sizeString]
-[PAMemAllocationCategory numAllocationsString]
-[PAMemAllocationCategory averageSizeString]
-[PAMemAllocationCategory nameString]
-[PAMemAllocationCategory typeString]
-[PAMemAllocationCategory binaryString]
-[PAMemAllocationCategory mallocZoneString]
-[PAMemAllocationCategory summaryString]
-[PAMemAllocationCategory name]
-[PAMemAllocationCategory setName:]
-[PAMemAllocationCategory type]
-[PAMemAllocationCategory setType:]
-[PAMemAllocationCategory binary]
-[PAMemAllocationCategory setBinary:]
-[PAMemAllocationCategory mallocZone]
-[PAMemAllocationCategory setMallocZone:]
-[PAMemAllocationCategory allocations]
-[PAMemAllocationCategory setAllocations:]
-[PAMemAllocationCategory totalSize]
-[PAMemAllocationCategory setTotalSize:]
-[PAMemAllocationCategory isLeaks]
-[PAMemAllocationCategory setIsLeaks:]
-[PAMemAllocationCategory serializedIndex]
___PAPerfLoggingMachAbsoluteTimeToSeconds_block_invoke
__intervalTypeForWSUpdateInfoKey
__intervalTimestampForNSNumberTimestamp
__wsIntervalDictionaryValueForKeyIsSane
____logIntervalData_block_invoke
-[PAMemAllocation initWithAddress:andSize:]
-[PAMemAllocation initWithRawInfoOfMemAllocation:]
-[PAMemAllocation initWithPAMemAllocationSerialized:WithIndexToMemCategoriesArray:WithIndexToStackArray:WithNonLeakMemAllocationCategories:WithStringIndex:]
-[PAMemAllocation writeContentsToBuffer:StringDict:]
-[PAMemAllocation isEqual:]
-[PAMemAllocation fullDescriptionString]
-[PAMemAllocation name]
-[PAMemAllocation mallocZone]
-[PAMemAllocation type]
-[PAMemAllocation binary]
-[PAMemAllocation category]
-[PAMemAllocation setCategory:]
-[PAMemAllocation isLeak]
-[PAMemAllocation setIsLeak:]
-[PAMemAllocation purgeState]
-[PAMemAllocation setPurgeState:]
-[PAMemAllocation treeLocation]
-[PAMemAllocation setTreeLocation:]
-[PAImage(PrivateInit) nameFromPath]
+[PAImage(PrivateInit) sharedCacheImage]
+[PAImage(PrivateInit) imagesForProcessWithPort:]
___49+[PAImage(PrivateInit) imagesForProcessWithPort:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PAImage(PrivateInit) initWithSegmentSymbolOwner:SectionOwner:]
___64-[PAImage(PrivateInit) initWithSegmentSymbolOwner:SectionOwner:]_block_invoke
___copy_helper_block_40
___destroy_helper_block_41
-[PAImageSegment(PrivateInit) initWithImage:SegmentCSRegion:Sections:]
___70-[PAImageSegment(PrivateInit) initWithImage:SegmentCSRegion:Sections:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[PAImageSegment(PrivateInit) sharedCacheSegment]
-[PAImageSection(PrivateInit) initWithCSRegion:Parent:]
-[PASampleNode init]
-[PASampleNode shouldDisplay]
-[PASampleNode displayName]
-[PASampleNode samples]
-[PASampleNode responsibleSamples]
-[PASampleNode recalculateSamples]
-[PASampleNode dataSource]
-[PASampleNode setDataSource:]
-[PASampleNode isInSearchResult]
-[PASampleNode setIsInSearchResult:]
-[PASampleNode parent]
-[PASampleNode setParent:]
-[PASampleNode children]
-[PASampleNode setChildren:]
__PAPerfLoggingSendMessageToXPCService
____PAPerfLoggingSendMessageToXPCService_block_invoke
+[PAMemAllocation(PrivateInit) getStringCache]
+[PAMemAllocation(PrivateInit) uniquedStringForString:]
-[PARangeContainer compareRange:equalWhenContained:equalWhenIntersects:]
-[PARangeContainer range]
-[PARangeContainer setRange:]
-[PADataArchiveKey isEqual:]
-[PADataArchiveKey hash]
-[PADataArchiveKey copyWithZone:]
-[PADataArchiveKey initWithName:class:]
-[PADataArchiveKey initWithName:classString:]
-[PADataArchiveKey dealloc]
-[PADataArchiveKey containsClass:]
-[PADataArchiveKey initWithCoder:]
-[PADataArchiveKey encodeWithCoder:]
-[PADataArchiveKey keyName]
-[PADataArchiveKey setKeyName:]
-[PADataArchiveKey className]
-[PADataArchiveKey setClassName:]
-[PADataArchiveHandle copyWithZone:]
-[PADataArchiveHandle initWithKey:index:tag:]
-[PADataArchiveHandle dealloc]
-[PADataArchiveHandle initWithCoder:]
-[PADataArchiveHandle encodeWithCoder:]
-[PADataArchiveHandle name]
-[PADataArchiveHandle setName:]
-[PADataArchiveHandle tag]
-[PADataArchiveHandle setTag:]
-[PADataArchiveHandle className]
-[PADataArchiveHandle setClassName:]
-[PADataArchive decompressFromFile:]
-[PADataArchive initWithPath:]
-[PADataArchive getProcessWithHandle:]
-[PADataArchive getProcessHandlesWithKeyName:]
-[PADataArchive getFootprintWithHandle:]
-[PADataArchive getFootprintHandlesWithKeyName:]
-[PADataArchive getKeyForProcessWithName:pid:]
+[PADataArchive addProcess:toDataAtPath:withTag:]
+[PADataArchive addFootprint:toDataAtPath:withTag:]
-[PADataArchive addProcess:withTag:]
-[PADataArchive addFootprint:withTag:]
-[PADataArchive cleanupDecompressDir]
-[PADataArchive writeOutChanges:]
_compressToFile
-[PADataArchive dealloc]
+[PADataArchive addAbandonedMemoryData:toDataAtPath:withTag:]
-[PADataArchive addAbandonedMemoryData:withTag:]
-[PADataArchive getAbandonedMemoryDataWithHandle:]
-[PADataArchive addObject:withName:withTag:]
+[PADataArchive addObject:withName:toDataAtPath:withTag:]
-[PADataArchive getObjectWithHandle:]
-[PADataArchive getObjectHandlesWithKeyName:classString:]
-[PADataArchive getAllKeys]
-[PADataArchive fullNameString]
-[PADataArchive archivePath]
-[PADataArchive setArchivePath:]
-[PADataArchive decompressPath]
-[PADataArchive setDecompressPath:]
-[PADataArchive listings]
-[PADataArchive setListings:]
+[PAAbandonedMemory getAbandonedMemoryFromArchive:firstValidIteration:lastValidIteration:]
+[PAAbandonedMemory getAbandonedMemoryFromArchiveAtPath:firstValidIteration:lastValidIteration:]
-[PAAbandonedMemory accumulateToSummary:isValid:]
-[PAAbandonedMemory getIterationSummaries]
-[PAAbandonedMemory initWithArchive:usingProcess:firstValidIteration:lastValidIteration:]
-[PAAbandonedMemory numValidIterations]
-[PAAbandonedMemory numIterations]
-[PAAbandonedMemory averageBytesLeaked]
-[PAAbandonedMemory averageBytesAbandoned]
-[PAAbandonedMemory averageNodesLeaked]
-[PAAbandonedMemory averageNodesAbandoned]
-[PAAbandonedMemory setFirstValidIteration:]
-[PAAbandonedMemory setLastValidIteration:]
-[PAAbandonedMemory summary]
-[PAAbandonedMemory perIterationSummary]
-[PAAbandonedMemory perIterationDetailed]
-[PAAbandonedMemory iterationIndex:categoryFlag:reportDetails:]
-[PAAbandonedMemory dataSetDescription]
-[PAAbandonedMemory dealloc]
-[PAAbandonedMemory encodeWithCoder:]
-[PAAbandonedMemory initWithCoder:]
-[PAAbandonedMemory isEqual:]
-[PAAbandonedMemory procName]
-[PAAbandonedMemory setProcName:]
-[PAAbandonedMemory procPID]
-[PAAbandonedMemory setProcPID:]
-[PAAbandonedMemory iterationsMallocData]
-[PAAbandonedMemory setIterationsMallocData:]
-[PAAbandonedMemory summaryMallocData]
-[PAAbandonedMemory setSummaryMallocData:]
-[PAAbandonedMemory bytesAbandoned]
-[PAAbandonedMemory setBytesAbandoned:]
-[PAAbandonedMemory bytesLeaked]
-[PAAbandonedMemory setBytesLeaked:]
-[PAAbandonedMemory nodesAbandoned]
-[PAAbandonedMemory setNodesAbandoned:]
-[PAAbandonedMemory nodesLeaked]
-[PAAbandonedMemory setNodesLeaked:]
-[PAAbandonedMemory totalNodesAbandoned]
-[PAAbandonedMemory setTotalNodesAbandoned:]
-[PAAbandonedMemory totalNodesLeaked]
-[PAAbandonedMemory setTotalNodesLeaked:]
-[PAAbandonedMemory stdDevNodesAbandoned]
-[PAAbandonedMemory setStdDevNodesAbandoned:]
-[PAAbandonedMemory stdDevNodesLeaked]
-[PAAbandonedMemory setStdDevNodesLeaked:]
-[PAAbandonedMemory totalBytesAbandoned]
-[PAAbandonedMemory setTotalBytesAbandoned:]
-[PAAbandonedMemory totalBytesLeaked]
-[PAAbandonedMemory setTotalBytesLeaked:]
-[PAAbandonedMemory stdDevBytesAbandoned]
-[PAAbandonedMemory setStdDevBytesAbandoned:]
-[PAAbandonedMemory stdDevBytesLeaked]
-[PAAbandonedMemory setStdDevBytesLeaked:]
-[PAAbandonedMemory firstValidIteration]
-[PAAbandonedMemory lastValidIteration]
-[PAImageSegmentRegion initWithVMRegionInfo:process:andSegment:]
-[PAImageSegmentRegion dealloc]
-[PAImageSegmentRegion initWithCoder:]
-[PAImageSegmentRegion encodeWithCoder:]
-[PAImageSegmentRegion segmentInfoString]
-[PAImageSegmentRegion residentAndInfoString]
-[PAImageSegmentRegion regionTypeSpecificString]
-[PAImageSegmentRegion segment]
-[PAImageSegmentRegion setSegment:]
-[PAImageSegmentRegion imageName]
-[PAImageSegmentRegion setImageName:]
-[PAImageSegmentRegion imagePath]
-[PAImageSegmentRegion setImagePath:]
-[PAImageSegmentRegion segmentName]
-[PAImageSegmentRegion setSegmentName:]
-[PAVideoCard initWithIOObject:]
-[PAVideoCard printCardIds]
-[PAVideoCard printTotalVRAM]
-[PAVideoCard printPerformanceStatistics]
-[PAVideoCard printPerfStatForKey:]
-[PAVideoCard valueForPerfStatKey:ValueOut:]
-[PAVideoCard dealloc]
-[PAVideoCard initWithCoder:]
-[PAVideoCard encodeWithCoder:]
-[PAVideoCard perfStats]
-[PAVideoCard setPerfStats:]
-[PAVideoCard vendorId]
-[PAVideoCard setVendorId:]
-[PAVideoCard deviceId]
-[PAVideoCard setDeviceId:]
-[PAVideoCard totalVRAM]
-[PAVideoCard setTotalVRAM:]
-[PAVideoCard className]
-[PAVideoCard setClassName:]
-[PAVideoCard cardName]
-[PAVideoCard setCardName:]
-[PAVideoCard usedVRAM]
-[PAVideoCard setUsedVRAM:]
-[PAVideoCard freeVRAM]
-[PAVideoCard setFreeVRAM:]
-[PAVideoCardSet init]
-[PAVideoCardSet dealloc]
-[PAVideoCardSet initWithCoder:]
-[PAVideoCardSet encodeWithCoder:]
-[PAVideoCardSet cards]
-[PAVideoCardSet setCards:]
_gWSUpdateHandler_block_invoke
_gWSUpdateHandler_block_invoke_2
___PAMarkOperationStart_block_invoke
___PAMarkOperationStart_block_invoke_2
__handleOperationEnd
___copy_helper_block_
___destroy_helper_block_
__PAMarkOperationIntervalTransition
____handleOperationEnd_block_invoke
___copy_helper_block_72
___destroy_helper_block_73
__localLoggingIsEnabled
__detailedLoggingIsEnabled
__canDoSomeLogging
-[PAStackshotFrameIterator initWithThreadSnapshot:frameStart:]
-[PAStackshotFrameIterator is64bit]
-[PAStackshotFrameIterator getCurrentFrame:]
-[PAStackshotFrameIterator firstValidUserFrame]
-[PAStackshotFrameIterator moveToNextFrame]
-[PAStackshotThread _frameSize:]
-[PAStackshotThread kernelFrameSize]
-[PAStackshotThread userFrameSize]
-[PAStackshotThread hasKernelContinuation]
-[PAStackshotThread hasDispatchQueue]
-[PAStackshotThread dispatchQueueId]
-[PAStackshotThread isFromMicrostackshot]
-[PAStackshotThread kernelFramesOffsetFromHeaderStart]
-[PAStackshotThread userFramesOffsetFromHeaderStart]
-[PAStackshotThread firstFrame]
-[PAStackshotThread frameIterator]
-[PAStackshotThread initWithTask:]
-[PAStackshotThread setBufferPosition:withRemainingBytes:]
-[PAStackshotThread iterateFrames:]
-[PAStackshotThread bytesUsedInBuffer]
-[PAStackshotThread _calculateOffsets]
-[PAStackshotThread isDarwinBG]
-[PAStackshotThread powerstatsFlags]
-[PAStackshotImageInfo initWithImageInfo:is64Bit:]
-[PAStackshotImageInfo dealloc]
-[PAStackshotImageInfo initWithUUID:andAddress:]
+[PAStackshotImageInfo classDictionaryKey]
-[PAStackshotImageInfo addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PAStackshotImageInfo addSelfToSerializationDictionary:]
-[PAStackshotImageInfo sizeInBytesForSerializedVersion]
-[PAStackshotImageInfo initWithSerializedImageInfo:]
+[PAStackshotImageInfo newInstanceWithoutReferencesFromBufferPosition:]
-[PAStackshotImageInfo populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
-[PAStackshotImageInfo debugDescription]
-[PAStackshotImageInfo loadAddress]
-[PAStackshotImageInfo imageUUID]
-[PAStackshotTask _bytesUsedByImageInfos]
-[PAStackshotTask _bytesUsedByDonationReceivingPids]
-[PAStackshotTask bytesUsedByHeader]
-[PAStackshotTask pid]
-[PAStackshotTask name]
-[PAStackshotTask isDarwinBG]
-[PAStackshotTask isSuppressed]
-[PAStackshotTask isForeground]
-[PAStackshotTask isFromMicrostackshot]
-[PAStackshotTask powerstatsFlags]
-[PAStackshotTask initWithStackshot:]
-[PAStackshotTask setBufferPosition:withRemainingBytes:]
-[PAStackshotTask numImageInfos]
-[PAStackshotTask mainBinary]
-[PAStackshotTask copyImageInfos]
___33-[PAStackshotTask copyImageInfos]_block_invoke
-[PAStackshotTask copyDonationReceivingPids]
-[PAStackshotTask iterateThreads:]
-[PAStackshotTask bytesUsedByThreads]
-[PAStackshotTask bytesUsedInBuffer]
-[PAStackshotTask task_snap]
-[PAMicrostackshotData didInterruptUserMode]
-[PAMicrostackshotData isInterruptRecord]
-[PAMicrostackshotData isTimerArmingRecord]
-[PAMicrostackshotData isUserIdle]
-[PAMicrostackshotData isOnBattery]
-[PAMicrostackshotData hasValidOnBatteryAndUserIdleFlags]
-[PAMicrostackshotData didInterruptKernelMode]
-[PAMicrostackshotData powerstatsFlags]
-[PAMicrostackshotData initWithMicrosnapshot:withRemainingBytes:]
-[PAMicrostackshotData bytesUsedInBuffer]
-[PAMicrostackshotData cpuNumber]
-[PAMicrostackshotData timestampInUsUnix]
-[PAMicrostackshotData microSnapshotFlags]
-[PAMicrostackshotData systemStatsFlags]
-[PAStackshot isMicrostackshot]
-[PAStackshot initWithTraceData:machTimestamp:wallTimestamp:]
-[PAStackshot iterateTasks:]
-[PAStackshot initWithPid:]
-[PAStackshot initWithGlobalTrace]
-[PAStackshot dealloc]
-[PAStackshot machTimestamp]
-[PAStackshot wallTimestamp]
-[PAStackshot microstackshotData]
-[PAFanSpeed init]
-[PAFanSpeed initWithMachTime:]
_SMCOpen
-[PAFanSpeed fanSpeedIsValid]
+[PAFanSpeed numFans]
___21+[PAFanSpeed numFans]_block_invoke
-[PAFanSpeed fanSpeed]
-[PAFanSpeed machTimesamp]
_SMCReadKey
+[PAFanSpeed(PAFanSpeedSerialization) classDictionaryKey]
-[PAFanSpeed(PAFanSpeedSerialization) sizeInBytesForSerializedVersion]
-[PAFanSpeed(PAFanSpeedSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PAFanSpeed(PAFanSpeedSerialization) addSelfToSerializationDictionary:]
-[PAFanSpeed(PAFanSpeedSerialization) initWithSerializedFanSpeed:]
+[PAFanSpeed(PAFanSpeedSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PAFanSpeed(PAFanSpeedSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
-[PAAggregatedStackshot numStackshots]
-[PAAggregatedStackshot tasks]
+[PAAggregatedStackshot pidsForName:]
-[PAAggregatedStackshot trackProcessesWithName:]
-[PAAggregatedStackshot symbolicate]
-[PAAggregatedStackshot init]
-[PAAggregatedStackshot initWithSamples:fromSampleTimeSeriesDataStore:]
-[PAAggregatedStackshot setShouldSaveStackshots:]
-[PAAggregatedStackshot addToTrackedPids:]
-[PAAggregatedStackshot grabSample]
-[PAAggregatedStackshot dealloc]
-[PAAggregatedStackshot doAggregation]
-[PAAggregatedStackshot addNewStackshot:]
___41-[PAAggregatedStackshot addNewStackshot:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PAAggregatedStackshot addSampleData:]
-[PAAggregatedStackshot printAggregatedStackshotToFile:]
-[PAAggregatedStackshot newAggregatedStackshotFromSamplesBetweenStartInSec:andEndInSec:]
-[PAAggregatedStackshot discardTimeStampsOutsideOfStartTime:andEndTime:]
-[PAAggregatedStackshot shouldSaveStackshots]
-[PAAggregatedStackshotTask threads]
-[PAAggregatedStackshotTask processName]
-[PAAggregatedStackshotTask initWithPid:andUniqueId:andName:]
-[PAAggregatedStackshotTask dealloc]
-[PAAggregatedStackshotTask pid]
-[PAAggregatedStackshotTask addTask:timeStampInSec:]
___52-[PAAggregatedStackshotTask addTask:timeStampInSec:]_block_invoke
___copy_helper_block_130
___destroy_helper_block_131
-[PAAggregatedStackshotTask addSampleTaskData:timeStampInSec:]
-[PAAggregatedStackshotTask timeStampTimeLineString]
-[PAAggregatedStackshotTask totalCPUTimeInNs]
-[PAAggregatedStackshotTask printTaskToFile:]
___45-[PAAggregatedStackshotTask printTaskToFile:]_block_invoke
-[PAAggregatedStackshotTask symbolicateTaskWithSymbolDataStore:]
-[PAAggregatedStackshotTask symbolicateTaskWithSampleTimeSeriesDataStore:]
-[PAAggregatedStackshotTask displayName]
-[PAAggregatedStackshotTask detailedDescription]
-[PAAggregatedStackshotTask sampleCount]
-[PAAggregatedStackshotTask children]
-[PAAggregatedThread initWithSampleThreadData:]
-[PAAggregatedThread initWithThread:]
-[PAAggregatedThread symbolicateWithPid:andSymbolDataStore:]
-[PAAggregatedThread symbolicateWithPid:andSampleTimeSeriesDataStore:]
-[PAAggregatedThread dealloc]
-[PAAggregatedThread thread_id]
-[PAAggregatedThread totalCPUTimeInNs]
-[PAAggregatedThread addThreadStackshot:]
-[PAAggregatedThread addSampleThreadDataStack:]
-[PAAggregatedThread printThreadToFile:]
-[PAAggregatedThread topStackFrames]
-[PAAggregatedThread displayName]
-[PAAggregatedThread detailedDescription]
-[PAAggregatedThread sampleCount]
-[PAAggregatedThread children]
-[PAStackFrame frameMatchesFrame:]
-[PAStackFrame childFrames]
-[PAStackFrame initWithSampleFrame:withParent:]
-[PAStackFrame initWithFrame:withParent:]
-[PAStackFrame dealloc]
-[PAStackFrame incrementFrameCount]
-[PAStackFrame matchesSampleFrame:]
-[PAStackFrame incrementCountAndGetNextFrameMatchingFrame:]
-[PAStackFrame modifiedLR]
-[PAStackFrame symbolicateSelfAndChildrenWithPid:andSymbolDataStore:]
-[PAStackFrame symbolicateSelfAndChildrenWithPid:andSampleTimeSeriesDataStore:]
-[PAStackFrame compareCount:]
-[PAStackFrame printFrameAndChildrenFramesToFile:withDepth:]
-[PAStackFrame displayName]
-[PAStackFrame detailedDescription]
-[PAStackFrame childFrameSampleCount]
-[PAStackFrame children]
-[PAStackFrame symbolHandle]
-[PAStackFrame sampleCount]
-[PAMallocStackTree init]
-[PAMallocStackTree dealloc]
-[PAMallocStackTree addAllocation:WithTask:]
-[PAMallocStackTree symbolicateTreeWithTask:]
-[PAMallocStackTree printTree]
-[PAMallocStackTree stringForTreeWithMemoryStats:]
-[PAMallocStackTree totalFrames]
-[PAMallocStackTree serializeToBuffer:WithStrings:]
-[PAMallocStackTree initWithSerializedMallocStackTree:NewIndexToMallocStackNodeOut:WithStringsIndexArray:]
-[PAMallocStackTree addBranchToTreeFromOtherTree:]
-[PAMallocStackTree addMemAllocation:atEquivalentBranchFromOtherTree:]
-[PAMallocStackTree totalBytes]
-[PAMallocStackTree totalNodes]
-[PAMallocStackTreeFrame init]
-[PAMallocStackTreeFrame initWithSameMetaInfoAsFrame:WithParent:]
-[PAMallocStackTreeFrame initWithFrame:Parent:]
-[PAMallocStackTreeFrame dealloc]
-[PAMallocStackTreeFrame addAllocation:WithStack:OfDepth:]
-[PAMallocStackTreeFrame symbolicateWithSym:]
-[PAMallocStackTreeFrame frameStringWithDepth:andMemoryStats:]
-[PAMallocStackTreeFrame stringForFrameAndChildren:doMemoryStats:]
-[PAMallocStackTreeFrame stringForBranchWithMemoryStats:]
-[PAMallocStackTreeFrame printSelfAndChildren:]
-[PAMallocStackTreeFrame totalBytes]
-[PAMallocStackTreeFrame totalNodes]
-[PAMallocStackTreeFrame numFramesInSubtree]
+[PAMallocStackTreeFrame getStringCache]
+[PAMallocStackTreeFrame cachedStringFromCString:]
+[PAMallocStackTreeFrame clearStringCache]
-[PAMallocStackTreeFrame compareBytes:]
-[PAMallocStackTreeFrame sortChildrenByBytes]
-[PAMallocStackTreeFrame serializeToBuffer:ParentIndex:CurrentIndex:WithStrings:]
-[PAMallocStackTreeFrame initWithSerializedFrameArray:WithTreeHeader:WithParent:WithIndexToFrameArray:WithCurrentIndex:WithStringsIndexArray:]
-[PAMallocStackTreeFrame addMemAllocationWithoutBuildingTree:]
-[PAMallocStackTreeFrame metaInformationMatches:]
-[PAMallocStackTreeFrame addBranchFromOtherTree:currentDepth:]
-[PAMallocStackTreeFrame numSelfBytes]
-[PAMallocStackTreeFrame numSelfNodes]
-[PAMallocStackTreeFrame numChildBytes]
-[PAMallocStackTreeFrame numChildNodes]
-[PAMallocStackTreeFrame symbolName]
-[PAMallocStackTreeFrame setSymbolName:]
-[PAMallocStackTreeFrame symbolOwnerName]
-[PAMallocStackTreeFrame setSymbolOwnerName:]
-[PAMallocStackTreeFrame sourceInfoFilename]
-[PAMallocStackTreeFrame setSourceInfoFilename:]
-[PAMallocStackTreeFrame address]
-[PAMallocStackTreeFrame symbolLocation]
-[PAMallocStackTreeFrame serializedIndex]
-[PAMallocStackTreeFrame parent]
-[PAMallocStackTreeFrame isSymbolicated]
-[PAMallocStackTreeFrame gotSourceInfo]
-[PAPerfLoggingOperation operationDurationInMs]
-[PAPerfLoggingOperation _markOperationStart]
-[PAPerfLoggingOperation markOperationEndTruncatedByDuration:]
+[PAPerfLoggingOperation _nextSerialNumber]
___43+[PAPerfLoggingOperation _nextSerialNumber]_block_invoke
-[PAPerfLoggingOperation initWithProcessName:andOperationCategory:andOperationName:andPid:]
-[PAPerfLoggingOperation dealloc]
-[PAPerfLoggingOperation _processIntervalEventStream:withContextProcessingConfiguration:]
__handleProcessedContextDictionary
-[PAPerfLoggingOperation _addResultsForIntervalsToResultsDict:]
-[PAPerfLoggingOperation getIntervalDataDictionary]
-[PAPerfLoggingOperation logIntervalData:]
+[PAPerfLoggingOperation keyForProcessName:operationCategory:andOperationName:]
-[PAPerfLoggingOperation operationKey]
-[PAPerfLoggingOperation markIntervalTransition:transitionType:atCGSTimestampInSec:withContext:]
___96-[PAPerfLoggingOperation markIntervalTransition:transitionType:atCGSTimestampInSec:withContext:]_block_invoke
-[PAPerfLoggingOperation stringForIntervalEventTimeline]
-[PAPerfLoggingOperation setContextProcessingConfiguration:forIntervalType:]
-[PAPerfLoggingOperation enableSampling]
-[PAPerfLoggingOperation disableSampling]
-[PAPerfLoggingOperation addProcessNameToSample:]
-[PAPerfLoggingOperation sampleNow]
-[PAPerfLoggingOperation addFSDataStreamForOperationDuration:]
-[PAPerfLoggingOperation encodeWithCoder:]
-[PAPerfLoggingOperation initWithCoder:]
-[PAPerfLoggingOperation operationName]
-[PAPerfLoggingOperation setOperationName:]
-[PAPerfLoggingOperation processName]
-[PAPerfLoggingOperation setProcessName:]
-[PAPerfLoggingOperation pid]
-[PAPerfLoggingOperation operationCategory]
-[PAPerfLoggingOperation setOperationCategory:]
-[PAPerfLoggingOperation startTimeInSec]
-[PAPerfLoggingOperation endTimeInSec]
-[PAPerfLoggingOperation serialNumber]
-[PAPerfLoggingOperation sampleTimeSeriesDataStore]
-[PAPerfLoggingOperation fsDSMResults]
-[PAPerfLoggingOperation setFsDSMResults:]
-[PAPerfLoggingIntervalTransitionEvent transitionTypeString]
-[PAPerfLoggingIntervalTransitionEvent transitioningIntervalType]
-[PAPerfLoggingIntervalTransitionEvent initWithTransitionType:ofIntervalType:atTimestamp:withContext:]
-[PAPerfLoggingIntervalTransitionEvent dealloc]
-[PAPerfLoggingIntervalTransitionEvent _stringForTransitionWithOperationStartTimeInSec:andPreviousEventTimeInSec:]
-[PAPerfLoggingIntervalTransitionEvent compare:]
+[PAPerfLoggingIntervalTransitionEvent stringForTransitionTimeline:withStartTimeInSec:andEndTimeInSec:]
-[PAPerfLoggingIntervalTransitionEvent transitionTimeInSec]
-[PAPerfLoggingIntervalTransitionEvent transitionType]
-[PAPerfLoggingIntervalTransitionEvent context]
-[PAPerfLoggingIntervalData _isWSFrameInterval]
-[PAPerfLoggingIntervalData totalOperationDurationInMs]
-[PAPerfLoggingIntervalData intervalType]
-[PAPerfLoggingIntervalData initialDelayStackshotUsingSampleTimeSeriesDataStore:]
-[PAPerfLoggingIntervalData trailingDelayStackshotUsingSampleTimeSeriesDataStore:]
-[PAPerfLoggingIntervalData intervalRateOverOperationInIntervalsPerSec]
-[PAPerfLoggingIntervalData intervalRateOverOperationIgnoringDelayInIntervalsPerSec]
-[PAPerfLoggingIntervalData timeBetweenOperationStartAndFirstIntervalInMs]
-[PAPerfLoggingIntervalData initialDelayDurationInMs]
-[PAPerfLoggingIntervalData trailingDelayDurationInMs]
-[PAPerfLoggingIntervalData _initializeFieldsFromParentOperationInformation:]
-[PAPerfLoggingIntervalData initWithIntervalType:andIntervalDurationInMSArray:andIntervalStartTimeInSecArray:ofLength:andNumUnpairedTransitions:andTimeOfFirstIntervalStartInSec:andTimeOfLastIntervalEndInSec:andProcessedMetaDataArray:andProcessedMetaDataUOMsArray:andSampleTimeSeriesDataStore:withPAPerfLoggingData:]
-[PAPerfLoggingIntervalData dealloc]
-[PAPerfLoggingIntervalData finalize]
-[PAPerfLoggingIntervalData description]
-[PAPerfLoggingIntervalData _logPAPerfLoggingDataValue:uom:doLocalLogging:]
-[PAPerfLoggingIntervalData _newMessageTracerIntervalSpecificCStringKeyForNSStringDataType:]
-[PAPerfLoggingIntervalData _addNSStringDataType:andDoubleValue:toMessageTracerMessage:]
-[PAPerfLoggingIntervalData addIntervalDataToMessageTracerMessage:]
-[PAPerfLoggingIntervalData logIntervalData:]
-[PAPerfLoggingIntervalData printAggregatedStackshotToFile:forIntervalIndex:withSampleTimeSeriesDataStore:]
-[PAPerfLoggingIntervalData printTimelineToFile:]
-[PAPerfLoggingIntervalData encodeWithCoder:]
-[PAPerfLoggingIntervalData initWithCoder:]
-[PAPerfLoggingIntervalData setIntervalType:]
-[PAPerfLoggingIntervalData averageIntervalDurationInMs]
-[PAPerfLoggingIntervalData standardDeviationIntervalDurationInMs]
-[PAPerfLoggingIntervalData normalizedStandardDeviation]
-[PAPerfLoggingIntervalData intervalCount]
-[PAPerfLoggingIntervalData setIntervalCount:]
-[PAPerfLoggingIntervalData numUnpairedIntervalEndsOrStarts]
-[PAPerfLoggingIntervalData setNumUnpairedIntervalEndsOrStarts:]
-[PAPerfLoggingIntervalData processName]
-[PAPerfLoggingIntervalData setProcessName:]
-[PAPerfLoggingIntervalData operationCategory]
-[PAPerfLoggingIntervalData setOperationCategory:]
-[PAPerfLoggingIntervalData operationName]
-[PAPerfLoggingIntervalData setOperationName:]
-[PAPerfLoggingIntervalData operationStartTimeInSec]
-[PAPerfLoggingIntervalData operationEndTimeInSec]
-[PAPerfLoggingIntervalData intervalDurationInMsArray]
-[PAPerfLoggingIntervalData intervalStartTimeInSecArray]
-[PAPerfLoggingIntervalData startOfFirstIntervalInSec]
-[PAPerfLoggingIntervalData endOfLastIntervalInSec]
-[PAPerfLoggingIntervalData processedContextDataArray]
-[PAPerfLoggingIntervalData processedContextDataUOMsArray]
-[PAMemoryObjectOrganizer init]
-[PAMemoryObjectOrganizer initWithProcesses:]
-[PAMemoryObjectOrganizer dealloc]
-[PAMemoryObjectOrganizer processSharedMemoryGroups]
-[PAMemoryObjectOrganizer processPrivateMemoryGroups]
-[PAMemoryObjectOrganizer _addRegion:toMemoryObjects:withResidency:]
-[PAMemoryObjectOrganizer addProcess:]
-[PAMemoryObjectOrganizer _debugPrint]
-[PAMemoryObjectOrganizer _updateProcessMemoryGroups:withGroupForProcesses:]
-[PAMemoryObjectOrganizer collapseSharedGroups]
-[PAMemoryObjectOrganizer _updateGroups]
-[PAMemoryObjectOrganizer _updateGroups:withMemoryObjects:]
-[PAMemoryObjectOrganizer allPrivateMemoryGroupsContainingProcess:]
-[PAMemoryObjectOrganizer allSharedMemoryGroupsContainingProcess:]
-[PAMemoryObjectOrganizer _tuplesForProcess:andMemoryGroups:]
-[PAMemoryObjectOrganizer privateMemoryGroupForSingleProcess:]
-[PAMemoryObjectOrganizer sharedMemoryGroupForSingleProcess:]
-[PAMemoryObjectOrganizer _uniqueTupleForProcess:inMemoryGroups:]
-[PAMemoryObjectOrganizer initWithCoder:]
-[PAMemoryObjectOrganizer encodeWithCoder:]
-[PAMemoryObjectOrganizer processes]
-[PAMemoryObjectOrganizer sharedMemoryObjects]
-[PAMemoryObjectOrganizer privateMemoryObjects]
-[PABinaryLocator init]
-[PABinaryLocator initSharedBinaryLocator]
+[PABinaryLocator getRetainedSharedBinaryLocator]
___49+[PABinaryLocator getRetainedSharedBinaryLocator]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___49+[PABinaryLocator getRetainedSharedBinaryLocator]_block_invoke13
-[PABinaryLocator retain]
___25-[PABinaryLocator retain]_block_invoke
-[PABinaryLocator release]
___26-[PABinaryLocator release]_block_invoke
-[PABinaryLocator mappings]
___27-[PABinaryLocator mappings]_block_invoke
___copy_helper_block_40
___destroy_helper_block_41
-[PABinaryLocator saveMappings]
___31-[PABinaryLocator saveMappings]_block_invoke
___copy_helper_block_56
___destroy_helper_block_57
-[PABinaryLocator dealloc]
-[PABinaryLocator urlForUUID:]
-[PABinaryLocator addURL:ForUUID:]
-[PABinaryLocator addURLForCSSymbolOwner:]
-[PABinaryLocator removeURLForUUID:]
____SharedInstanceQueue_block_invoke
-[PAMemoryObject init]
-[PAMemoryObject initWithObjectID:]
-[PAMemoryObject _printRangeList]
-[PAMemoryObject _checkForCylce]
-[PAMemoryObject totalDirtySize]
-[PAMemoryObject totalCleanSize]
-[PAMemoryObject totalReclaimableSize]
-[PAMemoryObject totalSwappedSize]
-[PAMemoryObject _calculateSizes]
-[PAMemoryObject regionsForProcess:]
-[PAMemoryObject addRegion:forResidency:]
-[PAMemoryObject dealloc]
-[PAMemoryObject initWithCoder:]
-[PAMemoryObject encodeWithCoder:]
-[PAMemoryObject referringProcesses]
-[PAMemoryObject objectID]
-[PAMemoryObject referringMemRegions]
+[PASampleFrame(PASampleFrameSerialization) classDictionaryKey]
-[PASampleFrame(PASampleFrameSerialization) sizeInBytesForSerializedVersion]
-[PASampleFrame(PASampleFrameSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASampleFrame(PASampleFrameSerialization) addSelfToSerializationDictionary:]
-[PASampleFrame(PASampleFrameSerialization) _initWithSerializedSampleFrame:]
+[PASampleFrame(PASampleFrameSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASampleFrame(PASampleFrameSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PASampleFrame(PASampleFrameSerialization) _newSampleFrameFromSerializedSampleFrame:]
+[PASample(PASampleSerialization) classDictionaryKey]
-[PASample(PASampleSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASample(PASampleSerialization) addSelfToSerializationDictionary:]
-[PASample(PASampleSerialization) sizeInBytesForSerializedVersion]
-[PASample(PASampleSerialization) _initWithSerializedData:]
+[PASample(PASampleSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASample(PASampleSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PASampleTaskDataPrivateData(PASampleTaskDataPrivateDataSerialization) classDictionaryKey]
-[PASampleTaskDataPrivateData(PASampleTaskDataPrivateDataSerialization) sizeInBytesForSerializedVersion]
-[PASampleTaskDataPrivateData(PASampleTaskDataPrivateDataSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASampleTaskDataPrivateData(PASampleTaskDataPrivateDataSerialization) addSelfToSerializationDictionary:]
+[PASampleTaskDataPrivateData(PASampleTaskDataPrivateDataSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASampleTaskDataPrivateData(PASampleTaskDataPrivateDataSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PASampleTaskData(PASampleTaskDataSerialization) classDictionaryKey]
-[PASampleTaskData(PASampleTaskDataSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASampleTaskData(PASampleTaskDataSerialization) sizeInBytesForSerializedVersion]
-[PASampleTaskData(PASampleTaskDataSerialization) addSelfToSerializationDictionary:]
+[PASampleTaskData(PASampleTaskDataSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASampleTaskData(PASampleTaskDataSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PASampleTimeInsensitiveTaskData(PASampleTimeInsensitiveTaskDataSerialization) classDictionaryKey]
-[PASampleTimeInsensitiveTaskData(PASampleTimeInsensitiveTaskDataSerialization) sizeInBytesForSerializedVersion]
-[PASampleTimeInsensitiveTaskData(PASampleTimeInsensitiveTaskDataSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASampleTimeInsensitiveTaskData(PASampleTimeInsensitiveTaskDataSerialization) addSelfToSerializationDictionary:]
-[PASampleTimeInsensitiveTaskData(PASampleTimeInsensitiveTaskDataSerialization) _initWithSerializedTimeInsensitiveTaskData:]
+[PASampleTimeInsensitiveTaskData(PASampleTimeInsensitiveTaskDataSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASampleTimeInsensitiveTaskData(PASampleTimeInsensitiveTaskDataSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PASampleThreadData(PASampleThreadDataSerialization) classDictionaryKey]
-[PASampleThreadData(PASampleThreadDataSerialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASampleThreadData(PASampleThreadDataSerialization) sizeInBytesForSerializedVersion]
-[PASampleThreadData(PASampleThreadDataSerialization) addSelfToSerializationDictionary:]
+[PASampleThreadData(PASampleThreadDataSerialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASampleThreadData(PASampleThreadDataSerialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PASampleTimeSeriesDataStore(PASampleTimeSeriesDataStoreNSCoding) supportsSecureCoding]
-[PASampleTimeSeriesDataStore(PASampleTimeSeriesDataStoreNSCoding) encodeWithCoder:]
-[PASampleTimeSeriesDataStore(PASampleTimeSeriesDataStoreNSCoding) initWithCoder:]
-[PAProcessMemoryGroup initWithProcesses:]
-[PAProcessMemoryGroup dealloc]
-[PAProcessMemoryGroup addMemoryObject:]
-[PAProcessMemoryGroup categoryOrganizers]
-[PAProcessMemoryGroup description]
-[PAProcessMemoryGroup _buildCategories]
-[PAProcessMemoryGroup detailStringForProcess:differentiateGroups:forFlavor:andCallOutSwapped:andShowCategories:andShowRegions:]
-[PAProcessMemoryGroup initWithCoder:]
-[PAProcessMemoryGroup encodeWithCoder:]
-[PAProcessMemoryGroup processes]
-[PAProcessMemoryGroup memoryObjects]
-[PAProcessMemoryGroup totalDirtySize]
-[PAProcessMemoryGroup totalCleanSize]
-[PAProcessMemoryGroup totalReclaimableSize]
-[PAProcessMemoryGroup totalSwappedSize]
-[PASampleAggregatorOptions init]
-[PASampleAggregatorOptions verbose]
-[PASampleAggregatorOptions setVerbose:]
-[PASampleAggregatorOptions tabDelineateBinaryImageSections]
-[PASampleAggregatorOptions setTabDelineateBinaryImageSections:]
-[PASampleAggregatorOptions binaryImagesBeforeStacks]
-[PASampleAggregatorOptions setBinaryImagesBeforeStacks:]
-[PASampleAggregatorOptions printSpinSignatureStack]
-[PASampleAggregatorOptions setPrintSpinSignatureStack:]
-[PASampleAggregatorOptions printHeavyStacks]
-[PASampleAggregatorOptions setPrintHeavyStacks:]
-[PASampleAggregatorOptions displayFrameAddresses]
-[PASampleAggregatorOptions setDisplayFrameAddresses:]
-[PASampleAggregatorOptions displaySub1MsCpuTime]
-[PASampleAggregatorOptions setDisplaySub1MsCpuTime:]
-[PASampleAggregatorOptions displayStateChangesOnIdleThreads]
-[PASampleAggregatorOptions setDisplayStateChangesOnIdleThreads:]
-[PASampleAggregatorOptions displayProcessFirstLastTimes]
-[PASampleAggregatorOptions setDisplayProcessFirstLastTimes:]
-[PASampleAggregatorOptions displayOffsetsFromUnnamedSymbols]
-[PASampleAggregatorOptions setDisplayOffsetsFromUnnamedSymbols:]
-[PASampleAggregatorOptions displaySymbolInformation]
-[PASampleAggregatorOptions setDisplaySymbolInformation:]
-[PASampleAggregatorOptions displayBinaryImageAddresses]
-[PASampleAggregatorOptions setDisplayBinaryImageAddresses:]
-[PASampleAggregatorOptions displayBinaryImagesLackingNameOrPath]
-[PASampleAggregatorOptions setDisplayBinaryImagesLackingNameOrPath:]
-[PASampleAggregatorOptions displayNonRunnableThreads]
-[PASampleAggregatorOptions setDisplayNonRunnableThreads:]
-[PASampleAggregatorOptions displayIdleWorkQueueThreads]
-[PASampleAggregatorOptions setDisplayIdleWorkQueueThreads:]
-[PASampleAggregator initWithSampleStore:]
-[PASampleAggregator dealloc]
-[PASampleAggregator count]
-[PASampleAggregator tabDelineateBinaryImageSections]
-[PASampleAggregator setTabDelineateBinaryImageSections:]
-[PASampleAggregator binaryImagesBeforeStacks]
-[PASampleAggregator setBinaryImagesBeforeStacks:]
-[PASampleAggregator displayFrameAddresses]
-[PASampleAggregator setDisplayFrameAddresses:]
-[PASampleAggregator displayStateChangesOnIdleThreads]
-[PASampleAggregator setDisplayStateChangesOnIdleThreads:]
-[PASampleAggregator displaySub1MsCpuTime]
-[PASampleAggregator setDisplaySub1MsCpuTime:]
-[PASampleAggregator displayProcessFirstLastTimes]
-[PASampleAggregator setDisplayProcessFirstLastTimes:]
-[PASampleAggregator displayOffsetsFromUnnamedSymbols]
-[PASampleAggregator setDisplayOffsetsFromUnnamedSymbols:]
-[PASampleAggregator displaySymbolInformation]
-[PASampleAggregator setDisplaySymbolInformation:]
-[PASampleAggregator displayBinaryImageAddresses]
-[PASampleAggregator setDisplayBinaryImageAddresses:]
-[PASampleAggregator displayBinaryImagesLackingNameOrPath]
-[PASampleAggregator setDisplayBinaryImagesLackingNameOrPath:]
-[PASampleAggregator displayNonRunnableThreads]
-[PASampleAggregator setDisplayNonRunnableThreads:]
-[PASampleAggregator displayIdleWorkQueueThreads]
-[PASampleAggregator setDisplayIdleWorkQueueThreads:]
-[PASampleAggregator verbose]
-[PASampleAggregator setVerbose:]
-[PASampleAggregator wallTimeAtTimestampIndex:]
-[PASampleAggregator machTimeAtTimestampIndex:]
-[PASampleAggregator sortedTasks]
___33-[PASampleAggregator sortedTasks]_block_invoke
-[PASampleAggregator printDateToStream:]
-[PASampleAggregator printHeaderToStream:]
-[PASampleAggregator printFooterToStream:]
-[PASampleAggregator printToStream:]
-[PASampleAggregator newAggregatedTaskForSampleTask:atTimestampIndex:]
-[PASampleAggregator newAggregatedTaskForIdentificationPurposesWithSampleTask:]
-[PASampleAggregator addSampleTask:atTimestampIndex:]
-[PASampleAggregator setSamples:]
-[PASampleAggregator options]
-[PASampleAggregator setOptions:]
-[PASampleAggregator sampleStore]
-[PASampleAggregator tasks]
-[PASampleAggregator setTasks:]
-[PAAggregatedTask aggregator]
-[PAAggregatedTask compare:]
-[PAAggregatedTask printToStream:]
-[PAAggregatedTask initWithAggregator:andSampleTask:atTimestampIndex:]
-[PAAggregatedTask dealloc]
-[PAAggregatedTask sampleStore]
-[PAAggregatedTask addSampleTask:atTimestampIndex:]
-[PAAggregatedTask copyDescriptionForDisplayAddress:withSymbolicationAddress:inSymbolHandle:displayFrameAddress:]
-[PAAggregatedTask displayedBaseAddressForBinaryImage:andUpdateIfLower:]
-[PAAggregatedTask displayedBaseAddressForBinaryImage:]
-[PAAggregatedTask updateBinaryLocationIfLower:]
-[PAAggregatedTask printBinaryImagesToStream:]
___46-[PAAggregatedTask printBinaryImagesToStream:]_block_invoke
-[PAAggregatedProcessInstance aggregator]
-[PAAggregatedProcessInstance initWithAggregator:andSampleTask:atTimestampIndex:]
-[PAAggregatedProcessInstance initForIdentificationPurposesWithSampleTask:]
-[PAAggregatedProcessInstance dealloc]
-[PAAggregatedProcessInstance count]
-[PAAggregatedProcessInstance concurrentDispatchQueueIds]
-[PAAggregatedProcessInstance hash]
-[PAAggregatedProcessInstance isEqual:]
-[PAAggregatedProcessInstance compare:]
-[PAAggregatedProcessInstance sampleTaskAtTimestampIndex:]
-[PAAggregatedProcessInstance addSampleTask:atTimestampIndex:]
-[PAAggregatedProcessInstance addSampleThread:atTimestampIndex:]
-[PAAggregatedProcessInstance _combineMainThreadStacks]
-[PAAggregatedProcessInstance _combineSerialDispatchQueueStacks]
-[PAAggregatedProcessInstance combineStacks]
-[PAAggregatedProcessInstance sortedStacks]
___43-[PAAggregatedProcessInstance sortedStacks]_block_invoke
-[PAAggregatedProcessInstance lastTimestampIndex]
-[PAAggregatedProcessInstance pid]
-[PAAggregatedProcessInstance ppid]
-[PAAggregatedProcessInstance rpid]
-[PAAggregatedProcessInstance uid]
-[PAAggregatedProcessInstance name]
-[PAAggregatedProcessInstance mainBinaryPath]
-[PAAggregatedProcessInstance architectureString]
-[PAAggregatedProcessInstance uniqueId]
-[PAAggregatedProcessInstance mainBinaryUuid]
-[PAAggregatedProcessInstance mainBinaryOffset]
-[PAAggregatedProcessInstance isUnresponsive]
-[PAAggregatedProcessInstance timeOfLastResponse]
-[PAAggregatedProcessInstance usesSuddenTermination]
-[PAAggregatedProcessInstance allowsIdleExit]
-[PAAggregatedProcessInstance isDirty]
-[PAAggregatedProcessInstance workQueueExceededConstrainedThreadLimit]
-[PAAggregatedProcessInstance workQueueExceededTotalThreadLimit]
-[PAAggregatedProcessInstance isThirdParty]
-[PAAggregatedProcessInstance debugDescription]
-[PAAggregatedProcessInstance cpuTimeNs]
-[PAAggregatedProcessInstance printHeaderToStream:]
-[PAAggregatedProcessInstance printStacksToStream:]
-[PAAggregatedProcessInstance _shouldDisplayStacks]
-[PAAggregatedProcessInstance printToStream:]
-[PAAggregatedProcessInstance sampleTasks]
-[PAAggregatedProcessInstance countSuspended]
-[PAAggregatedProcessInstance countTerminated]
-[PAAggregatedProcessInstance threadsInPreviousSample]
-[PAAggregatedProcessInstance setThreadsInPreviousSample:]
-[PAAggregatedProcessInstance firstTimestampIndex]
-[PAAggregatedExecutable initWithAggregator:andSampleTask:atTimestampIndex:]
-[PAAggregatedExecutable initForIdentificationPurposesWithSampleTask:]
-[PAAggregatedExecutable aggregator]
-[PAAggregatedExecutable dealloc]
-[PAAggregatedExecutable hash]
-[PAAggregatedExecutable isEqual:]
-[PAAggregatedExecutable compare:]
-[PAAggregatedExecutable addSampleTask:atTimestampIndex:]
-[PAAggregatedExecutable printHeaderToStream:]
-[PAAggregatedExecutable copyDescriptionForFrame:]
-[PAAggregatedExecutable printStacksToStream:]
-[PAAggregatedExecutable printBinaryImagesToStream:]
-[PAAggregatedExecutable printToStream:]
-[PAAggregatedExecutable mainBinaryUuid]
-[PAAggregatedExecutable count]
-[PAAggregatedExecutable setCount:]
-[PAAggregatedExecutable firstTimestampIndex]
-[PAAggregatedExecutable setFirstTimestampIndex:]
-[PAAggregatedExecutable lastTimestampIndex]
-[PAAggregatedExecutable setLastTimestampIndex:]
-[PAAggregatedExecutable rootFrames]
-[PAAggregatedExecutable setRootFrames:]
-[PAAggregatedExecutable name]
-[PATimestampIndexedSampleThread initWithSampleThread:atTimestampIndex:]
-[PATimestampIndexedSampleThread dealloc]
-[PATimestampIndexedSampleThread debugDescription]
-[PATimestampIndexedSampleThread lastTimestampIndex]
-[PATimestampIndexedSampleThread setLastTimestampIndex:]
-[PATimestampIndexedSampleThread sampleThread]
-[PAContiguousThreadArray debugDescription]
-[PAContiguousThreadArray firstTimestampIndex]
-[PAContiguousThreadArray count]
-[PAContiguousThreadArray isSingleStackWithLeafFrame:]
-[PAContiguousThreadArray initWithTimestampIndex:andPreviousCpuTimeNs:]
-[PAContiguousThreadArray dealloc]
-[PAContiguousThreadArray threadId]
-[PAContiguousThreadArray dispatchQueueId]
-[PAContiguousThreadArray addSampleThread:]
-[PAContiguousThreadArray sampleThreadAtTimestampIndex:]
-[PAContiguousThreadArray cpuTimeNs]
-[PAContiguousThreadArray isProcessorIdleThread]
-[PAContiguousThreadArray threadExistedPreviously]
-[PACountedFrame debugDescription]
-[PACountedFrame count]
-[PACountedFrame setCount:]
-[PACountedSampleFrame initWithSampleFrame:]
-[PACountedSampleFrame dealloc]
-[PACountedSampleFrame debugDescription]
-[PACountedSampleFrame sampleFrame]
-[PACountedSampleTreeFrame initWithSampleFrame:andState:]
-[PACountedSampleTreeFrame children]
-[PACountedSampleTreeFrame isLeafFrame]
-[PACountedSampleTreeFrame isEqual:]
-[PACountedSampleTreeFrame hash]
-[PACountedSampleTreeFrame dealloc]
-[PACountedSampleTreeFrame state]
-[PACountedSampleTreeFrame setState:]
-[PAAggregatedThreadAndDispatchQueue isMainThread]
-[PAAggregatedThreadAndDispatchQueue debugDescription]
-[PAAggregatedThreadAndDispatchQueue aggregator]
-[PAAggregatedThreadAndDispatchQueue sampleStore]
-[PAAggregatedThreadAndDispatchQueue firstTimestampIndex]
-[PAAggregatedThreadAndDispatchQueue lastTimestampIndex]
-[PAAggregatedThreadAndDispatchQueue initWithAggregatedTask:andThreadId:andDispatchQueueId:]
-[PAAggregatedThreadAndDispatchQueue initForIdentificationPurposesWithThreadId:andDispatchQueueId:]
-[PAAggregatedThreadAndDispatchQueue dealloc]
-[PAAggregatedThreadAndDispatchQueue count]
-[PAAggregatedThreadAndDispatchQueue isSingleStack]
-[PAAggregatedThreadAndDispatchQueue contiguousThreadArrays]
-[PAAggregatedThreadAndDispatchQueue addSampleThread:atTimestampIndex:]
-[PAAggregatedThreadAndDispatchQueue printHeaderToStream:]
-[PAAggregatedThreadAndDispatchQueue copyDescriptionForSampleFrame:atTimestampIndex:]
-[PAAggregatedThreadAndDispatchQueue numMissingSamplesBeforeContiguousThreadArrayIndex:]
-[PAAggregatedThreadAndDispatchQueue copyStringForMissingSamplesBeforeContiguousThreadArrayIndex:]
-[PAAggregatedThreadAndDispatchQueue printHeavyStacksToStream:onlyPrintHeaviest:]
___81-[PAAggregatedThreadAndDispatchQueue printHeavyStacksToStream:onlyPrintHeaviest:]_block_invoke
-[PAAggregatedThreadAndDispatchQueue printStackToStream:]
___57-[PAAggregatedThreadAndDispatchQueue printStackToStream:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___57-[PAAggregatedThreadAndDispatchQueue printStackToStream:]_block_invoke970
___copy_helper_block_973
___destroy_helper_block_974
-[PAAggregatedThreadAndDispatchQueue printToStream:]
-[PAAggregatedThreadAndDispatchQueue hash]
-[PAAggregatedThreadAndDispatchQueue isEqual:]
-[PAAggregatedThreadAndDispatchQueue compare:]
-[PAAggregatedThreadAndDispatchQueue isProcessorIdleThread]
-[PAAggregatedThreadAndDispatchQueue isIdleWorkQueueThread]
-[PAAggregatedThreadAndDispatchQueue cpuTimeNs]
-[PAAggregatedThreadAndDispatchQueue aggregatedTask]
-[PAAggregatedThreadAndDispatchQueue dispatchQueueId]
-[PAAggregatedThreadAndDispatchQueue setDispatchQueueId:]
-[PAAggregatedThreadAndDispatchQueue threadId]
-[PAAggregatedThreadAndDispatchQueue setThreadId:]
-[PAAggregatedThreadAndDispatchQueue maxPriority]
-[PAAggregatedThreadAndDispatchQueue setMaxPriority:]
-[PAAggregatedThreadAndDispatchQueue minPriority]
-[PAAggregatedThreadAndDispatchQueue setMinPriority:]
-[PAAggregatedDispatchQueue initWithAggregatedTask:andDispatchQueueId:]
-[PAAggregatedDispatchQueue addStack:]
___38-[PAAggregatedDispatchQueue addStack:]_block_invoke
-[PAAggregatedDispatchQueue copyStringForMissingSamplesBeforeContiguousThreadArrayIndex:]
-[PAAggregatedMainThread initWithAggregatedTask:andThreadId:]
-[PAAggregatedMainThread debugDescription]
-[PAAggregatedMainThread addStack:]
___35-[PAAggregatedMainThread addStack:]_block_invoke
-[PAAggregatedMainThread isMainThread]
-[PAAggregatedKernelInstruction isKernel]
-[PAAggregatedKernelInstruction initWithUUID:andOffset:]
-[PAAggregatedInstruction initWithUUID:andOffset:isKernel:]
-[PAAggregatedInstruction isKernel]
-[PAAggregatedInstruction hash]
-[PAAggregatedInstruction isEqual:]
-[PAAggregatedInstruction compare:]
-[PAAggregatedInstruction dealloc]
-[PAAggregatedInstruction children]
-[PAAggregatedInstruction setChildren:]
-[PAAggregatedInstruction binaryUuid]
-[PAAggregatedInstruction offsetInBinary]
-[PAProcessInstanceAggregator printSpinSignatureStack]
-[PAProcessInstanceAggregator setPrintSpinSignatureStack:]
-[PAProcessInstanceAggregator printHeavyStacks]
-[PAProcessInstanceAggregator setPrintHeavyStacks:]
-[PAProcessInstanceAggregator hasTargetProcess]
-[PAProcessInstanceAggregator initWithSampleStore:]
-[PAProcessInstanceAggregator kernelSampleTaskAtTimestampIndex:]
-[PAProcessInstanceAggregator sampleTaskWithPid:atTimestampIndex:]
-[PAProcessInstanceAggregator displayTimeIndexForTimestampIndex:]
-[PAProcessInstanceAggregator sampleIndexForDisplayTimeIndex:]
-[PAProcessInstanceAggregator filterToDisplayTimeIndexStart:end:]
-[PAProcessInstanceAggregator filterToMachTimeRangeStart:end:]
-[PAProcessInstanceAggregator sortedTasks]
___42-[PAProcessInstanceAggregator sortedTasks]_block_invoke
___copy_helper_block_1124
___destroy_helper_block_1125
-[PAProcessInstanceAggregator newAggregatedTaskForSampleTask:atTimestampIndex:]
-[PAProcessInstanceAggregator newAggregatedTaskForIdentificationPurposesWithSampleTask:]
-[PAProcessInstanceAggregator printHeaderToStream:]
___51-[PAProcessInstanceAggregator printHeaderToStream:]_block_invoke
___copy_helper_block_1215
___destroy_helper_block_1216
-[PAProcessInstanceAggregator printFooterToStream:]
-[PAProcessInstanceAggregator dealloc]
-[PAProcessInstanceAggregator headerNote]
-[PAProcessInstanceAggregator setHeaderNote:]
-[PAProcessInstanceAggregator stackshotFrameAddress]
-[PAProcessInstanceAggregator setStackshotFrameAddress:]
-[PAProcessInstanceAggregator idleWorkQueueFrameAddress]
-[PAProcessInstanceAggregator setIdleWorkQueueFrameAddress:]
-[PAExecutableAggregator filterToWallTimeRangeStart:end:]
-[PAExecutableAggregator newAggregatedTaskForSampleTask:atTimestampIndex:]
-[PAExecutableAggregator newAggregatedTaskForIdentificationPurposesWithSampleTask:]
-[PAMemoryCategoryOrganizer initForProcess:]
-[PAMemoryCategoryOrganizer dealloc]
-[PAMemoryCategoryOrganizer addMemoryObject:]
-[PAMemoryCategoryOrganizer detailStringForFlavor:andCallOutSwapped:andShowCategories:andShowRegions:]
-[PAMemoryCategoryOrganizer _sortedNonZeroCategoriesForFlavor:]
___63-[PAMemoryCategoryOrganizer _sortedNonZeroCategoriesForFlavor:]_block_invoke
+[PAMemoryCategoryOrganizer _categoryStringForMemRegion:]
+[PAMemoryCategoryOrganizer _stringFromMemRegionCategory:]
+[PAMemoryCategoryOrganizer _categoryFromRegion:]
-[PAMemoryCategoryOrganizer initWithCoder:]
-[PAMemoryCategoryOrganizer encodeWithCoder:]
-[PAMemoryCategoryOrganizer process]
-[PAMemoryCategoryOrganizer memObjects]
-[PAMemoryCategoryOrganizer categories]
-[PAMemoryCategoryOrganizer totalDirtySize]
-[PAMemoryCategoryOrganizer totalSwappedSize]
-[PAMemoryCategoryOrganizer totalCleanSize]
-[PAMemoryCategoryOrganizer totalReclaimableSize]
-[PACommpageRegion initWithVMRegionInfo:andProcess:]
+[PASymbolDataStore(Serialization) classDictionaryKey]
-[PASymbolDataStore(Serialization) sizeInBytesForSerializedVersion]
-[PASymbolDataStore(Serialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASymbolDataStore(Serialization) addSelfToSerializationDictionary:]
-[PASymbolDataStore(Serialization) _initWithShouldReportSymbolInformation:]
+[PASymbolDataStore(Serialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASymbolDataStore(Serialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
-[PASymbolDataStore(Serialization) ownerContainingSymbol:]
+[PASymbol(Serialization) classDictionaryKey]
-[PASymbol(Serialization) sizeInBytesForSerializedVersion]
-[PASymbol(Serialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASymbol(Serialization) addSelfToSerializationDictionary:]
-[PASymbol(Serialization) _initWithSerializedSymbol:]
+[PASymbol(Serialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASymbol(Serialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
+[PASymbolSourceInfo(Serialization) classDictionaryKey]
-[PASymbolSourceInfo(Serialization) sizeInBytesForSerializedVersion]
-[PASymbolSourceInfo(Serialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASymbolSourceInfo(Serialization) addSelfToSerializationDictionary:]
-[PASymbolSourceInfo(Serialization) _initWithSerializedSymbolSourceInfo:]
+[PASymbolSourceInfo(Serialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASymbolSourceInfo(Serialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
-[PASymbolSourceInfo(Serialization) fixupOffsetFromVersion1WithSymbolOffsetIntoSymbolOwner:]
+[PASymbolOwner(Serialization) classDictionaryKey]
-[PASymbolOwner(Serialization) sizeInBytesForSerializedVersion]
-[PASymbolOwner(Serialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASymbolOwner(Serialization) addSelfToSerializationDictionary:]
-[PASymbolOwner(Serialization) _initWithSerializedSymbolOwner:]
+[PASymbolOwner(Serialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASymbolOwner(Serialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
-[PASymbolOwner(Serialization) containsSymbol:]
+[PASymbolHandle(Serialization) classDictionaryKey]
-[PASymbolHandle(Serialization) addSelfToBufferAtPosition:withCompletedSerializationDictionary:]
-[PASymbolHandle(Serialization) addSelfToSerializationDictionary:]
-[PASymbolHandle(Serialization) sizeInBytesForSerializedVersion]
+[PASymbolHandle(Serialization) newInstanceWithoutReferencesFromBufferPosition:]
-[PASymbolHandle(Serialization) populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary:]
-[PAMemorySimpleGraphicsSummary init]
-[PAMemorySimpleGraphicsSummary initWithCoder:]
-[PAMemorySimpleGraphicsSummary encodeWithCoder:]
-[PAGraphicsInfoCollector init]
-[PAGraphicsInfoCollector initWithCoder:]
-[PAGraphicsInfoCollector encodeWithCoder:]
-[PAGraphicsInfoCollector collectDataForProcesses:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___51-[PAGraphicsInfoCollector collectDataForProcesses:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PAGraphicsInfoCollector _refreshGraphicsDataForAllocations:forProcesses:]
-[PAGraphicsInfoCollector dealloc]
+[PAGraphicsInfoCollector collector]
+[PAGraphicsInfoCollector collectionSupported]
-[PAGraphicsInfoCollector systemGraphicsSummary]
-[PAGraphicsInfoCollector processToGraphicsSummary]
-[PAGraphicsInfoCollector hasData]
_collection_supported
___weak_link_ioaccelmeminfo_block_invoke
-[PAMemoryCategory initWithName:forProcess:]
-[PAMemoryCategory dealloc]
-[PAMemoryCategory addMemoryObject:]
-[PAMemoryCategory detailStringForFlavor:andCallOutSwapped:andShowCategories:andShowRegions:]
-[PAMemoryCategory _sortedNonZeroSubCategoriesForFlavor:]
___57-[PAMemoryCategory _sortedNonZeroSubCategoriesForFlavor:]_block_invoke
-[PAMemoryCategory initWithCoder:]
-[PAMemoryCategory encodeWithCoder:]
-[PAMemoryCategory name]
-[PAMemoryCategory process]
-[PAMemoryCategory memObjects]
-[PAMemoryCategory subCategories]
-[PAMemoryCategory totalDirtySize]
-[PAMemoryCategory totalSwappedSize]
-[PAMemoryCategory totalCleanSize]
-[PAMemoryCategory totalReclaimableSize]
___dscsym_init_block_invoke
-[PAMemorySubCategory initWithName:forProcess:]
-[PAMemorySubCategory dealloc]
-[PAMemorySubCategory addMemoryObject:]
-[PAMemorySubCategory detailStringForFlavor:andCallOutSwapped:andShowRegions:]
-[PAMemorySubCategory _sortedMemObjectsForFlavor:]
___50-[PAMemorySubCategory _sortedMemObjectsForFlavor:]_block_invoke
-[PAMemorySubCategory _sortedMemRegions:]
___41-[PAMemorySubCategory _sortedMemRegions:]_block_invoke
-[PAMemorySubCategory initWithCoder:]
-[PAMemorySubCategory encodeWithCoder:]
-[PAMemorySubCategory name]
-[PAMemorySubCategory process]
-[PAMemorySubCategory memRegions]
-[PAMemorySubCategory memObjects]
-[PAMemorySubCategory totalDirtySize]
-[PAMemorySubCategory totalSwappedSize]
-[PAMemorySubCategory totalCleanSize]
-[PAMemorySubCategory totalReclaimableSize]
-[PASampleTimeInsensitiveTaskData rootFrames]
-[PASampleTimeInsensitiveTaskData mainBinaryUuid]
-[PASampleTimeInsensitiveTaskData mainBinaryOffset]
-[PASampleTimeInsensitiveTaskData dealloc]
-[PASampleTimeInsensitiveTaskData initWithStackshotTask:]
-[PASampleTimeInsensitiveTaskData _gatherNonTimeCriticalAuxiliaryInfoFromLiveSystemWndSampleTimeSeriesDataStore:]
-[PASampleTimeInsensitiveTaskData _gatherTimeCriticalAuxiliaryInfoFromLiveSystem]
___81-[PASampleTimeInsensitiveTaskData _gatherTimeCriticalAuxiliaryInfoFromLiveSystem]_block_invoke
___81-[PASampleTimeInsensitiveTaskData _gatherTimeCriticalAuxiliaryInfoFromLiveSystem]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
-[PASampleTimeInsensitiveTaskData addStack:]
-[PASampleTimeInsensitiveTaskData correspondsToStackshotTask:]
-[PASampleTimeInsensitiveTaskData debugDescription]
-[PASampleTimeInsensitiveTaskData pid]
-[PASampleTimeInsensitiveTaskData ppid]
-[PASampleTimeInsensitiveTaskData rpid]
-[PASampleTimeInsensitiveTaskData uid]
-[PASampleTimeInsensitiveTaskData uniqueId]
-[PASampleTimeInsensitiveTaskData name]
-[PASampleTimeInsensitiveTaskData bundleName]
-[PASampleTimeInsensitiveTaskData mainBinaryPath]
-[PASampleTimeInsensitiveTaskData sharedCacheOffset]
-[PASampleTimeInsensitiveTaskData cachedPrivateData]
-[PASampleTimeInsensitiveTaskData setCachedPrivateData:]
-[PASampleTimeInsensitiveTaskData cachedDonatingPids]
-[PASampleTimeInsensitiveTaskData setCachedDonatingPids:]
-[PASampleTimeInsensitiveTaskData imageInfos]
-[PASampleTimeInsensitiveTaskData sharedCacheUuid]
-[PASampleTimeInsensitiveTaskData isUnresponsive]
-[PASampleTimeInsensitiveTaskData timeOfLastResponse]
-[PASampleTimeInsensitiveTaskData usesSuddenTermination]
-[PASampleTimeInsensitiveTaskData allowsIdleExit]
-[PASampleTimeInsensitiveTaskData isDirty]
-[PASampleTimeInsensitiveTaskData isThirdParty]
-[PASampleTimeInsensitiveTaskData didExec]
-[PASampleTimeInsensitiveTaskData setDidExec:]
-[PASampleTimeInsensitiveTaskData workQueueExceededConstrainedThreadLimit]
-[PASampleTimeInsensitiveTaskData workQueueExceededTotalThreadLimit]
-[PASample64bitKernelFrame is64bit]
-[PASample64bitKernelFrame isKernel]
-[PASample32bitKernelFrame is64bit]
-[PASample32bitKernelFrame isKernel]
-[PASample64bitUserFrame is64bit]
-[PASample64bitUserFrame isKernel]
-[PASample32bitUserFrame is64bit]
-[PASample32bitUserFrame isKernel]
-[PASampleFrame symbolicationAddress]
-[PASampleFrame is64bit]
-[PASampleFrame isKernel]
+[PASampleFrame newSampleFrameWithStackFrame:andParent:]
-[PASampleFrame copyWithNewParent:]
-[PASampleFrame initWithStackFrame:andParent:]
-[PASampleFrame initWithSampleFrame:andParent:]
-[PASampleFrame dealloc]
-[PASampleFrame isRootFrame]
-[PASampleFrame isEqual:]
-[PASampleFrame hash]
-[PASampleFrame correspondsToStackshotFrame:]
-[PASampleFrame _addChildFrame:]
+[PASampleFrame addStack:toSetOfRootFrames:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___44+[PASampleFrame addStack:toSetOfRootFrames:]_block_invoke
___copy_helper_block_265
___destroy_helper_block_266
-[PASampleFrame querySymbolInformationForSelfAndChildrenUsingTask:andKernelTask:andSampleTimeSeriesDataStore:]
-[PASampleFrame address]
-[PASampleFrame setAddress:]
-[PASampleFrame parentFrame]
-[PASampleFrame childFrames]
-[PASampleFrameIterator dealloc]
-[PASampleFrameIterator iterateFrames:]
___39-[PASampleFrameIterator iterateFrames:]_block_invoke
___copy_helper_block_309
___destroy_helper_block_310
-[PASampleFrameIterator stackshotThread]
-[PASampleFrameIterator setStackshotThread:]
-[PASample initWithStackshot:]
-[PASample sampleTasks]
-[PASample sampleTaskForPid:]
-[PASample addSampleTask:]
-[PASample dealloc]
-[PASample machTimestamp]
-[PASample wallTimestamp]
-[PASampleTaskDataPrivateData is64bitUser]
-[PASampleTaskDataPrivateData is64bitKernel]
-[PASampleTaskDataPrivateData isTaskResourceFlagged]
-[PASampleTaskDataPrivateData isTerminatedSnapshot]
-[PASampleTaskDataPrivateData isPidSuspended]
-[PASampleTaskDataPrivateData isFrozen]
-[PASampleTaskDataPrivateData isDarwinBG]
-[PASampleTaskDataPrivateData isDarwinExtBG]
-[PASampleTaskDataPrivateData isVisible]
-[PASampleTaskDataPrivateData isNonVisible]
-[PASampleTaskDataPrivateData isForeground]
-[PASampleTaskDataPrivateData isBoosted]
-[PASampleTaskDataPrivateData isSuppressed]
-[PASampleTaskDataPrivateData isTimerThrottled]
-[PASampleTaskDataPrivateData correspondsToTaskSnapshot:]
-[PASampleTaskDataPrivateData initWithTaskSnapshot:]
-[PASampleTaskDataPrivateData suspendCount]
-[PASampleTaskDataPrivateData taskSizeInPages]
-[PASampleTaskDataPrivateData numberOfPageFaults]
-[PASampleTaskDataPrivateData numberOfCopyOnWritePageFaults]
-[PASampleTaskDataPrivateData numberOfPageIns]
-[PASampleTaskDataPrivateData ss_flags]
-[PASampleTaskDataPrivateData latencyQos]
-[PASampleTaskData timeInsensitiveTaskData]
-[PASampleTaskData description]
-[PASampleTaskData pid]
-[PASampleTaskData ppid]
-[PASampleTaskData rpid]
-[PASampleTaskData uid]
-[PASampleTaskData name]
-[PASampleTaskData bundleName]
-[PASampleTaskData uniqueId]
-[PASampleTaskData imageInfos]
-[PASampleTaskData mainBinaryUuid]
-[PASampleTaskData sharedCacheUUID]
-[PASampleTaskData mainBinaryOffset]
-[PASampleTaskData sharedCacheOffset]
-[PASampleTaskData mainBinaryPath]
-[PASampleTaskData isUnresponsive]
-[PASampleTaskData timeOfLastResponse]
-[PASampleTaskData usesSuddenTermination]
-[PASampleTaskData allowsIdleExit]
-[PASampleTaskData isDirty]
-[PASampleTaskData workQueueExceededConstrainedThreadLimit]
-[PASampleTaskData workQueueExceededTotalThreadLimit]
-[PASampleTaskData isThirdParty]
-[PASampleTaskData sharedCacheStart]
-[PASampleTaskData sharedCacheLength]
-[PASampleTaskData architectureString]
-[PASampleTaskData suspendCount]
-[PASampleTaskData taskSizeInPages]
-[PASampleTaskData numberOfPageFaults]
-[PASampleTaskData numberOfCopyOnWritePageFaults]
-[PASampleTaskData numberOfPageIns]
-[PASampleTaskData latency_qos]
-[PASampleTaskData ss_flags]
-[PASampleTaskData is64bitUser]
-[PASampleTaskData is64bitKernel]
-[PASampleTaskData isTaskResourceFlagged]
-[PASampleTaskData isTerminatedSnapshot]
-[PASampleTaskData isPidSuspended]
-[PASampleTaskData isFrozen]
-[PASampleTaskData isDarwinBG]
-[PASampleTaskData isDarwinExtBG]
-[PASampleTaskData isVisible]
-[PASampleTaskData isNonVisible]
-[PASampleTaskData isForeground]
-[PASampleTaskData isBoosted]
-[PASampleTaskData isSuppressed]
-[PASampleTaskData isTimerThrottled]
-[PASampleTaskData initWithStackshotTask:andTimeInsensitiveTaskData:]
-[PASampleTaskData isSameAsTask:]
-[PASampleTaskData dealloc]
-[PASampleTaskData donatingPids]
-[PASampleTaskData setDonatingPids:]
-[PASampleThreadData isWaiting]
-[PASampleThreadData isStopped]
-[PASampleThreadData isRunning]
-[PASampleThreadData isWaitingUninterruptibly]
-[PASampleThreadData isHaltedAtTermination]
-[PASampleThreadData isAbortingInterruptibleWaits]
-[PASampleThreadData isAbortingInterruptibleWaitsAtSafePoints]
-[PASampleThreadData isProcessorIdleThread]
-[PASampleThreadData is64bitUser]
-[PASampleThreadData is64bitKernel]
-[PASampleThreadData hasDispatchSerial]
-[PASampleThreadData stackTracesHaveNoFramePointers]
-[PASampleThreadData isDarwinBG]
-[PASampleThreadData hasValidPowerstatsFlags]
-[PASampleThreadData powerstatsFlags]
-[PASampleThreadData hasDispatchQueue]
-[PASampleThreadData initWithStackshotThread:andLeafFrame:]
-[PASampleThreadData dealloc]
-[PASampleThreadData hash]
-[PASampleThreadData isEqual:]
-[PASampleThreadData stack]
-[PASampleThreadData isStackEqualTo:]
-[PASamplePowerstatsThreadData hasValidPowerstatsFlags]
-[PASamplePowerstatsThreadData initWithStackshotThread:andLeafFrame:]
-[PASamplePowerstatsThreadData powerstatsFlags]
-[PASampleTimeSeriesDataStore shouldDiscoverUncachedInformation]
-[PASampleTimeSeriesDataStore shouldReportSymbolInformation]
-[PASampleTimeSeriesDataStore shouldUseDsymForUUIDToFindBinaries]
-[PASampleTimeSeriesDataStore setShouldReportSymbolInformation:]
-[PASampleTimeSeriesDataStore setShouldDiscoverUncachedInformation:]
-[PASampleTimeSeriesDataStore setShouldUseDsymForUUIDToFindBinaries:]
-[PASampleTimeSeriesDataStore fanSpeedClosestToMachTime:]
-[PASampleTimeSeriesDataStore targetTask]
-[PASampleTimeSeriesDataStore targetProcessName]
-[PASampleTimeSeriesDataStore targetProcessAbsolutePath]
-[PASampleTimeSeriesDataStore targetProcessBundleName]
-[PASampleTimeSeriesDataStore gatherOccasionalLiveDataForMachTime:]
-[PASampleTimeSeriesDataStore doneSamplingLiveSystem]
-[PASampleTimeSeriesDataStore gatherNonTimeCriticalDataFromLiveSystem]
-[PASampleTimeSeriesDataStore symbolHandleForAddress:inSampleTask:]
-[PASampleTimeSeriesDataStore copyImageInfosForPid:]
-[PASampleTimeSeriesDataStore symbolHandleForOffset:inBinaryWithUUID:inSampleTask:]
-[PASampleTimeSeriesDataStore symbolHandleForOffset:inBinaryWithUUID:forPid:]
-[PASampleTimeSeriesDataStore symbolHandleForAddress:inLivingPid:]
-[PASampleTimeSeriesDataStore cachedSymbolHandleForAddress:inPid:]
-[PASampleTimeSeriesDataStore flushAllSymbolicators]
-[PASampleTimeSeriesDataStore flushCachedSymbolicatorForTask:]
-[PASampleTimeSeriesDataStore flushAllCachedSymbolInformation]
-[PASampleTimeSeriesDataStore timeInsensitiveTaskDataForStackshotTask:]
-[PASampleTimeSeriesDataStore init]
-[PASampleTimeSeriesDataStore numSamples]
-[PASampleTimeSeriesDataStore dealloc]
-[PASampleTimeSeriesDataStore newArrayOfSamplesForTimeRangeWithMachStartTime:andEndTime:]
-[PASampleTimeSeriesDataStore newArrayOfSamplesForTimeRangeWithWallClockStartTime:andEndTime:]
-[PASampleTimeSeriesDataStore newArrayOfSamplesForSampleIndexRangeStart:end:]
-[PASampleTimeSeriesDataStore _asynchronouslyCacheSymbolicatorForPid:]
___70-[PASampleTimeSeriesDataStore _asynchronouslyCacheSymbolicatorForPid:]_block_invoke
___70-[PASampleTimeSeriesDataStore _asynchronouslyCacheSymbolicatorForPid:]_block_invoke_2
___copy_helper_block_685
___destroy_helper_block_686
-[PASampleTimeSeriesDataStore addStackshot:]
___44-[PASampleTimeSeriesDataStore addStackshot:]_block_invoke
___44-[PASampleTimeSeriesDataStore addStackshot:]_block_invoke_2
___copy_helper_block_708
___destroy_helper_block_709
___copy_helper_block_717
___destroy_helper_block_718
___44-[PASampleTimeSeriesDataStore addStackshot:]_block_invoke733
-[PASampleTimeSeriesDataStore cacheSymbolInformationForAllSymbols]
-[PASampleTimeSeriesDataStore addPidToSampledPids:]
-[PASampleTimeSeriesDataStore addPidsWithNameToSampledPids:]
-[PASampleTimeSeriesDataStore sampleTrackedPidsNow]
___51-[PASampleTimeSeriesDataStore sampleTrackedPidsNow]_block_invoke
___copy_helper_block_750
___destroy_helper_block_751
-[PASampleTimeSeriesDataStore gatherKextStat]
-[PASampleTimeSeriesDataStore gatherKernelVersion]
-[PASampleTimeSeriesDataStore gatherOsVersions]
-[PASampleTimeSeriesDataStore gatherMachineArchitecture]
-[PASampleTimeSeriesDataStore gatherWorkQueueSoftThreadLimit]
-[PASampleTimeSeriesDataStore gatherWorkQueueHardThreadLimit]
-[PASampleTimeSeriesDataStore gatherHardwareModel]
-[PASampleTimeSeriesDataStore gatherNumActiveCPUs]
-[PASampleTimeSeriesDataStore startMachTimestamp]
-[PASampleTimeSeriesDataStore endMachTimestamp]
-[PASampleTimeSeriesDataStore startWallTimestamp]
-[PASampleTimeSeriesDataStore endWallTimestamp]
-[PASampleTimeSeriesDataStore attemptedSamplingInterval]
-[PASampleTimeSeriesDataStore setAttemptedSamplingInterval:]
-[PASampleTimeSeriesDataStore samples]
-[PASampleTimeSeriesDataStore mountStatusTracker]
-[PASampleTimeSeriesDataStore genealogyTracker]
-[PASampleTimeSeriesDataStore sanitizePaths]
-[PASampleTimeSeriesDataStore setSanitizePaths:]
-[PASampleTimeSeriesDataStore omitThirdPartyProcessStacks]
-[PASampleTimeSeriesDataStore setOmitThirdPartyProcessStacks:]
-[PASampleTimeSeriesDataStore targetProcessId]
-[PASampleTimeSeriesDataStore setTargetProcessId:]
-[PASampleTimeSeriesDataStore targetProcessBundleVersion]
-[PASampleTimeSeriesDataStore targetProcessBundleShortVersion]
-[PASampleTimeSeriesDataStore targetProcessBundleBuildVersion]
-[PASampleTimeSeriesDataStore targetProcessBundleProjectName]
-[PASampleTimeSeriesDataStore targetProcessBundleSourceVersion]
-[PASampleTimeSeriesDataStore targetProcessCommerceAppID]
-[PASampleTimeSeriesDataStore targetProcessCommerceExternalID]
-[PASampleTimeSeriesDataStore targetThreadId]
-[PASampleTimeSeriesDataStore setTargetThreadId:]
-[PASampleTimeSeriesDataStore cpuPercent]
-[PASampleTimeSeriesDataStore setCpuPercent:]
-[PASampleTimeSeriesDataStore cpuDuration]
-[PASampleTimeSeriesDataStore setCpuDuration:]
-[PASampleTimeSeriesDataStore wakeupsPerSec]
-[PASampleTimeSeriesDataStore setWakeupsPerSec:]
-[PASampleTimeSeriesDataStore wakeupsDuration]
-[PASampleTimeSeriesDataStore setWakeupsDuration:]
-[PASampleTimeSeriesDataStore event]
-[PASampleTimeSeriesDataStore setEvent:]
-[PASampleTimeSeriesDataStore eventNote]
-[PASampleTimeSeriesDataStore setEventNote:]
-[PASampleTimeSeriesDataStore signature]
-[PASampleTimeSeriesDataStore setSignature:]
-[PASampleTimeSeriesDataStore extraDuration]
-[PASampleTimeSeriesDataStore setExtraDuration:]
-[PASampleTimeSeriesDataStore durationNote]
-[PASampleTimeSeriesDataStore setDurationNote:]
-[PASampleTimeSeriesDataStore stepsNote]
-[PASampleTimeSeriesDataStore setStepsNote:]
-[PASampleTimeSeriesDataStore kextStat]
-[PASampleTimeSeriesDataStore kernelVersion]
-[PASampleTimeSeriesDataStore osProductVersion]
-[PASampleTimeSeriesDataStore osBuildVersion]
-[PASampleTimeSeriesDataStore machineArchitecture]
-[PASampleTimeSeriesDataStore workQueueSoftThreadLimit]
-[PASampleTimeSeriesDataStore workQueueHardThreadLimit]
-[PASampleTimeSeriesDataStore hardwareModel]
-[PASampleTimeSeriesDataStore numActiveCPUs]
-[PASampleTimeSeriesDataStore shouldPreemptivelyCacheSymbolicators]
-[PASampleTimeSeriesDataStore setShouldPreemptivelyCacheSymbolicators:]
-[PASampleTimeSeriesDataStore expectsLiveProcesses]
-[PASampleTimeSeriesDataStore setExpectsLiveProcesses:]
__PAMessageUserAgent
___PAIsAppResponsive_block_invoke
___copy_helper_block_
___destroy_helper_block_
____PAMessageUserAgent_block_invoke
___copy_helper_block_5
___destroy_helper_block_6
____PAMessageUserAgent_block_invoke10
____PAMessageUserAgent_block_invoke_2
____PAMessageUserAgent_block_invoke_3
____PAMessageUserAgent_block_invoke_4
____PAMessageUserAgent_block_invoke_5
___copy_helper_block_23
___destroy_helper_block_24
____PAMessageUserAgent_block_invoke27
___copy_helper_block_28
___destroy_helper_block_29
____PAMessageUserAgent_block_invoke32
___copy_helper_block_34
___destroy_helper_block_35
____PAMessageUserAgent_block_invoke38
____PAMessageUserAgent_block_invoke_242
____PAMessageUserAgent_block_invoke_346
____PAMessageUserAgent_block_invoke_449
____PAMessageUserAgent_block_invoke_550
___copy_helper_block_51
___destroy_helper_block_52
___copy_helper_block_55
___destroy_helper_block_56
-[PAMemoryCategoryAggregation init]
-[PAFootprint init]
-[PAFootprint initForAllProcesses]
-[PAFootprint initWithProcesses:]
-[PAFootprint dealloc]
-[PAFootprint _removeIdleExitCleanProcesses]
+[PAFootprint footprintWithPath:]
+[PAFootprint footprintForAllProcesses]
+[PAFootprint footprintForAllProcessesAndSkipIdleExitClean:andGatherGraphicsData:]
+[PAFootprint footprintForProcesses:withDetailedInfo:andMallocDetails:]
+[PAFootprint footprintForProcessNames:andPids:withDetailedInfo:andMallocDetails:]
+[PAFootprint footprintForProcessNames:andPids:withDetailedInfo:andMallocDetails:andTargetChildren:]
+[PAFootprint footprintForProcessNames:andPids:withDetailedInfo:andMallocDetails:andTargetChildren:andSkipIdleExitClean:andGatherGraphicsData:]
+[PAFootprint footprintForProcesses:]
+[PAFootprint footprintForProcessNames:andPids:]
-[PAFootprint footprintBytesForProcess:]
-[PAFootprint footprintBytesForPid:]
-[PAFootprint initWithProcessesNames:andPids:]
-[PAFootprint initWithProcessesNames:andPids:andTargetChildren:]
-[PAFootprint gatherData]
___25-[PAFootprint gatherData]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___25-[PAFootprint gatherData]_block_invoke112
___copy_helper_block_123
___destroy_helper_block_124
___25-[PAFootprint gatherData]_block_invoke128
-[PAFootprint _refreshDataStructures]
-[PAFootprint _sortedProcesses]
___31-[PAFootprint _sortedProcesses]_block_invoke
___copy_helper_block_142
___destroy_helper_block_143
-[PAFootprint printSummary]
-[PAFootprint _printTotal]
-[PAFootprint _printGraphicsSummaryForProcess:]
-[PAFootprint _printCategorySummaryWithDetails:]
___48-[PAFootprint _printCategorySummaryWithDetails:]_block_invoke
-[PAFootprint printDetailedMemoryTotalsForMemoryLabelled:onProcess:forSortedProcessGroups:withTotalSize:andGroupDifferentiation:forFlavor:callOutSwapped:]
-[PAFootprint _sortedNonZeroProcessGroupsByFlavor:forGroups:]
___61-[PAFootprint _sortedNonZeroProcessGroupsByFlavor:forGroups:]_block_invoke
-[PAFootprint initWithCoder:]
-[PAFootprint encodeWithCoder:]
-[PAFootprint processes]
-[PAFootprint footprintBytes]
-[PAFootprint swappedBytes]
-[PAFootprint showSwapped]
-[PAFootprint setShowSwapped:]
-[PAFootprint showCategories]
-[PAFootprint setShowCategories:]
-[PAFootprint showRegions]
-[PAFootprint setShowRegions:]
-[PAFootprint gatherMallocDetails]
-[PAFootprint setGatherMallocDetails:]
-[PAFootprint mallocDetailsDisclosureDepth]
-[PAFootprint setMallocDetailsDisclosureDepth:]
-[PAFootprint mallocDetailsMinimumBytes]
-[PAFootprint setMallocDetailsMinimumBytes:]
-[PAFootprint gatherDetailedProcessInfo]
-[PAFootprint setGatherDetailedProcessInfo:]
-[PAFootprint collapseSharing]
-[PAFootprint setCollapseSharing:]
-[PAFootprint gatherGraphicsData]
-[PAFootprint setGatherGraphicsData:]
-[PAGenealogyTracker init]
-[PAGenealogyTracker dealloc]
-[PAGenealogyTracker stopTracking]
-[PAGenealogyTracker trackGlobally]
___35-[PAGenealogyTracker trackGlobally]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PAGenealogyTracker trackPid:]
___31-[PAGenealogyTracker trackPid:]_block_invoke
___copy_helper_block_9
___destroy_helper_block_10
-[PAGenealogyTracker trackProcessName:]
___39-[PAGenealogyTracker trackProcessName:]_block_invoke
___copy_helper_block_15
___destroy_helper_block_16
-[PAGenealogyTracker breadcrumbsForProcess:betweenMachStartTime:andEndTime:]
___76-[PAGenealogyTracker breadcrumbsForProcess:betweenMachStartTime:andEndTime:]_block_invoke
___76-[PAGenealogyTracker breadcrumbsForProcess:betweenMachStartTime:andEndTime:]_block_invoke_2
-[PAGenealogyTracker messagesForThread:betweenMachStartTime:andEndTime:]
___72-[PAGenealogyTracker messagesForThread:betweenMachStartTime:andEndTime:]_block_invoke
___72-[PAGenealogyTracker messagesForThread:betweenMachStartTime:andEndTime:]_block_invoke_2
-[PAGenealogyTracker activityNameForId:]
-[PAGenealogyTracker _addBreadcrumb:forProcess:withActivityId:]
___63-[PAGenealogyTracker _addBreadcrumb:forProcess:withActivityId:]_block_invoke
-[PAGenealogyTracker _addMessage:withActivityId:]
___49-[PAGenealogyTracker _addMessage:withActivityId:]_block_invoke
-[PAGenealogyTracker _addActivityName:forId:]
-[PAGenealogyTracker _parseProcess:]
___36-[PAGenealogyTracker _parseProcess:]_block_invoke
___copy_helper_block_93
___destroy_helper_block_94
___36-[PAGenealogyTracker _parseProcess:]_block_invoke98
___36-[PAGenealogyTracker _parseProcess:]_block_invoke_2
___copy_helper_block_103
___destroy_helper_block_104
___copy_helper_block_108
___destroy_helper_block_109
___36-[PAGenealogyTracker _parseProcess:]_block_invoke113
___copy_helper_block_114
___destroy_helper_block_115
___36-[PAGenealogyTracker _parseProcess:]_block_invoke118
___copy_helper_block_119
___destroy_helper_block_120
-[PAGenealogyTimestampedMessage initWithActivityId:atMachTime:]
-[PAGenealogyTimestampedMessage message]
-[PAGenealogyTimestampedMessage compareToOtherMessage:]
-[PAGenealogyTimestampedMessage isEqual:]
-[PAGenealogyTimestampedMessage machTime]
-[PAGenealogyTimestampedMessage activityId]
-[PAGenealogyBreadcrumb initWithMessage:atMachTime:withActivityId:]
-[PAGenealogyBreadcrumb dealloc]
-[PAGenealogyBreadcrumb message]
-[PAGenealogyTraceMessage initWithId:andOffset:intoBinaryWithUUID:withBuffer:ofLength:atMachTime:withActivityId:]
-[PAGenealogyTraceMessage message]
-[PAGenealogyTraceMessage dealloc]
-[PAGenealogyTraceMessage binaryUuid]
-[PAGenealogyTraceMessage binaryOffset]
GCC_except_table2
GCC_except_table4
GCC_except_table37
GCC_except_table105
GCC_except_table106
GCC_except_table119
GCC_except_table126
GCC_except_table130
GCC_except_table9
GCC_except_table10
GCC_except_table11
GCC_except_table14
GCC_except_table22
GCC_except_table3
GCC_except_table1
GCC_except_table4
GCC_except_table9
GCC_except_table10
GCC_except_table27
GCC_except_table28
GCC_except_table2
GCC_except_table9
GCC_except_table10
GCC_except_table11
GCC_except_table13
GCC_except_table14
GCC_except_table16
GCC_except_table17
GCC_except_table18
GCC_except_table19
GCC_except_table20
GCC_except_table21
GCC_except_table2
GCC_except_table11
GCC_except_table15
GCC_except_table21
GCC_except_table41
GCC_except_table42
GCC_except_table178
GCC_except_table287
GCC_except_table6
GCC_except_table6
GCC_except_table59
GCC_except_table60
GCC_except_table66
GCC_except_table81
GCC_except_table191
GCC_except_table192
GCC_except_table196
GCC_except_table199
GCC_except_table203
GCC_except_table208
GCC_except_table212
GCC_except_table213
GCC_except_table220
GCC_except_table221
GCC_except_table228
GCC_except_table230
GCC_except_table231
GCC_except_table232
GCC_except_table1
GCC_except_table11
GCC_except_table15
GCC_except_table18
GCC_except_table22
GCC_except_table24
GCC_except_table53
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp228
___block_literal_global229
___block_descriptor_tmp344
___block_descriptor_tmp348
___block_descriptor_tmp357
___block_descriptor_tmp361
___block_descriptor_tmp369
___block_descriptor_tmp373
___block_descriptor_tmp379
___block_literal_global380
___block_descriptor_tmp385
___block_literal_global386
___block_descriptor_tmp398
___block_descriptor_tmp414
___block_descriptor_tmp420
___block_literal_global421
___block_descriptor_tmp476
___block_descriptor_tmp480
___block_literal_global481
___block_descriptor_tmp483
___block_literal_global484
___block_descriptor_tmp488
___block_descriptor_tmp538
___block_descriptor_tmp
___block_descriptor_tmp149
___block_literal_global
___block_descriptor_tmp151
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp32
___block_literal_global33
___block_descriptor_tmp61
___block_literal_global62
___block_descriptor_tmp
___block_descriptor_tmp7
___block_literal_global
___block_descriptor_tmp12
___block_descriptor_tmp15
___block_literal_global16
___block_descriptor_tmp29
___block_literal_global30
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp72
___block_literal_global73
___block_descriptor_tmp83
___block_literal_global84
___block_descriptor_tmp220
___block_literal_global221
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp36
___block_literal_global37
___block_descriptor_tmp
___block_descriptor_tmp43
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp15
___block_literal_global
___block_descriptor_tmp39
___block_literal_global40
___block_descriptor_tmp57
___block_descriptor_tmp75
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp134
___block_descriptor_tmp153
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp96
___block_literal_global97
___block_descriptor_tmp
___block_descriptor_tmp15
___block_literal_global
___block_descriptor_tmp17
___block_literal_global18
___block_descriptor_tmp22
___block_literal_global23
___block_descriptor_tmp44
___block_descriptor_tmp60
___block_descriptor_tmp98
___block_literal_global99
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp320
___block_literal_global321
___block_descriptor_tmp438
___block_literal_global439
___block_descriptor_tmp846
___block_literal_global847
___block_descriptor_tmp933
___block_descriptor_tmp977
___block_descriptor_tmp1075
___block_literal_global1076
___block_descriptor_tmp1086
___block_literal_global1087
___block_descriptor_tmp1128
___block_descriptor_tmp1218
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp153
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp75
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp83
___block_descriptor_tmp269
___block_descriptor_tmp313
___block_descriptor_tmp681
___block_literal_global682
___block_descriptor_tmp688
___block_descriptor_tmp712
___block_descriptor_tmp721
___block_descriptor_tmp736
___block_literal_global737
___block_descriptor_tmp753
___block_descriptor_tmp
___block_descriptor_tmp9
___block_descriptor_tmp13
___block_descriptor_tmp17
___block_descriptor_tmp19
___block_literal_global
___block_descriptor_tmp22
___block_descriptor_tmp26
___block_descriptor_tmp31
___block_descriptor_tmp37
___block_descriptor_tmp40
___block_descriptor_tmp44
___block_literal_global45
___block_descriptor_tmp48
___block_descriptor_tmp54
___block_descriptor_tmp58
___block_descriptor_tmp
___block_descriptor_tmp127
___block_descriptor_tmp130
___block_literal_global
___block_descriptor_tmp146
___block_descriptor_tmp233
___block_literal_global234
___block_descriptor_tmp248
___block_descriptor_tmp
___block_descriptor_tmp12
___block_descriptor_tmp18
___block_descriptor_tmp33
___block_literal_global
___block_descriptor_tmp37
___block_literal_global38
___block_descriptor_tmp46
___block_literal_global47
___block_descriptor_tmp49
___block_literal_global50
___block_descriptor_tmp63
___block_literal_global64
___block_descriptor_tmp85
___block_literal_global86
___block_descriptor_tmp97
___block_descriptor_tmp107
___block_descriptor_tmp112
___block_descriptor_tmp117
___block_descriptor_tmp123
_OBJC_IVAR_$_PurgeTypeTotalDiff.zoneDiffs
_OBJC_IVAR_$_PurgeTypeTotalDiff.purgeClass
_OBJC_IVAR_$_ZoneTotalDiff.allocationTotalDiffs
_OBJC_IVAR_$_PurgeTypeTotal.purgeClass
_OBJC_IVAR_$_PurgeTypeTotal.zones
_OBJC_IVAR_$_ZoneTotal.allocationTotals
_OBJC_IVAR_$_AllocationTotal.allocations
_OBJC_IVAR_$_PAProcess.memRegions
_OBJC_IVAR_$_PAProcess.privateRes
_OBJC_IVAR_$_PAProcess.userWired
_OBJC_IVAR_$_PAProcess.sharedRes
_OBJC_IVAR_$_PAProcess.imageSegments
_OBJC_IVAR_$_PAProcess.images
_OBJC_IVAR_$_PAProcess.numPorts
_OBJC_IVAR_$_PAProcess.numPageins
_OBJC_IVAR_$_PAProcess.numFaults
_OBJC_IVAR_$_PAProcess.numCOWFaults
_OBJC_IVAR_$_PAProcess.numMessagesSent
_OBJC_IVAR_$_PAProcess.numMessagesReceived
_OBJC_IVAR_$_PAProcess.numSyscallsMach
_OBJC_IVAR_$_PAProcess.numSyscallsUnix
_OBJC_IVAR_$_PAProcess.numContextSwitches
_OBJC_IVAR_$_PAProcess.userCPUTime
_OBJC_IVAR_$_PAProcess.systemCPUTime
_OBJC_IVAR_$_PAProcess.numThreads
_OBJC_IVAR_$_PAProcess.mallocData
_OBJC_IVAR_$_PAProcess.idleExitStatus
_OBJC_IVAR_$_PAProcess.task
_OBJC_IVAR_$_PAProcess.kp
_OBJC_IVAR_$_PAProcess.is64bit
_OBJC_IVAR_$_PAProcess.pid
_OBJC_IVAR_$_PAProcess.procName
_OBJC_IVAR_$_PAProcess.displayName
_OBJC_IVAR_$_PAProcess.kmem
_OBJC_IVAR_$_PAProcess.responsiblePid
_OBJC_IVAR_$_PAProcess.hasValidPort
_OBJC_IVAR_$_PASystem.vm_stats
_OBJC_IVAR_$_PASystem.page_size
_OBJC_IVAR_$_PASystem.processes
_OBJC_IVAR_$_PASystem.ram
_OBJC_IVAR_$_PASystem.build
_OBJC_IVAR_$_PASystem.cards
_OBJC_IVAR_$_PASymbol._offsetInOwner
_OBJC_IVAR_$_PASymbol._length
_OBJC_IVAR_$_PASymbol._name
_OBJC_IVAR_$_PASymbol._sourceInfos
_OBJC_IVAR_$_PASymbolSourceInfo._offsetIntoSymbolOwner
_OBJC_IVAR_$_PASymbolSourceInfo._length
_OBJC_IVAR_$_PASymbolSourceInfo._fileName
_OBJC_IVAR_$_PASymbolSourceInfo._lineNumber
_OBJC_IVAR_$_PASymbolSourceInfo._columnNumber
_OBJC_IVAR_$_PACSRefWrapper._csRef
_OBJC_IVAR_$_PACSSymbolOwnerWrapper._path
_OBJC_IVAR_$_PASymbolOwner._testSymbol
_OBJC_IVAR_$_PASymbolOwner._symbols
_OBJC_IVAR_$_PASymbolOwner._oldSymbols
_OBJC_IVAR_$_PASymbolOwner._name
_OBJC_IVAR_$_PASymbolOwner._textSegmentLength
_OBJC_IVAR_$_PASymbolOwner._binaryVersion
_OBJC_IVAR_$_PASymbolOwner._path
_OBJC_IVAR_$_PASymbolOwner._uuid
_OBJC_IVAR_$_PASymbolOwner._bundleIdentifier
_OBJC_IVAR_$_PASymbolOwner._bundleShortVersion
_OBJC_IVAR_$_PASymbolOwner._bundleVersion
_OBJC_IVAR_$_PASymbolHandle._owner
_OBJC_IVAR_$_PASymbolHandle._symbol
_OBJC_IVAR_$_PASymbolHandle._symbolOwnerStartAddressInTask
_OBJC_IVAR_$_PASymbolDataStore._uuidToSymbolOwnerDictionary
_OBJC_IVAR_$_PASymbolDataStore._uuidToCSSymbolOwnerCache
_OBJC_IVAR_$_PASymbolDataStore._shouldUseDsymForUUIDToFindBinaries
_OBJC_IVAR_$_PASymbolDataStore._uuidToSharedCacheImageInfoDictionary
_OBJC_IVAR_$_PASymbolDataStore._shouldDiscoverUncachedInformation
_OBJC_IVAR_$_PASymbolDataStore._sharedCacheUUIDsAlreadySearchedFor
_OBJC_IVAR_$_PASymbolDataStore._shouldReportSymbolInformation
_OBJC_IVAR_$_PASymbolDataStore._pidToCSSymbolicatorCache
_OBJC_IVAR_$_PAImage.name
_OBJC_IVAR_$_PAImage.path
_OBJC_IVAR_$_PAImage.segments
_OBJC_IVAR_$_PAImage.fileType
_OBJC_IVAR_$_PAImage.slide
_OBJC_IVAR_$_PAImage.isInSharedCache
_OBJC_IVAR_$_PAImageSegment.name
_OBJC_IVAR_$_PAImageSegment.sections
_OBJC_IVAR_$_PAImageSegment.parentImage
_OBJC_IVAR_$_PAImageSection.name
_OBJC_IVAR_$_PAImageSection.parent
_OBJC_IVAR_$_PAPageResidency.residentPages
_OBJC_IVAR_$_PAPageResidency.dirtyPages
_OBJC_IVAR_$_PAPageResidency.copiedPages
_OBJC_IVAR_$_PAPageResidency.isDetailed
_OBJC_IVAR_$_PAPageResidency.speculativePages
_OBJC_IVAR_$_PAPageResidency.residentNonSpecPages
_OBJC_IVAR_$_PAPageResidency.swappedPages
_OBJC_IVAR_$_PAPageResidency.reclaimablePages
_OBJC_IVAR_$_PAPageResidencyDiff.residentPages
_OBJC_IVAR_$_PAPageResidencyDiff.dirtyPages
_OBJC_IVAR_$_PAPageResidencyDiff.copiedPages
_OBJC_IVAR_$_PAPageResidencyDiff.swappedPages
_OBJC_IVAR_$_PAPageResidencyDiff.speculativePages
_OBJC_IVAR_$_PAPageResidencyDiff.residentNonSpecPages
_OBJC_IVAR_$_PAPageResidencyDiff.isDetailed
_OBJC_IVAR_$_PAMallocData.calculatedTotals
_OBJC_IVAR_$_PAMallocData.pointersByZone
_OBJC_IVAR_$_PAMallocData.totalNodes
_OBJC_IVAR_$_PAMallocData.totalBytes
_OBJC_IVAR_$_PAMallocData.calculatedLeaksTotals
_OBJC_IVAR_$_PAMallocData.leaksArray
_OBJC_IVAR_$_PAMallocData.totalLeakedNodes
_OBJC_IVAR_$_PAMallocData.totalLeakedBytes
_OBJC_IVAR_$_PAMallocData.allocationCategoryDict
_OBJC_IVAR_$_PAMallocData.leaksCategoryDict
_OBJC_IVAR_$_PAMallocData.stackTree
_OBJC_IVAR_$_PAMallocData.stacksAvailable
_OBJC_IVAR_$_PAMallocData.categoriesUpdated
_OBJC_IVAR_$_PAMemAllocationCategory.allocations
_OBJC_IVAR_$_PAMemAllocationCategory.totalSize
_OBJC_IVAR_$_PAMemAllocationCategory.name
_OBJC_IVAR_$_PAMemAllocationCategory.type
_OBJC_IVAR_$_PAMemAllocationCategory.binary
_OBJC_IVAR_$_PAMemAllocationCategory.mallocZone
_OBJC_IVAR_$_PAMemAllocationCategory.isLeaks
_OBJC_IVAR_$_PAMemAllocationCategory.serializedIndex
_OBJC_IVAR_$_PAMemAllocation.category
_OBJC_IVAR_$_PAMemAllocation.treeLocation
_OBJC_IVAR_$_PAMemAllocation.purgeState
_OBJC_IVAR_$_PAMemAllocation.isLeak
_OBJC_IVAR_$_PADataArchiveHandle.name
_OBJC_IVAR_$_PADataArchive.decompressPath
_OBJC_IVAR_$_PADataArchive.create
_OBJC_IVAR_$_PADataArchive.modified
_OBJC_IVAR_$_PADataArchive.archivePath
_OBJC_IVAR_$_PADataArchive.listings
_OBJC_IVAR_$_PAAbandonedMemory.summaryMallocData
_OBJC_IVAR_$_PAAbandonedMemory.iterationsMallocData
_OBJC_IVAR_$_PAAbandonedMemory.firstValidIteration
_OBJC_IVAR_$_PAAbandonedMemory.lastValidIteration
_OBJC_IVAR_$_PAAbandonedMemory.bytesLeaked
_OBJC_IVAR_$_PAAbandonedMemory.nodesLeaked
_OBJC_IVAR_$_PAAbandonedMemory.bytesAbandoned
_OBJC_IVAR_$_PAAbandonedMemory.nodesAbandoned
_OBJC_IVAR_$_PAAbandonedMemory.totalNodesLeaked
_OBJC_IVAR_$_PAAbandonedMemory.totalBytesLeaked
_OBJC_IVAR_$_PAAbandonedMemory.totalBytesAbandoned
_OBJC_IVAR_$_PAAbandonedMemory.totalNodesAbandoned
_OBJC_IVAR_$_PAAbandonedMemory.stdDevBytesLeaked
_OBJC_IVAR_$_PAAbandonedMemory.stdDevNodesLeaked
_OBJC_IVAR_$_PAAbandonedMemory.stdDevBytesAbandoned
_OBJC_IVAR_$_PAAbandonedMemory.stdDevNodesAbandoned
_OBJC_IVAR_$_PAAbandonedMemory.procPID
_OBJC_IVAR_$_PAAbandonedMemory.procName
_OBJC_IVAR_$_PAStackshotFrameIterator.snap
_OBJC_IVAR_$_PAStackshotFrameIterator.topFrame
_OBJC_IVAR_$_PAStackshotFrameIterator.currentFrameIsKernel
_OBJC_IVAR_$_PAStackshotFrameIterator.curIndex
_OBJC_IVAR_$_PAStackshotFrameIterator.curFrame
_OBJC_IVAR_$_PAStackshotThread._kernelFrameSize
_OBJC_IVAR_$_PAStackshotThread._userFrameSize
_OBJC_IVAR_$_PAStackshotThread._task
_OBJC_IVAR_$_PAStackshotThread._kernelFrames
_OBJC_IVAR_$_PAStackshotThread._userFrames
_OBJC_IVAR_$_PAStackshotThread._bytesUsed
_OBJC_IVAR_$_PAStackshotImageInfo._loadAddress
_OBJC_IVAR_$_PAStackshotImageInfo._imageUUID
_OBJC_IVAR_$_PAStackshotTask._task_snap
_OBJC_IVAR_$_PAStackshotTask._stackshot
_OBJC_IVAR_$_PAStackshotTask._imageInfos
_OBJC_IVAR_$_PAStackshotTask._donationReceivingPids
_OBJC_IVAR_$_PAStackshotTask._bytesAvailableForThreads
_OBJC_IVAR_$_PAStackshotTask._bytesUsedByThreads
_OBJC_IVAR_$_PAStackshotTask._mainBinary
_OBJC_IVAR_$_PAMicrostackshotData._microSnapshotFlags
_OBJC_IVAR_$_PAMicrostackshotData._systemStatsFlags
_OBJC_IVAR_$_PAMicrostackshotData._cpuNumber
_OBJC_IVAR_$_PAMicrostackshotData._timeInUsUnix
_OBJC_IVAR_$_PAStackshot._microstackshotData
_OBJC_IVAR_$_PAStackshot._traceBufData
_OBJC_IVAR_$_PAStackshot._machTimestamp
_OBJC_IVAR_$_PAStackshot._wallTimestamp
_OBJC_IVAR_$_PAAggregatedStackshot._numStackshots
_OBJC_IVAR_$_PAAggregatedStackshot._taskData
_OBJC_IVAR_$_PAAggregatedStackshot._pidsToTrack
_OBJC_IVAR_$_PAAggregatedStackshot._symbolicated
_OBJC_IVAR_$_PAAggregatedStackshot._sourceTimeSeriesDataStore
_OBJC_IVAR_$_PAAggregatedStackshot._symbolDataStore
_OBJC_IVAR_$_PAAggregatedStackshot._shouldSaveStackshots
_OBJC_IVAR_$_PAAggregatedStackshot._rawStackshots
_OBJC_IVAR_$_PAAggregatedStackshotTask.threadData
_OBJC_IVAR_$_PAAggregatedStackshotTask._processName
_OBJC_IVAR_$_PAAggregatedStackshotTask.pid
_OBJC_IVAR_$_PAAggregatedStackshotTask.timeStamps
_OBJC_IVAR_$_PAAggregatedStackshotTask.numStackshots
_OBJC_IVAR_$_PAAggregatedStackshotTask._uniqueId
_OBJC_IVAR_$_PAAggregatedStackshotTask._symbolicated
_OBJC_IVAR_$_PAAggregatedStackshotTask.numSuspended
_OBJC_IVAR_$_PAAggregatedThread.numStackshots
_OBJC_IVAR_$_PAAggregatedThread.thread_id
_OBJC_IVAR_$_PAAggregatedThread.topFrames
_OBJC_IVAR_$_PAAggregatedThread.startCPUTime
_OBJC_IVAR_$_PAAggregatedThread.priority
_OBJC_IVAR_$_PAAggregatedThread.hasDispatchQueue
_OBJC_IVAR_$_PAAggregatedThread.dispatchQueueId
_OBJC_IVAR_$_PAAggregatedThread.endCPUTime
_OBJC_IVAR_$_PAStackFrame.frame
_OBJC_IVAR_$_PAStackFrame.children
_OBJC_IVAR_$_PAStackFrame.parent
_OBJC_IVAR_$_PAStackFrame._symbolHandle
_OBJC_IVAR_$_PAStackFrame.sampleCount
_OBJC_IVAR_$_PAMallocStackTree.root
_OBJC_IVAR_$_PAMallocStackTree.totalBytes
_OBJC_IVAR_$_PAMallocStackTree.totalNodes
_OBJC_IVAR_$_PAMallocStackTree.isSymbolicated
_OBJC_IVAR_$_PAMallocStackTree.totalFrames
_OBJC_IVAR_$_PAMallocStackTreeFrame.numChildNodes
_OBJC_IVAR_$_PAMallocStackTreeFrame.numChildBytes
_OBJC_IVAR_$_PAMallocStackTreeFrame.numSelfNodes
_OBJC_IVAR_$_PAMallocStackTreeFrame.numSelfBytes
_OBJC_IVAR_$_PAMallocStackTreeFrame.parent
_OBJC_IVAR_$_PAMallocStackTreeFrame.children
_OBJC_IVAR_$_PAMallocStackTreeFrame.isSymbolicated
_OBJC_IVAR_$_PAMallocStackTreeFrame.sourceInfoFilename
_OBJC_IVAR_$_PAMallocStackTreeFrame.symbolOwnerName
_OBJC_IVAR_$_PAMallocStackTreeFrame.symbolName
_OBJC_IVAR_$_PAMallocStackTreeFrame.allocations
_OBJC_IVAR_$_PAMallocStackTreeFrame.sourceInfoColumnInfo
_OBJC_IVAR_$_PAMallocStackTreeFrame.sourceInfoLineNumber
_OBJC_IVAR_$_PAMallocStackTreeFrame.serializedIndex
_OBJC_IVAR_$_PAMallocStackTreeFrame.symbolLocation
_OBJC_IVAR_$_PAMallocStackTreeFrame.gotSourceInfo
_OBJC_IVAR_$_PAMallocStackTreeFrame.address
_OBJC_IVAR_$_PAPerfLoggingIntervalTransitionEvent._startTransitionCauseIntervalType
_OBJC_IVAR_$_PAPerfLoggingIntervalTransitionEvent._transitionTimeInSec
_OBJC_IVAR_$_PAPerfLoggingIntervalTransitionEvent._transitionType
_OBJC_IVAR_$_PAPerfLoggingIntervalTransitionEvent._context
_OBJC_IVAR_$_PASampleAggregator._options
_OBJC_IVAR_$_PASampleAggregator._sampleStore
_OBJC_IVAR_$_PASampleAggregator._tasks
_OBJC_IVAR_$_PASampleAggregator._machTimestamps
_OBJC_IVAR_$_PASampleAggregator._wallTimestamps
_OBJC_IVAR_$_PAAggregatedProcessInstance._sampleTasks
_OBJC_IVAR_$_PAAggregatedProcessInstance._concurrentDispatchQueueIds
_OBJC_IVAR_$_PAAggregatedProcessInstance._threadsInPreviousSample
_OBJC_IVAR_$_PAAggregatedProcessInstance._firstTimestampIndex
_OBJC_IVAR_$_PAAggregatedProcessInstance._countSuspended
_OBJC_IVAR_$_PAAggregatedProcessInstance._countTerminated
_OBJC_IVAR_$_PAAggregatedProcessInstance._cpuTimeNsCached
_OBJC_IVAR_$_PAAggregatedProcessInstance._mainThreadId
_OBJC_IVAR_$_PAAggregatedProcessInstance._combinedStacks
_OBJC_IVAR_$_PAAggregatedExecutable._mainBinaryUuid
_OBJC_IVAR_$_PAAggregatedExecutable._rootFrames
_OBJC_IVAR_$_PAAggregatedExecutable._name
_OBJC_IVAR_$_PAAggregatedExecutable._count
_OBJC_IVAR_$_PAAggregatedExecutable._firstTimestampIndex
_OBJC_IVAR_$_PAAggregatedExecutable._lastTimestampIndex
_OBJC_IVAR_$_PAContiguousThreadArray._firstTimestampIndex
_OBJC_IVAR_$_PAContiguousThreadArray._threads
_OBJC_IVAR_$_PAContiguousThreadArray._previousCpuTimeNs
_OBJC_IVAR_$_PACountedFrame._count
_OBJC_IVAR_$_PACountedSampleFrame._sampleFrame
_OBJC_IVAR_$_PACountedSampleTreeFrame._state
_OBJC_IVAR_$_PACountedSampleTreeFrame._children
_OBJC_IVAR_$_PASampleFrame._childFrames
_OBJC_IVAR_$_PASampleFrame._address
_OBJC_IVAR_$_PASampleFrame._parentFrame
_OBJC_IVAR_$_PASampleTaskDataPrivateData._ss_flags
_OBJC_IVAR_$_PASampleTaskDataPrivateData._suspend_count
_OBJC_IVAR_$_PASampleTaskDataPrivateData._task_size
_OBJC_IVAR_$_PASampleTaskDataPrivateData._faults
_OBJC_IVAR_$_PASampleTaskDataPrivateData._pageins
_OBJC_IVAR_$_PASampleTaskDataPrivateData._cow_faults
_OBJC_IVAR_$_PASampleTaskDataPrivateData._latency_qos
_OBJC_IVAR_$_PASampleTaskData._timeInsensitiveTaskData
_OBJC_IVAR_$_PASampleTaskData._privateData
_OBJC_IVAR_$_PASampleTaskData._donatingPids
_OBJC_IVAR_$_PASamplePowerstatsThreadData._powerstatsFlags
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._symbolDataStore
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._fanSpeedArray
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._targetTask
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._targetProcessId
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._timeInsensitiveTaskDataDict
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._mountStatusTracker
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._genealogyTracker
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._targetProcessBundleShortVersion
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._targetProcessBundleVersion
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._targetProcessCommerceAppID
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._targetProcessCommerceExternalID
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._targetProcessBundleBuildVersion
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._targetProcessBundleProjectName
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._targetProcessBundleSourceVersion
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._expectsLiveProcesses
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._symbolHandleCache
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._oldSymbolHandleCache
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._shouldPreemptivelyCacheSymbolicators
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._timeSensitiveSampleDataArray
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._binaryLocator
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._pidsToTrack
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._kextStat
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._kernelVersion
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._osProductVersion
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._osBuildVersion
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._machineArchitecture
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._hardwareModel
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._event
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._eventNote
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._signature
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._durationNote
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._stepsNote
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._startMachTimestamp
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._endMachTimestamp
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._startWallTimestamp
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._endWallTimestamp
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._workQueueSoftThreadLimit
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._workQueueHardThreadLimit
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._numActiveCPUs
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._attemptedSamplingInterval
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._sanitizePaths
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._omitThirdPartyProcessStacks
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._targetThreadId
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._cpuPercent
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._cpuDuration
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._wakeupsPerSec
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._wakeupsDuration
_OBJC_IVAR_$_PASampleTimeSeriesDataStore._extraDuration
_CreateDsymSymbolOwnerForUUID.paths
-[PASymbolDataStore _isLikelyToBeKernelAddress:].minAddress
__ShouldSymbolicatePid.dynamic_pager_pid
__ShouldSymbolicatePid.notifyd_pid
__audio_is_running.mib_len
_global_dict_mutex
-[PASampleTimeInsensitiveTaskData _gatherTimeCriticalAuxiliaryInfoFromLiveSystem].max_arguments_size
+[PASymbolHandle getEmptySymbolHandle].emptyHandle
+[PASymbolHandle getEmptySymbolHandle].onceToken
-[PASymbolDataStore _fillUUIDCacheWithKernelSymbolOwners].onceToken
-[PASymbolDataStore _fillUUIDCacheWithSymbolOwnersFromCurrentProcesses].onceToken
_CreateDsymSymbolOwnerForUUID.fileMappedPathURLs
_CreateDsymSymbolOwnerForUUID.createArrayToken
_CreateDsymSymbolOwnerForUUID.dsymForUUID_exists
_CreateDsymSymbolOwnerForUUID.dsymCheckToken
-[PASymbolDataStore _isLikelyToBeKernelAddress:].maxAddress
-[PASymbolDataStore _isLikelyToBeKernelAddress:].gotRange
-[PASymbolDataStore _isLikelyToBeKernelAddress:].onceToken
_CopyMountStatusData.mounts
_CopyMountStatusData.nmounts
_CopyMountStatusData.sysctlBusySem
_CopyMountStatusData.sysctlQueue
_CopyMountStatusData.onceToken
_PAMachTimeForMachAbsTime.predicate
_PAMachTimeForMachAbsTime.timestamp_scale
__PALogTimestamp.startTime
__PALogTimestamp.onceToken
_levelFormattedString.formattedString
_MachToNano.once
_MachToNano.info
_uuid_cache
_cache_count
__ShouldSymbolicatePid.onceToken
__audio_is_running.mib
__audio_is_running.onceToken
__copy_commerce_info_strings.PAISPurchaseReceipt
__copy_commerce_info_strings.paReceiptFromBundleAtURL_
__copy_commerce_info_strings.paAdamID
__copy_commerce_info_strings.paInstallerVersionID
__copy_commerce_info_strings.onceToken
_PAPerfLoggingMachAbsoluteTimeToSeconds.predicate
_PAPerfLoggingMachAbsoluteTimeToSeconds.timestamp_scale
+[PAImage(PrivateInit) sharedCacheImage]._sharedCacheImage
+[PAImageSegment(PrivateInit) sharedCacheSegment]._sharedCacheSegment
__PAPerfLoggingSendMessageToXPCService.shouldDoLogging
_connection
+[PAMemAllocation(PrivateInit) getStringCache].stringCache
_gWSUpdateHandlingQueue
_gDataSets
_gOverrideDefaultsAndEnableDataGathering
_gEncounteredAPDLoggingError
_PAMarkOperationStart.initDictionaries
_gDataCount
_gOperationTimeoutQueue
_gWSUpdateProcessingLock
_gIsRegisteredForWSUpdates
_gResultsReportingQueue
__localLoggingIsEnabled.checkedForOverrideFile
__localLoggingIsEnabled.overrideFileIsPresent
+[PAFanSpeed numFans].numFans
+[PAFanSpeed numFans].onceToken
___PATraceAllocEventSpace.internalThreadId
_RunningInWindowServer.didInit
_RunningInWindowServer.gCodeRunningInServer
_cache
+[PAPerfLoggingOperation _nextSerialNumber].nextSerialNumber
+[PAPerfLoggingOperation _nextSerialNumber].serialNumberLock
+[PAPerfLoggingOperation _nextSerialNumber].onceToken
_numClients
_sharedInstance
__SharedInstanceQueue.sharedInstanceQueue
__SharedInstanceQueue.onceToken
_PAIOAccelMemoryInfo
_collectDataWithCompletionQueue_completionBlock_
_memoryPool
_residentLength
_mappings
_wired
_purgeable
_processIDs
_blamedProcesses
_weak_link_successful
_weak_link_ioaccelmeminfo.onceToken
__ioaccelmemoryinfo_handle
_crash_string
_dscsym_init.once
_asl_client
-[PASampleTimeInsensitiveTaskData _gatherTimeCriticalAuxiliaryInfoFromLiveSystem].onceToken
-[PASampleTimeSeriesDataStore _asynchronouslyCacheSymbolicatorForPid:].onceToken
_symbolicatorFetchingQueue
__PAMessageUserAgent.connection_queue
__PAMessageUserAgent.connection_dict
__PAMessageUserAgent.console_users_dict
__PAMessageUserAgent.error_dict
__PAMessageUserAgent.onceToken
__PAMessageUserAgent.onceToken41
_CSSymbolOwnerGetRangeOfText_SP
_CopyMountStatusData
_CountedStateForSampleThread
_CreateDsymSymbolOwnerForUUID
_CreateSymbolOwnerForUUIDAtPath
_FreeMountStatusData
_MachToNano
_OBJC_CLASS_$_AllocationTotal
_OBJC_CLASS_$_AllocationTotalDiff
_OBJC_CLASS_$_MallocDataCategorySummary
_OBJC_CLASS_$_MallocDataCategorySummaryDiff
_OBJC_CLASS_$_MallocTotal
_OBJC_CLASS_$_MallocTotalDiff
_OBJC_CLASS_$_PAAbandonedMemory
_OBJC_CLASS_$_PAAggregatedDispatchQueue
_OBJC_CLASS_$_PAAggregatedExecutable
_OBJC_CLASS_$_PAAggregatedInstruction
_OBJC_CLASS_$_PAAggregatedKernelInstruction
_OBJC_CLASS_$_PAAggregatedMainThread
_OBJC_CLASS_$_PAAggregatedProcessInstance
_OBJC_CLASS_$_PAAggregatedStackshot
_OBJC_CLASS_$_PAAggregatedStackshotTask
_OBJC_CLASS_$_PAAggregatedTask
_OBJC_CLASS_$_PAAggregatedThread
_OBJC_CLASS_$_PAAggregatedThreadAndDispatchQueue
_OBJC_CLASS_$_PABinaryLocator
_OBJC_CLASS_$_PACSRefWrapper
_OBJC_CLASS_$_PACSSymbolOwnerWrapper
_OBJC_CLASS_$_PACommpageRegion
_OBJC_CLASS_$_PAContiguousThreadArray
_OBJC_CLASS_$_PACountedFrame
_OBJC_CLASS_$_PACountedSampleFrame
_OBJC_CLASS_$_PACountedSampleTreeFrame
_OBJC_CLASS_$_PADataArchive
_OBJC_CLASS_$_PADataArchiveHandle
_OBJC_CLASS_$_PADataArchiveKey
_OBJC_CLASS_$_PAException
_OBJC_CLASS_$_PAExecutableAggregator
_OBJC_CLASS_$_PAFanSpeed
_OBJC_CLASS_$_PAFootprint
_OBJC_CLASS_$_PAGenealogyBreadcrumb
_OBJC_CLASS_$_PAGenealogyTimestampedMessage
_OBJC_CLASS_$_PAGenealogyTraceMessage
_OBJC_CLASS_$_PAGenealogyTracker
_OBJC_CLASS_$_PAGraphicsInfoCollector
_OBJC_CLASS_$_PAImage
_OBJC_CLASS_$_PAImageSection
_OBJC_CLASS_$_PAImageSegment
_OBJC_CLASS_$_PAImageSegmentRegion
_OBJC_CLASS_$_PAMallocData
_OBJC_CLASS_$_PAMallocRegion
_OBJC_CLASS_$_PAMallocStackTree
_OBJC_CLASS_$_PAMallocStackTreeFrame
_OBJC_CLASS_$_PAMappedFileRegion
_OBJC_CLASS_$_PAMemAllocation
_OBJC_CLASS_$_PAMemAllocationCategory
_OBJC_CLASS_$_PAMemRange
_OBJC_CLASS_$_PAMemRegion
_OBJC_CLASS_$_PAMemoryCategory
_OBJC_CLASS_$_PAMemoryCategoryAggregation
_OBJC_CLASS_$_PAMemoryCategoryOrganizer
_OBJC_CLASS_$_PAMemoryObject
_OBJC_CLASS_$_PAMemoryObjectOrganizer
_OBJC_CLASS_$_PAMemorySimpleGraphicsSummary
_OBJC_CLASS_$_PAMemorySubCategory
_OBJC_CLASS_$_PAMicrostackshotData
_OBJC_CLASS_$_PAMountSnapshot
_OBJC_CLASS_$_PAMountStatus
_OBJC_CLASS_$_PAMountStatusTracker
_OBJC_CLASS_$_PAPage
_OBJC_CLASS_$_PAPageResidency
_OBJC_CLASS_$_PAPageResidencyDiff
_OBJC_CLASS_$_PAPerfLoggingIntervalData
_OBJC_CLASS_$_PAPerfLoggingIntervalTransitionEvent
_OBJC_CLASS_$_PAPerfLoggingOperation
_OBJC_CLASS_$_PAProcess
_OBJC_CLASS_$_PAProcessInstanceAggregator
_OBJC_CLASS_$_PAProcessMemoryGroup
_OBJC_CLASS_$_PARangeContainer
_OBJC_CLASS_$_PASample
_OBJC_CLASS_$_PASample32bitKernelFrame
_OBJC_CLASS_$_PASample32bitUserFrame
_OBJC_CLASS_$_PASample64bitKernelFrame
_OBJC_CLASS_$_PASample64bitUserFrame
_OBJC_CLASS_$_PASampleAggregator
_OBJC_CLASS_$_PASampleAggregatorOptions
_OBJC_CLASS_$_PASampleFrame
_OBJC_CLASS_$_PASampleFrameIterator
_OBJC_CLASS_$_PASampleNode
_OBJC_CLASS_$_PASamplePowerstatsThreadData
_OBJC_CLASS_$_PASampleTaskData
_OBJC_CLASS_$_PASampleTaskDataPrivateData
_OBJC_CLASS_$_PASampleThreadData
_OBJC_CLASS_$_PASampleTimeInsensitiveTaskData
_OBJC_CLASS_$_PASampleTimeSeriesDataStore
_OBJC_CLASS_$_PAStackFrame
_OBJC_CLASS_$_PAStackshot
_OBJC_CLASS_$_PAStackshotFrameIterator
_OBJC_CLASS_$_PAStackshotImageInfo
_OBJC_CLASS_$_PAStackshotTask
_OBJC_CLASS_$_PAStackshotThread
_OBJC_CLASS_$_PASymbol
_OBJC_CLASS_$_PASymbolDataStore
_OBJC_CLASS_$_PASymbolHandle
_OBJC_CLASS_$_PASymbolOwner
_OBJC_CLASS_$_PASymbolSourceInfo
_OBJC_CLASS_$_PASystem
_OBJC_CLASS_$_PATimestampIndexedSampleThread
_OBJC_CLASS_$_PAVideoCard
_OBJC_CLASS_$_PAVideoCardSet
_OBJC_CLASS_$_PurgeTypeTotal
_OBJC_CLASS_$_PurgeTypeTotalDiff
_OBJC_CLASS_$_ZoneTotal
_OBJC_CLASS_$_ZoneTotalDiff
_OBJC_EHTYPE_$_PAException
_OBJC_IVAR_$_MallocDataCategorySummary.depth
_OBJC_IVAR_$_MallocDataCategorySummary.name
_OBJC_IVAR_$_MallocDataCategorySummary.totalBytesLeaked
_OBJC_IVAR_$_MallocDataCategorySummary.totalBytesNonLeaked
_OBJC_IVAR_$_MallocDataCategorySummary.totalNodesLeaked
_OBJC_IVAR_$_MallocDataCategorySummary.totalNodesNonLeaked
_OBJC_IVAR_$_MallocDataCategorySummaryDiff.depth
_OBJC_IVAR_$_MallocDataCategorySummaryDiff.name
_OBJC_IVAR_$_MallocDataCategorySummaryDiff.totalBytesLeakedDiff
_OBJC_IVAR_$_MallocDataCategorySummaryDiff.totalBytesNonLeakedDiff
_OBJC_IVAR_$_MallocDataCategorySummaryDiff.totalNodesLeakedDiff
_OBJC_IVAR_$_MallocDataCategorySummaryDiff.totalNodesNonLeakedDiff
_OBJC_IVAR_$_MallocTotal.purgeTypeTotals
_OBJC_IVAR_$_MallocTotal.totalBytesNonReclaimable
_OBJC_IVAR_$_MallocTotal.totalBytesReclaimable
_OBJC_IVAR_$_MallocTotal.totalNodesNonReclaimable
_OBJC_IVAR_$_MallocTotal.totalNodesReclaimable
_OBJC_IVAR_$_MallocTotalDiff.purgeTypeTotalDiffs
_OBJC_IVAR_$_MallocTotalDiff.totalBytesNonReclaimableDiff
_OBJC_IVAR_$_MallocTotalDiff.totalBytesReclaimableDiff
_OBJC_IVAR_$_MallocTotalDiff.totalNodesNonReclaimableDiff
_OBJC_IVAR_$_MallocTotalDiff.totalNodesReclaimableDiff
_OBJC_IVAR_$_PAAggregatedInstruction._binaryUuid
_OBJC_IVAR_$_PAAggregatedInstruction._children
_OBJC_IVAR_$_PAAggregatedInstruction._offsetInBinary
_OBJC_IVAR_$_PAAggregatedProcessInstance.stacks
_OBJC_IVAR_$_PAAggregatedTask._aggregator
_OBJC_IVAR_$_PAAggregatedTask._binaryImages
_OBJC_IVAR_$_PAAggregatedThreadAndDispatchQueue._aggregatedTask
_OBJC_IVAR_$_PAAggregatedThreadAndDispatchQueue._contiguousThreadArrays
_OBJC_IVAR_$_PAAggregatedThreadAndDispatchQueue._cpuTimeNsCached
_OBJC_IVAR_$_PAAggregatedThreadAndDispatchQueue._dispatchQueueId
_OBJC_IVAR_$_PAAggregatedThreadAndDispatchQueue._maxPriority
_OBJC_IVAR_$_PAAggregatedThreadAndDispatchQueue._minPriority
_OBJC_IVAR_$_PAAggregatedThreadAndDispatchQueue._threadId
_OBJC_IVAR_$_PABinaryLocator._dirty
_OBJC_IVAR_$_PABinaryLocator._mappings
_OBJC_IVAR_$_PADataArchiveHandle.className
_OBJC_IVAR_$_PADataArchiveHandle.tag
_OBJC_IVAR_$_PADataArchiveKey.className
_OBJC_IVAR_$_PADataArchiveKey.keyName
_OBJC_IVAR_$_PAFanSpeed._fanSpeed
_OBJC_IVAR_$_PAFanSpeed._machTimestamp
_OBJC_IVAR_$_PAFootprint.collapseSharing
_OBJC_IVAR_$_PAFootprint.footprintBytes
_OBJC_IVAR_$_PAFootprint.gatherDetailedProcessInfo
_OBJC_IVAR_$_PAFootprint.gatherGraphicsData
_OBJC_IVAR_$_PAFootprint.gatherMallocDetails
_OBJC_IVAR_$_PAFootprint.graphicsInfoCollector
_OBJC_IVAR_$_PAFootprint.mallocDetailsDisclosureDepth
_OBJC_IVAR_$_PAFootprint.mallocDetailsMinimumBytes
_OBJC_IVAR_$_PAFootprint.memoryObjectOrganizer
_OBJC_IVAR_$_PAFootprint.processes
_OBJC_IVAR_$_PAFootprint.showCategories
_OBJC_IVAR_$_PAFootprint.showRegions
_OBJC_IVAR_$_PAFootprint.showSwapped
_OBJC_IVAR_$_PAFootprint.swappedBytes
_OBJC_IVAR_$_PAGenealogyBreadcrumb._message
_OBJC_IVAR_$_PAGenealogyTimestampedMessage._activityId
_OBJC_IVAR_$_PAGenealogyTimestampedMessage._machTime
_OBJC_IVAR_$_PAGenealogyTraceMessage._binaryOffset
_OBJC_IVAR_$_PAGenealogyTraceMessage._binaryUuid
_OBJC_IVAR_$_PAGenealogyTraceMessage._buffer
_OBJC_IVAR_$_PAGenealogyTraceMessage._bufferLength
_OBJC_IVAR_$_PAGenealogyTraceMessage._message
_OBJC_IVAR_$_PAGenealogyTraceMessage._traceId
_OBJC_IVAR_$_PAGenealogyTracker._activityNames
_OBJC_IVAR_$_PAGenealogyTracker._breadcrumbs
_OBJC_IVAR_$_PAGenealogyTracker._messageWatcher
_OBJC_IVAR_$_PAGenealogyTracker._messages
_OBJC_IVAR_$_PAGraphicsInfoCollector.hasData
_OBJC_IVAR_$_PAGraphicsInfoCollector.processToGraphicsSummary
_OBJC_IVAR_$_PAGraphicsInfoCollector.systemGraphicsSummary
_OBJC_IVAR_$_PAImageSegmentRegion.imageName
_OBJC_IVAR_$_PAImageSegmentRegion.imagePath
_OBJC_IVAR_$_PAImageSegmentRegion.segment
_OBJC_IVAR_$_PAImageSegmentRegion.segmentName
_OBJC_IVAR_$_PAMappedFileRegion.bytesOnDisk
_OBJC_IVAR_$_PAMappedFileRegion.path
_OBJC_IVAR_$_PAMappedFileRegion.shortName
_OBJC_IVAR_$_PAMemRange.size
_OBJC_IVAR_$_PAMemRange.start
_OBJC_IVAR_$_PAMemRegion.classification
_OBJC_IVAR_$_PAMemRegion.doDetailedResidency
_OBJC_IVAR_$_PAMemRegion.inProcObjectCount
_OBJC_IVAR_$_PAMemRegion.nestingDepth
_OBJC_IVAR_$_PAMemRegion.offsetFromObject
_OBJC_IVAR_$_PAMemRegion.owningProcess
_OBJC_IVAR_$_PAMemRegion.pageRes
_OBJC_IVAR_$_PAMemRegion.privatePageRes
_OBJC_IVAR_$_PAMemRegion.purgeState
_OBJC_IVAR_$_PAMemRegion.regionInfo
_OBJC_IVAR_$_PAMemRegion.sharedPageRes
_OBJC_IVAR_$_PAMemRegion.validObjectCount
_OBJC_IVAR_$_PAMemoryCategory._memObjects
_OBJC_IVAR_$_PAMemoryCategory._subCategories
_OBJC_IVAR_$_PAMemoryCategory.name
_OBJC_IVAR_$_PAMemoryCategory.process
_OBJC_IVAR_$_PAMemoryCategory.totalCleanSize
_OBJC_IVAR_$_PAMemoryCategory.totalDirtySize
_OBJC_IVAR_$_PAMemoryCategory.totalReclaimableSize
_OBJC_IVAR_$_PAMemoryCategory.totalSwappedSize
_OBJC_IVAR_$_PAMemoryCategoryAggregation.totalCleanBytes
_OBJC_IVAR_$_PAMemoryCategoryAggregation.totalDirtyBytes
_OBJC_IVAR_$_PAMemoryCategoryAggregation.totalReclaimableBytes
_OBJC_IVAR_$_PAMemoryCategoryAggregation.totalSwappedBytes
_OBJC_IVAR_$_PAMemoryCategoryOrganizer._categories
_OBJC_IVAR_$_PAMemoryCategoryOrganizer._memObjects
_OBJC_IVAR_$_PAMemoryCategoryOrganizer.process
_OBJC_IVAR_$_PAMemoryCategoryOrganizer.totalCleanSize
_OBJC_IVAR_$_PAMemoryCategoryOrganizer.totalDirtySize
_OBJC_IVAR_$_PAMemoryCategoryOrganizer.totalReclaimableSize
_OBJC_IVAR_$_PAMemoryCategoryOrganizer.totalSwappedSize
_OBJC_IVAR_$_PAMemoryObject._accurateSizes
_OBJC_IVAR_$_PAMemoryObject._freezeDried
_OBJC_IVAR_$_PAMemoryObject._rangeListHead
_OBJC_IVAR_$_PAMemoryObject._referringMemRegions
_OBJC_IVAR_$_PAMemoryObject._referringProcesses
_OBJC_IVAR_$_PAMemoryObject.objectID
_OBJC_IVAR_$_PAMemoryObject.totalCleanSize
_OBJC_IVAR_$_PAMemoryObject.totalDirtySize
_OBJC_IVAR_$_PAMemoryObject.totalReclaimableSize
_OBJC_IVAR_$_PAMemoryObject.totalSwappedSize
_OBJC_IVAR_$_PAMemoryObjectOrganizer._needsToBuildGroups
_OBJC_IVAR_$_PAMemoryObjectOrganizer._privateMemoryObjects
_OBJC_IVAR_$_PAMemoryObjectOrganizer._processPrivateMemoryGroups
_OBJC_IVAR_$_PAMemoryObjectOrganizer._processSharedMemoryGroups
_OBJC_IVAR_$_PAMemoryObjectOrganizer._processes
_OBJC_IVAR_$_PAMemoryObjectOrganizer._sharedMemoryObjects
_OBJC_IVAR_$_PAMemorySimpleGraphicsSummary.inProcessBytes
_OBJC_IVAR_$_PAMemorySimpleGraphicsSummary.onDiscreteBytes
_OBJC_IVAR_$_PAMemorySimpleGraphicsSummary.outOfProcessBytes
_OBJC_IVAR_$_PAMemorySimpleGraphicsSummary.pageableBytes
_OBJC_IVAR_$_PAMemorySimpleGraphicsSummary.purgeableBytes
_OBJC_IVAR_$_PAMemorySimpleGraphicsSummary.wiredBytes
_OBJC_IVAR_$_PAMemorySubCategory._memObjects
_OBJC_IVAR_$_PAMemorySubCategory._memRegions
_OBJC_IVAR_$_PAMemorySubCategory.name
_OBJC_IVAR_$_PAMemorySubCategory.process
_OBJC_IVAR_$_PAMemorySubCategory.totalCleanSize
_OBJC_IVAR_$_PAMemorySubCategory.totalDirtySize
_OBJC_IVAR_$_PAMemorySubCategory.totalReclaimableSize
_OBJC_IVAR_$_PAMemorySubCategory.totalSwappedSize
_OBJC_IVAR_$_PAMountSnapshot._blockedThreadIDs
_OBJC_IVAR_$_PAMountSnapshot._machTimestampOfLastResponse
_OBJC_IVAR_$_PAMountSnapshot._machTimestampWhenMeasured
_OBJC_IVAR_$_PAMountStatus._path
_OBJC_IVAR_$_PAMountStatus._snapshots
_OBJC_IVAR_$_PAMountStatus._type
_OBJC_IVAR_$_PAMountStatusTracker._mountStatusDict
_OBJC_IVAR_$_PAPage.addr
_OBJC_IVAR_$_PAPage.disposition
_OBJC_IVAR_$_PAPerfLoggingIntervalData._averageIntervalDurationInMs
_OBJC_IVAR_$_PAPerfLoggingIntervalData._endOfLastIntervalInSec
_OBJC_IVAR_$_PAPerfLoggingIntervalData._firstIntervalStartInSec
_OBJC_IVAR_$_PAPerfLoggingIntervalData._intervalCount
_OBJC_IVAR_$_PAPerfLoggingIntervalData._intervalDurationInMsArray
_OBJC_IVAR_$_PAPerfLoggingIntervalData._intervalStartTimeInSecArray
_OBJC_IVAR_$_PAPerfLoggingIntervalData._intervalType
_OBJC_IVAR_$_PAPerfLoggingIntervalData._normalizedStandardDeviation
_OBJC_IVAR_$_PAPerfLoggingIntervalData._numUnpairedTransitions
_OBJC_IVAR_$_PAPerfLoggingIntervalData._operationCategory
_OBJC_IVAR_$_PAPerfLoggingIntervalData._operationEndTimeInSec
_OBJC_IVAR_$_PAPerfLoggingIntervalData._operationName
_OBJC_IVAR_$_PAPerfLoggingIntervalData._operationStartTimeInSec
_OBJC_IVAR_$_PAPerfLoggingIntervalData._processName
_OBJC_IVAR_$_PAPerfLoggingIntervalData._processedContextDataArray
_OBJC_IVAR_$_PAPerfLoggingIntervalData._processedContextDataUOMsArray
_OBJC_IVAR_$_PAPerfLoggingIntervalData._standardDeviationIntervalDurationInMs
_OBJC_IVAR_$_PAPerfLoggingOperation._contextProcessingConfigurationsForAllIntervalTypes
_OBJC_IVAR_$_PAPerfLoggingOperation._dictionaryOfIntervalTypesEventArrays
_OBJC_IVAR_$_PAPerfLoggingOperation._endTimeInSec
_OBJC_IVAR_$_PAPerfLoggingOperation._fsDSMResults
_OBJC_IVAR_$_PAPerfLoggingOperation._intervalDataDictionary
_OBJC_IVAR_$_PAPerfLoggingOperation._intervalList
_OBJC_IVAR_$_PAPerfLoggingOperation._intervalTypesSeenOrder
_OBJC_IVAR_$_PAPerfLoggingOperation._operationCategory
_OBJC_IVAR_$_PAPerfLoggingOperation._operationName
_OBJC_IVAR_$_PAPerfLoggingOperation._pid
_OBJC_IVAR_$_PAPerfLoggingOperation._processName
_OBJC_IVAR_$_PAPerfLoggingOperation._sampleTimeSeriesDataStore
_OBJC_IVAR_$_PAPerfLoggingOperation._serialNumber
_OBJC_IVAR_$_PAPerfLoggingOperation._startTimeInSec
_OBJC_IVAR_$_PAProcessInstanceAggregator._headerNote
_OBJC_IVAR_$_PAProcessInstanceAggregator._idleWorkQueueFrameAddress
_OBJC_IVAR_$_PAProcessInstanceAggregator._stackshotFrameAddress
_OBJC_IVAR_$_PAProcessInstanceAggregator._timestampsDisplayOffset
_OBJC_IVAR_$_PAProcessMemoryGroup._categoryOrganizers
_OBJC_IVAR_$_PAProcessMemoryGroup._memoryObjects
_OBJC_IVAR_$_PAProcessMemoryGroup._needsToBuildCategoryOrganizers
_OBJC_IVAR_$_PAProcessMemoryGroup.processes
_OBJC_IVAR_$_PAProcessMemoryGroup.totalCleanSize
_OBJC_IVAR_$_PAProcessMemoryGroup.totalDirtySize
_OBJC_IVAR_$_PAProcessMemoryGroup.totalReclaimableSize
_OBJC_IVAR_$_PAProcessMemoryGroup.totalSwappedSize
_OBJC_IVAR_$_PARangeContainer.range
_OBJC_IVAR_$_PASample._machTimestamp
_OBJC_IVAR_$_PASample._tasks
_OBJC_IVAR_$_PASample._wallTimestamp
_OBJC_IVAR_$_PASampleAggregatorOptions._binaryImagesBeforeStacks
_OBJC_IVAR_$_PASampleAggregatorOptions._displayBinaryImageAddresses
_OBJC_IVAR_$_PASampleAggregatorOptions._displayBinaryImagesLackingNameOrPath
_OBJC_IVAR_$_PASampleAggregatorOptions._displayFrameAddresses
_OBJC_IVAR_$_PASampleAggregatorOptions._displayIdleWorkQueueThreads
_OBJC_IVAR_$_PASampleAggregatorOptions._displayNonRunnableThreads
_OBJC_IVAR_$_PASampleAggregatorOptions._displayOffsetsFromUnnamedSymbols
_OBJC_IVAR_$_PASampleAggregatorOptions._displayProcessFirstLastTimes
_OBJC_IVAR_$_PASampleAggregatorOptions._displayStateChangesOnIdleThreads
_OBJC_IVAR_$_PASampleAggregatorOptions._displaySub1MsCpuTime
_OBJC_IVAR_$_PASampleAggregatorOptions._displaySymbolInformation
_OBJC_IVAR_$_PASampleAggregatorOptions._printHeavyStacks
_OBJC_IVAR_$_PASampleAggregatorOptions._printSpinSignatureStack
_OBJC_IVAR_$_PASampleAggregatorOptions._tabDelineateBinaryImageSections
_OBJC_IVAR_$_PASampleFrameIterator._kernel32
_OBJC_IVAR_$_PASampleFrameIterator._kernel64
_OBJC_IVAR_$_PASampleFrameIterator._stackshotThread
_OBJC_IVAR_$_PASampleFrameIterator._user32
_OBJC_IVAR_$_PASampleFrameIterator._user64
_OBJC_IVAR_$_PASampleNode.children
_OBJC_IVAR_$_PASampleNode.dataSource
_OBJC_IVAR_$_PASampleNode.isInSearchResult
_OBJC_IVAR_$_PASampleNode.parent
_OBJC_IVAR_$_PASampleTaskData.sampleThreadsArray
_OBJC_IVAR_$_PASampleThreadData.continuation
_OBJC_IVAR_$_PASampleThreadData.currentScheduledPriority
_OBJC_IVAR_$_PASampleThreadData.dispatchQueueId
_OBJC_IVAR_$_PASampleThreadData.ioPassive
_OBJC_IVAR_$_PASampleThreadData.ioTier
_OBJC_IVAR_$_PASampleThreadData.isSuspended
_OBJC_IVAR_$_PASampleThreadData.leafFrame
_OBJC_IVAR_$_PASampleThreadData.schedulerFlags
_OBJC_IVAR_$_PASampleThreadData.ss_flags
_OBJC_IVAR_$_PASampleThreadData.state
_OBJC_IVAR_$_PASampleThreadData.staticPriority
_OBJC_IVAR_$_PASampleThreadData.systemTimeInNs
_OBJC_IVAR_$_PASampleThreadData.threadId
_OBJC_IVAR_$_PASampleThreadData.threadQos
_OBJC_IVAR_$_PASampleThreadData.userTimeInNs
_OBJC_IVAR_$_PASampleThreadData.waitEvent
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._allowsIdleExit
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._bundleName
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._cachedDonatingPids
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._cachedPrivateData
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._didExec
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._gatheredNonTimeCriticalAuxiliaryInfoFromLiveSystem
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._imageInfos
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._isDirty
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._isThirdParty
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._isUnresponsive
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._mainBinaryPath
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._name
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._pid
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._ppid
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._rootFrames
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._rpid
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._sharedCacheOffset
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._sharedCacheUuid
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._timeOfLastResponse
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._uid
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._uniqueId
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._usesSuddenTermination
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._workQueueExceededConstrainedThreadLimit
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData._workQueueExceededTotalThreadLimit
_OBJC_IVAR_$_PASampleTimeInsensitiveTaskData.mostRecentTask
_OBJC_IVAR_$_PAStackshotThread.thread_snap
_OBJC_IVAR_$_PATimestampIndexedSampleThread._lastTimestampIndex
_OBJC_IVAR_$_PATimestampIndexedSampleThread._sampleThread
_OBJC_IVAR_$_PAVideoCard.cardName
_OBJC_IVAR_$_PAVideoCard.className
_OBJC_IVAR_$_PAVideoCard.deviceId
_OBJC_IVAR_$_PAVideoCard.freeVRAM
_OBJC_IVAR_$_PAVideoCard.perfStats
_OBJC_IVAR_$_PAVideoCard.totalVRAM
_OBJC_IVAR_$_PAVideoCard.usedVRAM
_OBJC_IVAR_$_PAVideoCard.vendorId
_OBJC_IVAR_$_PAVideoCardSet.cards
_OBJC_METACLASS_$_AllocationTotal
_OBJC_METACLASS_$_AllocationTotalDiff
_OBJC_METACLASS_$_MallocDataCategorySummary
_OBJC_METACLASS_$_MallocDataCategorySummaryDiff
_OBJC_METACLASS_$_MallocTotal
_OBJC_METACLASS_$_MallocTotalDiff
_OBJC_METACLASS_$_PAAbandonedMemory
_OBJC_METACLASS_$_PAAggregatedDispatchQueue
_OBJC_METACLASS_$_PAAggregatedExecutable
_OBJC_METACLASS_$_PAAggregatedInstruction
_OBJC_METACLASS_$_PAAggregatedKernelInstruction
_OBJC_METACLASS_$_PAAggregatedMainThread
_OBJC_METACLASS_$_PAAggregatedProcessInstance
_OBJC_METACLASS_$_PAAggregatedStackshot
_OBJC_METACLASS_$_PAAggregatedStackshotTask
_OBJC_METACLASS_$_PAAggregatedTask
_OBJC_METACLASS_$_PAAggregatedThread
_OBJC_METACLASS_$_PAAggregatedThreadAndDispatchQueue
_OBJC_METACLASS_$_PABinaryLocator
_OBJC_METACLASS_$_PACSRefWrapper
_OBJC_METACLASS_$_PACSSymbolOwnerWrapper
_OBJC_METACLASS_$_PACommpageRegion
_OBJC_METACLASS_$_PAContiguousThreadArray
_OBJC_METACLASS_$_PACountedFrame
_OBJC_METACLASS_$_PACountedSampleFrame
_OBJC_METACLASS_$_PACountedSampleTreeFrame
_OBJC_METACLASS_$_PADataArchive
_OBJC_METACLASS_$_PADataArchiveHandle
_OBJC_METACLASS_$_PADataArchiveKey
_OBJC_METACLASS_$_PAException
_OBJC_METACLASS_$_PAExecutableAggregator
_OBJC_METACLASS_$_PAFanSpeed
_OBJC_METACLASS_$_PAFootprint
_OBJC_METACLASS_$_PAGenealogyBreadcrumb
_OBJC_METACLASS_$_PAGenealogyTimestampedMessage
_OBJC_METACLASS_$_PAGenealogyTraceMessage
_OBJC_METACLASS_$_PAGenealogyTracker
_OBJC_METACLASS_$_PAGraphicsInfoCollector
_OBJC_METACLASS_$_PAImage
_OBJC_METACLASS_$_PAImageSection
_OBJC_METACLASS_$_PAImageSegment
_OBJC_METACLASS_$_PAImageSegmentRegion
_OBJC_METACLASS_$_PAMallocData
_OBJC_METACLASS_$_PAMallocRegion
_OBJC_METACLASS_$_PAMallocStackTree
_OBJC_METACLASS_$_PAMallocStackTreeFrame
_OBJC_METACLASS_$_PAMappedFileRegion
_OBJC_METACLASS_$_PAMemAllocation
_OBJC_METACLASS_$_PAMemAllocationCategory
_OBJC_METACLASS_$_PAMemRange
_OBJC_METACLASS_$_PAMemRegion
_OBJC_METACLASS_$_PAMemoryCategory
_OBJC_METACLASS_$_PAMemoryCategoryAggregation
_OBJC_METACLASS_$_PAMemoryCategoryOrganizer
_OBJC_METACLASS_$_PAMemoryObject
_OBJC_METACLASS_$_PAMemoryObjectOrganizer
_OBJC_METACLASS_$_PAMemorySimpleGraphicsSummary
_OBJC_METACLASS_$_PAMemorySubCategory
_OBJC_METACLASS_$_PAMicrostackshotData
_OBJC_METACLASS_$_PAMountSnapshot
_OBJC_METACLASS_$_PAMountStatus
_OBJC_METACLASS_$_PAMountStatusTracker
_OBJC_METACLASS_$_PAPage
_OBJC_METACLASS_$_PAPageResidency
_OBJC_METACLASS_$_PAPageResidencyDiff
_OBJC_METACLASS_$_PAPerfLoggingIntervalData
_OBJC_METACLASS_$_PAPerfLoggingIntervalTransitionEvent
_OBJC_METACLASS_$_PAPerfLoggingOperation
_OBJC_METACLASS_$_PAProcess
_OBJC_METACLASS_$_PAProcessInstanceAggregator
_OBJC_METACLASS_$_PAProcessMemoryGroup
_OBJC_METACLASS_$_PARangeContainer
_OBJC_METACLASS_$_PASample
_OBJC_METACLASS_$_PASample32bitKernelFrame
_OBJC_METACLASS_$_PASample32bitUserFrame
_OBJC_METACLASS_$_PASample64bitKernelFrame
_OBJC_METACLASS_$_PASample64bitUserFrame
_OBJC_METACLASS_$_PASampleAggregator
_OBJC_METACLASS_$_PASampleAggregatorOptions
_OBJC_METACLASS_$_PASampleFrame
_OBJC_METACLASS_$_PASampleFrameIterator
_OBJC_METACLASS_$_PASampleNode
_OBJC_METACLASS_$_PASamplePowerstatsThreadData
_OBJC_METACLASS_$_PASampleTaskData
_OBJC_METACLASS_$_PASampleTaskDataPrivateData
_OBJC_METACLASS_$_PASampleThreadData
_OBJC_METACLASS_$_PASampleTimeInsensitiveTaskData
_OBJC_METACLASS_$_PASampleTimeSeriesDataStore
_OBJC_METACLASS_$_PAStackFrame
_OBJC_METACLASS_$_PAStackshot
_OBJC_METACLASS_$_PAStackshotFrameIterator
_OBJC_METACLASS_$_PAStackshotImageInfo
_OBJC_METACLASS_$_PAStackshotTask
_OBJC_METACLASS_$_PAStackshotThread
_OBJC_METACLASS_$_PASymbol
_OBJC_METACLASS_$_PASymbolDataStore
_OBJC_METACLASS_$_PASymbolHandle
_OBJC_METACLASS_$_PASymbolOwner
_OBJC_METACLASS_$_PASymbolSourceInfo
_OBJC_METACLASS_$_PASystem
_OBJC_METACLASS_$_PATimestampIndexedSampleThread
_OBJC_METACLASS_$_PAVideoCard
_OBJC_METACLASS_$_PAVideoCardSet
_OBJC_METACLASS_$_PurgeTypeTotal
_OBJC_METACLASS_$_PurgeTypeTotalDiff
_OBJC_METACLASS_$_ZoneTotal
_OBJC_METACLASS_$_ZoneTotalDiff
_PACFBundleCopyStringForKey
_PACommonAverageFromArray
_PACommonStandardDeviationFromArray
_PACurrentRealTimeInSeconds
_PAGatherProcessStackshot
_PAIsAppResponsive
_PAMachTimeForMachAbsTime
_PAMachTimeForNSNumberOfMachAbsTime
_PAMachTimeGetCurrent
_PAMarkOperationEnd
_PAMarkOperationEndAndGetIntervalStats
_PAMarkOperationEndAndTruncateByDurationInSec
_PAMarkOperationEndAndTruncateByDurationInSecAndGetIntervalStats
_PAMarkOperationEvent
_PAMarkOperationIntervalEnd
_PAMarkOperationIntervalEndAndStart
_PAMarkOperationIntervalStart
_PAMarkOperationStart
_PAMarkOperationStartAndSetContextProcessingConfiguration
_PAMessageUserAgent
_PAMessageUserAgentWithReply
_PAMessageUserAgentWithReplyAsync
_PANSDictionaryCopyStringForKey
_PAOrderAddedListKey
_PAPerfLoggingAverageDurationString
_PAPerfLoggingDelayFromStartString
_PAPerfLoggingDisableOperationTimeout
_PAPerfLoggingDurationFormat
_PAPerfLoggingIntervalCountFormat
_PAPerfLoggingIntervalData_WSUpdateCompositingIntervalType
_PAPerfLoggingIntervalData_WSUpdateFinalCAFlushEventType
_PAPerfLoggingIntervalData_WSUpdateIntervalType
_PAPerfLoggingIntervalData_WSUpdateMagicMenuBarIntervalType
_PAPerfLoggingIntervalData_WSUpdateMagicMirrorIntervalType
_PAPerfLoggingIntervalData_WSUpdatePreparationIntervalType
_PAPerfLoggingIntervalData_WSUpdateWorkIntervalType
_PAPerfLoggingIntervalRateFormatString
_PAPerfLoggingIntervalRateIgnoringDelayFormatString
_PAPerfLoggingLocalLoggingFormat
_PAPerfLoggingLocalLoggingHeaderFormat
_PAPerfLoggingMachAbsoluteTimeToSeconds
_PAPerfLoggingNormalizedStandardDeviationString
_PAPerfLoggingOperationDurationString
_PAPerfLoggingOperationTimeoutInSec
_PAPerfLoggingProcessWSUpdateInfoDictionary
_PAPerfLoggingReportFrameRateOnly
_PAPerfLoggingResult_FrameKey
_PAPerfLoggingSetDataGatheringEnabled
_PAPerfLoggingStandardDeviationString
_PAPerfLoggingTimeoutIsEnabled
_PAPerfLoggingWSFrameRateIgnoringDelayString
_PAPerfLoggingWSFrameRateString
_PAPerfLoggingXPCService_MessageKey_DoSysLogLogging
_PAPerfLoggingXPCService_MessageKey_MessageCategory
_PAPerfLoggingXPCService_MessageKey_OperationCategory
_PAPerfLoggingXPCService_MessageKey_OperationIntervalTransitionType
_PAPerfLoggingXPCService_MessageKey_OperationIntervalType
_PAPerfLoggingXPCService_MessageKey_OperationName
_PAPerfLoggingXPCService_MessageKey_OperationRateUOM
_PAPerfLoggingXPCService_MessageKey_ProcessPID
_PAPerfLoggingXPCService_MessageKey_TruncateOperationByDurationInSec
_PAPerfLoggingXPCService_ServiceName
_PAPerfLogging_ContextProcessingConfiguration_ContextProcessingBlock
_PAPerfLogging_ContextProcessingConfiguration_HasDetailedSettings
_PAPerfLogging_ContextProcessingConfiguration_UOMs
_PAPerfLogging_ContextProcessingConfiguration_ValueRateCaps
_PAPerfLogging_ProcessedContextData_Notes
_PAPerfLogging_ProcessedContextData_Values
_PASerializableAddInstanceToSerializationDictionaryWithClassKey
_PASerializableFillSerializedIndicesWithCollectionOfSerializableInstances
_PASerializableFillSerializedIndicesWithDictionaryOfSerializableArrays
_PASerializableFillSerializedIndicesWithDictionaryOfSerializableInstances
_PASerializableIndexForPointerFromSerializationDictionary
_PASerializableInstanceForIndexUsingDeserializationDictionaryAndDataBufferDictionaryAndClass
_PASerializableNewDataBufferDictionaryFromSerializationDictionary
_PASerializableNewMutableArrayFromIndexList
_PASerializableNewMutableDictionaryFromIndexList
_PASerializableNewMutableDictionaryOfArraysFromIndexList
_PASerializableNewMutableSetFromIndexList
_PASerializableSizeInBytesForDictionaryOfArrays
_PASerializableSizeInBytesForDictionaryOfInstances
_PASerializableSizeInBytesForSerializedDictionary
_PASetContextProcessingConfigurationForOperation
_PASetContextProcessingConfigurationForOperationIntervalType
_PATraceAddMessage
_PATraceAllocGlobalEvent
_PATraceAutoInitialize
_PATraceConfigure
_PATraceInitializeEventLogging
_PATraceMarkEvent
_PATraceMarkEventEx
_PATraceMarkMessage
_PATraceStartEventLogging
_PATraceStopEventLogging
_PATraceTerminateEventLogging
_PAXPCMarkOperationEnd
_PAXPCMarkOperationEndAndTruncateByDurationInSec
_PAXPCMarkOperationEndAndTruncateByDurationInSecNoSysLogLogging
_PAXPCMarkOperationEndNoSysLogLogging
_PAXPCMarkOperationEvent
_PAXPCMarkOperationIntervalEnd
_PAXPCMarkOperationIntervalEndAndStart
_PAXPCMarkOperationIntervalStart
_PAXPCMarkOperationStart
_SanitizedSignature
_UNKNOWN_STRING
__CheckAppleInternal
__CopyStringForTime
__CreateSanitizedCopy
__IsTimerCoalesced
__IsTimerLimited
__IsTimerNormal
__PALogTimestamp
__PASerializableIndexForPointer
__PASerializableInstanceForIndex
__ShouldSymbolicatePid
___PATraceAllocEvent
___PATraceAllocEventSpace
___PATraceAutoEventClose
___PATraceAutoFlush
___PATraceCreateFile
___PATraceDeallocEventSpace
___PATraceFindInternalThreadId
___PATraceFinishEventLogging
___PATraceFlushEvents
___PATraceFlushEvents_thread
___PATraceFlushMessages
___PATraceThreadCleanup
__addInstanceToDeserializationDictionaryWithClassKey
__addPointerToIndexDictionaryForClass
__audio_is_running
__copy_commerce_info_strings
__fprintf_frame_base
__fprintf_frame_state
__fprintf_frame_timerange
__getTimeStampStringFromTimeStampArray
__indexToInstanceDictionaryFromDeserializationDictionary
__is_alive
__newDataBufferFromPointerToIndexDictionary
__newMutableCollectionFromIndexList
__newNumberForPointer
__newPointerToIndexDictionary
__operationForCategoryNamePair
__pidsForName
__pointerInBufferForIndexWithClass
_abortSafely
_assert_fail
_dscsym_iterate_binaries
_formattedAddress
_formattedBytes
_formattedBytesDouble
_formattedSignedBytes
_fprintf_frame
_fprintf_sample_task_name
_fprintf_seconds
_fprintf_state_frame
_fprintf_timeline_frame
_fprintf_timeline_state_frame
_g_PATraceGlobal
_kPABinaryLocatorDatabaseLocation
_kPAErrorIndex
_kPANullIndex
_levelFormattedString
_main
_nameForProcInfo
_newProcessStructures
_pagesToBytes
_pagesToBytesDefault
_pointerForIndex
_printHeaderSpacingToStream
_sizeOfRAM
_stringForIndex
_stringIndexForNSString
_stringNameForPAInternalTransitionType
_supportedVersionsDictionary
_uuidForBytes
_uuidForString
_CFAbsoluteTimeGetCurrent
_CFArrayCreate
_CFArrayGetCount
_CFArrayGetValueAtIndex
_CFBundleCopyBundleURL
_CFBundleGetIdentifier
_CFBundleGetValueForInfoDictionaryKey
_CFDictionaryCreateMutable
_CFDictionaryGetValue
_CFDictionaryRemoveValue
_CFDictionarySetValue
_CFGetTypeID
_CFNumberGetValue
_CFPreferencesGetAppIntegerValue
_CFRelease
_CFRetain
_CFStringGetTypeID
_CFUUIDCreateFromUUIDBytes
_CGSRegisterUpdateInformationHandler
_CGSSessionCopyAllSessionProperties
_CGSUnregisterUpdateInformationHandler
_CRCopySanitizedPath
_CRHasBeenAppleInternalRecently
_CSArchitectureGetCurrent
_CSArchitectureGetFamilyName
_CSIsNull
_CSRangeContainsRange
_CSRegionGetName
_CSRegionGetRange
_CSRelease
_CSRetain
_CSSourceInfoGetColumn
_CSSourceInfoGetFilename
_CSSourceInfoGetLineNumber
_CSSourceInfoGetRange
_CSSymbolGetName
_CSSymbolGetRange
_CSSymbolGetSymbolOwner
_CSSymbolOwnerForeachRegion
_CSSymbolOwnerForeachSegment
_CSSymbolOwnerGetBaseAddress
_CSSymbolOwnerGetCFUUIDBytes
_CSSymbolOwnerGetName
_CSSymbolOwnerGetPath
_CSSymbolOwnerGetSourceInfoWithAddress
_CSSymbolOwnerGetSymbolWithAddress
_CSSymbolOwnerGetVersion
_CSSymbolOwnerIsAOut
_CSSymbolOwnerIsCommpage
_CSSymbolOwnerIsDsym
_CSSymbolOwnerIsDyldSharedCache
_CSSymbolicatorCreateWithMachKernelFlagsAndNotification
_CSSymbolicatorCreateWithPidFlagsAndNotification
_CSSymbolicatorCreateWithTask
_CSSymbolicatorCreateWithTaskFlagsAndNotification
_CSSymbolicatorForeachSegmentAtTime
_CSSymbolicatorForeachSymbolOwnerAtTime
_CSSymbolicatorForeachSymbolOwnerWithCFUUIDBytesAtTime
_CSSymbolicatorForeachSymbolicatorWithPathFlagsAndNotification
_CSSymbolicatorGetSymbolOwnerWithAddressAtTime
_CSSymbolicatorGetSymbolOwnerWithNameAtTime
_DBGCopyFullDSYMURLForUUIDWithOptions
_IOConnectCallStructMethod
_IOIteratorNext
_IOObjectRelease
_IORegistryEntryCreateCFProperty
_IORegistryEntryCreateIterator
_IORegistryEntryGetParentEntry
_IORegistryEntryGetRegistryEntryID
_IOServiceClose
_IOServiceGetMatchingService
_IOServiceGetMatchingServices
_IOServiceMatching
_IOServiceOpen
_NSClassFromString
_NSLog
_NSStringFromClass
_NSTemporaryDirectory
_NSURLVolumeIsLocalKey
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSInvocation
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUUID
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_VMUObjectIdentifier
_OBJC_IVAR_$_VMURangeArray._count
_OBJC_IVAR_$_VMURangeArray._ranges
_OBJC_METACLASS_$_NSException
_OBJC_METACLASS_$_NSObject
_OSAtomicAdd32
_OSAtomicCompareAndSwapPtrBarrier
_SMJobCopyDictionary
__Block_copy
__Block_object_assign
__Block_object_dispose
__Block_release
__CFBundleCreateWithExecutableURLIfLooksLikeBundle
__CFCopySystemVersionDictionary
__LSASNCreateWithPid
__LSCopyApplicationInformation
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___assert_rtn
___bzero
___error
___mach_stack_logging_get_frames
___objc_personality_v0
___snprintf_chk
___sprintf_chk
___stack_chk_fail
___stack_chk_guard
___stderrp
___stdinp
___strlcpy_chk
___vsnprintf_chk
__dispatch_queue_attr_concurrent
__kCFBundleShortVersionStringKey
__kCFSystemVersionBuildVersionKey
__kCFSystemVersionProductVersionKey
__kLSDisplayNameKey
__objc_empty_cache
__xpc_error_connection_interrupted
__xpc_error_connection_invalid
__xpc_type_error
_access
_asl_open
_asprintf
_bootstrap_port
_calloc
_ceil
_ceilf
_close
_dispatch_after
_dispatch_apply
_dispatch_async
_dispatch_barrier_sync
_dispatch_get_global_queue
_dispatch_once
_dispatch_queue_create
_dispatch_queue_offsets
_dispatch_release
_dispatch_retain
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_sync
_dispatch_time
_dlclose
_dlopen
_exit
_fclose
_fgetc
_fgets
_floorf
_fopen
_fprintf
_fputc
_fputs
_fread
_free
_fseek
_fstat$INODE64
_fwrite
_getmntinfo$INODE64
_getpid
_getsectbyname
_host_page_size
_host_statistics64
_kCFAbsoluteTimeIntervalSince1970
_kCFAllocatorDefault
_kCFBundleNameKey
_kCFBundleVersionKey
_kCFTypeDictionaryValueCallBacks
_kCGSUpdateCAFlushes
_kCGSUpdateEvents
_kCGSUpdateIntervals
_kCGSUpdateMenuBarInterval
_kCGSUpdateMirrorInterval
_kCGSUpdatePreparationInterval
_kCGSUpdateRenderInterval
_kIOMasterPortDefault
_kSMDomainSystemLaunchd
_kill
_localtime_r
_log10f
_mach_absolute_time
_mach_host_self
_mach_port_names
_mach_task_self_
_mach_timebase_info
_mach_vm_deallocate
_mach_vm_page_query
_mach_vm_purgable_control
_mach_vm_region_recurse
_malloc
_memcmp
_memcpy
_mkdir
_msgtracer_set
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_begin_catch
_objc_collectingEnabled
_objc_copyStruct
_objc_ehtype_vtable
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_exception_throw
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_msgSend_stret
_objc_setProperty
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_open
_os_activity_iterate_activities
_os_activity_iterate_breadcrumbs
_os_activity_iterate_messages
_os_activity_iterate_processes
_os_activity_watch
_os_activity_watch_cancel
_os_activity_watch_pid
_os_trace_copy_formatted_message
_pclose
_perror
_popen
_printf
_proc_get_dirty
_proc_listallpids
_proc_name
_proc_pidinfo
_proc_regionfilename
_pthread_create
_pthread_exit
_pthread_getspecific
_pthread_key_create
_pthread_key_delete
_pthread_mutex_init
_pthread_mutex_lock
_pthread_mutex_unlock
_pthread_self
_pthread_setspecific
_putchar
_puts
_read
_realloc
_responsibility_get_pid_responsible_for_pid
_rindex
_stat$INODE64
_strcmp
_strcpy
_strdup
_strftime
_strlen
_strncmp
_strncpy
_syscall
_sysctl
_sysctlbyname
_sysctlnametomib
_system
_task_find_leaks
_task_for_pid
_task_get_malloc_ptrs_by_zone
_task_info
_task_start_peeking
_task_stop_peeking
_task_threads
_uname
_usleep
_uuid_compare
_uuid_copy
_uuid_is_null
_uuid_parse
_uuid_unparse
_vfprintf
_vm_page_size
_xpc_connection_create
_xpc_connection_create_mach_service
_xpc_connection_get_pid
_xpc_connection_resume
_xpc_connection_send_barrier
_xpc_connection_send_message
_xpc_connection_send_message_with_reply
_xpc_connection_set_event_handler
_xpc_connection_set_target_uid
_xpc_dictionary_create
_xpc_dictionary_get_bool
_xpc_dictionary_get_double
_xpc_dictionary_get_int64
_xpc_dictionary_get_value
_xpc_dictionary_set_bool
_xpc_dictionary_set_double
_xpc_dictionary_set_int64
_xpc_dictionary_set_string
_xpc_dictionary_set_uint64
_xpc_dictionary_set_value
_xpc_get_type
_xpc_release
_xpc_retain
dyld_stub_binder
