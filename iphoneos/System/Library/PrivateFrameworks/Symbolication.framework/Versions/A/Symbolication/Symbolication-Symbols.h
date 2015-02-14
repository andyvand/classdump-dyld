+[VMUArchitecture initialize]
+[VMUArchitecture currentArchitecture]
+[VMUArchitecture anyArchitecture]
+[VMUArchitecture ppcArchitecture]
+[VMUArchitecture ppc32Architecture]
+[VMUArchitecture ppc64Architecture]
+[VMUArchitecture i386Architecture]
+[VMUArchitecture x86_32Architecture]
+[VMUArchitecture x86_64Architecture]
+[VMUArchitecture armArchitecture]
+[VMUArchitecture architectureWithCpuType:cpuSubtype:]
-[VMUArchitecture initWithCpuType:cpuSubtype:]
-[VMUArchitecture initWithCoder:]
-[VMUArchitecture encodeWithCoder:]
-[VMUArchitecture copyWithZone:]
-[VMUArchitecture isBigEndian]
-[VMUArchitecture isLittleEndian]
-[VMUArchitecture is32Bit]
-[VMUArchitecture is64Bit]
-[VMUArchitecture isEqualToArchitecture:]
-[VMUArchitecture isEqual:]
-[VMUArchitecture hash]
-[VMUArchitecture matchesArchitecture:]
-[VMUArchitecture cpuType]
-[VMUArchitecture cpuSubtype]
-[VMUArchitecture description]
-[VMUSourceInfo initWithSymbolicator:address:]
-[VMUSourceInfo path]
-[VMUSourceInfo fileName]
-[VMUSourceInfo lineNumber]
-[VMUSourceInfo dealloc]
+[VMUSymbolOwnerCache setMemoryLimit:]
-[VMUSymbol initWithSymbolicator:address:]
-[VMUSymbol name]
-[VMUSymbol sourceInfoForAddress:]
-[VMUSymbol dealloc]
+[VMUSymbolicator symbolicatorForTask:]
+[VMUSymbolicator symbolicatorForPid:]
-[VMUSymbolicator initWithTask:]
-[VMUSymbolicator symbolForAddress:]
-[VMUSymbolicator sourceInfoForAddress:]
-[VMUSymbolicator dealloc]
_memoryExists
_printerr
_task_read_ptr_at
_task_read_unsigned_at
_task_peek_string
_stringFromRemoteNSCFString
_stringFromBytes
___task_find_leaks_block_invoke
___copy_helper_block_
___destroy_helper_block_
_FixupCallStack
__IsValidPC
__GetThumbInstruction
_VMUSymbol_hash
_VMUSymbol_isKeyEqual
-[VMUCallTreePseudoNode isPseudo]
-[VMUCallTreePseudoNode pseudoNodeTopOfStackChild]
-[VMUCallTreePseudoNode sortedChildrenWithPseudoNode]
-[VMUCallTreePseudoNode largestTopOfStackPath]
+[VMUCallTreeNode rootForSamples:symbolicator:sampler:options:]
+[VMUCallTreeNode rootForSamples:symbolicator:]
+[VMUCallTreeNode nodeWithName:address:count:numBytes:]
-[VMUCallTreeNode initWithName:address:count:numBytes:]
-[VMUCallTreeNode numChildren]
-[VMUCallTreeNode setNumChildren:]
-[VMUCallTreeNode childAtIndex:]
-[VMUCallTreeNode allChildren]
-[VMUCallTreeNode setChildren:]
-[VMUCallTreeNode addChild:]
-[VMUCallTreeNode dealloc]
+[VMUCallTreeNode makeFakeRootForNode:]
-[VMUCallTreeNode parent]
-[VMUCallTreeNode address]
-[VMUCallTreeNode count]
-[VMUCallTreeNode numBytes]
-[VMUCallTreeNode name]
-[VMUCallTreeNode getBrowserName:]
-[VMUCallTreeNode browserName]
-[VMUCallTreeNode isPseudo]
-[VMUCallTreeNode pseudoName]
-[VMUCallTreeNode symbolNameIsUnknown]
-[VMUCallTreeNode isMallocBlockContentNode]
-[VMUCallTreeNode nameWithoutOffset]
-[VMUCallTreeNode nameWithStringsForSymbol:library:loadAddress:offset:address:suffix:]
-[VMUCallTreeNode parseNameIntoSymbol:library:loadAddress:offset:address:suffix:]
-[VMUCallTreeNode findOrAddChildWithName:address:nodeSearchType:isLeafNode:]
-[VMUCallTreeNode findOrAddChildWithName:address:]
-[VMUCallTreeNode compareSizeAndCount:]
-[VMUCallTreeNode compare:]
-[VMUCallTreeNode comparePuttingMainThreadFirst:]
-[VMUCallTreeNode pseudoNodeTopOfStackChild]
-[VMUCallTreeNode sortedChildrenWithPseudoNode:withCompare:]
-[VMUCallTreeNode sortedChildrenWithPseudoNode]
-[VMUCallTreeNode largestTopOfStackPath]
-[VMUCallTreeNode countFunctionOccurrencesInTree:]
-[VMUCallTreeNode fullOutputWithThreshold:showPseudoNodes:]
_printCallGraph
-[VMUCallTreeNode fullOutputWithThreshold:]
-[VMUCallTreeNode callTreeHasBranches]
-[VMUCallTreeNode stringFromCallTreeIndentIfNoBranches:showPseudoNodes:]
-[VMUCallTreeNode stringFromCallTreeIndentIfNoBranches:]
-[VMUCallTreeNode invertedNode]
_invertRecursiveWithNewInvertedRoot
-[VMUCallTreeNode filterOutSymbols:required:]
-[VMUCallTreeNode filterOutSymbols:]
_isSystemPath
-[VMUCallTreeNode chargeLibrariesInSet:toCaller:parentLibrary:]
-[VMUCallTreeNode chargeLibrariesToCallers:keepBoundaries:]
-[VMUCallTreeNode chargeSystemLibrariesToCallersAndKeepBoundaries:]
-[VMUCallTreeNode pruneCount:]
-[VMUCallTreeNode pruneMallocSize:]
-[VMUCallTreeNode addTraceEvent:forTraceData:]
+[VMUCallTreeNode rootForTraceData:]
___printCollapsedTops_block_invoke
___copy_helper_block_
___destroy_helper_block_
___printTotalNumberInStack_block_invoke
___copy_helper_block_292
___destroy_helper_block_293
-[VMUProcList init]
-[VMUProcList dealloc]
-[VMUProcList finalize]
-[VMUProcList setProcInfos:]
-[VMUProcList addProcInfo:]
-[VMUProcList removeProcInfo:]
-[VMUProcList update]
-[VMUProcList _populateFromSystem]
-[VMUProcList updateFromSystem]
-[VMUProcList setOwnedOnly:]
-[VMUProcList ownedOnly:]
-[VMUProcList setAppsOnly:]
-[VMUProcList appsOnly]
-[VMUProcList count]
-[VMUProcList allProcInfos]
-[VMUProcList allPIDs]
-[VMUProcList allNames]
-[VMUProcList allPathNames]
-[VMUProcList newestProcInfo]
-[VMUProcList newestProcInfoWithName:]
-[VMUProcList newestProcInfoSatisfyingCondition:forTarget:withContext:]
-[VMUProcList newestProcInfoSatisfyingCondition:forTarget:]
-[VMUProcList procInfoWithPID:]
-[VMUSampler initWithPID:orTask:options:]
-[VMUSampler initWithPID:]
-[VMUSampler initWithTask:]
-[VMUSampler initWithPID:options:]
-[VMUSampler initWithTask:options:]
-[VMUSampler dealloc]
-[VMUSampler finalize]
-[VMUSampler _makeHighPriority]
-[VMUSampler _makeTimeshare]
-[VMUSampler initializeSamplingContext:]
-[VMUSampler _checkDispatchThreadLimits]
-[VMUSampler recordSampleTo:beginTime:endTime:thread:]
+[VMUSampler initialize]
-[VMUSampler _fixupStacks:]
-[VMUSampler _runSamplingThread]
+[VMUSampler sampleAllThreadsOfPID:]
+[VMUSampler sampleAllThreadsOfTask:]
+[VMUSampler sampleAllThreadsOfTask:symbolicate:]
-[VMUSampler sampleAllThreadsOnce]
-[VMUSampler sampleThread:]
-[VMUSampler start]
-[VMUSampler stop]
-[VMUSampler waitUntilDone]
-[VMUSampler setSamplingInterval:]
-[VMUSampler samplingInterval]
-[VMUSampler setTimeLimit:]
-[VMUSampler timeLimit]
-[VMUSampler setSampleLimit:]
-[VMUSampler sampleLimit]
-[VMUSampler setRecordThreadStates:]
-[VMUSampler setShouldOutputSignature:]
-[VMUSampler shouldOutputSignature]
-[VMUSampler symbolicator]
-[VMUSampler pid]
-[VMUSampler samples]
-[VMUSampler sampleCount]
-[VMUSampler flushData]
-[VMUSampler mainThread]
-[VMUSampler threadNameForThread:returnedThreadId:returnedDispatchQueueSerialNum:]
-[VMUSampler threadNameForThread:]
-[VMUSampler dispatchQueueNameForSerialNumber:returnedConcurrentFlag:returnedThreadId:]
-[VMUSampler dispatchQueueNameForSerialNumber:]
-[VMUSampler setDelegate:]
-[VMUSampler delegate]
-[VMUSampler preloadSymbols]
-[VMUSampler sampleForDuration:interval:]
-[VMUSampler stopSampling]
-[VMUSampler forceStop]
-[VMUSampler stopSamplingAndReturnCallNode]
-[VMUSampler outputString]
-[VMUSampler createOutput]
-[VMUSampler writeOutput:append:]
+[VMUTaskMemoryCache taskIs64Bit:]
+[VMUTaskMemoryCache taskMemoryCacheForTask:]
-[VMUTaskMemoryCache initWithTask:]
-[VMUTaskMemoryCache flushMemoryCache]
-[VMUTaskMemoryCache dealloc]
-[VMUTaskMemoryCache finalize]
-[VMUTaskMemoryCache startPeeking]
-[VMUTaskMemoryCache stopPeeking]
-[VMUTaskMemoryCache peekAtAddress:size:returnsBuf:]
-[VMUTaskMemoryCache readPointerAt:value:]
-[VMUTaskMemoryCache copyRange:to:]
-[VMURangeArray init]
-[VMURangeArray initWithRanges:count:]
-[VMURangeArray dealloc]
-[VMURangeArray copyWithZone:]
-[VMURangeArray setCapacity:]
-[VMURangeArray sort]
_compareRange
-[VMURangeArray addRange:]
-[VMURangeArray addRanges:]
-[VMURangeArray rangeAtIndex:]
-[VMURangeArray indexForLocation:]
-[VMURangeArray rangeForLocation:]
-[VMURangeArray insertRange:atIndex:]
_RangeArrayInsertRangeAtIndex
-[VMURangeArray removeRangeAtIndex:]
_RangeArrayRemoveRangeAtIndex
-[VMURangeArray removeAllRanges]
-[VMURangeArray intersectsLocation:]
-[VMURangeArray intersectsRange:]
-[VMURangeArray subrangeNotExcludedBySelfForRange:]
-[VMURangeArray largestSubrangeNotExcludedBySelfForRange:andLargerThan:startIndex:]
-[VMURangeArray range]
-[VMURangeArray largestRange]
-[VMURangeArray sumLengths]
-[VMURangeArray ranges]
-[VMURangeArray count]
-[VMURangeArray description]
-[VMUNonOverlappingRangeArray addOrExtendRange:]
-[VMUNonOverlappingRangeArray sortAndMergeRanges]
-[VMUNonOverlappingRangeArray mergeRange:]
-[VMUNonOverlappingRangeArray mergeRanges:]
-[VMUNonOverlappingRangeArray mergeRange:excludingRanges:]
-[VMUNonOverlappingRangeArray mergeRanges:excludingRanges:]
-[VMUNonOverlappingRangeArray _mergeAllBitsOfRange:excludingRanges:mergeRanges:]
-[VMUNonOverlappingRangeArray subtract:mergeRanges:]
-[VMUNonOverlappingRangeArray largestUnusedWithInUse:]
+[VMUClassInfo initialize]
-[VMUClassInfo _readRemoteIntAt:]
-[VMUClassInfo _readRemotePointerAt:]
-[VMUClassInfo _copyRemoteStringAt:]
-[VMUClassInfo _copyRemoteIvarAt:]
-[VMUClassInfo _copyRemoteLayout:]
-[VMUClassInfo _faultScanMap]
-[VMUClassInfo _processARRLayout:scanType:]
-[VMUClassInfo _processExtendedLayout:]
___39-[VMUClassInfo _processExtendedLayout:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[VMUClassInfo _parseIvarsAndLayouts]
-[VMUClassInfo _setClassNameWithAddress:]
-[VMUClassInfo hasSpecificLayout]
+[VMUClassInfo classInfoWithClassName:binaryName:type:]
-[VMUClassInfo initWithClassName:binaryName:type:]
-[VMUClassInfo _initWithClass:realizedOnly:infoMap:symbolicator:type:memoryReader:]
-[VMUClassInfo initWithClass:infoMap:symbolicator:type:memoryReader:]
-[VMUClassInfo initWithRealizedClass:infoMap:symbolicator:type:memoryReader:]
-[VMUClassInfo initWithIsaPointer:symbolicator:]
___48-[VMUClassInfo initWithIsaPointer:symbolicator:]_block_invoke
-[VMUClassInfo dealloc]
-[VMUClassInfo encodeWithCoder:]
__ZL26_encodeNullTerminatedBytesP7NSCoderPKh
-[VMUClassInfo initWithCoder:]
__ZL26_decodeNullTerminatedBytesP7NSCoder
-[VMUClassInfo hash]
-[VMUClassInfo isEqual:]
-[VMUClassInfo _ivarDescription:withSpacing:]
-[VMUClassInfo _logDescriptionWithSuperclasses:indentation:toLogger:]
-[VMUClassInfo setMemoryReader:]
-[VMUClassInfo scanObject:ofSize:withBlock:]
___44-[VMUClassInfo scanObject:ofSize:withBlock:]_block_invoke
___copy_helper_block_123
___destroy_helper_block_124
-[VMUClassInfo enumerateKnownSublayoutsForObject:withBlock:]
-[VMUClassInfo _specificCopy:instanceSize:superclassOffset:]
-[VMUClassInfo _setExtendedLayout:]
-[VMUClassInfo _instanceSpecificInfoForObject:pointerSize:reader:]
-[VMUClassInfo instanceSpecificInfoForObject:]
-[VMUClassInfo enumerateIvarsWithBlock:]
-[VMUClassInfo enumerateScanLocationsToSize:withBlock:]
-[VMUClassInfo ivarWithOffset:]
___31-[VMUClassInfo ivarWithOffset:]_block_invoke
___copy_helper_block_142
___destroy_helper_block_143
+[VMUClassInfo descriptionForTypeEncoding:ivarName:]
-[VMUClassInfo binaryName]
-[VMUClassInfo type]
-[VMUClassInfo typeName]
-[VMUClassInfo infoType]
-[VMUClassInfo fullIvarDescription]
___35-[VMUClassInfo fullIvarDescription]_block_invoke
___copy_helper_block_167
___destroy_helper_block_168
-[VMUClassInfo shortIvarDescription]
___36-[VMUClassInfo shortIvarDescription]_block_invoke
___copy_helper_block_172
___destroy_helper_block_173
-[VMUClassInfo debugDescription]
-[VMUClassInfo description]
-[VMUClassInfo isARR]
-[VMUClassInfo isRealized]
-[VMUClassInfo isMetaClass]
-[VMUClassInfo isRootClass]
-[VMUClassInfo hasCppConstructorOrDestructor]
-[VMUClassInfo instanceSize]
-[VMUClassInfo remoteIsa]
-[VMUClassInfo specificInstance]
-[VMUClassInfo className]
-[VMUClassInfo superclassInfo]
-[VMUObjectLabelHandlerInfo dealloc]
-[VMUObjectIdentifier initWithTask:symbolicator:]
___49-[VMUObjectIdentifier initWithTask:symbolicator:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[VMUObjectIdentifier dealloc]
-[VMUObjectIdentifier CFTypeCount]
-[VMUObjectIdentifier ObjCclassCount]
-[VMUObjectIdentifier objcRuntimeMallocBlocksHash]
-[VMUObjectIdentifier enumerateRealizedClassInfosWithBlock:]
-[VMUObjectIdentifier enumerateAllClassInfosWithBlock:]
-[VMUObjectIdentifier nullClassInfo]
-[VMUObjectIdentifier classInfoForObjectWithRange:]
-[VMUObjectIdentifier classInfoForMemory:length:]
-[VMUObjectIdentifier _faultClass:ofType:]
-[VMUObjectIdentifier findCFTypes]
__copy_remote_symbol_value
__map_remote_symbol_value
-[VMUObjectIdentifier findObjCclasses]
___38-[VMUObjectIdentifier findObjCclasses]_block_invoke
___38-[VMUObjectIdentifier findObjCclasses]_block_invoke_2
___copy_helper_block_80
___destroy_helper_block_81
-[VMUObjectIdentifier vmRegionRangeForAddress:]
-[VMUObjectIdentifier osMajorMinorVersionString]
-[VMUObjectIdentifier buildIsaToObjectLabelHandlerMap]
___54-[VMUObjectIdentifier buildIsaToObjectLabelHandlerMap]_block_invoke
___copy_helper_block_141
___destroy_helper_block_142
-[VMUObjectIdentifier objectLabelHandlerForRemoteIsa:]
-[VMUObjectIdentifier uniquifyStringLabel:stringType:]
-[VMUObjectIdentifier labelForNSString:]
-[VMUObjectIdentifier labelForNSCFStringAtRemoteAddress:]
-[VMUObjectIdentifier labelForNSConcreteAttributedString:]
-[VMUObjectIdentifier labelForNSPathStore2:]
-[VMUObjectIdentifier labelForNSNumber:]
-[VMUObjectIdentifier labelForNSDate:]
-[VMUObjectIdentifier labelForItemCount:]
-[VMUObjectIdentifier labelForNSArray:]
-[VMUObjectIdentifier labelForNSDictionary:]
-[VMUObjectIdentifier labelForNSConcreteHashTable:]
-[VMUObjectIdentifier labelForNSSet:]
-[VMUObjectIdentifier labelForMallocBlock:]
-[VMUObjectIdentifier labelForMemory:length:]
-[VMUObjectIdentifier initWithTask:]
-[VMUObjectIdentifier classInfoForObject:]
-[VMUObjectIdentifier classInfoForIsaPointer:]
-[VMUObjectIdentifier classInfoForCFType:]
-[VMUVMRegionIdentifier initWithTask:options:]
___46-[VMUVMRegionIdentifier initWithTask:options:]_block_invoke
-[VMUVMRegionIdentifier initWithTask:]
-[VMUVMRegionIdentifier dealloc]
-[VMUVMRegionIdentifier regions]
-[VMUVMRegionIdentifier descriptionForRange:]
-[VMUVMRegionIdentifier descriptionForRange:options:]
-[VMUVMRegionIdentifier descriptionForMallocZoneTotalsWithOptions:]
___67-[VMUVMRegionIdentifier descriptionForMallocZoneTotalsWithOptions:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[VMUVMRegionIdentifier descriptionForRegionTotalsWithOptions:]
_cumulateLibraries
_VMUidentifyRegionTypeFromUserTag
_findRegionForAddress
___markMallocAreas_block_invoke
_mallocRegionInfoRecorder
___copy_helper_block_338
___destroy_helper_block_339
___markMachOLibraries_block_invoke
___markMachOLibraries_block_invoke_2
___copy_helper_block_360
___destroy_helper_block_361
___copy_helper_block_365
___destroy_helper_block_366
___listAllRegions_block_invoke
___copy_helper_block_385
___destroy_helper_block_386
-[VMUBacktrace _symbolicator]
-[VMUBacktrace initWithSamplingContext:thread:]
-[VMUBacktrace initWithTask:thread:is64Bit:]
-[VMUBacktrace initWithTask:thread:is64Bit:taskMemoryCache:]
-[VMUBacktrace copyWithZone:]
-[VMUBacktrace dealloc]
-[VMUBacktrace description]
-[VMUBacktrace fixupStackWithTask:symbolicator:taskMemoryCache:]
-[VMUBacktrace fixupStackWithSamplingContext:symbolicator:]
-[VMUBacktrace hasSameCallstack:]
-[VMUBacktrace topmostFrame]
-[VMUBacktrace removeTopmostFrame]
-[VMUBacktrace setStartTime:]
-[VMUBacktrace setEndTime:]
-[VMUBacktrace setLengthTime:]
-[VMUBacktrace backtrace]
-[VMUBacktrace backtraceLength]
-[VMUBacktrace thread]
-[VMUBacktrace setThreadState:]
-[VMUBacktrace threadState]
-[VMUBacktrace dispatchQueueSerialNumber]
-[VMUProcInfo init]
-[VMUProcInfo initWithPid:]
-[VMUProcInfo initWithTask:]
-[VMUProcInfo dealloc]
-[VMUProcInfo finalize]
+[VMUProcInfo getProcessIds]
+[VMUProcInfo isProcessRunning:]
+[VMUProcInfo processParentId:]
-[VMUProcInfo startTime]
-[VMUProcInfo procTableName]
-[VMUProcInfo _infoFromCommandLine:]
-[VMUProcInfo realAppName]
-[VMUProcInfo requestedAppName]
-[VMUProcInfo firstArgument]
-[VMUProcInfo arguments]
-[VMUProcInfo envVars]
-[VMUProcInfo valueForEnvVar:]
-[VMUProcInfo userAppName]
-[VMUProcInfo name]
-[VMUProcInfo description]
-[VMUProcInfo pid]
-[VMUProcInfo ppid]
-[VMUProcInfo task]
-[VMUProcInfo update]
-[VMUProcInfo isApp]
-[VMUProcInfo isMachO]
-[VMUProcInfo isCFM]
-[VMUProcInfo cpuType]
-[VMUProcInfo isNative]
-[VMUProcInfo isRunning]
-[VMUProcInfo terminate]
-[VMUProcInfo signal:]
-[VMUProcInfo isEqual:]
-[VMUProcInfo compare:]
-[VMUProcInfo compareByName:]
-[VMUProcInfo compareByUserAppName:]
-[VMUProcInfo hash]
_allPids
-[VMUProcessDescription setCrashReporterInfo]
-[VMUProcessDescription clearCrashReporterInfo]
+[VMUProcessDescription parseBinaryImagesDescription:]
-[VMUProcessDescription initWithPid:orTask:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___44-[VMUProcessDescription initWithPid:orTask:]_block_invoke
___44-[VMUProcessDescription initWithPid:orTask:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_65
___destroy_helper_block_66
-[VMUProcessDescription _extractDyldInfoFromSymbolOwner:withMemory:]
-[VMUProcessDescription _readStringFromMemory:atAddress:]
-[VMUProcessDescription _readDataFromMemory:atAddress:size:]
-[VMUProcessDescription _extractInfoPlistFromSymbolOwner:withMemory:]
___69-[VMUProcessDescription _extractInfoPlistFromSymbolOwner:withMemory:]_block_invoke
___copy_helper_block_107
___destroy_helper_block_108
-[VMUProcessDescription _extractCrashReporterBinaryImageHintsFromSymbolOwner:withMemory:]
___89-[VMUProcessDescription _extractCrashReporterBinaryImageHintsFromSymbolOwner:withMemory:]_block_invoke
___copy_helper_block_112
___destroy_helper_block_113
-[VMUProcessDescription _extractBinaryImageInfoFromSymbolOwner:]
___64-[VMUProcessDescription _extractBinaryImageInfoFromSymbolOwner:]_block_invoke
___copy_helper_block_137
___destroy_helper_block_138
-[VMUProcessDescription date]
-[VMUProcessDescription task]
-[VMUProcessDescription pid]
-[VMUProcessDescription cpuType]
-[VMUProcessDescription processName]
-[VMUProcessDescription processIdentifier]
-[VMUProcessDescription displayName]
-[VMUProcessDescription parentProcessName]
-[VMUProcessDescription processVersionDictionary]
-[VMUProcessDescription _sanitizeVersion:]
-[VMUProcessDescription processVersion]
-[VMUProcessDescription executablePath]
-[VMUProcessDescription bundleIdentifier]
-[VMUProcessDescription isAppleApplication]
-[VMUProcessDescription _bundleLock]
___36-[VMUProcessDescription _bundleLock]_block_invoke
-[VMUProcessDescription binaryImages]
__compareBinaryImageDicts
-[VMUProcessDescription binaryImageDictionaryForAddress:]
-[VMUProcessDescription _cpuTypeDescription]
-[VMUProcessDescription _binaryImagesDescriptionForRanges:]
-[VMUProcessDescription _rangesOfBinaryImages:forBacktraces:]
-[VMUProcessDescription binaryImagesDescriptionForBacktraces:]
-[VMUProcessDescription binaryImagesDescription]
-[VMUProcessDescription _buildVersionDictionary]
-[VMUProcessDescription _buildInfoDescription]
-[VMUProcessDescription _osVersionDictionary]
-[VMUProcessDescription _systemVersionDescription]
-[VMUProcessDescription processDescriptionHeader]
-[VMUProcessDescription dateAndVersionDescription]
-[VMUProcessDescription analysisToolDescription]
-[VMUProcessDescription description]
-[VMUProcessDescription dealloc]
__CRGetOSVersionDictionary
____CRGetOSVersionDictionary_block_invoke
__CRCopyProcessNameForPID
__CRCopyExecutablePathForPID
__CRCopyExecutablePathAndNameForPIDDetectingInconsistencies
__CRIsRunningInRootLaunchdContext
___task_enumerate_malloc_blocks_block_invoke
_task_find_malloc_zone_structure_ranges
___task_find_malloc_zone_structure_ranges_block_invoke
___copy_helper_block_
___destroy_helper_block_
___task_get_malloc_ptrs_by_zone_block_invoke
_nonOverlappingRecorder
_ptrsRecorder
___copy_helper_block_22
___destroy_helper_block_23
_ptrsSearcher
_task_find_all_malloc_regions
_dyldRootPathIfTargetProcessRunningInSimulator
-[VMUCallTreeRoot initWithSymbolicator:sampler:options:]
-[VMUCallTreeRoot allBacktracesHaveBeenAdded]
_freeAndNilMapTable
-[VMUCallTreeRoot dealloc]
-[VMUCallTreeRoot threadDescriptionStringForBacktrace:returnedAddress:]
-[VMUCallTreeRoot descriptionStringForAddress:atTime:leafFrame:startOfRecursion:]
-[VMUCallTreeRoot addBacktrace:count:numBytes:]
-[VMUCallTreeRoot addBacktrace:]
-[VMUCallTreeRoot addChildWithName:address:count:numBytes:toNode:]
-[VMUCallTreeRoot initWithCallGraphFile:fileHeader:topFunctionsList:binaryImagesList:]
-[VMUCallTreeRoot chargeSystemLibrariesToCallersAndKeepBoundaries:]
-[VMUCallTreeLeafNode initWithName:address:count:numBytes:]
-[VMUCallTreeLeafNode init]
-[VMUCallTreeLeafNode dealloc]
-[VMUCallTreeLeafNode addAddress:]
-[VMUCallTreeLeafNode getBrowserName:]
___38-[VMUCallTreeLeafNode getBrowserName:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[VMUClassInfoMap initialize]
+[VMUClassInfoMap infoMap]
-[VMUClassInfoMap init]
-[VMUClassInfoMap dealloc]
__ZL17_enumerateInfoMapPNSt3__113unordered_mapIyPU18objcproto8NSCoding11objc_objectNS_4hashIyEENS_8equal_toIyEENS_9allocatorINS_4pairIKyS2_EEEEEEU13block_pointerFvyP12VMUClassInfoPaE
___26-[VMUClassInfoMap dealloc]_block_invoke
-[VMUClassInfoMap encodeWithCoder:]
___35-[VMUClassInfoMap encodeWithCoder:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[VMUClassInfoMap initWithCoder:]
-[VMUClassInfoMap count]
-[VMUClassInfoMap enumerateWithBlock:]
-[VMUClassInfoMap addClassInfo:forAddress:]
-[VMUClassInfoMap classInfoForAddress:]
-[VMUClassInfoMap addClassInfosFromMap:]
___40-[VMUClassInfoMap addClassInfosFromMap:]_block_invoke
___copy_helper_block_31
___destroy_helper_block_32
__ZNSt3__112__hash_tableINS_17__hash_value_typeIyPU18objcproto8NSCoding11objc_objectEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEERKT_
__ZNSt3__112__hash_tableINS_17__hash_value_typeIyPU18objcproto8NSCoding11objc_objectEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE15__insert_uniqueERKS4_
__ZNSt3__112__hash_tableINS_17__hash_value_typeIyPU18objcproto8NSCoding11objc_objectEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEm
__ZNSt3__112__hash_tableINS_17__hash_value_typeIyPU18objcproto8NSCoding11objc_objectEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEm
__ZNSt3__112__hash_tableINS_17__hash_value_typeIyPU18objcproto8NSCoding11objc_objectEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEED2Ev
_descriptionForTypeEncoding
___Block_byref_object_copy_
___Block_byref_object_dispose_
__parse_type
___descriptionForTypeEncoding_block_invoke
___copy_helper_block_
___destroy_helper_block_
_pointerScanSizeForTypeEncoding
___pointerScanSizeForTypeEncoding_block_invoke
___copy_helper_block_10
___destroy_helper_block_11
-[VMUTraceRecord initWithBacktrace:forTask:]
-[VMUTraceRecord initWithTraceRecord:withDepth:]
-[VMUTraceRecord initWithTraceRecord:]
-[VMUTraceRecord seqnum]
-[VMUTraceRecord threadID]
-[VMUTraceRecord type]
-[VMUTraceRecord address]
-[VMUTraceRecord argument]
-[VMUTraceRecord depth]
-[VMUTraceRecord frames]
-[VMUTraceSymbol initWithPC:withSymbolicator:]
_cleanupLibraryName
-[VMUTraceSymbol initWithCString:length:withLine:]
-[VMUTraceSymbol name]
-[VMUTraceSymbol library]
-[VMUTraceSymbol filename]
-[VMUTraceSymbol lineNumber]
-[VMUTraceSymbol writeToFile:]
-[VMUTraceSymbol readFromFile:]
-[VMUTraceData init]
-[VMUTraceData freeXrefTable:]
-[VMUTraceData dealloc]
-[VMUTraceData finalize]
-[VMUTraceData addEvent:]
-[VMUTraceData buildPCMap:withNumPages:forTask:]
-[VMUTraceData initWithBacktraces:forTask:]
-[VMUTraceData symbolForPC:]
-[VMUTraceData threadIDs]
-[VMUTraceData traceForThread:]
-[VMUTraceData numberForThread:]
-[VMUTraceData maxDepth]
-[VMUTraceData writeToFile:]
-[VMUTraceData readAddressFromFile:has64bitAddresses:needSwap:]
-[VMUTraceData readFromFile:]
-[VMUTraceData addOrIncrementXref:withParent:withChild:withSelector:commutative:]
-[VMUTraceData generateXref:withSelector:commutative:]
-[VMUTraceData functionXref]
-[VMUTraceData libraryXref]
-[VMUTraceData printXrefs:toString:]
_memorySizeString
_pageCountString
_sameString
_VMUVMRegionShareModeName
-[VMUVMRegion init]
-[VMUVMRegion dealloc]
+[VMUVMRegion columnHeadersWithOptions:maximumLength:]
-[VMUVMRegion descriptionWithOptions:maximumLength:]
-[VMUVMRegion description]
-[VMUVMRegion range]
-[VMUVMRegion type]
-[VMUVMRegion path]
-[VMUVMRegion protection]
-[VMUVMRegion maxProtection]
-[VMUVMRegion virtualPageCount]
-[VMUVMRegion residentPageCount]
-[VMUVMRegion dirtyPageCount]
-[VMUVMRegion sharedNowPrivatePageCount]
-[VMUVMRegion swappedOutPageCount]
-[VMUVMRegion purgeablePageCount]
-[VMUVMRegion isSubmap]
-[VMUVMRegion isEqual:]
-[VMUVMRegion hasSameInfoAsRegion:]
-[VMUVMRegion addInfoFromRegion:]
-[VMUVMRegion breakAtLength:]
-[VMUTaskMemoryScanner initWithTask:]
___37-[VMUTaskMemoryScanner initWithTask:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___37-[VMUTaskMemoryScanner initWithTask:]_block_invoke5
___37-[VMUTaskMemoryScanner initWithTask:]_block_invoke_2
___copy_helper_block_7
___destroy_helper_block_8
___copy_helper_block_12
___destroy_helper_block_13
___37-[VMUTaskMemoryScanner initWithTask:]_block_invoke16
___37-[VMUTaskMemoryScanner initWithTask:]_block_invoke_222
___37-[VMUTaskMemoryScanner initWithTask:]_block_invoke_3
___copy_helper_block_28
___destroy_helper_block_29
-[VMUTaskMemoryScanner _suspend]
_task_exists
__didResumeTask
-[VMUTaskMemoryScanner detachFromTask]
-[VMUTaskMemoryScanner dealloc]
-[VMUTaskMemoryScanner _withMemoryReaderBlock:]
___47-[VMUTaskMemoryScanner _withMemoryReaderBlock:]_block_invoke
___copy_helper_block_48
___destroy_helper_block_49
___47-[VMUTaskMemoryScanner _withMemoryReaderBlock:]_block_invoke53
-[VMUTaskMemoryScanner _callRemoteMallocEnumerators:block:]
___59-[VMUTaskMemoryScanner _callRemoteMallocEnumerators:block:]_block_invoke
__withPeekTransformerFunctionForMemoryReader
___59-[VMUTaskMemoryScanner _callRemoteMallocEnumerators:block:]_block_invoke_2
__pointerRecorderBlockContextAdapter
___copy_helper_block_58
___destroy_helper_block_59
___copy_helper_block_63
___destroy_helper_block_64
-[VMUTaskMemoryScanner addRootNodesFromTask]
___44-[VMUTaskMemoryScanner addRootNodesFromTask]_block_invoke
___copy_helper_block_70
___destroy_helper_block_71
-[VMUTaskMemoryScanner _sortBlocks]
___35-[VMUTaskMemoryScanner _sortBlocks]_block_invoke
-[VMUTaskMemoryScanner addMallocNodesFromTask]
___46-[VMUTaskMemoryScanner addMallocNodesFromTask]_block_invoke
___copy_helper_block_81
___destroy_helper_block_82
-[VMUTaskMemoryScanner addMallocNodes:]
-[VMUTaskMemoryScanner _fixupBlockIsas]
___39-[VMUTaskMemoryScanner _fixupBlockIsas]_block_invoke
___copy_helper_block_91
___destroy_helper_block_92
___39-[VMUTaskMemoryScanner _fixupBlockIsas]_block_invoke96
___39-[VMUTaskMemoryScanner _fixupBlockIsas]_block_invoke_2
___39-[VMUTaskMemoryScanner _fixupBlockIsas]_block_invoke_3
___39-[VMUTaskMemoryScanner _fixupBlockIsas]_block_invoke_4
___copy_helper_block_103
___destroy_helper_block_104
___copy_helper_block_110
___destroy_helper_block_111
___copy_helper_block_115
___destroy_helper_block_116
___39-[VMUTaskMemoryScanner _fixupBlockIsas]_block_invoke122
___copy_helper_block_123
___destroy_helper_block_124
-[VMUTaskMemoryScanner _withScanningContext:]
___45-[VMUTaskMemoryScanner _withScanningContext:]_block_invoke
___45-[VMUTaskMemoryScanner _withScanningContext:]_block_invoke_2
___copy_helper_block_128
___destroy_helper_block_129
___copy_helper_block_135
___destroy_helper_block_136
-[VMUTaskMemoryScanner _withOrderedNodeMapper:]
___47-[VMUTaskMemoryScanner _withOrderedNodeMapper:]_block_invoke
___copy_helper_block_142
___destroy_helper_block_143
___47-[VMUTaskMemoryScanner _withOrderedNodeMapper:]_block_invoke147
-[VMUTaskMemoryScanner orderedNodeTraversal:withBlock:]
___55-[VMUTaskMemoryScanner orderedNodeTraversal:withBlock:]_block_invoke
___55-[VMUTaskMemoryScanner orderedNodeTraversal:withBlock:]_block_invoke_2
___copy_helper_block_151
___destroy_helper_block_152
___copy_helper_block_155
___destroy_helper_block_156
-[VMUTaskMemoryScanner _orderedScanWithScanner:recorder:keepMapped:actions:]
___76-[VMUTaskMemoryScanner _orderedScanWithScanner:recorder:keepMapped:actions:]_block_invoke
___76-[VMUTaskMemoryScanner _orderedScanWithScanner:recorder:keepMapped:actions:]_block_invoke_2
___76-[VMUTaskMemoryScanner _orderedScanWithScanner:recorder:keepMapped:actions:]_block_invoke_3
___copy_helper_block_159
___destroy_helper_block_160
___76-[VMUTaskMemoryScanner _orderedScanWithScanner:recorder:keepMapped:actions:]_block_invoke163
___copy_helper_block_164
___destroy_helper_block_165
___76-[VMUTaskMemoryScanner _orderedScanWithScanner:recorder:keepMapped:actions:]_block_invoke168
___copy_helper_block_169
___destroy_helper_block_170
___copy_helper_block_173
___destroy_helper_block_174
___copy_helper_block_178
___destroy_helper_block_179
-[VMUTaskMemoryScanner removeRootReachableNodes]
___48-[VMUTaskMemoryScanner removeRootReachableNodes]_block_invoke
___48-[VMUTaskMemoryScanner removeRootReachableNodes]_block_invoke_2
___copy_helper_block_185
___destroy_helper_block_186
___48-[VMUTaskMemoryScanner removeRootReachableNodes]_block_invoke189
___48-[VMUTaskMemoryScanner removeRootReachableNodes]_block_invoke_2193
___48-[VMUTaskMemoryScanner removeRootReachableNodes]_block_invoke_3
___48-[VMUTaskMemoryScanner removeRootReachableNodes]_block_invoke_4
___copy_helper_block_194
___destroy_helper_block_195
___copy_helper_block_198
___destroy_helper_block_199
___copy_helper_block_202
___destroy_helper_block_203
___48-[VMUTaskMemoryScanner removeRootReachableNodes]_block_invoke206
___copy_helper_block_207
___destroy_helper_block_208
___48-[VMUTaskMemoryScanner removeRootReachableNodes]_block_invoke214
___copy_helper_block_215
___destroy_helper_block_216
___copy_helper_block_219
___destroy_helper_block_220
-[VMUTaskMemoryScanner scanNodesForReferences:]
___47-[VMUTaskMemoryScanner scanNodesForReferences:]_block_invoke
___copy_helper_block_226
___destroy_helper_block_227
___47-[VMUTaskMemoryScanner scanNodesForReferences:]_block_invoke230
___47-[VMUTaskMemoryScanner scanNodesForReferences:]_block_invoke_2
___copy_helper_block_231
___destroy_helper_block_232
___copy_helper_block_235
___destroy_helper_block_236
-[VMUTaskMemoryScanner scanNodesIntoGraph]
___42-[VMUTaskMemoryScanner scanNodesIntoGraph]_block_invoke
___copy_helper_block_242
___destroy_helper_block_243
___42-[VMUTaskMemoryScanner scanNodesIntoGraph]_block_invoke249
___copy_helper_block_252
___destroy_helper_block_253
-[VMUTaskMemoryScanner nodeDetails:]
-[VMUTaskMemoryScanner zoneNameForNode:]
-[VMUTaskMemoryScanner labelForMallocNode:]
-[VMUTaskMemoryScanner contentForNode:]
-[VMUTaskMemoryScanner mallocNodeCount]
-[VMUTaskMemoryScanner enumerateNodesWithBlock:]
-[VMUTaskMemoryScanner setNodeScanningLogger:]
-[VMUTaskMemoryScanner setReferenceScanningLogger:]
-[VMUTaskMemoryScanner nodeDescription:]
-[VMUTaskMemoryScanner nodeDescription:withOffset:]
-[VMUTaskMemoryScanner referenceDescription:withSourceNode:destinationNode:symbolicator:alignmentSpacing:]
-[VMUTaskMemoryScanner maxInteriorOffset]
-[VMUTaskMemoryScanner setMaxInteriorOffset:]
-[VMUTaskMemoryScanner exactScanningEnabled]
-[VMUTaskMemoryScanner setExactScanningEnabled:]
-[VMUTaskMemoryScanner nodeCount]
-[VMUTaskMemoryScanner scanningMask]
-[VMUTaskMemoryScanner setScanningMask:]
__blockApplierFunctionTransformer
____withPeekTransformerFunctionForMemoryReader_block_invoke
____withPeekTransformerFunctionForMemoryReader_block_invoke_2
__task_peek_tranformer_function
___copy_helper_block_427
___destroy_helper_block_428
____unmapRegion_block_invoke
____didResumeTask_block_invoke
____willSuspendTask_block_invoke
__handleSignal
____willSuspendTask_block_invoke_2
____regionForAddress_block_invoke
+[VMUDirectedGraph initialize]
-[VMUDirectedGraph initWithNodes:]
-[VMUDirectedGraph addEdgeFromNode:toNode:]
-[VMUDirectedGraph dealloc]
-[VMUDirectedGraph _adjustAdjacencyMap]
-[VMUDirectedGraph enumerateNodesWithBlock:]
-[VMUDirectedGraph enumerateEdgesWithBlock:]
-[VMUDirectedGraph enumerateEdgesOfNode:withBlock:]
-[VMUDirectedGraph subgraphWithMarkedNodes:edges:]
-[VMUDirectedGraph invertedGraph]
-[VMUDirectedGraph withNodeMarkingMap:]
-[VMUDirectedGraph withEdgeMarkingMap:]
-[VMUDirectedGraph _dfsCore:colors:nodeBlock:edgeBlock:]
-[VMUDirectedGraph _bfsCore:colors:nodeBlock:edgeBlock:]
-[VMUDirectedGraph _searchMainLoop:action:]
___43-[VMUDirectedGraph _searchMainLoop:action:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[VMUDirectedGraph depthFirstSearch:nodeVisitBlock:edgeVisitBlock:]
___67-[VMUDirectedGraph depthFirstSearch:nodeVisitBlock:edgeVisitBlock:]_block_invoke
___copy_helper_block_17
___destroy_helper_block_18
-[VMUDirectedGraph breadthFirstSearch:nodeVisitBlock:edgeVisitBlock:]
___69-[VMUDirectedGraph breadthFirstSearch:nodeVisitBlock:edgeVisitBlock:]_block_invoke
___copy_helper_block_26
___destroy_helper_block_27
-[VMUDirectedGraph _dumpAdjacencyList]
-[VMUDirectedGraph invertEdges]
-[VMUDirectedGraph nodeCount]
-[VMUDirectedGraph edgeCount]
-[VMUDirectedGraph nodeNamespaceSize]
-[VMUDirectedGraph edgeNamespaceSize]
-[VMUObjectGraph initWithNodes:nodeProvider:]
-[VMUObjectGraph dealloc]
-[VMUObjectGraph internalizeNodes]
___34-[VMUObjectGraph internalizeNodes]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[VMUObjectGraph addEdgeFromNode:sourceOffset:withScanType:toNode:destinationOffset:]
-[VMUObjectGraph addEdgeFromNode:toNode:]
-[VMUObjectGraph enumerateObjectsWithBlock:]
___44-[VMUObjectGraph enumerateObjectsWithBlock:]_block_invoke
___copy_helper_block_13
___destroy_helper_block_14
-[VMUObjectGraph enumerateMarkedObjects:withBlock:]
-[VMUObjectGraph enumerateReferencesWithBlock:]
___47-[VMUObjectGraph enumerateReferencesWithBlock:]_block_invoke
___copy_helper_block_17
___destroy_helper_block_18
-[VMUObjectGraph enumerateReferencesOfNode:withBlock:]
___54-[VMUObjectGraph enumerateReferencesOfNode:withBlock:]_block_invoke
___copy_helper_block_24
___destroy_helper_block_25
-[VMUObjectGraph nodeWithName:]
-[VMUObjectGraph referenceInfoWithName:]
-[VMUObjectGraph invertEdges]
+[VMUProcInfo getProcessIds].mib
_SymbolicationVersionString
_SymbolicationVersionNumber
GCC_except_table10
GCC_except_table45
GCC_except_table43
GCC_except_table1
GCC_except_table3
GCC_except_table15
GCC_except_table19
GCC_except_table23
GCC_except_table43
GCC_except_table59
GCC_except_table20
GCC_except_table0
GCC_except_table7
GCC_except_table0
GCC_except_table69
GCC_except_table83
GCC_except_table97
GCC_except_table102
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp295
___block_descriptor_tmp
___block_descriptor_tmp75
___block_descriptor_tmp127
___block_descriptor_tmp145
___block_descriptor_tmp171
___block_descriptor_tmp175
___block_descriptor_tmp
___block_descriptor_tmp77
___block_descriptor_tmp84
___block_descriptor_tmp145
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp159
___block_descriptor_tmp342
___block_descriptor_tmp364
___block_descriptor_tmp368
___block_descriptor_tmp388
___block_descriptor_tmp
___block_descriptor_tmp69
___block_descriptor_tmp110
___block_descriptor_tmp115
___block_descriptor_tmp140
___block_descriptor_tmp205
___block_literal_global
_kCRBinaryInfoDisplayNameKey
_kCRBinaryInfoIdentifierKey
_kCRBinaryInfoExecutablePathKey
_kCRBinaryInfoShortVersionStringKey
_kCRBinaryInfoVersionKey
_kCRBinaryInfoSourceVersionKey
_kCRBinaryInfoIsAppleCodeKey
_kCRBinaryInfoDwarfUUIDKey
_kCRBinaryInfoArchitectureKey
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp11
___block_descriptor_tmp25
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp22
___block_descriptor_tmp34
___block_descriptor_tmp
___block_descriptor_tmp13
-[VMUVMRegion descriptionWithOptions:maximumLength:].protectionString
___block_descriptor_tmp
___block_descriptor_tmp11
___block_descriptor_tmp15
___block_descriptor_tmp19
___block_literal_global
___block_descriptor_tmp24
___block_literal_global25
___block_descriptor_tmp32
___block_descriptor_tmp52
___block_descriptor_tmp56
___block_literal_global57
___block_descriptor_tmp62
___block_descriptor_tmp67
___block_descriptor_tmp74
___block_descriptor_tmp79
___block_literal_global80
___block_descriptor_tmp84
___block_descriptor_tmp95
___block_descriptor_tmp102
___block_descriptor_tmp107
___block_descriptor_tmp114
___block_descriptor_tmp119
___block_descriptor_tmp127
___block_descriptor_tmp132
___block_descriptor_tmp139
___block_descriptor_tmp146
___block_descriptor_tmp149
___block_literal_global150
___block_descriptor_tmp154
___block_descriptor_tmp158
___block_descriptor_tmp162
___block_descriptor_tmp167
___block_descriptor_tmp172
___block_descriptor_tmp177
___block_descriptor_tmp181
___block_descriptor_tmp184
___block_descriptor_tmp188
___block_descriptor_tmp197
___block_descriptor_tmp201
___block_descriptor_tmp205
___block_descriptor_tmp211
___block_descriptor_tmp218
___block_descriptor_tmp223
___block_descriptor_tmp229
___block_descriptor_tmp234
___block_descriptor_tmp238
___block_descriptor_tmp246
___block_descriptor_tmp255
__registerNameForIndex.regNames
___block_descriptor_tmp425
___block_literal_global426
___block_descriptor_tmp430
_vm_prot_strings
___block_descriptor_tmp446
___block_descriptor_tmp448
___block_descriptor_tmp451
___block_literal_global452
___block_descriptor_tmp454
___block_descriptor_tmp457
___block_descriptor_tmp
___block_descriptor_tmp21
___block_descriptor_tmp29
___block_descriptor_tmp
___block_descriptor_tmp16
___block_descriptor_tmp21
___block_descriptor_tmp27
_OBJC_IVAR_$_VMUArchitecture._cpuType
_OBJC_IVAR_$_VMUArchitecture._cpuSubtype
_OBJC_IVAR_$_VMUProcList.procLock
_OBJC_IVAR_$_VMUProcList.allProcs
_OBJC_IVAR_$_VMUProcList.filteredProcs
_OBJC_IVAR_$_VMUProcList.ownedOnly
_OBJC_IVAR_$_VMUProcList.appsOnly
_OBJC_IVAR_$_VMUSampler._pid
_OBJC_IVAR_$_VMUSampler._needTaskPortDealloc
_OBJC_IVAR_$_VMUSampler._task
_OBJC_IVAR_$_VMUSampler._taskIs64Bit
_OBJC_IVAR_$_VMUSampler._memCache
_OBJC_IVAR_$_VMUSampler._processName
_OBJC_IVAR_$_VMUSampler._options
_OBJC_IVAR_$_VMUSampler._processDescription
_OBJC_IVAR_$_VMUSampler._lastThreadBacktraceMap
_OBJC_IVAR_$_VMUSampler._numberOfCopiedBacktraces
_OBJC_IVAR_$_VMUSampler._symbolicator
_OBJC_IVAR_$_VMUSampler._stateLock
_OBJC_IVAR_$_VMUSampler._samples
_OBJC_IVAR_$_VMUSampler._tbRate
_OBJC_IVAR_$_VMUSampler._tbInterval
_OBJC_IVAR_$_VMUSampler._interval
_OBJC_IVAR_$_VMUSampler._previousThreadList
_OBJC_IVAR_$_VMUSampler._samplingContext
_OBJC_IVAR_$_VMUSampler._dispatchThreadSoftLimitCount
_OBJC_IVAR_$_VMUSampler._dispatchThreadHardLimitCount
_OBJC_IVAR_$_VMUSampler._previousThreadCount
_OBJC_IVAR_$_VMUSampler._recordThreadStates
_OBJC_IVAR_$_VMUSampler._dispatchThreadSoftLimit
_OBJC_IVAR_$_VMUSampler._dispatchThreadHardLimit
_OBJC_IVAR_$_VMUSampler._mainThread
_OBJC_IVAR_$_VMUSampler._timeSpentSamplingWithCFI
_OBJC_IVAR_$_VMUSampler._timeSpentSamplingWithoutCFI
_OBJC_IVAR_$_VMUSampler._maxPreviousThreadCount
_OBJC_IVAR_$_VMUSampler._stacksFixed
_OBJC_IVAR_$_VMUSampler._timeLimit
_OBJC_IVAR_$_VMUSampler._numberOfSamples
_OBJC_IVAR_$_VMUSampler._samplingThreadPort
_OBJC_IVAR_$_VMUSampler._sampling
_OBJC_IVAR_$_VMUSampler._sampleLimit
_OBJC_IVAR_$_VMUSampler._delegate
_OBJC_IVAR_$_VMUTaskMemoryCache._stopped
_OBJC_IVAR_$_VMUTaskMemoryCache._taskIs64Bit
_OBJC_IVAR_$_VMUTaskMemoryCache._task
_OBJC_IVAR_$_VMUTaskMemoryCache._shouldTouchPages
_OBJC_IVAR_$_VMUTaskMemoryCache._memoryRegions
_OBJC_IVAR_$_VMUClassInfo._superclassLayout
_OBJC_IVAR_$_VMUClassInfo._reader
_OBJC_IVAR_$_VMUClassInfo._remotePointerSize
_OBJC_IVAR_$_VMUClassInfo._scanMap
_OBJC_IVAR_$_VMUClassInfo._ivarCount
_OBJC_IVAR_$_VMUClassInfo._instanceSize
_OBJC_IVAR_$_VMUClassInfo._superclassOffset
_OBJC_IVAR_$_VMUClassInfo._localIvarList
_OBJC_IVAR_$_VMUClassInfo._ivarScanSizes
_OBJC_IVAR_$_VMUClassInfo._extendedLayout
_OBJC_IVAR_$_VMUClassInfo._strongLayout
_OBJC_IVAR_$_VMUClassInfo._weakLayout
_OBJC_IVAR_$_VMUClassInfo._remoteClassName
_OBJC_IVAR_$_VMUClassInfo._hasSpecificLayout
_OBJC_IVAR_$_VMUClassInfo._remoteType
_OBJC_IVAR_$_VMUClassInfo._remoteBinaryName
_OBJC_IVAR_$_VMUClassInfo._remoteIsa
_OBJC_IVAR_$_VMUClassInfo._rw_flags
_OBJC_IVAR_$_VMUClassInfo._ro_flags
_OBJC_IVAR_$_VMUClassInfo._specificInstance
_OBJC_IVAR_$_VMUObjectLabelHandlerInfo._className
_OBJC_IVAR_$_VMUObjectLabelHandlerInfo._localClass
_OBJC_IVAR_$_VMUObjectLabelHandlerInfo._handlerSelector
_OBJC_IVAR_$_VMUObjectIdentifier._task
_OBJC_IVAR_$_VMUObjectIdentifier._symbolicator
_OBJC_IVAR_$_VMUObjectIdentifier._isaToClassInfo
_OBJC_IVAR_$_VMUObjectIdentifier._cfTypeIDtoClassInfo
_OBJC_IVAR_$_VMUObjectIdentifier._memoryReader
_OBJC_IVAR_$_VMUObjectIdentifier._objcRuntimeMallocBlocksHash
_OBJC_IVAR_$_VMUObjectIdentifier._isaTranslator
_OBJC_IVAR_$_VMUObjectIdentifier._nonPointerIndexMapping
_OBJC_IVAR_$_VMUObjectIdentifier._remoteObjectBuffer
_OBJC_IVAR_$_VMUObjectIdentifier._unrealizedClassInfos
_OBJC_IVAR_$_VMUObjectIdentifier._isaToObjectLabelHandlerMap
_OBJC_IVAR_$_VMUObjectIdentifier._itemCountToLabelStringUniquingMap
_OBJC_IVAR_$_VMUObjectIdentifier._stringToLabelStringUniquingData
_OBJC_IVAR_$_VMUObjectIdentifier._numberToLabelStringUniquingMap
_OBJC_IVAR_$_VMUObjectIdentifier._targetProcessVMranges
_OBJC_IVAR_$_VMUObjectIdentifier._coreFoundationCFTypeIsa
_OBJC_IVAR_$_VMUObjectIdentifier._foundationCFTypeIsa
_OBJC_IVAR_$_VMUObjectIdentifier._remoteObjectBufferSize
_OBJC_IVAR_$_VMUVMRegionIdentifier._regions
_OBJC_IVAR_$_VMUVMRegionIdentifier._mallocZoneStatisticsMap
_OBJC_IVAR_$_VMUProcInfo._pid
_OBJC_IVAR_$_VMUProcInfo._task
_OBJC_IVAR_$_VMUProcInfo._name
_OBJC_IVAR_$_VMUProcInfo._realAppName
_OBJC_IVAR_$_VMUProcInfo._requestedAppName
_OBJC_IVAR_$_VMUProcInfo._procTableName
_OBJC_IVAR_$_VMUProcInfo._arguments
_OBJC_IVAR_$_VMUProcInfo._envVars
_OBJC_IVAR_$_VMUProcInfo._firstArg
_OBJC_IVAR_$_VMUProcInfo._needTaskPortDealloc
_OBJC_IVAR_$_VMUProcInfo._startTime
_OBJC_IVAR_$_VMUProcInfo._ppid
_OBJC_IVAR_$_VMUProcessDescription._processName
_OBJC_IVAR_$_VMUProcessDescription._executablePath
_OBJC_IVAR_$_VMUProcessDescription._parentProcessName
_OBJC_IVAR_$_VMUProcessDescription._parentExecutablePath
_OBJC_IVAR_$_VMUProcessDescription._pid
_OBJC_IVAR_$_VMUProcessDescription._binaryImages
_OBJC_IVAR_$_VMUProcessDescription._ppid
_OBJC_IVAR_$_VMUProcessDescription._date
_OBJC_IVAR_$_VMUProcessDescription._task
_OBJC_IVAR_$_VMUProcessDescription._is64Bit
_OBJC_IVAR_$_VMUProcessDescription._executablePathNeedsCorrection
_OBJC_IVAR_$_VMUProcessDescription._processNameNeedsCorrection
_OBJC_IVAR_$_VMUProcessDescription._cpuType
_OBJC_IVAR_$_VMUProcessDescription._symbolicator
_OBJC_IVAR_$_VMUProcessDescription._lsApplicationInformation
_OBJC_IVAR_$_VMUProcessDescription._itemInfoRecord
_OBJC_IVAR_$_VMUProcessDescription._binaryImageHints
_OBJC_IVAR_$_VMUProcessDescription._executableLoadAddress
_OBJC_IVAR_$_VMUProcessDescription._binaryImagePostProcessingComplete
_OBJC_IVAR_$_VMUProcessDescription._sortedBinaryImages
_OBJC_IVAR_$_VMUProcessDescription._unreadableBinaryImagePaths
_OBJC_IVAR_$_VMUProcessDescription._buildVersionDictionary
_OBJC_IVAR_$_VMUProcessDescription._osVersionDictionary
_OBJC_IVAR_$_VMUCallTreeRoot._symbolicator
_OBJC_IVAR_$_VMUCallTreeRoot._sampler
_OBJC_IVAR_$_VMUCallTreeRoot._options
_OBJC_IVAR_$_VMUCallTreeRoot._uniqueNodeNames
_OBJC_IVAR_$_VMUCallTreeRoot._addressToSymbolNameMap
_OBJC_IVAR_$_VMUCallTreeRoot._addressToLeafSymbolNameMap
_OBJC_IVAR_$_VMUCallTreeRoot._threadPortToNameMap
_OBJC_IVAR_$_VMUCallTreeRoot._dispatchQueueSerialNumToNameMap
_OBJC_IVAR_$_VMUCallTreeRoot._binaryImagesDescription
_OBJC_IVAR_$_VMUCallTreeRoot._binaryImages
_OBJC_IVAR_$_VMUCallTreeLeafNode._addresses
_OBJC_IVAR_$_VMUCallTreeLeafNode._combinedName
_OBJC_IVAR_$_VMUClassInfoMap._cppMap
_OBJC_IVAR_$_VMUTaskMemoryScanner._task
_OBJC_IVAR_$_VMUTaskMemoryScanner._maxInteriorOffset
_OBJC_IVAR_$_VMUTaskMemoryScanner._scanningMask
_OBJC_IVAR_$_VMUTaskMemoryScanner._exactScanningEnabled
_OBJC_IVAR_$_VMUTaskMemoryScanner._classInfos
_OBJC_IVAR_$_VMUTaskMemoryScanner._classInfosCount
_OBJC_IVAR_$_VMUTaskMemoryScanner._regionsSize
_OBJC_IVAR_$_VMUTaskMemoryScanner._regionsCount
_OBJC_IVAR_$_VMUTaskMemoryScanner._regions
_OBJC_IVAR_$_VMUTaskMemoryScanner._threadsCount
_OBJC_IVAR_$_VMUTaskMemoryScanner._threads
_OBJC_IVAR_$_VMUTaskMemoryScanner._regionMap
_OBJC_IVAR_$_VMUTaskMemoryScanner._zonesSize
_OBJC_IVAR_$_VMUTaskMemoryScanner._zonesCount
_OBJC_IVAR_$_VMUTaskMemoryScanner._zones
_OBJC_IVAR_$_VMUTaskMemoryScanner._objectIdentifier
_OBJC_IVAR_$_VMUTaskMemoryScanner._blocks
_OBJC_IVAR_$_VMUTaskMemoryScanner._regionIdentifier
_OBJC_IVAR_$_VMUTaskMemoryScanner._blocksSize
_OBJC_IVAR_$_VMUTaskMemoryScanner._blocksCount
_OBJC_IVAR_$_VMUTaskMemoryScanner._nodeLogger
_OBJC_IVAR_$_VMUTaskMemoryScanner._referenceLogger
_OBJC_IVAR_$_VMUDirectedGraph._nodeCount
_OBJC_IVAR_$_VMUDirectedGraph._nodes
_OBJC_IVAR_$_VMUDirectedGraph._nextNodeName
_OBJC_IVAR_$_VMUDirectedGraph._edgeCount
_OBJC_IVAR_$_VMUDirectedGraph._edgeCapacity
_OBJC_IVAR_$_VMUDirectedGraph._edges
_OBJC_IVAR_$_VMUDirectedGraph._nextEdgeName
_OBJC_IVAR_$_VMUDirectedGraph._needsAdjacencyUpdate
_OBJC_IVAR_$_VMUDirectedGraph._nodeNameMap
_OBJC_IVAR_$_VMUObjectGraph._nodeProvider
_OBJC_IVAR_$_VMUObjectGraph._referenceTable
_OBJC_IVAR_$_VMUObjectGraph._internalizedNodes
_OBJC_IVAR_$_VMUObjectGraph._referenceTableCount
_OBJC_IVAR_$_VMUObjectGraph._referenceTableCapacity
_OBJC_METACLASS_$_VMUCallTreePseudoNode
_OBJC_CLASS_$_VMUCallTreePseudoNode
_OBJC_CLASS_$_VMUTaskMemoryCache
_OBJC_METACLASS_$_VMUTaskMemoryCache
_OBJC_CLASS_$_VMUNonOverlappingRangeArray
_OBJC_METACLASS_$_VMUNonOverlappingRangeArray
_OBJC_CLASS_$_VMUObjectLabelHandlerInfo
_OBJC_METACLASS_$_VMUObjectLabelHandlerInfo
_OBJC_CLASS_$_VMUCallTreeLeafNode
_OBJC_METACLASS_$_VMUCallTreeLeafNode
_kVMURootNodeNameForMallocCallTrees
_kVMUThreadNamePrefix
_kVMUMainThreadName
_kVMUMainThreadDispatchQueueName
_kVMUUnknownSymbolName
_kVMUCallTreeInitialIndentation
_g_environment_flags
_VMUunusedSharedLibTextLabel
_VMUunusedSharedLibDataLabel
_VMUreservedVMaddressSpaceString
_VMUperformanceToolDataLabel
_crashreporterInfoMutex
_supersamplerV10
_supersamplerV11
_symboltableV10
_symboltableV11
_threadV10
_currentArchitecture
_ppc32Architecture
_ppc64Architecture
_x86_32Architecture
_x86_64Architecture
_armArchitecture
_anyArchitecture
_task_to_mapped_memory
_VMUSymbolLookupCallBacks
__ZL10s_nullInfo
__ZL23s_genericBlockByrefInfo
-[VMUObjectIdentifier osMajorMinorVersionString].storedMajorMinorVersionString
-[VMUObjectIdentifier labelForNSDate:].dateFormatter
-[VMUVMRegionIdentifier initWithTask:options:].recordRegionsLock
-[VMUVMRegionIdentifier initWithTask:options:].onceToken
-[VMUBacktrace _symbolicator].previousPid
-[VMUBacktrace _symbolicator].symbolicator
_taskMemoryCacheMap
-[VMUProcessDescription _bundleLock]._bundleLock
-[VMUProcessDescription _bundleLock].onceToken
__CRGetOSVersionDictionary._osVersionDict
__CRGetOSVersionDictionary.onceToken
_remoteZoneIntrospection.analysisProcessLibsystemUUID
_remoteZoneIntrospection.analysisProcessLibsystemAddr
_remoteZoneIntrospection.previouslySeenFrameworks
_getPathWidth.nonPathLength
__withPeekTransformerFunctionForMemoryReader.s_peekingTransformerGuard
__withPeekTransformerFunctionForMemoryReader.s_onceToken
_s_peekBlock
_s_sigHandlerTaskQueue
_s_suspendedTaskPortCount
_s_suspendedTaskPorts
__willSuspendTask.onceToken
_s_oldIntHandler
_s_oldTermHandler
_OBJC_CLASS_$_VMUArchitecture
_OBJC_CLASS_$_VMUBacktrace
_OBJC_CLASS_$_VMUCallTreeNode
_OBJC_CLASS_$_VMUCallTreeRoot
_OBJC_CLASS_$_VMUClassInfo
_OBJC_CLASS_$_VMUClassInfoMap
_OBJC_CLASS_$_VMUDirectedGraph
_OBJC_CLASS_$_VMUObjectGraph
_OBJC_CLASS_$_VMUObjectIdentifier
_OBJC_CLASS_$_VMUProcInfo
_OBJC_CLASS_$_VMUProcList
_OBJC_CLASS_$_VMUProcessDescription
_OBJC_CLASS_$_VMURangeArray
_OBJC_CLASS_$_VMUSampler
_OBJC_CLASS_$_VMUSourceInfo
_OBJC_CLASS_$_VMUSymbol
_OBJC_CLASS_$_VMUSymbolOwnerCache
_OBJC_CLASS_$_VMUSymbolicator
_OBJC_CLASS_$_VMUTaskMemoryScanner
_OBJC_CLASS_$_VMUTraceData
_OBJC_CLASS_$_VMUTraceRecord
_OBJC_CLASS_$_VMUTraceSymbol
_OBJC_CLASS_$_VMUVMRegion
_OBJC_CLASS_$_VMUVMRegionIdentifier
_OBJC_IVAR_$_VMUBacktrace._callstack
_OBJC_IVAR_$_VMUBacktrace._flavor
_OBJC_IVAR_$_VMUCallTreeNode._address
_OBJC_IVAR_$_VMUCallTreeNode._count
_OBJC_IVAR_$_VMUCallTreeNode._name
_OBJC_IVAR_$_VMUCallTreeNode._numBytes
_OBJC_IVAR_$_VMUCallTreeNode._numChildren
_OBJC_IVAR_$_VMUCallTreeNode._parent
_OBJC_IVAR_$_VMUCallTreeNode._un
_OBJC_IVAR_$_VMURangeArray._count
_OBJC_IVAR_$_VMURangeArray._max
_OBJC_IVAR_$_VMURangeArray._ranges
_OBJC_IVAR_$_VMURangeArray._sorted
_OBJC_IVAR_$_VMUSourceInfo._fileName
_OBJC_IVAR_$_VMUSourceInfo._lineNumber
_OBJC_IVAR_$_VMUSourceInfo._path
_OBJC_IVAR_$_VMUSymbol._name
_OBJC_IVAR_$_VMUSymbol._sourceInfo
_OBJC_IVAR_$_VMUSymbolicator._symbolicator
_OBJC_IVAR_$_VMUTraceData.fnXrefs
_OBJC_IVAR_$_VMUTraceData.libXrefs
_OBJC_IVAR_$_VMUTraceData.maxDepth
_OBJC_IVAR_$_VMUTraceData.pcMap
_OBJC_IVAR_$_VMUTraceData.threadCount
_OBJC_IVAR_$_VMUTraceData.threadIDnumbers
_OBJC_IVAR_$_VMUTraceData.threadTraces
_OBJC_IVAR_$_VMUTraceRecord.address
_OBJC_IVAR_$_VMUTraceRecord.argument
_OBJC_IVAR_$_VMUTraceRecord.depth
_OBJC_IVAR_$_VMUTraceRecord.frames
_OBJC_IVAR_$_VMUTraceRecord.seqnum
_OBJC_IVAR_$_VMUTraceRecord.type
_OBJC_IVAR_$_VMUTraceSymbol.address
_OBJC_IVAR_$_VMUTraceSymbol.filename
_OBJC_IVAR_$_VMUTraceSymbol.library
_OBJC_IVAR_$_VMUTraceSymbol.lineNumber
_OBJC_IVAR_$_VMUTraceSymbol.name
_OBJC_IVAR_$_VMUVMRegion.external_pager
_OBJC_IVAR_$_VMUVMRegion.is_submap
_OBJC_IVAR_$_VMUVMRegion.mallocBlockCount
_OBJC_IVAR_$_VMUVMRegion.mallocTypeFlag
_OBJC_IVAR_$_VMUVMRegion.maxProt
_OBJC_IVAR_$_VMUVMRegion.nesting_depth
_OBJC_IVAR_$_VMUVMRegion.object_id
_OBJC_IVAR_$_VMUVMRegion.pages_dirtied
_OBJC_IVAR_$_VMUVMRegion.pages_purgable_empty
_OBJC_IVAR_$_VMUVMRegion.pages_purgable_non_vol
_OBJC_IVAR_$_VMUVMRegion.pages_purgable_vol
_OBJC_IVAR_$_VMUVMRegion.pages_resident
_OBJC_IVAR_$_VMUVMRegion.pages_shared_now_private
_OBJC_IVAR_$_VMUVMRegion.pages_swapped_out
_OBJC_IVAR_$_VMUVMRegion.path
_OBJC_IVAR_$_VMUVMRegion.prot
_OBJC_IVAR_$_VMUVMRegion.purgeable
_OBJC_IVAR_$_VMUVMRegion.range
_OBJC_IVAR_$_VMUVMRegion.recalculate_pages_resident
_OBJC_IVAR_$_VMUVMRegion.ref_count
_OBJC_IVAR_$_VMUVMRegion.share_mode
_OBJC_IVAR_$_VMUVMRegion.summarized
_OBJC_IVAR_$_VMUVMRegion.type
_OBJC_IVAR_$_VMUVMRegion.user_tag
_OBJC_IVAR_$_VMUVMRegion.virtual_pages
_OBJC_METACLASS_$_VMUArchitecture
_OBJC_METACLASS_$_VMUBacktrace
_OBJC_METACLASS_$_VMUCallTreeNode
_OBJC_METACLASS_$_VMUCallTreeRoot
_OBJC_METACLASS_$_VMUClassInfo
_OBJC_METACLASS_$_VMUClassInfoMap
_OBJC_METACLASS_$_VMUDirectedGraph
_OBJC_METACLASS_$_VMUObjectGraph
_OBJC_METACLASS_$_VMUObjectIdentifier
_OBJC_METACLASS_$_VMUProcInfo
_OBJC_METACLASS_$_VMUProcList
_OBJC_METACLASS_$_VMUProcessDescription
_OBJC_METACLASS_$_VMURangeArray
_OBJC_METACLASS_$_VMUSampler
_OBJC_METACLASS_$_VMUSourceInfo
_OBJC_METACLASS_$_VMUSymbol
_OBJC_METACLASS_$_VMUSymbolOwnerCache
_OBJC_METACLASS_$_VMUSymbolicator
_OBJC_METACLASS_$_VMUTaskMemoryScanner
_OBJC_METACLASS_$_VMUTraceData
_OBJC_METACLASS_$_VMUTraceRecord
_OBJC_METACLASS_$_VMUTraceSymbol
_OBJC_METACLASS_$_VMUVMRegion
_OBJC_METACLASS_$_VMUVMRegionIdentifier
_VMUIntersectionRange
_VMUPurgeableDisplayCharacter
_VMURangeContainsRange
_VMURangeIntersectsOrAbutsRange
_VMURangeIntersectsRange
_VMURegionTypeDescriptionForTagShareProtAndPager
_VMUScanTypeKeywordDescription
_VMUScanTypeScanDescription
_VMUUnionRange
_VMUUniquifyString
_VMUunusedSharedLibLabelPrefix
___crashreporter_info__
_pidFromHint
_psName
_task_enumerate_malloc_blocks
_task_find_leaks
_task_foreach_malloc_zone
_task_get_malloc_ptrs
_task_get_malloc_ptrs_by_zone
_task_get_malloc_size
_task_peek
_task_peek_clear_cache
_task_peek_natural_size
_task_start_peeking
_task_stop_peeking
_task_try_peek
_AuthorizationCreate
_CFArrayGetCount
_CFBundleGetIdentifier
_CFBundleGetValueForInfoDictionaryKey
_CFDictionaryApplyFunction
_CFDictionaryCreateMutable
_CFDictionaryGetCount
_CFDictionaryGetValueIfPresent
_CFDictionarySetValue
_CFEqual
_CFLog
_CFNumberGetType
_CFRelease
_CFSetGetCount
_CFStringCreateWithCString
_CFURLCreateWithFileSystemPath
_CFUUIDCreateFromUUIDBytes
_CFUUIDCreateString
_CSIsNull
_CSRegionGetName
_CSRegionGetRange
_CSRelease
_CSRetain
_CSSourceInfoGetFilename
_CSSourceInfoGetLineNumber
_CSSourceInfoGetPath
_CSSymbolGetMangledName
_CSSymbolGetName
_CSSymbolGetRange
_CSSymbolGetSymbolOwner
_CSSymbolOwnerForeachSection
_CSSymbolOwnerForeachSegment
_CSSymbolOwnerForeachSymbolWithMangledName
_CSSymbolOwnerGetBaseAddress
_CSSymbolOwnerGetCFUUIDBytes
_CSSymbolOwnerGetName
_CSSymbolOwnerGetPath
_CSSymbolOwnerGetSectionWithName
_CSSymbolOwnerGetSourceInfoWithAddress
_CSSymbolOwnerGetSymbolWithAddress
_CSSymbolOwnerGetSymbolWithMangledName
_CSSymbolOwnerGetSymbolWithName
_CSSymbolOwnerGetVersion
_CSSymbolOwnerIsAOut
_CSSymbolOwnerIsDyld
_CSSymbolOwnerIsDyldSharedCache
_CSSymbolicatorCreateWithTask
_CSSymbolicatorCreateWithTaskFlagsAndNotification
_CSSymbolicatorForceFullSymbolExtraction
_CSSymbolicatorForeachSymbolOwnerAtTime
_CSSymbolicatorGetFlagsForNListOnlyData
_CSSymbolicatorGetFlagsForNoSymbolOrSourceInfoData
_CSSymbolicatorGetSectionWithAddressAtTime
_CSSymbolicatorGetSourceInfoWithAddressAtTime
_CSSymbolicatorGetSymbolOwnerWithAddressAtTime
_CSSymbolicatorGetSymbolOwnerWithNameAtTime
_CSSymbolicatorGetSymbolWithAddressAtTime
_CSSymbolicatorGetTask
_LSCopyItemInfoForURL
_NSAllMapTableKeys
_NSAllMapTableValues
_NSClassFromString
_NSCountMapTable
_NSCreateHashTable
_NSCreateMapTable
_NSEndMapTableEnumeration
_NSEnumerateMapTable
_NSFreeHashTable
_NSFreeMapTable
_NSHashGet
_NSHashInsert
_NSIntegerHashCallBacks
_NSIntegerMapKeyCallBacks
_NSIntegerMapValueCallBacks
_NSLog
_NSMapGet
_NSMapInsert
_NSMapInsertKnownAbsent
_NSMapRemove
_NSNextMapEnumeratorPair
_NSNonOwnedPointerMapKeyCallBacks
_NSNonOwnedPointerMapValueCallBacks
_NSNonOwnedPointerOrNullMapKeyCallBacks
_NSObjectHashCallBacks
_NSObjectMapKeyCallBacks
_NSObjectMapValueCallBacks
_NSOwnedPointerMapKeyCallBacks
_NSOwnedPointerMapValueCallBacks
_NSPageSize
_NSResetMapTable
_NSSelectorFromString
_NSStringFromClass
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSConditionLock
_OBJC_CLASS_$_NSCountedSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSLock
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSRecursiveLock
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSThread
_OBJC_EHTYPE_$_NSException
_OBJC_METACLASS_$_NSObject
__Block_copy
__Block_object_assign
__Block_object_dispose
__Block_release
__CFBundleCreateWithExecutableURLIfLooksLikeBundle
__CFCopyServerVersionDictionary
__CFCopySystemVersionDictionary
__CFStringGetLength2
__DefaultRuneLocale
__LSASNCreateWithPid
__LSCopyApplicationInformation
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__NSGetExecutablePath
__Unwind_Resume
__ZNSt3__112__next_primeEm
__ZdlPv
__Znwm
___CFConstantStringClassReference
___CFGenericTypeID
___assert_rtn
___bzero
___gxx_personality_v0
___maskrune
___objc_personality_v0
___snprintf_chk
___stack_chk_fail
___stack_chk_guard
___stderrp
__dispatch_source_type_timer
__exit
__kCFSystemVersionBuildVersionKey
__kCFSystemVersionProductNameKey
__kCFSystemVersionProductVersionKey
__kLSBundlePathKey
__kLSDisplayNameKey
__kLSExecutablePathKey
__objc_empty_cache
_bsearch_b
_calloc
_ceilf
_chmod
_clear_mapped_memory
_create_mapped_memory_cache_for_task
_create_sampling_context_for_task
_demangle
_destroy_mapped_memory_cache
_destroy_sampling_context
_dispatch_async
_dispatch_get_global_queue
_dispatch_once
_dispatch_queue_create
_dispatch_queue_name_for_serial_number
_dispatch_release
_dispatch_resume
_dispatch_source_cancel
_dispatch_source_create
_dispatch_source_set_event_handler
_dispatch_source_set_timer
_dispatch_suspend
_dispatch_sync
_dispatch_time
_dlerror
_dlopen
_exit
_fclose
_fdopen
_feof
_fgetln
_fileno
_find_node
_fixup_frames
_floor
_fopen
_fprintf
_fputc
_fread
_free
_fwrite
_get_remote_thread_dispatch_queue
_getc
_getenv
_geteuid
_getpid
_getprogname
_getuid
_host_info
_ivar_getName
_ivar_getOffset
_ivar_getTypeEncoding
_kCFAllocatorDefault
_kCFBundleIdentifierKey
_kCFBundleVersionKey
_kCFTypeDictionaryKeyCallBacks
_kill
_mach_absolute_time
_mach_error
_mach_error_string
_mach_host_self
_mach_port_deallocate
_mach_task_self_
_mach_thread_self
_mach_timebase_info
_mach_vm_deallocate
_mach_vm_purgable_control
_mach_vm_read
_mach_vm_region
_mach_vm_region_recurse
_mach_wait_until
_malloc
_map_new_node
_mapped_memory_read
_mapped_memory_read_pointer
_memchr
_memcmp
_memcpy
_memmove
_mergesort
_mergesort_b
_mkstemps
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_begin_catch
_objc_constructInstance
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_exception_throw
_objc_getClass
_objc_memmove_collectable
_objc_msgSend
_objc_msgSendSuper2
_objc_msgSend_stret
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_perror
_pid_for_task
_printf
_proc_name
_proc_pidinfo
_proc_pidpath
_proc_regionfilename
_putchar
_realloc
_rewind
_sample_remote_thread_with_dispatch_queue
_sampling_context_clear_cache
_sel_getName
_signal
_sscanf
_strchr
_strcmp
_strlen
_strncmp
_strncpy
_strrchr
_strstr
_sysctl
_sysctlbyname
_sysctlnametomib
_system
_task_for_pid
_task_info
_task_is_64bit
_task_resume
_task_suspend
_task_threads
_thread_get_state
_thread_info
_thread_name_for_thread_port
_thread_policy_set
_ungetc
_usleep
_vm_deallocate
_vm_kernel_page_mask
_vm_kernel_page_size
_vm_map_page_query
_vm_page_shift
_vm_page_size
_vproc_swap_string
_write
dyld_stub_binder
