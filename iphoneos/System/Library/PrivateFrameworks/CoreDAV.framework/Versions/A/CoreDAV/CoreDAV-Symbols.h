-[CardDAVGetAccountPropertiesTaskGroup dealloc]
-[CardDAVGetAccountPropertiesTaskGroup description]
-[CardDAVGetAccountPropertiesTaskGroup _copyAccountPropertiesPropFindElements]
-[CardDAVGetAccountPropertiesTaskGroup homeSet]
-[CardDAVGetAccountPropertiesTaskGroup _setPropertiesFromParsedResponses:]
-[CardDAVGetAccountPropertiesTaskGroup directoryGatewayURL]
-[CardDAVGetAccountPropertiesTaskGroup addressBookHomes]
-[CardDAVGetAccountPropertiesTaskGroup directoryGatewayURLs]
-[CardDAVFolderInfoTaskGroup initWithAccountInfoProvider:containerURLs:directoryGatewayURLs:taskManager:]
-[CardDAVFolderInfoTaskGroup dealloc]
-[CardDAVFolderInfoTaskGroup containerInfoDepthForURL:]
-[CardDAVFolderInfoTaskGroup _copyContainerWithURL:andProperties:]
-[CardDAVFolderInfoTaskGroup _copyContainerParserMappings]
-[CoreDAVAction dealloc]
-[CoreDAVAction initWithAction:context:]
-[CoreDAVAction description]
-[CoreDAVAction action]
-[CoreDAVAction context]
-[CoreDAVAction changeContext]
-[CoreDAVAction setChangeContext:]
-[CoreDAVOrderedAction initWithAction:context:absoluteOrder:]
-[CoreDAVOrderedAction dealloc]
-[CoreDAVOrderedAction description]
-[CoreDAVOrderedAction absoluteOrder]
-[CoreDAVOrderedAction priorURL]
-[CoreDAVOrderedAction setPriorURL:]
+[CoreDAVContainer copyPropertyMappingsForParser]
-[CoreDAVContainer initWithURL:andProperties:]
-[CoreDAVContainer description]
-[CoreDAVContainer applyParsedProperties:]
-[CoreDAVContainer supportedReports]
-[CoreDAVContainer resourceTypeAsStringSet]
-[CoreDAVContainer isPrincipal]
-[CoreDAVContainer privilegesAsStringSet]
-[CoreDAVContainer _anyPrivilegesMatches:]
-[CoreDAVContainer hasReadPrivileges]
___37-[CoreDAVContainer hasReadPrivileges]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVContainer hasWriteContentPrivileges]
___45-[CoreDAVContainer hasWriteContentPrivileges]_block_invoke
___copy_helper_block_165
___destroy_helper_block_166
-[CoreDAVContainer hasWritePropertiesPrivileges]
___48-[CoreDAVContainer hasWritePropertiesPrivileges]_block_invoke
___copy_helper_block_169
___destroy_helper_block_170
-[CoreDAVContainer hasBindPrivileges]
___37-[CoreDAVContainer hasBindPrivileges]_block_invoke
___copy_helper_block_173
___destroy_helper_block_174
-[CoreDAVContainer hasUnbindPrivileges]
___39-[CoreDAVContainer hasUnbindPrivileges]_block_invoke
___copy_helper_block_177
___destroy_helper_block_178
-[CoreDAVContainer supportedReportsAsStringSet]
-[CoreDAVContainer supportsPrincipalPropertySearchReport]
-[CoreDAVContainer supportsSyncCollectionReport]
-[CoreDAVContainer dealloc]
+[CoreDAVContainer convertPushTransportsForNSServerNotificationCenter:]
-[CoreDAVContainer url]
-[CoreDAVContainer setUrl:]
-[CoreDAVContainer isUnauthenticated]
-[CoreDAVContainer setIsUnauthenticated:]
-[CoreDAVContainer containerTitle]
-[CoreDAVContainer setContainerTitle:]
-[CoreDAVContainer privileges]
-[CoreDAVContainer setPrivileges:]
-[CoreDAVContainer pushKey]
-[CoreDAVContainer setPushKey:]
-[CoreDAVContainer pushTransports]
-[CoreDAVContainer setPushTransports:]
-[CoreDAVContainer resourceID]
-[CoreDAVContainer setResourceID:]
-[CoreDAVContainer quotaAvailable]
-[CoreDAVContainer setQuotaAvailable:]
-[CoreDAVContainer quotaUsed]
-[CoreDAVContainer setQuotaUsed:]
-[CoreDAVContainer supportedReportSetItem]
-[CoreDAVContainer setSupportedReportSetItem:]
-[CoreDAVContainer resourceType]
-[CoreDAVContainer setResourceType:]
-[CoreDAVContainer owner]
-[CoreDAVContainer setOwner:]
-[CoreDAVContainer addMemberURL]
-[CoreDAVContainer setAddMemberURL:]
-[CoreDAVContainer bulkRequests]
-[CoreDAVContainer setBulkRequests:]
-[CoreDAVContainer syncToken]
-[CoreDAVContainer setSyncToken:]
+[CardDAVAddressBookContainer copyPropertyMappingsForParser]
-[CardDAVAddressBookContainer description]
-[CardDAVAddressBookContainer applyParsedProperties:]
-[CardDAVAddressBookContainer isAddressBook]
-[CardDAVAddressBookContainer isSearchAddressBook]
-[CardDAVAddressBookContainer isSharedAddressBook]
-[CardDAVAddressBookContainer dealloc]
-[CardDAVAddressBookContainer maxResourceSize]
-[CardDAVAddressBookContainer setMaxResourceSize:]
-[CardDAVAddressBookContainer maxImageSize]
-[CardDAVAddressBookContainer setMaxImageSize:]
-[CardDAVAddressBookContainer meCardURL]
-[CardDAVAddressBookContainer setMeCardURL:]
-[CoreDAVContainerInfoTaskGroup initWithAccountInfoProvider:containerURLs:taskManager:]
-[CoreDAVContainerInfoTaskGroup dealloc]
-[CoreDAVContainerInfoTaskGroup description]
-[CoreDAVContainerInfoTaskGroup startTaskGroup]
-[CoreDAVContainerInfoTaskGroup taskGroupWillCancelWithError:]
-[CoreDAVContainerInfoTaskGroup containerInfoDepthForURL:]
-[CoreDAVContainerInfoTaskGroup _getContainerHomeSet]
-[CoreDAVContainerInfoTaskGroup _getContainerTopLevelInfo]
-[CoreDAVContainerInfoTaskGroup propFindTask:parsedResponses:error:]
___68-[CoreDAVContainerInfoTaskGroup propFindTask:parsedResponses:error:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVContainerInfoTaskGroup _copyContainerWithURL:andProperties:]
-[CoreDAVContainerInfoTaskGroup _copyContainerParserMappings]
-[CoreDAVContainerInfoTaskGroup containerInfoDepth]
-[CoreDAVContainerInfoTaskGroup setContainerInfoDepth:]
-[CoreDAVContainerInfoTaskGroup containerURLs]
-[CoreDAVContainerMultiGetTask initWithURLs:atContainerURL:appSpecificDataItemClass:]
-[CoreDAVContainerMultiGetTask copyAdditionalPropElements]
-[CoreDAVContainerMultiGetTask setAdditionalProperties:onDataItem:]
-[CoreDAVContainerMultiGetTask dealloc]
-[CoreDAVContainerMultiGetTask httpMethod]
-[CoreDAVContainerMultiGetTask requestBody]
-[CoreDAVContainerMultiGetTask copyDefaultParserForContentType:]
-[CoreDAVContainerMultiGetTask finishCoreDAVTaskWithError:]
-[CoreDAVContainerMultiGetTask additionalPropElements]
-[CoreDAVContainerMultiGetTask setAdditionalPropElements:]
-[CoreDAVContainerMultiGetTask shouldIgnoreResponseErrors]
-[CoreDAVContainerMultiGetTask setShouldIgnoreResponseErrors:]
-[CoreDAVContainerMultiGetTask parsedContents]
-[CoreDAVContainerMultiGetTask missingURLs]
-[CoreDAVContainerMultiGetTask deletedURLs]
-[CardDAVFolderMultiGetTask initWithURLs:atContainerURL:appSpecificDataItemClass:]
-[CoreDAVFolderContentsMultiGetTask initWithURLs:atContainerURL:appSpecificDataItemClass:]
-[CoreDAVFolderContentsMultiGetTask copyAdditionalPropElements]
-[CoreDAVFolderContentsMultiGetTask setAdditionalProperties:onDataItem:]
+[CoreDAVContainerQueryTask _copySearchTermsFromSearchString:]
-[CoreDAVContainerQueryTask initWithSearchTerms:searchLimit:atURL:appSpecificDataItemClass:]
-[CoreDAVContainerQueryTask initWithSearchString:searchLimit:atURL:appSpecificDataItemClass:]
-[CoreDAVContainerQueryTask _initWithSearchTerms:searchLimit:atURL:appSpecificDataItemClass:]
-[CoreDAVContainerQueryTask dealloc]
-[CoreDAVContainerQueryTask httpMethod]
-[CoreDAVContainerQueryTask addFiltersToXMLData:]
-[CoreDAVContainerQueryTask requestBody]
-[CoreDAVContainerQueryTask copyDefaultParserForContentType:]
-[CoreDAVContainerQueryTask finishCoreDAVTaskWithError:]
-[CardDAVFolderQueryTask initWithSearchTerms:searchLimit:atURL:appSpecificDataItemClass:]
-[CardDAVFolderQueryTask addFiltersToXMLData:]
-[CoreDAVContainerSyncTaskGroup initWithFolderURL:previousCTag:previousSyncToken:actions:syncItemOrder:context:accountInfoProvider:taskManager:]
-[CoreDAVContainerSyncTaskGroup dealloc]
-[CoreDAVContainerSyncTaskGroup description]
-[CoreDAVContainerSyncTaskGroup copyGetTaskWithURL:]
-[CoreDAVContainerSyncTaskGroup copyMultiGetTaskWithURLs:]
-[CoreDAVContainerSyncTaskGroup dataContentType]
-[CoreDAVContainerSyncTaskGroup bulkChangeTaskClass]
-[CoreDAVContainerSyncTaskGroup copyAdditionalResourcePropertiesToFetch]
-[CoreDAVContainerSyncTaskGroup shouldFetchResourceWithEtag:propertiesToValues:]
-[CoreDAVContainerSyncTaskGroup receivedPropertiesToValues:forURL:]
-[CoreDAVContainerSyncTaskGroup taskGroupWillCancelWithError:]
-[CoreDAVContainerSyncTaskGroup _tearDownAllUnsubmittedTasks]
-[CoreDAVContainerSyncTaskGroup bailWithError:]
-[CoreDAVContainerSyncTaskGroup cancelTaskGroup]
-[CoreDAVContainerSyncTaskGroup _submitTasks]
-[CoreDAVContainerSyncTaskGroup _getCTag]
___41-[CoreDAVContainerSyncTaskGroup _getCTag]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVContainerSyncTaskGroup copyPutTaskWithPayloadItem:forAction:]
-[CoreDAVContainerSyncTaskGroup copyPostTaskWithPayloadItem:forAction:]
-[CoreDAVContainerSyncTaskGroup _pushActions]
-[CoreDAVContainerSyncTaskGroup _sendNextBatch]
-[CoreDAVContainerSyncTaskGroup _bulkChange]
-[CoreDAVContainerSyncTaskGroup copyGetEtagTaskWithPropertiesToFind:]
-[CoreDAVContainerSyncTaskGroup _getETags]
-[CoreDAVContainerSyncTaskGroup _getOrder]
-[CoreDAVContainerSyncTaskGroup _configureMultiGet:]
___52-[CoreDAVContainerSyncTaskGroup _configureMultiGet:]_block_invoke
___copy_helper_block_221
___destroy_helper_block_222
-[CoreDAVContainerSyncTaskGroup shouldDownloadResource:localETag:serverETag:]
-[CoreDAVContainerSyncTaskGroup deleteResourceURLs:]
-[CoreDAVContainerSyncTaskGroup _getDataPayloads]
___49-[CoreDAVContainerSyncTaskGroup _getDataPayloads]_block_invoke
___copy_helper_block_245
___destroy_helper_block_246
-[CoreDAVContainerSyncTaskGroup startTaskGroup]
-[CoreDAVContainerSyncTaskGroup syncAway]
-[CoreDAVContainerSyncTaskGroup isWhitelistedError:]
-[CoreDAVContainerSyncTaskGroup applyAdditionalPropertiesFromPutTask:]
-[CoreDAVContainerSyncTaskGroup putTask:completedWithNewETag:error:]
-[CoreDAVContainerSyncTaskGroup applyAdditionalPropertiesFromPostTask:]
-[CoreDAVContainerSyncTaskGroup _postTask:didFinishWithError:]
-[CoreDAVContainerSyncTaskGroup _syncReportTask:didFinishWithError:]
-[CoreDAVContainerSyncTaskGroup _bulkChangeTask:didFinishWithError:]
-[CoreDAVContainerSyncTaskGroup task:didFinishWithError:]
-[CoreDAVContainerSyncTaskGroup deleteTask:completedWithError:]
-[CoreDAVContainerSyncTaskGroup shouldFetchMoreETags]
-[CoreDAVContainerSyncTaskGroup propFindTask:parsedResponses:error:]
___68-[CoreDAVContainerSyncTaskGroup propFindTask:parsedResponses:error:]_block_invoke
___copy_helper_block_358
___destroy_helper_block_359
___68-[CoreDAVContainerSyncTaskGroup propFindTask:parsedResponses:error:]_block_invoke366
___copy_helper_block_367
___destroy_helper_block_368
-[CoreDAVContainerSyncTaskGroup getTask:data:error:]
-[CoreDAVContainerSyncTaskGroup _getTask:finishedWithParsedContents:deletedItems:error:]
___88-[CoreDAVContainerSyncTaskGroup _getTask:finishedWithParsedContents:deletedItems:error:]_block_invoke
___copy_helper_block_397
___destroy_helper_block_398
-[CoreDAVContainerSyncTaskGroup addMemberURL]
-[CoreDAVContainerSyncTaskGroup setAddMemberURL:]
-[CoreDAVContainerSyncTaskGroup multiGetBatchSize]
-[CoreDAVContainerSyncTaskGroup setMultiGetBatchSize:]
-[CoreDAVContainerSyncTaskGroup maxIndependentTasks]
-[CoreDAVContainerSyncTaskGroup setMaxIndependentTasks:]
-[CoreDAVContainerSyncTaskGroup useMultiGet]
-[CoreDAVContainerSyncTaskGroup setUseMultiGet:]
-[CoreDAVContainerSyncTaskGroup folderURL]
-[CoreDAVContainerSyncTaskGroup previousCTag]
-[CoreDAVContainerSyncTaskGroup setPreviousCTag:]
-[CoreDAVContainerSyncTaskGroup nextCTag]
-[CoreDAVContainerSyncTaskGroup setNextCTag:]
-[CoreDAVContainerSyncTaskGroup ensureUpdatedCTag]
-[CoreDAVContainerSyncTaskGroup setEnsureUpdatedCTag:]
-[CoreDAVContainerSyncTaskGroup previousSyncToken]
-[CoreDAVContainerSyncTaskGroup setPreviousSyncToken:]
-[CoreDAVContainerSyncTaskGroup useSyncCollection]
-[CoreDAVContainerSyncTaskGroup setUseSyncCollection:]
-[CoreDAVContainerSyncTaskGroup localItemURLOrder]
-[CoreDAVContainerSyncTaskGroup bulkRequests]
-[CoreDAVContainerSyncTaskGroup setBulkRequests:]
-[CoreDAVContainerSyncTaskGroup bulkChangeCheckCTag]
-[CoreDAVContainerSyncTaskGroup setBulkChangeCheckCTag:]
-[CoreDAVContainerSyncTaskGroup actionsOnly]
-[CoreDAVContainerSyncTaskGroup setActionsOnly:]
-[CardDAVFolderSyncTaskGroup initWithFolderURL:previousCTag:previousSyncToken:actions:syncItemOrder:context:accountInfoProvider:taskManager:appSpecificDataItemClass:]
-[CardDAVFolderSyncTaskGroup initWithFolderURL:previousCTag:previousSyncToken:actions:context:accountInfoProvider:taskManager:appSpecificDataItemClass:]
-[CardDAVFolderSyncTaskGroup copyMultiGetTaskWithURLs:]
-[CardDAVFolderSyncTaskGroup copyGetTaskWithURL:]
-[CardDAVFolderSyncTaskGroup dataContentType]
-[CardDAVFolderSyncTaskGroup bulkChangeTaskClass]
-[CardDAVFolderSyncTaskGroup isInitialSync]
-[CardDAVFolderSyncTaskGroup setIsInitialSync:]
-[CoreDAVDeleteTask dealloc]
-[CoreDAVDeleteTask description]
-[CoreDAVDeleteTask httpMethod]
-[CoreDAVDeleteTask additionalHeaderValues]
-[CoreDAVDeleteTask requestBody]
-[CoreDAVDeleteTask finishCoreDAVTaskWithError:]
-[CoreDAVDeleteTask previousETag]
-[CoreDAVDeleteTask setPreviousETag:]
+[NSArray(CoreDAVExtensions) _arrayWithIntArg:additionalArgs:]
+[NSArray(CoreDAVExtensions) cdvArrayWithIntegers:]
-[CoreDAVDiscoveryAccountInfo initWithAccountInfoProvider:]
-[CoreDAVDiscoveryAccountInfo dealloc]
-[CoreDAVDiscoveryAccountInfo description]
-[CoreDAVDiscoveryAccountInfo url]
-[CoreDAVDiscoveryAccountInfo promptUserForNewCoreDAVPasswordWithCompletionBlock:]
-[CoreDAVDiscoveryAccountInfo additionalHeaderValues]
-[CoreDAVDiscoveryAccountInfo clientTokenRequestedByServer]
-[CoreDAVDiscoveryAccountInfo clientToken]
-[CoreDAVDiscoveryAccountInfo oauthInfoProvider]
-[CoreDAVDiscoveryAccountInfo handleTrustChallenge:]
-[CoreDAVDiscoveryAccountInfo handleTrustChallenge:withConnection:]
-[CoreDAVDiscoveryAccountInfo handleCertificateError:]
-[CoreDAVDiscoveryAccountInfo shouldTurnModalOnBadPassword]
-[CoreDAVDiscoveryAccountInfo shouldRetryUnauthorizedConnection:]
-[CoreDAVDiscoveryAccountInfo handleAuthenticateAgainstProtectionSpace:]
-[CoreDAVDiscoveryAccountInfo handleAuthenticateAgainstProtectionSpace:withConnection:]
-[CoreDAVDiscoveryAccountInfo handleShouldUseCredentialStorage]
-[CoreDAVDiscoveryAccountInfo shouldHandleHTTPCookiesForURL:]
-[CoreDAVDiscoveryAccountInfo shouldSendClientInfoHeaderForURL:]
-[CoreDAVDiscoveryAccountInfo copyStorageSession]
-[CoreDAVDiscoveryAccountInfo shouldUseOpportunisticSockets]
-[CoreDAVDiscoveryAccountInfo scheme]
-[CoreDAVDiscoveryAccountInfo setScheme:]
-[CoreDAVDiscoveryAccountInfo host]
-[CoreDAVDiscoveryAccountInfo setHost:]
-[CoreDAVDiscoveryAccountInfo port]
-[CoreDAVDiscoveryAccountInfo setPort:]
-[CoreDAVDiscoveryAccountInfo serverRoot]
-[CoreDAVDiscoveryAccountInfo setServerRoot:]
-[CoreDAVDiscoveryAccountInfo user]
-[CoreDAVDiscoveryAccountInfo setUser:]
-[CoreDAVDiscoveryAccountInfo password]
-[CoreDAVDiscoveryAccountInfo setPassword:]
-[CoreDAVDiscoveryAccountInfo identityPersist]
-[CoreDAVDiscoveryAccountInfo setIdentityPersist:]
-[CoreDAVDiscoveryAccountInfo principalURL]
-[CoreDAVDiscoveryAccountInfo setPrincipalURL:]
-[CoreDAVDiscoveryAccountInfo accountID]
-[CoreDAVDiscoveryAccountInfo setAccountID:]
-[CoreDAVDiscoveryAccountInfo shouldFailAllTasks]
-[CoreDAVDiscoveryAccountInfo setShouldFailAllTasks:]
-[CoreDAVDiscoveryAccountInfo backingAccountInfoProvider]
-[CoreDAVDiscoveryAccountInfo setBackingAccountInfoProvider:]
-[CoreDAVDiscoveryAccountInfo started]
-[CoreDAVDiscoveryAccountInfo setStarted:]
-[CoreDAVDiscoveryAccountInfo success]
-[CoreDAVDiscoveryAccountInfo setSuccess:]
-[CoreDAVDiscoveryAccountInfo error]
-[CoreDAVDiscoveryAccountInfo setError:]
-[CoreDAVDiscoveryAccountInfo serverHeaders]
-[CoreDAVDiscoveryAccountInfo setServerHeaders:]
-[CoreDAVDiscoveryAccountInfo serverComplianceClasses]
-[CoreDAVDiscoveryAccountInfo setServerComplianceClasses:]
-[CoreDAVDiscoveryAccountInfo userAgentHeader]
-[CoreDAVDiscoveryAccountInfo setUserAgentHeader:]
-[CoreDAVDiscoveryTaskGroup initWithAccountInfoProvider:taskManager:httpPorts:httpsPorts:httpServiceString:httpsServiceString:wellKnownPath:potentialContextPaths:requiredComplianceClass:]
-[CoreDAVDiscoveryTaskGroup initWithAccountInfoProvider:taskManager:httpPorts:httpsPorts:httpServiceString:httpsServiceString:wellKnownPaths:requiredComplianceClass:]
-[CoreDAVDiscoveryTaskGroup initWithAccountInfoProvider:taskManager:]
-[CoreDAVDiscoveryTaskGroup dealloc]
-[CoreDAVDiscoveryTaskGroup taskGroupWillCancelWithError:]
___58-[CoreDAVDiscoveryTaskGroup taskGroupWillCancelWithError:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVDiscoveryTaskGroup cancelTaskGroup]
-[CoreDAVDiscoveryTaskGroup startTaskGroup]
___43-[CoreDAVDiscoveryTaskGroup startTaskGroup]_block_invoke
___copy_helper_block_358
___destroy_helper_block_359
___43-[CoreDAVDiscoveryTaskGroup startTaskGroup]_block_invoke368
___copy_helper_block_369
___destroy_helper_block_370
-[CoreDAVDiscoveryTaskGroup syncAway]
-[CoreDAVDiscoveryTaskGroup setupDiscoveries:withSchemes:]
-[CoreDAVDiscoveryTaskGroup allDiscoveryPorts:withScheme:]
-[CoreDAVDiscoveryTaskGroup allDiscoveryPaths:]
-[CoreDAVDiscoveryTaskGroup startSRVLookup:serviceString:]
-[CoreDAVDiscoveryTaskGroup startWellKnownLocationTask:withURL:]
___64-[CoreDAVDiscoveryTaskGroup startWellKnownLocationTask:withURL:]_block_invoke
___copy_helper_block_426
___destroy_helper_block_427
-[CoreDAVDiscoveryTaskGroup startWellKnownFallbackHeadTask:withURL:]
___68-[CoreDAVDiscoveryTaskGroup startWellKnownFallbackHeadTask:withURL:]_block_invoke
___copy_helper_block_452
___destroy_helper_block_453
-[CoreDAVDiscoveryTaskGroup startOptionsTask:]
-[CoreDAVDiscoveryTaskGroup startPropfindTask:]
___47-[CoreDAVDiscoveryTaskGroup startPropfindTask:]_block_invoke
___copy_helper_block_457
___destroy_helper_block_458
-[CoreDAVDiscoveryTaskGroup task:didFinishWithError:]
-[CoreDAVDiscoveryTaskGroup srvLookupTask:error:]
-[CoreDAVDiscoveryTaskGroup completeOptionsTask:error:]
-[CoreDAVDiscoveryTaskGroup optionsTask:error:]
-[CoreDAVDiscoveryTaskGroup propFindTaskFinished:]
-[CoreDAVDiscoveryTaskGroup completeDiscovery:error:]
___53-[CoreDAVDiscoveryTaskGroup completeDiscovery:error:]_block_invoke
___copy_helper_block_529
___destroy_helper_block_530
___53-[CoreDAVDiscoveryTaskGroup completeDiscovery:error:]_block_invoke535
___copy_helper_block_536
___destroy_helper_block_537
___53-[CoreDAVDiscoveryTaskGroup completeDiscovery:error:]_block_invoke542
___copy_helper_block_543
___destroy_helper_block_544
___53-[CoreDAVDiscoveryTaskGroup completeDiscovery:error:]_block_invoke552
___copy_helper_block_559
___destroy_helper_block_560
___53-[CoreDAVDiscoveryTaskGroup completeDiscovery:error:]_block_invoke567
___copy_helper_block_568
___destroy_helper_block_569
___53-[CoreDAVDiscoveryTaskGroup completeDiscovery:error:]_block_invoke578
___copy_helper_block_579
___destroy_helper_block_580
___53-[CoreDAVDiscoveryTaskGroup completeDiscovery:error:]_block_invoke585
___copy_helper_block_586
___destroy_helper_block_587
-[CoreDAVDiscoveryTaskGroup noteDefinitiveAuthFailureFromTask:]
-[CoreDAVDiscoveryTaskGroup propFindProperties]
-[CoreDAVDiscoveryTaskGroup extractPrincipalURLFromPropFindTask:error:]
-[CoreDAVDiscoveryTaskGroup cleanedStringsFromResponseHeaders:forHeader:]
-[CoreDAVDiscoveryTaskGroup addToDiscoveryArray:discovery:]
-[CoreDAVDiscoveryTaskGroup getDiscoveryStatus:priorFailed:subsequentFailed:priorIncomplete:subsequentIncomplete:priorSuccess:subsequentSuccess:]
-[CoreDAVDiscoveryTaskGroup didReceiveAuthenticationError]
-[CoreDAVDiscoveryTaskGroup setDidReceiveAuthenticationError:]
-[CoreDAVDiscoveryTaskGroup shouldBailEarly]
-[CoreDAVDiscoveryTaskGroup setShouldBailEarly:]
-[CoreDAVDiscoveryTaskGroup discoveredAccountInfo]
-[CoreDAVDiscoveryTaskGroup setDiscoveredAccountInfo:]
-[CoreDAVDiscoveryTaskGroup wellKnownPath]
-[CoreDAVDiscoveryTaskGroup setWellKnownPath:]
-[CoreDAVDiscoveryTaskGroup potentialContextPaths]
-[CoreDAVDiscoveryTaskGroup setPotentialContextPaths:]
-[CoreDAVErrorItem init]
-[CoreDAVErrorItem dealloc]
-[CoreDAVErrorItem description]
+[CoreDAVErrorItem copyParseRules]
-[CoreDAVErrorItem numberOfMatchesWithinLimits]
-[CoreDAVErrorItem setNumberOfMatchesWithinLimits:]
-[CoreDAVErrorItem validSyncToken]
-[CoreDAVErrorItem setValidSyncToken:]
-[CoreDAVErrorItem noUIDConflict]
-[CoreDAVErrorItem setNoUIDConflict:]
-[CoreDAVErrorItem validAddressData]
-[CoreDAVErrorItem setValidAddressData:]
-[CoreDAVErrorItem maxResourceSize]
-[CoreDAVErrorItem setMaxResourceSize:]
-[CoreDAVErrorItem uid]
-[CoreDAVErrorItem setUid:]
-[CoreDAVErrorItem ctagOkay]
-[CoreDAVErrorItem setCtagOkay:]
-[CoreDAVErrorItem maxImageSize]
-[CoreDAVErrorItem setMaxImageSize:]
-[CoreDAVErrorItem invalidImageType]
-[CoreDAVErrorItem setInvalidImageType:]
-[CoreDAVErrorItem imageError]
-[CoreDAVErrorItem setImageError:]
-[CoreDAVErrorItem maxAttendees]
-[CoreDAVErrorItem setMaxAttendees:]
-[CoreDAVErrorItem quotaExceeded]
-[CoreDAVErrorItem setQuotaExceeded:]
-[CoreDAVErrorItem maxResources]
-[CoreDAVErrorItem setMaxResources:]
-[CoreDAVErrorItem validTimezone]
-[CoreDAVErrorItem setValidTimezone:]
-[CoreDAVErrorItem status]
-[CoreDAVErrorItem setStatus:]
-[CoreDAVGetAccountPropertiesTaskGroup initWithAccountInfoProvider:taskManager:]
-[CoreDAVGetAccountPropertiesTaskGroup dealloc]
-[CoreDAVGetAccountPropertiesTaskGroup description]
-[CoreDAVGetAccountPropertiesTaskGroup taskGroupWillCancelWithError:]
-[CoreDAVGetAccountPropertiesTaskGroup _copyAccountPropertiesPropFindElements]
-[CoreDAVGetAccountPropertiesTaskGroup homeSet]
-[CoreDAVGetAccountPropertiesTaskGroup startTaskGroup]
-[CoreDAVGetAccountPropertiesTaskGroup _setPropertiesFromParsedResponses:]
-[CoreDAVGetAccountPropertiesTaskGroup _taskCompleted:withError:]
___65-[CoreDAVGetAccountPropertiesTaskGroup _taskCompleted:withError:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVGetAccountPropertiesTaskGroup forceOptionsRequest]
-[CoreDAVGetAccountPropertiesTaskGroup propFindTask:parsedResponses:error:]
-[CoreDAVGetAccountPropertiesTaskGroup coaxServerForPrincipalHeaders]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___69-[CoreDAVGetAccountPropertiesTaskGroup coaxServerForPrincipalHeaders]_block_invoke
___copy_helper_block_158
___destroy_helper_block_159
-[CoreDAVGetAccountPropertiesTaskGroup processPrincipalHeaders:]
-[CoreDAVGetAccountPropertiesTaskGroup searchPropertySetTask:completetWithPropertySearchSet:error:]
-[CoreDAVGetAccountPropertiesTaskGroup task:didFinishWithError:]
-[CoreDAVGetAccountPropertiesTaskGroup principalURL]
-[CoreDAVGetAccountPropertiesTaskGroup displayName]
-[CoreDAVGetAccountPropertiesTaskGroup resourceID]
-[CoreDAVGetAccountPropertiesTaskGroup emailAddresses]
-[CoreDAVGetAccountPropertiesTaskGroup collections]
-[CoreDAVGetAccountPropertiesTaskGroup isExpandPropertyReportSupported]
-[CoreDAVGetAccountPropertiesTaskGroup fetchPrincipalSearchProperties]
-[CoreDAVGetAccountPropertiesTaskGroup setFetchPrincipalSearchProperties:]
-[CoreDAVGetAccountPropertiesTaskGroup principalSearchProperties]
-[CoreDAVGetAccountPropertiesTaskGroup shouldIgnoreHomeSetOnDifferentHost]
-[CoreDAVGetAccountPropertiesTaskGroup setShouldIgnoreHomeSetOnDifferentHost:]
-[CoreDAVLeafDataPayload initWithURL:eTag:dataPayload:inContainerWithURL:withAccountInfoProvider:]
-[CoreDAVLeafDataPayload dealloc]
-[CoreDAVLeafDataPayload serverID]
-[CoreDAVLeafDataPayload setServerID:]
-[CoreDAVLeafDataPayload dataPayload]
-[CoreDAVLeafDataPayload syncKey]
+[CoreDAVLogging sharedLogging]
-[CoreDAVLogging init]
-[CoreDAVLogging dealloc]
-[CoreDAVLogging addLogDelegate:forAccountInfoProvider:]
___56-[CoreDAVLogging addLogDelegate:forAccountInfoProvider:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVLogging removeLogDelegate:forAccountInfoProvider:]
___59-[CoreDAVLogging removeLogDelegate:forAccountInfoProvider:]_block_invoke
___copy_helper_block_8
___destroy_helper_block_9
-[CoreDAVLogging _delegatesToLogForProvider:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___45-[CoreDAVLogging _delegatesToLogForProvider:]_block_invoke
___copy_helper_block_15
___destroy_helper_block_16
-[CoreDAVLogging shouldLogAtLevel:forAccountInfoProvider:]
-[CoreDAVLogging _shouldOutputAtLevel:forAccountInfoProvider:]
-[CoreDAVLogging delegatesToLogTransmittedDataForAccountInfoProvider:]
___70-[CoreDAVLogging delegatesToLogTransmittedDataForAccountInfoProvider:]_block_invoke
___copy_helper_block_27
___destroy_helper_block_28
-[CoreDAVLogging logDiagnosticForProvider:withLevel:format:args:]
-[CoreDAVOptionsTask httpMethod]
-[CoreDAVOptionsTask requestBody]
-[CoreDAVOptionsTask finishCoreDAVTaskWithError:]
-[CoreDAVPostOrPutTask initWithURL:]
-[CoreDAVPostOrPutTask initWithDataPayload:dataContentType:atURL:previousETag:]
-[CoreDAVPostOrPutTask dealloc]
-[CoreDAVPostOrPutTask description]
-[CoreDAVPostOrPutTask additionalHeaderValues]
-[CoreDAVPostOrPutTask requestBody]
-[CoreDAVPostOrPutTask setAbsoluteOrder:]
-[CoreDAVPostOrPutTask setPriorOrderedURL:]
-[CoreDAVPostOrPutTask forceToServer]
-[CoreDAVPostOrPutTask setForceToServer:]
-[CoreDAVPostOrPutTask previousETag]
-[CoreDAVPostOrPutTask setPreviousETag:]
-[CoreDAVPostOrPutTask requestDataContentType]
-[CoreDAVPostOrPutTask setRequestDataContentType:]
-[CoreDAVPostOrPutTask requestDataPayload]
-[CoreDAVPostOrPutTask setRequestDataPayload:]
-[CoreDAVPostOrPutTask absoluteOrder]
-[CoreDAVPostOrPutTask priorOrderedURL]
-[CoreDAVPutTask dealloc]
-[CoreDAVPutTask description]
-[CoreDAVPutTask httpMethod]
-[CoreDAVPutTask finishCoreDAVTaskWithError:]
-[CoreDAVPutTask nextETag]
-[CoreDAVPutTask setNextETag:]
-[CoreDAVPutStreamTask requestBodyStream]
-[CoreDAVPutStreamTask requestBody]
-[CoreDAVPostTask initWithDataPayload:dataContentType:atURL:previousETag:]
-[CoreDAVPostTask httpMethod]
-[CoreDAVPostTask finishCoreDAVTaskWithError:]
-[CoreDAVPropFindTask initWithPropertiesToFind:atURL:withDepth:]
-[CoreDAVPropFindTask httpMethod]
-[CoreDAVPropFindTask requestBody]
-[CoreDAVPropFindTask finishCoreDAVTaskWithError:]
-[CoreDAVResponseItem init]
-[CoreDAVResponseItem dealloc]
-[CoreDAVResponseItem description]
+[CoreDAVResponseItem copyParseRules]
-[CoreDAVResponseItem addPropStat:]
-[CoreDAVResponseItem addHref:]
-[CoreDAVResponseItem firstHref]
-[CoreDAVResponseItem successfulPropertiesToValues]
-[CoreDAVResponseItem hasPropertyError]
-[CoreDAVResponseItem setErrorItem:]
-[CoreDAVResponseItem hrefs]
-[CoreDAVResponseItem setHrefs:]
-[CoreDAVResponseItem status]
-[CoreDAVResponseItem setStatus:]
-[CoreDAVResponseItem propStats]
-[CoreDAVResponseItem setPropStats:]
-[CoreDAVResponseItem errorItem]
-[CoreDAVResponseItem responseDescription]
-[CoreDAVResponseItem setResponseDescription:]
-[CoreDAVResponseItem location]
-[CoreDAVResponseItem setLocation:]
-[CoreDAVResponseItem serverUID]
-[CoreDAVResponseItem setServerUID:]
-[CoreDAVResponseItem matchResults]
-[CoreDAVResponseItem setMatchResults:]
-[CoreDAVSRVLookupTask initWithServiceString:]
-[CoreDAVSRVLookupTask dealloc]
-[CoreDAVSRVLookupTask description]
-[CoreDAVSRVLookupTask performCoreDAVTask]
-[CoreDAVSRVLookupTask finishCoreDAVTaskWithError:]
-[CoreDAVSRVLookupTask serviceString]
-[CoreDAVSRVLookupTask setServiceString:]
-[CoreDAVSRVLookupTask fetchedRecords]
-[CoreDAVSRVLookupTask setFetchedRecords:]
-[CoreDAVSRVLookupTask host]
-[CoreDAVSRVLookupTask setHost:]
-[CoreDAVSRVResourceRecord dealloc]
-[CoreDAVSRVResourceRecord description]
-[CoreDAVSRVResourceRecord serviceString]
-[CoreDAVSRVResourceRecord setServiceString:]
-[CoreDAVSRVResourceRecord priority]
-[CoreDAVSRVResourceRecord setPriority:]
-[CoreDAVSRVResourceRecord weight]
-[CoreDAVSRVResourceRecord setWeight:]
-[CoreDAVSRVResourceRecord port]
-[CoreDAVSRVResourceRecord setPort:]
-[CoreDAVSRVResourceRecord target]
-[CoreDAVSRVResourceRecord setTarget:]
___CoreDAVSRVLookupTask_SRVHostClientCallback_block_invoke
+[CoreDAVTask uniqueQueryID]
-[CoreDAVTask initWithURL:]
-[CoreDAVTask dealloc]
-[CoreDAVTask description]
-[CoreDAVTask httpMethod]
-[CoreDAVTask _includeGeneralHeaders]
-[CoreDAVTask requestBodyStream]
-[CoreDAVTask requestBody]
-[CoreDAVTask copyDefaultParserForContentType:]
-[CoreDAVTask shouldLogResponseBody]
-[CoreDAVTask loadRequest:]
___27-[CoreDAVTask loadRequest:]_block_invoke
-[CoreDAVTask tearDownResources]
-[CoreDAVTask _compressBodyData:]
-[CoreDAVTask _createBodyData]
-[CoreDAVTask _failImmediately]
-[CoreDAVTask additionalHeaderValues]
-[CoreDAVTask overrideRequestHeader:withValue:]
-[CoreDAVTask cachePolicy]
+[CoreDAVTask stringFromDepth:]
-[CoreDAVTask performCoreDAVTask]
___33-[CoreDAVTask performCoreDAVTask]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___33-[CoreDAVTask performCoreDAVTask]_block_invoke272
___copy_helper_block_273
___destroy_helper_block_274
-[CoreDAVTask validate:]
-[CoreDAVTask _sendTimeSpentInNetworkingToProvider]
-[CoreDAVTask finishCoreDAVTaskWithError:]
-[CoreDAVTask isFinished]
-[CoreDAVTask markAsFinished]
-[CoreDAVTask credentialForOAuthChallenge:]
-[CoreDAVTask _applyAuthenticationChain:toRequest:]
-[CoreDAVTask _applyStorageSession:toRequest:]
-[CoreDAVTask _handleBadPasswordResponse]
___41-[CoreDAVTask _handleBadPasswordResponse]_block_invoke
___copy_helper_block_388
___destroy_helper_block_389
-[CoreDAVTask connection:didSendBodyData:totalBytesWritten:totalBytesExpectedToWrite:]
-[CoreDAVTask connection:didReceiveData:]
-[CoreDAVTask _shouldHandleStatusCode:]
-[CoreDAVTask connection:needNewBodyStream:]
-[CoreDAVTask lastRedirectURL]
-[CoreDAVTask connection:willSendRequest:redirectResponse:]
-[CoreDAVTask connection:canAuthenticateAgainstProtectionSpace:]
-[CoreDAVTask connectionShouldUseCredentialStorage:]
-[CoreDAVTask connection:didReceiveAuthenticationChallenge:]
-[CoreDAVTask connection:willSendRequestForAuthenticationChallenge:]
-[CoreDAVTask handleWebLoginRequestWithCompletionBlock:]
-[CoreDAVTask connectionDidFinishLoading:]
-[CoreDAVTask connection:didReceiveResponse:]
-[CoreDAVTask connection:didFailWithError:]
-[CoreDAVTask responseHeaders]
-[CoreDAVTask startModal]
-[CoreDAVTask finishEarlyWithError:]
-[CoreDAVTask submitWithTaskManager:]
-[CoreDAVTask reset]
-[CoreDAVTask numDownloadedElements]
-[CoreDAVTask reportStatusWithError:]
-[CoreDAVTask _connectionForLogging]
-[CoreDAVTask _requestForLogging]
-[CoreDAVTask taskManager]
-[CoreDAVTask setTaskManager:]
-[CoreDAVTask accountInfoProvider]
-[CoreDAVTask setAccountInfoProvider:]
-[CoreDAVTask delegate]
-[CoreDAVTask setDelegate:]
-[CoreDAVTask context]
-[CoreDAVTask setContext:]
-[CoreDAVTask url]
-[CoreDAVTask depth]
-[CoreDAVTask setDepth:]
-[CoreDAVTask timeoutInterval]
-[CoreDAVTask setTimeoutInterval:]
-[CoreDAVTask responseBodyParser]
-[CoreDAVTask setResponseBodyParser:]
-[CoreDAVTask responseStatusCode]
-[CoreDAVTask setResponseStatusCode:]
-[CoreDAVTask requestProgressBlock]
-[CoreDAVTask setRequestProgressBlock:]
-[CoreDAVTask responseProgressBlock]
-[CoreDAVTask setResponseProgressBlock:]
-[CoreDAVTask completionBlock]
-[CoreDAVTask setCompletionBlock:]
-[CoreDAVTask error]
-[CoreDAVTask setError:]
-[CoreDAVTask totalBytesReceived]
-[CoreDAVTask setTotalBytesReceived:]
-[CoreDAVTask allowAutomaticRedirects]
-[CoreDAVTask setAllowAutomaticRedirects:]
-[CoreDAVTask requestProperties]
-[CoreDAVTask setRequestProperties:]
-[CoreDAVTaskGroup initWithAccountInfoProvider:taskManager:]
-[CoreDAVTaskGroup dealloc]
-[CoreDAVTaskGroup startTaskGroup]
-[CoreDAVTaskGroup syncAway]
-[CoreDAVTaskGroup taskGroupWillCancelWithError:]
-[CoreDAVTaskGroup _tearDownAllTasks]
-[CoreDAVTaskGroup bailWithError:]
-[CoreDAVTaskGroup cancelTaskGroup]
-[CoreDAVTaskGroup finishCoreDAVTaskGroupWithError:delegateCallbackBlock:]
-[CoreDAVTaskGroup finishCoreDAVTaskGroupWithError:]
-[CoreDAVTaskGroup finishEarlyWithError:]
-[CoreDAVTaskGroup submitWithTaskManager:]
-[CoreDAVTaskGroup accountInfoProvider]
-[CoreDAVTaskGroup setAccountInfoProvider:]
-[CoreDAVTaskGroup completionBlock]
-[CoreDAVTaskGroup setCompletionBlock:]
-[CoreDAVTaskGroup delegate]
-[CoreDAVTaskGroup setDelegate:]
-[CoreDAVTaskGroup error]
-[CoreDAVTaskGroup setError:]
-[CoreDAVTaskGroup outstandingTasks]
-[CoreDAVTaskGroup progressBlock]
-[CoreDAVTaskGroup setProgressBlock:]
-[CoreDAVTaskGroup taskManager]
-[CoreDAVTaskGroup setTaskManager:]
-[CoreDAVTaskGroup timeoutInterval]
-[CoreDAVTaskGroup setTimeoutInterval:]
-[CoreDAVTaskGroup context]
-[CoreDAVTaskGroup setContext:]
-[NSMutableSet(CoreDAVExtensions) CDVAddItemParserMappingWithNameSpace:name:parseClass:]
-[NSDictionary(CoreDAVExtensions) CDVObjectForKeyCaseInsensitive:]
___66-[NSDictionary(CoreDAVExtensions) CDVObjectForKeyCaseInsensitive:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[NSDictionary(CoreDAVExtensions) CDVObjectForKeyWithNameSpace:andName:]
-[NSDictionary(CoreDAVExtensions) CDVMergeOverrideDictionary:]
-[NSMutableDictionary(CoreDAVExtensions) CDVAddObjectsAndKeys:]
-[NSString(CoreDAVExtensions) initWithCDVNameSpace:andName:]
+[NSString(CoreDAVExtensions) CDVStringWithNameSpace:andName:]
-[NSString(CoreDAVExtensions) CDVStringByAddingPercentEscapesForHREF]
-[NSString(CoreDAVExtensions) CDVStringByRemovingPercentEscapesForHREF]
-[NSString(CoreDAVExtensions) CDVStringByAppendingSlashIfNeeded]
-[NSString(CoreDAVExtensions) CDVStringByRemovingTerminatingSlashIfNeeded]
+[NSString(CoreDAVExtensions) CDVStringWithNumberOfSpaces:]
-[NSString(CoreDAVExtensions) CDVIsHTTPStatusLineWithStatusCode:]
-[NSString(CoreDAVExtensions) CDVStringByAddingPercentEscapesForUserOrPassword]
-[NSString(CoreDAVExtensions) CDVStringByXMLQuoting]
-[NSString(CoreDAVExtensions) CDVStringByXMLUnquoting]
+[NSString(CoreDAVExtensions) CDVPreconditionHeaderValueWithCTag:pathTag:]
+[NSString(CoreDAVExtensions) CDVPreconditionHeaderValueWithCTag:]
+[NSURL(CoreDAVExtensions) CDVURLWithScheme:user:password:host:port:path:]
+[NSURL(CoreDAVExtensions) CDVURLWithScheme:host:port:path:]
-[NSURL(CoreDAVExtensions) CDVURLWithScheme:userandpass:host:port:path:parameters:encodePercents:]
-[NSURL(CoreDAVExtensions) initWithCDVScheme:user:password:host:port:path:parameterString:query:fragment:]
+[NSURL(CoreDAVExtensions) CDVDefaultPortForScheme:]
-[NSURL(CoreDAVExtensions) CDVURLWithUser:]
-[NSURL(CoreDAVExtensions) CDVURLWithPassword:]
-[NSURL(CoreDAVExtensions) CDVURLWithPath:]
-[NSURL(CoreDAVExtensions) CDVPassword]
-[NSURL(CoreDAVExtensions) CDVRawPath]
-[NSURL(CoreDAVExtensions) CDVRawLastPathComponent]
-[NSURL(CoreDAVExtensions) CDVRawLastPathComponentPreservingEscapes]
-[NSURL(CoreDAVExtensions) CDVURLByDeletingLastPathComponent]
-[NSURL(CoreDAVExtensions) CDVServerURL]
-[NSURL(CoreDAVExtensions) CDVServerURLWithPath:]
-[NSURL(CoreDAVExtensions) CDVIsEqualToURL:]
-[NSURL(CoreDAVExtensions) CDVFileSystemSafePath]
-[NSURL(CoreDAVExtensions) CDVfixedURLByAppendingPathComponent:]
-[NSURL(CoreDAVExtensions) CDVIsSafeRedirectForRequestURL:]
___CDVAppleClientInfoString_block_invoke
___initializeLibXMLParser_block_invoke
___CDVRelativeOrderHeaderString_block_invoke
-[CoreDAVRequestLogger initWithProvider:]
-[CoreDAVRequestLogger dealloc]
-[CoreDAVRequestLogger _inflateRequestBody:]
-[CoreDAVRequestLogger logCoreDAVRequest:withTaskIdentifier:]
-[CoreDAVRequestLogger logCoreDAVResponseHeaders:andStatusCode:withTaskIdentifier:]
-[CoreDAVRequestLogger logCoreDAVResponseSnippet:]
-[CoreDAVRequestLogger logCoreDAVResponseSnippet:withTaskIdentifier:]
-[CoreDAVRequestLogger logCoreDAVResponseSnippet:withTaskIdentifier:isBody:]
-[CoreDAVRequestLogger finishCoreDAVResponse]
-[CoreDAVRequestLogger headerSortDescriptors]
-[CoreDAVRequestLogger setHeaderSortDescriptors:]
____logFormater_block_invoke
-[CoreDAVXMLData init]
-[CoreDAVXMLData dealloc]
-[CoreDAVXMLData _prefixForNameSpace:]
___38-[CoreDAVXMLData _prefixForNameSpace:]_block_invoke
___38-[CoreDAVXMLData _prefixForNameSpace:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___38-[CoreDAVXMLData _prefixForNameSpace:]_block_invoke8
___copy_helper_block_9
___destroy_helper_block_10
-[CoreDAVXMLData _startElement:inNamespace:]
-[CoreDAVXMLData _startElement:inNamespace:withAttributeNamesAndValues:attributes:]
-[CoreDAVXMLData startElement:inNamespace:withAttributeNamesAndValues:]
-[CoreDAVXMLData startElement:inNamespace:withAttributes:]
___58-[CoreDAVXMLData startElement:inNamespace:withAttributes:]_block_invoke
___copy_helper_block_36
___destroy_helper_block_37
-[CoreDAVXMLData endElement:inNamespace:]
-[CoreDAVXMLData appendElement:inNamespace:withStringContent:withAttributeNamesAndValues:]
-[CoreDAVXMLData appendElement:inNamespace:withStringContentAsCDATA:withAttributeNamesAndValues:]
___97-[CoreDAVXMLData appendElement:inNamespace:withStringContentAsCDATA:withAttributeNamesAndValues:]_block_invoke
-[CoreDAVXMLData data]
+[CoreDAVXMLData string:isEqualToXmlCharString:]
-[CoreDAVXMLData shouldAddFormattingSpaces]
-[CoreDAVXMLData setShouldAddFormattingSpaces:]
-[CoreDAVMkcolTask initWithURL:]
-[CoreDAVMkcolTask initWithPropertiesToSet:atURL:]
-[CoreDAVMkcolTask dealloc]
-[CoreDAVMkcolTask description]
-[CoreDAVMkcolTask httpMethod]
-[CoreDAVMkcolTask additionalHeaderValues]
-[CoreDAVMkcolTask requestBody]
-[CoreDAVMkcolTask copyDefaultParserForContentType:]
-[CoreDAVMkcolTask finishCoreDAVTaskWithError:]
-[CoreDAVMkcolTask setAbsoluteOrder:]
-[CoreDAVMkcolTask setPriorOrderedURL:]
-[CoreDAVMkcolTask propertiesToSet]
-[CoreDAVMkcolTask setPropertiesToSet:]
-[CoreDAVMkcolTask absoluteOrder]
-[CoreDAVMkcolTask priorOrderedURL]
-[CoreDAVCopyOrMoveTask initWithURL:]
-[CoreDAVCopyOrMoveTask initWithSourceURL:destinationURL:]
-[CoreDAVCopyOrMoveTask initWithSourceURL:destinationURL:andOverwrite:]
-[CoreDAVCopyOrMoveTask dealloc]
-[CoreDAVCopyOrMoveTask description]
-[CoreDAVCopyOrMoveTask requestBody]
-[CoreDAVCopyOrMoveTask additionalHeaderValues]
-[CoreDAVCopyOrMoveTask finishCoreDAVTaskWithError:]
-[CoreDAVCopyOrMoveTask _callBackToDelegateWithResponses:error:]
+[CoreDAVCopyOrMoveTask stringFromOverwriteValue:]
-[CoreDAVCopyOrMoveTask overwrite]
-[CoreDAVCopyOrMoveTask setOverwrite:]
-[CoreDAVCopyOrMoveTask destinationURL]
-[CoreDAVCopyOrMoveTask setDestinationURL:]
-[CoreDAVCopyTask httpMethod]
-[CoreDAVCopyTask dealloc]
-[CoreDAVCopyTask validate:]
-[CoreDAVCopyTask _callBackToDelegateWithResponses:error:]
-[CoreDAVMoveTask dealloc]
-[CoreDAVMoveTask description]
-[CoreDAVMoveTask httpMethod]
-[CoreDAVMoveTask additionalHeaderValues]
-[CoreDAVMoveTask _callBackToDelegateWithResponses:error:]
-[CoreDAVMoveTask previousETag]
-[CoreDAVMoveTask setPreviousETag:]
-[CoreDAVPropPatchTask initWithURL:]
-[CoreDAVPropPatchTask initWithPropertiesToSet:andRemove:atURL:]
-[CoreDAVPropPatchTask dealloc]
-[CoreDAVPropPatchTask description]
-[CoreDAVPropPatchTask httpMethod]
-[CoreDAVPropPatchTask additionalHeaderValues]
-[CoreDAVPropPatchTask requestBody]
-[CoreDAVPropPatchTask copyDefaultParserForContentType:]
-[CoreDAVPropPatchTask finishCoreDAVTaskWithError:]
-[CoreDAVPropPatchTask setAbsoluteOrder:]
-[CoreDAVPropPatchTask setPriorOrderedURL:]
-[CoreDAVPropPatchTask propPatchRemoveElements]
-[CoreDAVPropPatchTask setPropPatchRemoveElements:]
-[CoreDAVPropPatchTask propPatchSetElements]
-[CoreDAVPropPatchTask setPropPatchSetElements:]
-[CoreDAVPropPatchTask responseItem]
-[CoreDAVPropPatchTask setResponseItem:]
-[CoreDAVPropPatchTask absoluteOrder]
-[CoreDAVPropPatchTask priorOrderedURL]
-[CoreDAVPrincipalSearchPropertySetTask initWithURL:]
-[CoreDAVPrincipalSearchPropertySetTask httpMethod]
-[CoreDAVPrincipalSearchPropertySetTask requestBody]
-[CoreDAVPrincipalSearchPropertySetTask copyDefaultParserForContentType:]
-[CoreDAVPrincipalSearchPropertySetTask finishCoreDAVTaskWithError:]
-[CoreDAVACLItem init]
-[CoreDAVACLItem dealloc]
-[CoreDAVACLItem description]
+[CoreDAVACLItem copyParseRules]
-[CoreDAVACLItem addACE:]
-[CoreDAVACLItem notGrantedSubsetOfACEs:]
___41-[CoreDAVACLItem notGrantedSubsetOfACEs:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVACLItem liveACEs]
___26-[CoreDAVACLItem liveACEs]_block_invoke
-[CoreDAVACLItem accessControlEntities]
-[CoreDAVACLItem setAccessControlEntities:]
-[CoreDAVACEItem init]
-[CoreDAVACEItem initWithPrincipal:shouldInvert:action:withPrivileges:]
-[CoreDAVACEItem dealloc]
-[CoreDAVACEItem description]
-[CoreDAVACEItem write:]
+[CoreDAVACEItem copyParseRules]
+[CoreDAVACEItem privilegeItemWithNameSpace:andName:]
-[CoreDAVACEItem principal]
-[CoreDAVACEItem setPrincipal:]
-[CoreDAVACEItem invert]
-[CoreDAVACEItem setInvert:]
-[CoreDAVACEItem grant]
-[CoreDAVACEItem setGrant:]
-[CoreDAVACEItem deny]
-[CoreDAVACEItem setDeny:]
-[CoreDAVACEItem protectedItem]
-[CoreDAVACEItem setProtectedItem:]
-[CoreDAVACEItem inherited]
-[CoreDAVACEItem setInherited:]
-[CoreDAVInvertItem init]
-[CoreDAVInvertItem dealloc]
-[CoreDAVInvertItem write:]
-[CoreDAVInvertItem description]
+[CoreDAVInvertItem copyParseRules]
-[CoreDAVInvertItem principal]
-[CoreDAVInvertItem setPrincipal:]
-[CoreDAVPrincipalItem init]
-[CoreDAVPrincipalItem initTypeIsAll]
-[CoreDAVPrincipalItem initTypeIsHREFWithURL:]
-[CoreDAVPrincipalItem initTypeIsProperty:]
-[CoreDAVPrincipalItem initTypeIsAuthenticated]
-[CoreDAVPrincipalItem initTypeIsUnauthenticated]
-[CoreDAVPrincipalItem initTypeIsSelf]
-[CoreDAVPrincipalItem dealloc]
-[CoreDAVPrincipalItem description]
-[CoreDAVPrincipalItem write:]
+[CoreDAVPrincipalItem copyParseRules]
-[CoreDAVPrincipalItem hashString]
-[CoreDAVPrincipalItem href]
-[CoreDAVPrincipalItem setHref:]
-[CoreDAVPrincipalItem all]
-[CoreDAVPrincipalItem setAll:]
-[CoreDAVPrincipalItem authenticated]
-[CoreDAVPrincipalItem setAuthenticated:]
-[CoreDAVPrincipalItem unauthenticated]
-[CoreDAVPrincipalItem setUnauthenticated:]
-[CoreDAVPrincipalItem property]
-[CoreDAVPrincipalItem setProperty:]
-[CoreDAVPrincipalItem selfItem]
-[CoreDAVPrincipalItem setSelfItem:]
-[CoreDAVGrantItem init]
-[CoreDAVGrantItem dealloc]
-[CoreDAVGrantItem description]
-[CoreDAVGrantItem write:]
+[CoreDAVGrantItem copyParseRules]
-[CoreDAVGrantItem addPrivilege:]
-[CoreDAVGrantItem privileges]
-[CoreDAVGrantItem setPrivileges:]
-[CoreDAVDenyItem init]
-[CoreDAVDenyItem dealloc]
-[CoreDAVDenyItem description]
-[CoreDAVDenyItem write:]
+[CoreDAVDenyItem copyParseRules]
-[CoreDAVDenyItem addPrivilege:]
-[CoreDAVDenyItem privileges]
-[CoreDAVDenyItem setPrivileges:]
-[CoreDAVACLTask initWithURL:]
-[CoreDAVACLTask initWithAccessControlEntities:atURL:]
-[CoreDAVACLTask dealloc]
-[CoreDAVACLTask description]
-[CoreDAVACLTask httpMethod]
-[CoreDAVACLTask requestBody]
-[CoreDAVACLTask finishCoreDAVTaskWithError:]
-[CoreDAVACLTask accessControlEntities]
-[CoreDAVACLTask setAccessControlEntities:]
-[CoreDAVGetTask dealloc]
-[CoreDAVGetTask description]
-[CoreDAVGetTask httpMethod]
-[CoreDAVGetTask cachePolicy]
-[CoreDAVGetTask requestBody]
-[CoreDAVGetTask copyDefaultParserForContentType:]
-[CoreDAVGetTask finishCoreDAVTaskWithError:]
-[CoreDAVGetTask appSpecificDataItemResult]
-[CoreDAVGetTask setAppSpecificDataItemResult:]
-[CoreDAVGetTask forceNoCache]
-[CoreDAVGetTask setForceNoCache:]
-[CoreDAVGetToFileTask dealloc]
-[CoreDAVGetToFileTask initWithURL:destinationFile:]
-[CoreDAVGetToFileTask copyDefaultParserForContentType:]
-[CoreDAVGetToFileTask shouldLogResponseBody]
-[CoreDAVGetToFileTask destinationFile]
-[CoreDAVGetToFileTask setDestinationFile:]
-[CardDAVFolderGetTask finishCoreDAVTaskWithError:]
-[CoreDAVHeadTask httpMethod]
-[CoreDAVHeadTask cachePolicy]
-[CoreDAVHeadTask requestBody]
-[CoreDAVHeadTask finishCoreDAVTaskWithError:]
-[CoreDAVUpdateACLTaskGroup initWithAccountInfoProvider:aceItems:url:taskManager:]
-[CoreDAVUpdateACLTaskGroup dealloc]
-[CoreDAVUpdateACLTaskGroup _startGetACL]
-[CoreDAVUpdateACLTaskGroup _startSetACLWithAccessControlEntities:]
-[CoreDAVUpdateACLTaskGroup startTaskGroup]
-[CoreDAVUpdateACLTaskGroup _finishWithError:state:]
-[CoreDAVUpdateACLTaskGroup task:didFinishWithError:]
-[CoreDAVUpdateACLTaskGroup taskGroupWillCancelWithError:]
-[CoreDAVUpdateACLTaskGroup state]
-[CoreDAVUpdateACLTaskGroup setState:]
-[CoreDAVUpdateACLTaskGroup aceItems]
-[CoreDAVUpdateACLTaskGroup setAceItems:]
-[CoreDAVUpdateACLTaskGroup url]
-[CoreDAVUpdateACLTaskGroup setUrl:]
-[CoreDAVUpdateACLTaskGroup fetchTask]
-[CoreDAVUpdateACLTaskGroup setFetchTask:]
-[CoreDAVNullParser dealloc]
-[CoreDAVNullParser parserError]
-[CoreDAVNullParser processData:forTask:]
+[CoreDAVNullParser canHandleContentType:]
-[CoreDAVOctetStreamParser init]
-[CoreDAVOctetStreamParser dealloc]
-[CoreDAVOctetStreamParser description]
-[CoreDAVOctetStreamParser processData:forTask:]
-[CoreDAVOctetStreamParser parserError]
+[CoreDAVOctetStreamParser canHandleContentType:]
-[CoreDAVOctetStreamParser octetStreamData]
-[CoreDAVOctetStreamParser setOctetStreamData:]
-[CoreDAVOctetStreamToFileParser initWithFileHandle:]
-[CoreDAVOctetStreamToFileParser dealloc]
-[CoreDAVOctetStreamToFileParser processData:forTask:]
-[CoreDAVOctetStreamToFileParser fileHandle]
-[CoreDAVOctetStreamToFileParser setFileHandle:]
-[CoreDAVItem init]
-[CoreDAVItem initWithNameSpace:andName:]
-[CoreDAVItem dealloc]
-[CoreDAVItem description]
-[CoreDAVItem hashString]
+[CoreDAVItem copyParseRules]
-[CoreDAVItem copyParseRules]
+[CoreDAVItem parseRuleCache]
___29+[CoreDAVItem parseRuleCache]_block_invoke
-[CoreDAVItem parserFoundUnrecognizedElement:]
-[CoreDAVItem parserFoundPayload:]
-[CoreDAVItem parserFoundAttributes:]
-[CoreDAVItem childrenToWrite]
-[CoreDAVItem write:]
-[CoreDAVItem validate]
-[CoreDAVItem payloadAsString]
-[CoreDAVItem setPayloadAsString:]
-[CoreDAVItem parserSuggestsBaseURL:]
-[CoreDAVItem generateXMLString]
-[CoreDAVItem name]
-[CoreDAVItem setName:]
-[CoreDAVItem nameSpace]
-[CoreDAVItem setNameSpace:]
-[CoreDAVItem attributes]
-[CoreDAVItem setAttributes:]
-[CoreDAVItem extraChildItems]
-[CoreDAVItem setExtraChildItems:]
-[CoreDAVItem payload]
-[CoreDAVItem setPayload:]
-[CoreDAVItem useCDATA]
-[CoreDAVItem setUseCDATA:]
-[CoreDAVItemWithNoChildren parserFoundUnrecognizedElement:]
-[CoreDAVCurrentUserPrivilegeSetItem init]
-[CoreDAVCurrentUserPrivilegeSetItem dealloc]
-[CoreDAVCurrentUserPrivilegeSetItem description]
+[CoreDAVCurrentUserPrivilegeSetItem copyParseRules]
-[CoreDAVCurrentUserPrivilegeSetItem addPrivilege:]
-[CoreDAVCurrentUserPrivilegeSetItem hasPrivilegeWithNameSpace:andName:]
-[CoreDAVCurrentUserPrivilegeSetItem privileges]
-[CoreDAVCurrentUserPrivilegeSetItem setPrivileges:]
-[CoreDAVPrincipalSearchPropertyItem init]
-[CoreDAVPrincipalSearchPropertyItem dealloc]
-[CoreDAVPrincipalSearchPropertyItem description]
+[CoreDAVPrincipalSearchPropertyItem copyParseRules]
-[CoreDAVPrincipalSearchPropertyItem prop]
-[CoreDAVPrincipalSearchPropertyItem setProp:]
-[CoreDAVPrincipalSearchPropertyItem descriptionItem]
-[CoreDAVPrincipalSearchPropertyItem setDescriptionItem:]
-[CoreDAVPrincipalSearchPropertySetItem init]
-[CoreDAVPrincipalSearchPropertySetItem dealloc]
-[CoreDAVPrincipalSearchPropertySetItem description]
+[CoreDAVPrincipalSearchPropertySetItem copyParseRules]
-[CoreDAVPrincipalSearchPropertySetItem addPrincipalSearchProperty:]
-[CoreDAVPrincipalSearchPropertySetItem principalSearchProperties]
-[CoreDAVPrincipalSearchPropertySetItem setPrincipalSearchProperties:]
-[CoreDAVCurrentUserPrincipalItem init]
-[CoreDAVCurrentUserPrincipalItem dealloc]
-[CoreDAVCurrentUserPrincipalItem description]
+[CoreDAVCurrentUserPrincipalItem copyParseRules]
-[CoreDAVCurrentUserPrincipalItem href]
-[CoreDAVCurrentUserPrincipalItem setHref:]
-[CoreDAVCurrentUserPrincipalItem unauthenticated]
-[CoreDAVCurrentUserPrincipalItem setUnauthenticated:]
-[CoreDAVHrefItem init]
-[CoreDAVHrefItem initWithURL:]
-[CoreDAVHrefItem dealloc]
-[CoreDAVHrefItem description]
-[CoreDAVHrefItem write:]
-[CoreDAVHrefItem payloadAsFullURL]
-[CoreDAVHrefItem payloadAsOriginalURL]
-[CoreDAVHrefItem parserSuggestsBaseURL:]
-[CoreDAVHrefItem baseURL]
-[CoreDAVHrefItem setBaseURL:]
-[CoreDAVHrefItem writeStyle]
-[CoreDAVHrefItem setWriteStyle:]
-[CoreDAVMkcolResponseItem init]
-[CoreDAVMkcolResponseItem dealloc]
-[CoreDAVMkcolResponseItem description]
+[CoreDAVMkcolResponseItem copyParseRules]
-[CoreDAVMkcolResponseItem addPropStat:]
-[CoreDAVMkcolResponseItem hasPropertyError]
-[CoreDAVMkcolResponseItem propStats]
-[CoreDAVMkcolResponseItem setPropStats:]
-[CoreDAVMultiStatusItem init]
-[CoreDAVMultiStatusItem dealloc]
-[CoreDAVMultiStatusItem description]
+[CoreDAVMultiStatusItem copyParseRules]
-[CoreDAVMultiStatusItem addResponse:]
-[CoreDAVMultiStatusItem responses]
-[CoreDAVMultiStatusItem orderedResponses]
-[CoreDAVMultiStatusItem setOrderedResponses:]
-[CoreDAVMultiStatusItem responseDescription]
-[CoreDAVMultiStatusItem setResponseDescription:]
-[CoreDAVPropFindItem init]
-[CoreDAVPropFindItem dealloc]
-[CoreDAVPropFindItem description]
+[CoreDAVPropFindItem copyParseRules]
-[CoreDAVPropFindItem propName]
-[CoreDAVPropFindItem setPropName:]
-[CoreDAVPropFindItem allProp]
-[CoreDAVPropFindItem setAllProp:]
-[CoreDAVPropFindItem include]
-[CoreDAVPropFindItem setInclude:]
-[CoreDAVPropFindItem prop]
-[CoreDAVPropFindItem setProp:]
-[CoreDAVPropStatItem init]
-[CoreDAVPropStatItem dealloc]
-[CoreDAVPropStatItem description]
+[CoreDAVPropStatItem copyParseRules]
-[CoreDAVPropStatItem setErrorItem:]
-[CoreDAVPropStatItem status]
-[CoreDAVPropStatItem setStatus:]
-[CoreDAVPropStatItem prop]
-[CoreDAVPropStatItem setProp:]
-[CoreDAVPropStatItem errorItem]
-[CoreDAVPropStatItem responseDescription]
-[CoreDAVPropStatItem setResponseDescription:]
-[CoreDAVRemoveItem init]
-[CoreDAVRemoveItem dealloc]
-[CoreDAVRemoveItem description]
+[CoreDAVRemoveItem copyParseRules]
-[CoreDAVRemoveItem prop]
-[CoreDAVRemoveItem setProp:]
-[CoreDAVSetItem init]
-[CoreDAVSetItem dealloc]
-[CoreDAVSetItem description]
+[CoreDAVSetItem copyParseRules]
-[CoreDAVSetItem prop]
-[CoreDAVSetItem setProp:]
-[CoreDAVSupportedReportItem init]
-[CoreDAVSupportedReportItem dealloc]
-[CoreDAVSupportedReportItem description]
+[CoreDAVSupportedReportItem copyParseRules]
-[CoreDAVSupportedReportItem report]
-[CoreDAVSupportedReportItem setReport:]
-[CoreDAVSupportedReportSetItem init]
-[CoreDAVSupportedReportSetItem dealloc]
-[CoreDAVSupportedReportSetItem description]
+[CoreDAVSupportedReportSetItem copyParseRules]
-[CoreDAVSupportedReportSetItem addSupportedReport:]
-[CoreDAVSupportedReportSetItem supportsReportWithNameSpace:andName:]
-[CoreDAVSupportedReportSetItem supportedReports]
-[CoreDAVSupportedReportSetItem setSupportedReports:]
-[CoreDAVCalendarServerPushTransportsItem init]
-[CoreDAVCalendarServerPushTransportsItem dealloc]
-[CoreDAVCalendarServerPushTransportsItem description]
+[CoreDAVCalendarServerPushTransportsItem copyParseRules]
-[CoreDAVCalendarServerPushTransportsItem addTransport:]
-[CoreDAVCalendarServerPushTransportsItem transports]
-[CoreDAVCalendarServerPushTransportsItem setTransports:]
-[CoreDAVCalendarServerTransportItem init]
-[CoreDAVCalendarServerTransportItem dealloc]
-[CoreDAVCalendarServerTransportItem description]
+[CoreDAVCalendarServerTransportItem copyParseRules]
-[CoreDAVCalendarServerTransportItem apsBundleID]
-[CoreDAVCalendarServerTransportItem setApsBundleID:]
-[CoreDAVCalendarServerTransportItem courierServer]
-[CoreDAVCalendarServerTransportItem setCourierServer:]
-[CoreDAVCalendarServerTransportItem subscriptionURL]
-[CoreDAVCalendarServerTransportItem setSubscriptionURL:]
-[CoreDAVCalendarServerTransportItem tokenURL]
-[CoreDAVCalendarServerTransportItem setTokenURL:]
-[CoreDAVCalendarServerTransportItem apsEnv]
-[CoreDAVCalendarServerTransportItem setApsEnv:]
-[CoreDAVCalendarServerTransportItem refreshInterval]
-[CoreDAVCalendarServerTransportItem setRefreshInterval:]
-[CoreDAVCalendarServerTransportItem xmppServer]
-[CoreDAVCalendarServerTransportItem setXmppServer:]
-[CoreDAVCalendarServerTransportItem xmppURI]
-[CoreDAVCalendarServerTransportItem setXmppURI:]
-[CoreDAVCalendarServerEmailAddressSetItem init]
-[CoreDAVCalendarServerEmailAddressSetItem dealloc]
-[CoreDAVCalendarServerEmailAddressSetItem description]
+[CoreDAVCalendarServerEmailAddressSetItem copyParseRules]
-[CoreDAVCalendarServerEmailAddressSetItem addEmailAddress:]
-[CoreDAVCalendarServerEmailAddressSetItem emailAddresses]
-[CoreDAVCalendarServerEmailAddressSetItem setEmailAddresses:]
-[CoreDAVCalendarServerEmailAddressSetItem unauthenticated]
-[CoreDAVCalendarServerEmailAddressSetItem setUnauthenticated:]
-[CoreDAVResourceTypeItem init]
-[CoreDAVResourceTypeItem dealloc]
-[CoreDAVResourceTypeItem description]
+[CoreDAVResourceTypeItem copyParseRules]
-[CoreDAVResourceTypeItem write:]
-[CoreDAVResourceTypeItem stringSet]
-[CoreDAVResourceTypeItem isTypeWithNameSpace:andName:]
-[CoreDAVResourceTypeItem addressBook]
-[CoreDAVResourceTypeItem setAddressBook:]
-[CoreDAVResourceTypeItem searchAddressBook]
-[CoreDAVResourceTypeItem setSearchAddressBook:]
-[CoreDAVResourceTypeItem shared]
-[CoreDAVResourceTypeItem setShared:]
-[CoreDAVResourceTypeItem principal]
-[CoreDAVResourceTypeItem setPrincipal:]
-[CoreDAVResourceTypeItem collection]
-[CoreDAVResourceTypeItem setCollection:]
-[CoreDAVResourceTypeItem unauthenticated]
-[CoreDAVResourceTypeItem setUnauthenticated:]
-[CoreDAVContainerInfoSyncTaskGroup initWithContainerURL:previousSyncToken:accountInfoProvider:taskManager:]
-[CoreDAVContainerInfoSyncTaskGroup setDelegate:]
-[CoreDAVContainerInfoSyncTaskGroup delegate]
-[CoreDAVContainerInfoSyncTaskGroup dealloc]
-[CoreDAVContainerInfoSyncTaskGroup description]
-[CoreDAVContainerInfoSyncTaskGroup startTaskGroup]
-[CoreDAVContainerInfoSyncTaskGroup task:didFinishWithError:]
___61-[CoreDAVContainerInfoSyncTaskGroup task:didFinishWithError:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVContainerInfoSyncTaskGroup containerItemClass]
-[CoreDAVContainerInfoSyncTaskGroup copyContainerParserMappings]
-[CoreDAVItemWithHrefChildren dealloc]
-[CoreDAVItemWithHrefChildren description]
+[CoreDAVItemWithHrefChildren copyParseRules]
-[CoreDAVItemWithHrefChildren addHref:]
-[CoreDAVItemWithHrefChildren hrefsAsFullURLs]
-[CoreDAVItemWithHrefChildren hrefsAsOriginalURLs]
-[CoreDAVItemWithHrefChildren hrefsAsStrings]
-[CoreDAVItemWithHrefChildren hrefs]
-[CoreDAVItemWithHrefChildren setHrefs:]
-[CoreDAVItemWithHrefChildren unauthenticated]
-[CoreDAVItemWithHrefChildren setUnauthenticated:]
-[CoreDAVLeafItem write:]
-[CoreDAVSyncReportTask initWithPropertiesToFind:atURL:withDepth:previousSyncToken:]
-[CoreDAVSyncReportTask dealloc]
-[CoreDAVSyncReportTask description]
-[CoreDAVSyncReportTask httpMethod]
-[CoreDAVSyncReportTask requestBody]
-[CoreDAVSyncReportTask notFoundHREFs]
-[CoreDAVSyncReportTask copyDefaultParserForContentType:]
-[CoreDAVSyncReportTask finishCoreDAVTaskWithError:]
-[CoreDAVSyncReportTask nextSyncToken]
-[CoreDAVSyncReportTask moreToSync]
-[CoreDAVSyncReportTask wasInvalidSyncToken]
-[CoreDAVSyncReportItem dealloc]
-[CoreDAVSyncReportItem description]
+[CoreDAVSyncReportItem copyParseRules]
-[CoreDAVSyncReportItem _setSyncTokenItem:]
-[CoreDAVSyncReportItem syncToken]
-[CoreDAVRecursiveContainerSyncTaskGroup initWithFolderURL:previousCTag:previousPTag:previousSyncToken:actions:syncItemOrder:context:accountInfoProvider:taskManager:]
-[CoreDAVRecursiveContainerSyncTaskGroup dealloc]
-[CoreDAVRecursiveContainerSyncTaskGroup description]
-[CoreDAVRecursiveContainerSyncTaskGroup taskGroupWillCancelWithError:]
-[CoreDAVRecursiveContainerSyncTaskGroup _tearDownAllUnsubmittedTasks]
-[CoreDAVRecursiveContainerSyncTaskGroup _foundChildrenOrder:inFolderWithURL:]
-[CoreDAVRecursiveContainerSyncTaskGroup bailWithError:]
-[CoreDAVRecursiveContainerSyncTaskGroup cancelTaskGroup]
-[CoreDAVRecursiveContainerSyncTaskGroup _submitTasks]
-[CoreDAVRecursiveContainerSyncTaskGroup _taskGroupSuccessfullyFinishedWithContents:]
-[CoreDAVRecursiveContainerSyncTaskGroup _pushActions]
___54-[CoreDAVRecursiveContainerSyncTaskGroup _pushActions]_block_invoke
-[CoreDAVRecursiveContainerSyncTaskGroup _getTopFolderTags]
-[CoreDAVRecursiveContainerSyncTaskGroup _getItemTags]
-[CoreDAVRecursiveContainerSyncTaskGroup _getDataPayloads]
-[CoreDAVRecursiveContainerSyncTaskGroup startTaskGroup]
-[CoreDAVRecursiveContainerSyncTaskGroup syncAway]
-[CoreDAVRecursiveContainerSyncTaskGroup isWhitelistedError:]
-[CoreDAVRecursiveContainerSyncTaskGroup putTask:completedWithNewETag:error:]
-[CoreDAVRecursiveContainerSyncTaskGroup _postTask:didFinishWithError:]
-[CoreDAVRecursiveContainerSyncTaskGroup _folderModTask:parsedPropStats:error:]
-[CoreDAVRecursiveContainerSyncTaskGroup mkcolTask:parsedPropStats:error:]
-[CoreDAVRecursiveContainerSyncTaskGroup propPatchTask:parsedResponses:error:]
-[CoreDAVRecursiveContainerSyncTaskGroup task:didFinishWithError:]
-[CoreDAVRecursiveContainerSyncTaskGroup deleteTask:completedWithError:]
-[CoreDAVRecursiveContainerSyncTaskGroup _syncReportTask:didFinishWithError:]
-[CoreDAVRecursiveContainerSyncTaskGroup propFindTask:parsedResponses:error:]
-[CoreDAVRecursiveContainerSyncTaskGroup _getTask:finishedWithParsedContents:deletedItems:error:]
___97-[CoreDAVRecursiveContainerSyncTaskGroup _getTask:finishedWithParsedContents:deletedItems:error:]_block_invoke
-[CoreDAVRecursiveContainerSyncTaskGroup _copyContainerParserMappings]
-[CoreDAVRecursiveContainerSyncTaskGroup copyMultiGetTaskWithURLs:]
-[CoreDAVRecursiveContainerSyncTaskGroup copyFolderMultiGetTaskWithURLs:]
-[CoreDAVRecursiveContainerSyncTaskGroup dataContentType]
-[CoreDAVRecursiveContainerSyncTaskGroup shouldSyncChildWithResourceType:]
-[CoreDAVRecursiveContainerSyncTaskGroup multiGetBatchSize]
-[CoreDAVRecursiveContainerSyncTaskGroup setMultiGetBatchSize:]
-[CoreDAVRecursiveContainerSyncTaskGroup folderURL]
-[CoreDAVRecursiveContainerSyncTaskGroup previousCTag]
-[CoreDAVRecursiveContainerSyncTaskGroup preflightCTag]
-[CoreDAVRecursiveContainerSyncTaskGroup setPreflightCTag:]
-[CoreDAVRecursiveContainerSyncTaskGroup previousSyncToken]
-[CoreDAVRecursiveContainerSyncTaskGroup setPreviousSyncToken:]
-[CoreDAVRecursiveContainerSyncTaskGroup folderURLToChildrenURLOrder]
-[CoreDAVRecursiveContainerSyncTaskGroup nextCTag]
-[CoreDAVRecursiveContainerSyncTaskGroup setNextCTag:]
-[CoreDAVPrincipalPropertySearchTask initWithPropertiesToFind:atURL:]
-[CoreDAVPrincipalPropertySearchTask dealloc]
-[CoreDAVPrincipalPropertySearchTask initWithPropertySearches:propertiesToFind:atURL:applyToPrincipalCollectionSet:extraAttributes:]
-[CoreDAVPrincipalPropertySearchTask httpMethod]
-[CoreDAVPrincipalPropertySearchTask requestBody]
-[CoreDAVPrincipalPropertySearchTask finishCoreDAVTaskWithError:]
-[CoreDAVPrincipalPropertySearchTask searchItems]
-[CoreDAVPrincipalPropertySearchTask setSearchItems:]
-[CoreDAVPrincipalPropertySearchTask extraAttributes]
-[CoreDAVPrincipalPropertySearchTask setExtraAttributes:]
-[CoreDAVPrincipalPropertySearchTask applyToPrincipalCollectionSet]
-[CoreDAVPrincipalPropertySearchTask setApplyToPrincipalCollectionSet:]
-[CoreDAVPropertySearchItem init]
-[CoreDAVPropertySearchItem initWithSearchPropertyNameSpace:andName:]
-[CoreDAVPropertySearchItem dealloc]
-[CoreDAVPropertySearchItem description]
-[CoreDAVPropertySearchItem write:]
-[CoreDAVPropertySearchItem prop]
-[CoreDAVPropertySearchItem setProp:]
-[CoreDAVPropertySearchItem match]
-[CoreDAVPropertySearchItem setMatch:]
-[CoreDAVPropertySearchItem matchTypeAttribute]
-[CoreDAVPropertySearchItem setMatchTypeAttribute:]
-[CoreDAVPropertyFindBaseTask initWithPropertiesToFind:atURL:]
-[CoreDAVPropertyFindBaseTask dealloc]
-[CoreDAVPropertyFindBaseTask description]
-[CoreDAVPropertyFindBaseTask parseHints]
-[CoreDAVPropertyFindBaseTask additionalHeaderValues]
-[CoreDAVPropertyFindBaseTask copyDefaultParserForContentType:]
-[CoreDAVPropertyFindBaseTask successfulValueForNameSpace:elementName:]
-[CoreDAVPropertyFindBaseTask updateMultiStatusFromResponse]
-[CoreDAVPropertyFindBaseTask getTotalFailureError]
-[CoreDAVPropertyFindBaseTask finishCoreDAVTaskWithError:]
-[CoreDAVPropertyFindBaseTask propertiesToFind]
-[CoreDAVPropertyFindBaseTask setPropertiesToFind:]
-[CoreDAVPropertyFindBaseTask multiStatus]
-[CoreDAVPropertyFindBaseTask setMultiStatus:]
-[CoreDAVValidatePrincipalsTaskGroup initWithAccountInfoProvider:urls:taskManager:]
-[CoreDAVValidatePrincipalsTaskGroup dealloc]
-[CoreDAVValidatePrincipalsTaskGroup resultPrincipalURLs]
-[CoreDAVValidatePrincipalsTaskGroup _finishWithError:]
-[CoreDAVValidatePrincipalsTaskGroup _fetchNextURL]
-[CoreDAVValidatePrincipalsTaskGroup task:didFinishWithError:]
-[CoreDAVValidatePrincipalsTaskGroup startTaskGroup]
-[CoreDAVValidatePrincipalsTaskGroup cancelTaskGroup]
-[CoreDAVValidatePrincipalsTaskGroup urlsToExamine]
-[CoreDAVValidatePrincipalsTaskGroup setUrlsToExamine:]
-[CoreDAVValidatePrincipalsTaskGroup principalURLs]
-[CoreDAVValidatePrincipalsTaskGroup setPrincipalURLs:]
-[CoreDAVValidatePrincipalsTaskGroup urlBeingExamined]
-[CoreDAVValidatePrincipalsTaskGroup setUrlBeingExamined:]
-[CoreDAVValidatePrincipalsTaskGroup didReceiveAuthenticationError]
-[CoreDAVExpandProperty dealloc]
-[CoreDAVExpandProperty initWithPropertiesToFind:expandedName:expandedNameSpace:]
-[CoreDAVExpandProperty propertiesToFind]
-[CoreDAVExpandProperty setPropertiesToFind:]
-[CoreDAVExpandProperty expandedName]
-[CoreDAVExpandProperty setExpandedName:]
-[CoreDAVExpandProperty expandedNameSpace]
-[CoreDAVExpandProperty setExpandedNameSpace:]
-[CoreDAVExpandPropertiesTask dealloc]
-[CoreDAVExpandPropertiesTask initWithPropertiesToFind:atURL:expandedName:expandedNameSpace:]
-[CoreDAVExpandPropertiesTask addPropertyToExpandWithPropertiesToFind:expandedName:expandedNameSpace:]
-[CoreDAVExpandPropertiesTask description]
-[CoreDAVExpandPropertiesTask httpMethod]
-[CoreDAVExpandPropertiesTask requestBody]
-[CoreDAVExpandPropertiesTask parseHints]
-[CoreDAVExpandPropertiesTask finishCoreDAVTaskWithError:]
-[CoreDAVExpandPropertiesTask propertiesToExpand]
-[CoreDAVExpandPropertiesTask setPropertiesToExpand:]
-[CoreDAVBulkUploadTaskGroup initWithFolderURL:checkCTag:uuidsToAddActions:hrefsToModDeleteActions:context:accountInfoProvider:taskManager:]
-[CoreDAVBulkUploadTaskGroup dealloc]
-[CoreDAVBulkUploadTaskGroup description]
-[CoreDAVBulkUploadTaskGroup multiPutTaskClass]
-[CoreDAVBulkUploadTaskGroup _sendNextBatch]
-[CoreDAVBulkUploadTaskGroup startTaskGroup]
-[CoreDAVBulkUploadTaskGroup syncAway]
-[CoreDAVBulkUploadTaskGroup task:didFinishWithError:]
-[CoreDAVBulkUploadTaskGroup multiPutBatchMaxNumResources]
-[CoreDAVBulkUploadTaskGroup setMultiPutBatchMaxNumResources:]
-[CoreDAVBulkUploadTaskGroup multiPutBatchMaxSize]
-[CoreDAVBulkUploadTaskGroup setMultiPutBatchMaxSize:]
-[CoreDAVBulkUploadTaskGroup folderURL]
-[CoreDAVBulkUploadTaskGroup validCTag]
-[CoreDAVBulkUploadTaskGroup nextCTag]
-[CoreDAVBulkUploadTaskGroup setNextCTag:]
-[CoreDAVBulkUploadTaskGroup uuidToHREF]
-[CoreDAVBulkUploadTaskGroup hrefToETag]
-[CoreDAVBulkUploadTaskGroup uuidToErrorItems]
-[CoreDAVBulkUploadTaskGroup hrefToErrorItems]
-[CoreDAVBulkUploadTaskGroup uuidToStatus]
-[CoreDAVBulkUploadTaskGroup hrefToStatus]
-[CardDAVBulkUploadTaskGroup initWithFolderURL:checkCTag:uuidsToAddActions:hrefsToModDeleteActions:context:accountInfoProvider:taskManager:]
-[CardDAVBulkUploadTaskGroup multiPutTaskClass]
-[CoreDAVMultiPutTask initWithURL:checkCTag:uuidsToAddActions:hrefsToModDeleteActions:]
-[CoreDAVMultiPutTask dealloc]
-[CoreDAVMultiPutTask additionalHeaderValues]
-[CoreDAVMultiPutTask httpMethod]
-[CoreDAVMultiPutTask requestBody]
-[CoreDAVMultiPutTask fillOutDataWithUUIDsToAddActions:hrefsToModDeleteActions:]
-[CoreDAVMultiPutTask copyDefaultParserForContentType:]
-[CoreDAVMultiPutTask finishCoreDAVTaskWithError:]
-[CoreDAVMultiPutTask nextCTag]
-[CoreDAVMultiPutTask uuidToHREF]
-[CoreDAVMultiPutTask hrefToETag]
-[CoreDAVMultiPutTask uuidToErrorItems]
-[CoreDAVMultiPutTask hrefToErrorItems]
-[CoreDAVMultiPutTask uuidToStatus]
-[CoreDAVMultiPutTask hrefToStatus]
-[CardDAVMultiPutTask initWithURL:checkCTag:uuidsToAddActions:hrefsToModDeleteActions:]
-[CoreDAVBulkRequestsItem init]
-[CoreDAVBulkRequestsItem dealloc]
-[CoreDAVBulkRequestsItem description]
-[CoreDAVBulkRequestsItem addSupportedItem:]
+[CoreDAVBulkRequestsItem copyParseRules]
-[CoreDAVBulkRequestsItem dictRepresentation]
-[CoreDAVBulkRequestsItem maxResources]
-[CoreDAVBulkRequestsItem maxSize]
-[CoreDAVBulkRequestsItem supportsItemWithNameSpace:name:]
-[CoreDAVBulkRequestsItem supportsInsert]
-[CoreDAVBulkRequestsItem supportsUpdate]
-[CoreDAVBulkRequestsItem supportsDelete]
-[CoreDAVBulkRequestsItem maxResourcesItem]
-[CoreDAVBulkRequestsItem setMaxResourcesItem:]
-[CoreDAVBulkRequestsItem maxSizeItem]
-[CoreDAVBulkRequestsItem setMaxSizeItem:]
-[CoreDAVBulkRequestsItem supportedItems]
-[CoreDAVBulkRequestsSetItem init]
-[CoreDAVBulkRequestsSetItem dealloc]
-[CoreDAVBulkRequestsSetItem description]
+[CoreDAVBulkRequestsSetItem copyParseRules]
-[CoreDAVBulkRequestsSetItem dictRepresentation]
-[CoreDAVBulkRequestsSetItem crudItem]
-[CoreDAVBulkRequestsSetItem setCrudItem:]
-[CoreDAVBulkRequestsSetItem simpleItem]
-[CoreDAVBulkRequestsSetItem setSimpleItem:]
-[CoreDAVBulkChangeTask initWithURL:checkCTag:simple:returnChangedData:uuidsToAddActions:hrefsToModDeleteActions:]
-[CoreDAVBulkChangeTask dealloc]
-[CoreDAVBulkChangeTask additionalHeaderValues]
-[CoreDAVBulkChangeTask httpMethod]
-[CoreDAVBulkChangeTask requestBody]
-[CoreDAVBulkChangeTask fillOutDataWithUUIDsToAddActions:hrefsToModDeleteActions:]
-[CoreDAVBulkChangeTask copyDefaultParserForContentType:]
-[CoreDAVBulkChangeTask finishCoreDAVTaskWithError:]
-[CoreDAVBulkChangeTask uuidsToAddActions]
-[CoreDAVBulkChangeTask hrefsToModDeleteActions]
-[CoreDAVBulkChangeTask nextCTag]
-[CoreDAVBulkChangeTask bulkChangeResponses]
-[CardDAVBulkChangeTask initWithURL:checkCTag:simple:returnChangedData:uuidsToAddActions:hrefsToModDeleteActions:]
-[CoreDAVBulkRequestsSupportedItem init]
-[CoreDAVBulkRequestsSupportedItem dealloc]
-[CoreDAVBulkRequestsSupportedItem description]
+[CoreDAVBulkRequestsSupportedItem copyParseRules]
-[CoreDAVBulkRequestsSupportedItem supported]
-[CoreDAVBulkRequestsSupportedItem setSupported:]
-[CoreDAVItemWithHrefChildItem dealloc]
-[CoreDAVItemWithHrefChildItem description]
+[CoreDAVItemWithHrefChildItem copyParseRules]
-[CoreDAVItemWithHrefChildItem write:]
-[CoreDAVItemWithHrefChildItem href]
-[CoreDAVItemWithHrefChildItem setHref:]
-[CoreDAVItemWithHrefChildItemTolerateBarePayload href]
-[CoreDAVItemWithHrefChildItemTolerateBarePayload dealloc]
-[CoreDAVItemWithHrefChildItemTolerateBarePayload description]
-[CoreDAVItemWithHrefChildItemTolerateBarePayload setPayload:]
-[CoreDAVItemParserMapping initWithNameSpace:name:parseClass:]
-[CoreDAVItemParserMapping dealloc]
-[CoreDAVItemParserMapping description]
-[CoreDAVItemParserMapping nameSpace]
-[CoreDAVItemParserMapping setNameSpace:]
-[CoreDAVItemParserMapping name]
-[CoreDAVItemParserMapping setName:]
-[CoreDAVItemParserMapping parseClass]
-[CoreDAVItemParserMapping setParseClass:]
+[CoreDAVParseRule ruleWithMinimumNumber:maximumNumber:nameSpace:elementName:objectClass:setterMethod:]
-[CoreDAVParseRule initWithMinimumNumber:maximumNumber:nameSpace:elementName:objectClass:setterMethod:]
-[CoreDAVParseRule dealloc]
-[CoreDAVParseRule description]
-[CoreDAVParseRule minimumNumber]
-[CoreDAVParseRule maximumNumber]
-[CoreDAVParseRule nameSpace]
-[CoreDAVParseRule elementName]
-[CoreDAVParseRule objectClass]
-[CoreDAVParseRule setterMethod]
-[CoreDAVXMLElementAttribute init]
-[CoreDAVXMLElementAttribute initWithNameSpace:name:value:]
-[CoreDAVXMLElementAttribute dealloc]
-[CoreDAVXMLElementAttribute description]
-[CoreDAVXMLElementAttribute name]
-[CoreDAVXMLElementAttribute setName:]
-[CoreDAVXMLElementAttribute nameSpace]
-[CoreDAVXMLElementAttribute setNameSpace:]
-[CoreDAVXMLElementAttribute value]
-[CoreDAVXMLElementAttribute setValue:]
-[CoreDAVXMLElementGenerator initWithParser:baseURL:rootElementNameSpace:elementName:parseClass:]
-[CoreDAVXMLElementGenerator initWithParser:parentGenerator:parentElementSetter:element:]
-[CoreDAVXMLElementGenerator dealloc]
-[CoreDAVXMLElementGenerator tracksRootElement]
-[CoreDAVXMLElementGenerator notifyElement:ofAttributesFound:]
-[CoreDAVXMLElementGenerator isExpectedNameSpace:andElementName:]
-[CoreDAVXMLElementGenerator parser:didStartElement:namespaceURI:qualifiedName:attributes:]
-[CoreDAVXMLElementGenerator parser:didEndElement:namespaceURI:qualifiedName:]
-[CoreDAVXMLElementGenerator parser:foundCharacters:]
-[CoreDAVXMLElementGenerator parser:foundCDATA:]
-[CoreDAVXMLElementGenerator parser:parseErrorOccurred:]
-[CoreDAVXMLElementGenerator parser:validationErrorOccurred:]
-[CoreDAVXMLElementGenerator parserDidEndDocument:]
-[CoreDAVXMLElementGenerator noteChildCascadingFailure]
-[CoreDAVXMLElementGenerator resumeParsingWithParser:]
-[CoreDAVXMLElementGenerator isUnrecognized]
-[CoreDAVXMLElementGenerator setIsUnrecognized:]
-[CoreDAVXMLElementGenerator parsingState]
-[CoreDAVXMLElementGenerator setParsingState:]
-[CoreDAVXMLElementGenerator parentElementSetter]
-[CoreDAVXMLElementGenerator setParentElementSetter:]
-[CoreDAVXMLElementGenerator characters]
-[CoreDAVXMLElementGenerator setCharacters:]
-[CoreDAVXMLElementGenerator cDATA]
-[CoreDAVXMLElementGenerator setCDATA:]
-[CoreDAVXMLElementGenerator currentlyParsingSubItem]
-[CoreDAVXMLElementGenerator setCurrentlyParsingSubItem:]
-[CoreDAVXMLElementGenerator element]
-[CoreDAVXMLElementGenerator setElement:]
-[CoreDAVXMLElementGenerator parentGenerator]
-[CoreDAVXMLElementGenerator setParentGenerator:]
-[CoreDAVXMLElementGenerator cachedElementParseRules]
-[CoreDAVXMLElementGenerator setCachedElementParseRules:]
-[CoreDAVXMLElementGenerator checkedElementValidityIfRootElement]
-[CoreDAVXMLElementGenerator setCheckedElementValidityIfRootElement:]
-[CoreDAVXMLElementGenerator baseURL]
-[CoreDAVXMLElementGenerator setBaseURL:]
-[CoreDAVXMLParser initWithData:]
-[CoreDAVXMLParser initWithRootElementNameSpace:name:parseClass:baseURL:]
-[CoreDAVXMLParser processData:forTask:]
-[CoreDAVXMLParser dealloc]
-[CoreDAVXMLParser rootElement]
-[CoreDAVXMLParser rootError]
+[CoreDAVXMLParser canHandleContentType:]
-[CoreDAVXMLParser rootElementGenerator]
-[CoreDAVXMLParser setRootElementGenerator:]
-[CoreDAVXMLParser rootErrorGenerator]
-[CoreDAVXMLParser setRootErrorGenerator:]
-[CoreDAVXMLParser parseHints]
-[CoreDAVXMLParser setParseHints:]
-[CoreDAVXMLParser baseURL]
-[CoreDAVXMLParser setBaseURL:]
-[CardDAVUpdateMeCardTaskGroup initWithAccountInfoProvider:taskManager:homeURL:cardURL:]
-[CardDAVUpdateMeCardTaskGroup dealloc]
-[CardDAVUpdateMeCardTaskGroup description]
-[CardDAVUpdateMeCardTaskGroup _newPropPatchTask]
-[CardDAVUpdateMeCardTaskGroup startTaskGroup]
-[CardDAVUpdateMeCardTaskGroup propPatchTask:parsedResponses:error:]
-[CardDAVUpdateMeCardTaskGroup cardURL]
-[CardDAVUpdateMeCardTaskGroup homeURL]
-[CoreDAVActionBackedTask description]
-[CoreDAVActionBackedTask dealloc]
-[CoreDAVActionBackedTask backingAction]
-[CoreDAVActionBackedTask setBackingAction:]
-[CoreDAVMoveWithFallbackTaskGroup initWithSourceURL:destinationURL:AccountInfoProvider:taskManager:]
-[CoreDAVMoveWithFallbackTaskGroup dealloc]
-[CoreDAVMoveWithFallbackTaskGroup description]
-[CoreDAVMoveWithFallbackTaskGroup startTaskGroup]
___50-[CoreDAVMoveWithFallbackTaskGroup startTaskGroup]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVMoveWithFallbackTaskGroup _completedMoveTask:]
___55-[CoreDAVMoveWithFallbackTaskGroup _completedMoveTask:]_block_invoke
___copy_helper_block_87
___destroy_helper_block_88
-[CoreDAVMoveWithFallbackTaskGroup _completedPutTask:]
___54-[CoreDAVMoveWithFallbackTaskGroup _completedPutTask:]_block_invoke
___copy_helper_block_112
___destroy_helper_block_113
-[CoreDAVMoveWithFallbackTaskGroup sourceURL]
-[CoreDAVMoveWithFallbackTaskGroup destinationURL]
-[CoreDAVMoveWithFallbackTaskGroup overwrite]
-[CoreDAVMoveWithFallbackTaskGroup setOverwrite:]
-[CoreDAVMoveWithFallbackTaskGroup useFallback]
-[CoreDAVMoveWithFallbackTaskGroup setUseFallback:]
-[CoreDAVMoveWithFallbackTaskGroup previousETag]
-[CoreDAVMoveWithFallbackTaskGroup setPreviousETag:]
-[CoreDAVMoveWithFallbackTaskGroup dataPayload]
-[CoreDAVMoveWithFallbackTaskGroup setDataPayload:]
-[CoreDAVMoveWithFallbackTaskGroup dataContentType]
-[CoreDAVMoveWithFallbackTaskGroup setDataContentType:]
-[CoreDAVMoveWithFallbackTaskGroup responseHeaders]
-[CoreDAVMoveWithFallbackTaskGroup nextETag]
-[CoreDAVMultiGetWithFallbackTaskGroup initWithURLs:multiGetBlock:getBlock:accountInfoProvider:taskManager:]
-[CoreDAVMultiGetWithFallbackTaskGroup dealloc]
-[CoreDAVMultiGetWithFallbackTaskGroup _configureAndSubmitTask:]
-[CoreDAVMultiGetWithFallbackTaskGroup _switchToSingleGetMode]
-[CoreDAVMultiGetWithFallbackTaskGroup _fetchOneItem]
___53-[CoreDAVMultiGetWithFallbackTaskGroup _fetchOneItem]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVMultiGetWithFallbackTaskGroup startTaskGroup]
___54-[CoreDAVMultiGetWithFallbackTaskGroup startTaskGroup]_block_invoke
___copy_helper_block_54
___destroy_helper_block_55
-[CoreDAVMultiGetWithFallbackTaskGroup error]
-[CoreDAVMultiGetWithFallbackTaskGroup missingURLs]
-[CoreDAVMultiGetWithFallbackTaskGroup deletedURLs]
-[CoreDAVMultiGetWithFallbackTaskGroup parsedContents]
-[CoreDAVMultiGetWithFallbackTaskGroup shouldIgnoreResponseErrors]
-[CoreDAVMultiGetWithFallbackTaskGroup setShouldIgnoreResponseErrors:]
-[CoreDAVMultiMoveWithFallbackTaskGroup initWithSourceURLs:destinationURL:overwrite:useFallback:sourceEntityDataPayloads:sourceEntityDataContentTypes:sourceEntityETags:accountInfoProvider:taskManager:]
-[CoreDAVMultiMoveWithFallbackTaskGroup dealloc]
-[CoreDAVMultiMoveWithFallbackTaskGroup description]
-[CoreDAVMultiMoveWithFallbackTaskGroup fullDestinationURLFromSourceURL:]
-[CoreDAVMultiMoveWithFallbackTaskGroup filenameFromURL:]
-[CoreDAVMultiMoveWithFallbackTaskGroup startTaskGroup]
-[CoreDAVMultiMoveWithFallbackTaskGroup processOutstandingTasks]
___64-[CoreDAVMultiMoveWithFallbackTaskGroup processOutstandingTasks]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CoreDAVMultiMoveWithFallbackTaskGroup _setTagsForDestinationEntityAtURL:fromTaskResponseHeaders:completionBlock:]
-[CoreDAVMultiMoveWithFallbackTaskGroup _eTagFromTaskResponseHeaders:]
-[CoreDAVMultiMoveWithFallbackTaskGroup _completedMoveTask:sourceURL:]
___70-[CoreDAVMultiMoveWithFallbackTaskGroup _completedMoveTask:sourceURL:]_block_invoke
___copy_helper_block_144
___destroy_helper_block_145
___70-[CoreDAVMultiMoveWithFallbackTaskGroup _completedMoveTask:sourceURL:]_block_invoke156
___copy_helper_block_159
___destroy_helper_block_160
-[CoreDAVMultiMoveWithFallbackTaskGroup _completedPutTask:sourceURL:]
___69-[CoreDAVMultiMoveWithFallbackTaskGroup _completedPutTask:sourceURL:]_block_invoke
___69-[CoreDAVMultiMoveWithFallbackTaskGroup _completedPutTask:sourceURL:]_block_invoke_2
___copy_helper_block_180
___destroy_helper_block_181
___copy_helper_block_184
___destroy_helper_block_185
-[CoreDAVMultiMoveWithFallbackTaskGroup sourceURLs]
-[CoreDAVMultiMoveWithFallbackTaskGroup destinationURL]
-[CoreDAVMultiMoveWithFallbackTaskGroup overwrite]
-[CoreDAVMultiMoveWithFallbackTaskGroup useFallback]
-[CoreDAVMultiMoveWithFallbackTaskGroup sourceEntityDataPayloads]
-[CoreDAVMultiMoveWithFallbackTaskGroup sourceEntityDataContentTypes]
-[CoreDAVMultiMoveWithFallbackTaskGroup sourceEntityETags]
-[CoreDAVMultiMoveWithFallbackTaskGroup destinationEntityETags]
-[CoreDAVMultiMoveWithFallbackTaskGroup destinationURLs]
-[CoreDAVMultiMoveWithFallbackTaskGroup outstandingSourceURLsToMove]
-[CoreDAVMultiMoveWithFallbackTaskGroup setOutstandingSourceURLsToMove:]
-[CoreDAVMatchResultsItem dealloc]
-[CoreDAVMatchResultsItem description]
+[CoreDAVMatchResultsItem copyParseRules]
-[CoreDAVMatchResultsItem rank]
-[CoreDAVMatchResultsItem setRank:]
-[CoreDAVMatchResultsItem language]
-[CoreDAVMatchResultsItem setLanguage:]
-[CoreDAVMatchResultsItem region]
-[CoreDAVMatchResultsItem setRegion:]
-[CoreDAVMatchResultsItem calendarDescription]
-[CoreDAVMatchResultsItem setCalendarDescription:]
GCC_except_table79
GCC_except_table83
GCC_except_table92
GCC_except_table96
GCC_except_table123
GCC_except_table14
GCC_except_table2
___block_descriptor_tmp
___block_descriptor_tmp168
___block_descriptor_tmp172
___block_descriptor_tmp176
___block_descriptor_tmp180
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp224
___block_descriptor_tmp248
___block_descriptor_tmp361
___block_descriptor_tmp370
___block_descriptor_tmp400
___block_descriptor_tmp
___block_descriptor_tmp361
___block_descriptor_tmp372
___block_descriptor_tmp429
___block_descriptor_tmp455
___block_descriptor_tmp460
___block_descriptor_tmp532
___block_descriptor_tmp539
___block_descriptor_tmp546
___block_descriptor_tmp562
___block_descriptor_tmp571
___block_descriptor_tmp582
___block_descriptor_tmp589
___block_descriptor_tmp
___block_descriptor_tmp161
___block_descriptor_tmp
___block_descriptor_tmp11
___block_descriptor_tmp18
___block_descriptor_tmp30
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp218
___block_descriptor_tmp277
___block_descriptor_tmp392
___block_descriptor_tmp
___block_descriptor_tmp384
___block_literal_global
___block_descriptor_tmp396
___block_literal_global397
___block_descriptor_tmp421
___block_literal_global422
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp7
___block_descriptor_tmp12
___block_descriptor_tmp40
___block_descriptor_tmp63
___block_literal_global64
___block_descriptor_tmp
___block_descriptor_tmp90
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp309
___block_literal_global310
___block_descriptor_tmp
___block_descriptor_tmp90
___block_descriptor_tmp115
___block_descriptor_tmp
___block_descriptor_tmp57
___block_descriptor_tmp
___block_descriptor_tmp147
___block_descriptor_tmp162
___block_descriptor_tmp183
___block_descriptor_tmp187
_OBJC_IVAR_$_CoreDAVGetAccountPropertiesTaskGroup._redirectHistory
_OBJC_IVAR_$_CoreDAVGetAccountPropertiesTaskGroup._fetchPrincipalSearchProperties
_OBJC_IVAR_$_CoreDAVGetAccountPropertiesTaskGroup._principalSearchProperties
_OBJC_IVAR_$_CoreDAVGetAccountPropertiesTaskGroup._collections
_OBJC_IVAR_$_CoreDAVGetAccountPropertiesTaskGroup._emailAddresses
_OBJC_IVAR_$_CoreDAVGetAccountPropertiesTaskGroup._resourceID
_OBJC_IVAR_$_CoreDAVGetAccountPropertiesTaskGroup._displayName
_OBJC_IVAR_$_CoreDAVGetAccountPropertiesTaskGroup._principalURL
_OBJC_IVAR_$_CoreDAVGetAccountPropertiesTaskGroup._isExpandPropertyReportSupported
_OBJC_IVAR_$_CoreDAVGetAccountPropertiesTaskGroup._shouldIgnoreHomeSetOnDifferentHost
_OBJC_IVAR_$_CoreDAVTask._url
_OBJC_IVAR_$_CoreDAVTask._responseStatusCode
_OBJC_IVAR_$_CoreDAVTask._timeoutInterval
_OBJC_IVAR_$_CoreDAVTask._allowAutomaticRedirects
_OBJC_IVAR_$_CoreDAVTask._uniqueID
_OBJC_IVAR_$_CoreDAVTask._finished
_OBJC_IVAR_$_CoreDAVTask._connection
_OBJC_IVAR_$_CoreDAVTask._error
_OBJC_IVAR_$_CoreDAVTask._logger
_OBJC_IVAR_$_CoreDAVTask._dateConnectionWentOut
_OBJC_IVAR_$_CoreDAVTask._responseBodyParser
_OBJC_IVAR_$_CoreDAVTask._requestProgressBlock
_OBJC_IVAR_$_CoreDAVTask._requestProperties
_OBJC_IVAR_$_CoreDAVTask._responseProgressBlock
_OBJC_IVAR_$_CoreDAVTask._completionBlock
_OBJC_IVAR_$_CoreDAVTask._overriddenHeaders
_OBJC_IVAR_$_CoreDAVTask._redirectHistory
_OBJC_IVAR_$_CoreDAVTask._forbiddenErrorItem
_OBJC_IVAR_$_CoreDAVTask._request
_OBJC_IVAR_$_CoreDAVTask._response
_OBJC_IVAR_$_CoreDAVTask._didSendRequest
_OBJC_IVAR_$_CoreDAVTask._didReceiveResponse
_OBJC_IVAR_$_CoreDAVTask._didReceiveData
_OBJC_IVAR_$_CoreDAVTask._didFinishLoading
_OBJC_IVAR_$_CoreDAVTask._didFailWithError
_OBJC_IVAR_$_CoreDAVTask._didCancel
_OBJC_IVAR_$_CoreDAVTask._requestIsCompressed
_OBJC_IVAR_$_CoreDAVTask._compressedRequestFailed
_OBJC_IVAR_$_CoreDAVTask._passwordNotificationError
_OBJC_IVAR_$_CoreDAVTask._fakeResponseData
_OBJC_IVAR_$_CoreDAVTask._haveParsedFakeResponseData
_OBJC_IVAR_$_CoreDAVTask._justTriedTokenAuth
_OBJC_IVAR_$_CoreDAVTask._everTriedTokenAuth
_OBJC_IVAR_$_CoreDAVTask._shouldRetryWithClientToken
_OBJC_IVAR_$_CoreDAVTask._receivedBadPasswordResponse
_OBJC_IVAR_$_CoreDAVTask._didRetryWithClientToken
_OBJC_IVAR_$_CoreDAVTask._delegate
_OBJC_IVAR_$_CoreDAVTask._context
_OBJC_IVAR_$_CoreDAVTask._totalBytesReceived
_OBJC_IVAR_$_CoreDAVTaskGroup._error
_OBJC_IVAR_$_CoreDAVTaskGroup._progressBlock
_OBJC_IVAR_$_CoreDAVTaskGroup._completionBlock
_OBJC_IVAR_$_CoreDAVTaskGroup._context
_OBJC_IVAR_$_CoreDAVTaskGroup._delegate
_OBJC_IVAR_$_CoreDAVXMLData._doc
_OBJC_IVAR_$_CoreDAVXMLData._writer
_OBJC_IVAR_$_CoreDAVXMLData._seenURIsToPrefixes
_OBJC_IVAR_$_CoreDAVXMLData._seenURIsToDepth
_OBJC_IVAR_$_CoreDAVXMLData._elementStack
_OBJC_IVAR_$_CoreDAVXMLData._docHasEnded
_OBJC_IVAR_$_CoreDAVXMLData._shouldAddFormattingSpaces
_OBJC_IVAR_$_CoreDAVXMLParser._parseHints
_OBJC_IVAR_$_CoreDAVXMLParser._baseURL
_OBJC_IVAR_$_CoreDAVXMLParser._rootElementGenerator
_OBJC_IVAR_$_CoreDAVXMLParser._rootErrorGenerator
_CDVRelativeOrderHeaderString._sRelativeOrderString
-[CoreDAVXMLData _prefixForNameSpace:].sNextPrefix
+[CoreDAVContainerQueryTask _copySearchTermsFromSearchString:].__friendlyPunctuationCharacterSet
+[CoreDAVLogging sharedLogging].__sharedLogging
+[CoreDAVTask uniqueQueryID].uniqueQueryID
-[CoreDAVTask loadRequest:].limitIncomingChunkSizeDict
-[CoreDAVTask loadRequest:].once
-[CoreDAVTask performCoreDAVTask].forcedTimeoutInterval
-[CoreDAVTask performCoreDAVTask].forcedTimeoutPredicate
_CDVDefaultUserAgent._sUserAgentString
_CDVAppleClientInfoString._sVersionString
_CDVAppleClientInfoString.gotVersionString
_initializeLibXMLParser.didInitializeXMLParser
_CDVRelativeOrderHeaderString.onceToken
__logFormater.__logFormatter
__logFormater.logPred
-[CoreDAVXMLData _prefixForNameSpace:].pred
-[CoreDAVXMLData _prefixForNameSpace:]._sNamespacePrefixes
-[CoreDAVXMLData _prefixForNameSpace:]._sPrefixQueue
-[CoreDAVXMLData appendElement:inNamespace:withStringContentAsCDATA:withAttributeNamesAndValues:].invalidControlCharacterSet
-[CoreDAVXMLData appendElement:inNamespace:withStringContentAsCDATA:withAttributeNamesAndValues:].once
+[CoreDAVItem parseRuleCache].retVal
+[CoreDAVItem parseRuleCache].onceToken
_CDVAbstractMethod
_CDVAppleClientInfoString
_CDVCleanedStringsFromResponseHeaders
_CDVDefaultUserAgent
_CDVExtractValuesFromRedirectString
_CDVHTTPStatusCodeAsStatusString
_CDVHTTPStatusCodeFromStatusLine
_CDVHTTPStatusCodeRepresentsClientError
_CDVHTTPStatusCodeRepresentsRedirection
_CDVHTTPStatusCodeRepresentsServerError
_CDVInheritedInitializerUsageDisallowed
_CDVLog
_CDVPLog
_CDVRelativeOrderHeaderString
_CDVRunLoopModesToPerformDelayedSelectorsIn
_CDVUnimplemented
_CalDAVHTTPHeader_XAppleDAVPushToken
_CoreDAVErrorDomain
_CoreDAVErrorItemKey
_CoreDAVForcedTaskTimeoutInterval
_CoreDAVHTTPHeader_Accept
_CoreDAVHTTPHeader_AcceptCharset
_CoreDAVHTTPHeader_AcceptEncoding
_CoreDAVHTTPHeader_AcceptLanguage
_CoreDAVHTTPHeader_AcceptRanges
_CoreDAVHTTPHeader_Age
_CoreDAVHTTPHeader_Allow
_CoreDAVHTTPHeader_AppleClientInfo
_CoreDAVHTTPHeader_Authorization
_CoreDAVHTTPHeader_Brief
_CoreDAVHTTPHeader_CacheControl
_CoreDAVHTTPHeader_Connection
_CoreDAVHTTPHeader_ContentDisposition
_CoreDAVHTTPHeader_ContentEncoding
_CoreDAVHTTPHeader_ContentLanguage
_CoreDAVHTTPHeader_ContentLength
_CoreDAVHTTPHeader_ContentLocation
_CoreDAVHTTPHeader_ContentMD5
_CoreDAVHTTPHeader_ContentRange
_CoreDAVHTTPHeader_ContentType
_CoreDAVHTTPHeader_DAV
_CoreDAVHTTPHeader_Date
_CoreDAVHTTPHeader_Depth
_CoreDAVHTTPHeader_Destination
_CoreDAVHTTPHeader_ETag
_CoreDAVHTTPHeader_Expect
_CoreDAVHTTPHeader_Expires
_CoreDAVHTTPHeader_From
_CoreDAVHTTPHeader_Host
_CoreDAVHTTPHeader_If
_CoreDAVHTTPHeader_IfMatch
_CoreDAVHTTPHeader_IfModifiedSince
_CoreDAVHTTPHeader_IfNoneMatch
_CoreDAVHTTPHeader_IfRange
_CoreDAVHTTPHeader_IfUnmodifiedSince
_CoreDAVHTTPHeader_Label
_CoreDAVHTTPHeader_LastModified
_CoreDAVHTTPHeader_Location
_CoreDAVHTTPHeader_LockToken
_CoreDAVHTTPHeader_MaxForwards
_CoreDAVHTTPHeader_Overwrite
_CoreDAVHTTPHeader_Position
_CoreDAVHTTPHeader_Pragma
_CoreDAVHTTPHeader_Prefer
_CoreDAVHTTPHeader_ProxyAuthenticate
_CoreDAVHTTPHeader_ProxyAuthorization
_CoreDAVHTTPHeader_Range
_CoreDAVHTTPHeader_Referer
_CoreDAVHTTPHeader_RetryAfter
_CoreDAVHTTPHeader_Server
_CoreDAVHTTPHeader_TE
_CoreDAVHTTPHeader_TimeOut
_CoreDAVHTTPHeader_Trailer
_CoreDAVHTTPHeader_TransferEncoding
_CoreDAVHTTPHeader_Upgrade
_CoreDAVHTTPHeader_UserAgent
_CoreDAVHTTPHeader_Vary
_CoreDAVHTTPHeader_Via
_CoreDAVHTTPHeader_WWWAuthenticate
_CoreDAVHTTPHeader_Warning
_CoreDAVHTTPHeader_XAcceptClientEncoding
_CoreDAVHTTPHeader_XClientToken
_CoreDAVHTTPHeader_XClientTokenRequest
_CoreDAVHTTPHeader_XMobileMeDAVOptions
_CoreDAVHTTPHeader_XWebLoginRequired
_CoreDAVHTTPHeaders
_CoreDAVHTTPStatusErrorDomain
_CoreDAVSRVLookupTask_SRVHostClientCallback
_OBJC_CLASS_$_CardDAVAddressBookContainer
_OBJC_CLASS_$_CardDAVBulkChangeTask
_OBJC_CLASS_$_CardDAVBulkUploadTaskGroup
_OBJC_CLASS_$_CardDAVFolderGetTask
_OBJC_CLASS_$_CardDAVFolderInfoTaskGroup
_OBJC_CLASS_$_CardDAVFolderMultiGetTask
_OBJC_CLASS_$_CardDAVFolderQueryTask
_OBJC_CLASS_$_CardDAVFolderSyncTaskGroup
_OBJC_CLASS_$_CardDAVGetAccountPropertiesTaskGroup
_OBJC_CLASS_$_CardDAVMultiPutTask
_OBJC_CLASS_$_CardDAVUpdateMeCardTaskGroup
_OBJC_CLASS_$_CoreDAVACEItem
_OBJC_CLASS_$_CoreDAVACLItem
_OBJC_CLASS_$_CoreDAVACLTask
_OBJC_CLASS_$_CoreDAVAction
_OBJC_CLASS_$_CoreDAVActionBackedTask
_OBJC_CLASS_$_CoreDAVBulkChangeTask
_OBJC_CLASS_$_CoreDAVBulkRequestsItem
_OBJC_CLASS_$_CoreDAVBulkRequestsSetItem
_OBJC_CLASS_$_CoreDAVBulkRequestsSupportedItem
_OBJC_CLASS_$_CoreDAVBulkUploadTaskGroup
_OBJC_CLASS_$_CoreDAVCalendarServerEmailAddressSetItem
_OBJC_CLASS_$_CoreDAVCalendarServerPushTransportsItem
_OBJC_CLASS_$_CoreDAVCalendarServerTransportItem
_OBJC_CLASS_$_CoreDAVContainer
_OBJC_CLASS_$_CoreDAVContainerInfoSyncTaskGroup
_OBJC_CLASS_$_CoreDAVContainerInfoTaskGroup
_OBJC_CLASS_$_CoreDAVContainerMultiGetTask
_OBJC_CLASS_$_CoreDAVContainerQueryTask
_OBJC_CLASS_$_CoreDAVContainerSyncTaskGroup
_OBJC_CLASS_$_CoreDAVCopyOrMoveTask
_OBJC_CLASS_$_CoreDAVCopyTask
_OBJC_CLASS_$_CoreDAVCurrentUserPrincipalItem
_OBJC_CLASS_$_CoreDAVCurrentUserPrivilegeSetItem
_OBJC_CLASS_$_CoreDAVDeleteTask
_OBJC_CLASS_$_CoreDAVDenyItem
_OBJC_CLASS_$_CoreDAVDiscoveryAccountInfo
_OBJC_CLASS_$_CoreDAVDiscoveryTaskGroup
_OBJC_CLASS_$_CoreDAVErrorItem
_OBJC_CLASS_$_CoreDAVExpandPropertiesTask
_OBJC_CLASS_$_CoreDAVExpandProperty
_OBJC_CLASS_$_CoreDAVFolderContentsMultiGetTask
_OBJC_CLASS_$_CoreDAVGetAccountPropertiesTaskGroup
_OBJC_CLASS_$_CoreDAVGetTask
_OBJC_CLASS_$_CoreDAVGetToFileTask
_OBJC_CLASS_$_CoreDAVGrantItem
_OBJC_CLASS_$_CoreDAVHeadTask
_OBJC_CLASS_$_CoreDAVHrefItem
_OBJC_CLASS_$_CoreDAVInvertItem
_OBJC_CLASS_$_CoreDAVItem
_OBJC_CLASS_$_CoreDAVItemParserMapping
_OBJC_CLASS_$_CoreDAVItemWithHrefChildItem
_OBJC_CLASS_$_CoreDAVItemWithHrefChildItemTolerateBarePayload
_OBJC_CLASS_$_CoreDAVItemWithHrefChildren
_OBJC_CLASS_$_CoreDAVItemWithNoChildren
_OBJC_CLASS_$_CoreDAVLeafDataPayload
_OBJC_CLASS_$_CoreDAVLeafItem
_OBJC_CLASS_$_CoreDAVLogging
_OBJC_CLASS_$_CoreDAVMatchResultsItem
_OBJC_CLASS_$_CoreDAVMkcolResponseItem
_OBJC_CLASS_$_CoreDAVMkcolTask
_OBJC_CLASS_$_CoreDAVMoveTask
_OBJC_CLASS_$_CoreDAVMoveWithFallbackTaskGroup
_OBJC_CLASS_$_CoreDAVMultiGetWithFallbackTaskGroup
_OBJC_CLASS_$_CoreDAVMultiMoveWithFallbackTaskGroup
_OBJC_CLASS_$_CoreDAVMultiPutTask
_OBJC_CLASS_$_CoreDAVMultiStatusItem
_OBJC_CLASS_$_CoreDAVNullParser
_OBJC_CLASS_$_CoreDAVOctetStreamParser
_OBJC_CLASS_$_CoreDAVOctetStreamToFileParser
_OBJC_CLASS_$_CoreDAVOptionsTask
_OBJC_CLASS_$_CoreDAVOrderedAction
_OBJC_CLASS_$_CoreDAVParseRule
_OBJC_CLASS_$_CoreDAVPostOrPutTask
_OBJC_CLASS_$_CoreDAVPostTask
_OBJC_CLASS_$_CoreDAVPrincipalItem
_OBJC_CLASS_$_CoreDAVPrincipalPropertySearchTask
_OBJC_CLASS_$_CoreDAVPrincipalSearchPropertyItem
_OBJC_CLASS_$_CoreDAVPrincipalSearchPropertySetItem
_OBJC_CLASS_$_CoreDAVPrincipalSearchPropertySetTask
_OBJC_CLASS_$_CoreDAVPropFindItem
_OBJC_CLASS_$_CoreDAVPropFindTask
_OBJC_CLASS_$_CoreDAVPropPatchTask
_OBJC_CLASS_$_CoreDAVPropStatItem
_OBJC_CLASS_$_CoreDAVPropertyFindBaseTask
_OBJC_CLASS_$_CoreDAVPropertySearchItem
_OBJC_CLASS_$_CoreDAVPropertyUpdateItem
_OBJC_CLASS_$_CoreDAVPutStreamTask
_OBJC_CLASS_$_CoreDAVPutTask
_OBJC_CLASS_$_CoreDAVRecursiveContainerSyncTaskGroup
_OBJC_CLASS_$_CoreDAVRemoveItem
_OBJC_CLASS_$_CoreDAVRequestLogger
_OBJC_CLASS_$_CoreDAVResourceTypeItem
_OBJC_CLASS_$_CoreDAVResponseItem
_OBJC_CLASS_$_CoreDAVSRVLookupTask
_OBJC_CLASS_$_CoreDAVSRVResourceRecord
_OBJC_CLASS_$_CoreDAVSetItem
_OBJC_CLASS_$_CoreDAVSupportedReportItem
_OBJC_CLASS_$_CoreDAVSupportedReportSetItem
_OBJC_CLASS_$_CoreDAVSyncReportItem
_OBJC_CLASS_$_CoreDAVSyncReportTask
_OBJC_CLASS_$_CoreDAVTask
_OBJC_CLASS_$_CoreDAVTaskGroup
_OBJC_CLASS_$_CoreDAVUpdateACLTaskGroup
_OBJC_CLASS_$_CoreDAVValidatePrincipalsTaskGroup
_OBJC_CLASS_$_CoreDAVXMLData
_OBJC_CLASS_$_CoreDAVXMLElementAttribute
_OBJC_CLASS_$_CoreDAVXMLElementGenerator
_OBJC_CLASS_$_CoreDAVXMLParser
_OBJC_IVAR_$_CardDAVAddressBookContainer._maxImageSize
_OBJC_IVAR_$_CardDAVAddressBookContainer._maxResourceSize
_OBJC_IVAR_$_CardDAVAddressBookContainer._meCardURL
_OBJC_IVAR_$_CardDAVFolderInfoTaskGroup._directoryGatewayURLs
_OBJC_IVAR_$_CardDAVFolderSyncTaskGroup._isInitialSync
_OBJC_IVAR_$_CardDAVGetAccountPropertiesTaskGroup._addressBookHomes
_OBJC_IVAR_$_CardDAVGetAccountPropertiesTaskGroup._directoryGatewayURLs
_OBJC_IVAR_$_CardDAVUpdateMeCardTaskGroup._cardURL
_OBJC_IVAR_$_CardDAVUpdateMeCardTaskGroup._homeURL
_OBJC_IVAR_$_CoreDAVACEItem._deny
_OBJC_IVAR_$_CoreDAVACEItem._grant
_OBJC_IVAR_$_CoreDAVACEItem._inherited
_OBJC_IVAR_$_CoreDAVACEItem._invert
_OBJC_IVAR_$_CoreDAVACEItem._principal
_OBJC_IVAR_$_CoreDAVACEItem._protectedItem
_OBJC_IVAR_$_CoreDAVACLItem._accessControlEntities
_OBJC_IVAR_$_CoreDAVACLTask._accessControlEntities
_OBJC_IVAR_$_CoreDAVAction._action
_OBJC_IVAR_$_CoreDAVAction._changeContext
_OBJC_IVAR_$_CoreDAVAction._context
_OBJC_IVAR_$_CoreDAVActionBackedTask._backingAction
_OBJC_IVAR_$_CoreDAVBulkChangeTask._appSpecificDataProp
_OBJC_IVAR_$_CoreDAVBulkChangeTask._appSpecificNamespace
_OBJC_IVAR_$_CoreDAVBulkChangeTask._bulkChangeResponses
_OBJC_IVAR_$_CoreDAVBulkChangeTask._checkCTag
_OBJC_IVAR_$_CoreDAVBulkChangeTask._hrefsToModDeleteActions
_OBJC_IVAR_$_CoreDAVBulkChangeTask._nextCTag
_OBJC_IVAR_$_CoreDAVBulkChangeTask._pushedData
_OBJC_IVAR_$_CoreDAVBulkChangeTask._requestDataContentType
_OBJC_IVAR_$_CoreDAVBulkChangeTask._returnChangedData
_OBJC_IVAR_$_CoreDAVBulkChangeTask._simple
_OBJC_IVAR_$_CoreDAVBulkChangeTask._uuidsToAddActions
_OBJC_IVAR_$_CoreDAVBulkChangeTask._validCTag
_OBJC_IVAR_$_CoreDAVBulkRequestsItem._maxResourcesItem
_OBJC_IVAR_$_CoreDAVBulkRequestsItem._maxSizeItem
_OBJC_IVAR_$_CoreDAVBulkRequestsItem._supportedItems
_OBJC_IVAR_$_CoreDAVBulkRequestsSetItem._crudItem
_OBJC_IVAR_$_CoreDAVBulkRequestsSetItem._simpleItem
_OBJC_IVAR_$_CoreDAVBulkRequestsSupportedItem._supported
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._folderURL
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._hrefToETag
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._hrefToErrorItems
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._hrefToStatus
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._lastKnownCTag
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._multiPutBatchMaxNumResources
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._multiPutBatchMaxSize
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._remainingHREFsToModDeleteActions
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._remainingUUIDsToAddActions
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._uuidToErrorItems
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._uuidToHREF
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._uuidToStatus
_OBJC_IVAR_$_CoreDAVBulkUploadTaskGroup._validCTag
_OBJC_IVAR_$_CoreDAVCalendarServerEmailAddressSetItem._emailAddresses
_OBJC_IVAR_$_CoreDAVCalendarServerEmailAddressSetItem._unauthenticated
_OBJC_IVAR_$_CoreDAVCalendarServerPushTransportsItem._transports
_OBJC_IVAR_$_CoreDAVCalendarServerTransportItem._apsBundleID
_OBJC_IVAR_$_CoreDAVCalendarServerTransportItem._apsEnv
_OBJC_IVAR_$_CoreDAVCalendarServerTransportItem._courierServer
_OBJC_IVAR_$_CoreDAVCalendarServerTransportItem._refreshInterval
_OBJC_IVAR_$_CoreDAVCalendarServerTransportItem._subscriptionURL
_OBJC_IVAR_$_CoreDAVCalendarServerTransportItem._tokenURL
_OBJC_IVAR_$_CoreDAVCalendarServerTransportItem._xmppServer
_OBJC_IVAR_$_CoreDAVCalendarServerTransportItem._xmppURI
_OBJC_IVAR_$_CoreDAVContainer._addMemberURL
_OBJC_IVAR_$_CoreDAVContainer._bulkRequests
_OBJC_IVAR_$_CoreDAVContainer._containerTitle
_OBJC_IVAR_$_CoreDAVContainer._isUnauthenticated
_OBJC_IVAR_$_CoreDAVContainer._owner
_OBJC_IVAR_$_CoreDAVContainer._privileges
_OBJC_IVAR_$_CoreDAVContainer._pushKey
_OBJC_IVAR_$_CoreDAVContainer._pushTransports
_OBJC_IVAR_$_CoreDAVContainer._quotaAvailable
_OBJC_IVAR_$_CoreDAVContainer._quotaUsed
_OBJC_IVAR_$_CoreDAVContainer._resourceID
_OBJC_IVAR_$_CoreDAVContainer._resourceType
_OBJC_IVAR_$_CoreDAVContainer._supportedReportSetItem
_OBJC_IVAR_$_CoreDAVContainer._syncToken
_OBJC_IVAR_$_CoreDAVContainer._url
_OBJC_IVAR_$_CoreDAVContainerInfoSyncTaskGroup._containerURL
_OBJC_IVAR_$_CoreDAVContainerInfoSyncTaskGroup._previousSyncToken
_OBJC_IVAR_$_CoreDAVContainerInfoTaskGroup._appSpecificHomeSetPropName
_OBJC_IVAR_$_CoreDAVContainerInfoTaskGroup._appSpecificHomeSetPropNameSpace
_OBJC_IVAR_$_CoreDAVContainerInfoTaskGroup._containerInfoDepth
_OBJC_IVAR_$_CoreDAVContainerInfoTaskGroup._containerURLs
_OBJC_IVAR_$_CoreDAVContainerInfoTaskGroup._containers
_OBJC_IVAR_$_CoreDAVContainerInfoTaskGroup._phase
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._additionalPropElements
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._appSpecificDataItemClass
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._appSpecificDataProp
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._appSpecificMultiGetCommand
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._appSpecificMultiGetNameSpace
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._appSpecificNamespace
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._deletedURLs
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._missingURLs
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._parsedContents
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._shouldIgnoreResponseErrors
_OBJC_IVAR_$_CoreDAVContainerMultiGetTask._urls
_OBJC_IVAR_$_CoreDAVContainerQueryTask._appSpecificDataItemClass
_OBJC_IVAR_$_CoreDAVContainerQueryTask._appSpecificDataProp
_OBJC_IVAR_$_CoreDAVContainerQueryTask._appSpecificNamespace
_OBJC_IVAR_$_CoreDAVContainerQueryTask._appSpecificQueryCommand
_OBJC_IVAR_$_CoreDAVContainerQueryTask._searchLimit
_OBJC_IVAR_$_CoreDAVContainerQueryTask._searchTerms
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._actions
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._actionsOnly
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._addMemberURL
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._appSpecificDataItemClass
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._bulkChangeCheckCTag
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._bulkRequests
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._ensureUpdatedCTag
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._folderURL
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._localItemURLOrder
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._maxIndependentTasks
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._multiGetBatchSize
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._nextCTag
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._nextSyncToken
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._phase
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._previousCTag
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._previousSyncToken
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._remainingHREFsToModDeleteActions
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._remainingUUIDsToAddActions
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._syncItemOrder
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._syncReportDeletedURLs
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._unsubmittedTasks
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._urlToETag
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._useMultiGet
_OBJC_IVAR_$_CoreDAVContainerSyncTaskGroup._useSyncCollection
_OBJC_IVAR_$_CoreDAVCopyOrMoveTask._destinationURL
_OBJC_IVAR_$_CoreDAVCopyOrMoveTask._overwrite
_OBJC_IVAR_$_CoreDAVCurrentUserPrincipalItem._href
_OBJC_IVAR_$_CoreDAVCurrentUserPrincipalItem._unauthenticated
_OBJC_IVAR_$_CoreDAVCurrentUserPrivilegeSetItem._privileges
_OBJC_IVAR_$_CoreDAVDeleteTask._previousETag
_OBJC_IVAR_$_CoreDAVDenyItem._privileges
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._accountID
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._backingAccountInfoProvider
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._error
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._host
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._identityPersist
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._password
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._port
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._principalURL
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._scheme
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._serverComplianceClasses
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._serverHeaders
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._serverRoot
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._shouldFailAllTasks
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._started
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._success
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._user
_OBJC_IVAR_$_CoreDAVDiscoveryAccountInfo._userAgentHeader
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._didReceiveAuthenticationError
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._discoveredAccountInfo
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._discoveries
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._httpPorts
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._httpServiceString
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._httpsPorts
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._httpsServiceString
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._potentialContextPaths
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._requiredComplianceClass
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._shouldBailEarly
_OBJC_IVAR_$_CoreDAVDiscoveryTaskGroup._wellKnownPath
_OBJC_IVAR_$_CoreDAVErrorItem._ctagOkay
_OBJC_IVAR_$_CoreDAVErrorItem._imageError
_OBJC_IVAR_$_CoreDAVErrorItem._invalidImageType
_OBJC_IVAR_$_CoreDAVErrorItem._maxAttendees
_OBJC_IVAR_$_CoreDAVErrorItem._maxImageSize
_OBJC_IVAR_$_CoreDAVErrorItem._maxResourceSize
_OBJC_IVAR_$_CoreDAVErrorItem._maxResources
_OBJC_IVAR_$_CoreDAVErrorItem._noUIDConflict
_OBJC_IVAR_$_CoreDAVErrorItem._numberOfMatchesWithinLimits
_OBJC_IVAR_$_CoreDAVErrorItem._quotaExceeded
_OBJC_IVAR_$_CoreDAVErrorItem._status
_OBJC_IVAR_$_CoreDAVErrorItem._uid
_OBJC_IVAR_$_CoreDAVErrorItem._validAddressData
_OBJC_IVAR_$_CoreDAVErrorItem._validSyncToken
_OBJC_IVAR_$_CoreDAVErrorItem._validTimezone
_OBJC_IVAR_$_CoreDAVExpandPropertiesTask._propertiesToExpand
_OBJC_IVAR_$_CoreDAVExpandProperty._expandedName
_OBJC_IVAR_$_CoreDAVExpandProperty._expandedNameSpace
_OBJC_IVAR_$_CoreDAVExpandProperty._propertiesToFind
_OBJC_IVAR_$_CoreDAVGetTask._appSpecificDataItemResult
_OBJC_IVAR_$_CoreDAVGetTask._forceNoCache
_OBJC_IVAR_$_CoreDAVGetToFileTask._destinationFile
_OBJC_IVAR_$_CoreDAVGrantItem._privileges
_OBJC_IVAR_$_CoreDAVHrefItem._baseURL
_OBJC_IVAR_$_CoreDAVHrefItem._writeStyle
_OBJC_IVAR_$_CoreDAVInvertItem._principal
_OBJC_IVAR_$_CoreDAVItem._attributes
_OBJC_IVAR_$_CoreDAVItem._extraChildItems
_OBJC_IVAR_$_CoreDAVItem._name
_OBJC_IVAR_$_CoreDAVItem._nameSpace
_OBJC_IVAR_$_CoreDAVItem._payload
_OBJC_IVAR_$_CoreDAVItem._useCDATA
_OBJC_IVAR_$_CoreDAVItemParserMapping._name
_OBJC_IVAR_$_CoreDAVItemParserMapping._nameSpace
_OBJC_IVAR_$_CoreDAVItemParserMapping._parseClass
_OBJC_IVAR_$_CoreDAVItemWithHrefChildItem._href
_OBJC_IVAR_$_CoreDAVItemWithHrefChildItemTolerateBarePayload._virtualHref
_OBJC_IVAR_$_CoreDAVItemWithHrefChildren._hrefs
_OBJC_IVAR_$_CoreDAVItemWithHrefChildren._unauthenticated
_OBJC_IVAR_$_CoreDAVLeafDataPayload._dataPayload
_OBJC_IVAR_$_CoreDAVLeafDataPayload._serverID
_OBJC_IVAR_$_CoreDAVLeafDataPayload._syncKey
_OBJC_IVAR_$_CoreDAVLogging._delegateMuckingQueue
_OBJC_IVAR_$_CoreDAVLogging._logDelegates
_OBJC_IVAR_$_CoreDAVMatchResultsItem._calendarDescription
_OBJC_IVAR_$_CoreDAVMatchResultsItem._language
_OBJC_IVAR_$_CoreDAVMatchResultsItem._rank
_OBJC_IVAR_$_CoreDAVMatchResultsItem._region
_OBJC_IVAR_$_CoreDAVMkcolResponseItem._propStats
_OBJC_IVAR_$_CoreDAVMkcolTask._absoluteOrder
_OBJC_IVAR_$_CoreDAVMkcolTask._priorOrderedURL
_OBJC_IVAR_$_CoreDAVMkcolTask._propertiesToSet
_OBJC_IVAR_$_CoreDAVMkcolTask._sendOrder
_OBJC_IVAR_$_CoreDAVMoveTask._previousETag
_OBJC_IVAR_$_CoreDAVMoveWithFallbackTaskGroup._dataContentType
_OBJC_IVAR_$_CoreDAVMoveWithFallbackTaskGroup._dataPayload
_OBJC_IVAR_$_CoreDAVMoveWithFallbackTaskGroup._destinationURL
_OBJC_IVAR_$_CoreDAVMoveWithFallbackTaskGroup._nextETag
_OBJC_IVAR_$_CoreDAVMoveWithFallbackTaskGroup._overwrite
_OBJC_IVAR_$_CoreDAVMoveWithFallbackTaskGroup._previousETag
_OBJC_IVAR_$_CoreDAVMoveWithFallbackTaskGroup._responseHeaders
_OBJC_IVAR_$_CoreDAVMoveWithFallbackTaskGroup._sourceURL
_OBJC_IVAR_$_CoreDAVMoveWithFallbackTaskGroup._useFallback
_OBJC_IVAR_$_CoreDAVMultiGetWithFallbackTaskGroup._getBlock
_OBJC_IVAR_$_CoreDAVMultiGetWithFallbackTaskGroup._multiGetTask
_OBJC_IVAR_$_CoreDAVMultiGetWithFallbackTaskGroup._parsedContents
_OBJC_IVAR_$_CoreDAVMultiGetWithFallbackTaskGroup._shouldIgnoreResponseErrors
_OBJC_IVAR_$_CoreDAVMultiGetWithFallbackTaskGroup._urls
_OBJC_IVAR_$_CoreDAVMultiGetWithFallbackTaskGroup._usingMultiGet
_OBJC_IVAR_$_CoreDAVMultiMoveWithFallbackTaskGroup._destinationEntityETags
_OBJC_IVAR_$_CoreDAVMultiMoveWithFallbackTaskGroup._destinationURL
_OBJC_IVAR_$_CoreDAVMultiMoveWithFallbackTaskGroup._destinationURLs
_OBJC_IVAR_$_CoreDAVMultiMoveWithFallbackTaskGroup._outstandingSourceURLsToMove
_OBJC_IVAR_$_CoreDAVMultiMoveWithFallbackTaskGroup._overwrite
_OBJC_IVAR_$_CoreDAVMultiMoveWithFallbackTaskGroup._sourceEntityDataContentTypes
_OBJC_IVAR_$_CoreDAVMultiMoveWithFallbackTaskGroup._sourceEntityDataPayloads
_OBJC_IVAR_$_CoreDAVMultiMoveWithFallbackTaskGroup._sourceEntityETags
_OBJC_IVAR_$_CoreDAVMultiMoveWithFallbackTaskGroup._sourceURLs
_OBJC_IVAR_$_CoreDAVMultiMoveWithFallbackTaskGroup._useFallback
_OBJC_IVAR_$_CoreDAVMultiPutTask._appSpecificDataProp
_OBJC_IVAR_$_CoreDAVMultiPutTask._appSpecificNamespace
_OBJC_IVAR_$_CoreDAVMultiPutTask._checkCTag
_OBJC_IVAR_$_CoreDAVMultiPutTask._hrefToETag
_OBJC_IVAR_$_CoreDAVMultiPutTask._hrefToErrorItems
_OBJC_IVAR_$_CoreDAVMultiPutTask._hrefToStatus
_OBJC_IVAR_$_CoreDAVMultiPutTask._nextCTag
_OBJC_IVAR_$_CoreDAVMultiPutTask._pushedData
_OBJC_IVAR_$_CoreDAVMultiPutTask._uuidToErrorItems
_OBJC_IVAR_$_CoreDAVMultiPutTask._uuidToHREF
_OBJC_IVAR_$_CoreDAVMultiPutTask._uuidToStatus
_OBJC_IVAR_$_CoreDAVMultiPutTask._validCTag
_OBJC_IVAR_$_CoreDAVMultiStatusItem._orderedResponses
_OBJC_IVAR_$_CoreDAVMultiStatusItem._responseDescription
_OBJC_IVAR_$_CoreDAVNullParser._parserError
_OBJC_IVAR_$_CoreDAVOctetStreamParser._octetStreamData
_OBJC_IVAR_$_CoreDAVOctetStreamParser._parserError
_OBJC_IVAR_$_CoreDAVOctetStreamToFileParser._fileHandle
_OBJC_IVAR_$_CoreDAVOrderedAction._absoluteOrder
_OBJC_IVAR_$_CoreDAVOrderedAction._priorURL
_OBJC_IVAR_$_CoreDAVParseRule._elementName
_OBJC_IVAR_$_CoreDAVParseRule._maximumNumber
_OBJC_IVAR_$_CoreDAVParseRule._minimumNumber
_OBJC_IVAR_$_CoreDAVParseRule._nameSpace
_OBJC_IVAR_$_CoreDAVParseRule._objectClass
_OBJC_IVAR_$_CoreDAVParseRule._setterMethod
_OBJC_IVAR_$_CoreDAVPostOrPutTask._absoluteOrder
_OBJC_IVAR_$_CoreDAVPostOrPutTask._forceToServer
_OBJC_IVAR_$_CoreDAVPostOrPutTask._previousETag
_OBJC_IVAR_$_CoreDAVPostOrPutTask._priorOrderedURL
_OBJC_IVAR_$_CoreDAVPostOrPutTask._requestDataContentType
_OBJC_IVAR_$_CoreDAVPostOrPutTask._requestDataPayload
_OBJC_IVAR_$_CoreDAVPostOrPutTask._sendOrder
_OBJC_IVAR_$_CoreDAVPrincipalItem._all
_OBJC_IVAR_$_CoreDAVPrincipalItem._authenticated
_OBJC_IVAR_$_CoreDAVPrincipalItem._href
_OBJC_IVAR_$_CoreDAVPrincipalItem._property
_OBJC_IVAR_$_CoreDAVPrincipalItem._selfItem
_OBJC_IVAR_$_CoreDAVPrincipalItem._unauthenticated
_OBJC_IVAR_$_CoreDAVPrincipalPropertySearchTask._applyToPrincipalCollectionSet
_OBJC_IVAR_$_CoreDAVPrincipalPropertySearchTask._extraAttributes
_OBJC_IVAR_$_CoreDAVPrincipalPropertySearchTask._searchItems
_OBJC_IVAR_$_CoreDAVPrincipalSearchPropertyItem._descriptionItem
_OBJC_IVAR_$_CoreDAVPrincipalSearchPropertyItem._prop
_OBJC_IVAR_$_CoreDAVPrincipalSearchPropertySetItem._principalSearchProperties
_OBJC_IVAR_$_CoreDAVPropFindItem._allProp
_OBJC_IVAR_$_CoreDAVPropFindItem._include
_OBJC_IVAR_$_CoreDAVPropFindItem._prop
_OBJC_IVAR_$_CoreDAVPropFindItem._propName
_OBJC_IVAR_$_CoreDAVPropPatchTask._absoluteOrder
_OBJC_IVAR_$_CoreDAVPropPatchTask._priorOrderedURL
_OBJC_IVAR_$_CoreDAVPropPatchTask._propPatchRemoveElements
_OBJC_IVAR_$_CoreDAVPropPatchTask._propPatchSetElements
_OBJC_IVAR_$_CoreDAVPropPatchTask._responseItem
_OBJC_IVAR_$_CoreDAVPropPatchTask._sendOrder
_OBJC_IVAR_$_CoreDAVPropStatItem._errorItem
_OBJC_IVAR_$_CoreDAVPropStatItem._prop
_OBJC_IVAR_$_CoreDAVPropStatItem._responseDescription
_OBJC_IVAR_$_CoreDAVPropStatItem._status
_OBJC_IVAR_$_CoreDAVPropertyFindBaseTask._multiStatus
_OBJC_IVAR_$_CoreDAVPropertyFindBaseTask._propertiesToFind
_OBJC_IVAR_$_CoreDAVPropertySearchItem._match
_OBJC_IVAR_$_CoreDAVPropertySearchItem._matchTypeAttribute
_OBJC_IVAR_$_CoreDAVPropertySearchItem._prop
_OBJC_IVAR_$_CoreDAVPutTask._nextETag
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._actions
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._addMemberURL
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._appSpecificContainerItemClass
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._appSpecificDataItemClass
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._childCollectionURL
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._folderURL
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._folderURLToChildrenURLOrder
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._leafURLToETag
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._multiGetBatchSize
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._nextCTag
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._nextPTag
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._nextSyncToken
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._phase
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._preflightCTag
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._previousCTag
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._previousPTag
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._previousSyncToken
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._syncItemOrder
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._syncReportDeletedURLs
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._unsubmittedTasks
_OBJC_IVAR_$_CoreDAVRecursiveContainerSyncTaskGroup._useMultiGet
_OBJC_IVAR_$_CoreDAVRemoveItem._prop
_OBJC_IVAR_$_CoreDAVRequestLogger._headerSortDescriptors
_OBJC_IVAR_$_CoreDAVRequestLogger._provider
_OBJC_IVAR_$_CoreDAVRequestLogger._snippetsLogged
_OBJC_IVAR_$_CoreDAVResourceTypeItem._addressBook
_OBJC_IVAR_$_CoreDAVResourceTypeItem._collection
_OBJC_IVAR_$_CoreDAVResourceTypeItem._principal
_OBJC_IVAR_$_CoreDAVResourceTypeItem._searchAddressBook
_OBJC_IVAR_$_CoreDAVResourceTypeItem._shared
_OBJC_IVAR_$_CoreDAVResourceTypeItem._unauthenticated
_OBJC_IVAR_$_CoreDAVResponseItem._errorItem
_OBJC_IVAR_$_CoreDAVResponseItem._hrefs
_OBJC_IVAR_$_CoreDAVResponseItem._location
_OBJC_IVAR_$_CoreDAVResponseItem._matchResults
_OBJC_IVAR_$_CoreDAVResponseItem._propStats
_OBJC_IVAR_$_CoreDAVResponseItem._responseDescription
_OBJC_IVAR_$_CoreDAVResponseItem._serverUID
_OBJC_IVAR_$_CoreDAVResponseItem._status
_OBJC_IVAR_$_CoreDAVSRVLookupTask._fetchedRecords
_OBJC_IVAR_$_CoreDAVSRVLookupTask._host
_OBJC_IVAR_$_CoreDAVSRVLookupTask._serviceString
_OBJC_IVAR_$_CoreDAVSRVResourceRecord._port
_OBJC_IVAR_$_CoreDAVSRVResourceRecord._priority
_OBJC_IVAR_$_CoreDAVSRVResourceRecord._serviceString
_OBJC_IVAR_$_CoreDAVSRVResourceRecord._target
_OBJC_IVAR_$_CoreDAVSRVResourceRecord._weight
_OBJC_IVAR_$_CoreDAVSetItem._prop
_OBJC_IVAR_$_CoreDAVSupportedReportItem._report
_OBJC_IVAR_$_CoreDAVSupportedReportSetItem._supportedReports
_OBJC_IVAR_$_CoreDAVSyncReportItem._syncToken
_OBJC_IVAR_$_CoreDAVSyncReportTask._moreToSync
_OBJC_IVAR_$_CoreDAVSyncReportTask._nextSyncToken
_OBJC_IVAR_$_CoreDAVSyncReportTask._previousSyncToken
_OBJC_IVAR_$_CoreDAVSyncReportTask._wasInvalidSyncToken
_OBJC_IVAR_$_CoreDAVTask._accountInfoProvider
_OBJC_IVAR_$_CoreDAVTask._depth
_OBJC_IVAR_$_CoreDAVTask._numDownloadedElements
_OBJC_IVAR_$_CoreDAVTask._taskManager
_OBJC_IVAR_$_CoreDAVTaskGroup._accountInfoProvider
_OBJC_IVAR_$_CoreDAVTaskGroup._isCancelling
_OBJC_IVAR_$_CoreDAVTaskGroup._isFinished
_OBJC_IVAR_$_CoreDAVTaskGroup._isTearingDown
_OBJC_IVAR_$_CoreDAVTaskGroup._outstandingTasks
_OBJC_IVAR_$_CoreDAVTaskGroup._taskManager
_OBJC_IVAR_$_CoreDAVTaskGroup._timeoutInterval
_OBJC_IVAR_$_CoreDAVUpdateACLTaskGroup._aceItems
_OBJC_IVAR_$_CoreDAVUpdateACLTaskGroup._fetchTask
_OBJC_IVAR_$_CoreDAVUpdateACLTaskGroup._state
_OBJC_IVAR_$_CoreDAVUpdateACLTaskGroup._url
_OBJC_IVAR_$_CoreDAVValidatePrincipalsTaskGroup._authError
_OBJC_IVAR_$_CoreDAVValidatePrincipalsTaskGroup._principalURLs
_OBJC_IVAR_$_CoreDAVValidatePrincipalsTaskGroup._urlBeingExamined
_OBJC_IVAR_$_CoreDAVValidatePrincipalsTaskGroup._urlsToExamine
_OBJC_IVAR_$_CoreDAVXMLElementAttribute._name
_OBJC_IVAR_$_CoreDAVXMLElementAttribute._nameSpace
_OBJC_IVAR_$_CoreDAVXMLElementAttribute._value
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._baseURL
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._cDATA
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._cachedElementParseRules
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._characters
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._checkedElementValidityIfRootElement
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._currentlyParsingSubItem
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._element
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._isUnrecognized
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._parentElement
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._parentElementSetter
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._parentGenerator
_OBJC_IVAR_$_CoreDAVXMLElementGenerator._parsingState
_OBJC_METACLASS_$_CardDAVAddressBookContainer
_OBJC_METACLASS_$_CardDAVBulkChangeTask
_OBJC_METACLASS_$_CardDAVBulkUploadTaskGroup
_OBJC_METACLASS_$_CardDAVFolderGetTask
_OBJC_METACLASS_$_CardDAVFolderInfoTaskGroup
_OBJC_METACLASS_$_CardDAVFolderMultiGetTask
_OBJC_METACLASS_$_CardDAVFolderQueryTask
_OBJC_METACLASS_$_CardDAVFolderSyncTaskGroup
_OBJC_METACLASS_$_CardDAVGetAccountPropertiesTaskGroup
_OBJC_METACLASS_$_CardDAVMultiPutTask
_OBJC_METACLASS_$_CardDAVUpdateMeCardTaskGroup
_OBJC_METACLASS_$_CoreDAVACEItem
_OBJC_METACLASS_$_CoreDAVACLItem
_OBJC_METACLASS_$_CoreDAVACLTask
_OBJC_METACLASS_$_CoreDAVAction
_OBJC_METACLASS_$_CoreDAVActionBackedTask
_OBJC_METACLASS_$_CoreDAVBulkChangeTask
_OBJC_METACLASS_$_CoreDAVBulkRequestsItem
_OBJC_METACLASS_$_CoreDAVBulkRequestsSetItem
_OBJC_METACLASS_$_CoreDAVBulkRequestsSupportedItem
_OBJC_METACLASS_$_CoreDAVBulkUploadTaskGroup
_OBJC_METACLASS_$_CoreDAVCalendarServerEmailAddressSetItem
_OBJC_METACLASS_$_CoreDAVCalendarServerPushTransportsItem
_OBJC_METACLASS_$_CoreDAVCalendarServerTransportItem
_OBJC_METACLASS_$_CoreDAVContainer
_OBJC_METACLASS_$_CoreDAVContainerInfoSyncTaskGroup
_OBJC_METACLASS_$_CoreDAVContainerInfoTaskGroup
_OBJC_METACLASS_$_CoreDAVContainerMultiGetTask
_OBJC_METACLASS_$_CoreDAVContainerQueryTask
_OBJC_METACLASS_$_CoreDAVContainerSyncTaskGroup
_OBJC_METACLASS_$_CoreDAVCopyOrMoveTask
_OBJC_METACLASS_$_CoreDAVCopyTask
_OBJC_METACLASS_$_CoreDAVCurrentUserPrincipalItem
_OBJC_METACLASS_$_CoreDAVCurrentUserPrivilegeSetItem
_OBJC_METACLASS_$_CoreDAVDeleteTask
_OBJC_METACLASS_$_CoreDAVDenyItem
_OBJC_METACLASS_$_CoreDAVDiscoveryAccountInfo
_OBJC_METACLASS_$_CoreDAVDiscoveryTaskGroup
_OBJC_METACLASS_$_CoreDAVErrorItem
_OBJC_METACLASS_$_CoreDAVExpandPropertiesTask
_OBJC_METACLASS_$_CoreDAVExpandProperty
_OBJC_METACLASS_$_CoreDAVFolderContentsMultiGetTask
_OBJC_METACLASS_$_CoreDAVGetAccountPropertiesTaskGroup
_OBJC_METACLASS_$_CoreDAVGetTask
_OBJC_METACLASS_$_CoreDAVGetToFileTask
_OBJC_METACLASS_$_CoreDAVGrantItem
_OBJC_METACLASS_$_CoreDAVHeadTask
_OBJC_METACLASS_$_CoreDAVHrefItem
_OBJC_METACLASS_$_CoreDAVInvertItem
_OBJC_METACLASS_$_CoreDAVItem
_OBJC_METACLASS_$_CoreDAVItemParserMapping
_OBJC_METACLASS_$_CoreDAVItemWithHrefChildItem
_OBJC_METACLASS_$_CoreDAVItemWithHrefChildItemTolerateBarePayload
_OBJC_METACLASS_$_CoreDAVItemWithHrefChildren
_OBJC_METACLASS_$_CoreDAVItemWithNoChildren
_OBJC_METACLASS_$_CoreDAVLeafDataPayload
_OBJC_METACLASS_$_CoreDAVLeafItem
_OBJC_METACLASS_$_CoreDAVLogging
_OBJC_METACLASS_$_CoreDAVMatchResultsItem
_OBJC_METACLASS_$_CoreDAVMkcolResponseItem
_OBJC_METACLASS_$_CoreDAVMkcolTask
_OBJC_METACLASS_$_CoreDAVMoveTask
_OBJC_METACLASS_$_CoreDAVMoveWithFallbackTaskGroup
_OBJC_METACLASS_$_CoreDAVMultiGetWithFallbackTaskGroup
_OBJC_METACLASS_$_CoreDAVMultiMoveWithFallbackTaskGroup
_OBJC_METACLASS_$_CoreDAVMultiPutTask
_OBJC_METACLASS_$_CoreDAVMultiStatusItem
_OBJC_METACLASS_$_CoreDAVNullParser
_OBJC_METACLASS_$_CoreDAVOctetStreamParser
_OBJC_METACLASS_$_CoreDAVOctetStreamToFileParser
_OBJC_METACLASS_$_CoreDAVOptionsTask
_OBJC_METACLASS_$_CoreDAVOrderedAction
_OBJC_METACLASS_$_CoreDAVParseRule
_OBJC_METACLASS_$_CoreDAVPostOrPutTask
_OBJC_METACLASS_$_CoreDAVPostTask
_OBJC_METACLASS_$_CoreDAVPrincipalItem
_OBJC_METACLASS_$_CoreDAVPrincipalPropertySearchTask
_OBJC_METACLASS_$_CoreDAVPrincipalSearchPropertyItem
_OBJC_METACLASS_$_CoreDAVPrincipalSearchPropertySetItem
_OBJC_METACLASS_$_CoreDAVPrincipalSearchPropertySetTask
_OBJC_METACLASS_$_CoreDAVPropFindItem
_OBJC_METACLASS_$_CoreDAVPropFindTask
_OBJC_METACLASS_$_CoreDAVPropPatchTask
_OBJC_METACLASS_$_CoreDAVPropStatItem
_OBJC_METACLASS_$_CoreDAVPropertyFindBaseTask
_OBJC_METACLASS_$_CoreDAVPropertySearchItem
_OBJC_METACLASS_$_CoreDAVPropertyUpdateItem
_OBJC_METACLASS_$_CoreDAVPutStreamTask
_OBJC_METACLASS_$_CoreDAVPutTask
_OBJC_METACLASS_$_CoreDAVRecursiveContainerSyncTaskGroup
_OBJC_METACLASS_$_CoreDAVRemoveItem
_OBJC_METACLASS_$_CoreDAVRequestLogger
_OBJC_METACLASS_$_CoreDAVResourceTypeItem
_OBJC_METACLASS_$_CoreDAVResponseItem
_OBJC_METACLASS_$_CoreDAVSRVLookupTask
_OBJC_METACLASS_$_CoreDAVSRVResourceRecord
_OBJC_METACLASS_$_CoreDAVSetItem
_OBJC_METACLASS_$_CoreDAVSupportedReportItem
_OBJC_METACLASS_$_CoreDAVSupportedReportSetItem
_OBJC_METACLASS_$_CoreDAVSyncReportItem
_OBJC_METACLASS_$_CoreDAVSyncReportTask
_OBJC_METACLASS_$_CoreDAVTask
_OBJC_METACLASS_$_CoreDAVTaskGroup
_OBJC_METACLASS_$_CoreDAVUpdateACLTaskGroup
_OBJC_METACLASS_$_CoreDAVValidatePrincipalsTaskGroup
_OBJC_METACLASS_$_CoreDAVXMLData
_OBJC_METACLASS_$_CoreDAVXMLElementAttribute
_OBJC_METACLASS_$_CoreDAVXMLElementGenerator
_OBJC_METACLASS_$_CoreDAVXMLParser
__CDVTaskLogInternal
__CoreDAVSecCopyIdentityFromPersist
__CoreDAVSecDeleteIdentityByPersistentRef
__CoreDAVSecIdentityCopySSLClientAuthenticationChain
_cdXMLACE
_cdXMLACL
_cdXMLACLPrincipalPropertySet
_cdXMLAddMember
_cdXMLAll
_cdXMLAllProp
_cdXMLAppleBookmarksURI
_cdXMLAppleExtraAttributes
_cdXMLApplyToPrincipalCollectionSet
_cdXMLAuthenticated
_cdXMLBind
_cdXMLCalDAVAnyOf
_cdXMLCalDAVCalendarFreeBusyReport
_cdXMLCalDAVCalendarHomeSet
_cdXMLCalDAVCalendarMultiGetReport
_cdXMLCalDAVCalendarQueryReport
_cdXMLCalDAVCalendarSearchReport
_cdXMLCalDAVInboxURL
_cdXMLCalDAVLimit
_cdXMLCalDAVNResults
_cdXMLCalDAVOutboxURL
_cdXMLCalDAVTest
_cdXMLCalDAVURI
_cdXMLCalDAVUserAddressSet
_cdXMLCalDAVValidTimezone
_cdXMLCalendar
_cdXMLCalendarColor
_cdXMLCalendarData
_cdXMLCalendarDescription
_cdXMLCalendarFreeBusySet
_cdXMLCalendarOrder
_cdXMLCalendarServerAPSBundleID
_cdXMLCalendarServerAllowedSharingModes
_cdXMLCalendarServerCanBePublished
_cdXMLCalendarServerCanBeShared
_cdXMLCalendarServerCategory
_cdXMLCalendarServerCourierServer
_cdXMLCalendarServerCreatedBy
_cdXMLCalendarServerDropboxURL
_cdXMLCalendarServerEmailAddress
_cdXMLCalendarServerEmailAddressSet
_cdXMLCalendarServerGetCTag
_cdXMLCalendarServerLanguage
_cdXMLCalendarServerLastModifiedBy
_cdXMLCalendarServerMatchResults
_cdXMLCalendarServerNotificationURL
_cdXMLCalendarServerPrivateComments
_cdXMLCalendarServerPublishURL
_cdXMLCalendarServerPushKey
_cdXMLCalendarServerPushTransports
_cdXMLCalendarServerReadFreeBusy
_cdXMLCalendarServerRefreshInterval
_cdXMLCalendarServerRegion
_cdXMLCalendarServerShared
_cdXMLCalendarServerSource
_cdXMLCalendarServerSubscribedStripAlarms
_cdXMLCalendarServerSubscribedStripAttachments
_cdXMLCalendarServerSubscribedStripTodos
_cdXMLCalendarServerSubscriptionURL
_cdXMLCalendarServerTitle
_cdXMLCalendarServerTokenURL
_cdXMLCalendarServerTransport
_cdXMLCalendarServerUID
_cdXMLCalendarServerURI
_cdXMLCalendarServerXMPPHeartbeat
_cdXMLCalendarServerXMPPHeartbeatMinutes
_cdXMLCalendarServerXMPPHeartbeatURI
_cdXMLCalendarServerXMPPServer
_cdXMLCalendarServerXMPPURI
_cdXMLCalendarTimeZone
_cdXMLCardDAVAddressBook
_cdXMLCardDAVAddressBookDescription
_cdXMLCardDAVAddressBookHomeSet
_cdXMLCardDAVAddressBookMultiGetReport
_cdXMLCardDAVAddressBookQueryReport
_cdXMLCardDAVAddressData
_cdXMLCardDAVAllOf
_cdXMLCardDAVAnyOf
_cdXMLCardDAVCollation
_cdXMLCardDAVContains
_cdXMLCardDAVDirectory
_cdXMLCardDAVDirectoryGateway
_cdXMLCardDAVFilter
_cdXMLCardDAVLimit
_cdXMLCardDAVMatchType
_cdXMLCardDAVMaxImageSize
_cdXMLCardDAVMaxResourceSize
_cdXMLCardDAVMeCard
_cdXMLCardDAVNResults
_cdXMLCardDAVName
_cdXMLCardDAVPropFilter
_cdXMLCardDAVSearchAddressBook
_cdXMLCardDAVTest
_cdXMLCardDAVTextMatch
_cdXMLCardDAVURI
_cdXMLCardDAVUnicodeCasemap
_cdXMLCardDAVValidAddressData
_cdXMLCollection
_cdXMLComp
_cdXMLCompFilter
_cdXMLCoreDAVNoUIDConflict
_cdXMLCreationDate
_cdXMLCurrentUserPrincipal
_cdXMLCurrentUserPrivilegeSet
_cdXMLDAVURI
_cdXMLDeny
_cdXMLDepth
_cdXMLDescription
_cdXMLDisplayName
_cdXMLEncoding
_cdXMLError
_cdXMLExclusive
_cdXMLExpandProperty
_cdXMLExpandedGroupMemberSet
_cdXMLFilter
_cdXMLGetContent
_cdXMLGetContentType
_cdXMLGetETag
_cdXMLGetLastModified
_cdXMLGrant
_cdXMLGroupMemberSet
_cdXMLGroupMembership
_cdXMLHREF
_cdXMLInclude
_cdXMLInherited
_cdXMLInvert
_cdXMLIsFamilyCalendar
_cdXMLIsMarkedImmutableSharees
_cdXMLIsMarkedUndeletable
_cdXMLLocation
_cdXMLMMAPSEnv
_cdXMLMMPTag
_cdXMLMMUserState
_cdXMLMMeBulkCRUD
_cdXMLMMeBulkDelete
_cdXMLMMeBulkInsert
_cdXMLMMeBulkMaxResources
_cdXMLMMeBulkMaxSize
_cdXMLMMeBulkRequests
_cdXMLMMeBulkSimple
_cdXMLMMeBulkSupported
_cdXMLMMeBulkUpdate
_cdXMLMMeCalURI
_cdXMLMMeCtagOkay
_cdXMLMMeDAVURI
_cdXMLMMeDelete
_cdXMLMMeIfMatch
_cdXMLMMeImageError
_cdXMLMMeInvalidImageType
_cdXMLMMeMaxImageSize
_cdXMLMMeMultiPut
_cdXMLMMeResource
_cdXMLMMeXMPPDAVURL
_cdXMLMatch
_cdXMLMaxAttendeesPerInstance
_cdXMLMaxResources
_cdXMLMkcol
_cdXMLMkcolResponse
_cdXMLMultiGet
_cdXMLMultiStatus
_cdXMLName
_cdXMLNameSpace
_cdXMLNotification
_cdXMLNumberOfMatchesWithinLimits
_cdXMLOpaque
_cdXMLOwner
_cdXMLParamFilter
_cdXMLPrincipal
_cdXMLPrincipalCollectionSet
_cdXMLPrincipalMatch
_cdXMLPrincipalPropertySearch
_cdXMLPrincipalSearchProperty
_cdXMLPrincipalSearchPropertySet
_cdXMLPrincipalURL
_cdXMLPrivilege
_cdXMLProp
_cdXMLPropFilter
_cdXMLPropFind
_cdXMLPropName
_cdXMLPropStat
_cdXMLProperty
_cdXMLPropertySearch
_cdXMLPropertyUpdate
_cdXMLProtected
_cdXMLQuotaAvailable
_cdXMLQuotaExceeded
_cdXMLQuotaUsed
_cdXMLRead
_cdXMLReadACL
_cdXMLReadCurrentUserPrivilegeSet
_cdXMLRefreshRate
_cdXMLRemove
_cdXMLReport
_cdXMLResourceID
_cdXMLResourceType
_cdXMLResponse
_cdXMLResponseDescription
_cdXMLScheduleCalendarTransp
_cdXMLScheduleDefaultCalendarURL
_cdXMLScheduleInbox
_cdXMLScheduleOutbox
_cdXMLSelf
_cdXMLSet
_cdXMLStatus
_cdXMLSubscribed
_cdXMLSupportedCalendarComponentSet
_cdXMLSupportedReport
_cdXMLSupportedReportSet
_cdXMLSyncCollection
_cdXMLSyncLevel
_cdXMLSyncToken
_cdXMLTimeRange
_cdXMLTransparent
_cdXMLUnauthenticated
_cdXMLUnbind
_cdXMLUnlock
_cdXMLValidSyncToken
_cdXMLVersion
_cdXMLWrite
_cdXMLWriteACL
_cdXMLWriteContent
_cdXMLWriteProperties
_cdXMLiCalURI
_initializeLibXMLParser
_kCDVRedirectReasonKey
_kCDVRedirectURLKey
_CFAbsoluteTimeGetCurrent
_CFArrayAppendValue
_CFArrayCreateMutable
_CFArrayGetCount
_CFArrayGetValueAtIndex
_CFArrayRemoveValueAtIndex
_CFDateCreate
_CFDateFormatterCreate
_CFDateFormatterCreateStringWithDate
_CFDateFormatterSetFormat
_CFDictionaryCreateMutable
_CFDictionaryCreateMutableCopy
_CFDictionaryGetValue
_CFDictionaryGetValueIfPresent
_CFDictionaryRemoveValue
_CFDictionarySetValue
_CFHostCancelInfoResolution
_CFHostCreateWithName
_CFHostGetSRVRecords
_CFHostScheduleWithRunLoop
_CFHostSetClient
_CFHostStartInfoResolution
_CFHostUnscheduleFromRunLoop
_CFLocaleCopyCurrent
_CFMakeCollectable
_CFRelease
_CFRunLoopGetCurrent
_CFSetAddValue
_CFSetCreateMutable
_CFSetGetCount
_CFSetRemoveValue
_CFStringCreateWithCString
_CFStringTokenizerAdvanceToNextToken
_CFStringTokenizerCreate
_CFStringTokenizerGetCurrentTokenRange
_CFURLCopyPath
_CFURLCreateStringByAddingPercentEscapes
_CFURLCreateStringByReplacingPercentEscapes
_CFURLRequestCopyHTTPCookieStorage
_CFURLRequestCreateMutableCopy
_CFURLRequestGetSSLProperties
_CFURLRequestSetSSLProperties
_CFXMLCreateStringByEscapingEntities
_CFXMLCreateStringByUnescapingEntities
_NSDefaultRunLoopMode
_NSGenericException
_NSInvalidArgumentException
_NSLog
_NSStringFromClass
_NSURLAuthenticationMethodClientCertificate
_NSURLAuthenticationMethodHTTPBasic
_NSURLAuthenticationMethodHTTPDigest
_NSURLAuthenticationMethodOAuth
_NSURLAuthenticationMethodServerTrust
_NSURLAuthenticationMethodXMobileMeAuthToken
_NSURLErrorDomain
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCache
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSHTTPCookie
_OBJC_CLASS_$_NSHTTPCookieStorage
_OBJC_CLASS_$_NSInputStream
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSMutableURLRequest
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSURLConnection
_OBJC_CLASS_$_NSURLCredential
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSXMLParser
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSXMLParser
__Block_copy
__Block_object_assign
__Block_object_dispose
__Block_release
__CFCopyServerVersionDictionary
__CFCopySystemVersionDictionary
__CFHTTPCookieStorageCopyRequestHeaderFieldsForURL
__CFURLCredentialCreateOAuth2
__CFURLCredentialCreateXMobileMeAuthToken
__CFURLRequestSetStorageSession
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___assert_rtn
___bzero
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__kCFBundleShortVersionStringKey
__kCFStreamPropertySocketImmediateBufferTimeOut
__kCFSystemVersionBuildVersionKey
__kCFSystemVersionProductNameKey
__kCFSystemVersionProductVersionKey
__objc_empty_cache
_calloc
_deflate
_deflateEnd
_deflateInit2_
_dispatch_after
_dispatch_once
_dispatch_queue_create
_dispatch_release
_dispatch_sync
_dispatch_time
_free
_inflate
_inflateEnd
_inflateInit2_
_kCFAllocatorDefault
_kCFAllocatorSystemDefault
_kCFBooleanTrue
_kCFBundleIdentifierKey
_kCFRunLoopCommonModes
_kCFStreamSSLCertificates
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kCFURLConnectionSocketStreamProperties
_kCFURLConnectionSuspensionThreshold
_kCFURLConnectionURLConnectionProperties
_kCFURLRequestPreAuthXMMeAuthToken
_malloc
_memset
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_enumerationMutation
_objc_exception_throw
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_setProperty
_objc_sync_enter
_objc_sync_exit
_strlen
_sysctl
_xmlDocDumpFormatMemory
_xmlFree
_xmlFreeDoc
_xmlFreeTextWriter
_xmlInitParser
_xmlNewTextWriterDoc
_xmlTextWriterEndAttribute
_xmlTextWriterEndDocument
_xmlTextWriterFullEndElement
_xmlTextWriterStartAttributeNS
_xmlTextWriterStartDocument
_xmlTextWriterStartElement
_xmlTextWriterStartElementNS
_xmlTextWriterWriteCDATA
_xmlTextWriterWriteString
dyld_stub_binder
