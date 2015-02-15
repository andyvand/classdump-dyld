-[SDActivityRequestRecord init]
-[SDActivityRequestRecord description]
-[SDActivityRequestRecord requestCreatedDate]
-[SDActivityRequestRecord requestIdentifier]
-[SDActivityRequestRecord setRequestIdentifier:]
-[SDActivityRequestRecord deviceIdentifier]
-[SDActivityRequestRecord setDeviceIdentifier:]
-[SDActivityRequestRecord completionHandler]
-[SDActivityRequestRecord setCompletionHandler:]
-[SDActivityRequestRecord timeoutTimer]
-[SDActivityRequestRecord setTimeoutTimer:]
-[SDActivityRequestRecord error]
-[SDActivityRequestRecord setError:]
-[SDActivityRequestRecord .cxx_destruct]
-[SDActivityEncryptionKeyRequestRecord description]
-[SDActivityEncryptionKeyRequestRecord previousKeyIdentifier]
-[SDActivityEncryptionKeyRequestRecord setPreviousKeyIdentifier:]
-[SDActivityEncryptionKeyRequestRecord canDoCloudRequest]
-[SDActivityEncryptionKeyRequestRecord setCanDoCloudRequest:]
-[SDActivityEncryptionKeyRequestRecord retryCount]
-[SDActivityEncryptionKeyRequestRecord setRetryCount:]
-[SDActivityEncryptionKeyRequestRecord .cxx_destruct]
-[SDActivityPayloadRequestRecord description]
-[SDActivityPayloadRequestRecord advertisementPayload]
-[SDActivityPayloadRequestRecord setAdvertisementPayload:]
-[SDActivityPayloadRequestRecord .cxx_destruct]
-[SDActivityPayloadReplyRecord description]
-[SDActivityPayloadReplyRecord messageIdentifier]
-[SDActivityPayloadReplyRecord setMessageIdentifier:]
-[SDActivityPayloadReplyRecord requestIdentifier]
-[SDActivityPayloadReplyRecord setRequestIdentifier:]
-[SDActivityPayloadReplyRecord activityIdentifier]
-[SDActivityPayloadReplyRecord setActivityIdentifier:]
-[SDActivityPayloadReplyRecord deviceIdentifier]
-[SDActivityPayloadReplyRecord setDeviceIdentifier:]
-[SDActivityPayloadReplyRecord .cxx_destruct]
-[SDAirDropTransferDataOSX initWithRecordID:]
-[SDAirDropTransferDataOSX description]
-[SDAirDropTransferDataOSX debugDescription]
-[SDAirDropTransferDataOSX updateWithDictionary:]
___49-[SDAirDropTransferDataOSX updateWithDictionary:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDAirDropTransferDataOSX isValid]
-[SDAirDropTransferDataOSX senderName]
-[SDAirDropTransferDataOSX firstFileName]
-[SDAirDropTransferDataOSX firstFileExtension]
-[SDAirDropTransferDataOSX firstFileTypeDescription]
-[SDAirDropTransferDataOSX firstURL]
-[SDAirDropTransferDataOSX contentTypes]
-[SDAirDropTransferDataOSX setItemsDescription:]
-[SDAirDropTransferDataOSX typeForFileExtension:]
-[SDAirDropTransferDataOSX messageAndButtonTitle:]
-[SDAirDropTransferDataOSX progressMessage]
-[SDAirDropTransferDataOSX transferCompleteMessage]
-[SDAirDropTransferDataOSX messageLocalizedKeyWithType:isTrustedPerson:numberOfItems:isInProgress:isCompleted:]
-[SDAirDropTransferDataOSX messageInProgress:completed:buttonTitle:]
-[SDAirDropTransferDataOSX recordID]
-[SDAirDropTransferDataOSX timeLastUserInteraction]
-[SDAirDropTransferDataOSX setTimeLastUserInteraction:]
-[SDAirDropTransferDataOSX selectedApplicationDestination]
-[SDAirDropTransferDataOSX setSelectedApplicationDestination:]
-[SDAirDropTransferDataOSX isNonFileItem]
-[SDAirDropTransferDataOSX isUnknownScheme]
-[SDAirDropTransferDataOSX isUnknownFileType]
-[SDAirDropTransferDataOSX possibleApplicationDestinations]
-[SDAirDropTransferDataOSX setPossibleApplicationDestinations:]
-[SDAirDropTransferDataOSX shouldAutoAccept]
-[SDAirDropTransferDataOSX setAutoAccept:]
-[SDAirDropTransferDataOSX smallFileIcon]
-[SDAirDropTransferDataOSX setSmallFileIcon:]
-[SDAirDropTransferDataOSX fileIcon]
-[SDAirDropTransferDataOSX setFileIcon:]
-[SDAirDropTransferDataOSX bundleID]
-[SDAirDropTransferDataOSX setBundleID:]
-[SDAirDropTransferDataOSX filesCopied]
-[SDAirDropTransferDataOSX setFilesCopied:]
-[SDAirDropTransferDataOSX files]
-[SDAirDropTransferDataOSX setFiles:]
-[SDAirDropTransferDataOSX items]
-[SDAirDropTransferDataOSX setItems:]
-[SDAirDropTransferDataOSX itemsDescriptionAdvanced]
-[SDAirDropTransferDataOSX setItemsDescriptionAdvanced:]
-[SDAirDropTransferDataOSX itemsDescription]
-[SDAirDropTransferDataOSX bytesCopied]
-[SDAirDropTransferDataOSX setBytesCopied:]
-[SDAirDropTransferDataOSX totalBytes]
-[SDAirDropTransferDataOSX setTotalBytes:]
-[SDAirDropTransferDataOSX timeRemaining]
-[SDAirDropTransferDataOSX setTimeRemaining:]
-[SDAirDropTransferDataOSX error]
-[SDAirDropTransferDataOSX setError:]
-[SDAirDropTransferDataOSX senderComputerName]
-[SDAirDropTransferDataOSX setSenderComputerName:]
-[SDAirDropTransferDataOSX senderEmail]
-[SDAirDropTransferDataOSX setSenderEmail:]
-[SDAirDropTransferDataOSX senderEmailHash]
-[SDAirDropTransferDataOSX setSenderEmailHash:]
-[SDAirDropTransferDataOSX senderFirstName]
-[SDAirDropTransferDataOSX setSenderFirstName:]
-[SDAirDropTransferDataOSX senderLastName]
-[SDAirDropTransferDataOSX setSenderLastName:]
-[SDAirDropTransferDataOSX senderID]
-[SDAirDropTransferDataOSX setSenderID:]
-[SDAirDropTransferDataOSX senderIcon]
-[SDAirDropTransferDataOSX setSenderIcon:]
-[SDAirDropTransferDataOSX senderNode]
-[SDAirDropTransferDataOSX setSenderNode:]
-[SDAirDropTransferDataOSX isVerifiableIdentity]
-[SDAirDropTransferDataOSX setVerifiableIdentity:]
-[SDAirDropTransferDataOSX contentType]
-[SDAirDropTransferDataOSX setContentType:]
-[SDAirDropTransferDataOSX .cxx_destruct]
-[SDActivityConnection initWithStreamHandler:initiator:]
-[SDActivityConnection initWithInputStream:outputStream:initiator:]
-[SDActivityConnection start]
-[SDActivityConnection stop]
-[SDActivityConnection sendInitialRequest]
___42-[SDActivityConnection sendInitialRequest]_block_invoke
-[SDActivityConnection sendActivities:]
___39-[SDActivityConnection sendActivities:]_block_invoke
-[SDActivityConnection dictionaryWithActivities:]
-[SDActivityConnection streamHandler:didReceiveMessage:]
-[SDActivityConnection streamHandlerDidClose:]
-[SDActivityConnection personID]
-[SDActivityConnection setPersonID:]
-[SDActivityConnection isInitiator]
-[SDActivityConnection delegate]
-[SDActivityConnection setDelegate:]
-[SDActivityConnection streamHandler]
-[SDActivityConnection setStreamHandler:]
-[SDActivityConnection .cxx_destruct]
+[SDCompanionCommon myIPAddress]
-[SDCompanionBrowser initWithIdentifier:serviceType:clientProxy:]
-[SDCompanionBrowser resumeBrowsingWithErrorHandler:]
-[SDCompanionBrowser suspendBrowing]
-[SDCompanionBrowser receivedAdvertisement:]
-[SDCompanionBrowser updatedFoundDeviceList:]
-[SDCompanionBrowser foundDeviceWithDeviceIdentifier:]
-[SDCompanionBrowser lostDeviceWithDeviceIdentifier:]
-[SDCompanionBrowser handleIPAddress:]
-[SDCompanionBrowser activityConnection:didReceiveResults:]
-[SDCompanionBrowser activityConnectionDidInvalidate:]
-[SDCompanionBrowser identifier]
-[SDCompanionBrowser setIdentifier:]
-[SDCompanionBrowser serviceType]
-[SDCompanionBrowser setServiceType:]
-[SDCompanionBrowser activityConnections]
-[SDCompanionBrowser setActivityConnections:]
-[SDCompanionBrowser clientProxy]
-[SDCompanionBrowser setClientProxy:]
-[SDCompanionBrowser .cxx_destruct]
+[SDFileLogger sharedFileLogger]
___32+[SDFileLogger sharedFileLogger]_block_invoke
-[SDFileLogger init]
-[SDFileLogger dealloc]
-[SDFileLogger _onqeue_logFilePathWithIndex:]
-[SDFileLogger _onqueue_activePath]
-[SDFileLogger logString:]
___26-[SDFileLogger logString:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDFileLogger _onqueue_openFile]
___33-[SDFileLogger _onqueue_openFile]_block_invoke
___copy_helper_block_55
___destroy_helper_block_56
___33-[SDFileLogger _onqueue_openFile]_block_invoke58
-[SDFileLogger _onqueue_closeFile]
-[SDFileLogger _onqueue_checkFileSize]
-[SDFileLogger _onqueue_rollFiles]
-[SDFileLogger .cxx_destruct]
-[SDCompanionConnection initWithConnectionProxy:streamHandler:initiator:]
-[SDCompanionConnection start]
-[SDCompanionConnection stop]
-[SDCompanionConnection invalidate]
-[SDCompanionConnection setCompanionService:]
-[SDCompanionConnection sendMessage:]
___37-[SDCompanionConnection sendMessage:]_block_invoke
-[SDCompanionConnection sendDiscoverRequest]
-[SDCompanionConnection addValidationRecordToRequest:]
-[SDCompanionConnection sendDiscoverResponse]
-[SDCompanionConnection endpointForService:reply:]
-[SDCompanionConnection remoteInvalidateWithCompletionHandler:]
-[SDCompanionConnection listener:shouldAcceptNewConnection:]
___60-[SDCompanionConnection listener:shouldAcceptNewConnection:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___60-[SDCompanionConnection listener:shouldAcceptNewConnection:]_block_invoke96
___60-[SDCompanionConnection listener:shouldAcceptNewConnection:]_block_invoke_2
___copy_helper_block_99
___destroy_helper_block_100
___copy_helper_block_102
___destroy_helper_block_103
-[SDCompanionConnection handleNSXPCMessageData:]
___48-[SDCompanionConnection handleNSXPCMessageData:]_block_invoke
___copy_helper_block_119
___destroy_helper_block_120
-[SDCompanionConnection streamHandler:didReceiveMessage:]
-[SDCompanionConnection streamHandlerDidClose:]
-[SDCompanionConnection handleNSXPCConnectionData:]
-[SDCompanionConnection handleConnectResponse:]
-[SDCompanionConnection isInitiator]
-[SDCompanionConnection delegate]
-[SDCompanionConnection setDelegate:]
-[SDCompanionConnection companionService]
-[SDCompanionConnection clientProxy]
-[SDCompanionConnection justAccepted]
-[SDCompanionConnection setJustAccepted:]
-[SDCompanionConnection listener]
-[SDCompanionConnection setListener:]
-[SDCompanionConnection isInitiated]
-[SDCompanionConnection setInitiated:]
-[SDCompanionConnection xpcConnection]
-[SDCompanionConnection setXpcConnection:]
-[SDCompanionConnection streamHandler]
-[SDCompanionConnection setStreamHandler:]
-[SDCompanionConnection .cxx_destruct]
+[SDStreamManager sharedManager]
___32+[SDStreamManager sharedManager]_block_invoke
-[SDStreamManager initWithServiceType:]
-[SDStreamManager dealloc]
-[SDStreamManager addObservers]
-[SDStreamManager removeObservers]
-[SDStreamManager debugInfoRequested:]
-[SDStreamManager activityContinuationPayloadSent:]
___51-[SDStreamManager activityContinuationPayloadSent:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDStreamManager servicesContainIdentifier:]
-[SDStreamManager registerConnectedStreams]
-[SDStreamManager getContinuationStreamsForMessage:bundleID:usingID:completionHandler:]
___87-[SDStreamManager getContinuationStreamsForMessage:bundleID:usingID:completionHandler:]_block_invoke
___copy_helper_block_112
___destroy_helper_block_113
-[SDStreamManager unregisterConnectedStreams]
-[SDStreamManager restartPublishTimer]
-[SDStreamManager publishTimerFired:]
-[SDStreamManager publish]
-[SDStreamManager unpublish]
-[SDStreamManager addService:]
___30-[SDStreamManager addService:]_block_invoke
-[SDStreamManager removeService:]
-[SDStreamManager closeStreamsForIdentifier:]
-[SDStreamManager registerManager:]
-[SDStreamManager unregisterManager:]
-[SDStreamManager netServiceDidPublish:]
-[SDStreamManager netService:didNotPublish:]
___44-[SDStreamManager netService:didNotPublish:]_block_invoke
___copy_helper_block_243
___destroy_helper_block_244
-[SDStreamManager netServiceDidStop:]
-[SDStreamManager netService:didAcceptConnectionWithInputStream:outputStream:]
-[SDStreamManager continuationStream:connectedToService:withFileHandle:acceptHandler:]
___86-[SDStreamManager continuationStream:connectedToService:withFileHandle:acceptHandler:]_block_invoke
___copy_helper_block_262
___destroy_helper_block_263
-[SDStreamManager companionStreamClosedStreams:]
-[SDStreamManager serviceType]
-[SDStreamManager setServiceType:]
-[SDStreamManager service]
-[SDStreamManager setService:]
-[SDStreamManager managers]
-[SDStreamManager setManagers:]
-[SDStreamManager companionServices]
-[SDStreamManager setCompanionServices:]
-[SDStreamManager incomingStreams]
-[SDStreamManager setIncomingStreams:]
-[SDStreamManager continuationStreams]
-[SDStreamManager setContinuationStreams:]
-[SDStreamManager connectedStreams]
-[SDStreamManager setConnectedStreams:]
-[SDStreamManager publishTimer]
-[SDStreamManager setPublishTimer:]
-[SDStreamManager .cxx_destruct]
-[SDInformationConnection initWithInputStream:outputStream:]
-[SDInformationConnection start]
-[SDInformationConnection stop]
-[SDInformationConnection streamHandler:didReceiveMessage:]
-[SDInformationConnection streamHandlerDidClose:]
-[SDInformationConnection delegate]
-[SDInformationConnection setDelegate:]
-[SDInformationConnection streamHandler]
-[SDInformationConnection setStreamHandler:]
-[SDInformationConnection .cxx_destruct]
-[SDServiceManager initWithClientProxy:withIdentifier:]
-[SDServiceManager start]
-[SDServiceManager stop]
-[SDServiceManager streamHandlerForService:]
-[SDServiceManager enableService:]
-[SDServiceManager disableService:]
-[SDServiceManager manager:connectedToService:withFileHandle:acceptHandler:]
___76-[SDServiceManager manager:connectedToService:withFileHandle:acceptHandler:]_block_invoke
___76-[SDServiceManager manager:connectedToService:withFileHandle:acceptHandler:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_38
___destroy_helper_block_39
-[SDServiceManager companionStreamClosedStreams:]
-[SDServiceManager bundleID]
-[SDServiceManager setBundleID:]
-[SDServiceManager managerID]
-[SDServiceManager clientProxy]
-[SDServiceManager setClientProxy:]
-[SDServiceManager streamHandlers]
-[SDServiceManager setStreamHandlers:]
-[SDServiceManager enabledServices]
-[SDServiceManager setEnabledServices:]
-[SDServiceManager companionStreams]
-[SDServiceManager setCompanionStreams:]
-[SDServiceManager .cxx_destruct]
-[SDStreamHandler initWithInputStream:outputStream:isClient:]
-[SDStreamHandler dealloc]
-[SDStreamHandler start]
-[SDStreamHandler stop]
-[SDStreamHandler stopIfReady]
-[SDStreamHandler _stop]
-[SDStreamHandler shouldReadNetwork]
-[SDStreamHandler setShouldReadNetwork:]
-[SDStreamHandler logTransfer]
-[SDStreamHandler startOpenTimer]
-[SDStreamHandler openTimerFired:]
-[SDStreamHandler invalidateOpenTimer]
-[SDStreamHandler applySSLSettings:]
-[SDStreamHandler evaluateCert]
-[SDStreamHandler stream:handleEvent:]
-[SDStreamHandler setTCPProperties:]
-[SDStreamHandler handleOpenedStream:]
-[SDStreamHandler handleBytesAvailable]
-[SDStreamHandler handleSpaceAvailable]
-[SDStreamHandler writeToStreamWithData:]
-[SDStreamHandler handleBytesForStream]
-[SDStreamHandler handleSpaceForStream]
-[SDStreamHandler sendMessage:withErrorHandler:]
-[SDStreamHandler sendMessage:withCompletionHandler:]
-[SDStreamHandler messageWithData:]
-[SDStreamHandler headerWithLength:]
-[SDStreamHandler handleBytesForMessage]
-[SDStreamHandler handleHeaderRead]
-[SDStreamHandler handleMessageRead]
-[SDStreamHandler resetReadState]
-[SDStreamHandler handleSpaceForMessage]
-[SDStreamHandler handleMessageWritten:]
-[SDStreamHandler parseHeader:]
-[SDStreamHandler trimHeader:]
-[SDStreamHandler usingMessages]
-[SDStreamHandler setUsingMessages:]
-[SDStreamHandler bundleID]
-[SDStreamHandler setBundleID:]
-[SDStreamHandler delegate]
-[SDStreamHandler setDelegate:]
-[SDStreamHandler inputStream]
-[SDStreamHandler setInputStream:]
-[SDStreamHandler outputStream]
-[SDStreamHandler setOutputStream:]
-[SDStreamHandler checkedCert]
-[SDStreamHandler setCheckedCert:]
-[SDStreamHandler shouldStop]
-[SDStreamHandler setShouldStop:]
-[SDStreamHandler registeredStreams]
-[SDStreamHandler setRegisteredStreams:]
-[SDStreamHandler bufferSpaceAvailable]
-[SDStreamHandler setBufferSpaceAvailable:]
-[SDStreamHandler openTimer]
-[SDStreamHandler setOpenTimer:]
-[SDStreamHandler isClient]
-[SDStreamHandler setClient:]
-[SDStreamHandler streamError]
-[SDStreamHandler setStreamError:]
-[SDStreamHandler outputStreamData]
-[SDStreamHandler setOutputStreamData:]
-[SDStreamHandler byteIndex]
-[SDStreamHandler setByteIndex:]
-[SDStreamHandler outMessage]
-[SDStreamHandler setOutMessage:]
-[SDStreamHandler messageQueue]
-[SDStreamHandler setMessageQueue:]
-[SDStreamHandler handlers]
-[SDStreamHandler setHandlers:]
-[SDStreamHandler bytesRead]
-[SDStreamHandler setBytesRead:]
-[SDStreamHandler inMessageLength]
-[SDStreamHandler setInMessageLength:]
-[SDStreamHandler inMessage]
-[SDStreamHandler setInMessage:]
-[SDStreamHandler inData]
-[SDStreamHandler setInData:]
-[SDStreamHandler inputState]
-[SDStreamHandler setInputState:]
-[SDStreamHandler loggedTransfer]
-[SDStreamHandler setLoggedTransfer:]
-[SDStreamHandler wroteToNetwork]
-[SDStreamHandler setWroteToNetwork:]
-[SDStreamHandler readFromNetwork]
-[SDStreamHandler setReadFromNetwork:]
-[SDStreamHandler timeOpened]
-[SDStreamHandler setTimeOpened:]
-[SDStreamHandler timeToOpen]
-[SDStreamHandler setTimeToOpen:]
-[SDStreamHandler .cxx_destruct]
-[SDActivityController init]
-[SDActivityController start]
-[SDActivityController restart]
-[SDActivityController stop]
-[SDActivityController idsDeviceFromBTIdentifier:]
-[SDActivityController shouldStart]
-[SDActivityController allPeerBTIdentifiers]
-[SDActivityController service:devicesChanged:]
-[SDActivityController setShouldStart:]
-[SDActivityController setAllPeerBTIdentifiers:]
-[SDActivityController .cxx_destruct]
+[SDConnectionManager sharedManager]
___36+[SDConnectionManager sharedManager]_block_invoke
-[SDConnectionManager initWithXPCConnection:]
-[SDConnectionManager start]
___28-[SDConnectionManager start]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___28-[SDConnectionManager start]_block_invoke24
___28-[SDConnectionManager start]_block_invoke_2
___copy_helper_block_35
___destroy_helper_block_36
___copy_helper_block_38
___destroy_helper_block_39
-[SDConnectionManager cleanUpConnections]
___41-[SDConnectionManager cleanUpConnections]_block_invoke
___copy_helper_block_56
___destroy_helper_block_57
-[SDConnectionManager createCompanionBrowserWithIdentifier:serviceType:clientProxy:reply:]
-[SDConnectionManager createCompanionServiceManagerWithIdentifier:clientProxy:reply:]
-[SDConnectionManager createCompanionConnectionManagerForService:clientProxy:reply:]
-[SDConnectionManager createStreamsForMessage:reply:]
___53-[SDConnectionManager createStreamsForMessage:reply:]_block_invoke
___53-[SDConnectionManager createStreamsForMessage:reply:]_block_invoke_2
___copy_helper_block_152
___destroy_helper_block_153
___copy_helper_block_158
___destroy_helper_block_159
-[SDConnectionManager createActivityAdvertiserForClientProxy:reply:]
-[SDConnectionManager createContinuityScannerForClientProxy:reply:]
-[SDConnectionManager createUnlockManagerWithReply:]
-[SDConnectionManager createHotspotSessionForClientProxy:reply:]
-[SDConnectionManager companionConnectionDidInvalidate:]
-[SDConnectionManager companionStreamClosedStreams:]
-[SDConnectionManager unlockSessionDidFinish:]
-[SDConnectionManager delegate]
-[SDConnectionManager setDelegate:]
-[SDConnectionManager browser]
-[SDConnectionManager setBrowser:]
-[SDConnectionManager scanner]
-[SDConnectionManager setScanner:]
-[SDConnectionManager xpcConnection]
-[SDConnectionManager setXpcConnection:]
-[SDConnectionManager companionStreams]
-[SDConnectionManager setCompanionStreams:]
-[SDConnectionManager serviceManager]
-[SDConnectionManager setServiceManager:]
-[SDConnectionManager advertiser]
-[SDConnectionManager setAdvertiser:]
-[SDConnectionManager companionConnections]
-[SDConnectionManager setCompanionConnections:]
-[SDConnectionManager deviceStreamMap]
-[SDConnectionManager setDeviceStreamMap:]
-[SDConnectionManager unlockSessions]
-[SDConnectionManager setUnlockSessions:]
-[SDConnectionManager streamIdentifiers]
-[SDConnectionManager setStreamIdentifiers:]
-[SDConnectionManager hotspotBrowser]
-[SDConnectionManager setHotspotBrowser:]
-[SDConnectionManager .cxx_destruct]
+[SDXPCSession sharedSession]
___29+[SDXPCSession sharedSession]_block_invoke
-[SDXPCSession init]
-[SDXPCSession start]
-[SDXPCSession stop]
-[SDXPCSession listener:shouldAcceptNewConnection:]
-[SDXPCSession connectionManagerDidInvalidate:]
-[SDXPCSession xpcManagerListener]
-[SDXPCSession setXpcManagerListener:]
-[SDXPCSession connections]
-[SDXPCSession setConnections:]
-[SDXPCSession .cxx_destruct]
-[SDAirDropListener init]
-[SDAirDropListener networkOperation:event:withResults:]
-[SDAirDropListener start]
-[SDAirDropListener stop]
-[SDAirDropListener dealloc]
-[SDAirDropListener contactsOnly]
-[SDAirDropListener setContactsOnly:]
-[SDAirDropListener delegate]
-[SDAirDropListener setDelegate:]
-[SDAirDropListener .cxx_destruct]
+[SDAutoFSBrowser sharedBrowser]
___32+[SDAutoFSBrowser sharedBrowser]_block_invoke
-[SDAutoFSBrowser init]
-[SDAutoFSBrowser nodes]
-[SDAutoFSBrowser browseAfterDelay:]
-[SDAutoFSBrowser buildNodes]
-[SDAutoFSBrowser statusChanged:]
-[SDAutoFSBrowser start]
___24-[SDAutoFSBrowser start]_block_invoke
___24-[SDAutoFSBrowser start]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_59
___destroy_helper_block_60
-[SDAutoFSBrowser stop]
-[SDAutoFSBrowser .cxx_destruct]
-[SDBonjourBrowser initWithDomain:types:]
-[SDBonjourBrowser setMode:]
-[SDBonjourBrowser mode]
-[SDBonjourBrowser restartBrowser:]
-[SDBonjourBrowser dealloc]
-[SDBonjourBrowser clearCache]
-[SDBonjourBrowser addObservers]
-[SDBonjourBrowser removeObservers]
-[SDBonjourBrowser getInterface:]
-[SDBonjourBrowser thisIsTheFinder]
-[SDBonjourBrowser awdl:foundDevice:]
-[SDBonjourBrowser awdlDidUpdateState:]
-[SDBonjourBrowser awdl:failedToStartAdvertisingWithError:]
-[SDBonjourBrowser startConnectionlessAdvertisingWithData:]
-[SDBonjourBrowser stopConnectionlessAdvertising]
-[SDBonjourBrowser advertiseHashes]
-[SDBonjourBrowser shouldStart]
-[SDBonjourBrowser updateBrowserState]
_browseCallBack
-[SDBonjourBrowser start]
___25-[SDBonjourBrowser start]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___25-[SDBonjourBrowser start]_block_invoke144
___copy_helper_block_145
___destroy_helper_block_146
-[SDBonjourBrowser stop]
-[SDBonjourBrowser invalidate]
-[SDBonjourBrowser removeInvalidNodes:]
-[SDBonjourBrowser updateSecondaryNameForNodes:]
-[SDBonjourBrowser updateServerCacheIfNecessary]
-[SDBonjourBrowser nodes]
-[SDBonjourBrowser addService:type:domain:interface:]
-[SDBonjourBrowser queryKey:type:domain:recordType:]
-[SDBonjourBrowser addQueryToDictionary:name:type:domain:recordType:]
-[SDBonjourBrowser startRecordQuery:type:domain:recordType:interface:]
_queryRecordCallBack
-[SDBonjourBrowser cleanupRecordQueryForKey:]
-[SDBonjourBrowser cleanupRecordQuery:type:domain:recordType:]
-[SDBonjourBrowser removeService:type:domain:]
-[SDBonjourBrowser ejectDisksIfNecessary:diskNames:]
___52-[SDBonjourBrowser ejectDisksIfNecessary:diskNames:]_block_invoke
___copy_helper_block_251
___destroy_helper_block_252
-[SDBonjourBrowser copyNodeForName:]
-[SDBonjourBrowser copyNodeForService:]
-[SDBonjourBrowser systemInfoChanged:diskInfo:]
-[SDBonjourBrowser redGreenBlueFromEcolor:]
-[SDBonjourBrowser deviceInfoChanged:model:ecolor:osxvers:]
-[SDBonjourBrowser commentChanged:comment:]
-[SDBonjourBrowser startPictureQuery:]
-[SDBonjourBrowser iconCacherKey:pictureHash:]
-[SDBonjourBrowser iconCacher:didFetchDataWithError:]
-[SDBonjourBrowser iconCacher:didStoreDataWithError:]
-[SDBonjourBrowser cancelIdentityQuery:]
-[SDBonjourBrowser clearCacheAndNotify]
___39-[SDBonjourBrowser clearCacheAndNotify]_block_invoke
___copy_helper_block_290
___destroy_helper_block_291
-[SDBonjourBrowser updateIdentityWithQueryResults:]
-[SDBonjourBrowser handleIdentityCallback:event:error:]
-[SDBonjourBrowser cleanupWormholeRequest:]
-[SDBonjourBrowser wormholeClient:event:withResults:]
-[SDBonjourBrowser startWormholeRequestForNode:type:]
-[SDBonjourBrowser cancelWormholeRequests]
-[SDBonjourBrowser personInfoChanged:flags:cname:phash:ehash:nhash:]
-[SDBonjourBrowser startIdentityQueryForNode:]
_identityQueryEventCallback
-[SDBonjourBrowser cancelIdentityQueries]
-[SDBonjourBrowser addressBookChanged:]
-[SDBonjourBrowser airDropPublished:]
-[SDBonjourBrowser lockStatusChanged:]
-[SDBonjourBrowser consoleUserChanged:]
-[SDBonjourBrowser screenStatusChanged:]
-[SDBonjourBrowser somethingChanged:]
-[SDBonjourBrowser linkStateChanged:]
-[SDBonjourBrowser legacyModeChanged:]
___38-[SDBonjourBrowser legacyModeChanged:]_block_invoke
___copy_helper_block_349
___destroy_helper_block_350
-[SDBonjourBrowser setIconData:iconHash:forPerson:]
___51-[SDBonjourBrowser setIconData:iconHash:forPerson:]_block_invoke
___copy_helper_block_357
___destroy_helper_block_358
-[SDBonjourBrowser personIconChanged:iconData:]
-[SDBonjourBrowser domain]
-[SDBonjourBrowser virtualDomain]
-[SDBonjourBrowser notifyClient]
-[SDBonjourBrowser notifyClientIfDone:]
-[SDBonjourBrowser validAirDropInterface:]
-[SDBonjourBrowser handleBrowseCallBack:interface:error:name:type:domain:]
-[SDBonjourBrowser odiskMountPoints:]
-[SDBonjourBrowser serviceFromServiceName:]
-[SDBonjourBrowser valueForKey:inTXTRecord:withLength:]
-[SDBonjourBrowser processTXTRecordUpdate:rdlen:rdata:]
-[SDBonjourBrowser processNULLRecordUpdate:rdlen:rdata:]
-[SDBonjourBrowser handleQueryCallBack:error:fullname:rrtype:rdlen:rdata:]
-[SDBonjourBrowser queryRecordTimerCallBack:]
-[SDBonjourBrowser restartAfterDelay:]
-[SDBonjourBrowser bundleID]
-[SDBonjourBrowser setBundleID:]
-[SDBonjourBrowser types]
-[SDBonjourBrowser delegate]
-[SDBonjourBrowser setDelegate:]
-[SDBonjourBrowser .cxx_destruct]
-[SDBonjourPublisher initWithPort:]
___35-[SDBonjourPublisher initWithPort:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDBonjourPublisher dealloc]
-[SDBonjourPublisher setSecIdentity:]
-[SDBonjourPublisher publishCallBack:]
-[SDBonjourPublisher setMyPictureAndHash]
-[SDBonjourPublisher updateTXTRecordAndNotify]
___46-[SDBonjourPublisher updateTXTRecordAndNotify]_block_invoke
___copy_helper_block_69
___destroy_helper_block_70
-[SDBonjourPublisher somethingChanged:]
-[SDBonjourPublisher addObservers]
-[SDBonjourPublisher removeObservers]
-[SDBonjourPublisher publish]
_registrationCallBack
-[SDBonjourPublisher start]
___27-[SDBonjourPublisher start]_block_invoke
___27-[SDBonjourPublisher start]_block_invoke_2
___copy_helper_block_97
___destroy_helper_block_98
___copy_helper_block_100
___destroy_helper_block_101
-[SDBonjourPublisher stop]
-[SDBonjourPublisher invalidate]
-[SDBonjourPublisher delegate]
-[SDBonjourPublisher setDelegate:]
-[SDBonjourPublisher .cxx_destruct]
+[SDActivityAdvertiser sharedAdvertiser]
___40+[SDActivityAdvertiser sharedAdvertiser]_block_invoke
-[SDActivityAdvertiser init]
-[SDActivityAdvertiser dealloc]
-[SDActivityAdvertiser start]
-[SDActivityAdvertiser restart]
-[SDActivityAdvertiser stop]
-[SDActivityAdvertiser stopForReason:]
-[SDActivityAdvertiser resumeForReason:]
-[SDActivityAdvertiser activityPayloadForAdvertisementPayload:requestedByDeviceIdentifier:withCompletionHandler:]
-[SDActivityAdvertiser remoteConnection]
-[SDActivityAdvertiser setRemoteConnection:]
-[SDActivityAdvertiser addObservers]
-[SDActivityAdvertiser removeObservers]
-[SDActivityAdvertiser debugInfoRequested:]
-[SDActivityAdvertiser resetStateRequested:]
-[SDActivityAdvertiser backlightStateChanged:]
-[SDActivityAdvertiser screenStateOrHandoffVisibilityChanged:]
-[SDActivityAdvertiser controlCenterVisibilityChanged:]
-[SDActivityAdvertiser systemWillSleep:]
-[SDActivityAdvertiser consoleUserChanged:]
-[SDActivityAdvertiser preventIdleSleepAssertion]
-[SDActivityAdvertiser releaseIdleSleepAssertion]
-[SDActivityAdvertiser startGoodbyeTimer]
___41-[SDActivityAdvertiser startGoodbyeTimer]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDActivityAdvertiser invalidateGoodbyeTimer]
-[SDActivityAdvertiser goodbyeTimeoutFired:]
-[SDActivityAdvertiser updateAdvertiser]
-[SDActivityAdvertiser createAdvertisingInformation]
-[SDActivityAdvertiser encryptedAdvertisingInformation]
___55-[SDActivityAdvertiser encryptedAdvertisingInformation]_block_invoke
___copy_helper_block_190
___destroy_helper_block_191
-[SDActivityAdvertiser continuityDidUpdateState:]
-[SDActivityAdvertiser continuity:didStartAdvertisingOfType:]
-[SDActivityAdvertiser continuity:didStopAdvertisingOfType:]
-[SDActivityAdvertiser continuity:didFailToStartAdvertisingOfType:withError:]
-[SDActivityAdvertiser advertiseAdvertisementPayload:options:withErrorHandler:]
-[SDActivityAdvertiser .cxx_destruct]
-[SDBonjourResolver initWithName:type:domain:path:timeout:]
-[SDBonjourResolver dealloc]
-[SDBonjourResolver notifyClient:]
-[SDBonjourResolver handleHostNameCallBack:flags:interface:address:]
-[SDBonjourResolver queryHostName:overInterface:]
_queryHostNameCallBack
-[SDBonjourResolver parseResults:port:txtLen:txtRecord:interface:]
-[SDBonjourResolver resolve]
_resolveCallBack
___28-[SDBonjourResolver resolve]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDBonjourResolver cancel]
-[SDBonjourResolver url]
-[SDBonjourResolver onlyAWDL]
-[SDBonjourResolver setOnlyAWDL:]
-[SDBonjourResolver name]
-[SDBonjourResolver type]
-[SDBonjourResolver domain]
-[SDBonjourResolver path]
-[SDBonjourResolver setPath:]
-[SDBonjourResolver hostName]
-[SDBonjourResolver setHostName:]
-[SDBonjourResolver portNumber]
-[SDBonjourResolver setPortNumber:]
-[SDBonjourResolver service]
-[SDBonjourResolver error]
-[SDBonjourResolver delegate]
-[SDBonjourResolver setDelegate:]
-[SDBonjourResolver .cxx_destruct]
+[SDConnectedBrowser sharedBrowser]
___35+[SDConnectedBrowser sharedBrowser]_block_invoke
-[SDConnectedBrowser init]
-[SDConnectedBrowser setServers:]
-[SDConnectedBrowser setODiskServers:]
-[SDConnectedBrowser nodes]
-[SDConnectedBrowser odiskNodes]
-[SDConnectedBrowser postNotification]
-[SDConnectedBrowser getDispatchQueue]
___38-[SDConnectedBrowser getDispatchQueue]_block_invoke
-[SDConnectedBrowser browseAfterDelay:]
-[SDConnectedBrowser addToRecents:]
-[SDConnectedBrowser recentNodes]
-[SDConnectedBrowser addNode:]
-[SDConnectedBrowser removeNode:]
-[SDConnectedBrowser setNodeModel:protocol:url:]
-[SDConnectedBrowser opticalDisk:]
-[SDConnectedBrowser URLForRemounting:]
-[SDConnectedBrowser connectedNodes]
-[SDConnectedBrowser combineNodes:recentNodes:updateRecents:]
-[SDConnectedBrowser buildNodesAndNotify:]
___42-[SDConnectedBrowser buildNodesAndNotify:]_block_invoke
___42-[SDConnectedBrowser buildNodesAndNotify:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_108
___destroy_helper_block_109
-[SDConnectedBrowser addAirDropPerson:]
___39-[SDConnectedBrowser addAirDropPerson:]_block_invoke
___copy_helper_block_111
___destroy_helper_block_112
-[SDConnectedBrowser airDropNodes]
-[SDConnectedBrowser removeAirDropPersonInternal:]
___50-[SDConnectedBrowser removeAirDropPersonInternal:]_block_invoke
-[SDConnectedBrowser removeAirDropPerson:]
___42-[SDConnectedBrowser removeAirDropPerson:]_block_invoke
___copy_helper_block_122
___destroy_helper_block_123
-[SDConnectedBrowser volumesChanged:]
-[SDConnectedBrowser legacyModeChanged:]
-[SDConnectedBrowser start]
___27-[SDConnectedBrowser start]_block_invoke
___copy_helper_block_129
___destroy_helper_block_130
_recentsCallBack
-[SDConnectedBrowser stop]
-[SDConnectedBrowser .cxx_destruct]
+[SDDomainBrowser sharedBrowser]
___32+[SDDomainBrowser sharedBrowser]_block_invoke
-[SDDomainBrowser init]
-[SDDomainBrowser browseAfterDelay:]
-[SDDomainBrowser statusChanged:]
-[SDDomainBrowser scheduleBrowser]
-[SDDomainBrowser restart]
-[SDDomainBrowser childrenForNode:]
-[SDDomainBrowser displayNameForDomain:]
_GetNextLabel
-[SDDomainBrowser parseDomain:]
-[SDDomainBrowser buildNodes]
_DomainComparatorFunction
-[SDDomainBrowser postNotification]
-[SDDomainBrowser netServiceBrowser:didFindDomain:moreComing:]
-[SDDomainBrowser netServiceBrowser:didRemoveDomain:moreComing:]
-[SDDomainBrowser netServiceBrowser:didNotSearch:]
-[SDDomainBrowser start]
___24-[SDDomainBrowser start]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDDomainBrowser stop]
-[SDDomainBrowser .cxx_destruct]
_CountLabels
-[SDFileZipper init]
-[SDFileZipper dealloc]
-[SDFileZipper notifyClientForEvent:withProperty:]
___50-[SDFileZipper notifyClientForEvent:withProperty:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDFileZipper isCompressor]
-[SDFileZipper isDecompressor]
-[SDFileZipper setTotalBytes:]
-[SDFileZipper setPlaceholderFiles:]
-[SDFileZipper setDestination:]
-[SDFileZipper destination]
-[SDFileZipper setReadStream:]
-[SDFileZipper copyReadStream]
-[SDFileZipper timeRemaining:timeNow:]
-[SDFileZipper notifyProgress:force:]
-[SDFileZipper absoluteURLIfTopLevelFile:isDirectory:base:]
-[SDFileZipper validFileName:]
-[SDFileZipper removeFileFromPlaceholderList:]
-[SDFileZipper fixedRelativePath:]
-[SDFileZipper pathExistsInPlaceholderInfo:]
-[SDFileZipper quarantineFile:]
-[SDFileZipper bomCopierCopyFileFinished:type:size:operation:]
-[SDFileZipper bomCopierFatalFileError:]
-[SDFileZipper bomCopierFatalError:]
-[SDFileZipper totalFileSize:]
-[SDFileZipper copyReverseParentChain:base:]
-[SDFileZipper addFile:withBase:toBom:]
-[SDFileZipper addParentChain:file:base:]
-[SDFileZipper addFileURLToBom:file:base:propertyKeys:topLevel:]
-[SDFileZipper URLFromFileInfo:]
-[SDFileZipper generateUniqueFileName:]
-[SDFileZipper createPlaceholderFiles]
-[SDFileZipper removeUnusedPlaceholderFiles]
-[SDFileZipper conflictResolvedURL:]
-[SDFileZipper moveFile:toDestination:]
-[SDFileZipper moveFilesToDestination]
-[SDFileZipper bomCopierCopy:destination:options:]
_bomCopierFileErrorPtr
_bomCopierFatalErrorPtr
_bomCopierCopyFileUpdatePtr
_bomCopierFatalFileErrorPtr
_bomCopierCopyFileFinishedPtr
_bomCopierFileConflictErrorPtr
___50-[SDFileZipper bomCopierCopy:destination:options:]_block_invoke
___copy_helper_block_186
___destroy_helper_block_187
-[SDFileZipper allowProgressCircleToComplete]
-[SDFileZipper startBomCopy:destination:options:]
___49-[SDFileZipper startBomCopy:destination:options:]_block_invoke
___copy_helper_block_195
___destroy_helper_block_196
-[SDFileZipper initBomWithFiles]
-[SDFileZipper startZipping]
-[SDFileZipper startUnzipping]
-[SDFileZipper temporaryBomPath]
-[SDFileZipper zip]
___19-[SDFileZipper zip]_block_invoke
___copy_helper_block_290
___destroy_helper_block_291
-[SDFileZipper unzip]
___21-[SDFileZipper unzip]_block_invoke
___copy_helper_block_295
___destroy_helper_block_296
-[SDFileZipper stop]
-[SDFileZipper clientPid]
-[SDFileZipper setClientPid:]
-[SDFileZipper sourceFiles]
-[SDFileZipper setSourceFiles:]
-[SDFileZipper senderName]
-[SDFileZipper setSenderName:]
-[SDFileZipper compressionType]
-[SDFileZipper setCompressionType:]
-[SDFileZipper delegate]
-[SDFileZipper setDelegate:]
-[SDFileZipper .cxx_destruct]
-[SDIconCacher init]
-[SDIconCacher dealloc]
-[SDIconCacher handleReadStreamEvent:type:]
-[SDIconCacher handleWriteStreamEvent:type:]
-[SDIconCacher airDropCacheFileURL]
-[SDIconCacher notifyStoreWithError:]
___37-[SDIconCacher notifyStoreWithError:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDIconCacher notifyFetchWithError:]
___37-[SDIconCacher notifyFetchWithError:]_block_invoke
___copy_helper_block_37
___destroy_helper_block_38
-[SDIconCacher fetch]
_readStreamCallBack
-[SDIconCacher store]
_writeStreamCallBack
-[SDIconCacher cancelReadStream]
-[SDIconCacher cancelWriteStream]
-[SDIconCacher cancel]
-[SDIconCacher iconData]
-[SDIconCacher setIconData:]
-[SDIconCacher iconHash]
-[SDIconCacher setIconHash:]
-[SDIconCacher netService]
-[SDIconCacher setNetService:]
-[SDIconCacher delegate]
-[SDIconCacher setDelegate:]
-[SDIconCacher .cxx_destruct]
+[SDActivityPayloadManager sharedPayloadManager]
___48+[SDActivityPayloadManager sharedPayloadManager]_block_invoke
-[SDActivityPayloadManager init]
-[SDActivityPayloadManager dealloc]
-[SDActivityPayloadManager defaultPairedDevice]
-[SDActivityPayloadManager requestTimedOut:]
___44-[SDActivityPayloadManager requestTimedOut:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___44-[SDActivityPayloadManager requestTimedOut:]_block_invoke109
___copy_helper_block_112
___destroy_helper_block_113
-[SDActivityPayloadManager addObservers]
-[SDActivityPayloadManager removeObservers]
-[SDActivityPayloadManager debugInfoRequested:]
-[SDActivityPayloadManager resetStateTwoRequested:]
-[SDActivityPayloadManager confirmFunctioningEncryptionKeyFromDeviceIdentifier:]
-[SDActivityPayloadManager loadPersistedKeyRequests]
___52-[SDActivityPayloadManager loadPersistedKeyRequests]_block_invoke
___52-[SDActivityPayloadManager loadPersistedKeyRequests]_block_invoke_2
___copy_helper_block_184
___destroy_helper_block_185
___copy_helper_block_190
___destroy_helper_block_191
-[SDActivityPayloadManager savePersistedKeyRequests]
-[SDActivityPayloadManager sendEncryptionKeyRequestToDeviceIdentifier:previousKeyIdentifier:completionHandler:]
-[SDActivityPayloadManager sendEncryptionKeyRequestRecord:]
___59-[SDActivityPayloadManager sendEncryptionKeyRequestRecord:]_block_invoke
___copy_helper_block_323
___destroy_helper_block_324
-[SDActivityPayloadManager sendEncryptionKeyReplyRequestToDevice:canDoCloudReply:encryptionKey:requestIdentifier:]
-[SDActivityPayloadManager sendActivityPayloadRequestToDeviceIdentifier:withAdvertisementPayload:completionHandler:]
___116-[SDActivityPayloadManager sendActivityPayloadRequestToDeviceIdentifier:withAdvertisementPayload:completionHandler:]_block_invoke
___copy_helper_block_369
___destroy_helper_block_370
-[SDActivityPayloadManager sendActivityPayloadReplyRequestToDevice:withActivityIdentifier:advertisementPayload:activityPayload:requestIdentifier:error:]
-[SDActivityPayloadManager sendActivityPayloadWithAdvertisementData:forAdvertisementPayload:isFinalPayload:]
___108-[SDActivityPayloadManager sendActivityPayloadWithAdvertisementData:forAdvertisementPayload:isFinalPayload:]_block_invoke
___copy_helper_block_455
___destroy_helper_block_456
-[SDActivityPayloadManager encryptionKeyRequest:service:account:fromID:context:]
-[SDActivityPayloadManager encryptionKeyReplyRequest:service:account:fromID:context:]
-[SDActivityPayloadManager payloadRequest:service:account:fromID:context:]
___74-[SDActivityPayloadManager payloadRequest:service:account:fromID:context:]_block_invoke
___copy_helper_block_511
___destroy_helper_block_512
-[SDActivityPayloadManager payloadReplyRequest:service:account:fromID:context:]
-[SDActivityPayloadManager newAdvertisementWithPayloadRequest:]
-[SDActivityPayloadManager service:account:incomingUnhandledProtobuf:fromID:context:]
-[SDActivityPayloadManager service:account:incomingData:fromID:context:]
-[SDActivityPayloadManager service:account:incomingMessage:fromID:]
-[SDActivityPayloadManager service:account:identifier:didSendWithSuccess:error:]
-[SDActivityPayloadManager dataFromUUID:]
-[SDActivityPayloadManager requestFromProtobufData:]
-[SDActivityPayloadManager protobufDataFromRequest:]
-[SDActivityPayloadManager setDecryptionKeyDataRepresentation:forDeviceIdentifier:]
-[SDActivityPayloadManager .cxx_destruct]
+[SDManagedBrowser sharedBrowser]
___33+[SDManagedBrowser sharedBrowser]_block_invoke
-[SDManagedBrowser init]
-[SDManagedBrowser setServers:]
-[SDManagedBrowser nodes]
-[SDManagedBrowser buildNodesAndNotify]
-[SDManagedBrowser start]
_managedCallBack
___25-[SDManagedBrowser start]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDManagedBrowser stop]
-[SDManagedBrowser .cxx_destruct]
_logFileTransferSucceeded
_logFileTransferFailed
_logTimeSpentInAirDrop
_logFilesTransferredCount
_logDiscoveryStatistics
_logFileTransferUTIs
_logAirDropPowerEvent
_logAirDropInterfaceFailure
_logDebugClassInfo
_logTethering
_logConnectBackStreams
_logProxySessionPowerEvent
-[SDAirDropNCManager init]
-[SDAirDropNCManager askEventForRecordID:withResults:]
-[SDAirDropNCManager progressEventForRecordID:withResults:]
-[SDAirDropNCManager cancelEventForRecordID:withResults:]
-[SDAirDropNCManager errorEventForRecordID:withResults:]
-[SDAirDropNCManager finishedEventForRecordID:withResults:]
___59-[SDAirDropNCManager finishedEventForRecordID:withResults:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDAirDropNCManager userNotificationCenter:didDismissAlert:]
-[SDAirDropNCManager userNotificationCenter:didActivateNotification:]
-[SDAirDropNCManager userNotificationCenter:shouldPresentNotification:]
-[SDAirDropNCManager notificationForRecordID:]
-[SDAirDropNCManager cleanupRecordID:]
-[SDAirDropNCManager performActionsForTransferData:includeFiles:]
-[SDAirDropNCManager delegate]
-[SDAirDropNCManager setDelegate:]
-[SDAirDropNCManager .cxx_destruct]
+[SDActivityScanner sharedScanner]
___34+[SDActivityScanner sharedScanner]_block_invoke
-[SDActivityScanner init]
-[SDActivityScanner dealloc]
-[SDActivityScanner start]
-[SDActivityScanner restart]
___28-[SDActivityScanner restart]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDActivityScanner stop]
-[SDActivityScanner handleNewAdvertisement:]
-[SDActivityScanner remoteConnection]
-[SDActivityScanner setRemoteConnection:]
-[SDActivityScanner addObservers]
-[SDActivityScanner removeObservers]
-[SDActivityScanner debugInfoRequested:]
-[SDActivityScanner resetStateRequested:]
-[SDActivityScanner handoffVisibilityChanged:]
-[SDActivityScanner systemWillSleep:]
-[SDActivityScanner systemHasPoweredOn:]
-[SDActivityScanner consoleUserChanged:]
-[SDActivityScanner continuityDidUpdateState:]
-[SDActivityScanner continuity:didStartScanningForType:]
-[SDActivityScanner continuity:didStopScanningForType:]
-[SDActivityScanner continuity:didFailToStartScanningForType:withError:]
-[SDActivityScanner continuity:didDiscoverType:withData:fromPeer:]
___66-[SDActivityScanner continuity:didDiscoverType:withData:fromPeer:]_block_invoke
___copy_helper_block_208
___destroy_helper_block_209
-[SDActivityScanner didLosePeer:]
-[SDActivityScanner lostAllDevices]
-[SDActivityScanner continuity:didLosePeer:type:]
-[SDActivityScanner continuity:didStartTrackingPeer:type:error:]
-[SDActivityScanner continuity:didStopTrackingPeer:type:]
-[SDActivityScanner activityPayloadFromDeviceIdentifier:forAdvertisementPayload:withCompletionHandler:]
-[SDActivityScanner .cxx_destruct]
-[SDNetworkBrowser initWithKind:rootNode:]
-[SDNetworkBrowser dealloc]
-[SDNetworkBrowser nodeBrowser:nodesChangedForParent:protocol:error:]
-[SDNetworkBrowser openNode:forProtocol:flags:]
-[SDNetworkBrowser copyRootNode]
-[SDNetworkBrowser childrenForNode:]
-[SDNetworkBrowser sidebarChildren]
-[SDNetworkBrowser setMode:]
-[SDNetworkBrowser mode]
-[SDNetworkBrowser nodeIdentityIsMe:]
-[SDNetworkBrowser addNode:]
-[SDNetworkBrowser removeNode:]
-[SDNetworkBrowser closeNode:]
-[SDNetworkBrowser invalidate]
-[SDNetworkBrowser kind]
-[SDNetworkBrowser bundleID]
-[SDNetworkBrowser setBundleID:]
-[SDNetworkBrowser objectKey]
-[SDNetworkBrowser setObjectKey:]
-[SDNetworkBrowser boostMessage]
-[SDNetworkBrowser setBoostMessage:]
-[SDNetworkBrowser connection]
-[SDNetworkBrowser setConnection:]
-[SDNetworkBrowser delegate]
-[SDNetworkBrowser setDelegate:]
-[SDNetworkBrowser .cxx_destruct]
-[SDActivityDeviceRecord initWithDevice:]
-[SDActivityDeviceRecord description]
-[SDActivityDeviceRecord updateWithRawAdvertisementData:newAdvertisementHandler:]
-[SDActivityDeviceRecord updateWithRawAdvertisementData:isReplay:newAdvertisementHandler:]
___90-[SDActivityDeviceRecord updateWithRawAdvertisementData:isReplay:newAdvertisementHandler:]_block_invoke
___90-[SDActivityDeviceRecord updateWithRawAdvertisementData:isReplay:newAdvertisementHandler:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_90
___destroy_helper_block_91
-[SDActivityDeviceRecord decryptionKey]
-[SDActivityDeviceRecord lastActivityAdvertisement]
-[SDActivityDeviceRecord lastCounter]
-[SDActivityDeviceRecord lastAdvertisementPayload]
-[SDActivityDeviceRecord lastAdvertisementOptions]
-[SDActivityDeviceRecord clientAdvertisement]
-[SDActivityDeviceRecord deviceTracked]
-[SDActivityDeviceRecord setDeviceTracked:]
-[SDActivityDeviceRecord disableDuplicateFilterOnce]
-[SDActivityDeviceRecord setDisableDuplicateFilterOnce:]
-[SDActivityDeviceRecord lastRawAdvertisementData]
-[SDActivityDeviceRecord lastAdvertisementData]
-[SDActivityDeviceRecord .cxx_destruct]
-[SDWormholeController init]
-[SDWormholeController dealloc]
-[SDWormholeController configureSettingsForAirDrop]
-[SDWormholeController setProperty:forKey:]
-[SDWormholeController setStatusAndNotify]
___42-[SDWormholeController setStatusAndNotify]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDWormholeController somethingChanged:]
-[SDWormholeController addObservers]
-[SDWormholeController removeObservers]
-[SDWormholeController start]
-[SDWormholeController stop]
-[SDWormholeController delegate]
-[SDWormholeController setDelegate:]
-[SDWormholeController .cxx_destruct]
+[SharingDaemon sharedDaemon]
___29+[SharingDaemon sharedDaemon]_block_invoke
-[SharingDaemon init]
-[SharingDaemon dealloc]
-[SharingDaemon xpcObjectForSFOperationResults:]
-[SharingDaemon stringFromXPCObject:]
-[SharingDaemon arrayFromXPCObject:]
-[SharingDaemon numberFromXPCObject:]
-[SharingDaemon xpcArrayForSFNodeArray:]
-[SharingDaemon networkBrowser:nodesChangedForParent:protocol:error:]
-[SharingDaemon networkOperation:event:withResults:]
-[SharingDaemon handleBrowserMessage:forConnection:]
-[SharingDaemon handleOperationMessage:forConnection:]
-[SharingDaemon handleNewConnection:]
___37-[SharingDaemon handleNewConnection:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SharingDaemon start]
___22-[SharingDaemon start]_block_invoke
___copy_helper_block_172
___destroy_helper_block_173
-[SharingDaemon stop]
-[SharingDaemon .cxx_destruct]
-[SDNetworkEjecter initWithNode:]
-[SDNetworkEjecter dealloc]
-[SDNetworkEjecter notifyClientAboutEject:]
-[SDNetworkEjecter ejectMountPoints:useAssistant:]
___50-[SDNetworkEjecter ejectMountPoints:useAssistant:]_block_invoke
___50-[SDNetworkEjecter ejectMountPoints:useAssistant:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_28
___destroy_helper_block_29
-[SDNetworkEjecter eject]
-[SDNetworkEjecter start]
___25-[SDNetworkEjecter start]_block_invoke
___copy_helper_block_49
___destroy_helper_block_50
-[SDNetworkEjecter stop]
-[SDNetworkEjecter flags]
-[SDNetworkEjecter setFlags:]
-[SDNetworkEjecter protocol]
-[SDNetworkEjecter setProtocol:]
-[SDNetworkEjecter delegate]
-[SDNetworkEjecter setDelegate:]
-[SDNetworkEjecter .cxx_destruct]
-[SDNetworkOperation initWithKind:]
-[SDNetworkOperation dealloc]
-[SDNetworkOperation setProperty:forKey:]
-[SDNetworkOperation copyPropertyForKey:]
-[SDNetworkOperation wormholeStatus:didChange:]
-[SDNetworkOperation wormholeInformation:didChange:]
-[SDNetworkOperation wormholeController:didChange:]
-[SDNetworkOperation wormholeClient:event:withResults:]
-[SDNetworkOperation wormholeServer:event:withResults:]
-[SDNetworkOperation networkEjecter:event:withResults:]
-[SDNetworkOperation networkResolver:event:withResults:]
-[SDNetworkOperation wormholeConnection:event:withResults:]
-[SDNetworkOperation notifyClientWithPosixError:]
___49-[SDNetworkOperation notifyClientWithPosixError:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDNetworkOperation resume]
-[SDNetworkOperation cancel]
-[SDNetworkOperation kind]
-[SDNetworkOperation objectKey]
-[SDNetworkOperation setObjectKey:]
-[SDNetworkOperation boostMessage]
-[SDNetworkOperation setBoostMessage:]
-[SDNetworkOperation activities]
-[SDNetworkOperation setActivities:]
-[SDNetworkOperation connection]
-[SDNetworkOperation setConnection:]
-[SDNetworkOperation delegate]
-[SDNetworkOperation setDelegate:]
-[SDNetworkOperation .cxx_destruct]
+[SDHotspotBrowser sharedBrowser]
___33+[SDHotspotBrowser sharedBrowser]_block_invoke
-[SDHotspotBrowser init]
-[SDHotspotBrowser networkTypeString:]
-[SDHotspotBrowser updateIDHashAndRestart]
-[SDHotspotBrowser updateIDHash]
-[SDHotspotBrowser updateTimeString]
-[SDHotspotBrowser HMACWithDSID:timeString:]
-[SDHotspotBrowser appendHashToData:withType:]
-[SDHotspotBrowser deviceModel]
-[SDHotspotBrowser modelCodeForIdentifier:]
-[SDHotspotBrowser deviceForIdentifier:]
-[SDHotspotBrowser pairedPeers]
-[SDHotspotBrowser accountHasPairedPeers]
-[SDHotspotBrowser accountHasTetheringSources]
-[SDHotspotBrowser tetheringPeers]
-[SDHotspotBrowser addObservers]
-[SDHotspotBrowser removeObservers]
-[SDHotspotBrowser altDSIDUpdated:]
___35-[SDHotspotBrowser altDSIDUpdated:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDHotspotBrowser controlCenterVisibilityChanged:]
-[SDHotspotBrowser debugInfoRequested:]
-[SDHotspotBrowser screenStateChanged:]
___39-[SDHotspotBrowser screenStateChanged:]_block_invoke
___copy_helper_block_224
___destroy_helper_block_225
-[SDHotspotBrowser appleIDChanged:]
___35-[SDHotspotBrowser appleIDChanged:]_block_invoke
___copy_helper_block_227
___destroy_helper_block_228
-[SDHotspotBrowser generateNextDayTimeOffset]
-[SDHotspotBrowser updateCrossoverTimer]
-[SDHotspotBrowser clearNextDayTimer]
-[SDHotspotBrowser nextDayTimerFired:]
-[SDHotspotBrowser nextDateForDayInterval:]
-[SDHotspotBrowser formattedDate:]
-[SDHotspotBrowser sendMessage:toPeer:isRequest:messageID:error:]
-[SDHotspotBrowser sendMessage:toDeviceWithID:isRequest:messageID:error:]
-[SDHotspotBrowser startBrowsing]
___33-[SDHotspotBrowser startBrowsing]_block_invoke
___copy_helper_block_341
___destroy_helper_block_342
-[SDHotspotBrowser stopBrowsing]
___32-[SDHotspotBrowser stopBrowsing]_block_invoke
___copy_helper_block_348
___destroy_helper_block_349
-[SDHotspotBrowser enableHotspotForDevice:withCompletionHandler:]
___65-[SDHotspotBrowser enableHotspotForDevice:withCompletionHandler:]_block_invoke
___copy_helper_block_394
___destroy_helper_block_395
-[SDHotspotBrowser addRetrieveTimer:]
___37-[SDHotspotBrowser addRetrieveTimer:]_block_invoke
___copy_helper_block_402
___destroy_helper_block_403
-[SDHotspotBrowser retrieveTimerFired:]
___39-[SDHotspotBrowser retrieveTimerFired:]_block_invoke
___copy_helper_block_425
___destroy_helper_block_426
-[SDHotspotBrowser invalidateTimerWithIdentifier:]
-[SDHotspotBrowser restartAdvertisingTetheringRequest]
-[SDHotspotBrowser stopAdvertisingTetheringRequest]
-[SDHotspotBrowser restartAdvertisingTetheringResponse]
-[SDHotspotBrowser stopAdvertisingResponse]
-[SDHotspotBrowser restartAdvertiseResponseTimer]
___49-[SDHotspotBrowser restartAdvertiseResponseTimer]_block_invoke
___copy_helper_block_454
___destroy_helper_block_455
-[SDHotspotBrowser advertiseResponseTimerFired:]
___48-[SDHotspotBrowser advertiseResponseTimerFired:]_block_invoke
___copy_helper_block_459
___destroy_helper_block_460
-[SDHotspotBrowser invalidateResponseTimer]
-[SDHotspotBrowser restartProducerScanning]
-[SDHotspotBrowser stopProducerScanning]
-[SDHotspotBrowser restartConsumerScanning]
-[SDHotspotBrowser stopConsumerScanning]
-[SDHotspotBrowser handleIncomingResponse:identifier:]
-[SDHotspotBrowser service:account:incomingMessage:fromID:context:]
___67-[SDHotspotBrowser service:account:incomingMessage:fromID:context:]_block_invoke
___copy_helper_block_531
___destroy_helper_block_532
-[SDHotspotBrowser service:account:identifier:didSendWithSuccess:error:]
-[SDHotspotBrowser service:devicesChanged:]
-[SDHotspotBrowser preventIdleSleepAssertion]
-[SDHotspotBrowser releaseIdleSleepAssertion]
-[SDHotspotBrowser continuity:didDiscoverType:withData:fromPeer:]
-[SDHotspotBrowser credentialsWithCompletionHandler:]
-[SDHotspotBrowser tetheringDidRetrieveCredentials:credentials:error:]
-[SDHotspotBrowser continuityDidUpdateState:]
-[SDHotspotBrowser continuity:didStartAdvertisingOfType:]
-[SDHotspotBrowser continuity:didStopAdvertisingOfType:]
-[SDHotspotBrowser continuity:didFailToStartAdvertisingOfType:withError:]
-[SDHotspotBrowser continuity:didStartScanningForType:]
-[SDHotspotBrowser continuity:didStopScanningForType:]
-[SDHotspotBrowser continuity:didFailToStartScanningForType:withError:]
-[SDHotspotBrowser clientProxy]
-[SDHotspotBrowser setClientProxy:]
-[SDHotspotBrowser workQueue]
-[SDHotspotBrowser setWorkQueue:]
-[SDHotspotBrowser monitor]
-[SDHotspotBrowser setMonitor:]
-[SDHotspotBrowser tetheringManager]
-[SDHotspotBrowser setTetheringManager:]
-[SDHotspotBrowser IDHash]
-[SDHotspotBrowser setIDHash:]
-[SDHotspotBrowser hasAppleID]
-[SDHotspotBrowser setHasAppleID:]
-[SDHotspotBrowser tetheringService]
-[SDHotspotBrowser setTetheringService:]
-[SDHotspotBrowser altDSID]
-[SDHotspotBrowser setAltDSID:]
-[SDHotspotBrowser timeString]
-[SDHotspotBrowser setTimeString:]
-[SDHotspotBrowser nextCrossoverPersistentTimer]
-[SDHotspotBrowser setNextCrossoverPersistentTimer:]
-[SDHotspotBrowser nextDayTimeOffset]
-[SDHotspotBrowser setNextDayTimeOffset:]
-[SDHotspotBrowser shouldBeConsumerScanning]
-[SDHotspotBrowser setShouldBeConsumerScanning:]
-[SDHotspotBrowser shouldBeAdvertisingRequest]
-[SDHotspotBrowser setShouldBeAdvertisingRequest:]
-[SDHotspotBrowser handlers]
-[SDHotspotBrowser setHandlers:]
-[SDHotspotBrowser retrieveTimers]
-[SDHotspotBrowser setRetrieveTimers:]
-[SDHotspotBrowser powerAssertionID]
-[SDHotspotBrowser setPowerAssertionID:]
-[SDHotspotBrowser shouldBeAdvertisingResponse]
-[SDHotspotBrowser setShouldBeAdvertisingResponse:]
-[SDHotspotBrowser advertiseResponseTimer]
-[SDHotspotBrowser setAdvertiseResponseTimer:]
-[SDHotspotBrowser discoveredDevices]
-[SDHotspotBrowser setDiscoveredDevices:]
-[SDHotspotBrowser targetAdvertising]
-[SDHotspotBrowser setTargetAdvertising:]
-[SDHotspotBrowser targetScanning]
-[SDHotspotBrowser setTargetScanning:]
-[SDHotspotBrowser sourceAdvertising]
-[SDHotspotBrowser setSourceAdvertising:]
-[SDHotspotBrowser sourceScanning]
-[SDHotspotBrowser setSourceScanning:]
-[SDHotspotBrowser deviceData]
-[SDHotspotBrowser setDeviceData:]
-[SDHotspotBrowser .cxx_destruct]
-[SDNetworkResolver initWithNode:]
-[SDNetworkResolver dealloc]
-[SDNetworkResolver notifyClientAboutResolve:]
-[SDNetworkResolver mountDiskImageAsync]
___40-[SDNetworkResolver mountDiskImageAsync]_block_invoke
___40-[SDNetworkResolver mountDiskImageAsync]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_21
___destroy_helper_block_22
-[SDNetworkResolver diskImageURL]
-[SDNetworkResolver diskImageOptions]
-[SDNetworkResolver handleDiskImageResults:]
-[SDNetworkResolver mountDiskImage]
-[SDNetworkResolver isAirPortDisk]
-[SDNetworkResolver handleConnectToServerCallBack:withError:]
-[SDNetworkResolver handleMountCallBack:mountInfo:error:]
-[SDNetworkResolver bonjourResolverDidChange:]
-[SDNetworkResolver mount]
_netAuthMountCallBack
_connectToServerCallBack
-[SDNetworkResolver start]
___26-[SDNetworkResolver start]_block_invoke
___copy_helper_block_134
___destroy_helper_block_135
-[SDNetworkResolver stop]
-[SDNetworkResolver flags]
-[SDNetworkResolver setFlags:]
-[SDNetworkResolver protocol]
-[SDNetworkResolver setProtocol:]
-[SDNetworkResolver delegate]
-[SDNetworkResolver setDelegate:]
-[SDNetworkResolver .cxx_destruct]
_setFileIncomplete
_isDirectory
_SDLog
__SDInterfaceNameForIndex
__SDCurrentTime
_time_now_plus
_push_timer_create
_push_timer_set_fire_time
_default_global_queue
_releaseP2PJustInCase
_sendP2PNotification
_terminateP2PJustInCase
_retainPeerToPeerWiFi
_releasePeerToPeerWiFi
_setValueAndRelease
_createNumberFromString
_setHeaderValueAndRelease
_createURLComponentArray
_copyCommonParent
_createRelativePath
_copyLastPathComponent
_createCopyDeletingLastPath
_createCStringFromCFString
__SDPrimaryAppleAccount
__SDHashFromData
__SDHashFromString
__SDHashStringFromData
_createHashFromString
_createPosixPathFromURL
_isReadable
_isWritable
_copyLocalizedFileName
__SDDefaultProtocolForNode
__SDCertificateChainForIdentity
__SDTrustChainForIdentity
__SDUniqueTemporaryFolder
_copyUserFolder
_copyDownloadsURL
_copyCachedDataURL
_copyAirDropCacheFolder
_createPlaceholder
_renameURL
_removeObjectAtURL
_moveObjectAtURL
__SDServerNameForAFPMountPoint
__SDVolumeNameForMountPoint
__SDRemoteDiscServerName
_disableAWDL
__SDNormalizeEmailToHash
__SDCanonicalizePhoneNumber
_intValueForPreference
_netAuthSessionRetainCount
_netAuthSessionRetain
_netAuthSessionRelease
___netAuthSessionRelease_block_invoke
__SDBundleIdentifierForConnection
_copyWormholeID
_clearWormholeID
_copyStreamID
_awdlInterfaceIndex
_copyRemoveTrailingDot
_copyEscapedDomainLabel
__SDServiceInstanceName
__SDDomainFromNetServiceURL
__SDIsLocalOrMyMacURL
__SDDictionaryFromDiskValue
_SDShouldLogTransport
_SDLogTransportFull
_SDLogCapabilities
_SDFastSetRetain
_SDFastSetRelease
_SDFastSetCopyDescription
_SDFastDictionaryKeyRetain
_SDFastDictionaryKeyRelease
_SDFastDictionaryKeyCopyDescription
_SDCaseInsensitiveStringDictionaryKeyRetain
_SDCaseInsensitiveStringDictionaryKeyRelease
_SDCaseInsensitiveStringDictionaryKeyEqual
_SDCaseInsensitiveStringDictionaryKeyHash
___setupLogging_block_invoke
___fileLogLevelIsEnabled_block_invoke
-[SDNodeBrowser initWithNode:protocol:flags:kind:]
-[SDNodeBrowser dealloc]
-[SDNodeBrowser notifyClient:]
-[SDNodeBrowser setError:]
-[SDNodeBrowser setUserName:]
-[SDNodeBrowser setConnectionState:]
-[SDNodeBrowser notifyClientAboutWorkgroups]
-[SDNodeBrowser takeActionOnServerChanged:neighborhood:]
___56-[SDNodeBrowser takeActionOnServerChanged:neighborhood:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDNodeBrowser serversChanged:]
-[SDNodeBrowser domainsChanged:]
-[SDNodeBrowser workgroupsChanged:]
-[SDNodeBrowser sharePointBrowser:nodesDidChangeWithError:]
-[SDNodeBrowser autofsChanged:]
-[SDNodeBrowser connectedChanged:]
-[SDNodeBrowser managedChanged:]
-[SDNodeBrowser sidebarPrefsChanged:]
-[SDNodeBrowser setMode:]
-[SDNodeBrowser mode]
-[SDNodeBrowser loadBonjour]
-[SDNodeBrowser loadWindows]
-[SDNodeBrowser loadDomains]
-[SDNodeBrowser loadWorkgroups]
-[SDNodeBrowser onlySupportsADisk:]
-[SDNodeBrowser loadSharePoints]
-[SDNodeBrowser loadAutoFS]
-[SDNodeBrowser loadConnected]
-[SDNodeBrowser loadManaged]
-[SDNodeBrowser loadODisk]
-[SDNodeBrowser loadAirDrop]
-[SDNodeBrowser loadSidebarPrefsMonitor]
-[SDNodeBrowser domainChildren]
-[SDNodeBrowser workgroupChildren]
-[SDNodeBrowser copyOverBonjourInfo:source:]
-[SDNodeBrowser addBonjourChildrenFromCache:]
-[SDNodeBrowser addWindowsChildrenFromCache:]
-[SDNodeBrowser addManagedChildrenFromCache:]
-[SDNodeBrowser addConnectedChildrenFromCache:]
-[SDNodeBrowser sidebarNodesFromServerNodes:nonServerCount:addAllNode:]
___71-[SDNodeBrowser sidebarNodesFromServerNodes:nonServerCount:addAllNode:]_block_invoke
___71-[SDNodeBrowser sidebarNodesFromServerNodes:nonServerCount:addAllNode:]_block_invoke_2
-[SDNodeBrowser neighborhoodNodes]
-[SDNodeBrowser sharePointNodes]
-[SDNodeBrowser odiskNodes]
-[SDNodeBrowser airDropNodes]
-[SDNodeBrowser autoFSNodes]
-[SDNodeBrowser unloadBonjour]
-[SDNodeBrowser unloadWindows]
-[SDNodeBrowser unloadDomains]
-[SDNodeBrowser unloadWorkgroups]
-[SDNodeBrowser unloadSharePoints]
-[SDNodeBrowser unloadAutoFS]
-[SDNodeBrowser unloadConnected]
-[SDNodeBrowser unloadManaged]
-[SDNodeBrowser unloadODisk]
-[SDNodeBrowser unloadAirDrop]
-[SDNodeBrowser unloadSidebarPrefsMonitor]
-[SDNodeBrowser start]
___22-[SDNodeBrowser start]_block_invoke
___copy_helper_block_195
___destroy_helper_block_196
-[SDNodeBrowser stop]
-[SDNodeBrowser appendAllNode:]
-[SDNodeBrowser nodesInternal:]
-[SDNodeBrowser nodes]
-[SDNodeBrowser sidebarNodes]
-[SDNodeBrowser addNode:]
-[SDNodeBrowser removeNode:]
-[SDNodeBrowser bundleID]
-[SDNodeBrowser setBundleID:]
-[SDNodeBrowser delegate]
-[SDNodeBrowser setDelegate:]
-[SDNodeBrowser .cxx_destruct]
-[SDRemoteDisc initWithURL:device:]
-[SDRemoteDisc dealloc]
-[SDRemoteDisc notifyClient]
-[SDRemoteDisc startPolling]
-[SDRemoteDisc handleResponse:]
-[SDRemoteDisc cancelAndDecline]
-[SDRemoteDisc appendData:withLength:]
-[SDRemoteDisc bonjourResolverDidChange:]
-[SDRemoteDisc sendRequest:]
_readStreamCallBack
-[SDRemoteDisc pollingTimerCallBack:]
-[SDRemoteDisc requestBody]
-[SDRemoteDisc askServer]
-[SDRemoteDisc countChanged]
-[SDRemoteDisc processResponse:]
-[SDRemoteDisc cancelResolve]
-[SDRemoteDisc cancelPollingTimer]
-[SDRemoteDisc cancelReadStream]
-[SDRemoteDisc cancel]
-[SDRemoteDisc stop]
-[SDRemoteDisc askID]
-[SDRemoteDisc setAskID:]
-[SDRemoteDisc askToken]
-[SDRemoteDisc setAskToken:]
-[SDRemoteDisc askStatus]
-[SDRemoteDisc setAskStatus:]
-[SDRemoteDisc askDevice]
-[SDRemoteDisc setAskDevice:]
-[SDRemoteDisc hostName]
-[SDRemoteDisc setHostName:]
-[SDRemoteDisc portNumber]
-[SDRemoteDisc setPortNumber:]
-[SDRemoteDisc delegate]
-[SDRemoteDisc setDelegate:]
-[SDRemoteDisc .cxx_destruct]
-[SDCompanionStream initWithStreamHandler:]
-[SDCompanionStream initWithAuthorData:streamHandler:]
-[SDCompanionStream dealloc]
-[SDCompanionStream start]
-[SDCompanionStream stop]
-[SDCompanionStream stopIfReady]
-[SDCompanionStream setBundleID:]
-[SDCompanionStream getStreamsWithCompletionHandler:]
-[SDCompanionStream startBrowser]
-[SDCompanionStream sendInitialRequest]
___39-[SDCompanionStream sendInitialRequest]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDCompanionStream sendInitialResponse:]
___41-[SDCompanionStream sendInitialResponse:]_block_invoke
___copy_helper_block_110
___destroy_helper_block_111
-[SDCompanionStream switchToStreaming]
-[SDCompanionStream notifyStreamRequestWithError:]
-[SDCompanionStream fileHandle]
-[SDCompanionStream setBufferSize:socket:]
-[SDCompanionStream netServiceBrowser:didFindService:moreComing:]
-[SDCompanionStream streamHandler:didReceiveMessage:]
-[SDCompanionStream handleStreamRequest:]
___41-[SDCompanionStream handleStreamRequest:]_block_invoke
___copy_helper_block_195
___destroy_helper_block_196
-[SDCompanionStream handleStreamResponse:]
-[SDCompanionStream streamHandler:bufferSpaceChanged:]
-[SDCompanionStream streamHandler:didReceiveStreamData:]
-[SDCompanionStream streamHandlerDidClose:withError:]
-[SDCompanionStream stream:handleEvent:]
-[SDCompanionStream handleOpenedStream]
-[SDCompanionStream writeClientStream]
-[SDCompanionStream readClientStream]
-[SDCompanionStream writeNetworkStream]
-[SDCompanionStream logClientSent]
-[SDCompanionStream logClientReceived]
-[SDCompanionStream delegate]
-[SDCompanionStream setDelegate:]
-[SDCompanionStream identifier]
-[SDCompanionStream setIdentifier:]
-[SDCompanionStream streamHandler]
-[SDCompanionStream setStreamHandler:]
-[SDCompanionStream authorData]
-[SDCompanionStream setAuthorData:]
-[SDCompanionStream initiator]
-[SDCompanionStream setInitiator:]
-[SDCompanionStream shouldStop]
-[SDCompanionStream setShouldStop:]
-[SDCompanionStream clientSent]
-[SDCompanionStream setClientSent:]
-[SDCompanionStream clientReceived]
-[SDCompanionStream setClientReceived:]
-[SDCompanionStream networkBufferSpaceAvailable]
-[SDCompanionStream setNetworkBufferSpaceAvailable:]
-[SDCompanionStream netServiceBrowser]
-[SDCompanionStream setNetServiceBrowser:]
-[SDCompanionStream clientInputStream]
-[SDCompanionStream setClientInputStream:]
-[SDCompanionStream clientOutputStream]
-[SDCompanionStream setClientOutputStream:]
-[SDCompanionStream writeQueue]
-[SDCompanionStream setWriteQueue:]
-[SDCompanionStream networkStreamData]
-[SDCompanionStream setNetworkStreamData:]
-[SDCompanionStream readQueue]
-[SDCompanionStream setReadQueue:]
-[SDCompanionStream clientStreamData]
-[SDCompanionStream setClientStreamData:]
-[SDCompanionStream readFromClient]
-[SDCompanionStream setReadFromClient:]
-[SDCompanionStream wroteToClient]
-[SDCompanionStream setWroteToClient:]
-[SDCompanionStream streamsRequestHandler]
-[SDCompanionStream setStreamsRequestHandler:]
-[SDCompanionStream .cxx_destruct]
_SDBluetoothDeviceModelToString
+[SDServerBrowser sharedBrowser]
___32+[SDServerBrowser sharedBrowser]_block_invoke
-[SDServerBrowser init]
-[SDServerBrowser postNotification:forNeighborhood:]
-[SDServerBrowser bonjourNodesDidChange:]
-[SDServerBrowser windowsNodesDidChange:]
-[SDServerBrowser startBrowsingDomain:]
-[SDServerBrowser setBonjourBrowserMode:]
-[SDServerBrowser bonjourNodesForDomain:]
-[SDServerBrowser stopBrowsingDomain:]
-[SDServerBrowser startODiskBrowsing:]
-[SDServerBrowser odiskNodesForDomain:]
-[SDServerBrowser stopODiskBrowsing:]
-[SDServerBrowser startAirDropBrowsing:bundleID:]
___49-[SDServerBrowser startAirDropBrowsing:bundleID:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDServerBrowser setIconData:iconHash:forPerson:]
-[SDServerBrowser copyAirDropNodeForID:]
-[SDServerBrowser airDropNodesForDomain:]
-[SDServerBrowser isAirDropEnabled]
-[SDServerBrowser stopAirDropBrowsing:]
___39-[SDServerBrowser stopAirDropBrowsing:]_block_invoke
___copy_helper_block_75
___destroy_helper_block_76
-[SDServerBrowser startBrowsingWorkgroup:]
-[SDServerBrowser windowsNodesForWorkgroup:]
-[SDServerBrowser stopBrowsingWorkgroup:]
-[SDServerBrowser .cxx_destruct]
-[SDAirDropReceiveManager init]
-[SDAirDropReceiveManager start]
-[SDAirDropReceiveManager stop]
-[SDAirDropReceiveManager listener:didReceiveNewRequest:]
-[SDAirDropReceiveManager listener:informationDidChange:]
-[SDAirDropReceiveManager listener:didReceiveError:]
-[SDAirDropReceiveManager networkOperation:event:withResults:]
-[SDAirDropReceiveManager airDropNCManager:acceptingTransferWithRecordID:]
-[SDAirDropReceiveManager airDropNCManager:cancelingTransferWithRecordID:]
-[SDAirDropReceiveManager .cxx_destruct]
-[TXTQuery recordData]
-[TXTQuery setRecordData:]
-[TXTQuery service]
-[TXTQuery setService:]
-[TXTQuery networkProtocol]
-[TXTQuery setNetworkProtocol:]
-[TXTQuery browser]
-[TXTQuery setBrowser:]
-[TXTQuery .cxx_destruct]
-[SDSharePointBrowser initWithProtocol:authType:flags:]
-[SDSharePointBrowser dealloc]
-[SDSharePointBrowser fileNodes]
-[SDSharePointBrowser printerNodes]
-[SDSharePointBrowser URLMountSession]
-[SDSharePointBrowser notifyClient]
-[SDSharePointBrowser isNetAuthSupportedProtocol:]
-[SDSharePointBrowser addSharesToCache:newFileShares:newPrinterShares:]
-[SDSharePointBrowser addTXTRecordSharesToCache:printerShares:]
-[SDSharePointBrowser buildShares:]
-[SDSharePointBrowser isPartialVolumeList]
-[SDSharePointBrowser handleTXTRecordCallBack:error:txtLen:txtRecord:context:]
-[SDSharePointBrowser handleOpenCallBack:error:]
-[SDSharePointBrowser handleEnumerateCallBack:error:]
-[SDSharePointBrowser sharePointsFromMountPoints:]
-[SDSharePointBrowser mountedSharePointsForProtocol:]
-[SDSharePointBrowser addSharePoint:diskName:diskFlags:diskID:diskType:protocol:mountPath:]
-[SDSharePointBrowser remoteDiscStatusDidChange:]
-[SDSharePointBrowser startTXTRecordMonitor:]
_txtRecordCallBack
-[SDSharePointBrowser stopTXTRecordMonitor:]
-[SDSharePointBrowser fullNameForScheme:hostName:]
-[SDSharePointBrowser netAuthProtocol]
-[SDSharePointBrowser netAuthURL]
-[SDSharePointBrowser openNetAuthSession]
_netAuthOpenCallback
-[SDSharePointBrowser openSession]
-[SDSharePointBrowser setProtocolUserName]
-[SDSharePointBrowser enumerateShares]
_netAuthEnumerateCallback
-[SDSharePointBrowser setSharePoints:]
-[SDSharePointBrowser setBonjourInfo:domain:resolveService:]
-[SDSharePointBrowser setNetbiosName:]
-[SDSharePointBrowser getBooleanValue:forKey:]
-[SDSharePointBrowser shouldAskFirst:]
-[SDSharePointBrowser singlePasswordEnabled:]
-[SDSharePointBrowser setMountInfo:]
-[SDSharePointBrowser setError:]
-[SDSharePointBrowser setShouldNotify:]
-[SDSharePointBrowser setConnectionState:]
-[SDSharePointBrowser setError:state:notify:]
-[SDSharePointBrowser cancelResolve]
-[SDSharePointBrowser closeSession]
-[SDSharePointBrowser bonjourResolverDidChange:]
-[SDSharePointBrowser mountPointsChanged:]
-[SDSharePointBrowser addObservers]
-[SDSharePointBrowser removeObservers]
-[SDSharePointBrowser start]
___28-[SDSharePointBrowser start]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDSharePointBrowser checkNetAuthSession:]
-[SDSharePointBrowser stop]
-[SDSharePointBrowser serverURL]
-[SDSharePointBrowser setServerURL:]
-[SDSharePointBrowser protocols]
-[SDSharePointBrowser setProtocols:]
-[SDSharePointBrowser userName]
-[SDSharePointBrowser setUserName:]
-[SDSharePointBrowser hostName]
-[SDSharePointBrowser setHostName:]
-[SDSharePointBrowser protocol]
-[SDSharePointBrowser setProtocol:]
-[SDSharePointBrowser portNumber]
-[SDSharePointBrowser setPortNumber:]
-[SDSharePointBrowser typeIdentifier]
-[SDSharePointBrowser setTypeIdentifier:]
-[SDSharePointBrowser shouldNotify]
-[SDSharePointBrowser connection]
-[SDSharePointBrowser connectionState]
-[SDSharePointBrowser delegate]
-[SDSharePointBrowser setDelegate:]
-[SDSharePointBrowser .cxx_destruct]
+[SDStatusMonitor sharedMonitor]
___32+[SDStatusMonitor sharedMonitor]_block_invoke
-[SDStatusMonitor init]
-[SDStatusMonitor handleBackToMyMacSetupChange]
-[SDStatusMonitor postNotification:]
-[SDStatusMonitor restartBonjourNameMonitor]
-[SDStatusMonitor handleDynamicStoreCallback:changedKeys:]
-[SDStatusMonitor handleSleepWakeCallBack:messageArguement:]
-[SDStatusMonitor bluetoothPowerChanged:]
-[SDStatusMonitor installDynamicStoreCallBack]
_dynamicStoreCallback
-[SDStatusMonitor uninstallDynamicStoreCallBack]
-[SDStatusMonitor installFinderSidebarPrefsMonitor]
_networkBrowserPrefsCallBack
-[SDStatusMonitor uninstallFinderSidebarPrefsMonitor]
-[SDStatusMonitor handleNameMonitorCallBack:flags:error:]
-[SDStatusMonitor installBonjourNameMonitor]
_nameMonitorCallBack
-[SDStatusMonitor uninstallBonjourNameMonitor]
-[SDStatusMonitor installSleepWakeCallBack]
_sleepWakeCallBack
-[SDStatusMonitor uninstallSleepWakeCallBack]
-[SDStatusMonitor smbConfiguration:netBiosName:workgroup:]
-[SDStatusMonitor reloadSMBConfInfo]
-[SDStatusMonitor installVolumesMonitor]
_volumesChangedCallBack
-[SDStatusMonitor uninstallVolumesMonitor]
-[SDStatusMonitor installAutoFSMonitor]
___39-[SDStatusMonitor installAutoFSMonitor]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDStatusMonitor uninstallAutoFSMonitor]
-[SDStatusMonitor installWirelessMonitor]
_wirelessEventCallBack
-[SDStatusMonitor uninstallWirelessMonitor]
-[SDStatusMonitor installBluetoothMonitor]
-[SDStatusMonitor uninstallBluetoothMonitor]
-[SDStatusMonitor installDoNotDisturbMonitor]
-[SDStatusMonitor doNotDisturbChanged:]
-[SDStatusMonitor uninstallDoNotDisturbMonitor]
-[SDStatusMonitor installLocaleChangeMonitor]
_currentLocalChanged
-[SDStatusMonitor uninstallLocaleChangeMonitor]
-[SDStatusMonitor installAppleIDMonitor]
_appleIDCallBack
-[SDStatusMonitor uninstallAppleIDMonitor]
-[SDStatusMonitor installManagedConfigurationMonitor]
-[SDStatusMonitor uninstallManagedConfigurationMonitor]
-[SDStatusMonitor installAddressBookMonitor]
_addressBookCallBack
_addressBookPrefsChanged
-[SDStatusMonitor uninstallAddressBookMonitor]
-[SDStatusMonitor installKeyBagUnlockMonitor]
-[SDStatusMonitor deviceKeyBagUnlocked]
-[SDStatusMonitor deviceKeyBagLocked]
-[SDStatusMonitor deviceKeyBagDisabled]
-[SDStatusMonitor deviceKeyBagState]
-[SDStatusMonitor uninstallKeyBagUnlockMonitor]
-[SDStatusMonitor installUserPictureMonitor]
_userPictureCallBack
-[SDStatusMonitor uninstallUserPictureMonitor]
-[SDStatusMonitor installUILockStatusMonitor]
-[SDStatusMonitor deviceUIUnlocked]
-[SDStatusMonitor uninstallUILockStatusMonitor]
-[SDStatusMonitor deviceWasUnlockedOnce]
-[SDStatusMonitor installSpringBoardStateMonitor]
-[SDStatusMonitor screenOn]
-[SDStatusMonitor controlCenterVisible]
-[SDStatusMonitor handoffVisible]
-[SDStatusMonitor uninstallSpringBoardStateMonitor]
-[SDStatusMonitor installBacklightMonitor]
-[SDStatusMonitor backlightOn]
-[SDStatusMonitor uninstallBacklightMonitor]
-[SDStatusMonitor simStateReady]
-[SDStatusMonitor signalStrength]
-[SDStatusMonitor networkType]
-[SDStatusMonitor _lteConnectionShows4G]
-[SDStatusMonitor copyMyEmailMultiValue]
-[SDStatusMonitor myEmail]
-[SDStatusMonitor installSMBPreferencesMonitor]
_smbPreferencesCallBack
-[SDStatusMonitor uninstallSMBPreferencesMonitor]
-[SDStatusMonitor airDropStatusChanged:]
-[SDStatusMonitor installAirDropStatusMonitor]
-[SDStatusMonitor uninstallAirDropStatusMonitor]
-[SDStatusMonitor logWormholeTransactionForClientServer:beginEnd:count:]
-[SDStatusMonitor wormholeTransactionBegin:]
-[SDStatusMonitor wormholeTransactionEnd:]
-[SDStatusMonitor myAppleID]
-[SDStatusMonitor myAccountAppleID]
-[SDStatusMonitor myAltDSID]
-[SDStatusMonitor altDSIDNeedsFixing]
-[SDStatusMonitor fixAltDSIDIfNeeded]
-[SDStatusMonitor myPrimaryEmail]
-[SDStatusMonitor appleIDNeedsFixing]
-[SDStatusMonitor myAppleIDVerifiedInfo:]
-[SDStatusMonitor myAppleIDEmailAddresses]
-[SDStatusMonitor myAppleIDPhoneNumbers]
-[SDStatusMonitor myAppleIDEmailHash]
-[SDStatusMonitor myAppleIDPhoneHash]
-[SDStatusMonitor addPhoneNumbers:toLongHashes:andShortHashes:forPerson:]
-[SDStatusMonitor addEmails:toLongHashes:andShortHashes:forPerson:]
-[SDStatusMonitor phoneNumbersForPerson:]
-[SDStatusMonitor emailsForPerson:]
-[SDStatusMonitor instantMessageEmailsForPerson:]
-[SDStatusMonitor generateAddressBookHashes]
-[SDStatusMonitor proximityHashes]
-[SDStatusMonitor infoForHash:]
-[SDStatusMonitor infoForEmailHash:phoneHash:]
-[SDStatusMonitor copyPersonForInfoHash:]
-[SDStatusMonitor copyPersonForEmailHash:phoneHash:]
-[SDStatusMonitor addressBookContainsPerson:]
-[SDStatusMonitor removePersonFromAddressBook:]
-[SDStatusMonitor myFirstName]
-[SDStatusMonitor myLastName]
-[SDStatusMonitor currentUserIcon]
-[SDStatusMonitor myIcon]
-[SDStatusMonitor myIconHash]
-[SDStatusMonitor clearMyIconAndHash]
-[SDStatusMonitor clearAddressBookInfo]
-[SDStatusMonitor backToMyMacDomain]
-[SDStatusMonitor backToMyMacDomains]
-[SDStatusMonitor clearBackToMyMacDomains]
-[SDStatusMonitor consoleUser]
-[SDStatusMonitor currentConsoleUser]
-[SDStatusMonitor clearConsoleUser]
-[SDStatusMonitor copyMyAppleIDSecIdentity]
-[SDStatusMonitor myAppleIDValidationRecord]
-[SDStatusMonitor appleIDValidateRecord:validationRecord:]
-[SDStatusMonitor clearMyAppleIDInfo]
-[SDStatusMonitor computerName]
-[SDStatusMonitor modelName]
-[SDStatusMonitor someComputerName]
-[SDStatusMonitor bonjourName]
-[SDStatusMonitor clearComputerName]
-[SDStatusMonitor localHostName]
-[SDStatusMonitor clearLocalHostName]
-[SDStatusMonitor netbiosName]
-[SDStatusMonitor workgroup]
-[SDStatusMonitor clearMonitorCache]
-[SDStatusMonitor createHostNameKey:]
-[SDStatusMonitor addServerName:forHostName:]
-[SDStatusMonitor removeServerName:]
-[SDStatusMonitor cacheIdentity:]
-[SDStatusMonitor copyIdentityForAppleID:]
-[SDStatusMonitor serverNameForHost:]
-[SDStatusMonitor setServerMountPoints:]
-[SDStatusMonitor mountPointsForServer:]
-[SDStatusMonitor setODiskMountPoints:]
-[SDStatusMonitor odiskMountPointsForServer:]
-[SDStatusMonitor start]
-[SDStatusMonitor stop]
-[SDStatusMonitor deviceSupportsWAPI]
-[SDStatusMonitor setWirelessEnabled:]
-[SDStatusMonitor wirelessEnabled]
-[SDStatusMonitor setBluetoothEnabled:]
-[SDStatusMonitor bluetoothEnabled]
-[SDStatusMonitor updateDoNotDisturbEnabled:]
-[SDStatusMonitor setDoNotDisturbEnabled:]
-[SDStatusMonitor doNotDisturbEnabled]
-[SDStatusMonitor setFinderServer:]
-[SDStatusMonitor finderServer]
-[SDStatusMonitor finderAirDropEnabled]
-[SDStatusMonitor computerToComputer]
-[SDStatusMonitor wirelessAccessPoint]
-[SDStatusMonitor clearWirelessState]
-[SDStatusMonitor clearOperationModeInfo]
-[SDStatusMonitor setAirDropPublished:]
-[SDStatusMonitor airDropPublished]
-[SDStatusMonitor deviceIsHighPriority]
___39-[SDStatusMonitor deviceIsHighPriority]_block_invoke
___copy_helper_block_536
___destroy_helper_block_537
-[SDStatusMonitor setLegacyModeEnabled:]
-[SDStatusMonitor deviceSupportsContinuity]
-[SDStatusMonitor legacyDevice]
-[SDStatusMonitor legacyModeEnabled]
-[SDStatusMonitor legacyModeSettable]
-[SDStatusMonitor setDiscoverableMode:]
-[SDStatusMonitor isAirDropAllowed]
-[SDStatusMonitor isLegacyAirDropAvailable]
-[SDStatusMonitor isAirDropAvailable]
-[SDStatusMonitor _discoverableMode]
-[SDStatusMonitor discoverableMode]
-[SDStatusMonitor updateDiscoverableMode]
-[SDStatusMonitor discoverableLevel]
-[SDStatusMonitor disableTLS]
-[SDStatusMonitor browseAllInterfaces]
-[SDStatusMonitor registerAllInterfaces]
-[SDStatusMonitor enableXML]
-[SDStatusMonitor enableBugs]
-[SDStatusMonitor enableContinuity]
-[SDStatusMonitor enableDebugMode]
-[SDStatusMonitor forceP2P]
-[SDStatusMonitor forceAWDL]
-[SDStatusMonitor enablePKZip]
-[SDStatusMonitor enableDVZip]
-[SDStatusMonitor testDiskFull]
-[SDStatusMonitor enableWebloc]
-[SDStatusMonitor enableABImages]
-[SDStatusMonitor preferABImages]
-[SDStatusMonitor broadcastPicture]
-[SDStatusMonitor showMeInWormhole]
-[SDStatusMonitor enableAllRecents]
-[SDStatusMonitor showThisComputer]
-[SDStatusMonitor disableQuarantine]
-[SDStatusMonitor disableAutoAccept]
-[SDStatusMonitor disablePipelining]
-[SDStatusMonitor disableCompression]
-[SDStatusMonitor preferWideAreaBTMM]
-[SDStatusMonitor disablePictureQuery]
-[SDStatusMonitor ignoreIconDiskCache]
-[SDStatusMonitor alwaysSendPayload]
-[SDStatusMonitor disableContinuityTLS]
-[SDStatusMonitor enableStreamDebugging]
-[SDStatusMonitor enableHotspotFallback]
-[SDStatusMonitor sidebarMaxCount]
-[SDStatusMonitor minPersonImageSize]
-[SDStatusMonitor workgroupThreshold]
-[SDStatusMonitor booleanProperty:forList:]
-[SDStatusMonitor backToMyMacEnabled]
-[SDStatusMonitor connectedEnabled]
-[SDStatusMonitor bonjourEnabled]
-[SDStatusMonitor allEnabled]
-[SDStatusMonitor .cxx_destruct]
-[SDWindowsBrowser initWithWorkgroup:]
-[SDWindowsBrowser dealloc]
-[SDWindowsBrowser nodes]
-[SDWindowsBrowser bonjourNodesDidChange:]
-[SDWindowsBrowser start]
-[SDWindowsBrowser stop]
-[SDWindowsBrowser workgroup]
-[SDWindowsBrowser delegate]
-[SDWindowsBrowser setDelegate:]
-[SDWindowsBrowser .cxx_destruct]
+[SDWorkgroupBrowser sharedBrowser]
___35+[SDWorkgroupBrowser sharedBrowser]_block_invoke
-[SDWorkgroupBrowser init]
-[SDWorkgroupBrowser nodes]
-[SDWorkgroupBrowser workgroups]
-[SDWorkgroupBrowser bonjourNodesDidChange:]
-[SDWorkgroupBrowser start]
-[SDWorkgroupBrowser stop]
-[SDWorkgroupBrowser .cxx_destruct]
-[SDWormholeClient initWithPerson:items:forDiscovery:]
-[SDWormholeClient dealloc]
-[SDWormholeClient systemWillSleep:]
-[SDWormholeClient wirelessPowerChanged:]
-[SDWormholeClient legacyModeChanged:]
-[SDWormholeClient currentPeerChanged:]
___39-[SDWormholeClient currentPeerChanged:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDWormholeClient addObservers]
-[SDWormholeClient removeObservers]
-[SDWormholeClient createSession]
-[SDWormholeClient getTransferRate]
-[SDWormholeClient addBlockerInfo:toProperties:]
-[SDWormholeClient releaseIdleSleepAssertion]
-[SDWormholeClient notifyClientForEvent:withProperty:]
-[SDWormholeClient didStartSendingAskBodyData]
-[SDWormholeClient didFinishSendingAskBodyData]
-[SDWormholeClient setSpotlightMetadata:]
-[SDWormholeClient URLSession:dataTask:didReceiveResponse:completionHandler:]
-[SDWormholeClient setProperty:forKey:]
-[SDWormholeClient storePropertyValue:forKey:]
-[SDWormholeClient storeDataValue:forKey:]
-[SDWormholeClient storeStringValue:forKey:]
-[SDWormholeClient storeArrayValue:forKey:]
-[SDWormholeClient parseAskResponse:]
-[SDWormholeClient parseDiscoverResponse:]
-[SDWormholeClient notifyClientOfBytesCopied:timeRemaining:]
___60-[SDWormholeClient notifyClientOfBytesCopied:timeRemaining:]_block_invoke
___copy_helper_block_169
___destroy_helper_block_170
-[SDWormholeClient finishOperation]
___35-[SDWormholeClient finishOperation]_block_invoke
___35-[SDWormholeClient finishOperation]_block_invoke_2
___copy_helper_block_174
___destroy_helper_block_175
___35-[SDWormholeClient finishOperation]_block_invoke179
___copy_helper_block_180
___destroy_helper_block_181
___copy_helper_block_183
___destroy_helper_block_184
-[SDWormholeClient retryRequestForError:]
___41-[SDWormholeClient retryRequestForError:]_block_invoke
___copy_helper_block_192
___destroy_helper_block_193
-[SDWormholeClient didFinishLoading]
-[SDWormholeClient URLSession:dataTask:didReceiveData:]
-[SDWormholeClient URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:]
-[SDWormholeClient URLSession:task:didCompleteWithError:]
-[SDWormholeClient shouldCancel:]
-[SDWormholeClient didFail:]
-[SDWormholeClient receiverIsTrusted:]
-[SDWormholeClient connectionOverP2P:]
-[SDWormholeClient releasePeerToPeerIfPossible:]
-[SDWormholeClient logInterfaceUsedForSending:]
-[SDWormholeClient secTrustRef]
-[SDWormholeClient handleAuthenticationChallengeAsync:withCompletionHandler:]
___77-[SDWormholeClient handleAuthenticationChallengeAsync:withCompletionHandler:]_block_invoke
___copy_helper_block_262
___destroy_helper_block_263
-[SDWormholeClient URLSession:didReceiveChallenge:completionHandler:]
___69-[SDWormholeClient URLSession:didReceiveChallenge:completionHandler:]_block_invoke
___copy_helper_block_281
___destroy_helper_block_282
-[SDWormholeClient URLSession:task:needNewBodyStream:]
-[SDWormholeClient fileZipper:event:withProperty:]
-[SDWormholeClient bonjourResolverDidChange:]
-[SDWormholeClient addHashesAndValidationRecordToRequest:]
-[SDWormholeClient askBodyDataInFormat:]
-[SDWormholeClient discoverBodyDataInFormat:]
-[SDWormholeClient sendRequest:]
-[SDWormholeClient startZipping]
-[SDWormholeClient temporaryWeblocURL:]
-[SDWormholeClient internetLocationFile:]
-[SDWormholeClient realPathURL:]
-[SDWormholeClient splitOutFileURLs]
-[SDWormholeClient generatePreviewForFileURL:]
-[SDWormholeClient validateAirDropItems:]
-[SDWormholeClient appendFileURL:withBase:toItems:]
-[SDWormholeClient removeFileIconsFromProperties]
-[SDWormholeClient startPublishingProgress]
___43-[SDWormholeClient startPublishingProgress]_block_invoke
___copy_helper_block_420
___destroy_helper_block_421
-[SDWormholeClient start]
___25-[SDWormholeClient start]_block_invoke
___copy_helper_block_440
___destroy_helper_block_441
___25-[SDWormholeClient start]_block_invoke443
___copy_helper_block_444
___destroy_helper_block_445
-[SDWormholeClient resolve]
-[SDWormholeClient send]
___24-[SDWormholeClient send]_block_invoke
___copy_helper_block_454
___destroy_helper_block_455
___24-[SDWormholeClient send]_block_invoke457
___24-[SDWormholeClient send]_block_invoke_2
___copy_helper_block_458
___destroy_helper_block_459
___copy_helper_block_461
___destroy_helper_block_462
___24-[SDWormholeClient send]_block_invoke464
___copy_helper_block_465
___destroy_helper_block_466
-[SDWormholeClient personID]
-[SDWormholeClient sendingUserDataWithAsk]
-[SDWormholeClient stop]
___24-[SDWormholeClient stop]_block_invoke
___copy_helper_block_474
___destroy_helper_block_475
___24-[SDWormholeClient stop]_block_invoke477
___copy_helper_block_480
___destroy_helper_block_481
-[SDWormholeClient clientPid]
-[SDWormholeClient setClientPid:]
-[SDWormholeClient clientBundleID]
-[SDWormholeClient setClientBundleID:]
-[SDWormholeClient delegate]
-[SDWormholeClient setDelegate:]
-[SDWormholeClient .cxx_destruct]
_airDropQueue
___airDropQueue_block_invoke
_addCurrentPeerInfo
___addCurrentPeerInfo_block_invoke
___copy_helper_block_
___destroy_helper_block_
_removeCurrentPeerInfo
___removeCurrentPeerInfo_block_invoke
___copy_helper_block_46
___destroy_helper_block_47
_copyCurrentPeerInfo
_setWormholeConnection
_getWormholeConnection
_removeWormholeConnection
_updateSecondaryNameForNode
_copyIconDataForPerson
___Block_byref_object_copy_
___Block_byref_object_dispose_
___copyIconDataForPerson_block_invoke
___copy_helper_block_57
___destroy_helper_block_58
_setDisplayNamesAndIconForNode
_copyABPersonForNode
_setIconForNode
_copyIconDataFromAddressBook
_copyIconDataFromNetworkCache
_copyCertificateChainFromTrust
_validateRecordAndCacheInfoForPerson
_receiverSupportsURLs
_receiverSupportsDVZip
_receiverSupportsMixedTypes
_receiverSupportsPipelining
_validWormholeID
_storeFilesCopied
_preventIdleSleepAssertion
_generateDataFromEmails
_doesDataMatchArray
_fixAppleIDAcountIfNeccessary
___fixAppleIDAcountIfNeccessary_block_invoke
___fixAppleIDAcountIfNeccessary_block_invoke_2
___copy_helper_block_151
___destroy_helper_block_152
___copy_helper_block_154
___destroy_helper_block_155
_sharingOperationError
_localizedWormholeStringForKey
_notificationResponseHandler
_combinedHashStringFromArray
_iconTooSmall
-[SDActivityKey initWithDictRepresentation:]
-[SDActivityKey dealloc]
-[SDActivityKey description]
-[SDActivityKey isEqual:]
-[SDActivityKey hash]
-[SDActivityKey dictRepresentation]
-[SDActivityKey keyIdentifier]
-[SDActivityKey setKeyIdentifier:]
-[SDActivityKey dateCreated]
-[SDActivityKey setDateCreated:]
-[SDActivityKey lastUsedCounter]
-[SDActivityKey setLastUsedCounter:]
-[SDActivityKey isValidKey]
-[SDActivityKey setValidKey:]
-[SDActivityKey keyData]
-[SDActivityKey setKeyData:]
-[SDActivityKey .cxx_destruct]
+[SDActivityEncryptionKey newEncryptionKey]
-[SDActivityEncryptionKey prepareForNewEncryptionRequest]
-[SDActivityEncryptionKey getTagWhileEncryptingBytesInPlace:counterValue:forAdvertisementWithVersion:]
_ccgcm_one_shot
-[SDActivityDecryptionKey getResultWhileDecryptingBytesInPlace:andCounter:withTag:version:]
+[SDActivityEncryptionManager sharedEncryptionManager]
___54+[SDActivityEncryptionManager sharedEncryptionManager]_block_invoke
-[SDActivityEncryptionManager init]
-[SDActivityEncryptionManager dealloc]
-[SDActivityEncryptionManager addObservers]
-[SDActivityEncryptionManager removeObservers]
-[SDActivityEncryptionManager debugInfoRequested:]
-[SDActivityEncryptionManager resetStateRequested:]
-[SDActivityEncryptionManager generateNewEncryptionKey]
-[SDActivityEncryptionManager encryptionKey]
-[SDActivityEncryptionManager getTagAndCounterWhileEncryptingBytesInPlace:forAdvertisementWithVersion:handler:]
-[SDActivityEncryptionManager setDecryptionKey:forDeviceIdentifier:]
-[SDActivityEncryptionManager decryptionKeyForDeviceIdentifier:]
-[SDActivityEncryptionManager dataRepresentationForCurrentEncryptionKey]
-[SDActivityEncryptionManager unwrappedDataRepresentationForKey:]
-[SDActivityEncryptionManager newDecryptionKeyFromDataRepresentation:]
-[SDActivityEncryptionManager deleteAllEncryptionAndDecryptionKeys]
-[SDActivityEncryptionManager allKeys]
-[SDActivityEncryptionManager loadWrappingKeyData]
-[SDActivityEncryptionManager testWrappingKeychainItem]
-[SDActivityEncryptionManager loadKeyDataRepresentationWithBaseDict:]
-[SDActivityEncryptionManager saveKeyDataRepresentation:withBaseDict:]
-[SDActivityEncryptionManager loadEncryptionKeyDataRepresentation]
-[SDActivityEncryptionManager saveEncryptionKeyDataRepresentation:]
-[SDActivityEncryptionManager loadDecryptionKeyDataRepresentationForDeviceIdentifier:]
-[SDActivityEncryptionManager saveDecryptionKeyDataRepresentation:forDeviceIdentifier:]
-[SDActivityEncryptionManager baseDict]
-[SDActivityEncryptionManager baseDictWrappingKey]
-[SDActivityEncryptionManager baseDictEncryptionKey]
-[SDActivityEncryptionManager baseDictDecryptionKeyForDeviceIdentifier:]
-[SDActivityEncryptionManager .cxx_destruct]
-[SDWormholeConnection initWithConnection:]
-[SDWormholeConnection dealloc]
-[SDWormholeConnection didCloseConnection]
___42-[SDWormholeConnection didCloseConnection]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDWormholeConnection systemWillSleep:]
-[SDWormholeConnection legacyModeChanged:]
-[SDWormholeConnection wirelessPowerChanged:]
-[SDWormholeConnection addObservers]
-[SDWormholeConnection removeObservers]
-[SDWormholeConnection handleTerminalCallBack]
___46-[SDWormholeConnection handleTerminalCallBack]_block_invoke
___copy_helper_block_42
___destroy_helper_block_43
-[SDWormholeConnection notifyClient:withResults:]
-[SDWormholeConnection getTransferRate]
-[SDWormholeConnection notifyClientForEvent:]
-[SDWormholeConnection didReceiveError:]
-[SDWormholeConnection setProperty:forKey:]
-[SDWormholeConnection setReplyData:]
-[SDWormholeConnection storeRequestValue:forKey:convertToNumber:]
-[SDWormholeConnection storeDataValue:forKey:]
-[SDWormholeConnection storeStringValue:forKey:]
-[SDWormholeConnection storeNumberValue:forKey:]
-[SDWormholeConnection storeArrayValue:forKey:]
-[SDWormholeConnection storeIconValue:forKey:]
-[SDWormholeConnection sendDiscoverResponse:includeHashes:]
-[SDWormholeConnection sendAskResponse:]
-[SDWormholeConnection releaseIdleSleepAssertion]
-[SDWormholeConnection sendUploadResponse:]
-[SDWormholeConnection createPersonForAskRequest]
___49-[SDWormholeConnection createPersonForAskRequest]_block_invoke
___copy_helper_block_140
___destroy_helper_block_141
-[SDWormholeConnection senderIsTrusted:]
-[SDWormholeConnection senderIsMe]
-[SDWormholeConnection silentlyCancelRequestOnMainThread]
___57-[SDWormholeConnection silentlyCancelRequestOnMainThread]_block_invoke
___copy_helper_block_172
___destroy_helper_block_173
-[SDWormholeConnection convertURLStringsToURLs]
-[SDWormholeConnection parseDiscoverRequest]
-[SDWormholeConnection handleDiscoverRequest]
___45-[SDWormholeConnection handleDiscoverRequest]_block_invoke
___copy_helper_block_189
___destroy_helper_block_190
-[SDWormholeConnection parseAskRequest]
-[SDWormholeConnection allowAskRequestFromPerson:]
-[SDWormholeConnection handleAskRequest]
___40-[SDWormholeConnection handleAskRequest]_block_invoke
___copy_helper_block_226
___destroy_helper_block_227
-[SDWormholeConnection cancelAndDecline]
-[SDWormholeConnection handleDiscoverRequestAsync]
___50-[SDWormholeConnection handleDiscoverRequestAsync]_block_invoke
___copy_helper_block_246
___destroy_helper_block_247
-[SDWormholeConnection handleAskRequestAsync]
___45-[SDWormholeConnection handleAskRequestAsync]_block_invoke
___copy_helper_block_253
___destroy_helper_block_254
-[SDWormholeConnection handleReadStreamEvent:event:]
-[SDWormholeConnection startReceivingBody:error:]
_readStreamCallBack
-[SDWormholeConnection compressionType]
-[SDWormholeConnection startReceivingFile:error:]
-[SDWormholeConnection thereIsEnoughFreeSpace]
-[SDWormholeConnection senderInfoAvailable]
-[SDWormholeConnection silentlyCancelRequest]
-[SDWormholeConnection enqueueResponse:code:body:]
-[SDWormholeConnection oneHundredContinue:]
-[SDWormholeConnection makeDestinationDirectory]
-[SDWormholeConnection enqueueBadResponseForRequest:]
_copyWormholeOperation
-[SDWormholeConnection didReceiveRequest:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___42-[SDWormholeConnection didReceiveRequest:]_block_invoke
___42-[SDWormholeConnection didReceiveRequest:]_block_invoke_2
___copy_helper_block_340
___destroy_helper_block_341
___copy_helper_block_343
___destroy_helper_block_344
-[SDWormholeConnection getStatusCode:]
-[SDWormholeConnection notifyClientOfBytesCopied:timeRemaining:]
___64-[SDWormholeConnection notifyClientOfBytesCopied:timeRemaining:]_block_invoke
___copy_helper_block_354
___destroy_helper_block_355
-[SDWormholeConnection finishOperation]
___39-[SDWormholeConnection finishOperation]_block_invoke
___39-[SDWormholeConnection finishOperation]_block_invoke_2
___copy_helper_block_359
___destroy_helper_block_360
___39-[SDWormholeConnection finishOperation]_block_invoke366
___copy_helper_block_367
___destroy_helper_block_368
___copy_helper_block_370
___destroy_helper_block_371
-[SDWormholeConnection didSendResponse:forRequest:]
-[SDWormholeConnection didFailToSendResponse:]
-[SDWormholeConnection handleClosedConnection]
-[SDWormholeConnection whereFromInfo]
-[SDWormholeConnection setSpotlightMetadata:]
-[SDWormholeConnection setCombinedFileURLsAndItems:]
-[SDWormholeConnection transferIsOverPrebufferLimit]
-[SDWormholeConnection fileZipper:event:withProperty:]
-[SDWormholeConnection schedule]
-[SDWormholeConnection startPublishingProgress]
___47-[SDWormholeConnection startPublishingProgress]_block_invoke
___copy_helper_block_415
___destroy_helper_block_416
-[SDWormholeConnection start]
_invalidated
_didReceiveError
_didReceiveRequest
_didSendResponse
_didFailToSendResponse
-[SDWormholeConnection accept]
___30-[SDWormholeConnection accept]_block_invoke
___copy_helper_block_424
___destroy_helper_block_425
-[SDWormholeConnection stop]
-[SDWormholeConnection contactsOnly]
-[SDWormholeConnection setContactsOnly:]
-[SDWormholeConnection destination]
-[SDWormholeConnection setDestination:]
-[SDWormholeConnection sessionID]
-[SDWormholeConnection setSessionID:]
-[SDWormholeConnection delegate]
-[SDWormholeConnection setDelegate:]
-[SDWormholeConnection .cxx_destruct]
-[SDWormholeInformation init]
-[SDWormholeInformation dealloc]
-[SDWormholeInformation boolValue:]
-[SDWormholeInformation setProperty:forKey:]
-[SDWormholeInformation setInformationAndNotify]
___48-[SDWormholeInformation setInformationAndNotify]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDWormholeInformation somethingChanged:]
-[SDWormholeInformation addObservers]
-[SDWormholeInformation removeObservers]
-[SDWormholeInformation start]
-[SDWormholeInformation stop]
-[SDWormholeInformation delegate]
-[SDWormholeInformation setDelegate:]
-[SDWormholeInformation .cxx_destruct]
_SDActivityAdvertisementFromData
_SDCounterFromActivityAdvertisement
_SDAdvertismentPayloadFromActivityAdvertisement
_SDOptionsFromActivityAdvertisement
-[SDWormholeServer init]
-[SDWormholeServer dealloc]
-[SDWormholeServer handleTerminalCallBack]
___42-[SDWormholeServer handleTerminalCallBack]_block_invoke
___42-[SDWormholeServer handleTerminalCallBack]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
-[SDWormholeServer startTimers]
-[SDWormholeServer invalidateTimers]
-[SDWormholeServer didOpenConnection:]
-[SDWormholeServer didCloseConnection:]
-[SDWormholeServer didReceiveError:]
-[SDWormholeServer publishedInfoChanged:]
-[SDWormholeServer awdlTimeoutFired:]
-[SDWormholeServer bluetoothTimeoutFired:]
-[SDWormholeServer wirelessChanged:]
-[SDWormholeServer bluetoothChanged:]
-[SDWormholeServer appleIDChanged:]
-[SDWormholeServer systemWillSleep:]
-[SDWormholeServer systemHasPoweredOn:]
-[SDWormholeServer consoleUserChanged:]
-[SDWormholeServer legacyModeChanged:]
___38-[SDWormholeServer legacyModeChanged:]_block_invoke
___copy_helper_block_120
___destroy_helper_block_121
-[SDWormholeServer finderAirDropEnabled:]
-[SDWormholeServer discoverableModeChanged:]
-[SDWormholeServer handoffVisibilityChanged:]
-[SDWormholeServer keyBagFirstUnlock:]
-[SDWormholeServer screenStateChange:]
-[SDWormholeServer discoverableByEveryone]
-[SDWormholeServer discoverableByContactsOnly]
-[SDWormholeServer stopScanningAndStartServer]
-[SDWormholeServer awdl:foundDevice:]
-[SDWormholeServer awdlDidUpdateState:]
-[SDWormholeServer awdl:failedToStartScanningWithError:]
-[SDWormholeServer updateServerState]
-[SDWormholeServer airDropUnpublished:]
___39-[SDWormholeServer airDropUnpublished:]_block_invoke
___copy_helper_block_189
___destroy_helper_block_190
-[SDWormholeServer addObservers]
-[SDWormholeServer removeObservers]
-[SDWormholeServer notifyClient:withResults:]
-[SDWormholeServer bonjourPublisher:propertiesDidChange:]
-[SDWormholeServer sslSettings]
-[SDWormholeServer startHTTPServer:]
_invalidated
_didReceiveError
_didOpenConnection
_didCloseConnection
-[SDWormholeServer startProximityScanner]
-[SDWormholeServer stopProximityScanner]
-[SDWormholeServer startServer]
___31-[SDWormholeServer startServer]_block_invoke
___copy_helper_block_250
___destroy_helper_block_251
___31-[SDWormholeServer startServer]_block_invoke253
___copy_helper_block_256
___destroy_helper_block_257
-[SDWormholeServer wormholeInformation:didChange:]
-[SDWormholeServer thisIsTheFinder]
-[SDWormholeServer start]
___25-[SDWormholeServer start]_block_invoke
___copy_helper_block_264
___destroy_helper_block_265
___25-[SDWormholeServer start]_block_invoke267
___copy_helper_block_268
___destroy_helper_block_269
-[SDWormholeServer stop]
-[SDWormholeServer clientPid]
-[SDWormholeServer setClientPid:]
-[SDWormholeServer clientBundleID]
-[SDWormholeServer setClientBundleID:]
-[SDWormholeServer delegate]
-[SDWormholeServer setDelegate:]
-[SDWormholeServer .cxx_destruct]
-[SDWormholeStatus init]
-[SDWormholeStatus dealloc]
-[SDWormholeStatus setStatusAndNotify]
___38-[SDWormholeStatus setStatusAndNotify]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDWormholeStatus somethingChanged:]
-[SDWormholeStatus addObservers]
-[SDWormholeStatus removeObservers]
-[SDWormholeStatus start]
-[SDWormholeStatus stop]
-[SDWormholeStatus delegate]
-[SDWormholeStatus setDelegate:]
-[SDWormholeStatus .cxx_destruct]
_main
___main_block_invoke
___main_block_invoke_2
___main_block_invoke_3
___main_block_invoke_4
_isTargetiOS
_getSharingFrameworkBundle
___getSharingFrameworkBundle_block_invoke
_copyLocalizedStringForKey
_createMutableSetFromBag
_copyValuesFromSet
_createBagFromArray
_createSetFromArray
_createSFNodeKindsFromXPCArray
_createXPCArrayFromSFNodeKinds
_copyKeysFromDictionary
_copyValuesFromDictionary
_setOrRemoveValue
_copyBundleIdentifierForPID
_defaultPortForProtocol
_getVolumeRefNumForURL
_logError
_createURL
_isWormholeProtocol
_disableAirDropTLS
_openDefaultInterface
_deviceSupportsAWDL
___deviceSupportsAWDL_block_invoke
_createCGImageWithURL
_createCGImageWithData
_createCGImageWithDataInternal
_createCGImageWithJPEG2000Data
_createCGImageWithDataOrURL
_copyImageData
_createImageDataWithSize
_browseAllInterfacesEnabled
_booleanValueForPreference
_forceOldMode
_enableSimulator
_directIPEnabled
_debugLoggingEnabled
_valuesChanged
_copySharingPrefValue
_longValueForPreference
_copyCurrentTime
_logMessageAndRelease
_syslogCFString
_airDropServiceType
_companionServiceType
_getOrderedTypes
___getOrderedTypes_block_invoke
_initArrays
_getOrderedProtocols
___getOrderedProtocols_block_invoke
_getServiceTypeForProtocol
___getServiceTypeForProtocol_block_invoke
_initDictionaries
_getProtocolForServiceType
___getProtocolForServiceType_block_invoke
_SharingFastSetRetain
_SharingFastSetRelease
_SharingFastSetCopyDescription
_SharingFastDictionaryKeyRetain
_SharingFastDictionaryKeyRelease
_SharingFastDictionaryKeyCopyDescription
___getIndexForSFNodeKind_block_invoke
_initKindMap
___getSFNodeKindForIndex_block_invoke
-[SDAdaptiveCompressor initWithReadStream:writeStream:]
-[SDAdaptiveCompressor dealloc]
-[SDAdaptiveCompressor copyReadStream]
-[SDAdaptiveCompressor writeData:length:toStream:]
-[SDAdaptiveCompressor readData:length:fromStream:]
-[SDAdaptiveCompressor readIncomingChunk]
-[SDAdaptiveCompressor sendOutgoingChunk:length:compressed:]
-[SDAdaptiveCompressor openStreams]
-[SDAdaptiveCompressor processNetworkStatistics:]
-[SDAdaptiveCompressor processCompressibilityStatistics]
-[SDAdaptiveCompressor fileComplete]
___36-[SDAdaptiveCompressor fileComplete]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SDAdaptiveCompressor executeReadWithAdaptiveCompression]
-[SDAdaptiveCompressor executeWriteWithAdaptiveCompression]
___59-[SDAdaptiveCompressor executeWriteWithAdaptiveCompression]_block_invoke
___59-[SDAdaptiveCompressor executeWriteWithAdaptiveCompression]_block_invoke_2
___copy_helper_block_36
___destroy_helper_block_37
___copy_helper_block_39
___destroy_helper_block_40
-[SDAdaptiveCompressor .cxx_destruct]
GCC_except_table9
GCC_except_table7
GCC_except_table2
GCC_except_table12
GCC_except_table16
GCC_except_table26
GCC_except_table3
GCC_except_table7
GCC_except_table3
GCC_except_table11
GCC_except_table17
GCC_except_table12
GCC_except_table89
GCC_except_table22
GCC_except_table161
GCC_except_table64
GCC_except_table70
GCC_except_table80
GCC_except_table107
GCC_except_table15
GCC_except_table75
GCC_except_table108
_SDActivityConnectionSendActivitiesVersion_v1
_SDCompanionConnectionConnectRequestVersion_v1
_SDActivityConnectionConnectRequestVersion_v1
_SDCompanionStreamConnectRequestVersion_v1
_SDCompanionStreamConnectResponseVersion_v1
_SDCompanionConnectionNSXPCDataVersion_v1
_SDCompanionConnectionMessageDataVersion_v1
_SDCompanionConnectionConnectResponseVersion_v1
_SDStreamInternalBufferThresholdMax
_SDStreamInternalBufferThresholdMin
_SDHotspotBrowserMessageVersion
_SDHotspotAdvertiseResponseTimeout
_SDHotspotTypeOffsetFromEnd
_SDHotspotAppleIDHashOffsetFromEnd
_SDCompanionStreamConnectRequestVersion
___block_descriptor_tmp
_SDActivityConnectionActivitiesKey
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp31
___block_literal_global32
_SDConnectionTypeKey
_SDConnectionTypeActivity
_SDConnectionTypeCompanion
_SDConnectionTypeStream
_SFCompanionServiceServiceNameKey
_SFCompanionServiceServiceIDKey
_SFCompanionServiceDeviceNameKey
_SFCompanionServiceDeviceIDKey
_SFCompanionServiceManagerIDKey
_SFCompanionServiceIPAddressKey
_SDCompanionConnectionSenderServiceKey
_SDCompanionStreamSenderServiceKey
_SDCompanionConnectionMessageVersionKey
_SDActivityConnectionMessageVersionKey
_SDCompanionStreamMessageVersionKey
_SDStreamMessageTypeKey
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp40
___block_descriptor_tmp57
___block_descriptor_tmp59
_SDCompanionConnectionMessageTypeKey
_SDCompanionConnectionMethodDataType
_SDCompanionConnectionConnectRequestType
_SDCompanionConnectionConnectResponseType
_SDCompanionConnectionMessageDataKey
_SDCompanionConnectionUpdatedStatusKey
_SDCompanionConnectionRequestResponseKey
_SDCompanionConnectionNSXPCDataVersionKey
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp93
___block_descriptor_tmp101
___block_descriptor_tmp104
___block_descriptor_tmp121
_SDStreamActivityIdentifierKey
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp64
___block_descriptor_tmp115
___block_descriptor_tmp213
___block_literal_global214
___block_descriptor_tmp245
___block_descriptor_tmp265
___block_descriptor_tmp
___block_descriptor_tmp41
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp21
___block_descriptor_tmp37
___block_descriptor_tmp40
___block_descriptor_tmp58
___block_descriptor_tmp155
___block_descriptor_tmp160
___block_descriptor_tmp
___block_literal_global
_kAutoFSChanged
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp58
___block_descriptor_tmp61
___block_descriptor_tmp
___block_descriptor_tmp147
___block_descriptor_tmp253
___block_descriptor_tmp292
___block_descriptor_tmp351
___block_descriptor_tmp359
___block_descriptor_tmp
___block_descriptor_tmp71
___block_descriptor_tmp99
___block_descriptor_tmp102
___block_descriptor_tmp
___block_literal_global
__SD_IDSContinuityTypeStrings
__SD_IDSContinuityStateStrings
___block_descriptor_tmp158
___block_descriptor_tmp193
___block_descriptor_tmp
_kConnectedChanged
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp15
___block_literal_global16
___block_descriptor_tmp107
___block_descriptor_tmp110
___block_descriptor_tmp113
___block_descriptor_tmp116
___block_literal_global117
___block_descriptor_tmp124
___block_descriptor_tmp131
_kDomainsChanged
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp64
___block_descriptor_tmp
___block_descriptor_tmp188
___block_descriptor_tmp197
___block_descriptor_tmp292
___block_descriptor_tmp297
___block_descriptor_tmp
___block_descriptor_tmp39
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp98
___block_descriptor_tmp114
___block_descriptor_tmp187
___block_descriptor_tmp193
___block_descriptor_tmp325
___block_descriptor_tmp371
___block_descriptor_tmp458
___block_descriptor_tmp513
_kManagedChanged
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp26
_kSDPowerEventNameAirDrop
_kSDPowerEventBonjourBrowse
_kSDPowerEventBonjourAdvertise
_kSDPowerEventBluetoothScanning
_kSDPowerEventBluetoothAdvertise
_kSDPowerStateStart
_kSDPowerStateStop
_kSDPowerEventNameProxyTransfer
_kSDProxyTransferStateStart
_kSDProxyTransferStateSuspend
_kSDProxyTransferStateStop
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
__SD_IDSContinuityTypeStrings
__SD_IDSContinuityStateStrings
___block_descriptor_tmp70
___block_descriptor_tmp211
___block_descriptor_tmp
___block_descriptor_tmp93
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp164
___block_descriptor_tmp174
___block_descriptor_tmp
___block_descriptor_tmp30
___block_descriptor_tmp51
___block_descriptor_tmp
_SDHotspotContinuationRequestReason
_SDHotspotContinuationResponseReason
_SDHotspotBrowserMessageVersionKey
_SDHotspotBrowserMessageTypeKey
_SDHotspotBrowserCredentialDataKey
_SDHotspotCredentialNameKey
_SDHotspotCredentialPasswordKey
_SDHotspotCredentialChannelKey
_SDHotspotCredentialErrorKey
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp197
___block_descriptor_tmp226
___block_descriptor_tmp229
___block_descriptor_tmp343
___block_descriptor_tmp350
___block_descriptor_tmp396
___block_descriptor_tmp404
___block_descriptor_tmp427
___block_descriptor_tmp456
___block_descriptor_tmp461
___block_descriptor_tmp534
___block_descriptor_tmp
___block_descriptor_tmp23
___block_descriptor_tmp136
_kEnableFileLoggingKey
_kStreamIDkey
_kWormholeIDkey
_kODMediaTypeKey
_kODServerNameKey
_kAirDropCacheFolder
_kDisableAWDLKey
_kHTTPHeaderExpect
_kHTTPHeaderUserAgent
_kHTTPHeaderConnection
_kHTTPHeaderContentType
_kHTTPHeaderContentLength
_kHTTPHeaderCompressionTypes
_kHTTPCompressionTypeGZip
_kHTTPCompressionTypePKZip
_kHTTPCompressionTypeDVZip
_kHTTPClose
_kHTTP100Continue
_kHTTPMimeTypeZip
_kHTTPMimeTypeCPIO
_kHTTPMimeTypeDVZip
_kHTTPMimeTypeBinary
_kHTTPMimeTypeXML
_kHTTPRequestOPTIONS
_kHTTPRequestGET
_kHTTPRequestHEAD
_kHTTPRequestPOST
_kHTTPRequestPUT
_kHTTPRequestDELETE
_kHTTPRequestTRACE
_kHTTPRequestCONNECT
_kHTTPRequestPATCH
_kBonjourDiskUUID
_kBonjourDiskName
_kBonjourDiskFlags
_kBonjourDiskType
_kBonjourDiskDeviceTypes
_kBonjourDiskChangeCount
_kBonjourDiskSystem
_kBonjourComputerNameKey
_kBonjourPictureHashKey
_kBonjourEmailHashKey
_kBonjourNumberHashKey
_kBonjourCommentKey
_kBonjourModelKey
_kBonjourEnclosureColorKey
_kBonjourOSXVersKey
_kBonjourFlagsKey
_kNetAuthSessionDone
___block_descriptor_tmp
___block_literal_global
_kSDFastSetCallBacks
_kSDFastDictionaryKeyCallBacks
_kSDCaseInsensitiveDictionaryKeyCallBacks
___block_descriptor_tmp293
___block_literal_global294
___block_descriptor_tmp299
___block_literal_global300
___block_descriptor_tmp
___block_descriptor_tmp162
___block_literal_global
___block_descriptor_tmp169
___block_literal_global170
___block_descriptor_tmp197
_kSDRemoteDiscValueAccepted
_kSDRemoteDiscValueDeclined
_kSDRemoteDiscValueUnknown
_SDCompanionStreamConnectResponseKey
_SDCompanionStreamAuthorDataKey
___block_descriptor_tmp
___block_descriptor_tmp112
___block_descriptor_tmp198
_kODisksChanged
_kBonjourChanged
_kWindowsChanged
_kAirDropChanged
_kAirDropStatusChanged
_kNeighborhoodName
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp68
___block_descriptor_tmp77
___block_descriptor_tmp
_kStatusAddressBookChanged
_kStatusAirDropPublished
_kStatusAltDSIDChanged
_kStatusAppleIDChanged
_kStatusBackToMyMacChanged
_kStatusBacklightChanged
_kStatusBluetoothPowerChanged
_kStatusComputerNameChanged
_kStatusConsoleUserChanged
_kStatusContinuationPayloadSent
_kStatusControlCenterVisibilityChanged
_kStatusDebugInfoRequested
_kStatusDiscoverableModeChanged
_kStatusFinderAirDropChanged
_kStatusFinderPrefsChanged
_kStatusHandoffVisibilityChanged
_kStatusLegacyModeChanged
_kStatusLegacyModeSettableChanged
_kStatusLocalHostNameChanged
_kStatusUILockStatusChanged
_kStatusKeyBagFirstUnlock
_kStatusKeyBagLockStatusChanged
_kStatusMountPointsChanged
_kStatusMulticastDNSChanged
_kStatusNetbiosNameChanged
_kStatusODiskMountPointsChanged
_kStatusResetStateRequested
_kStatusResetState2Requested
_kStatusScreenStateChanged
_kStatusSystemHasPoweredOn
_kStatusSystemWillSleep
_kStatusUserPictureChanged
_kStatusVFSChanged
_kStatusVolumesChanged
_kStatusWirelessModeChanged
_kStatusWirelessPowerChanged
_kStatusWorkgroupChanged
_kStatusWormholeLinkStateChanged
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp215
___block_descriptor_tmp538
_kWorkgroupsChanged
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp171
___block_descriptor_tmp176
___block_descriptor_tmp182
___block_descriptor_tmp185
___block_descriptor_tmp194
___block_descriptor_tmp264
___block_descriptor_tmp283
___block_descriptor_tmp422
___block_descriptor_tmp442
___block_descriptor_tmp446
___block_descriptor_tmp456
___block_descriptor_tmp460
___block_descriptor_tmp463
___block_descriptor_tmp467
___block_descriptor_tmp476
___block_descriptor_tmp482
_kWormholeOperationAsk
_kWormholeOperationUpload
_kWormholeOperationDiscover
_kWormholeInterfaceAWDL
_kErrorNoFiles
_kErrorSystemSleep
_kErrorInvalidFile
_kErrorNotEnoughSpace
_kErrorTransferFailed1
_kErrorTransferFailed2
_kErrorFileNotReadable
_kErrorWirelessDisabled
_kErrorAuthenticationFailed
_kWormholePeerChanged
_kWormholeValidationRecordDataKey
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp41
___block_descriptor_tmp48
___block_descriptor_tmp60
___block_descriptor_tmp153
___block_descriptor_tmp157
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp44
___block_descriptor_tmp142
___block_descriptor_tmp174
___block_descriptor_tmp191
___block_descriptor_tmp228
___block_descriptor_tmp248
___block_descriptor_tmp255
___block_descriptor_tmp342
___block_descriptor_tmp345
___block_descriptor_tmp356
___block_descriptor_tmp361
___block_descriptor_tmp369
___block_descriptor_tmp372
___block_descriptor_tmp417
-[SDWormholeConnection start].callbacks
___block_descriptor_tmp426
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp36
___block_descriptor_tmp122
___block_descriptor_tmp191
-[SDWormholeServer startHTTPServer:].callbacks
___block_descriptor_tmp252
___block_descriptor_tmp258
___block_descriptor_tmp266
___block_descriptor_tmp270
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp13
___block_literal_global14
___block_descriptor_tmp17
___block_literal_global18
___block_descriptor_tmp21
___block_literal_global22
_kSharingDomain
_kManagedSharingDomain
_kNetworkBrowserDomain
_kBrowseAllInterfacesKey
_kPreferSMBFileSharingKey
_kDisableContinuityKey
_kEnableDebugLoggingKey
_kAlternateServiceKey
_kEnableSimulatorKey
_kForceOldModeKey
_kDisableTLSKey
_kEnableDirectIPKey
_kPreferenceEnabled
_kBonjourTypeAFP
_kBonjourTypeSMB
_kBonjourTypeNFS
_kBonjourTypeWebDAVS
_kBonjourTypeWebDAV
_kBonjourTypeFTPS
_kBonjourTypeFTP
_kBonjourTypeVNC
_kBonjourTypeHTTPS
_kBonjourTypeHTTP
_kBonjourTypeADisk
_kBonjourTypeODisk
_kBonjourTypeAirDrop
_kBonjourTypeAirDropAlt
_kBonjourTypeCompanion
_kBonjourTypeDeviceInfo
_kBonjourTypeFile
_kBonjourTypeNetBIOS
_kBonjourTypeWorkgroups
_kBonjourTypeNWNode
_kBonjourDomainLocal
_kBonjourPseudoDomainBTMM
___block_descriptor_tmp
___block_literal_global
_kSharingFastSetCallBacks
___block_descriptor_tmp117
___block_literal_global118
___block_descriptor_tmp133
___block_literal_global134
___block_descriptor_tmp135
___block_literal_global136
___block_descriptor_tmp137
___block_literal_global138
___block_descriptor_tmp139
___block_literal_global140
_kSharingFastDictionaryKeyCallBacks
___block_descriptor_tmp144
___block_literal_global145
___block_descriptor_tmp146
___block_literal_global147
___block_descriptor_tmp
___block_descriptor_tmp38
___block_descriptor_tmp41
_OBJC_IVAR_$_SDActivityRequestRecord._requestCreatedDate
_OBJC_IVAR_$_SDActivityRequestRecord._requestIdentifier
_OBJC_IVAR_$_SDActivityRequestRecord._deviceIdentifier
_OBJC_IVAR_$_SDActivityRequestRecord._completionHandler
_OBJC_IVAR_$_SDActivityRequestRecord._timeoutTimer
_OBJC_IVAR_$_SDActivityRequestRecord._error
_OBJC_IVAR_$_SDActivityEncryptionKeyRequestRecord._previousKeyIdentifier
_OBJC_IVAR_$_SDActivityEncryptionKeyRequestRecord._canDoCloudRequest
_OBJC_IVAR_$_SDActivityEncryptionKeyRequestRecord._retryCount
_OBJC_IVAR_$_SDActivityPayloadRequestRecord._advertisementPayload
_OBJC_IVAR_$_SDActivityPayloadReplyRecord._messageIdentifier
_OBJC_IVAR_$_SDActivityPayloadReplyRecord._requestIdentifier
_OBJC_IVAR_$_SDActivityPayloadReplyRecord._activityIdentifier
_OBJC_IVAR_$_SDActivityPayloadReplyRecord._deviceIdentifier
_OBJC_IVAR_$_SDAirDropTransferDataOSX._recordID
_OBJC_IVAR_$_SDAirDropTransferDataOSX._unknownScheme
_OBJC_IVAR_$_SDAirDropTransferDataOSX._unknownFileType
_OBJC_IVAR_$_SDAirDropTransferDataOSX._senderNode
_OBJC_IVAR_$_SDAirDropTransferDataOSX._contentTypes
_OBJC_IVAR_$_SDAirDropTransferDataOSX._fileExtensionsToTypes
_OBJC_IVAR_$_SDAirDropTransferDataOSX._selectedApplicationDestination
_OBJC_IVAR_$_SDAirDropTransferDataOSX._nonFileItem
_OBJC_IVAR_$_SDAirDropTransferDataOSX._itemsDescription
_OBJC_IVAR_$_SDAirDropTransferDataOSX._itemsDescriptionAdvanced
_OBJC_IVAR_$_SDAirDropTransferDataOSX._timeLastUserInteraction
_OBJC_IVAR_$_SDAirDropTransferDataOSX._possibleApplicationDestinations
_OBJC_IVAR_$_SDAirDropTransferDataOSX._autoAccept
_OBJC_IVAR_$_SDAirDropTransferDataOSX._smallFileIcon
_OBJC_IVAR_$_SDAirDropTransferDataOSX._fileIcon
_OBJC_IVAR_$_SDAirDropTransferDataOSX._bundleID
_OBJC_IVAR_$_SDAirDropTransferDataOSX._filesCopied
_OBJC_IVAR_$_SDAirDropTransferDataOSX._files
_OBJC_IVAR_$_SDAirDropTransferDataOSX._items
_OBJC_IVAR_$_SDAirDropTransferDataOSX._bytesCopied
_OBJC_IVAR_$_SDAirDropTransferDataOSX._totalBytes
_OBJC_IVAR_$_SDAirDropTransferDataOSX._timeRemaining
_OBJC_IVAR_$_SDAirDropTransferDataOSX._error
_OBJC_IVAR_$_SDAirDropTransferDataOSX._senderComputerName
_OBJC_IVAR_$_SDAirDropTransferDataOSX._senderEmail
_OBJC_IVAR_$_SDAirDropTransferDataOSX._senderEmailHash
_OBJC_IVAR_$_SDAirDropTransferDataOSX._senderFirstName
_OBJC_IVAR_$_SDAirDropTransferDataOSX._senderLastName
_OBJC_IVAR_$_SDAirDropTransferDataOSX._senderID
_OBJC_IVAR_$_SDAirDropTransferDataOSX._senderIcon
_OBJC_IVAR_$_SDAirDropTransferDataOSX._verifiableIdentity
_OBJC_IVAR_$_SDAirDropTransferDataOSX._contentType
_OBJC_IVAR_$_SDActivityConnection._streamHandler
_OBJC_IVAR_$_SDActivityConnection._initiator
_OBJC_IVAR_$_SDActivityConnection._delegate
_OBJC_IVAR_$_SDActivityConnection._personID
_OBJC_IVAR_$_SDCompanionBrowser._identifier
_OBJC_IVAR_$_SDCompanionBrowser._serviceType
_OBJC_IVAR_$_SDCompanionBrowser._clientProxy
_OBJC_IVAR_$_SDCompanionBrowser._activityConnections
_OBJC_IVAR_$_SDFileLogger._workQueue
_OBJC_IVAR_$_SDFileLogger._lastFileStatTime
_OBJC_IVAR_$_SDFileLogger._logsDirectoryPath
_OBJC_IVAR_$_SDFileLogger._fileObserverSource
_OBJC_IVAR_$_SDFileLogger._fileHandle
_OBJC_IVAR_$_SDCompanionConnection._clientProxy
_OBJC_IVAR_$_SDCompanionConnection._streamHandler
_OBJC_IVAR_$_SDCompanionConnection._initiator
_OBJC_IVAR_$_SDCompanionConnection._initiated
_OBJC_IVAR_$_SDCompanionConnection._justAccepted
_OBJC_IVAR_$_SDCompanionConnection._listener
_OBJC_IVAR_$_SDCompanionConnection._xpcConnection
_OBJC_IVAR_$_SDCompanionConnection._delegate
_OBJC_IVAR_$_SDCompanionConnection._companionService
_OBJC_IVAR_$_SDStreamManager._service
_OBJC_IVAR_$_SDStreamManager._serviceType
_OBJC_IVAR_$_SDStreamManager._managers
_OBJC_IVAR_$_SDStreamManager._companionServices
_OBJC_IVAR_$_SDStreamManager._incomingStreams
_OBJC_IVAR_$_SDStreamManager._continuationStreams
_OBJC_IVAR_$_SDStreamManager._connectedStreams
_OBJC_IVAR_$_SDStreamManager._publishTimer
_OBJC_IVAR_$_SDInformationConnection._streamHandler
_OBJC_IVAR_$_SDInformationConnection._delegate
_OBJC_IVAR_$_SDServiceManager._clientProxy
_OBJC_IVAR_$_SDServiceManager._managerID
_OBJC_IVAR_$_SDServiceManager._bundleID
_OBJC_IVAR_$_SDServiceManager._enabledServices
_OBJC_IVAR_$_SDServiceManager._companionStreams
_OBJC_IVAR_$_SDServiceManager._streamHandlers
_OBJC_IVAR_$_SDStreamHandler._inputStream
_OBJC_IVAR_$_SDStreamHandler._outputStream
_OBJC_IVAR_$_SDStreamHandler._client
_OBJC_IVAR_$_SDStreamHandler._byteIndex
_OBJC_IVAR_$_SDStreamHandler._bytesRead
_OBJC_IVAR_$_SDStreamHandler._bundleID
_OBJC_IVAR_$_SDStreamHandler._inMessage
_OBJC_IVAR_$_SDStreamHandler._shouldStop
_OBJC_IVAR_$_SDStreamHandler._openTimer
_OBJC_IVAR_$_SDStreamHandler._outMessage
_OBJC_IVAR_$_SDStreamHandler._checkedCert
_OBJC_IVAR_$_SDStreamHandler._streamError
_OBJC_IVAR_$_SDStreamHandler._usingMessages
_OBJC_IVAR_$_SDStreamHandler._inMessageLength
_OBJC_IVAR_$_SDStreamHandler._registeredStreams
_OBJC_IVAR_$_SDStreamHandler._shouldReadNetwork
_OBJC_IVAR_$_SDStreamHandler._bufferSpaceAvailable
_OBJC_IVAR_$_SDStreamHandler._inData
_OBJC_IVAR_$_SDStreamHandler._messageQueue
_OBJC_IVAR_$_SDStreamHandler._handlers
_OBJC_IVAR_$_SDStreamHandler._outputStreamData
_OBJC_IVAR_$_SDStreamHandler._inputState
_OBJC_IVAR_$_SDStreamHandler._timeToOpen
_OBJC_IVAR_$_SDStreamHandler._timeOpened
_OBJC_IVAR_$_SDStreamHandler._wroteToNetwork
_OBJC_IVAR_$_SDStreamHandler._readFromNetwork
_OBJC_IVAR_$_SDStreamHandler._loggedTransfer
_OBJC_IVAR_$_SDStreamHandler._delegate
_OBJC_IVAR_$_SDActivityController._activityService
_OBJC_IVAR_$_SDActivityController._shouldStart
_OBJC_IVAR_$_SDActivityController._allPeerBTIdentifiers
_OBJC_IVAR_$_SDConnectionManager._scanner
_OBJC_IVAR_$_SDConnectionManager._advertiser
_OBJC_IVAR_$_SDConnectionManager._serviceManager
_OBJC_IVAR_$_SDConnectionManager._unlockSessions
_OBJC_IVAR_$_SDConnectionManager._hotspotBrowser
_OBJC_IVAR_$_SDConnectionManager._xpcConnection
_OBJC_IVAR_$_SDConnectionManager._companionStreams
_OBJC_IVAR_$_SDConnectionManager._companionConnections
_OBJC_IVAR_$_SDConnectionManager._deviceStreamMap
_OBJC_IVAR_$_SDConnectionManager._streamIdentifiers
_OBJC_IVAR_$_SDConnectionManager._browser
_OBJC_IVAR_$_SDConnectionManager._delegate
_OBJC_IVAR_$_SDXPCSession._xpcManagerListener
_OBJC_IVAR_$_SDXPCSession._connections
_OBJC_IVAR_$_SDAirDropListener._listener
_OBJC_IVAR_$_SDAirDropListener._delegate
_OBJC_IVAR_$_SDAirDropListener._contactsOnly
_OBJC_IVAR_$_SDAutoFSBrowser._timer
_OBJC_IVAR_$_SDAutoFSBrowser._servers
_OBJC_IVAR_$_SDAutoFSBrowser._clientCount
_OBJC_IVAR_$_SDBonjourBrowser._mode
_OBJC_IVAR_$_SDBonjourBrowser._awdlIndex
_OBJC_IVAR_$_SDBonjourBrowser._firstTime
_OBJC_IVAR_$_SDBonjourBrowser._startTime
_OBJC_IVAR_$_SDBonjourBrowser._types
_OBJC_IVAR_$_SDBonjourBrowser._bundleID
_OBJC_IVAR_$_SDBonjourBrowser._proximity
_OBJC_IVAR_$_SDBonjourBrowser._domain
_OBJC_IVAR_$_SDBonjourBrowser._maxServices
_OBJC_IVAR_$_SDBonjourBrowser._connection
_OBJC_IVAR_$_SDBonjourBrowser._serverCache
_OBJC_IVAR_$_SDBonjourBrowser._servers
_OBJC_IVAR_$_SDBonjourBrowser._dnsQueries
_OBJC_IVAR_$_SDBonjourBrowser._monitor
_OBJC_IVAR_$_SDBonjourBrowser._isNetBIOS
_OBJC_IVAR_$_SDBonjourBrowser._isAirDrop
_OBJC_IVAR_$_SDBonjourBrowser._isMyDomain
_OBJC_IVAR_$_SDBonjourBrowser._isWorkgroups
_OBJC_IVAR_$_SDBonjourBrowser._restartTimer
_OBJC_IVAR_$_SDBonjourBrowser._identityQueries
_OBJC_IVAR_$_SDBonjourBrowser._wormholeRequests
_OBJC_IVAR_$_SDBonjourBrowser._iconCachers
_OBJC_IVAR_$_SDBonjourBrowser._iconCache
_OBJC_IVAR_$_SDBonjourBrowser._delegate
_OBJC_IVAR_$_SDBonjourPublisher._port
_OBJC_IVAR_$_SDBonjourPublisher._delegate
_OBJC_IVAR_$_SDBonjourPublisher._service
_OBJC_IVAR_$_SDBonjourPublisher._retryCount
_OBJC_IVAR_$_SDBonjourPublisher._identity
_OBJC_IVAR_$_SDBonjourPublisher._txtRecord
_OBJC_IVAR_$_SDBonjourPublisher._properties
_OBJC_IVAR_$_SDBonjourPublisher._monitor
_OBJC_IVAR_$_SDBonjourPublisher._restartTimer
_OBJC_IVAR_$_SDActivityAdvertiser._goodbyeTimer
_OBJC_IVAR_$_SDActivityAdvertiser._advertisementData
_OBJC_IVAR_$_SDActivityAdvertiser._advertisingEnabled
_OBJC_IVAR_$_SDActivityAdvertiser._currentErrorHandler
_OBJC_IVAR_$_SDActivityAdvertiser._currentAdvertisementPayload
_OBJC_IVAR_$_SDActivityAdvertiser._currentAdvertisementOptions
_OBJC_IVAR_$_SDActivityAdvertiser._powerAssertionID
_OBJC_IVAR_$_SDActivityAdvertiser._monitor
_OBJC_IVAR_$_SDActivityAdvertiser._shouldNotAdvertiseRequesters
_OBJC_IVAR_$_SDActivityAdvertiser._continuity
_OBJC_IVAR_$_SDActivityAdvertiser._versionByte
_OBJC_IVAR_$_SDActivityAdvertiser._goodbyeTimerInterval
_OBJC_IVAR_$_SDActivityAdvertiser._rawAdvertisementData
_OBJC_IVAR_$_SDActivityAdvertiser._remoteConnection
_OBJC_IVAR_$_SDBonjourResolver._url
_OBJC_IVAR_$_SDBonjourResolver._timer
_OBJC_IVAR_$_SDBonjourResolver._path
_OBJC_IVAR_$_SDBonjourResolver._name
_OBJC_IVAR_$_SDBonjourResolver._type
_OBJC_IVAR_$_SDBonjourResolver._domain
_OBJC_IVAR_$_SDBonjourResolver._hostName
_OBJC_IVAR_$_SDBonjourResolver._resolve
_OBJC_IVAR_$_SDBonjourResolver._portNumber
_OBJC_IVAR_$_SDBonjourResolver._connection
_OBJC_IVAR_$_SDBonjourResolver._timeout
_OBJC_IVAR_$_SDBonjourResolver._error
_OBJC_IVAR_$_SDBonjourResolver._delegate
_OBJC_IVAR_$_SDBonjourResolver._onlyAWDL
_OBJC_IVAR_$_SDBonjourResolver._service
_OBJC_IVAR_$_SDConnectedBrowser._timer
_OBJC_IVAR_$_SDConnectedBrowser._servers
_OBJC_IVAR_$_SDConnectedBrowser._clientCount
_OBJC_IVAR_$_SDConnectedBrowser._recentsCount
_OBJC_IVAR_$_SDConnectedBrowser._connectedCount
_OBJC_IVAR_$_SDConnectedBrowser._recentsList
_OBJC_IVAR_$_SDConnectedBrowser._odiskServers
_OBJC_IVAR_$_SDConnectedBrowser._airDropPeople
_OBJC_IVAR_$_SDConnectedBrowser._sendNotification
_OBJC_IVAR_$_SDConnectedBrowser._monitor
_OBJC_IVAR_$_SDDomainBrowser._timer
_OBJC_IVAR_$_SDDomainBrowser._clientCount
_OBJC_IVAR_$_SDDomainBrowser._domainBrowser
_OBJC_IVAR_$_SDDomainBrowser._sendNotification
_OBJC_IVAR_$_SDDomainBrowser._domains
_OBJC_IVAR_$_SDDomainBrowser._domainTree
_OBJC_IVAR_$_SDFileZipper._bomPath
_OBJC_IVAR_$_SDFileZipper._usePKZip
_OBJC_IVAR_$_SDFileZipper._clientPid
_OBJC_IVAR_$_SDFileZipper._bomCopier
_OBJC_IVAR_$_SDFileZipper._senderName
_OBJC_IVAR_$_SDFileZipper._tempFolder
_OBJC_IVAR_$_SDFileZipper._destination
_OBJC_IVAR_$_SDFileZipper._bomArchive
_OBJC_IVAR_$_SDFileZipper._readStream
_OBJC_IVAR_$_SDFileZipper._writeStream
_OBJC_IVAR_$_SDFileZipper._sourceFiles
_OBJC_IVAR_$_SDFileZipper._nameConflicts
_OBJC_IVAR_$_SDFileZipper._progressTimer
_OBJC_IVAR_$_SDFileZipper._quarantineData
_OBJC_IVAR_$_SDFileZipper._compressionType
_OBJC_IVAR_$_SDFileZipper._placeholderFiles
_OBJC_IVAR_$_SDFileZipper._compressionEngine
_OBJC_IVAR_$_SDFileZipper._fileCount
_OBJC_IVAR_$_SDFileZipper._totalBytes
_OBJC_IVAR_$_SDFileZipper._timeStarted
_OBJC_IVAR_$_SDFileZipper._lastProgress
_OBJC_IVAR_$_SDFileZipper._lastBytesCopied
_OBJC_IVAR_$_SDFileZipper._totalBytesCopied
_OBJC_IVAR_$_SDFileZipper._topLevelFiles
_OBJC_IVAR_$_SDFileZipper._monitor
_OBJC_IVAR_$_SDFileZipper._delegate
_OBJC_IVAR_$_SDIconCacher._bytesWritten
_OBJC_IVAR_$_SDIconCacher._readStream
_OBJC_IVAR_$_SDIconCacher._writeStream
_OBJC_IVAR_$_SDIconCacher._iconData
_OBJC_IVAR_$_SDIconCacher._iconHash
_OBJC_IVAR_$_SDIconCacher._delegate
_OBJC_IVAR_$_SDIconCacher._netService
_OBJC_IVAR_$_SDActivityPayloadManager._restrictionsDisabled
_OBJC_IVAR_$_SDActivityPayloadManager._advertiser
_OBJC_IVAR_$_SDActivityPayloadManager._scanner
_OBJC_IVAR_$_SDActivityPayloadManager._cachedActivityPayloads
_OBJC_IVAR_$_SDActivityPayloadManager._messageIdentifierToKeyRequestRecords
_OBJC_IVAR_$_SDActivityPayloadManager._messageIdentifierToReplyRecords
_OBJC_IVAR_$_SDActivityPayloadManager._messageIdentifierToRequestRecords
_OBJC_IVAR_$_SDActivityPayloadManager._encryptionService
_OBJC_IVAR_$_SDActivityPayloadManager._activityService
_OBJC_IVAR_$_SDActivityPayloadManager._persistedKeyRequests
_OBJC_IVAR_$_SDManagedBrowser._servers
_OBJC_IVAR_$_SDManagedBrowser._managed
_OBJC_IVAR_$_SDManagedBrowser._clientCount
_OBJC_IVAR_$_SDManagedBrowser._sendNotification
_OBJC_IVAR_$_SDAirDropNCManager._incomingTransferSound
_OBJC_IVAR_$_SDAirDropNCManager._recordIDToTransferDatas
_OBJC_IVAR_$_SDAirDropNCManager._recordIDToNotifications
_OBJC_IVAR_$_SDAirDropNCManager._userNotificationCenter
_OBJC_IVAR_$_SDAirDropNCManager._delegate
_OBJC_IVAR_$_SDActivityScanner._monitor
_OBJC_IVAR_$_SDActivityScanner._versionByte
_OBJC_IVAR_$_SDActivityScanner._scanningEnabled
_OBJC_IVAR_$_SDActivityScanner._deviceIdentifierToDeviceRecord
_OBJC_IVAR_$_SDActivityScanner._deviceIdentifierToLostDeviceTimers
_OBJC_IVAR_$_SDActivityScanner._continuity
_OBJC_IVAR_$_SDActivityScanner._stopScanLostDeviceTimer
_OBJC_IVAR_$_SDActivityScanner._remoteConnection
_OBJC_IVAR_$_SDNetworkBrowser._mode
_OBJC_IVAR_$_SDNetworkBrowser._kind
_OBJC_IVAR_$_SDNetworkBrowser._bundleID
_OBJC_IVAR_$_SDNetworkBrowser._rootNode
_OBJC_IVAR_$_SDNetworkBrowser._nodeBrowsers
_OBJC_IVAR_$_SDNetworkBrowser._delegate
_OBJC_IVAR_$_SDNetworkBrowser._objectKey
_OBJC_IVAR_$_SDNetworkBrowser._boostMessage
_OBJC_IVAR_$_SDNetworkBrowser._connection
_OBJC_IVAR_$_SDActivityDeviceRecord._device
_OBJC_IVAR_$_SDActivityDeviceRecord._lastReceivedAdvertisementDate
_OBJC_IVAR_$_SDActivityDeviceRecord._lastRawAdvertisementData
_OBJC_IVAR_$_SDActivityDeviceRecord._disableDuplicateFilterOnce
_OBJC_IVAR_$_SDActivityDeviceRecord._lastAdvertisementData
_OBJC_IVAR_$_SDActivityDeviceRecord._deviceTracked
_OBJC_IVAR_$_SDWormholeController._started
_OBJC_IVAR_$_SDWormholeController._properties
_OBJC_IVAR_$_SDWormholeController._monitor
_OBJC_IVAR_$_SDWormholeController._delegate
_OBJC_IVAR_$_SharingDaemon._listener
_OBJC_IVAR_$_SharingDaemon._hotspotBrowser
_OBJC_IVAR_$_SharingDaemon._airdropManager
_OBJC_IVAR_$_SharingDaemon._activityScanner
_OBJC_IVAR_$_SharingDaemon._payloadManager
_OBJC_IVAR_$_SharingDaemon._activityAdvertiser
_OBJC_IVAR_$_SharingDaemon._activeObjects
_OBJC_IVAR_$_SharingDaemon._exportedOperations
_OBJC_IVAR_$_SharingDaemon._encryptionManager
_OBJC_IVAR_$_SDNetworkEjecter._flags
_OBJC_IVAR_$_SDNetworkEjecter._protocol
_OBJC_IVAR_$_SDNetworkEjecter._mountedCount
_OBJC_IVAR_$_SDNetworkEjecter._ejectedCount
_OBJC_IVAR_$_SDNetworkEjecter._node
_OBJC_IVAR_$_SDNetworkEjecter._delegate
_OBJC_IVAR_$_SDNetworkOperation._kind
_OBJC_IVAR_$_SDNetworkOperation._operation
_OBJC_IVAR_$_SDNetworkOperation._connection
_OBJC_IVAR_$_SDNetworkOperation._connectionScheduled
_OBJC_IVAR_$_SDNetworkOperation._activities
_OBJC_IVAR_$_SDNetworkOperation._properties
_OBJC_IVAR_$_SDNetworkOperation._delegate
_OBJC_IVAR_$_SDNetworkOperation._objectKey
_OBJC_IVAR_$_SDNetworkOperation._boostMessage
_OBJC_IVAR_$_SDHotspotBrowser._IDHash
_OBJC_IVAR_$_SDHotspotBrowser._altDSID
_OBJC_IVAR_$_SDHotspotBrowser._timeString
_OBJC_IVAR_$_SDHotspotBrowser._clientProxy
_OBJC_IVAR_$_SDHotspotBrowser._nextCrossoverPersistentTimer
_OBJC_IVAR_$_SDHotspotBrowser._shouldBeConsumerScanning
_OBJC_IVAR_$_SDHotspotBrowser._shouldBeAdvertisingRequest
_OBJC_IVAR_$_SDHotspotBrowser._shouldBeAdvertisingResponse
_OBJC_IVAR_$_SDHotspotBrowser._handlers
_OBJC_IVAR_$_SDHotspotBrowser._powerAssertionID
_OBJC_IVAR_$_SDHotspotBrowser._monitor
_OBJC_IVAR_$_SDHotspotBrowser._discoveredDevices
_OBJC_IVAR_$_SDHotspotBrowser._workQueue
_OBJC_IVAR_$_SDHotspotBrowser._tetheringManager
_OBJC_IVAR_$_SDHotspotBrowser._tetheringService
_OBJC_IVAR_$_SDHotspotBrowser._retrieveTimers
_OBJC_IVAR_$_SDHotspotBrowser._targetAdvertising
_OBJC_IVAR_$_SDHotspotBrowser._targetScanning
_OBJC_IVAR_$_SDHotspotBrowser._sourceAdvertising
_OBJC_IVAR_$_SDHotspotBrowser._sourceScanning
_OBJC_IVAR_$_SDHotspotBrowser._deviceData
_OBJC_IVAR_$_SDHotspotBrowser._hasAppleID
_OBJC_IVAR_$_SDHotspotBrowser._nextDayTimeOffset
_OBJC_IVAR_$_SDHotspotBrowser._advertiseResponseTimer
_OBJC_IVAR_$_SDNetworkResolver._flags
_OBJC_IVAR_$_SDNetworkResolver._session
_OBJC_IVAR_$_SDNetworkResolver._protocol
_OBJC_IVAR_$_SDNetworkResolver._resolver
_OBJC_IVAR_$_SDNetworkResolver._mountedCount
_OBJC_IVAR_$_SDNetworkResolver._ejectedCount
_OBJC_IVAR_$_SDNetworkResolver._node
_OBJC_IVAR_$_SDNetworkResolver._delegate
_OBJC_IVAR_$_SDNodeBrowser._mode
_OBJC_IVAR_$_SDNodeBrowser._kind
_OBJC_IVAR_$_SDNodeBrowser._timer
_OBJC_IVAR_$_SDNodeBrowser._flags
_OBJC_IVAR_$_SDNodeBrowser._bundleID
_OBJC_IVAR_$_SDNodeBrowser._protocol
_OBJC_IVAR_$_SDNodeBrowser._odiskDomains
_OBJC_IVAR_$_SDNodeBrowser._airDropDomains
_OBJC_IVAR_$_SDNodeBrowser._bonjourDomains
_OBJC_IVAR_$_SDNodeBrowser._autofsBrowser
_OBJC_IVAR_$_SDNodeBrowser._domainBrowser
_OBJC_IVAR_$_SDNodeBrowser._managedBrowser
_OBJC_IVAR_$_SDNodeBrowser._workgroupBrowser
_OBJC_IVAR_$_SDNodeBrowser._connectedBrowser
_OBJC_IVAR_$_SDNodeBrowser._sharePointBrowser
_OBJC_IVAR_$_SDNodeBrowser._managedURLTable
_OBJC_IVAR_$_SDNodeBrowser._commentHashTable
_OBJC_IVAR_$_SDNodeBrowser._combineWorkgroups
_OBJC_IVAR_$_SDNodeBrowser._windowsWorkgroups
_OBJC_IVAR_$_SDNodeBrowser._error
_OBJC_IVAR_$_SDNodeBrowser._queue
_OBJC_IVAR_$_SDNodeBrowser._parent
_OBJC_IVAR_$_SDNodeBrowser._monitor
_OBJC_IVAR_$_SDNodeBrowser._protocols
_OBJC_IVAR_$_SDNodeBrowser._delegate
_OBJC_IVAR_$_SDRemoteDisc._url
_OBJC_IVAR_$_SDRemoteDisc._askDevice
_OBJC_IVAR_$_SDRemoteDisc._hostName
_OBJC_IVAR_$_SDRemoteDisc._readStream
_OBJC_IVAR_$_SDRemoteDisc._resolver
_OBJC_IVAR_$_SDRemoteDisc._askID
_OBJC_IVAR_$_SDRemoteDisc._askToken
_OBJC_IVAR_$_SDRemoteDisc._askStatus
_OBJC_IVAR_$_SDRemoteDisc._portNumber
_OBJC_IVAR_$_SDRemoteDisc._pollingTimer
_OBJC_IVAR_$_SDRemoteDisc._responseData
_OBJC_IVAR_$_SDRemoteDisc._delegate
_OBJC_IVAR_$_SDCompanionStream._authorData
_OBJC_IVAR_$_SDCompanionStream._streamHandler
_OBJC_IVAR_$_SDCompanionStream._initiator
_OBJC_IVAR_$_SDCompanionStream._shouldStop
_OBJC_IVAR_$_SDCompanionStream._clientSent
_OBJC_IVAR_$_SDCompanionStream._identifier
_OBJC_IVAR_$_SDCompanionStream._clientReceived
_OBJC_IVAR_$_SDCompanionStream._netServiceBrowser
_OBJC_IVAR_$_SDCompanionStream._networkBufferSpaceAvailable
_OBJC_IVAR_$_SDCompanionStream._clientStreamData
_OBJC_IVAR_$_SDCompanionStream._networkStreamData
_OBJC_IVAR_$_SDCompanionStream._readFromClient
_OBJC_IVAR_$_SDCompanionStream._wroteToClient
_OBJC_IVAR_$_SDCompanionStream._clientInputStream
_OBJC_IVAR_$_SDCompanionStream._clientOutputStream
_OBJC_IVAR_$_SDCompanionStream._delegate
_OBJC_IVAR_$_SDCompanionStream._streamsRequestHandler
_OBJC_IVAR_$_SDCompanionStream._fileHandle
_OBJC_IVAR_$_SDCompanionStream._writeQueue
_OBJC_IVAR_$_SDCompanionStream._readQueue
_OBJC_IVAR_$_SDServerBrowser._mode
_OBJC_IVAR_$_SDServerBrowser._odiskBrowsers
_OBJC_IVAR_$_SDServerBrowser._bonjourBrowsers
_OBJC_IVAR_$_SDServerBrowser._windowsBrowsers
_OBJC_IVAR_$_SDServerBrowser._airDropBrowsers
_OBJC_IVAR_$_SDAirDropReceiveManager._listener
_OBJC_IVAR_$_SDAirDropReceiveManager._networkOperations
_OBJC_IVAR_$_SDAirDropReceiveManager._ncManager
_OBJC_IVAR_$_TXTQuery._recordData
_OBJC_IVAR_$_TXTQuery._service
_OBJC_IVAR_$_TXTQuery._networkProtocol
_OBJC_IVAR_$_TXTQuery._browser
_OBJC_IVAR_$_SDSharePointBrowser._flags
_OBJC_IVAR_$_SDSharePointBrowser._protocol
_OBJC_IVAR_$_SDSharePointBrowser._authType
_OBJC_IVAR_$_SDSharePointBrowser._resolver
_OBJC_IVAR_$_SDSharePointBrowser._userName
_OBJC_IVAR_$_SDSharePointBrowser._hostName
_OBJC_IVAR_$_SDSharePointBrowser._portNumber
_OBJC_IVAR_$_SDSharePointBrowser._remoteDisc
_OBJC_IVAR_$_SDSharePointBrowser._serverName
_OBJC_IVAR_$_SDSharePointBrowser._neighborhood
_OBJC_IVAR_$_SDSharePointBrowser._typeIdentifier
_OBJC_IVAR_$_SDSharePointBrowser._askToken
_OBJC_IVAR_$_SDSharePointBrowser._askStatus
_OBJC_IVAR_$_SDSharePointBrowser._askDevice
_OBJC_IVAR_$_SDSharePointBrowser._protocols
_OBJC_IVAR_$_SDSharePointBrowser._serverURL
_OBJC_IVAR_$_SDSharePointBrowser._session
_OBJC_IVAR_$_SDSharePointBrowser._connection
_OBJC_IVAR_$_SDSharePointBrowser._queries
_OBJC_IVAR_$_SDSharePointBrowser._diskFlags
_OBJC_IVAR_$_SDSharePointBrowser._changeCount
_OBJC_IVAR_$_SDSharePointBrowser._sharePoints
_OBJC_IVAR_$_SDSharePointBrowser._fileShares
_OBJC_IVAR_$_SDSharePointBrowser._printerShares
_OBJC_IVAR_$_SDSharePointBrowser._destroyTimer
_OBJC_IVAR_$_SDSharePointBrowser._resolveService
_OBJC_IVAR_$_SDSharePointBrowser._passwordOnly
_OBJC_IVAR_$_SDSharePointBrowser._shouldNotify
_OBJC_IVAR_$_SDSharePointBrowser._askFirst
_OBJC_IVAR_$_SDSharePointBrowser._sharesMounted
_OBJC_IVAR_$_SDSharePointBrowser._error
_OBJC_IVAR_$_SDSharePointBrowser._mountedVolumes
_OBJC_IVAR_$_SDSharePointBrowser._monitor
_OBJC_IVAR_$_SDSharePointBrowser._connectionState
_OBJC_IVAR_$_SDSharePointBrowser._delegate
_OBJC_IVAR_$_SDStatusMonitor._myIcon
_OBJC_IVAR_$_SDStatusMonitor._myFirstName
_OBJC_IVAR_$_SDStatusMonitor._myLastName
_OBJC_IVAR_$_SDStatusMonitor._myIconHash
_OBJC_IVAR_$_SDStatusMonitor._workgroup
_OBJC_IVAR_$_SDStatusMonitor._localHostName
_OBJC_IVAR_$_SDStatusMonitor._btmmDomain
_OBJC_IVAR_$_SDStatusMonitor._btmmDomains
_OBJC_IVAR_$_SDStatusMonitor._consoleUser
_OBJC_IVAR_$_SDStatusMonitor._computerName
_OBJC_IVAR_$_SDStatusMonitor._bonjourName
_OBJC_IVAR_$_SDStatusMonitor._netbiosName
_OBJC_IVAR_$_SDStatusMonitor._myEmailHashes
_OBJC_IVAR_$_SDStatusMonitor._myPhoneHashes
_OBJC_IVAR_$_SDStatusMonitor._longHashes
_OBJC_IVAR_$_SDStatusMonitor._serverNames
_OBJC_IVAR_$_SDStatusMonitor._identities
_OBJC_IVAR_$_SDStatusMonitor._mountPoints
_OBJC_IVAR_$_SDStatusMonitor._deviceUIUnlocked
_OBJC_IVAR_$_SDStatusMonitor._deviceKeyBagUnlocked
_OBJC_IVAR_$_SDStatusMonitor._deviceKeyBagState
_OBJC_IVAR_$_SDStatusMonitor._discoverableMode
_OBJC_IVAR_$_SDStatusMonitor._deviceSupportsWAPI
_OBJC_IVAR_$_SDStatusMonitor._legacyModeEnabled
_OBJC_IVAR_$_SDStatusMonitor._shortHashes
_OBJC_IVAR_$_SDStatusMonitor._finderServer
_OBJC_IVAR_$_SDStatusMonitor._controlCenterVisible
_OBJC_IVAR_$_SDStatusMonitor._handoffVisible
_OBJC_IVAR_$_SDStatusMonitor._computerToComputer
_OBJC_IVAR_$_SDStatusMonitor._wirelessAccessPoint
_OBJC_IVAR_$_SDStatusMonitor._odisksMountPoints
_OBJC_IVAR_$_SDStatusMonitor._dynamicStoreSource
_OBJC_IVAR_$_SDStatusMonitor._wirelessRef
_OBJC_IVAR_$_SDStatusMonitor._autoFSSource
_OBJC_IVAR_$_SDStatusMonitor._smbPreferences
_OBJC_IVAR_$_SDStatusMonitor._notifyPortRef
_OBJC_IVAR_$_SDStatusMonitor._nameMonitor
_OBJC_IVAR_$_SDStatusMonitor._myAppleID
_OBJC_IVAR_$_SDStatusMonitor._myEmail
_OBJC_IVAR_$_SDStatusMonitor._addressBook
_OBJC_IVAR_$_SDStatusMonitor._browserPrefs
_OBJC_IVAR_$_SDStatusMonitor._rootPort
_OBJC_IVAR_$_SDStatusMonitor._clientCount
_OBJC_IVAR_$_SDStatusMonitor._wormholeCount
_OBJC_IVAR_$_SDStatusMonitor._consoleUserID
_OBJC_IVAR_$_SDStatusMonitor._uiLockStatusToken
_OBJC_IVAR_$_SDStatusMonitor._keyBagUnlockToken
_OBJC_IVAR_$_SDStatusMonitor._backlightLevelToken
_OBJC_IVAR_$_SDStatusMonitor._springBoardEventToken
_OBJC_IVAR_$_SDStatusMonitor._airDropPublished
_OBJC_IVAR_$_SDStatusMonitor._deviceIsHighPriority
_OBJC_IVAR_$_SDStatusMonitor._deviceWasUnlockedOnce
_OBJC_IVAR_$_SDStatusMonitor._notifierObject
_OBJC_IVAR_$_SDStatusMonitor._screenOn
_OBJC_IVAR_$_SDStatusMonitor._backlightOn
_OBJC_IVAR_$_SDStatusMonitor._doNotDisturbEnabled
_OBJC_IVAR_$_SDStatusMonitor._finderAirDropEnabled
_OBJC_IVAR_$_SDWindowsBrowser._browser
_OBJC_IVAR_$_SDWindowsBrowser._workgroup
_OBJC_IVAR_$_SDWindowsBrowser._delegate
_OBJC_IVAR_$_SDWorkgroupBrowser._browser
_OBJC_IVAR_$_SDWorkgroupBrowser._clientCount
_OBJC_IVAR_$_SDWormholeClient._zipper
_OBJC_IVAR_$_SDWormholeClient._items
_OBJC_IVAR_$_SDWormholeClient._clientPid
_OBJC_IVAR_$_SDWormholeClient._startTime
_OBJC_IVAR_$_SDWormholeClient._failCount
_OBJC_IVAR_$_SDWormholeClient._askTask
_OBJC_IVAR_$_SDWormholeClient._progress
_OBJC_IVAR_$_SDWormholeClient._resolver
_OBJC_IVAR_$_SDWormholeClient._delegate
_OBJC_IVAR_$_SDWormholeClient._assertionID
_OBJC_IVAR_$_SDWormholeClient._serverURL
_OBJC_IVAR_$_SDWormholeClient._identity
_OBJC_IVAR_$_SDWormholeClient._fileIcon
_OBJC_IVAR_$_SDWormholeClient._uploadTask
_OBJC_IVAR_$_SDWormholeClient._p2pRetained
_OBJC_IVAR_$_SDWormholeClient._personAdded
_OBJC_IVAR_$_SDWormholeClient._askResponse
_OBJC_IVAR_$_SDWormholeClient._discoverTask
_OBJC_IVAR_$_SDWormholeClient._serverTrust
_OBJC_IVAR_$_SDWormholeClient._connectionKey
_OBJC_IVAR_$_SDWormholeClient._zipperFinished
_OBJC_IVAR_$_SDWormholeClient._uploadFinished
_OBJC_IVAR_$_SDWormholeClient._queueSuspended
_OBJC_IVAR_$_SDWormholeClient._providedStream
_OBJC_IVAR_$_SDWormholeClient._clientBundleID
_OBJC_IVAR_$_SDWormholeClient._discover
_OBJC_IVAR_$_SDWormholeClient._smallFileIcon
_OBJC_IVAR_$_SDWormholeClient._uploadResponse
_OBJC_IVAR_$_SDWormholeClient._compressionType
_OBJC_IVAR_$_SDWormholeClient._discoverResponse
_OBJC_IVAR_$_SDWormholeClient._transactionStarted
_OBJC_IVAR_$_SDWormholeClient._fileURLs
_OBJC_IVAR_$_SDWormholeClient._otherStuff
_OBJC_IVAR_$_SDWormholeClient._weblocURLs
_OBJC_IVAR_$_SDWormholeClient._receiverData
_OBJC_IVAR_$_SDWormholeClient._queue
_OBJC_IVAR_$_SDWormholeClient._properties
_OBJC_IVAR_$_SDWormholeClient._person
_OBJC_IVAR_$_SDWormholeClient._monitor
_OBJC_IVAR_$_SDWormholeClient._lastEvent
_OBJC_IVAR_$_SDWormholeClient._session
_OBJC_IVAR_$_SDActivityKey._keyData
_OBJC_IVAR_$_SDActivityKey._keyIdentifier
_OBJC_IVAR_$_SDActivityKey._dateCreated
_OBJC_IVAR_$_SDActivityKey._lastUsedCounter
_OBJC_IVAR_$_SDActivityKey._validKey
_OBJC_IVAR_$_SDActivityEncryptionManager._deviceIdentifierToDecryptionKey
_OBJC_IVAR_$_SDActivityEncryptionManager._shouldRefreshWrappingKey
_OBJC_IVAR_$_SDActivityEncryptionManager._wrappingKey
_OBJC_IVAR_$_SDActivityEncryptionManager._encryptionKey
_OBJC_IVAR_$_SDWormholeConnection._zipper
_OBJC_IVAR_$_SDWormholeConnection._person
_OBJC_IVAR_$_SDWormholeConnection._startTime
_OBJC_IVAR_$_SDWormholeConnection._progresses
_OBJC_IVAR_$_SDWormholeConnection._assertionID
_OBJC_IVAR_$_SDWormholeConnection._personAdded
_OBJC_IVAR_$_SDWormholeConnection._contactsOnly
_OBJC_IVAR_$_SDWormholeConnection._stopDeferred
_OBJC_IVAR_$_SDWormholeConnection._userAccepted
_OBJC_IVAR_$_SDWormholeConnection._senderTrusted
_OBJC_IVAR_$_SDWormholeConnection._delayedFinish
_OBJC_IVAR_$_SDWormholeConnection._queueSuspended
_OBJC_IVAR_$_SDWormholeConnection._endEncountered
_OBJC_IVAR_$_SDWormholeConnection._connectionClosed
_OBJC_IVAR_$_SDWormholeConnection._transactionStarted
_OBJC_IVAR_$_SDWormholeConnection._askRequest
_OBJC_IVAR_$_SDWormholeConnection._readStream
_OBJC_IVAR_$_SDWormholeConnection._destination
_OBJC_IVAR_$_SDWormholeConnection._clientTrust
_OBJC_IVAR_$_SDWormholeConnection._uploadRequest
_OBJC_IVAR_$_SDWormholeConnection._requestBuffer
_OBJC_IVAR_$_SDWormholeConnection._discoverRequest
_OBJC_IVAR_$_SDWormholeConnection._queue
_OBJC_IVAR_$_SDWormholeConnection._requestData
_OBJC_IVAR_$_SDWormholeConnection._properties
_OBJC_IVAR_$_SDWormholeConnection._monitor
_OBJC_IVAR_$_SDWormholeConnection._lastEvent
_OBJC_IVAR_$_SDWormholeConnection._askSemaphore
_OBJC_IVAR_$_SDWormholeConnection._connection
_OBJC_IVAR_$_SDWormholeConnection._delegate
_OBJC_IVAR_$_SDWormholeConnection._sessionID
_OBJC_IVAR_$_SDWormholeInformation._started
_OBJC_IVAR_$_SDWormholeInformation._properties
_OBJC_IVAR_$_SDWormholeInformation._monitor
_OBJC_IVAR_$_SDWormholeInformation._delegate
_OBJC_IVAR_$_SDWormholeServer._server
_OBJC_IVAR_$_SDWormholeServer._startTime
_OBJC_IVAR_$_SDWormholeServer._identity
_OBJC_IVAR_$_SDWormholeServer._proximity
_OBJC_IVAR_$_SDWormholeServer._awdlTimer
_OBJC_IVAR_$_SDWormholeServer._publisher
_OBJC_IVAR_$_SDWormholeServer._portNumber
_OBJC_IVAR_$_SDWormholeServer._information
_OBJC_IVAR_$_SDWormholeServer._contactsOnly
_OBJC_IVAR_$_SDWormholeServer._bluetoothTimer
_OBJC_IVAR_$_SDWormholeServer._queue
_OBJC_IVAR_$_SDWormholeServer._properties
_OBJC_IVAR_$_SDWormholeServer._monitor
_OBJC_IVAR_$_SDWormholeServer._screenOn
_OBJC_IVAR_$_SDWormholeServer._userEventDetected
_OBJC_IVAR_$_SDWormholeServer._discoverableMode
_OBJC_IVAR_$_SDWormholeServer._connections
_OBJC_IVAR_$_SDWormholeServer._clientBundleID
_OBJC_IVAR_$_SDWormholeServer._clientPid
_OBJC_IVAR_$_SDWormholeServer._delegate
_OBJC_IVAR_$_SDWormholeStatus._started
_OBJC_IVAR_$_SDWormholeStatus._properties
_OBJC_IVAR_$_SDWormholeStatus._delegate
_OBJC_IVAR_$_SDAdaptiveCompressor._compressible
_OBJC_IVAR_$_SDAdaptiveCompressor._totalBytesSent
_OBJC_IVAR_$_SDAdaptiveCompressor._totalNetworkDelay
_OBJC_IVAR_$_SDAdaptiveCompressor._numBlocksProcessed
_OBJC_IVAR_$_SDAdaptiveCompressor._numBlocksCompressed
_OBJC_IVAR_$_SDAdaptiveCompressor._totalBytesProcessed
_OBJC_IVAR_$_SDAdaptiveCompressor._lastCompressionRatio
_OBJC_IVAR_$_SDAdaptiveCompressor._totalCompressionTime
_OBJC_IVAR_$_SDAdaptiveCompressor._totalCompressedOutput
_OBJC_IVAR_$_SDAdaptiveCompressor._keepingUpWithNetwork
_OBJC_IVAR_$_SDAdaptiveCompressor._readStream
_OBJC_IVAR_$_SDAdaptiveCompressor._writeStream
_OBJC_IVAR_$_SDAdaptiveCompressor._adjustmentQueue
_OBJC_CLASS_$_SDActivityRequestRecord
_OBJC_METACLASS_$_SDActivityRequestRecord
_OBJC_CLASS_$_SDActivityEncryptionKeyRequestRecord
_OBJC_METACLASS_$_SDActivityEncryptionKeyRequestRecord
_OBJC_CLASS_$_SDActivityPayloadRequestRecord
_OBJC_METACLASS_$_SDActivityPayloadRequestRecord
_OBJC_METACLASS_$_SDActivityPayloadReplyRecord
_OBJC_CLASS_$_SDActivityPayloadReplyRecord
_OBJC_CLASS_$_SDAirDropTransferDataOSX
_OBJC_METACLASS_$_SDAirDropTransferDataOSX
_OBJC_CLASS_$_SDActivityConnection
_OBJC_METACLASS_$_SDActivityConnection
_OBJC_METACLASS_$_SDCompanionCommon
_OBJC_CLASS_$_SDCompanionCommon
_OBJC_CLASS_$_SDCompanionBrowser
_OBJC_METACLASS_$_SDCompanionBrowser
_OBJC_CLASS_$_SDFileLogger
_OBJC_METACLASS_$_SDFileLogger
_OBJC_CLASS_$_SDCompanionConnection
_OBJC_METACLASS_$_SDCompanionConnection
_OBJC_CLASS_$_SDStreamManager
_OBJC_METACLASS_$_SDStreamManager
_OBJC_CLASS_$_SDInformationConnection
_OBJC_METACLASS_$_SDInformationConnection
_OBJC_CLASS_$_SDServiceManager
_OBJC_METACLASS_$_SDServiceManager
_OBJC_CLASS_$_SDStreamHandler
_OBJC_METACLASS_$_SDStreamHandler
_OBJC_CLASS_$_SDActivityController
_OBJC_METACLASS_$_SDActivityController
_OBJC_CLASS_$_SDConnectionManager
_OBJC_METACLASS_$_SDConnectionManager
_OBJC_CLASS_$_SDXPCSession
_OBJC_METACLASS_$_SDXPCSession
_OBJC_CLASS_$_SDAirDropListener
_OBJC_METACLASS_$_SDAirDropListener
_OBJC_CLASS_$_SDAutoFSBrowser
_OBJC_METACLASS_$_SDAutoFSBrowser
_OBJC_CLASS_$_SDBonjourBrowser
_OBJC_METACLASS_$_SDBonjourBrowser
_OBJC_CLASS_$_SDBonjourPublisher
_OBJC_METACLASS_$_SDBonjourPublisher
_OBJC_CLASS_$_SDActivityAdvertiser
_OBJC_METACLASS_$_SDActivityAdvertiser
_OBJC_CLASS_$_SDBonjourResolver
_OBJC_METACLASS_$_SDBonjourResolver
_OBJC_CLASS_$_SDConnectedBrowser
_OBJC_METACLASS_$_SDConnectedBrowser
_OBJC_CLASS_$_SDDomainBrowser
_OBJC_METACLASS_$_SDDomainBrowser
_OBJC_CLASS_$_SDFileZipper
_OBJC_METACLASS_$_SDFileZipper
_OBJC_CLASS_$_SDIconCacher
_OBJC_METACLASS_$_SDIconCacher
_OBJC_CLASS_$_SDActivityPayloadManager
_OBJC_METACLASS_$_SDActivityPayloadManager
_OBJC_CLASS_$_SDManagedBrowser
_OBJC_METACLASS_$_SDManagedBrowser
_OBJC_CLASS_$_SDAirDropNCManager
_OBJC_METACLASS_$_SDAirDropNCManager
_OBJC_CLASS_$_SDActivityScanner
_OBJC_METACLASS_$_SDActivityScanner
_OBJC_CLASS_$_SDNetworkBrowser
_OBJC_METACLASS_$_SDNetworkBrowser
_OBJC_CLASS_$_SDActivityDeviceRecord
_OBJC_METACLASS_$_SDActivityDeviceRecord
_OBJC_CLASS_$_SDWormholeController
_OBJC_METACLASS_$_SDWormholeController
_OBJC_CLASS_$_SharingDaemon
_OBJC_METACLASS_$_SharingDaemon
_OBJC_CLASS_$_SDNetworkEjecter
_OBJC_METACLASS_$_SDNetworkEjecter
_OBJC_CLASS_$_SDNetworkOperation
_OBJC_METACLASS_$_SDNetworkOperation
_OBJC_CLASS_$_SDHotspotBrowser
_OBJC_METACLASS_$_SDHotspotBrowser
_OBJC_CLASS_$_SDNetworkResolver
_OBJC_METACLASS_$_SDNetworkResolver
_OBJC_CLASS_$_SDNodeBrowser
_OBJC_METACLASS_$_SDNodeBrowser
_OBJC_CLASS_$_SDRemoteDisc
_OBJC_METACLASS_$_SDRemoteDisc
_OBJC_CLASS_$_SDCompanionStream
_OBJC_METACLASS_$_SDCompanionStream
_OBJC_CLASS_$_SDServerBrowser
_OBJC_METACLASS_$_SDServerBrowser
_OBJC_CLASS_$_SDAirDropReceiveManager
_OBJC_METACLASS_$_SDAirDropReceiveManager
_OBJC_METACLASS_$_TXTQuery
_OBJC_CLASS_$_TXTQuery
_OBJC_CLASS_$_SDSharePointBrowser
_OBJC_METACLASS_$_SDSharePointBrowser
_OBJC_CLASS_$_SDStatusMonitor
_OBJC_METACLASS_$_SDStatusMonitor
_OBJC_CLASS_$_SDWindowsBrowser
_OBJC_METACLASS_$_SDWindowsBrowser
_OBJC_CLASS_$_SDWorkgroupBrowser
_OBJC_METACLASS_$_SDWorkgroupBrowser
_OBJC_CLASS_$_SDWormholeClient
_OBJC_METACLASS_$_SDWormholeClient
_OBJC_CLASS_$_SDActivityKey
_OBJC_METACLASS_$_SDActivityKey
_OBJC_METACLASS_$_SDActivityEncryptionKey
_OBJC_CLASS_$_SDActivityEncryptionKey
_OBJC_METACLASS_$_SDActivityDecryptionKey
_OBJC_CLASS_$_SDActivityDecryptionKey
_OBJC_CLASS_$_SDActivityEncryptionManager
_OBJC_METACLASS_$_SDActivityEncryptionManager
_OBJC_CLASS_$_SDWormholeConnection
_OBJC_METACLASS_$_SDWormholeConnection
_OBJC_CLASS_$_SDWormholeInformation
_OBJC_METACLASS_$_SDWormholeInformation
_OBJC_CLASS_$_SDWormholeServer
_OBJC_METACLASS_$_SDWormholeServer
_OBJC_CLASS_$_SDWormholeStatus
_OBJC_METACLASS_$_SDWormholeStatus
_OBJC_CLASS_$_SDAdaptiveCompressor
_OBJC_METACLASS_$_SDAdaptiveCompressor
_gP2PLock
_gAWDLLock
_gSessionLock
__lock
_gPeerInfoLock
_gConnectionLock
+[SDFileLogger sharedFileLogger].sLogger
+[SDFileLogger sharedFileLogger].onceToken
+[SDStreamManager sharedManager].companionPublisher
+[SDStreamManager sharedManager].onceToken
+[SDConnectionManager sharedManager].manager
+[SDConnectionManager sharedManager].onceToken
+[SDXPCSession sharedSession].session
+[SDXPCSession sharedSession].onceToken
+[SDAutoFSBrowser sharedBrowser].once
+[SDAutoFSBrowser sharedBrowser].sharedBrowser
+[SDActivityAdvertiser sharedAdvertiser].advertiser
+[SDActivityAdvertiser sharedAdvertiser].onceToken
+[SDConnectedBrowser sharedBrowser].once
+[SDConnectedBrowser sharedBrowser].sharedBrowser
-[SDConnectedBrowser getDispatchQueue].once
-[SDConnectedBrowser getDispatchQueue].queue
+[SDDomainBrowser sharedBrowser].once
+[SDDomainBrowser sharedBrowser].sharedBrowser
+[SDActivityPayloadManager sharedPayloadManager].payloadManager
+[SDActivityPayloadManager sharedPayloadManager].onceToken
+[SDManagedBrowser sharedBrowser].once
+[SDManagedBrowser sharedBrowser].sharedBrowser
+[SDActivityScanner sharedScanner].scanner
+[SDActivityScanner sharedScanner].onceToken
+[SharingDaemon sharedDaemon].once
+[SharingDaemon sharedDaemon].sharedDaemon
+[SDHotspotBrowser sharedBrowser].browser
+[SDHotspotBrowser sharedBrowser].onceToken
_gNetAuthSessions
_gLogger
_disableAWDL.disableAWDL
_gDateFormatter
_setupLogging.onceToken
_fileLogLevelIsEnabled.hasAppleInternal
_fileLogLevelIsEnabled.onceToken
-[SDNodeBrowser appendAllNode:].node
+[SDServerBrowser sharedBrowser].once
+[SDServerBrowser sharedBrowser].sharedBrowser
+[SDStatusMonitor sharedMonitor].once
+[SDStatusMonitor sharedMonitor].sharedMonitor
-[SDStatusMonitor deviceIsHighPriority].onceToken
+[SDWorkgroupBrowser sharedBrowser].once
+[SDWorkgroupBrowser sharedBrowser].sharedBrowser
_gPeerInfo
_airDropQueue.once
_airDropQueue.queue
_gConnections
+[SDActivityEncryptionManager sharedEncryptionManager].keyManager
+[SDActivityEncryptionManager sharedEncryptionManager].onceToken
_gCurrentServer
_getSharingFrameworkBundle.sOnce
_getSharingFrameworkBundle.gBundleRef
_deviceSupportsAWDL.onceToken
_deviceSupportsAWDL.supportsAWDL
_browseAllInterfacesEnabled.enabled
_enableSimulator.enableSimulator
_directIPEnabled.enabled
_debugLoggingEnabled.enabled
_gArrayOnce
_gOrderedTypes
_gOrderedProtocols
_gDictionaryOnce
_gTypeForProtocol
_gProtocolForType
_gKindMapOnce
_gKindMap
_gOrderedKinds
_gStatusOperationCount
_gP2PCount
_SFCompanionAdvertiserStatus
_MMAOSSafariKeychainData
_gAppleIDAlertNotification
__mh_execute_header
_ABCopyArrayOfAllPeople
_ABGetMe
_ABGetSharedAddressBook
_ABMultiValueCopyPrimaryIdentifier
_ABMultiValueCopyValueAtIndex
_ABMultiValueCount
_ABMultiValueIndexForIdentifier
_ABPersonCopyImageData
_ABRecordCopyValue
_ABRemoveRecord
_ABSave
_Apple80211BindToInterface
_Apple80211Close
_Apple80211CopyValue
_Apple80211EventMonitoringHalt
_Apple80211EventMonitoringInit
_Apple80211GetIfListCopy
_Apple80211Open
_Apple80211StartMonitoringEvent
_BOMBomCommit
_BOMBomFree
_BOMBomInsertFSObject
_BOMBomNew
_BOMCopierCancelCopy
_BOMCopierCopyWithOptions
_BOMCopierFree
_BOMCopierNew
_BOMCopierSetCopyFileFinishedHandler
_BOMCopierSetCopyFileUpdateHandler
_BOMCopierSetFatalErrorHandler
_BOMCopierSetFatalFileErrorHandler
_BOMCopierSetFileConflictErrorHandler
_BOMCopierSetFileErrorHandler
_BOMCopierSetUserData
_BOMCopierUserData
_BOMFSObjectFree
_BOMFSObjectNewFromPath
_BOMFSObjectSetPathName
_B_PATHONLY
_CCHmac
_CC_SHA1
_CC_SHA256
_CFAbsoluteTimeGetCurrent
_CFArrayAppendValue
_CFArrayContainsValue
_CFArrayCreate
_CFArrayCreateMutable
_CFArrayCreateMutableCopy
_CFArrayGetCount
_CFArrayGetTypeID
_CFArrayGetValueAtIndex
_CFArrayGetValues
_CFArraySortValues
_CFBagAddValue
_CFBagContainsValue
_CFBagCreateMutable
_CFBagGetCount
_CFBagGetCountOfValue
_CFBagGetValues
_CFBagRemoveAllValues
_CFBagRemoveValue
_CFBagSetValue
_CFBooleanGetTypeID
_CFBooleanGetValue
_CFBundleCopyLocalizedString
_CFBundleCreate
_CFBundleGetBundleWithIdentifier
_CFCopyDescription
_CFDataCreate
_CFDataCreateMutable
_CFDataCreateMutableCopy
_CFDataGetBytePtr
_CFDataGetMutableBytePtr
_CFDataGetTypeID
_CFDateCreate
_CFDateFormatterCreate
_CFDateFormatterCreateStringWithAbsoluteTime
_CFDateFormatterSetFormat
_CFDictionaryContainsKey
_CFDictionaryCreate
_CFDictionaryCreateMutable
_CFDictionaryCreateMutableCopy
_CFDictionaryGetCount
_CFDictionaryGetKeysAndValues
_CFDictionaryGetTypeID
_CFDictionaryGetValue
_CFDictionaryRemoveAllValues
_CFDictionaryRemoveValue
_CFDictionarySetValue
_CFEqual
_CFErrorCopyUserInfo
_CFErrorGetCode
_CFErrorGetDomain
_CFErrorGetTypeID
_CFGetAllocator
_CFGetTypeID
_CFHTTPMessageCopyHeaderFieldValue
_CFHTTPMessageCreateRequest
_CFHTTPMessageGetResponseStatusCode
_CFHTTPMessageGetTypeID
_CFHTTPMessageSetBody
_CFHTTPMessageSetHeaderFieldValue
_CFLog
_CFNetServiceCancel
_CFNetServiceCreate
_CFNetServiceGetDomain
_CFNetServiceGetInfo
_CFNetServiceGetName
_CFNetServiceGetType
_CFNetServiceRegisterWithOptions
_CFNetServiceScheduleWithRunLoop
_CFNetServiceSetClient
_CFNetServiceSetInfo
_CFNetServiceSetTXTData
_CFNetServiceUnscheduleFromRunLoop
_CFNotificationCenterAddObserver
_CFNotificationCenterGetDarwinNotifyCenter
_CFNotificationCenterGetDistributedCenter
_CFNotificationCenterGetLocalCenter
_CFNotificationCenterPostNotification
_CFNotificationCenterPostNotificationWithOptions
_CFNotificationCenterRemoveObserver
_CFNumberCreate
_CFNumberGetTypeID
_CFNumberGetValue
_CFPhoneNumberCopyUnformattedInternationalRepresentation
_CFPhoneNumberCreate
_CFPreferencesAppSynchronize
_CFPreferencesCopyAppValue
_CFPreferencesCopyValue
_CFPreferencesSetValue
_CFPreferencesSynchronize
_CFPropertyListCreateData
_CFPropertyListCreateDeepCopy
_CFPropertyListCreateWithData
_CFPropertyListWrite
_CFReadStreamClose
_CFReadStreamCopyError
_CFReadStreamCopyProperty
_CFReadStreamCreateForHTTPRequest
_CFReadStreamCreateWithFile
_CFReadStreamGetStatus
_CFReadStreamOpen
_CFReadStreamRead
_CFReadStreamSetClient
_CFReadStreamSetDispatchQueue
_CFReadStreamSetProperty
_CFRelease
_CFRetain
_CFRunLoopAddSource
_CFRunLoopGetMain
_CFRunLoopRemoveSource
_CFRunLoopSourceInvalidate
_CFSetContainsValue
_CFSetCreate
_CFSetCreateMutable
_CFSetCreateMutableCopy
_CFSetGetCount
_CFSetGetValues
_CFSetSetValue
_CFStreamCreateBoundPair
_CFStreamCreatePairWithSocket
_CFStringAppend
_CFStringAppendFormat
_CFStringCompare
_CFStringCreateArrayBySeparatingStrings
_CFStringCreateCopy
_CFStringCreateExternalRepresentation
_CFStringCreateMutable
_CFStringCreateMutableCopy
_CFStringCreateWithBytes
_CFStringCreateWithCString
_CFStringCreateWithFormat
_CFStringCreateWithPascalString
_CFStringCreateWithSubstring
_CFStringFind
_CFStringFindAndReplace
_CFStringGetCString
_CFStringGetCStringPtr
_CFStringGetCharacterAtIndex
_CFStringGetIntValue
_CFStringGetLength
_CFStringGetMaximumSizeForEncoding
_CFStringGetTypeID
_CFStringHasPrefix
_CFStringHasSuffix
_CFStringLowercase
_CFStringTrim
_CFStringUppercase
_CFURLCopyAbsoluteURL
_CFURLCopyFileSystemPath
_CFURLCopyHostName
_CFURLCopyLastPathComponent
_CFURLCopyPath
_CFURLCopyResourcePropertyForKey
_CFURLCopyScheme
_CFURLCopyStrictPath
_CFURLCreateCopyAppendingPathComponent
_CFURLCreateCopyDeletingLastPathComponent
_CFURLCreateFilePathURL
_CFURLCreateFromFileSystemRepresentation
_CFURLCreateFromFileSystemRepresentationRelativeToBase
_CFURLCreateStringByAddingPercentEscapes
_CFURLCreateStringByReplacingPercentEscapes
_CFURLCreateWithFileSystemPath
_CFURLCreateWithFileSystemPathRelativeToBase
_CFURLCreateWithString
_CFURLEnumeratorCreateForDirectoryURL
_CFURLEnumeratorGetNextURL
_CFURLGetFileSystemRepresentation
_CFURLGetPortNumber
_CFURLGetString
_CFURLGetTypeID
_CFURLHasDirectoryPath
_CFURLRequestCreateHTTPRequest
_CFURLRequestCreateMutableCopy
_CFURLRequestSetHTTPHeaderFieldValue
_CFURLRequestSetProxySettings
_CFURLRequestSetShouldPipelineHTTP
_CFURLResponseCopyPeerAddress
_CFURLSetResourcePropertyForKey
_CFUserNotificationCreate
_CFUserNotificationCreateRunLoopSource
_CFWriteStreamClose
_CFWriteStreamCopyError
_CFWriteStreamCreateWithFile
_CFWriteStreamOpen
_CFWriteStreamSetClient
_CFWriteStreamSetDispatchQueue
_CFWriteStreamSetProperty
_CFWriteStreamWrite
_CGColorSpaceCreateDeviceRGB
_CGImageCreateCopyWithColorSpace
_CGImageCreateThumb
_CGImageDestinationAddImage
_CGImageDestinationCreateWithData
_CGImageDestinationFinalize
_CGImageGetHeight
_CGImageGetTypeID
_CGImageGetWidth
_CGImageSourceCreateImageAtIndex
_CGImageSourceCreateWithData
_CGImageSourceCreateWithURL
_CGImageSourceGetCount
_CGImageSourceGetType
_CGSMainConnectionID
_CGSSetConnectionProperty
_CSIdentityGetFullName
_CSIdentityGetImageData
_CSIdentityGetImageURL
_CSIdentityQueryCopyResults
_CSIdentityQueryCreateForName
_CSIdentityQueryExecuteAsynchronously
_CSIdentityQueryStop
_DADiskCreateFromVolumePath
_DADiskGetBSDName
_DASessionCreate
_DIHLDiskImageAttach
_DLCLogWithLevelV
_DLCShouldLogLevel
_DNSServiceBrowse
_DNSServiceConstructFullName
_DNSServiceCreateConnection
_DNSServiceGetAddrInfo
_DNSServiceQueryRecord
_DNSServiceRefDeallocate
_DNSServiceRegister
_DNSServiceResolve
_DNSServiceSetDispatchQueue
_DeclineVolumeNotificationWithFlags
_IDSCopyForDevice
_IDSDefaultPairedDevice
_IDSSendMessageOptionActivityContinuationKey
_IDSSendMessageOptionExpectsPeerResponseKey
_IDSSendMessageOptionFireAndForgetKey
_IDSSendMessageOptionLocalDeliveryKey
_IDSSendMessageOptionNonWakingKey
_IDSSendMessageOptionPeerResponseIdentifierKey
_IDSSendMessageOptionTimeoutKey
_IDSSendMessageOptionUUIDKey
_IOAllowPowerChange
_IOBSDNameMatching
_IOBluetoothHostControllerPoweredOffNotification
_IOBluetoothHostControllerPoweredOnNotification
_IODeregisterForSystemPower
_IOIteratorNext
_IOMasterPort
_IONotificationPortDestroy
_IONotificationPortGetRunLoopSource
_IOObjectRelease
_IOPMAssertionCreateWithProperties
_IOPMAssertionRelease
_IORegisterForSystemPower
_IORegistryEntrySearchCFProperty
_IOServiceClose
_IOServiceGetMatchingServices
_LSSharedFileListAddObserver
_LSSharedFileListCopyProperty
_LSSharedFileListCopySnapshot
_LSSharedFileListCreate
_LSSharedFileListInsertItemURL
_LSSharedFileListItemCopyDisplayName
_LSSharedFileListItemCopyResolvedURL
_LSSharedFileListItemRemove
_LSSharedFileListRemoveObserver
_LSUserActivityIsForPairedDeviceOptionKey
_LSUserActivityIsHighPriorityOptionKey
_MDItemCreateWithURL
_MDItemSetAttribute
_MMAccountLoginReAuth
_MMCopyLoggedInAccount
_NACancelConnectToServerAsync
_NACloseSessionAsync
_NAConnectToServerAsync
_NAEnumerateSharesAsync
_NAMountAsync
_NAOpenSessionAsync
_NSDefaultRunLoopMode
_NSFileHandleOperationException
_NSFullUserName
_NSLocalizedDescriptionKey
_NSOSStatusErrorDomain
_NSPOSIXErrorDomain
_NSProgressEstimatedTimeRemainingKey
_NSRunLoopCommonModes
_NSSearchPathForDirectoriesInDomains
_NSSelectorFromString
_NSStringFromClass
_NSStringFromSelector
_NSURLAuthenticationMethodClientCertificate
_NSURLAuthenticationMethodServerTrust
_NSURLErrorDomain
_NSURLQuarantinePropertiesKey
_NSURLVolumeNameKey
_NSURLVolumeURLForRemountingKey
_NSUnderlyingErrorKey
_NSUserNotificationDefaultSoundName
_NSZeroSize
_OBJC_CLASS_$_ABAddressBook
_OBJC_CLASS_$_ABMonogramImageLoading
_OBJC_CLASS_$_ABMonogramOptions
_OBJC_CLASS_$_ACAccountStore
_OBJC_CLASS_$_CWWiFiClient
_OBJC_CLASS_$_IDSContinuity
_OBJC_CLASS_$_IDSProtobuf
_OBJC_CLASS_$_IDSService
_OBJC_CLASS_$_IOBluetoothHostController
_OBJC_CLASS_$_IOBluetoothPreferences
_OBJC_CLASS_$_LSApplicationWorkspace
_OBJC_CLASS_$_LSDocumentProxy
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSFileHandle
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNetService
_OBJC_CLASS_$_NSNetServiceBrowser
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperationQueue
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSProgress
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSScreen
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSSound
_OBJC_CLASS_$_NSStream
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTimeZone
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSURLCredential
_OBJC_CLASS_$_NSURLRequest
_OBJC_CLASS_$_NSURLSession
_OBJC_CLASS_$_NSURLSessionConfiguration
_OBJC_CLASS_$_NSUUID
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSUserNotification
_OBJC_CLASS_$_NSUserNotificationCenter
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSWorkspace
_OBJC_CLASS_$_NSXPCConnection
_OBJC_CLASS_$_NSXPCListener
_OBJC_CLASS_$_PCPersistentTimer
_OBJC_CLASS_$_SFActivityAdvertisement
_OBJC_CLASS_$_SFActivityAdvertiser
_OBJC_CLASS_$_SFAirDropDiscoveryController
_OBJC_CLASS_$_SFCompanionService
_OBJC_CLASS_$_SFCompanionXPCManager
_OBJC_CLASS_$_SFRemoteHotspotDevice
_OBJC_CLASS_$_SFRemoteHotspotInfo
_OBJC_CLASS_$_WPAWDL
_OBJC_EHTYPE_$_NSException
_OBJC_METACLASS_$_NSObject
_PNCopyBestGuessNormalizedNumberForCountry
_RequestVolumeNotificationWithFlags
_SCDynamicStoreCopyComputerName
_SCDynamicStoreCopyConsoleUser
_SCDynamicStoreCopyLocalHostName
_SCDynamicStoreCreate
_SCDynamicStoreCreateRunLoopSource
_SCDynamicStoreKeyCreate
_SCDynamicStoreKeyCreateComputerName
_SCDynamicStoreKeyCreateConsoleUser
_SCDynamicStoreKeyCreateHostNames
_SCDynamicStoreKeyCreateNetworkInterfaceEntity
_SCDynamicStoreSetNotificationKeys
_SCError
_SCErrorString
_SCPreferencesCreate
_SCPreferencesGetValue
_SCPreferencesScheduleWithRunLoop
_SCPreferencesSetCallback
_SCPreferencesSynchronize
_SCPreferencesUnscheduleFromRunLoop
_SFDeviceSupportsAirDrop
_SFDeviceSupportsContinuity
_SFDeviceSupportsLegacyAirDrop
_SFDeviceSupportsRemoteDisc
_SFDeviceSupportsWAPI
_SFHexStringForData
_SFIsBluetoothEnabled
_SFIsCalendarEvent
_SFIsContact
_SFIsCoreType
_SFIsDeviceAppleTV
_SFIsImage
_SFIsMapLink
_SFIsPDF
_SFIsPass
_SFIsPhoneLink
_SFIsPlainText
_SFIsVideo
_SFIsVoiceMemo
_SFIsWebLink
_SFIsWiFiEnabled
_SFLocalizedStringForKey
_SFNodeAddBonjourProtocol
_SFNodeAddDomain
_SFNodeAddKind
_SFNodeAddWorkgroup
_SFNodeCopyAppleID
_SFNodeCopyBonjourProtocols
_SFNodeCopyColor
_SFNodeCopyComputerName
_SFNodeCopyDisplayName
_SFNodeCopyDomain
_SFNodeCopyDomains
_SFNodeCopyEmailHash
_SFNodeCopyFirstName
_SFNodeCopyFlags
_SFNodeCopyHostName
_SFNodeCopyIconData
_SFNodeCopyIconHash
_SFNodeCopyKinds
_SFNodeCopyLastName
_SFNodeCopyModel
_SFNodeCopyMountPoint
_SFNodeCopyNetbiosName
_SFNodeCopyParentIdentifier
_SFNodeCopyPassword
_SFNodeCopyPhoneHash
_SFNodeCopyProtocols
_SFNodeCopyRealName
_SFNodeCopySFLItem
_SFNodeCopySecondaryName
_SFNodeCopyServiceName
_SFNodeCopyTypeIdentifier
_SFNodeCopyURL
_SFNodeCopyUserName
_SFNodeCopyWorkgroup
_SFNodeCopyWorkgroups
_SFNodeCreate
_SFNodeCreateCopy
_SFNodeGetDisplayName
_SFNodeGetSharePointBrowser
_SFNodeGetSupportedMedia
_SFNodeGetTypeID
_SFNodeGetVolumeRefNum
_SFNodeIsContainer
_SFNodeIsMounted
_SFNodeIsNeighborhood
_SFNodeIsRoot
_SFNodeIsServer
_SFNodeIsSharePoint
_SFNodeRemoveBonjourProtocol
_SFNodeRemoveKind
_SFNodeSetAccessRights
_SFNodeSetAppleID
_SFNodeSetBonjourProtocols
_SFNodeSetColor
_SFNodeSetComputerName
_SFNodeSetConnectionState
_SFNodeSetDiskType
_SFNodeSetDisplayName
_SFNodeSetDomain
_SFNodeSetEmailHash
_SFNodeSetFirstName
_SFNodeSetFlags
_SFNodeSetHostName
_SFNodeSetIconData
_SFNodeSetIconHash
_SFNodeSetLastName
_SFNodeSetModel
_SFNodeSetMountPoint
_SFNodeSetNetbiosName
_SFNodeSetParentIdentifier
_SFNodeSetPassword
_SFNodeSetPath
_SFNodeSetPhoneHash
_SFNodeSetPortNumber
_SFNodeSetRealName
_SFNodeSetSFLItem
_SFNodeSetSecondaryName
_SFNodeSetServiceName
_SFNodeSetSharePointBrowser
_SFNodeSetSupportedMedia
_SFNodeSetURL
_SFNodeSetUserName
_SFNodeSetWorkgroup
_SFNodeSetWorkgroups
_SFStringFromTimeInterval
_SFStringIsJSON
_SecIdentityCopyCertificate
_SecItemAdd
_SecItemCopyMatching
_SecItemDelete
_SecItemUpdate
_SecPolicyCreateBasicX509
_SecTrustCreateWithCertificates
_SecTrustEvaluate
_SecTrustGetCertificateAtIndex
_SecTrustGetCertificateCount
_TXTRecordGetCount
_TXTRecordGetItemAtIndex
_TXTRecordGetValuePtr
_UTTypeConformsTo
_UTTypeCopyDescription
__AppleIDAuthenticationCopyCertificateInfo
__AppleIDValidateAndCopyAppleIDValidationRecord
__Block_object_assign
__Block_object_dispose
__CFHTTPServerConnectionCopyProperty
__CFHTTPServerConnectionGetTypeID
__CFHTTPServerConnectionInvalidate
__CFHTTPServerConnectionSetClient
__CFHTTPServerConnectionSetDispatchQueue
__CFHTTPServerConnectionSetProperty
__CFHTTPServerCopyProperty
__CFHTTPServerCreateService
__CFHTTPServerInvalidate
__CFHTTPServerRequestCopyBodyStream
__CFHTTPServerRequestCopyProperty
__CFHTTPServerRequestCreateResponseMessage
__CFHTTPServerResponseCopyProperty
__CFHTTPServerResponseCreateWithData
__CFHTTPServerResponseEnqueue
__CFHTTPServerSetDispatchQueue
__CFHTTPServerSetProperty
__CFNetServiceCreateFromServiceName
__CFNetServiceCreateFromURL
__CFURLRequestSetShouldPipelineNonIdempotentHTTP
__CFURLRequestSetShouldSkipPipelineProbe
__CFXPCCreateCFObjectFromXPCObject
__CFXPCCreateXPCObjectFromCFObject
__CSBackToMyMacCopyDomain
__CSBackToMyMacCopyDomains
__CSCopyAccountIdentifierForAppleIDCertificate
__CSCopyAccountInfoForAppleID
__CSCopyAccountStatusForAppleID
__CSCopyCommentForServerName
__CSCopySecIdentityForAppleID
__CSCreateAppleIDIdentityWithCertificate
__CSGetAppleIDIdentityAuthority
__CSIdentityAuthenticateUsingCertificateChain
__CSIdentityAuthorityCopyIdentityWithName
__CSIdentityCopyCurrentUser
__CSIsComputerToComputerEnabled
__CSIsOpticalDisk
__CSIsWirelessAccessPointEnabled
__FSDeallocateQuarantineData
__FSPathAllocateQuarantineData
__FSPathSetQuarantineData
__FSSetVolumeProperty
__LSCopyApplicationInformationItem
__LSCopyMatchingApplicationsWithItems
__LSCreateDeviceTypeIdentifierWithModelCode
__MDItemSetPrivateAttributes
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__NSDoNotDisturbDisabledNotification
__NSDoNotDisturbEnabledNotification
__SFNodeCreateWithXPCObject
__SFNodeXPCObjectCreate
__Unwind_Resume
___CFConstantStringClassReference
___assert_rtn
___bzero
___error
___objc_personality_v0
___snprintf_chk
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__dispatch_queue_attr_concurrent
__dispatch_source_type_signal
__dispatch_source_type_timer
__dispatch_source_type_vfs
__dispatch_source_type_vnode
__kCFHTTPServerAllInterfacesIdentifier
__kCFHTTPServerAllowAnonymousServer
__kCFHTTPServerBoundInterfaceIdentifier
__kCFHTTPServerConnectionClientTrust
__kCFHTTPServerConnectionMaxRequestBufferSize
__kCFHTTPServerErrorDomain
__kCFHTTPServerIdleTimeout
__kCFHTTPServerRequestMethod
__kCFHTTPServerRequestURL
__kCFHTTPServerRequireClientCertificate
__kCFHTTPServerResponseMessage
__kCFHTTPServerSSLSettings
__kCFHTTPServerServerTrustChain
__kCFHTTPServerServicePort
__kCFHTTPServerStreamSSLSettings
__kCFHTTPServerWatchdogTimeout
__kCFStreamPropertyDNSIncludeAWDL
__kCFStreamPropertyDNSIncludeP2P
__kCFStreamPropertySSLClientSideAuthentication
__kCFStreamPropertyWatchdogTimeout
__kCFStreamSSLShouldSetPeerID
__kCFURLFinderInfoKey
__kCFURLVolumeRefNumKey
__kCSAppleIDAccountConfigurationChangeNotification
__kCSAppleIDAccountStatusRequiresUserActionKey
__kCSAppleIDAccountVerifiedEmailAddresses
__kCSAppleIDAccountVerifiedPhoneNumbers
__kCSAppleIDOptionDeferServerCheck
__kLSPIDKey
__objc_empty_cache
__xpc_error_connection_interrupted
__xpc_error_connection_invalid
__xpc_error_termination_imminent
__xpc_type_connection
__xpc_type_dictionary
__xpc_type_error
_applicationsAvailableForOpeningSpecificDocument
_ccDevRandomGetRngState
_cc_clear
_ccaes_ecb_decrypt_mode
_ccaes_ecb_encrypt_mode
_ccaes_gcm_decrypt_mode
_ccaes_gcm_encrypt_mode
_ccwrap_auth_decrypt
_ccwrap_auth_encrypt
_close
_compress
_compressBound
_confstr
_dispatch_after
_dispatch_async
_dispatch_get_global_queue
_dispatch_group_create
_dispatch_group_enter
_dispatch_group_leave
_dispatch_group_wait
_dispatch_once
_dispatch_queue_create
_dispatch_resume
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_source_cancel
_dispatch_source_create
_dispatch_source_set_cancel_handler
_dispatch_source_set_event_handler
_dispatch_source_set_timer
_dispatch_suspend
_dispatch_sync
_dispatch_time
_dup
_exit
_exp
_free
_freeifaddrs
_fsctl
_getfsstat$INODE64
_getifaddrs
_getnameinfo
_getpid
_gettimeofday
_getuid
_if_indextoname
_if_nametoindex
_inet_ntoa
_kABAddressBookPreferencesChangedPriv
_kABDatabaseChangedExternallyNotification
_kABDatabaseChangedNotification
_kABEmailProperty
_kABFirstNameProperty
_kABInstantMessageProperty
_kABInstantMessageServiceAIM
_kABInstantMessageServiceKey
_kABInstantMessageUsernameKey
_kABLastNameProperty
_kABNicknameProperty
_kABOrganizationProperty
_kABPersonFlags
_kABPhoneProperty
_kAOSAlternatePersonIDKey
_kAOSAppleAccountInfoKey
_kAOSAppleIDKey
_kAppleIDValidatedItemsRecordDataCertificateType
_kCFAllocatorDefault
_kCFBooleanFalse
_kCFBooleanTrue
_kCFBundleIdentifierKey
_kCFCopyStringDictionaryKeyCallBacks
_kCFCopyStringSetCallBacks
_kCFErrorDomainCFNetwork
_kCFErrorDomainSFOperation
_kCFErrorUnderlyingErrorKey
_kCFHTTPVersion1_1
_kCFLocaleCurrentLocaleDidChangeNotification
_kCFPreferencesCurrentApplication
_kCFPreferencesCurrentHost
_kCFPreferencesCurrentUser
_kCFRunLoopDefaultMode
_kCFStreamErrorDomainNetServices
_kCFStreamPropertyAutoErrorOnSystemChange
_kCFStreamPropertyBoundInterfaceIdentifier
_kCFStreamPropertyHTTPResponseHeader
_kCFStreamPropertyIndefiniteConnection
_kCFStreamPropertySSLPeerTrust
_kCFStreamPropertySSLSettings
_kCFStreamPropertyShouldCloseNativeSocket
_kCFStreamPropertySocketNativeHandle
_kCFStreamSSLCertificates
_kCFStreamSSLIsServer
_kCFStreamSSLLevel
_kCFStreamSSLValidatesCertificateChain
_kCFStreamSocketSecurityLevelTLSv1
_kCFTypeArrayCallBacks
_kCFTypeBagCallBacks
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kCFTypeSetCallBacks
_kCFURLCreationDateKey
_kCFURLIsDirectoryKey
_kCFURLIsReadableKey
_kCFURLIsWritableKey
_kCFURLLocalizedNameKey
_kCFURLNameKey
_kCFURLTotalFileSizeKey
_kCFURLTypeIdentifierKey
_kCFURLVolumeAvailableCapacityKey
_kCFUserNotificationAlertHeaderKey
_kCFUserNotificationAlternateButtonTitleKey
_kCFUserNotificationDefaultButtonTitleKey
_kCFUserNotificationIconURLKey
_kCGImageDestinationLossyCompressionQuality
_kCGImageDestinationRequestedFileSize
_kCGImageSourceTypeIdentifierHint
_kFSIsAirportVolume
_kIOMasterPortDefault
_kLSQuarantineTypeKey
_kLSSharedFileListItemBeforeFirst
_kLSSharedFileListManagedSharedItems
_kLSSharedFileListNetworkBrowser
_kLSSharedFileListRecentHostItems
_kMDItemDestinationRecipients
_kMDItemOriginApplicationIdentifier
_kMDItemOriginSenderDisplayName
_kMDItemOriginSenderHandle
_kMDItemWhereFroms
_kSCCompNetwork
_kSCDynamicStoreDomainSetup
_kSCDynamicStoreDomainState
_kSCEntNetLink
_kSFBrowserKindAirDrop
_kSFBrowserKindNetwork
_kSFBrowserKindPrinter
_kSFBrowserKindRemoteDisc
_kSFBrowserPreferencesAllEnabled
_kSFBrowserPreferencesBackToMyMacEnabled
_kSFBrowserPreferencesBonjourEnabled
_kSFBrowserPreferencesConnectedEnabled
_kSFCompaionServiceAuthorDataKey
_kSFCompaionServiceBonjourNameKey
_kSFNodeKindADisk
_kSFNodeKindAirDrop
_kSFNodeKindAll
_kSFNodeKindAutoFS
_kSFNodeKindBonjour
_kSFNodeKindConnected
_kSFNodeKindDomain
_kSFNodeKindManaged
_kSFNodeKindMonogram
_kSFNodeKindMyMac
_kSFNodeKindODisk
_kSFNodeKindPerson
_kSFNodeKindPrinter
_kSFNodeKindRecent
_kSFNodeKindRoot
_kSFNodeKindUnknown
_kSFNodeKindVolume
_kSFNodeKindWindows
_kSFNodeKindWorkgroup
_kSFNodeProtocolADisk
_kSFNodeProtocolAFP
_kSFNodeProtocolAirDrop
_kSFNodeProtocolCompanion
_kSFNodeProtocolFTP
_kSFNodeProtocolFTPS
_kSFNodeProtocolFile
_kSFNodeProtocolHTTP
_kSFNodeProtocolHTTPS
_kSFNodeProtocolNFS
_kSFNodeProtocolNWNode
_kSFNodeProtocolNetBIOS
_kSFNodeProtocolODisk
_kSFNodeProtocolSMB
_kSFNodeProtocolVNC
_kSFNodeProtocolWebDAV
_kSFNodeProtocolWebDAVS
_kSFNodeProtocolWorkgroups
_kSFOperationAirDropEnabledKey
_kSFOperationAutoAcceptKey
_kSFOperationBlockerComputerNameKey
_kSFOperationBlockerFirstNameKey
_kSFOperationBlockerLastNameKey
_kSFOperationBluetoothEnabledKey
_kSFOperationBundleIDKey
_kSFOperationBytesCopiedKey
_kSFOperationComputerToComputerKey
_kSFOperationContactsOnlyKey
_kSFOperationDestinationURLKey
_kSFOperationDeviceSupportsWAPIKey
_kSFOperationDiscoverableModeContactsOnly
_kSFOperationDiscoverableModeDisabled
_kSFOperationDiscoverableModeEveryone
_kSFOperationDiscoverableModeKey
_kSFOperationDiscoverableModeOff
_kSFOperationErrorKey
_kSFOperationFileBomPathKey
_kSFOperationFileIconKey
_kSFOperationFileIsDirectoryKey
_kSFOperationFileNameKey
_kSFOperationFileTypeKey
_kSFOperationFilesCopiedKey
_kSFOperationFilesKey
_kSFOperationFlagsKey
_kSFOperationHTTPServerConnectionKey
_kSFOperationItemsDescriptionKey
_kSFOperationItemsKey
_kSFOperationKindController
_kSFOperationKindEjecter
_kSFOperationKindInformation
_kSFOperationKindKey
_kSFOperationKindListener
_kSFOperationKindReceiver
_kSFOperationKindResolver
_kSFOperationKindSender
_kSFOperationKindStatus
_kSFOperationLegacyDeviceKey
_kSFOperationLegacyModeEnabledKey
_kSFOperationLegacyModeSettableKey
_kSFOperationNodeKey
_kSFOperationProtocolKey
_kSFOperationReceiverComputerNameKey
_kSFOperationReceiverFirstNameKey
_kSFOperationReceiverIDKey
_kSFOperationReceiverIconHashKey
_kSFOperationReceiverIconKey
_kSFOperationReceiverLastNameKey
_kSFOperationReceiverModelNameKey
_kSFOperationReceiverRecordDataKey
_kSFOperationReceiverUserReplyDataKey
_kSFOperationRepairAppleIDKey
_kSFOperationRunLoopKey
_kSFOperationRunLoopModeKey
_kSFOperationSenderComputerNameKey
_kSFOperationSenderEmailHashKey
_kSFOperationSenderEmailKey
_kSFOperationSenderFirstNameKey
_kSFOperationSenderIDKey
_kSFOperationSenderIconHashKey
_kSFOperationSenderIconKey
_kSFOperationSenderLastNameKey
_kSFOperationSenderModelNameKey
_kSFOperationSenderNodeKey
_kSFOperationSenderPhoneHashKey
_kSFOperationSenderRecordDataKey
_kSFOperationSenderUsersDataKey
_kSFOperationSessionIDKey
_kSFOperationSmallFileIconKey
_kSFOperationTimeRemainingKey
_kSFOperationTotalBytesKey
_kSFOperationUsePKZip
_kSFOperationVerifiableIdentityKey
_kSFOperationWirelessAccessPointKey
_kSFOperationWirelessEnabledKey
_kSecAttrAccessGroup
_kSecAttrAccount
_kSecAttrDescription
_kSecAttrLabel
_kSecAttrService
_kSecAttrSynchronizable
_kSecClass
_kSecClassGenericPassword
_kSecMatchLimit
_kSecMatchLimitAll
_kSecReturnAttributes
_kSecReturnData
_kSecValueData
_kUTTypeDirectory
_kUTTypeImage
_kUTTypeJPEG2000
_kUTTypeMovie
_localtime_r
_malloc
_memcpy
_mkdir
_msgtracer_domain_free
_msgtracer_domain_new
_msgtracer_log
_msgtracer_msg_free
_msgtracer_msg_new
_msgtracer_set
_netfs_CloseSession
_netfs_CreateSessionRef
_netfs_GetServerInfo
_notify_cancel
_objc_autorelease
_objc_autoreleaseReturnValue
_objc_begin_catch
_objc_copyWeak
_objc_destroyWeak
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_getProperty
_objc_initWeak
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
_objc_setProperty_nonatomic
_objc_setProperty_nonatomic_copy
_objc_storeStrong
_objc_storeWeak
_objc_sync_enter
_objc_sync_exit
_open
_pthread_mutex_lock
_pthread_mutex_unlock
_realpath$DARWIN_EXTSN
_remove
_removefile
_rename
_sandbox_check
_setsockopt
_signal
_socketpair
_stat$INODE64
_strcmp
_strerror
_strlen
_strncasecmp
_strtoll
_strtoul
_syslog
_uncompress
_usleep
_xpc_array_append_value
_xpc_array_create
_xpc_array_get_count
_xpc_array_get_int64
_xpc_array_set_int64
_xpc_connection_cancel
_xpc_connection_copy_bundle_id
_xpc_connection_create_mach_service
_xpc_connection_get_context
_xpc_connection_get_pid
_xpc_connection_resume
_xpc_connection_send_message
_xpc_connection_set_context
_xpc_connection_set_event_handler
_xpc_connection_set_target_queue
_xpc_dictionary_create
_xpc_dictionary_get_string
_xpc_dictionary_get_uint64
_xpc_dictionary_get_value
_xpc_dictionary_set_int64
_xpc_dictionary_set_string
_xpc_dictionary_set_uint64
_xpc_dictionary_set_value
_xpc_get_type
_xpc_string_get_string_ptr
_xpc_transaction_begin
_xpc_transaction_end
dyld_stub_binder
