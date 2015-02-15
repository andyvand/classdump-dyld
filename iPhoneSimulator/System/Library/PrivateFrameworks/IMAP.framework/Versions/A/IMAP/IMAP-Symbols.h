-[IMAPAccountProxy initWithManagedObject:]
-[IMAPAccountProxy dealloc]
-[IMAPAccountProxy invalidate]
+[IMAPAccountProxy accountTypeString]
-[IMAPAccountProxy saslProfileName]
-[IMAPAccountProxy standardPorts]
-[IMAPAccountProxy standardSSLPorts]
-[IMAPAccountProxy requiresAuthentication]
-[IMAPAccountProxy connectAndAuthenticate:]
-[IMAPAccountProxy respondToHostBecomingReachable]
___50-[IMAPAccountProxy respondToHostBecomingReachable]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMAPAccountProxy newConnectedConnectionDiscoveringBestSettings:withConnectTimeout:readWriteTimeout:]
-[IMAPAccountProxy authenticatedConnection]
-[IMAPAccountProxy newUnreadMessagesHaveBeenReceivedInInbox]
-[IMAPAccountProxy incrementCountOfNewUnreadMessagesReceivedInInbox:]
-[IMAPAccountProxy incrementTotalCountOfMessagesReceived:]
-[IMAPAccountProxy cachePolicy]
-[IMAPAccountProxy setCachePolicy:permanently:]
-[IMAPAccountProxy shouldCacheAttachmentsForMessageWithDateReceived:]
-[IMAPAccountProxy presentOverQuotaAlert]
-[IMAPAccountProxy useIDLEIfAvailable]
-[IMAPAccountProxy setUseIDLEIfAvailable:]
-[IMAPAccountProxy gmailCapabilitiesSupport]
-[IMAPAccountProxy setGmailCapabilitiesSupport:]
-[IMAPAccountProxy offlineCache]
-[IMAPAccountProxy serverPathPrefix]
-[IMAPAccountProxy setServerPathPrefix:permanently:]
-[IMAPAccountProxy IMAPMailboxForMailboxName:createIfNeeded:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___61-[IMAPAccountProxy IMAPMailboxForMailboxName:createIfNeeded:]_block_invoke
___copy_helper_block_271
___destroy_helper_block_272
-[IMAPAccountProxy handleResponseCodeFromResponse:]
-[IMAPAccountProxy quotaRootForName:createIfNeeded:]
-[IMAPAccountProxy allowsPartialDownloads]
-[IMAPAccountProxy sendAccountNeedsCheckingNotification]
___56-[IMAPAccountProxy sendAccountNeedsCheckingNotification]_block_invoke
___copy_helper_block_287
___destroy_helper_block_288
-[IMAPAccountProxy backgroundFetchCompleted]
-[IMAPAccountProxy shouldMoveDeletedMessagesToTrash]
-[IMAPAccountProxy recoverFromConnectionLoss]
-[IMAPAccountProxy mailboxProxyForMailbox:]
-[IMAPAccountProxy setHighPriorityMailbox:]
-[IMAPAccountProxy updateMailboxListFromServer]
___47-[IMAPAccountProxy updateMailboxListFromServer]_block_invoke
___copy_helper_block_430
___destroy_helper_block_431
-[IMAPAccountProxy _updateDefaultMailboxServerName]
-[IMAPAccountProxy _addSubmailboxes:toParent:localMailboxes:serverMailboxes:placeholderMailboxes:]
___98-[IMAPAccountProxy _addSubmailboxes:toParent:localMailboxes:serverMailboxes:placeholderMailboxes:]_block_invoke
___copy_helper_block_483
___destroy_helper_block_484
-[IMAPAccountProxy _imapMailboxForMailboxProxy:]
-[IMAPAccountProxy updateAllMailboxContentsFromServer]
-[IMAPAccountProxy setAccountState:]
___36-[IMAPAccountProxy setAccountState:]_block_invoke
___copy_helper_block_500
___destroy_helper_block_501
-[IMAPAccountProxy keychainProtocol]
-[IMAPAccountProxy portNumberForKeychain]
-[IMAPAccountProxy newMailboxProxyWithMailbox:]
-[IMAPAccountProxy allMailboxProxies]
-[IMAPAccountProxy maximumConnectionCount]
-[IMAPAccountProxy useDefaultMailboxAsMailboxHierarchyRoot]
-[IMAPAccountProxy playOfflineActions]
-[IMAPAccountProxy shouldAddMailboxToPersistence:withParent:]
-[IMAPAccountProxy deleteMailboxFromPersistence:]
-[IMAPAccountProxy tlsCertificate]
-[IMAPAccountProxy setTlsCertificate:]
-[IMAPAccountProxy checkOutGatewayForMailbox:highPriority:needsCheckIn:]
-[IMAPAccountProxy checkOutExistingGatewayForMailbox:]
-[IMAPAccountProxy _recoverFromConnectionlessStateHighPriority:]
-[IMAPAccountProxy addMailboxToServer:parentMailbox:]
___53-[IMAPAccountProxy addMailboxToServer:parentMailbox:]_block_invoke
___copy_helper_block_571
___destroy_helper_block_572
-[IMAPAccountProxy renameMailbox:newParentMailbox:]
___51-[IMAPAccountProxy renameMailbox:newParentMailbox:]_block_invoke
___copy_helper_block_580
___destroy_helper_block_581
-[IMAPAccountProxy deleteMailboxFromServer:]
-[IMAPAccountProxy _separatorCharacterWithGateway:]
-[IMAPAccountProxy _serverNameForMailbox:parentMailbox:separatorCharacter:]
-[IMAPAccountProxy _serverNameComponentForMailboxName:]
-[IMAPAccountProxy separatorCharacter]
-[IMAPAccountProxy setSeparatorCharacter:]
-[IMAPAccountProxy recoveringFromConnectionLoss]
-[IMAPAccountProxy setRecoveringFromConnectionLoss:]
-[IMAPAccountProxy serverID]
-[IMAPAccountProxy setServerID:]
-[IMAPAccountProxy readBufferSize]
-[IMAPAccountProxy setReadBufferSize:]
-[IMAPAccountProxy offlineRecoveryGateway]
-[IMAPAccountProxy setOfflineRecoveryGateway:]
-[IMAPAccountProxy defaultHighPriorityMailbox]
-[IMAPAccountProxy .cxx_destruct]
-[IMAPAttachmentsDownload initWithIMAPMessage:]
-[IMAPAttachmentsDownload createCopy]
-[IMAPAttachmentsDownload saveCompletedDownloads]
-[IMAPAttachmentsDownload message]
-[IMAPAttachmentsDownload setMessage:]
-[IMAPAttachmentsDownload .cxx_destruct]
-[IMAPBasicResponse _responseName]
-[IMAPBasicResponse userData]
-[IMAPBasicResponse setUserData:]
-[IMAPBasicResponse userString]
-[IMAPBasicResponse description]
-[IMAPBasicResponse responseCode]
-[IMAPBasicResponse setResponseCode:]
-[IMAPBasicResponse responseInfo]
-[IMAPBasicResponse setResponseInfo:]
-[IMAPBasicResponse .cxx_destruct]
-[IMAPContinuationResponse _responseName]
-[IMAPContinuationResponse isUntagged]
+[IMAPOKResponse handlesResponseWithName:ofLength:]
-[IMAPOKResponse _responseName]
+[IMAPBadResponse handlesResponseWithName:ofLength:]
-[IMAPBadResponse _responseName]
+[IMAPNoResponse handlesResponseWithName:ofLength:]
-[IMAPNoResponse _responseName]
+[IMAPPreauthResponse handlesResponseWithName:ofLength:]
-[IMAPPreauthResponse _responseName]
+[IMAPByeResponse handlesResponseWithName:ofLength:]
-[IMAPByeResponse _responseName]
+[IMAPCapabilityResponse handlesResponseWithName:ofLength:]
-[IMAPCapabilityResponse description]
-[IMAPCapabilityResponse capabilities]
-[IMAPCapabilityResponse setCapabilities:]
-[IMAPCapabilityResponse .cxx_destruct]
-[IMAPClientStartTLSOperation init]
-[IMAPClientStartTLSOperation commandTypeString]
-[IMAPClientStartTLSOperation activityString]
-[IMAPClientStartTLSOperation executeOnConnection:]
-[IMAPClientStartTLSOperation minRequiredConnectionState]
-[IMAPClientStartTLSOperation maxAllowedConnectionState]
-[IMAPClientAuthenticateOperation initWithSaslClient:]
-[IMAPClientAuthenticateOperation init]
-[IMAPClientAuthenticateOperation commandTypeString]
-[IMAPClientAuthenticateOperation activityString]
-[IMAPClientAuthenticateOperation debugCommandString]
-[IMAPClientAuthenticateOperation handlesAllUntaggedResponses]
-[IMAPClientAuthenticateOperation newCommandDataForLiteralPlus:]
-[IMAPClientAuthenticateOperation executeOnConnection:]
-[IMAPClientAuthenticateOperation minRequiredConnectionState]
-[IMAPClientAuthenticateOperation maxAllowedConnectionState]
-[IMAPClientAuthenticateOperation saslClient]
-[IMAPClientAuthenticateOperation includeInitialResponse]
-[IMAPClientAuthenticateOperation setIncludeInitialResponse:]
-[IMAPClientAuthenticateOperation .cxx_destruct]
-[IMAPClientLoginOperation initWithUsername:password:]
-[IMAPClientLoginOperation init]
-[IMAPClientLoginOperation commandTypeString]
-[IMAPClientLoginOperation activityString]
-[IMAPClientLoginOperation debugCommandString]
-[IMAPClientLoginOperation handlesAllUntaggedResponses]
-[IMAPClientLoginOperation newCommandDataForLiteralPlus:]
-[IMAPClientLoginOperation executeOnConnection:]
-[IMAPClientLoginOperation minRequiredConnectionState]
-[IMAPClientLoginOperation maxAllowedConnectionState]
-[IMAPClientLoginOperation username]
-[IMAPClientLoginOperation quotedUsername]
-[IMAPClientLoginOperation password]
-[IMAPClientLoginOperation .cxx_destruct]
-[IMAPClientData initWithData:]
-[IMAPClientData init]
-[IMAPClientData initWithStringWaitingForArguments:]
-[IMAPClientData addStringArgument:]
-[IMAPClientData addDataArgument:literalPlus:]
-[IMAPClientData freeze]
-[IMAPClientData data]
-[IMAPClientData setData:]
-[IMAPClientData commandString]
-[IMAPClientData setCommandString:]
-[IMAPClientData nextData]
-[IMAPClientData setNextData:]
-[IMAPClientData dontLogRange]
-[IMAPClientData setDontLogRange:]
-[IMAPClientData isFrozen]
-[IMAPClientData setIsFrozen:]
-[IMAPClientData .cxx_destruct]
+[IMAPClientFetchDataItem flagsDataItem]
___40+[IMAPClientFetchDataItem flagsDataItem]_block_invoke
+[IMAPClientFetchDataItem UIDDataItem]
___38+[IMAPClientFetchDataItem UIDDataItem]_block_invoke
+[IMAPClientFetchDataItem bodyStructureDataItem]
___48+[IMAPClientFetchDataItem bodyStructureDataItem]_block_invoke
+[IMAPClientFetchDataItem internalDateDataItem]
___47+[IMAPClientFetchDataItem internalDateDataItem]_block_invoke
+[IMAPClientFetchDataItem sizeDataItem]
___39+[IMAPClientFetchDataItem sizeDataItem]_block_invoke
+[IMAPClientFetchDataItem modificationSequenceDataItem]
___55+[IMAPClientFetchDataItem modificationSequenceDataItem]_block_invoke
+[IMAPClientFetchDataItem gmailLabelsDataItem]
___46+[IMAPClientFetchDataItem gmailLabelsDataItem]_block_invoke
-[IMAPClientFetchDataItem isEqual:]
-[IMAPClientFetchDataItem hash]
-[IMAPClientFetchDataItem description]
-[IMAPClientFetchDataItem commandString]
-[IMAPClientFetchDataItem setCommandString:]
-[IMAPClientFetchDataItem .cxx_destruct]
-[IMAPClientFetchChangedSinceDataItem initWithModificationSequenceNumber:]
-[IMAPClientFetchChangedSinceDataItem init]
+[IMAPClientFetchBodyDataItem newSectionSpecifierFromPart:text:]
-[IMAPClientFetchBodyDataItem initWithPartSectionSpecifier:textSectionSpecifier:peek:headerFieldNames:dataRange:]
-[IMAPClientFetchBodyDataItem init]
-[IMAPClientFetchBodyDataItem initWithPartSectionSpecifier:textSectionSpecifier:dataRange:]
-[IMAPClientFetchBodyDataItem initWithHeaderFieldNames:]
-[IMAPClientFetchBodyDataItem _finalizeCommandStringWithHeaderFieldNames:peek:]
-[IMAPClientFetchBodyDataItem isHeader]
-[IMAPClientFetchBodyDataItem textSectionSpecifier]
-[IMAPClientFetchBodyDataItem partSectionSpecifier]
-[IMAPClientFetchBodyDataItem dataRange]
-[IMAPClientFetchBodyDataItem .cxx_destruct]
-[IMAPClientFetchOperation initWithMessageNumbers:]
-[IMAPClientFetchOperation init]
-[IMAPClientFetchOperation initWithRange:]
-[IMAPClientFetchOperation _imapClientFetchOperationCommonInitWithMessageNumbers:]
-[IMAPClientFetchOperation range]
-[IMAPClientFetchOperation setRange:]
-[IMAPClientFetchOperation commandTypeString]
-[IMAPClientFetchOperation activityString]
-[IMAPClientFetchOperation addDataItem:]
-[IMAPClientFetchOperation addMessageSkeletonDataItemsWithAdditionalHeaderFields:]
-[IMAPClientFetchOperation addMessageUidsAndFlagsDataItemsWithAdditionalHeaderFields:]
-[IMAPClientFetchOperation newCommandDataForLiteralPlus:]
-[IMAPClientFetchOperation executeOnConnection:]
-[IMAPClientFetchOperation _isLegalRange:]
-[IMAPClientFetchOperation _nsRangeForIMAPRange:]
-[IMAPClientFetchOperation _newMessageSetCommandString]
-[IMAPClientFetchOperation _fetchDataItemsForMessageSkeletonsWithAdditionalHeaderFields:]
+[IMAPClientFetchOperation _headersToFetch]
+[IMAPClientFetchOperation _fetchDataItemsForMessageSkeletonsWithHeaders:]
-[IMAPClientFetchOperation minRequiredConnectionState]
-[IMAPClientFetchOperation maxAllowedConnectionState]
-[IMAPClientFetchOperation dataItems]
-[IMAPClientFetchOperation setDataItems:]
-[IMAPClientFetchOperation responseHandler]
-[IMAPClientFetchOperation setResponseHandler:]
-[IMAPClientFetchOperation messageNumbers]
-[IMAPClientFetchOperation setMessageNumbers:]
-[IMAPClientFetchOperation .cxx_destruct]
-[IMAPClientFetchUIDOperation _isLegalRange:]
-[IMAPClientFetchUIDOperation commandTypeString]
-[IMAPClientFetchUIDOperation shouldSendAgainOnError]
-[IMAPAggregateFetchUIDOperation initWithOperations:expectedSize:]
-[IMAPAggregateFetchUIDOperation initWithOperations:]
-[IMAPAggregateFetchUIDOperation commandTypeString]
-[IMAPAggregateFetchUIDOperation activityString]
-[IMAPAggregateFetchUIDOperation cleanupAfterCompletion]
-[IMAPAggregateFetchUIDOperation minRequiredConnectionState]
-[IMAPAggregateFetchUIDOperation maxAllowedConnectionState]
-[IMAPAggregateFetchUIDOperation expectedSize]
-[IMAPAggregateFetchUIDOperation setExpectedSize:]
-[IMAPClientIdleOperation init]
-[IMAPClientIdleOperation commandTypeString]
-[IMAPClientIdleOperation activityString]
-[IMAPClientIdleOperation executeOnConnection:]
-[IMAPClientIdleOperation minRequiredConnectionState]
-[IMAPClientIdleOperation maxAllowedConnectionState]
-[IMAPClientDoneOperation init]
-[IMAPClientDoneOperation shouldQueueIdleWhenFinished]
-[IMAPClientDoneOperation setShouldQueueIdleWhenFinished:]
-[IMAPClientDoneOperation _shouldQueueIdleNow]
-[IMAPClientDoneOperation commandTypeString]
-[IMAPClientDoneOperation activityString]
-[IMAPClientDoneOperation newCommandDataForLiteralPlus:]
-[IMAPClientDoneOperation resetDate]
-[IMAPClientDoneOperation setResetDate:]
-[IMAPClientDoneOperation setSequenceNumber:]
-[IMAPClientDoneOperation executeOnConnection:]
-[IMAPClientDoneOperation cancel]
-[IMAPClientDoneOperation isReady]
-[IMAPClientDoneOperation updateReadiness]
-[IMAPClientDoneOperation setResetDateEarlierThanNow]
-[IMAPClientDoneOperation alwaysAllowToComplete]
-[IMAPClientDoneOperation minRequiredConnectionState]
-[IMAPClientDoneOperation maxAllowedConnectionState]
-[IMAPClientDoneOperation .cxx_destruct]
-[IMAPClientIDOperation init]
-[IMAPClientIDOperation commandTypeString]
-[IMAPClientIDOperation activityString]
-[IMAPClientIDOperation newCommandDataForLiteralPlus:]
-[IMAPClientIDOperation executeOnConnection:]
-[IMAPClientIDOperation minRequiredConnectionState]
-[IMAPClientIDOperation maxAllowedConnectionState]
-[IMAPClientListOperation initWithMailboxName:referenceName:options:]
-[IMAPClientListOperation initWithMailboxName:options:]
-[IMAPClientListOperation init]
-[IMAPClientListOperation commandTypeString]
-[IMAPClientListOperation activityString]
-[IMAPClientListOperation shouldSendAgainOnError]
-[IMAPClientListOperation newCommandDataForLiteralPlus:]
-[IMAPClientListOperation executeOnConnection:]
-[IMAPClientListOperation minRequiredConnectionState]
-[IMAPClientListOperation maxAllowedConnectionState]
-[IMAPClientListOperation mailboxName]
-[IMAPClientListOperation setMailboxName:]
-[IMAPClientListOperation referenceName]
-[IMAPClientListOperation setReferenceName:]
-[IMAPClientListOperation options]
-[IMAPClientListOperation setOptions:]
-[IMAPClientListOperation listing]
-[IMAPClientListOperation setListing:]
-[IMAPClientListOperation separator]
-[IMAPClientListOperation setSeparator:]
-[IMAPClientListOperation .cxx_destruct]
-[IMAPClientLSubOperation commandTypeString]
-[IMAPClientLSubOperation activityString]
-[IMAPClientMailboxOperation initWithMailboxName:]
-[IMAPClientMailboxOperation init]
-[IMAPClientMailboxOperation shouldSendAgainOnError]
-[IMAPClientMailboxOperation newCommandDataForLiteralPlus:]
-[IMAPClientMailboxOperation simpleDescriptionString]
-[IMAPClientMailboxOperation minRequiredConnectionState]
-[IMAPClientMailboxOperation maxAllowedConnectionState]
-[IMAPClientMailboxOperation mailboxName]
-[IMAPClientMailboxOperation setMailboxName:]
-[IMAPClientMailboxOperation mailboxArgumentName]
-[IMAPClientMailboxOperation setMailboxArgumentName:]
-[IMAPClientMailboxOperation .cxx_destruct]
-[IMAPClientSelectOperation commandTypeString]
-[IMAPClientSelectOperation activityString]
-[IMAPClientSelectOperation handlesAllUntaggedResponses]
-[IMAPClientSelectOperation newCommandDataForLiteralPlus:]
-[IMAPClientSelectOperation executeOnConnection:]
-[IMAPClientSelectOperation isReady]
-[IMAPClientSelectOperation readOnly]
+[IMAPClientSelectOperation automaticallyNotifiesObserversOfDelayed]
-[IMAPClientSelectOperation delayed]
-[IMAPClientSelectOperation setDelayed:]
-[IMAPClientSelectOperation imapMailbox]
-[IMAPClientSelectOperation setImapMailbox:]
-[IMAPClientSelectOperation useCondStore]
-[IMAPClientSelectOperation setUseCondStore:]
-[IMAPClientSelectOperation .cxx_destruct]
-[IMAPClientExamineOperation commandTypeString]
-[IMAPClientExamineOperation activityString]
-[IMAPClientExamineOperation readOnly]
-[IMAPClientCreateOperation commandTypeString]
-[IMAPClientCreateOperation activityString]
-[IMAPClientDeleteOperation commandTypeString]
-[IMAPClientDeleteOperation activityString]
-[IMAPClientSubscribeOperation commandTypeString]
-[IMAPClientSubscribeOperation activityString]
-[IMAPClientSubscribeOperation executeOnConnection:]
-[IMAPClientUnsubscribeOperation commandTypeString]
-[IMAPClientUnsubscribeOperation activityString]
-[IMAPClientRenameOperation initWithMailboxName:newMailboxName:]
-[IMAPClientRenameOperation initWithMailboxName:]
-[IMAPClientRenameOperation commandTypeString]
-[IMAPClientRenameOperation activityString]
-[IMAPClientRenameOperation detailsString]
-[IMAPClientRenameOperation newCommandDataForLiteralPlus:]
-[IMAPClientRenameOperation nameForNewMailbox]
-[IMAPClientRenameOperation setNameForNewMailbox:]
-[IMAPClientRenameOperation nameForNewMailboxArgument]
-[IMAPClientRenameOperation setNameForNewMailboxArgument:]
-[IMAPClientRenameOperation .cxx_destruct]
-[IMAPClientStatusOperation initWithMailboxName:dataItems:]
-[IMAPClientStatusOperation initWithMailboxName:]
-[IMAPClientStatusOperation commandTypeString]
-[IMAPClientStatusOperation activityString]
-[IMAPClientStatusOperation addDataItem:]
-[IMAPClientStatusOperation _newStringForDataItems]
-[IMAPClientStatusOperation newCommandDataForLiteralPlus:]
-[IMAPClientStatusOperation executeOnConnection:]
-[IMAPClientStatusOperation dataItems]
-[IMAPClientStatusOperation setDataItems:]
-[IMAPClientStatusOperation statusEntries]
-[IMAPClientStatusOperation setStatusEntries:]
-[IMAPClientStatusOperation .cxx_destruct]
-[IMAPAggregateStatusOperation commandTypeString]
-[IMAPAggregateStatusOperation activityString]
-[IMAPAggregateStatusOperation executeOnConnection:]
-[IMAPAggregateStatusOperation minRequiredConnectionState]
-[IMAPAggregateStatusOperation maxAllowedConnectionState]
-[IMAPClientAppendOperation initWithMailboxName:flags:dateReceived:data:]
-[IMAPClientAppendOperation initWithMailboxName:]
-[IMAPClientAppendOperation commandTypeString]
-[IMAPClientAppendOperation activityString]
-[IMAPClientAppendOperation detailsString]
-[IMAPClientAppendOperation shouldSendAgainOnError]
-[IMAPClientAppendOperation newCommandDataForLiteralPlus:]
-[IMAPClientAppendOperation executeOnConnection:]
-[IMAPClientAppendOperation dateReceived]
-[IMAPClientAppendOperation setDateReceived:]
-[IMAPClientAppendOperation serverFlags]
-[IMAPClientAppendOperation setServerFlags:]
-[IMAPClientAppendOperation data]
-[IMAPClientAppendOperation messageInfo]
-[IMAPClientAppendOperation setMessageInfo:]
-[IMAPClientAppendOperation shouldTryCreate]
-[IMAPClientAppendOperation setShouldTryCreate:]
-[IMAPClientAppendOperation progressMonitor]
-[IMAPClientAppendOperation setProgressMonitor:]
-[IMAPClientAppendOperation .cxx_destruct]
-[IMAPClientNamespaceOperation initWithAccount:separatorChar:]
-[IMAPClientNamespaceOperation init]
-[IMAPClientNamespaceOperation commandTypeString]
-[IMAPClientNamespaceOperation activityString]
-[IMAPClientNamespaceOperation shouldSendAgainOnError]
-[IMAPClientNamespaceOperation executeOnConnection:]
-[IMAPClientNamespaceOperation minRequiredConnectionState]
-[IMAPClientNamespaceOperation maxAllowedConnectionState]
-[IMAPClientNamespaceOperation account]
-[IMAPClientNamespaceOperation setAccount:]
-[IMAPClientNamespaceOperation separatorChar]
-[IMAPClientNamespaceOperation setSeparatorChar:]
-[IMAPClientNamespaceOperation privateNamespaces]
-[IMAPClientNamespaceOperation setPrivateNamespaces:]
-[IMAPClientNamespaceOperation publicNamespaces]
-[IMAPClientNamespaceOperation setPublicNamespaces:]
-[IMAPClientNamespaceOperation sharedNamespaces]
-[IMAPClientNamespaceOperation setSharedNamespaces:]
-[IMAPClientNamespaceOperation .cxx_destruct]
-[IMAPClientOperation init]
-[IMAPClientOperation dealloc]
-[IMAPClientOperation observeValueForKeyPath:ofObject:change:context:]
-[IMAPClientOperation commandTypeString]
-[IMAPClientOperation alwaysAllowToComplete]
-[IMAPClientOperation shouldSendAgainOnError]
-[IMAPClientOperation minRequiredConnectionState]
-[IMAPClientOperation maxAllowedConnectionState]
-[IMAPClientOperation composition]
-[IMAPClientOperation isWaitingToStart]
-[IMAPClientOperation activityString]
-[IMAPClientOperation detailsString]
-[IMAPClientOperation cleanupAfterCompletion]
-[IMAPClientOperation completedSuccessfully]
-[IMAPClientOperation increasePriority]
-[IMAPClientOperation main]
-[IMAPClientOperation executeOnConnection:]
-[IMAPClientOperation operationDidFinish]
-[IMAPClientOperation simpleDescriptionString]
-[IMAPClientOperation shallowDescription]
-[IMAPClientOperation description]
+[IMAPClientOperation newIMAPQuotedString:]
+[IMAPClientOperation newIMAPStringForMailboxName:]
+[IMAPClientOperation IMAPNeedsLiteralCharacterSet]
+[IMAPClientOperation _IMAPNeedsQuoteCharacterSet]
___50+[IMAPClientOperation _IMAPNeedsQuoteCharacterSet]_block_invoke
-[IMAPClientOperation gateway]
-[IMAPClientOperation setGateway:]
-[IMAPClientOperation completionState]
-[IMAPClientOperation setCompletionState:]
-[IMAPClientOperation .cxx_destruct]
-[IMAPClientSuspendOperation init]
-[IMAPClientSuspendOperation commandTypeString]
-[IMAPClientSuspendOperation alwaysAllowToComplete]
-[IMAPClientSuspendOperation maxAllowedConnectionState]
-[IMAPClientSuspendOperation shouldExecuteSynchronously]
-[IMAPClientSuspendOperation setShouldExecuteSynchronously:]
-[IMAPSingleClientOperation composition]
-[IMAPSingleClientOperation handlesAllUntaggedResponses]
-[IMAPSingleClientOperation sequenceNumber]
-[IMAPSingleClientOperation setSequenceNumber:]
-[IMAPSingleClientOperation cleanupAfterCompletion]
-[IMAPSingleClientOperation debugCommandString]
-[IMAPSingleClientOperation newCommandDataForLiteralPlus:]
-[IMAPSingleClientOperation tag]
-[IMAPSingleClientOperation newCommandString]
-[IMAPSingleClientOperation untaggedResponses]
-[IMAPSingleClientOperation setUntaggedResponses:]
-[IMAPSingleClientOperation error]
-[IMAPSingleClientOperation setError:]
-[IMAPSingleClientOperation sessionNumber]
-[IMAPSingleClientOperation setSessionNumber:]
-[IMAPSingleClientOperation isComplete]
-[IMAPSingleClientOperation setIsComplete:]
-[IMAPSingleClientOperation .cxx_destruct]
-[IMAPAggregateClientOperation initWithOperations:]
-[IMAPAggregateClientOperation init]
-[IMAPAggregateClientOperation composition]
-[IMAPAggregateClientOperation setGateway:]
-[IMAPAggregateClientOperation cleanupAfterCompletion]
-[IMAPAggregateClientOperation operations]
-[IMAPAggregateClientOperation .cxx_destruct]
-[IMAPClientCapabilityOperation init]
-[IMAPClientCapabilityOperation commandTypeString]
-[IMAPClientCapabilityOperation activityString]
-[IMAPClientCapabilityOperation shouldSendAgainOnError]
-[IMAPClientCapabilityOperation executeOnConnection:]
-[IMAPClientCapabilityOperation minRequiredConnectionState]
-[IMAPClientCapabilityOperation maxAllowedConnectionState]
-[IMAPClientNoopOperation init]
-[IMAPClientNoopOperation commandTypeString]
-[IMAPClientNoopOperation activityString]
-[IMAPClientNoopOperation executeOnConnection:]
-[IMAPClientNoopOperation minRequiredConnectionState]
-[IMAPClientNoopOperation maxAllowedConnectionState]
-[IMAPClientLogoutOperation init]
-[IMAPClientLogoutOperation commandTypeString]
-[IMAPClientLogoutOperation activityString]
-[IMAPClientLogoutOperation executeOnConnection:]
-[IMAPClientLogoutOperation alwaysAllowToComplete]
-[IMAPClientLogoutOperation minRequiredConnectionState]
-[IMAPClientLogoutOperation maxAllowedConnectionState]
-[IMAPClientCheckOperation commandTypeString]
-[IMAPClientCheckOperation activityString]
-[IMAPClientCheckOperation shouldSendAgainOnError]
-[IMAPClientCheckOperation minRequiredConnectionState]
-[IMAPClientCheckOperation maxAllowedConnectionState]
-[IMAPClientExpungeOperation commandTypeString]
-[IMAPClientExpungeOperation activityString]
-[IMAPClientExpungeOperation shouldSendAgainOnError]
-[IMAPClientExpungeOperation minRequiredConnectionState]
-[IMAPClientExpungeOperation maxAllowedConnectionState]
-[IMAPClientUnselectOperation commandTypeString]
-[IMAPClientUnselectOperation activityString]
-[IMAPClientUnselectOperation executeOnConnection:]
-[IMAPClientUnselectOperation minRequiredConnectionState]
-[IMAPClientUnselectOperation maxAllowedConnectionState]
-[IMAPClientCloseOperation commandTypeString]
-[IMAPClientCloseOperation activityString]
-[IMAPClientCloseOperation alwaysAllowToComplete]
-[IMAPClientOperationQueue dealloc]
-[IMAPClientOperationQueue init]
-[IMAPClientOperationQueue activityDidStart:]
-[IMAPClientOperationQueue _clearActivityFinishTimer]
-[IMAPClientOperationQueue _postDelayedActivityFinished]
___56-[IMAPClientOperationQueue _postDelayedActivityFinished]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMAPClientOperationQueue activityDidFinish:]
-[IMAPClientOperationQueue selectedMailboxName]
-[IMAPClientOperationQueue doneOperation]
-[IMAPClientOperationQueue setDoneOperation:]
-[IMAPClientOperationQueue selectOperation]
-[IMAPClientOperationQueue setSelectOperation:]
-[IMAPClientOperationQueue addClientOperation:outUpdatedOperation:]
-[IMAPClientOperationQueue waitUntilOperationIsFinished:]
-[IMAPClientOperationQueue newSelectOperationForResumingIfNeeded]
-[IMAPClientOperationQueue changeSelectDependenciesTo:]
-[IMAPClientOperationQueue setDoneToReady]
-[IMAPClientOperationQueue refreshDoneWithGateway:operation:]
-[IMAPClientOperationQueue _setupDependeciesOnDone]
-[IMAPClientOperationQueue clearDoneWithOperation:]
-[IMAPClientOperationQueue isIdle]
-[IMAPClientOperationQueue shouldAllowIdleToExecute:]
-[IMAPClientOperationQueue setupDependenciesOnSuspendCreatingIfNeeded]
-[IMAPClientOperationQueue suspendIfNeededAndClear:]
-[IMAPClientOperationQueue setSuspendOperation:]
-[IMAPClientOperationQueue suspendOperation]
-[IMAPClientOperationQueue finishIdling]
-[IMAPClientOperationQueue refreshIdle]
-[IMAPClientOperationQueue description]
-[IMAPClientOperationQueue addOperationLock]
-[IMAPClientOperationQueue setAddOperationLock:]
-[IMAPClientOperationQueue gateway]
-[IMAPClientOperationQueue setGateway:]
-[IMAPClientOperationQueue activityName]
-[IMAPClientOperationQueue setActivityName:]
-[IMAPClientOperationQueue activityMonitor]
-[IMAPClientOperationQueue .cxx_destruct]
-[IMAPClientGetQuotaRootOperation commandTypeString]
-[IMAPClientGetQuotaRootOperation activityString]
-[IMAPClientGetQuotaRootOperation shouldSendAgainOnError]
-[IMAPAggregateGetQuotaRootOperation commandTypeString]
-[IMAPAggregateGetQuotaRootOperation activityString]
-[IMAPAggregateGetQuotaRootOperation shouldSendAgainOnError]
-[IMAPAggregateGetQuotaRootOperation minRequiredConnectionState]
-[IMAPAggregateGetQuotaRootOperation maxAllowedConnectionState]
-[IMAPClientGetQuotaOperation initWithQuotaRoot:]
-[IMAPClientGetQuotaOperation init]
-[IMAPClientGetQuotaOperation commandTypeString]
-[IMAPClientGetQuotaOperation activityString]
-[IMAPClientGetQuotaOperation shouldSendAgainOnError]
-[IMAPClientGetQuotaOperation newCommandDataForLiteralPlus:]
-[IMAPClientGetQuotaOperation minRequiredConnectionState]
-[IMAPClientGetQuotaOperation maxAllowedConnectionState]
-[IMAPClientGetQuotaOperation quotaRoot]
-[IMAPClientGetQuotaOperation .cxx_destruct]
-[IMAPClientUIDOperation initWithMailboxName:range:]
-[IMAPClientUIDOperation initWithMailboxName:UIDs:]
-[IMAPClientUIDOperation initWithMailboxName:]
-[IMAPClientUIDOperation newCommandDataForLiteralPlus:]
+[IMAPClientUIDOperation newMessageSetForRange:]
+[IMAPClientUIDOperation newMessageSetForNumbers:range:]
+[IMAPClientUIDOperation newMessageSetForIndexSet:]
-[IMAPClientUIDOperation minRequiredConnectionState]
-[IMAPClientUIDOperation UIDs]
-[IMAPClientUIDOperation setUIDs:]
-[IMAPClientUIDOperation range]
-[IMAPClientUIDOperation setRange:]
-[IMAPClientUIDOperation .cxx_destruct]
-[IMAPClientUIDExpungeOperation commandTypeString]
-[IMAPClientUIDExpungeOperation activityString]
-[IMAPClientUIDExpungeOperation executeOnConnection:]
-[IMAPClientUIDStoreOperation _imapClientUIDStoreCommonInitForGmailLabels:add:flagsOrGmailLabels:]
-[IMAPClientUIDStoreOperation initWithMailboxName:UIDs:add:flags:]
-[IMAPClientUIDStoreOperation initWithMailboxName:range:add:flags:]
-[IMAPClientUIDStoreOperation initWithMailboxName:UIDs:add:gmailLabels:]
-[IMAPClientUIDStoreOperation initWithMailboxName:range:add:gmailLabels:]
-[IMAPClientUIDStoreOperation initWithMailboxName:range:]
-[IMAPClientUIDStoreOperation initWithMailboxName:UIDs:]
-[IMAPClientUIDStoreOperation commandTypeString]
-[IMAPClientUIDStoreOperation activityString]
-[IMAPClientUIDStoreOperation serverFlags]
-[IMAPClientUIDStoreOperation gmailLabels]
-[IMAPClientUIDStoreOperation newCommandDataForLiteralPlus:]
-[IMAPClientUIDStoreOperation executeOnConnection:]
-[IMAPClientUIDStoreOperation forGmailLabels]
-[IMAPClientUIDStoreOperation add]
-[IMAPClientUIDStoreOperation setAdd:]
-[IMAPClientUIDStoreOperation .cxx_destruct]
-[IMAPClientUIDCopyOperation initWithMailboxName:UIDs:destinationMailboxName:]
-[IMAPClientUIDCopyOperation initWithMailboxName:UIDs:]
-[IMAPClientUIDCopyOperation initWithMailboxName:range:]
-[IMAPClientUIDCopyOperation commandTypeString]
-[IMAPClientUIDCopyOperation activityString]
-[IMAPClientUIDCopyOperation detailsString]
-[IMAPClientUIDCopyOperation newCommandDataForLiteralPlus:]
-[IMAPClientUIDCopyOperation executeOnConnection:]
-[IMAPClientUIDCopyOperation destinationMailboxName]
-[IMAPClientUIDCopyOperation setDestinationMailboxName:]
-[IMAPClientUIDCopyOperation destinationMailboxArgumentName]
-[IMAPClientUIDCopyOperation setDestinationMailboxArgumentName:]
-[IMAPClientUIDCopyOperation messageInfo]
-[IMAPClientUIDCopyOperation setMessageInfo:]
-[IMAPClientUIDCopyOperation shouldTryCreate]
-[IMAPClientUIDCopyOperation setShouldTryCreate:]
-[IMAPClientUIDCopyOperation .cxx_destruct]
-[IMAPClientUIDSearchOperation initWithMailboxName:range:terms:]
-[IMAPClientUIDSearchOperation initWithMailboxName:UIDs:]
-[IMAPClientUIDSearchOperation initWithMailboxName:range:]
-[IMAPClientUIDSearchOperation commandTypeString]
-[IMAPClientUIDSearchOperation activityString]
-[IMAPClientUIDSearchOperation newCommandDataForLiteralPlus:]
-[IMAPClientUIDSearchOperation _newArgumentForSearchTerm:isLiteral:]
-[IMAPClientUIDSearchOperation executeOnConnection:]
-[IMAPClientUIDSearchOperation terms]
-[IMAPClientUIDSearchOperation setTerms:]
-[IMAPClientUIDSearchOperation matchingUIDs]
-[IMAPClientUIDSearchOperation setMatchingUIDs:]
-[IMAPClientUIDSearchOperation .cxx_destruct]
-[IMAPCommandPipeline init]
-[IMAPCommandPipeline isFull]
-[IMAPCommandPipeline description]
-[IMAPCommandPipeline imapCommandPipelineLock]
-[IMAPCommandPipeline addFetchCommandForUid:fetchItem:expectedLength:]
-[IMAPCommandPipeline _removeFetchUnitMatchingResponse:]
-[IMAPCommandPipeline failureResponsesFromSendingCommandsWithGateway:responseHandler:highPriority:]
-[IMAPCommandPipeline _newOperationsAssigningResponseHandler:]
___62-[IMAPCommandPipeline _newOperationsAssigningResponseHandler:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMAPCommandPipeline observeValueForKeyPath:ofObject:change:context:]
-[IMAPCommandPipeline chunkSize]
-[IMAPCommandPipeline setChunkSize:]
-[IMAPCommandPipeline expectedSize]
-[IMAPCommandPipeline setExpectedSize:]
-[IMAPCommandPipeline isSending]
-[IMAPCommandPipeline setIsSending:]
-[IMAPCommandPipeline fetchUnits]
-[IMAPCommandPipeline setFetchUnits:]
-[IMAPCommandPipeline .cxx_destruct]
-[_IMAPFetchUnit description]
-[_IMAPFetchUnit _setupExpectedFetchResult]
-[_IMAPFetchUnit matchesFetchResponse:]
-[_IMAPFetchUnit newFailedFetchResponse]
-[_IMAPFetchUnit uid]
-[_IMAPFetchUnit setUid:]
-[_IMAPFetchUnit fetchItem]
-[_IMAPFetchUnit setFetchItem:]
-[_IMAPFetchUnit expectedFetchResult]
-[_IMAPFetchUnit setExpectedFetchResult:]
-[_IMAPFetchUnit expectedLength]
-[_IMAPFetchUnit setExpectedLength:]
-[_IMAPFetchUnit .cxx_destruct]
-[_UIDsBatch init]
-[_UIDsBatch description]
-[_UIDsBatch uids]
-[_UIDsBatch setUids:]
-[_UIDsBatch expectedLength]
-[_UIDsBatch setExpectedLength:]
-[_UIDsBatch .cxx_destruct]
+[IMAPConnection initialize]
+[IMAPConnection automaticallyNotifiesObserversForKey:]
+[IMAPConnection _defaultsToBackground]
-[IMAPConnection initWithPendingGateway:account:]
-[IMAPConnection init]
-[IMAPConnection dealloc]
+[IMAPConnection capabilityNameForCapability:]
-[IMAPConnection account]
-[IMAPConnection setAccount:]
-[IMAPConnection displayName]
-[IMAPConnection _reconnect]
-[IMAPConnection _setupConnection]
-[IMAPConnection _completeConnectionWithResult:]
-[IMAPConnection disconnectAndNotify:]
-[IMAPConnection disconnect]
-[IMAPConnection quit]
-[IMAPConnection _tryToStartValidating]
-[IMAPConnection setIsValidating:]
-[IMAPConnection isValidating]
-[IMAPConnection gateway]
-[IMAPConnection setGateway:]
+[IMAPConnection keyPathsForValuesAffecting_gateway]
-[IMAPConnection _gateway]
-[IMAPConnection connectionState]
-[IMAPConnection currentConnectionState]
-[IMAPConnection _transitionToState:]
-[IMAPConnection _transitionToState:selectedMailbox:readOnly:]
-[IMAPConnection _setSelectedMailbox:]
-[IMAPConnection mailboxNameIfSelected:]
-[IMAPConnection setSelectedIMAPMailbox:]
-[IMAPConnection selectedIMAPMailbox]
-[IMAPConnection needsSelectForMailboxName:gateway:]
-[IMAPConnection isValid]
-[IMAPConnection isDisconnected]
-[IMAPConnection shouldExecuteOperationsImmediately]
-[IMAPConnection prepareAndExecuteOperation:outWrongState:]
-[IMAPConnection executeClientOperation:]
-[IMAPConnection _sendCommand:response:]
-[IMAPConnection _socketDiedError:]
-[IMAPConnection _writeData:dontLogBytesInRange:error:]
-[IMAPConnection _readLineIntoData:error:]
-[IMAPConnection _readBytesIntoData:desiredLength:error:]
-[IMAPConnection _copyNextServerResponse:]
-[IMAPConnection _copyNextTaggedOrContinuationResponseForCommand:]
-[IMAPConnection _copyNextTaggedOrContinuationResponseForCommand:exists:receivedExists:]
-[IMAPConnection _errorForResponse:operation:]
__messageFromResponse
-[IMAPConnection capabilities]
-[IMAPConnection supportsCapability:]
-[IMAPConnection updateCanStartIdle:]
-[IMAPConnection _clearCapabilities]
-[IMAPConnection _addToCapabilities:]
-[IMAPConnection _fetchCapabilitiesIfNeeded]
-[IMAPConnection executeCapability:]
-[IMAPConnection sendIDIfNeeded]
-[IMAPConnection executeID:]
___28-[IMAPConnection executeID:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMAPConnection executeNoop:]
-[IMAPConnection authenticationMechanisms]
-[IMAPConnection authenticate]
-[IMAPConnection _authenticateWithSaslClient:]
-[IMAPConnection executeAuthenticate:]
-[IMAPConnection _startTLS]
-[IMAPConnection executeStartTLS:]
-[IMAPConnection discoverAccountSettings]
-[IMAPConnection _getErrorFromFailedAuthenticationResponse:forOperation:usingSASL:]
-[IMAPConnection _authenticateWithPlainTextSchemes]
-[IMAPConnection _supportsPlainTextSchemes]
-[IMAPConnection executeLogin:]
-[IMAPConnection executeLogout:]
-[IMAPConnection separatorChar]
-[IMAPConnection setSeparatorChar:]
-[IMAPConnection _separatorCharIfAvailable]
-[IMAPConnection executeListOrLSub:]
-[IMAPConnection executeUnselect:]
-[IMAPConnection _handleBytesAvailable]
-[IMAPConnection isIdle]
-[IMAPConnection startIdle]
-[IMAPConnection executeIdle:]
___30-[IMAPConnection executeIdle:]_block_invoke
___copy_helper_block_808
___destroy_helper_block_809
-[IMAPConnection executeDone:]
-[IMAPConnection executeUIDExpunge:]
-[IMAPConnection executeStatus:]
___32-[IMAPConnection executeStatus:]_block_invoke
___copy_helper_block_829
___destroy_helper_block_830
-[IMAPConnection executeAggregateStatus:]
-[IMAPConnection executeSubscribeOperation:]
-[IMAPConnection executeSelectOperation:]
-[IMAPConnection executeUIDSearch:]
-[IMAPConnection executeUIDStore:]
-[IMAPConnection _responseFromSendingOperation:tryCreate:receivedExists:]
___73-[IMAPConnection _responseFromSendingOperation:tryCreate:receivedExists:]_block_invoke
-[IMAPConnection executeUIDCopy:]
-[IMAPConnection executeAppend:]
-[IMAPConnection executeNamespace:]
-[IMAPConnection resetTimingHistory]
-[IMAPConnection updatedRecentAverageWithNewValue:]
-[IMAPConnection setReadBufferSizeFromElapsedTime:bytesRead:]
-[IMAPConnection readBufferSize]
-[IMAPConnection setReadBufferSize:]
+[IMAPConnection _setReadSizeParameters]
+[IMAPConnection minimumFetchChunkSize]
-[IMAPConnection executeFetch:]
-[IMAPConnection description]
-[IMAPConnection _correctMailboxIsSelectedForOperation:]
-[IMAPConnection _responseFromSendingOperation:receivedExists:]
-[IMAPConnection _isTemporaryError:]
-[IMAPConnection _setError:forCommand:]
-[IMAPConnection _recordUntaggedResponse:forOperation:]
-[IMAPConnection _recordUntaggedResponse:forOperation:exists:receivedExists:fromIDLE:]
-[IMAPConnection _recordResponse:forOperation:]
-[IMAPConnection _recordMailboxResponse:forOperation:]
-[IMAPConnection _recordMailboxResponse:forOperation:exists:fromIDLE:]
-[IMAPConnection validatingLock]
-[IMAPConnection setValidatingLock:]
-[IMAPConnection canStartIdle]
-[IMAPConnection setCanStartIdle:]
-[IMAPConnection sentID]
-[IMAPConnection setSentID:]
-[IMAPConnection .cxx_destruct]
-[IMAPConnection(MFPrivate) _readDataWithRemainingByteCount:intoData:error:]
-[IMAPConnection(MFPrivate) _isFetchResponseValid:]
+[IMAPConnectionPool initialize]
-[IMAPConnectionPool init]
-[IMAPConnectionPool dealloc]
-[IMAPConnectionPool _removeAllConnectionsInDictionary:]
-[IMAPConnectionPool _sealSuspendedGateways]
-[IMAPConnectionPool connectionCount]
-[IMAPConnectionPool resetMaximumConnectionCount]
-[IMAPConnectionPool removeInvalidConnections]
-[IMAPConnectionPool _removeInvalidConnectionsInDictionary:]
___60-[IMAPConnectionPool _removeInvalidConnectionsInDictionary:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMAPConnectionPool closeAllConnectionsAndCompact:]
-[IMAPConnectionPool _closeAllConnectionsAndCompact:inDictionary:]
___66-[IMAPConnectionPool _closeAllConnectionsAndCompact:inDictionary:]_block_invoke
___copy_helper_block_97
___destroy_helper_block_98
-[IMAPConnectionPool checkInConnection:forGateway:]
-[IMAPConnectionPool checkInNewConnection:]
-[IMAPConnectionPool observeValueForKeyPath:ofObject:change:context:]
-[IMAPConnectionPool _removeDisconnectedConnection:shouldRecover:]
-[IMAPConnectionPool checkOutNewGatewayWithConnection:]
-[IMAPConnectionPool _checkOutNewGatewayWithConnection:forMailbox:]
-[IMAPConnectionPool checkOutGatewayForMailbox:]
-[IMAPConnectionPool checkOutGatewayForExistingConnectionToMailbox:]
-[IMAPConnectionPool checkOutGatewayForMailbox:newConnection:highPriority:waitIndefinitely:]
-[IMAPConnectionPool tryToResumeGateway:]
-[IMAPConnectionPool sealGatewayShutIfNoChanceOfResuming:]
-[IMAPConnectionPool yieldGateway:]
-[IMAPConnectionPool suspendGateway:withOperation:]
-[IMAPConnectionPool _suspendGatewayOfConnection:mailbox:forMailbox:resumingGateway:]
-[IMAPConnectionPool _suspendFirstIdleConnectionForMailbox:resumingGateway:totalSecondsWaited:mightBeSuccessful:]
-[IMAPConnectionPool _suspendFirstIdleConnectionInIdleConnections:forMailbox:resumingGateway:]
-[IMAPConnectionPool _anyConnectionFromDictionary:selectedOnly:mailbox:]
-[IMAPConnectionPool _gatewayToCheckOutConnection:defaultGateway:mailboxName:newGateway:]
-[IMAPConnectionPool _validateAndCheckOutGateway:forMailbox:allowReconnect:newGateway:]
-[IMAPConnectionPool _newGatewayForConnection:mailboxName:]
-[IMAPConnectionPool _makeConnectionAvailable:]
-[IMAPConnectionPool description]
-[IMAPConnectionPool updateConnectionsShouldUseIdle:]
-[IMAPConnectionPool _removeConnection:fromDictionary:]
-[IMAPConnectionPool _setConnection:forMailbox:clear:inDictionary:]
-[IMAPConnectionPool _connectionIsContained:forMailbox:inDictionary:]
-[IMAPConnectionPool _suspendedGatewayForMailbox:]
-[IMAPConnectionPool _suspendedGatewayWithWorkRequireSelected:]
-[IMAPConnectionPool _suspendGateway:allowNetworking:]
-[IMAPConnectionPool _removeSuspendedGateway:]
-[IMAPConnectionPool _keyForMailboxName:]
-[IMAPConnectionPool connections]
-[IMAPConnectionPool maximumConnectionCount]
-[IMAPConnectionPool setMaximumConnectionCount:]
-[IMAPConnectionPool defaultIdleMailboxName]
-[IMAPConnectionPool setDefaultIdleMailboxName:]
-[IMAPConnectionPool .cxx_destruct]
-[_IMAPConnectionEnumerator initWithConnectionDictionary:]
-[_IMAPConnectionEnumerator init]
-[_IMAPConnectionEnumerator nextObject]
-[_IMAPConnectionEnumerator lastObjectKey]
-[_IMAPConnectionEnumerator .cxx_destruct]
-[IMAPDownload initWithUid:]
-[IMAPDownload init]
-[IMAPDownload createCopy]
-[IMAPDownload expectedLength]
-[IMAPDownload isComplete]
-[IMAPDownload bytesFetched]
-[IMAPDownload data]
-[IMAPDownload error]
-[IMAPDownload setError:]
-[IMAPDownload handleFetchResult:]
-[IMAPDownload processResults]
-[IMAPDownload addCommandsToPipeline:withCache:]
-[IMAPDownload description]
-[IMAPDownload countOfPendingFetchResults]
-[IMAPDownload objectInPendingFetchResultsAtIndex:]
-[IMAPDownload addPendingFetchResultsObject:]
-[IMAPDownload removeObjectFromPendingFetchResultsAtIndex:]
-[IMAPDownload sortPendingFetchResultsUsingFunction:context:]
-[IMAPDownload uid]
-[IMAPDownload .cxx_destruct]
-[IMAPSimpleDownload initWithUid:partSectionSpecifier:textSectionSpecifier:estimatedLength:]
-[IMAPSimpleDownload initWithUid:partSectionSpecifier:textSectionSpecifier:length:]
-[IMAPSimpleDownload initWithUid:]
-[IMAPSimpleDownload createCopy]
-[IMAPSimpleDownload description]
-[IMAPSimpleDownload bytesFetched]
-[IMAPSimpleDownload expectedLength]
-[IMAPSimpleDownload handleFetchResult:]
-[IMAPSimpleDownload processResults]
_comparePartialFetchResults
-[IMAPSimpleDownload addCommandsToPipeline:withCache:]
-[IMAPSimpleDownload isComplete]
-[IMAPSimpleDownload data]
-[IMAPSimpleDownload error]
-[IMAPSimpleDownload setError:]
-[IMAPSimpleDownload partSectionSpecifier]
-[IMAPSimpleDownload setPartSectionSpecifier:]
-[IMAPSimpleDownload textSectionSpecifier]
-[IMAPSimpleDownload setTextSectionSpecifier:]
-[IMAPSimpleDownload .cxx_destruct]
-[IMAPCompoundDownload createCopy]
-[IMAPCompoundDownload description]
-[IMAPCompoundDownload subdownloads]
-[IMAPCompoundDownload countOfSubdownloads]
-[IMAPCompoundDownload objectInSubdownloadsAtIndex:]
-[IMAPCompoundDownload removeObjectFromSubdownloadsAtIndex:]
-[IMAPCompoundDownload addSubdownload:]
-[IMAPCompoundDownload removeSubdownload:]
-[IMAPCompoundDownload addCommandsToPipeline:withCache:]
-[IMAPCompoundDownload processResults]
-[IMAPCompoundDownload isComplete]
-[IMAPCompoundDownload error]
-[IMAPCompoundDownload bytesFetched]
-[IMAPCompoundDownload expectedLength]
-[IMAPCompoundDownload .cxx_destruct]
-[IMAPDownloadCache _findRangeOrInsertionPointForDownloadsWithUid:]
___67-[IMAPDownloadCache _findRangeOrInsertionPointForDownloadsWithUid:]_block_invoke
-[IMAPDownloadCache downloadForMessage:]
-[IMAPDownloadCache _getDownloadForUid:partSectionSpecifier:textSectionSpecifier:length:estimatedLength:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___105-[IMAPDownloadCache _getDownloadForUid:partSectionSpecifier:textSectionSpecifier:length:estimatedLength:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMAPDownloadCache downloadForUid:partSectionSpecifier:textSectionSpecifier:length:]
-[IMAPDownloadCache downloadForUid:partSectionSpecifier:textSectionSpecifier:expectedLength:]
-[IMAPDownloadCache _lockedUpdateDownloadsInRange:fetchResults:error:]
___70-[IMAPDownloadCache _lockedUpdateDownloadsInRange:fetchResults:error:]_block_invoke
___copy_helper_block_55
___destroy_helper_block_56
-[IMAPDownloadCache handleResponse:forOperation:]
-[IMAPDownloadCache handleFetchResponse:forUid:]
-[IMAPDownloadCache handleFetchResponses:]
-[IMAPDownloadCache processResultsForUid:]
___42-[IMAPDownloadCache processResultsForUid:]_block_invoke
-[IMAPDownloadCache cleanUpDownloadsForUid:]
___44-[IMAPDownloadCache cleanUpDownloadsForUid:]_block_invoke
-[IMAPDownloadCache addDownload:forUid:]
-[IMAPDownloadCache _lockedAddDownload:atIndex:forUid:]
-[IMAPDownloadCache addCommandsForDownload:toPipeline:]
-[IMAPDownloadCache .cxx_destruct]
-[IMAPFetchResult needsLineEndingConversion]
-[IMAPEnvelopeFetchResult description]
-[IMAPEnvelopeFetchResult envelope]
-[IMAPEnvelopeFetchResult setEnvelope:]
-[IMAPEnvelopeFetchResult .cxx_destruct]
-[IMAPInternalDateFetchResult description]
-[IMAPInternalDateFetchResult internalDate]
-[IMAPInternalDateFetchResult setInternalDate:]
-[IMAPInternalDateFetchResult .cxx_destruct]
-[IMAPRFC822SizeFetchResult description]
-[IMAPRFC822SizeFetchResult messageSize]
-[IMAPRFC822SizeFetchResult setMessageSize:]
-[IMAPBodyStructureFetchResult description]
-[IMAPBodyStructureFetchResult bodyStructure]
-[IMAPBodyStructureFetchResult setBodyStructure:]
-[IMAPBodyStructureFetchResult .cxx_destruct]
-[IMAPUidFetchResult description]
-[IMAPUidFetchResult uid]
-[IMAPUidFetchResult setUid:]
-[IMAPFlagsFetchResult messageFlags]
-[IMAPFlagsFetchResult description]
-[IMAPFlagsFetchResult flagsArray]
-[IMAPFlagsFetchResult setFlagsArray:]
-[IMAPFlagsFetchResult .cxx_destruct]
-[IMAPModificationSequenceFetchResult description]
-[IMAPModificationSequenceFetchResult modificationSequence]
-[IMAPModificationSequenceFetchResult setModificationSequence:]
-[IMAPGmailLabelsFetchResult description]
-[IMAPGmailLabelsFetchResult gmailLabels]
-[IMAPGmailLabelsFetchResult setGmailLabels:]
-[IMAPGmailLabelsFetchResult .cxx_destruct]
-[IMAPBodyFetchResult section]
-[IMAPBodyFetchResult description]
-[IMAPBodyFetchResult fetchData]
-[IMAPBodyFetchResult setFetchData:]
-[IMAPBodyFetchResult startOffset]
-[IMAPBodyFetchResult setStartOffset:]
-[IMAPBodyFetchResult .cxx_destruct]
-[IMAPBodyTextFetchResult section]
-[IMAPBodyHeaderFetchResult needsLineEndingConversion]
-[IMAPBodyHeaderFetchResult section]
-[IMAPBodySectionFetchResult section]
-[IMAPBodySectionFetchResult setSection:]
-[IMAPBodySectionFetchResult .cxx_destruct]
+[IMAPFlagsResponse handlesResponseWithName:ofLength:]
-[IMAPFlagsResponse description]
-[IMAPFlagsResponse flags]
-[IMAPFlagsResponse setFlags:]
-[IMAPFlagsResponse .cxx_destruct]
+[IMAPFramework bundle]
___23+[IMAPFramework bundle]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[IMAPFramework userAgent]
+[IMAPFramework setUserAgent:]
+[IMAPFramework logsIMAPErrors]
___31+[IMAPFramework logsIMAPErrors]_block_invoke
+[IMAPFramework setLogsIMAPErrors:]
+[_IMAPClientSimulatedSelectOperation initialize]
+[_IMAPClientSimulatedSelectOperation newWithMailboxName:]
-[_IMAPClientSimulatedSelectOperation main]
+[IMAPGateway initialize]
+[IMAPGateway IMAPIdleRefreshDelay]
+[IMAPGateway sharedKeySetForMessageInfo]
___41+[IMAPGateway sharedKeySetForMessageInfo]_block_invoke
-[IMAPGateway initWithIMAPConnection:mailbox:pool:]
-[IMAPGateway init]
-[IMAPGateway dealloc]
-[IMAPGateway connection]
-[IMAPGateway setConnection:]
-[IMAPGateway operationQueueDidIdle]
-[IMAPGateway checkIn]
-[IMAPGateway checkInAsynchronously]
-[IMAPGateway _checkInForOperation:]
___36-[IMAPGateway _checkInForOperation:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMAPGateway _tryToCheckInConnectionAndTryToIdle:]
___51-[IMAPGateway _tryToCheckInConnectionAndTryToIdle:]_block_invoke
___copy_helper_block_181
___destroy_helper_block_182
-[IMAPGateway checkOut]
___23-[IMAPGateway checkOut]_block_invoke
___copy_helper_block_192
___destroy_helper_block_193
-[IMAPGateway _clientCount]
-[IMAPGateway hasClients]
-[IMAPGateway okToYield]
-[IMAPGateway yield]
-[IMAPGateway suspend]
-[IMAPGateway resumeWithConnection:reselect:]
-[IMAPGateway sealShutAndCompact:allowNetworking:]
-[IMAPGateway _finishQueueIdlingAndSuspend:]
-[IMAPGateway isDeserted]
-[IMAPGateway isExpensive]
-[IMAPGateway allowClientOperationThrough:]
-[IMAPGateway _allowClientOperationThrough:]
-[IMAPGateway _executeSuspend:]
-[IMAPGateway addClientOperation:toQueueAndWaitUntilFinished:]
-[IMAPGateway waitUntilClientOperationIsFinished:]
-[IMAPGateway waitUntilAllOperationsAreFinished]
-[IMAPGateway mailboxName]
-[IMAPGateway configureForMailboxName:]
-[IMAPGateway supportsCapability:]
-[IMAPGateway mailboxNameIfSelected:]
-[IMAPGateway _setError:fromOperation:]
-[IMAPGateway _setErrorFromOperation:overwriteExistingError:]
-[IMAPGateway noop]
-[IMAPGateway fetchAllFlags]
-[IMAPGateway fetchFlagsForMaxRecentMessages:]
-[IMAPGateway setServerPathPrefixOnAccount:withSeparatorChar:]
-[IMAPGateway namespacesWithSeparatorChar:]
-[IMAPGateway listingForMailbox:options:listingInfo:]
-[IMAPGateway subscribedListingForMailbox:options:listingInfo:]
-[IMAPGateway fetchStatusForMailboxes:dataItems:]
-[IMAPGateway statusForMailbox:dataItems:]
-[IMAPGateway examineMailbox:]
-[IMAPGateway selectMailbox:]
-[IMAPGateway _addSelectOperationForMailbox:class:]
-[IMAPGateway _waitForDelayedSelectOperation:]
-[IMAPGateway _completeSelectOperation:]
-[IMAPGateway createMailbox:]
-[IMAPGateway deleteMailbox:]
-[IMAPGateway renameMailbox:toMailbox:]
-[IMAPGateway subscribeMailbox:]
-[IMAPGateway unsubscribeMailbox:]
-[IMAPGateway fetchQuotaRootNamesForMailboxes:]
-[IMAPGateway getQuotaForRootName:]
-[IMAPGateway check:]
-[IMAPGateway expunge]
-[IMAPGateway expungeUids:]
-[IMAPGateway _expungeUids:mailboxName:]
-[IMAPGateway close]
-[IMAPGateway logout]
-[IMAPGateway closeAndLogout]
-[IMAPGateway unselect]
-[IMAPGateway fetchTotalSizeAndMessageCount]
-[IMAPGateway storeFlags:state:forUids:]
-[IMAPGateway storeGmailLabels:state:forUids:]
-[IMAPGateway _expunge:orStoreFlags:orStoreGmailLabels:state:forUids:]
-[IMAPGateway _storeFlags:state:forUids:mailboxName:]
-[IMAPGateway _storeGmailLabels:state:forUids:mailboxName:]
-[IMAPGateway deleteMessagesOlderThanNumberOfDays:settingFlags:]
-[IMAPGateway copyUids:toMailboxNamed:messageInfo:error:]
-[IMAPGateway appendData:toMailboxNamed:flags:dateReceived:messageInfo:error:]
-[IMAPGateway searchUidRange:forTerms:]
-[IMAPGateway searchUidRange:forNewMessageIDs:]
___47-[IMAPGateway searchUidRange:forNewMessageIDs:]_block_invoke
___copy_helper_block_526
___destroy_helper_block_527
-[IMAPGateway searchedUidNextForMessageNumber:]
-[IMAPGateway synchronouslyExecuteSelect:]
-[IMAPGateway synchronouslyExecuteDoneWithSequence:session:]
-[IMAPGateway refreshDone:withOperation:]
-[IMAPGateway startIdle]
-[IMAPGateway refreshIdle]
-[IMAPGateway description]
-[IMAPGateway saveCurrentQualityOfServiceAndBoostTo:]
-[IMAPGateway restoreSavedQualityOfService]
+[IMAPGateway _addIdleGateway:]
+[IMAPGateway _removeIdleGateway:]
+[IMAPGateway _checkIdleGateways]
-[IMAPGateway operationQueue]
-[IMAPGateway setOperationQueue:]
-[IMAPGateway canYield]
-[IMAPGateway setCanYield:]
-[IMAPGateway remainedDeserted]
-[IMAPGateway setRemainedDeserted:]
-[IMAPGateway isSealedShut]
-[IMAPGateway setIsSealedShut:]
-[IMAPGateway needsSelect]
-[IMAPGateway setNeedsSelect:]
-[IMAPGateway primaryClientAllowsYielding]
-[IMAPGateway setPrimaryClientAllowsYielding:]
-[IMAPGateway connectionPool]
-[IMAPGateway setConnectionPool:]
-[IMAPGateway primitiveConnection]
-[IMAPGateway setPrimitiveConnection:]
-[IMAPGateway .cxx_destruct]
+[IMAPIDResponse handlesResponseWithName:ofLength:]
-[IMAPIDResponse description]
-[IMAPIDResponse serverID]
-[IMAPIDResponse setServerID:]
-[IMAPIDResponse .cxx_destruct]
-[IMAPInternalUidFlagsResponse description]
-[IMAPInternalUidFlagsResponse uids]
-[IMAPInternalUidFlagsResponse setUids:]
-[IMAPInternalUidFlagsResponse flagsFetchResult]
-[IMAPInternalUidFlagsResponse setFlagsFetchResult:]
-[IMAPInternalUidFlagsResponse flagChangeType]
-[IMAPInternalUidFlagsResponse setFlagChangeType:]
-[IMAPInternalUidFlagsResponse .cxx_destruct]
+[IMAPListResponse handlesResponseWithName:ofLength:]
-[IMAPListResponse _responseName]
-[IMAPListResponse description]
-[IMAPListResponse _newStringForMailboxAttributes]
-[IMAPListResponse mailboxAttributesFromSet:]
-[IMAPListResponse mailboxAttributes]
-[IMAPListResponse setMailboxAttributes:]
-[IMAPListResponse separator]
-[IMAPListResponse setSeparator:]
-[IMAPListResponse mailboxName]
-[IMAPListResponse setMailboxName:]
-[IMAPListResponse .cxx_destruct]
+[IMAPLSubResponse handlesResponseWithName:ofLength:]
-[IMAPLSubResponse _responseName]
-[IMAPMailbox dealloc]
-[IMAPMailbox initWithMailboxName:]
-[IMAPMailbox init]
-[IMAPMailbox setDelegate:]
-[IMAPMailbox clearDelegate:]
-[IMAPMailbox selectedGateway]
-[IMAPMailbox setSelectedGateway:]
-[IMAPMailbox setExists:fromIDLE:]
+[IMAPMailbox automaticallyNotifiesObserversOfExists]
-[IMAPMailbox exists]
-[IMAPMailbox setExists:]
-[IMAPMailbox uidValidity]
-[IMAPMailbox setUidValidity:]
-[IMAPMailbox hasNewResponses]
-[IMAPMailbox setHasNewResponses:]
+[IMAPMailbox automaticallyNotifiesObserversOfAllegedHighestModificationSequence]
-[IMAPMailbox allegedHighestModificationSequence]
-[IMAPMailbox setAllegedHighestModificationSequence:]
-[IMAPMailbox computedHighestModificationSequence]
-[IMAPMailbox setComputedHighestModificationSequence:]
+[IMAPMailbox automaticallyNotifiesObserversOfQuotaUsage]
-[IMAPMailbox setTotalSize:forQuotaMessageCount:]
-[IMAPMailbox permanentFlags]
-[IMAPMailbox setPermanentFlags:]
-[IMAPMailbox addResponse:]
-[IMAPMailbox removeResponse]
-[IMAPMailbox description]
-[IMAPMailbox mailbox]
-[IMAPMailbox setMailbox:]
-[IMAPMailbox referenceName]
-[IMAPMailbox setReferenceName:]
-[IMAPMailbox readOnly]
-[IMAPMailbox setReadOnly:]
-[IMAPMailbox uidNotSticky]
-[IMAPMailbox setUidNotSticky:]
-[IMAPMailbox quotaRoots]
-[IMAPMailbox setQuotaRoots:]
-[IMAPMailbox quotaUsage]
-[IMAPMailbox setQuotaUsage:]
-[IMAPMailbox uidNext]
-[IMAPMailbox setUidNext:]
-[IMAPMailbox unseenCount]
-[IMAPMailbox setUnseenCount:]
-[IMAPMailbox supportsModificationSequences]
-[IMAPMailbox setSupportsModificationSequences:]
-[IMAPMailbox unprocessedResponses]
-[IMAPMailbox setUnprocessedResponses:]
-[IMAPMailbox .cxx_destruct]
-[IMAPMailboxProxy initWithManagedObject:]
-[IMAPMailboxProxy dealloc]
-[IMAPMailboxProxy invalidate]
-[IMAPMailboxProxy copyWithZone:]
-[IMAPMailboxProxy isReadOnly]
-[IMAPMailboxProxy mailbox]
-[IMAPMailboxProxy imapMailbox]
-[IMAPMailboxProxy setImapMailbox:]
-[IMAPMailboxProxy messageForMessageID:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___40-[IMAPMailboxProxy messageForMessageID:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMAPMailboxProxy messagesForMessageIDHeader:]
-[IMAPMailboxProxy headersForMessage:]
-[IMAPMailboxProxy headersForMessage:fetchIfNotAvailable:]
-[IMAPMailboxProxy headerDataForMessage:]
-[IMAPMailboxProxy headerDataForMessage:fetchIfNotAvailable:]
-[IMAPMailboxProxy headerDataForMessage:fetchIfNotAvailable:allowPartial:]
-[IMAPMailboxProxy bodyForMessage:fetchIfNotAvailable:]
-[IMAPMailboxProxy bodyForMessage:fetchIfNotAvailable:updateFlags:]
-[IMAPMailboxProxy bodyForMessage:fetchIfNotAvailable:updateFlags:allowPartial:]
-[IMAPMailboxProxy bodyDataForMessage:fetchIfNotAvailable:allowPartial:]
-[IMAPMailboxProxy fullBodyDataForMessage:]
-[IMAPMailboxProxy fullBodyDataForMessage:andHeaderDataIfReadilyAvailable:]
-[IMAPMailboxProxy fullBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[IMAPMailboxProxy hasCachedDataForMimePart:]
-[IMAPMailboxProxy dataForMimePart:]
-[IMAPMailboxProxy fetchAndCacheBodyDataForMessages:]
-[IMAPMailboxProxy async_setFlagsFromDictionary:forMessages:]
-[IMAPMailboxProxy async_setFlagWithKey:state:forMessages:]
-[IMAPMailboxProxy messageFlagsDidChange:flags:]
-[IMAPMailboxProxy async_setJunkMailLevel:forMessages:trainJunkMailDatabase:userRecorded:]
-[IMAPMailboxProxy setColor:highlightTextOnly:forMessages:]
-[IMAPMailboxProxy attachmentsDirectoryForMessage:]
-[IMAPMailboxProxy setNumberOfAttachments:isSigned:isEncrypted:forMessage:]
-[IMAPMailboxProxy setPreferredEncoding:forMessage:]
-[IMAPMailboxProxy synchronouslySetPreferredEncoding:forMessages:]
-[IMAPMailboxProxy supportsSnippets]
-[IMAPMailboxProxy snippetsForMessages:]
-[IMAPMailboxProxy saveSnippetsForMessages:]
-[IMAPMailboxProxy deleteMessages:moveToTrash:]
-[IMAPMailboxProxy undeleteMessages:]
-[IMAPMailboxProxy undeleteMessages:movedToStore:newMessageIDs:]
-[IMAPMailboxProxy canCompact]
-[IMAPMailboxProxy doCompact]
-[IMAPMailboxProxy routeMessages:fetchingBodies:messagesNeedingBodies:]
-[IMAPMailboxProxy sendResponseType:forMeetingMessage:]
-[IMAPMailboxProxy invalidateMessage:]
-[IMAPMailboxProxy flushAllCaches]
-[IMAPMailboxProxy uniquedString:]
-[IMAPMailboxProxy persistentIDType]
-[IMAPMailboxProxy mailboxName]
-[IMAPMailboxProxy isInbox]
___27-[IMAPMailboxProxy isInbox]_block_invoke
___copy_helper_block_222
___destroy_helper_block_223
-[IMAPMailboxProxy isAllMailMailbox]
-[IMAPMailboxProxy totalCountOfMessages]
___40-[IMAPMailboxProxy totalCountOfMessages]_block_invoke
___copy_helper_block_226
___destroy_helper_block_227
-[IMAPMailboxProxy getDetailsForMessagesWithRemoteIDs:]
___55-[IMAPMailboxProxy getDetailsForMessagesWithRemoteIDs:]_block_invoke
___copy_helper_block_230
___destroy_helper_block_231
-[IMAPMailboxProxy copyMessagesWithTemporaryUids]
-[IMAPMailboxProxy copyIncompleteMessages]
___42-[IMAPMailboxProxy copyIncompleteMessages]_block_invoke
___copy_helper_block_245
___destroy_helper_block_246
-[IMAPMailboxProxy cacheDirectoryContents]
___42-[IMAPMailboxProxy cacheDirectoryContents]_block_invoke
___copy_helper_block_249
___destroy_helper_block_250
-[IMAPMailboxProxy hasCacheFileForMessage:directoryContents:]
-[IMAPMailboxProxy hasCacheFileForMessage:part:directoryContents:]
-[IMAPMailboxProxy hasValidCacheFileForMessage:]
-[IMAPMailboxProxy fetchPipeline]
-[IMAPMailboxProxy downloadCache]
-[IMAPMailboxProxy addMessages:]
___32-[IMAPMailboxProxy addMessages:]_block_invoke
___32-[IMAPMailboxProxy addMessages:]_block_invoke_2
___copy_helper_block_338
___destroy_helper_block_339
___copy_helper_block_343
___destroy_helper_block_344
-[IMAPMailboxProxy messageShouldBePersisted:]
-[IMAPMailboxProxy messagesAreBeingAdded]
-[IMAPMailboxProxy messagesBeingAdded]
-[IMAPMailboxProxy compactMessagesFromSyncEngine:]
___50-[IMAPMailboxProxy compactMessagesFromSyncEngine:]_block_invoke
___copy_helper_block_366
___destroy_helper_block_367
-[IMAPMailboxProxy deleteMessageFromPersistence:]
-[IMAPMailboxProxy isMessageDeletedFromPersistence:]
-[IMAPMailboxProxy messageHasBeenDeleted:]
___42-[IMAPMailboxProxy messageHasBeenDeleted:]_block_invoke
___copy_helper_block_375
___destroy_helper_block_376
-[IMAPMailboxProxy async_setFlagsFromDictionary:forMessages:updatingServer:]
___76-[IMAPMailboxProxy async_setFlagsFromDictionary:forMessages:updatingServer:]_block_invoke
___copy_helper_block_398
___destroy_helper_block_399
-[IMAPMailboxProxy newDictionaryForLocalFlags:serverFlags:existingDictionary:]
-[IMAPMailboxProxy syncEngineDidStart]
-[IMAPMailboxProxy syncEngineDidFinish]
-[IMAPMailboxProxy maximumRemoteID]
___35-[IMAPMailboxProxy maximumRemoteID]_block_invoke
___copy_helper_block_413
___destroy_helper_block_414
-[IMAPMailboxProxy uidNextStatus]
-[IMAPMailboxProxy setUidNextStatus:]
-[IMAPMailboxProxy uidValidityStatus]
-[IMAPMailboxProxy setUidValidityStatus:]
-[IMAPMailboxProxy allegedHighestModificationSequence]
-[IMAPMailboxProxy setAllegedHighestModificationSequence:]
-[IMAPMailboxProxy setComputedHighestModificationSequence:]
-[IMAPMailboxProxy removeAllLocalMessages]
___42-[IMAPMailboxProxy removeAllLocalMessages]_block_invoke
___copy_helper_block_433
___destroy_helper_block_434
-[IMAPMailboxProxy syncEngineDidSynchronizeMessageList]
-[IMAPMailboxProxy messageWithDefaultLoadOptionsAndManagedObjectID:]
___68-[IMAPMailboxProxy messageWithDefaultLoadOptionsAndManagedObjectID:]_block_invoke
___copy_helper_block_438
___destroy_helper_block_439
-[IMAPMailboxProxy messagesWithManagedObjectIDs:]
___49-[IMAPMailboxProxy messagesWithManagedObjectIDs:]_block_invoke
___copy_helper_block_441
___destroy_helper_block_442
-[IMAPMailboxProxy recentFlagChangesForManagedObjectID:]
-[IMAPMailboxProxy displayName]
-[IMAPMailboxProxy extendedDisplayName]
-[IMAPMailboxProxy userInfoBoolForKey:]
-[IMAPMailboxProxy setUserInfoBool:forKey:]
-[IMAPMailboxProxy userInfoObjectForKey:]
-[IMAPMailboxProxy setUserInfoObject:forKey:]
-[IMAPMailboxProxy URLString]
___29-[IMAPMailboxProxy URLString]_block_invoke
___copy_helper_block_454
___destroy_helper_block_455
-[IMAPMailboxProxy unseenCountIsKnown]
-[IMAPMailboxProxy unseenCount]
-[IMAPMailboxProxy updateCountFromMailbox:fromIDLE:]
___52-[IMAPMailboxProxy updateCountFromMailbox:fromIDLE:]_block_invoke
___copy_helper_block_469
___destroy_helper_block_470
-[IMAPMailboxProxy processResponsesFromMailbox:]
___48-[IMAPMailboxProxy processResponsesFromMailbox:]_block_invoke
___copy_helper_block_476
___destroy_helper_block_477
-[IMAPMailboxProxy updateUidValidityFromMailbox:]
___49-[IMAPMailboxProxy updateUidValidityFromMailbox:]_block_invoke
___copy_helper_block_493
___destroy_helper_block_494
-[IMAPMailboxProxy updateSelectedGatewayFromMailbox:]
-[IMAPMailboxProxy allegedHighestModificationSequenceForMailbox:]
-[IMAPMailboxProxy computedHighestModificationSequenceForMailbox:]
-[IMAPMailboxProxy updateComputedHighestModificationSequence:forMailbox:]
-[IMAPMailboxProxy observeValueForKeyPath:ofObject:change:context:]
___67-[IMAPMailboxProxy observeValueForKeyPath:ofObject:change:context:]_block_invoke
___copy_helper_block_513
___destroy_helper_block_514
-[IMAPMailboxProxy updateFromServer]
-[IMAPMailboxProxy hasMessages]
-[IMAPMailboxProxy name]
-[IMAPMailboxProxy setName:]
-[IMAPMailboxProxy serverName]
-[IMAPMailboxProxy setServerName:]
-[IMAPMailboxProxy mailboxWithServerName:wasRenamed:]
-[IMAPMailboxProxy resetSyncEngine]
-[IMAPMailboxProxy _messageDidSetBody:]
-[IMAPMailboxProxy addMessageToServer:withMessageType:]
___55-[IMAPMailboxProxy addMessageToServer:withMessageType:]_block_invoke
___copy_helper_block_600
___destroy_helper_block_601
-[IMAPMailboxProxy _permanentFlags]
-[IMAPMailboxProxy deleteMessageFromServer:]
-[IMAPMailboxProxy _copyMailboxSyncEngineCreateIfNecessary:setupGatewayIfNecessary:]
-[IMAPMailboxProxy account]
-[IMAPMailboxProxy setAccount:]
-[IMAPMailboxProxy doingHasMessages]
-[IMAPMailboxProxy setDoingHasMessages:]
-[IMAPMailboxProxy .cxx_destruct]
-[_NonBoostingLock init]
-[_NonBoostingLock dealloc]
-[_NonBoostingLock lock]
-[_NonBoostingLock unlock]
+[IMAPMailboxSyncEngine initialize]
-[IMAPMailboxSyncEngine initWithDataSource:]
___44-[IMAPMailboxSyncEngine initWithDataSource:]_block_invoke
-[IMAPMailboxSyncEngine init]
-[IMAPMailboxSyncEngine dealloc]
-[IMAPMailboxSyncEngine description]
-[IMAPMailboxSyncEngine _copyIMAPMailbox]
-[IMAPMailboxSyncEngine _copyDataSource]
-[IMAPMailboxSyncEngine _dataSourcePersistentIDType]
-[IMAPMailboxSyncEngine isReset]
-[IMAPMailboxSyncEngine reset]
-[IMAPMailboxSyncEngine _resetClearingGateway:clearingDataSource:]
-[IMAPMailboxSyncEngine invalidateDataSource]
-[IMAPMailboxSyncEngine _setupForNewIMAPMailbox:andGateway:]
-[IMAPMailboxSyncEngine setGatewayFromIMAPMailbox:]
-[IMAPMailboxSyncEngine updateCountOfMessagesOnServerFromIMAPMailbox:fromIDLE:]
-[IMAPMailboxSyncEngine _updateCountOfMessagesOnServerIfNecessary]
-[IMAPMailboxSyncEngine setUidValidity:]
-[IMAPMailboxSyncEngine responsesWereAddedToIMAPMailbox:]
-[IMAPMailboxSyncEngine _handleMessagesWereAddedToPersistence:withMonitor:]
___75-[IMAPMailboxSyncEngine _handleMessagesWereAddedToPersistence:withMonitor:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___75-[IMAPMailboxSyncEngine _handleMessagesWereAddedToPersistence:withMonitor:]_block_invoke282
___copy_helper_block_285
___destroy_helper_block_286
-[IMAPMailboxSyncEngine messagesWereAddedToDataSource:]
-[IMAPMailboxSyncEngine uidsWereCompactedFromDataSource:]
___57-[IMAPMailboxSyncEngine uidsWereCompactedFromDataSource:]_block_invoke
___copy_helper_block_296
___destroy_helper_block_297
___57-[IMAPMailboxSyncEngine uidsWereCompactedFromDataSource:]_block_invoke299
___copy_helper_block_302
___destroy_helper_block_303
-[IMAPMailboxSyncEngine messagesBeingAdded]
-[IMAPMailboxSyncEngine setAutomaticallyStartsBackgroundThread:]
-[IMAPMailboxSyncEngine runSynchronouslyWithMessages:]
-[IMAPMailboxSyncEngine requestCheckingNewMail]
-[IMAPMailboxSyncEngine _handleNewUIDsAddedToServer:]
-[IMAPMailboxSyncEngine newUIDsWereAddedToServer:]
-[IMAPMailboxSyncEngine _placeholderDetailsExist]
-[IMAPMailboxSyncEngine _getKnownMessageDetailsForNumber:]
-[IMAPMailboxSyncEngine _getKnownMessageDetailsForUid:]
-[IMAPMailboxSyncEngine _addDetails:forMessageNumber:]
-[IMAPMailboxSyncEngine _resizeMessageDetails]
-[IMAPMailboxSyncEngine _removeMessagesOrDetailsFromDataSource:]
-[IMAPMailboxSyncEngine _startNewThreadIfNeeded]
-[IMAPMailboxSyncEngine _getObjectWithSameUidAsObject:inArray:insertIndex:]
-[IMAPMailboxSyncEngine compareByUid]
-[IMAPMailboxSyncEngine _handleFetchResponse:withMonitor:message:flagsChanges:labels:]
-[IMAPMailboxSyncEngine _gmailLabelsForNames:]
-[IMAPMailboxSyncEngine _doUidStoreUpdate:]
___43-[IMAPMailboxSyncEngine _doUidStoreUpdate:]_block_invoke
___copy_helper_block_455
___destroy_helper_block_456
-[IMAPMailboxSyncEngine _pushLabels:toDataSource:withMonitor:]
___62-[IMAPMailboxSyncEngine _pushLabels:toDataSource:withMonitor:]_block_invoke
___copy_helper_block_475
___destroy_helper_block_476
-[IMAPMailboxSyncEngine _pushFlags:forPersistentIDs:toDataSource:withMonitor:]
-[IMAPMailboxSyncEngine _pushFlags:toDataSource:withMonitor:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___61-[IMAPMailboxSyncEngine _pushFlags:toDataSource:withMonitor:]_block_invoke
___copy_helper_block_500
___destroy_helper_block_501
-[IMAPMailboxSyncEngine _updateFlagChanges:withDetails:previousFlags:]
-[IMAPMailboxSyncEngine _processAttachmentNames]
-[IMAPMailboxSyncEngine _setAttachmentNamesForMessage:]
-[IMAPMailboxSyncEngine _syncChangedMessagesOnly]
-[IMAPMailboxSyncEngine _discardSyncProgressSoFar]
-[IMAPMailboxSyncEngine _addItem:toAuxiliaryList:]
-[IMAPMailboxSyncEngine _removeUidFromAuxiliaryLists:]
-[IMAPMailboxSyncEngine _getAuxiliaryListForType:]
-[IMAPMailboxSyncEngine _setAuxiliaryList:forType:]
-[IMAPMailboxSyncEngine _mergeItems:intoAuxiliaryList:]
-[IMAPMailboxSyncEngine _checkOutGateway]
-[IMAPMailboxSyncEngine _setGateway:]
-[IMAPMailboxSyncEngine _notifyBackgroundFetchCompleted]
-[IMAPMailboxSyncEngine _hasPendingChanges]
-[IMAPMailboxSyncEngine _updatePendingChangesWithMonitor:]
-[IMAPMailboxSyncEngine _goWithMessages:]
___41-[IMAPMailboxSyncEngine _goWithMessages:]_block_invoke
___copy_helper_block_567
___destroy_helper_block_568
-[IMAPMailboxSyncEngine _goWithMessagesIfNeeded:]
-[IMAPMailboxSyncEngine boostActiveOperationsTo:]
-[IMAPMailboxSyncEngine _shouldContinueSyncingWithGateway]
-[IMAPMailboxSyncEngine _shouldContinueSyncingWithMonitor:]
-[IMAPMailboxSyncEngine _processResponsesWithMonitor:]
___54-[IMAPMailboxSyncEngine _processResponsesWithMonitor:]_block_invoke
___copy_helper_block_688
___destroy_helper_block_689
-[IMAPMailboxSyncEngine _getNewMessageSkeletonsWithMonitor:messagesFromOpen:]
-[IMAPMailboxSyncEngine _newOperationFromUIDsNeedingSkeletons:]
-[IMAPMailboxSyncEngine _handleRoutedUidsWithMonitor:]
-[IMAPMailboxSyncEngine _fetchUidsFlagsAndLabelsWithMonitor:]
___61-[IMAPMailboxSyncEngine _fetchUidsFlagsAndLabelsWithMonitor:]_block_invoke
___copy_helper_block_782
___destroy_helper_block_783
___61-[IMAPMailboxSyncEngine _fetchUidsFlagsAndLabelsWithMonitor:]_block_invoke791
-[IMAPMailboxSyncEngine _syncWithDataSourceWithMonitor:messagesFromOpen:]
___73-[IMAPMailboxSyncEngine _syncWithDataSourceWithMonitor:messagesFromOpen:]_block_invoke
___copy_helper_block_835
___destroy_helper_block_836
-[IMAPMailboxSyncEngine _cacheMessagesWithMonitor:]
___51-[IMAPMailboxSyncEngine _cacheMessagesWithMonitor:]_block_invoke
___copy_helper_block_852
___destroy_helper_block_853
-[IMAPMailboxSyncEngine _cacheAttachmentsWithMonitor:]
___54-[IMAPMailboxSyncEngine _cacheAttachmentsWithMonitor:]_block_invoke
___copy_helper_block_958
___destroy_helper_block_959
-[IMAPMailboxSyncEngine _recoverFromErrorInDownload:uid:cacheList:atIndex:downloadCache:]
-[IMAPMailboxSyncEngine _handleInvitationMessagesWithMonitor:]
-[IMAPMailboxSyncEngine _cachePolicyForAccount:]
-[IMAPMailboxSyncEngine handleResponse:forOperation:]
-[IMAPMailboxSyncEngine _setupFakeResponseToOperation:messageNumber:]
-[IMAPMailboxSyncEngine _handleFailedFetchResponseForOperation:]
-[IMAPMailboxSyncEngine messageListIsSynchronized]
-[IMAPMailboxSyncEngine setMessageListIsSynchronized:]
-[IMAPMailboxSyncEngine numberOfMessagesOnServer]
-[IMAPMailboxSyncEngine setNumberOfMessagesOnServer:]
-[IMAPMailboxSyncEngine computedHighestModificationSequence]
-[IMAPMailboxSyncEngine setComputedHighestModificationSequence:]
-[IMAPMailboxSyncEngine uidNext]
-[IMAPMailboxSyncEngine setUidNext:]
-[IMAPMailboxSyncEngine connectionSupportsUIDPLUS]
-[IMAPMailboxSyncEngine setConnectionSupportsUIDPLUS:]
-[IMAPMailboxSyncEngine forceSyncOfAllMessages]
-[IMAPMailboxSyncEngine setForceSyncOfAllMessages:]
-[IMAPMailboxSyncEngine .cxx_destruct]
+[IMAPMessage initialize]
-[IMAPMessage initWithFlags:size:uid:]
-[IMAPMessage description]
-[IMAPMessage messageID]
-[IMAPMessage uid]
-[IMAPMessage setUid:]
-[IMAPMessage isMessageContentLocallyAvailable]
-[IMAPMessage mailboxName]
-[IMAPMessage remoteID]
-[IMAPMessage remoteMailboxURLString]
-[IMAPMessage originalMailboxURLString]
-[IMAPMessage subject]
-[IMAPMessage account]
-[IMAPMessage dataSource]
-[IMAPMessage setDataSource:]
+[IMAPMessageDetails newMessageDetailsWithPersistentIDType:]
-[IMAPMessageDetails init]
-[IMAPMessageDetails description]
+[IMAPMessageDetails searchDetails:forUid:skippingUid:]
-[IMAPMessageDetails messageFlags]
-[IMAPMessageDetails setMessageFlags:]
-[IMAPMessageDetails uid]
-[IMAPMessageDetails setUid:]
-[IMAPMessageDetails isInvalid]
-[IMAPMessageDetails setIsInvalid:]
-[_IMAPLibraryIDDetails description]
-[_IMAPLibraryIDDetails persistentIDType]
-[_IMAPLibraryIDDetails libraryID]
-[_IMAPLibraryIDDetails setLibraryID:]
-[_IMAPManagedObjectIDDetails description]
-[_IMAPManagedObjectIDDetails persistentIDType]
-[_IMAPManagedObjectIDDetails managedObjectID]
-[_IMAPManagedObjectIDDetails setManagedObjectID:]
-[_IMAPManagedObjectIDDetails .cxx_destruct]
-[IMAPMessageDownload dealloc]
-[IMAPMessageDownload initWithMessage:]
-[IMAPMessageDownload createCopy]
-[IMAPMessageDownload message]
-[IMAPMessageDownload setMessage:]
-[IMAPMessageDownload data]
-[IMAPMessageDownload isComplete]
-[IMAPMessageDownload handleFetchResult:]
-[IMAPMessageDownload processResults]
-[IMAPMessageDownload _addMimeSubdownloadsToPipeline:withCache:]
-[IMAPMessageDownload addCommandsToPipeline:withCache:]
-[IMAPMessageDownload topLevelPart]
-[IMAPMessageDownload setTopLevelPart:]
-[IMAPMessageDownload allowsPartialDownloads]
-[IMAPMessageDownload setAllowsPartialDownloads:]
-[IMAPMessageDownload writesCacheFile]
-[IMAPMessageDownload setWritesCacheFile:]
-[IMAPMessageDownload .cxx_destruct]
-[IMAPMessageProxy initWithManagedObject:]
-[IMAPMessageProxy uid]
-[IMAPMessageProxy setUid:]
-[IMAPMessageProxy messageID]
-[IMAPMessageProxy isPartial]
-[IMAPMessageProxy setIsPartial:]
-[IMAPMessageProxy partsHaveBeenCached]
-[IMAPMessageProxy setPartsHaveBeenCached:]
-[IMAPMessageProxy hasTemporaryUid]
-[IMAPMessageProxy setHasTemporaryUid:]
-[IMAPMessageProxy remoteFlags]
-[IMAPMessageProxy messageSize]
-[IMAPMessageProxy subject]
-[IMAPMessageProxy dateReceived]
-[IMAPMessageProxy mailboxName]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___31-[IMAPMessageProxy mailboxName]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMAPMessageProxy persistentIDType]
-[IMAPMessageProxy managedObjectID]
-[IMAPMessageProxy remoteID]
-[IMAPMessageProxy setRemoteID:]
-[IMAPMessageProxy setData:isPartial:]
___38-[IMAPMessageProxy setData:isPartial:]_block_invoke
___copy_helper_block_210
___destroy_helper_block_211
-[IMAPMessageProxy appendData:part:]
-[IMAPMessageWithCache messageData]
-[IMAPMessageWithCache setMessageData:]
-[IMAPMessageWithCache messageDataIncludingFromSpace:newDocumentID:]
-[IMAPMessageWithCache bodyDataFetchIfNotAvailable:allowPartial:]
-[IMAPMessageWithCache isMessageContentLocallyAvailable]
-[IMAPMessageWithCache headers]
-[IMAPMessageWithCache setHeaders:]
-[IMAPMessageWithCache headersIfAvailable]
-[IMAPMessageWithCache headerDataFetchIfNotAvailable:allowPartial:]
-[IMAPMessageWithCache .cxx_destruct]
+[IMAPMimeConverter messageFromPersistedMessage:withMessageType:]
+[IMAPMimeConverter headersFromPersistedMessage:withMessageType:]
+[IMAPMimeConverter updatePersistedMessage:fromMessage:]
+[IMAPNamespaceResponse handlesResponseWithName:ofLength:]
-[IMAPNamespaceResponse description]
-[IMAPNamespaceResponse privateNamespaces]
-[IMAPNamespaceResponse setPrivateNamespaces:]
-[IMAPNamespaceResponse publicNamespaces]
-[IMAPNamespaceResponse setPublicNamespaces:]
-[IMAPNamespaceResponse sharedNamespaces]
-[IMAPNamespaceResponse setSharedNamespaces:]
-[IMAPNamespaceResponse .cxx_destruct]
-[IMAPNamespace description]
-[IMAPNamespace prefix]
-[IMAPNamespace setPrefix:]
-[IMAPNamespace separator]
-[IMAPNamespace setSeparator:]
-[IMAPNamespace extensions]
-[IMAPNamespace setExtensions:]
-[IMAPNamespace .cxx_destruct]
-[IMAPNamespaceExtension description]
-[IMAPNamespaceExtension name]
-[IMAPNamespaceExtension setName:]
-[IMAPNamespaceExtension flags]
-[IMAPNamespaceExtension setFlags:]
-[IMAPNamespaceExtension .cxx_destruct]
-[IMAPNumericResponse _responseName]
-[IMAPNumericResponse description]
-[IMAPNumericResponse number]
-[IMAPNumericResponse setNumber:]
+[IMAPExistsResponse handlesResponseWithName:ofLength:]
-[IMAPExistsResponse _responseName]
+[IMAPRecentResponse handlesResponseWithName:ofLength:]
-[IMAPRecentResponse _responseName]
+[IMAPExpungeResponse handlesResponseWithName:ofLength:]
-[IMAPExpungeResponse _responseName]
+[IMAPFetchResponse handlesResponseWithName:ofLength:]
-[IMAPFetchResponse _responseName]
-[IMAPFetchResponse envelopeFetchResult]
-[IMAPFetchResponse internalDateFetchResult]
-[IMAPFetchResponse rfc822SizeFetchResult]
-[IMAPFetchResponse bodyStructureFetchResult]
-[IMAPFetchResponse uidFetchResult]
-[IMAPFetchResponse flagsFetchResult]
-[IMAPFetchResponse modificationSequenceFetchResult]
-[IMAPFetchResponse gmailLabelsFetchResult]
-[IMAPFetchResponse bodyTextFetchResult]
-[IMAPFetchResponse bodyHeaderFetchResult]
-[IMAPFetchResponse bodySectionFetchResult]
-[IMAPFetchResponse _fetchResultOfClass:]
-[IMAPFetchResponse description]
-[IMAPFetchResponse isValid]
-[IMAPFetchResponse setIsValid:]
-[IMAPFetchResponse fetchResults]
-[IMAPFetchResponse setFetchResults:]
-[IMAPFetchResponse .cxx_destruct]
-[IMAPInternalFetchResponse _responseName]
-[IMAPOtherResponse description]
-[IMAPOtherResponse responseName]
-[IMAPOtherResponse setResponseName:]
-[IMAPOtherResponse parameters]
-[IMAPOtherResponse setParameters:]
-[IMAPOtherResponse .cxx_destruct]
-[IMAPParseContext initWithConnection:data:]
-[IMAPParseContext description]
-[IMAPParseContext parseIntoResponse]
-[IMAPParseContext _createResponseWithoutTag:]
-[IMAPParseContext _createResponseUsingMask:]
-[IMAPParseContext _parseBasicResponse]
-[IMAPParseContext _parseCapabilityResponse]
-[IMAPParseContext _parseFetchResponse]
-[IMAPParseContext _parseFlagsResponse]
-[IMAPParseContext _parseIDResponse]
-[IMAPParseContext _parseListResponse]
-[IMAPParseContext _parseNamespaceResponse]
-[IMAPParseContext _parseOtherResponse]
-[IMAPParseContext _parseQuotaResponse]
-[IMAPParseContext _parseQuotaRootResponse]
-[IMAPParseContext _parseSearchResponse]
-[IMAPParseContext _parseStatusResponse]
-[IMAPParseContext _parseWarning:]
-[IMAPParseContext _parseError:]
-[IMAPParseContext _consumeSpaces]
-[IMAPParseContext _newIMAPAtom:]
-[IMAPParseContext _newStringWithSingleQuotedCharacter]
-[IMAPParseContext _newQuotedStringUsingCaseOption:]
-[IMAPParseContext _newStringUsingCaseOption:]
-[IMAPParseContext _newNstring]
-[IMAPParseContext _number:]
-[IMAPParseContext _newNumber]
-[IMAPParseContext _modificationSequenceValue:]
-[IMAPParseContext _newModificationSequenceValue]
-[IMAPParseContext _newLiteralStringUsingCaseOption:]
-[IMAPParseContext _newLiteral]
-[IMAPParseContext _newAsString]
-[IMAPParseContext _newMailboxWithSeparatorChar:]
-[IMAPParseContext _newArray]
-[IMAPParseContext _newCapabilityArray]
-[IMAPParseContext _newStatusAttList]
-[IMAPParseContext _newMessageSetWithoutStar]
-[IMAPParseContext _newIDDictionary]
-[IMAPParseContext _newFlagsSet]
-[IMAPParseContext _newBodyData:]
-[IMAPParseContext _newNamespace]
-[IMAPParseContext _newNamespaceExtension]
-[IMAPParseContext _newArrayAllowingNulls:]
-[IMAPParseContext _newBodystructure]
-[IMAPParseContext connection]
-[IMAPParseContext setConnection:]
-[IMAPParseContext response]
-[IMAPParseContext setResponse:]
-[IMAPParseContext data]
-[IMAPParseContext setData:]
-[IMAPParseContext invalid]
-[IMAPParseContext setInvalid:]
-[IMAPParseContext .cxx_destruct]
+[IMAPQuotaResponse handlesResponseWithName:ofLength:]
-[IMAPQuotaResponse description]
-[IMAPQuotaResponse quotaRootName]
-[IMAPQuotaResponse setQuotaRootName:]
-[IMAPQuotaResponse quotas]
-[IMAPQuotaResponse setQuotas:]
-[IMAPQuotaResponse .cxx_destruct]
-[IMAPQuotaRoot initWithName:]
-[IMAPQuotaRoot init]
-[IMAPQuotaRoot description]
-[IMAPQuotaRoot setUsageFromResponse:]
-[IMAPQuotaRoot name]
-[IMAPQuotaRoot setName:]
-[IMAPQuotaRoot usage]
-[IMAPQuotaRoot setUsage:]
-[IMAPQuotaRoot .cxx_destruct]
+[IMAPQuotaRootResponse handlesResponseWithName:ofLength:]
-[IMAPQuotaRootResponse description]
-[IMAPQuotaRootResponse mailboxName]
-[IMAPQuotaRootResponse setMailboxName:]
-[IMAPQuotaRootResponse quotaRootNames]
-[IMAPQuotaRootResponse setQuotaRootNames:]
-[IMAPQuotaRootResponse .cxx_destruct]
+[IMAPResponse newIMAPResponseWithConnection:error:]
+[IMAPResponse handlesResponseWithName:ofLength:]
-[IMAPResponse isUntagged]
-[IMAPResponse description]
-[IMAPResponse wasHandled]
-[IMAPResponse setWasHandled:]
-[IMAPResponse tag]
-[IMAPResponse setTag:]
-[IMAPResponse error]
-[IMAPResponse setError:]
-[IMAPResponse .cxx_destruct]
+[IMAPSearchResponse handlesResponseWithName:ofLength:]
-[IMAPSearchResponse description]
-[IMAPSearchResponse searchResults]
-[IMAPSearchResponse setSearchResults:]
-[IMAPSearchResponse .cxx_destruct]
+[IMAPStatusResponse handlesResponseWithName:ofLength:]
-[IMAPStatusResponse description]
___33-[IMAPStatusResponse description]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMAPStatusResponse mailboxName]
-[IMAPStatusResponse setMailboxName:]
-[IMAPStatusResponse statusEntries]
-[IMAPStatusResponse setStatusEntries:]
-[IMAPStatusResponse .cxx_destruct]
GCC_except_table29
GCC_except_table36
GCC_except_table44
GCC_except_table45
GCC_except_table48
GCC_except_table56
GCC_except_table65
GCC_except_table73
GCC_except_table75
GCC_except_table76
GCC_except_table80
GCC_except_table84
GCC_except_table2
GCC_except_table17
GCC_except_table18
GCC_except_table14
GCC_except_table15
GCC_except_table17
GCC_except_table18
GCC_except_table19
GCC_except_table17
GCC_except_table21
GCC_except_table40
GCC_except_table14
GCC_except_table20
GCC_except_table21
GCC_except_table24
GCC_except_table25
GCC_except_table4
GCC_except_table6
GCC_except_table10
GCC_except_table13
GCC_except_table19
GCC_except_table20
GCC_except_table23
GCC_except_table26
GCC_except_table35
GCC_except_table47
GCC_except_table50
GCC_except_table51
GCC_except_table52
GCC_except_table55
GCC_except_table59
GCC_except_table63
GCC_except_table68
GCC_except_table71
GCC_except_table73
GCC_except_table76
GCC_except_table77
GCC_except_table80
GCC_except_table84
GCC_except_table86
GCC_except_table110
GCC_except_table4
GCC_except_table5
GCC_except_table7
GCC_except_table8
GCC_except_table12
GCC_except_table17
GCC_except_table20
GCC_except_table22
GCC_except_table23
GCC_except_table24
GCC_except_table25
GCC_except_table26
GCC_except_table27
GCC_except_table28
GCC_except_table29
GCC_except_table30
GCC_except_table31
GCC_except_table32
GCC_except_table33
GCC_except_table35
GCC_except_table38
GCC_except_table39
GCC_except_table41
GCC_except_table48
GCC_except_table13
GCC_except_table14
GCC_except_table15
GCC_except_table16
GCC_except_table17
GCC_except_table27
GCC_except_table28
GCC_except_table30
GCC_except_table40
GCC_except_table42
GCC_except_table43
GCC_except_table44
GCC_except_table45
GCC_except_table46
GCC_except_table47
GCC_except_table48
GCC_except_table49
GCC_except_table50
GCC_except_table51
GCC_except_table52
GCC_except_table53
GCC_except_table2
GCC_except_table3
GCC_except_table16
GCC_except_table17
GCC_except_table18
GCC_except_table20
GCC_except_table22
GCC_except_table24
GCC_except_table10
GCC_except_table11
GCC_except_table15
GCC_except_table20
GCC_except_table23
GCC_except_table27
GCC_except_table28
GCC_except_table29
GCC_except_table31
GCC_except_table32
GCC_except_table33
GCC_except_table36
GCC_except_table37
GCC_except_table38
GCC_except_table99
GCC_except_table100
GCC_except_table101
GCC_except_table102
GCC_except_table103
GCC_except_table7
GCC_except_table16
GCC_except_table17
GCC_except_table18
GCC_except_table24
GCC_except_table25
GCC_except_table7
GCC_except_table8
GCC_except_table54
GCC_except_table59
GCC_except_table63
GCC_except_table68
GCC_except_table69
GCC_except_table72
GCC_except_table73
GCC_except_table81
GCC_except_table82
GCC_except_table89
GCC_except_table90
GCC_except_table97
GCC_except_table108
GCC_except_table124
GCC_except_table128
GCC_except_table139
GCC_except_table146
GCC_except_table173
GCC_except_table174
GCC_except_table180
GCC_except_table12
GCC_except_table14
GCC_except_table15
GCC_except_table16
GCC_except_table17
GCC_except_table18
GCC_except_table19
GCC_except_table20
GCC_except_table21
GCC_except_table22
GCC_except_table30
GCC_except_table31
GCC_except_table38
GCC_except_table43
GCC_except_table64
GCC_except_table71
GCC_except_table72
GCC_except_table80
GCC_except_table82
GCC_except_table83
GCC_except_table84
GCC_except_table85
GCC_except_table90
GCC_except_table91
GCC_except_table100
GCC_except_table109
GCC_except_table113
GCC_except_table119
GCC_except_table5
GCC_except_table7
GCC_except_table8
GCC_except_table10
GCC_except_table14
GCC_except_table1
GCC_except_table0
_stringpool_contents
_isIMAPAtom.atomicMask
_flagHash.asso_values
___block_descriptor_tmp
___block_descriptor_tmp273
___block_descriptor_tmp289
___block_descriptor_tmp432
___block_descriptor_tmp486
___block_descriptor_tmp502
___block_descriptor_tmp573
___block_descriptor_tmp583
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp6
___block_literal_global7
___block_descriptor_tmp10
___block_literal_global11
___block_descriptor_tmp14
___block_literal_global15
___block_descriptor_tmp18
___block_literal_global19
___block_descriptor_tmp22
___block_literal_global23
___block_descriptor_tmp26
___block_literal_global27
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp811
___block_descriptor_tmp831
___block_descriptor_tmp897
___block_literal_global
-[IMAPConnection description]._StateStrings
___block_descriptor_tmp
___block_descriptor_tmp99
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp39
___block_descriptor_tmp57
___block_descriptor_tmp77
___block_literal_global78
___block_descriptor_tmp82
___block_literal_global83
___block_descriptor_tmp
___block_descriptor_tmp12
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp153
___block_descriptor_tmp183
___block_descriptor_tmp194
___block_descriptor_tmp529
_sMailboxAttributeEntries
___block_descriptor_tmp
___block_descriptor_tmp224
___block_descriptor_tmp228
___block_descriptor_tmp232
___block_descriptor_tmp247
___block_descriptor_tmp251
___block_descriptor_tmp340
___block_descriptor_tmp345
___block_descriptor_tmp368
___block_descriptor_tmp377
___block_descriptor_tmp400
___block_descriptor_tmp415
___block_descriptor_tmp435
___block_descriptor_tmp440
___block_descriptor_tmp443
___block_descriptor_tmp456
___block_descriptor_tmp471
___block_descriptor_tmp478
___block_descriptor_tmp495
___block_descriptor_tmp515
___block_descriptor_tmp602
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp184
___block_descriptor_tmp287
___block_descriptor_tmp298
___block_descriptor_tmp305
___block_descriptor_tmp457
___block_descriptor_tmp478
___block_descriptor_tmp503
___block_descriptor_tmp569
___block_descriptor_tmp690
___block_descriptor_tmp784
___block_descriptor_tmp793
___block_literal_global794
___block_descriptor_tmp837
___block_descriptor_tmp854
___block_descriptor_tmp960
_sMessageFlagsTable
___block_descriptor_tmp
___block_descriptor_tmp212
_lookupFlag.wordlist
___block_descriptor_tmp
_OBJC_IVAR_$_IMAPAccountProxy._quotaRoots
_OBJC_IVAR_$_IMAPAccountProxy._connectionPool
_OBJC_IVAR_$_IMAPAccountProxy._connectionPoolLock
_OBJC_IVAR_$_IMAPAccountProxy._defaultHighPriorityMailbox
_OBJC_IVAR_$_IMAPAccountProxy._mailboxProxiesByObjectID
_OBJC_IVAR_$_IMAPAccountProxy._imapMailboxesByMailboxProxy
_OBJC_IVAR_$_IMAPAccountProxy._readBufferSize
_OBJC_IVAR_$_IMAPAccountProxy._separatorCharacter
_OBJC_IVAR_$_IMAPAccountProxy._recoveringFromConnectionLoss
_OBJC_IVAR_$_IMAPAccountProxy._serverID
_OBJC_IVAR_$_IMAPAccountProxy._offlineRecoveryGateway
_OBJC_IVAR_$_IMAPAttachmentsDownload._message
_OBJC_IVAR_$_IMAPBasicResponse._userData
_OBJC_IVAR_$_IMAPBasicResponse._responseCode
_OBJC_IVAR_$_IMAPBasicResponse._responseInfo
_OBJC_IVAR_$_IMAPCapabilityResponse._capabilities
_OBJC_IVAR_$_IMAPClientAuthenticateOperation._saslClient
_OBJC_IVAR_$_IMAPClientAuthenticateOperation._includeInitialResponse
_OBJC_IVAR_$_IMAPClientLoginOperation._username
_OBJC_IVAR_$_IMAPClientLoginOperation._password
_OBJC_IVAR_$_IMAPClientLoginOperation._quotedUsername
_OBJC_IVAR_$_IMAPClientData._data
_OBJC_IVAR_$_IMAPClientData._commandString
_OBJC_IVAR_$_IMAPClientData._nextData
_OBJC_IVAR_$_IMAPClientData._dontLogRange
_OBJC_IVAR_$_IMAPClientData._isFrozen
_OBJC_IVAR_$_IMAPClientFetchDataItem._commandString
_OBJC_IVAR_$_IMAPClientFetchBodyDataItem._partSectionSpecifier
_OBJC_IVAR_$_IMAPClientFetchBodyDataItem._textSectionSpecifier
_OBJC_IVAR_$_IMAPClientFetchBodyDataItem._dataRange
_OBJC_IVAR_$_IMAPClientFetchOperation._messageNumbers
_OBJC_IVAR_$_IMAPClientFetchOperation._dataItems
_OBJC_IVAR_$_IMAPClientFetchOperation._responseHandler
_OBJC_IVAR_$_IMAPAggregateFetchUIDOperation._expectedSize
_OBJC_IVAR_$_IMAPClientDoneOperation._shouldQueueIdleWhenFinished
_OBJC_IVAR_$_IMAPClientDoneOperation._didQueueIdle
_OBJC_IVAR_$_IMAPClientDoneOperation._resetDate
_OBJC_IVAR_$_IMAPClientDoneOperation._isReallyReady
_OBJC_IVAR_$_IMAPClientListOperation._mailboxName
_OBJC_IVAR_$_IMAPClientListOperation._referenceName
_OBJC_IVAR_$_IMAPClientListOperation._options
_OBJC_IVAR_$_IMAPClientListOperation._listing
_OBJC_IVAR_$_IMAPClientListOperation._separator
_OBJC_IVAR_$_IMAPClientMailboxOperation._mailboxName
_OBJC_IVAR_$_IMAPClientMailboxOperation._mailboxArgumentName
_OBJC_IVAR_$_IMAPClientSelectOperation._delayed
_OBJC_IVAR_$_IMAPClientSelectOperation._imapMailbox
_OBJC_IVAR_$_IMAPClientSelectOperation._useCondStore
_OBJC_IVAR_$_IMAPClientRenameOperation._nameForNewMailbox
_OBJC_IVAR_$_IMAPClientRenameOperation._nameForNewMailboxArgument
_OBJC_IVAR_$_IMAPClientStatusOperation._dataItems
_OBJC_IVAR_$_IMAPClientStatusOperation._statusEntries
_OBJC_IVAR_$_IMAPClientAppendOperation._serverFlags
_OBJC_IVAR_$_IMAPClientAppendOperation._dateReceived
_OBJC_IVAR_$_IMAPClientAppendOperation._data
_OBJC_IVAR_$_IMAPClientAppendOperation._messageInfo
_OBJC_IVAR_$_IMAPClientAppendOperation._shouldTryCreate
_OBJC_IVAR_$_IMAPClientAppendOperation._progressMonitor
_OBJC_IVAR_$_IMAPClientNamespaceOperation._account
_OBJC_IVAR_$_IMAPClientNamespaceOperation._separatorChar
_OBJC_IVAR_$_IMAPClientNamespaceOperation._privateNamespaces
_OBJC_IVAR_$_IMAPClientNamespaceOperation._publicNamespaces
_OBJC_IVAR_$_IMAPClientNamespaceOperation._sharedNamespaces
_OBJC_IVAR_$_IMAPClientOperation._gateway
_OBJC_IVAR_$_IMAPClientOperation._completionState
_OBJC_IVAR_$_IMAPClientSuspendOperation._shouldExecuteSynchronously
_OBJC_IVAR_$_IMAPSingleClientOperation._sequenceNumber
_OBJC_IVAR_$_IMAPSingleClientOperation._untaggedResponses
_OBJC_IVAR_$_IMAPSingleClientOperation._error
_OBJC_IVAR_$_IMAPSingleClientOperation._sessionNumber
_OBJC_IVAR_$_IMAPSingleClientOperation._isComplete
_OBJC_IVAR_$_IMAPAggregateClientOperation._operations
_OBJC_IVAR_$_IMAPClientOperationQueue._doneOperation
_OBJC_IVAR_$_IMAPClientOperationQueue._activityMonitor
_OBJC_IVAR_$_IMAPClientOperationQueue._activityMonitorLock
_OBJC_IVAR_$_IMAPClientOperationQueue._activityMonitorIsActive
_OBJC_IVAR_$_IMAPClientOperationQueue._activityFinishTimer
_OBJC_IVAR_$_IMAPClientOperationQueue._addOperationLock
_OBJC_IVAR_$_IMAPClientOperationQueue._selectOperation
_OBJC_IVAR_$_IMAPClientOperationQueue._suspendOperation
_OBJC_IVAR_$_IMAPClientOperationQueue._gateway
_OBJC_IVAR_$_IMAPClientOperationQueue._activityName
_OBJC_IVAR_$_IMAPClientGetQuotaOperation._quotaRoot
_OBJC_IVAR_$_IMAPClientUIDOperation._range
_OBJC_IVAR_$_IMAPClientUIDOperation._UIDs
_OBJC_IVAR_$_IMAPClientUIDStoreOperation._forGmailLabels
_OBJC_IVAR_$_IMAPClientUIDStoreOperation._add
_OBJC_IVAR_$_IMAPClientUIDStoreOperation._flagsOrGmailLabels
_OBJC_IVAR_$_IMAPClientUIDCopyOperation._destinationMailboxName
_OBJC_IVAR_$_IMAPClientUIDCopyOperation._destinationMailboxArgumentName
_OBJC_IVAR_$_IMAPClientUIDCopyOperation._messageInfo
_OBJC_IVAR_$_IMAPClientUIDCopyOperation._shouldTryCreate
_OBJC_IVAR_$_IMAPClientUIDSearchOperation._terms
_OBJC_IVAR_$_IMAPClientUIDSearchOperation._matchingUIDs
_OBJC_IVAR_$_IMAPCommandPipeline._imapCommandPipelineLock
_OBJC_IVAR_$_IMAPCommandPipeline._chunkSize
_OBJC_IVAR_$_IMAPCommandPipeline._expectedSize
_OBJC_IVAR_$_IMAPCommandPipeline._isSending
_OBJC_IVAR_$_IMAPCommandPipeline._fetchUnits
_OBJC_IVAR_$__IMAPFetchUnit._uid
_OBJC_IVAR_$__IMAPFetchUnit._fetchItem
_OBJC_IVAR_$__IMAPFetchUnit._expectedFetchResult
_OBJC_IVAR_$__IMAPFetchUnit._expectedLength
_OBJC_IVAR_$__UIDsBatch._uids
_OBJC_IVAR_$__UIDsBatch.expectedLength
_OBJC_IVAR_$_IMAPConnection._capabilities
_OBJC_IVAR_$_IMAPConnection._expirationTime
_OBJC_IVAR_$_IMAPConnection._selectedMailbox
_OBJC_IVAR_$_IMAPConnection._fetchSizeFirstTime
_OBJC_IVAR_$_IMAPConnection._streamEventQueue
_OBJC_IVAR_$_IMAPConnection._unhandledTaggedResponses
_OBJC_IVAR_$_IMAPConnection._imapConnectionLock
_OBJC_IVAR_$_IMAPConnection._createsGateway
_OBJC_IVAR_$_IMAPConnection._selectedMailboxIsReadOnly
_OBJC_IVAR_$_IMAPConnection._connectionState
_OBJC_IVAR_$_IMAPConnection._commandNumber
_OBJC_IVAR_$_IMAPConnection._gateway
_OBJC_IVAR_$_IMAPConnection._selectedIMAPMailbox
_OBJC_IVAR_$_IMAPConnection._executingInternalReconnect
_OBJC_IVAR_$_IMAPConnection._lastIdleSequenceNumber
_OBJC_IVAR_$_IMAPConnection._lastIdleSessionNumber
_OBJC_IVAR_$_IMAPConnection._capabilityFlags
_OBJC_IVAR_$_IMAPConnection._separatorChar
_OBJC_IVAR_$_IMAPConnection._fetchSizeNextReadingIndex
_OBJC_IVAR_$_IMAPConnection._fetchSizeRollingAverage
_OBJC_IVAR_$_IMAPConnection._fetchSizeFilledHistory
_OBJC_IVAR_$_IMAPConnection._fetchSizeRecentTimes
_OBJC_IVAR_$_IMAPConnection._readBufferSize
_OBJC_IVAR_$_IMAPConnection._validatingLock
_OBJC_IVAR_$_IMAPConnection._canStartIdle
_OBJC_IVAR_$_IMAPConnection._sentID
_OBJC_IVAR_$_IMAPConnectionPool._idleConnectionsByMailbox
_OBJC_IVAR_$_IMAPConnectionPool._activeConnectionsByMailbox
_OBJC_IVAR_$_IMAPConnectionPool._suspendedGateways
_OBJC_IVAR_$_IMAPConnectionPool._maximumConnectionCount
_OBJC_IVAR_$_IMAPConnectionPool._defaultIdleMailboxName
_OBJC_IVAR_$_IMAPConnectionPool._availabilityCondition
_OBJC_IVAR_$_IMAPConnectionPool._connectionPoolLock
_OBJC_IVAR_$__IMAPConnectionEnumerator._connectionsByMailboxName
_OBJC_IVAR_$__IMAPConnectionEnumerator._allMailboxNames
_OBJC_IVAR_$__IMAPConnectionEnumerator._allMailboxNamesCount
_OBJC_IVAR_$__IMAPConnectionEnumerator._positionInMailboxNames
_OBJC_IVAR_$__IMAPConnectionEnumerator._nullEnumerator
_OBJC_IVAR_$__IMAPConnectionEnumerator._lastObjectKey
_OBJC_IVAR_$_IMAPDownload._uid
_OBJC_IVAR_$_IMAPDownload._pendingFetchResults
_OBJC_IVAR_$_IMAPSimpleDownload._length
_OBJC_IVAR_$_IMAPSimpleDownload._knownLength
_OBJC_IVAR_$_IMAPSimpleDownload._bytesFetched
_OBJC_IVAR_$_IMAPSimpleDownload._mdata
_OBJC_IVAR_$_IMAPSimpleDownload._complete
_OBJC_IVAR_$_IMAPSimpleDownload._error
_OBJC_IVAR_$_IMAPSimpleDownload._partSectionSpecifier
_OBJC_IVAR_$_IMAPSimpleDownload._textSectionSpecifier
_OBJC_IVAR_$_IMAPCompoundDownload._subdownloads
_OBJC_IVAR_$_IMAPDownloadCache._downloads
_OBJC_IVAR_$_IMAPEnvelopeFetchResult._envelope
_OBJC_IVAR_$_IMAPInternalDateFetchResult._internalDate
_OBJC_IVAR_$_IMAPRFC822SizeFetchResult._messageSize
_OBJC_IVAR_$_IMAPBodyStructureFetchResult._bodyStructure
_OBJC_IVAR_$_IMAPUidFetchResult._uid
_OBJC_IVAR_$_IMAPFlagsFetchResult._flagsArray
_OBJC_IVAR_$_IMAPModificationSequenceFetchResult._modificationSequence
_OBJC_IVAR_$_IMAPGmailLabelsFetchResult._gmailLabels
_OBJC_IVAR_$_IMAPBodyFetchResult._fetchData
_OBJC_IVAR_$_IMAPBodyFetchResult._startOffset
_OBJC_IVAR_$_IMAPBodySectionFetchResult._section
_OBJC_IVAR_$_IMAPFlagsResponse._flags
_OBJC_IVAR_$_IMAPGateway._connectionAvailabilityCondition
_OBJC_IVAR_$_IMAPGateway._checkInQueue
_OBJC_IVAR_$_IMAPGateway._clientOperationsLock
_OBJC_IVAR_$_IMAPGateway._operationQueueCanCheckInConnection
_OBJC_IVAR_$_IMAPGateway._clientOperations
_OBJC_IVAR_$_IMAPGateway._savedQualityOfServiceForClientOperations
_OBJC_IVAR_$_IMAPGateway._savedOperationQueueQualityOfService
_OBJC_IVAR_$_IMAPGateway._operationQueue
_OBJC_IVAR_$_IMAPGateway._canYield
_OBJC_IVAR_$_IMAPGateway._remainedDeserted
_OBJC_IVAR_$_IMAPGateway._isSealedShut
_OBJC_IVAR_$_IMAPGateway._needsSelect
_OBJC_IVAR_$_IMAPGateway._primaryClientAllowsYielding
_OBJC_IVAR_$_IMAPGateway._connectionPool
_OBJC_IVAR_$_IMAPGateway._primitiveConnection
_OBJC_IVAR_$_IMAPIDResponse._serverID
_OBJC_IVAR_$_IMAPInternalUidFlagsResponse._uids
_OBJC_IVAR_$_IMAPInternalUidFlagsResponse._flagsFetchResult
_OBJC_IVAR_$_IMAPInternalUidFlagsResponse._flagChangeType
_OBJC_IVAR_$_IMAPListResponse._mailboxAttributes
_OBJC_IVAR_$_IMAPListResponse._separator
_OBJC_IVAR_$_IMAPListResponse._mailboxName
_OBJC_IVAR_$_IMAPMailbox._delegate
_OBJC_IVAR_$_IMAPMailbox._selectedGateway
_OBJC_IVAR_$_IMAPMailbox._exists
_OBJC_IVAR_$_IMAPMailbox._uidValidity
_OBJC_IVAR_$_IMAPMailbox._hasNewResponses
_OBJC_IVAR_$_IMAPMailbox._allegedHighestModificationSequenceHasBeenInitialized
_OBJC_IVAR_$_IMAPMailbox._allegedHighestModificationSequence
_OBJC_IVAR_$_IMAPMailbox._computedHighestModificationSequenceHasBeenInitialized
_OBJC_IVAR_$_IMAPMailbox._computedHighestModificationSequence
_OBJC_IVAR_$_IMAPMailbox._permanentFlags
_OBJC_IVAR_$_IMAPMailbox._mailbox
_OBJC_IVAR_$_IMAPMailbox._referenceName
_OBJC_IVAR_$_IMAPMailbox._readOnly
_OBJC_IVAR_$_IMAPMailbox._uidNotSticky
_OBJC_IVAR_$_IMAPMailbox._quotaRoots
_OBJC_IVAR_$_IMAPMailbox._quotaUsage
_OBJC_IVAR_$_IMAPMailbox._uidNext
_OBJC_IVAR_$_IMAPMailbox._unseenCount
_OBJC_IVAR_$_IMAPMailbox._supportsModificationSequences
_OBJC_IVAR_$_IMAPMailbox._unprocessedResponses
_OBJC_IVAR_$_IMAPMailboxProxy._fetchPipeline
_OBJC_IVAR_$_IMAPMailboxProxy._downloadCache
_OBJC_IVAR_$_IMAPMailboxProxy._messagesToAdd
_OBJC_IVAR_$_IMAPMailboxProxy._messagesBeingAdded
_OBJC_IVAR_$_IMAPMailboxProxy._messagesWereAddedQueue
_OBJC_IVAR_$_IMAPMailboxProxy._messageIDsBeingUpdated
_OBJC_IVAR_$_IMAPMailboxProxy._copyLock
_OBJC_IVAR_$_IMAPMailboxProxy._imapMailboxQueue
_OBJC_IVAR_$_IMAPMailboxProxy._imapMailboxLock
_OBJC_IVAR_$_IMAPMailboxProxy._mailboxSyncEngine
_OBJC_IVAR_$_IMAPMailboxProxy._imapMailbox
_OBJC_IVAR_$_IMAPMailboxProxy._account
_OBJC_IVAR_$_IMAPMailboxProxy._doingHasMessages
_OBJC_IVAR_$__NonBoostingLock._lock
_OBJC_IVAR_$_IMAPMailboxSyncEngine._dataSource
_OBJC_IVAR_$_IMAPMailboxSyncEngine._allNewUids
_OBJC_IVAR_$_IMAPMailboxSyncEngine._messageNumbersNeedingUIDs
_OBJC_IVAR_$_IMAPMailboxSyncEngine._dataSourceIsInboxOrAllMail
_OBJC_IVAR_$_IMAPMailboxSyncEngine._maxSkeletonsToFetch
_OBJC_IVAR_$_IMAPMailboxSyncEngine._syncEngineQueue
_OBJC_IVAR_$_IMAPMailboxSyncEngine._syncEngineLock
_OBJC_IVAR_$_IMAPMailboxSyncEngine._messagesNeedingAttachmentNames
_OBJC_IVAR_$_IMAPMailboxSyncEngine._rangeOfMessagesToFetchFlagsAndUidsForSyncing
_OBJC_IVAR_$_IMAPMailboxSyncEngine._compareByUid
_OBJC_IVAR_$_IMAPMailboxSyncEngine._activeOperations
_OBJC_IVAR_$_IMAPMailboxSyncEngine._IMAPMailbox
_OBJC_IVAR_$_IMAPMailboxSyncEngine._messageDetails
_OBJC_IVAR_$_IMAPMailboxSyncEngine._uidValidity
_OBJC_IVAR_$_IMAPMailboxSyncEngine._localDataSourceUidNext
_OBJC_IVAR_$_IMAPMailboxSyncEngine._automaticallyStartThread
_OBJC_IVAR_$_IMAPMailboxSyncEngine._newMailReceivedInInbox
_OBJC_IVAR_$_IMAPMailboxSyncEngine._checkedForNewUids
_OBJC_IVAR_$_IMAPMailboxSyncEngine._isCheckingNewMail
_OBJC_IVAR_$_IMAPMailboxSyncEngine._isReset
_OBJC_IVAR_$_IMAPMailboxSyncEngine._needToUpdateExists
_OBJC_IVAR_$_IMAPMailboxSyncEngine._newUidValidity
_OBJC_IVAR_$_IMAPMailboxSyncEngine._messagesAddedToDataSource
_OBJC_IVAR_$_IMAPMailboxSyncEngine._uidsAddedToServer
_OBJC_IVAR_$_IMAPMailboxSyncEngine._newResponsesAvailable
_OBJC_IVAR_$_IMAPMailboxSyncEngine._auxiliaryLists
_OBJC_IVAR_$_IMAPMailboxSyncEngine._expungedUids
_OBJC_IVAR_$_IMAPMailboxSyncEngine._fetchingDueToAllegedModificationSequenceChange
_OBJC_IVAR_$_IMAPMailboxSyncEngine._gateway
_OBJC_IVAR_$_IMAPMailboxSyncEngine._messageUIDsCachedDuringRouting
_OBJC_IVAR_$_IMAPMailboxSyncEngine._progressType
_OBJC_IVAR_$_IMAPMailboxSyncEngine._progressTotal
_OBJC_IVAR_$_IMAPMailboxSyncEngine._messagesBeingRouted
_OBJC_IVAR_$_IMAPMailboxSyncEngine._fetchedMessagesCount
_OBJC_IVAR_$_IMAPMailboxSyncEngine._labelsByRemoteId
_OBJC_IVAR_$_IMAPMailboxSyncEngine._messagesNeedAttachmentNames
_OBJC_IVAR_$_IMAPMailboxSyncEngine._UIDsNeedingSkeletons
_OBJC_IVAR_$_IMAPMailboxSyncEngine._synchronizedOldMessages
_OBJC_IVAR_$_IMAPMailboxSyncEngine._numMessagesOnServer
_OBJC_IVAR_$_IMAPMailboxSyncEngine._computedHighestModificationSequence
_OBJC_IVAR_$_IMAPMailboxSyncEngine._uidNext
_OBJC_IVAR_$_IMAPMailboxSyncEngine._connectionSupportsUIDPLUS
_OBJC_IVAR_$_IMAPMailboxSyncEngine._forceSyncOfAllMessages
_OBJC_IVAR_$_IMAPMessage._uid
_OBJC_IVAR_$_IMAPMessageDetails._messageFlags
_OBJC_IVAR_$_IMAPMessageDetails._uid
_OBJC_IVAR_$_IMAPMessageDetails._isInvalid
_OBJC_IVAR_$__IMAPLibraryIDDetails._libraryID
_OBJC_IVAR_$__IMAPManagedObjectIDDetails._managedObjectID
_OBJC_IVAR_$_IMAPMessageDownload._message
_OBJC_IVAR_$_IMAPMessageDownload._usingPartialDownloads
_OBJC_IVAR_$_IMAPMessageDownload._fetchingBodyText
_OBJC_IVAR_$_IMAPMessageDownload._startedFetch
_OBJC_IVAR_$_IMAPMessageDownload._doneAddingSubdownloads
_OBJC_IVAR_$_IMAPMessageDownload._topLevelPart
_OBJC_IVAR_$_IMAPMessageDownload._allowsPartialDownloads
_OBJC_IVAR_$_IMAPMessageDownload._writesCacheFile
_OBJC_IVAR_$_IMAPMessageProxy._remoteFlags
_OBJC_IVAR_$_IMAPMessageWithCache._messageData
_OBJC_IVAR_$_IMAPMessageWithCache._headers
_OBJC_IVAR_$_IMAPNamespaceResponse._privateNamespaces
_OBJC_IVAR_$_IMAPNamespaceResponse._publicNamespaces
_OBJC_IVAR_$_IMAPNamespaceResponse._sharedNamespaces
_OBJC_IVAR_$_IMAPNamespace._prefix
_OBJC_IVAR_$_IMAPNamespace._separator
_OBJC_IVAR_$_IMAPNamespace._extensions
_OBJC_IVAR_$_IMAPNamespaceExtension._name
_OBJC_IVAR_$_IMAPNamespaceExtension._flags
_OBJC_IVAR_$_IMAPNumericResponse._number
_OBJC_IVAR_$_IMAPFetchResponse._isValid
_OBJC_IVAR_$_IMAPFetchResponse._fetchResults
_OBJC_IVAR_$_IMAPOtherResponse._responseName
_OBJC_IVAR_$_IMAPOtherResponse._parameters
_OBJC_IVAR_$_IMAPParseContext._connection
_OBJC_IVAR_$_IMAPParseContext._data
_OBJC_IVAR_$_IMAPParseContext._start
_OBJC_IVAR_$_IMAPParseContext._end
_OBJC_IVAR_$_IMAPParseContext._response
_OBJC_IVAR_$_IMAPParseContext._invalid
_OBJC_IVAR_$_IMAPQuotaResponse._quotaRootName
_OBJC_IVAR_$_IMAPQuotaResponse._quotas
_OBJC_IVAR_$_IMAPQuotaRoot._name
_OBJC_IVAR_$_IMAPQuotaRoot._usage
_OBJC_IVAR_$_IMAPQuotaRootResponse._mailboxName
_OBJC_IVAR_$_IMAPQuotaRootResponse._quotaRootNames
_OBJC_IVAR_$_IMAPResponse._wasHandled
_OBJC_IVAR_$_IMAPResponse._tag
_OBJC_IVAR_$_IMAPResponse._error
_OBJC_IVAR_$_IMAPSearchResponse._searchResults
_OBJC_IVAR_$_IMAPStatusResponse._mailboxName
_OBJC_IVAR_$_IMAPStatusResponse._statusEntries
_sFetchTargetTime
_sMaxFetchChunkSize
_sMinFetchChunkSize
_sDefaultIMAPConnectionCount
_sIMAPIdleRefreshDelay
+[IMAPClientFetchDataItem flagsDataItem].flagsDataItem
+[IMAPClientFetchDataItem flagsDataItem].onceToken
+[IMAPClientFetchDataItem UIDDataItem].UIDDataItem
+[IMAPClientFetchDataItem UIDDataItem].onceToken
+[IMAPClientFetchDataItem bodyStructureDataItem].bodyStructureDataItem
+[IMAPClientFetchDataItem bodyStructureDataItem].onceToken
+[IMAPClientFetchDataItem internalDateDataItem].internalDateDataItem
+[IMAPClientFetchDataItem internalDateDataItem].onceToken
+[IMAPClientFetchDataItem sizeDataItem].sizeDataItem
+[IMAPClientFetchDataItem sizeDataItem].onceToken
+[IMAPClientFetchDataItem modificationSequenceDataItem].modificationSequenceDataItem
+[IMAPClientFetchDataItem modificationSequenceDataItem].onceToken
+[IMAPClientFetchDataItem gmailLabelsDataItem].gmailLabelsDataItem
+[IMAPClientFetchDataItem gmailLabelsDataItem].onceToken
+[IMAPClientFetchOperation _headersToFetch]._basicHeadersArray
+[IMAPClientFetchOperation _headersToFetch]._lastRequiredHeadersArray
+[IMAPClientFetchOperation _headersToFetch]._lastRequiredHeadersFromRouter
+[IMAPClientFetchOperation _fetchDataItemsForMessageSkeletonsWithHeaders:]._lastRequiredHeadersArray
+[IMAPClientFetchOperation _fetchDataItemsForMessageSkeletonsWithHeaders:]._lastResponse
+[IMAPClientFetchOperation _fetchDataItemsForMessageSkeletonsWithHeaders:].result
+[IMAPClientOperation IMAPNeedsLiteralCharacterSet]._needsLiteralCharacterSet
+[IMAPClientOperation _IMAPNeedsQuoteCharacterSet].needsQuoteCharacterSet
+[IMAPClientOperation _IMAPNeedsQuoteCharacterSet].onceToken
_sFetchVariability
_sDebugConnectionPool
_sUserAgent
+[IMAPFramework bundle].imapFrameworkBundle
+[IMAPFramework bundle].onceToken
+[IMAPFramework logsIMAPErrors].onceToken
_sLogsIMAPErrors
_sIdleGateways
_sIdleTimer
_sSimulatedOperationQueue
+[IMAPGateway sharedKeySetForMessageInfo].onceToken
+[IMAPGateway sharedKeySetForMessageInfo].messageInfoSharedKeySet
_IMAPCreateArrayForMessageFlags
_IMAPIdAddress
_IMAPIdArguments
_IMAPIdCommand
_IMAPIdDate
_IMAPIdEnvironment
_IMAPIdName
_IMAPIdOS
_IMAPIdOSVersion
_IMAPIdSupportURL
_IMAPIdVendor
_IMAPIdVersion
_IMAPLineEnding
_IMAPLineEndingLength
_IMAPLineEndingString
_IMAPLogCategoryIMAPConnectionPool
_IMAPMailboxKeyAttributes
_IMAPMailboxKeyChildren
_IMAPMailboxKeyName
_IMAPMailboxUserInfoKeySupportsCustomFlags
_IMAPMaxUIDsPerOperation
_IMAPMessageDidSetBodyNotification
_IMAPMessageFlagAnswered
_IMAPMessageFlagColorBit0
_IMAPMessageFlagColorBit1
_IMAPMessageFlagColorBit2
_IMAPMessageFlagDeleted
_IMAPMessageFlagDollarForwarded
_IMAPMessageFlagDollarJunk
_IMAPMessageFlagDollarNotJunk
_IMAPMessageFlagDraft
_IMAPMessageFlagFlagged
_IMAPMessageFlagForwarded
_IMAPMessageFlagJunk
_IMAPMessageFlagJunkMailLevelRecorded
_IMAPMessageFlagMDNSent
_IMAPMessageFlagNotJunk
_IMAPMessageFlagRecent
_IMAPMessageFlagRedirected
_IMAPMessageFlagSeen
_IMAPMessageFlagSubmitPending
_IMAPMessageFlagSubmitted
_IMAPMessageFlagsFromArray
_IMAPMessageInfoKeyDestinationUidSet
_IMAPMessageInfoKeySourceUidSet
_IMAPMessageInfoKeyUIDValidity
_IMAPPermanentFlagsFromSet
_IMAPQuotaKeyCurrentUsage
_IMAPQuotaKeyMaxUsage
_IMAPQuotaKeyResourceName
_IMAPQuotaResourceMessage
_IMAPQuotaResourceStorage
_IMAPSASLProfileName
_IMAPStandardPorts
_IMAPStandardSSLPorts
_IMAPStatusKeyHighestModificationSequence
_IMAPStatusKeyMessages
_IMAPStatusKeyRecent
_IMAPStatusKeyUidNext
_IMAPStatusKeyUidValidity
_IMAPStatusKeyUnseen
_IMAPStringKeyAppendOperation
_IMAPStringKeyCheckOperation
_IMAPStringKeyConnectingFormat
_IMAPStringKeyCreateOperation
_IMAPStringKeyDeleteOperation
_IMAPStringKeyDestinationMailboxDetailsFormat
_IMAPStringKeyExamineOperation
_IMAPStringKeyExpungeOperation
_IMAPStringKeyFetchOperation
_IMAPStringKeyQuotedFormat
_IMAPStringKeyRemovingCacheFiles
_IMAPStringKeyRenameOperation
_IMAPStringKeyServerStatusFormat
_IMAPStringKeyUidCopyOperation
_IMAPStringKeyUidSearchOperation
_IMAPStringKeyUidStoreOperation
_IMAPVersionNumber
_IMAPVersionString
_OBJC_CLASS_$_IMAPAccountProxy
_OBJC_CLASS_$_IMAPAggregateClientOperation
_OBJC_CLASS_$_IMAPAggregateFetchUIDOperation
_OBJC_CLASS_$_IMAPAggregateGetQuotaRootOperation
_OBJC_CLASS_$_IMAPAggregateStatusOperation
_OBJC_CLASS_$_IMAPAttachmentsDownload
_OBJC_CLASS_$_IMAPBadResponse
_OBJC_CLASS_$_IMAPBasicResponse
_OBJC_CLASS_$_IMAPBodyFetchResult
_OBJC_CLASS_$_IMAPBodyHeaderFetchResult
_OBJC_CLASS_$_IMAPBodySectionFetchResult
_OBJC_CLASS_$_IMAPBodyStructureFetchResult
_OBJC_CLASS_$_IMAPBodyTextFetchResult
_OBJC_CLASS_$_IMAPByeResponse
_OBJC_CLASS_$_IMAPCapabilityResponse
_OBJC_CLASS_$_IMAPClientAppendOperation
_OBJC_CLASS_$_IMAPClientAuthenticateOperation
_OBJC_CLASS_$_IMAPClientCapabilityOperation
_OBJC_CLASS_$_IMAPClientCheckOperation
_OBJC_CLASS_$_IMAPClientCloseOperation
_OBJC_CLASS_$_IMAPClientCreateOperation
_OBJC_CLASS_$_IMAPClientData
_OBJC_CLASS_$_IMAPClientDeleteOperation
_OBJC_CLASS_$_IMAPClientDoneOperation
_OBJC_CLASS_$_IMAPClientExamineOperation
_OBJC_CLASS_$_IMAPClientExpungeOperation
_OBJC_CLASS_$_IMAPClientFetchBodyDataItem
_OBJC_CLASS_$_IMAPClientFetchChangedSinceDataItem
_OBJC_CLASS_$_IMAPClientFetchDataItem
_OBJC_CLASS_$_IMAPClientFetchOperation
_OBJC_CLASS_$_IMAPClientFetchUIDOperation
_OBJC_CLASS_$_IMAPClientGetQuotaOperation
_OBJC_CLASS_$_IMAPClientGetQuotaRootOperation
_OBJC_CLASS_$_IMAPClientIDOperation
_OBJC_CLASS_$_IMAPClientIdleOperation
_OBJC_CLASS_$_IMAPClientLSubOperation
_OBJC_CLASS_$_IMAPClientListOperation
_OBJC_CLASS_$_IMAPClientLoginOperation
_OBJC_CLASS_$_IMAPClientLogoutOperation
_OBJC_CLASS_$_IMAPClientMailboxOperation
_OBJC_CLASS_$_IMAPClientNamespaceOperation
_OBJC_CLASS_$_IMAPClientNoopOperation
_OBJC_CLASS_$_IMAPClientOperation
_OBJC_CLASS_$_IMAPClientOperationQueue
_OBJC_CLASS_$_IMAPClientRenameOperation
_OBJC_CLASS_$_IMAPClientSelectOperation
_OBJC_CLASS_$_IMAPClientStartTLSOperation
_OBJC_CLASS_$_IMAPClientStatusOperation
_OBJC_CLASS_$_IMAPClientSubscribeOperation
_OBJC_CLASS_$_IMAPClientSuspendOperation
_OBJC_CLASS_$_IMAPClientUIDCopyOperation
_OBJC_CLASS_$_IMAPClientUIDExpungeOperation
_OBJC_CLASS_$_IMAPClientUIDOperation
_OBJC_CLASS_$_IMAPClientUIDSearchOperation
_OBJC_CLASS_$_IMAPClientUIDStoreOperation
_OBJC_CLASS_$_IMAPClientUnselectOperation
_OBJC_CLASS_$_IMAPClientUnsubscribeOperation
_OBJC_CLASS_$_IMAPCommandPipeline
_OBJC_CLASS_$_IMAPCompoundDownload
_OBJC_CLASS_$_IMAPConnection
_OBJC_CLASS_$_IMAPConnectionPool
_OBJC_CLASS_$_IMAPContinuationResponse
_OBJC_CLASS_$_IMAPDownload
_OBJC_CLASS_$_IMAPDownloadCache
_OBJC_CLASS_$_IMAPEnvelopeFetchResult
_OBJC_CLASS_$_IMAPExistsResponse
_OBJC_CLASS_$_IMAPExpungeResponse
_OBJC_CLASS_$_IMAPFetchResponse
_OBJC_CLASS_$_IMAPFetchResult
_OBJC_CLASS_$_IMAPFlagsFetchResult
_OBJC_CLASS_$_IMAPFlagsResponse
_OBJC_CLASS_$_IMAPFramework
_OBJC_CLASS_$_IMAPGateway
_OBJC_CLASS_$_IMAPGmailLabelsFetchResult
_OBJC_CLASS_$_IMAPIDResponse
_OBJC_CLASS_$_IMAPInternalDateFetchResult
_OBJC_CLASS_$_IMAPInternalFetchResponse
_OBJC_CLASS_$_IMAPInternalUidFlagsResponse
_OBJC_CLASS_$_IMAPLSubResponse
_OBJC_CLASS_$_IMAPListResponse
_OBJC_CLASS_$_IMAPMailbox
_OBJC_CLASS_$_IMAPMailboxProxy
_OBJC_CLASS_$_IMAPMailboxSyncEngine
_OBJC_CLASS_$_IMAPMessage
_OBJC_CLASS_$_IMAPMessageDetails
_OBJC_CLASS_$_IMAPMessageDownload
_OBJC_CLASS_$_IMAPMessageProxy
_OBJC_CLASS_$_IMAPMessageWithCache
_OBJC_CLASS_$_IMAPMimeConverter
_OBJC_CLASS_$_IMAPModificationSequenceFetchResult
_OBJC_CLASS_$_IMAPNamespace
_OBJC_CLASS_$_IMAPNamespaceExtension
_OBJC_CLASS_$_IMAPNamespaceResponse
_OBJC_CLASS_$_IMAPNoResponse
_OBJC_CLASS_$_IMAPNumericResponse
_OBJC_CLASS_$_IMAPOKResponse
_OBJC_CLASS_$_IMAPOtherResponse
_OBJC_CLASS_$_IMAPParseContext
_OBJC_CLASS_$_IMAPPreauthResponse
_OBJC_CLASS_$_IMAPQuotaResponse
_OBJC_CLASS_$_IMAPQuotaRoot
_OBJC_CLASS_$_IMAPQuotaRootResponse
_OBJC_CLASS_$_IMAPRFC822SizeFetchResult
_OBJC_CLASS_$_IMAPRecentResponse
_OBJC_CLASS_$_IMAPResponse
_OBJC_CLASS_$_IMAPSearchResponse
_OBJC_CLASS_$_IMAPSimpleDownload
_OBJC_CLASS_$_IMAPSingleClientOperation
_OBJC_CLASS_$_IMAPStatusResponse
_OBJC_CLASS_$_IMAPUidFetchResult
_OBJC_CLASS_$__IMAPClientSimulatedSelectOperation
_OBJC_CLASS_$__IMAPConnectionEnumerator
_OBJC_CLASS_$__IMAPFetchUnit
_OBJC_CLASS_$__IMAPLibraryIDDetails
_OBJC_CLASS_$__IMAPManagedObjectIDDetails
_OBJC_CLASS_$__NonBoostingLock
_OBJC_CLASS_$__UIDsBatch
_OBJC_METACLASS_$_IMAPAccountProxy
_OBJC_METACLASS_$_IMAPAggregateClientOperation
_OBJC_METACLASS_$_IMAPAggregateFetchUIDOperation
_OBJC_METACLASS_$_IMAPAggregateGetQuotaRootOperation
_OBJC_METACLASS_$_IMAPAggregateStatusOperation
_OBJC_METACLASS_$_IMAPAttachmentsDownload
_OBJC_METACLASS_$_IMAPBadResponse
_OBJC_METACLASS_$_IMAPBasicResponse
_OBJC_METACLASS_$_IMAPBodyFetchResult
_OBJC_METACLASS_$_IMAPBodyHeaderFetchResult
_OBJC_METACLASS_$_IMAPBodySectionFetchResult
_OBJC_METACLASS_$_IMAPBodyStructureFetchResult
_OBJC_METACLASS_$_IMAPBodyTextFetchResult
_OBJC_METACLASS_$_IMAPByeResponse
_OBJC_METACLASS_$_IMAPCapabilityResponse
_OBJC_METACLASS_$_IMAPClientAppendOperation
_OBJC_METACLASS_$_IMAPClientAuthenticateOperation
_OBJC_METACLASS_$_IMAPClientCapabilityOperation
_OBJC_METACLASS_$_IMAPClientCheckOperation
_OBJC_METACLASS_$_IMAPClientCloseOperation
_OBJC_METACLASS_$_IMAPClientCreateOperation
_OBJC_METACLASS_$_IMAPClientData
_OBJC_METACLASS_$_IMAPClientDeleteOperation
_OBJC_METACLASS_$_IMAPClientDoneOperation
_OBJC_METACLASS_$_IMAPClientExamineOperation
_OBJC_METACLASS_$_IMAPClientExpungeOperation
_OBJC_METACLASS_$_IMAPClientFetchBodyDataItem
_OBJC_METACLASS_$_IMAPClientFetchChangedSinceDataItem
_OBJC_METACLASS_$_IMAPClientFetchDataItem
_OBJC_METACLASS_$_IMAPClientFetchOperation
_OBJC_METACLASS_$_IMAPClientFetchUIDOperation
_OBJC_METACLASS_$_IMAPClientGetQuotaOperation
_OBJC_METACLASS_$_IMAPClientGetQuotaRootOperation
_OBJC_METACLASS_$_IMAPClientIDOperation
_OBJC_METACLASS_$_IMAPClientIdleOperation
_OBJC_METACLASS_$_IMAPClientLSubOperation
_OBJC_METACLASS_$_IMAPClientListOperation
_OBJC_METACLASS_$_IMAPClientLoginOperation
_OBJC_METACLASS_$_IMAPClientLogoutOperation
_OBJC_METACLASS_$_IMAPClientMailboxOperation
_OBJC_METACLASS_$_IMAPClientNamespaceOperation
_OBJC_METACLASS_$_IMAPClientNoopOperation
_OBJC_METACLASS_$_IMAPClientOperation
_OBJC_METACLASS_$_IMAPClientOperationQueue
_OBJC_METACLASS_$_IMAPClientRenameOperation
_OBJC_METACLASS_$_IMAPClientSelectOperation
_OBJC_METACLASS_$_IMAPClientStartTLSOperation
_OBJC_METACLASS_$_IMAPClientStatusOperation
_OBJC_METACLASS_$_IMAPClientSubscribeOperation
_OBJC_METACLASS_$_IMAPClientSuspendOperation
_OBJC_METACLASS_$_IMAPClientUIDCopyOperation
_OBJC_METACLASS_$_IMAPClientUIDExpungeOperation
_OBJC_METACLASS_$_IMAPClientUIDOperation
_OBJC_METACLASS_$_IMAPClientUIDSearchOperation
_OBJC_METACLASS_$_IMAPClientUIDStoreOperation
_OBJC_METACLASS_$_IMAPClientUnselectOperation
_OBJC_METACLASS_$_IMAPClientUnsubscribeOperation
_OBJC_METACLASS_$_IMAPCommandPipeline
_OBJC_METACLASS_$_IMAPCompoundDownload
_OBJC_METACLASS_$_IMAPConnection
_OBJC_METACLASS_$_IMAPConnectionPool
_OBJC_METACLASS_$_IMAPContinuationResponse
_OBJC_METACLASS_$_IMAPDownload
_OBJC_METACLASS_$_IMAPDownloadCache
_OBJC_METACLASS_$_IMAPEnvelopeFetchResult
_OBJC_METACLASS_$_IMAPExistsResponse
_OBJC_METACLASS_$_IMAPExpungeResponse
_OBJC_METACLASS_$_IMAPFetchResponse
_OBJC_METACLASS_$_IMAPFetchResult
_OBJC_METACLASS_$_IMAPFlagsFetchResult
_OBJC_METACLASS_$_IMAPFlagsResponse
_OBJC_METACLASS_$_IMAPFramework
_OBJC_METACLASS_$_IMAPGateway
_OBJC_METACLASS_$_IMAPGmailLabelsFetchResult
_OBJC_METACLASS_$_IMAPIDResponse
_OBJC_METACLASS_$_IMAPInternalDateFetchResult
_OBJC_METACLASS_$_IMAPInternalFetchResponse
_OBJC_METACLASS_$_IMAPInternalUidFlagsResponse
_OBJC_METACLASS_$_IMAPLSubResponse
_OBJC_METACLASS_$_IMAPListResponse
_OBJC_METACLASS_$_IMAPMailbox
_OBJC_METACLASS_$_IMAPMailboxProxy
_OBJC_METACLASS_$_IMAPMailboxSyncEngine
_OBJC_METACLASS_$_IMAPMessage
_OBJC_METACLASS_$_IMAPMessageDetails
_OBJC_METACLASS_$_IMAPMessageDownload
_OBJC_METACLASS_$_IMAPMessageProxy
_OBJC_METACLASS_$_IMAPMessageWithCache
_OBJC_METACLASS_$_IMAPMimeConverter
_OBJC_METACLASS_$_IMAPModificationSequenceFetchResult
_OBJC_METACLASS_$_IMAPNamespace
_OBJC_METACLASS_$_IMAPNamespaceExtension
_OBJC_METACLASS_$_IMAPNamespaceResponse
_OBJC_METACLASS_$_IMAPNoResponse
_OBJC_METACLASS_$_IMAPNumericResponse
_OBJC_METACLASS_$_IMAPOKResponse
_OBJC_METACLASS_$_IMAPOtherResponse
_OBJC_METACLASS_$_IMAPParseContext
_OBJC_METACLASS_$_IMAPPreauthResponse
_OBJC_METACLASS_$_IMAPQuotaResponse
_OBJC_METACLASS_$_IMAPQuotaRoot
_OBJC_METACLASS_$_IMAPQuotaRootResponse
_OBJC_METACLASS_$_IMAPRFC822SizeFetchResult
_OBJC_METACLASS_$_IMAPRecentResponse
_OBJC_METACLASS_$_IMAPResponse
_OBJC_METACLASS_$_IMAPSearchResponse
_OBJC_METACLASS_$_IMAPSimpleDownload
_OBJC_METACLASS_$_IMAPSingleClientOperation
_OBJC_METACLASS_$_IMAPStatusResponse
_OBJC_METACLASS_$_IMAPUidFetchResult
_OBJC_METACLASS_$__IMAPClientSimulatedSelectOperation
_OBJC_METACLASS_$__IMAPConnectionEnumerator
_OBJC_METACLASS_$__IMAPFetchUnit
_OBJC_METACLASS_$__IMAPLibraryIDDetails
_OBJC_METACLASS_$__IMAPManagedObjectIDDetails
_OBJC_METACLASS_$__NonBoostingLock
_OBJC_METACLASS_$__UIDsBatch
_lookupFlag
_sIMAPCapabilityNames
_sKeyPathDateEdited
_sKeyPathIMAPUID
_sKeyPathMIMEDataSize
_sKeyPathSubject
_CFDictionaryGetValue
_CFRelease
_CFRunLoopAddTimer
_CFRunLoopGetMain
_CFStringConvertEncodingToNSStringEncoding
_CFStringGetCStringPtr
_CFStringGetCharacters
_CFStringGetCharactersPtr
_CFStringLowercase
_CFStringUppercase
_MCAccountTypeIMAP
_MCAuthSchemeClearText
_MCDebugLog
_MCDebugLogBlock
_MCFlagKeyDeleted
_MCGmailLabelKeyAddLabels
_MCGmailLabelKeyRemoveLabels
_MCHeaderKeyCc
_MCHeaderKeyDate
_MCHeaderKeyFrom
_MCHeaderKeyInReplyTo
_MCHeaderKeyMessageId
_MCHeaderKeyReferences
_MCHeaderKeySubject
_MCHeaderKeyTo
_MCHeaderKeyXMailCreatedDate
_MCHeaderKeyXPriority
_MCHeaderKeyXUniformTypeIdentifier
_MCHeaderKeyXUniversallyUniqueIdentifier
_MCHelpTagFailedLogin
_MCHelpTagFailedSASL
_MCHelpTagTLSNotSupportedFormat
_MCMailErrorDomain
_MCMimeParameterBoundary
_MCMimeTypeMultipart
_MCNoUsageInfo
_MCStringKeyFailedLogin
_MCStringKeyFailedSASL
_MCStringKeyNoSubject
_MCStringKeyOpeningMailbox
_MCStringKeyPOPLoggingInFormat
_MCStringKeyTLSNotSupportedFormat
_NSApp
_NSCocoaErrorDomain
_NSGenericException
_NSKeyValueChangeNewKey
_NSLog
_NSPOSIXErrorDomain
_NSStreamSocketSecurityLevelNone
_NSStringEncodingDetectionSuggestedEncodingsKey
_NSStringFromSelector
_NSURLErrorKey
_OBJC_CLASS_$_MCActivityMonitor
_OBJC_CLASS_$_MCAuthScheme
_OBJC_CLASS_$_MCConnection
_OBJC_CLASS_$_MCConnectionBasedAccountProxy
_OBJC_CLASS_$_MCDateFormatterFactory
_OBJC_CLASS_$_MCDateParser
_OBJC_CLASS_$_MCError
_OBJC_CLASS_$_MCInvocationQueue
_OBJC_CLASS_$_MCMailboxProxy
_OBJC_CLASS_$_MCManagedObjectProxy
_OBJC_CLASS_$_MCMessage
_OBJC_CLASS_$_MCMessageGenerator
_OBJC_CLASS_$_MCMessageHeaders
_OBJC_CLASS_$_MCMimeConverter
_OBJC_CLASS_$_MCMimeDataEncoding
_OBJC_CLASS_$_MCMimePart
_OBJC_CLASS_$_MCMonitoredInvocation
_OBJC_CLASS_$_MCPriorityInvocation
_OBJC_CLASS_$_MCQuotaUsage
_OBJC_CLASS_$_MCRemoteMessage
_OBJC_CLASS_$_MCResultTaskOperation
_OBJC_CLASS_$_MCWorkerThread
_OBJC_CLASS_$_MailCoreFramework
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSBlockOperation
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCalendar
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSCondition
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateComponents
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSEnumerator
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSIndexSet
_OBJC_CLASS_$_NSInvocation
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSLock
_OBJC_CLASS_$_NSManagedObjectID
_OBJC_CLASS_$_NSMapTable
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableCharacterSet
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperation
_OBJC_CLASS_$_NSOperationQueue
_OBJC_CLASS_$_NSPointerArray
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSRecursiveLock
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUUID
_OBJC_CLASS_$_NSUserDefaults
_OBJC_EHTYPE_$_NSException
_OBJC_EHTYPE_id
_OBJC_IVAR_$_MCManagedObjectProxy._context
_OBJC_IVAR_$_MCManagedObjectProxy._managedObject
_OBJC_METACLASS_$_MCConnection
_OBJC_METACLASS_$_MCConnectionBasedAccountProxy
_OBJC_METACLASS_$_MCMailboxProxy
_OBJC_METACLASS_$_MCManagedObjectProxy
_OBJC_METACLASS_$_MCMimeConverter
_OBJC_METACLASS_$_MCRemoteMessage
_OBJC_METACLASS_$_NSEnumerator
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSOperation
_OBJC_METACLASS_$_NSOperationQueue
__Block_object_assign
__Block_object_dispose
__CFCopyServerVersionDictionary
__CFCopySystemVersionDictionary
__DefaultRuneLocale
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___maskrune
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__dispatch_source_type_timer
__kCFBundleShortVersionStringKey
__kCFSystemVersionBuildVersionKey
__kCFSystemVersionProductVersionKey
__objc_empty_cache
_bcopy
_dispatch_get_global_queue
_dispatch_once
_dispatch_resume
_dispatch_source_cancel
_dispatch_source_create
_dispatch_source_set_event_handler
_dispatch_source_set_timer
_free
_kCFBundleNameKey
_kCFBundleVersionKey
_kCFRunLoopCommonModes
_kSecAttrProtocolIMAP
_malloc
_memchr
_objc_autorelease
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_autoreleaseReturnValue
_objc_begin_catch
_objc_copyStruct
_objc_destroyWeak
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_exception_throw
_objc_getProperty
_objc_loadWeakRetained
_objc_msgSend
_objc_msgSendSuper2
_objc_release
_objc_retain
_objc_retainAutorelease
_objc_retainAutoreleaseReturnValue
_objc_retainAutoreleasedReturnValue
_objc_retainBlock
_objc_setProperty_atomic
_objc_setProperty_atomic_copy
_objc_setProperty_nonatomic_copy
_objc_storeStrong
_objc_storeWeak
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_pthread_rwlock_destroy
_pthread_rwlock_init
_pthread_rwlock_unlock
_pthread_rwlock_wrlock
_rand
_strncasecmp
_strncmp
dyld_stub_binder
