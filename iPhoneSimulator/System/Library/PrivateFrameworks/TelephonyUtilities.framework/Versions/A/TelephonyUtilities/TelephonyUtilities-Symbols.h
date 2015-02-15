-[NSURL(FaceTime) faceTimeDestinationAccount]
-[NSURL(FaceTime) _isPhoneNumberID:]
+[NSURL(FaceTime) _faceTimeURLWithDestinationID:addressBookUID:audioOnly:]
+[NSURL(FaceTime) faceTimeURLWithDestinationID:]
+[NSURL(FaceTime) faceTimeURLWithDestinationID:addressBookUID:]
+[NSURL(FaceTime) faceTimeURLWithDestinationID:addressBookUID:audioOnly:]
+[NSURL(FaceTime) faceTimeTelephonyURLWithPhoneNumber:]
+[NSURL(FaceTime) faceTimeTelephonyURLWithPhoneNumber:showPrompt:]
+[NSURL(FaceTime) _applyFaceTimeScheme:toFaceTimeURL:]
+[NSURL(FaceTime) faceTimeURLWithURL:]
+[NSURL(FaceTime) faceTimePromptURLWithURL:]
+[NSURL(FaceTime) faceTimeAcceptURLWithURL:]
+[NSURL(FaceTime) faceTimeAcceptURLWithURL:conferenceID:]
+[NSURL(FaceTime) faceTimeLaunchForIncomingCallURL]
-[NSURL(FaceTime) isFaceTimeURL]
-[NSURL(FaceTime) isFaceTimePromptURL]
-[NSURL(FaceTime) isFaceTimeAcceptURL]
-[NSURL(FaceTime) isFaceTimeAudioURL]
-[NSURL(FaceTime) isFaceTimeAudioPromptURL]
-[NSURL(FaceTime) isFaceTimeAudioAcceptURL]
-[NSURL(FaceTime) isUpgradeURL]
-[NSURL(FaceTime) isLaunchForIncomingCallURL]
-[NSURL(FaceTime) isValidFaceTimeURL]
-[TUCallGroup isEqual:]
-[TUCallGroup displayName]
-[TUCallGroup status]
___21-[TUCallGroup status]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___21-[TUCallGroup status]_block_invoke48
___copy_helper_block_49
___destroy_helper_block_50
-[TUCallGroup methodSignatureForSelector:]
-[TUCallGroup forwardInvocation:]
-[TUCallGroup description]
-[TUCallGroup dealloc]
-[TUCallGroup calls]
-[TUCallGroup setCalls:]
-[NSString(FaceTime) destinationIdIsEmailAddress]
-[NSString(FaceTime) destinationIdIsPhoneNumber]
+[TUAudioSystemController sharedSystemController]
+[TUAudioSystemController sharedAudioSystemController]
___54+[TUAudioSystemController sharedAudioSystemController]_block_invoke
-[TUAudioSystemController init]
-[TUAudioSystemController dealloc]
-[TUAudioSystemController _handleUplinkMuteDidChangeNotification:]
-[TUAudioSystemController _handleDownlinkMuteDidChangeNotification:]
-[TUAudioSystemController _pickableRoutesDidChangeNotification:]
-[TUAudioSystemController _handleCallStatusChanged]
-[TUAudioSystemController isUplinkMuted]
___40-[TUAudioSystemController isUplinkMuted]_block_invoke
-[TUAudioSystemController isTTY]
-[TUAudioSystemController setUplinkMuted:]
___42-[TUAudioSystemController setUplinkMuted:]_block_invoke
___42-[TUAudioSystemController setUplinkMuted:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
-[TUAudioSystemController isDownlinkMuted]
___42-[TUAudioSystemController isDownlinkMuted]_block_invoke
-[TUAudioSystemController setDownlinkMuted:]
___44-[TUAudioSystemController setDownlinkMuted:]_block_invoke
___44-[TUAudioSystemController setDownlinkMuted:]_block_invoke_2
___copy_helper_block_113
___destroy_helper_block_114
-[TUAudioSystemController _pickableRoutesForTTYWithForceNewRequest:]
___68-[TUAudioSystemController _pickableRoutesForTTYWithForceNewRequest:]_block_invoke
-[TUAudioSystemController pickableRoutesForTTY]
-[TUAudioSystemController _pickableRoutesForPhoneCallWithForceNewRequest:]
___74-[TUAudioSystemController _pickableRoutesForPhoneCallWithForceNewRequest:]_block_invoke
-[TUAudioSystemController _pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:]
___83-[TUAudioSystemController _pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:]_block_invoke
-[TUAudioSystemController _pickableRoutesForPlayAndRecordVideoWithForceNewRequest:]
___83-[TUAudioSystemController _pickableRoutesForPlayAndRecordVideoWithForceNewRequest:]_block_invoke
-[TUAudioSystemController _pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:]
___89-[TUAudioSystemController _pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:]_block_invoke
-[TUAudioSystemController pickableRoutesForCategory:andMode:]
-[TUAudioSystemController pickableRoutesForPhoneCallCategory]
-[TUAudioSystemController pickableRoutesForFaceTimeAudioCategory]
-[TUAudioSystemController pickableRoutesForFaceTimeVideoCategory]
+[TULogging shouldLogType:]
+[TULogging logType:topic:category:backtrace:format:]
+[TULogging registerForShouldLogChangedNotification]
___52+[TULogging registerForShouldLogChangedNotification]_block_invoke
+[TULogging unregisterForShouldLogChangedNotification]
+[TULogging sendDirectoryToCrashReporter:error:]
+[TULogging beginLoggingSessionAsInitiator:]
+[TULogging pulseLoggingSession]
___32+[TULogging pulseLoggingSession]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[TULogging checkpointLoggingSession:]
+[TULogging endLoggingSession]
-[TUAudioController init]
-[TUAudioController dealloc]
-[TUAudioController blockUntilOutstandingRequestsComplete]
-[TUAudioController(Private) _acquireLock]
-[TUAudioController(Private) _releaseLock]
-[TUAudioController(Private) _enterOutstandingRequestsGroup]
-[TUAudioController(Private) _leaveOutstandingRequestsGroup]
-[TUAudioController(Private) _requestUpdatedValueWithBlock:object:isRequestingPointer:forceNewRequest:scheduleTimePointer:notificationString:queue:]
___148-[TUAudioController(Private) _requestUpdatedValueWithBlock:object:isRequestingPointer:forceNewRequest:scheduleTimePointer:notificationString:queue:]_block_invoke
___148-[TUAudioController(Private) _requestUpdatedValueWithBlock:object:isRequestingPointer:forceNewRequest:scheduleTimePointer:notificationString:queue:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_23
___destroy_helper_block_24
-[TUFaceTimeVideoCall service]
-[TUFaceTimeVideoCall supportedModelType]
-[TUFaceTimeVideoCall isVideo]
-[TUFaceTimeVideoCall callStatus]
-[TUFaceTimeVideoCall isSendingVideo]
-[TUFaceTimeVideoCall setIsSendingVideo:]
-[TUFaceTimeVideoCall hasReceivedFirstFrame]
-[TUFaceTimeVideoCall endedReason]
-[TUFaceTimeVideoCall endedError]
-[TUFaceTimeVideoCall audioCategory]
-[TUFaceTimeVideoCall audioMode]
+[TUProxyCallModel sharedInstance]
___34+[TUProxyCallModel sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[TUProxyCallModel updateWithCallModelState:]
-[TUProxyCallModel ambiguityState]
-[TUProxyCallModel setAmbiguityState:]
-[TUProxyCallModel isSwappable]
-[TUProxyCallModel setSwappable:]
-[TUProxyCallModel isMergeable]
-[TUProxyCallModel setMergeable:]
-[TUProxyCallModel isHoldAllowed]
-[TUProxyCallModel setHoldAllowed:]
-[TUProxyCallModel isAddCallAllowed]
-[TUProxyCallModel setAddCallAllowed:]
-[TUProxyCallModel isTakingCallsPrivateAllowed]
-[TUProxyCallModel setTakingCallsPrivateAllowed:]
-[TUProxyCallModel isHardPauseAvailable]
-[TUProxyCallModel setHardPauseAvailable:]
-[TUProxyCallModel isEndAndAnswerAllowed]
-[TUProxyCallModel setEndAndAnswerAllowed:]
-[TUProxyCallModel isHoldAndAnswerAllowed]
-[TUProxyCallModel setHoldAndAnswerAllowed:]
-[TUProxyCallModel isSendToVoicemailAllowed]
-[TUProxyCallModel setSendToVoicemailAllowed:]
+[TUFaceTimeAudioCallModel sharedInstance]
___42+[TUFaceTimeAudioCallModel sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[TUFaceTimeAudioCallModel isSwappable]
-[TUFaceTimeAudioCallModel isMergeable]
-[TUFaceTimeAudioCallModel isHoldAllowed]
-[TUFaceTimeAudioCallModel isAddCallAllowed]
-[TUFaceTimeAudioCallModel ambiguityState]
-[TUFaceTimeAudioCallModel isTakingCallsPrivateAllowed]
-[TUFaceTimeAudioCallModel isHardPauseAvailable]
-[TUFaceTimeAudioCallModel isEndAndAnswerAllowed]
-[TUFaceTimeAudioCallModel isHoldAndAnswerAllowed]
-[TUFaceTimeAudioCallModel isSendToVoicemailAllowed]
-[NSString(TUFaceTimeUtilitiesAdditions) stringWithIDSFormat]
+[TUIDSUtilities initialize]
+[TUIDSUtilities idsServiceForType:]
+[TUIDSUtilities _anyStatusInResultDictionary:equalsIDStatus:]
___62+[TUIDSUtilities _anyStatusInResultDictionary:equalsIDStatus:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[TUIDSUtilities _availabilityForDestinations:serviceType:]
+[TUIDSUtilities _refreshAvailabilityForDestinations:serviceType:userInfo:]
___75+[TUIDSUtilities _refreshAvailabilityForDestinations:serviceType:userInfo:]_block_invoke
___copy_helper_block_83
___destroy_helper_block_84
+[TUIDSUtilities _IDSFormattedDestinationsForPerson:]
+[TUIDSUtilities _availabilityForPerson:serviceType:]
+[TUIDSUtilities _refreshAvailabilityForPerson:serviceType:]
+[TUIDSUtilities isService:availableForDestinations:]
+[TUIDSUtilities isService:availableForABPerson:]
+[TUCallModel sharedInstance]
-[TUCallModel description]
-[TUCallModel isAmbiguous]
-[TUCallModel ambiguityState]
-[TUCallModel isSwappable]
-[TUCallModel isMergeable]
-[TUCallModel isHoldAllowed]
-[TUCallModel isAddCallAllowed]
-[TUCallModel isTakingCallsPrivateAllowed]
-[TUCallModel isHardPauseAvailable]
-[TUCallModel isEndAndAnswerAllowed]
-[TUCallModel isHoldAndAnswerAllowed]
-[TUCallModel isSendToVoicemailAllowed]
-[TUFaceTimeAudioCall dealloc]
-[TUFaceTimeAudioCall hold]
-[TUFaceTimeAudioCall unhold]
-[TUFaceTimeAudioCall handleCallConnected:]
-[TUFaceTimeAudioCall addCallConnectedObserver]
-[TUFaceTimeAudioCall removeCallConnectedObserver]
-[TUFaceTimeAudioCall shouldIgnoreStatusChange]
-[TUFaceTimeAudioCall service]
-[TUFaceTimeAudioCall supportedModelType]
-[TUFaceTimeAudioCall callStatus]
-[TUFaceTimeAudioCall audioCategory]
-[TUFaceTimeAudioCall audioMode]
+[TUHardPauseController sharedHardPauseController]
-[TUHardPauseController init]
-[TUHardPauseController dealloc]
-[TUHardPauseController modelStateChangedNotification:]
-[TUHardPauseController resetCacheValidity]
-[TUHardPauseController canQueryHardPauseDigits]
-[TUHardPauseController sendHardPauseDigits]
-[TUHardPauseController sendHardPauseDigitsLocal]
-[TUHardPauseController sendHardPauseDigitsRelayed]
-[TUHardPauseController displayString]
-[TUHardPauseController appropriateState]
-[TUHardPauseController updateCachedValuesIfNecessary]
-[TUHardPauseController setState:]
-[TUHardPauseController state]
-[TUHardPauseController cachedDisplayString]
-[TUHardPauseController setCachedDisplayString:]
-[TUHardPauseController cachedValuesAreValid]
-[TUHardPauseController setCachedValuesAreValid:]
-[TUHardPauseController cachedAppropriateState]
-[TUHardPauseController setCachedAppropriateState:]
___IDSCopyCanonicalAddressForDestinationID_block_invoke
___IDSCopyCanonicalAddressForDestinationID_block_invoke_2
____TUAddObserver_block_invoke
___copy_helper_block_
___destroy_helper_block_
___TUAddLocalObserver_block_invoke
___TUAddLocalNSObserver_block_invoke
___copy_helper_block_130
___destroy_helper_block_131
___TUAddDarwinObserver_block_invoke
___TUGetBooleanDefaultInDomains_block_invoke
___copy_helper_block_135
___destroy_helper_block_136
___TUSetBooleanDefaultInDomains_block_invoke
___copy_helper_block_141
___destroy_helper_block_142
+[NSXPCConnection(TUCallServicesAdditions) dispatchMainIfCurrentXPCConnection:]
___79+[NSXPCConnection(TUCallServicesAdditions) dispatchMainIfCurrentXPCConnection:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[NSXPCConnection(TUCallServicesAdditions) callServicesDaemonDelegateXPCInterface]
+[NSXPCConnection(TUCallServicesAdditions) callServicesDaemonObserverXPCInterface]
+[NSXPCConnection(TUCallServicesAdditions) callServicesAccountsControllerDelegateXPCInterface]
-[TUAccountsController init]
___28-[TUAccountsController init]_block_invoke
-[TUAccountsController dealloc]
-[TUAccountsController xpcConnection]
-[TUAccountsController _setUpXPCConnection]
___43-[TUAccountsController _setUpXPCConnection]_block_invoke
___43-[TUAccountsController _setUpXPCConnection]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_48
___destroy_helper_block_49
___43-[TUAccountsController _setUpXPCConnection]_block_invoke53
___43-[TUAccountsController _setUpXPCConnection]_block_invoke_254
___copy_helper_block_57
___destroy_helper_block_58
___copy_helper_block_60
___destroy_helper_block_61
-[TUAccountsController _tearDownXPCConnection]
-[TUAccountsController outgoingRelayCallerID]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___45-[TUAccountsController outgoingRelayCallerID]_block_invoke
___copy_helper_block_75
___destroy_helper_block_76
___45-[TUAccountsController outgoingRelayCallerID]_block_invoke81
___copy_helper_block_84
___destroy_helper_block_85
-[TUAccountsController formattedOutgoingRelayCallerID]
-[TUAccountsController setXpcConnection:]
-[TUAccountsController outgoingRelayCallerIDChangedToken]
-[TUAccountsController setOutgoingRelayCallerIDChangedToken:]
-[TUCallModelState initWithAllPropertiesAllowed]
-[TUCallModelState isEqual:]
-[TUCallModelState description]
-[TUCallModelState handlePossibleStateChange]
-[TUCallModelState updateInternalState]
+[TUCallModelState supportsSecureCoding]
-[TUCallModelState initWithCoder:]
-[TUCallModelState encodeWithCoder:]
-[TUCallModelState isAmbiguous]
-[TUCallModelState ambiguityState]
-[TUCallModelState setAmbiguityState:]
-[TUCallModelState isSwappable]
-[TUCallModelState setSwappable:]
-[TUCallModelState isMergeable]
-[TUCallModelState setMergeable:]
-[TUCallModelState isHoldAllowed]
-[TUCallModelState setHoldAllowed:]
-[TUCallModelState isAddCallAllowed]
-[TUCallModelState setAddCallAllowed:]
-[TUCallModelState isTakingCallsPrivateAllowed]
-[TUCallModelState setTakingCallsPrivateAllowed:]
-[TUCallModelState isHardPauseAvailable]
-[TUCallModelState setHardPauseAvailable:]
-[TUCallModelState isEndAndAnswerAllowed]
-[TUCallModelState setEndAndAnswerAllowed:]
-[TUCallModelState isHoldAndAnswerAllowed]
-[TUCallModelState setHoldAndAnswerAllowed:]
-[TUCallModelState isSendToVoicemailAllowed]
-[TUCallModelState setSendToVoicemailAllowed:]
+[TUCallServicesInterface sharedInstance]
___41+[TUCallServicesInterface sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[TUCallServicesInterface launchesCallServicesDaemonOnDemand]
___61+[TUCallServicesInterface launchesCallServicesDaemonOnDemand]_block_invoke
-[TUCallServicesInterface init]
___31-[TUCallServicesInterface init]_block_invoke
___copy_helper_block_40
___destroy_helper_block_41
-[TUCallServicesInterface dealloc]
-[TUCallServicesInterface daemonDelegate]
-[TUCallServicesInterface daemonDelegateWithErrorHandler:]
-[TUCallServicesInterface xpcConnection]
-[TUCallServicesInterface _setUpXPCConnection]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___46-[TUCallServicesInterface _setUpXPCConnection]_block_invoke
___copy_helper_block_81
___destroy_helper_block_82
___46-[TUCallServicesInterface _setUpXPCConnection]_block_invoke86
___copy_helper_block_89
___destroy_helper_block_90
-[TUCallServicesInterface _tearDownXPCConnection]
___49-[TUCallServicesInterface _tearDownXPCConnection]_block_invoke
-[TUCallServicesInterface handleCallStatusChanged:]
___51-[TUCallServicesInterface handleCallStatusChanged:]_block_invoke
-[TUCallServicesInterface handleRelayCallingCapabilitiesChanged:]
-[TUCallServicesInterface requestPendingCallNotifications]
___58-[TUCallServicesInterface requestPendingCallNotifications]_block_invoke
-[TUCallServicesInterface callStateForCall:]
___44-[TUCallServicesInterface callStateForCall:]_block_invoke
___copy_helper_block_140
___destroy_helper_block_141
___44-[TUCallServicesInterface callStateForCall:]_block_invoke146
___copy_helper_block_149
___destroy_helper_block_150
-[TUCallServicesInterface setWantsHoldMusic:forCall:]
-[TUCallServicesInterface setEndpointOnCurrentDevice:forCall:]
-[TUCallServicesInterface setDisconnectedReason:forCall:]
-[TUCallServicesInterface requestHandoffForAllCalls]
-[TUCallServicesInterface currentProxyCalls]
___44-[TUCallServicesInterface currentProxyCalls]_block_invoke
___copy_helper_block_176
___destroy_helper_block_177
___44-[TUCallServicesInterface currentProxyCalls]_block_invoke179
___copy_helper_block_186
___destroy_helper_block_187
-[TUCallServicesInterface proxyCallModel]
___41-[TUCallServicesInterface proxyCallModel]_block_invoke
___copy_helper_block_195
___destroy_helper_block_196
___41-[TUCallServicesInterface proxyCallModel]_block_invoke198
___copy_helper_block_201
___destroy_helper_block_202
-[TUCallServicesInterface dial:callID:service:sourceIdentifier:]
-[TUCallServicesInterface setIsSendingAudio:forCall:]
-[TUCallServicesInterface dialCall:]
-[TUCallServicesInterface answerCall:]
-[TUCallServicesInterface holdCall:]
-[TUCallServicesInterface unholdCall:]
-[TUCallServicesInterface disconnectCall:]
-[TUCallServicesInterface conferenceCall:]
-[TUCallServicesInterface unconferenceCall:]
-[TUCallServicesInterface swapCalls]
-[TUCallServicesInterface playDTMFToneForCall:key:]
-[TUCallServicesInterface endActiveAndAnswerCall:]
-[TUCallServicesInterface endHeldAndAnswerCall:]
-[TUCallServicesInterface disconnectCurrentCallAndActivateHeld]
-[TUCallServicesInterface disconnectAllCalls]
-[TUCallServicesInterface sendHardPauseDigits]
-[TUCallServicesInterface muteCall:]
-[TUCallServicesInterface unmuteCall:]
-[TUCallServicesInterface setRelayCallingEnabled:]
-[TUCallServicesInterface relayableHostDeviceExists]
-[TUCallServicesInterface relayableClientDeviceExists]
-[TUCallServicesInterface handleWantsHoldMusicChangedTo:forCallWithUUID:]
___73-[TUCallServicesInterface handleWantsHoldMusicChangedTo:forCallWithUUID:]_block_invoke
___copy_helper_block_303
___destroy_helper_block_304
-[TUCallServicesInterface handleEndpointOnCurrentDeviceChangedTo:forCallWithUUID:]
___82-[TUCallServicesInterface handleEndpointOnCurrentDeviceChangedTo:forCallWithUUID:]_block_invoke
___copy_helper_block_316
___destroy_helper_block_317
-[TUCallServicesInterface handleDisconnectedReasonChangedTo:forCallWithUUID:]
___77-[TUCallServicesInterface handleDisconnectedReasonChangedTo:forCallWithUUID:]_block_invoke
___copy_helper_block_323
___destroy_helper_block_324
-[TUCallServicesInterface handleLocalFrequencyChangedTo:]
___57-[TUCallServicesInterface handleLocalFrequencyChangedTo:]_block_invoke
___copy_helper_block_328
___destroy_helper_block_329
-[TUCallServicesInterface handleRemoteFrequencyChangedTo:]
___58-[TUCallServicesInterface handleRemoteFrequencyChangedTo:]_block_invoke
___copy_helper_block_333
___destroy_helper_block_334
-[TUCallServicesInterface handleMutedChangedTo:]
___48-[TUCallServicesInterface handleMutedChangedTo:]_block_invoke
___copy_helper_block_338
___destroy_helper_block_339
-[TUCallServicesInterface handleHardPauseDigitsAvailibilityChangedTo:digits:]
___77-[TUCallServicesInterface handleHardPauseDigitsAvailibilityChangedTo:digits:]_block_invoke
___copy_helper_block_350
___destroy_helper_block_351
-[TUCallServicesInterface handleCallStatusChangedForProxyCall:]
___63-[TUCallServicesInterface handleCallStatusChangedForProxyCall:]_block_invoke
___copy_helper_block_361
___destroy_helper_block_362
-[TUCallServicesInterface handleCallContinuityStateChangedForProxyCall:]
___72-[TUCallServicesInterface handleCallContinuityStateChangedForProxyCall:]_block_invoke
___copy_helper_block_366
___destroy_helper_block_367
-[TUCallServicesInterface handleCurrentProxyCallsChanged:]
___58-[TUCallServicesInterface handleCurrentProxyCallsChanged:]_block_invoke
___copy_helper_block_375
___destroy_helper_block_376
-[TUCallServicesInterface handleCallModelStateChanged:]
___55-[TUCallServicesInterface handleCallModelStateChanged:]_block_invoke
___copy_helper_block_386
___destroy_helper_block_387
-[TUCallServicesInterface setDaemonDelegate:]
-[TUCallServicesInterface callsCache]
-[TUCallServicesInterface setCallsCache:]
-[TUCallServicesInterface setCurrentProxyCalls:]
-[TUCallServicesInterface setProxyCallModel:]
-[TUCallServicesInterface localFrequency]
-[TUCallServicesInterface setLocalFrequency:]
-[TUCallServicesInterface remoteFrequency]
-[TUCallServicesInterface setRemoteFrequency:]
-[TUCallServicesInterface isMuted]
-[TUCallServicesInterface setMuted:]
-[TUCallServicesInterface setXpcConnection:]
-[TUCallServicesInterface xpcConnectionCreationSemaphore]
-[TUCallServicesInterface setXpcConnectionCreationSemaphore:]
-[TUCallCenterCallModelState init]
-[TUCallCenterCallModelState dealloc]
-[TUCallCenterCallModelState faceTimeAudioCallModel]
-[TUCallCenterCallModelState proxyCallModel]
-[TUCallCenterCallModelState _supportsCallModelType:]
-[TUCallCenterCallModelState _onlySupportsCallModelType:]
-[TUCallCenterCallModelState _displayedCallSupportsCallModelType:]
-[TUCallCenterCallModelState _allCallsSupportCallModelType:]
-[TUCallCenterCallModelState _anyCallsSupportCallModelType:]
-[TUCallCenterCallModelState handlePossibleStateChange]
-[TUCallCenterCallModelState updateInternalState]
-[TUCallCenterCallModelState _updateSwappable]
-[TUCallCenterCallModelState _updateMergeable]
-[TUCallCenterCallModelState _updateHoldAllowed]
-[TUCallCenterCallModelState _updateAddCallAllowed]
-[TUCallCenterCallModelState _updateAmbiguityState]
-[TUCallCenterCallModelState _updateTakingCallsPrivateAllowed]
-[TUCallCenterCallModelState _updateHardPauseAvailable]
-[TUCallCenterCallModelState _updateEndAndAnswerAllowed]
-[TUCallCenterCallModelState _updateHoldAndAnswerAllowed]
-[TUCallCenterCallModelState _updateSendToVoicemailAllowed]
-[TUCallCenterCallModelState isAmbiguous]
-[TUCallCenterCallModelState description]
-[TUCallCenterCallModelState telephonyCallModelDidChange:]
-[TUCallCenterCallModelState faceTimeAudioCallModelDidChange:]
-[TUCallCenterCallsCache init]
-[TUCallCenterCallsCache dealloc]
-[TUCallCenterCallsCache stopTrackingCall:]
-[TUCallCenterCallsCache callForChat:]
-[TUCallCenterCallsCache callForChat:shouldSkipLoadingCallState:]
-[TUCallCenterCallsCache proxyCallForProxyCall:]
-[TUCallCenterCallsCache _updateCallWithPersistentValues:]
-[TUCallCenterCallsCache callRefToTelephonyCall]
-[TUCallCenterCallsCache setCallRefToTelephonyCall:]
-[TUCallCenterCallsCache callRefToTelephonyCallSemaphore]
-[TUCallCenterCallsCache setCallRefToTelephonyCallSemaphore:]
-[TUCallCenterCallsCache chatGUIDToFaceTimeCall]
-[TUCallCenterCallsCache setChatGUIDToFaceTimeCall:]
-[TUCallCenterCallsCache chatGUIDToFaceTimeCallSemaphore]
-[TUCallCenterCallsCache setChatGUIDToFaceTimeCallSemaphore:]
-[TUCallCenterCallsCache uniqueProxyIdentifierToProxyCall]
-[TUCallCenterCallsCache setUniqueProxyIdentifierToProxyCall:]
-[TUCallCenterCallsCache uniqueProxyIdentifierToProxyCallSemaphore]
-[TUCallCenterCallsCache setUniqueProxyIdentifierToProxyCallSemaphore:]
-[TUCallCenterCallsCache currentCallSet]
-[TUCallCenterCallsCache setCurrentCallSet:]
+[TUCallCenter sharedAddressBook]
+[TUCallCenter _sharedInstanceWithDaemonDelegate:]
___50+[TUCallCenter _sharedInstanceWithDaemonDelegate:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[TUCallCenter sharedInstance]
+[TUCallCenter isInCallServiceProcess]
___38+[TUCallCenter isInCallServiceProcess]_block_invoke
+[TUCallCenter isIMAVChatHostProcess]
___37+[TUCallCenter isIMAVChatHostProcess]_block_invoke
+[TUCallCenter shouldDisableAppFeatures]
___40+[TUCallCenter shouldDisableAppFeatures]_block_invoke
-[TUCallCenter initWithDaemonDelegate:]
-[TUCallCenter dealloc]
-[TUCallCenter callModelState]
-[TUCallCenter incomingCall]
-[TUCallCenter incomingCalls]
-[TUCallCenter _callGroupsFromCalls:]
-[TUCallCenter currentCallGroups]
-[TUCallCenter currentCalls]
-[TUCallCenter _currentCalls:]
-[TUCallCenter currentCallCount]
-[TUCallCenter currentAudioAndVideoCalls]
-[TUCallCenter callsWithStatus:]
-[TUCallCenter callWithStatus:]
-[TUCallCenter callWithUniqueProxyIdentifier:]
-[TUCallCenter callWithCallUUID:]
-[TUCallCenter _allCalls]
-[TUCallCenter callsOnDefaultPairedDevice]
-[TUCallCenter callGroupsOnDefaultPairedDevice]
-[TUCallCenter callCountOnDefaultPairedDevice]
-[TUCallCenter proxyCallWithDestinationID:service:status:sourceIdentifier:outgoing:conferenceIdentifier:voicemail:callerNameFromNetwork:]
-[TUCallCenter sourceAccount:]
___30-[TUCallCenter sourceAccount:]_block_invoke
-[TUCallCenter canInitiateCalls]
-[TUCallCenter canInitiateCallForService:]
-[TUCallCenter anyCallIsHostedOnCurrentDevice]
-[TUCallCenter anyCallIsEndpointOnCurrentDevice]
-[TUCallCenter callsHostedElsewhere]
-[TUCallCenter callsWithAnEndpointElsewhere]
-[TUCallCenter callsHostedOrAnEndpointElsewhere]
-[TUCallCenter allCallsAreOfService:]
-[TUCallCenter _dialFaceTimeCall:isVideo:callID:sourceIdentifier:]
-[TUCallCenter dial:service:]
-[TUCallCenter dial:callID:service:]
-[TUCallCenter dial:callID:service:sourceIdentifier:]
-[TUCallCenter dial:callID:service:sourceIdentifier:isRelayCall:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
-[TUCallCenter dialEmergency:]
-[TUCallCenter dialVoicemail]
-[TUCallCenter sendFieldModeDigits:]
-[TUCallCenter displayedCallFromCalls:]
-[TUCallCenter answerCall:]
-[TUCallCenter answerCall:withSourceIdentifier:]
-[TUCallCenter answerCallWithHoldMusic:]
-[TUCallCenter answerCall:withSourceIdentifier:wantsHoldMusic:]
-[TUCallCenter holdActiveAndAnswerCall:]
-[TUCallCenter endActiveAndAnswerCall:]
-[TUCallCenter endHeldAndAnswerCall:]
-[TUCallCenter swapCalls]
-[TUCallCenter resumeCall:]
-[TUCallCenter disconnectCall:]
-[TUCallCenter disconnectCall:withReason:]
-[TUCallCenter disconnectCurrentCallAndActivateHeld]
-[TUCallCenter disconnectAllCalls]
-[TUCallCenter requestHandoffForAllCalls]
-[TUCallCenter disconnectRelayingCalls]
-[TUCallCenter disconnectNonRelayingCalls]
-[TUCallCenter isSwappable]
-[TUCallCenter isMergeable]
-[TUCallCenter isHoldAllowed]
-[TUCallCenter isAddCallAllowed]
-[TUCallCenter isAmbiguous]
-[TUCallCenter ambiguityState]
-[TUCallCenter canTakeCallsPrivate]
-[TUCallCenter isTakingCallsPrivateAllowed]
-[TUCallCenter isHardPauseAvailable]
-[TUCallCenter isEndAndAnswerAllowed]
-[TUCallCenter isHoldAndAnswerAllowed]
-[TUCallCenter isSendToVoicemailAllowed]
-[TUCallCenter _callStatusUserInfoForUserInfo:]
-[TUCallCenter handleCallStatusChanged:]
-[TUCallCenter handleCallStatusChanged:userInfo:]
-[TUCallCenter handleCallStatusOnDefaultPairedDeviceChanged:]
-[TUCallCenter handleCallConnected:]
-[TUCallCenter handleFilteredCall:]
-[TUCallCenter handleFilteredCall:userInfo:]
-[TUCallCenter handleCallFailed:]
-[TUCallCenter _callerUnavailableUserInfoForCall:reason:error:]
-[TUCallCenter handleCallerUnavailableForCall:reason:error:]
-[TUCallCenter handleCallSubTypeChanged:]
-[TUCallCenter handleCallerIDChanged:]
-[TUCallCenter handleCallModelStateChanged:]
-[TUCallCenter _handleCallEnded:withReason:error:]
-[TUCallCenter handleChatStateChanged:]
-[TUCallCenter handleChatConferenceMetadataUpdated:]
-[TUCallCenter handleChatSendingAudioChangedNotification:]
-[TUCallCenter _videoCallUserInfoForUserInfo:]
-[TUCallCenter handleChatInvitationSent:]
-[TUCallCenter handleChatFirstPreviewFrameArrived:]
-[TUCallCenter handleChatFirstRemoteFrameArrived:]
-[TUCallCenter handleChatRemoteVideoDidChange:]
-[TUCallCenter handleChatRemoteScreenDidChange:]
-[TUCallCenter handleChatRemotePauseDidChange:]
-[TUCallCenter handleChatVideoQualityDidChange:]
-[TUCallCenter handleChatVideoStalledDidChange:]
-[TUCallCenter daemonConnected:]
-[TUCallCenter invitedToIMAVChat:]
-[TUCallCenter createdOutgoingIMAVChat:]
-[TUCallCenter filteredIncomingIMAVChat:]
-[TUCallCenter _callStatusChangedInternal:]
+[TUCallCenter emergencyCallBackModeIsActive]
-[TUCallCenter endEmergencyCallBackMode]
-[TUCallCenter displayedCalls]
-[TUCallCenter setDisplayedCalls:]
-[TUCallCenter conferenceParticipantCalls]
-[TUCallCenter setConferenceParticipantCalls:]
-[TUCallCenter callsCache]
-[TUCallCenter setCallsCache:]
-[TUCallCenter setCallModelState:]
-[TUFaceTimeCall initWithChat:]
-[TUFaceTimeCall dealloc]
-[TUFaceTimeCall answerWithSourceIdentifier:]
-[TUFaceTimeCall disconnect]
-[TUFaceTimeCall inviteWithCallIdentifier:]
-[TUFaceTimeCall isStatusFinal]
-[TUFaceTimeCall isOutgoing]
-[TUFaceTimeCall isBlocked]
-[TUFaceTimeCall startTime]
-[TUFaceTimeCall shouldPlayDTMFTone]
-[TUFaceTimeCall isConferenced]
-[TUFaceTimeCall joinConference]
-[TUFaceTimeCall leaveConference]
-[TUFaceTimeCall remoteParticipant]
-[TUFaceTimeCall destinationID]
-[TUFaceTimeCall callerNameFromNetwork]
-[TUFaceTimeCall isAlerting]
-[TUFaceTimeCall callIdentifier]
-[TUFaceTimeCall callUUID]
-[TUFaceTimeCall callHistoryIdentifier]
-[TUFaceTimeCall isEqual:]
-[TUFaceTimeCall callDuration]
-[TUFaceTimeCall totalDataUsed]
-[TUFaceTimeCall disconnectedReason]
-[TUFaceTimeCall faceTimeIDStatus]
-[TUFaceTimeCall managesAudioInterruptions]
-[TUFaceTimeCall needsManualInCallSounds]
-[TUFaceTimeCall playsConnectedSound]
-[TUFaceTimeCall isUplinkMuted]
-[TUFaceTimeCall setUplinkMuted:]
-[TUFaceTimeCall isDownlinkMuted]
-[TUFaceTimeCall setDownlinkMuted:]
-[TUFaceTimeCall isSendingAudio]
-[TUFaceTimeCall setIsSendingAudio:]
-[TUFaceTimeCall isTTY]
-[TUFaceTimeCall localVolume]
-[TUFaceTimeCall localFrequency]
-[TUFaceTimeCall managesAudioRelay]
-[TUFaceTimeCall conferenceIdentifier]
-[TUFaceTimeCall remoteFrequency]
-[TUFaceTimeCall conferenceInviteDictionary]
-[TUFaceTimeCall chat]
-[TUFaceTimeCall setChat:]
-[TUCallCenter(CallState) _resetState]
-[TUCallCenter(CallState) _setIncomingCall:]
-[TUCallCenter(CallState) _postDisplayedCallsChanged]
-[TUCallCenter(CallState) _postConferenceParticipantsChanged]
-[TUCallCenter(CallState) _addActiveCall:]
-[TUCallCenter(CallState) _removeActiveCall:]
__CompareCallsWithStartTime
-[TUCallCenter(CallState) _setActiveCalls:]
-[TUCallCenter(CallState) _setConferenceParticipants:]
-[TUCallCenter(CallState) _updateActiveCalls:]
-[TUCallCenter(CallState) _updateCallCount:force:]
-[TUCallCenter(CallState) inCall]
-[TUCallCenter(CallState) inOutgoingCall]
-[TUCallCenter(CallState) justAnIncomingCallExists]
-[TUCallCenter(CallState) canMergeCalls]
-[TUCallCenter(CallState) displayedCall]
-[TUCallCenter(CallState) displayedCallsNotIncludingIncomingCall]
-[TUCallCenter(CallState) suspendCallChangeNotifications]
-[TUCallCenter(CallState) resumeCallChangeNotifications]
-[TUCallCenter(CallState) forceCallActive:]
-[TUCallCenter(CallState) forceCallIntoConference:]
-[TUCallCenter(CallState) forceCallOutOfConference:]
-[TUCallCenter(CallState) forceDisconnectOfCall:]
-[TUCallCenter(CallState) forceUpdateOfCallList]
-[TUCallCenter(CallState) conferenceCall]
-[TUCallCenter(CallState) _handleCallControlFailure:]
-[TUCallCenter(VideoCalls) incomingVideoCall]
-[TUCallCenter(VideoCalls) activeVideoCall]
-[TUCallCenter(VideoCalls) currentVideoCall]
-[TUCallCenter(VideoCalls) videoCallWithStatus:]
-[TUCallCenter(VideoCalls) currentVideoCalls]
-[TUCallCenter(VideoCalls) allNonFinalVideoCalls]
-[TUCallCenter(VideoCalls) currentVideoCallCount]
+[TUCallCapabilities supportsTelephonyCalls]
+[TUCallCapabilities supportsFaceTimeAudioCalls]
+[TUCallCapabilities supportsFaceTimeVideoCalls]
+[TUCallCapabilities telephonyCallSupport]
+[TUCallCapabilities faceTimeAudioCallSupport]
+[TUCallCapabilities faceTimeVideoCallSupport]
+[TUCallCapabilities supportsHostingTelephonyCalls]
___51+[TUCallCapabilities supportsHostingTelephonyCalls]_block_invoke
+[TUCallCapabilities supportsHostingFaceTimeAudioCalls]
___55+[TUCallCapabilities supportsHostingFaceTimeAudioCalls]_block_invoke
+[TUCallCapabilities supportsHostingFaceTimeVideoCalls]
___55+[TUCallCapabilities supportsHostingFaceTimeVideoCalls]_block_invoke
+[TUCallCapabilities supportsDisplayingTelephonyCalls]
+[TUCallCapabilities supportsDisplayingFaceTimeAudioCalls]
___58+[TUCallCapabilities supportsDisplayingFaceTimeAudioCalls]_block_invoke
+[TUCallCapabilities supportsDisplayingFaceTimeVideoCalls]
___58+[TUCallCapabilities supportsDisplayingFaceTimeVideoCalls]_block_invoke
+[TUCallCapabilities supportsSimultaneousVoiceAndData]
+[TUCallCapabilities canEnableWiFiCalling]
+[TUCallCapabilities isWiFiCallingEnabled]
+[TUCallCapabilities setWiFiCallingEnabled:]
+[TUCallCapabilities wiFiCallingCapabilityInformation]
+[TUCallCapabilities setWiFiCallingCapabilityInformation:]
+[TUCallCapabilities isWiFiCallingCurrentlyAvailable]
+[TUCallCapabilities _initializeState]
+[TUCallCapabilities _setUpRelayCallingListeners]
___49+[TUCallCapabilities _setUpRelayCallingListeners]_block_invoke
___49+[TUCallCapabilities _setUpRelayCallingListeners]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___49+[TUCallCapabilities _setUpRelayCallingListeners]_block_invoke104
___49+[TUCallCapabilities _setUpRelayCallingListeners]_block_invoke_2107
___copy_helper_block_110
___destroy_helper_block_111
___49+[TUCallCapabilities _setUpRelayCallingListeners]_block_invoke115
___49+[TUCallCapabilities _setUpRelayCallingListeners]_block_invoke_2118
___copy_helper_block_121
___destroy_helper_block_122
+[TUCallCapabilities _tearDownRelayCallingListeners]
+[TUCallCapabilities supportsRelayCalling]
+[TUCallCapabilities canEnableRelayCalling]
+[TUCallCapabilities isRelayCallingEnabled]
+[TUCallCapabilities setRelayCallingEnabled:]
+[TUCallCapabilities _supportsRelayCallingDefault]
+[TUCallCapabilities _setSupportsRelayCallingDefault:]
___54+[TUCallCapabilities _setSupportsRelayCallingDefault:]_block_invoke
+[TUCallCapabilities _canEnableRelayCallingDefault]
+[TUCallCapabilities _setCanEnableRelayCallingDefault:]
___55+[TUCallCapabilities _setCanEnableRelayCallingDefault:]_block_invoke
+[TUCallCapabilities _relayCallingEnabledDefault]
+[TUCallCapabilities _setRelayCallingEnabledDefault:]
___53+[TUCallCapabilities _setRelayCallingEnabledDefault:]_block_invoke
+[TUCallCapabilities _sendNecessaryNotificationsAfterRunningBlock:]
+[TUCallCapabilities invalidateCachedValues]
+[TUAVConferenceInterface sharedInstance]
___41+[TUAVConferenceInterface sharedInstance]_block_invoke
-[TUAVConferenceInterface init]
-[TUAVConferenceInterface dealloc]
-[TUAVConferenceInterface isMuted]
-[TUAVConferenceInterface setMuted:]
-[TUAVConferenceInterface isSendingAudio]
-[TUAVConferenceInterface setSendingAudio:]
-[TUAVConferenceInterface startConferenceForCall:withSocket:didStartHandler:didStopHandler:]
-[TUAVConferenceInterface stopConferenceForCall:]
-[TUAVConferenceInterface stopConferenceForAllCalls]
-[TUAVConferenceInterface _conferenceConnectionForCall:]
-[TUAVConferenceInterface _startConferenceForConferenceConnection:withSocket:]
-[TUAVConferenceInterface _startAudioSession]
-[TUAVConferenceInterface _stopAudioSession]
-[TUAVConferenceInterface _setUpDidStartTimeoutForConference:conferenceConnection:]
___83-[TUAVConferenceInterface _setUpDidStartTimeoutForConference:conferenceConnection:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[TUAVConferenceInterface _cleanUpAllConferenceConnectionsWithError:]
-[TUAVConferenceInterface _cleanUpConferenceConnection:error:]
-[TUAVConferenceInterface _cleanUpConference]
-[TUAVConferenceInterface _shouldIgnoreAVConferenceError:]
-[TUAVConferenceInterface conference:withCallID:remoteMediaStalled:]
-[TUAVConferenceInterface conference:didStartSession:withUserInfo:]
___67-[TUAVConferenceInterface conference:didStartSession:withUserInfo:]_block_invoke
___copy_helper_block_217
___destroy_helper_block_218
-[TUAVConferenceInterface conference:didStopWithCallID:error:]
___62-[TUAVConferenceInterface conference:didStopWithCallID:error:]_block_invoke
___62-[TUAVConferenceInterface conference:didStopWithCallID:error:]_block_invoke_2
___copy_helper_block_228
___destroy_helper_block_229
___copy_helper_block_231
___destroy_helper_block_232
-[TUAVConferenceInterface conference:closeConnectionForCallID:]
___63-[TUAVConferenceInterface conference:closeConnectionForCallID:]_block_invoke
___copy_helper_block_234
___destroy_helper_block_235
-[TUAVConferenceInterface conference:updateInputMeterLevel:]
-[TUAVConferenceInterface conference:updateInputFrequencyLevel:]
___64-[TUAVConferenceInterface conference:updateInputFrequencyLevel:]_block_invoke
___copy_helper_block_239
___destroy_helper_block_240
-[TUAVConferenceInterface conference:updateOutputFrequencyLevel:]
___65-[TUAVConferenceInterface conference:updateOutputFrequencyLevel:]_block_invoke
___copy_helper_block_244
___destroy_helper_block_245
-[TUAVConferenceInterface conference:updateOutputMeterLevel:]
-[TUAVConferenceInterface conference:receivedFirstRemoteFrameForCallID:]
-[TUAVConferenceInterface conference:remoteScreenAttributesChanged:callID:]
-[TUAVConferenceInterface conference:remoteVideoAttributesChanged:callID:]
-[TUAVConferenceInterface conference:remoteAudioPaused:callID:]
-[TUAVConferenceInterface conference:remoteVideoPaused:callID:]
-[TUAVConferenceInterface serverDiedForConference:]
___51-[TUAVConferenceInterface serverDiedForConference:]_block_invoke
___copy_helper_block_253
___destroy_helper_block_254
-[TUAVConferenceInterface conference:inititiateRelayRequest:requestDict:]
-[TUAVConferenceInterface conference:sendRelayUpdate:updateDict:]
-[TUAVConferenceInterface conference:cancelRelayRequest:requestDict:]
-[TUAVConferenceInterface conference:videoQualityNotificationForCallID:isDegraded:isRemote:]
-[TUAVConferenceInterface conference:withCallID:networkHint:]
-[TUAVConferenceInterface delegate]
-[TUAVConferenceInterface setDelegate:]
-[TUAVConferenceInterface activeConferenceConnections]
-[TUAVConferenceInterface setActiveConferenceConnections:]
-[TUAVConferenceInterface conference]
-[TUAVConferenceInterface setConference:]
-[TUAVConferenceInterface callID]
-[TUAVConferenceInterface setCallID:]
-[TUAVConferenceInterface hasActiveConference]
-[TUAVConferenceInterface setHasActiveConference:]
+[TUAVConferenceConnection conferenceConnectionWithCall:]
-[TUAVConferenceConnection dealloc]
-[TUAVConferenceConnection description]
-[TUAVConferenceConnection isMuted]
-[TUAVConferenceConnection setMuted:]
-[TUAVConferenceConnection call]
-[TUAVConferenceConnection setCall:]
-[TUAVConferenceConnection didStartHandler]
-[TUAVConferenceConnection setDidStartHandler:]
-[TUAVConferenceConnection didStopHandler]
-[TUAVConferenceConnection setDidStopHandler:]
-[TUAVConferenceConnection receivedDidStart]
-[TUAVConferenceConnection setReceivedDidStart:]
-[TUCall init]
-[TUCall dealloc]
-[TUCall description]
-[TUCall answer]
-[TUCall answerWithSourceIdentifier:]
-[TUCall isOnHold]
-[TUCall setIsOnHold:]
-[TUCall hold]
-[TUCall unhold]
-[TUCall disconnect]
-[TUCall disconnectWithReason:]
-[TUCall inviteWithCallIdentifier:]
-[TUCall resetProvisionalHoldStatus]
-[TUCall resetProvisionalStatuses]
-[TUCall shouldPlayDTMFTone]
-[TUCall playDTMFToneForKey:]
-[TUCall service]
-[TUCall supportedModelType]
-[TUCall wasDeclined]
-[TUCall isVideo]
-[TUCall isOutgoing]
-[TUCall shouldIgnoreStatusChange]
-[TUCall isBlocked]
-[TUCall startTime]
-[TUCall isSendingAudio]
-[TUCall setIsSendingAudio:]
-[TUCall isSendingVideo]
-[TUCall setIsSendingVideo:]
-[TUCall isActive]
-[TUCall hasReceivedFirstFrame]
-[TUCall remoteParticipant]
-[TUCall endedReason]
-[TUCall endedError]
-[TUCall resetWantsHoldMusic]
-[TUCall setWantsHoldMusic:]
-[TUCall _setPrimitiveWantsHoldMusic:]
-[TUCall setEndpointOnCurrentDevice:]
-[TUCall _setPrimitiveEndpointOnCurrentDevice:]
-[TUCall setDisconnectedReason:]
-[TUCall _setPrimitiveDisconnectedReason:]
-[TUCall isConferenced]
-[TUCall joinConference]
-[TUCall leaveConference]
-[TUCall destinationID]
-[TUCall _displayNameWithSeparator:]
-[TUCall displayName]
-[TUCall displayFirstName]
-[TUCall multiLineDisplayName]
-[TUCall companyName]
-[TUCall callerNameFromNetwork]
-[TUCall localizedLabel]
-[TUCall isoCountryCode]
-[TUCall setOverrideName:]
-[TUCall isHostedOnCurrentDevice]
-[TUCall wasDialAssisted]
-[TUCall setWasDialAssisted:]
-[TUCall wasDialedFromEmergencyUI]
-[TUCall setWasDialedFromEmergencyUI:]
-[TUCall isEmergencyCall]
-[TUCall isAlerting]
-[TUCall isVoicemail]
-[TUCall callIdentifier]
-[TUCall callUUID]
-[TUCall sourceIdentifier]
-[TUCall callHistoryIdentifier]
-[TUCall causeCode]
-[TUCall isEqual:]
-[TUCall callDuration]
-[TUCall callDurationString]
-[TUCall totalDataUsed]
-[TUCall status]
-[TUCall isStatusFinal]
-[TUCall callStatus]
-[TUCall setFaceTimeIDStatus:]
-[TUCall setTransitionStatus:]
-[TUCall statusIsProvisional]
-[TUCall allowsTTYSettingChanges]
-[TUCall audioCategory]
-[TUCall audioMode]
-[TUCall managesAudioInterruptions]
-[TUCall needsManualInCallSounds]
-[TUCall playsConnectedSound]
-[TUCall isMuted]
-[TUCall setMuted:]
-[TUCall isUplinkMuted]
-[TUCall setUplinkMuted:]
-[TUCall isDownlinkMuted]
-[TUCall setDownlinkMuted:]
-[TUCall isTTY]
-[TUCall localVolume]
-[TUCall localFrequency]
-[TUCall remoteFrequency]
-[TUCall conferenceIdentifier]
-[TUCall abUID]
-[TUCall _loadCallDetails]
-[TUCall hasSupport:]
-[TUCall errorAlertTitle]
-[TUCall errorAlertMessage]
-[TUCall updateWithCall:]
+[TUCall supportsSecureCoding]
-[TUCall initWithCoder:]
-[TUCall encodeWithCoder:]
-[TUCall suggestedDisplayName]
-[TUCall setSuggestedDisplayName:]
-[TUCall disconnectedReason]
-[TUCall faceTimeIDStatus]
-[TUCall isRequestingHandoff]
-[TUCall setRequestingHandoff:]
-[TUCall isEndpointOnCurrentDevice]
-[TUCall wantsHoldMusic]
-[TUCall isConnected]
-[TUCall setConnected:]
-[TUCall hasUpdatedAudio]
-[TUCall setHasUpdatedAudio:]
-[TUCall uniqueProxyIdentifier]
-[TUCall setUniqueProxyIdentifier:]
-[TUCall setSourceIdentifier:]
-[TUCall setDisplayName:]
-[TUCall setIsoCountryCode:]
-[TUCall provisionalHoldStatus]
-[TUCall setProvisionalHoldStatus:]
-[TUCall transitionStatus]
-[TUCall requiresAudioReinterruption]
-[TUCall setRequiresAudioReinterruption:]
-[TUCall setAllowsTTYSettingChanges:]
-[TUCall isConnectingToRelay]
-[TUCall setConnectingToRelay:]
+[TUICFInterface serviceIdentifierForService:]
+[TUICFInterface allowCallForDestinationID:service:]
___52+[TUICFInterface allowCallForDestinationID:service:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[TUICFInterface allowCallForDestinationID:service:completionHandler:]
___70+[TUICFInterface allowCallForDestinationID:service:completionHandler:]_block_invoke
___70+[TUICFInterface allowCallForDestinationID:service:completionHandler:]_block_invoke_2
___copy_helper_block_10
___destroy_helper_block_11
-[TUProxyCall initWithDestinationID:service:status:sourceIdentifier:outgoing:conferenceIdentifier:voicemail:callerNameFromNetwork:]
-[TUProxyCall initWithCall:]
-[TUProxyCall updateWithCall:]
-[TUProxyCall dealloc]
-[TUProxyCall isEqual:]
-[TUProxyCall hash]
-[TUProxyCall supportedModelType]
-[TUProxyCall callUUID]
-[TUProxyCall joinConference]
-[TUProxyCall leaveConference]
-[TUProxyCall managesAudioInterruptions]
-[TUProxyCall hold]
-[TUProxyCall unhold]
-[TUProxyCall disconnect]
-[TUProxyCall playDTMFToneForKey:]
-[TUProxyCall answerWithSourceIdentifier:]
-[TUProxyCall callDuration]
-[TUProxyCall isHostedOnCurrentDevice]
-[TUProxyCall localFrequency]
-[TUProxyCall remoteFrequency]
-[TUProxyCall audioCategory]
-[TUProxyCall audioMode]
-[TUProxyCall isUplinkMuted]
-[TUProxyCall setUplinkMuted:]
-[TUProxyCall isDownlinkMuted]
-[TUProxyCall setDownlinkMuted:]
-[TUProxyCall isSendingAudio]
-[TUProxyCall setIsSendingAudio:]
-[TUProxyCall supportsRelayingCallState]
-[TUProxyCall supportsRelayingAudioOrVideo]
+[TUProxyCall supportsSecureCoding]
-[TUProxyCall initWithCoder:]
-[TUProxyCall encodeWithCoder:]
-[TUProxyCall status]
-[TUProxyCall setStatus:]
-[TUProxyCall startTime]
-[TUProxyCall setStartTime:]
-[TUProxyCall isConferenced]
-[TUProxyCall setConferenced:]
-[TUProxyCall callIdentifier]
-[TUProxyCall setCallIdentifier:]
-[TUProxyCall destinationID]
-[TUProxyCall setDestinationID:]
-[TUProxyCall service]
-[TUProxyCall setService:]
-[TUProxyCall isOutgoing]
-[TUProxyCall setOutgoing:]
-[TUProxyCall conferenceIdentifier]
-[TUProxyCall setConferenceIdentifier:]
-[TUProxyCall isVoicemail]
-[TUProxyCall setVoicemail:]
-[TUProxyCall callerNameFromNetwork]
-[TUProxyCall setCallerNameFromNetwork:]
GCC_except_table2
GCC_except_table12
GCC_except_table19
GCC_except_table3
GCC_except_table30
GCC_except_table34
GCC_except_table18
GCC_except_table14
GCC_except_table30
GCC_except_table46
GCC_except_table1
___block_descriptor_tmp
___block_descriptor_tmp51
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp92
___block_literal_global93
___block_descriptor_tmp106
___block_literal_global107
___block_descriptor_tmp108
___block_descriptor_tmp109
___block_literal_global110
___block_descriptor_tmp111
___block_literal_global112
___block_descriptor_tmp115
___block_descriptor_tmp119
___block_literal_global120
___block_descriptor_tmp126
___block_literal_global127
___block_descriptor_tmp132
___block_literal_global133
___block_descriptor_tmp134
___block_literal_global135
___block_descriptor_tmp136
___block_literal_global137
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp41
___block_descriptor_tmp
___block_descriptor_tmp25
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp86
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp101
___block_literal_global102
___block_descriptor_tmp123
___block_descriptor_tmp124
___block_descriptor_tmp132
___block_descriptor_tmp134
___block_descriptor_tmp138
___block_descriptor_tmp143
_TUFormatBytesToHumanReadableString.unitPrefixesArray
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp47
___block_descriptor_tmp50
___block_descriptor_tmp59
___block_descriptor_tmp62
___block_descriptor_tmp78
___block_descriptor_tmp87
___block_descriptor_tmp
___block_descriptor_tmp10
___block_literal_global
___block_descriptor_tmp43
___block_descriptor_tmp83
___block_descriptor_tmp91
___block_descriptor_tmp111
___block_literal_global112
___block_descriptor_tmp123
___block_literal_global124
___block_descriptor_tmp132
___block_literal_global133
___block_descriptor_tmp143
___block_descriptor_tmp152
___block_descriptor_tmp178
___block_descriptor_tmp189
___block_descriptor_tmp197
___block_descriptor_tmp204
___block_descriptor_tmp305
___block_descriptor_tmp318
___block_descriptor_tmp325
___block_descriptor_tmp330
___block_descriptor_tmp335
___block_descriptor_tmp340
___block_descriptor_tmp352
___block_descriptor_tmp363
___block_descriptor_tmp368
___block_descriptor_tmp377
___block_descriptor_tmp388
___block_descriptor_tmp
___block_descriptor_tmp131
___block_literal_global
___block_descriptor_tmp132
___block_literal_global133
___block_descriptor_tmp141
___block_literal_global142
___block_descriptor_tmp341
___block_literal_global342
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp64
___block_literal_global65
___block_descriptor_tmp72
___block_literal_global73
___block_descriptor_tmp76
___block_literal_global77
___block_descriptor_tmp80
___block_literal_global81
___block_descriptor_tmp97
___block_descriptor_tmp101
___block_descriptor_tmp109
___block_descriptor_tmp112
___block_descriptor_tmp120
___block_descriptor_tmp123
___block_descriptor_tmp138
___block_descriptor_tmp144
___block_descriptor_tmp150
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp168
___block_descriptor_tmp219
___block_descriptor_tmp230
___block_descriptor_tmp233
___block_descriptor_tmp236
___block_descriptor_tmp241
___block_descriptor_tmp246
___block_descriptor_tmp255
___block_descriptor_tmp
___block_descriptor_tmp7
___block_literal_global
___block_descriptor_tmp13
_OBJC_IVAR_$_TUCallGroup._calls
_OBJC_IVAR_$_TUAudioSystemController._uplinkMutedQueue
_OBJC_IVAR_$_TUAudioSystemController._downlinkMutedQueue
_OBJC_IVAR_$_TUAudioSystemController._ttyQueue
_OBJC_IVAR_$_TUAudioSystemController._pickableRoutesQueue
_OBJC_IVAR_$_TUAudioSystemController._isUplinkMutedCached
_OBJC_IVAR_$_TUAudioSystemController._isDownlinkMutedCached
_OBJC_IVAR_$_TUAudioSystemController._isTTYCached
_OBJC_IVAR_$_TUAudioSystemController._pickableRoutesForTTY
_OBJC_IVAR_$_TUAudioSystemController._pickableRoutesForPhoneCall
_OBJC_IVAR_$_TUAudioSystemController._pickableRoutesForPlayAndRecordVideo
_OBJC_IVAR_$_TUAudioSystemController._pickableRoutesForPlayAndRecordVoice
_OBJC_IVAR_$_TUAudioSystemController._pickableRoutesForPlayAndRecordRemoteVoice
_OBJC_IVAR_$_TUAudioSystemController._isRequestingUplinkMuted
_OBJC_IVAR_$_TUAudioSystemController._isRequestingDownlinkMuted
_OBJC_IVAR_$_TUAudioSystemController._isRequestingTTY
_OBJC_IVAR_$_TUAudioSystemController._isRequestingPickableRoutesForTTY
_OBJC_IVAR_$_TUAudioSystemController._isRequestingPickableRoutesForPhoneCall
_OBJC_IVAR_$_TUAudioSystemController._isRequestingPickableRoutesForPlayAndRecordVideo
_OBJC_IVAR_$_TUAudioSystemController._isRequestingPickableRoutesForPlayAndRecordVoice
_OBJC_IVAR_$_TUAudioSystemController._isRequestingPickableRoutesForPlayAndRecordRemoteVoice
_OBJC_IVAR_$_TUAudioSystemController._lastUplinkMutedRequestScheduleTime
_OBJC_IVAR_$_TUAudioSystemController._lastDownlinkMutedRequestScheduleTime
_OBJC_IVAR_$_TUAudioSystemController._lastTTYRequestScheduleTime
_OBJC_IVAR_$_TUAudioSystemController._lastTTYPickableRoutesScheduleTime
_OBJC_IVAR_$_TUAudioSystemController._lastPhoneCallCategoryRoutesScheduleTime
_OBJC_IVAR_$_TUAudioSystemController._lastPlayAndRecordVideoRoutesScheduleTime
_OBJC_IVAR_$_TUAudioSystemController._lastPlayAndRecordVoiceRoutesScheduleTime
_OBJC_IVAR_$_TUAudioSystemController._lastPlayAndRecordRemoteVoiceRoutesScheduleTime
_OBJC_IVAR_$_TUAudioController._modifyingStateLock
_OBJC_IVAR_$_TUAudioController._outstandingRequestsGroup
_OBJC_IVAR_$_TUProxyCallModel._ambiguityState
_OBJC_IVAR_$_TUProxyCallModel._swappable
_OBJC_IVAR_$_TUProxyCallModel._mergeable
_OBJC_IVAR_$_TUProxyCallModel._holdAllowed
_OBJC_IVAR_$_TUProxyCallModel._addCallAllowed
_OBJC_IVAR_$_TUProxyCallModel._takingCallsPrivateAllowed
_OBJC_IVAR_$_TUProxyCallModel._hardPauseAvailable
_OBJC_IVAR_$_TUProxyCallModel._endAndAnswerAllowed
_OBJC_IVAR_$_TUProxyCallModel._holdAndAnswerAllowed
_OBJC_IVAR_$_TUProxyCallModel._sendToVoicemailAllowed
_OBJC_IVAR_$_TUCallModel._ambiguous
_OBJC_IVAR_$_TUCallModel._ambiguityState
_OBJC_IVAR_$_TUCallModel._swappable
_OBJC_IVAR_$_TUCallModel._mergeable
_OBJC_IVAR_$_TUCallModel._holdAllowed
_OBJC_IVAR_$_TUCallModel._addCallAllowed
_OBJC_IVAR_$_TUCallModel._takingCallsPrivateAllowed
_OBJC_IVAR_$_TUCallModel._hardPauseAvailable
_OBJC_IVAR_$_TUCallModel._endAndAnswerAllowed
_OBJC_IVAR_$_TUCallModel._holdAndAnswerAllowed
_OBJC_IVAR_$_TUCallModel._sendToVoicemailAllowed
_OBJC_IVAR_$_TUHardPauseController._state
_OBJC_IVAR_$_TUHardPauseController._cachedDisplayString
_OBJC_IVAR_$_TUHardPauseController._cachedValuesAreValid
_OBJC_IVAR_$_TUHardPauseController._cachedAppropriateState
_OBJC_IVAR_$_TUAccountsController._outgoingRelayCallerIDChangedToken
_OBJC_IVAR_$_TUAccountsController._xpcConnection
_OBJC_IVAR_$_TUCallModelState._ambiguous
_OBJC_IVAR_$_TUCallModelState._ambiguityState
_OBJC_IVAR_$_TUCallModelState._swappable
_OBJC_IVAR_$_TUCallModelState._mergeable
_OBJC_IVAR_$_TUCallModelState._holdAllowed
_OBJC_IVAR_$_TUCallModelState._addCallAllowed
_OBJC_IVAR_$_TUCallModelState._takingCallsPrivateAllowed
_OBJC_IVAR_$_TUCallModelState._hardPauseAvailable
_OBJC_IVAR_$_TUCallModelState._endAndAnswerAllowed
_OBJC_IVAR_$_TUCallModelState._holdAndAnswerAllowed
_OBJC_IVAR_$_TUCallModelState._sendToVoicemailAllowed
_OBJC_IVAR_$_TUCallServicesInterface._xpcConnectionCreationSemaphore
_OBJC_IVAR_$_TUCallServicesInterface._xpcConnection
_OBJC_IVAR_$_TUCallServicesInterface._callsCache
_OBJC_IVAR_$_TUCallServicesInterface._currentProxyCalls
_OBJC_IVAR_$_TUCallServicesInterface._proxyCallModel
_OBJC_IVAR_$_TUCallServicesInterface._localFrequency
_OBJC_IVAR_$_TUCallServicesInterface._remoteFrequency
_OBJC_IVAR_$_TUCallServicesInterface._daemonDelegate
_OBJC_IVAR_$_TUCallServicesInterface._muted
_OBJC_IVAR_$_TUCallCenterCallsCache._callRefToTelephonyCallSemaphore
_OBJC_IVAR_$_TUCallCenterCallsCache._chatGUIDToFaceTimeCallSemaphore
_OBJC_IVAR_$_TUCallCenterCallsCache._uniqueProxyIdentifierToProxyCallSemaphore
_OBJC_IVAR_$_TUCallCenterCallsCache._callRefToTelephonyCall
_OBJC_IVAR_$_TUCallCenterCallsCache._chatGUIDToFaceTimeCall
_OBJC_IVAR_$_TUCallCenterCallsCache._uniqueProxyIdentifierToProxyCall
_OBJC_IVAR_$_TUCallCenterCallsCache._currentCallSet
_OBJC_IVAR_$_TUCallCenter._callsCache
_OBJC_IVAR_$_TUCallCenter._displayedCalls
_OBJC_IVAR_$_TUCallCenter._conferenceParticipantCalls
_OBJC_IVAR_$_TUCallCenter._callModelState
_OBJC_IVAR_$_TUFaceTimeCall._chat
_OBJC_IVAR_$_TUAVConferenceInterface._activeConferenceConnections
_OBJC_IVAR_$_TUAVConferenceInterface._delegate
_OBJC_IVAR_$_TUAVConferenceInterface._conference
_OBJC_IVAR_$_TUAVConferenceInterface._callID
_OBJC_IVAR_$_TUAVConferenceInterface._hasActiveConference
_OBJC_IVAR_$_TUAVConferenceConnection._didStartHandler
_OBJC_IVAR_$_TUAVConferenceConnection._didStopHandler
_OBJC_IVAR_$_TUAVConferenceConnection._call
_OBJC_IVAR_$_TUAVConferenceConnection._receivedDidStart
_OBJC_IVAR_$_TUCall._faceTimeIDStatus
_OBJC_IVAR_$_TUCall._suggestedDisplayName
_OBJC_IVAR_$_TUCall._uniqueProxyIdentifier
_OBJC_IVAR_$_TUCall._sourceIdentifier
_OBJC_IVAR_$_TUCall._isoCountryCode
_OBJC_IVAR_$_TUCall._wantsHoldMusic
_OBJC_IVAR_$_TUCall._endpointOnCurrentDevice
_OBJC_IVAR_$_TUCall._disconnectedReason
_OBJC_IVAR_$_TUCall._transitionStatus
_OBJC_IVAR_$_TUCall._requestingHandoff
_OBJC_IVAR_$_TUCall._connected
_OBJC_IVAR_$_TUCall._hasUpdatedAudio
_OBJC_IVAR_$_TUCall._provisionalHoldStatus
_OBJC_IVAR_$_TUCall._requiresAudioReinterruption
_OBJC_IVAR_$_TUCall._allowsTTYSettingChanges
_OBJC_IVAR_$_TUCall._connectingToRelay
_OBJC_IVAR_$_TUProxyCall._service
_OBJC_IVAR_$_TUProxyCall._status
_OBJC_IVAR_$_TUProxyCall._startTime
_OBJC_IVAR_$_TUProxyCall._outgoing
_OBJC_IVAR_$_TUProxyCall._voicemail
_OBJC_IVAR_$_TUProxyCall._conferenced
_OBJC_IVAR_$_TUProxyCall._destinationID
_OBJC_IVAR_$_TUProxyCall._conferenceIdentifier
_OBJC_IVAR_$_TUProxyCall._callerNameFromNetwork
_OBJC_IVAR_$_TUProxyCall._callIdentifier
+[TUAudioSystemController sharedAudioSystemController].onceToken
___sharedController
_IMLoggingSettingsChangedNotificationToken
_hasActiveSession
-[TUFaceTimeVideoCall audioCategory]._kCMSessionAudioCategory_PlayAndRecord_NoBluetooth
-[TUFaceTimeVideoCall audioMode]._kCMSessionAudioMode_VideoChat
+[TUProxyCallModel sharedInstance]._sharedInstance
+[TUProxyCallModel sharedInstance].pred
+[TUFaceTimeAudioCallModel sharedInstance]._sharedInstance
+[TUFaceTimeAudioCallModel sharedInstance].pred
_gSharedListenerId
+[TUIDSUtilities initialize]._IDSServiceNameFaceTime
+[TUIDSUtilities initialize]._IDSServiceNameCalling
+[TUIDSUtilities initialize].delegate
+[TUIDSUtilities initialize]._IDSServiceNameScreenSharing
+[TUIDSUtilities idsServiceForType:]._IDSServiceNameFaceTime
+[TUIDSUtilities idsServiceForType:]._IDSServiceNameCalling
+[TUIDSUtilities idsServiceForType:]._IDSServiceNameScreenSharing
-[TUFaceTimeAudioCall audioCategory]._kCMSessionAudioCategory_PlayAndRecord_NoBluetooth
-[TUFaceTimeAudioCall audioMode]._kCMSessionAudioMode_VoiceChat
_sharedHardPauseController
_TUBundle.__tuBundle
_IDSCopyCanonicalAddressForDestinationID._IDSCopyIDForEmailAddress
_IDSCopyCanonicalAddressForDestinationID._pred_IDSCopyIDForEmailAddressIDS
_IDSCopyCanonicalAddressForDestinationID._IDSCopyIDForPhoneNumber
_IDSCopyCanonicalAddressForDestinationID._pred_IDSCopyIDForPhoneNumberIDS
___bundleIdentifierForCallState
___bundleIdentifierForCallVisibility
+[TUCallServicesInterface sharedInstance]._sharedInstance
+[TUCallServicesInterface sharedInstance].pred
+[TUCallServicesInterface launchesCallServicesDaemonOnDemand].sLaunchesCallServicesDaemonOnDemand
+[TUCallServicesInterface launchesCallServicesDaemonOnDemand].onceToken
+[TUCallCenter _sharedInstanceWithDaemonDelegate:].pred
__sharedInstance
+[TUCallCenter isInCallServiceProcess].sIsInCallServiceProcess
+[TUCallCenter isInCallServiceProcess].pred
+[TUCallCenter isIMAVChatHostProcess].sIsIMAVChatHostProcess
+[TUCallCenter isIMAVChatHostProcess].pred
+[TUCallCenter shouldDisableAppFeatures].sShouldDisableAppFeatures
+[TUCallCenter shouldDisableAppFeatures].pred
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatStateChangedNotification
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatConferenceMetadataUpdatedNotification
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatSendingAudioChangedNotification
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatParticipantInvitationDeliveredNotification
-[TUCallCenter initWithDaemonDelegate:]._IMDaemonDidConnectNotification
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatParticipantInvitationDeliveredNotification188
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatFirstFrameNotification
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatParticipantReceivedFirstFrameNotification
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatParticipantMediaPropertiesChangedNotification
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatParticipantScreenPropertiesChangedNotification
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatParticipantPauseChangedNotification
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatParticipantVideoQualityChangedNotification
-[TUCallCenter initWithDaemonDelegate:]._IMAVChatParticipantMediaStalledChangedNotification
-[TUCallCenter initWithDaemonDelegate:]._IDSServiceNameFaceTime
-[TUCallCenter dealloc]._IDSServiceNameFaceTime
-[TUCallCenter sourceAccount:]._IMPreferredAccountForService
-[TUCallCenter sourceAccount:]._pred_IMPreferredAccountForServiceIMCore
-[TUCallCenter _videoCallUserInfoForUserInfo:]._IMAVChatMediaStalledKey
-[TUCallCenter _videoCallUserInfoForUserInfo:]._IMAVChatVideoDegradedKey
-[TUCallCenter _videoCallUserInfoForUserInfo:]._IMAVChatPauseStateKey
-[TUCallCenter _videoCallUserInfoForUserInfo:]._IMAVChatCameraTypeKey
-[TUCallCenter _videoCallUserInfoForUserInfo:]._IMAVChatFirstFrameCameraKey
___NotificationsSuspended
___DisplayedCallsDirty
___ConferenceParticipantsDirty
+[TUCallCapabilities supportsHostingTelephonyCalls].sSupportsHostingTelephonyCalls
+[TUCallCapabilities supportsHostingTelephonyCalls].onceToken
+[TUCallCapabilities supportsHostingFaceTimeAudioCalls].sSupportsHostingFaceTimeAudioCalls
+[TUCallCapabilities supportsHostingFaceTimeAudioCalls].onceToken
+[TUCallCapabilities supportsHostingFaceTimeVideoCalls].sSupportsHostingFaceTimeVideoCalls
+[TUCallCapabilities supportsHostingFaceTimeVideoCalls].onceToken
+[TUCallCapabilities supportsDisplayingFaceTimeAudioCalls].sSupportsDisplayingFaceTimeAudioCalls
+[TUCallCapabilities supportsDisplayingFaceTimeAudioCalls].onceToken
+[TUCallCapabilities supportsDisplayingFaceTimeVideoCalls].sSupportsDisplayingFaceTimeVideoCalls
+[TUCallCapabilities supportsDisplayingFaceTimeVideoCalls].onceToken
_hasSetUpCTCapabilitiesSupport
_sWiFiCallingCapabilityInformation
_supportsRelayCallingToken
_sSupportsRelayCalling
_canEnableRelayCallingToken
_sCanEnableRelayCalling
_relayCallingEnabledToken
_sRelayCallingEnabled
_hasSetUpRelayCapabilitiesSupport
+[TUAVConferenceInterface sharedInstance].__sharedInstance
+[TUAVConferenceInterface sharedInstance].onceToken
-[TUAVConferenceInterface _startAudioSession]._kCMSessionProperty_AudioCategory
-[TUAVConferenceInterface _startAudioSession]._kCMSessionProperty_AudioMode
-[TUAVConferenceInterface _startAudioSession]._kCMSessionProperty_ClientPriority
-[TUAVConferenceInterface _startAudioSession]._kCMSessionAudioCategory_PlayAndRecord_NoBluetooth
-[TUAVConferenceInterface _startAudioSession]._kCMSessionAudioMode_RemoteVoiceChat
___67-[TUAVConferenceInterface conference:didStartSession:withUserInfo:]_block_invoke._GKSDidStartParameter_Error
+[TUICFInterface serviceIdentifierForService:]._ICFServiceIdentifierTelephony
+[TUICFInterface serviceIdentifierForService:]._ICFServiceIdentifierFaceTimeAudio
+[TUICFInterface serviceIdentifierForService:]._ICFServiceIdentifierFaceTime
+[TUICFInterface allowCallForDestinationID:service:completionHandler:]._ICFCallProviderShouldAllowIncomingCall
+[TUICFInterface allowCallForDestinationID:service:completionHandler:]._pred_ICFCallProviderShouldAllowIncomingCallIncomingCallFilter
-[TUProxyCall audioCategory]._kCMSessionAudioCategory_PlayAndRecord_NoBluetooth
-[TUProxyCall audioMode]._kCMSessionAudioMode_RemoteVoiceChat
_CNFFaceTimeURLAddressBookUIDKey
_CNFFaceTimeURLCallBarsOffscreenKey
_CNFFaceTimeURLCallWaitingKey
_CNFFaceTimeURLConferenceIDKey
_CNFFaceTimeURLCountryCodeKey
_CNFFaceTimeURLLockScreenKey
_CNFFaceTimeURLUpgradeKey
_IDSCopyCanonicalAddressForDestinationID
_OBJC_CLASS_$_TUAVConferenceConnection
_OBJC_CLASS_$_TUAVConferenceInterface
_OBJC_CLASS_$_TUAccountsController
_OBJC_CLASS_$_TUAudioController
_OBJC_CLASS_$_TUAudioSystemController
_OBJC_CLASS_$_TUCall
_OBJC_CLASS_$_TUCallCapabilities
_OBJC_CLASS_$_TUCallCenter
_OBJC_CLASS_$_TUCallCenterCallModelState
_OBJC_CLASS_$_TUCallCenterCallsCache
_OBJC_CLASS_$_TUCallGroup
_OBJC_CLASS_$_TUCallModel
_OBJC_CLASS_$_TUCallModelState
_OBJC_CLASS_$_TUCallServicesInterface
_OBJC_CLASS_$_TUFaceTimeAudioCall
_OBJC_CLASS_$_TUFaceTimeAudioCallModel
_OBJC_CLASS_$_TUFaceTimeCall
_OBJC_CLASS_$_TUFaceTimeVideoCall
_OBJC_CLASS_$_TUHardPauseController
_OBJC_CLASS_$_TUICFInterface
_OBJC_CLASS_$_TUIDSUtilities
_OBJC_CLASS_$_TULogging
_OBJC_CLASS_$_TUProxyCall
_OBJC_CLASS_$_TUProxyCallModel
_OBJC_IVAR_$_TUCall._abLabel
_OBJC_IVAR_$_TUCall._abUid
_OBJC_IVAR_$_TUCall._companyName
_OBJC_IVAR_$_TUCall._displayName
_OBJC_IVAR_$_TUCall._displayNameBreakPoint
_OBJC_IVAR_$_TUCall._overrideName
_OBJC_IVAR_$_TUCall._phoneCallFlags
_OBJC_METACLASS_$_TUAVConferenceConnection
_OBJC_METACLASS_$_TUAVConferenceInterface
_OBJC_METACLASS_$_TUAccountsController
_OBJC_METACLASS_$_TUAudioController
_OBJC_METACLASS_$_TUAudioSystemController
_OBJC_METACLASS_$_TUCall
_OBJC_METACLASS_$_TUCallCapabilities
_OBJC_METACLASS_$_TUCallCenter
_OBJC_METACLASS_$_TUCallCenterCallModelState
_OBJC_METACLASS_$_TUCallCenterCallsCache
_OBJC_METACLASS_$_TUCallGroup
_OBJC_METACLASS_$_TUCallModel
_OBJC_METACLASS_$_TUCallModelState
_OBJC_METACLASS_$_TUCallServicesInterface
_OBJC_METACLASS_$_TUFaceTimeAudioCall
_OBJC_METACLASS_$_TUFaceTimeAudioCallModel
_OBJC_METACLASS_$_TUFaceTimeCall
_OBJC_METACLASS_$_TUFaceTimeVideoCall
_OBJC_METACLASS_$_TUHardPauseController
_OBJC_METACLASS_$_TUICFInterface
_OBJC_METACLASS_$_TUIDSUtilities
_OBJC_METACLASS_$_TULogging
_OBJC_METACLASS_$_TUProxyCall
_OBJC_METACLASS_$_TUProxyCallModel
_TUAVConferenceConnectionClosedNotification
_TUAccountsControllerOutgoingRelayCallerIDChangedNotification
_TUActiveCountryCode
_TUAddDarwinObserver
_TUAddLocalNSObserver
_TUAddLocalObserver
_TUAudioSystemAudioPickableRoutesChanged
_TUAudioSystemDownlinkMuteStatusChangedNotification
_TUAudioSystemTTYChangedNotification
_TUAudioSystemUplinkMuteStatusChangedNotification
_TUBundle
_TUBundleIdentifier
_TUCallCapabilitiesEmergencyAddressKey
_TUCallCapabilitiesPostDataKey
_TUCallCapabilitiesRelayCallingChangedNotification
_TUCallCapabilitiesStatusKey
_TUCallCapabilitiesSupportsTelephonyCallsChangedNotification
_TUCallCapabilitiesTermsAndConditionsKey
_TUCallCapabilitiesURLKey
_TUCallCapabilitiesWiFiCallingChangedNotification
_TUCallCenterCall
_TUCallCenterCallAudioChangedNotification
_TUCallCenterCallAudioChangedSourceKey
_TUCallCenterCallAudioFinishedNotification
_TUCallCenterCallConnectedNotification
_TUCallCenterCallContinuityStateChangedNotification
_TUCallCenterCallControlErrorCode
_TUCallCenterCallFailureNotification
_TUCallCenterCallFilteredNotification
_TUCallCenterCallHistoryReadyNotification
_TUCallCenterCallId
_TUCallCenterCallInvitationSentNotification
_TUCallCenterCallManagesAudioInterruptionsChangedNotification
_TUCallCenterCallPhoneNumber
_TUCallCenterCallSource
_TUCallCenterCallStateDisconnectedReasonKey
_TUCallCenterCallStateEndpointOnCurrentDeviceKey
_TUCallCenterCallStateWantsHoldMusicKey
_TUCallCenterCallStatus
_TUCallCenterCallStatusChangedInternalNotification
_TUCallCenterCallStatusChangedNotification
_TUCallCenterCallStatusOnDefaultPairedDeviceChangedNotification
_TUCallCenterCallWantsHoldMusicChangedNotification
_TUCallCenterCallerIDChangedInternalNotification
_TUCallCenterCallerIDChangedNotification
_TUCallCenterCallerUnavailableAlternateButton
_TUCallCenterCallerUnavailableAlternateButtonURL
_TUCallCenterCallerUnavailableCall
_TUCallCenterCallerUnavailableMessage
_TUCallCenterCallerUnavailableNotification
_TUCallCenterCallerUnavailableOtherButton
_TUCallCenterCallerUnavailableOtherButtonURL
_TUCallCenterCallerUnavailableTitle
_TUCallCenterCauseCodeNotification
_TUCallCenterChangedIncomingCallNotification
_TUCallCenterConferenceParticipantsChangedNotification
_TUCallCenterControlFailureNotification
_TUCallCenterDisconnectingLastCallNotification
_TUCallCenterDisplayedCallsChangedNotification
_TUCallCenterEmergencyCallBackModeChangedNotification
_TUCallCenterInCallServiceDidAppearNotification
_TUCallCenterInCallServiceLocalVideoDidAppearNotification
_TUCallCenterModelStateChangedNotification
_TUCallCenterResetCallStateNotification
_TUCallCenterRestartNotification
_TUCallCenterVideoCallCameraTypeKey
_TUCallCenterVideoCallConnectedNotification
_TUCallCenterVideoCallFirstFrameCameraKey
_TUCallCenterVideoCallFirstLocalFrameNotification
_TUCallCenterVideoCallFirstRemoteFrameNotification
_TUCallCenterVideoCallInvitationSentNotification
_TUCallCenterVideoCallMediaPropertiesChangedNotification
_TUCallCenterVideoCallMediaStalledChangedNotification
_TUCallCenterVideoCallMediaStalledKey
_TUCallCenterVideoCallPauseChangedNotification
_TUCallCenterVideoCallPauseStateKey
_TUCallCenterVideoCallScreenPropertiesChangedNotification
_TUCallCenterVideoCallStatusChangedNotification
_TUCallCenterVideoCallVideoDegradedKey
_TUCallCenterVideoCallVideoQualityChangedNotification
_TUCallDisplayNameChangedNotification
_TUCallFaceTimeIDStatusChangedNotification
_TUCallIdentityChangedNotification
_TUCallManagesAudioInterruptionsChangedNotification
_TUCallModelFaceTimeAudioCallModelDidChangeNotification
_TUCallServicesDaemonIdentifier
_TUCarrierBundleDomain
_TUCarrierBundlePhoneRecentsDialsAddressBookKey
_TUCarrierBundleVisualVoicemailServiceNameKey
_TUConvertDestinationIDToLatinNumbers
_TUCountryCodeForIncomingCall
_TUDialAssistDomain
_TUDialAssistIsEnabled
_TUDialAssistStatusChangedNotification
_TUFaceTimeBundleIdentifier
_TUFaceTimeCallTemporaryConferenceIDPrefix
_TUFormatBytesToHumanReadableString
_TUFormattedPhoneNumber
_TUGetBooleanDefaultInDomains
_TUGetMyProcessName
_TUGetProcessNameForPid
_TUGuaranteeExecutionOnMainThreadAsync
_TUGuaranteeExecutionOnMainThreadSync
_TUHardPauseControllerChangedNotification
_TUHomeCountryCode
_TUIDSABPersonUniqueIDKey
_TUIDSAddressesKey
_TUIDSServiceAvailableKey
_TUIDSServiceBecameAvailableNotification
_TUIDSServiceTypeKey
_TUISOCountryCodeForMCC
_TUInCallRemoteAlertViewControllerClassName
_TUIsEmergencyNumber
_TULocalizedCarrierName
_TULoggingShouldLogChangedNotification
_TUMarkCallsAsReadRetrying
_TUMobilePhoneBundleIdentifier
_TUMobilePhoneDomain
_TUMobilePhoneLogDialAssistKey
_TUNetworkCountryCode
_TUNumberToDial
_TUNumberToDialOptionsAddressBookMultiValueIdentifierKey
_TUNumberToDialOptionsAddressBookRecordRefKey
_TUNumberToDialOptionsSuppressLocalAssistKey
_TUNumberWithOldStylePausesTransformed
_TUPowerLogBundleIdentifierKey
_TUPowerLogEventName
_TUPowerLogStatusCallBackgrounded
_TUPowerLogStatusCallForegrounded
_TUPowerLogStatusCallStart
_TUPowerLogStatusCallStop
_TUPowerLogStatusKey
_TURecentsShouldDialMatchedAddressBookEntry
_TURecursiveSize
_TUSetBooleanDefaultInDomains
_TUStringKeyForNetwork
_TUStringKeyForPlatform
_TUStringKeyForProduct
_TUUnderlyingCallModelChangedNotification
_TUUnformattedPhoneNumber
_TUUpdatePowerLogCallBackgrounded
_TUUpdatePowerLogCallForegrounded
_TUUpdatePowerLogCallStart
_TUUpdatePowerLogCallStop
__FormatDestinationID
__TUAddObserver
__TUAssertShouldCrashApplication
__TUNumberToDialForNumber
__TUOptionsDictionaryGetRecentInformation
__TURecursiveSize
___forceInternationalAssist
___internationalAssistListenersRegistered
__updateCallStatePowerLogForBundleIdenfierAndStatus
_kFaceTimeAcceptScheme
_kFaceTimeAppIdentifier
_kFaceTimeAudioAcceptScheme
_kFaceTimeAudioLockScheme
_kFaceTimeAudioOption
_kFaceTimeAudioPromptScheme
_kFaceTimeAudioScheme
_kFaceTimeAudioShowScheme
_kFaceTimeLaunchForIncomingCallOption
_kFaceTimeLockScheme
_kFaceTimeNoPromptOption
_kFaceTimePromptScheme
_kFaceTimeScheme
_kFaceTimeShowScheme
_kFaceTimeTelephonyScheme
_kIMAVChatHostIdentifier
_kInCallServiceIdentifier
_kMobilePhoneAppIdentifier
_kTUCallCenterIDSIDQueryListenerID
_CFAbsoluteTimeGetCurrent
_CFArrayBSearchValues
_CFBooleanGetTypeID
_CFBooleanGetValue
_CFDateGetAbsoluteTime
_CFEqual
_CFGetTypeID
_CFNotificationCenterAddObserver
_CFNotificationCenterGetDarwinNotifyCenter
_CFNotificationCenterGetLocalCenter
_CFPhoneNumberCopyNumberForInternationalAssist
_CFPhoneNumberCopyNumberForLocalAssist
_CFPhoneNumberCreate
_CFPreferencesAppSynchronize
_CFPreferencesCopyAppValue
_CFPreferencesCopyValue
_CFPreferencesGetAppBooleanValue
_CFPreferencesSetAppValue
_CFPreferencesSetValue
_CFPreferencesSynchronize
_CFRelease
_CUTWeakLinkClass
_CUTWeakLinkSymbol
_IMCopyStringWithLatinNumbers
_IMFormatPhoneNumber
_IMLogCurrentBacktrace_V
_IMLogString_V
_IMShouldLog
_IMStringIsPhoneNumber
_IMStripFormattingFromAddress
_IMSyncLoggingsPreferences
_IMWeakLinkClass
_IMWeakLinkSymbol
_NSHomeDirectory
_NSLocaleCountryCode
_NSLocalizedFailureReasonErrorKey
_NSLog
_OBJC_CLASS_$_CUTWeakReference
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSMapTable
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotification
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSNumberFormatter
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUUID
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSXPCConnection
_OBJC_CLASS_$_NSXPCInterface
_OBJC_METACLASS_$_NSObject
_PNCopyFormattedStringWithCountry
_PNIsValidPhoneNumberForCountry
__Block_object_assign
__Block_object_dispose
__IMLoggingBeginSession
__IMLoggingEndSession
__IMLoggingNoteCheckpoint_V
__IMLoggingPulse
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__PNCreateStringByStrippingFormattingAndNotVisiblyAllowable
__Unwind_Resume
___CFConstantStringClassReference
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__objc_empty_cache
_ceil
_dispatch_after
_dispatch_async
_dispatch_get_global_queue
_dispatch_group_async
_dispatch_group_create
_dispatch_group_enter
_dispatch_group_leave
_dispatch_group_wait
_dispatch_once
_dispatch_queue_create
_dispatch_release
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_set_target_queue
_dispatch_sync
_dispatch_time
_floor
_free
_getpid
_kABEmailProperty
_kABFirstNameProperty
_kABPhoneProperty
_kCFBooleanFalse
_kCFBooleanTrue
_kCFPreferencesAnyHost
_kCFPreferencesCurrentHost
_kCFPreferencesCurrentUser
_mach_absolute_time
_malloc
_notify_cancel
_notify_get_state
_notify_post
_notify_register_dispatch
_notify_set_state
_objc_enumerationMutation
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_setProperty_atomic
_objc_setProperty_atomic_copy
_objc_setProperty_nonatomic
_objc_setProperty_nonatomic_copy
_sysctl
dyld_stub_binder
