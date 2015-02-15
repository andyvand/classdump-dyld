-[QTCaptureSession outputs]
-[QTCaptureSession addOutput:error:]
-[QTCaptureOutput session]
-[QTCaptureOutput _setSession:]
-[QTCaptureSession _beginSessionUpdates]
-[QTCaptureSession _stopAndTearDownGraph]
-[QTCaptureSession captureGraph]
-[QTCaptureSession _graphIsInitialized]
-[QTCaptureDecompressedVideoOutput connectionMediaTypes]
-[QTCaptureSession _endSessionUpdates]
-[QTCaptureSession _deferredBuildAndRunGraph]
-[QTCaptureDecompressedAudioOutput init]
-[QTCaptureOutput init]
-[QTCaptureDecompressedAudioOutputInternal init]
-[QTCaptureDecompressedAudioOutput setDelegate:]
-[QTCaptureDecompressedAudioOutput connectionMediaTypes]
-[QTCaptureSession startRunning]
-[QTCaptureSession isRunning]
-[QTCaptureSession setRunning:]
-[QTMovieLayer init]
-[QTMovieLayer initWithMovie:]
-[QTMovieLayer setMovie:]
-[QTCaptureSession inputs]
-[QTCaptureSession stopRunning]
+[QTMovie movieUnfilteredPasteboardTypes]
-[QTCaptureSession sessionIsReadyToBuildAndRunGraph:]
-[QTCaptureSession _buildAndRunGraph]
+[QTCaptureDevice defaultInputDeviceWithMediaType:]
+[QTCaptureDevice _registeredDeviceClassNames]
+[QTCaptureHALDevice defaultInputDeviceWithMediaType:]
+[QTCaptureDALDevice defaultInputDeviceWithMediaType:]
+[QTCaptureDevice inputDevicesWithMediaType:]
+[QTCaptureDevice inputDevices]
+[QTCaptureDALDevice devicesWithIOType:]
+[QTCaptureDALDevice _refreshDevices]
-[QTCaptureDALDevice initWithUniqueID:deviceID:]
-[QTCaptureDevice init]
-[QTCaptureDALDevice setDeviceID:]
-[QTCaptureDALDevice uniqueID]
-[QTCaptureDevice deviceConnectionWillChange]
-[QTCaptureDALDevice _refreshAttributes]
-[QTCaptureDALDevice _refreshStreams]
-[QTCaptureDALDevice deviceID]
-[QTCaptureDALDevice _refreshFormatDescriptionsAttribute]
+[QTFormatDescription formatDescriptionWithFigFormatDescription:]
-[QTFormatDescription initWithFigFormatDescription:]
-[QTFormatDescription init]
-[QTCaptureDALDevice _refreshLinkedDevicesAttribute]
-[QTCaptureDevice setLinkedDevices:]
+[QTCaptureDevice _linkedDevicesLock]
-[QTCaptureDevice linkedDevices]
-[QTCaptureDevice willChangeAttributeForKey:]
-[QTCaptureDevice didChangeAttributeForKey:]
-[QTCaptureDALDevice _refreshSuspendedAttribute]
-[QTCaptureDALDevice attributeForKey:]
-[QTCaptureDALDevice _refreshIsInUseByAnotherApplication]
-[QTCaptureDALDevice isConnected]
-[QTCaptureDevice isOpen]
-[QTCaptureDevice deviceConnectionDidChange]
-[QTCaptureDevice hasMediaType:]
-[QTCaptureDALDevice formatDescriptions]
-[QTFormatDescription mediaType]
-[QTFormatDescription figFormatDescription]
-[QTCaptureDALDevice isInUseByAnotherApplication]
-[QTCaptureDALDevice transportType]
-[QTCaptureDevice open:]
-[QTCaptureDevice _startUsingDevice:]
-[QTCaptureDALDevice startUsingDevice:]
+[QTCaptureDeviceInput deviceInputWithDevice:]
-[QTCaptureDALDevice startDeviceAVCControlsPoller]
-[QTCaptureDeviceInput initWithDevice:]
-[QTCaptureInput init]
-[QTCaptureDeviceInput setAutomaticallyConfiguresDevice:]
-[QTCaptureDeviceInput _setDevice:]
-[QTCaptureSession addInput:error:]
-[QTCaptureInput session]
-[QTCaptureInput _setSession:]
-[QTCaptureDeviceInput connections]
-[QTCaptureDeviceInput device]
+[QTCaptureConnection connectionWithOwner:mediaType:formatDescription:attributes:]
-[QTCaptureConnection initWithOwner:mediaType:formatDescription:attributes:]
-[QTCaptureConnection init]
-[QTCaptureSession _createOutputConnectionsForInputConnection:]
-[QTCaptureConnection mediaType]
-[QTCaptureOutput canAddConnectionForMediaType:]
-[QTCaptureSession _createConnectionForOutput:fromInputConnection:]
-[QTCaptureDecompressedVideoOutput addConnection:error:]
-[QTCaptureDecompressedVideoOutput connections]
-[QTCaptureDecompressedVideoOutput setPixelBufferAttributes:]
-[QTCaptureDecompressedVideoOutput pixelBufferAttributes]
-[QTCaptureSession decompressionRequirementsDidChangeForConnection:]
-[QTCaptureSession _rebuildGraph]
-[QTCaptureSessionInternalState init]
-[QTCaptureSessionInternalState graph]
-[QTCaptureDeviceInput notReadyError]
-[QTCaptureConnection isEnabled]
-[QTCaptureSession _buildGraphUnitsForInputConnection:error:]
-[QTCaptureConnection owner]
-[QTCaptureDeviceInput addInputUnitsForConnection:toGraph:ofCaptureSession:error:]
-[QTCaptureDevice connectionUnit]
_CMIOGraphUnusedNodeIndexForNodeFunctionalDesignation
-[QTCaptureDALDevice connectionUnitComponentSubType]
-[QTMediaIOGraphUnitDescription initWithGraphNode:ofGraph:]
-[QTMediaIOGraphUnitDescription setGraph:]
-[QTMediaIOGraphUnitDescription setGraphNode:]
-[QTCaptureDeviceInput connectionUnitOutputNumberForConnection:]
-[QTCaptureDeviceInput connectionGraphNodeForConnection:]
-[QTMediaIOGraphUnitDescription graphNode]
-[QTCaptureConnection setGraph:node:element:scope:]
+[QTCallbackRegistry sharedCallbackRegistry]
-[QTCallbackRegistry init]
-[QTCallbackRegistry registerCallbackObserver:]
-[QTCaptureConnection node]
-[QTCaptureConnection element]
-[QTCaptureConnection scope]
-[QTCaptureSession _buildSupportUnitsForVideoInputConnection:error:]
-[QTCaptureSession _resolvedDecompressionOptionsForInputConnection:alsoRequiresDeviceNative:]
-[QTCaptureOutput notReadyError]
-[QTCaptureDecompressedVideoOutput videoDecompressionRequirementForConnection:]
-[QTResolvedDecompressionOptions init]
-[QTCaptureDecompressedVideoOutput videoDecompressionAttributesForVideoConnection:]
-[QTCaptureDecompressedVideoOutput deinterlacesVideo]
-[QTCaptureDecompressedVideoOutput minimumVideoFrameInterval]
-[QTResolvedDecompressionOptions resolveDecompressionAttributes:]
-[QTCaptureDeviceInput clockProviderNodeForConnection:]
-[QTResolvedDecompressionOptions vtDecompressionProperties]
-[QTResolvedDecompressionOptions pixelBufferAttributes]
-[QTResolvedDecompressionOptions allowUpscaling]
_CMIOGraphConnectNodeToFanOutNode
-[QTResolvedDecompressionOptions minimumVideoFrameInterval]
+[QTMediaIOGraphNodeList nodeListWithNodes:count:]
-[QTMediaIOGraphNodeList initWithNodes:count:]
-[QTCaptureSessionInternalState supportUnitsForConnections]
-[QTCaptureDeviceInput sessionWillUseOutputDecompressionOptions:forConnection:]
-[QTCaptureDeviceInput automaticallyConfiguresDevice]
-[QTCaptureDALDevice deviceSystem]
_QTCMIODeviceConfigureToBestMatchPixelBufferAttributesAndMinimumFrameInterval
-[QTCaptureSession _buildGraphUnitsForOutputConnection:error:]
-[QTCaptureDecompressedVideoOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
+[QTMediaIOGraphUnitDescription graphUnitDescriptionWithGraphNode:ofGraph:]
-[QTBackgroundQueue init]
-[QTCaptureDecompressedVideoOutput automaticallyDropsLateVideoFrames]
-[QTBackgroundQueue setQueueLimit:]
+[QTCaptureDecompressedVideoOutputCallbackData callbackDataWithOutput:connection:backgroundQueue:]
-[QTCaptureDecompressedVideoOutputCallbackData initWithOutput:connection:backgroundQueue:]
_ConsumerCopyAvailableFormats
-[QTCaptureSession _connectGraphUnitsForVideoOutputConnection:error:]
-[QTMediaIOGraphNodeList count]
-[QTMediaIOGraphNodeList nodeAtIndex:]
-[QTCaptureDecompressedVideoOutput connectionUnitInputNumberForConnection:]
-[QTCaptureDecompressedVideoOutput connectionGraphNodeForConnection:]
-[QTCaptureDecompressedAudioOutput connections]
-[QTCaptureSession _setupMasterSynchronizers]
-[QTCaptureSession _configureAudioDecoderConverters]
-[QTCaptureOutput graphWillStartForSession:]
-[QTCaptureInput graphWillStartForSession:]
_ConsumerInitialize
_ConsumerCopyClock
_ConsumerStart
-[QTResolvedDecompressionOptions dealloc]
_StreamFormatDescriptionListener
-[QTCaptureDALDevice _refreshFormatDescriptionsAttributeFromCallback]
_ConsumerCanRenderNow
_ConnectionFormatDescriptionListener
-[QTCallbackRegistry callbackObserver:]
-[QTCaptureConnection _updateFormatDescriptionFromPropertyListener]
-[QTCaptureConnection _updateFormatDescription]
-[QTCaptureConnection graph]
-[QTFormatDescription dealloc]
_ConsumerRender
-[QTCaptureDecompressedVideoOutputCallbackData connection]
-[QTCaptureDecompressedVideoOutputCallbackData output]
+[QTSampleBuffer sampleBufferWithFigSampleBuffer:]
-[QTSampleBuffer initWithFigSampleBuffer:]
-[QTCaptureDecompressedVideoOutputCallbackData backgroundQueue]
-[QTBackgroundQueue enqueueWithTarget:]
-[QTBackgroundQueue methodSignatureForSelector:]
-[QTBackgroundQueue forwardInvocation:]
-[QTBackgroundQueue enqueueInvocation:]
_QTBackgroundQueueRun
-[QTBackgroundQueue queueLimit]
-[QTCaptureDecompressedVideoOutput _outputVideoFrame:withSampleBuffer:fromConnection:]
-[QTCaptureDecompressedVideoOutput outputVideoFrame:withSampleBuffer:fromConnection:]
-[QTCaptureDecompressedVideoOutput delegate]
-[QTSampleBuffer duration]
-[QTSampleBuffer retainedFigSampleBuffer]
-[QTSampleBuffer presentationTime]
-[QTCaptureDecompressedVideoOutput backgroundQueue:invocationWasCanceled:]
-[QTSampleBuffer(QTSampleBuffer_UseCount) decrementSampleUseCount]
-[QTSampleBuffer dealloc]
+[QTCaptureHALDevice deviceWithUniqueID:]
+[QTCaptureHALDevice _refreshDevicesWithIOType:]
-[QTCaptureHALDevice initWithUniqueID:deviceID:IOType:]
-[QTCaptureHALDevice setDeviceID:]
-[QTCaptureHALDevice uniqueID]
-[QTCaptureHALDevice IOType]
-[QTCaptureHALDevice _refreshAttributes]
-[QTCaptureHALDevice _refreshFormatDescriptionsAttribute]
-[QTCaptureHALDevice deviceID]
-[QTCaptureHALDevice _refreshInputSourceAttributes]
-[QTCaptureHALDevice isConnected]
-[QTCaptureHALDevice startUsingDevice:]
+[QTCaptureHALDevice devicesWithIOType:]
-[QTCaptureSession _graphIsRunning]
-[QTCaptureSession _stopError]
+[NSError(QTError_Initializers) qt_localizedErrorWithDomain:code:userInfo:]
-[QTCaptureOutput graphWillStopForSession:dueToError:]
-[QTCaptureInput graphWillStopForSession:dueToError:]
_ConsumerStop
_ConsumerUninitialize
-[QTCaptureConnection _removeFormatDescriptionPropertyListener]
-[QTCallbackRegistry unregisterCallbackObserver:]
-[QTCaptureConnection detachFromAudioMixerNode]
-[QTCaptureDeviceInput removeInputUnitsForConnection:fromGraph:ofCaptureSession:]
-[QTCaptureDecompressedVideoOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
_ConsumerDeallocate
-[QTCaptureDecompressedVideoOutputCallbackData dealloc]
-[QTBackgroundQueue dealloc]
-[QTBackgroundQueue _stopWorkThread]
-[QTCaptureSessionInternalState invalidate]
_CMIOGraphRemoveAllNodes
-[QTCaptureSessionInternalState dealloc]
-[QTMediaIOGraphNodeList dealloc]
-[QTCaptureHALDevice formatDescriptions]
-[QTCaptureDecompressedAudioOutput addConnection:error:]
-[QTCaptureHALDevice connectionUnitComponentSubType]
-[QTCaptureSession _buildSupportUnitsForAudioInputConnection:error:]
-[QTCaptureConnection attachToAudioMixerNode:element:scope:isReadOnly:]
-[QTCaptureConnection extendedNodeInfo]
-[QTCaptureDecompressedAudioOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
-[QTCaptureDecompressedAudioOutput _applyCompressionOptionsForConnection:]
-[QTCaptureDecompressedAudioOutput compressionOptionsForConnection:]
-[QTMediaIOGraphUnitDescription graph]
+[QTCaptureDecompressedAudioOutputCallbackData callbackDataWithOutput:connection:backgroundQueue:]
-[QTCaptureDecompressedAudioOutputCallbackData initWithOutput:connection:backgroundQueue:]
-[QTCaptureSession _connectGraphUnitsForAudioOutputConnection:error:]
-[QTCaptureDecompressedAudioOutput connectionUnitInputNumberForConnection:]
-[QTCaptureDecompressedAudioOutput connectionGraphNodeForConnection:]
-[QTCaptureOutput getAudioMixerNode:andUnitElement:forConnection:]
-[QTCaptureConnection formatDescription]
-[QTFormatDescription attributeForKey:]
+[NSError(QTError_Initializers) qt_localizedUnknownErrorWithUnderlyingOSStatus:]
+[NSError(QTError_Initializers) qt_localizedErrorWithUnderlyingOSStatus:userInfo:]
-[QTCaptureSession _postRuntimeError:]
-[QTCaptureSession removeInput:]
-[QTCaptureConnection _clearAudioAttributePropertyListeners]
-[QTCaptureDecompressedAudioOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[QTCaptureDecompressedAudioOutputCallbackData dealloc]
-[QTCaptureSession _removeOutputConnectionsForInputConnection:]
-[QTCaptureSession _removeConnectionFromOutput:]
-[QTCaptureDecompressedAudioOutput removeConnection:]
-[QTCaptureConnection setOwner:]
-[QTCaptureDeviceInput dealloc]
-[QTCaptureConnection dealloc]
-[QTCaptureConnection _clearFormatDescription]
-[QTMovie initWithAttributes:error:]
-[QTMovie setRestrictedToPlaybackAPI:]
-[QTMovie _isAttributeAvailableForInitializing:exception:]
_QTDebugSettingGetKeyAsBOOL
+[QTMovie mediaHelperClassForAttributes:error:additionalAttributes:]
+[QTMovie_QuickTime initialize]
-[QTMovie_QuickTime initWithAttributes:error:forParent:]
+[QTKitServerController initialize]
-[QTKitServerController init]
+[QTKitServerController sharedServerController]
_archivableDictionary
_archivableAttribute
_serialize
+[QTKeyedArchiverDelegate initialize]
+[QTKeyedArchiverDelegate sharedArchiverDelegate]
-[QTKeyedArchiverDelegate archiver:willEncodeObject:]
-[QTKitServerController startUsingServerForObject:]
-[QTKitServerController setServerConnection:]
-[QTKitServerController setDelegatePort:]
+[QTDelegateController initialize]
+[QTDelegateController sharedDelegateController]
-[QTDelegateController setMessagePort:]
-[QTDelegateListenerThreadData init]
_listenOnDelegatePort
-[QTKitServerController setDelegateRunLoop:]
-[QTDelegateListenerThreadData dealloc]
-[QTKitServerController setDelegateThread:]
-[QTKitServerController setNotificationPort:]
+[QTNotificationController initialize]
+[QTNotificationController sharedNotificationController]
-[QTNotificationController setMessagePort:]
-[QTNotificationListenerThreadData init]
_listenOnNotificationPort
-[QTKitServerController setNotificationRunLoop:]
-[QTNotificationListenerThreadData dealloc]
-[QTKitServerController setNotificationThread:]
-[QTKitServerController setServerPort:]
-[QTKitServerController serverMachPort]
_setParentAppName
-[QTKitServerController serverQueue]
_initWithAttributes
_deSerializeErrorOutOfBuffer
-[QTMovie_QuickTime initWithProxy:attributes:forParent:]
-[QTKitServerController objectForProxy:]
-[QTMovieMediaHelper initWithAttributes:error:forParent:]
-[QTMovie_QuickTime setQTMovie:]
-[QTMovieMediaHelper qtMovie]
-[QTMovieMediaHelper setQTMovie:]
-[QTKitServerController addObjectToObjectList:]
-[QTMovie proxy]
-[QTMovie_QuickTime setDelegate:]
-[QTMovieMediaHelper setDelegate:]
-[QTDelegateController maskForDelegate:]
_setDelegate
_notification_callback
-[QTNotificationController setSharedAddress:]
-[QTNotificationController setSharedSize:]
-[QTNotificationController handleNotification]
_deSerialize
-[QTKitServerController stopUsingServerForObject:]
-[QTMovie initWithMediaHelper:error:]
-[QTMovie setMediaHelper:]
-[QTMovieMediaHelper willBecomeMediaHelperForMovie:]
-[QTMovie_QuickTime proxy]
-[QTMovie _attributeDidChange:]
+[QTMovie _didChangeNotificationNameForAttributeKey:]
-[QTMovieMediaHelper copyRenderingStateFromMediaHelper:]
-[QTMovieMediaHelper didBecomeMediaHelperForMovie:]
-[QTMovie alternatesForMediaType:]
-[QTMovie _primaryAlternateGroupForMediaType:]
-[QTMovie tracks]
-[QTMovie_QuickTime tracks]
_arrayOfTracksFromServerWithSelector
_getArrayOfTracks
-[QTMovie setDelegate:]
-[QTMovie duration]
-[QTMovie_QuickTime duration]
_timeFromServerWithSelector
_getQTTime
-[QTMovie dealloc]
-[QTKitServerController removeObjectFromObjectList:]
-[QTMovie_QuickTime dealloc]
_invalidate
_releaseProxy
-[QTMovieMediaHelper dealloc]
-[QTNotificationController postNotification:]
_unhookServer
-[QTKitServerController delegateRunLoop]
-[QTKitServerController notificationRunLoop]
-[QTKitServerController serverConnection]
+[QTCaptureDevice devicesWithIOType:]
-[QTCaptureDALDevice localizedDisplayName]
_QTClassicMovieControllerViewCallback_server_routine
__XQTClassicMovieControllerViewNeedsDisplay
_QTClassicMovieControllerViewCallback_server
_shutdownServer
_setBOOL
_getBOOL
_setLong
_getLong
_setFloat
_getFloat
_setNSString
_getNSString
_setNSDate
_getNSDate
_setQTTime
_getQTTimeWithQTTime
_setQTTimeRange
_getQTTimeRange
_setFixed
_getFixed
_canInitWithPasteboard
_canInitWithDataReferenceAndTypes
_movieFileTypes
_addTypesToArray
_init
_initWithError
_initWithMovie
_initToWritableDataReference
_deallocProxy
_objectToken
_movieControllerObjectToken
_movieStatus
_objectAttributes
_setObjectAttributes
_attributeForKey
_setAttributeForKey
_tracksOfMediaType
_tracksOfMediaCharacteristic
_trackOfIndex
_trackOfIndexAndType
_trackOfID
_description
_posterImageData
_hasFrameImageAtTime
_frameImageAtTimeWithAttributes
_movieFormatRepresentation
_movieFormatRepresentationAndAnchor
_writeToFileWithError
_writeToDataReferenceWithError
_saveSourceDataToDataReferenceWithError
_updateMovieFile
_autoplay
_autoplayAtRate
_play
_stop
_setPos
_setCurrentTimeInRange
_replaceSelectionWithSelectionFromMovie
_appendSelectionFromMovie
_insertSegmentOfObjectAtTime
_insertSegmentOfObjectScaledToRange
_addMovieScaledToSelection
_removeTrack
_insertEmptySegmentAt
_deleteSegment
_scaleSegment
_addImageWithAttributes
_addImageAtTimeWithAttributes
_generateApertureModeDimensions
_removeApertureModeDimensions
_imageSenderPortAndContext
_setUsesGWorlds
_setCornersAndDisplayClipRgn
_displayInWindowWithID
_synchronizePortWithWindow
_invalidatePort
_chapterCount
_chapters
_addChapters
_removeChapters
_startTimeOfChapter
_chapterIndexForTime
_chapterList
_chapterTrack
_deleteReferencesToTrack
_usesVisualContext
_albumArtworkMovie
_albumArtworkAttributes
_volumeMeteringEnabledOnMix
_setVolumeMeteringEnabledOnMix
_powerLevelsOnMix
_peakLevelsOnMix
_setAudioDevice
_setAudioChannelLayout
_audioChannelLayout
_setMatrix
_matrix
_matrixWithoutTranslation
_originalMovieMatrix
_setAffineTransform
_affineTransform
_centerPoint
_rotateAround
_scaleAround
_skewAround
_translate
_flipX
_flipY
_addTrackCopyMedia
_addToScrap
_controllerTypeAsLong
_step
_stepFrameForward
_stepFrameBackward
_setControllerActive
_setControllerSize
_isControllerButtonVis
_setControllerButtonVisible
_movieControllerHgt
_executeCommand
_copyAnnotationsAndUserDataToMovie
_nodeCount
_nodeAtIndex
_currentNode
_constraintsOfKind
_setConstraintsOfKind
_nudge
_goToNode
_zoom
_numDeviceChannels
_numBandLevels
_setNumberOfEqualizerBandLevels
_eqBandLevels
_dynamicFrameRate
_findText
_naturalSize
_currentSize
_setVisualBackgroundColor
_setVisualDrawsMovieBoxBackgroundColor
_setVisualMovieBoxBackgroundColor
_visualBackgroundColor
_visualMovieBoxBackgroundColor
_compositingMode
_setCurrentSize
_userDataAnnotations
_annotations
_annotationsExtended
_setAnnotationOfType
_externalMovie
_dataSize
_sizeOfDataAtTimeWithDur
_dataReferences
_dataReference
_setDataReference
_setDefaultDataReference
_userDataReference
_userDataOfTypeAtIndex
_setUserDataOfTypeAtIndex
_addUserDataOfType
_userDataCountOfType
_alternateTrack
_setSubtitles
_setMovieLanguage
_setChapterTrack
_timeCodeTrack
_disableComponent
_interactivityFeaturesArray
_missingComponentsArray
_commonMetadata
_metadataFormats
_metadataForFormat
_sendSandboxExtension
_trackMovie
_trackMedia
_apertureModeDimensionsForMode
_setApertureModeDimensionsForMode
_setTransferMode
_dimensions
_sourceDimensions
_position
_sourcePosition
_trackBounds
_trackScaledBounds
_operationColor
_targetTrackForInsertFromTrack
_chapterlist
_setChapterlist
_alternate
_setAlternate
_referenceByType
_setReferenceByType
_setBounds
_setScaledBounds
_setDimensions
_setSourceDimensions
_setPosition
_setSourcePosition
_setOperationColor
_setOperationColorWithNSColor
_resetMatrix
_clearMask
_invertMask
_currentWidth
_currentHeight
_defaultMatrix
_defaultRect
_rotate
_timeCodeString
_setCurrentWidth
_setCurrentHeight
_setWidthAndHeight
_sampleDescHandleWithVersion
_streamAtIndex
_audioStreamBasicDesc
_setColorProfile
_hasCharacteristic
_mediaTrack
_dataRefCount
_dataReferenceAtIndex
_setDataReferenceAtIndex
_setPlayHintsWithMask
_hotspotAtIndex
_triggerHotspot
_createMovieEditState
_destroyMovieEditState
_swapMovieEditStates
_initQTMovieViewServer
_setMovie
_updateGeometryOnQTMovieViewServer
_handleEvent
_initWithNeedsDisplayCallbackPortAndContext
_getControllerImage
_initWithDataRef
_initWithDataRefData
_initWithReferenceToFile
_initWithReferenceToURL
_initWithReferenceToData
_initWithReferenceToDataNameType
_dataRefHandle
_dataRefData
_dataRefType
_referenceFile
_referenceURL
_referenceData
_dataRefName
_mimeType
_setDataRef
_setDataRefType
_timeWithTimeRecord
_timeRecordWithTime
_timeWithTimeInterval
_timeIntervalWithTime
_timeWithValue
_scaleTime
_compareTime
_incrementTime
_decrementTime
_stringFromTime
_timeFromString
_timeIsIndefinite
_rangeFromTimeandDur
_timeInRange
_rangeIsEqualToRange
_rangeEnd
_unionRange
_intersectRange
_timeRangeFromString
_stringFromTimeRange
_stringForOSType
_osTypeForString
_isProForVersion
_validateQTProForVersion
_sitesInDLCache
_clearDLCacheForSite
_clearDLCache
_setTransportProtocolAndPort
_preferredLang
_isCoreImageAvail
_isHighAudioQuality
_fontNumberFromName
_fontNameFromNumber
_systemDirection
_applicationTextEncoding
_connectionSpeedFromPrefs
_languageFromPrefs
_openControlPanel
_setProcessProperty
_textEncodingFromLang
_boolForType
_mediaKeysForType
_addMediaKeyForType
_removeMediaKeyForType
_retainProxy
_isEqualToObject
_observeProxy
_unobserveProxy
_QTMachPortImageReceiver_server_routine
__XQTMachPortImageReceiverSetImageBufferForHostTime
__XQTMachPortImageReceiverSetIOSurfaceForHostTime
__XQTMachPortImageReceiverFlushImageBuffersAfterHostTime
_QTMachPortImageReceiver_server
_QTMachPortImageSenderStartSendingImages
_QTMachPortImageSenderStopSendingImages
_QTMachPortImageSenderSetPreferredAttributes
_QTMachPortImageSenderReleaseRemoteBuffer
-[QTAudioCompressionOptions initWithAudioStreamBasicDescription:channelLayout:magicCookie:]
+[QTAudioCompressionOptions compressionOptionsWithDescription:]
-[QTAudioCompressionOptions dealloc]
-[QTAudioCompressionOptions audioStreamBasicDescription]
-[QTAudioCompressionOptions channelLayout]
-[QTAudioCompressionOptions magicCookie]
-[QTAudioCompressionOptions mediaType]
-[QTAudioCompressionOptions localizedCompressionOptionsSummary]
-[QTAudioCompressionOptions isEqual:]
-[QTAudioCompressionOptions isEqualToCompressionOptions:]
+[QTCompressionOptions _compressionOptionsPropertyList]
+[QTCompressionOptions _canUseCompressionOptionsWithDescription:forVisibility:]
+[QTCompressionOptions compressionOptionsIdentifiersForMediaType:]
+[QTCompressionOptions compressionOptionsWithIdentifier:]
+[QTCompressionOptions compressionOptionsWithDescription:]
-[QTCompressionOptions init]
-[QTCompressionOptions _setIdentifier:]
-[QTCompressionOptions dealloc]
-[QTCompressionOptions mediaType]
-[QTCompressionOptions localizedDisplayName]
-[QTCompressionOptions localizedCompressionOptionsSummary]
-[QTCompressionOptions isEqualToCompressionOptions:]
-[QTCompressionOptions isRecommendedOnCurrentHardware]
+[QTDataReferenceEnumerator dataReferenceEnumeratorWithQTMovie:]
+[QTDataReferenceEnumerator dataReferenceEnumeratorWithQTMedia:]
-[QTDataReferenceEnumerator initWithQTMovie:]
-[QTDataReferenceEnumerator initWithQTMedia:]
-[QTDataReferenceEnumerator dealloc]
-[QTDataReferenceEnumerator nextObject]
-[QTDataReferenceEnumerator(QTDataReferenceEnumerator_Private) setEnumerator:]
-[QTDataReferenceEnumerator(QTDataReferenceEnumerator_Private) setMedia:]
-[QTFormatDescription initEmptyFormatDescriptionWithMediaType:]
-[QTFormatDescription finalize]
-[QTFormatDescription formatType]
-[QTFormatDescription localizedFormatSummary]
-[QTFormatDescription quickTimeSampleDescription]
-[QTFormatDescription formatDescriptionAttributes]
-[QTFormatDescription valueForUndefinedKey:]
-[QTFormatDescription _scaledVideoSizeUsingCleanAperture:]
-[QTFormatDescription isEqual:]
-[QTFormatDescription isEqualToFormatDescription:]
-[QTSampleBuffer init]
-[QTSampleBuffer finalize]
-[QTSampleBuffer bytesForAllSamples]
-[QTSampleBuffer lengthForAllSamples]
-[QTSampleBuffer _cacheCVImageBufferAsCVPixelBufferIfNecessary:]
-[QTSampleBuffer formatDescription]
-[QTSampleBuffer decodeTime]
-[QTSampleBuffer numberOfSamples]
-[QTSampleBuffer sampleBufferAttributes]
-[QTSampleBuffer attributeForKey:]
-[QTSampleBuffer SMPTETime]
-[QTSampleBuffer dateRecorded]
-[QTSampleBuffer sceneChangeType]
-[QTSampleBuffer _SMPTETime]
-[QTSampleBuffer _getDVVideoInfo:fromFigSampleBuffer:]
-[QTSampleBuffer _dateRecorded]
-[QTSampleBuffer _sceneChangeType]
-[QTSampleBuffer _hostTime]
-[QTSampleBuffer valueForUndefinedKey:]
-[QTSampleBuffer(QTSampleBuffer_UseCount) sampleUseCount]
-[QTSampleBuffer(QTSampleBuffer_UseCount) incrementSampleUseCount]
-[QTSampleBuffer(QTAudioSampleInfo) audioBufferListWithOptions:]
-[QTSampleBuffer(QTAudioSampleInfo) getAudioStreamPacketDescriptions:inRange:]
+[QTTimeValue valueWithQTTime:]
-[QTTimeValue QTTimeValue]
-[QTTimeValue getValue:]
-[QTTimeValue objCType]
+[NSValue(NSValueQTTimeExtensions) valueWithQTTime:]
-[NSValue(NSValueQTTimeExtensions) QTTimeValue]
+[NSNumber(NSNumberQTTimeExtensions) valueWithQTTime:]
-[NSNumber(NSNumberQTTimeExtensions) QTTimeValue]
-[NSCoder(NSQTTimeCoding) encodeQTTime:forKey:]
-[NSCoder(NSQTTimeCoding) decodeQTTimeForKey:]
+[NSValue(NSValueQTSMPTETimeExtensions) valueWithSMPTETime:]
-[NSValue(NSValueQTSMPTETimeExtensions) SMPTETimeValue]
-[NSCoder(NSCoderQTSMPTETimeCoding) encodeSMPTETime:forKey:]
-[NSCoder(NSCoderQTSMPTETimeCoding) decodeSMPTETimeForKey:]
+[NSValue(NSValueQTTimeRangeExtensions) valueWithQTTimeRange:]
-[NSValue(NSValueQTTimeRangeExtensions) QTTimeRangeValue]
-[NSCoder(NSQTTimeRangeCoding) encodeQTTimeRange:forKey:]
-[NSCoder(NSQTTimeRangeCoding) decodeQTTimeRangeForKey:]
-[QTVideoCompressionOptions initWithCodecType:sizeMode:width:height:vtCompressionProperties:]
+[QTVideoCompressionOptions compressionOptionsWithDescription:]
-[QTVideoCompressionOptions dealloc]
-[QTVideoCompressionOptions codecType]
-[QTVideoCompressionOptions sizeMode]
-[QTVideoCompressionOptions width]
-[QTVideoCompressionOptions height]
-[QTVideoCompressionOptions compressedSizeForOriginalSize:]
-[QTVideoCompressionOptions vtCompressionProperties]
-[QTVideoCompressionOptions _preferredInputPixelBufferAttributes]
_DummyEncodedFrameOutputCallback
-[QTVideoCompressionOptions mediaType]
-[QTVideoCompressionOptions localizedCompressionOptionsSummary]
-[QTVideoCompressionOptions isEqual:]
-[QTVideoCompressionOptions isEqualToCompressionOptions:]
-[QTVideoCompressionOptions isRecommendedOnCurrentHardware]
+[QTHotspot hotspotWithProxy:]
-[QTHotspot initWithProxy:]
-[QTHotspot proxy]
-[QTHotspot finalize]
-[QTHotspot dealloc]
-[QTHotspot invalidate]
-[QTHotspot node]
-[QTHotspot setNode:]
-[QTHotspot description]
-[QTHotspot index]
-[QTHotspot uniqueID]
-[QTHotspot comments]
-[QTHotspot enabled]
-[QTHotspot link]
-[QTHotspot name]
-[QTHotspot type]
-[QTHotspot hotspotType]
-[QTHotspot setEnabled:]
-[QTHotspot triggerHotspot]
+[QTHotspotEnumerator hotspotEnumeratorWithNode:]
-[QTHotspotEnumerator initWithNode:]
-[QTHotspotEnumerator dealloc]
-[QTHotspotEnumerator nextObject]
-[QTHotspotEnumerator(QTHotspotEnumerator_Private) setNode:]
+[QTMovieAttributeProps attributePropsWithVisibility:availabilityForGetting:availabilityForSetting:availabilityForInitializing:willChangeNotificationName:didChangeNotificationName:]
-[QTMovieAttributeProps initWithVisibility:availabilityForGetting:availabilityForSetting:availabilityForInitializing:willChangeNotificationName:didChangeNotificationName:]
-[QTMovieAttributeProps dealloc]
+[QTMovie canInitWithPasteboard:]
+[QTMovie canInitWithFile:]
+[QTMovie canInitWithURL:]
+[QTMovie canInitWithDataReference:]
+[QTMovie canInitWithFile:fileTypes:]
+[QTMovie canInitWithURL:fileTypes:]
+[QTMovie canInitWithDataReference:fileTypes:]
+[QTMovie canInitWithFile:fileTypes:error:]
+[QTMovie canInitWithURL:fileTypes:error:]
+[QTMovie canInitWithDataReference:fileTypes:error:]
+[QTMovie movieFileTypes:]
+[QTMovie movieUnfilteredFileTypes]
+[QTMovie movieTypesWithOptions:]
+[QTMovie movieMIMETypesWithOptions:]
+[QTMovie addTypesToArray:ofType:useExtension:useNewFileImporters:useAggressive:]
+[QTMovie movie]
+[QTMovie movieWithError:]
+[QTMovie movies]
+[QTMovie movieWithFile:]
+[QTMovie movieWithFile:error:]
+[QTMovie movieWithURL:]
+[QTMovie movieWithURL:error:]
+[QTMovie movieWithDataReference:]
+[QTMovie movieWithDataReference:error:]
+[QTMovie movieWithPasteboard:]
+[QTMovie movieWithPasteboard:error:]
+[QTMovie movieWithData:]
+[QTMovie movieWithData:error:]
+[QTMovie movieWithProxy:]
+[QTMovie movieWithAttributes:]
+[QTMovie movieWithAttributes:error:]
+[QTMovie movieNamed:]
+[QTMovie movieNamed:error:]
+[QTMovie initialize]
-[QTMovie init]
-[QTMovie initWithError:]
-[QTMovie initWithFile:]
-[QTMovie initWithFile:error:]
-[QTMovie initWithURL:]
-[QTMovie initWithURL:error:]
-[QTMovie initWithDataReference:]
-[QTMovie initWithDataReference:error:]
-[QTMovie initWithPasteboard:]
-[QTMovie initWithPasteboard:error:]
-[QTMovie initWithData:]
-[QTMovie initWithData:error:]
-[QTMovie initWithMovie:timeRange:]
-[QTMovie initWithMovie:timeRange:error:]
-[QTMovie initWithProxy:]
-[QTMovie initWithAttributes:]
+[QTMovie pathForAttributes:error:]
-[QTMovie initToDataReference:error:]
-[QTMovie initToFile:error:]
-[QTMovie initToData:error:]
-[QTMovie initToWritableFile:error:]
-[QTMovie initToWritableData:error:]
-[QTMovie initToWritableDataReference:error:]
-[QTMovie movieWithTimeRange:]
-[QTMovie movieWithTimeRange:error:]
-[QTMovie invalidate]
-[QTMovie _learnAboutTrack:]
-[QTMovie _forgetAboutTrack:]
-[QTMovie _learnAboutNode:]
-[QTMovie _forgetAboutNode:]
-[QTMovie mediaHelper]
-[QTMovie usesFigMedia]
-[QTMovie usesQuickTime]
+[QTMovie _willChangeNotificationNameForAttributeKey:]
-[QTMovie _attributeWillChange:]
+[QTMovie allGettableAttributeKeysForVisibility:]
+[QTMovie allSettableAttributeKeysForVisibility:]
+[QTMovie allInitializableAttributeKeysForVisibility:]
+[QTMovie attributeKeysDisallowedForGettingUnderPlaybackAPIRestriction]
+[QTMovie attributeKeysDisallowedForSettingUnderPlaybackAPIRestriction]
-[QTMovie _isAttributeAvailableForGetting:exception:]
-[QTMovie _isAttributeAvailableForSetting:exception:]
-[QTMovie movieAttributes]
-[QTMovie setMovieAttributes:]
-[QTMovie attributeForKey:]
-[QTMovie setAttribute:forKey:]
-[QTMovie idle]
-[QTMovie setIdling:]
-[QTMovie isIdling]
-[QTMovie idling]
+[QTMovie idleAllMovies:]
+[QTMovie startIdleTimer]
+[QTMovie stopIdleTimer]
+[QTMovie startQTFrequentTimer]
+[QTMovie stopQTFrequentTimer]
+[QTMovie setIdlingEnabled:]
+[QTMovie idlingEnabled]
+[QTMovie setIdlingEnabledForNonQTKitMovies:]
+[QTMovie isIdlingEnabledForNonQTKitMovies]
-[QTMovie initWithCoder:]
-[QTMovie encodeWithCoder:]
-[QTMovie copyWithZone:]
-[QTMovie copyDeep]
-[QTMovie copyWithZoneDeep:]
-[QTMovie _copyWithZone:deep:]
-[QTMovie currentTime]
-[QTMovie setCurrentTime:]
-[QTMovie setCurrentTimeInRange:]
-[QTMovie naturalSize]
-[QTMovie rate]
-[QTMovie volume]
-[QTMovie setRate:]
-[QTMovie setVolume:]
-[QTMovie movieFormatRepresentation]
-[QTMovie movieFormatRepresentationAndAnchor]
-[QTMovie tracksOfMediaType:]
-[QTMovie description]
-[QTMovie hasFrameImageAtTime:]
-[QTMovie hasPosterImage]
-[QTMovie posterImage]
-[QTMovie currentFrameImage]
-[QTMovie frameImageAtTime:withRepresentations:error:]
-[QTMovie frameImageAtTime:]
-[QTMovie frameImageAtTime:withAttributes:error:]
-[QTMovie writeToDataReference:withAttributes:]
-[QTMovie writeToDataReference:withAttributes:error:]
-[QTMovie writeToFile:withAttributes:]
-[QTMovie writeToFile:withAttributes:error:]
-[QTMovie canUpdateMovieFile]
-[QTMovie updateMovieFile]
-[QTMovie saveSourceDataToDataReference:error:]
-[QTMovie autoPlay]
-[QTMovie autoplay:]
-[QTMovie autoplay]
-[QTMovie play]
-[QTMovie stop]
-[QTMovie gotoBeginning]
-[QTMovie gotoEnd]
-[QTMovie gotoNextSelectionPoint]
-[QTMovie gotoPreviousSelectionPoint]
-[QTMovie gotoPosterTime]
-[QTMovie stepForward]
-[QTMovie stepBackward]
-[QTMovie objectToken]
-[QTMovie movieControllerObjectToken]
+[QTMovie movieEnumerator]
-[QTMovie trackEnumerator]
-[QTMovie initialDataReference]
-[QTMovie trackCount]
-[QTMovie trackAtIndex:]
-[QTMovie trackByIndexAndType:type:flags:]
-[QTMovie trackByID:]
-[QTMovie sizeOfDataAtTime:withDuration:]
-[QTMovie hasSkin]
-[QTMovie dataReferences]
-[QTMovie mediaDataReferenceEnumerator]
-[QTMovie dataReference]
-[QTMovie setDataReference:]
-[QTMovie tracksWithCharacteristic:]
-[QTMovie tracksWithMissingCodec]
-[QTMovie setAllowDynamicResize:]
-[QTMovie step:]
-[QTMovie status]
-[QTMovie alternateGroupTypes]
-[QTMovie setPostsClosedCaptionDidChangeNotifications:]
-[QTMovie setPostsNonForcedSubtitleDidChangeNotifications:]
-[QTMovie postsNonForcedSubtitleDidChangeNotifications]
-[QTMovie selectAlternateGroupTrack:]
-[QTMovie deselectAlternateGroupTrack:]
-[QTMovie activeSegment]
-[QTMovie previewRange]
-[QTMovie posterTime]
-[QTMovie maxTimeLoaded]
-[QTMovie isPlaying]
-[QTMovie autoCloseWhenDone]
-[QTMovie autoQuitWhenDone]
-[QTMovie editable]
-[QTMovie draggable]
-[QTMovie hasAudio]
-[QTMovie hasVideo]
-[QTMovie hasDuration]
-[QTMovie isActive]
-[QTMovie isChanged]
-[QTMovie isInteractive]
-[QTMovie isLinear]
-[QTMovie isLoopable]
-[QTMovie isSteppable]
-[QTMovie isMPEG]
-[QTMovie isMIAM]
-[QTMovie hasQuartzComposer]
-[QTMovie isStreaming]
-[QTMovie playsAllFrames]
-[QTMovie playsSelectionOnly]
-[QTMovie loops]
-[QTMovie loopsBackAndForth]
-[QTMovie previewMode]
-[QTMovie preferredMuted]
-[QTMovie rateChangePreservesPitch]
-[QTMovie hasLanguages]
-[QTMovie done]
-[QTMovie isAutoPlay]
-[QTMovie saveable]
-[QTMovie preferredRate]
-[QTMovie preferredVolume]
-[QTMovie staticFrameRate]
-[QTMovie timeScale]
-[QTMovie language]
-[QTMovie copyright]
-[QTMovie author]
-[QTMovie artist]
-[QTMovie information]
-[QTMovie metaDataDescription]
-[QTMovie album]
-[QTMovie comments]
-[QTMovie fullName]
-[QTMovie genre]
-[QTMovie format]
-[QTMovie controllerType]
-[QTMovie displayName]
-[QTMovie fileName]
-[QTMovie MIMEType]
-[QTMovie href]
-[QTMovie interactivityFeatures]
-[QTMovie missingComponentsWithOptions:]
-[QTMovie currentSize]
-[QTMovie creationTime]
-[QTMovie modificationTime]
-[QTMovie annotationsWithCommonKeys]
-[QTMovie annotations]
-[QTMovie annotationsExtended]
-[QTMovie autoAlternates]
-[QTMovie loadState]
-[QTMovie loadStateError]
-[QTMovie _setLoadState:errorCode:]
-[QTMovie availableRanges]
-[QTMovie loadedRanges]
-[QTMovie albumArtworkMovie]
-[QTMovie albumArtworkAttributes]
-[QTMovie dataSize]
-[QTMovie URL]
-[QTMovie dataRate]
-[QTMovie movieType]
-[QTMovie movieMatrix]
-[QTMovie movieMatrixWithoutTranslation]
-[QTMovie originalMovieMatrix]
-[QTMovie affineTransform]
-[QTMovie preferredTransform]
-[QTMovie nsAffineTransform]
-[QTMovie setActive:]
-[QTMovie setActiveAndVisible:]
-[QTMovie setAutoAlternates:]
-[QTMovie setAutoCloseWhenDone:]
-[QTMovie setAutoQuitWhenDone:]
-[QTMovie setChanged:]
-[QTMovie setEditable:]
-[QTMovie setDraggable:]
-[QTMovie setLoops:]
-[QTMovie setLoopsBackAndForth:]
-[QTMovie setPlaysAllFrames:]
-[QTMovie setPlaysSelectionOnly:]
-[QTMovie setPreferredMuted:]
-[QTMovie setPreviewMode:]
-[QTMovie setAutoPlay:]
-[QTMovie setSaveable:]
-[QTMovie setUsesPreferredLanguage:]
-[QTMovie setLanguage:]
-[QTMovie setTimeScale:]
-[QTMovie setPreferredRate:]
-[QTMovie setPreferredVolume:]
-[QTMovie setPosterTime:]
-[QTMovie setActiveSegment:]
-[QTMovie setPreviewRange:]
-[QTMovie setCurrentSize:]
-[QTMovie setControllerType:]
-[QTMovie setMovieMatrix:]
-[QTMovie setAffineTransform:]
-[QTMovie setAnnotation:ofType:]
-[QTMovie setAnnotations:]
-[QTMovie setCopyright:]
-[QTMovie setDisplayName:]
-[QTMovie setFullName:]
-[QTMovie setHref:]
-[QTMovie usesHardwareVideoDecoder]
-[QTMovie useHardwareVideoDecoderIfAvailable]
-[QTMovie setUseHardwareVideoDecoderIfAvailable:]
-[QTMovie originalKeepInactiveFlag]
-[QTMovie originalDontInteractFlag]
-[QTMovie originalDontResolveDataRefsFlag]
-[QTMovie originalDontAskUnresolvedDataRefsFlag]
-[QTMovie originalPreventExternalURLLinksFlag]
-[QTMovie setOriginalKeepInactiveFlag:]
-[QTMovie setOriginalDontInteractFlag:]
-[QTMovie setOriginalDontResolveDataRefsFlag:]
-[QTMovie setOriginalDontAskUnresolvedDataRefsFlag:]
-[QTMovie setOriginalPreventExternalURLLinksFlag:]
-[QTMovie restrictedToPlaybackAPI]
-[QTMovie userDataRef]
-[QTMovie userDataOfType:]
-[QTMovie userDataOfType:atIndex:]
-[QTMovie setUserData:ofType:]
-[QTMovie setUserData:ofType:atIndex:]
-[QTMovie addUserData:ofType:]
-[QTMovie userDataCountOfType:]
-[QTMovie canCopy]
-[QTMovie canCut]
-[QTMovie canPaste]
-[QTMovie canUndo]
-[QTMovie setSelection:]
-[QTMovie selectionStart]
-[QTMovie selectionEnd]
-[QTMovie selectionDuration]
-[QTMovie selection]
-[QTMovie replaceSelectionWithSelectionFromMovie:]
-[QTMovie appendSelectionFromMovie:]
-[QTMovie insertSegmentOfMovie:timeRange:atTime:]
-[QTMovie insertSegmentOfMovie:fromRange:scaledToRange:]
-[QTMovie insertEmptySegmentAt:]
-[QTMovie deleteSegment:]
-[QTMovie scaleSegment:newDuration:]
-[QTMovie removeTrack:]
-[QTMovie addTrack:copyMedia:error:]
-[QTMovie addTrack:copyMedia:]
-[QTMovie addImage:forDuration:withAttributes:]
-[QTMovie addImage:forRange:withAttributes:]
-[QTMovie addImage:forDuration:atTime:withAttributes:]
-[QTMovie addMovieScaledToSelection:]
-[QTMovie addCVImageBuffer:forRange:withAttributes:error:]
-[QTMovie addToScrap]
-[QTMovie insertSegmentOfTrack:timeRange:atTime:]
-[QTMovie insertSegmentOfTrack:fromRange:scaledToRange:]
-[QTMovie trackByInsertingSegmentOfTrack:timeRange:atTime:]
-[QTMovie trackByInsertingSegmentOfTrack:fromRange:scaledToRange:]
-[QTMovie targetTrackForInsertFromTrack:]
-[QTMovie disposeTrack:]
-[QTMovie delegate]
-[QTMovie isVRMovie]
-[QTMovie hotspotsVisible]
-[QTMovie setHotspotsVisible:]
-[QTMovie fieldOfView]
-[QTMovie panAngle]
-[QTMovie panTiltSpeed]
-[QTMovie tiltAngle]
-[QTMovie zoomRate]
-[QTMovie setFieldOfView:]
-[QTMovie setPanAngle:]
-[QTMovie setPanTiltSpeed:]
-[QTMovie setTiltAngle:]
-[QTMovie setZoomRate:]
-[QTMovie nodeAtIndex:]
-[QTMovie currentNode]
-[QTMovie nodes]
-[QTMovie constraints:]
-[QTMovie setConstraints:ofKind:]
-[QTMovie nodeCount]
-[QTMovie gotoPreviousNode]
-[QTMovie hotspotCount]
-[QTMovie hotspotCountForNode:]
-[QTMovie nudge:]
-[QTMovie goToNode:]
-[QTMovie zoom:]
-[QTMovie isFlashMovie]
-[QTMovie setZoom:]
-[QTMovie undoManager]
-[QTMovie undoAttributes]
-[QTMovie setUndoManager:]
-[QTMovie setUndoAttributes:]
-[QTMovie newMovieEditState]
-[QTMovie useMovieEditState:]
-[QTMovie minimumRangeForEdit]
+[QTMovie enterQTKitOnThread]
+[QTMovie enterQTKitOnThreadDisablingThreadSafetyProtection]
+[QTMovie exitQTKitOnThread]
-[QTMovie attachToCurrentThread]
-[QTMovie detachFromCurrentThread]
-[QTMovie frameStartTime:]
-[QTMovie frameEndTime:]
-[QTMovie keyframeStartTime:]
-[QTMovie balance]
-[QTMovie bass]
-[QTMovie gain]
-[QTMovie treble]
-[QTMovie setBalance:]
-[QTMovie setBass:]
-[QTMovie setGain:]
-[QTMovie setTreble:]
-[QTMovie muted]
-[QTMovie isMuted]
-[QTMovie setMuted:]
-[QTMovie volumeMeteringEnabled:]
-[QTMovie setVolumeMeteringEnabled:onMix:]
-[QTMovie powerLevels:onMix:]
-[QTMovie peakLevels:onMix:]
-[QTMovie setAudioDevice:error:]
-[QTMovie setAudioDevice:withAttributes:error:]
-[QTMovie audioChannelLayout]
-[QTMovie setAudioChannelLayout:error:]
-[QTMovie addImageConsumer:]
-[QTMovie removeImageConsumer:flush:]
-[QTMovie imageConsumers]
-[QTMovie _usingWindowRefForPort]
-[QTMovie _startUsingGWorldsUsingWindowRefForPort:]
-[QTMovie _stopUsingGWorlds]
-[QTMovie _syncWithView:]
-[QTMovie _displayInWindowWithNumber:]
-[QTMovie _synchronizePortWithWindow]
-[QTMovie _invalidatePort]
-[QTMovie usesVisualContext]
-[QTMovie wouldUseVisualContext]
-[QTMovie visualMovieBoxIsOpaque]
-[QTMovie compositingMode]
-[QTMovie visualHue]
-[QTMovie setVisualHue:]
-[QTMovie visualSaturation]
-[QTMovie setVisualSaturation:]
-[QTMovie visualBrightness]
-[QTMovie setVisualBrightness:]
-[QTMovie visualContrast]
-[QTMovie setVisualContrast:]
-[QTMovie visualBackgroundColor]
-[QTMovie setVisualBackgroundColor:]
-[QTMovie visualMovieBoxBackgroundColor]
-[QTMovie setVisualMovieBoxBackgroundColor:]
-[QTMovie visualDrawsMovieBoxBackgroundColor]
-[QTMovie setVisualDrawsMovieBoxBackgroundColor:]
-[QTMovie droppedVideoFrameCount]
-[QTMovie generateApertureModeDimensions]
-[QTMovie removeApertureModeDimensions]
-[QTMovie apertureMode]
-[QTMovie setApertureMode:]
-[QTMovie hasApertureModeDimensions]
-[QTMovie hasChapters]
-[QTMovie chapterCount]
-[QTMovie chapters]
-[QTMovie addChapters:withAttributes:error:]
-[QTMovie removeChapters]
-[QTMovie startTimeOfChapter:]
-[QTMovie chapterIndexForTime:]
-[QTMovie chapterTrack]
-[QTMovie chapterList]
-[QTMovie currentChapterIndex]
-[QTMovie setCurrentChapterIndex:]
-[QTMovie currentChapterName]
-[QTMovie chapterMode]
-[QTMovie addTextTrack:atTimeRanges:withAttributes:error:]
-[QTMovie addURLTrack:atTimeRanges:withAttributes:error:]
-[QTMovie deleteReferencesToTrack:ofType:]
-[QTMovie isDRMProtected]
-[QTMovie isDRMAuthorized]
-[QTMovie canDRMInteractWithUser]
-[QTMovie setCanDRMInteractWithUser:]
-[QTMovie hasEqualizer]
-[QTMovie numberOfEqualizerDeviceChannels]
-[QTMovie numberOfEqualizerBandLevels]
-[QTMovie setNumberOfEqualizerBandLevels:]
-[QTMovie equalizerBandLevels:]
-[QTMovie hasFrameRate]
-[QTMovie dynamicFrameRate]
-[QTMovie findText:trackIndex:startTime:offset:flags:retParamName:]
-[QTMovie timeForText:trackIndex:startTime:offset:flags:]
-[QTMovie trackIndexForText:trackIndex:startTime:offset:flags:]
-[QTMovie offsetForText:trackIndex:startTime:offset:flags:]
-[QTMovie playbackRange]
-[QTMovie setPlaybackRange:]
+[QTMovie keyPathsForValuesAffectingPlaybackRange]
-[QTMovie playbackRangeDuration]
+[QTMovie keyPathsForValuesAffectingPlaybackRangeDuration]
-[QTMovie playbackRangeCurrentTime]
-[QTMovie setPlaybackRangeCurrentTime:]
+[QTMovie keyPathsForValuesAffectingPlaybackRangeCurrentTime]
-[QTMovie playbackRangeRemainingTime]
+[QTMovie keyPathsForValuesAffectingPlaybackRangeRemainingTime]
-[QTMovie canPerformCutOperation]
-[QTMovie canPerformCopyOperation]
-[QTMovie canPerformPasteOperation]
-[QTMovie doEditOperation:]
-[QTMovie doAddScaledOperation]
-[QTMovie doAddOperation]
-[QTMovie doCutOperation]
-[QTMovie doCopyOperation]
-[QTMovie doPasteOperation]
-[QTMovie doDeleteOperation]
-[QTMovie doReplaceOperation]
-[QTMovie doTrimOperation]
-[QTMovie userDataAnnotations]
-[QTMovie internetLocation]
-[QTMovie hasVRController]
-[QTMovie stepFrameForward]
-[QTMovie stepFrameBackward]
-[QTMovie canSerialize]
-[QTMovie classicVolume]
-[QTMovie setClassicVolume:]
-[QTMovie conformed]
-[QTMovie setConformed:]
-[QTMovie playerApertureMode]
-[QTMovie setPlayerApertureMode:]
-[QTMovie isBuffering]
-[QTMovie usesAudioContext]
-[QTMovie pitch]
-[QTMovie setPitch:]
-[QTMovie audioRenderQuality]
-[QTMovie setAudioRenderQuality:]
-[QTMovie sourceString]
-[QTMovie timeCodeTrack]
-[QTMovie hasTimeCodeTrack]
-[QTMovie currentTimeCodeForInfoPanel]
-[QTMovie timeCodeDurationForInfoPanel]
-[QTMovie hasSubtitles]
-[QTMovie setSubtitles:flag:]
-[QTMovie subtitlesTrack]
-[QTMovie areSubtitlesVisible]
-[QTMovie setSubtitlesVisible:]
-[QTMovie hasClosedCaptions]
-[QTMovie areClosedCaptionsVisible]
-[QTMovie setClosedCaptionsVisible:]
-[QTMovie isCloseCaptionVisible]
-[QTMovie setCloseCaptionVisible:]
-[QTMovie alternateTrack]
-[QTMovie alternateTracks]
-[QTMovie subtitleTracks]
-[QTMovie audioLanguageTracks]
-[QTMovie setChapterTrack:]
-[QTMovie containsTrackType:]
-[QTMovie setMovieLanguage:flag:]
-[QTMovie doneConsideringPlaySelectionOnly]
-[QTMovie setDefaultDataReference:subType:]
-[QTMovie isMovieMarkedNonSerializable]
-[QTMovie centerPoint]
-[QTMovie rotate:around:]
-[QTMovie scale:around:]
-[QTMovie skew:around:]
-[QTMovie translate:]
-[QTMovie flipX]
-[QTMovie flipY]
+[QTMovie _applyDisabledComponents]
+[QTMovie _disableComponent:]
+[QTMovie disableComponent:]
+[QTMovie disableComponents:fromVersion:toVersion:]
-[QTMovie _blocksAllWiredActions]
-[QTMovie _setBlocksAllWiredActions:]
-[QTMovie executeFrameLoadedActionsAtTime:]
-[QTMovie executeWiredActionsAtTime:]
-[QTMovie hasWiredActions]
-[QTMovie limitReadAhead]
-[QTMovie setLimitReadAhead:]
-[QTMovie(QTMovie_MetadataReading) commonMetadata]
-[QTMovie(QTMovie_MetadataReading) availableMetadataFormats]
-[QTMovie(QTMovie_MetadataReading) metadataForFormat:]
-[QTMovie(QTMovie_MetadataEditing_Private) validateMetadata:forFormat:error:]
-[QTMovie(QTMovie_MetadataEditing_Private) setMetadata:forFormat:]
-[QTMovie_FigMedia_TimelyCaller initWithFigPlaybackItem:queue:]
-[QTMovie_FigMedia_TimelyCaller dealloc]
-[QTMovie_FigMedia_TimelyCaller finalize]
-[QTMovie_FigMedia_TimelyCaller _removeCurrentTimebaseFromTimerSource]
-[QTMovie_FigMedia_TimelyCaller _stopObservingTimebaseNotifications]
_qtMovie_FigMedia_TimelyCaller_NotificationCallback
-[QTMovie_FigMedia_TimelyCaller _startObservingTimebaseNotificationsForCurrentItem]
-[QTMovie_FigMedia_TimelyCaller invalidate]
-[QTMovie_FigMedia_TimelyCaller _resetNextFireTime]
-[QTMovie_FigMedia_TimelyCaller _handleTimeDiscontinuity]
-[QTMovie_FigMedia_TimelyCaller _effectiveRateChanged]
-[QTMovie_FigMedia_TimelyCaller playbackItem]
-[QTMovie_FigMedia_TimelyCaller _timebaseDidChange]
___51-[QTMovie_FigMedia_TimelyCaller _timebaseDidChange]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QTMovie_FigMedia_OccasionalCaller initWithFigPlaybackItem:times:queue:block:]
___79-[QTMovie_FigMedia_OccasionalCaller initWithFigPlaybackItem:times:queue:block:]_block_invoke
___79-[QTMovie_FigMedia_OccasionalCaller initWithFigPlaybackItem:times:queue:block:]_block_invoke_2
___copy_helper_block_83
___destroy_helper_block_84
-[QTMovie_FigMedia_OccasionalCaller dealloc]
-[QTMovie_FigMedia_OccasionalCaller _effectiveRateChanged]
-[QTMovie_FigMedia_OccasionalCaller _previousFiringTimeBeforeTime:]
___67-[QTMovie_FigMedia_OccasionalCaller _previousFiringTimeBeforeTime:]_block_invoke
___copy_helper_block_91
___destroy_helper_block_92
-[QTMovie_FigMedia_OccasionalCaller _nextFiringTimeAfterTime:]
___62-[QTMovie_FigMedia_OccasionalCaller _nextFiringTimeAfterTime:]_block_invoke
-[QTMovie_FigMedia_OccasionalCaller _resetNextFireTime]
-[QTMovie_FigMedia_OccasionalCaller _handleTimeDiscontinuity]
+[QTMovie_FigMedia initialize]
+[QTMovie_FigMedia validationAttributesForURL:fileTypes:withAttributes:error:]
_mediaValidationComplete
+[QTMovie_FigMedia validationAttributesForDataReference:fileTypes:withAttributes:error:]
+[QTMovie_FigMedia canInitWithURL:fileTypes:error:]
+[QTMovie_FigMedia canInitWithFile:fileTypes:error:]
+[QTMovie_FigMedia canInitWithDataReference:fileTypes:error:]
+[QTMovie_FigMedia movieFileTypes:]
+[QTMovie_FigMedia movieMIMETypesWithOptions:]
-[QTMovie_FigMedia initWithAttributes:error:forParent:]
___55-[QTMovie_FigMedia initWithAttributes:error:forParent:]_block_invoke
___copy_helper_block_243
___destroy_helper_block_244
-[QTMovie_FigMedia finalize]
-[QTMovie_FigMedia dealloc]
-[QTMovie_FigMedia invalidate]
-[QTMovie_FigMedia _initializingThreadWillExit:]
-[QTMovie_FigMedia trackEnumerator]
-[QTMovie_FigMedia tracks]
-[QTMovie_FigMedia enabledTracks]
-[QTMovie_FigMedia tracksOfMediaType:]
-[QTMovie_FigMedia _enabledTracksOfMediaType:]
-[QTMovie_FigMedia trackCount]
-[QTMovie_FigMedia trackAtIndex:]
-[QTMovie_FigMedia trackByIndexAndType:type:flags:]
-[QTMovie_FigMedia trackByID:]
-[QTMovie_FigMedia tracksWithCharacteristic:]
-[QTMovie_FigMedia _enabledTracksWithCharacteristic:]
-[QTMovie_FigMedia _attachedToMainThread]
-[QTMovie_FigMedia _initializingThread]
-[QTMovie_FigMedia figPlayer]
-[QTMovie_FigMedia figPlaybackItem]
-[QTMovie_FigMedia usesVisualContext]
-[QTMovie_FigMedia wouldUseVisualContext]
-[QTMovie_FigMedia setPostsClosedCaptionDidChangeNotifications:]
_qtFMMovieClosedCaptionDidChange
-[QTMovie_FigMedia _postClosedCaptionDidChangeNotification:]
-[QTMovie_FigMedia setPostsNonForcedSubtitleDidChangeNotifications:]
-[QTMovie_FigMedia postsNonForcedSubtitleDidChangeNotifications]
-[QTMovie_FigMedia _postSubtitleDidChangeNotification:]
-[QTMovie_FigMedia setChapterTrack:]
-[QTMovie_FigMedia _handleMovieDidPlayToTheEnd]
-[QTMovie_FigMedia _visualContext]
-[QTMovie_FigMedia _setVisualContext:]
-[QTMovie_FigMedia _timebase]
-[QTMovie_FigMedia _renderHelper]
-[QTMovie_FigMedia _createRenderHelperIfNecessary]
-[QTMovie_FigMedia addImageConsumerNoNotify:]
-[QTMovie_FigMedia usesHardwareVideoDecoder]
-[QTMovie_FigMedia useHardwareVideoDecoderIfAvailable]
-[QTMovie_FigMedia setUseHardwareVideoDecoderIfAvailable:]
-[QTMovie_FigMedia editable]
-[QTMovie_FigMedia canCopy]
-[QTMovie_FigMedia canCut]
-[QTMovie_FigMedia canPaste]
-[QTMovie_FigMedia canUndo]
-[QTMovie_FigMedia duration]
-[QTMovie_FigMedia currentSize]
-[QTMovie_FigMedia naturalSize]
-[QTMovie_FigMedia volume]
-[QTMovie_FigMedia setVolume:]
-[QTMovie_FigMedia setFigVolume:]
-[QTMovie_FigMedia rate]
-[QTMovie_FigMedia preferredRate]
-[QTMovie_FigMedia setRate:]
-[QTMovie_FigMedia currentTime]
-[QTMovie_FigMedia setCurrentTime:]
-[QTMovie_FigMedia setCurrentTime:inRange:]
-[QTMovie_FigMedia isMuted]
-[QTMovie_FigMedia setMuted:]
-[QTMovie_FigMedia isActive]
-[QTMovie_FigMedia setActive:]
-[QTMovie_FigMedia usesFigMedia]
-[QTMovie_FigMedia usesQuickTime]
-[QTMovie_FigMedia diagnosticString]
-[QTMovie_FigMedia isSteppable]
-[QTMovie_FigMedia isFlashMovie]
-[QTMovie_FigMedia isVRMovie]
-[QTMovie_FigMedia isLinear]
-[QTMovie_FigMedia isInteractive]
-[QTMovie_FigMedia isPlaying]
-[QTMovie_FigMedia _isAtEnd]
-[QTMovie_FigMedia hasQuartzComposer]
-[QTMovie_FigMedia isStreaming]
-[QTMovie_FigMedia _playbackItemLoaded]
-[QTMovie_FigMedia loadState]
-[QTMovie_FigMedia _postLoadStateChangedNotificationAndAutoplay:]
-[QTMovie_FigMedia _setLoadState:]
-[QTMovie_FigMedia _loadStateErrorCode]
-[QTMovie_FigMedia _setLoadStateErrorCode:]
-[QTMovie_FigMedia loadStateError]
-[QTMovie_FigMedia _playWhenReady]
-[QTMovie_FigMedia _setPlayWhenReady:]
-[QTMovie_FigMedia _setPlayWhenReadyToYES]
-[QTMovie_FigMedia _playWhenReadyRate]
-[QTMovie_FigMedia _setPlayWhenReadyRate:]
-[QTMovie_FigMedia availableRanges]
_addTimeRangeToArray
-[QTMovie_FigMedia loadedRanges]
-[QTMovie_FigMedia loops]
-[QTMovie_FigMedia loopsBackAndForth]
-[QTMovie_FigMedia setLoops:]
-[QTMovie_FigMedia setLoopsBackAndForth:]
-[QTMovie_FigMedia _metaDataStringOfType:]
-[QTMovie_FigMedia album]
-[QTMovie_FigMedia author]
-[QTMovie_FigMedia fullName]
-[QTMovie_FigMedia displayName]
-[QTMovie_FigMedia copyright]
-[QTMovie_FigMedia genre]
-[QTMovie_FigMedia format]
-[QTMovie_FigMedia metaDataDescription]
-[QTMovie_FigMedia artist]
-[QTMovie_FigMedia controllerType]
-[QTMovie_FigMedia creationTime]
_dateFromISO8601
-[QTMovie_FigMedia modificationTime]
-[QTMovie_FigMedia albumArtworkMovie]
-[QTMovie_FigMedia albumArtworkAttributes]
-[QTMovie_FigMedia annotationsWithCommonKeys]
_addEntriesToAnnotationsDict
-[QTMovie_FigMedia annotations]
-[QTMovie_FigMedia annotationsExtended]
-[QTMovie_FigMedia _hasTrackOfType:]
-[QTMovie_FigMedia _hasEnabledTrackOfType:]
-[QTMovie_FigMedia hasAudio]
-[QTMovie_FigMedia hasDuration]
-[QTMovie_FigMedia hasVideo]
-[QTMovie_FigMedia hasSubtitles]
-[QTMovie_FigMedia _setURL:]
-[QTMovie_FigMedia dataSize]
-[QTMovie_FigMedia maxTimeLoaded]
-[QTMovie_FigMedia dataRate]
-[QTMovie_FigMedia movieType]
-[QTMovie_FigMedia URL]
-[QTMovie_FigMedia dataReference]
-[QTMovie_FigMedia initialDataReference]
-[QTMovie_FigMedia getDefaultDataLocatorAttributeKey:andValue:]
-[QTMovie_FigMedia fileName]
-[QTMovie_FigMedia hasFrameRate]
-[QTMovie_FigMedia staticFrameRate]
-[QTMovie_FigMedia dynamicFrameRate]
-[QTMovie_FigMedia timeScale]
-[QTMovie_FigMedia apertureMode]
-[QTMovie_FigMedia setApertureMode:]
-[QTMovie_FigMedia droppedVideoFrameCount]
-[QTMovie_FigMedia originalMovieMatrix]
-[QTMovie_FigMedia autoplay]
-[QTMovie_FigMedia autoplay:]
-[QTMovie_FigMedia play]
-[QTMovie_FigMedia stop]
-[QTMovie_FigMedia gotoBeginning]
-[QTMovie_FigMedia _handleLoopEndpoint]
-[QTMovie_FigMedia gotoEnd]
-[QTMovie_FigMedia gotoPosterTime]
-[QTMovie_FigMedia stepForward]
-[QTMovie_FigMedia stepBackward]
-[QTMovie_FigMedia step:]
-[QTMovie_FigMedia keyframeStartTime:]
-[QTMovie_FigMedia hasClosedCaptions]
-[QTMovie_FigMedia hasChapters]
-[QTMovie_FigMedia chapterCount]
-[QTMovie_FigMedia chapters]
-[QTMovie_FigMedia startTimeOfChapter:]
-[QTMovie_FigMedia chapterIndexForTime:]
-[QTMovie_FigMedia chapterTrack]
-[QTMovie_FigMedia chaptersDeep]
-[QTMovie_FigMedia chapterMode]
-[QTMovie_FigMedia currentChapterIndex]
-[QTMovie_FigMedia setCurrentChapterIndex:]
-[QTMovie_FigMedia currentChapterName]
-[QTMovie_FigMedia _checkForChapterChanges]
-[QTMovie_FigMedia playbackRange]
-[QTMovie_FigMedia setPlaybackRange:]
-[QTMovie_FigMedia isDRMProtected]
-[QTMovie_FigMedia isDRMAuthorized]
-[QTMovie_FigMedia sourceString]
-[QTMovie_FigMedia _trackHelpers]
-[QTMovie_FigMedia frameImageAtTime:withAttributes:error:]
-[QTMovie_FigMedia _clearCachedImageData]
-[QTMovie_FigMedia copyWithZone:forParent:]
-[QTMovie_FigMedia copyStateFromMediaHelper:]
-[QTMovie_FigMedia _registerForPropertyChanges]
_qtFMMovieRateDidChange
_qtFMMovieVolumeDidChange
_qtFMMovieTimeDidChange
_qtFMMovieDidPlayToTheEnd
_qtFMMovieLoadStateDidChange
_qtFMMovieNaturalSizeDidChange
_qtFMMovieChapterDidChange
_qtFMMovieTimebaseDidChange
_qtFMMovieSeekableRangeDidChange
_qtFMMoviePlayableRangeDidChange
_qtFMMovieSubtitleDidChange
_qtFMMovieTimedMetadataDidChange
-[QTMovie_FigMedia _unregisterForPropertyChanges]
-[QTMovie_FigMedia _signalReadyForPlaybackSemaphore]
-[QTMovie_FigMedia setAudioDevice:error:]
-[QTMovie_FigMedia audioChannelLayout]
-[QTMovie_FigMedia setAudioChannelLayout:error:]
-[QTMovie_FigMedia attachToCurrentThread]
-[QTMovie_FigMedia detachFromCurrentThread]
-[QTMovie_FigMedia limitReadAhead]
-[QTMovie_FigMedia setLimitReadAhead:]
-[QTMovie_FigMedia commonMetadata]
_addEntriesToMetadataArray
-[QTMovie_FigMedia availableMetadataFormats]
-[QTMovie_FigMedia metadataForFormat:]
-[QTMovie_FigMedia validateMetadata:forFormat:error:]
-[QTMovie_FigMedia setMetadata:forFormat:]
+[QTMovie_FigMedia sitesInDownloadCache]
+[QTMovie_FigMedia clearDownloadCacheForSite:]
+[QTMovie_FigMedia clearDownloadCache]
___qtMovie_FigMedia_TimelyCaller_NotificationCallback_block_invoke
___copy_helper_block_796
___destroy_helper_block_797
_QTMovieAttributesGetAttribute
_QTMovieAttributesSetAttribute
+[QTMovieMediaHelper implementsCustomAsyncLoadingForAttributes:]
+[QTMovieMediaHelper movieFileTypes:]
+[QTMovieMediaHelper movieTypesWithOptions:]
-[QTMovieMediaHelper init]
-[QTMovieMediaHelper proxy]
-[QTMovieMediaHelper invalidate]
-[QTMovieMediaHelper description]
-[QTMovieMediaHelper diagnosticString]
-[QTMovieMediaHelper _readableAttributeKeysForVisibility:]
-[QTMovieMediaHelper _writableAttributeKeysForVisibility:]
-[QTMovieMediaHelper movieAttributesForVisibility:requireChangeNotification:nilMarker:]
-[QTMovieMediaHelper setMovieAttributes:]
-[QTMovieMediaHelper attributeForKey:]
-[QTMovieMediaHelper setAttribute:forKey:]
-[QTMovieMediaHelper openedForPlayback]
-[QTMovieMediaHelper copyWithZone:forParent:]
-[QTMovieMediaHelper copyWithZoneDeep:forParent:]
-[QTMovieMediaHelper copyStateFromMediaHelper:]
-[QTMovieMediaHelper copyDeepStateFromMediaHelper:]
-[QTMovieMediaHelper duration]
-[QTMovieMediaHelper currentTime]
-[QTMovieMediaHelper rate]
-[QTMovieMediaHelper volume]
-[QTMovieMediaHelper isMuted]
-[QTMovieMediaHelper tracks]
-[QTMovieMediaHelper tracksOfMediaType:]
-[QTMovieMediaHelper autoAlternates]
-[QTMovieMediaHelper isPlaying]
-[QTMovieMediaHelper format]
-[QTMovieMediaHelper fullName]
-[QTMovieMediaHelper genre]
-[QTMovieMediaHelper comments]
-[QTMovieMediaHelper album]
-[QTMovieMediaHelper albumArtworkMovie]
-[QTMovieMediaHelper albumArtworkAttributes]
-[QTMovieMediaHelper metaDataDescription]
-[QTMovieMediaHelper information]
-[QTMovieMediaHelper commonMetadataForQTAnnotations:]
-[QTMovieMediaHelper annotationsWithCommonKeys]
-[QTMovieMediaHelper annotations]
-[QTMovieMediaHelper annotationsExtended]
-[QTMovieMediaHelper author]
-[QTMovieMediaHelper artist]
-[QTMovieMediaHelper activeSegment]
-[QTMovieMediaHelper controllerType]
-[QTMovieMediaHelper copyright]
-[QTMovieMediaHelper creationTime]
-[QTMovieMediaHelper currentSize]
-[QTMovieMediaHelper dataSize]
-[QTMovieMediaHelper displayName]
-[QTMovieMediaHelper editable]
-[QTMovieMediaHelper draggable]
-[QTMovieMediaHelper fileName]
-[QTMovieMediaHelper hasAudio]
-[QTMovieMediaHelper hasDuration]
-[QTMovieMediaHelper hasVideo]
-[QTMovieMediaHelper hasQuartzComposer]
-[QTMovieMediaHelper isActive]
-[QTMovieMediaHelper isChanged]
-[QTMovieMediaHelper isInteractive]
-[QTMovieMediaHelper isLinear]
-[QTMovieMediaHelper interactivityFeatures]
-[QTMovieMediaHelper missingComponentsWithOptions:]
-[QTMovieMediaHelper isLoopable]
-[QTMovieMediaHelper isStreaming]
-[QTMovieMediaHelper isMIAM]
-[QTMovieMediaHelper isSteppable]
-[QTMovieMediaHelper loadState]
-[QTMovieMediaHelper availableRanges]
-[QTMovieMediaHelper loadedRanges]
-[QTMovieMediaHelper loops]
-[QTMovieMediaHelper loopsBackAndForth]
-[QTMovieMediaHelper MIMEType]
-[QTMovieMediaHelper modificationTime]
-[QTMovieMediaHelper naturalSize]
-[QTMovieMediaHelper playsAllFrames]
-[QTMovieMediaHelper playsSelectionOnly]
-[QTMovieMediaHelper posterTime]
-[QTMovieMediaHelper preferredMuted]
-[QTMovieMediaHelper preferredRate]
-[QTMovieMediaHelper preferredVolume]
-[QTMovieMediaHelper previewMode]
-[QTMovieMediaHelper previewRange]
-[QTMovieMediaHelper rateChangePreservesPitch]
-[QTMovieMediaHelper selection]
-[QTMovieMediaHelper timeScale]
-[QTMovieMediaHelper URL]
-[QTMovieMediaHelper trackEnumerator]
-[QTMovieMediaHelper href]
-[QTMovieMediaHelper hasLanguages]
-[QTMovieMediaHelper language]
-[QTMovieMediaHelper done]
-[QTMovieMediaHelper isAutoPlay]
-[QTMovieMediaHelper maxTimeLoaded]
-[QTMovieMediaHelper dataRate]
-[QTMovieMediaHelper movieType]
-[QTMovieMediaHelper saveable]
-[QTMovieMediaHelper isMPEG]
-[QTMovieMediaHelper staticFrameRate]
-[QTMovieMediaHelper usesHardwareVideoDecoder]
-[QTMovieMediaHelper useHardwareVideoDecoderIfAvailable]
-[QTMovieMediaHelper setUseHardwareVideoDecoderIfAvailable:]
-[QTMovieMediaHelper setActive:]
-[QTMovieMediaHelper setActiveAndVisible:]
-[QTMovieMediaHelper setAutoAlternates:]
-[QTMovieMediaHelper setActiveSegment:]
-[QTMovieMediaHelper setChanged:]
-[QTMovieMediaHelper setControllerType:]
-[QTMovieMediaHelper setCopyright:]
-[QTMovieMediaHelper setCurrentSize:]
-[QTMovieMediaHelper setDisplayName:]
-[QTMovieMediaHelper setEditable:]
-[QTMovieMediaHelper setDraggable:]
-[QTMovieMediaHelper setLoops:]
-[QTMovieMediaHelper setLoopsBackAndForth:]
-[QTMovieMediaHelper setPlaysAllFrames:]
-[QTMovieMediaHelper setPlaysSelectionOnly:]
-[QTMovieMediaHelper setPosterTime:]
-[QTMovieMediaHelper setPreferredMuted:]
-[QTMovieMediaHelper setPreferredRate:]
-[QTMovieMediaHelper setPreferredVolume:]
-[QTMovieMediaHelper setPreviewMode:]
-[QTMovieMediaHelper setPreviewRange:]
-[QTMovieMediaHelper setLanguage:]
-[QTMovieMediaHelper setAnnotation:ofType:]
-[QTMovieMediaHelper setAnnotations:]
-[QTMovieMediaHelper setFullName:]
-[QTMovieMediaHelper setAutoPlay:]
-[QTMovieMediaHelper setHref:]
-[QTMovieMediaHelper setSaveable:]
-[QTMovieMediaHelper setUsesPreferredLanguage:]
-[QTMovieMediaHelper setTimeScale:]
-[QTMovieMediaHelper usesFigMedia]
-[QTMovieMediaHelper usesQuickTime]
-[QTMovieMediaHelper idle]
-[QTMovieMediaHelper initialDataReference]
-[QTMovieMediaHelper getDefaultDataLocatorAttributeKey:andValue:]
-[QTMovieMediaHelper trackCount]
-[QTMovieMediaHelper trackAtIndex:]
-[QTMovieMediaHelper trackByIndexAndType:type:flags:]
-[QTMovieMediaHelper trackByID:]
-[QTMovieMediaHelper sizeOfDataAtTime:withDuration:]
-[QTMovieMediaHelper hasSkin]
-[QTMovieMediaHelper dataReferences]
-[QTMovieMediaHelper mediaDataReferenceEnumerator]
-[QTMovieMediaHelper tracksWithCharacteristic:]
-[QTMovieMediaHelper objectToken]
-[QTMovieMediaHelper movieControllerObjectToken]
-[QTMovieMediaHelper setAllowDynamicResize:]
-[QTMovieMediaHelper step:]
-[QTMovieMediaHelper status]
-[QTMovieMediaHelper loadStateError]
-[QTMovieMediaHelper posterImage]
-[QTMovieMediaHelper frameImageAtTime:]
-[QTMovieMediaHelper frameImageAtTime:withAttributes:error:]
-[QTMovieMediaHelper movieFormatRepresentation]
-[QTMovieMediaHelper movieFormatRepresentationAndAnchor]
-[QTMovieMediaHelper writeToFile:withAttributes:error:]
-[QTMovieMediaHelper canUpdateMovieFile]
-[QTMovieMediaHelper updateMovieFile]
-[QTMovieMediaHelper saveSourceDataToDataReference:error:]
-[QTMovieMediaHelper autoplay]
-[QTMovieMediaHelper play]
-[QTMovieMediaHelper stop]
-[QTMovieMediaHelper setCurrentTime:]
-[QTMovieMediaHelper setCurrentTime:inRange:]
-[QTMovieMediaHelper gotoBeginning]
-[QTMovieMediaHelper gotoEnd]
-[QTMovieMediaHelper gotoNextSelectionPoint]
-[QTMovieMediaHelper gotoPreviousSelectionPoint]
-[QTMovieMediaHelper gotoPosterTime]
-[QTMovieMediaHelper stepForward]
-[QTMovieMediaHelper stepBackward]
-[QTMovieMediaHelper frameStartTime:]
-[QTMovieMediaHelper frameEndTime:]
-[QTMovieMediaHelper keyframeStartTime:]
-[QTMovieMediaHelper setRate:]
-[QTMovieMediaHelper setVolume:]
-[QTMovieMediaHelper setMuted:]
-[QTMovieMediaHelper setSelection:]
-[QTMovieMediaHelper selectionStart]
-[QTMovieMediaHelper selectionEnd]
-[QTMovieMediaHelper selectionDuration]
-[QTMovieMediaHelper replaceSelectionWithSelectionFromMovie:]
-[QTMovieMediaHelper appendSelectionFromMovie:]
-[QTMovieMediaHelper insertSegmentOfMovie:timeRange:atTime:]
-[QTMovieMediaHelper insertSegmentOfMovie:fromRange:scaledToRange:]
-[QTMovieMediaHelper insertEmptySegmentAt:]
-[QTMovieMediaHelper deleteSegment:]
-[QTMovieMediaHelper scaleSegment:newDuration:]
-[QTMovieMediaHelper insertSegmentOfTrack:timeRange:atTime:]
-[QTMovieMediaHelper insertSegmentOfTrack:fromRange:scaledToRange:]
-[QTMovieMediaHelper trackByInsertingSegmentOfTrack:timeRange:atTime:]
-[QTMovieMediaHelper trackByInsertingSegmentOfTrack:fromRange:scaledToRange:]
-[QTMovieMediaHelper removeTrack:]
-[QTMovieMediaHelper delegate]
-[QTMovieMediaHelper generateApertureModeDimensions]
-[QTMovieMediaHelper removeApertureModeDimensions]
-[QTMovieMediaHelper hasPosterImage]
-[QTMovieMediaHelper hasFrameImageAtTime:]
-[QTMovieMediaHelper frameImageAtTime:withRepresentations:error:]
-[QTMovieMediaHelper isVRMovie]
-[QTMovieMediaHelper nodeCount]
-[QTMovieMediaHelper nodeAtIndex:]
-[QTMovieMediaHelper currentNode]
-[QTMovieMediaHelper nodes]
-[QTMovieMediaHelper fieldOfView]
-[QTMovieMediaHelper hotspotsVisible]
-[QTMovieMediaHelper hotspotCount]
-[QTMovieMediaHelper hotspotCountForNode:]
-[QTMovieMediaHelper panAngle]
-[QTMovieMediaHelper panTiltSpeed]
-[QTMovieMediaHelper tiltAngle]
-[QTMovieMediaHelper zoomRate]
-[QTMovieMediaHelper constraints:]
-[QTMovieMediaHelper setFieldOfView:]
-[QTMovieMediaHelper setHotspotsVisible:]
-[QTMovieMediaHelper setPanAngle:]
-[QTMovieMediaHelper setPanTiltSpeed:]
-[QTMovieMediaHelper setTiltAngle:]
-[QTMovieMediaHelper setZoomRate:]
-[QTMovieMediaHelper setConstraints:ofKind:]
-[QTMovieMediaHelper gotoPreviousNode]
-[QTMovieMediaHelper zoom:]
-[QTMovieMediaHelper nudge:]
-[QTMovieMediaHelper goToNode:]
-[QTMovieMediaHelper canCopy]
-[QTMovieMediaHelper canCut]
-[QTMovieMediaHelper canPaste]
-[QTMovieMediaHelper canUndo]
-[QTMovieMediaHelper isFlashMovie]
-[QTMovieMediaHelper setZoom:]
-[QTMovieMediaHelper undoManager]
-[QTMovieMediaHelper undoAttributes]
-[QTMovieMediaHelper setUndoManager:]
-[QTMovieMediaHelper setUndoAttributes:]
-[QTMovieMediaHelper newMovieEditState]
-[QTMovieMediaHelper useMovieEditState:]
+[QTMovieMediaHelper registerCurrentThreadWithMediaStack]
+[QTMovieMediaHelper unregisterCurrentThreadWithMediaStack]
-[QTMovieMediaHelper attachToCurrentThread]
-[QTMovieMediaHelper detachFromCurrentThread]
-[QTMovieMediaHelper setIdling:]
-[QTMovieMediaHelper isIdling]
-[QTMovieMediaHelper hasChapters]
-[QTMovieMediaHelper chapterCount]
-[QTMovieMediaHelper chapters]
-[QTMovieMediaHelper addChapters:withAttributes:error:]
-[QTMovieMediaHelper removeChapters]
-[QTMovieMediaHelper startTimeOfChapter:]
-[QTMovieMediaHelper chapterIndexForTime:]
-[QTMovieMediaHelper chapterTrack]
-[QTMovieMediaHelper chapterList]
-[QTMovieMediaHelper currentChapterIndex]
-[QTMovieMediaHelper setCurrentChapterIndex:]
-[QTMovieMediaHelper currentChapterName]
-[QTMovieMediaHelper chapterMode]
-[QTMovieMediaHelper addTextTrack:atTimeRanges:withAttributes:error:]
-[QTMovieMediaHelper addURLTrack:atTimeRanges:withAttributes:error:]
-[QTMovieMediaHelper deleteReferencesToTrack:ofType:]
-[QTMovieMediaHelper isDRMProtected]
-[QTMovieMediaHelper isDRMAuthorized]
-[QTMovieMediaHelper canDRMInteractWithUser]
-[QTMovieMediaHelper setCanDRMInteractWithUser:]
-[QTMovieMediaHelper balance]
-[QTMovieMediaHelper bass]
-[QTMovieMediaHelper gain]
-[QTMovieMediaHelper treble]
-[QTMovieMediaHelper setBalance:]
-[QTMovieMediaHelper setBass:]
-[QTMovieMediaHelper setGain:]
-[QTMovieMediaHelper setTreble:]
-[QTMovieMediaHelper volumeMeteringEnabled:]
-[QTMovieMediaHelper setVolumeMeteringEnabled:onMix:]
-[QTMovieMediaHelper powerLevels:onMix:]
-[QTMovieMediaHelper peakLevels:onMix:]
-[QTMovieMediaHelper hasEqualizer]
-[QTMovieMediaHelper numberOfEqualizerDeviceChannels]
-[QTMovieMediaHelper numberOfEqualizerBandLevels]
-[QTMovieMediaHelper setNumberOfEqualizerBandLevels:]
-[QTMovieMediaHelper equalizerBandLevels:]
-[QTMovieMediaHelper originalKeepInactiveFlag]
-[QTMovieMediaHelper originalDontInteractFlag]
-[QTMovieMediaHelper originalDontResolveDataRefsFlag]
-[QTMovieMediaHelper originalDontAskUnresolvedDataRefsFlag]
-[QTMovieMediaHelper originalPreventExternalURLLinksFlag]
-[QTMovieMediaHelper setOriginalKeepInactiveFlag:]
-[QTMovieMediaHelper setOriginalDontInteractFlag:]
-[QTMovieMediaHelper setOriginalDontResolveDataRefsFlag:]
-[QTMovieMediaHelper setOriginalDontAskUnresolvedDataRefsFlag:]
-[QTMovieMediaHelper setOriginalPreventExternalURLLinksFlag:]
-[QTMovieMediaHelper writeToDataReference:withAttributes:error:]
-[QTMovieMediaHelper userDataRef]
-[QTMovieMediaHelper userDataOfType:]
-[QTMovieMediaHelper userDataOfType:atIndex:]
-[QTMovieMediaHelper setUserData:ofType:]
-[QTMovieMediaHelper setUserData:ofType:atIndex:]
-[QTMovieMediaHelper userDataCountOfType:]
-[QTMovieMediaHelper addTrack:copyMedia:error:]
-[QTMovieMediaHelper addImage:forDuration:atTime:withAttributes:]
-[QTMovieMediaHelper addMovieScaledToSelection:]
-[QTMovieMediaHelper addToScrap]
-[QTMovieMediaHelper addCVImageBuffer:forRange:withAttributes:error:]
-[QTMovieMediaHelper autoplay:]
-[QTMovieMediaHelper isMediaHelperForParentMovie]
-[QTMovieMediaHelper dataReference]
-[QTMovieMediaHelper setDataReference:]
-[QTMovieMediaHelper minimumRangeForEdit]
-[QTMovieMediaHelper targetTrackForInsertFromTrack:]
-[QTMovieMediaHelper _blocksAllWiredActions]
-[QTMovieMediaHelper _setBlocksAllWiredActions:]
-[QTMovieMediaHelper executeFrameLoadedActionsAtTime:]
-[QTMovieMediaHelper executeWiredActionsAtTime:]
-[QTMovieMediaHelper hasWiredActions]
-[QTMovieMediaHelper postMovieNotificationName:]
-[QTMovieMediaHelper postMovieNotificationName:userInfo:]
-[QTMovieMediaHelper postMovieNotificationName:thread:]
-[QTMovieMediaHelper postMovieNotificationName:userInfo:thread:]
-[QTMovieMediaHelper postMovieNotificationName:userInfo:thread:delay:]
-[QTMovieMediaHelper enqueueMovieNotificationName:]
-[QTMovieMediaHelper doEditOperation:]
-[QTMovieMediaHelper setAudioDevice:error:]
-[QTMovieMediaHelper audioChannelLayout]
-[QTMovieMediaHelper setAudioChannelLayout:error:]
-[QTMovieMediaHelper _usingWindowRefForPort]
-[QTMovieMediaHelper _startUsingGWorldsUsingWindowRefForPort:]
-[QTMovieMediaHelper _stopUsingGWorlds]
-[QTMovieMediaHelper _syncWithView:]
-[QTMovieMediaHelper _displayInWindowWithNumber:]
-[QTMovieMediaHelper _synchronizePortWithWindow]
-[QTMovieMediaHelper _invalidatePort]
-[QTMovieMediaHelper usesVisualContext]
-[QTMovieMediaHelper wouldUseVisualContext]
-[QTMovieMediaHelper compositingMode]
-[QTMovieMediaHelper visualHue]
-[QTMovieMediaHelper visualSaturation]
-[QTMovieMediaHelper visualBrightness]
-[QTMovieMediaHelper visualContrast]
-[QTMovieMediaHelper setVisualHue:]
-[QTMovieMediaHelper setVisualSaturation:]
-[QTMovieMediaHelper setVisualBrightness:]
-[QTMovieMediaHelper setVisualContrast:]
-[QTMovieMediaHelper addImageConsumer:]
-[QTMovieMediaHelper removeImageConsumer:flush:]
-[QTMovieMediaHelper imageConsumers]
-[QTMovieMediaHelper _imageConsumerFanOut]
-[QTMovieMediaHelper addImageConsumerNoNotify:]
-[QTMovieMediaHelper removeImageConsumerNoNotify:flush:]
-[QTMovieMediaHelper originalMovieMatrix]
-[QTMovieMediaHelper preferredTransform]
-[QTMovieMediaHelper movieMatrix]
-[QTMovieMediaHelper movieMatrixWithoutTranslation]
-[QTMovieMediaHelper setMovieMatrix:]
-[QTMovieMediaHelper visualBackgroundColor]
-[QTMovieMediaHelper visualMovieBoxBackgroundColor]
-[QTMovieMediaHelper visualDrawsMovieBoxBackgroundColor]
-[QTMovieMediaHelper visualMovieBoxIsOpaque]
-[QTMovieMediaHelper apertureMode]
-[QTMovieMediaHelper setVisualBackgroundColor:]
-[QTMovieMediaHelper setVisualMovieBoxBackgroundColor:]
-[QTMovieMediaHelper setVisualDrawsMovieBoxBackgroundColor:]
-[QTMovieMediaHelper setApertureMode:]
-[QTMovieMediaHelper hasApertureModeDimensions]
-[QTMovieMediaHelper droppedVideoFrameCount]
-[QTMovieMediaHelper findText:trackIndex:startTime:offset:flags:retParamName:]
-[QTMovieMediaHelper playbackRange]
-[QTMovieMediaHelper setPlaybackRange:]
-[QTMovieMediaHelper hasFrameRate]
-[QTMovieMediaHelper dynamicFrameRate]
-[QTMovieMediaHelper autoCloseWhenDone]
-[QTMovieMediaHelper autoQuitWhenDone]
-[QTMovieMediaHelper setAutoCloseWhenDone:]
-[QTMovieMediaHelper setAutoQuitWhenDone:]
-[QTMovieMediaHelper userDataAnnotations]
-[QTMovieMediaHelper internetLocation]
-[QTMovieMediaHelper hasVRController]
-[QTMovieMediaHelper stepFrameForward]
-[QTMovieMediaHelper stepFrameBackward]
-[QTMovieMediaHelper canSerialize]
-[QTMovieMediaHelper classicVolume]
-[QTMovieMediaHelper setClassicVolume:]
-[QTMovieMediaHelper conformed]
-[QTMovieMediaHelper setConformed:]
-[QTMovieMediaHelper playerApertureMode]
-[QTMovieMediaHelper setPlayerApertureMode:]
-[QTMovieMediaHelper isBuffering]
-[QTMovieMediaHelper usesAudioContext]
-[QTMovieMediaHelper pitch]
-[QTMovieMediaHelper setPitch:]
-[QTMovieMediaHelper audioRenderQuality]
-[QTMovieMediaHelper setAudioRenderQuality:]
-[QTMovieMediaHelper sourceString]
-[QTMovieMediaHelper timeCodeTrack]
-[QTMovieMediaHelper hasTimeCodeTrack]
-[QTMovieMediaHelper currentTimeCodeForInfoPanel]
-[QTMovieMediaHelper timeCodeDurationForInfoPanel]
-[QTMovieMediaHelper addUserData:ofType:]
-[QTMovieMediaHelper hasSubtitles]
-[QTMovieMediaHelper areSubtitlesVisible]
-[QTMovieMediaHelper setSubtitlesVisible:]
-[QTMovieMediaHelper alternateTracks]
-[QTMovieMediaHelper subtitleTracks]
-[QTMovieMediaHelper subtitlesTrack]
-[QTMovieMediaHelper audioLanguageTracks]
-[QTMovieMediaHelper hasClosedCaptions]
-[QTMovieMediaHelper areClosedCaptionsVisible]
-[QTMovieMediaHelper setClosedCaptionsVisible:]
-[QTMovieMediaHelper setMovieLanguage:flag:]
-[QTMovieMediaHelper setSubtitles:flag:]
-[QTMovieMediaHelper setPostsNonForcedSubtitleDidChangeNotifications:]
-[QTMovieMediaHelper postsNonForcedSubtitleDidChangeNotifications]
-[QTMovieMediaHelper setPostsClosedCaptionDidChangeNotifications:]
-[QTMovieMediaHelper setChapterTrack:]
-[QTMovieMediaHelper alternateTrack]
-[QTMovieMediaHelper containsTrackType:]
-[QTMovieMediaHelper doneConsideringPlaySelectionOnly]
-[QTMovieMediaHelper setDefaultDataReference:subType:]
-[QTMovieMediaHelper isMovieMarkedNonSerializable]
-[QTMovieMediaHelper centerPoint]
-[QTMovieMediaHelper rotate:around:]
-[QTMovieMediaHelper scale:around:]
-[QTMovieMediaHelper skew:around:]
-[QTMovieMediaHelper translate:]
-[QTMovieMediaHelper flipX]
-[QTMovieMediaHelper flipY]
-[QTMovieMediaHelper limitReadAhead]
-[QTMovieMediaHelper setLimitReadAhead:]
-[QTMovieMediaHelper commonMetadata]
-[QTMovieMediaHelper availableMetadataFormats]
-[QTMovieMediaHelper metadataForFormat:]
-[QTMovieMediaHelper validateMetadata:forFormat:error:]
-[QTMovieMediaHelper setMetadata:forFormat:]
-[QTMovieUndoOperation initWithMovieView:selector:operation:]
-[QTMovieUndoOperation finalize]
-[QTMovieUndoOperation dealloc]
-[QTMovieUndoOperation registerUndoOperation]
-[QTMovieUndoOperation undoEdit]
+[QTNode nodeWithProxy:]
-[QTNode initWithProxy:]
-[QTNode proxy]
-[QTNode finalize]
-[QTNode dealloc]
-[QTNode invalidate]
-[QTNode _learnAboutHotspot:]
-[QTNode _forgetAboutHotspot:]
-[QTNode description]
-[QTNode index]
-[QTNode uniqueID]
-[QTNode comments]
-[QTNode name]
-[QTNode type]
-[QTNode movie]
-[QTNode setMovie:]
-[QTNode hotspotCount]
-[QTNode hotspotAtIndex:]
-[QTNode hotspots]
+[QTNodeEnumerator nodeEnumeratorWithMovie:]
-[QTNodeEnumerator initWithMovie:]
-[QTNodeEnumerator dealloc]
-[QTNodeEnumerator nextObject]
-[QTNodeEnumerator(QTNodeEnumerator_Private) setMovie:]
+[QTStream initialize]
+[QTStream streamWithProxy:]
-[QTStream initWithProxy:]
-[QTStream proxy]
-[QTStream finalize]
-[QTStream dealloc]
-[QTStream invalidate]
-[QTStream averageFrameRate]
-[QTStream chunksPlayed]
-[QTStream chunksReceived]
-[QTStream chunksSkipped]
-[QTStream chunksSkippedPercent]
-[QTStream dataFormat]
-[QTStream expectedFrameRate]
-[QTStream name]
-[QTStream packetsLost]
-[QTStream packetsLostPercent]
-[QTStream queueDuration]
-[QTStream queueSize]
-[QTStream type]
-[QTStream mediaTypeString]
-[QTStream index]
-[QTStream kind]
-[QTStream audioChannelCount]
-[QTStream audioSampleRate]
-[QTStream audioSampleSize]
-[QTStream audioFormatString]
-[QTStream isGrayScale]
-[QTStream pixelDepth]
-[QTStream videoFormatString]
-[QTStream track]
-[QTStream setTrack:]
+[QTStreamEnumerator streamEnumeratorWithTrack:]
-[QTStreamEnumerator initWithTrack:]
-[QTStreamEnumerator dealloc]
-[QTStreamEnumerator nextObject]
-[QTStreamEnumerator(QTStreamEnumerator_Private) setTrack:]
+[QTTrack trackWithProxy:]
-[QTTrack initWithProxy:]
+[QTTrack trackWithTrackID:error:andMovie:]
-[QTTrack initWithTrackID:error:andMovie:]
-[QTTrack initWithTrackHelper:error:]
-[QTTrack dealloc]
-[QTTrack invalidate]
-[QTTrack _learnAboutMedia:]
-[QTTrack _forgetAboutMedia:]
-[QTTrack _learnAboutStream:]
-[QTTrack _forgetAboutStream:]
-[QTTrack isEqual:]
-[QTTrack hash]
-[QTTrack movie]
-[QTTrack media]
-[QTTrack mediaRetained]
+[QTTrack allReadableAttributeKeysForVisibility:]
+[QTTrack allWritableAttributeKeysForVisibility:]
+[QTTrack attributeKeysDisallowedForReadingUnderPlaybackAPIRestriction]
+[QTTrack attributeKeysDisallowedForWritingUnderPlaybackAPIRestriction]
-[QTTrack _isAttributeAvailableForReading:exception:]
-[QTTrack _isAttributeAvailableForWriting:exception:]
-[QTTrack trackAttributes]
-[QTTrack setTrackAttributes:]
-[QTTrack attributeForKey:]
-[QTTrack setAttribute:forKey:]
-[QTTrack objectToken]
-[QTTrack dispose]
-[QTTrack isEnabled]
-[QTTrack setEnabled:]
-[QTTrack setVolume:]
-[QTTrack volume]
-[QTTrack description]
-[QTTrack bounds]
-[QTTrack scaledBounds]
-[QTTrack creationTime]
-[QTTrack modificationTime]
-[QTTrack dimensions]
-[QTTrack position]
-[QTTrack offset]
-[QTTrack frameRate]
-[QTTrack fixedFrameRate]
-[QTTrack floatFrameRate]
-[QTTrack fullName]
-[QTTrack displayName]
-[QTTrack displayNameShort]
-[QTTrack codecName]
-[QTTrack mediaName]
-[QTTrack depth]
-[QTTrack audioChannelLayout]
-[QTTrack audioStreamBasicDescription]
-[QTTrack audioChannelCount]
-[QTTrack audioSampleRate]
-[QTTrack audioSampleSize]
-[QTTrack trackID]
-[QTTrack layer]
-[QTTrack mediaType]
-[QTTrack mediaTypeInMedia]
-[QTTrack mediaSubType]
-[QTTrack range]
-[QTTrack preloadRange]
-[QTTrack setRange:]
-[QTTrack setPreloadRange:]
-[QTTrack timeScale]
-[QTTrack usageInMovie]
-[QTTrack usageInPoster]
-[QTTrack usageInPreview]
-[QTTrack setUsageInMovie:]
-[QTTrack setUsageInPoster:]
-[QTTrack setUsageInPreview:]
-[QTTrack isVisual]
-[QTTrack hasAudio]
-[QTTrack hasWiredActions]
-[QTTrack href]
-[QTTrack transferMode]
-[QTTrack language]
-[QTTrack currentSize]
-[QTTrack naturalSize]
-[QTTrack dataSize]
-[QTTrack dataRate]
-[QTTrack matrix]
-[QTTrack affineTransform]
-[QTTrack annotations]
-[QTTrack setAnnotations:]
-[QTTrack highQualityVideo]
-[QTTrack deinterlaceVideo]
-[QTTrack singleFieldVideo]
-[QTTrack neverPurgeHint]
-[QTTrack preloadHint]
-[QTTrack setHighQualityVideo:]
-[QTTrack setDeinterlaceVideo:]
-[QTTrack setSingleFieldVideo:]
-[QTTrack setNeverPurgeHint:]
-[QTTrack setPreloadHint:]
-[QTTrack isChapterTrack]
-[QTTrack chapterlist]
-[QTTrack mask]
-[QTTrack sourceDimensions]
-[QTTrack sourcePosition]
-[QTTrack alternate]
-[QTTrack referenceByType:index:]
-[QTTrack formatSummary]
-[QTTrack setBounds:]
-[QTTrack setScaledBounds:]
-[QTTrack setDimensions:]
-[QTTrack setCurrentSize:]
-[QTTrack setSourceDimensions:]
-[QTTrack setPosition:]
-[QTTrack setOffset:]
-[QTTrack setFullName:]
-[QTTrack setDisplayName:]
-[QTTrack setHref:]
-[QTTrack setLayer:]
-[QTTrack setTransferMode:]
-[QTTrack setLanguage:]
-[QTTrack setTransferMode:withColor:]
-[QTTrack operationColor]
-[QTTrack setOperationColor:]
-[QTTrack setMatrix:]
-[QTTrack setAffineTransform:]
-[QTTrack setAnnotation:ofType:]
-[QTTrack setChapterlist:]
-[QTTrack setMask:]
-[QTTrack setSourcePosition:]
-[QTTrack setAlternate:]
-[QTTrack setReference:refType:index:]
-[QTTrack videoFormatString]
-[QTTrack audioFormatString]
-[QTTrack format]
-[QTTrack channels]
-[QTTrack sampleSizeString]
-[QTTrack sampleRateString]
-[QTTrack userDataAnnotations]
-[QTTrack languageAsMacOrMP4Code]
-[QTTrack defaultMatrix]
-[QTTrack defaultRect]
-[QTTrack hasMask]
-[QTTrack maskImage]
-[QTTrack setMaskWithDataRef:]
-[QTTrack setMaskImage:]
-[QTTrack invertMask]
-[QTTrack clearMask]
-[QTTrack transformationMatrix]
-[QTTrack defaultQuad]
-[QTTrack transformedQuad]
-[QTTrack setTransformationMatrix:]
-[QTTrack setTransformedQuad:]
-[QTTrack flipX]
-[QTTrack flipY]
-[QTTrack rotate:]
-[QTTrack rotate:around:]
-[QTTrack scale:around:]
-[QTTrack skew:around:]
-[QTTrack setCurrentWidth:sizeMode:preserveAspect:]
-[QTTrack setCurrentHeight:sizeMode:preserveAspect:]
-[QTTrack horizontalOffset]
-[QTTrack verticalOffset]
-[QTTrack setHorizontalOffset:]
-[QTTrack setVerticalOffset:]
-[QTTrack naturalWidth]
-[QTTrack naturalHeight]
-[QTTrack currentWidth:]
-[QTTrack currentHeight:]
-[QTTrack setWidth:height:]
-[QTTrack matrixAsData]
-[QTTrack currentMatrixAsData]
-[QTTrack defaultMatrixAsData]
-[QTTrack setMatrixData:]
-[QTTrack resetMatrix]
-[QTTrack operationColorAsNSColor]
-[QTTrack setOperationColorWithNSColor:]
-[QTTrack playerTransparency]
-[QTTrack setPlayerTransparency:]
-[QTTrack displayedWidth]
-[QTTrack displayedHeight]
-[QTTrack subtitlesLanguageString]
-[QTTrack metaDataDisplayName]
-[QTTrack dataFormat]
-[QTTrack isoLanguageCode]
-[QTTrack isoLanguageCodeAsString]
-[QTTrack isExcludedFromAutoSelection]
-[QTTrack timeCodeStringForTime:]
-[QTTrack timeCodeTrack]
-[QTTrack isTimeCode]
-[QTTrack isTimeCodeDropFrame]
-[QTTrack isAudioVariableRate]
-[QTTrack setBassGain:]
-[QTTrack setTrebleGain:]
-[QTTrack index]
-[QTTrack getSampleDescriptionHandle]
-[QTTrack getSampleDescriptionHandle:]
-[QTTrack getSoundDescriptionV2Handle]
-[QTTrack getSoundDescriptionV2Handle:]
-[QTTrack property:propertyID:propertySize:propertyValuePtr:]
-[QTTrack setProperty:propertyID:propertySize:propertyValuePtr:]
-[QTTrack mediaTimeForTrackTime:]
-[QTTrack setTrackHelper:]
-[QTTrack trackHelper]
-[QTTrack usesFigMedia]
-[QTTrack usesQuickTime]
-[QTTrack setRestrictedToPlaybackAPI:]
-[QTTrack restrictedToPlaybackAPI]
-[QTTrack proxy]
-[QTTrack hasMPEGCharacteristics]
-[QTTrack depthString]
-[QTTrack balance]
-[QTTrack bass]
-[QTTrack gain]
-[QTTrack treble]
-[QTTrack setBalance:]
-[QTTrack setBass:]
-[QTTrack setGain:]
-[QTTrack setTreble:]
-[QTTrack muted]
-[QTTrack setMuted:]
-[QTTrack hasApertureModeDimensions]
-[QTTrack apertureModeDimensionsForMode:]
-[QTTrack setApertureModeDimensions:forMode:]
-[QTTrack generateApertureModeDimensions]
-[QTTrack removeApertureModeDimensions]
-[QTTrack insertSegmentOfTrack:timeRange:atTime:]
-[QTTrack insertSegmentOfTrack:fromRange:scaledToRange:]
-[QTTrack insertEmptySegmentAt:]
-[QTTrack deleteSegment:]
-[QTTrack scaleSegment:newDuration:]
-[QTTrack addImage:forDuration:withAttributes:]
-[QTTrack addImage:forDuration:atTime:withAttributes:]
-[QTTrack addCVImageBuffer:forRange:withAttributes:error:]
-[QTTrack streams]
-[QTTrack streamAtIndex:]
-[QTTrack streamingBitsPerSecond]
-[QTTrack streamingPercentLost]
-[QTTrack streamingBufferDuration]
-[QTTrack registerForPropertyChanges]
-[QTTrack unregisterForPropertyChanges]
-[QTTrack undoManager]
-[QTTrack undoAttributes]
-[QTTrack setUndoManager:]
-[QTTrack setUndoAttributes:]
-[QTTrack isDRMProtected]
-[QTTrack isDRMAuthorized]
-[QTTrack canDRMInteractWithUser]
-[QTTrack setCanDRMInteractWithUser:]
-[QTTrack extendedLanguageTagString]
-[QTTrack setExtendedLanguageTagString:]
-[QTTrack frameStartTime:]
-[QTTrack frameEndTime:]
-[QTTrack keyframeStartTime:]
-[QTTrack(QTTrack_UserData_Private) userDataRef]
-[QTTrack(QTTrack_UserData_Private) userDataOfType:]
-[QTTrack(QTTrack_UserData_Private) userDataOfType:atIndex:]
-[QTTrack(QTTrack_UserData_Private) setUserData:ofType:]
-[QTTrack(QTTrack_UserData_Private) setUserData:ofType:atIndex:]
-[QTTrack(QTTrack_UserData_Private) addUserData:ofType:]
-[QTTrack(QTTrack_UserData_Private) userDataCountOfType:]
-[QTTrack(QTTrack_AutomatorSupport_Private) setColorProfile:ofType:]
-[QTTrack(QTTrack_MetadataReading) commonMetadata]
-[QTTrack(QTTrack_MetadataReading) availableMetadataFormats]
-[QTTrack(QTTrack_MetadataReading) metadataForFormat:]
-[QTTrack(QTTrack_MetadataEditing_Private) validateMetadata:forFormat:error:]
-[QTTrack(QTTrack_MetadataEditing_Private) setMetadata:forFormat:]
-[QTTrack_FigMedia initWithTrackID:error:forParent:andMovie:]
-[QTTrack_FigMedia dealloc]
-[QTTrack_FigMedia finalize]
-[QTTrack_FigMedia setQTMovie:]
-[QTTrack_FigMedia movie]
-[QTTrack_FigMedia media]
-[QTTrack_FigMedia mediaRetained]
-[QTTrack_FigMedia usesFigMedia]
-[QTTrack_FigMedia usesQuickTime]
-[QTTrack_FigMedia figFormatDescription]
-[QTTrack_FigMedia isEnabled]
-[QTTrack_FigMedia setEnabled:]
-[QTTrack_FigMedia volume]
-[QTTrack_FigMedia setVolume:]
-[QTTrack_FigMedia bounds]
-[QTTrack_FigMedia scaledBounds]
-[QTTrack_FigMedia creationTime]
-[QTTrack_FigMedia dimensions]
-[QTTrack_FigMedia frameRate]
-[QTTrack_FigMedia floatFrameRate]
-[QTTrack_FigMedia fullName]
-[QTTrack_FigMedia displayName]
-[QTTrack_FigMedia displayNameShort]
-[QTTrack_FigMedia codecName]
-[QTTrack_FigMedia depth]
-[QTTrack_FigMedia mediaName]
-[QTTrack_FigMedia audioChannelLayout]
-[QTTrack_FigMedia audioStreamBasicDescription]
-[QTTrack_FigMedia audioChannelCount]
-[QTTrack_FigMedia audioSampleRate]
-[QTTrack_FigMedia audioSampleSize]
-[QTTrack_FigMedia figMediaType]
-[QTTrack_FigMedia figMediaSubType]
-[QTTrack_FigMedia mediaType]
-[QTTrack_FigMedia mediaTypeInMedia]
-[QTTrack_FigMedia mediaSubType]
-[QTTrack_FigMedia modificationTime]
-[QTTrack_FigMedia range]
-[QTTrack_FigMedia timeScale]
-[QTTrack_FigMedia isVisual]
-[QTTrack_FigMedia hasAudio]
-[QTTrack_FigMedia href]
-[QTTrack_FigMedia currentSize]
-[QTTrack_FigMedia naturalSize]
-[QTTrack_FigMedia dataSize]
-[QTTrack_FigMedia dataRate]
-[QTTrack_FigMedia language]
-[QTTrack_FigMedia matrix]
-[QTTrack_FigMedia affineTransform]
-[QTTrack_FigMedia annotations]
-[QTTrack_FigMedia highQualityVideo]
-[QTTrack_FigMedia deinterlaceVideo]
-[QTTrack_FigMedia singleFieldVideo]
-[QTTrack_FigMedia chapterlist]
-[QTTrack_FigMedia alternate]
-[QTTrack_FigMedia referenceByType:index:]
-[QTTrack_FigMedia formatSummary]
-[QTTrack_FigMedia videoFormatString]
-[QTTrack_FigMedia audioFormatString]
-[QTTrack_FigMedia format]
-[QTTrack_FigMedia channels]
-[QTTrack_FigMedia sampleSizeString]
-[QTTrack_FigMedia sampleRateString]
-[QTTrack_FigMedia userDataAnnotations]
-[QTTrack_FigMedia subtitlesLanguageString]
-[QTTrack_FigMedia isoLanguageCode]
-[QTTrack_FigMedia isoLanguageCodeAsString]
-[QTTrack_FigMedia isExcludedFromAutoSelection]
-[QTTrack_FigMedia metaDataDisplayName]
-[QTTrack_FigMedia timeCodeStringForTime:]
-[QTTrack_FigMedia timeCodeTrack]
-[QTTrack_FigMedia isTimeCode]
-[QTTrack_FigMedia isTimeCodeDropFrame]
-[QTTrack_FigMedia isAudioVariableRate]
-[QTTrack_FigMedia index]
-[QTTrack_FigMedia getSampleDescriptionHandle]
-[QTTrack_FigMedia getSampleDescriptionHandle:]
-[QTTrack_FigMedia getSoundDescriptionV2Handle]
-[QTTrack_FigMedia getSoundDescriptionV2Handle:]
-[QTTrack_FigMedia dataFormat]
-[QTTrack_FigMedia extendedLanguageTagString]
-[QTTrack_FigMedia trackID]
-[QTTrack_FigMedia setTrackID:]
-[QTTrack_FigMedia hasMPEGCharacteristics]
-[QTTrack_FigMedia depthString]
-[QTTrack_FigMedia numericValueFromFigFormatDescriptionExtension:]
-[QTTrack_FigMedia stringValueFromFigFormatDescriptionExtension:]
-[QTTrack_FigMedia trackPropertyFromAlternateTrackGroup:]
-[QTTrack_FigMedia _floatForProperty:]
-[QTTrack_FigMedia _QTTimeForProperty:]
-[QTTrack_FigMedia _SInt32ForProperty:]
-[QTTrack_FigMedia _booleanForProperty:]
-[QTTrack_FigMedia _longLongForProperty:]
-[QTTrack_FigMedia _stringForProperty:]
-[QTTrack_FigMedia balance]
-[QTTrack_FigMedia bass]
-[QTTrack_FigMedia gain]
-[QTTrack_FigMedia muted]
-[QTTrack_FigMedia treble]
-[QTTrack_FigMedia setBalance:]
-[QTTrack_FigMedia setBass:]
-[QTTrack_FigMedia setGain:]
-[QTTrack_FigMedia setMuted:]
-[QTTrack_FigMedia setTreble:]
-[QTTrack_FigMedia apertureModeDimensionsForMode:]
-[QTTrack_FigMedia hasApertureModeDimensions]
-[QTTrack_FigMedia setApertureModeDimensions:forMode:]
-[QTTrack_FigMedia streamingBitsPerSecond]
-[QTTrack_FigMedia streamingPercentLost]
-[QTTrack_FigMedia streamingBufferDuration]
-[QTTrack_FigMedia isDRMProtected]
-[QTTrack_FigMedia isDRMAuthorized]
-[QTTrack_FigMedia canDRMInteractWithUser]
-[QTTrack_FigMedia setCanDRMInteractWithUser:]
-[QTTrack_FigMedia frameStartTime:]
-[QTTrack_FigMedia frameEndTime:]
-[QTTrack_FigMedia keyframeStartTime:]
-[QTTrack_FigMedia commonMetadata]
-[QTTrack_FigMedia availableMetadataFormats]
-[QTTrack_FigMedia metadataForFormat:]
-[QTTrack_FigMedia validateMetadata:forFormat:error:]
-[QTTrack_FigMedia setMetadata:forFormat:]
+[QTTrack_QuickTime initialize]
-[QTTrack_QuickTime initWithProxy:]
-[QTTrack_QuickTime finalize]
-[QTTrack_QuickTime dealloc]
-[QTTrack_QuickTime invalidate]
-[QTTrack_QuickTime movie]
-[QTTrack_QuickTime media]
-[QTTrack_QuickTime mediaRetained]
-[QTTrack_QuickTime setQTTrack:]
-[QTTrack_QuickTime proxy]
-[QTTrack_QuickTime objectToken]
-[QTTrack_QuickTime usesFigMedia]
-[QTTrack_QuickTime usesQuickTime]
-[QTTrack_QuickTime isEnabled]
-[QTTrack_QuickTime setEnabled:]
-[QTTrack_QuickTime volume]
-[QTTrack_QuickTime setVolume:]
-[QTTrack_QuickTime bounds]
-[QTTrack_QuickTime scaledBounds]
-[QTTrack_QuickTime creationTime]
-[QTTrack_QuickTime dimensions]
-[QTTrack_QuickTime position]
-[QTTrack_QuickTime offset]
-[QTTrack_QuickTime frameRate]
-[QTTrack_QuickTime fixedFrameRate]
-[QTTrack_QuickTime fullName]
-[QTTrack_QuickTime displayName]
-[QTTrack_QuickTime displayNameShort]
-[QTTrack_QuickTime codecName]
-[QTTrack_QuickTime depth]
-[QTTrack_QuickTime mediaName]
-[QTTrack_QuickTime audioChannelLayout]
-[QTTrack_QuickTime audioStreamBasicDescription]
-[QTTrack_QuickTime audioChannelCount]
-[QTTrack_QuickTime audioSampleRate]
-[QTTrack_QuickTime audioSampleSize]
-[QTTrack_QuickTime trackID]
-[QTTrack_QuickTime layer]
-[QTTrack_QuickTime mediaType]
-[QTTrack_QuickTime mediaTypeInMedia]
-[QTTrack_QuickTime mediaSubType]
-[QTTrack_QuickTime modificationTime]
-[QTTrack_QuickTime range]
-[QTTrack_QuickTime timeScale]
-[QTTrack_QuickTime usageInMovie]
-[QTTrack_QuickTime usageInPoster]
-[QTTrack_QuickTime usageInPreview]
-[QTTrack_QuickTime setUsageInMovie:]
-[QTTrack_QuickTime setUsageInPoster:]
-[QTTrack_QuickTime setUsageInPreview:]
-[QTTrack_QuickTime isVisual]
-[QTTrack_QuickTime hasAudio]
-[QTTrack_QuickTime hasWiredActions]
-[QTTrack_QuickTime href]
-[QTTrack_QuickTime transferMode]
-[QTTrack_QuickTime operationColor]
-[QTTrack_QuickTime currentSize]
-[QTTrack_QuickTime naturalSize]
-[QTTrack_QuickTime dataSize]
-[QTTrack_QuickTime dataRate]
-[QTTrack_QuickTime language]
-[QTTrack_QuickTime matrix]
-[QTTrack_QuickTime affineTransform]
-[QTTrack_QuickTime annotations]
-[QTTrack_QuickTime highQualityVideo]
-[QTTrack_QuickTime deinterlaceVideo]
-[QTTrack_QuickTime singleFieldVideo]
-[QTTrack_QuickTime neverPurgeHint]
-[QTTrack_QuickTime preloadHint]
-[QTTrack_QuickTime preloadRange]
-[QTTrack_QuickTime chapterlist]
-[QTTrack_QuickTime mask]
-[QTTrack_QuickTime sourceDimensions]
-[QTTrack_QuickTime sourcePosition]
-[QTTrack_QuickTime textChapterTracks]
-[QTTrack_QuickTime alternate]
-[QTTrack_QuickTime referenceByType:index:]
-[QTTrack_QuickTime formatSummary]
-[QTTrack_QuickTime setBounds:]
-[QTTrack_QuickTime setScaledBounds:]
-[QTTrack_QuickTime setDimensions:]
-[QTTrack_QuickTime setPosition:]
-[QTTrack_QuickTime setOffset:]
-[QTTrack_QuickTime setFullName:]
-[QTTrack_QuickTime setDisplayName:]
-[QTTrack_QuickTime setLayer:]
-[QTTrack_QuickTime setRange:]
-[QTTrack_QuickTime setHref:]
-[QTTrack_QuickTime setTransferMode:]
-[QTTrack_QuickTime setTransferMode:withColor:]
-[QTTrack_QuickTime setOperationColor:]
-[QTTrack_QuickTime setCurrentSize:]
-[QTTrack_QuickTime setLanguage:]
-[QTTrack_QuickTime setMatrix:]
-[QTTrack_QuickTime setAffineTransform:]
-[QTTrack_QuickTime setAnnotation:ofType:]
-[QTTrack_QuickTime setAnnotations:]
-[QTTrack_QuickTime setHighQualityVideo:]
-[QTTrack_QuickTime setDeinterlaceVideo:]
-[QTTrack_QuickTime setSingleFieldVideo:]
-[QTTrack_QuickTime setNeverPurgeHint:]
-[QTTrack_QuickTime setPreloadHint:]
-[QTTrack_QuickTime setPreloadRange:]
-[QTTrack_QuickTime setChapterlist:]
-[QTTrack_QuickTime setMask:]
-[QTTrack_QuickTime setSourceDimensions:]
-[QTTrack_QuickTime setSourcePosition:]
-[QTTrack_QuickTime setAlternate:]
-[QTTrack_QuickTime setReference:refType:index:]
-[QTTrack_QuickTime videoFormatString]
-[QTTrack_QuickTime audioFormatString]
-[QTTrack_QuickTime format]
-[QTTrack_QuickTime channels]
-[QTTrack_QuickTime sampleSizeString]
-[QTTrack_QuickTime sampleRateString]
-[QTTrack_QuickTime userDataAnnotations]
-[QTTrack_QuickTime languageAsMacOrMP4Code]
-[QTTrack_QuickTime defaultMatrix]
-[QTTrack_QuickTime defaultRect]
-[QTTrack_QuickTime maskImage]
-[QTTrack_QuickTime setMaskWithDataRef:]
-[QTTrack_QuickTime setMaskImage:]
-[QTTrack_QuickTime invertMask]
-[QTTrack_QuickTime hasMask]
-[QTTrack_QuickTime clearMask]
-[QTTrack_QuickTime transformationMatrix]
-[QTTrack_QuickTime defaultQuad]
-[QTTrack_QuickTime transformedQuad]
-[QTTrack_QuickTime setTransformationMatrix:]
-[QTTrack_QuickTime setTransformedQuad:]
-[QTTrack_QuickTime flipX]
-[QTTrack_QuickTime flipY]
-[QTTrack_QuickTime rotate:]
-[QTTrack_QuickTime rotate:around:]
-[QTTrack_QuickTime scale:around:]
-[QTTrack_QuickTime skew:around:]
-[QTTrack_QuickTime setCurrentWidth:sizeMode:preserveAspect:]
-[QTTrack_QuickTime setCurrentHeight:sizeMode:preserveAspect:]
-[QTTrack_QuickTime horizontalOffset]
-[QTTrack_QuickTime verticalOffset]
-[QTTrack_QuickTime setHorizontalOffset:]
-[QTTrack_QuickTime setVerticalOffset:]
-[QTTrack_QuickTime naturalWidth]
-[QTTrack_QuickTime naturalHeight]
-[QTTrack_QuickTime currentWidth:]
-[QTTrack_QuickTime currentHeight:]
-[QTTrack_QuickTime setWidth:height:]
-[QTTrack_QuickTime matrixAsData]
-[QTTrack_QuickTime currentMatrixAsData]
-[QTTrack_QuickTime defaultMatrixAsData]
-[QTTrack_QuickTime setMatrixData:]
-[QTTrack_QuickTime resetMatrix]
-[QTTrack_QuickTime operationColorAsNSColor]
-[QTTrack_QuickTime setOperationColorWithNSColor:]
-[QTTrack_QuickTime playerTransparency]
-[QTTrack_QuickTime setPlayerTransparency:]
-[QTTrack_QuickTime displayedWidth]
-[QTTrack_QuickTime displayedHeight]
-[QTTrack_QuickTime subtitlesLanguageString]
-[QTTrack_QuickTime isoLanguageCode]
-[QTTrack_QuickTime isoLanguageCodeAsString]
-[QTTrack_QuickTime isExcludedFromAutoSelection]
-[QTTrack_QuickTime metaDataDisplayName]
-[QTTrack_QuickTime timeCodeStringForTime:]
-[QTTrack_QuickTime timeCodeTrack]
-[QTTrack_QuickTime isTimeCode]
-[QTTrack_QuickTime isTimeCodeDropFrame]
-[QTTrack_QuickTime isAudioVariableRate]
-[QTTrack_QuickTime setBassGain:]
-[QTTrack_QuickTime setTrebleGain:]
-[QTTrack_QuickTime index]
-[QTTrack_QuickTime getSampleDescriptionHandle]
-[QTTrack_QuickTime getSampleDescriptionHandle:]
-[QTTrack_QuickTime getSoundDescriptionV2Handle]
-[QTTrack_QuickTime getSoundDescriptionV2Handle:]
-[QTTrack_QuickTime dataFormat]
-[QTTrack_QuickTime property:propertyID:propertySize:propertyValuePtr:]
-[QTTrack_QuickTime setProperty:propertyID:propertySize:propertyValuePtr:]
-[QTTrack_QuickTime mediaTimeForTrackTime:]
-[QTTrack_QuickTime hasMPEGCharacteristics]
-[QTTrack_QuickTime depthString]
-[QTTrack_QuickTime balance]
-[QTTrack_QuickTime bass]
-[QTTrack_QuickTime gain]
-[QTTrack_QuickTime muted]
-[QTTrack_QuickTime treble]
-[QTTrack_QuickTime setBalance:]
-[QTTrack_QuickTime setBass:]
-[QTTrack_QuickTime setGain:]
-[QTTrack_QuickTime setMuted:]
-[QTTrack_QuickTime setTreble:]
-[QTTrack_QuickTime apertureModeDimensionsForMode:]
-[QTTrack_QuickTime hasApertureModeDimensions]
-[QTTrack_QuickTime setApertureModeDimensions:forMode:]
-[QTTrack_QuickTime generateApertureModeDimensions]
-[QTTrack_QuickTime removeApertureModeDimensions]
-[QTTrack_QuickTime insertSegmentOfTrack:timeRange:atTime:]
-[QTTrack_QuickTime insertSegmentOfTrack:fromRange:scaledToRange:]
-[QTTrack_QuickTime insertEmptySegmentAt:]
-[QTTrack_QuickTime deleteSegment:]
-[QTTrack_QuickTime scaleSegment:newDuration:]
-[QTTrack_QuickTime addImage:forDuration:withAttributes:]
-[QTTrack_QuickTime addImage:forDuration:atTime:withAttributes:]
-[QTTrack_QuickTime addCVImageBuffer:forRange:withAttributes:error:]
-[QTTrack_QuickTime streams]
-[QTTrack_QuickTime streamAtIndex:]
-[QTTrack_QuickTime streamingBitsPerSecond]
-[QTTrack_QuickTime streamingPercentLost]
-[QTTrack_QuickTime streamingBufferDuration]
-[QTTrack_QuickTime undoManager]
-[QTTrack_QuickTime undoAttributes]
-[QTTrack_QuickTime setUndoManager:]
-[QTTrack_QuickTime setUndoAttributes:]
-[QTTrack_QuickTime isDRMProtected]
-[QTTrack_QuickTime isDRMAuthorized]
-[QTTrack_QuickTime canDRMInteractWithUser]
-[QTTrack_QuickTime setCanDRMInteractWithUser:]
-[QTTrack_QuickTime extendedLanguageTagString]
-[QTTrack_QuickTime setExtendedLanguageTagString:]
-[QTTrack_QuickTime frameStartTime:]
-[QTTrack_QuickTime frameEndTime:]
-[QTTrack_QuickTime keyframeStartTime:]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) userDataRef]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) userDataOfType:]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) userDataOfType:atIndex:]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) setUserData:ofType:]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) setUserData:ofType:atIndex:]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) addUserData:ofType:]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) userDataCountOfType:]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) setColorProfile:ofType:]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) commonMetadata]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) availableMetadataFormats]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) metadataForFormat:]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) validateMetadata:forFormat:error:]
-[QTTrack_QuickTime(QTTrack_QuickTime_UserData_Private) setMetadata:forFormat:]
+[QTTrackEnumerator trackEnumeratorWithMovie:]
-[QTTrackEnumerator initWithMovie:]
-[QTTrackEnumerator finalize]
-[QTTrackEnumerator dealloc]
-[QTTrackEnumerator nextObject]
-[QTTrackEnumerator(QTTrackEnumerator_Private) setMovie:]
_QTTrackAttributesGetAttribute
_QTTrackAttributesSetAttribute
-[QTTrackHelper initWithProxy:]
-[QTTrackHelper proxy]
-[QTTrackHelper initWithTrackID:error:forParent:andMovie:]
-[QTTrackHelper finalize]
-[QTTrackHelper dealloc]
-[QTTrackHelper invalidate]
-[QTTrackHelper movie]
-[QTTrackHelper media]
-[QTTrackHelper mediaRetained]
-[QTTrackHelper objectToken]
-[QTTrackHelper _readableAttributeKeysForVisibility:]
-[QTTrackHelper _writableAttributeKeysForVisibility:]
-[QTTrackHelper trackAttributes]
-[QTTrackHelper setTrackAttributes:]
-[QTTrackHelper attributeForKey:]
-[QTTrackHelper setAttribute:forKey:]
-[QTTrackHelper isEnabled]
-[QTTrackHelper setEnabled:]
-[QTTrackHelper volume]
-[QTTrackHelper setVolume:]
-[QTTrackHelper description]
-[QTTrackHelper trackID]
-[QTTrackHelper dispose]
-[QTTrackHelper usesFigMedia]
-[QTTrackHelper usesQuickTime]
-[QTTrackHelper bounds]
-[QTTrackHelper scaledBounds]
-[QTTrackHelper creationTime]
-[QTTrackHelper dimensions]
-[QTTrackHelper position]
-[QTTrackHelper offset]
-[QTTrackHelper frameRate]
-[QTTrackHelper fixedFrameRate]
-[QTTrackHelper floatFrameRate]
-[QTTrackHelper fullName]
-[QTTrackHelper displayName]
-[QTTrackHelper displayNameShort]
-[QTTrackHelper codecName]
-[QTTrackHelper depth]
-[QTTrackHelper mediaName]
-[QTTrackHelper audioChannelLayout]
-[QTTrackHelper audioStreamBasicDescription]
-[QTTrackHelper audioChannelCount]
-[QTTrackHelper audioSampleRate]
-[QTTrackHelper audioSampleSize]
-[QTTrackHelper layer]
-[QTTrackHelper mediaType]
-[QTTrackHelper mediaTypeInMedia]
-[QTTrackHelper mediaSubType]
-[QTTrackHelper modificationTime]
-[QTTrackHelper range]
-[QTTrackHelper timeScale]
-[QTTrackHelper usageInMovie]
-[QTTrackHelper usageInPoster]
-[QTTrackHelper usageInPreview]
-[QTTrackHelper setUsageInMovie:]
-[QTTrackHelper setUsageInPoster:]
-[QTTrackHelper setUsageInPreview:]
-[QTTrackHelper isChapterTrack]
-[QTTrackHelper isVisual]
-[QTTrackHelper hasAudio]
-[QTTrackHelper hasWiredActions]
-[QTTrackHelper href]
-[QTTrackHelper transferMode]
-[QTTrackHelper operationColor]
-[QTTrackHelper currentSize]
-[QTTrackHelper naturalSize]
-[QTTrackHelper dataSize]
-[QTTrackHelper dataRate]
-[QTTrackHelper language]
-[QTTrackHelper matrix]
-[QTTrackHelper affineTransform]
-[QTTrackHelper annotations]
-[QTTrackHelper highQualityVideo]
-[QTTrackHelper deinterlaceVideo]
-[QTTrackHelper singleFieldVideo]
-[QTTrackHelper neverPurgeHint]
-[QTTrackHelper preloadHint]
-[QTTrackHelper preloadRange]
-[QTTrackHelper chapterlist]
-[QTTrackHelper mask]
-[QTTrackHelper sourceDimensions]
-[QTTrackHelper sourcePosition]
-[QTTrackHelper alternate]
-[QTTrackHelper referenceByType:index:]
-[QTTrackHelper formatSummary]
-[QTTrackHelper setBounds:]
-[QTTrackHelper setScaledBounds:]
-[QTTrackHelper setDimensions:]
-[QTTrackHelper setPosition:]
-[QTTrackHelper setOffset:]
-[QTTrackHelper setFullName:]
-[QTTrackHelper setDisplayName:]
-[QTTrackHelper setLayer:]
-[QTTrackHelper setRange:]
-[QTTrackHelper setHref:]
-[QTTrackHelper setTransferMode:]
-[QTTrackHelper setTransferMode:withColor:]
-[QTTrackHelper setOperationColor:]
-[QTTrackHelper setCurrentSize:]
-[QTTrackHelper setLanguage:]
-[QTTrackHelper setMatrix:]
-[QTTrackHelper setAffineTransform:]
-[QTTrackHelper setAnnotation:ofType:]
-[QTTrackHelper setAnnotations:]
-[QTTrackHelper setHighQualityVideo:]
-[QTTrackHelper setDeinterlaceVideo:]
-[QTTrackHelper setSingleFieldVideo:]
-[QTTrackHelper setNeverPurgeHint:]
-[QTTrackHelper setPreloadHint:]
-[QTTrackHelper setPreloadRange:]
-[QTTrackHelper setChapterlist:]
-[QTTrackHelper setMask:]
-[QTTrackHelper setSourceDimensions:]
-[QTTrackHelper setSourcePosition:]
-[QTTrackHelper setAlternate:]
-[QTTrackHelper setReference:refType:index:]
-[QTTrackHelper videoFormatString]
-[QTTrackHelper audioFormatString]
-[QTTrackHelper format]
-[QTTrackHelper channels]
-[QTTrackHelper sampleSizeString]
-[QTTrackHelper sampleRateString]
-[QTTrackHelper userDataAnnotations]
-[QTTrackHelper languageAsMacOrMP4Code]
-[QTTrackHelper defaultMatrix]
-[QTTrackHelper defaultRect]
-[QTTrackHelper maskImage]
-[QTTrackHelper setMaskWithDataRef:]
-[QTTrackHelper setMaskImage:]
-[QTTrackHelper invertMask]
-[QTTrackHelper hasMask]
-[QTTrackHelper clearMask]
-[QTTrackHelper transformationMatrix]
-[QTTrackHelper defaultQuad]
-[QTTrackHelper transformedQuad]
-[QTTrackHelper setTransformationMatrix:]
-[QTTrackHelper setTransformedQuad:]
-[QTTrackHelper flipX]
-[QTTrackHelper flipY]
-[QTTrackHelper rotate:]
-[QTTrackHelper rotate:around:]
-[QTTrackHelper scale:around:]
-[QTTrackHelper skew:around:]
-[QTTrackHelper setCurrentWidth:sizeMode:preserveAspect:]
-[QTTrackHelper setCurrentHeight:sizeMode:preserveAspect:]
-[QTTrackHelper horizontalOffset]
-[QTTrackHelper verticalOffset]
-[QTTrackHelper setHorizontalOffset:]
-[QTTrackHelper setVerticalOffset:]
-[QTTrackHelper naturalWidth]
-[QTTrackHelper naturalHeight]
-[QTTrackHelper currentWidth:]
-[QTTrackHelper currentHeight:]
-[QTTrackHelper setWidth:height:]
-[QTTrackHelper matrixAsData]
-[QTTrackHelper currentMatrixAsData]
-[QTTrackHelper defaultMatrixAsData]
-[QTTrackHelper setMatrixData:]
-[QTTrackHelper resetMatrix]
-[QTTrackHelper operationColorAsNSColor]
-[QTTrackHelper setOperationColorWithNSColor:]
-[QTTrackHelper playerTransparency]
-[QTTrackHelper setPlayerTransparency:]
-[QTTrackHelper displayedWidth]
-[QTTrackHelper displayedHeight]
-[QTTrackHelper subtitlesLanguageString]
-[QTTrackHelper isoLanguageCode]
-[QTTrackHelper isoLanguageCodeAsString]
-[QTTrackHelper isExcludedFromAutoSelection]
-[QTTrackHelper metaDataDisplayName]
-[QTTrackHelper timeCodeStringForTime:]
-[QTTrackHelper timeCodeTrack]
-[QTTrackHelper isTimeCode]
-[QTTrackHelper isTimeCodeDropFrame]
-[QTTrackHelper isAudioVariableRate]
-[QTTrackHelper setBassGain:]
-[QTTrackHelper setTrebleGain:]
-[QTTrackHelper index]
-[QTTrackHelper getSampleDescriptionHandle]
-[QTTrackHelper getSampleDescriptionHandle:]
-[QTTrackHelper getSoundDescriptionV2Handle]
-[QTTrackHelper getSoundDescriptionV2Handle:]
-[QTTrackHelper dataFormat]
-[QTTrackHelper property:propertyID:propertySize:propertyValuePtr:]
-[QTTrackHelper setProperty:propertyID:propertySize:propertyValuePtr:]
-[QTTrackHelper mediaTimeForTrackTime:]
-[QTTrackHelper hasMPEGCharacteristics]
-[QTTrackHelper depthString]
-[QTTrackHelper createAuxData]
-[QTTrackHelper disposeAuxData]
-[QTTrackHelper qtTrack]
-[QTTrackHelper setQTTrack:]
-[QTTrackHelper numericValueFromFigFormatDescriptionExtension:]
-[QTTrackHelper stringValueFromFigFormatDescriptionExtension:]
-[QTTrackHelper balance]
-[QTTrackHelper bass]
-[QTTrackHelper gain]
-[QTTrackHelper muted]
-[QTTrackHelper treble]
-[QTTrackHelper setBalance:]
-[QTTrackHelper setBass:]
-[QTTrackHelper setGain:]
-[QTTrackHelper setMuted:]
-[QTTrackHelper setTreble:]
-[QTTrackHelper apertureModeDimensionsForMode:]
-[QTTrackHelper hasApertureModeDimensions]
-[QTTrackHelper setApertureModeDimensions:forMode:]
-[QTTrackHelper generateApertureModeDimensions]
-[QTTrackHelper removeApertureModeDimensions]
-[QTTrackHelper insertSegmentOfTrack:timeRange:atTime:]
-[QTTrackHelper insertSegmentOfTrack:fromRange:scaledToRange:]
-[QTTrackHelper insertEmptySegmentAt:]
-[QTTrackHelper deleteSegment:]
-[QTTrackHelper scaleSegment:newDuration:]
-[QTTrackHelper addImage:forDuration:withAttributes:]
-[QTTrackHelper addImage:forDuration:atTime:withAttributes:]
-[QTTrackHelper addCVImageBuffer:forRange:withAttributes:error:]
-[QTTrackHelper streams]
-[QTTrackHelper streamAtIndex:]
-[QTTrackHelper streamingBitsPerSecond]
-[QTTrackHelper streamingPercentLost]
-[QTTrackHelper streamingBufferDuration]
-[QTTrackHelper registerForPropertyChanges]
-[QTTrackHelper unregisterForPropertyChanges]
-[QTTrackHelper undoManager]
-[QTTrackHelper undoAttributes]
-[QTTrackHelper setUndoManager:]
-[QTTrackHelper setUndoAttributes:]
-[QTTrackHelper isDRMProtected]
-[QTTrackHelper isDRMAuthorized]
-[QTTrackHelper canDRMInteractWithUser]
-[QTTrackHelper setCanDRMInteractWithUser:]
-[QTTrackHelper extendedLanguageTagString]
-[QTTrackHelper setExtendedLanguageTagString:]
-[QTTrackHelper frameStartTime:]
-[QTTrackHelper frameEndTime:]
-[QTTrackHelper keyframeStartTime:]
-[QTTrackHelper userDataRef]
-[QTTrackHelper userDataOfType:]
-[QTTrackHelper userDataOfType:atIndex:]
-[QTTrackHelper setUserData:ofType:]
-[QTTrackHelper setUserData:ofType:atIndex:]
-[QTTrackHelper addUserData:ofType:]
-[QTTrackHelper userDataCountOfType:]
-[QTTrackHelper setColorProfile:ofType:]
-[QTTrackHelper commonMetadata]
-[QTTrackHelper availableMetadataFormats]
-[QTTrackHelper metadataForFormat:]
-[QTTrackHelper validateMetadata:forFormat:error:]
-[QTTrackHelper setMetadata:forFormat:]
-[NSURL(NSURL_QTKitAdditions) QT_URLByRemovingFragment]
-[QTBackgroundQueue finalize]
-[QTCallbackRegistry dealloc]
_localizedDataSizeString
-[NSError(QTError_Utilities) qt_errorByAddingUserInfoEntriesFromDictionary:]
+[QTMediaKeys initialize]
+[QTMediaKeys mediaKeys]
+[QTMediaKeys boolForType:defaultValue:]
-[QTMediaKeys mediaKeysForType:]
-[QTMediaKeys addMediaKey:forType:]
-[QTMediaKeys removeMediaKey:forType:]
-[QTResolvedDecompressionOptions description]
-[QTResolvedDecompressionOptions resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:]
_QTKitRectFromPicHandle
_QTKitNSSizeIsEmpty
_QTTimeIs32Bit
_QTTimeRangeIs32Bit
_QTTimeFromFigTime
_QTTimeToFigTime
_QTIsRunningTranslated
_QTKitIsWindowServerAvailable
_NSImageFromCGImageRef
_NSCGImageRepFromCGImageRef
_NSImageFromCIImage
_NSImageFromCVPixelBufferRef
_CGImageRefFromCVPixelBufferRef
_NSImageFromNSBitmapImageRep
_NSImageFromNSImageRep
_NSImageFromNSPICTImageRep
_NSImageFromNSImageRepArray
_CGImageRefFromNSImage
_NSBitmapImageRepFromNSImage
_CGImageRefFromNSBitmapImageRep
_CGImageRefFromCIImage
_CGImageRefFromNSCGImageRep
_CVBufferReleaseDataCallBack
_NSBitmapImageRepReleaseDataCallBack
_CIImageFromNSImage
_CIImageFromCGImageRef
_CIImageFromCVImageBufferRef
_CIImageFromNSBitmapImageRep
_NSCGImageRepFromNSImage
_NSCGImageRepFromNSBitmapImageRep
_NSBitmapImageRepFromCGImageRef
_NSBitmapImageRepFromCIImage
_NSBitmapImageRepFromNSPICTImageRep
_NSPDFImageRepFromNSImage
_NSPDFImageRepFromCGImageRef
_NSPDFImageRepFromNSBitmapImageRep
_CVPixelBufferRefFromNSImage
_CVPixelBufferRefFromCGImageRef
_CVOpenGLTextureRefFromNSImage
_CVOpenGLTextureRefFromCGImageRef
_RGBColorFromNSColor
_NSColorFromRGBColor
_ARGBColorFromNSColor
_NSColorFromARGBColor
_QTCreateCGColorFromNSColor
_MatrixRecordFromNSAffineTransform
_MatrixRecordFromNSAffineTransformStruct
_MatrixRecordFromCGAffineTransform
_CGAffineTransformFromNSAffineTransformStruct
_MatrixRecordFromMatrixArray
_NSAffineTransformFromMatrixRecord
_NSAffineTransformStructFromMatrixRecord
_CGAffineTransformFromMatrixRecord
_NSAffineTransformStructFromCGAffineTransform
_NSAffineTransformIsIdentity
_QTCommonKeyFromQuickTimeMetadataKey
_QTCommonKeyFromQuickTimeUserdataKey
_QTCommonKeyFromiTunesMetadataKey
_QTCommonKeyFromID3MetadataKey
_QTCurrentLanguageString
_QTFigExtraAttributesFromQTAttributes
_friendlinessofNSImageRep
_compareImageRepsAccordingToQTFriendliness
_QTAcceleratedDisplayMask
+[QTUtilities qtUtilities]
-[QTUtilities isQuickTimePro]
-[QTUtilities isQuickTimeProForVersion:]
-[QTUtilities validateQuickTimeProForVersion:withName:andCode:]
-[QTUtilities legacyCodecsEnabled]
-[QTUtilities setLegacyCodecsEnabled:]
-[QTUtilities isAutoTransport]
-[QTUtilities setIsAutoTransport:]
-[QTUtilities transportProtocol]
-[QTUtilities transportPort]
-[QTUtilities setTransportProtocol:andPort:]
-[QTUtilities sitesInDownloadCache]
-[QTUtilities clearDownloadCacheForSite:]
-[QTUtilities clearDownloadCache]
-[QTUtilities preferredLanguage]
-[QTUtilities isCoreImageAvailable]
-[QTUtilities isHardwareHighAudioQualityRenderCapable]
-[QTUtilities fontNumberForName:]
-[QTUtilities fontNameForNumber:]
-[QTUtilities systemDirection]
-[QTUtilities applicationTextEncoding]
-[QTUtilities connectionSpeedFromQTPreferences]
-[QTUtilities languageFromQTPreferences]
-[QTUtilities openControlPanel:]
-[QTUtilities setProcessProperty:value:]
-[QTUtilities textEncodingFromLanguageCode:]
-[NSString(QTKit_Extensions) isIPAddress]
-[QTVideoRendererWebKitOnly init]
-[QTVideoRendererWebKitOnly dealloc]
-[QTVideoRendererWebKitOnly finalize]
-[QTVideoRendererWebKitOnly movie]
-[QTVideoRendererWebKitOnly setMovie:]
-[QTVideoRendererWebKitOnly drawInRect:]
-[QTVideoRendererWebKitOnly newImageAvailable]
_impl_QTClassicMovieControllerViewNeedsDisplay
-[QTClassicMovieControllerView initWithFrame:]
_QTClassicMovieControllerViewCFMachPortCallback
_QTClassicMovieControllerViewStopRunLoopSourcePerform
_QTClassicMovieControllerViewNeedsDisplayWorkLoop
-[QTClassicMovieControllerView _tearDown]
-[QTClassicMovieControllerView dealloc]
-[QTClassicMovieControllerView finalize]
-[QTClassicMovieControllerView movie]
-[QTClassicMovieControllerView setMovie:]
-[QTClassicMovieControllerView _setVisible:forControllerButton:]
-[QTClassicMovieControllerView _isControllerButtonVisible:]
-[QTClassicMovieControllerView showsResizeIndicator]
-[QTClassicMovieControllerView setShowsResizeIndicator:]
-[QTClassicMovieControllerView isBackButtonVisible]
-[QTClassicMovieControllerView setBackButtonVisible:]
-[QTClassicMovieControllerView isCustomButtonVisible]
-[QTClassicMovieControllerView setCustomButtonVisible:]
-[QTClassicMovieControllerView isHotSpotButtonVisible]
-[QTClassicMovieControllerView setHotSpotButtonVisible:]
-[QTClassicMovieControllerView areStepButtonsVisible]
-[QTClassicMovieControllerView setStepButtonsVisible:]
-[QTClassicMovieControllerView isTranslateButtonVisible]
-[QTClassicMovieControllerView setTranslateButtonVisible:]
-[QTClassicMovieControllerView isVolumeButtonVisible]
-[QTClassicMovieControllerView setVolumeButtonVisible:]
-[QTClassicMovieControllerView areZoomButtonsVisible]
-[QTClassicMovieControllerView setZoomButtonsVisible:]
-[QTClassicMovieControllerView boundsDidChange:]
-[QTClassicMovieControllerView volumeDidChange:]
-[QTClassicMovieControllerView drawRect:]
_releaseControllerImage
-[QTClassicMovieControllerView setFrame:]
-[QTClassicMovieControllerView viewDidEndLiveResize]
-[QTClassicMovieControllerView updateMovieControllerBounds]
-[QTClassicMovieControllerView becomeFirstResponder]
-[QTClassicMovieControllerView resignFirstResponder]
-[QTClassicMovieControllerView acceptsFirstResponder]
-[QTClassicMovieControllerView viewWillMoveToWindow:]
-[QTClassicMovieControllerView _controllerNeedsDisplayInRect:pleaseDisplayNow:]
-[QTClassicMovieControllerView _controllerNeedsDisplayCallback:]
-[QTClassicMovieControllerView _controllerNeedsDisplayMainThreadCallback]
-[QTMovieControllerView movie]
-[QTMovieControllerView setMovie:]
-[QTMovieControllerView setControllerVisible:]
-[QTMovieControllerView showsResizeIndicator]
-[QTMovieControllerView setShowsResizeIndicator:]
-[QTMovieControllerView isBackButtonVisible]
-[QTMovieControllerView setBackButtonVisible:]
-[QTMovieControllerView isCustomButtonVisible]
-[QTMovieControllerView setCustomButtonVisible:]
-[QTMovieControllerView isHotSpotButtonVisible]
-[QTMovieControllerView setHotSpotButtonVisible:]
-[QTMovieControllerView areStepButtonsVisible]
-[QTMovieControllerView setStepButtonsVisible:]
-[QTMovieControllerView isTranslateButtonVisible]
-[QTMovieControllerView setTranslateButtonVisible:]
-[QTMovieControllerView isVolumeButtonVisible]
-[QTMovieControllerView setVolumeButtonVisible:]
-[QTMovieControllerView areZoomButtonsVisible]
-[QTMovieControllerView setZoomButtonsVisible:]
-[NSEvent(NSEvent_QTAdditions) isDeadKey]
-[QTMovieViewDragHighlightOverlayView drawRect:]
+[QTMovieView initialize]
-[QTMovieView _commonInit]
-[QTMovieView initWithFrame:]
-[QTMovieView initWithCoder:]
-[QTMovieView encodeWithCoder:]
-[QTMovieView dealloc]
-[QTMovieView finalize]
-[QTMovieView description]
-[QTMovieView delegate]
-[QTMovieView setDelegate:]
-[QTMovieView drawRect:]
-[QTMovieView beginDocument]
-[QTMovieView endDocument]
-[QTMovieView isPrinting]
-[QTMovieView isOpaque]
-[QTMovieView _movieIsOpaque]
-[QTMovieView _updateMovieIsOpaque]
-[QTMovieView _movieBoxIsOpaqueDidChange:]
-[QTMovieView becomeFirstResponder]
-[QTMovieView acceptsFirstResponder]
-[QTMovieView resignFirstResponder]
-[QTMovieView mouseDownCanMoveWindow]
-[QTMovieView hitTest:]
-[QTMovieView viewDidHide]
-[QTMovieView viewDidUnhide]
-[QTMovieView _registerWindowNotifications]
-[QTMovieView _unregisterWindowNotifications]
-[QTMovieView _windowDidChangeMainOrKey:]
-[QTMovieView viewWillMoveToWindow:]
-[QTMovieView viewDidMoveToWindow]
-[QTMovieView _updateRendererToPreferredRendererViewClass]
-[QTMovieView _updateRenderer]
-[QTMovieView _rendererView]
-[QTMovieView movie]
-[QTMovieView setLayer:]
-[QTMovieView setMovie:]
-[QTMovieView _detachFromMovie]
-[QTMovieView _attachToMovieController]
-[QTMovieView _movieControllerDidChange:]
-[QTMovieView _syncViewProxyWithMovieProxy]
-[QTMovieView _attachToMediaHelper]
-[QTMovieView _mediaHelperDidChange:]
-[QTMovieView _movieNaturalSizeDidChange:]
-[QTMovieView movieWouldUseVisualContextDidChange:]
-[QTMovieView imagingModeAllowsGWorld]
-[QTMovieView setImagingModeAllowsGWorld:]
-[QTMovieView imagingModeForcedToGWorld]
-[QTMovieView setImagingModeForcedToGWorld:]
-[QTMovieView setImagingModeAllowsVisualContext:]
-[QTMovieView setImagingModeForcedToVisualContext:]
-[QTMovieView drawSynchronously]
-[QTMovieView setDrawSynchronously:]
-[QTMovieView drawWithCGImage]
-[QTMovieView setDrawWithCGImage:]
-[QTMovieView drawsWithFinalCutStudioCompatibleColors]
-[QTMovieView setDrawsWithFinalCutStudioCompatibleColors:]
-[QTMovieView _applyFinalCutStudioCompatibleColorsToRenderer]
-[QTMovieView preservesAspectRatio]
-[QTMovieView setPreservesAspectRatio:]
-[QTMovieView fillColor]
-[QTMovieView setFillColor:]
-[QTMovieView _applyDelegateHelperToRenderer]
-[QTMovieView movieControllerView]
-[QTMovieView isControllerVisible]
-[QTMovieView setControllerVisible:]
-[QTMovieView showsResizeIndicator]
-[QTMovieView setShowsResizeIndicator:]
-[QTMovieView isBackButtonVisible]
-[QTMovieView setBackButtonVisible:]
-[QTMovieView isCustomButtonVisible]
-[QTMovieView setCustomButtonVisible:]
-[QTMovieView isHotSpotButtonVisible]
-[QTMovieView setHotSpotButtonVisible:]
-[QTMovieView areStepButtonsVisible]
-[QTMovieView setStepButtonsVisible:]
-[QTMovieView isTranslateButtonVisible]
-[QTMovieView setTranslateButtonVisible:]
-[QTMovieView isVolumeButtonVisible]
-[QTMovieView setVolumeButtonVisible:]
-[QTMovieView areZoomButtonsVisible]
-[QTMovieView setZoomButtonsVisible:]
-[QTMovieView _setVisible:forControllerButton:]
-[QTMovieView isButtonVisible:]
-[QTMovieView _controllerButtonVisibility:]
-[QTMovieView _trackVisibility:forControllerButton:]
-[QTMovieView _applyControllerButtonVisibilitySettings]
-[QTMovieView hideButton:]
-[QTMovieView showButton:]
-[QTMovieView toggleButton:]
-[QTMovieView showCustomButton:]
-[QTMovieView movieBounds]
-[QTMovieView movieControllerBounds]
-[QTMovieView controllerBarHeight]
-[QTMovieView updateFrame]
-[QTMovieView viewDidEndLiveResize]
-[QTMovieView boundsDidChange:]
-[QTMovieView _windowFrameDidChange:]
-[QTMovieView renewGState]
-[QTMovieView _updateServerGeometry]
-[QTMovieView play:]
-[QTMovieView pause:]
-[QTMovieView gotoBeginning:]
-[QTMovieView gotoEnd:]
-[QTMovieView gotoNextSelectionPoint:]
-[QTMovieView gotoPreviousSelectionPoint:]
-[QTMovieView gotoPosterFrame:]
-[QTMovieView stepForward:]
-[QTMovieView stepBackward:]
-[QTMovieView zoomIn:]
-[QTMovieView zoomOut:]
-[QTMovieView showAll:]
-[QTMovieView toggleLoops:]
-[QTMovieView isEditable]
-[QTMovieView setEditable:]
-[QTMovieView doEditOperation:]
-[QTMovieView restoreMovieEditState:]
-[QTMovieView cut:]
-[QTMovieView copy:]
-[QTMovieView paste:]
-[QTMovieView selectAll:]
-[QTMovieView selectNone:]
-[QTMovieView delete:]
-[QTMovieView add:]
-[QTMovieView addScaled:]
-[QTMovieView replace:]
-[QTMovieView trim:]
-[QTMovieView drop:]
-[QTMovieView handleEvent:]
-[QTMovieView handleKeyDown:]
-[QTMovieView handleKeyUp:]
-[QTMovieView mouseDownSetup:]
-[QTMovieView mouseDown:]
-[QTMovieView mouseDragged:]
-[QTMovieView mouseUp:]
-[QTMovieView mouseMoved:]
-[QTMovieView mouseEntered:]
-[QTMovieView mouseExited:]
-[QTMovieView otherMouseDown:]
-[QTMovieView otherMouseDragged:]
-[QTMovieView otherMouseUp:]
-[QTMovieView scrollWheel:]
-[QTMovieView keyDown:]
-[QTMovieView keyUp:]
-[QTMovieView flagsChanged:]
-[QTMovieView helpRequested:]
-[QTMovieView resetCursorRects]
-[QTMovieView scrollXEnabled]
-[QTMovieView setScrollXEnabled:]
-[QTMovieView scrollYEnabled]
-[QTMovieView setScrollYEnabled:]
-[QTMovieView scrollZEnabled]
-[QTMovieView setScrollZEnabled:]
-[QTMovieView menuForEvent:]
-[QTMovieView draggingSourceOperationMaskForLocal:]
-[QTMovieView ignoreModifierKeysWhileDragging]
-[QTMovieView draggedImage:endedAt:operation:]
-[QTMovieView _currentFrameImage]
-[QTMovieView dragImage]
-[QTMovieView dragImage:at:offset:event:pasteboard:source:slideBack:]
-[QTMovieView dragMovie]
-[QTMovieView pasteboard:provideDataForType:]
-[QTMovieView namesOfPromisedFilesDroppedAtDestination:]
-[QTMovieView draggingEntered:]
-[QTMovieView draggingExited:]
-[QTMovieView dropMovie:]
-[QTMovieView performDragOperation:]
-[QTMovieView _dragHighlightOverlayPanelContentRect]
-[QTMovieView setDragHighlight:]
-[QTMovieView validateMenuItem:]
-[QTMovieView validateUserInterfaceItem:]
-[QTMovieView accessibilityIsIgnored]
-[QTMovieView accessibilityAttributeValue:]
-[QTMovieView focusRingEnabled]
-[QTMovieView enableFocusRing:]
+[QTMovieView defaultFocusRingType]
-[QTMovieView shouldDrawFocusRing]
-[QTMovieView _setDrawFocusRing:]
-[QTMovieView insertText:]
-[QTMovieView doCommandBySelector:]
-[QTMovieView setMarkedText:selectedRange:]
-[QTMovieView unmarkText]
-[QTMovieView hasMarkedText]
-[QTMovieView conversationIdentifier]
-[QTMovieView attributedSubstringFromRange:]
-[QTMovieView markedRange]
-[QTMovieView selectedRange]
-[QTMovieView firstRectForCharacterRange:]
-[QTMovieView characterIndexForPoint:]
-[QTMovieView validAttributesForMarkedText]
-[QTMovieView surfaceID]
-[QTMovieView windowID]
-[QTMovieView(QTMovieView_QTImageConsumerDelegateHelper_Internal) _alteredImageForImage:]
-[QTCaptureDeviceInput init]
-[QTCaptureDeviceInput observeValueForKeyPath:ofObject:change:context:]
-[QTCaptureAudioPreviewOutput init]
-[QTCaptureAudioPreviewOutput dealloc]
-[QTCaptureAudioPreviewOutput _updateOutputDeviceUniqueID]
-[QTCaptureAudioPreviewOutput _updateOutputDeviceUniqueIDFromPropertyListener]
-[QTCaptureAudioPreviewOutput outputDeviceUniqueID]
-[QTCaptureAudioPreviewOutput setOutputDeviceUniqueID:]
-[QTCaptureAudioPreviewOutput _updateVolume]
-[QTCaptureAudioPreviewOutput _updateVolumeFromPropertyListener]
-[QTCaptureAudioPreviewOutput volume]
-[QTCaptureAudioPreviewOutput setVolume:]
-[QTCaptureAudioPreviewOutput connectionMediaTypes]
-[QTCaptureAudioPreviewOutput canAddConnectionForMediaType:]
-[QTCaptureAudioPreviewOutput connections]
-[QTCaptureAudioPreviewOutput addConnection:error:]
-[QTCaptureAudioPreviewOutput removeConnection:]
-[QTCaptureAudioPreviewOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
_audioPreviewDeviceIDPropertyListener
_audioPreviewVolumePropertyListener
-[QTCaptureAudioPreviewOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[QTCaptureAudioPreviewOutput connectionGraphNodeForConnection:]
-[QTCaptureAudioPreviewOutput connectionUnitInputNumberForConnection:]
-[QTCaptureAudioPreviewOutput getAudioMixerNode:andUnitElement:forConnection:]
+[QTCaptureVideoPreviewOutputCallbackData callbackDataWithOutput:connection:backgroundQueue:]
-[QTCaptureVideoPreviewOutputCallbackData initWithOutput:connection:backgroundQueue:]
-[QTCaptureVideoPreviewOutputCallbackData dealloc]
-[QTCaptureVideoPreviewOutputCallbackData output]
-[QTCaptureVideoPreviewOutputCallbackData connection]
-[QTCaptureVideoPreviewOutputCallbackData backgroundQueue]
-[QTCaptureVideoPreviewOutputInternal init]
-[QTCaptureVideoPreviewOutputInternal dealloc]
-[QTCaptureVideoPreviewOutput init]
-[QTCaptureVideoPreviewOutput dealloc]
-[QTCaptureVideoPreviewOutput delegate]
-[QTCaptureVideoPreviewOutput setDelegate:]
-[QTCaptureVideoPreviewOutput pixelBufferAttributes]
-[QTCaptureVideoPreviewOutput setPixelBufferAttributes:]
-[QTCaptureVideoPreviewOutput deinterlacesVideo]
-[QTCaptureVideoPreviewOutput setDeinterlacesVideo:]
-[QTCaptureVideoPreviewOutput decompressionAccuracy]
-[QTCaptureVideoPreviewOutput setDecompressionAccuracy:]
-[QTCaptureVideoPreviewOutput videoPixelFormat]
-[QTCaptureVideoPreviewOutput setVideoPixelFormat:]
-[QTCaptureVideoPreviewOutput outputVideoFrame:withSampleBuffer:fromConnection:]
-[QTCaptureVideoPreviewOutput _outputVideoFrame:withSampleBuffer:fromConnection:]
-[QTCaptureVideoPreviewOutput backgroundQueue:invocationWasCanceled:]
-[QTCaptureVideoPreviewOutput addImageConsumer:forConnection:]
-[QTCaptureVideoPreviewOutput removeImageConsumer:forConnection:flush:]
-[QTCaptureVideoPreviewOutput imageConsumersForConnection:]
-[QTCaptureVideoPreviewOutput _renderHelperForConnection:]
-[QTCaptureVideoPreviewOutput _visualContextForConnection:]
-[QTCaptureVideoPreviewOutput _setVisualContext:forConnection:]
-[QTCaptureVideoPreviewOutput _timebaseForConnection:]
-[QTCaptureVideoPreviewOutput _graphTimebaseDidChangeForConnection:]
-[QTCaptureVideoPreviewOutput _videoPreviewUnitPixelBufferAttributes]
-[QTCaptureVideoPreviewOutput connections]
-[QTCaptureVideoPreviewOutput connectionMediaTypes]
-[QTCaptureVideoPreviewOutput addConnection:error:]
-[QTCaptureVideoPreviewOutput removeConnection:]
-[QTCaptureVideoPreviewOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
_videoPreviewLastRenderErrorListener
_videoPreviewGraphTimebaseListener
-[QTCaptureVideoPreviewOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[QTCaptureVideoPreviewOutput connectionGraphNodeForConnection:]
-[QTCaptureVideoPreviewOutput connectionUnitInputNumberForConnection:]
-[QTCaptureVideoPreviewOutput _isPreviewRunning]
-[QTCaptureVideoPreviewOutput _setIsPreviewRunning:]
-[QTCaptureVideoPreviewOutput graphWillStartForSession:]
-[QTCaptureVideoPreviewOutput graphWillStopForSession:dueToError:]
-[QTCaptureVideoPreviewOutput videoDecompressionRequirementForConnection:]
-[QTCaptureVideoPreviewOutput videoDecompressionAttributesForVideoConnection:]
-[QTCaptureVideoPreviewOutput videoPreviewRenderHelper:receivedImageBuffer:imageBaggage:connection:]
+[QTCaptureView initialize]
-[QTCaptureView initWithCoder:]
-[QTCaptureView encodeWithCoder:]
-[QTCaptureView initWithFrame:]
-[QTCaptureView finalize]
-[QTCaptureView dealloc]
-[QTCaptureView drawRect:]
-[QTCaptureView resizeSubviewsWithOldSize:]
-[QTCaptureView _setCaptureViewNeedsLayout:]
-[QTCaptureView _setCaptureViewDoesNeedLayoutOnMainThread]
-[QTCaptureView _drawIBPreviewInRect:]
-[QTCaptureView previewBounds]
-[QTCaptureView setLayer:]
-[QTCaptureView _updateRendererView]
-[QTCaptureView isOpaque]
-[QTCaptureView fillColor]
-[QTCaptureView setFillColor:]
-[QTCaptureView preservesAspectRatio]
-[QTCaptureView setPreservesAspectRatio:]
-[QTCaptureView captureSession]
-[QTCaptureView setCaptureSession:]
-[QTCaptureView _updateVideoPreviewConnectionFromVideoPreviewOutput]
-[QTCaptureView observeValueForKeyPath:ofObject:change:context:]
-[QTCaptureView availableVideoPreviewConnections]
-[QTCaptureView setAvailableVideoPreviewConnections:]
-[QTCaptureView videoPreviewConnection]
-[QTCaptureView setVideoPreviewConnection:]
-[QTCaptureView setDelegate:]
-[QTCaptureView delegate]
-[QTCaptureView _applyDelegateHelperToRenderer]
-[QTCaptureView formatDidChange:]
-[QTCaptureView(QTCaptureView_QTImageConsumerDelegateHelper_Service_Internal) _alteredImageForImage:]
-[QTCaptureFileOutput init]
-[QTCaptureFileOutput dealloc]
-[QTCaptureFileOutput finalize]
-[QTCaptureFileOutput outputFileURL]
-[QTCaptureFileOutput recordToOutputFileURL:]
-[QTCaptureFileOutput recordToOutputFileURL:bufferDestination:]
-[QTCaptureFileOutput isRecordingPaused]
-[QTCaptureFileOutput pauseRecording]
-[QTCaptureFileOutput resumeRecording]
-[QTCaptureFileOutput compressionOptionsForConnection:]
-[QTCaptureFileOutput setCompressionOptions:forConnection:]
-[QTCaptureFileOutput maximumVideoSize]
-[QTCaptureFileOutput setMaximumVideoSize:]
-[QTCaptureFileOutput minimumVideoFrameInterval]
-[QTCaptureFileOutput setMinimumVideoFrameInterval:]
-[QTCaptureFileOutput recordedDuration]
-[QTCaptureFileOutput recordedFileSize]
-[QTCaptureFileOutput maximumRecordedDuration]
-[QTCaptureFileOutput setMaximumRecordedDuration:]
-[QTCaptureFileOutput maximumRecordedFileSize]
-[QTCaptureFileOutput setMaximumRecordedFileSize:]
-[QTCaptureFileOutput delegate]
-[QTCaptureFileOutput setDelegate:]
+[QTCaptureFileOutputRecordingOperationDescriptor recordingOperationDescriptorWithOutputFileURL:bufferDestination:]
-[QTCaptureFileOutputRecordingOperationDescriptor init]
-[QTCaptureFileOutputRecordingOperationDescriptor initWithOutputFileURL:bufferDestination:]
-[QTCaptureFileOutputRecordingOperationDescriptor dealloc]
-[QTCaptureFileOutputRecordingOperationDescriptor outputFileURL]
-[QTCaptureFileOutputRecordingOperationDescriptor bufferDestination]
-[QTCaptureFileOutputRecordingOperationDescriptor stopError]
-[QTCaptureFileOutputRecordingOperationDescriptor setStopError:]
-[QTCaptureFileOutputRecordingOperationDescriptor isPaused]
-[QTCaptureFileOutputRecordingOperationDescriptor setPaused:]
-[QTCaptureFileOutputRecordingOperationDescriptor setDidStartWritingIfNotAlreadyStarted]
-[QTCaptureFileOutputRecordingOperationDescriptor operationDescriptorCoalescedWithExistingOperationDescriptor:]
+[QTCaptureFileOutputPauseOperationDescriptor operationThatShouldPause:]
-[QTCaptureFileOutputPauseOperationDescriptor init]
-[QTCaptureFileOutputPauseOperationDescriptor initOperationThatShouldPause:]
-[QTCaptureFileOutputPauseOperationDescriptor shouldPause]
-[QTCaptureFileOutputPauseOperationDescriptor operationDescriptorCoalescedWithExistingOperationDescriptor:]
-[QTCaptureMovieFileOutput init]
-[QTCaptureMovieFileOutput dealloc]
-[QTCaptureMovieFileOutput _refreshRecordingState]
-[QTCaptureMovieFileOutput outputFileURL]
-[QTCaptureMovieFileOutput recordToOutputFileURL:bufferDestination:]
-[QTCaptureMovieFileOutput isRecordingPaused]
-[QTCaptureMovieFileOutput _setPaused:]
-[QTCaptureMovieFileOutput pauseRecording]
-[QTCaptureMovieFileOutput resumeRecording]
-[QTCaptureMovieFileOutput _startFileControlCallbackTimeoutTimer]
-[QTCaptureMovieFileOutput _cancelFileControlCallbackTimeoutTimer]
-[QTCaptureMovieFileOutput _fileControlCallbackTimeout:]
-[QTCaptureMovieFileOutput _runningRecordingOperationDescriptor]
-[QTCaptureMovieFileOutput _setRunningRecordingOperationDescriptor:]
-[QTCaptureMovieFileOutput _removeRunningRecordingOperationDescriptorEqualTo:]
-[QTCaptureMovieFileOutput _stopError]
-[QTCaptureMovieFileOutput _setStopError:]
-[QTCaptureMovieFileOutput _activeConnections]
-[QTCaptureMovieFileOutput _addActiveConnection:]
-[QTCaptureMovieFileOutput _removeActiveConnection:]
-[QTCaptureMovieFileOutput _noDataConnections]
-[QTCaptureMovieFileOutput _setNoDataConnections:]
-[QTCaptureMovieFileOutput _handleCanceledOperations:]
-[QTCaptureMovieFileOutput _cancelAllOperations]
-[QTCaptureMovieFileOutput recordedDuration]
-[QTCaptureMovieFileOutput recordedFileSize]
-[QTCaptureMovieFileOutput setCompressionOptions:forConnection:]
-[QTCaptureMovieFileOutput setMaximumVideoSize:]
-[QTCaptureMovieFileOutput setMinimumVideoFrameInterval:]
-[QTCaptureMovieFileOutput _updateVideoDecompressorNodeForConnection:]
-[QTCaptureMovieFileOutput _updateVideoFrameRateGovernorNodeForConnection:]
-[QTCaptureMovieFileOutput _updateCompressorNodesForConnection:]
-[QTCaptureMovieFileOutput outputConnectionFormatDescriptionDidChange:]
-[QTCaptureMovieFileOutput inputConnectionFormatDescriptionDidChange:]
-[QTCaptureMovieFileOutput connections]
-[QTCaptureMovieFileOutput connectionMediaTypes]
-[QTCaptureMovieFileOutput canAddConnectionForMediaType:]
-[QTCaptureMovieFileOutput _fileWriterUnitElementForConnection:]
-[QTCaptureMovieFileOutput addConnection:error:]
-[QTCaptureMovieFileOutput removeConnection:]
-[QTCaptureMovieFileOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
_FileControlCallback
_CompressorRender
-[QTCaptureMovieFileOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[QTCaptureMovieFileOutput connectionGraphNodeForConnection:]
-[QTCaptureMovieFileOutput connectionUnitInputNumberForConnection:]
-[QTCaptureMovieFileOutput graphWillStartForSession:]
-[QTCaptureMovieFileOutput graphWillStopForSession:dueToError:]
-[QTCaptureMovieFileOutput videoDecompressionRequirementForConnection:]
-[QTCaptureMovieFileOutput videoDecompressionAttributesForVideoConnection:]
-[QTCaptureMovieFileOutput getAudioMixerNode:andUnitElement:forConnection:]
-[QTCaptureMovieFileOutput _controlFileWritingForConnection:busNumber:fileControlToken:]
-[QTCaptureMovieFileOutput _startFileWritingForConnection:fileControlToken:runningRecordingOperationDescriptor:]
_FileCompletionCallback
-[QTCaptureMovieFileOutput _stopFileWritingForConnection:fileControlToken:runningRecordingOperationDescriptor:stopWritingFlags:stopError:]
-[QTCaptureMovieFileOutput _forciblyStopFileWritingForRunningRecordingOperation]
-[QTCaptureMovieFileOutput _filesCompleted:]
-[QTCaptureMovieFileOutput _operationFailed:]
-[QTCaptureMovieFileOutput _compressorDidRenderConnection:busNumber:processHints:sampleBuffer:]
-[QTCaptureMovieFileOutput _syncTime]
-[QTCaptureDecompressedVideoOutputInternal init]
-[QTCaptureDecompressedVideoOutputInternal dealloc]
-[QTCaptureDecompressedVideoOutput init]
-[QTCaptureDecompressedVideoOutput dealloc]
-[QTCaptureDecompressedVideoOutput setMinimumVideoFrameInterval:]
-[QTCaptureDecompressedVideoOutput setAutomaticallyDropsLateVideoFrames:]
-[QTCaptureDecompressedVideoOutput setDelegate:]
-[QTCaptureDecompressedVideoOutput setDeinterlacesVideo:]
-[QTCaptureDecompressedVideoOutput removeConnection:]
_ConsumerReset
_decompressorLastRenderErrorListener
_pixelBufferReleaseCallback
-[QTCaptureDecompressedAudioOutputCallbackData output]
-[QTCaptureDecompressedAudioOutputCallbackData connection]
-[QTCaptureDecompressedAudioOutputCallbackData backgroundQueue]
-[QTCaptureDecompressedAudioOutputInternal dealloc]
-[QTCaptureDecompressedAudioOutput dealloc]
-[QTCaptureDecompressedAudioOutput delegate]
-[QTCaptureDecompressedAudioOutput setCompressionOptions:forConnection:]
-[QTCaptureDecompressedAudioOutput outputAudioSampleBuffer:fromConnection:]
-[QTCaptureDecompressedAudioOutput _outputAudioSampleBuffer:fromConnection:]
-[QTCaptureDecompressedAudioOutput backgroundQueue:invocationWasCanceled:]
_ConsumerRender
_ConsumerInitialize
_ConsumerUninitialize
_ConsumerStart
_ConsumerStop
_ConsumerReset
_ConsumerDeallocate
_ConsumerCanRenderNow
_ConsumerCopyAvailableFormats
_ConsumerCopyClock
+[QTCaptureScreenInput initialize]
-[QTCaptureScreenInput initWithDisplayID:]
-[QTCaptureScreenInput init]
-[QTCaptureScreenInput dealloc]
-[QTCaptureScreenInput _setInputUnitProperty:bytes:length:]
-[QTCaptureScreenInput _flippedCropRectForCropRect:]
-[QTCaptureScreenInput _syncScreenInputWithSessionDecompressionOptions]
-[QTCaptureScreenInput minimumVideoFrameInterval]
-[QTCaptureScreenInput setMinimumVideoFrameInterval:]
-[QTCaptureScreenInput cropRect]
-[QTCaptureScreenInput setCropRect:]
-[QTCaptureScreenInput usesMouseClickEffect]
-[QTCaptureScreenInput _mouseClickEffect]
-[QTCaptureScreenInput setUsesMouseClickEffect:]
-[QTCaptureScreenInput captureTimeScale]
-[QTCaptureScreenInput setCaptureTimeScale:]
-[QTCaptureScreenInput connections]
-[QTCaptureScreenInput addInputUnitsForConnection:toGraph:ofCaptureSession:error:]
-[QTCaptureScreenInput removeInputUnitsForConnection:fromGraph:ofCaptureSession:]
-[QTCaptureScreenInput connectionGraphNodeForConnection:]
-[QTCaptureScreenInput connectionUnitOutputNumberForConnection:]
-[QTCaptureScreenInput clockProviderNodeForConnection:]
-[QTCaptureScreenInput sessionWillUseOutputDecompressionOptions:forConnection:]
-[QTMovieModernizerInternal sourceURL]
-[QTMovieModernizerInternal setSourceURL:]
-[QTMovieModernizerInternal destinationURL]
-[QTMovieModernizerInternal setDestinationURL:]
-[QTMovieModernizerInternal outputFormat]
-[QTMovieModernizerInternal setOutputFormat:]
-[QTMovieModernizerInternal error]
-[QTMovieModernizerInternal setError:]
-[QTMovieModernizerInternal status]
-[QTMovieModernizerInternal setStatus:]
-[QTMovieModernizerInternal verbose]
-[QTMovieModernizerInternal setVerbose:]
-[QTMovieModernizerInternal trackProcessArray]
-[QTMovieModernizerInternal setTrackProcessArray:]
-[QTMovieModernizerInternal modernizerProgress]
-[QTMovieModernizerInternal setModernizerProgress:]
-[QTMovieModernizerInternal setupProgress]
-[QTMovieModernizerInternal setSetupProgress:]
-[QTMovieModernizerInternal transcodeProgress]
-[QTMovieModernizerInternal setTranscodeProgress:]
-[QTMovieModernizerInternal writeOutAssetProgress]
-[QTMovieModernizerInternal setWriteOutAssetProgress:]
-[QTMovieModernizerInternal formatReader]
-[QTMovieModernizerInternal setFormatReader:]
-[QTMovieModernizerInternal byteStream]
-[QTMovieModernizerInternal setByteStream:]
-[QTMovieModernizerInternal trackList]
-[QTMovieModernizerInternal setTrackList:]
-[QTMovieModernizerInternal trackRefDict]
-[QTMovieModernizerInternal setTrackRefDict:]
-[QTMovieModernizerInternal sourceTrackGroups]
-[QTMovieModernizerInternal setSourceTrackGroups:]
-[QTMovieModernizerInternal sourceReader]
-[QTMovieModernizerInternal setSourceReader:]
-[QTMovieModernizerInternal destinationWriter]
-[QTMovieModernizerInternal setDestinationWriter:]
-[QTMovieModernizerInternal loaderQueue]
-[QTMovieModernizerInternal setLoaderQueue:]
-[QTMovieModernizerInternal completionQueue]
-[QTMovieModernizerInternal setCompletionQueue:]
-[QTMovieModernizerInternal sourceTimeScale]
-[QTMovieModernizerInternal setSourceTimeScale:]
-[QTMovieModernizerInternal legacyURL]
-[QTMovieModernizerInternal setLegacyURL:]
-[QTMovieModernizerInternal internalOutputFormat]
-[QTMovieModernizerInternal setInternalOutputFormat:]
-[QTMovieModernizerInternal durationInSeconds]
-[QTMovieModernizerInternal setDurationInSeconds:]
-[QTMovieModernizerInternal sourceVideoCodecType]
-[QTMovieModernizerInternal setSourceVideoCodecType:]
-[NSArray(NSStringArray_ModernizerExtras) containsString:]
-[AVURLAsset(AVURLAsset_ModernizerExtras) checkIfAssetNeedsModernization:infoString:]
-[AVURLAsset(AVURLAsset_ModernizerExtras) containsReferences]
-[AVAssetTrack(AVAssetTrack_ModernizerExtras) isChapterTrack]
-[AVAssetTrack(AVAssetTrack_ModernizerExtras) isVideoChapterTrack]
-[AVAssetTrack(AVAssetTrack_ModernizerExtras) getChapterTrackIDReference]
-[AVAssetTrack(AVAssetTrack_ModernizerExtras) isNonModernVideoChapterTrack]
-[AVAssetTrack(AVAssetTrack_ModernizerExtras) trackMediaSubTypeWithCount:]
+[QTMovieModernizer checkIfMediaTypeToPassthrough:subType:]
+[QTMovieModernizer checkIfTrackTypeToSkipWhenNotSelfContained:]
+[QTMovieModernizer checkIfTrackTypeToSkipDuringModernization:]
+[QTMovieModernizer checkIfTrackTypeNeedsModernization:]
+[QTMovieModernizer isTrackMediaTypeIgnoredByCoreMedia:]
+[QTMovieModernizer areWeRunningInASandbox]
+[QTMovieModernizer isSubtypeSupportedInSandbox:subType:]
+[QTMovieModernizer checkIfTrackSubtypeTypeForQuickTime:]
+[QTMovieModernizer checkIfOldMP3Track:subType:]
+[QTMovieModernizer requiresModernization:error:]
_QTMovieModernizerLocalizedStringFromTable
_QTMovieModernizerLocalizedError
-[QTMovieModernizer setOutputFormat:]
-[QTMovieModernizer setInternalOutputFormat:]
-[QTMovieModernizer outputFormat]
-[QTMovieModernizer internalOutputFormat]
-[QTMovieModernizer setTrackProcessArray:]
-[QTMovieModernizer trackProcessArray]
-[QTMovieModernizer usableURL]
-[QTMovieModernizer setStatus:]
-[QTMovieModernizer status]
-[QTMovieModernizer error]
-[QTMovieModernizer destinationURL]
-[QTMovieModernizer sourceURL]
-[QTMovieModernizer sourceReader]
-[QTMovieModernizer destinationWriter]
-[QTMovieModernizer modernizerProgress]
-[QTMovieModernizer setupProgress]
-[QTMovieModernizer transcodeProgress]
-[QTMovieModernizer writeOutAssetProgress]
-[QTMovieModernizer durationInSeconds]
-[QTMovieModernizer sourceVideoCodecType]
-[QTMovieModernizer initWithSourceURL:destinationURL:]
-[QTMovieModernizer createUniqueLegacyFilePath:extension:inDirectory:]
-[QTMovieModernizer createTrackProcessArrayFromURL:usableURL:]
_formatReaderForSourceURL
-[QTMovieModernizer sourceNeedsModernization]
-[QTMovieModernizer processForTrack:]
-[QTMovieModernizer mediaTypeForSourceTrackID:]
-[QTMovieModernizer modernizerTrackForSourceTrackID:]
-[QTMovieModernizer assetWriterInputForSourceTrackID:]
+[QTMovieModernizer createExportSourceForTrackNumber:sourceURL:mediaType:]
-[QTMovieModernizer processTracksBypassingFormatReader:error:]
-[QTMovieModernizer processTrackWithCMASessions:sourceURL:mediaType:mediaTypeString:error:]
_deleteFileAtURL
-[QTMovieModernizer runCMASession:destination:parentTrackProgress:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___67-[QTMovieModernizer runCMASession:destination:parentTrackProgress:]_block_invoke
_callSetCompleteUnitCountOnMainThread
___copy_helper_block_
___destroy_helper_block_
-[QTMovieModernizer createCMASession:mediaTypeString:trackIndex:sourceURL:destURL:]
-[QTMovieModernizer sourceHasNoMPEGTracks]
-[QTMovieModernizer countOfTranscodeUnits]
-[QTMovieModernizer countOfPassthroughUnits]
-[QTMovieModernizer setupAssetsForModernization:]
-[QTMovieModernizer getTemporaryURLFromNameInURL:]
-[QTMovieModernizer flattenMovie:]
-[QTMovieModernizer runModernizer]
-[QTMovieModernizer dealloc]
-[QTMovieModernizer modernizeWithCompletionHandler:]
___52-[QTMovieModernizer modernizeWithCompletionHandler:]_block_invoke
_mt_log_qtmodernizer_modernization
___copy_helper_block_631
___destroy_helper_block_632
+[QTMovieModernizer checkMovieModernizeRequired:isReferenceMovie:]
+[QTMovieModernizer trackIndexForTrackID:inArray:]
-[QTMovieModernizer defaultTrackProcessList:]
_readCodecMappingList
___45-[QTMovieModernizer defaultTrackProcessList:]_block_invoke
___copy_helper_block_680
___destroy_helper_block_681
-[QTMovieModernizer setupTracksForAsset:error:]
-[QTMovieModernizer genericVideoSettings]
-[QTMovieModernizer genericVideoSettingsFromTrack:fromSubType:toCodec:]
-[QTMovieModernizer genericAudioSettingsFromTrack:]
-[QTMovieModernizer grabTrackGroups:]
-[QTMovieModernizer processTrackGroups]
-[QTMovieModernizer processTrackReferences]
-[QTMovieModernizer grabSourceTrackMetadata:]
-[QTMovieModernizer grabSourceMetadata:]
-[QTMovieModernizer processTracks]
___34-[QTMovieModernizer processTracks]_block_invoke
___copy_helper_block_837
___destroy_helper_block_838
___34-[QTMovieModernizer processTracks]_block_invoke851
-[QTMovieModernizer getFirstBufferFromAssetTrack:]
_defaultUncompressedAudioSettings
-[QTMovieModernizer isRGBCodec:]
-[QTMovieModernizer adjustColorTagBufferAttachmentsInBuffer:forSubType:]
-[QTMovieModernizer checkModernizeDebug]
-[QTMovieModernizer cancel]
-[QTMovieModernizerTrack initWithSourceAsset:track:forModernizer:]
-[QTMovieModernizerTrack copyNextSampleBuffer]
-[QTMovieModernizerTrack writeNextOutputSampleBuffer:]
-[QTMovieModernizerTrack addTrackToSourceReader:toReader:settings:]
-[QTMovieModernizerTrack addTrackToDestinationWriter:forModernizer:settings:withOriginalAssetTrack:]
-[QTMovieModernizerTrack startup]
-[QTMovieModernizerTrack cleanup]
-[QTMovieModernizerTrack updateTrackCompletedTime:]
-[QTMovieModernizerTrack modernizer]
-[QTMovieModernizerTrack setModernizer:]
-[QTMovieModernizerTrack sourceAsset]
-[QTMovieModernizerTrack setSourceAsset:]
-[QTMovieModernizerTrack sourceTrack]
-[QTMovieModernizerTrack setSourceTrack:]
-[QTMovieModernizerTrack sourceID]
-[QTMovieModernizerTrack setSourceID:]
-[QTMovieModernizerTrack sourceDataRate]
-[QTMovieModernizerTrack setSourceDataRate:]
-[QTMovieModernizerTrack sourceTimeScale]
-[QTMovieModernizerTrack setSourceTimeScale:]
-[QTMovieModernizerTrack sourceTrackMetadata]
-[QTMovieModernizerTrack setSourceTrackMetadata:]
-[QTMovieModernizerTrack readerOutput]
-[QTMovieModernizerTrack setReaderOutput:]
-[QTMovieModernizerTrack writerInput]
-[QTMovieModernizerTrack setWriterInput:]
-[QTMovieModernizerTrack sourceMediaType]
-[QTMovieModernizerTrack setSourceMediaType:]
-[QTMovieModernizerTrack sourceMediaSubType]
-[QTMovieModernizerTrack setSourceMediaSubType:]
-[QTMovieModernizerTrack sourceTrackIsEnabled]
-[QTMovieModernizerTrack setSourceTrackIsEnabled:]
-[QTMovieModernizerTrack sourceBufferCount]
-[QTMovieModernizerTrack setSourceBufferCount:]
-[QTMovieModernizerTrack outputBufferCount]
-[QTMovieModernizerTrack setOutputBufferCount:]
-[QTMovieModernizerTrack legacyQTURL]
-[QTMovieModernizerTrack setLegacyQTURL:]
-[QTMovieModernizerTrack legacyQTAssetReader]
-[QTMovieModernizerTrack setLegacyQTAssetReader:]
-[QTMovieModernizerTrack trackProgress]
-[QTMovieModernizerTrack setTrackProgress:]
-[QTMovieModernizerTrack cmaTrackProgress]
-[QTMovieModernizerTrack setCmaTrackProgress:]
-[QTMovieModernizerTrack completedDataBytesRead]
-[QTMovieModernizerTrack setCompletedDataBytesRead:]
-[QTMovieModernizerTrack updateProgressTimer]
-[QTMovieModernizerTrack setUpdateProgressTimer:]
-[QTMovieModernizerTrack cmaSessionRef]
-[QTMovieModernizerTrack setCmaSessionRef:]
-[QTMovieModernizerTrack timeRange]
-[QTMovieModernizerTrack setTimeRange:]
-[QTMovieModernizerPassthroughTrack initWithSourceAsset:track:forModernizer:]
-[QTMovieModernizerLegacyQTTrackPassthrough initWithSourceAsset:track:forModernizer:]
-[QTMovieModernizerLegacyQTTrackPassthrough startup]
-[QTMovieModernizerLegacyQTTrackPassthrough cleanup]
-[QTMovieModernizerLegacyQTTrack initWithSourceAsset:track:forModernizer:]
+[QTMovieModernizerLegacyQTTrack cmaPortNameFromMediaType:]
-[QTMovieModernizerLegacyQTTrack startup]
-[QTMovieModernizerLegacyQTTrack cleanup]
-[QTMovieModernizerLegacyMP3Track initWithSourceAsset:track:forModernizer:]
-[QTMovieModernizerLegacyMP3Track newMP3AssetInTmpDirectoryFromAudioTrack:asset:error:]
-[QTMovieModernizerLegacyMP3Track startup]
-[QTMovieModernizerLegacyMP3Track cleanup]
-[QTMovieModernizerLegacyMP3Track legacyMP3URL]
-[QTMovieModernizerLegacyMP3Track setLegacyMP3URL:]
-[QTMovieModernizerLegacyMP3Track legacyMP3AssetReader]
-[QTMovieModernizerLegacyMP3Track setLegacyMP3AssetReader:]
_AVMGetProcessArchitecture
_AVMGetOSNameAndVersion
_frameworkBundleVersionString
___insertBarrierBlockIfMaxSessionsReached_block_invoke
___callSetCompleteUnitCountOnMainThread_block_invoke
___copy_helper_block_1313
___destroy_helper_block_1314
___modernizerSerialQueueInitOnce_block_invoke
+[QTMovieLayer layerWithMovie:]
-[QTMovieLayer tearDown]
-[QTMovieLayer dealloc]
-[QTMovieLayer finalize]
-[QTMovieLayer movie]
-[QTMovieLayer _qtMovieSubtitleDidChange:]
-[QTMovieLayer _qtMovieClosedCaptionDidChange:]
-[QTMovieLayer _qtMovieSubtitleVisibilityDidChange:]
-[QTMovieLayer _qtMovieClosedCaptionVisibilityDidChange:]
-[QTMovieLayer layoutSublayers]
-[QTMovieLayer layerDidBecomeVisible:]
-[QTMovieLayer layerDidChangeDisplay:]
-[QTMediaIOGraphNodeList finalize]
-[QTMediaIOGraphNodeList nodeListByAppendingNodes:count:]
-[QTMediaIOGraphUnitDescription getNodeFunctionalDesignation:nodeIndex:error:]
_HYGetWidescreenBit
_HYGetDVVideoInfo
_HYUnpackVideoSource
_HYUnpackVideoSourceControl
_HYUnpackRecDate
_HYUnpackRecTime
_HYDVFrameIsNormalPlaySpeed
_HYGetDVAudioSpeed
-[QTCaptureOperationDescriptorQueueItem init]
-[QTCaptureOperationDescriptorQueueItem initWithOperationDescriptor:operationTime:]
-[QTCaptureOperationDescriptorQueueItem dealloc]
-[QTCaptureOperationDescriptorQueueItem operationDescriptor]
-[QTCaptureOperationDescriptorQueueItem operationTime]
-[QTCaptureOperationDescriptorQueue init]
-[QTCaptureOperationDescriptorQueue dealloc]
-[QTCaptureOperationDescriptorQueue enqueueOperationDescriptor:forTime:dequeuedOperationDescriptors:]
-[QTCaptureOperationDescriptorQueue operationDescriptorForTime:dequeue:]
-[QTCaptureOperationDescriptorQueue newestOperationDescriptorOfClass:operationTime:]
-[QTCaptureOperationDescriptorQueue dequeueAllOperationDescriptors]
_DevicesListener
+[QTCaptureDALDevice deviceWithUniqueID:]
-[QTCaptureDALDevice _removePropertyListeners]
_DeviceIsAliveListener
_InUseListener
_StreamsListener
_LinkedDevicesListener
_SuspendedListener
-[QTCaptureDALDevice finalize]
-[QTCaptureDALDevice dealloc]
-[QTCaptureDALDevice modelUniqueID]
-[QTCaptureDALDevice deviceAttributes]
-[QTCaptureDALDevice attributeIsReadOnly:]
-[QTCaptureDALDevice setAttribute:forKey:]
-[QTCaptureDALDevice stopUsingDevice]
-[QTCaptureDALDevice _handleDeviceIsAliveNotification:]
-[QTCaptureDALDevice _postNotificationNamed:]
-[QTCaptureDALDevice _sendAVCDeviceOpcode:playbackMode:]
-[QTCaptureDALDevice _retrieveAVCDeviceOpcode:]
-[QTCaptureDALDevice _refreshIsInUseByAnotherApplicationFromCallback]
-[QTCaptureDALDevice _refreshStreamsFromCallback]
-[QTCaptureDALDevice _refreshLinkedDevicesAttributeFromCallback]
-[QTCaptureDALDevice _refreshSuspendedAttributeFromCallback]
-[QTCaptureDALDevice setAutomaticallyAdjustsFeatureControls:]
-[QTCaptureDALDevice automaticallyAdjustsFeatureControls]
-[QTCaptureDALDevice isHighResolutionCamera]
-[QTCaptureDALDevice nativelySupportsCompressionOptions:]
-[QTCaptureDALDevice availableStillImageFormats]
-[QTCaptureDALDevice stillImageSampleBufferWithFormat:error:]
+[QTCaptureDevice deviceWithUniqueID:]
+[QTCaptureDevice tundraBundleIdentifier]
-[QTCaptureDevice classForCoder]
-[QTCaptureDevice initWithCoder:]
-[QTCaptureDevice encodeWithCoder:]
-[QTCaptureDevice dealloc]
-[QTCaptureDevice finalize]
-[QTCaptureDevice description]
-[QTCaptureDevice uniqueID]
-[QTCaptureDevice modelUniqueID]
-[QTCaptureDevice localizedDisplayName]
-[QTCaptureDevice formatDescriptions]
-[QTCaptureDevice deviceAttributes]
-[QTCaptureDevice setDeviceAttributes:]
-[QTCaptureDevice attributeIsReadOnly:]
-[QTCaptureDevice attributeForKey:]
-[QTCaptureDevice setAttribute:forKey:]
-[QTCaptureDevice addLinkedDeviceWithoutReentering:]
-[QTCaptureDevice removeLinkedDeviceWithoutReentering:]
-[QTCaptureDevice _removeAllLinkedDevices]
-[QTCaptureDevice valueForUndefinedKey:]
-[QTCaptureDevice setValue:forUndefinedKey:]
-[QTCaptureDevice deviceSystem]
-[QTCaptureDevice deviceID]
-[QTCaptureDevice connectionUnitComponentSubType]
-[QTCaptureDevice setAutomaticallyAdjustsFeatureControls:]
-[QTCaptureDevice automaticallyAdjustsFeatureControls]
-[QTCaptureDevice isHighResolutionCamera]
-[QTCaptureDevice nativelySupportsCompressionOptions:]
-[QTCaptureDevice isPassThroughRecommendedOnCurrentHardware]
-[QTCaptureDevice transportType]
-[QTCaptureDevice availableStillImageFormats]
-[QTCaptureDevice stillImageSampleBufferWithFormat:error:]
-[QTCaptureDevice isInUseByAnotherApplication]
-[QTCaptureDevice isConnected]
-[QTCaptureDevice close]
-[QTCaptureDevice _forceClosed]
-[QTCaptureDevice _stopUsingDevice]
-[QTCaptureDevice startUsingDevice:]
-[QTCaptureDevice stopUsingDevice]
_DevicesListener
+[QTCaptureHALDevice _refreshDevicesFromCallback]
-[QTCaptureHALDevice init]
-[QTCaptureHALDevice finalize]
_DeviceIsAliveListener
_DeviceFormatListener
_DeviceInputSourceListener
-[QTCaptureHALDevice dealloc]
-[QTCaptureHALDevice deviceSystem]
-[QTCaptureHALDevice modelUniqueID]
-[QTCaptureHALDevice localizedDisplayName]
-[QTCaptureHALDevice transportType]
-[QTCaptureHALDevice deviceAttributes]
-[QTCaptureHALDevice attributeIsReadOnly:]
-[QTCaptureHALDevice attributeForKey:]
-[QTCaptureHALDevice setAttribute:forKey:]
-[QTCaptureHALDevice _refreshFormatDescriptionsAttributeFromCallback]
-[QTCaptureHALDevice _refreshInputSourceAttributesFromCallback]
-[QTCaptureHALDevice isInUseByAnotherApplication]
-[QTCaptureHALDevice stopUsingDevice]
-[QTCaptureHALDevice _handleDeviceIsAliveNotification:]
-[QTCaptureHALDevice _postNotificationNamed:]
-[QTCaptureVideoPreviewRenderHelper _initializeVisualContext]
-[QTCaptureVideoPreviewRenderHelper init]
-[QTCaptureVideoPreviewRenderHelper initForVideoPreviewOutput:connection:]
-[QTCaptureVideoPreviewRenderHelper tearDown]
-[QTCaptureVideoPreviewRenderHelper dealloc]
-[QTCaptureVideoPreviewRenderHelper finalize]
-[QTCaptureVideoPreviewRenderHelper observeValueForKeyPath:ofObject:change:context:]
-[QTCaptureVideoPreviewRenderHelper _updateVisualContextAttributes]
-[QTCaptureVideoPreviewRenderHelper addImageConsumer:]
-[QTCaptureVideoPreviewRenderHelper removeImageConsumer:flush:]
-[QTCaptureVideoPreviewRenderHelper imageConsumers]
-[QTCaptureVideoPreviewRenderHelper flushImageBuffersAfterHostTime:]
-[QTCaptureVideoPreviewRenderHelper videoPreviewOutputTimebaseDidChange:]
-[QTCaptureVideoPreviewRenderHelper imageProvider:willSendImageBuffer:imageBaggage:]
-[QTCaptureVideoPreviewRenderHelper delegate]
-[QTCaptureVideoPreviewRenderHelper setDelegate:]
_ConnectionAudioChannelMapPropertyListener
_ConnectionAudioChannelVolumesPropertyListener
_ConnectionAudioNodeFormatDescriptionListener
-[QTCaptureConnection finalize]
-[QTCaptureConnection description]
-[QTCaptureConnection _audioChannelRange]
-[QTCaptureConnection _audioNodeFormatDescriptionDidChange]
-[QTCaptureConnection _updateAttributesFromAudioChannelMap]
-[QTCaptureConnection _applyAudioChannelMapFromAttributes]
-[QTCaptureConnection _updateAttributesFromAudioChannelVolumes]
-[QTCaptureConnection _applyAudioChannelVolumesFromAttributes]
-[QTCaptureConnection _audioLevelsForPropertyID:]
-[QTCaptureConnection setEnabled:]
-[QTCaptureConnection connectionAttributes]
-[QTCaptureConnection setConnectionAttributes:]
-[QTCaptureConnection attributeIsReadOnly:]
-[QTCaptureConnection attributeForKey:]
-[QTCaptureConnection setAttribute:forKey:]
-[QTCaptureConnection willChangeAttributeForKey:]
-[QTCaptureConnection didChangeAttributeForKey:]
-[QTCaptureConnection valueForUndefinedKey:]
-[QTCaptureConnection setValue:forUndefinedKey:]
-[QTCaptureConnection _audioNodeFormatDescriptionDidChangeFromPropertyListener]
-[QTCaptureConnection _updateAttributesFromAudioChannelMapFromPropertyListener]
-[QTCaptureConnection _updateAttributesFromAudioChannelVolumesFromPropertyListener]
-[QTCaptureInput connections]
-[QTCaptureInput connectionsForMediaType:]
-[QTCaptureInput defaultConnectionForMediaType:]
-[QTCaptureInput notReadyError]
-[QTCaptureInput addInputUnitsForConnection:toGraph:ofCaptureSession:error:]
-[QTCaptureInput removeInputUnitsForConnection:fromGraph:ofCaptureSession:]
-[QTCaptureInput connectionGraphNodeForConnection:]
-[QTCaptureInput connectionUnitOutputNumberForConnection:]
-[QTCaptureInput clockProviderNodeForConnection:]
-[QTCaptureInput sessionWillUseOutputDecompressionOptions:forConnection:]
-[QTCaptureOutput connectionMediaTypes]
-[QTCaptureOutput connections]
-[QTCaptureOutput prefersMixedAudio]
-[QTCaptureOutput addConnection:error:]
-[QTCaptureOutput removeConnection:]
-[QTCaptureOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
-[QTCaptureOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[QTCaptureOutput connectionGraphNodeForConnection:]
-[QTCaptureOutput connectionUnitInputNumberForConnection:]
-[QTCaptureOutput videoDecompressionRequirementForConnection:]
-[QTCaptureOutput videoDecompressionAttributesForVideoConnection:]
-[QTCaptureSessionInternalState finalize]
-[QTCaptureSession init]
-[QTCaptureSession encodeWithCoder:]
-[QTCaptureSession initWithCoder:]
-[QTCaptureSession finalize]
-[QTCaptureSession dealloc]
-[QTCaptureSession description]
-[QTCaptureSession applicationWillTerminate:]
-[QTCaptureSession removeOutput:]
-[QTCaptureSession inputConnectionForOutputConnection:]
-[QTCaptureSession observeValueForKeyPath:ofObject:change:context:]
_decompressorLastRenderErrorListener
-[QTCaptureSession _buildSupportUnitsForGenericInputConnection:error:]
-[QTCaptureSession _connectGraphUnitsForGenericOutputConnection:error:]
-[QTCaptureSession decompressionOptionsDidChangeForConnection:]
+[QTCaptureLayer layerWithSession:]
-[QTCaptureLayer init]
-[QTCaptureLayer initWithSession:]
-[QTCaptureLayer dealloc]
-[QTCaptureLayer finalize]
-[QTCaptureLayer display]
-[QTCaptureLayer setSession:]
-[QTCaptureLayer _updateVideoPreviewConnectionFromVideoPreviewOutput]
-[QTCaptureLayer session]
-[QTCaptureLayer observeValueForKeyPath:ofObject:change:context:]
-[QTCaptureLayer availableVideoPreviewConnections]
-[QTCaptureLayer setAvailableVideoPreviewConnections:]
-[QTCaptureLayer videoPreviewConnection]
-[QTCaptureLayer setVideoPreviewConnection:]
_QTHostTimeQueueGetTypeID
__Z24_QTHostTimeQueueRegisterv
_QTHostTimeQueueCreate
_QTHostTimeQueueCreateCopy
_QTHostTimeQueueRetain
_QTHostTimeQueueRelease
_QTHostTimeQueueGetCount
_QTHostTimeQueueGetTimeAtIndex
_QTHostTimeQueueEnqueueHostTime
_QTHostTimeQueueDequeueEarliestHostTime
_QTHostTimeQueueDequeueHostTimesInRange
_QTHostTimeQueueGetHostTimesInRange
_QTHostTimeQueueGetEarliestHostTime
_QTHostTimeQueueGetNearestHostTime
_QTHostTimeQueueGetEarlierHostTime
_QTHostTimeQueueGetLaterHostTime
_QTHostTimeQueueRemoveEarlierHostTimes
_QTHostTimeQueueRemoveLaterHostTimes
_QTHostTimeQueueRemoveAllHostTimes
__Z24_QTHostTimeQueueFinalizePKv
__Z31_QTHostTimeQueueCopyDescriptionPKv
__ZNSt3__16__treeIyNS_4lessIyEENS_9allocatorIyEEE7destroyEPNS_11__tree_nodeIyPvEE
__ZNSt3__16__treeIyNS_4lessIyEENS_9allocatorIyEEE5eraseENS_21__tree_const_iteratorIyPNS_11__tree_nodeIyPvEElEE
__ZNSt3__118__tree_left_rotateIPNS_16__tree_node_baseIPvEEEEvT_
__ZNSt3__16__treeIyNS_4lessIyEENS_9allocatorIyEEE15__insert_uniqueENS_21__tree_const_iteratorIyPNS_11__tree_nodeIyPvEElEERKy
__ZNSt3__16__treeIyNS_4lessIyEENS_9allocatorIyEEE12__find_equalIyEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIyPNS_11__tree_nodeIyS8_EElEESB_RKT_
__ZNSt3__16__treeIyNS_4lessIyEENS_9allocatorIyEEE16__insert_node_atEPNS_16__tree_node_baseIPvEERS9_S9_
__ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_
__ZNSt3__16__treeIyNS_4lessIyEENS_9allocatorIyEEE12__find_equalIyEERPNS_16__tree_node_baseIPvEESB_RKT_
_QTFigTimeQueueGetTypeID
__Z23_QTFigTimeQueueRegisterv
_QTFigTimeQueueCreate
_QTFigTimeQueueCreateCopy
_QTFigTimeQueueRetain
_QTFigTimeQueueRelease
_QTFigTimeQueueGetCount
_QTFigTimeQueueDequeueSmallestFigTime
_QTFigTimeQueueDequeueGreatestFigTime
_QTFigTimeQueueEnqueueFigTime
_QTFigTimeQueueGetSmallestFigTime
_QTFigTimeQueueGetGreatestFigTime
_QTFigTimeQueueGetFlagsForFigTime
_QTFigTimeQueueRemoveSmallerFigTimes
_QTFigTimeQueueRemoveGreaterFigTimes
_QTFigTimeQueueRemoveAllFigTimes
__Z23_QTFigTimeQueueFinalizePKv
__Z30_QTFigTimeQueueCopyDescriptionPKv
__ZNSt3__16__treeI24FigTimeAndFlagsContainerNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE
__ZNSt3__16__treeI24FigTimeAndFlagsContainerNS_4lessIS1_EENS_9allocatorIS1_EEE5eraseENS_21__tree_const_iteratorIS1_PNS_11__tree_nodeIS1_PvEElEE
__ZNSt3__16__treeI24FigTimeAndFlagsContainerNS_4lessIS1_EENS_9allocatorIS1_EEE13__upper_boundIS1_EENS_15__tree_iteratorIS1_PNS_11__tree_nodeIS1_PvEElEERKT_SC_SC_
__ZNSt3__16__treeI24FigTimeAndFlagsContainerNS_4lessIS1_EENS_9allocatorIS1_EEE4findIS1_EENS_15__tree_iteratorIS1_PNS_11__tree_nodeIS1_PvEElEERKT_
__ZNSt3__16__treeI24FigTimeAndFlagsContainerNS_4lessIS1_EENS_9allocatorIS1_EEE13__lower_boundIS1_EENS_15__tree_iteratorIS1_PNS_11__tree_nodeIS1_PvEElEERKT_SC_SC_
__ZNSt3__16__treeI24FigTimeAndFlagsContainerNS_4lessIS1_EENS_9allocatorIS1_EEE14__insert_multiENS_21__tree_const_iteratorIS1_PNS_11__tree_nodeIS1_PvEElEERKS1_
__ZNSt3__16__treeI24FigTimeAndFlagsContainerNS_4lessIS1_EENS_9allocatorIS1_EEE11__find_leafENS_21__tree_const_iteratorIS1_PNS_11__tree_nodeIS1_PvEElEERPNS_16__tree_node_baseIS9_EERKS1_
__ZNSt3__16__treeI24FigTimeAndFlagsContainerNS_4lessIS1_EENS_9allocatorIS1_EEE16__insert_node_atEPNS_16__tree_node_baseIPvEERSA_SA_
__ZNSt3__16__treeI24FigTimeAndFlagsContainerNS_4lessIS1_EENS_9allocatorIS1_EEE16__find_leaf_highERPNS_16__tree_node_baseIPvEERKS1_
__ZNSt3__16__treeI24FigTimeAndFlagsContainerNS_4lessIS1_EENS_9allocatorIS1_EEE15__find_leaf_lowERPNS_16__tree_node_baseIPvEERKS1_
_QTRequestConcreteImplementation
_QTRequestConcreteObject
_QTRaiseOutOfBoundsException
_QTMethodExceptionProem
_QTRaiseInsertNilException
_QTRaiseAttemptToMutateImmutableObjectException
_QTHostTimeRunLoopSourceCreate
__QTHostTimeRunLoopSourceInfoDeallocate
__QTHostTimeRunLoopSourceInfoGetPort
__QTHostTimeRunLoopSourceInfoPerform
_QTHostTimeRunLoopSourceSetHostTime
+[QTWeakReference initialize]
+[QTWeakReference allocWithZone:]
-[QTWeakReference initWithReferencedObject:]
-[QTWeakReference referencedObject]
-[QTGarbageCollectedWeakReference initWithReferencedObject:]
-[QTGarbageCollectedWeakReference init]
-[QTGarbageCollectedWeakReference description]
-[QTGarbageCollectedWeakReference referencedObject]
-[QTRetainReleaseWeakReference initWithReferencedObject:]
-[QTRetainReleaseWeakReference init]
-[QTRetainReleaseWeakReference dealloc]
-[QTRetainReleaseWeakReference description]
-[QTRetainReleaseWeakReference referencedObject]
_QTCGAffineTransformMakeRectToRect
_QTCGAffineTransformMakeTriangleToTriangle
-[QTPixelBufferConverter init]
-[QTPixelBufferConverter tearDown]
-[QTPixelBufferConverter dealloc]
-[QTPixelBufferConverter finalize]
-[QTPixelBufferConverter convertFromPixelBuffer:toPixelBuffer:error:]
-[QTImageBufferConformer initWithImageBufferAttributes:]
-[QTImageBufferConformer dealloc]
-[QTImageBufferConformer imageBufferAttributes]
-[QTImageBufferConformer setImageBufferAttributes:]
-[QTImageBufferConformer isConformantImageBuffer:]
-[QTImageBufferConformer copyConformedImageBufferForImageBuffer:error:]
-[QTImageBufferQueue init]
-[QTImageBufferQueue copyWithZone:]
-[QTImageBufferQueue dealloc]
-[QTImageBufferQueue finalize]
-[QTImageBufferQueue description]
-[QTImageBufferQueue count]
-[QTImageBufferQueue imageBufferForHostTime:]
-[QTImageBufferQueue enqueueImageBuffer:forHostTime:]
-[QTImageBufferQueue copyAndDequeueEarliestImageBuffer:hostTime:]
-[QTImageBufferQueue copyAndDequeueImageBuffers:hostTimes:beforeHostTime:maxCount:]
-[QTImageBufferQueue copyAndDequeueImageBuffers:hostTimes:minHostTime:maxHostTime:maxCount:]
-[QTImageBufferQueue getImageBuffers:hostTimes:minHostTime:maxHostTime:maxCount:]
-[QTImageBufferQueue getImageBuffer:hostTime:atIndex:]
-[QTImageBufferQueue removeAllImageBuffers]
-[QTImageBufferQueue removeImageBuffersBeforeHostTime:]
-[QTImageBufferQueue removeImageBuffersAfterHostTime:]
-[QTImageBufferQueue sendImageBuffersToConsumer:]
___clang_call_terminate
__ZNSt3__16__treeINS_12__value_typeIy20ImageBufferContainerEENS_19__map_value_compareIyS3_NS_4lessIyEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE
__ZNSt3__16__treeINS_12__value_typeIy20ImageBufferContainerEENS_19__map_value_compareIyS3_NS_4lessIyEELb1EEENS_9allocatorIS3_EEE5eraseENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEE
__ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_
__ZNSt3__119__tree_right_rotateIPNS_16__tree_node_baseIPvEEEEvT_
__ZNSt3__16__treeINS_12__value_typeIy20ImageBufferContainerEENS_19__map_value_compareIyS3_NS_4lessIyEELb1EEENS_9allocatorIS3_EEE15__insert_uniqueERKS3_
__ZNSt3__16__treeINS_12__value_typeIy20ImageBufferContainerEENS_19__map_value_compareIyS3_NS_4lessIyEELb1EEENS_9allocatorIS3_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEESG_RKT_
__ZNSt3__16__treeINS_12__value_typeIy20ImageBufferContainerEENS_19__map_value_compareIyS3_NS_4lessIyEELb1EEENS_9allocatorIS3_EEE16__construct_nodeERKS3_
__ZNSt3__16__treeINS_12__value_typeIy20ImageBufferContainerEENS_19__map_value_compareIyS3_NS_4lessIyEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_16__tree_node_baseIPvEERSE_SE_
__ZNSt3__16__treeINS_12__value_typeIy20ImageBufferContainerEENS_19__map_value_compareIyS3_NS_4lessIyEELb1EEENS_9allocatorIS3_EEE15__insert_uniqueENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEERKS3_
__ZNSt3__16__treeINS_12__value_typeIy20ImageBufferContainerEENS_19__map_value_compareIyS3_NS_4lessIyEELb1EEENS_9allocatorIS3_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEESG_RKT_
-[QTFigTimeImageQueue init]
-[QTFigTimeImageQueue copyWithZone:]
-[QTFigTimeImageQueue dealloc]
-[QTFigTimeImageQueue finalize]
-[QTFigTimeImageQueue description]
-[QTFigTimeImageQueue imageBufferForFigTime:]
-[QTFigTimeImageQueue copyAndDequeueImageBufferForFigTime:]
-[QTFigTimeImageQueue enqueueImageBuffer:forFigTime:]
-[QTFigTimeImageQueue copyAndDequeueImageBufferWithSmallestFigTime:figTime:]
-[QTFigTimeImageQueue copyAndDequeueImageBufferWithGreatestFigTime:figTime:]
-[QTFigTimeImageQueue smallestFigTime]
-[QTFigTimeImageQueue greatestFigTime]
-[QTFigTimeImageQueue removeAllImageBuffers]
-[QTFigTimeImageQueue removeImageBuffersWithFigTimesSmallerThan:]
-[QTFigTimeImageQueue removeImageBuffersWithFigTimesGreaterThan:]
-[QTFigTimeImageQueue count]
__ZNSt3__16__treeINS_12__value_typeI6CMTime20ImageBufferContainerEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE5eraseENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEE
__ZNSt3__16__treeINS_12__value_typeI6CMTime20ImageBufferContainerEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE
__ZNSt3__16__treeINS_12__value_typeI6CMTime20ImageBufferContainerEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE15__insert_uniqueERKS4_
__ZNSt3__16__treeINS_12__value_typeI6CMTime20ImageBufferContainerEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE12__find_equalIS4_EERPNS_16__tree_node_baseIPvEESH_RKT_
__ZNSt3__16__treeINS_12__value_typeI6CMTime20ImageBufferContainerEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE16__construct_nodeERKS4_
__ZNSt3__16__treeINS_12__value_typeI6CMTime20ImageBufferContainerEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_16__tree_node_baseIPvEERSF_SF_
__ZNSt3__16__treeINS_12__value_typeI6CMTime20ImageBufferContainerEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE13__upper_boundIS2_EENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEERKT_SH_SH_
__ZNSt3__16__treeINS_12__value_typeI6CMTime20ImageBufferContainerEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE15__insert_uniqueENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEERKS4_
__ZNSt3__16__treeINS_12__value_typeI6CMTime20ImageBufferContainerEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE12__find_equalIS4_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEESH_RKT_
_QTCGImageCreateFromCVImageBufferRef
_cgDataProviderReleaseCVPixelBufferCallback
-[QTRunLoopSchedulingSetCallbackInfo initWithSelector:forTarget:withObject:]
-[QTRunLoopSchedulingSetCallbackInfo dealloc]
-[QTRunLoopSchedulingSetCallbackInfo selector]
-[QTRunLoopSchedulingSetCallbackInfo target]
-[QTRunLoopSchedulingSetCallbackInfo argument]
-[QTRunLoopSchedulingSet init]
-[QTRunLoopSchedulingSet dealloc]
-[QTRunLoopSchedulingSet addRunLoop:forMode:]
-[QTRunLoopSchedulingSet removeRunLoop:forMode:]
-[QTRunLoopSchedulingSet containsRunLoop:forMode:]
-[QTRunLoopSchedulingSet scheduleSelector:forTarget:withObject:]
_QTRunLoopSchedulingSetObserverCallback
_QTRunLoopSchedulingSetItemScheduleObserver
-[QTRunLoopSchedulingSet scheduleAtHostTime:selector:forTarget:withObject:]
_QTRunLoopSchedulingSetHostTimeRunLoopSourceCallback
_QTRunLoopSchedulingSetItemAddSource
_schedulingItemRetain
_schedulingItemRelease
_schedulingItemCopyDescription
_schedulingItemEqual
_schedulingItemHash
+[QTGraphicsDevice initialize]
+[QTGraphicsDevice graphicsDevices]
+[QTGraphicsDevice graphicsDevicesForDisplayMask:]
+[QTGraphicsDevice graphicsDeviceForDisplayID:]
-[QTGraphicsDevice displayMask]
-[QTGraphicsDevice IOServicePort]
-[QTGraphicsDevice initWithCoder:]
-[QTGraphicsDevice encodeWithCoder:]
-[QTGraphicsDevice classForCoder]
-[QTGraphicsDevice description]
-[QTGraphicsDevice copyWithZone:]
-[QTConcreteGraphicsDevice displayMask]
-[QTConcreteGraphicsDevice IOServicePort]
-[QTConcreteGraphicsDevice copyWithZone:]
-[QTConcreteGraphicsDevice retain]
-[QTConcreteGraphicsDevice release]
-[QTConcreteGraphicsDevice autorelease]
-[QTConcreteGraphicsDevice retainCount]
_getCapabilitiesFromCGLContext
-[QTGraphicsDevice(QTGraphicsDeviceOpenGL_Internal) _openGLInfo]
-[QTGraphicsDevice(QTGraphicsDeviceOpenGL_Internal) _baseCGLContextObj]
-[QTGraphicsDevice(QTGraphicsDeviceOpenGL_Internal) _baseCGLPixelFormatObj]
-[QTGraphicsDevice(QTGraphicsDeviceOpenGL_Internal) _openGLCapabilities]
+[QTOpenGLContext openGLContextWithGraphicsDevice:options:]
-[QTOpenGLContext initWithGraphicsDevice:options:]
-[QTOpenGLContext init]
-[QTOpenGLContext dealloc]
-[QTOpenGLContext finalize]
-[QTOpenGLContext graphicsDevice]
-[QTOpenGLContext CGLContextObj]
-[QTOpenGLContext CGLPixelFormatObj]
-[QTOpenGLContext openGLCapabilities]
-[QTOpenGLContext syncsToVBL]
-[QTOpenGLContext setSyncsToVBL:]
-[QTGraphicsDevice(QTOpenGLContextAdditions) openGLCapabilities]
+[CIContext(QTOpenGLContextAdditions) contextWithQTOpenGLContext:]
-[QTOpenGLTextureTile rect]
-[QTOpenGLTextureTile lock]
-[QTOpenGLTextureTile unlock]
-[QTOpenGLTextureTile textureCoordinateForContentPoint:]
-[QTOpenGLTextureTile contentPointForTextureCoordinate:]
-[QTOpenGLTextureTile target]
-[QTOpenGLTextureTile name]
-[QTOpenGLTexture size]
-[QTOpenGLTexture colorSpace]
-[QTOpenGLTexture CIImage]
-[QTOpenGLTexture CIImageWithOptions:]
-[QTOpenGLTexture tilesInRect:]
-[QTOpenGLContext(QTOpenGLTexture_Additions) openGLTextureWithImageBuffer:]
-[QTOpenGLTextureCache initWithGraphicsDevice:]
-[QTOpenGLTextureCache dealloc]
-[QTOpenGLTextureCache finalize]
+[QTOpenGLTextureCache openGLTextureCacheForDevice:]
-[QTOpenGLTextureCache openGLTextureForImageBuffer:]
-[QTOpenGLTextureCache _conformerForThread]
-[QTOpenGLTextureCache _copyCoreVideoOpenGLTextureForImageBuffer:]
-[QTOpenGLTextureCache _collect]
-[QTOpenGLTextureCacheTextureTile initWithOpenGLTextureCache:imageBuffer:]
-[QTOpenGLTextureCacheTextureTile dealloc]
-[QTOpenGLTextureCacheTextureTile finalize]
-[QTOpenGLTextureCacheTextureTile _colorSpace]
-[QTOpenGLTextureCacheTextureTile rect]
-[QTOpenGLTextureCacheTextureTile lock]
-[QTOpenGLTextureCacheTextureTile unlock]
-[QTOpenGLTextureCacheTextureTile textureCoordinateForContentPoint:]
-[QTOpenGLTextureCacheTextureTile contentPointForTextureCoordinate:]
-[QTOpenGLTextureCacheTextureTile target]
-[QTOpenGLTextureCacheTextureTile name]
-[QTOpenGLTextureCacheTextureTile _filterImageWithOptions:]
-[QTOpenGLTextureCacheTexture initWithOpenGLTextureCache:imageBuffer:]
-[QTOpenGLTextureCacheTexture dealloc]
-[QTOpenGLTextureCacheTexture size]
-[QTOpenGLTextureCacheTexture colorSpace]
-[QTOpenGLTextureCacheTexture CIImage]
-[QTOpenGLTextureCacheTexture CIImageWithOptions:]
-[QTOpenGLTextureCacheTexture tilesInRect:]
_QTGetActiveDisplayList
_QTDisplayBounds
_QTDisplayCopyColorSpace
_QTDisplayGetRefreshRate
_QTGetDisplayConfigurationSeed
_validateDisplayInfoNoLock
_displayConfigurationChanged
_displayProfileChanged
_createDisplayList
_invalidateDisplayInfo
_QTImageBufferCreateCIImage
_QTImageBufferCopySharedCIImage
_QTImageBufferReleaseSharedCIImage
_unlockAndReleasePixelBuffer
_QTImageBufferCreateCGImage
_QTImageBufferCopySharedCGImage
_QTImageBufferReleaseSharedCGImage
_QTGetCornersAndDisplayClipRegionMatchingView
_getRoundedAndFlippedViewRectCornersInWindowCoordinates
_newCGSRegionFromCorners
-[QTImageConsumerFanOut init]
-[QTImageConsumerFanOut dealloc]
-[QTImageConsumerFanOut updateAttributes]
-[QTImageConsumerFanOut setImageBuffer:forHostTime:]
-[QTImageConsumerFanOut flushImageBuffersAfterHostTime:]
-[QTImageConsumerFanOut preferredAttributes]
-[QTImageConsumerFanOut setPreferredAttributes:]
-[QTImageConsumerFanOut addImageConsumer:]
-[QTImageConsumerFanOut removeImageConsumer:flush:]
-[QTImageConsumerFanOut imageConsumers]
-[QTImageConsumerFanOut observeValueForKeyPath:ofObject:change:context:]
-[QTFigVisualContextImageProviderInternal init]
-[QTFigVisualContextImageProviderInternal tearDown]
-[QTFigVisualContextImageProviderInternal dealloc]
-[QTFigVisualContextImageProviderInternal finalize]
-[QTFigVisualContextImageProvider _data]
-[QTFigVisualContextImageProvider _markNeedToFlushOnNextFrameNoLock]
-[QTFigVisualContextImageProvider _testAndResetNeedToFlushOnNextFrame]
-[QTFigVisualContextImageProvider observeValueForKeyPath:ofObject:change:context:]
-[QTFigVisualContextImageProvider _updateLatencyFromAttributes:]
-[QTFigVisualContextImageProvider init]
-[QTFigVisualContextImageProvider initWithVisualContext:]
_QTFigVisualContextImageProviderFlush
_QTFigVisualContextImageProviderDumpInFlightImages
_QTFigVisualContextImageProviderReenqueueMostRecentlyDisplayedImage
_QTFigVisualContextImageProviderWorkLoop
_QTFigVisualContextImageProviderStop
_QTFigVisualContextImageProviderRetrySatisfyingLatencyRequirement
_QTFigVisualContextImageProviderFlushEarlierInFlightImages
_QTFigVisualContextImageProviderImageAvailableImmediateCallback
_QTFigVisualContextImageProviderImageAvailableSequentialCallback
_QTFigVisualContextImageProviderWorkThread
-[QTFigVisualContextImageProvider invalidate]
-[QTFigVisualContextImageProvider dealloc]
-[QTFigVisualContextImageProvider finalize]
-[QTFigVisualContextImageProvider visualContext]
-[QTFigVisualContextImageProvider timebase]
-[QTFigVisualContextImageProvider setTimebase:]
_qtFVCIPTimebaseEffectiveRateChanged
-[QTFigVisualContextImageProvider imageConsumer]
-[QTFigVisualContextImageProvider setImageConsumer:]
-[QTFigVisualContextImageProvider delegate]
-[QTFigVisualContextImageProvider setDelegate:]
-[QTLogRenderer init]
-[QTLogRenderer initWithName:]
-[QTLogRenderer dealloc]
-[QTLogRenderer name]
-[QTLogRenderer setName:]
-[QTLogRenderer setImageBuffer:forHostTime:]
-[QTLogRenderer flushImageBuffersAfterHostTime:]
-[QTCALayerRendererState init]
-[QTCALayerRendererState dealloc]
-[QTCALayerRendererState pendingImageQRunLoop]
-[QTCALayerRendererState setPendingImageQRunLoop:]
-[QTCALayerRendererState pendingImageQRunLoopSource]
-[QTCALayerRendererState setPendingImageQRunLoopSource:]
-[QTCALayerRendererState pendingImageQStopRunLoopSource]
-[QTCALayerRendererState setPendingImageQStopRunLoopSource:]
-[QTCALayerRendererState pendingImageQHostTimeRunLoopSource]
-[QTCALayerRendererState setPendingImageQHostTimeRunLoopSource:]
-[QTCALayerRendererState lockWorkLoopLock]
-[QTCALayerRendererState unlockWorkLoopLock]
-[QTCALayerRendererState lockThreadLock]
-[QTCALayerRendererState unlockThreadLock]
-[QTCALayerRendererState waitOnThreadConditional]
-[QTCALayerRendererState broadcastThreadConditional]
-[QTCALayerRendererState isCAImageQueueAboveLowWaterLevel]
-[QTCALayerRendererState isAboveLowWaterLevel]
-[QTCALayerRendererState isBelowHighWaterLevel]
-[QTCALayerRendererState pendingBufferQueue]
-[QTCALayerRendererState setPendingBufferQueue:]
-[QTCALayerRendererState haveSignaledWorkLoop]
-[QTCALayerRendererState setHaveSignaledWorkLoop:]
-[QTCALayerRendererState caImageQueueBoss]
-[QTCALayerRendererState setCaImageQueueBoss:]
-[QTCALayerRendererState flushTime]
-[QTCALayerRendererState setFlushTime:]
+[QTCALayerRenderer _addLayerRenderer:]
+[QTCALayerRenderer _removeLayerRenderer:]
+[QTCALayerRenderer initialize]
-[QTCALayerRenderer init]
_QTCALayerRendererPendingQWorkLoop
-[QTCALayerRenderer invalidate]
-[QTCALayerRenderer tearDown]
-[QTCALayerRenderer finalize]
-[QTCALayerRenderer dealloc]
-[QTCALayerRenderer layer]
-[QTCALayerRenderer setLayer:]
-[QTCALayerRenderer setHasCARenderingContext:]
-[QTCALayerRenderer preferredAttributes]
-[QTCALayerRenderer setPreferredAttributes:]
-[QTCALayerRenderer setPreferredAttribute:forKey:]
-[QTCALayerRenderer setImageBuffer:forHostTime:]
-[QTCALayerRenderer flushImageBuffersAfterHostTime:]
-[QTCALayerRenderer diagnosticString]
+[QTCAImageQueueBoss initialize]
-[QTCAImageQueueBoss init]
-[QTCAImageQueueBoss tearDown]
-[QTCAImageQueueBoss finalize]
-[QTCAImageQueueBoss dealloc]
-[QTCAImageQueueBoss coreAnimationImageQueue]
-[QTCAImageQueueBoss displayMask]
-[QTCAImageQueueBoss setOwner:]
-[QTCAImageQueueBoss setHasCARenderingContext:]
-[QTCAImageQueueBoss hasRenderingContext]
-[QTCAImageQueueBoss capacity]
-[QTCAImageQueueBoss unconsumedCount]
-[QTCAImageQueueBoss collect]
-[QTCAImageQueueBoss collectNoLock]
-[QTCAImageQueueBoss shadowQueueOccupancy]
-[QTCAImageQueueBoss isDrained]
-[QTCAImageQueueBoss isCAImageQueueDrained]
-[QTCAImageQueueBoss nextHostTime]
-[QTCAImageQueueBoss nextHostTimeInCAImageQueue]
-[QTCAImageQueueBoss latestTimeSampled]
-[QTCAImageQueueBoss lowWaterHostTime]
-[QTCAImageQueueBoss flushImageBuffersAfterHostTime:surplusImages:]
-[QTCAImageQueueBoss setImageBuffer:forHostTime:]
_QTCAImageQueueBossBufferRemovalCallback
-[QTCAImageQueueBoss _getPixelBufferID:]
_QTCAImageQueueBossDeregisterPixelBufferBackingThatWillBeDeleted
-[QTCAImageQueueBoss _pixelBufferBackingWillDeallocate:]
-[QTCAImageQueueBoss _insertImageBuffer:forHostTime:withFlags:callback:userInfo:]
_releaseImageBuffer
_QTCALayerRendererPendingQRunLoopSourceCallback
_QTCALayerRendererPendingQStopRunLoopSourceCallback
_QTCALayerRendererPendingQHostTimeRunLoopSourceCallback
-[QTCGContextRenderer init]
-[QTCGContextRenderer dealloc]
-[QTCGContextRenderer finalize]
-[QTCGContextRenderer renderWithFrame:inContext:]
-[QTCGContextRenderer setTargetWidth:height:]
-[QTCGContextRenderer setImageBuffer:forHostTime:]
-[QTCGContextRenderer flushImageBuffersAfterHostTime:]
-[QTCGContextRenderer diagnosticString]
-[QTCGContextRenderer _postImageAvailableNotification]
+[QTCGContextRenderer defaultPreferredAttributes]
-[QTCGContextRenderer preferredAttributes]
-[QTCGContextRenderer scheduleInRunLoop:forMode:]
-[QTCGContextRenderer unscheduleFromRunLoop:forMode:]
-[QTSurfaceRendererTileDescription initWithSurfaceRect:colorSpace:graphicsDevice:]
-[QTSurfaceRendererTileDescription copyWithZone:]
-[QTSurfaceRendererTileDescription dealloc]
-[QTSurfaceRendererTileDescription finalize]
-[QTSurfaceRendererTileDescription isEqual:]
-[QTSurfaceRendererTileDescription hash]
-[QTSurfaceRendererTileDescription surfaceRect]
-[QTSurfaceRendererTileDescription colorSpace]
-[QTSurfaceRendererTileDescription graphicsDevice]
-[QTSurfaceRenderer scheduledDisplay]
-[QTSurfaceRenderer init]
_QTSurfaceRendererScheduledDisplayCallback
_QTSurfaceRendererScheduledDisplayThread
-[QTSurfaceRenderer invalidate]
-[QTSurfaceRenderer dealloc]
-[QTSurfaceRenderer finalize]
-[QTSurfaceRenderer setImageBuffer:forHostTime:]
-[QTSurfaceRenderer flushImageBuffersAfterHostTime:]
-[QTSurfaceRenderer description]
-[QTSurfaceRenderer diagnosticString]
-[QTSurfaceRenderer preferredAttributes]
-[QTSurfaceRenderer setPreferredAttributes:]
-[QTSurfaceRenderer rootTileDescriptionsForConfig:]
-[QTSurfaceRenderer tileDescriptionsForRootTileDescriptions:]
-[QTSurfaceRenderer applyConfiguration]
-[QTSurfaceRenderer beginConfiguration]
-[QTSurfaceRenderer commitConfiguration]
_configIsHot
-[QTSurfaceRenderer connectionID]
-[QTSurfaceRenderer setConnectionID:]
-[QTSurfaceRenderer windowID]
-[QTSurfaceRenderer setWindowID:]
-[QTSurfaceRenderer backgroundColor]
-[QTSurfaceRenderer setBackgroundColor:]
-[QTSurfaceRenderer isVisible]
-[QTSurfaceRenderer setVisible:]
-[QTSurfaceRenderer contentRect]
-[QTSurfaceRenderer setContentRect:]
-[QTSurfaceRenderer visibleRect]
-[QTSurfaceRenderer setVisibleRect:]
-[QTSurfaceRenderer windowCoverage]
-[QTSurfaceRenderer setWindowCoverage:]
-[QTSurfaceRenderer _drawsWithFinalCutStudioCompatibleColors]
-[QTSurfaceRenderer _setDrawsWithFinalCutStudioCompatibleColors:]
-[QTSurfaceRenderer _setImageConsumerDelegateHelper:]
-[QTSurfaceRenderer _imageConsumerDelegateHelper]
-[QTSurfaceRenderer copyIntermediateImageForImage:]
_getAdvanceTime
+[QTSurfaceRendererTile tileForGraphicsDevice:]
+[QTSurfaceRendererTile acceleratedTileForGraphicsDevice:]
+[QTSurfaceRendererTile softwareTile]
-[QTSurfaceRendererTile invalidate]
-[QTSurfaceRendererTile dealloc]
-[QTSurfaceRendererTile finalize]
-[QTSurfaceRendererTile ensureSurface]
-[QTSurfaceRendererTile removeSurface]
-[QTSurfaceRendererTile preferredAttributes]
-[QTSurfaceRendererTile graphicsDevice]
-[QTSurfaceRendererTile colorSpace]
-[QTSurfaceRendererTile setColorSpace:]
-[QTSurfaceRendererTile forcedContentColorSpace]
-[QTSurfaceRendererTile setForcedContentColorSpace:]
-[QTSurfaceRendererTile contentBackgroundColor]
-[QTSurfaceRendererTile setContentBackgroundColor:]
-[QTSurfaceRendererTile contentRect]
-[QTSurfaceRendererTile setContentRect:]
-[QTSurfaceRendererTile surfaceRect]
-[QTSurfaceRendererTile setSurfaceRect:]
-[QTSurfaceRendererTile connectionID]
-[QTSurfaceRendererTile setConnectionID:]
-[QTSurfaceRendererTile windowID]
-[QTSurfaceRendererTile setWindowID:]
-[QTSurfaceRendererTile isVisible]
-[QTSurfaceRendererTile setVisible:]
-[QTSurfaceRendererTile imageBuffer]
-[QTSurfaceRendererTile setImageBuffer:]
-[QTSurfaceRendererTile display]
-[QTSurfaceRendererTile surfaceID]
-[QTSurfaceRendererTile bindSurface]
-[QTSurfaceRendererTile updateBinding]
-[QTSurfaceRendererTile unbindSurface]
-[QTSurfaceRendererTile render]
-[QTSurfaceRendererTile pixelBufferAttributes]
-[QTSurfaceRendererAcceleratedTile initWithGraphicsDevice:]
-[QTSurfaceRendererAcceleratedTile _clearConfig]
-[QTSurfaceRendererAcceleratedTile dealloc]
-[QTSurfaceRendererAcceleratedTile finalize]
-[QTSurfaceRendererAcceleratedTile openGLContext]
-[QTSurfaceRendererAcceleratedTile graphicsDevice]
-[QTSurfaceRendererAcceleratedTile bindSurface]
-[QTSurfaceRendererAcceleratedTile updateBinding]
-[QTSurfaceRendererAcceleratedTile unbindSurface]
-[QTSurfaceRendererAcceleratedTile syncConfig]
-[QTSurfaceRendererAcceleratedTile render]
-[QTSurfaceRendererAcceleratedTile diagnosticString]
-[QTSurfaceRendererAcceleratedTile pixelBufferAttributes]
-[QTSurfaceRendererSoftwareTile tearDown]
-[QTSurfaceRendererSoftwareTile ensureBackBuffer]
-[QTSurfaceRendererSoftwareTile backBufferConnectionID]
-[QTSurfaceRendererSoftwareTile backBufferWindowID]
-[QTSurfaceRendererSoftwareTile backBufferContext]
-[QTSurfaceRendererSoftwareTile setConnectionID:]
-[QTSurfaceRendererSoftwareTile bindSurface]
-[QTSurfaceRendererSoftwareTile unbindSurface]
-[QTSurfaceRendererSoftwareTile render]
-[QTSurfaceRendererSoftwareTile diagnosticString]
-[QTSurfaceRendererSoftwareTile pixelBufferAttributes]
-[QTMovieView(QTMovieView_IMAVManager_Internal) _addQTIMAVManagerImageConsumerIfRequired]
-[QTMovieView(QTMovieView_IMAVManager_Internal) _removeQTIMAVManagerImageConsumerIfRequired]
-[QTIMAVManagerImageConsumer init]
-[QTIMAVManagerImageConsumer initWithName:]
-[QTIMAVManagerImageConsumer dealloc]
-[QTIMAVManagerImageConsumer name]
-[QTIMAVManagerImageConsumer setName:]
-[QTIMAVManagerImageConsumer setImageBuffer:forHostTime:]
-[QTIMAVManagerImageConsumer flushImageBuffersAfterHostTime:]
-[QTIMAVManagerImageConsumer delegate]
-[QTIMAVManagerImageConsumer setDelegate:]
-[QTSurfaceRendererIntermediateDelegateRenderer initWithSurfaceRenderer:]
-[QTSurfaceRendererIntermediateDelegateRenderer dealloc]
-[QTSurfaceRendererIntermediateDelegateRenderer finalize]
-[QTSurfaceRendererIntermediateDelegateRenderer copyAlteredImageForImage:onDevice:]
-[QTMovieFigVisualContextRenderHelper init]
-[QTMovieFigVisualContextRenderHelper initForMediaHelper:]
-[QTMovieFigVisualContextRenderHelper dealloc]
-[QTMovieFigVisualContextRenderHelper finalize]
-[QTMovieFigVisualContextRenderHelper _tearDown]
-[QTMovieFigVisualContextRenderHelper mediaHelperTimebaseDidChange:]
-[QTMovieGWorldRendererViewStubImageConsumer setImageBuffer:forHostTime:]
-[QTMovieGWorldRendererViewStubImageConsumer flushImageBuffersAfterHostTime:]
-[QTMovieGWorldRendererViewStubImageConsumer diagnosticString]
+[QTMovieGWorldRendererView initialize]
-[QTMovieGWorldRendererView initWithFrame:]
-[QTMovieGWorldRendererView dealloc]
-[QTMovieGWorldRendererView drawRect:]
-[QTMovieGWorldRendererView renewGState]
-[QTMovieGWorldRendererView isOpaque]
-[QTMovieGWorldRendererView wantsDefaultClipping]
-[QTMovieGWorldRendererView movie]
-[QTMovieGWorldRendererView setMovie:]
-[QTMovieGWorldRendererView movieBackgroundColor]
-[QTMovieGWorldRendererView setMovieBackgroundColor:]
-[QTMovieGWorldRendererView _stopSharingWindow]
-[QTMovieGWorldRendererView viewWillMoveToWindow:]
-[QTMovieGWorldRendererView viewDidMoveToWindow]
-[QTMovieGWorldRendererView windowWillChangeWindowNumber:]
-[QTMovieGWorldRendererView windowDidChangeWindowNumber:]
-[QTMovieGWorldRendererView windowDidOrderOnScreen:]
-[QTMovieGWorldRendererView windowDidResize:]
-[QTMovieGWorldRendererView becomeFirstResponder]
-[QTMovieGWorldRendererView resignFirstResponder]
-[QTMovieGWorldRendererView acceptsFirstResponder]
-[QTMovieGWorldRendererView imageConsumer]
-[QTMovieGWorldRendererView movieNaturalSizeDidChange:]
-[QTMovieViewCGContextRendererView drawRect:]
-[QTMovieViewCGContextRendererView isOpaque]
-[QTMovieViewCGContextRendererView becomeFirstResponder]
-[QTMovieViewCGContextRendererView resignFirstResponder]
-[QTMovieViewCGContextRendererView acceptsFirstResponder]
-[QTMovieViewSurfaceRendererView isOpaque]
-[QTMovieViewSurfaceRendererView becomeFirstResponder]
-[QTMovieViewSurfaceRendererView resignFirstResponder]
-[QTMovieViewSurfaceRendererView acceptsFirstResponder]
-[StdMovieUIController _playHeadUpdater]
-[StdMovieUIController _startPlayheadTimer]
-[StdMovieUIController _stopPlayheadTimer]
-[StdMovieUIController _setChapterList]
-[StdMovieUIController _setInitialUIState]
-[StdMovieUIController setMovie:]
-[StdMovieUIController movie]
-[StdMovieUIController dealloc]
-[StdMovieUIController setMovieScreen:]
-[StdMovieUIController movieScreen]
-[StdMovieUIController setMovieUI:]
-[StdMovieUIController movieUI]
-[StdMovieUIController initWithMovieUI:]
-[StdMovieUIController indicatePlayingStarted]
-[StdMovieUIController indicatePlayingStopped]
-[StdMovieUIController indicateDuration]
-[StdMovieUIController indicateLoadedRange]
-[StdMovieUIController indicateSelection]
-[StdMovieUIController play:]
-[StdMovieUIController playReverse:]
-[StdMovieUIController playSelection:]
-[StdMovieUIController playHeadMoved:]
-[StdMovieUIController suspendPlayHeadUpdates:]
-[StdMovieUIController setUpdateFrequency:]
-[StdMovieUIController volumeChanged:]
-[StdMovieUIController mutingChanged:]
-[StdMovieUIController chapterChanged:]
-[StdMovieUIController selectionChanged:]
-[StdMovieUIController cut:]
-[StdMovieUIController copy:]
-[StdMovieUIController paste:]
-[StdMovieUIController clear:]
-[StdMovieUIController add:]
-[StdMovieUIController addScaled:]
-[StdMovieUIController trim:]
-[StdMovieUIController stepForward:]
-[StdMovieUIController stepReverse:]
-[StdMovieUIController fastForward:]
-[StdMovieUIController fastReverse:]
-[StdMovieUIController pause:]
-[StdMovieUIController gotoEnd:]
-[StdMovieUIController gotoStart:]
-[StdMovieUIController _actOnLoadStateChanged:]
-[StdMovieUIController _actOnLoadedRangesChanged:]
-[StdMovieUIController _actOnRateChanged:]
-[StdMovieUIController _actOnTimeChanged:]
-[StdMovieUIController _actOnVolumeChanged:]
-[StdMovieUIController _actOnChapterChanged:]
-[StdMovieUIController _actOnChapterListChanged:]
-[StdMovieUIController _actOnSelectionChanged:]
-[StdMovieUIController _actOnEditabilityChanged:]
-[StdMovieUIController _actOnMovieEdited:]
-[StdMovieUIController _actOnStatusStringPosted:]
+[QTKitMovieControllerView defaultHeight]
-[QTKitMovieControllerView dealloc]
-[QTKitMovieControllerView finalize]
-[QTKitMovieControllerView movie]
-[QTKitMovieControllerView setMovie:]
-[QTKitMovieControllerView showsResizeIndicator]
-[QTKitMovieControllerView setShowsResizeIndicator:]
-[QTKitMovieControllerView isBackButtonVisible]
-[QTKitMovieControllerView setBackButtonVisible:]
-[QTKitMovieControllerView isCustomButtonVisible]
-[QTKitMovieControllerView setCustomButtonVisible:]
-[QTKitMovieControllerView isHotSpotButtonVisible]
-[QTKitMovieControllerView setHotSpotButtonVisible:]
-[QTKitMovieControllerView areStepButtonsVisible]
-[QTKitMovieControllerView setStepButtonsVisible:]
-[QTKitMovieControllerView isTranslateButtonVisible]
-[QTKitMovieControllerView setTranslateButtonVisible:]
-[QTKitMovieControllerView isVolumeButtonVisible]
-[QTKitMovieControllerView setVolumeButtonVisible:]
-[QTKitMovieControllerView areZoomButtonsVisible]
-[QTKitMovieControllerView setZoomButtonsVisible:]
-[QTKitMovieControllerView setHasGrowIcon:]
-[QTKitMovieControllerView setHasCustomMenuButton:]
-[QTKitMovieControllerView setHasVolumeButton:]
-[QTKitMovieControllerView setHasChapterButton:]
-[QTKitMovieControllerView setHasStepperButtons:]
-[QTKitMovieControllerView setEnabled:]
-[QTKitMovieControllerView setEditable:]
-[QTKitMovieControllerView hasGrowIcon]
-[QTKitMovieControllerView hasCustomMenuButton]
-[QTKitMovieControllerView hasVolumeButton]
-[QTKitMovieControllerView hasChapterButton]
-[QTKitMovieControllerView hasStepperButtons]
-[QTKitMovieControllerView isEnabled]
-[QTKitMovieControllerView isEditable]
-[QTKitMovieControllerView setCustomMenu:]
-[QTKitMovieControllerView customMenu]
-[QTKitMovieControllerView setStatusMessage:]
-[QTKitMovieControllerView setChapterList:]
-[QTKitMovieControllerView setChapterIndex:]
-[QTKitMovieControllerView chapterIndex]
-[QTKitMovieControllerView computeMinimumWidths]
-[QTKitMovieControllerView relayoutControls]
-[QTKitMovieControllerView layoutControls]
-[QTKitMovieControllerView loadImagesIfNecessary]
-[QTKitMovieControllerView completeUISetup]
_MakeAButton
-[QTKitMovieControllerView initWithFrame:]
-[QTKitMovieControllerView init]
-[QTKitMovieControllerView encodeWithCoder:]
-[QTKitMovieControllerView initWithCoder:]
-[QTKitMovieControllerView awakeFromNib]
-[QTKitMovieControllerView _adjustForShrinkage:]
_AdjustOriginBy
_AdjustWidthBy
-[QTKitMovieControllerView _adjustForGrowth:]
-[QTKitMovieControllerView setFrameSize:]
-[QTKitMovieControllerView _setSelecting:]
-[QTKitMovieControllerView _setPlaying:]
-[QTKitMovieControllerView _volumeButtonMouseDown:]
-[QTKitMovieControllerView _reverseButtonMouseDown:]
-[QTKitMovieControllerView _forwardButtonMouseDown:]
-[QTKitMovieControllerView _sendActionToUIController:]
-[QTKitMovieControllerView _doPlay:]
-[QTKitMovieControllerView _doPlayReverse:]
-[QTKitMovieControllerView _doGotoPrevious:]
-[QTKitMovieControllerView _doGotoNext:]
-[QTKitMovieControllerView _doStepReverse:]
-[QTKitMovieControllerView _doFastReverse:]
-[QTKitMovieControllerView _doStepForward:]
-[QTKitMovieControllerView _doFastForward:]
-[QTKitMovieControllerView _doPause:]
-[QTKitMovieControllerView _doToggleMute:]
-[QTKitMovieControllerView _doVolumeChange:]
-[QTKitMovieControllerView _doSelectionChange:]
-[QTKitMovieControllerView _doCustom:]
-[QTKitMovieControllerView _doChapter:]
-[QTKitMovieControllerView _doPlayheadMovement:]
-[QTKitMovieControllerView updateResolution]
-[QTKitMovieControllerView setUIController:]
-[QTKitMovieControllerView uiController]
-[QTKitMovieControllerView setPlayHeadPosition:]
-[QTKitMovieControllerView playHeadPosition]
-[QTKitMovieControllerView setVolumeLevel:]
-[QTKitMovieControllerView volumeLevel]
-[QTKitMovieControllerView setVolumeMuted:]
-[QTKitMovieControllerView volumeMuted]
-[QTKitMovieControllerView setSelectionStart:duration:]
-[QTKitMovieControllerView getSelectionStart:duration:]
-[QTKitMovieControllerView deselect]
-[QTKitMovieControllerView playHeadUpdateInterval]
-[QTKitMovieControllerView setDuration:]
-[QTKitMovieControllerView setLoadedPercentage:]
-[QTKitMovieControllerView setPlaying:]
-[QTKitMovieControllerView loadedPercentage]
-[QTKitMovieControllerView minSize]
-[QTKitMovieControllerView maxSize]
-[StdMovieUIButton initWithFrame:]
-[StdMovieUIButton isInView]
-[StdMovieUIButton mouseDown:]
-[StdMovieUIButton keyDown:]
-[StdMovieUIVolumeButton setMuted:]
-[StdMovieUIVolumeButton muted]
-[StdMovieUIVolumeButton setVolumeLevel:]
-[StdMovieUIVolumeButton volumeLevel]
-[StdMovieUIVolumeButton _volumeSliderMoved:]
-[StdMovieUIVolumeButton popupVolumeSlider]
-[StdMovieUIVolumeButton _loadImagesIfNecessary]
-[StdMovieUIVolumeButton initWithFrame:]
-[StdMovieUIVolumeButton dealloc]
-[StdMovieUIVolumeButton finalize]
-[StdMovieUIPlayPauseButton loadImagesIfNecessary]
-[StdMovieUIPlayPauseButton initWithFrame:]
-[StdMovieUIPlayPauseButton setActionForPlay:forPause:]
-[StdMovieUIPlayPauseButton setPlaying:]
-[StdMovieUIPlayPauseButton isPlaying]
-[StdMovieUICustomMenuButton _loadImagesIfNecessary]
-[StdMovieUICustomMenuButton initWithFrame:]
-[StdMovieUICustomMenuButton setCustomMenu:]
-[StdMovieUICustomMenuButton customMenu]
-[StdMovieUICustomMenuButton popUp]
-[StdMovieUICustomMenuButton dealloc]
+[StdMovieUIFastButton initialize]
-[StdMovieUIFastButton initWithFrame:]
-[StdMovieUIFastButton setBehaviorTarget:forMouseIn:forMouseOut:basicAction:]
-[StdMovieUIFastButton countARepeat]
-[StdMovieUIFastButton resetCounter]
-[StdMovieUIFastButton inFastMode]
-[StdMovieUIFastButton mouseEnteredBehavior]
-[StdMovieUIFastButton mouseExitedBehavior]
-[StdMovieUIFastButton startTrackingBehaviors]
-[StdMovieUIFastButton performKeyEquivalent:]
-[StdMovieUIFastButton mouseDown:]
-[StdMovieUIFastButtonCell setBehaviorTracking:]
-[StdMovieUIFastButtonCell isDoingFastBehaviors]
-[StdMovieUIFastButtonCell startTrackingAt:inView:]
-[StdMovieUIFastButtonCell stopTracking:at:inView:mouseIsUp:]
+[StdMovieUISlider initialize]
+[StdMovieUISlider cellClass]
-[StdMovieUISlider isFlipped]
-[StdMovieUISlider mouseDown:]
-[StdMovieUISlider scrollWheel:]
-[StdMovieUISlider isInView]
-[StdMovieUISlider initWithFrame:]
-[StdMovieUISlider init]
-[StdMovieUISlider minValue]
-[StdMovieUISlider setEditable:]
-[StdMovieUISlider setSelectionStart:duration:]
-[StdMovieUISlider deselect]
-[StdMovieUISlider getSelectionStart:duration:]
-[StdMovieUISlider acknowledgeSelectionChange]
-[StdMovieUISlider setLoadedPercentage:]
-[StdMovieUISlider loadedPercentage]
-[StdMovieUISlider gotoNext]
-[StdMovieUISlider gotoPrevious]
-[StdMovieUISliderCell init]
-[StdMovieUISliderCell sliderType]
-[StdMovieUISliderCell numberOfTickMarks]
-[StdMovieUISliderCell isFlipped]
-[StdMovieUISliderCell _loadImagesIfNecessary]
-[StdMovieUISliderCell setMinValue:]
-[StdMovieUISliderCell setMaxValue:]
-[StdMovieUISliderCell editable]
-[StdMovieUISliderCell setEditable:]
-[StdMovieUISliderCell setLoadedPercentage:]
-[StdMovieUISliderCell loadedPercentage]
-[StdMovieUISliderCell stringValue]
-[StdMovieUISliderCell setStringValue:]
_drawcellinside
-[StdMovieUISliderCell objectValue]
-[StdMovieUISliderCell setObjectValue:]
-[StdMovieUISliderCell intValue]
-[StdMovieUISliderCell setIntValue:]
-[StdMovieUISliderCell floatValue]
-[StdMovieUISliderCell setFloatValue:]
-[StdMovieUISliderCell doubleValue]
-[StdMovieUISliderCell setDoubleValue:]
-[StdMovieUISliderCell setSelectionStart:end:]
-[StdMovieUISliderCell getSelectionStart:end:]
-[StdMovieUISliderCell deselect]
-[StdMovieUISliderCell setSelecting:]
-[StdMovieUISliderCell acknowledgeSelectionChange]
-[StdMovieUISliderCell isVertical]
-[StdMovieUISliderCell isOpaque]
-[StdMovieUISliderCell title]
-[StdMovieUISliderCell trackRect]
-[StdMovieUISliderCell cellSizeForBounds:]
-[StdMovieUISliderCell knobThickness]
-[StdMovieUISliderCell _selectionRectFlipped:]
-[StdMovieUISliderCell _emptyDurationRectFlipped:]
-[StdMovieUISliderCell knobRectFlipped:]
-[StdMovieUISliderCell drawKnob:]
-[StdMovieUISliderCell drawKnob]
-[StdMovieUISliderCell drawBarInside:flipped:]
-[StdMovieUISliderCell _drawBar:maybeFlipped:maybeDisabled:]
-[StdMovieUISliderCell _calcTrackRect:andAdjustRect:]
-[StdMovieUISliderCell drawWithFrame:inView:]
+[StdMovieUISliderCell prefersTrackingUntilMouseUp]
-[StdMovieUISliderCell startTrackingAt:inView:]
-[StdMovieUISliderCell continueTracking:at:inView:]
-[StdMovieUISliderCell stopTracking:at:inView:mouseIsUp:]
-[StdMovieUISliderCell trackMouse:inRect:ofView:untilMouseUp:]
-[StdMovieUISliderCell setValueAndSendAction:]
-[StdMovieUISliderCell scrollWheel:]
-[StdMovieUISliderCell gotoNext]
-[StdMovieUISliderCell gotoPrevious]
_MyTileImageWithOperation
-[StdMovieUITextItem _loadBackgroundImage]
-[StdMovieUITextItem initWithFrame:resizable:centered:]
-[StdMovieUITextItem initWithResizable:centered:]
-[StdMovieUITextItem setFrameSize:]
-[StdMovieUITextItem setTitleString:]
-[StdMovieUITextItem drawRect:]
-[StdMovieUITextItem dealloc]
-[StdMovieUIChapterPopup computeMaximumTitleSize]
-[StdMovieUIChapterPopup menuAction:]
-[StdMovieUIChapterPopup constructChapterMenu]
-[StdMovieUIChapterPopup initWithChapterList:target:action:]
-[StdMovieUIChapterPopup chapterList]
-[StdMovieUIChapterPopup setCurrentIndex:]
-[StdMovieUIChapterPopup currentIndex]
-[StdMovieUIChapterPopup mouseDown:]
-[StdMovieUIChapterPopup setEnabled:]
-[StdMovieUIChapterPopup enabled]
-[StdMovieUIChapterPopup setTarget:]
-[StdMovieUIChapterPopup dealloc]
-[StdMovieUIChapterPopup finalize]
+[StdMovieUIVolumeSliderPopupView initialize]
-[StdMovieUIVolumeSliderPopupView initWithFrame:]
-[StdMovieUIVolumeSliderPopupView loadImages]
-[StdMovieUIVolumeSliderPopupView drawRect:]
-[StdMovieUIVolumeSliderPopupView popupSliderWithEvent:forView:preferredEdge:]
-[StdMovieUIVolumeSliderPopupView trackWithEvent:]
-[StdMovieUIVolumeSliderPopupView value]
-[StdMovieUIVolumeSliderPopupView setValue:]
-[StdMovieUIVolumeSliderPopupView minValue]
-[StdMovieUIVolumeSliderPopupView setMinValue:]
-[StdMovieUIVolumeSliderPopupView maxValue]
-[StdMovieUIVolumeSliderPopupView setMaxValue:]
-[StdMovieUIVolumeSliderPopupView fadeAway]
+[StdMovieUIVolumeSliderPopupView fadeTimerStep:]
-[StdMovieUIVolumeSliderPopupView action]
-[StdMovieUIVolumeSliderPopupView setAction:]
-[StdMovieUIVolumeSliderPopupView target]
-[StdMovieUIVolumeSliderPopupView setTarget:]
-[StdMovieUIVolumeSliderPopupView isContinuous]
-[StdMovieUIVolumeSliderPopupView setContinuous:]
-[StdMovieUIVolumeSliderPopupView encodeWithCoder:]
-[StdMovieUIVolumeSliderPopupView initWithCoder:]
__QTTimeFormatterRegister
_CopyLocalizedStringFromTable
_ConvertCFNumberRefToIndex
__QTTimeFormatterCreateStringForComponents
__QTTimeFormatterCreateStringForNonfiniteTime
_MakeComponentMaskFromSet
_CreateSetFromComponentMask
_SetNumberFormatterNumberProperty
__QTTimeFormatterFinalize
_getClassForOptions
_flipKeysInDictionary
__registerClasses
_QTUIBackgroundInitializeParamBlock
_QTUIBackgroundFinalizeParamBlock
_QTUIBackgroundPerformMeasurements
_QTUIBackgroundHitTest
_QTUIBackgroundGetMetrics
_QTUIBackgroundPrerender
_QTUIBackgroundRender
_QTUIButtonInitializeParamBlock
_QTUIButtonFinalizeParamBlock
_QTUIButtonPerformMeasurements
_QTUIButtonHitTest
_QTUIButtonGetMetrics
_QTUIButtonPrerender
_QTUIButtonRender
_QTUIContainerInitializeParamBlock
_QTUIContainerFinalizeParamBlock
_QTUIContainerPerformMeasurements
_QTUIContainerHitTest
_QTUIContainerGetMetrics
_QTUIContainerPrerender
_QTUIContainerRender
_getContentRect
_QTUIImageInitializeParamBlock
_QTUIImageFinalizeParamBlock
_QTUIImagePerformMeasurements
_QTUIImageHitTest
_QTUIImageGetMetrics
_QTUIImagePrerender
_QTUIImageRender
_QTUICopyImageWithName
_initNextGlyph
_CreateLayerFromResourceName
_initPreviousGlyph
_initRetreat30Glyph
_initExitFullscreenGlyph
_initEnterFullscreenGlyph
_initAudioVolumeHighGlyph
_initAudioVolumeMediumGlyph
_initAudioVolumeLowGlyph
_initAudioVolumeOffGlyph
_initAudioVolumeMutedGlyph
_initEndGlyph
_initBeginningGlyph
_initBackwardGlyph
_initForwardGlyph
_initStopGlyph
_initPauseGlyph
_initPlayGlyph
_QTUISliderInitializeParamBlock
_QTUISliderFinalizeParamBlock
_QTUISliderPerformMeasurements
_QTUISliderHitTest
_QTUISliderGetMetrics
_QTUISliderPrerender
_QTUISliderRender
_QTUISliderThumbInitializeParamBlock
_QTUISliderThumbFinalizeParamBlock
_QTUISliderThumbPerformMeasurements
_QTUISliderThumbHitTest
_QTUISliderThumbGetMetrics
_QTUISliderThumbPrerender
_QTUISliderThumbRender
_copyThumbDictionaryFromThumbParamBlock
_copyTrackDictionaryFromParamBlock
+[QTMoviePlaybackController initialize]
-[QTMoviePlaybackController encodeWithCoder:]
-[QTMoviePlaybackController initWithCoder:]
_QTMoviePlaybackControllerInitializeInstance
-[QTMoviePlaybackController init]
-[QTMoviePlaybackController dealloc]
-[QTMoviePlaybackController movie]
-[QTMoviePlaybackController setMovie:]
-[QTMoviePlaybackController selection]
-[QTMoviePlaybackController periodicallyUpdatesTime]
-[QTMoviePlaybackController setPeriodicallyUpdatesTime:]
_syncSelectionUpdateFrequency
-[QTMoviePlaybackController updateInterval]
-[QTMoviePlaybackController setUpdateInterval:]
-[QTMoviePlaybackController updateResolution]
-[QTMoviePlaybackController setUpdateResolution:]
-[QTMoviePlaybackController observeValueForKeyPath:ofObject:change:context:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) duration]
+[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) keyPathsForValuesAffectingDuration]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) currentTime]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) setCurrentTime:]
+[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) keyPathsForValuesAffectingCurrentTime]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) rate]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) setRate:]
+[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) keyPathsForValuesAffectingRate]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) isPlaying]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) setPlaying:]
+[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) keyPathsForValuesAffectingPlaying]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) naturalSize]
+[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) keyPathsForValuesAffectingNaturalSize]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) volume]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) setVolume:]
+[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) keyPathsForValuesAffectingVolume]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) isMuted]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) setMuted:]
+[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) keyPathsForValuesAffectingMuted]
-[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) statusString]
+[QTMoviePlaybackController(QTMoviePlaybackControllerConveniences) keyPathsForValuesAffectingStatusString]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) toggleMuted:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) togglePlaying:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) scanForward:]
_scanInDirection
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) scanBackward:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) gotoBeginning:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) gotoEnd:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) gotoNextChapter:]
_changeChapter
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) gotoPreviousChapter:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) stepForward:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) stepBackward:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) changeVolumeToMinimum:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) changeVolumeToMaximum:]
-[QTMoviePlaybackController(QTMoviePlaybackControllerActions) validateUserInterfaceItem:]
+[QTHUDTimeFormatter initialize]
-[QTHUDTimeFormatter _QTTimeFormatter]
_SetBySwappingComponentNameSpace
_SetFromComponentMask
-[QTHUDTimeFormatter dealloc]
-[QTHUDTimeFormatter init]
-[QTHUDTimeFormatter initWithCoder:]
-[QTHUDTimeFormatter encodeWithCoder:]
-[QTHUDTimeFormatter copyWithZone:]
-[QTHUDTimeFormatter stringForObjectValue:]
-[QTHUDTimeFormatter attributedStringForObjectValue:withDefaultAttributes:]
-[QTHUDTimeFormatter editingStringForObjectValue:]
-[QTHUDTimeFormatter getObjectValue:forString:errorDescription:]
-[QTHUDTimeFormatter isPartialStringValid:proposedSelectedRange:originalString:originalSelectedRange:errorDescription:]
-[QTHUDTimeFormatter stringFromCMTime:]
-[QTHUDTimeFormatter stringFromQTTime:]
-[QTHUDTimeFormatter stringFromTimeInterval:]
-[QTHUDTimeFormatter CMTimeFromString:]
-[QTHUDTimeFormatter QTTimeFromString:]
-[QTHUDTimeFormatter timeIntervalFromString:]
-[QTHUDTimeFormatter locale]
-[QTHUDTimeFormatter setLocale:]
-[QTHUDTimeFormatter minimum]
-[QTHUDTimeFormatter setMinimum:]
-[QTHUDTimeFormatter maximum]
-[QTHUDTimeFormatter setMaximum:]
-[QTHUDTimeFormatter showsSignInAllComponents]
_getBoolFromFormatter
-[QTHUDTimeFormatter setShowsSignInAllComponents:]
-[QTHUDTimeFormatter componentSeparator]
_getObjectFromFormatter
-[QTHUDTimeFormatter setComponentSeparator:]
-[QTHUDTimeFormatter componentOrder]
-[QTHUDTimeFormatter setComponentOrder:]
-[QTHUDTimeFormatter usesDigitGroupingSeparator]
-[QTHUDTimeFormatter setUsesDigitGroupingSeparator:]
-[QTHUDTimeFormatter digitGroupingSeparator]
-[QTHUDTimeFormatter setDigitGroupingSeparator:]
-[QTHUDTimeFormatter requiredComponents]
-[QTHUDTimeFormatter setRequiredComponents:]
_ComponentMaskFromSet
-[QTHUDTimeFormatter optionalComponents]
-[QTHUDTimeFormatter setOptionalComponents:]
-[QTHUDTimeFormatter minimumIntegerDigits]
_getIntegerFromFormatter
-[QTHUDTimeFormatter setMinimumIntegerDigits:]
-[QTHUDTimeFormatter maximumIntegerDigits]
-[QTHUDTimeFormatter setMaximumIntegerDigits:]
-[QTHUDTimeFormatter minimumFractionDigits]
-[QTHUDTimeFormatter setMinimumFractionDigits:]
-[QTHUDTimeFormatter maximumFractionDigits]
-[QTHUDTimeFormatter setMaximumFractionDigits:]
-[QTHUDTimeFormatter decimalSeparator]
-[QTHUDTimeFormatter setDecimalSeparator:]
-[QTHUDTimeFormatter nonfiniteSymbol]
-[QTHUDTimeFormatter setNonfiniteSymbol:]
-[QTHUDTimeFormatter positivePrefix]
-[QTHUDTimeFormatter setPositivePrefix:]
-[QTHUDTimeFormatter positiveSuffix]
-[QTHUDTimeFormatter setPositiveSuffix:]
-[QTHUDTimeFormatter negativePrefix]
-[QTHUDTimeFormatter setNegativePrefix:]
-[QTHUDTimeFormatter negativeSuffix]
-[QTHUDTimeFormatter setNegativeSuffix:]
+[QTHUDBackgroundView initialize]
-[QTHUDBackgroundView initWithFrame:]
_QTHUDBackgroundViewInit
-[QTHUDBackgroundView initWithCoder:]
-[QTHUDBackgroundView encodeWithCoder:]
-[QTHUDBackgroundView dealloc]
-[QTHUDBackgroundView controlSize]
-[QTHUDBackgroundView setControlSize:]
-[QTHUDBackgroundView backgroundStyle]
-[QTHUDBackgroundView setBackgroundStyle:]
-[QTHUDBackgroundView contentBorderPosition]
-[QTHUDBackgroundView setContentBorderPosition:]
+[QTHUDBackgroundView defaultAnimationForKey:]
-[QTHUDBackgroundView _QTUIDrawingOptions]
-[QTHUDBackgroundView drawRect:]
-[QTHUDBackgroundView mouseDownCanMoveWindow]
-[QTHUDBackgroundView hitTest:]
-[QTHUDBackgroundView QTHUD_backgroundTintForRect:]
+[QTHUDButton initialize]
+[QTHUDButtonCell initialize]
-[QTHUDButtonCell init]
-[QTHUDButtonCell initTextCell:]
-[QTHUDButtonCell initImageCell:]
-[QTHUDButtonCell _QTUIState]
-[QTHUDButtonCell _backgroundTintForBorderWithFrame:inView:]
-[QTHUDButtonCell _QTUIButtonVariantForBorderWithFrame:inView:]
-[QTHUDButtonCell _QTUIDrawingOptionsForBorderWithFrame:inView:]
-[QTHUDButtonCell _QTUIGlyphColor]
-[QTHUDButtonCell attributedTitle]
_attributedStringFromContents
-[QTHUDButtonCell attributedAlternateTitle]
-[QTHUDButtonCell prefersAlternate]
-[QTHUDButtonCell titleRectForBounds:]
-[QTHUDButtonCell imageRectForBounds:]
-[QTHUDButtonCell drawingRectForBounds:]
-[QTHUDButtonCell drawImage:withFrame:inView:]
-[QTHUDButtonCell drawTitle:withFrame:inView:]
-[QTHUDButtonCell drawBezelWithFrame:inView:]
-[QTHUDButtonCell drawInteriorWithFrame:inView:]
-[QTHUDButtonCell drawWithFrame:inView:]
+[QTHUDGroupViewItem initialize]
-[QTHUDGroupViewItem init]
-[QTHUDGroupViewItem dealloc]
-[QTHUDGroupViewItem initWithCoder:]
-[QTHUDGroupViewItem encodeWithCoder:]
-[QTHUDGroupViewItem setObservationInfo:]
-[QTHUDGroupViewItem observationInfo]
-[QTHUDGroupViewItem description]
+[QTHUDGroupViewItem automaticallyNotifiesObserversOfMinSize]
-[QTHUDGroupViewItem minSize]
-[QTHUDGroupViewItem setMinSize:]
+[QTHUDGroupViewItem automaticallyNotifiesObserversOfMaxSize]
-[QTHUDGroupViewItem maxSize]
-[QTHUDGroupViewItem setMaxSize:]
+[QTHUDGroupViewItem automaticallyNotifiesObserversOfView]
-[QTHUDGroupViewItem view]
-[QTHUDGroupViewItem setView:]
+[QTHUDGroupViewItem automaticallyNotifiesObserversOfGroupView]
-[QTHUDGroupViewItem groupView]
-[QTHUDGroupViewItem setGroupView:]
+[QTHUDGroupViewItem automaticallyNotifiesObserversOfHidden]
-[QTHUDGroupViewItem isHidden]
-[QTHUDGroupViewItem setHidden:]
+[QTHUDGroupView initialize]
-[QTHUDGroupView initWithFrame:]
-[QTHUDGroupView initWithCoder:]
_QTHUDGroupViewAttachItem
-[QTHUDGroupView encodeWithCoder:]
-[QTHUDGroupView dealloc]
_QTHUDGroupViewDetachItem
-[QTHUDGroupView minSize]
-[QTHUDGroupView maxSize]
+[QTHUDGroupView automaticallyNotifiesObserversOfItems]
-[QTHUDGroupView items]
-[QTHUDGroupView setItems:]
-[QTHUDGroupView getRects:forItemsAtIndexes:]
-[QTHUDGroupView rectForItemAtIndex:]
-[QTHUDGroupView layoutSubviews]
-[QTHUDGroupView needsLayout]
-[QTHUDGroupView setNeedsLayout]
_QTHUDGroupViewLayout
-[QTHUDGroupView layoutIfNeeded]
-[QTHUDGroupView setFrameSize:]
-[QTHUDGroupView setBoundsOrigin:]
-[QTHUDGroupView setBoundsSize:]
-[QTHUDGroupView viewWillDraw]
-[QTHUDGroupView replaceSubview:with:]
-[QTHUDGroupView resizeSubviewsWithOldSize:]
-[QTHUDGroupView observeValueForKeyPath:ofObject:change:context:]
+[QTHUDSlider initialize]
-[QTHUDSlider minValue]
-[QTHUDSlider setMinValue:]
-[QTHUDSlider maxValue]
-[QTHUDSlider setMaxValue:]
-[QTHUDSlider isBordered]
-[QTHUDSlider setBordered:]
-[QTHUDSlider moveRight:]
-[QTHUDSlider moveDown:]
-[QTHUDSlider moveLeft:]
-[QTHUDSlider moveUp:]
-[QTHUDSlider pageUp:]
-[QTHUDSlider pageDown:]
-[QTHUDSliderCell _markControlViewDirtyIfNecessesaryForNewFraction:oldFraction:]
+[QTHUDSliderCell prefersTrackingUntilMouseUp]
+[QTHUDSliderCell initialize]
-[QTHUDSliderCell initWithCoder:]
-[QTHUDSliderCell encodeWithCoder:]
-[QTHUDSliderCell copyWithZone:]
-[QTHUDSliderCell _setDoubleValue:minValue:maxValue:]
-[QTHUDSliderCell minValue]
-[QTHUDSliderCell setMinValue:]
-[QTHUDSliderCell maxValue]
-[QTHUDSliderCell setMaxValue:]
-[QTHUDSliderCell doubleValue]
-[QTHUDSliderCell setDoubleValue:]
-[QTHUDSliderCell isContinuous]
-[QTHUDSliderCell setContinuous:]
-[QTHUDSliderCell isTrackingMouse]
-[QTHUDSliderCell _QTUISize]
-[QTHUDSliderCell _QTUIState]
-[QTHUDSliderCell _QTHUDSliderHighlightedRanges]
-[QTHUDSliderCell _QTHUDSliderValidateUserValue:]
-[QTHUDSliderCell mouseTrackingRectWithFrame:inView:]
_CopyQTUISliderDrawingDictionary
_GetQTUIMeasurement
-[QTHUDSliderCell knobRectAtValue:withFrame:inView:]
-[QTHUDSliderCell valueAtPoint:withFrame:inView:]
-[QTHUDSliderCell pointAtValue:withFrame:inView:]
-[QTHUDSliderCell QTHUD_markAreasNeedingDisplayForAction:withFrame:inView:]
-[QTHUDSliderCell startTrackingAt:inRect:ofView:]
-[QTHUDSliderCell continueTracking:at:inRect:ofView:]
-[QTHUDSliderCell stopTracking:at:inRect:ofView:mouseIsUp:]
-[QTHUDSliderCell hitTestForEvent:inRect:ofView:]
-[QTHUDSliderCell drawInteriorWithFrame:inView:]
-[QTHUDSliderCell drawWithFrame:inView:]
-[QTHUDSliderCell cellSizeForBounds:]
-[QTHUDSliderCell trackMouse:inRect:ofView:untilMouseUp:]
-[QTHUDSliderCell startTrackingAt:inView:]
-[QTHUDSliderCell continueTracking:at:inView:]
-[QTHUDSliderCell stopTracking:at:inView:mouseIsUp:]
-[QTHUDSliderCell stringValue]
-[QTHUDSliderCell setStringValue:]
-[QTHUDSliderCell objectValue]
-[QTHUDSliderCell setObjectValue:]
-[QTHUDSliderCell intValue]
-[QTHUDSliderCell setIntValue:]
-[QTHUDSliderCell integerValue]
-[QTHUDSliderCell setIntegerValue:]
-[QTHUDSliderCell floatValue]
-[QTHUDSliderCell setFloatValue:]
-[QTHUDSliderCell moveRight:]
-[QTHUDSliderCell moveDown:]
-[QTHUDSliderCell moveLeft:]
-[QTHUDSliderCell moveUp:]
-[QTHUDSliderCell pageUp:]
-[QTHUDSliderCell pageDown:]
-[QTHUDSliderCell accessibilityAttributeNames]
-[QTHUDSliderCell accessibilityAttributeValue:]
-[QTHUDSliderCell accessibilityIsAttributeSettable:]
-[QTHUDSliderCell accessibilitySetValue:forAttribute:]
-[QTHUDSliderCell accessibilityActionNames]
-[QTHUDSliderCell accessibilityActionDescription:]
-[QTHUDSliderCell accessibilityPerformAction:]
+[QTHUDTimeline initialize]
-[QTHUDTimeline exposedBindings]
-[QTHUDTimeline initWithCoder:]
-[QTHUDTimeline encodeWithCoder:]
-[QTHUDTimeline setCell:]
-[QTHUDTimeline isBordered]
-[QTHUDTimeline setBordered:]
-[QTHUDTimeline highlightedTimeRanges]
-[QTHUDTimeline setHighlightedTimeRanges:]
-[QTHUDTimeline timeRange]
-[QTHUDTimeline setTimeRange:]
-[QTHUDTimeline QTTimeValue]
-[QTHUDTimeline setQTTimeValue:]
-[QTHUDTimeline takeQTTimeValueFrom:]
-[QTHUDTimeline delegate]
-[QTHUDTimeline setDelegate:]
-[QTHUDTimeline(QTHUDTimelineCellDelegate) timelineCell:willChangeTimeValue:]
+[QTHUDTimelineCell initialize]
-[QTHUDTimelineCell exposedBindings]
-[QTHUDTimelineCell init]
_QTHUDTimelineCellInitializeInstance
-[QTHUDTimelineCell initTextCell:]
-[QTHUDTimelineCell initImageCell:]
-[QTHUDTimelineCell initWithCoder:]
-[QTHUDTimelineCell encodeWithCoder:]
-[QTHUDTimelineCell copyWithZone:]
-[QTHUDTimelineCell dealloc]
-[QTHUDTimelineCell delegate]
-[QTHUDTimelineCell setDelegate:]
-[QTHUDTimelineCell setObjectValue:]
-[QTHUDTimelineCell _QTHUDSliderValidateUserValue:]
-[QTHUDTimelineCell _QTHUDSliderHighlightedRanges]
-[QTHUDTimelineCell highlightedTimeRanges]
-[QTHUDTimelineCell setHighlightedTimeRanges:]
-[QTHUDTimelineCell timeRange]
-[QTHUDTimelineCell setTimeRange:]
-[QTHUDTimelineCell timeAtPoint:withFrame:inView:]
-[QTHUDTimelineCell pointAtTime:withFrame:inView:]
-[QTHUDTimelineCell QTTimeValue]
-[QTHUDTimelineCell setQTTimeValue:]
-[QTHUDTimelineCell takeQTTimeValueFrom:]
-[QTHUDTimelineCell moveRight:]
-[QTHUDTimelineCell moveDown:]
-[QTHUDTimelineCell moveLeft:]
-[QTHUDTimelineCell moveUp:]
-[QTMoviePlaybackController(QTHUDTimelineCellDelegate) timelineCell:willChangeTimeValue:]
-[NSView(QTHUDCellFocusRing) QTHUD_setNeedsDisplayInRect:]
-[NSCell(QTHUDCellFocusRing) QTHUD_shouldShowFocusRing]
-[NSCell(QTHUDCellUpdating) QTHUD_markAreasNeedingDisplayForAction:withFrame:inView:]
-[NSControl(QTHUDCellUpdating) QTHUD_frameForCell:]
-[NSControl(QTHUDCellUpdating) QTHUD_updateCell:forAction:]
-[NSControl(QTHUDCellUpdating) QTHUD_updateCellInside:forAction:]
-[NSTableView(QTHUDCellUpdating) QTHUD_frameForCell:]
-[NSMatrix(QTHUDCellUpdating) QTHUD_frameForCell:]
-[NSCell(QTTimeAdditions) QTTimeValue]
-[NSCell(QTTimeAdditions) setQTTimeValue:]
-[NSCell(QTTimeAdditions) takeQTTimeValueFrom:]
__ZN16TextRendererBaseC2Ev
__ZN16TextRendererBaseD2Ev
__ZN16TextRendererBaseD1Ev
__ZN16TextRendererBaseD0Ev
__ZN16TextRendererBase13SetPropertiesEPK14__CFDictionary
__ZN16TextRendererBase11SetPropertyEPK10__CFStringPKv
__ZN16TextRendererBase23RegisterRendererFactoryEjjjPFPS_vE
__ZN16TextRendererBase18CreateTextRendererEjjj
_TextRendererCreate
_TextRendererDestroy
_TextRendererIsDisplayDirty
_TextRendererDoRender
_TextRendererGetCurrentTime
_TextRendererSetProperty
_TextRendererSetTrackDimensions
__ZNSt3__13mapIjNS0_IjNS0_IjPFP16TextRendererBasevENS_4lessIjEENS_9allocatorINS_4pairIKjS4_EEEEEES6_NS7_INS8_IS9_SC_EEEEEES6_NS7_INS8_IS9_SF_EEEEEixERS9_
__ZNSt3__13mapIjNS0_IjPFP16TextRendererBasevENS_4lessIjEENS_9allocatorINS_4pairIKjS4_EEEEEES6_NS7_INS8_IS9_SC_EEEEEixERS9_
__ZNSt3__13mapIjPFP16TextRendererBasevENS_4lessIjEENS_9allocatorINS_4pairIKjS4_EEEEEixERS9_
__ZNK16TextRendererBase14GetCurrentTimeEv
__ZNK16TextRendererBase12GetTimeScaleEv
__ZNSt3__16__treeINS_12__value_typeIjPFP16TextRendererBasevEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE4findIjEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_
__ZNSt3__16__treeINS_12__value_typeIjNS_3mapIjPFP16TextRendererBasevENS_4lessIjEENS_9allocatorINS_4pairIKjS6_EEEEEEEENS_19__map_value_compareIjSF_S8_Lb1EEENS9_ISF_EEE4findIjEENS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEERKT_
__ZNSt3__16__treeINS_12__value_typeIjNS_3mapIjNS2_IjPFP16TextRendererBasevENS_4lessIjEENS_9allocatorINS_4pairIKjS6_EEEEEES8_NS9_INSA_ISB_SE_EEEEEEEENS_19__map_value_compareIjSI_S8_Lb1EEENS9_ISI_EEE4findIjEENS_15__tree_iteratorISI_PNS_11__tree_nodeISI_PvEElEERKT_
__ZNSt3__13mapIjPFP16TextRendererBasevENS_4lessIjEENS_9allocatorINS_4pairIKjS4_EEEEE16__find_equal_keyERPNS_16__tree_node_baseIPvEERS9_
__ZNSt3__16__treeINS_12__value_typeIjPFP16TextRendererBasevEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_16__tree_node_baseIPvEERSH_SH_
__ZNSt3__13mapIjNS0_IjPFP16TextRendererBasevENS_4lessIjEENS_9allocatorINS_4pairIKjS4_EEEEEES6_NS7_INS8_IS9_SC_EEEEE16__find_equal_keyERPNS_16__tree_node_baseIPvEERS9_
__ZNSt3__16__treeINS_12__value_typeIjNS_3mapIjPFP16TextRendererBasevENS_4lessIjEENS_9allocatorINS_4pairIKjS6_EEEEEEEENS_19__map_value_compareIjSF_S8_Lb1EEENS9_ISF_EEE16__insert_node_atEPNS_16__tree_node_baseIPvEERSN_SN_
__ZNSt3__13mapIjNS0_IjNS0_IjPFP16TextRendererBasevENS_4lessIjEENS_9allocatorINS_4pairIKjS4_EEEEEES6_NS7_INS8_IS9_SC_EEEEEES6_NS7_INS8_IS9_SF_EEEEE16__find_equal_keyERPNS_16__tree_node_baseIPvEERS9_
__ZNSt3__16__treeINS_12__value_typeIjNS_3mapIjNS2_IjPFP16TextRendererBasevENS_4lessIjEENS_9allocatorINS_4pairIKjS6_EEEEEES8_NS9_INSA_ISB_SE_EEEEEEEENS_19__map_value_compareIjSI_S8_Lb1EEENS9_ISI_EEE16__insert_node_atEPNS_16__tree_node_baseIPvEERSQ_SQ_
__ZN12Tx3gRendererC2Ev
__ZN12Tx3gRendererD2Ev
__ZN12Tx3gRendererD1Ev
__ZN12Tx3gRendererD0Ev
__ZN12Tx3gRenderer19SetAttributedStringEPK20__CFAttributedString
__ZN12Tx3gRenderer11SetPropertyEPK10__CFStringPKv
__ZN12Tx3gRenderer17RegisterRenderersEv
_TextRendererSetAttributedString
__ZN26SubtitleTx3gQuartzRenderer14CreateRendererEv
__ZN26SubtitleTx3gCustomRenderer14CreateRendererEv
__ZN16TextRendererBase14SetCurrentTimeEx
__ZNK12Tx3gRenderer14IsDisplayDirtyEv
__ZN26SubtitleTx3gCustomRendererC2Ev
__ZN26SubtitleTx3gCustomRendererC1Ev
__ZN26SubtitleTx3gCustomRendererD2Ev
__ZN26SubtitleTx3gCustomRendererD1Ev
__ZN26SubtitleTx3gCustomRendererD0Ev
__ZN26SubtitleTx3gCustomRenderer11SetPropertyEPK10__CFStringPKv
__ZN26SubtitleTx3gCustomRenderer19SetAttributedStringEPK20__CFAttributedString
__ZN26SubtitleTx3gCustomRenderer6RenderEP9CGContextRK6CGRectS4_
__ZN26SubtitleTx3gQuartzRendererC2Ev
__ZN26SubtitleTx3gQuartzRendererC1Ev
__ZN26SubtitleTx3gQuartzRendererD2Ev
__ZN26SubtitleTx3gQuartzRendererD1Ev
__ZN26SubtitleTx3gQuartzRendererD0Ev
__ZN26SubtitleTx3gQuartzRenderer6RenderEP9CGContextRK6CGRectS4_
__ZN26SubtitleTx3gQuartzRenderer11CreateStyleEP9CGContextPK14__CFDictionaryPP15OpaqueATSUStyle
__ZN26SubtitleTx3gQuartzRenderer18CalculateTextInBoxEP20OpaqueATSUTextLayoutPK4RectPK14__CFDictionary
__Z15fillRoundedRectP9CGContext6CGRectff
__ZN26SubtitleTx3gQuartzRenderer21DrawTextInBoxForLinesEP20OpaqueATSUTextLayoutPK4RectjPK14__CFDictionary
__ZN26SubtitleTx3gQuartzRenderer7JustifyEP9CGContext6CGRectPK14__CFDictionaryiiPfS6_
__ZN26SubtitleTx3gQuartzRenderer14GetGlyphBoundsEPiS0_ii
__ZN26SubtitleTx3gQuartzRenderer14GetImageBoundsEPiS0_
__Z23atsuGetOneLayoutControlP20OpaqueATSUTextLayoutjmPv
__Z20addRoundedRectToPathP9CGContext6CGRectff
__ZN14CEA608Renderer10MemoryCellC2EPt
__ZN14CEA608Renderer10MemoryCell5EraseEv
__ZN14CEA608Renderer10MemoryCellC1EPt
__ZN14CEA608Renderer9MemoryRowC2EPt
__ZN14CEA608Renderer9MemoryRowC1EPt
__ZN14CEA608Renderer9MemoryRowD2Ev
__ZN14CEA608Renderer9MemoryRowD1Ev
__ZNK14CEA608Renderer9MemoryRow13IsDisplayableEv
__ZN14CEA608Renderer9MemoryRow15GetStyleForCellEhPNS_12CaptionStyleEPb
__ZN14CEA608Renderer9MemoryRow18GetNextStyleChangeEh
__ZN14CEA608Renderer9MemoryRow5EraseEv
__ZN14CEA608Renderer9MemoryRow8SetDirtyEb
__ZNK14CEA608Renderer9MemoryRow7IsDirtyEv
__ZN14CEA608Renderer6MemoryC2Ev
__ZN14CEA608Renderer6MemoryC1Ev
__ZN14CEA608Renderer6MemoryD2Ev
__ZN14CEA608Renderer6MemoryD1Ev
__ZNK14CEA608Renderer6Memory13GetCharactersEv
__ZN14CEA608Renderer6Memory9ShiftRowsEa
__ZN14CEA608Renderer6Memory5EraseEv
__ZN14CEA608Renderer6Memory8SetDirtyEb
__ZNK14CEA608Renderer6Memory7IsDirtyEv
__ZN14CEA608RendererC2Ev
__ZN14CEA608RendererD2Ev
__ZN14CEA608RendererD1Ev
__ZN14CEA608RendererD0Ev
__ZN14CEA608Renderer14SetCurrentTimeEx
__ZN14CEA608Renderer20ResumeCaptionLoadingEh
__ZN14CEA608Renderer14RollUpCaptionsEhh
__ZN14CEA608Renderer22ResumeDirectCaptioningEh
__ZN14CEA608Renderer12EndOfCaptionEh
__ZN14CEA608Renderer9CharacterEhtb
__ZN14CEA608Renderer9BackspaceEh
__ZN14CEA608Renderer14CarriageReturnEh
__ZN14CEA608Renderer16DeleteToEndOfRowEh
__ZN14CEA608Renderer19PreambleAddressCodeEhhPKNS_12CaptionStyleEh
__ZN14CEA608Renderer10MidRowCodeEhPKNS_12CaptionStyleE
__ZN14CEA608Renderer9TabOffsetEhh
__ZN14CEA608Renderer7FlashOnEh
__ZN14CEA608Renderer20EraseDisplayedMemoryEh
__ZN14CEA608Renderer23EraseNonDisplayedMemoryEh
__ZN14CEA608Renderer11TextRestartEh
__ZN14CEA608Renderer11TextDisplayEh
__ZN14CEA608Renderer11InvalidDataEv
__ZNK14CEA608Renderer14IsDisplayDirtyEv
__ZNK14CEA608Renderer25RollUpCompletedPercentageEv
__ZN14CEA608Renderer17RegisterRenderersEv
__ZN23CEA608FCCQuartzRenderer14CreateRendererEv
__ZN20CEA608CustomRenderer14CreateRendererEv
__ZNK14CEA608Renderer14GetCurrentTimeEv
__ZNK14CEA608Renderer12GetTimeScaleEv
__ZN16TextRendererBase18SetTrackDimensionsEff
__ZN20CEA608CustomRendererC2Ev
__ZN20CEA608CustomRendererC1Ev
__ZN20CEA608CustomRendererD2Ev
__ZN20CEA608CustomRendererD1Ev
__ZN20CEA608CustomRendererD0Ev
__ZN20CEA608CustomRenderer11SetPropertyEPK10__CFStringPKv
__ZN20CEA608CustomRenderer6RenderEP9CGContextRK6CGRectS4_
__ZN20CEA608CustomRenderer8EraseRowEh
__ZN23CEA608FCCQuartzRendererC2Ev
__ZN23CEA608FCCQuartzRendererC1Ev
__ZN23CEA608FCCQuartzRendererD2Ev
__ZN23CEA608FCCQuartzRendererD1Ev
__ZN23CEA608FCCQuartzRendererD0Ev
__ZN23CEA608FCCQuartzRenderer6RenderEP9CGContextRK6CGRectS4_
-[QTSubtitleLayer init]
-[QTSubtitleLayer dealloc]
-[QTSubtitleLayer setString:]
-[QTSubtitleLayer drawInContext:]
-[QTSubtitleRenderer init]
-[QTSubtitleRenderer dealloc]
-[QTSubtitleRenderer setString:]
-[QTSubtitleRenderer renderInContext:forRect:]
+[QTDataReference initialize]
+[QTDataReference dataReferenceWithDataRef:type:]
+[QTDataReference dataReferenceWithDataRefData:type:]
+[QTDataReference dataReferenceWithReferenceToFile:]
+[QTDataReference dataReferenceWithReferenceToURL:]
+[QTDataReference dataReferenceWithReferenceToData:]
+[QTDataReference dataReferenceWithReferenceToData:name:MIMEType:]
+[QTDataReference dataReferenceWithProxy:]
-[QTDataReference initWithProxy:]
-[QTDataReference initWithDataRef:type:]
-[QTDataReference initWithDataRefData:type:]
-[QTDataReference initWithReferenceToFile:]
-[QTDataReference initWithReferenceToURL:]
-[QTDataReference initWithReferenceToData:]
-[QTDataReference initWithReferenceToData:name:MIMEType:]
-[QTDataReference finalize]
-[QTDataReference dealloc]
-[QTDataReference dataRef]
-[QTDataReference dataRefData]
-[QTDataReference dataRefType]
-[QTDataReference referenceFile]
-[QTDataReference referenceURL]
-[QTDataReference referenceData]
-[QTDataReference name]
-[QTDataReference MIMEType]
-[QTDataReference description]
-[QTDataReference isEqual:]
-[QTDataReference hash]
-[QTDataReference setDataRef:]
-[QTDataReference setDataRefType:]
-[QTDataReference proxy]
-[QTDataReference initWithCoder:]
-[QTDataReference encodeWithCoder:]
+[QTMovie_QuickTime idleAllMovies:]
+[QTMovie_QuickTime canInitWithPasteboard:]
+[QTMovie_QuickTime canInitWithFile:fileTypes:error:]
+[QTMovie_QuickTime canInitWithURL:fileTypes:error:]
+[QTMovie_QuickTime canInitWithDataReference:fileTypes:error:]
+[QTMovie_QuickTime movieFileTypes:]
+[QTMovie_QuickTime addTypesToArray:ofType:useExtension:useNewFileImporters:useAggressive:]
+[QTMovie_QuickTime movieWithProxy:]
-[QTMovie_QuickTime initWithError:forParent:]
-[QTMovie_QuickTime initWithFile:error:forParent:]
-[QTMovie_QuickTime initWithMovie:timeRange:error:forParent:]
-[QTMovie_QuickTime initToDataReference:error:forParent:]
-[QTMovie_QuickTime initWithProxy:]
-[QTMovie_QuickTime initWithProxy:forParent:]
-[QTMovie_QuickTime finalize]
-[QTMovie_QuickTime invalidate]
-[QTMovie_QuickTime objectToken]
-[QTMovie_QuickTime movieControllerObjectToken]
-[QTMovie_QuickTime status]
-[QTMovie_QuickTime loadStateError]
-[QTMovie_QuickTime dataReferences]
+[QTMovie_QuickTime movieEnumerator]
-[QTMovie_QuickTime trackEnumerator]
-[QTMovie_QuickTime mediaDataReferenceEnumerator]
-[QTMovie_QuickTime getDefaultDataLocatorAttributeKey:andValue:]
-[QTMovie_QuickTime initialDataReference]
-[QTMovie_QuickTime dataReference]
-[QTMovie_QuickTime setDataReference:]
-[QTMovie_QuickTime setDefaultDataReference:subType:]
-[QTMovie_QuickTime controllerTypeAsLong]
-[QTMovie_QuickTime currentTime]
-[QTMovie_QuickTime maxTimeLoaded]
-[QTMovie_QuickTime language]
-[QTMovie_QuickTime setLanguage:]
-[QTMovie_QuickTime hasLanguages]
-[QTMovie_QuickTime loadState]
-[QTMovie_QuickTime availableRanges]
-[QTMovie_QuickTime loadedRanges]
-[QTMovie_QuickTime posterTime]
-[QTMovie_QuickTime setPosterTime:]
-[QTMovie_QuickTime timeScale]
-[QTMovie_QuickTime setTimeScale:]
-[QTMovie_QuickTime rate]
-[QTMovie_QuickTime volume]
-[QTMovie_QuickTime isMuted]
-[QTMovie_QuickTime tracksOfMediaType:]
-[QTMovie_QuickTime trackCount]
-[QTMovie_QuickTime trackAtIndex:]
-[QTMovie_QuickTime trackByIndexAndType:type:flags:]
-[QTMovie_QuickTime trackByID:]
-[QTMovie_QuickTime tracksWithCharacteristic:]
-[QTMovie_QuickTime hasFrameImageAtTime:]
-[QTMovie_QuickTime hasPosterImage]
-[QTMovie_QuickTime posterImage]
-[QTMovie_QuickTime frameImageAtTime:withAttributes:error:]
_QTDataProviderReleaseMIGBufferCallback
_QTPixelBufferReleaseNonPlanarCallback
-[QTMovie_QuickTime movieFormatRepresentation]
-[QTMovie_QuickTime movieFormatRepresentationAndAnchor]
-[QTMovie_QuickTime writeToDataReference:withAttributes:error:]
-[QTMovie_QuickTime writeToFile:withAttributes:error:]
-[QTMovie_QuickTime saveSourceDataToDataReference:error:]
-[QTMovie_QuickTime canUpdateMovieFile]
-[QTMovie_QuickTime updateMovieFile]
-[QTMovie_QuickTime autoplay]
-[QTMovie_QuickTime autoplay:]
-[QTMovie_QuickTime play]
-[QTMovie_QuickTime stop]
-[QTMovie_QuickTime setCurrentTime:]
-[QTMovie_QuickTime setCurrentTime:inRange:]
-[QTMovie_QuickTime gotoBeginning]
-[QTMovie_QuickTime gotoEnd]
-[QTMovie_QuickTime gotoNextSelectionPoint]
-[QTMovie_QuickTime gotoPreviousSelectionPoint]
-[QTMovie_QuickTime gotoPosterTime]
-[QTMovie_QuickTime stepForward]
-[QTMovie_QuickTime stepBackward]
-[QTMovie_QuickTime selectionStart]
-[QTMovie_QuickTime selectionEnd]
-[QTMovie_QuickTime selectionDuration]
-[QTMovie_QuickTime selection]
-[QTMovie_QuickTime replaceSelectionWithSelectionFromMovie:]
-[QTMovie_QuickTime appendSelectionFromMovie:]
-[QTMovie_QuickTime insertSegmentOfMovie:timeRange:atTime:]
-[QTMovie_QuickTime insertSegmentOfMovie:fromRange:scaledToRange:]
-[QTMovie_QuickTime insertEmptySegmentAt:]
-[QTMovie_QuickTime deleteSegment:]
-[QTMovie_QuickTime scaleSegment:newDuration:]
-[QTMovie_QuickTime removeTrack:]
-[QTMovie_QuickTime addImage:forDuration:atTime:withAttributes:]
-[QTMovie_QuickTime addCVImageBuffer:forRange:withAttributes:error:]
-[QTMovie_QuickTime addMovieScaledToSelection:]
-[QTMovie_QuickTime isAutoPlay]
-[QTMovie_QuickTime setAutoPlay:]
-[QTMovie_QuickTime setRate:]
-[QTMovie_QuickTime setVolume:]
-[QTMovie_QuickTime setMuted:]
-[QTMovie_QuickTime setSelection:]
-[QTMovie_QuickTime dataRate]
-[QTMovie_QuickTime dataSize]
-[QTMovie_QuickTime sizeOfDataAtTime:withDuration:]
-[QTMovie_QuickTime done]
-[QTMovie_QuickTime doneConsideringPlaySelectionOnly]
-[QTMovie_QuickTime setEditable:]
-[QTMovie_QuickTime draggable]
-[QTMovie_QuickTime loops]
-[QTMovie_QuickTime loopsBackAndForth]
-[QTMovie_QuickTime isSteppable]
-[QTMovie_QuickTime usesFigMedia]
-[QTMovie_QuickTime usesQuickTime]
-[QTMovie_QuickTime setLoops:]
-[QTMovie_QuickTime setLoopsBackAndForth:]
-[QTMovie_QuickTime setAllowDynamicResize:]
-[QTMovie_QuickTime minimumRangeForEdit]
-[QTMovie_QuickTime diagnosticString]
-[QTMovie_QuickTime targetTrackForInsertFromTrack:]
-[QTMovie_QuickTime setAnnotations:]
-[QTMovie_QuickTime setCopyright:]
-[QTMovie_QuickTime setDisplayName:]
-[QTMovie_QuickTime setFullName:]
-[QTMovie_QuickTime setHref:]
-[QTMovie_QuickTime hasChapters]
-[QTMovie_QuickTime chapterCount]
-[QTMovie_QuickTime chapters]
-[QTMovie_QuickTime addChapters:withAttributes:error:]
-[QTMovie_QuickTime removeChapters]
-[QTMovie_QuickTime startTimeOfChapter:]
-[QTMovie_QuickTime chapterIndexForTime:]
-[QTMovie_QuickTime chapterTrack]
-[QTMovie_QuickTime chapterList]
-[QTMovie_QuickTime currentChapterIndex]
-[QTMovie_QuickTime setCurrentChapterIndex:]
-[QTMovie_QuickTime currentChapterName]
-[QTMovie_QuickTime chapterMode]
-[QTMovie_QuickTime deleteReferencesToTrack:ofType:]
+[QTMovie_QuickTime registerCurrentThreadWithMediaStackDisablingThreadSafetyProtection]
-[QTMovie_QuickTime attachToCurrentThread]
-[QTMovie_QuickTime detachFromCurrentThread]
-[QTMovie_QuickTime copyWithZone:forParent:]
-[QTMovie_QuickTime copyStateFromMediaHelper:]
-[QTMovie_QuickTime copyDeepStateFromMediaHelper:]
-[QTMovie_QuickTime naturalSize]
-[QTMovie_QuickTime currentSize]
-[QTMovie_QuickTime setCurrentSize:]
-[QTMovie_QuickTime rateChangePreservesPitch]
-[QTMovie_QuickTime setAutoAlternates:]
-[QTMovie_QuickTime setActiveSegment:]
-[QTMovie_QuickTime setChanged:]
-[QTMovie_QuickTime creationTime]
-[QTMovie_QuickTime modificationTime]
-[QTMovie_QuickTime URL]
-[QTMovie_QuickTime areSubtitlesVisible]
-[QTMovie_QuickTime setSubtitlesVisible:]
-[QTMovie_QuickTime setSubtitles:flag:]
-[QTMovie_QuickTime setChapterTrack:]
-[QTMovie_QuickTime setMovieLanguage:flag:]
-[QTMovie_QuickTime alternateTrack]
-[QTMovie_QuickTime alternateTracks]
-[QTMovie_QuickTime subtitleTracks]
-[QTMovie_QuickTime audioLanguageTracks]
-[QTMovie_QuickTime hasClosedCaptions]
-[QTMovie_QuickTime areClosedCaptionsVisible]
-[QTMovie_QuickTime setClosedCaptionsVisible:]
-[QTMovie_QuickTime containsTrackType:]
-[QTMovie_QuickTime setOriginalKeepInactiveFlag:]
-[QTMovie_QuickTime originalKeepInactiveFlag]
-[QTMovie_QuickTime setOriginalDontInteractFlag:]
-[QTMovie_QuickTime originalDontInteractFlag]
-[QTMovie_QuickTime setOriginalDontResolveDataRefsFlag:]
-[QTMovie_QuickTime originalDontResolveDataRefsFlag]
-[QTMovie_QuickTime setOriginalDontAskUnresolvedDataRefsFlag:]
-[QTMovie_QuickTime originalDontAskUnresolvedDataRefsFlag]
-[QTMovie_QuickTime setOriginalPreventExternalURLLinksFlag:]
-[QTMovie_QuickTime originalPreventExternalURLLinksFlag]
-[QTMovie_QuickTime setDraggable:]
-[QTMovie_QuickTime albumArtworkMovie]
-[QTMovie_QuickTime albumArtworkAttributes]
-[QTMovie_QuickTime setIdling:]
-[QTMovie_QuickTime isIdling]
+[QTMovie_QuickTime startIdleTimer]
+[QTMovie_QuickTime stopIdleTimer]
+[QTMovie_QuickTime startQTFrequentTimer]
+[QTMovie_QuickTime stopQTFrequentTimer]
+[QTMovie_QuickTime setIdlingEnabled:]
+[QTMovie_QuickTime idlingEnabled]
+[QTMovie_QuickTime setIdlingEnabledForNonQTKitMovies:]
+[QTMovie_QuickTime isIdlingEnabledForNonQTKitMovies]
-[QTMovie_QuickTime autoCloseWhenDone]
-[QTMovie_QuickTime setAutoCloseWhenDone:]
-[QTMovie_QuickTime autoQuitWhenDone]
-[QTMovie_QuickTime setAutoQuitWhenDone:]
-[QTMovie_QuickTime isPlaying]
-[QTMovie_QuickTime hasAudio]
-[QTMovie_QuickTime hasDuration]
-[QTMovie_QuickTime hasSkin]
-[QTMovie_QuickTime hasSubtitles]
-[QTMovie_QuickTime hasVideo]
-[QTMovie_QuickTime href]
-[QTMovie_QuickTime isActive]
-[QTMovie_QuickTime isChanged]
-[QTMovie_QuickTime isInteractive]
-[QTMovie_QuickTime interactivityFeatures]
-[QTMovie_QuickTime missingComponentsWithOptions:]
-[QTMovie_QuickTime isLinear]
-[QTMovie_QuickTime isLoopable]
-[QTMovie_QuickTime isMIAM]
-[QTMovie_QuickTime hasQuartzComposer]
-[QTMovie_QuickTime isMPEG]
-[QTMovie_QuickTime isStreaming]
-[QTMovie_QuickTime playsAllFrames]
-[QTMovie_QuickTime setPlaysAllFrames:]
-[QTMovie_QuickTime playsSelectionOnly]
-[QTMovie_QuickTime setPlaysSelectionOnly:]
-[QTMovie_QuickTime album]
-[QTMovie_QuickTime artist]
-[QTMovie_QuickTime author]
-[QTMovie_QuickTime comments]
-[QTMovie_QuickTime controllerType]
-[QTMovie_QuickTime setControllerType:]
-[QTMovie_QuickTime copyright]
-[QTMovie_QuickTime displayName]
-[QTMovie_QuickTime fileName]
-[QTMovie_QuickTime format]
-[QTMovie_QuickTime fullName]
-[QTMovie_QuickTime genre]
-[QTMovie_QuickTime information]
-[QTMovie_QuickTime metaDataDescription]
-[QTMovie_QuickTime MIMEType]
-[QTMovie_QuickTime movieMatrix]
-[QTMovie_QuickTime movieMatrixWithoutTranslation]
-[QTMovie_QuickTime originalMovieMatrix]
-[QTMovie_QuickTime setMovieMatrix:]
-[QTMovie_QuickTime newMovieEditState]
-[QTMovie_QuickTime useMovieEditState:]
-[QTMovie_QuickTime preferredMuted]
-[QTMovie_QuickTime setPreferredMuted:]
-[QTMovie_QuickTime preferredRate]
-[QTMovie_QuickTime setPreferredRate:]
-[QTMovie_QuickTime preferredVolume]
-[QTMovie_QuickTime setPreferredVolume:]
-[QTMovie_QuickTime previewMode]
-[QTMovie_QuickTime setPreviewMode:]
-[QTMovie_QuickTime previewRange]
-[QTMovie_QuickTime setPreviewRange:]
-[QTMovie_QuickTime annotationsWithCommonKeys]
-[QTMovie_QuickTime annotations]
-[QTMovie_QuickTime annotationsExtended]
-[QTMovie_QuickTime setAnnotation:ofType:]
-[QTMovie_QuickTime saveable]
-[QTMovie_QuickTime setSaveable:]
-[QTMovie_QuickTime setUsesPreferredLanguage:]
-[QTMovie_QuickTime sourceString]
-[QTMovie_QuickTime timeCodeTrack]
-[QTMovie_QuickTime hasTimeCodeTrack]
-[QTMovie_QuickTime userDataAnnotations]
-[QTMovie_QuickTime internetLocation]
-[QTMovie_QuickTime stepFrameForward]
-[QTMovie_QuickTime stepFrameBackward]
-[QTMovie_QuickTime canSerialize]
-[QTMovie_QuickTime classicVolume]
-[QTMovie_QuickTime setClassicVolume:]
-[QTMovie_QuickTime currentTimeCodeForInfoPanel]
-[QTMovie_QuickTime timeCodeDurationForInfoPanel]
-[QTMovie_QuickTime conformed]
-[QTMovie_QuickTime isBuffering]
-[QTMovie_QuickTime isMovieMarkedNonSerializable]
-[QTMovie_QuickTime movieType]
-[QTMovie_QuickTime editable]
-[QTMovie_QuickTime canCopy]
-[QTMovie_QuickTime canCut]
-[QTMovie_QuickTime canPaste]
-[QTMovie_QuickTime canUndo]
-[QTMovie_QuickTime undoManager]
-[QTMovie_QuickTime undoAttributes]
-[QTMovie_QuickTime setUndoManager:]
-[QTMovie_QuickTime setUndoAttributes:]
-[QTMovie_QuickTime isDRMProtected]
-[QTMovie_QuickTime isDRMAuthorized]
-[QTMovie_QuickTime canDRMInteractWithUser]
-[QTMovie_QuickTime setCanDRMInteractWithUser:]
-[QTMovie_QuickTime doEditOperation:]
-[QTMovie_QuickTime addTrack:copyMedia:error:]
-[QTMovie_QuickTime addToScrap]
-[QTMovie_QuickTime step:]
-[QTMovie_QuickTime setActive:]
-[QTMovie_QuickTime setActiveAndVisible:]
-[QTMovie_QuickTime _blocksAllWiredActions]
-[QTMovie_QuickTime _setBlocksAllWiredActions:]
-[QTMovie_QuickTime executeFrameLoadedActionsAtTime:]
-[QTMovie_QuickTime executeWiredActionsAtTime:]
-[QTMovie_QuickTime hasWiredActions]
-[QTMovie_QuickTime isVRMovie]
-[QTMovie_QuickTime nodeCount]
-[QTMovie_QuickTime nodeAtIndex:]
-[QTMovie_QuickTime currentNode]
-[QTMovie_QuickTime nodes]
-[QTMovie_QuickTime gotoPreviousNode]
-[QTMovie_QuickTime panAngle]
-[QTMovie_QuickTime setPanAngle:]
-[QTMovie_QuickTime tiltAngle]
-[QTMovie_QuickTime setTiltAngle:]
-[QTMovie_QuickTime fieldOfView]
-[QTMovie_QuickTime setFieldOfView:]
-[QTMovie_QuickTime panTiltSpeed]
-[QTMovie_QuickTime setPanTiltSpeed:]
-[QTMovie_QuickTime zoomRate]
-[QTMovie_QuickTime setZoomRate:]
-[QTMovie_QuickTime hotspotsVisible]
-[QTMovie_QuickTime setHotspotsVisible:]
-[QTMovie_QuickTime hotspotCountForNode:]
-[QTMovie_QuickTime constraints:]
-[QTMovie_QuickTime setConstraints:ofKind:]
-[QTMovie_QuickTime nudge:]
-[QTMovie_QuickTime goToNode:]
-[QTMovie_QuickTime zoom:]
-[QTMovie_QuickTime isFlashMovie]
-[QTMovie_QuickTime hasEqualizer]
-[QTMovie_QuickTime numberOfEqualizerDeviceChannels]
-[QTMovie_QuickTime numberOfEqualizerBandLevels]
-[QTMovie_QuickTime setNumberOfEqualizerBandLevels:]
-[QTMovie_QuickTime equalizerBandLevels:]
-[QTMovie_QuickTime hasFrameRate]
-[QTMovie_QuickTime staticFrameRate]
-[QTMovie_QuickTime dynamicFrameRate]
-[QTMovie_QuickTime findText:trackIndex:startTime:offset:flags:retParamName:]
-[QTMovie_QuickTime playbackRange]
-[QTMovie_QuickTime setPlaybackRange:]
-[QTMovie_QuickTime frameStartTime:]
-[QTMovie_QuickTime frameEndTime:]
-[QTMovie_QuickTime keyframeStartTime:]
-[QTMovie_QuickTime activeSegment]
-[QTMovie_QuickTime usesVisualContext]
-[QTMovie_QuickTime wouldUseVisualContext]
-[QTMovie_QuickTime compositingMode]
-[QTMovie_QuickTime visualHue]
-[QTMovie_QuickTime visualSaturation]
-[QTMovie_QuickTime visualBrightness]
-[QTMovie_QuickTime visualContrast]
-[QTMovie_QuickTime visualMovieBoxIsOpaque]
-[QTMovie_QuickTime visualBackgroundColor]
-[QTMovie_QuickTime visualMovieBoxBackgroundColor]
-[QTMovie_QuickTime visualDrawsMovieBoxBackgroundColor]
-[QTMovie_QuickTime apertureMode]
-[QTMovie_QuickTime setApertureMode:]
-[QTMovie_QuickTime playerApertureMode]
-[QTMovie_QuickTime setPlayerApertureMode:]
-[QTMovie_QuickTime hasApertureModeDimensions]
-[QTMovie_QuickTime setVisualHue:]
-[QTMovie_QuickTime setVisualSaturation:]
-[QTMovie_QuickTime setVisualBrightness:]
-[QTMovie_QuickTime setVisualContrast:]
-[QTMovie_QuickTime setVisualBackgroundColor:]
-[QTMovie_QuickTime setVisualMovieBoxBackgroundColor:]
-[QTMovie_QuickTime setVisualDrawsMovieBoxBackgroundColor:]
-[QTMovie_QuickTime generateApertureModeDimensions]
-[QTMovie_QuickTime removeApertureModeDimensions]
-[QTMovie_QuickTime droppedVideoFrameCount]
-[QTMovie_QuickTime pitch]
-[QTMovie_QuickTime balance]
-[QTMovie_QuickTime bass]
-[QTMovie_QuickTime gain]
-[QTMovie_QuickTime treble]
-[QTMovie_QuickTime setPitch:]
-[QTMovie_QuickTime setBalance:]
-[QTMovie_QuickTime setBass:]
-[QTMovie_QuickTime setGain:]
-[QTMovie_QuickTime setTreble:]
-[QTMovie_QuickTime usesAudioContext]
-[QTMovie_QuickTime audioRenderQuality]
-[QTMovie_QuickTime setAudioRenderQuality:]
-[QTMovie_QuickTime volumeMeteringEnabled:]
-[QTMovie_QuickTime setVolumeMeteringEnabled:onMix:]
-[QTMovie_QuickTime powerLevels:onMix:]
-[QTMovie_QuickTime peakLevels:onMix:]
-[QTMovie_QuickTime setAudioDevice:error:]
-[QTMovie_QuickTime audioChannelLayout]
-[QTMovie_QuickTime setAudioChannelLayout:error:]
-[QTMovie_QuickTime userDataRef]
-[QTMovie_QuickTime userDataOfType:]
-[QTMovie_QuickTime userDataOfType:atIndex:]
-[QTMovie_QuickTime setUserData:ofType:atIndex:]
-[QTMovie_QuickTime addUserData:ofType:]
-[QTMovie_QuickTime userDataCountOfType:]
-[QTMovie_QuickTime centerPoint]
-[QTMovie_QuickTime rotate:around:]
-[QTMovie_QuickTime scale:around:]
-[QTMovie_QuickTime skew:around:]
-[QTMovie_QuickTime translate:]
-[QTMovie_QuickTime flipX]
-[QTMovie_QuickTime flipY]
-[QTMovie_QuickTime _createRenderHelperIfNecessary]
-[QTMovie_QuickTime _renderHelper]
-[QTMovie_QuickTime addImageConsumerNoNotify:]
-[QTMovie_QuickTime _usingWindowRefForPort]
-[QTMovie_QuickTime _usingGWorlds]
-[QTMovie_QuickTime _setUsesGWorlds:]
-[QTMovie_QuickTime _startUsingGWorldsUsingWindowRefForPort:]
-[QTMovie_QuickTime _stopUsingGWorlds]
-[QTMovie_QuickTime _syncWithView:]
-[QTMovie_QuickTime _displayInWindowWithNumber:]
-[QTMovie_QuickTime _synchronizePortWithWindow]
-[QTMovie_QuickTime _invalidatePort]
-[QTMovie_QuickTime limitReadAhead]
-[QTMovie_QuickTime setLimitReadAhead:]
-[QTMovie_QuickTime commonMetadata]
-[QTMovie_QuickTime availableMetadataFormats]
-[QTMovie_QuickTime metadataForFormat:]
-[QTMovie_QuickTime validateMetadata:forFormat:error:]
-[QTMovie_QuickTime setMetadata:forFormat:]
+[QTMovie_QuickTime sitesInDownloadCache]
+[QTMovie_QuickTime clearDownloadCacheForSite:]
+[QTMovie_QuickTime clearDownloadCache]
_attributesFromProxy
_setAttributesOnProxy
_attributeForKeyFromProxy
_setAttributeForKeyOnProxy
___51-[QTKitServerController startUsingServerForObject:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___51-[QTKitServerController startUsingServerForObject:]_block_invoke44
___copy_helper_block_46
___destroy_helper_block_47
___50-[QTKitServerController stopUsingServerForObject:]_block_invoke
___copy_helper_block_51
___destroy_helper_block_52
-[QTKitServerController delegatePort]
-[QTKitServerController notifierPort]
-[QTKitServerController delegateThreadID]
-[QTKitServerController notificationThreadID]
-[QTKitServerController _postServerDiedNotification:]
___initializeServer_block_invoke
___initializeServer_block_invoke_2
___copy_helper_block_148
___destroy_helper_block_149
___unhookServer_block_invoke
+[QTMedia mediaWithProxy:]
-[QTMedia initWithProxy:]
-[QTMedia finalize]
-[QTMedia dealloc]
-[QTMedia invalidate]
-[QTMedia track]
-[QTMedia mediaAttributes]
-[QTMedia setMediaAttributes:]
-[QTMedia attributeForKey:]
-[QTMedia setAttribute:forKey:]
-[QTMedia description]
-[QTMedia hasCharacteristic:]
-[QTMedia proxy]
-[QTMedia dataReferenceCount]
-[QTMedia dataReferenceAtIndex:]
-[QTMedia setDataReference:atIndex:error:]
-[QTMedia dataReferences]
-[QTMedia dataReferenceEnumerator]
-[QTMedia creationTime]
-[QTMedia duration]
-[QTMedia modificationTime]
-[QTMedia sampleCount]
-[QTMedia quality]
-[QTMedia playHints]
-[QTMedia timeScale]
-[QTMedia type]
-[QTMedia typeInMedia]
-[QTMedia subType]
-[QTMedia language]
-[QTMedia setLanguage:]
-[QTMedia setQuality:]
-[QTMedia setTimeScale:]
-[QTMedia setPlayHints:hintsMask:]
-[QTMedia setRestrictedToPlaybackAPI:]
-[QTMedia restrictedToPlaybackAPI]
-[QTMedia timeCodeAtTime:]
-[QTMedia currentTimeCode]
-[QTMedia movieTimeForTimeCode:]
-[QTNotificationController setSharedName:]
-[QTDelegateController handleDelegateCall]
_initDelegateSyncObject
_timedWaitWithDelegateSyncObject
_destroyDelegateSyncObject
-[QTDelegateController setSharedAddress:]
-[QTDelegateController setSharedSize:]
-[QTDelegateController setSharedName:]
-[QTDelegateController sharedAddress]
-[QTDelegateController sharedSize]
-[QTDelegateController sharedName]
-[QTDelegateController setReturnedAddress:]
-[QTDelegateController setReturnedSize:]
-[QTDelegateController setArchivedSize:]
-[QTDelegateController setReturnedName:]
-[QTDelegateController returnedAddress]
-[QTDelegateController returnedSize]
-[QTDelegateController archivedSize]
-[QTDelegateController returnedName]
-[QTDelegateController setOrigServerPort:tempServerPort:]
-[QTDelegateController changeServerPort]
-[QTDelegateController restoreServerPort]
-[QTDelegateController callDelegateWithCancel:]
-[QTDelegateController getExternalMovieFromDelegate:]
-[QTDelegateController getShouldHandleIdleEventFromDelegate:]
-[QTDelegateController getShouldContinueFromDelegate:]
-[QTDelegateController getShouldLinkToURLFromDelegate:]
_delegate_callback
-[QTMovie(QTMovieEditingInternal) _executeCommand:]
-[QTMovie(QTMovieEditingInternal) _copyAnnotationsAndUserDataToMovie:]
_impl_QTMachPortImageReceiverSetImageBufferForHostTime
_QTRemoteCVPixelBufferReleasePlanarBytesCallback
_QTRemoteCVPixelBufferReleaseBytesCallback
_impl_QTMachPortImageReceiverSetIOSurfaceForHostTime
_impl_QTMachPortImageReceiverFlushImageBuffersAfterHostTime
-[QTMachPortImageProvider init]
-[QTMachPortImageProvider initWithImageConsumer:imageSenderPort:imageSenderContext:]
_QTMachPortImageProviderWorkLoop
-[QTMachPortImageProvider tearDown]
-[QTMachPortImageProvider dealloc]
-[QTMachPortImageProvider finalize]
-[QTMachPortImageProvider imageConsumer]
_QTMachPortImageProviderCFMachPortCallback
_stopRunLoopSourcePerform
-[QTMovieMachPortRenderHelper init]
-[QTMovieMachPortRenderHelper initForMediaHelper:]
-[QTMovieMachPortRenderHelper dealloc]
-[QTMovieMachPortRenderHelper finalize]
-[QTRemoteCVImageBufferUnarchiver dealloc]
-[QTRemoteCVImageBufferUnarchiver finalize]
-[QTRemoteCVImageBufferUnarchiver createCVImageBufferFromCVPixelBufferDescription:attachmentsData:attachmentsDataSize:bufferData:bufferDataSize:releaseBytesCallback:releaseRefCon:]
_QTRemoteCVImageBufferUnarchiverApplyAttachmentsDataToImageBuffer
-[QTRemoteCVImageBufferUnarchiver createCVImageBufferFromCVPixelBufferDescription:attachmentsData:attachmentsDataSize:planeDescriptions:planeDescriptionsCount:bufferData:bufferDataSize:releasePlanarBytesCallback:releaseRefCon:]
-[QTRemoteCVImageBufferUnarchiver createCVImageBufferFromCVOpenGLBufferDescription:attachmentsData:attachmentsDataSize:]
_QTCVPixelBufferCreateFromRemoteDescription
_QTCVPixelBufferCreatePlanarFromRemoteDescription
_QTCVImageBufferAttachmentsCreateFromData
_boolFromServerWithSelector
_setBOOLOnServerWithSelector
_longFromServerWithSelector
_setLongOnServerWithSelector
_floatFromServerWithSelector
_setFloatOnServerWithSelector
_stringFromServerWithSelector
_setStringOnServerWithSelector
_dateFromServerWithSelector
_timeFromServerWithSelectorAndTimeParameter
_setTimeOnServerWithSelector
_timeRangeFromServerWithSelector
_setTimeRangeOnServerWithSelector
_fixedFromServerWithSelector
_setFixedOnServerWithSelector
-[QTCALayerRendererView initWithFrame:]
-[QTCALayerRendererView dealloc]
-[QTCALayerRendererView _createLayer]
-[QTCALayerRendererView setLayer:]
-[QTCALayerRendererView imageConsumer]
-[QTCALayerRendererViewBackingLayer init]
-[QTCALayerRendererViewBackingLayer dealloc]
-[QTCALayerRendererViewBackingLayer imageConsumer]
-[QTCALayerRendererViewBackingLayer _appkitViewBackingLayerUniqueMethod]
-[QTCALayerRendererViewBackingLayer description]
-[QTCALayerRendererViewBackingLayer _display]
-[QTCALayerRendererViewBackingLayer delegate]
-[QTCALayerRendererViewBackingLayer actionForKey:]
-[QTCALayerRendererViewBackingLayer layerDidBecomeVisible:]
-[QTCALayerRendererViewBackingLayer layerDidChangeDisplay:]
-[QTCGContextRendererView initWithFrame:]
-[QTCGContextRendererView dealloc]
-[QTCGContextRendererView drawRect:]
-[QTCGContextRendererView rendererNewImageDidBecomeAvailable:]
-[QTCGContextRendererView scheduleRendererOnCurrentRunLoop:]
-[QTCGContextRendererView imageConsumer]
-[QTSurfaceRendererView _updateGeometry]
-[QTSurfaceRendererView _mainThreadDisplayConfigurationChanged]
-[QTSurfaceRendererView _displayConfigurationChanged:]
-[QTSurfaceRendererView initWithFrame:]
-[QTSurfaceRendererView dealloc]
-[QTSurfaceRendererView finalize]
-[QTSurfaceRendererView rendererWillRelocateSurfaces:]
-[QTSurfaceRendererView windowChangedNumber:]
-[QTSurfaceRendererView windowChangedFrame:]
-[QTSurfaceRendererView viewWillMoveToWindow:]
-[QTSurfaceRendererView viewDidMoveToWindow]
-[QTSurfaceRendererView viewDidHide]
-[QTSurfaceRendererView viewDidUnhide]
-[QTSurfaceRendererView windowWillOrderOnScreen:]
-[QTSurfaceRendererView windowDidOrderOffScreen:]
-[QTSurfaceRendererView renewGState]
-[QTSurfaceRendererView isOpaque]
-[QTSurfaceRendererView wantsDefaultClipping]
-[QTSurfaceRendererView preservesContentDuringLiveResize]
-[QTSurfaceRendererView imageConsumer]
-[QTSurfaceRendererView backgroundColor]
-[QTSurfaceRendererView setBackgroundColor:]
_enableSerializerWhitelist
__useSerializerWhitelist
_QTStringWithFlagsFromTime
-[QTKeyedArchiverDelegate unarchiver:didDecodeObject:]
_qtKitDictionary
_serializeIntoBuffer
_qtKitAttribute
_QTTimeFromStringWithFlags
_archivableImage
_archivableArrayOfDictionaries
_qtKitArrayOfDictionaries
-[QTCAImageQueueBoss(QTCAImageQueueBossAdditions) _resolvedGLContext]
-[QTCAImageQueueBoss(QTCAImageQueueBossAdditions) _bufferPoolOfWidth:height:]
-[QTCAImageQueueBoss(QTCAImageQueueBossAdditions) _copyPreparedImageBufferForImageBuffer:]
_QTCAImageBufferGetDisplaySize
-[QTCALayerRenderer(viewWillDisplayDelegateAdditions) _setImageConsumerDelegateHelper:]
-[QTCALayerRenderer(viewWillDisplayDelegateAdditions) _imageConsumerDelegateHelper]
-[QTCAImageQueueBoss(viewWillDisplayDelegateAdditions) _setImageConsumerDelegateHelper:]
-[QTCAImageQueueBoss(viewWillDisplayDelegateAdditions) _imageConsumerDelegateHelper]
+[QTMoviePlaybackControllerMovieProxy initialize]
+[QTMoviePlaybackControllerMovieProxy proxyForMovie:]
-[QTMoviePlaybackControllerMovieProxy initWithMovie:]
-[QTMoviePlaybackControllerMovieProxy init]
-[QTMoviePlaybackControllerMovieProxy dealloc]
-[QTMoviePlaybackControllerMovieProxy finalize]
-[QTMoviePlaybackControllerMovieProxy movie]
-[QTMoviePlaybackControllerMovieProxy setTarget:]
-[QTMoviePlaybackControllerMovieProxy _startScrubbing]
-[QTMoviePlaybackControllerMovieProxy _stopScrubbing]
-[QTMoviePlaybackControllerMovieProxy beginScrubbing]
-[QTMoviePlaybackControllerMovieProxy endScrubbing]
-[QTMoviePlaybackControllerMovieProxy _syncIdleSleepAssertions]
-[QTMoviePlaybackControllerMovieProxy preventIdleSleepWhilePlaying]
-[QTMoviePlaybackControllerMovieProxy allowIdleSleepWhilePlaying]
-[QTMoviePlaybackControllerMovieProxy _startListeningToSessionResignActive]
-[QTMoviePlaybackControllerMovieProxy _stopListeningToSessionResignActive]
-[QTMoviePlaybackControllerMovieProxy _sessionDidResignActive:]
-[QTMoviePlaybackControllerMovieProxy enablePauseWhenSessionResignsActive]
-[QTMoviePlaybackControllerMovieProxy disablePauseWhenSessionResignsActive]
-[QTMoviePlaybackControllerMovieProxy _evaluateMovieSleepCharacteristics:]
+[QTMoviePlaybackControllerMovieProxy accessesIvarsDirectly]
-[QTMoviePlaybackControllerMovieProxy observeValueForKeyPath:ofObject:change:context:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForDuration]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfDuration]
-[QTMoviePlaybackControllerMovieProxy duration]
-[QTMoviePlaybackControllerMovieProxy _movieDurationDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForCurrentTime]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfCurrentTime]
-[QTMoviePlaybackControllerMovieProxy currentTime]
-[QTMoviePlaybackControllerMovieProxy setCurrentTime:]
-[QTMoviePlaybackControllerMovieProxy _movieTimeDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForPlaybackRange]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfPlaybackRange]
-[QTMoviePlaybackControllerMovieProxy playbackRange]
-[QTMoviePlaybackControllerMovieProxy setPlaybackRange:]
-[QTMoviePlaybackControllerMovieProxy _moviePlaybackRangeDidChange]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForPlaybackRangeDuration]
+[QTMoviePlaybackControllerMovieProxy keyPathsForValuesAffectingPlaybackRangeDuration]
-[QTMoviePlaybackControllerMovieProxy playbackRangeDuration]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForPlaybackRangeCurrentTime]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfPlaybackRangeCurrentTime]
+[QTMoviePlaybackControllerMovieProxy keyPathsForValuesAffectingPlaybackRangeCurrentTime]
-[QTMoviePlaybackControllerMovieProxy playbackRangeCurrentTime]
-[QTMoviePlaybackControllerMovieProxy setPlaybackRangeCurrentTime:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForPlaybackRangeRemainingTime]
+[QTMoviePlaybackControllerMovieProxy keyPathsForValuesAffectingPlaybackRangeRemainingTime]
-[QTMoviePlaybackControllerMovieProxy playbackRangeRemainingTime]
-[QTMoviePlaybackControllerMovieProxy _updateNominalRate:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForRate]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfRate]
-[QTMoviePlaybackControllerMovieProxy rate]
-[QTMoviePlaybackControllerMovieProxy setRate:]
-[QTMoviePlaybackControllerMovieProxy _movieRateDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForNaturalSize]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfNaturalSize]
-[QTMoviePlaybackControllerMovieProxy naturalSize]
-[QTMoviePlaybackControllerMovieProxy _movieNaturalSizeDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForVolume]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfVolume]
-[QTMoviePlaybackControllerMovieProxy volume]
-[QTMoviePlaybackControllerMovieProxy setVolume:]
-[QTMoviePlaybackControllerMovieProxy _movieVolumeDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForMuted]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfMuted]
-[QTMoviePlaybackControllerMovieProxy isMuted]
-[QTMoviePlaybackControllerMovieProxy setMuted:]
-[QTMoviePlaybackControllerMovieProxy _movieMutedDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForCanChangeVolume]
-[QTMoviePlaybackControllerMovieProxy canChangeVolume]
-[QTMoviePlaybackControllerMovieProxy _movieCanChangeVolumeDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForCanChangePlayingRate]
-[QTMoviePlaybackControllerMovieProxy canChangePlayingRate]
-[QTMoviePlaybackControllerMovieProxy _movieCanChangePlayingRateDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForAvailableRanges]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfAvailableRanges]
-[QTMoviePlaybackControllerMovieProxy availableRanges]
-[QTMoviePlaybackControllerMovieProxy _movieAvailableRangesDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForLoadedRanges]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfLoadedRanges]
-[QTMoviePlaybackControllerMovieProxy loadedRanges]
-[QTMoviePlaybackControllerMovieProxy _movieLoadedRangesDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForStatusString]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfStatusString]
-[QTMoviePlaybackControllerMovieProxy statusString]
-[QTMoviePlaybackControllerMovieProxy _movieStatusStringDidChange:]
+[QTMoviePlaybackControllerMovieProxy shouldProxyValueForPlaying]
+[QTMoviePlaybackControllerMovieProxy automaticallyNotifiesObserversOfPlaying]
-[QTMoviePlaybackControllerMovieProxy isPlaying]
-[QTMoviePlaybackControllerMovieProxy setPlaying:]
_QTMoviePlaybackControllerMovieProxyEnableIdleDisplaySleep
_QTMoviePlaybackControllerMovieProxyEnableIdleSystemSleep
-[QTMoviePlaybackControllerSelection init]
-[QTMoviePlaybackControllerSelection dealloc]
-[QTMoviePlaybackControllerSelection _effectiveUpdateInterval]
-[QTMoviePlaybackControllerSelection _updateCurrentTimeTimer]
-[QTMoviePlaybackControllerSelection _updateCurrentTime:]
-[QTMoviePlaybackControllerSelection movie]
-[QTMoviePlaybackControllerSelection setMovie:]
-[QTMoviePlaybackControllerSelection currentTimeUpdateFrequency]
-[QTMoviePlaybackControllerSelection setCurrentTimeUpdateFrequency:]
-[QTMoviePlaybackControllerSelection automaticallyScrubs]
-[QTMoviePlaybackControllerSelection setAutomaticallyScrubs:]
-[QTMoviePlaybackControllerSelection automaticallyPreventsIdleSleep]
-[QTMoviePlaybackControllerSelection setAutomaticallyPreventsIdleSleep:]
-[QTMoviePlaybackControllerSelection automaticallyPauseWhenSessionResignsActive]
-[QTMoviePlaybackControllerSelection setAutomaticallyPauseWhenSessionResignsActive:]
-[QTMoviePlaybackControllerSelection _startScrubbingIfAppropriate]
-[QTMoviePlaybackControllerSelection _stopScrubbing]
+[QTMoviePlaybackControllerSelection shouldProxyValueForCurrentTime]
+[QTMoviePlaybackControllerSelection automaticallyNotifiesObserversOfCurrentTime]
+[QTMoviePlaybackControllerSelection keyPathsForValuesAffectingCurrentTime]
-[QTMoviePlaybackControllerSelection currentTime]
-[QTMoviePlaybackControllerSelection setCurrentTime:]
+[QTMoviePlaybackControllerSelection shouldProxyValueForRemainingTime]
+[QTMoviePlaybackControllerSelection keyPathsForValuesAffectingRemainingTime]
-[QTMoviePlaybackControllerSelection remainingTime]
-[QTMoviePlaybackControllerSelection observeValueForKeyPath:ofObject:change:context:]
-[QTMoviePlaybackControllerSelection valueForKey:]
-[QTMoviePlaybackControllerSelection setValue:forKey:]
-[QTMoviePlaybackControllerSelection setTarget:]
-[NSObject(QTKeyValueProxyTarget) QTKeyValueProxyTarget_keyPathsForValuesAffectingValueForKey:]
-[QTKeyValueProxy QTKeyValueProxyTarget_keyPathsForValuesAffectingValueForKey:]
+[QTKeyValueProxy shouldProxyValueForKey:]
-[QTKeyValueProxy init]
-[QTKeyValueProxy dealloc]
-[QTKeyValueProxy description]
-[QTKeyValueProxy valueForKey:]
-[QTKeyValueProxy setValue:forKey:]
-[QTKeyValueProxy willChangeValueForKey:]
-[QTKeyValueProxy didChangeValueForKey:]
-[QTKeyValueProxy _discoverTriggerKeysForKey:]
-[QTKeyValueProxy _clearTriggerKeys]
-[QTKeyValueProxy addObserver:forKeyPath:options:context:]
-[QTKeyValueProxy removeObserver:forKeyPath:]
-[QTKeyValueProxy observeValueForKeyPath:ofObject:change:context:]
-[QTKeyValueProxy forwardingTargetForSelector:]
-[QTKeyValueProxy target]
-[QTKeyValueProxy setTarget:]
-[QTHUDTimerNonRetainedTarget initWithTarget:selector:]
-[QTHUDTimerNonRetainedTarget invoke:]
+[NSTimer(QTHUDTimerAdditions) timerWithTimeInterval:nonRetainedTarget:selector:userInfo:repeats:]
+[NSTimer(QTHUDTimerAdditions) scheduledTimerWithTimeInterval:nonRetainedTarget:selector:userInfo:repeats:]
-[NSTimer(QTHUDTimerAdditions) initWithFireDate:interval:nonRetainedTarget:selector:userInfo:repeats:]
+[QTMoviePlaybackControllerTimeValue valueWithQTTime:]
-[QTMoviePlaybackControllerTimeValue QTTimeValue]
-[QTMoviePlaybackControllerTimeValue getValue:]
-[QTMoviePlaybackControllerTimeValue objCType]
-[QTMoviePlaybackControllerTimeValue charValue]
-[QTMoviePlaybackControllerTimeValue unsignedCharValue]
-[QTMoviePlaybackControllerTimeValue shortValue]
-[QTMoviePlaybackControllerTimeValue unsignedShortValue]
-[QTMoviePlaybackControllerTimeValue intValue]
-[QTMoviePlaybackControllerTimeValue unsignedIntValue]
-[QTMoviePlaybackControllerTimeValue longValue]
-[QTMoviePlaybackControllerTimeValue unsignedLongValue]
-[QTMoviePlaybackControllerTimeValue longLongValue]
-[QTMoviePlaybackControllerTimeValue unsignedLongLongValue]
-[QTMoviePlaybackControllerTimeValue boolValue]
-[QTMoviePlaybackControllerTimeValue integerValue]
-[QTMoviePlaybackControllerTimeValue unsignedIntegerValue]
-[QTMoviePlaybackControllerTimeValue floatValue]
-[QTMoviePlaybackControllerTimeValue doubleValue]
-[QTMovie_AsyncLoadHelper initWithAttributes:error:forParent:]
-[QTMovie_AsyncLoadHelper dealloc]
-[QTMovie_AsyncLoadHelper invalidate]
-[QTMovie_AsyncLoadHelper _loadMediaHelperOnBackgroundThreadWithAttributes:]
-[QTMovie_AsyncLoadHelper _mediaHelperFinishedLoadingWithError:]
-[QTMovie_AsyncLoadHelper copyWithZone:forParent:]
-[QTMovie_AsyncLoadHelper copyStateFromMediaHelper:]
-[QTMovie_AsyncLoadHelper transferStateToMediaHelper:]
-[QTMovie_AsyncLoadHelper diagnosticString]
-[QTMovie_AsyncLoadHelper setRate:]
-[QTMovie_AsyncLoadHelper setCurrentTime:]
-[QTMovie_AsyncLoadHelper loadState]
-[QTMovie_AsyncLoadHelper status]
-[QTMovie_AsyncLoadHelper loadStateError]
-[QTMovie_AsyncLoadHelper wouldUseVisualContext]
-[QTMovie_AsyncLoadHelper duration]
-[QTMovie_AsyncLoadHelper usesVisualContext]
-[QTMovie_AsyncLoadHelper maxTimeLoaded]
-[QTMovie_AsyncLoadHelper autoplay]
-[QTMovie_AsyncLoadHelper autoplay:]
-[QTMovie_AsyncLoadHelper volume]
-[QTMovie_AsyncLoadHelper setVolume:]
-[QTMovie_AsyncLoadHelper isMuted]
-[QTMovie_AsyncLoadHelper setMuted:]
-[QTMovie_AsyncLoadHelper setDelegate:]
-[QTMovie_AsyncLoadHelper isActive]
-[QTMovie_AsyncLoadHelper setActive:]
-[QTMovie_AsyncLoadHelper setActiveAndVisible:]
-[QTMovie_AsyncLoadHelper apertureMode]
-[QTMovie_AsyncLoadHelper setApertureMode:]
-[QTMovie_AsyncLoadHelper editable]
-[QTMovie_AsyncLoadHelper setEditable:]
-[QTMovie_AsyncLoadHelper language]
-[QTMovie_AsyncLoadHelper setLanguage:]
-[QTMovie_AsyncLoadHelper loops]
-[QTMovie_AsyncLoadHelper setLoops:]
-[QTMovie_AsyncLoadHelper loopsBackAndForth]
-[QTMovie_AsyncLoadHelper setLoopsBackAndForth:]
-[QTMovie_AsyncLoadHelper playsAllFrames]
-[QTMovie_AsyncLoadHelper setPlaysAllFrames:]
-[QTMovie_AsyncLoadHelper playsSelectionOnly]
-[QTMovie_AsyncLoadHelper setPlaysSelectionOnly:]
-[QTMovie_AsyncLoadHelper setUsesPreferredLanguage:]
-[QTMovie_AsyncLoadHelper visualHue]
-[QTMovie_AsyncLoadHelper setVisualHue:]
-[QTMovie_AsyncLoadHelper visualSaturation]
-[QTMovie_AsyncLoadHelper setVisualSaturation:]
-[QTMovie_AsyncLoadHelper visualBrightness]
-[QTMovie_AsyncLoadHelper setVisualBrightness:]
-[QTMovie_AsyncLoadHelper visualContrast]
-[QTMovie_AsyncLoadHelper setVisualContrast:]
-[QTMovie_AsyncLoadHelper visualBackgroundColor]
-[QTMovie_AsyncLoadHelper setVisualBackgroundColor:]
-[QTMovie_AsyncLoadHelper visualMovieBoxBackgroundColor]
-[QTMovie_AsyncLoadHelper setVisualMovieBoxBackgroundColor:]
-[QTMovie_AsyncLoadHelper visualDrawsMovieBoxBackgroundColor]
-[QTMovie_AsyncLoadHelper setVisualDrawsMovieBoxBackgroundColor:]
-[QTMovie_AsyncLoadHelper balance]
-[QTMovie_AsyncLoadHelper setBalance:]
-[QTMovie_AsyncLoadHelper bass]
-[QTMovie_AsyncLoadHelper setBass:]
-[QTMovie_AsyncLoadHelper gain]
-[QTMovie_AsyncLoadHelper setGain:]
-[QTMovie_AsyncLoadHelper treble]
-[QTMovie_AsyncLoadHelper setTreble:]
-[NSControl(QTTimeAdditions) QTTimeValue]
-[NSControl(QTTimeAdditions) setQTTimeValue:]
-[NSControl(QTTimeAdditions) takeQTTimeValueFrom:]
_createWarholSubtitlesFromFigAttributes
-[QTMovieViewCALayerRendererView viewWillMoveToSuperview:]
-[QTMovieViewCALayerRendererView viewDidMoveToSuperview]
-[QTMovieViewCALayerRendererView _createLayer]
-[QTMovieViewCALayerRendererView isOpaque]
-[QTMovieViewCALayerRendererView becomeFirstResponder]
-[QTMovieViewCALayerRendererView resignFirstResponder]
-[QTMovieViewCALayerRendererView acceptsFirstResponder]
-[QTMovieViewCALayerRendererView _qtMovieSubtitleDidChange:]
-[QTMovieViewCALayerRendererView _qtMovieClosedCaptionDidChange:]
-[QTMovieViewCALayerRendererView _qtMovieSubtitleVisibilityDidChange:]
-[QTMovieViewCALayerRendererView _qtMovieClosedCaptionVisibilityDidChange:]
-[QTMovieViewCALayerRendererView layoutSublayersOfLayer:]
-[QTMovieViewCALayerRendererView observeValueForKeyPath:ofObject:change:context:]
-[QTMovieViewCALayerRendererView dealloc]
+[QTMovieVideoProviderImageConsumer initialize]
-[QTMovieVideoProviderImageConsumer init]
_QTMovieVideoProviderImageConsumerPostNotification
-[QTMovieVideoProviderImageConsumer dealloc]
-[QTMovieVideoProviderImageConsumer copyCurrentImageBuffer]
-[QTMovieVideoProviderImageConsumer scheduleInRunLoop:forMode:]
-[QTMovieVideoProviderImageConsumer unscheduleFromRunLoop:forMode:]
-[QTMovieVideoProviderImageConsumer setImageBuffer:forHostTime:]
-[QTMovieVideoProviderImageConsumer flushImageBuffersAfterHostTime:]
-[QTMovieVideoProviderQuartzComposerOnly init]
-[QTMovieVideoProviderQuartzComposerOnly dealloc]
-[QTMovieVideoProviderQuartzComposerOnly finalize]
-[QTMovieVideoProviderQuartzComposerOnly movie]
-[QTMovieVideoProviderQuartzComposerOnly setMovie:]
-[QTMovieVideoProviderQuartzComposerOnly copyCurrentPixelBuffer]
-[QTMovieVideoProviderQuartzComposerOnly scheduleInRunLoop:forMode:]
-[QTMovieVideoProviderQuartzComposerOnly unscheduleFromRunLoop:forMode:]
-[QTMovieVideoProviderQuartzComposerOnly _currentImageBufferDidChange:]
+[QTHUDPopUpButton initialize]
-[QTHUDPopUpButtonCellButtonCell setMenuItem:]
-[QTHUDPopUpButtonCellButtonCell arrowPosition]
-[QTHUDPopUpButtonCellButtonCell setArrowPosition:]
-[QTHUDPopUpButtonCellButtonCell drawingRectForBounds:]
-[QTHUDPopUpButtonCellButtonCell indicatorRectForBounds:]
-[QTHUDPopUpButtonCellButtonCell drawIndicatorWithFrame:inView:]
-[QTHUDPopUpButtonCellButtonCell drawInteriorWithFrame:inView:]
+[QTHUDPopUpButtonCell initialize]
-[QTHUDPopUpButtonCell init]
_QTHUDPopUpButtonCellInitializeInstance
-[QTHUDPopUpButtonCell initTextCell:]
-[QTHUDPopUpButtonCell initImageCell:]
-[QTHUDPopUpButtonCell initWithCoder:]
-[QTHUDPopUpButtonCell copyWithZone:]
-[QTHUDPopUpButtonCell dealloc]
-[QTHUDPopUpButtonCell drawWithFrame:inView:]
-[QTHUDPopUpButtonCell setShowsFirstResponder:]
-[QTHUDPopUpButtonCell setControlView:]
-[QTHUDPopUpButtonCell setMenuItem:]
-[QTHUDPopUpButtonCell setState:]
-[QTHUDPopUpButtonCell isOpaque]
-[QTHUDPopUpButtonCell setEnabled:]
-[QTHUDPopUpButtonCell setBordered:]
-[QTHUDPopUpButtonCell setBezeled:]
-[QTHUDPopUpButtonCell setHighlighted:]
-[QTHUDPopUpButtonCell setArrowPosition:]
-[QTHUDPopUpButtonCell setImagePosition:]
-[QTHUDPopUpButtonCell setImageScaling:]
-[QTHUDContainerView initWithFrame:]
-[QTHUDContainerView initWithCoder:]
-[QTHUDContainerView encodeWithCoder:]
-[QTHUDContainerView style]
-[QTHUDContainerView setStyle:]
-[QTHUDContainerView isLeftEdgeRounded]
-[QTHUDContainerView setLeftEdgeRounded:]
-[QTHUDContainerView isRightEdgeRounded]
-[QTHUDContainerView setRightEdgeRounded:]
-[QTInvalidationSet dealloc]
-[QTInvalidationSet invalidate]
-[QTInvalidationSet _createBackingContainerIfNecessary]
-[QTInvalidationSet _ensureValidBackingContainer]
-[QTInvalidationSet addObject:]
-[QTInvalidationSet removeObject:]
-[NSView(QTHUDBackgroundTint) QTHUD_backgroundTintForRect:]
_QTUIRuntimeRegisterClass
__initClassTable
_QTUIRuntimeGetClass
_QTUIRuntimeUnregisterClass
_QTUICFDictionaryGetBoolValueIfPresent
_QTUICFDictionaryGetDoubleValueIfPresent
_QTUICFDictionarySetDoubleValue
_QTUICFDictionarySetCGPointValue
_QTUICFDictionarySetCGSizeValue
_QTUICFDictionaryGetRectValueIfPresent
_QTUICFDictionarySetCGRectValue
_QTUIGetBundle
_QTUICGAffineTransformIsRectilinear
_QTUICGPointDistanceToPoint
_QTUICGPointWithinDistanceOfPoint
_QTUIRoundRectContainsPoint
_QTUIRectInsideRoundRect
_QTUICGRectFlipInRect
_QTUICGPointFlipInRect
_QTUICGImageOrLayerGetSize
_QTUICGContextDrawImageOrLayer
_QTUICGContextDrawImageOrLayerShadow
_QTUICGContextDrawImageOrLayerInnerShadow
_QTUICGContextDrawImageFocusRing
__setFocusRingInContext
_QTUICGContextDrawLayerFocusRing
_QTUICGContextDrawImageOrLayerFocusRing
_QTUICGContextDraw3PartBannerInRectRelativeToEdge
_QTUICGLayerCreateWithContextInRect
_QTUICGPathAddRoundRect
_QTUICGContextAddRoundRect
_QTUICGContextFillRoundRect
_QTUICGContextStrokeRoundRect
_QTUICGContextSetGenericGrayFillColor
_QTUICGContextSetGenericGrayStrokeColor
_QTUICGContextSetGenericRGBFillColor
_QTUICGContextSetGenericRGBStrokeColor
_QTUICGGradientCreateGenericGrayWithComponents
_QTUICGGradientCreateGenericRGBWithComponents
_QTUICGContextFlip
_QTUICGContextUnflip
_QTUICGContextGetUnitSize
_QTUICGContextDrawImageShadow
_QTUICGContextDrawLayerShadow
_QTUICGContextDrawImageInnerShadow
__drawInnerShadowOnlyWithFunction
_QTUICGContextDrawLayerInnerShadow
_QTUITimelineSliderInitializeParamBlock
_QTUITimelineSliderFinalizeParamBlock
_QTUITimelineSliderPerformMeasurements
_QTUITimelineSliderHitTest
_QTUITimelineSliderGetMetrics
_QTUITimelineSliderPrerender
_QTUITimelineSliderRender
_QTUITimelineSliderThumbInitializeParamBlock
_QTUITimelineSliderThumbFinalizeParamBlock
_QTUITimelineSliderThumbPerformMeasurements
_QTUITimelineSliderThumbHitTest
_QTUITimelineSliderThumbGetMetrics
_QTUITimelineSliderThumbPrerender
_QTUITimelineSliderThumbRender
_highlightUnhighlightedRanges
_QTUIVolumeSliderInitializeParamBlock
_QTUIVolumeSliderFinalizeParamBlock
_QTUIVolumeSliderPerformMeasurements
_QTUIVolumeSliderHitTest
_QTUIVolumeSliderGetMetrics
_QTUIVolumeSliderPrerender
_QTUIVolumeSliderRender
_QTUIVolumeSliderThumbInitializeParamBlock
_QTUIVolumeSliderThumbFinalizeParamBlock
_QTUIVolumeSliderThumbPerformMeasurements
_QTUIVolumeSliderThumbHitTest
_QTUIVolumeSliderThumbGetMetrics
_QTUIVolumeSliderThumbPrerender
_QTUIVolumeSliderThumbRender
_getNominalRectForProposedRect
_QTUICFDictionaryAddKeysAndValuesFromDictionary
_QTUICFSetAddValuesFromSet
-[QTMovie_QuickTime(QTClassicMovieControllerInternal) _setControllerActive:]
-[QTMovie_QuickTime(QTClassicMovieControllerInternal) _setControllerSize:]
-[QTMovie_QuickTime(QTClassicMovieControllerInternal) _isControllerButtonVisible:]
-[QTMovie_QuickTime(QTClassicMovieControllerInternal) _setVisible:forControllerButton:]
-[QTMovie_QuickTime(QTClassicMovieControllerInternal) _movieControllerHeight]
-[NSImage(QTHUDImageCGLayer) QTHUD_CGLayerForProposedRect:context:hints:]
-[NSImage(QTHUDImageContent) QTHUD_contentForProposedRect:context:hints:]
-[QTExportSessionInternal initWithExportOptions:]
-[QTExportSessionInternal init]
-[QTExportSessionInternal dealloc]
-[QTExportSessionInternal exportOptions]
-[QTExportSessionInternal setExportOptions:]
-[QTExportSessionInternal exportSessionRef]
-[QTExportSessionInternal setExportSessionRef:]
-[QTExportSessionInternal delegate]
-[QTExportSessionInternal setDelegate:]
-[QTExportSessionInternal destination]
-[QTExportSessionInternal setDestination:]
-[QTExportSessionInternal progress]
-[QTExportSessionInternal setProgress:]
-[QTExportSessionInternal runState]
-[QTExportSessionInternal setRunState:]
-[QTExportSessionInternal completionError]
-[QTExportSessionInternal setCompletionError:]
-[QTExportSession exportOptions]
-[QTExportSession delegate]
-[QTExportSession setDelegate:]
-[QTExportSession initWithMovie:exportOptions:outputURL:error:]
-[QTExportSession initWithOptions:outputURL:error:]
-[QTExportSession dealloc]
-[QTExportSession run]
_RFSessionNotificationListenerCallbackProc
-[QTExportSession cancel]
-[QTExportSession progress]
-[QTExportSession setProgress:]
-[QTExportSession runState]
-[QTExportSession setRunState:]
-[QTExportSession isRunning]
-[QTExportSession isFinished]
-[QTExportSession isCancelled]
-[QTExportSession waitUntilFinished:]
-[QTExportSession localizedExportSessionOutputSummary]
-[QTExportSession setExportCompleted:]
-[QTExportSession errorForRainForestError:]
-[QTExportSession validateDestinationFileType:]
___47-[QTExportSession validateDestinationFileType:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QTExportOptionsInternal dealloc]
-[QTExportOptionsInternal _createExportRefIfNeeded]
-[QTExportOptionsInternal _addMetadataItem:format:]
-[QTExportOptionsInternal setHasVideo:]
-[QTExportOptionsInternal setHasAudio:]
-[QTExportOptionsInternal identifier]
-[QTExportOptionsInternal setIdentifier:]
-[QTExportOptionsInternal sourceSpecified]
-[QTExportOptionsInternal setSourceSpecified:]
-[QTExportOptionsInternal hasVideo]
-[QTExportOptionsInternal hasAudio]
-[QTExportOptionsInternal exportRef]
-[QTExportOptionsInternal setExportRef:]
-[QTExportOptionsInternal metadata]
-[QTExportOptionsInternal setMetadata:]
+[QTExportOptions allExportOptionsIdentifiers]
___46+[QTExportOptions allExportOptionsIdentifiers]_block_invoke
+[QTExportOptions templateNameForIdentifier:]
+[QTExportOptions presetNameForIdentifier:]
-[QTExportOptions validateSourceForExportIdentifier:]
+[QTExportOptions exportOptionsIdentifiersCompatibleWithMovie:]
+[QTExportOptions localizedNameForExportOptionsIdentifier:]
+[QTExportOptions exportOptionsWithIdentifier:]
-[QTExportOptions initWithIdentifier:exportRef:]
-[QTExportOptions init]
-[QTExportOptions dealloc]
-[QTExportOptions copyWithZone:]
-[QTExportOptions mutableCopyWithZone:]
-[QTExportOptions exportOptionsIdentifier]
-[QTExportOptions setExportOptionsIdentifier:]
-[QTExportOptions exportRef]
-[QTExportOptions localizedExportOptionsSummary]
-[QTExportOptions recommendedFileTypesForExportedFile]
-[QTMutableExportOptions copyWithZone:]
-[QTMutableExportOptions setTrackSourceWithTrack:forPortName:options:error:]
-[QTMutableExportOptions setTrackSourceWithURL:mediaType:trackIndex:forPortName:options:error:]
-[QTMutableExportOptions setMovieSource:]
-[QTMutableExportOptions setExportMetadata:metadataFormat:replaceExisting:]
-[QTMutableExportOptions exportMetadata]
-[QTMutableExportOptions portNamesForMediaType:]
-[QTMutableExportOptions _qtcreateRFExportFromMovie:]
-[QTMutableExportOptions _qtrainforestMediaIndexesForMediaType:movie:]
+[QTMutableExportOptions _qtrainforestTrackTypeFromQTTrackType:]
+[QTMutableExportOptions _qtrainforestPortNameFromQTTrackType:]
+[QTHUDRemoteIndicatorView initialize]
-[QTHUDRemoteIndicatorView dealloc]
-[QTHUDRemoteIndicatorView initWithFrame:]
-[QTHUDRemoteIndicatorView valueClassForBinding:]
-[QTHUDRemoteIndicatorView duration]
-[QTHUDRemoteIndicatorView setDuration:]
-[QTHUDRemoteIndicatorView time]
-[QTHUDRemoteIndicatorView setTime:]
-[QTHUDRemoteIndicatorView rate]
-[QTHUDRemoteIndicatorView setRate:]
-[QTHUDRemoteIndicatorView setRateThresholds:count:]
-[QTHUDRemoteIndicatorView chapterName]
-[QTHUDRemoteIndicatorView setChapterName:]
-[QTHUDRemoteIndicatorView timeFormatter]
-[QTHUDRemoteIndicatorView setTimeFormatter:]
-[QTHUDRemoteIndicatorView _trackMagnitude]
-[QTHUDRemoteIndicatorView _setTrackMagnitude:]
+[QTHUDRemoteIndicatorView keyPathsForValuesAffectingUpdateInterval]
-[QTHUDRemoteIndicatorView updateInterval]
-[QTHUDRemoteIndicatorView observeValueForKeyPath:ofObject:change:context:]
+[QTHUDRemoteIndicatorView _imageNamed:]
-[QTHUDRemoteIndicatorView drawLayer:inContext:]
_add_pillbox_path
_integral_rect_with_aspect_ratio_for_rect
-[QTHUDRemoteIndicatorView layoutSublayersOfLayer:]
_QTUIPopUpBackgroundInitializeParamBlock
_QTUIPopUpBackgroundFinalizeParamBlock
_QTUIPopUpBackgroundPerformMeasurements
_QTUIPopUpBackgroundHitTest
_QTUIPopUpBackgroundGetMetrics
_QTUIPopUpBackgroundPrerender
_QTUIPopUpBackgroundRender
+[QTMetadataItem initialize]
-[QTMetadataItem init]
-[QTMetadataItem initWithKey:keySpace:locale:time:value:extraAttributes:]
-[QTMetadataItem initWithAttributes:value:]
-[QTMetadataItem dealloc]
-[QTMetadataItem copyWithZone:]
-[QTMetadataItem isEqual:]
-[QTMetadataItem hash]
-[QTMetadataItem mutableCopyWithZone:]
-[QTMetadataItem description]
-[QTMetadataItem key]
-[QTMetadataItem keySpace]
-[QTMetadataItem locale]
-[QTMetadataItem time]
-[QTMetadataItem value]
-[QTMetadataItem extraAttributes]
-[QTMetadataItem initWithCoder:]
-[QTMetadataItem encodeWithCoder:]
-[QTMetadataItem(QTMetadataItem_TypeCoercion) stringValue]
-[QTMetadataItem(QTMetadataItem_TypeCoercion) numberValue]
-[QTMetadataItem(QTMetadataItem_TypeCoercion) dateValue]
-[QTMetadataItem(QTMetadataItem_TypeCoercion) dataValue]
+[QTMetadataItem(QTMetadataItem_ArrayFiltering) metadataItemsFromArray:withLocale:]
+[QTMetadataItem(QTMetadataItem_ArrayFiltering) metadataItemsFromArray:withKey:keySpace:]
-[QTMutableMetadataItem key]
-[QTMutableMetadataItem keySpace]
-[QTMutableMetadataItem locale]
-[QTMutableMetadataItem time]
-[QTMutableMetadataItem value]
-[QTMutableMetadataItem extraAttributes]
-[QTMutableMetadataItem setKey:]
-[QTMutableMetadataItem setKeySpace:]
-[QTMutableMetadataItem setLocale:]
-[QTMutableMetadataItem setTime:]
-[QTMutableMetadataItem setValue:]
-[QTMutableMetadataItem setExtraAttributes:]
-[QTMutableMetadataItem copyWithZone:]
+[QTHUDMediaTimelineRangeMarker rangeMarkerWithRepresentedObject:mediaTimeRange:]
-[QTHUDMediaTimelineRangeMarker initWithRepresentedObject:mediaTimeRange:]
-[QTHUDMediaTimelineRangeMarker init]
-[QTHUDMediaTimelineRangeMarker dealloc]
-[QTHUDMediaTimelineRangeMarker representedObject]
-[QTHUDMediaTimelineRangeMarker mediaTimeRange]
-[QTHUDMediaTimelineTrack init]
-[QTHUDMediaTimelineTrack initWithIdentifier:]
-[QTHUDMediaTimelineTrack dealloc]
-[QTHUDMediaTimelineTrack preview]
-[QTHUDMediaTimelineTrack setPreview:]
-[QTHUDMediaTimelineTrack identifier]
-[QTHUDMediaTimelineTrack timelineView]
-[QTHUDMediaTimelineTrack setTimelineView:]
-[QTHUDMediaTimelineTrack representedObject]
-[QTHUDMediaTimelineTrack setRepresentedObject:]
-[QTHUDMediaTimelineTrackPreview timelineTrack]
-[QTHUDMediaTimelineTrackPreview setTimelineTrack:]
-[QTHUDMediaTimelineTrackPreview previewLayer]
+[QTHUDMediaTimelineTracksView initialize]
-[QTHUDMediaTimelineTracksView initWithFrame:]
-[QTHUDMediaTimelineTracksView dealloc]
-[QTHUDMediaTimelineTracksView viewDidMoveToWindow]
-[QTHUDMediaTimelineTracksView delegate]
-[QTHUDMediaTimelineTracksView countForTimelineTracks]
-[QTHUDMediaTimelineTracksView timelineTracks]
-[QTHUDMediaTimelineTracksView insertObject:inTimelineTracksAtIndex:]
-[QTHUDMediaTimelineTracksView removeObjectFromTimelineTracksAtIndex:]
-[QTHUDMediaTimelineTracksView viewDidEndLiveResize]
-[QTHUDMediaTimelineTracksView showsTrackPreviews]
-[QTHUDMediaTimelineTracksView setShowsTrackPreviews:]
-[QTHUDMediaTimelineTracksView mediaDuration]
-[QTHUDMediaTimelineTracksView setMediaDuration:]
-[QTHUDMediaTimelineTracksView mediaTimeOffset]
-[QTHUDMediaTimelineTracksView setMediaTimeOffset:]
-[QTHUDMediaTimelineTracksView selectionStart]
-[QTHUDMediaTimelineTracksView setSelectionStart:]
-[QTHUDMediaTimelineTracksView minSelectionStart]
-[QTHUDMediaTimelineTracksView maxSelectionStart]
-[QTHUDMediaTimelineTracksView stepForwardSelectionStart]
-[QTHUDMediaTimelineTracksView stepBackwardSelectionStart]
-[QTHUDMediaTimelineTracksView selectionEnd]
-[QTHUDMediaTimelineTracksView setSelectionEnd:]
-[QTHUDMediaTimelineTracksView minSelectionEnd]
-[QTHUDMediaTimelineTracksView maxSelectionEnd]
-[QTHUDMediaTimelineTracksView stepForwardSelectionEnd]
-[QTHUDMediaTimelineTracksView stepBackwardSelectionEnd]
-[QTHUDMediaTimelineTracksView usesSelectionDetents]
-[QTHUDMediaTimelineTracksView setUsesSelectionDetents:]
-[QTHUDMediaTimelineTracksView currentMediaTime]
-[QTHUDMediaTimelineTracksView setCurrentMediaTime:]
-[QTHUDMediaTimelineTracksView stepForwardCurrentMediaTime]
-[QTHUDMediaTimelineTracksView stepBackwardCurrentMediaTime]
-[QTHUDMediaTimelineTracksView rangeMarkers]
-[QTHUDMediaTimelineTracksView setRangeMarkers:]
-[QTHUDMediaTimelineTracksView showsRangeMarkers]
-[QTHUDMediaTimelineTracksView setShowsRangeMarkers:]
___53-[QTHUDMediaTimelineTracksView setShowsRangeMarkers:]_block_invoke
+[QTHUDMediaTimelineTracksView suggestedTimeScaleForMediaDuration:inViewWithWidth:]
+[QTHUDMediaTimelineTracksView positionForMediaTime:outOfMediaDuration:timeOffset:inViewWithWidth:]
+[QTHUDMediaTimelineTracksView mediaTimeForPosition:outOfMediaDuration:timeOffset:inViewWithWidth:]
-[QTHUDMediaTimelineTracksView positionForMediaTime:]
-[QTHUDMediaTimelineTracksView mediaTimeForPosition:]
-[QTHUDMediaTimelineTracksView layoutSublayersOfLayer:]
___55-[QTHUDMediaTimelineTracksView layoutSublayersOfLayer:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[QTHUDMediaTimelineTracksView mouseDownCanMoveWindow]
-[QTHUDMediaTimelineTracksView updateTrackingAreas]
-[QTHUDMediaTimelineTracksView mouseEntered:]
-[QTHUDMediaTimelineTracksView mouseExited:]
-[QTHUDMediaTimelineTracksView mouseDown:]
-[QTHUDMediaTimelineTracksView minimumSelectionDuration]
-[QTHUDMediaTimelineTracksView setMinimumSelectionDuration:]
-[QTHUDMediaTimelineTracksView maximumSelectionDuration]
-[QTHUDMediaTimelineTracksView setMaximumSelectionDuration:]
-[QTHUDMediaTimelineTracksView selectionDetents]
-[QTHUDMediaTimelineTracksView setSelectionDetents:]
-[QTHUDMediaTimelineView initWithFrame:]
-[QTHUDMediaTimelineView dealloc]
-[QTHUDMediaTimelineView viewWillMoveToSuperview:]
-[QTHUDMediaTimelineView viewDidMoveToSuperview]
-[QTHUDMediaTimelineView superviewFrameDidChange:]
-[QTHUDMediaTimelineView countForTimelineTracks]
-[QTHUDMediaTimelineView timelineTracks]
-[QTHUDMediaTimelineView insertObject:inTimelineTracksAtIndex:]
-[QTHUDMediaTimelineView removeObjectFromTimelineTracksAtIndex:]
-[QTHUDMediaTimelineView showsTrackPreviews]
-[QTHUDMediaTimelineView setShowsTrackPreviews:]
-[QTHUDMediaTimelineView mediaDuration]
-[QTHUDMediaTimelineView setMediaDuration:]
-[QTHUDMediaTimelineView mediaTimeOffset]
-[QTHUDMediaTimelineView setMediaTimeOffset:]
-[QTHUDMediaTimelineView selectionStart]
-[QTHUDMediaTimelineView setSelectionStart:]
-[QTHUDMediaTimelineView selectionEnd]
-[QTHUDMediaTimelineView setSelectionEnd:]
-[QTHUDMediaTimelineView minimumSelectionDuration]
-[QTHUDMediaTimelineView setMinimumSelectionDuration:]
-[QTHUDMediaTimelineView maximumSelectionDuration]
-[QTHUDMediaTimelineView setMaximumSelectionDuration:]
-[QTHUDMediaTimelineView selectionDetents]
-[QTHUDMediaTimelineView setSelectionDetents:]
-[QTHUDMediaTimelineView usesSelectionDetents]
-[QTHUDMediaTimelineView setUsesSelectionDetents:]
-[QTHUDMediaTimelineView currentMediaTime]
-[QTHUDMediaTimelineView setCurrentMediaTime:]
-[QTHUDMediaTimelineView rangeMarkers]
-[QTHUDMediaTimelineView setRangeMarkers:]
-[QTHUDMediaTimelineView showsRangeMarkers]
-[QTHUDMediaTimelineView setShowsRangeMarkers:]
-[QTHUDMediaTimelineView pointsPerSecond]
-[QTHUDMediaTimelineView setPointsPerSecond:]
-[QTHUDMediaTimelineView minimumPointsPerSecond]
-[QTHUDMediaTimelineView maximumPointsPerSecond]
-[QTHUDMediaTimelineView canChangePointsPerSecond]
-[QTHUDMediaTimelineView rescalePointsPerSecond]
+[QTHUDMediaTimelineView positionForMediaTime:outOfMediaDuration:timeOffset:inViewWithWidth:]
+[QTHUDMediaTimelineView mediaTimeForPosition:outOfMediaDuration:timeOffset:inViewWithWidth:]
-[QTHUDMediaTimelineView observeValueForKeyPath:ofObject:change:context:]
-[QTHUDMediaTimelineView delegate]
-[QTHUDMediaTimelineView setDelegate:]
-[QTHUDDetentFunction initWithDetents:detentMagnitude:]
-[QTHUDDetentFunction init]
-[QTHUDDetentFunction dealloc]
-[QTHUDDetentFunction detents]
-[QTHUDDetentFunction detentMagnitude]
-[QTHUDDetentFunction inputValueAtOutputValue:]
-[QTHUDDetentFunction outputValueAtInputValue:]
-[QTHUDDetentFunction outputValueAtInputValue:isInDetent:indexOfDetent:]
-[NSCell(QTCMTimeAdditions) CMTimeValue]
-[NSCell(QTCMTimeAdditions) setCMTimeValue:]
-[NSCell(QTCMTimeAdditions) takeCMTimeValueFrom:]
-[NSControl(QTCMTimeAdditions) CMTimeValue]
-[NSControl(QTCMTimeAdditions) setCMTimeValue:]
-[NSControl(QTCMTimeAdditions) takeCMTimeValueFrom:]
_QTKitIdentityMatrix
_QTKitIdentityMatrix
_QTTrackIdentityMatrix
_QTPIdentityMatrix
_QTPIdentityMatrix
_QTPIdentityMatrix
_QTUIdentityMatrix
-[QTCaptureAudioPreviewOutput _updateOutputDeviceUniqueID].inAddress
-[QTCaptureAudioPreviewOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:].inAddress
_VideoFormatCanBeCVImageBuffers.cvPixelCodecTypes
-[QTMovieModernizer genericAudioSettingsFromTrack:].defaultChannelLayout
-[QTCaptureDALDevice isHighResolutionCamera].streamsPropertyAddress
-[QTCaptureDALDevice isHighResolutionCamera].formatDescriptionsPropertyAddress
-[QTCaptureDALDevice nativelySupportsCompressionOptions:].streamsPropertyAddress
-[QTCaptureDALDevice nativelySupportsCompressionOptions:].formatDescriptionsPropertyAddress
+[QTCaptureHALDevice _refreshDevicesWithIOType:].inAddress
+[QTCaptureHALDevice defaultInputDeviceWithMediaType:].inAddress
-[QTCaptureHALDevice setDeviceID:].inAddress71
-[QTCaptureHALDevice transportType].inAddress
-[QTCaptureHALDevice _refreshInputSourceAttributes].inputSourceNameTranslation
-[QTCaptureHALDevice isInUseByAnotherApplication].inAddress
_.memset_pattern
_QTCAImageQueueGetSupportedPixelFormats.kPixelFormats
_QTCGColorSpaceCreateGenericRGBWithGamma.whitePoints
_QTCGColorSpaceCreateGenericRGBWithGamma.blackPoints
_QTCGColorSpaceCreateGenericRGBWithGamma.matrix
__ZTS16TextRendererBase
__ZTS12Tx3gRenderer
__ZTS26SubtitleTx3gCustomRenderer
__ZTS26SubtitleTx3gQuartzRenderer
__ZTS14CEA608Renderer
__ZL10WhiteColor
__ZL10BlackColor
__ZZN20CEA608CustomRenderer6RenderEP9CGContextRK6CGRectS4_E21transparentComponents
__ZTS20CEA608CustomRenderer
__ZTS23CEA608FCCQuartzRenderer
_QTMovieIdentityMatrix
_QTCMIODeviceConfigureToBestMatchPixelBufferAttributesAndMinimumFrameInterval.preferredVideoCodecTypes
__nullClass
GCC_except_table66
GCC_except_table214
GCC_except_table215
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
GCC_except_table5
GCC_except_table8
GCC_except_table38
GCC_except_table42
GCC_except_table54
GCC_except_table4
GCC_except_table161
GCC_except_table39
GCC_except_table64
GCC_except_table68
GCC_except_table69
GCC_except_table71
GCC_except_table72
GCC_except_table73
GCC_except_table74
GCC_except_table22
GCC_except_table103
GCC_except_table107
GCC_except_table140
GCC_except_table203
GCC_except_table204
GCC_except_table207
GCC_except_table211
GCC_except_table0
GCC_except_table1
GCC_except_table4
GCC_except_table12
GCC_except_table18
GCC_except_table0
GCC_except_table1
GCC_except_table5
GCC_except_table8
GCC_except_table18
GCC_except_table13
GCC_except_table14
GCC_except_table15
GCC_except_table16
GCC_except_table17
GCC_except_table18
GCC_except_table28
GCC_except_table33
GCC_except_table41
GCC_except_table3
GCC_except_table3
GCC_except_table1
GCC_except_table7
GCC_except_table18
GCC_except_table25
GCC_except_table1
GCC_except_table7
GCC_except_table21
GCC_except_table24
GCC_except_table11
GCC_except_table14
GCC_except_table11
GCC_except_table12
GCC_except_table13
GCC_except_table14
GCC_except_table17
GCC_except_table20
GCC_except_table27
GCC_except_table11
GCC_except_table1
GCC_except_table4
GCC_except_table8
GCC_except_table9
GCC_except_table4
GCC_except_table0
GCC_except_table3
GCC_except_table5
GCC_except_table13
GCC_except_table22
GCC_except_table26
GCC_except_table48
GCC_except_table49
GCC_except_table0
GCC_except_table3
GCC_except_table5
GCC_except_table0
GCC_except_table3
GCC_except_table5
GCC_except_table7
GCC_except_table0
GCC_except_table3
GCC_except_table4
GCC_except_table7
GCC_except_table27
GCC_except_table2
GCC_except_table27
GCC_except_table35
GCC_except_table37
_impl_QTClassicMovieControllerViewCallback_subsystem
_impl_QTMachPortImageReceiver_subsystem
_QTMovieLimitReadAheadAttribute
_QTMovieChapterListAttribute
_QTMovieWouldUseVisualContextAttribute
_QTMovieCompositingModeAttribute
_QTMovieControllerTypeAttribute
_QTMovieMediaHelperAttribute
_QTMovieImageConsumersAttribute
_QTMovieRemoteUIClientAttribute
_QTMovieMovieStructureAvailableCallbackAttribute
_QTMovieKeyframePlaybackThresholdRateAttribute
_QTMovieInitializingThreadRunLoopAttribute
_QTMovieInitializingThreadAttribute
_QTMovieWillMigrateToMainThreadAttribute
_QTMovieMediaHelperClassNameAttribute
_QTMovieWouldUseVisualContextDidChangeNotification
_QTMovieImageConsumersWillChangeNotification
_QTMovieImageConsumersDidChangeNotification
_QTMovieMediaHelperDidChangeNotification
_QTMovieNoneControllerType
_QTMovieQTVRControllerType
_QTMovieObjectControllerType
_QTMoviePanoControllerType
_QTMovieOldObjectControllerType
_QTMovieOldPanoControllerType
_QTMovieStdControllerDarkType
_QTMovie_FigMediaTimebaseDidChangeNotification
_QTMovie_FigMediaContainsProtectedMediaAttribute
_QTMovie_FigMediaContainsStreamingSourceAttribute
_QTMovie_FigMediaResolvedURLAttribute
___block_descriptor_tmp
___block_descriptor_tmp70
___block_literal_global
___block_descriptor_tmp86
___block_descriptor_tmp95
___block_descriptor_tmp99
___block_descriptor_tmp246
___block_descriptor_tmp799
_QTErrorRecordingSuccessfullyFinishedKey
_QTResolvedDecompressionOptionsPixelBufferAttributesKey
_QTResolvedDecompressionOptionsVideoFieldModeKey
_QTResolvedDecompressionOptionsAllowUpscalingKey
_QTResolvedDecompressionOptionsMinimumVideoFrameIntervalKey
_QTExportMovieDataKey
_QTExportMovieAnchorURLKey
_QTMovieViewEditable
_QTCaptureVideoPreviewOutputGraphTimebaseDidChangeNotification
_QTCaptureVideoPreviewOutputConnectionKey
_QTMovieModernizerOutputFormat_Default
_QTMovieModernizerProcessKeyMediaType
_QTMovieModernizerProcessKeyMediaSubType
_QTMovieModernizerProcessKeyPersistentTrackID
_QTMovieModernizerProcessKeyProcess
_QTMovieModernizerProcessKeyNumberOfTranscodeUnits
_QTMovieModernizerProcessKeyNumberOfPassthroughUnits
_QTMovieModernizerProcessValueSkip
_QTMovieModernizerProcessValuePassthrough
_QTMovieModernizerProcessValueQuickTime
_QTMovieModernizerProcessValueMP0x55
_QTMovieModernizerErrorUnknown
_QTMovieModernizerErrorCouldNotCreateQuickTimeTrack
_QTMovieModernizerErrorSourceURLNIL
_QTMovieModernizerErrorSourceURLMustBeFile
_QTMovieModernizerErrorFailureMergingFile
_QTMovieModernizerErrorCouldNotCreateIntermediateTrack
_QTMovieModernizerErrorDestinationURLMustBeFile
_QTMovieModernizerErrorDestinationMustNotAlreadyExist
_QTMovieModernizerErrorCouldNotModernizeMovie
_QTMovieModernizerErrorCouldNotCreatePassthroughTrack
_QTMovieModernizerErrorCouldNotCreateLegacyMP3Track
_QTMovieModernizerErrorStartWritingFailed
_QTMovieModernizerErrorFormatReaderCouldNotBeCreated
_QTMovieModernizerErrorNoValidationDictionary
_QTMovieModernizerErrorSettingOutputFormat
_QTMovieModernizerErrorInvalidOutputFormat
_QTMovieModernizerErrorDestinationMustNotBeNIL
_QTMovieModernizerErrorHandlerMustNotBeNIL
_QTMovieModernizerErrorCannotAllocateMemory
___block_descriptor_tmp
___block_descriptor_tmp634
___block_descriptor_tmp684
___block_descriptor_tmp840
___block_descriptor_tmp853
___block_descriptor_tmp1298
___block_literal_global
___block_descriptor_tmp1316
___block_descriptor_tmp1319
___block_literal_global1320
_QTCaptureDeviceLegacySequenceGrabberAttribute
_QTPixelBufferCGBitmapInfoKey
_QTOpenGLContextColorSizeKey
_QTOpenGLContextAlphaSizeKey
_QTOpenGLContextFloatingPointKey
_QTOpenGLContextDoubleBufferKey
_QTCALayerRendererQueueAvailableSlots
_QTCALayerRendererPendingImageQueueDepth
_QTCALayerRendererQTKitLateCount
_QTCALayerRendererQueueDroppedFrameCount
_QTCGContextRendererNewImageDidBecomeAvailableNotification
_QTSurfaceRendererWillRelocateSurfacesNotification
_QTSurfaceRendererDidRelocateSurfacesNotification
_QTUIBackground
_QTUIButton
_QTUIContainer
_QTUIImage
_QTUISlider
_QTUISliderThumb
_QTHUDBackgroundViewBackgroundStyleKey
_QTHUDBackgroundViewContentBorderPositionKey
_kTextRendererPropertyKey_DoDisplay
_kTextRendererPropertyKey_RenderCallback
__ZTV16TextRendererBase
__ZTI16TextRendererBase
__ZTV12Tx3gRenderer
__ZTI12Tx3gRenderer
__ZTV26SubtitleTx3gCustomRenderer
__ZTI26SubtitleTx3gCustomRenderer
__ZTV26SubtitleTx3gQuartzRenderer
__ZTI26SubtitleTx3gQuartzRenderer
__ZTV14CEA608Renderer
__ZTI14CEA608Renderer
__ZL12DefaultStyle
__ZN20CEA608CustomRenderer42kQTClosedCaptionStringAttributeDisplayableE
__ZTV20CEA608CustomRenderer
__ZTI20CEA608CustomRenderer
__ZTV23CEA608FCCQuartzRenderer
__ZTI23CEA608FCCQuartzRenderer
_QTMovieMovieObjectKey
_QTKitServerDidStartNotification
___block_descriptor_tmp
___block_descriptor_tmp49
___block_descriptor_tmp54
___block_descriptor_tmp147
___block_literal_global
___block_descriptor_tmp152
___block_descriptor_tmp187
___block_literal_global188
_QTNotificationControllerNameKey
_QTNotificationControllerTargetObjectKey
_QTNotificationControllerUserInfoKey
_QTDelegateControllerMovieKey
_QTDelegateControllerPhaseKey
_QTDelegateControllerPercentKey
_QTDelegateControllerOperationKey
_QTDelegateControllerUserInfoKey
_QTDelegateControllerURLKey
_QTDelegateControllerSyncObjectKey
_QTDelegateControllerDelegateTypeKey
_QTDelegateControllerExternalMovieKey
_kQTClosedCaptionFormatKey
_kQTClosedCaptionLocationKey
_kQTClosedCaptionLocation_XKey
_kQTClosedCaptionLocation_YKey
_kQTClosedCaptionBoundsKey
_kQTClosedCaptionBounds_TopKey
_kQTClosedCaptionBounds_LeftKey
_kQTClosedCaptionBounds_HeightKey
_kQTClosedCaptionBounds_WidthKey
_kQTClosedCaptionUnitsKey
_kQTClosedCaptionStringKey
_kQTClosedCaptionStringAttributeItalic
_kQTClosedCaptionStringAttributeUnderline
_kQTClosedCaptionStringAttributeFlash
_kQTClosedCaptionStringAttributeTextColor
_kQTClosedCaptionStringAttributeBackgroundColor
_kQTSubtitleAttributeFontListKey
_kQTSubtitleAttributeFontSizeKey
_kQTSubtitleAttributeFaceStyleBoldKey
_kQTSubtitleAttributeFaceStyleItalicKey
_kQTSubtitleAttributeFaceStyleUnderlineKey
_kQTSubtitleAttributeTextBoxKey
_kQTSubtitleAttributeBoxTopKey
_kQTSubtitleAttributeBoxLeftKey
_kQTSubtitleAttributeBoxBottomKey
_kQTSubtitleAttributeBoxRightKey
_kQTSubtitleAttributeHorizontalJustificationKey
_kQTSubtitleAttributeVerticalJustificationKey
_kQTSubtitleAttributeDisplayTextVerticallyKey
_kQTSubtitleAttributeFillTextRegionKey
_kQTSubtitleAttributeBackgroundColorKey
_kQTSubtitleAttributeColorRedComponentKey
_kQTSubtitleAttributeColorGreenComponentKey
_kQTSubtitleAttributeColorBlueComponentKey
_kQTSubtitleAttributeColorAlphaComponentKey
_kQTSubtitleAttributeTextColorKey
_kQTSubtitleAttributeHighlightColorKey
_kQTSubtitleAttributeTextWrapKey
_kQTSubtitleAttributeForcedKey
_kQTSubtitleAttributeObeyFormattingKey
_QTMovieVideoProviderImageConsumerCurrentImageBufferDidChangeNotification
_QTUIWidgetVolumeSlider
_QTUIWidgetVolumeSliderThumb
_QTUIWidgetTimelineSlider
_QTUIWidgetTimelineSliderThumb
_QTUIWidgetTimelineSliderHighlightedRangesKey
_QTUIWidgetButtonVariantDarkGray
_QTUIWidgetButtonVariantDarkerGray
_QTUIWidgetButtonVariantYellow
_QTUITimelineSlider
_QTUITimelineSliderThumb
_QTUIVolumeSlider
_QTUIVolumeSliderThumb
___block_descriptor_tmp
_QTExportOptionsMPEG4ForDesktopOrWeb
_CMATemplateAMFExport
_CMAPresetAppleM4VCellular
_CMAPresetAppleM4V480pSD
_CMAPresetAppleM4ViPod
_CMAPresetAppleM4VAppleTV
_CMAPresetAppleM4VWiFi
_CMAPresetAppleM4V720pHD
_CMAPresetAppleM4V1080pHD
_CMAPresetAppleM4A
_CMATemplateQTMovieExport
_CMAPresetQTMovie480p
_CMAPresetQTMovie720p
_CMAPresetQTMovie1080p
_CMATemplatePcPMasterEncodingExport
_CMAPresetStandardMaster
___block_descriptor_tmp
___block_literal_global
_QTUIPopUpBackground
_QTMetadataID3MetadataKeyAudioEncryption
_QTMetadataID3MetadataKeyAttachedPicture
_QTMetadataID3MetadataKeyAudioSeekPointIndex
_QTMetadataID3MetadataKeyComments
_QTMetadataID3MetadataKeyCommerical
_QTMetadataID3MetadataKeyEncryption
_QTMetadataID3MetadataKeyEqualization
_QTMetadataID3MetadataKeyEqualization2
_QTMetadataID3MetadataKeyEventTimingCodes
_QTMetadataID3MetadataKeyGeneralEncapsulatedObject
_QTMetadataID3MetadataKeyGroupIdentifier
_QTMetadataID3MetadataKeyInvolvedPeopleList_v23
_QTMetadataID3MetadataKeyLink
_QTMetadataID3MetadataKeyMusicCDIdentifier
_QTMetadataID3MetadataKeyMPEGLocationLookupTable
_QTMetadataID3MetadataKeyOwnership
_QTMetadataID3MetadataKeyPrivate
_QTMetadataID3MetadataKeyPlayCounter
_QTMetadataID3MetadataKeyPopularimeter
_QTMetadataID3MetadataKeyPositionSynchronization
_QTMetadataID3MetadataKeyRecommendedBufferSize
_QTMetadataID3MetadataKeyRelativeVolumeAdjustment
_QTMetadataID3MetadataKeyRelativeVolumeAdjustment2
_QTMetadataID3MetadataKeyReverb
_QTMetadataID3MetadataKeySeek
_QTMetadataID3MetadataKeySignature
_QTMetadataID3MetadataKeySynchronizedLyric
_QTMetadataID3MetadataKeySynchronizedTempoCodes
_QTMetadataID3MetadataKeyAlbumTitle
_QTMetadataID3MetadataKeyBeatsPerMinute
_QTMetadataID3MetadataKeyComposer
_QTMetadataID3MetadataKeyContentType
_QTMetadataID3MetadataKeyCopyright
_QTMetadataID3MetadataKeyDate
_QTMetadataID3MetadataKeyEncodingTime
_QTMetadataID3MetadataKeyPlaylistDelay
_QTMetadataID3MetadataKeyOriginalReleaseTime
_QTMetadataID3MetadataKeyRecordingTime
_QTMetadataID3MetadataKeyReleaseTime
_QTMetadataID3MetadataKeyTaggingTime
_QTMetadataID3MetadataKeyEncodedBy
_QTMetadataID3MetadataKeyLyricist
_QTMetadataID3MetadataKeyFileType
_QTMetadataID3MetadataKeyTime
_QTMetadataID3MetadataKeyInvolvedPeopleList_v24
_QTMetadataID3MetadataKeyContentGroupDescription
_QTMetadataID3MetadataKeyTitleDescription
_QTMetadataID3MetadataKeySubTitle
_QTMetadataID3MetadataKeyInitialKey
_QTMetadataID3MetadataKeyLanguage
_QTMetadataID3MetadataKeyLength
_QTMetadataID3MetadataKeyMusicianCreditsList
_QTMetadataID3MetadataKeyMediaType
_QTMetadataID3MetadataKeyMood
_QTMetadataID3MetadataKeyOriginalAlbumTitle
_QTMetadataID3MetadataKeyOriginalFilename
_QTMetadataID3MetadataKeyOriginalLyricist
_QTMetadataID3MetadataKeyOriginalArtist
_QTMetadataID3MetadataKeyOriginalReleaseYear
_QTMetadataID3MetadataKeyFileOwner
_QTMetadataID3MetadataKeyLeadPerformer
_QTMetadataID3MetadataKeyBand
_QTMetadataID3MetadataKeyConductor
_QTMetadataID3MetadataKeyModifiedBy
_QTMetadataID3MetadataKeyPartOfASet
_QTMetadataID3MetadataKeyProducedNotice
_QTMetadataID3MetadataKeyPublisher
_QTMetadataID3MetadataKeyTrackNumber
_QTMetadataID3MetadataKeyRecordingDates
_QTMetadataID3MetadataKeyInternetRadioStationName
_QTMetadataID3MetadataKeyInternetRadioStationOwner
_QTMetadataID3MetadataKeySize
_QTMetadataID3MetadataKeyAlbumSortOrder
_QTMetadataID3MetadataKeyPerformerSortOrder
_QTMetadataID3MetadataKeyTitleSortOrder
_QTMetadataID3MetadataKeyInternationalStandardRecordingCode
_QTMetadataID3MetadataKeyEncodedWith
_QTMetadataID3MetadataKeySetSubtitle
_QTMetadataID3MetadataKeyYear
_QTMetadataID3MetadataKeyUserText
_QTMetadataID3MetadataKeyUniqueFileIdentifier
_QTMetadataID3MetadataKeyTermsOfUse
_QTMetadataID3MetadataKeyUnsynchronizedLyric
_QTMetadataID3MetadataKeyCommercialInformation
_QTMetadataID3MetadataKeyCopyrightInformation
_QTMetadataID3MetadataKeyOfficialAudioFileWebpage
_QTMetadataID3MetadataKeyOfficialArtistWebpage
_QTMetadataID3MetadataKeyOfficialAudioSourceWebpage
_QTMetadataID3MetadataKeyOfficialInternetRadioStationHomepage
_QTMetadataID3MetadataKeyPayment
_QTMetadataID3MetadataKeyOfficialPublisherWebpage
_QTMetadataID3MetadataKeyUserURL
___block_descriptor_tmp
___block_descriptor_tmp220
_OBJC_IVAR_$_QTAudioCompressionOptions._asbd
_OBJC_IVAR_$_QTAudioCompressionOptions._channelLayout
_OBJC_IVAR_$_QTAudioCompressionOptions._magicCookie
_OBJC_IVAR_$_QTCompressionOptionsInternal._identifier
_OBJC_IVAR_$_QTCompressionOptions._internal
_OBJC_IVAR_$_QTCompressionOptions._reserved
_OBJC_IVAR_$_QTDataReferenceEnumerator._media
_OBJC_IVAR_$_QTDataReferenceEnumerator._enumerator
_OBJC_IVAR_$_QTDataReferenceEnumerator.index
_OBJC_IVAR_$_QTDataReferenceEnumerator._reserved1
_OBJC_IVAR_$_QTDataReferenceEnumerator._reserved2
_OBJC_IVAR_$_QTDataReferenceEnumerator._reserved3
_OBJC_IVAR_$_QTFormatDescriptionInternal.mediaType
_OBJC_IVAR_$_QTFormatDescriptionInternal.figFormatDescription
_OBJC_IVAR_$_QTFormatDescription._internal
_OBJC_IVAR_$_QTFormatDescription._reserved1
_OBJC_IVAR_$_QTFormatDescription._reserved2
_OBJC_IVAR_$_QTFormatDescription._reserved3
_OBJC_IVAR_$_QTSampleBufferInternal.figSampleBuffer
_OBJC_IVAR_$_QTSampleBufferInternal.contiguousFigBlockBufferCache
_OBJC_IVAR_$_QTSampleBufferInternal.audioBufferListWith16ByteAlignmentStorage
_OBJC_IVAR_$_QTSampleBufferInternal.audioBufferListWithout16ByteAlignmentStorage
_OBJC_IVAR_$_QTSampleBufferInternal.cvPixelBufferCache
_OBJC_IVAR_$_QTSampleBufferInternal.sampleUseCount
_OBJC_IVAR_$_QTSampleBufferInternal.figSampleBufferLock
_OBJC_IVAR_$_QTSampleBuffer._internal
_OBJC_IVAR_$_QTSampleBuffer._reserved1
_OBJC_IVAR_$_QTSampleBuffer._reserved2
_OBJC_IVAR_$_QTSampleBuffer._reserved3
_OBJC_IVAR_$_QTTimeValue._time
_OBJC_IVAR_$_QTVideoCompressionOptions._codecType
_OBJC_IVAR_$_QTVideoCompressionOptions._sizeMode
_OBJC_IVAR_$_QTVideoCompressionOptions._width
_OBJC_IVAR_$_QTVideoCompressionOptions._height
_OBJC_IVAR_$_QTVideoCompressionOptions._vtCompressionProperties
_OBJC_IVAR_$_QTVideoCompressionOptions._preferredInputPixelBufferAttributes
_OBJC_IVAR_$_QTVideoCompressionOptions._localizedCompressionOptionsSummary
_OBJC_IVAR_$_QTHotspot._proxy
_OBJC_IVAR_$_QTHotspot._node
_OBJC_IVAR_$_QTHotspot._reserved1
_OBJC_IVAR_$_QTHotspot._reserved2
_OBJC_IVAR_$_QTHotspotEnumerator._node
_OBJC_IVAR_$_QTHotspotEnumerator._index
_OBJC_IVAR_$_QTHotspotEnumerator._reserved1
_OBJC_IVAR_$_QTHotspotEnumerator._reserved2
_OBJC_IVAR_$_QTHotspotEnumerator._reserved3
_OBJC_IVAR_$_QTMovieAttributeProps.visibility
_OBJC_IVAR_$_QTMovieAttributeProps.availabilityForGetting
_OBJC_IVAR_$_QTMovieAttributeProps.availabilityForSetting
_OBJC_IVAR_$_QTMovieAttributeProps.availabilityForInitializing
_OBJC_IVAR_$_QTMovieAttributeProps.willChangeNotificationName
_OBJC_IVAR_$_QTMovieAttributeProps.didChangeNotificationName
_OBJC_IVAR_$_QTMovie._initedViaInitWithAttributes
_OBJC_IVAR_$_QTMovie._mediaHelper
_OBJC_IVAR_$_QTMovie._children
_OBJC_IVAR_$_QTMovie._state
_OBJC_IVAR_$_QTMovie._reserved10
_OBJC_IVAR_$_QTMovie._reserved11
_OBJC_IVAR_$_QTMovie._reserved12
_OBJC_IVAR_$_QTMovie._reserved1
_OBJC_IVAR_$_QTMovie._reserved2
_OBJC_IVAR_$_QTMovie._reserved3
_OBJC_IVAR_$_QTMovie._reserved4
_OBJC_IVAR_$_QTMovie._reserved5
_OBJC_IVAR_$_QTMovie._reserved6
_OBJC_IVAR_$_QTMovie._reserved7
_OBJC_IVAR_$_QTMovie._reserved8
_OBJC_IVAR_$_QTMovie._reserved9
_OBJC_IVAR_$_QTMovie._reserved13
_OBJC_IVAR_$_QTMovie._reserved14
_OBJC_IVAR_$_QTMovie._reserved15
_OBJC_IVAR_$_QTMovie_FigMedia_TimelyCaller._playbackItem
_OBJC_IVAR_$_QTMovie_FigMedia_TimelyCaller._timerQueue
_OBJC_IVAR_$_QTMovie_FigMedia_TimelyCaller._timerSource
_OBJC_IVAR_$_QTMovie_FigMedia_TimelyCaller._isInvalidated
_OBJC_IVAR_$_QTMovie_FigMedia_TimelyCaller._timebase
_OBJC_IVAR_$_QTMovie_FigMedia_TimelyCaller._currentRate
_OBJC_IVAR_$_QTMovie_FigMedia_TimelyCaller._lastRate
_OBJC_IVAR_$_QTMovie_FigMedia_OccasionalCaller._times
_OBJC_IVAR_$_QTMovie_FigMedia_OccasionalCaller._block
_OBJC_IVAR_$_QTMovie_FigMedia._initializingThread
_OBJC_IVAR_$_QTMovie_FigMedia._attachedToMainThread
_OBJC_IVAR_$_QTMovie_FigMedia._willMigrateToMainThread
_OBJC_IVAR_$_QTMovie_FigMedia._loadState
_OBJC_IVAR_$_QTMovie_FigMedia._containsProtectedMedia
_OBJC_IVAR_$_QTMovie_FigMedia._containsStreamingSource
_OBJC_IVAR_$_QTMovie_FigMedia._readyForPlaybackSemaphore
_OBJC_IVAR_$_QTMovie_FigMedia._figPlayer
_OBJC_IVAR_$_QTMovie_FigMedia._playbackItem
_OBJC_IVAR_$_QTMovie_FigMedia._url
_OBJC_IVAR_$_QTMovie_FigMedia._trackHelpers
_OBJC_IVAR_$_QTMovie_FigMedia._playWhenReadyRate
_OBJC_IVAR_$_QTMovie_FigMedia._playbackRange
_OBJC_IVAR_$_QTMovie_FigMedia._isActive
_OBJC_IVAR_$_QTMovie_FigMedia._weakReference
_OBJC_IVAR_$_QTMovie_FigMedia._chapterObserver
_OBJC_IVAR_$_QTMovie_FigMedia._renderHelper
_OBJC_IVAR_$_QTMovie_FigMedia._postsClosedCaptionChangeNotifications
_OBJC_IVAR_$_QTMovie_FigMedia._postsNonForcedSubtitleChangeNotifications
_OBJC_IVAR_$_QTMovie_FigMedia._visualContext
_OBJC_IVAR_$_QTMovie_FigMedia._isMuted
_OBJC_IVAR_$_QTMovie_FigMedia._volumeAtMuting
_OBJC_IVAR_$_QTMovie_FigMedia._loadStateErrorCode
_OBJC_IVAR_$_QTMovie_FigMedia._playWhenReady
_OBJC_IVAR_$_QTMovie_FigMedia._looping
_OBJC_IVAR_$_QTMovie_FigMedia._loopingBackAndForth
_OBJC_IVAR_$_QTMovie_FigMedia._playbackRangeActive
_OBJC_IVAR_$_QTMovie_FigMedia._mostRecentlySetChapterIndex
_OBJC_IVAR_$_QTMovie_FigMedia._sessionClonedMovie
_OBJC_IVAR_$_QTMovieMediaHelper._initializationAttributes
_OBJC_IVAR_$_QTMovieMediaHelper._fanOut
_OBJC_IVAR_$_QTMovieMediaHelper._delegate
_OBJC_IVAR_$_QTMovieMediaHelper._qtMovie
_OBJC_IVAR_$_QTMovieMediaHelper._didBecomeMediaHelperForMovie
_OBJC_IVAR_$_QTMovieMediaHelper._compatibilityVisualContextRenderer
_OBJC_IVAR_$_QTMovieUndoOperation._target
_OBJC_IVAR_$_QTMovieUndoOperation._selector
_OBJC_IVAR_$_QTMovieUndoOperation._op
_OBJC_IVAR_$_QTMovieUndoOperation._editStateProxy
_OBJC_IVAR_$_QTNode._proxy
_OBJC_IVAR_$_QTNode._movie
_OBJC_IVAR_$_QTNode._children
_OBJC_IVAR_$_QTNode._reserved1
_OBJC_IVAR_$_QTNodeEnumerator._movie
_OBJC_IVAR_$_QTNodeEnumerator._index
_OBJC_IVAR_$_QTNodeEnumerator._reserved1
_OBJC_IVAR_$_QTNodeEnumerator._reserved2
_OBJC_IVAR_$_QTNodeEnumerator._reserved3
_OBJC_IVAR_$_QTStream._proxy
_OBJC_IVAR_$_QTStream._track
_OBJC_IVAR_$_QTStream._reserved1
_OBJC_IVAR_$_QTStream._reserved2
_OBJC_IVAR_$_QTStreamEnumerator._index
_OBJC_IVAR_$_QTStreamEnumerator._track
_OBJC_IVAR_$_QTStreamEnumerator._reserved1
_OBJC_IVAR_$_QTStreamEnumerator._reserved2
_OBJC_IVAR_$_QTStreamEnumerator._reserved3
_OBJC_IVAR_$_QTTrack._trackHelper
_OBJC_IVAR_$_QTTrack._movie
_OBJC_IVAR_$_QTTrack._cachedTrackID
_OBJC_IVAR_$_QTTrack._children
_OBJC_IVAR_$_QTTrack._flags
_OBJC_IVAR_$_QTTrack._reserved1
_OBJC_IVAR_$_QTTrack._reserved2
_OBJC_IVAR_$_QTTrack._reserved3
_OBJC_IVAR_$_QTTrack._reserved4
_OBJC_IVAR_$_QTTrack_FigMedia._trackReader
_OBJC_IVAR_$_QTTrack_FigMedia._trackID
_OBJC_IVAR_$_QTTrack_FigMedia._qtMovie
_OBJC_IVAR_$_QTTrack_QuickTime._proxy
_OBJC_IVAR_$_QTTrack_QuickTime._objectToken
_OBJC_IVAR_$_QTTrack_QuickTime._undoManager
_OBJC_IVAR_$_QTTrack_QuickTime._undoAttributes
_OBJC_IVAR_$_QTTrack_QuickTime._trackID
_OBJC_IVAR_$_QTTrackEnumerator._movie
_OBJC_IVAR_$_QTTrackEnumerator._index
_OBJC_IVAR_$_QTTrackEnumerator._reserved1
_OBJC_IVAR_$_QTTrackEnumerator._reserved2
_OBJC_IVAR_$_QTTrackEnumerator._reserved3
_OBJC_IVAR_$_QTTrackHelper._qtTrack
_OBJC_IVAR_$_QTBackgroundQueueThreadInfoInternal._invocationQueue
_OBJC_IVAR_$_QTBackgroundQueueThreadInfoInternal._queueMutex
_OBJC_IVAR_$_QTBackgroundQueueThreadInfoInternal._invocationsAvailableCond
_OBJC_IVAR_$_QTBackgroundQueueThreadInfoInternal._runningState
_OBJC_IVAR_$_QTBackgroundQueue._queueLimitLock
_OBJC_IVAR_$_QTBackgroundQueue._enqueueMutex
_OBJC_IVAR_$_QTBackgroundQueue._threadInfo
_OBJC_IVAR_$_QTBackgroundQueue._target
_OBJC_IVAR_$_QTBackgroundQueue._queueLimit
_OBJC_IVAR_$_QTCallbackRegistry._observers
_OBJC_IVAR_$_QTCallbackRegistry._observersLock
_OBJC_IVAR_$_QTResolvedDecompressionOptions._decompressionAttributes
_OBJC_IVAR_$_QTResolvedDecompressionOptions._useDefaultPixelBufferAttributes
_OBJC_IVAR_$_QTVideoRendererWebKitOnly._renderer
_OBJC_IVAR_$_QTVideoRendererWebKitOnly._movie
_OBJC_IVAR_$_QTClassicMovieControllerViewNeedsDisplayData.needsDisplayReceivePort
_OBJC_IVAR_$_QTClassicMovieControllerViewNeedsDisplayData.workRunLoop
_OBJC_IVAR_$_QTClassicMovieControllerViewNeedsDisplayData.workRunLoopAvailableCondition
_OBJC_IVAR_$_QTClassicMovieControllerViewNeedsDisplayData.stopRunLoopSource
_OBJC_IVAR_$_QTClassicMovieControllerViewNeedsDisplayData.needsDisplayCallbackServicingState
_OBJC_IVAR_$_QTClassicMovieControllerViewNeedsDisplayData.needsDisplayCallbackServicingStateLock
_OBJC_IVAR_$_QTClassicMovieControllerView._needsDisplayThreadData
_OBJC_IVAR_$_QTClassicMovieControllerView._proxy
_OBJC_IVAR_$_QTClassicMovieControllerView._movie
_OBJC_IVAR_$_QTMovieViewInternal.buttonsForcedShown
_OBJC_IVAR_$_QTMovieViewInternal.buttonsForcedHidden
_OBJC_IVAR_$_QTMovieViewInternal.mouseDownViewID
_OBJC_IVAR_$_QTMovieViewInternal.eventlist
_OBJC_IVAR_$_QTMovieViewInternal.draggingPasteboard
_OBJC_IVAR_$_QTMovieViewInternal.contextualMenu
_OBJC_IVAR_$_QTMovieViewInternal.dragHighlightOverlayPanel
_OBJC_IVAR_$_QTMovieViewInternal.needToSetMovieSizeWhenDoneLiveResizing
_OBJC_IVAR_$_QTMovieViewInternal.qtIMAVManagerImageConsumer
_OBJC_IVAR_$_QTMovieViewInternal.lastCIImageVendedToDelegate
_OBJC_IVAR_$_QTMovieView._internal
_OBJC_IVAR_$_QTMovieView._fillColor
_OBJC_IVAR_$_QTMovieView._rendererView
_OBJC_IVAR_$_QTMovieView._movieControllerView
_OBJC_IVAR_$_QTMovieView._proxy
_OBJC_IVAR_$_QTMovieView._movie
_OBJC_IVAR_$_QTMovieView._delegate
_OBJC_IVAR_$_QTMovieView._viewFlags
_OBJC_IVAR_$_QTMovieView._preservesAspectRatio
_OBJC_IVAR_$_QTMovieView._controllerVisible
_OBJC_IVAR_$_QTMovieView._reserved3
_OBJC_IVAR_$_QTMovieView._delegateProxy
_OBJC_IVAR_$_QTMovieView._useVisualContext
_OBJC_IVAR_$_QTCaptureDeviceInputInternal._device
_OBJC_IVAR_$_QTCaptureDeviceInputInternal._connections
_OBJC_IVAR_$_QTCaptureDeviceInputInternal._deviceInputUnitDescription
_OBJC_IVAR_$_QTCaptureDeviceInputInternal._demuxUnitDescription
_OBJC_IVAR_$_QTCaptureDeviceInputInternal._unitUseCount
_OBJC_IVAR_$_QTCaptureDeviceInputInternal._ready
_OBJC_IVAR_$_QTCaptureDeviceInputInternal.automaticallyConfiguresDevice
_OBJC_IVAR_$_QTCaptureDeviceInput._internal
_OBJC_IVAR_$_QTCaptureDeviceInput._reserved4
_OBJC_IVAR_$_QTCaptureDeviceInput._reserved5
_OBJC_IVAR_$_QTCaptureDeviceInput._reserved6
_OBJC_IVAR_$_QTCaptureAudioPreviewOutputInternal.connections
_OBJC_IVAR_$_QTCaptureAudioPreviewOutputInternal.audioPreviewSynchronizerUnits
_OBJC_IVAR_$_QTCaptureAudioPreviewOutputInternal.audioPreviewOutputUnits
_OBJC_IVAR_$_QTCaptureAudioPreviewOutputInternal.volume
_OBJC_IVAR_$_QTCaptureAudioPreviewOutputInternal.outputDeviceUniqueID
_OBJC_IVAR_$_QTCaptureAudioPreviewOutput._internal
_OBJC_IVAR_$_QTCaptureAudioPreviewOutput._reserved4
_OBJC_IVAR_$_QTCaptureAudioPreviewOutput._reserved5
_OBJC_IVAR_$_QTCaptureAudioPreviewOutput._reserved6
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputCallbackData._output
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputCallbackData._connection
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputCallbackData._backgroundQueue
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputInternal.connections
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputInternal.callbackData
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputInternal.visualContextsForConnection
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputInternal.renderHelpersForConnection
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputInternal.videoPreviewSynchronizerUnits
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputInternal.videoPreviewOutputUnits
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputInternal.pixelBufferAttributes
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputInternal.deinterlacesVideo
_OBJC_IVAR_$_QTCaptureVideoPreviewOutputInternal.isPreviewRunning
_OBJC_IVAR_$_QTCaptureVideoPreviewOutput._internal
_OBJC_IVAR_$_QTCaptureVideoPreviewOutput._delegate
_OBJC_IVAR_$_QTCaptureVideoPreviewOutput._reserved4
_OBJC_IVAR_$_QTCaptureViewInternal.captureSession
_OBJC_IVAR_$_QTCaptureViewInternal.videoPreviewOutput
_OBJC_IVAR_$_QTCaptureViewInternal.availableVideoPreviewConnections
_OBJC_IVAR_$_QTCaptureViewInternal.videoPreviewConnection
_OBJC_IVAR_$_QTCaptureViewInternal.rendererView
_OBJC_IVAR_$_QTCaptureViewInternal.fillColor
_OBJC_IVAR_$_QTCaptureViewInternal.preservesAspectRatio
_OBJC_IVAR_$_QTCaptureViewInternal.latestImageDimensionsFromDelegate
_OBJC_IVAR_$_QTCaptureViewInternal.useDelegateImageAspectRatio
_OBJC_IVAR_$_QTCaptureViewInternal.delegateImageDimensionsLock
_OBJC_IVAR_$_QTCaptureViewInternal.delegate
_OBJC_IVAR_$_QTCaptureViewInternal.delegateLock
_OBJC_IVAR_$_QTCaptureView._internal
_OBJC_IVAR_$_QTCaptureView._reserved1
_OBJC_IVAR_$_QTCaptureView._reserved2
_OBJC_IVAR_$_QTCaptureView._reserved3
_OBJC_IVAR_$_QTCaptureFileOutputInternal.compressionOptions
_OBJC_IVAR_$_QTCaptureFileOutputInternal.maximumVideoSize
_OBJC_IVAR_$_QTCaptureFileOutputInternal.minimumVideoFrameInterval
_OBJC_IVAR_$_QTCaptureFileOutputInternal.maximumRecordedDuration
_OBJC_IVAR_$_QTCaptureFileOutputInternal.maximumRecordedDurationLock
_OBJC_IVAR_$_QTCaptureFileOutputInternal.maximumRecordedFileSize
_OBJC_IVAR_$_QTCaptureFileOutputInternal.maximumRecordedFileSizeLock
_OBJC_IVAR_$_QTCaptureFileOutputInternal.delegateLock
_OBJC_IVAR_$_QTCaptureFileOutput._fileOutputInternal
_OBJC_IVAR_$_QTCaptureFileOutput._delegate
_OBJC_IVAR_$_QTCaptureFileOutput._reserved4
_OBJC_IVAR_$_QTCaptureFileOutput._reserved5
_OBJC_IVAR_$_QTCaptureFileOutput._reserved6
_OBJC_IVAR_$_QTCaptureFileOutputRecordingOperationDescriptor._outputFileURL
_OBJC_IVAR_$_QTCaptureFileOutputRecordingOperationDescriptor._bufferDestination
_OBJC_IVAR_$_QTCaptureFileOutputRecordingOperationDescriptor._pausedLock
_OBJC_IVAR_$_QTCaptureFileOutputRecordingOperationDescriptor._stopError
_OBJC_IVAR_$_QTCaptureFileOutputRecordingOperationDescriptor._paused
_OBJC_IVAR_$_QTCaptureFileOutputRecordingOperationDescriptor._didStartWriting
_OBJC_IVAR_$_QTCaptureFileOutputPauseOperationDescriptor._shouldPause
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._connections
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._mixerUnits
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._decompressorUnits
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._videoFrameRateGovernorUnits
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._compressorUnits
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._fileWriterOutputUnit
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._activeConnectionCount
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.operationDescriptorQueue
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.operationDescriptorQueueLock
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.runningRecordingOperationDescriptor
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.runningRecordingOperationDescriptorLock
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.syncTime
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.syncTimeConnection
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.syncTimeLock
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._timeWritten
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._sizeWritten
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._statsLock
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.wasForcedToPause
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._stopError
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._stopErrorLock
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.activeConnections
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._noDataConnections
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.connectionsLock
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._fileControlCallbackRanSinceLastCheck
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._fileControlCallbackTimedOut
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._fileControlCallbackTimeoutLock
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal._fileControlCallbackTimeoutTimer
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.outputFileURL
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.recordingPaused
_OBJC_IVAR_$_QTCaptureMovieFileOutputInternal.recordingStateLock
_OBJC_IVAR_$_QTCaptureMovieFileOutput._internal
_OBJC_IVAR_$_QTCaptureMovieFileOutput._reserved8
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputCallbackData._output
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputCallbackData._connection
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputCallbackData._backgroundQueue
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputInternal.connections
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputInternal.videoDecompressorUnits
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputInternal.videoFrameRateGovernorUnits
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputInternal.videoToProcsUnits
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputInternal.callbackData
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputInternal.pixelBufferAttributes
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputInternal.minimumVideoFrameInterval
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputInternal.automaticallyDropsLateVideoFrames
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutputInternal.deinterlacesVideo
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutput._internal
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutput._delegate
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutput._reserved4
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutput._reserved5
_OBJC_IVAR_$_QTCaptureDecompressedVideoOutput._reserved6
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutputCallbackData._output
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutputCallbackData._connection
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutputCallbackData._backgroundQueue
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutputInternal.connections
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutputInternal.audioConverterUnits
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutputInternal.audioToProcsUnits
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutputInternal.callbackData
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutputInternal.compressionOptions
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutput._internal
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutput._delegate
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutput._reserved4
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutput._reserved5
_OBJC_IVAR_$_QTCaptureDecompressedAudioOutput._reserved6
_OBJC_IVAR_$_QTCaptureScreenInputInternal.inputUnitNodeDescription
_OBJC_IVAR_$_QTCaptureScreenInputInternal.videoConnection
_OBJC_IVAR_$_QTCaptureScreenInputInternal.minimumVideoFrameInterval
_OBJC_IVAR_$_QTCaptureScreenInputInternal.displayID
_OBJC_IVAR_$_QTCaptureScreenInputInternal.cropRect
_OBJC_IVAR_$_QTCaptureScreenInputInternal.usesMouseClickEffect
_OBJC_IVAR_$_QTCaptureScreenInputInternal.captureTimeScale
_OBJC_IVAR_$_QTCaptureScreenInputInternal.pixelBufferAttributesFromSession
_OBJC_IVAR_$_QTCaptureScreenInputInternal.minimumVideoFrameIntervalFromSession
_OBJC_IVAR_$_QTCaptureScreenInput._internal
_OBJC_IVAR_$_QTCaptureScreenInput._reserved4
_OBJC_IVAR_$_QTCaptureScreenInput._reserved5
_OBJC_IVAR_$_QTCaptureScreenInput._reserved6
_OBJC_IVAR_$_QTMovieModernizerInternal._sourceURL
_OBJC_IVAR_$_QTMovieModernizerInternal._destinationURL
_OBJC_IVAR_$_QTMovieModernizerInternal._outputFormat
_OBJC_IVAR_$_QTMovieModernizerInternal._error
_OBJC_IVAR_$_QTMovieModernizerInternal._status
_OBJC_IVAR_$_QTMovieModernizerInternal._verbose
_OBJC_IVAR_$_QTMovieModernizerInternal._trackProcessArray
_OBJC_IVAR_$_QTMovieModernizerInternal._modernizerProgress
_OBJC_IVAR_$_QTMovieModernizerInternal._setupProgress
_OBJC_IVAR_$_QTMovieModernizerInternal._transcodeProgress
_OBJC_IVAR_$_QTMovieModernizerInternal._writeOutAssetProgress
_OBJC_IVAR_$_QTMovieModernizerInternal._formatReader
_OBJC_IVAR_$_QTMovieModernizerInternal._byteStream
_OBJC_IVAR_$_QTMovieModernizerInternal._trackList
_OBJC_IVAR_$_QTMovieModernizerInternal._trackRefDict
_OBJC_IVAR_$_QTMovieModernizerInternal._sourceTrackGroups
_OBJC_IVAR_$_QTMovieModernizerInternal._sourceReader
_OBJC_IVAR_$_QTMovieModernizerInternal._destinationWriter
_OBJC_IVAR_$_QTMovieModernizerInternal._loaderQueue
_OBJC_IVAR_$_QTMovieModernizerInternal._completionQueue
_OBJC_IVAR_$_QTMovieModernizerInternal._sourceTimeScale
_OBJC_IVAR_$_QTMovieModernizerInternal._legacyURL
_OBJC_IVAR_$_QTMovieModernizerInternal._internalOutputFormat
_OBJC_IVAR_$_QTMovieModernizerInternal._durationInSeconds
_OBJC_IVAR_$_QTMovieModernizerInternal._sourceVideoCodecType
_OBJC_IVAR_$_QTMovieModernizerInternal._sourceNeedsModernization
_OBJC_IVAR_$_QTMovieModernizer._internal
_OBJC_IVAR_$_QTMovieModernizerTrack._legacyQTURL
_OBJC_IVAR_$_QTMovieModernizerTrack._sourceAsset
_OBJC_IVAR_$_QTMovieModernizerTrack._sourceID
_OBJC_IVAR_$_QTMovieModernizerTrack._sourceTimeScale
_OBJC_IVAR_$_QTMovieModernizerTrack._sourceDataRate
_OBJC_IVAR_$_QTMovieModernizerTrack._sourceTrackMetadata
_OBJC_IVAR_$_QTMovieModernizerTrack._timeRange
_OBJC_IVAR_$_QTMovieModernizerTrack._completedDataBytesRead
_OBJC_IVAR_$_QTMovieModernizerTrack._trackProgress
_OBJC_IVAR_$_QTMovieModernizerTrack._sourceTrack
_OBJC_IVAR_$_QTMovieModernizerTrack._modernizer
_OBJC_IVAR_$_QTMovieModernizerTrack._sourceMediaType
_OBJC_IVAR_$_QTMovieModernizerTrack._sourceTrackIsEnabled
_OBJC_IVAR_$_QTMovieModernizerTrack._sourceMediaSubType
_OBJC_IVAR_$_QTMovieModernizerTrack._readerOutput
_OBJC_IVAR_$_QTMovieModernizerTrack._writerInput
_OBJC_IVAR_$_QTMovieModernizerTrack._sourceBufferCount
_OBJC_IVAR_$_QTMovieModernizerTrack._outputBufferCount
_OBJC_IVAR_$_QTMovieModernizerTrack._legacyQTAssetReader
_OBJC_IVAR_$_QTMovieModernizerTrack._cmaTrackProgress
_OBJC_IVAR_$_QTMovieModernizerTrack._updateProgressTimer
_OBJC_IVAR_$_QTMovieModernizerTrack._cmaSessionRef
_OBJC_IVAR_$_QTMovieModernizerLegacyMP3Track._legacyMP3URL
_OBJC_IVAR_$_QTMovieModernizerLegacyMP3Track._legacyMP3AssetReader
_OBJC_IVAR_$_QTMovieLayerPrivate.consumer
_OBJC_IVAR_$_QTMovieLayerPrivate.movie
_OBJC_IVAR_$_QTMovieLayerPrivate.subtitleLayer
_OBJC_IVAR_$_QTMovieLayerPrivate.closedCaptionLayer
_OBJC_IVAR_$_QTMovieLayer._movieLayerPriv
_OBJC_IVAR_$_QTMediaIOGraphNodeList._count
_OBJC_IVAR_$_QTMediaIOGraphNodeList._nodes
_OBJC_IVAR_$_QTMediaIOGraphUnitDescription._graph
_OBJC_IVAR_$_QTMediaIOGraphUnitDescription._graphNode
_OBJC_IVAR_$_QTCaptureOperationDescriptorQueueItem._operationDescriptor
_OBJC_IVAR_$_QTCaptureOperationDescriptorQueueItem._operationTime
_OBJC_IVAR_$_QTCaptureOperationDescriptorQueue._operationDescriptorQueueItems
_OBJC_IVAR_$_QTCaptureDALDevice._uniqueID
_OBJC_IVAR_$_QTCaptureDALDevice._attributes
_OBJC_IVAR_$_QTCaptureDALDevice._attributesLock
_OBJC_IVAR_$_QTCaptureDALDevice._automaticallyAdjustsFeatureControls
_OBJC_IVAR_$_QTCaptureDALDevice._deviceID
_OBJC_IVAR_$_QTCaptureDALDevice._formatDescriptions
_OBJC_IVAR_$_QTCaptureDALDevice._localizedDisplayName
_OBJC_IVAR_$_QTCaptureDALDevice._modelUniqueID
_OBJC_IVAR_$_QTCaptureDALDevice._flags
_OBJC_IVAR_$_QTCaptureDALDevice._deviceAVCControllsPoller
_OBJC_IVAR_$_QTCaptureDeviceInternal._openRefCount
_OBJC_IVAR_$_QTCaptureDeviceInternal._usingDevice
_OBJC_IVAR_$_QTCaptureDeviceInternal.linkedDevices
_OBJC_IVAR_$_QTCaptureDevice._internal
_OBJC_IVAR_$_QTCaptureDevice._reserved1
_OBJC_IVAR_$_QTCaptureDevice._reserved2
_OBJC_IVAR_$_QTCaptureDevice._reserved3
_OBJC_IVAR_$_QTCaptureHALDevice._uniqueID
_OBJC_IVAR_$_QTCaptureHALDevice._IOType
_OBJC_IVAR_$_QTCaptureHALDevice._attributes
_OBJC_IVAR_$_QTCaptureHALDevice._attributesLock
_OBJC_IVAR_$_QTCaptureHALDevice._deviceID
_OBJC_IVAR_$_QTCaptureHALDevice._formatDescriptions
_OBJC_IVAR_$_QTCaptureHALDevice._localizedDisplayName
_OBJC_IVAR_$_QTCaptureHALDevice._modelUniqueID
_OBJC_IVAR_$_QTCaptureVideoPreviewRenderHelper._visualContext
_OBJC_IVAR_$_QTCaptureVideoPreviewRenderHelper._videoPreviewOutput
_OBJC_IVAR_$_QTCaptureVideoPreviewRenderHelper._connection
_OBJC_IVAR_$_QTCaptureVideoPreviewRenderHelper._fanOut
_OBJC_IVAR_$_QTCaptureVideoPreviewRenderHelper._imageProvider
_OBJC_IVAR_$_QTCaptureVideoPreviewRenderHelper._currentAttributes
_OBJC_IVAR_$_QTCaptureVideoPreviewRenderHelper._basePixelBufferAttributes
_OBJC_IVAR_$_QTCaptureVideoPreviewRenderHelper._delegate
_OBJC_IVAR_$_QTCaptureConnectionInternal.owner
_OBJC_IVAR_$_QTCaptureConnectionInternal.graph
_OBJC_IVAR_$_QTCaptureConnectionInternal.node
_OBJC_IVAR_$_QTCaptureConnectionInternal.element
_OBJC_IVAR_$_QTCaptureConnectionInternal.scope
_OBJC_IVAR_$_QTCaptureConnectionInternal.extendedNodeInfo
_OBJC_IVAR_$_QTCaptureConnectionInternal.mediaType
_OBJC_IVAR_$_QTCaptureConnectionInternal.formatDescription
_OBJC_IVAR_$_QTCaptureConnectionInternal.attributes
_OBJC_IVAR_$_QTCaptureConnectionInternal.attributeChangeRefCounts
_OBJC_IVAR_$_QTCaptureConnectionInternal.enabled
_OBJC_IVAR_$_QTCaptureConnection._internal
_OBJC_IVAR_$_QTCaptureConnection._reserved1
_OBJC_IVAR_$_QTCaptureConnection._reserved2
_OBJC_IVAR_$_QTCaptureConnection._reserved3
_OBJC_IVAR_$_QTCaptureInput._session
_OBJC_IVAR_$_QTCaptureInput._reserved1
_OBJC_IVAR_$_QTCaptureInput._reserved2
_OBJC_IVAR_$_QTCaptureInput._reserved3
_OBJC_IVAR_$_QTCaptureOutput._session
_OBJC_IVAR_$_QTCaptureOutput._reserved1
_OBJC_IVAR_$_QTCaptureOutput._reserved2
_OBJC_IVAR_$_QTCaptureOutput._reserved3
_OBJC_IVAR_$_QTCaptureSessionInternal.inputs
_OBJC_IVAR_$_QTCaptureSessionInternal.outputs
_OBJC_IVAR_$_QTCaptureSessionInternal.outputToInputConnections
_OBJC_IVAR_$_QTCaptureSessionInternal.outputToMixerConnections
_OBJC_IVAR_$_QTCaptureSessionInternal.activeConnections
_OBJC_IVAR_$_QTCaptureSessionInternal.stopError
_OBJC_IVAR_$_QTCaptureSessionInternal.running
_OBJC_IVAR_$_QTCaptureSessionInternalState._graph
_OBJC_IVAR_$_QTCaptureSessionInternalState._supportUnitsForConnections
_OBJC_IVAR_$_QTCaptureSessionInternalState._hasAudioMixerNode
_OBJC_IVAR_$_QTCaptureSessionInternalState._audioMixerNode
_OBJC_IVAR_$_QTCaptureSessionInternalState._hasAudioMixerFanOutNode
_OBJC_IVAR_$_QTCaptureSessionInternalState._audioMixerFanOutNode
_OBJC_IVAR_$_QTCaptureSessionInternalState._masterSynchronizerSet
_OBJC_IVAR_$_QTCaptureSessionInternalState._candidateMasterSynchronizerNode
_OBJC_IVAR_$_QTCaptureSession._internal
_OBJC_IVAR_$_QTCaptureSession._internalState
_OBJC_IVAR_$_QTCaptureSession._reserved1
_OBJC_IVAR_$_QTCaptureSession._reserved2
_OBJC_IVAR_$_QTCaptureSession._reserved3
_OBJC_IVAR_$_QTCaptureLayerPrivate._session
_OBJC_IVAR_$_QTCaptureLayerPrivate._videoPreviewOutput
_OBJC_IVAR_$_QTCaptureLayerPrivate._availableVideoPreviewConnections
_OBJC_IVAR_$_QTCaptureLayerPrivate._videoPreviewConnection
_OBJC_IVAR_$_QTCaptureLayerPrivate._renderer
_OBJC_IVAR_$_QTCaptureLayer._captureLayerPriv
_OBJC_IVAR_$_QTGarbageCollectedWeakReference._referencedObject
_OBJC_IVAR_$_QTGarbageCollectedWeakReference._cachedReferencedObjectDescription
_OBJC_IVAR_$_QTRetainReleaseWeakReference._cachedReferencedObjectDescription
_OBJC_IVAR_$_QTRetainReleaseWeakReference._weakStorage
_OBJC_IVAR_$_QTPixelBufferConverter._internal
_OBJC_IVAR_$_QTImageBufferConformer._imageBufferAttributes
_OBJC_IVAR_$_QTImageBufferConformer._converter
_OBJC_IVAR_$_QTImageBufferQueue._internal
_OBJC_IVAR_$_QTFigTimeImageQueue._internal
_OBJC_IVAR_$_QTRunLoopSchedulingSetCallbackInfo._selector
_OBJC_IVAR_$_QTRunLoopSchedulingSetCallbackInfo._target
_OBJC_IVAR_$_QTRunLoopSchedulingSetCallbackInfo._argument
_OBJC_IVAR_$_QTRunLoopSchedulingSet._schedulingSet
_OBJC_IVAR_$_QTRunLoopSchedulingSet._reserved
_OBJC_IVAR_$_QTOpenGLContext._pixelFormat
_OBJC_IVAR_$_QTOpenGLContext._context
_OBJC_IVAR_$_QTOpenGLContext._device
_OBJC_IVAR_$_QTOpenGLTextureCache._graphicsDevice
_OBJC_IVAR_$_QTOpenGLTextureCache._cvTextureCache
_OBJC_IVAR_$_QTOpenGLTextureCache._mutex
_OBJC_IVAR_$_QTOpenGLTextureCacheTextureTile._textureCache
_OBJC_IVAR_$_QTOpenGLTextureCacheTextureTile._imageBuffer
_OBJC_IVAR_$_QTOpenGLTextureCacheTextureTile._texture
_OBJC_IVAR_$_QTOpenGLTextureCacheTextureTile._filterImage
_OBJC_IVAR_$_QTOpenGLTextureCacheTextureTile._filterImageOptions
_OBJC_IVAR_$_QTOpenGLTextureCacheTextureTile._mutex
_OBJC_IVAR_$_QTOpenGLTextureCacheTextureTile._lockCount
_OBJC_IVAR_$_QTOpenGLTextureCacheTexture._tile
_OBJC_IVAR_$_QTImageConsumerFanOut._consumers
_OBJC_IVAR_$_QTImageConsumerFanOut._consumerLock
_OBJC_IVAR_$_QTImageConsumerFanOut._attributes
_OBJC_IVAR_$_QTImageConsumerFanOut._attributesLock
_OBJC_IVAR_$_QTImageConsumerFanOut._queue
_OBJC_IVAR_$_QTImageConsumerFanOut._liveConsumers
_OBJC_IVAR_$_QTImageConsumerFanOut._queueLock
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.timebaseLock
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.imageConsumerLock
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.delegateLock
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.mutex
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.pendingImageTimes
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.lastNonZeroDirection
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.highWater
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.lowWater
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.inFlightImages
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.replayImages
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.inFlightFlushSourceNeedsScheduling
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.runLoopExistenceCondition
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.mostRecentlyDisplayedImageBuffer
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.visualContext
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.timebase
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.imageConsumer
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.delegate
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.needToFlush
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.mostRecentlyDisplayedImageTime
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.runLoop
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.workLoopTimer
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.flushSource
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.inFlightImageDumpSource
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.mostRecentlyDisplayedImageReenqueueSource
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.workLoopSource
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.inFlightFlushSource
_OBJC_IVAR_$_QTFigVisualContextImageProviderInternal.stopRunLoopSource
_OBJC_IVAR_$_QTFigVisualContextImageProvider._internal
_OBJC_IVAR_$_QTLogRenderer._queue
_OBJC_IVAR_$_QTLogRenderer._name
_OBJC_IVAR_$_QTCALayerRendererState.workLoopLock
_OBJC_IVAR_$_QTCALayerRendererState.pendingImageQRunLoopMutex
_OBJC_IVAR_$_QTCALayerRendererState.pendingImageQRunLoopCondition
_OBJC_IVAR_$_QTCALayerRendererState.pendingImageQRunLoop
_OBJC_IVAR_$_QTCALayerRendererState.pendingImageQHostTimeRunLoopSource
_OBJC_IVAR_$_QTCALayerRendererState.pendingBufferQueue
_OBJC_IVAR_$_QTCALayerRendererState.caImageQueueBoss
_OBJC_IVAR_$_QTCALayerRendererState.pendingImageQRunLoopSource
_OBJC_IVAR_$_QTCALayerRendererState.pendingImageQStopRunLoopSource
_OBJC_IVAR_$_QTCALayerRendererState.haveSignaledWorkLoop
_OBJC_IVAR_$_QTCALayerRendererState.flushTime
_OBJC_IVAR_$_QTCALayerRenderer._state
_OBJC_IVAR_$_QTCALayerRenderer._preferredAttributes
_OBJC_IVAR_$_QTCALayerRenderer._layer
_OBJC_IVAR_$_QTCALayerRenderer._preferredAttributesLock
_OBJC_IVAR_$_QTCAImageQueueBoss._caImageQueue
_OBJC_IVAR_$_QTCAImageQueueBoss._enqueuedImages
_OBJC_IVAR_$_QTCAImageQueueBoss._requiredAttributes
_OBJC_IVAR_$_QTCAImageQueueBoss._imageBufferConformer
_OBJC_IVAR_$_QTCAImageQueueBoss._pixelBufferRegistrationDictionary
_OBJC_IVAR_$_QTCAImageQueueBoss._pixelBufferRegistrationDictionaryLock
_OBJC_IVAR_$_QTCAImageQueueBoss._caImageQueueLock
_OBJC_IVAR_$_QTCAImageQueueBoss._enqueuedImagesLock
_OBJC_IVAR_$_QTCAImageQueueBoss._filterContext
_OBJC_IVAR_$_QTCAImageQueueBoss._glContext
_OBJC_IVAR_$_QTCAImageQueueBoss._hasCARenderingContext
_OBJC_IVAR_$_QTCAImageQueueBoss._qtImageConsumerDelegate
_OBJC_IVAR_$_QTCAImageQueueBoss._renderer
_OBJC_IVAR_$_QTCAImageQueueBoss._bufferPool
_OBJC_IVAR_$_QTCAImageQueueBoss._qtImageConsumerDelegateLock
_OBJC_IVAR_$_QTCGContextRendererInternal.runLoopSchedulingSet
_OBJC_IVAR_$_QTCGContextRendererInternal.runLoopSchedulingSetLock
_OBJC_IVAR_$_QTCGContextRendererInternal.imageBufferQueue
_OBJC_IVAR_$_QTCGContextRendererInternal.imageBufferQueueLock
_OBJC_IVAR_$_QTCGContextRendererInternal.targetWidth
_OBJC_IVAR_$_QTCGContextRendererInternal.targetHeight
_OBJC_IVAR_$_QTCGContextRendererInternal.targetDimensionsLock
_OBJC_IVAR_$_QTCGContextRendererInternal.imageBufferConformer
_OBJC_IVAR_$_QTCGContextRendererInternal.currentImage
_OBJC_IVAR_$_QTCGContextRendererInternal.currentImageBuffer
_OBJC_IVAR_$_QTCGContextRendererInternal.lastContext
_OBJC_IVAR_$_QTCGContextRendererInternal.currentImageLock
_OBJC_IVAR_$_QTCGContextRenderer._internal
_OBJC_IVAR_$_QTCGContextRenderer._reserved
_OBJC_IVAR_$_QTSurfaceRendererTileDescription._surfaceRect
_OBJC_IVAR_$_QTSurfaceRendererTileDescription._colorSpace
_OBJC_IVAR_$_QTSurfaceRendererTileDescription._graphicsDevice
_OBJC_IVAR_$_QTSurfaceRenderer._renderLock
_OBJC_IVAR_$_QTSurfaceRenderer._queueLock
_OBJC_IVAR_$_QTSurfaceRenderer._lastRenderTime
_OBJC_IVAR_$_QTSurfaceRenderer._scheduledDisplayTime
_OBJC_IVAR_$_QTSurfaceRenderer._imageQueue
_OBJC_IVAR_$_QTSurfaceRenderer._timeQueue
_OBJC_IVAR_$_QTSurfaceRenderer._scheduledDisplayCallbackTime
_OBJC_IVAR_$_QTSurfaceRenderer._scheduledDisplaySource
_OBJC_IVAR_$_QTSurfaceRenderer._tiles
_OBJC_IVAR_$_QTSurfaceRenderer._activeConfig
_OBJC_IVAR_$_QTSurfaceRenderer._configCount
_OBJC_IVAR_$_QTSurfaceRenderer._modelConfig
_OBJC_IVAR_$_QTSurfaceRenderer._preferredAttributes
_OBJC_IVAR_$_QTSurfaceRenderer._preferredAttributesLock
_OBJC_IVAR_$_QTSurfaceRenderer._rootDescriptions
_OBJC_IVAR_$_QTSurfaceRenderer._tileDescriptions
_OBJC_IVAR_$_QTSurfaceRenderer._runloopCondition
_OBJC_IVAR_$_QTSurfaceRenderer._flags
_OBJC_IVAR_$_QTSurfaceRenderer._scheduledDisplayRunLoop
_OBJC_IVAR_$_QTSurfaceRenderer._qtSurfaceRendererIntermediateDelegateRenderer
_OBJC_IVAR_$_QTSurfaceRenderer._qtImageConsumerDelegateLock
_OBJC_IVAR_$_QTSurfaceRenderer._qtImageConsumerDelegate
_OBJC_IVAR_$_QTSurfaceRendererTile._surfaceID
_OBJC_IVAR_$_QTSurfaceRendererTile._connectionID
_OBJC_IVAR_$_QTSurfaceRendererTile._windowID
_OBJC_IVAR_$_QTSurfaceRendererTile._colorSpace
_OBJC_IVAR_$_QTSurfaceRendererTile._forcedContentColorSpace
_OBJC_IVAR_$_QTSurfaceRendererTile._contentBackgroundColor
_OBJC_IVAR_$_QTSurfaceRendererTile._imageBuffer
_OBJC_IVAR_$_QTSurfaceRendererTile._surfaceVisible
_OBJC_IVAR_$_QTSurfaceRendererTile._surfaceRect
_OBJC_IVAR_$_QTSurfaceRendererTile._contentRect
_OBJC_IVAR_$_QTSurfaceRendererTile._surfaceOpaque
_OBJC_IVAR_$_QTSurfaceRendererAcceleratedTile._glContext
_OBJC_IVAR_$_QTSurfaceRendererAcceleratedTile._canUseCoreImage
_OBJC_IVAR_$_QTSurfaceRendererAcceleratedTile._config
_OBJC_IVAR_$_QTSurfaceRendererAcceleratedTile._filterContext
_OBJC_IVAR_$_QTSurfaceRendererAcceleratedTile._glTexture
_OBJC_IVAR_$_QTSurfaceRendererSoftwareTile._backBufferContext
_OBJC_IVAR_$_QTSurfaceRendererSoftwareTile._backBufferConnectionID
_OBJC_IVAR_$_QTSurfaceRendererSoftwareTile._backBufferWindowID
_OBJC_IVAR_$_QTSurfaceRendererSoftwareTile._lastRenderedImageBuffer
_OBJC_IVAR_$_QTSurfaceRendererSoftwareTile._image
_OBJC_IVAR_$_QTSurfaceRendererSoftwareTile._lastRenderedBackgroundColor
_OBJC_IVAR_$_QTSurfaceRendererSoftwareTile._backBufferDimensions
_OBJC_IVAR_$_QTIMAVManagerImageConsumer._name
_OBJC_IVAR_$_QTIMAVManagerImageConsumer._delegate
_OBJC_IVAR_$_QTSurfaceRendererIntermediateDelegateRenderer._surfaceRenderer
_OBJC_IVAR_$_QTSurfaceRendererIntermediateDelegateRenderer._device
_OBJC_IVAR_$_QTSurfaceRendererIntermediateDelegateRenderer._filterContext
_OBJC_IVAR_$_QTSurfaceRendererIntermediateDelegateRenderer._bufferPool
_OBJC_IVAR_$_QTSurfaceRendererIntermediateDelegateRenderer._glContext
_OBJC_IVAR_$_QTMovieFigVisualContextRenderHelper._mediaHelper
_OBJC_IVAR_$_QTMovieFigVisualContextRenderHelper._visualContext
_OBJC_IVAR_$_QTMovieFigVisualContextRenderHelper._imageProvider
_OBJC_IVAR_$_QTMovieGWorldRendererView._movieBackgroundColor
_OBJC_IVAR_$_QTMovieGWorldRendererView._stubImageConsumer
_OBJC_IVAR_$_QTMovieGWorldRendererView._sharedWindowNumber
_OBJC_IVAR_$_QTMovieGWorldRendererView._movie
_OBJC_IVAR_$_StdMovieUIController._suspendPlayheadUpdates
_OBJC_IVAR_$_StdMovieUIController.theMovie
_OBJC_IVAR_$_StdMovieUIController.movieUI
_OBJC_IVAR_$_StdMovieUIController._playHeadTimer
_OBJC_IVAR_$_StdMovieUIController._cachedMovieLoadState
_OBJC_IVAR_$_StdMovieUIController.movieScreen
_OBJC_IVAR_$_StdMovieUIController._updateFrequency
_OBJC_IVAR_$_QTKitMovieControllerView._uiController
_OBJC_IVAR_$_QTKitMovieControllerView._volumeButton
_OBJC_IVAR_$_QTKitMovieControllerView._playOrPauseButton
_OBJC_IVAR_$_QTKitMovieControllerView._movieSlider
_OBJC_IVAR_$_QTKitMovieControllerView._reverseButton
_OBJC_IVAR_$_QTKitMovieControllerView._forwardButton
_OBJC_IVAR_$_QTKitMovieControllerView._chapterPopup
_OBJC_IVAR_$_QTKitMovieControllerView._customMenuButton
_OBJC_IVAR_$_QTKitMovieControllerView._growButton
_OBJC_IVAR_$_QTKitMovieControllerView._fillerImage
_OBJC_IVAR_$_QTKitMovieControllerView._statusMessage
_OBJC_IVAR_$_QTKitMovieControllerView._growDesired
_OBJC_IVAR_$_QTKitMovieControllerView._customDesired
_OBJC_IVAR_$_QTKitMovieControllerView._volumeDesired
_OBJC_IVAR_$_QTKitMovieControllerView._chapterDesired
_OBJC_IVAR_$_QTKitMovieControllerView._steppersDesired
_OBJC_IVAR_$_QTKitMovieControllerView._enabled
_OBJC_IVAR_$_QTKitMovieControllerView._editable
_OBJC_IVAR_$_QTKitMovieControllerView._barWidget
_OBJC_IVAR_$_QTKitMovieControllerView._minWidthForUI
_OBJC_IVAR_$_QTKitMovieControllerView._minWidthForVolumeButton
_OBJC_IVAR_$_QTKitMovieControllerView._minWidthForSlider
_OBJC_IVAR_$_QTKitMovieControllerView._minWidthForFwdRevButtons
_OBJC_IVAR_$_QTKitMovieControllerView._minWidthForChapter
_OBJC_IVAR_$_QTKitMovieControllerView._registeredForNotifications
_OBJC_IVAR_$_StdMovieUIVolumeButton._muted
_OBJC_IVAR_$_StdMovieUIVolumeButton._currentImageIndex
_OBJC_IVAR_$_StdMovieUIVolumeButton._currentVolume
_OBJC_IVAR_$_StdMovieUIVolumeButton._volumeSlider
_OBJC_IVAR_$_StdMovieUIPlayPauseButton._playSelector
_OBJC_IVAR_$_StdMovieUIPlayPauseButton._pauseSelector
_OBJC_IVAR_$_StdMovieUIPlayPauseButton._isPlaying
_OBJC_IVAR_$_StdMovieUICustomMenuButton._menu
_OBJC_IVAR_$_StdMovieUIFastButton.behaviorTarget
_OBJC_IVAR_$_StdMovieUIFastButton.mouseInAction
_OBJC_IVAR_$_StdMovieUIFastButton.mouseOutAction
_OBJC_IVAR_$_StdMovieUIFastButton.basicAction
_OBJC_IVAR_$_StdMovieUIFastButton.numRepeats
_OBJC_IVAR_$_StdMovieUIFastButtonCell.doBehaviors
_OBJC_IVAR_$_StdMovieUISliderCell._curValue
_OBJC_IVAR_$_StdMovieUISliderCell._selectionStart
_OBJC_IVAR_$_StdMovieUISliderCell._selectionEnd
_OBJC_IVAR_$_StdMovieUISliderCell._selectionChanged
_OBJC_IVAR_$_StdMovieUISliderCell._selecting
_OBJC_IVAR_$_StdMovieUISliderCell._editable
_OBJC_IVAR_$_StdMovieUISliderCell._loadedPercentage
_OBJC_IVAR_$_StdMovieUISliderCell._trackingRect
_OBJC_IVAR_$_StdMovieUISliderCell._isPressed
_OBJC_IVAR_$_StdMovieUITextItem._backgroundImage
_OBJC_IVAR_$_StdMovieUITextItem._titleAttributes
_OBJC_IVAR_$_StdMovieUITextItem._titleAttributedString
_OBJC_IVAR_$_StdMovieUIChapterPopup._chapterList
_OBJC_IVAR_$_StdMovieUIChapterPopup._actionTarget
_OBJC_IVAR_$_StdMovieUIChapterPopup._theAction
_OBJC_IVAR_$_StdMovieUIChapterPopup._chapterMenu
_OBJC_IVAR_$_StdMovieUIChapterPopup._enabled
_OBJC_IVAR_$_StdMovieUIChapterPopup._currentIndex
_OBJC_IVAR_$_StdMovieUIVolumeSliderPopupView._value
_OBJC_IVAR_$_StdMovieUIVolumeSliderPopupView._minValue
_OBJC_IVAR_$_StdMovieUIVolumeSliderPopupView._maxValue
_OBJC_IVAR_$_StdMovieUIVolumeSliderPopupView.oldbounds
_OBJC_IVAR_$_StdMovieUIVolumeSliderPopupView.bgRect
_OBJC_IVAR_$_StdMovieUIVolumeSliderPopupView.knobRect
_OBJC_IVAR_$_StdMovieUIVolumeSliderPopupView._continuous
_OBJC_IVAR_$_StdMovieUIVolumeSliderPopupView._target
_OBJC_IVAR_$_StdMovieUIVolumeSliderPopupView._action
_OBJC_IVAR_$_QTMoviePlaybackController._internal
_OBJC_IVAR_$_QTHUDTimeFormatter._aux
_OBJC_IVAR_$_QTHUDBackgroundView._QTHUDBackgroundViewInternal
_OBJC_IVAR_$_QTHUDButton._QTHUDButtonInternal
_OBJC_IVAR_$_QTHUDButtonCell._QTHUDButtonCellInternal
_OBJC_IVAR_$_QTHUDGroupViewItem._minSize
_OBJC_IVAR_$_QTHUDGroupViewItem._maxSize
_OBJC_IVAR_$_QTHUDGroupViewItem._view
_OBJC_IVAR_$_QTHUDGroupViewItem._groupView
_OBJC_IVAR_$_QTHUDGroupViewItem._flags
_OBJC_IVAR_$_QTHUDGroupViewItem._observationInfo
_OBJC_IVAR_$_QTHUDGroupViewItem._margins
_OBJC_IVAR_$_QTHUDGroupView._items
_OBJC_IVAR_$_QTHUDGroupView._viewItemMap
_OBJC_IVAR_$_QTHUDGroupView._observer
_OBJC_IVAR_$_QTHUDSlider._QTHUDSliderInternal
_OBJC_IVAR_$_QTHUDSliderCell._currentValue
_OBJC_IVAR_$_QTHUDSliderCell._minValue
_OBJC_IVAR_$_QTHUDSliderCell._maxValue
_OBJC_IVAR_$_QTHUDSliderCell._cellFrameForTrackingMousePtr
_OBJC_IVAR_$_QTHUDTimeline._delegate
_OBJC_IVAR_$_QTHUDTimelineCell._internal
_OBJC_IVAR_$_QTSubtitleLayer.renderer
_OBJC_IVAR_$_QTSubtitleRenderer.subtitleRenderer
_OBJC_IVAR_$_QTSubtitleRenderer.attribString
_OBJC_IVAR_$_QTDataReference._proxy
_OBJC_IVAR_$_QTDataReference._reserved1
_OBJC_IVAR_$_QTDataReference._reserved2
_OBJC_IVAR_$_QTDataReference._reserved3
_OBJC_IVAR_$_QTMovie_QuickTime._proxy
_OBJC_IVAR_$_QTMovie_QuickTime._renderHelper
_OBJC_IVAR_$_QTMovie_QuickTime._flags
_OBJC_IVAR_$_QTMovie_QuickTime._limitReadAhead
_OBJC_IVAR_$_QTMovie_QuickTime._colorSpace
_OBJC_IVAR_$_QTKitServerController._objectList
_OBJC_IVAR_$_QTKitServerController._serverQueue
_OBJC_IVAR_$_QTKitServerController._serverLifespanLock
_OBJC_IVAR_$_QTKitServerController._objectListLock
_OBJC_IVAR_$_QTKitServerController._serverPortListLock
_OBJC_IVAR_$_QTKitServerController._serverKillGracePeriod
_OBJC_IVAR_$_QTKitServerController._logServerLifespan
_OBJC_IVAR_$_QTKitServerController._logServerUseCount
_OBJC_IVAR_$_QTKitServerController._serverConnection
_OBJC_IVAR_$_QTKitServerController._serverPort
_OBJC_IVAR_$_QTKitServerController._delegatePort
_OBJC_IVAR_$_QTKitServerController._notifierPort
_OBJC_IVAR_$_QTKitServerController._delegateThread
_OBJC_IVAR_$_QTKitServerController._notifierThread
_OBJC_IVAR_$_QTKitServerController._delegateRunloop
_OBJC_IVAR_$_QTKitServerController._notifierRunloop
_OBJC_IVAR_$_QTKitServerController._serverUseCount
_OBJC_IVAR_$_QTKitServerController._serverKillGracePeriodTimer
_OBJC_IVAR_$_QTMedia._proxy
_OBJC_IVAR_$_QTMedia._track
_OBJC_IVAR_$_QTMedia._flags
_OBJC_IVAR_$_QTNotificationListenerThreadData.condition
_OBJC_IVAR_$_QTNotificationListenerThreadData.machPort
_OBJC_IVAR_$_QTNotificationListenerThreadData.threadFullySetUp
_OBJC_IVAR_$_QTNotificationController._messagePort
_OBJC_IVAR_$_QTNotificationController._sharedAddr
_OBJC_IVAR_$_QTNotificationController._sharedSize
_OBJC_IVAR_$_QTNotificationController._sharedName
_OBJC_IVAR_$_QTNotificationController._reserved1
_OBJC_IVAR_$_QTNotificationController._reserved2
_OBJC_IVAR_$_QTNotificationController._reserved3
_OBJC_IVAR_$_QTNotificationController._reserved4
_OBJC_IVAR_$_QTDelegateListenerThreadData.condition
_OBJC_IVAR_$_QTDelegateListenerThreadData.machPort
_OBJC_IVAR_$_QTDelegateListenerThreadData.threadFullySetUp
_OBJC_IVAR_$_QTDelegateController._messagePort
_OBJC_IVAR_$_QTDelegateController._sharedAddr
_OBJC_IVAR_$_QTDelegateController._delegate
_OBJC_IVAR_$_QTDelegateController._returnedObject
_OBJC_IVAR_$_QTDelegateController._tempServerPort
_OBJC_IVAR_$_QTDelegateController._returnedBOOL
_OBJC_IVAR_$_QTDelegateController._sharedSize
_OBJC_IVAR_$_QTDelegateController._sharedName
_OBJC_IVAR_$_QTDelegateController._returnedAddr
_OBJC_IVAR_$_QTDelegateController._returnedSize
_OBJC_IVAR_$_QTDelegateController._archivedSize
_OBJC_IVAR_$_QTDelegateController._returnedName
_OBJC_IVAR_$_QTDelegateController._origServerPort
_OBJC_IVAR_$_QTDelegateController._reserved1
_OBJC_IVAR_$_QTDelegateController._reserved2
_OBJC_IVAR_$_QTDelegateController._reserved3
_OBJC_IVAR_$_QTDelegateController._reserved4
_OBJC_IVAR_$_QTMachPortImageProviderData.port
_OBJC_IVAR_$_QTMachPortImageProviderData.imageConsumer
_OBJC_IVAR_$_QTMachPortImageProviderData.imageSenderPort
_OBJC_IVAR_$_QTMachPortImageProviderData.imageSenderContext
_OBJC_IVAR_$_QTMachPortImageProviderData.replyMachPort
_OBJC_IVAR_$_QTMachPortImageProviderData.imageReceiverPort
_OBJC_IVAR_$_QTMachPortImageProviderData.workRunLoop
_OBJC_IVAR_$_QTMachPortImageProviderData.workRunLoopAvailableCondition
_OBJC_IVAR_$_QTMachPortImageProviderData.stopRunLoopSource
_OBJC_IVAR_$_QTMachPortImageProviderData.done
_OBJC_IVAR_$_QTMachPortImageProviderData.imageBufferUnarchiver
_OBJC_IVAR_$_QTMachPortImageProvider._data
_OBJC_IVAR_$_QTMovieMachPortRenderHelper._mediaHelper
_OBJC_IVAR_$_QTMovieMachPortRenderHelper._imageProvider
_OBJC_IVAR_$_QTRemoteCVImageBufferUnarchiver._openGLBufferPool
_OBJC_IVAR_$_QTRemoteCVImageBufferUnarchiver._openGLContext
_OBJC_IVAR_$_QTCALayerRendererView._backingLayer
_OBJC_IVAR_$_QTCALayerRendererViewBackingLayer._consumer
_OBJC_IVAR_$_QTCGContextRendererView._imageConsumer
_OBJC_IVAR_$_QTSurfaceRendererView._renderer
_OBJC_IVAR_$_QTSurfaceRendererView._flags
_OBJC_IVAR_$_QTSurfaceRendererView._bgColor
_OBJC_IVAR_$_QTSurfaceRendererView._inRenewGState
_OBJC_IVAR_$_QTMoviePlaybackControllerMovieProxy._internal
_OBJC_IVAR_$_QTMoviePlaybackControllerMovieProxy._properties
_OBJC_IVAR_$_QTMoviePlaybackControllerMovieProxy._configuration
_OBJC_IVAR_$_QTMoviePlaybackControllerSelection._flags
_OBJC_IVAR_$_QTMoviePlaybackControllerSelection._currentTimeTimer
_OBJC_IVAR_$_QTMoviePlaybackControllerSelection._currentTimeUpdateFrequency
_OBJC_IVAR_$_QTMoviePlaybackControllerSelection._currentTimeTimerInterval
_OBJC_IVAR_$_QTMoviePlaybackControllerSelection._currentTime
_OBJC_IVAR_$_QTMoviePlaybackControllerSelection._setValueForKeyDepth
_OBJC_IVAR_$_QTKeyValueProxy._target
_OBJC_IVAR_$_QTKeyValueProxy._proxiedKeysTriggeredByNonProxiedKeysTable
_OBJC_IVAR_$_QTKeyValueProxy._proxiedKeysAnalyzedForTriggers
_OBJC_IVAR_$_QTKeyValueProxy._observedProxiedKeys
_OBJC_IVAR_$_QTHUDTimerNonRetainedTarget._target
_OBJC_IVAR_$_QTHUDTimerNonRetainedTarget._selector
_OBJC_IVAR_$_QTMoviePlaybackControllerTimeValue._time
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._parent
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._loadingError
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._apertureMode
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualBackgroundColor
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualMovieBoxBackgroundColor
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._loadingMediaHelper
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._initAttributesForLoadingMediaHelper
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._wasInvalidated
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._loadingMediaHelperClass
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._instantiateOnLoadingThread
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._autoplayWasRequested
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._autoplayAtRateWasRequested
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._autoplayRate
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._delegateWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._volumeWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._volume
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._mutedWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._muted
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._activeWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._active
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._activeAndVisibleWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._activeAndVisible
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._apertureModeWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._editableWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._editable
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._languageWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._language
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._loopsWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._loops
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._loopsBackAndForthWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._loopsBackAndForth
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._playsAllFramesWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._playsAllFrames
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._playsSelectionOnlyWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._playsSelectionOnly
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._usesPreferredLanguageWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._usesPreferredLanguage
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualHueWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualHue
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualSaturationWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualSaturation
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualBrightnessWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualBrightness
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualContrastWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualContrast
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualBackgroundColorWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualMovieBoxBackgroundColorWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualDrawsMovieBoxBackgroundColorWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._visualDrawsMovieBoxBackgroundColor
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._balanceWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._balance
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._bassWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._bass
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._gainWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._gain
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._trebleWasSet
_OBJC_IVAR_$_QTMovie_AsyncLoadHelper._treble
_OBJC_IVAR_$_QTMovieViewCALayerRendererView._subtitleLayer
_OBJC_IVAR_$_QTMovieViewCALayerRendererView._closedCaptionLayer
_OBJC_IVAR_$_QTMovieViewCALayerRendererView._timerTarget
_OBJC_IVAR_$_QTMovieViewCALayerRendererView._diagnosticsTimer
_OBJC_IVAR_$_QTMovieVideoProviderImageConsumer._timer
_OBJC_IVAR_$_QTMovieVideoProviderImageConsumer._queue
_OBJC_IVAR_$_QTMovieVideoProviderImageConsumer._mutex
_OBJC_IVAR_$_QTMovieVideoProviderImageConsumer._nextTime
_OBJC_IVAR_$_QTMovieVideoProviderQuartzComposerOnly._internal
_OBJC_IVAR_$_QTHUDPopUpButton._QTHUDPopUpButtonInternal
_OBJC_IVAR_$_QTHUDPopUpButtonCellButtonCell._arrowPosition
_OBJC_IVAR_$_QTHUDPopUpButtonCell._buttonCell
_OBJC_IVAR_$_QTHUDContainerView._internal
_OBJC_IVAR_$_QTInvalidationSet._set
_OBJC_IVAR_$_QTExportSessionInternal._exportOptions
_OBJC_IVAR_$_QTExportSessionInternal._exportSessionRef
_OBJC_IVAR_$_QTExportSessionInternal._delegate
_OBJC_IVAR_$_QTExportSessionInternal._destination
_OBJC_IVAR_$_QTExportSessionInternal._progress
_OBJC_IVAR_$_QTExportSessionInternal._runState
_OBJC_IVAR_$_QTExportSessionInternal._completionError
_OBJC_IVAR_$_QTExportSession._internal
_OBJC_IVAR_$_QTExportOptionsInternal._exportRef
_OBJC_IVAR_$_QTExportOptionsInternal._identifier
_OBJC_IVAR_$_QTExportOptionsInternal._hasVideo
_OBJC_IVAR_$_QTExportOptionsInternal._hasAudio
_OBJC_IVAR_$_QTExportOptionsInternal._sourceSpecified
_OBJC_IVAR_$_QTExportOptionsInternal._metadata
_OBJC_IVAR_$_QTExportOptions._internal
_OBJC_IVAR_$_QTHUDRemoteIndicatorView._internal
_OBJC_IVAR_$_QTMetadataItemInternal.key
_OBJC_IVAR_$_QTMetadataItemInternal.keySpace
_OBJC_IVAR_$_QTMetadataItemInternal.locale
_OBJC_IVAR_$_QTMetadataItemInternal.value
_OBJC_IVAR_$_QTMetadataItemInternal.time
_OBJC_IVAR_$_QTMetadataItemInternal.extras
_OBJC_IVAR_$_QTMetadataItem._priv
_OBJC_IVAR_$_QTHUDMediaTimelineRangeMarker._representedObject
_OBJC_IVAR_$_QTHUDMediaTimelineRangeMarker._mediaTimeRange
_OBJC_IVAR_$_QTHUDMediaTimelineTrack._identifier
_OBJC_IVAR_$_QTHUDMediaTimelineTrack._preview
_OBJC_IVAR_$_QTHUDMediaTimelineTrack._representedObject
_OBJC_IVAR_$_QTHUDMediaTimelineTrack._timelineView
_OBJC_IVAR_$_QTHUDMediaTimelineTrackPreview._timelineTrack
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._timelineTracks
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._showsTrackPreviews
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._mediaDuration
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._mediaTimeOffset
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._minimumSelectionDuration
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._maximumSelectionDuration
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._showsRangeMarkers
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._usesSelectionDetents
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._trackPreviewsContainerLayer
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._tracksLayer
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._selectionDetents
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._layersForRangeMarkers
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._didCreateLayers
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._selectionBorderLayer
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._selectionBorderUnderlayLayer
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._leftSelectionHandleLayer
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._rightSelectionHandleLayer
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._playheadLayer
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._selectionStart
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._isTrackingSelection
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._selectionEnd
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._currentMediaTime
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._trackPreviewsUnselectedStartRangeOverlayLayer
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._trackPreviewsUnselectedEndRangeOverlayLayer
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._selectionLeftEdgeTrackingArea
_OBJC_IVAR_$_QTHUDMediaTimelineTracksView._selectionRightEdgeTrackingArea
_OBJC_IVAR_$_QTHUDMediaTimelineView._mediaDuration
_OBJC_IVAR_$_QTHUDMediaTimelineView._mediaTimeOffset
_OBJC_IVAR_$_QTHUDMediaTimelineView._tracksView
_OBJC_IVAR_$_QTHUDMediaTimelineView._hasEnclosingScrollView
_OBJC_IVAR_$_QTHUDMediaTimelineView._mutatingTracksViewTimes
_OBJC_IVAR_$_QTHUDMediaTimelineView._pinAtMinimumPointsPerSecond
_OBJC_IVAR_$_QTHUDMediaTimelineView._minimumPointsPerSecond
_OBJC_IVAR_$_QTHUDMediaTimelineView._delegate
_OBJC_IVAR_$_QTHUDDetentFunction._detentCount
_OBJC_IVAR_$_QTHUDDetentFunction._detentMagnitude
_OBJC_IVAR_$_QTHUDDetentFunction._sortedDetents
_OBJC_METACLASS_$_QTCompressionOptionsInternal
_OBJC_CLASS_$_QTCompressionOptionsInternal
_OBJC_CLASS_$_QTDataReferenceEnumerator
_OBJC_METACLASS_$_QTDataReferenceEnumerator
_OBJC_METACLASS_$_QTFormatDescriptionInternal
_OBJC_CLASS_$_QTFormatDescriptionInternal
_OBJC_METACLASS_$_QTSampleBufferInternal
_OBJC_CLASS_$_QTSampleBufferInternal
_OBJC_METACLASS_$_QTTimeValue
_OBJC_CLASS_$_QTTimeValue
_OBJC_CLASS_$_QTMovieAttributeProps
_OBJC_METACLASS_$_QTMovieAttributeProps
_OBJC_CLASS_$_QTMovie_FigMedia_TimelyCaller
_OBJC_METACLASS_$_QTMovie_FigMedia_TimelyCaller
_OBJC_CLASS_$_QTMovie_FigMedia_OccasionalCaller
_OBJC_METACLASS_$_QTMovie_FigMedia_OccasionalCaller
_OBJC_CLASS_$_QTMovie_FigMedia
_OBJC_METACLASS_$_QTMovie_FigMedia
_OBJC_CLASS_$_QTMovieMediaHelper
_OBJC_METACLASS_$_QTMovieMediaHelper
_OBJC_CLASS_$_QTStreamEnumerator
_OBJC_METACLASS_$_QTStreamEnumerator
_OBJC_CLASS_$_QTTrack_FigMedia
_OBJC_METACLASS_$_QTTrack_FigMedia
_OBJC_CLASS_$_QTTrack_QuickTime
_OBJC_METACLASS_$_QTTrack_QuickTime
_OBJC_CLASS_$_QTTrackEnumerator
_OBJC_METACLASS_$_QTTrackEnumerator
_OBJC_CLASS_$_QTTrackHelper
_OBJC_METACLASS_$_QTTrackHelper
_OBJC_METACLASS_$_QTBackgroundQueueThreadInfoInternal
_OBJC_CLASS_$_QTBackgroundQueueThreadInfoInternal
_OBJC_CLASS_$_QTBackgroundQueue
_OBJC_METACLASS_$_QTBackgroundQueue
_OBJC_CLASS_$_QTCallbackRegistry
_OBJC_METACLASS_$_QTCallbackRegistry
_OBJC_CLASS_$_QTResolvedDecompressionOptions
_OBJC_METACLASS_$_QTResolvedDecompressionOptions
_OBJC_METACLASS_$_QTClassicMovieControllerViewNeedsDisplayData
_OBJC_CLASS_$_QTClassicMovieControllerViewNeedsDisplayData
_OBJC_CLASS_$_QTClassicMovieControllerView
_OBJC_METACLASS_$_QTClassicMovieControllerView
_OBJC_CLASS_$_QTMovieControllerView
_OBJC_METACLASS_$_QTMovieControllerView
_OBJC_METACLASS_$_QTMovieViewInternal
_OBJC_CLASS_$_QTMovieViewInternal
_OBJC_METACLASS_$_QTMovieViewDragHighlightOverlayView
_OBJC_CLASS_$_QTMovieViewDragHighlightOverlayView
_OBJC_METACLASS_$_QTCaptureDeviceInputInternal
_OBJC_CLASS_$_QTCaptureDeviceInputInternal
_OBJC_METACLASS_$_QTCaptureAudioPreviewOutputInternal
_OBJC_CLASS_$_QTCaptureAudioPreviewOutputInternal
_OBJC_CLASS_$_QTCaptureVideoPreviewOutputCallbackData
_OBJC_METACLASS_$_QTCaptureVideoPreviewOutputCallbackData
_OBJC_CLASS_$_QTCaptureVideoPreviewOutputInternal
_OBJC_METACLASS_$_QTCaptureVideoPreviewOutputInternal
_OBJC_METACLASS_$_QTCaptureViewInternal
_OBJC_CLASS_$_QTCaptureViewInternal
_OBJC_METACLASS_$_QTCaptureFileOutputInternal
_OBJC_CLASS_$_QTCaptureFileOutputInternal
_OBJC_CLASS_$_QTCaptureFileOutputRecordingOperationDescriptor
_OBJC_METACLASS_$_QTCaptureFileOutputRecordingOperationDescriptor
_OBJC_CLASS_$_QTCaptureFileOutputPauseOperationDescriptor
_OBJC_METACLASS_$_QTCaptureFileOutputPauseOperationDescriptor
_OBJC_METACLASS_$_QTCaptureMovieFileOutputInternal
_OBJC_CLASS_$_QTCaptureMovieFileOutputInternal
_OBJC_CLASS_$_QTCaptureDecompressedVideoOutputCallbackData
_OBJC_METACLASS_$_QTCaptureDecompressedVideoOutputCallbackData
_OBJC_CLASS_$_QTCaptureDecompressedVideoOutputInternal
_OBJC_METACLASS_$_QTCaptureDecompressedVideoOutputInternal
_OBJC_CLASS_$_QTCaptureDecompressedAudioOutputCallbackData
_OBJC_METACLASS_$_QTCaptureDecompressedAudioOutputCallbackData
_OBJC_CLASS_$_QTCaptureDecompressedAudioOutputInternal
_OBJC_METACLASS_$_QTCaptureDecompressedAudioOutputInternal
_OBJC_METACLASS_$_QTCaptureScreenInputInternal
_OBJC_CLASS_$_QTCaptureScreenInputInternal
_OBJC_METACLASS_$_QTMovieModernizerInternal
_OBJC_CLASS_$_QTMovieModernizerInternal
_OBJC_CLASS_$_QTMovieModernizerLegacyQTTrackPassthrough
_OBJC_CLASS_$_QTMovieModernizerLegacyQTTrack
_OBJC_CLASS_$_QTMovieModernizerPassthroughTrack
_OBJC_CLASS_$_QTMovieModernizerLegacyMP3Track
_OBJC_CLASS_$_QTMovieModernizerTrack
_OBJC_METACLASS_$_QTMovieModernizerTrack
_OBJC_METACLASS_$_QTMovieModernizerPassthroughTrack
_OBJC_METACLASS_$_QTMovieModernizerLegacyQTTrackPassthrough
_OBJC_METACLASS_$_QTMovieModernizerLegacyQTTrack
_OBJC_METACLASS_$_QTMovieModernizerLegacyMP3Track
_OBJC_METACLASS_$_QTMovieLayerPrivate
_OBJC_CLASS_$_QTMovieLayerPrivate
_OBJC_CLASS_$_QTMediaIOGraphNodeList
_OBJC_METACLASS_$_QTMediaIOGraphNodeList
_OBJC_METACLASS_$_QTMediaIOGraphUnitDescription
_OBJC_CLASS_$_QTMediaIOGraphUnitDescription
_OBJC_CLASS_$_QTCaptureOperationDescriptorQueueItem
_OBJC_METACLASS_$_QTCaptureOperationDescriptorQueueItem
_OBJC_CLASS_$_QTCaptureOperationDescriptorQueue
_OBJC_METACLASS_$_QTCaptureOperationDescriptorQueue
_OBJC_CLASS_$_QTCaptureDALDevice
_OBJC_METACLASS_$_QTCaptureDALDevice
_OBJC_METACLASS_$_QTCaptureDeviceInternal
_OBJC_CLASS_$_QTCaptureDeviceInternal
_OBJC_CLASS_$_QTCaptureHALDevice
_OBJC_METACLASS_$_QTCaptureHALDevice
_OBJC_CLASS_$_QTCaptureVideoPreviewRenderHelper
_OBJC_METACLASS_$_QTCaptureVideoPreviewRenderHelper
_OBJC_METACLASS_$_QTCaptureConnectionInternal
_OBJC_CLASS_$_QTCaptureConnectionInternal
_OBJC_METACLASS_$_QTCaptureSessionInternal
_OBJC_CLASS_$_QTCaptureSessionInternal
_OBJC_CLASS_$_QTCaptureSessionInternalState
_OBJC_METACLASS_$_QTCaptureSessionInternalState
_OBJC_METACLASS_$_QTCaptureLayerPrivate
_OBJC_CLASS_$_QTCaptureLayerPrivate
_OBJC_CLASS_$_QTGarbageCollectedWeakReference
_OBJC_CLASS_$_QTRetainReleaseWeakReference
_OBJC_CLASS_$_QTWeakReference
_OBJC_METACLASS_$_QTWeakReference
_OBJC_METACLASS_$_QTGarbageCollectedWeakReference
_OBJC_METACLASS_$_QTRetainReleaseWeakReference
_OBJC_CLASS_$_QTImageBufferConformer
_OBJC_METACLASS_$_QTImageBufferConformer
_OBJC_CLASS_$_QTImageBufferQueue
_OBJC_METACLASS_$_QTImageBufferQueue
_OBJC_CLASS_$_QTFigTimeImageQueue
_OBJC_METACLASS_$_QTFigTimeImageQueue
_OBJC_CLASS_$_QTRunLoopSchedulingSetCallbackInfo
_OBJC_METACLASS_$_QTRunLoopSchedulingSetCallbackInfo
_OBJC_CLASS_$_QTRunLoopSchedulingSet
_OBJC_METACLASS_$_QTRunLoopSchedulingSet
_OBJC_CLASS_$_QTGraphicsDevice
_OBJC_CLASS_$_QTConcreteGraphicsDevice
_OBJC_METACLASS_$_QTGraphicsDevice
_OBJC_METACLASS_$_QTConcreteGraphicsDevice
_OBJC_CLASS_$_QTOpenGLContext
_OBJC_METACLASS_$_QTOpenGLContext
_OBJC_CLASS_$_QTOpenGLTextureTile
_OBJC_METACLASS_$_QTOpenGLTextureTile
_OBJC_CLASS_$_QTOpenGLTexture
_OBJC_METACLASS_$_QTOpenGLTexture
_OBJC_CLASS_$_QTOpenGLTextureCache
_OBJC_CLASS_$_QTOpenGLTextureCacheTexture
_OBJC_METACLASS_$_QTOpenGLTextureCache
_OBJC_CLASS_$_QTOpenGLTextureCacheTextureTile
_OBJC_METACLASS_$_QTOpenGLTextureCacheTextureTile
_OBJC_METACLASS_$_QTOpenGLTextureCacheTexture
_OBJC_CLASS_$_QTImageConsumerFanOut
_OBJC_METACLASS_$_QTImageConsumerFanOut
_OBJC_CLASS_$_QTFigVisualContextImageProviderInternal
_OBJC_METACLASS_$_QTFigVisualContextImageProviderInternal
_OBJC_CLASS_$_QTFigVisualContextImageProvider
_OBJC_METACLASS_$_QTFigVisualContextImageProvider
_OBJC_CLASS_$_QTLogRenderer
_OBJC_METACLASS_$_QTLogRenderer
_OBJC_CLASS_$_QTCALayerRendererState
_OBJC_METACLASS_$_QTCALayerRendererState
_OBJC_CLASS_$_QTCALayerRenderer
_OBJC_CLASS_$_QTCAImageQueueBoss
_OBJC_METACLASS_$_QTCALayerRenderer
_OBJC_METACLASS_$_QTCAImageQueueBoss
_OBJC_METACLASS_$_QTCGContextRendererInternal
_OBJC_CLASS_$_QTCGContextRendererInternal
_OBJC_CLASS_$_QTCGContextRenderer
_OBJC_METACLASS_$_QTCGContextRenderer
_OBJC_CLASS_$_QTSurfaceRendererTileDescription
_OBJC_METACLASS_$_QTSurfaceRendererTileDescription
_OBJC_CLASS_$_QTSurfaceRenderer
_OBJC_METACLASS_$_QTSurfaceRenderer
_OBJC_CLASS_$_QTSurfaceRendererTile
_OBJC_METACLASS_$_QTSurfaceRendererTile
_OBJC_CLASS_$_QTSurfaceRendererAcceleratedTile
_OBJC_METACLASS_$_QTSurfaceRendererAcceleratedTile
_OBJC_CLASS_$_QTSurfaceRendererSoftwareTile
_OBJC_METACLASS_$_QTSurfaceRendererSoftwareTile
_OBJC_CLASS_$_QTIMAVManagerImageConsumer
_OBJC_METACLASS_$_QTIMAVManagerImageConsumer
_OBJC_CLASS_$_QTSurfaceRendererIntermediateDelegateRenderer
_OBJC_METACLASS_$_QTSurfaceRendererIntermediateDelegateRenderer
_OBJC_CLASS_$_QTMovieFigVisualContextRenderHelper
_OBJC_METACLASS_$_QTMovieFigVisualContextRenderHelper
_OBJC_METACLASS_$_QTMovieGWorldRendererViewStubImageConsumer
_OBJC_CLASS_$_QTMovieGWorldRendererViewStubImageConsumer
_OBJC_CLASS_$_QTMovieGWorldRendererView
_OBJC_METACLASS_$_QTMovieGWorldRendererView
_OBJC_CLASS_$_QTMovieViewCGContextRendererView
_OBJC_METACLASS_$_QTMovieViewCGContextRendererView
_OBJC_CLASS_$_QTMovieViewSurfaceRendererView
_OBJC_METACLASS_$_QTMovieViewSurfaceRendererView
_OBJC_CLASS_$_StdMovieUIController
_OBJC_METACLASS_$_StdMovieUIController
_OBJC_CLASS_$_QTKitMovieControllerView
_OBJC_METACLASS_$_QTKitMovieControllerView
_OBJC_CLASS_$_StdMovieUIButton
_OBJC_METACLASS_$_StdMovieUIButton
_OBJC_CLASS_$_StdMovieUIVolumeButton
_OBJC_METACLASS_$_StdMovieUIVolumeButton
_OBJC_CLASS_$_StdMovieUIPlayPauseButton
_OBJC_METACLASS_$_StdMovieUIPlayPauseButton
_OBJC_CLASS_$_StdMovieUICustomMenuButton
_OBJC_METACLASS_$_StdMovieUICustomMenuButton
_OBJC_CLASS_$_StdMovieUIFastButton
_OBJC_CLASS_$_StdMovieUIFastButtonCell
_OBJC_METACLASS_$_StdMovieUIFastButton
_OBJC_METACLASS_$_StdMovieUIFastButtonCell
_OBJC_METACLASS_$_StdMovieUISlider
_OBJC_CLASS_$_StdMovieUISlider
_OBJC_CLASS_$_StdMovieUISliderCell
_OBJC_METACLASS_$_StdMovieUISliderCell
_OBJC_CLASS_$_StdMovieUITextItem
_OBJC_METACLASS_$_StdMovieUITextItem
_OBJC_CLASS_$_StdMovieUIChapterPopup
_OBJC_METACLASS_$_StdMovieUIChapterPopup
_OBJC_CLASS_$_StdMovieUIVolumeSliderPopupView
_OBJC_METACLASS_$_StdMovieUIVolumeSliderPopupView
_OBJC_METACLASS_$_QTClosedCaptionLayer
_OBJC_CLASS_$_QTClosedCaptionLayer
_OBJC_METACLASS_$_QTClosedCaptionRenderer
_OBJC_CLASS_$_QTClosedCaptionRenderer
_OBJC_CLASS_$_QTSubtitleLayer
_OBJC_METACLASS_$_QTSubtitleLayer
_OBJC_CLASS_$_QTSubtitleRenderer
_OBJC_METACLASS_$_QTSubtitleRenderer
_OBJC_CLASS_$_QTMovie_QuickTime
_OBJC_METACLASS_$_QTMovie_QuickTime
_OBJC_CLASS_$_QTKitServerController
_OBJC_METACLASS_$_QTKitServerController
_OBJC_CLASS_$_QTNotificationListenerThreadData
_OBJC_METACLASS_$_QTNotificationListenerThreadData
_OBJC_CLASS_$_QTNotificationController
_OBJC_METACLASS_$_QTNotificationController
_OBJC_CLASS_$_QTDelegateListenerThreadData
_OBJC_METACLASS_$_QTDelegateListenerThreadData
_OBJC_CLASS_$_QTDelegateController
_OBJC_METACLASS_$_QTDelegateController
_OBJC_METACLASS_$_QTMachPortImageProviderData
_OBJC_CLASS_$_QTMachPortImageProviderData
_OBJC_CLASS_$_QTMachPortImageProvider
_OBJC_METACLASS_$_QTMachPortImageProvider
_OBJC_CLASS_$_QTMovieMachPortRenderHelper
_OBJC_METACLASS_$_QTMovieMachPortRenderHelper
_OBJC_CLASS_$_QTRemoteCVImageBufferUnarchiver
_OBJC_METACLASS_$_QTRemoteCVImageBufferUnarchiver
_OBJC_CLASS_$_QTCALayerRendererView
_OBJC_CLASS_$_QTCALayerRendererViewBackingLayer
_OBJC_METACLASS_$_QTCALayerRendererView
_OBJC_METACLASS_$_QTCALayerRendererViewBackingLayer
_OBJC_CLASS_$_QTCGContextRendererView
_OBJC_METACLASS_$_QTCGContextRendererView
_OBJC_CLASS_$_QTSurfaceRendererView
_OBJC_METACLASS_$_QTSurfaceRendererView
_OBJC_CLASS_$_QTKeyedArchiverDelegate
_OBJC_METACLASS_$_QTKeyedArchiverDelegate
_OBJC_CLASS_$_QTMoviePlaybackControllerMovieProxy
_OBJC_METACLASS_$_QTMoviePlaybackControllerMovieProxy
_OBJC_CLASS_$_QTMoviePlaybackControllerSelection
_OBJC_METACLASS_$_QTMoviePlaybackControllerSelection
_OBJC_CLASS_$_QTKeyValueProxy
_OBJC_METACLASS_$_QTKeyValueProxy
_OBJC_CLASS_$_QTHUDTimerNonRetainedTarget
_OBJC_METACLASS_$_QTHUDTimerNonRetainedTarget
_OBJC_METACLASS_$_QTMoviePlaybackControllerTimeValue
_OBJC_CLASS_$_QTMoviePlaybackControllerTimeValue
_OBJC_CLASS_$_QTMovie_AsyncLoadHelper
_OBJC_METACLASS_$_QTMovie_AsyncLoadHelper
_OBJC_CLASS_$_QTMovieViewCALayerRendererView
_OBJC_METACLASS_$_QTMovieViewCALayerRendererView
_OBJC_CLASS_$_QTMovieVideoProviderImageConsumer
_OBJC_METACLASS_$_QTMovieVideoProviderImageConsumer
_OBJC_CLASS_$_QTHUDPopUpButtonCellButtonCell
_OBJC_METACLASS_$_QTHUDPopUpButtonCellButtonCell
_OBJC_CLASS_$_QTInvalidationSet
_OBJC_METACLASS_$_QTInvalidationSet
_OBJC_CLASS_$_QTExportSessionInternal
_OBJC_METACLASS_$_QTExportSessionInternal
_OBJC_CLASS_$_QTExportOptionsInternal
_OBJC_METACLASS_$_QTExportOptionsInternal
_OBJC_METACLASS_$_QTMetadataItemInternal
_OBJC_CLASS_$_QTMetadataItemInternal
_OBJC_CLASS_$_QTHUDMediaTimelineTracksView
_OBJC_METACLASS_$_QTHUDMediaTimelineTracksView
_OBJC_CLASS_$_QTHUDDetentFunction
_OBJC_METACLASS_$_QTHUDDetentFunction
_sNumConcurrentModernizeSessions
__ZZ24QTHostTimeQueueGetTypeIDE12registerOnce
__ZZ23QTFigTimeQueueGetTypeIDE12registerOnce
_kQTRunLoopSchedulingSetItemSetCallbacks
_QTDisplayConfigurationChangedNotification
_QTImageBufferCreateCGImage.sConformerLock
_gOrigSelStart
_gOrigSelEnd
_QTTimeFormatterGetTypeID.registerOnce
_CopyLocalizedStringsTableForLocale.mutex
_getClassForOptions.registerClassesOnce
_copyEnabledYellowGradient.components
_copyPressedYellowGradient.components
_copyEnabledDarkerGrayGradient.components
_copyPressedDarkerGrayGradient.components
_copyEnabledDarkGrayGradient.components
_copyPressedDarkGrayGradient.components
_getNextGlyph.once
_getPreviousGlyph.once
_getRetreat30Glyph.once
_getExitFullscreenGlyph.once
_getEnterFullscreenGlyph.once
_getAudioVolumeHighGlyph.once
_getAudioVolumeMediumGlyph.once
_getAudioVolumeLowGlyph.once
_getAudioVolumeOffGlyph.once
_getAudioVolumeMutedGlyph.once
_getEndGlyph.once
_getBeginningGlyph.once
_getBackwardGlyph.once
_getForwardGlyph.once
_getStopGlyph.once
_getPauseGlyph.once
_getPlayGlyph.once
_QTMoviePlaybackControllerObservationContext
_QTHUDGroupViewItemDidChangeViewObservationContext
_QTHUDGroupViewItemDidChangeHiddenObservationContext
_QTHUDGroupViewItemDidChangeMinSizeObservationContext
_QTHUDGroupViewItemDidChangeMaxSizeObservationContext
_QTMoviePlaybackControllerMovieProxyCurrentTimeObservationContext
_QTMoviePlaybackControllerMovieProxyPlaybackRangeObservationContext
_QTMoviePlaybackControllerSelectionRateObservationContext
_QTMoviePlaybackControllerSelectionCurrentTimeObservationContext
_QTKeyValueProxyForwardProxyKeyObservationContext
_QTKeyValueProxyTargetObservationContext
_movieObservationCtx
_fillColorObservationCtx
_QTUIRuntimeRegisterClass.initClassTableOnce
_QTUIBundleIdentifier
_QTHUDRemoteIndicatorViewTrackLayerBoundsObservationContext
_QTHUDMediaTimelineViewTrackViewSelectionAndTimeObserverContext
-[QTSampleBuffer SMPTETime].warned
-[QTSampleBuffer dateRecorded].warned
-[QTSampleBuffer sceneChangeType].warned
+[QTMovie movieUnfilteredFileTypes].fileTypes
+[QTMovie movieUnfilteredPasteboardTypes].pasteboardTypes
+[QTMovie movieWithFile:]._warned
+[QTMovie movieWithURL:]._warned
+[QTMovie movieWithDataReference:]._warned
+[QTMovie movieWithPasteboard:]._warned
+[QTMovie movieWithData:]._warned
+[QTMovie movieWithAttributes:]._warned
+[QTMovie movieNamed:]._warned
_sPermissibleAlternateTypes
_sAttributePropertiesDictionary
-[QTMovie initWithFile:]._warned
-[QTMovie initWithURL:]._warned
-[QTMovie initWithDataReference:]._warned
-[QTMovie initWithPasteboard:]._warned
-[QTMovie initWithData:]._warned
-[QTMovie initWithMovie:timeRange:]._warned
-[QTMovie initWithAttributes:]._warned
-[QTMovie idling]._warned
-[QTMovie autoPlay]._warned
-[QTMovie isCloseCaptionVisible]._warned
-[QTMovie setCloseCaptionVisible:]._warned
_sDisabledComponentsLock
_sDisabledComponents
_sPermissibleFigMediaTypes
+[QTMovie_FigMedia movieFileTypes:].sSupportedFileExtensions
+[QTMovie_FigMedia movieMIMETypesWithOptions:].sSupportedMIMETypes
_dateFromISO8601.sISO8601
-[QTMovieMediaHelper commonMetadataForQTAnnotations:].qtToCommonKeysMap
+[QTTrack allReadableAttributeKeysForVisibility:].sPublicAttributeKeys
+[QTTrack allReadableAttributeKeysForVisibility:].sPrivateAttributeKeys
+[QTTrack allWritableAttributeKeysForVisibility:].sPublicAttributeKeys
+[QTTrack allWritableAttributeKeysForVisibility:].sPrivateAttributeKeys
+[QTTrack attributeKeysDisallowedForReadingUnderPlaybackAPIRestriction].sDisallowedUnderPlayback
+[QTTrack attributeKeysDisallowedForWritingUnderPlaybackAPIRestriction].sDisallowedUnderPlayback
+[QTCallbackRegistry sharedCallbackRegistry].sharedCallbackRegistry
+[QTCallbackRegistry sharedCallbackRegistry].shadowSharedCallbackRegistry
_sMediaKeys
-[QTResolvedDecompressionOptions pixelBufferAttributes].sAllPixelFormatTypes
-[QTResolvedDecompressionOptions pixelBufferAttributes].sShadowAllPixelFormatTypes
-[QTMovieView showCustomButton:]._warned
-[QTMovieView surfaceID]._warned
-[QTMovieView windowID]._warned
-[QTCaptureAudioPreviewOutput connectionMediaTypes].connectionMediaTypes
-[QTCaptureVideoPreviewOutput decompressionAccuracy]._warned
-[QTCaptureVideoPreviewOutput setDecompressionAccuracy:]._warned
-[QTCaptureVideoPreviewOutput videoPixelFormat].warned
-[QTCaptureVideoPreviewOutput setVideoPixelFormat:].warned
-[QTCaptureVideoPreviewOutput connectionMediaTypes].connectionMediaTypes
_sIsInInterfaceBuilder
-[QTCaptureView _drawIBPreviewInRect:].dummyPreviewImage
-[QTCaptureMovieFileOutput connectionMediaTypes].connectionMediaTypes
-[QTCaptureDecompressedVideoOutput connectionMediaTypes].connectionMediaTypes
-[QTCaptureDecompressedAudioOutput connectionMediaTypes].connectionMediaTypes
_sUseFlatten
_sCodecMappingList
_sNumModernizeSessions
_modernizerSerialQueueInitOnce.sInitModernizerQueueOnce
_sModernizerSerialQueue
_sDispatchPriority
_sValidationOptionsDictionary
_sDevicesInited
_sConnectedDevices
_sAllDevices
+[QTCaptureDevice _registeredDeviceClassNames].registeredDeviceClassNames
+[QTCaptureDevice _registeredDeviceClassNames].shadowRegisteredDeviceClassNames
+[QTCaptureDevice _linkedDevicesLock].linkedDevicesLock
+[QTCaptureDevice _linkedDevicesLock].shadowLinkedDevicesLock
_sDevicesInited
_sConnectedDevices
_sAllDevices
__Z22gQTHostTimeQueueTypeID
__ZZ24_QTHostTimeQueueRegistervE21sQTHostTimeQueueClass
__Z21gQTFigTimeQueueTypeID
__ZZ23_QTFigTimeQueueRegistervE20sQTFigTimeQueueClass
__concreteQTWeakReferenceClass
_gAcceleratorCount
_gAcceleratorInfo
-[QTGraphicsDevice(QTGraphicsDeviceOpenGL_Internal) _openGLInfo].gPerDeviceGLInfoDictionary
-[QTGraphicsDevice(QTGraphicsDeviceOpenGL_Internal) _openGLInfo].gPerDeviceGLInfoLock
+[QTOpenGLTextureCache openGLTextureCacheForDevice:].gOpenGLTextureCacheMap
+[QTOpenGLTextureCache openGLTextureCacheForDevice:].gOpenGLTextureCacheMapLock
_gDisplayLock
_gDisplayInfo
_gDisplayConfigurationSeed
_validateDisplayInfoNoLock.registered
_gImageCacheLock
_gImageCache
_QTImageBufferCreateCGImage.sConformer
_gImageCacheLock
_gImageCache
_qtkitCAImageQueueLowWaterLevel
_qtkitCAImageQueueHighWaterLevel
_sDisplayNotificationLock
_sDisplayNotificationListeners
_sLayerBaseAttributes
_qtkitCAImageQueueDepth
+[QTCGContextRenderer defaultPreferredAttributes].sDefaultPreferredAttributes
+[QTCGContextRenderer defaultPreferredAttributes].sShadowDefaultPreferredAttributes
-[QTSurfaceRenderer applyConfiguration].sRGBColorSpaceWith22Gamma
_getAdvanceTime.advanceTime
_sSharedWindowIDs
_sSharedWindowInitialSharingStates
_sSharedWindowIDsLock
_reverseNormalImage
_reversePressedImage
_forwardNormalImage
_forwardPressedImage
_chapterNormalImage
_growNormalImage
_growPressedImage
__normalImages
__pressedImages
__normalPlayImage
__normalPauseImage
__pressedPlayImage
__pressedPauseImage
__customNormalImage
__customPressedImage
__normalSliderLeftCap
__normalSliderMiddle
__normalSliderRightCap
__selectedSliderLeftCap
__selectedSliderMiddle
__selectedSliderRightCap
__emptySliderLeftCap
__emptySliderMiddle
__emptySliderRightCap
__normalKnob
__pressedNormalKnob
__editingKnob
__pressedEditingKnob
_gOrigValue
-[StdMovieUISliderCell continueTracking:at:inView:].trackCount
_gTrackOffset
_background
_knob
_gQTTimeFormatterTypeID
_CopyLocalizedStringsTableForLocale.localizedStringsDictionaries
__QTTimeFormatterRegister.sQTTimeFormatterClass
_gNextGlyph
_gPreviousGlyph
_gRetreat30Glyph
_gExitFullscreenGlyph
_gEnterFullscreenGlyph
_gAudioVolumeHighGlyph
_gAudioVolumeMediumGlyph
_gAudioVolumeLowGlyph
_gAudioVolumeOffGlyph
_gAudioVolumeMutedGlyph
_gEndGlyph
_gBeginningGlyph
_gBackwardGlyph
_gForwardGlyph
_gStopGlyph
_gPauseGlyph
_gPlayGlyph
_gTrackOffset
-[QTMovie_QuickTime frameImageAtTime:withAttributes:error:]._warnedAboutPICT
-[QTMovie_QuickTime frameImageAtTime:withAttributes:error:]._warnedAboutCVOpenGLTexture
__sharedObjectController
__sharedNotificationController
__sharedDelegateController
__sharedArchiverDelegate
__unarchivableClassesForSandboxedApps
_gProxyMovieTable
_QTMoviePlaybackControllerMovieProxyIdleDisplaySleepDisableCount
_QTMoviePlaybackControllerMovieProxyIdleDisplaySleepAssertion
_QTMoviePlaybackControllerMovieProxyIdleSystemSleepDisableCount
_QTMoviePlaybackControllerMovieProxyIdleSystemSleepAssertion
_sQTMovieVideoProviderImageConsumerLeadTime
__classTableLock
__classTable
+[QTExportOptions allExportOptionsIdentifiers].idArray
+[QTExportOptions allExportOptionsIdentifiers].makeIDArrayOnce
+[QTHUDRemoteIndicatorView _imageNamed:].cache
_qtUtilities
_gQTMovieModernizer
__ZN16TextRendererBase23sTextRendererFactoryMapE
_QTMovieModernizerMP4TrackTypes
_QTMovieModernizerVideoCodecType
_OBJC_CLASS_$_QTAudioCompressionOptions
_OBJC_CLASS_$_QTCaptureAudioPreviewOutput
_OBJC_CLASS_$_QTCaptureConnection
_OBJC_CLASS_$_QTCaptureDecompressedAudioOutput
_OBJC_CLASS_$_QTCaptureDecompressedVideoOutput
_OBJC_CLASS_$_QTCaptureDevice
_OBJC_CLASS_$_QTCaptureDeviceInput
_OBJC_CLASS_$_QTCaptureFileOutput
_OBJC_CLASS_$_QTCaptureInput
_OBJC_CLASS_$_QTCaptureLayer
_OBJC_CLASS_$_QTCaptureMovieFileOutput
_OBJC_CLASS_$_QTCaptureOutput
_OBJC_CLASS_$_QTCaptureScreenInput
_OBJC_CLASS_$_QTCaptureSession
_OBJC_CLASS_$_QTCaptureVideoPreviewOutput
_OBJC_CLASS_$_QTCaptureView
_OBJC_CLASS_$_QTCompressionOptions
_OBJC_CLASS_$_QTDataReference
_OBJC_CLASS_$_QTExportOptions
_OBJC_CLASS_$_QTExportSession
_OBJC_CLASS_$_QTFormatDescription
_OBJC_CLASS_$_QTHUDBackgroundView
_OBJC_CLASS_$_QTHUDButton
_OBJC_CLASS_$_QTHUDButtonCell
_OBJC_CLASS_$_QTHUDContainerView
_OBJC_CLASS_$_QTHUDGroupView
_OBJC_CLASS_$_QTHUDGroupViewItem
_OBJC_CLASS_$_QTHUDMediaTimelineRangeMarker
_OBJC_CLASS_$_QTHUDMediaTimelineTrack
_OBJC_CLASS_$_QTHUDMediaTimelineTrackPreview
_OBJC_CLASS_$_QTHUDMediaTimelineView
_OBJC_CLASS_$_QTHUDPopUpButton
_OBJC_CLASS_$_QTHUDPopUpButtonCell
_OBJC_CLASS_$_QTHUDRemoteIndicatorView
_OBJC_CLASS_$_QTHUDSlider
_OBJC_CLASS_$_QTHUDSliderCell
_OBJC_CLASS_$_QTHUDTimeFormatter
_OBJC_CLASS_$_QTHUDTimeline
_OBJC_CLASS_$_QTHUDTimelineCell
_OBJC_CLASS_$_QTHotspot
_OBJC_CLASS_$_QTHotspotEnumerator
_OBJC_CLASS_$_QTMedia
_OBJC_CLASS_$_QTMediaKeys
_OBJC_CLASS_$_QTMetadataItem
_OBJC_CLASS_$_QTMovie
_OBJC_CLASS_$_QTMovieLayer
_OBJC_CLASS_$_QTMovieModernizer
_OBJC_CLASS_$_QTMoviePlaybackController
_OBJC_CLASS_$_QTMovieUndoOperation
_OBJC_CLASS_$_QTMovieVideoProviderQuartzComposerOnly
_OBJC_CLASS_$_QTMovieView
_OBJC_CLASS_$_QTMutableExportOptions
_OBJC_CLASS_$_QTMutableMetadataItem
_OBJC_CLASS_$_QTNode
_OBJC_CLASS_$_QTNodeEnumerator
_OBJC_CLASS_$_QTPixelBufferConverter
_OBJC_CLASS_$_QTSampleBuffer
_OBJC_CLASS_$_QTStream
_OBJC_CLASS_$_QTTrack
_OBJC_CLASS_$_QTUtilities
_OBJC_CLASS_$_QTVideoCompressionOptions
_OBJC_CLASS_$_QTVideoRendererWebKitOnly
_OBJC_METACLASS_$_QTAudioCompressionOptions
_OBJC_METACLASS_$_QTCaptureAudioPreviewOutput
_OBJC_METACLASS_$_QTCaptureConnection
_OBJC_METACLASS_$_QTCaptureDecompressedAudioOutput
_OBJC_METACLASS_$_QTCaptureDecompressedVideoOutput
_OBJC_METACLASS_$_QTCaptureDevice
_OBJC_METACLASS_$_QTCaptureDeviceInput
_OBJC_METACLASS_$_QTCaptureFileOutput
_OBJC_METACLASS_$_QTCaptureInput
_OBJC_METACLASS_$_QTCaptureLayer
_OBJC_METACLASS_$_QTCaptureMovieFileOutput
_OBJC_METACLASS_$_QTCaptureOutput
_OBJC_METACLASS_$_QTCaptureScreenInput
_OBJC_METACLASS_$_QTCaptureSession
_OBJC_METACLASS_$_QTCaptureVideoPreviewOutput
_OBJC_METACLASS_$_QTCaptureView
_OBJC_METACLASS_$_QTCompressionOptions
_OBJC_METACLASS_$_QTDataReference
_OBJC_METACLASS_$_QTExportOptions
_OBJC_METACLASS_$_QTExportSession
_OBJC_METACLASS_$_QTFormatDescription
_OBJC_METACLASS_$_QTHUDBackgroundView
_OBJC_METACLASS_$_QTHUDButton
_OBJC_METACLASS_$_QTHUDButtonCell
_OBJC_METACLASS_$_QTHUDContainerView
_OBJC_METACLASS_$_QTHUDGroupView
_OBJC_METACLASS_$_QTHUDGroupViewItem
_OBJC_METACLASS_$_QTHUDMediaTimelineRangeMarker
_OBJC_METACLASS_$_QTHUDMediaTimelineTrack
_OBJC_METACLASS_$_QTHUDMediaTimelineTrackPreview
_OBJC_METACLASS_$_QTHUDMediaTimelineView
_OBJC_METACLASS_$_QTHUDPopUpButton
_OBJC_METACLASS_$_QTHUDPopUpButtonCell
_OBJC_METACLASS_$_QTHUDRemoteIndicatorView
_OBJC_METACLASS_$_QTHUDSlider
_OBJC_METACLASS_$_QTHUDSliderCell
_OBJC_METACLASS_$_QTHUDTimeFormatter
_OBJC_METACLASS_$_QTHUDTimeline
_OBJC_METACLASS_$_QTHUDTimelineCell
_OBJC_METACLASS_$_QTHotspot
_OBJC_METACLASS_$_QTHotspotEnumerator
_OBJC_METACLASS_$_QTMedia
_OBJC_METACLASS_$_QTMediaKeys
_OBJC_METACLASS_$_QTMetadataItem
_OBJC_METACLASS_$_QTMovie
_OBJC_METACLASS_$_QTMovieLayer
_OBJC_METACLASS_$_QTMovieModernizer
_OBJC_METACLASS_$_QTMoviePlaybackController
_OBJC_METACLASS_$_QTMovieUndoOperation
_OBJC_METACLASS_$_QTMovieVideoProviderQuartzComposerOnly
_OBJC_METACLASS_$_QTMovieView
_OBJC_METACLASS_$_QTMutableExportOptions
_OBJC_METACLASS_$_QTMutableMetadataItem
_OBJC_METACLASS_$_QTNode
_OBJC_METACLASS_$_QTNodeEnumerator
_OBJC_METACLASS_$_QTPixelBufferConverter
_OBJC_METACLASS_$_QTSampleBuffer
_OBJC_METACLASS_$_QTStream
_OBJC_METACLASS_$_QTTrack
_OBJC_METACLASS_$_QTUtilities
_OBJC_METACLASS_$_QTVideoCompressionOptions
_OBJC_METACLASS_$_QTVideoRendererWebKitOnly
_QTAddImageCodecQuality
_QTAddImageCodecType
_QTAlternates_AlternateTrack
_QTAlternates_FallbackTrack
_QTAlternates_LanguageCodeEncoding_ISO_639_2T
_QTAlternates_LanguageCodeEncoding_MacType_LangCode
_QTAlternates_LanguageCodeEncoding_RFC_4646
_QTAlternates_LanguageCodeNativeEncoding
_QTAlternates_QTTrack
_QTAlternates_TrackIsAutoExcluded
_QTCaptureAnyMediaType
_QTCaptureConnectionAttributeDidChangeNotification
_QTCaptureConnectionAttributeWillChangeNotification
_QTCaptureConnectionAudioAveragePowerLevelsAttribute
_QTCaptureConnectionAudioMasterVolumeAttribute
_QTCaptureConnectionAudioPeakHoldLevelsAttribute
_QTCaptureConnectionAudioVolumesAttribute
_QTCaptureConnectionChangedAttributeKey
_QTCaptureConnectionEnabledAudioChannelsAttribute
_QTCaptureConnectionFormatDescriptionDidChangeNotification
_QTCaptureConnectionFormatDescriptionWillChangeNotification
_QTCaptureDeviceAVCTransportControlsAttribute
_QTCaptureDeviceAVCTransportControlsPlaybackModeKey
_QTCaptureDeviceAVCTransportControlsSpeedKey
_QTCaptureDeviceAttributeDidChangeNotification
_QTCaptureDeviceAttributeWillChangeNotification
_QTCaptureDeviceAvailableInputSourcesAttribute
_QTCaptureDeviceChangedAttributeKey
_QTCaptureDeviceFormatDescriptionsDidChangeNotification
_QTCaptureDeviceFormatDescriptionsWillChangeNotification
_QTCaptureDeviceInputSourceIdentifierAttribute
_QTCaptureDeviceInputSourceIdentifierKey
_QTCaptureDeviceInputSourceLocalizedDisplayNameKey
_QTCaptureDeviceLinkedDevicesAttribute
_QTCaptureDeviceSuspendedAttribute
_QTCaptureDeviceWasConnectedNotification
_QTCaptureDeviceWasDisconnectedNotification
_QTCaptureSessionErrorKey
_QTCaptureSessionRuntimeErrorNotification
_QTCarbonMoviePasteboardType
_QTCommonMetadataAlbumName
_QTCommonMetadataArtist
_QTCommonMetadataArtwork
_QTCommonMetadataAuthor
_QTCommonMetadataContributor
_QTCommonMetadataCopyrights
_QTCommonMetadataCreationDate
_QTCommonMetadataCreator
_QTCommonMetadataDescription
_QTCommonMetadataFormat
_QTCommonMetadataIdentifier
_QTCommonMetadataLanguage
_QTCommonMetadataLastModifiedDate
_QTCommonMetadataLocation
_QTCommonMetadataPublisher
_QTCommonMetadataRelation
_QTCommonMetadataSoftware
_QTCommonMetadataSource
_QTCommonMetadataSubject
_QTCommonMetadataTitle
_QTCommonMetadataType
_QTDataReferenceTypeFile
_QTDataReferenceTypeHandle
_QTDataReferenceTypePointer
_QTDataReferenceTypeResource
_QTDataReferenceTypeURL
_QTDisallowedForInitializationPurposeException
_QTEqualTimeRanges
_QTErrorCaptureInputKey
_QTErrorCaptureOutputKey
_QTErrorDeviceKey
_QTErrorDiscontinuityFlagsKey
_QTErrorExcludingDeviceKey
_QTErrorFileSizeKey
_QTErrorFromOSStatus
_QTErrorRecordingSuccesfullyFinishedKey
_QTErrorTimeKey
_QTExportOptionsAppleM4A
_QTExportOptionsAppleM4V1080pHD
_QTExportOptionsAppleM4V480pSD
_QTExportOptionsAppleM4V720pHD
_QTExportOptionsAppleM4VAppleTV
_QTExportOptionsAppleM4VCellular
_QTExportOptionsAppleM4VWiFi
_QTExportOptionsAppleM4ViPod
_QTExportOptionsPodCastProducerMasterEncoding
_QTExportOptionsQuickTimeMovie1080p
_QTExportOptionsQuickTimeMovie480p
_QTExportOptionsQuickTimeMovie720p
_QTExportSourceOptionSourceTimeRange
_QTFormatDescriptionAudioChannelLayoutAttribute
_QTFormatDescriptionAudioMagicCookieAttribute
_QTFormatDescriptionAudioStreamBasicDescriptionAttribute
_QTFormatDescriptionVideoCleanApertureDisplaySizeAttribute
_QTFormatDescriptionVideoEncodedPixelsSizeAttribute
_QTFormatDescriptionVideoProductionApertureDisplaySizeAttribute
_QTGetComponentsFromFloatTime
_QTGetComponentsFromRationalTime
_QTGetResolvedImageConsumerAttributes
_QTGetTimeInterval
_QTGetTimeRecord
_QTHUDTimeFormatterComponentDays
_QTHUDTimeFormatterComponentHours
_QTHUDTimeFormatterComponentMinutes
_QTHUDTimeFormatterComponentSeconds
_QTImageConsumerFrequencyKey
_QTImageConsumerLatencyKey
_QTImageConsumerOpenGLDisplayMaskKey
_QTImageConsumerOutputColorSpaceKey
_QTImageConsumerPixelBufferAttributesKey
_QTImageConsumerTargetDimensionsHeightKey
_QTImageConsumerTargetDimensionsKey
_QTImageConsumerTargetDimensionsWidthKey
_QTIndefiniteTime
_QTIntersectionTimeRange
_QTKitCanUseIOSurface
_QTKitErrorDomain
_QTKitErrorException
_QTKitErrorValue
_QTKitServerDidDieNotification
_QTKitServerDidDieProcessIDKey
_QTLocalizedStringFromErrorCode
_QTLocalizedStringFromKey
_QTLocalizedStringFromTable
_QTMakeTime
_QTMakeTimeRange
_QTMakeTimeScaled
_QTMakeTimeWithTimeInterval
_QTMakeTimeWithTimeRecord
_QTMediaCharacteristicAudio
_QTMediaCharacteristicCanSendVideo
_QTMediaCharacteristicCanStep
_QTMediaCharacteristicHasNoDuration
_QTMediaCharacteristicHasSkinData
_QTMediaCharacteristicHasVideoFrameRate
_QTMediaCharacteristicMPEG
_QTMediaCharacteristicNonLinear
_QTMediaCharacteristicProvidesActions
_QTMediaCharacteristicProvidesKeyFocus
_QTMediaCharacteristicVisual
_QTMediaCreationTimeAttribute
_QTMediaDurationAttribute
_QTMediaLanguageAttribute
_QTMediaModificationTimeAttribute
_QTMediaPlayHintsAttribute
_QTMediaQualityAttribute
_QTMediaSampleCountAttribute
_QTMediaSubTypeAttribute
_QTMediaTimeScaleAttribute
_QTMediaType3D
_QTMediaTypeAttribute
_QTMediaTypeBase
_QTMediaTypeClosedCaption
_QTMediaTypeFlash
_QTMediaTypeHint
_QTMediaTypeInMediaAttribute
_QTMediaTypeMPEG
_QTMediaTypeMovie
_QTMediaTypeMusic
_QTMediaTypeMuxed
_QTMediaTypeQTVR
_QTMediaTypeQuartzComposer
_QTMediaTypeSkin
_QTMediaTypeSound
_QTMediaTypeSprite
_QTMediaTypeStream
_QTMediaTypeStringForOSType
_QTMediaTypeSubtitle
_QTMediaTypeText
_QTMediaTypeTimeCode
_QTMediaTypeTween
_QTMediaTypeUnknown
_QTMediaTypeVideo
_QTMetadata3GPUserDataKeyAuthor
_QTMetadata3GPUserDataKeyCopyright
_QTMetadata3GPUserDataKeyDescription
_QTMetadata3GPUserDataKeyGenre
_QTMetadata3GPUserDataKeyLocation
_QTMetadata3GPUserDataKeyPerformer
_QTMetadata3GPUserDataKeyRecordingYear
_QTMetadata3GPUserDataKeyTitle
_QTMetadataCommonKeyAlbumName
_QTMetadataCommonKeyArtist
_QTMetadataCommonKeyArtwork
_QTMetadataCommonKeyAuthor
_QTMetadataCommonKeyComment
_QTMetadataCommonKeyContributor
_QTMetadataCommonKeyCopyrights
_QTMetadataCommonKeyCreationDate
_QTMetadataCommonKeyCreator
_QTMetadataCommonKeyDescription
_QTMetadataCommonKeyFormat
_QTMetadataCommonKeyIdentifier
_QTMetadataCommonKeyLanguage
_QTMetadataCommonKeyLastModifiedDate
_QTMetadataCommonKeyLocation
_QTMetadataCommonKeyMake
_QTMetadataCommonKeyModel
_QTMetadataCommonKeyPublisher
_QTMetadataCommonKeyRelation
_QTMetadataCommonKeySoftware
_QTMetadataCommonKeySource
_QTMetadataCommonKeySubject
_QTMetadataCommonKeyTitle
_QTMetadataCommonKeyType
_QTMetadataFormatID3Metadata
_QTMetadataFormatQuickTimeMetadata
_QTMetadataFormatQuickTimeUserData
_QTMetadataFormatiTunesMetadata
_QTMetadataISOUserDataKeyCopyright
_QTMetadataKeySpaceCommon
_QTMetadataKeySpaceID3
_QTMetadataKeySpaceQuickTimeMetadata
_QTMetadataKeySpaceQuickTimeUserData
_QTMetadataKeySpaceiTunes
_QTMetadataQuickTimeMetadataKeyAlbum
_QTMetadataQuickTimeMetadataKeyArranger
_QTMetadataQuickTimeMetadataKeyArtist
_QTMetadataQuickTimeMetadataKeyArtwork
_QTMetadataQuickTimeMetadataKeyAuthor
_QTMetadataQuickTimeMetadataKeyComment
_QTMetadataQuickTimeMetadataKeyComposer
_QTMetadataQuickTimeMetadataKeyCopyright
_QTMetadataQuickTimeMetadataKeyCreationDate
_QTMetadataQuickTimeMetadataKeyCredits
_QTMetadataQuickTimeMetadataKeyDescription
_QTMetadataQuickTimeMetadataKeyDirector
_QTMetadataQuickTimeMetadataKeyDisplayName
_QTMetadataQuickTimeMetadataKeyEncodedBy
_QTMetadataQuickTimeMetadataKeyGenre
_QTMetadataQuickTimeMetadataKeyInformation
_QTMetadataQuickTimeMetadataKeyKeywords
_QTMetadataQuickTimeMetadataKeyLocationISO6709
_QTMetadataQuickTimeMetadataKeyMake
_QTMetadataQuickTimeMetadataKeyModel
_QTMetadataQuickTimeMetadataKeyOriginalArtist
_QTMetadataQuickTimeMetadataKeyPerformer
_QTMetadataQuickTimeMetadataKeyPhonogramRights
_QTMetadataQuickTimeMetadataKeyProducer
_QTMetadataQuickTimeMetadataKeyPublisher
_QTMetadataQuickTimeMetadataKeySoftware
_QTMetadataQuickTimeMetadataKeyYear
_QTMetadataQuickTimeMetadataKeyiXML
_QTMetadataQuickTimeUserDataKeyAlbum
_QTMetadataQuickTimeUserDataKeyArranger
_QTMetadataQuickTimeUserDataKeyArtist
_QTMetadataQuickTimeUserDataKeyAuthor
_QTMetadataQuickTimeUserDataKeyChapter
_QTMetadataQuickTimeUserDataKeyComment
_QTMetadataQuickTimeUserDataKeyComposer
_QTMetadataQuickTimeUserDataKeyCopyright
_QTMetadataQuickTimeUserDataKeyCreationDate
_QTMetadataQuickTimeUserDataKeyCredits
_QTMetadataQuickTimeUserDataKeyDescription
_QTMetadataQuickTimeUserDataKeyDirector
_QTMetadataQuickTimeUserDataKeyDisclaimer
_QTMetadataQuickTimeUserDataKeyEncodedBy
_QTMetadataQuickTimeUserDataKeyFullName
_QTMetadataQuickTimeUserDataKeyGenre
_QTMetadataQuickTimeUserDataKeyHostComputer
_QTMetadataQuickTimeUserDataKeyInformation
_QTMetadataQuickTimeUserDataKeyKeywords
_QTMetadataQuickTimeUserDataKeyLocationISO6709
_QTMetadataQuickTimeUserDataKeyMake
_QTMetadataQuickTimeUserDataKeyModel
_QTMetadataQuickTimeUserDataKeyOriginalArtist
_QTMetadataQuickTimeUserDataKeyOriginalFormat
_QTMetadataQuickTimeUserDataKeyOriginalSource
_QTMetadataQuickTimeUserDataKeyPerformers
_QTMetadataQuickTimeUserDataKeyPhonogramRights
_QTMetadataQuickTimeUserDataKeyProducer
_QTMetadataQuickTimeUserDataKeyProduct
_QTMetadataQuickTimeUserDataKeyPublisher
_QTMetadataQuickTimeUserDataKeySoftware
_QTMetadataQuickTimeUserDataKeySpecialPlaybackRequirements
_QTMetadataQuickTimeUserDataKeyTrack
_QTMetadataQuickTimeUserDataKeyTrackName
_QTMetadataQuickTimeUserDataKeyURLLink
_QTMetadataQuickTimeUserDataKeyWarning
_QTMetadataQuickTimeUserDataKeyWriter
_QTMetadataiTunesMetadataKeyAccountKind
_QTMetadataiTunesMetadataKeyAcknowledgement
_QTMetadataiTunesMetadataKeyAlbum
_QTMetadataiTunesMetadataKeyAlbumArtist
_QTMetadataiTunesMetadataKeyAppleID
_QTMetadataiTunesMetadataKeyArranger
_QTMetadataiTunesMetadataKeyArtDirector
_QTMetadataiTunesMetadataKeyArtist
_QTMetadataiTunesMetadataKeyArtistID
_QTMetadataiTunesMetadataKeyAuthor
_QTMetadataiTunesMetadataKeyBeatsPerMin
_QTMetadataiTunesMetadataKeyComposer
_QTMetadataiTunesMetadataKeyConductor
_QTMetadataiTunesMetadataKeyContentRating
_QTMetadataiTunesMetadataKeyCopyright
_QTMetadataiTunesMetadataKeyCoverArt
_QTMetadataiTunesMetadataKeyCredits
_QTMetadataiTunesMetadataKeyDescription
_QTMetadataiTunesMetadataKeyDirector
_QTMetadataiTunesMetadataKeyDiscCompilation
_QTMetadataiTunesMetadataKeyDiscNumber
_QTMetadataiTunesMetadataKeyEQ
_QTMetadataiTunesMetadataKeyEncodedBy
_QTMetadataiTunesMetadataKeyEncodingTool
_QTMetadataiTunesMetadataKeyExecProducer
_QTMetadataiTunesMetadataKeyGenreID
_QTMetadataiTunesMetadataKeyGrouping
_QTMetadataiTunesMetadataKeyLinerNotes
_QTMetadataiTunesMetadataKeyLyrics
_QTMetadataiTunesMetadataKeyOnlineExtras
_QTMetadataiTunesMetadataKeyOriginalArtist
_QTMetadataiTunesMetadataKeyPerformer
_QTMetadataiTunesMetadataKeyPhonogramRights
_QTMetadataiTunesMetadataKeyPlaylistID
_QTMetadataiTunesMetadataKeyPredefinedGenre
_QTMetadataiTunesMetadataKeyProducer
_QTMetadataiTunesMetadataKeyPublisher
_QTMetadataiTunesMetadataKeyRecordCompany
_QTMetadataiTunesMetadataKeyReleaseDate
_QTMetadataiTunesMetadataKeySoloist
_QTMetadataiTunesMetadataKeySongID
_QTMetadataiTunesMetadataKeySongName
_QTMetadataiTunesMetadataKeySoundEngineer
_QTMetadataiTunesMetadataKeyThanks
_QTMetadataiTunesMetadataKeyTrackNumber
_QTMetadataiTunesMetadataKeyTrackSubTitle
_QTMetadataiTunesMetadataKeyUserComment
_QTMetadataiTunesMetadataKeyUserGenre
_QTMovieActiveSegmentAttribute
_QTMovieAlbumArtworkData
_QTMovieAlbumArtworkType
_QTMovieAllowDRMContentAttribute
_QTMovieAllowPersistentCacheAttribute
_QTMovieApertureModeAttribute
_QTMovieApertureModeClassic
_QTMovieApertureModeClean
_QTMovieApertureModeDidChangeNotification
_QTMovieApertureModeEncodedPixels
_QTMovieApertureModeProduction
_QTMovieAskUnresolvedDataRefsAttribute
_QTMovieAudioBalanceAttribute
_QTMovieAudioBassAttribute
_QTMovieAudioChannelsAttribute
_QTMovieAudioGainAttribute
_QTMovieAudioIsMutedAttribute
_QTMovieAudioTrebleAttribute
_QTMovieAutoAlternatesAttribute
_QTMovieAvailableRangesAttribute
_QTMovieAvailableRangesDidChangeNotification
_QTMovieBackgroundColorDidChangeNotification
_QTMovieBalanceDidChangeNotification
_QTMovieBassDidChangeNotification
_QTMovieBoxIsOpaqueDidChangeNotification
_QTMovieCanDRMInteractWithUserAttribute
_QTMovieChapterDidChangeNotification
_QTMovieChapterEndTime
_QTMovieChapterListDidChangeNotification
_QTMovieChapterName
_QTMovieChapterStartTime
_QTMovieChapterTargetTrackAttribute
_QTMovieCloseWindowRequestNotification
_QTMovieClosedCaptionDidChangeNotification
_QTMovieClosedCaptionNotificationCommandDataParameter
_QTMovieClosedCaptionNotificationCommandParameter
_QTMovieCompositingModeDidChangeNotification
_QTMovieControllerDidChangeNotification
_QTMovieCopyrightAttribute
_QTMovieCreationTimeAttribute
_QTMovieCurrentSizeAttribute
_QTMovieCurrentTimeAttribute
_QTMovieDataAttribute
_QTMovieDataHandlerSyncReadTimeoutAttribute
_QTMovieDataReferenceAttribute
_QTMovieDataSizeAttribute
_QTMovieDelegateAttribute
_QTMovieDidEndNotification
_QTMovieDidSuspendClosedCaptionChangeNotification
_QTMovieDidSuspendSubtitleChangeNotification
_QTMovieDisplayNameAttribute
_QTMovieDontInteractWithUserAttribute
_QTMovieDrawsMovieBoxBackgroundColorDidChangeNotification
_QTMovieDurationAttribute
_QTMovieEditabilityDidChangeNotification
_QTMovieEditableAttribute
_QTMovieEditedNotification
_QTMovieEnableForkedH264DecodingAttribute
_QTMovieEnterFullScreenRequestNotification
_QTMovieErrorNotificationParameter
_QTMovieExitFullScreenRequestNotification
_QTMovieExport
_QTMovieExportFlags
_QTMovieExportHighResolutionAudioFeatures
_QTMovieExportManufacturer
_QTMovieExportName
_QTMovieExportPresetName
_QTMovieExportSettings
_QTMovieExportSettingsPresetName
_QTMovieExportSize
_QTMovieExportSubType
_QTMovieExportType
_QTMovieFadeDidChangeNotification
_QTMovieFieldOfViewAttribute
_QTMovieFileNameAttribute
_QTMovieFileOffsetAttribute
_QTMovieFlatten
_QTMovieFrameImageCloneMovie
_QTMovieFrameImageDeinterlaceFields
_QTMovieFrameImageForceNoVisualContexts
_QTMovieFrameImageForceVisualContexts
_QTMovieFrameImageHighQuality
_QTMovieFrameImageOpenGLContext
_QTMovieFrameImagePegLoopingTimeToDuration
_QTMovieFrameImagePixelFormat
_QTMovieFrameImagePreflightVisualData
_QTMovieFrameImagePreviousKeyframeOK
_QTMovieFrameImageRepresentationsType
_QTMovieFrameImageSessionMode
_QTMovieFrameImageSingleField
_QTMovieFrameImageSize
_QTMovieFrameImageStopMovie
_QTMovieFrameImageType
_QTMovieFrameImageTypeCGImageRef
_QTMovieFrameImageTypeCIImage
_QTMovieFrameImageTypeCVOpenGLTextureRef
_QTMovieFrameImageTypeCVPixelBufferRef
_QTMovieFrameImageTypeNSImage
_QTMovieHasApertureModeDimensionsAttribute
_QTMovieHasAudioAttribute
_QTMovieHasDurationAttribute
_QTMovieHasVideoAttribute
_QTMovieHotspotCountAttribute
_QTMovieHotspotsAreVisibleAttribute
_QTMovieIdleImportOKAttribute
_QTMovieImportSampleDurationAttribute
_QTMovieImportTimeScaleAttribute
_QTMovieInteractivityFeatureGeneral
_QTMovieInteractivityFeatureHyperlinks
_QTMovieInteractivityFeatureQTWiredActions
_QTMovieInteractivityFeaturesAttribute
_QTMovieIsActiveAttribute
_QTMovieIsDRMAuthorizedAttribute
_QTMovieIsDRMProtectedAttribute
_QTMovieIsInteractiveAttribute
_QTMovieIsLinearAttribute
_QTMovieIsSteppableAttribute
_QTMovieIsVRMovieAttribute
_QTMovieLoadStateAttribute
_QTMovieLoadStateDidChangeNotification
_QTMovieLoadStateErrorAttribute
_QTMovieLoadedRangesAttribute
_QTMovieLoadedRangesDidChangeNotification
_QTMovieLoopModeDidChangeNotification
_QTMovieLoopsAttribute
_QTMovieLoopsBackAndForthAttribute
_QTMovieMIMETypeAttribute
_QTMovieMessageNotificationParameter
_QTMovieMessageStringPostedNotification
_QTMovieMissingComponentsOptionsComponentsToIgnoreData
_QTMovieMissingComponentsOptionsConsiderAllTracks
_QTMovieMissingComponentsResultComponentsData
_QTMovieMissingComponentsResultMediaType
_QTMovieMissingComponentsResultTrackID
_QTMovieModernizerOutputFormat_AppleProRes422
_QTMovieModernizerOutputFormat_AppleProRes4444
_QTMovieModernizerOutputFormat_H264
_QTMovieModificationTimeAttribute
_QTMovieMovieAttributesKey
_QTMovieMovieBoxBackgroundColorDidChangeNotification
_QTMovieMutedAttribute
_QTMovieMutedDidChangeNotification
_QTMovieNaturalSizeAttribute
_QTMovieNaturalSizeDidChangeNotification
_QTMovieNodeCountAttribute
_QTMovieOpenAsyncOKAttribute
_QTMovieOpenAsyncRequiredAttribute
_QTMovieOpenForPlaybackAttribute
_QTMoviePanAngleAttribute
_QTMoviePanTiltSpeedAttribute
_QTMoviePasteboardAttribute
_QTMoviePasteboardType
_QTMoviePlaysAllFramesAttribute
_QTMoviePlaysSelectionOnlyAttribute
_QTMoviePosterTimeAttribute
_QTMoviePreferredMutedAttribute
_QTMoviePreferredRateAttribute
_QTMoviePreferredTransformAttribute
_QTMoviePreferredVolumeAttribute
_QTMoviePrerollCompleteNotification
_QTMoviePreventExternalURLLinksAttribute
_QTMoviePreventRefMoviesAttribute
_QTMoviePreviewModeAttribute
_QTMoviePreviewRangeAttribute
_QTMovieQTXControllerType
_QTMovieRateAttribute
_QTMovieRateChangesPreservePitchAttribute
_QTMovieRateDidChangeNotification
_QTMovieRateDidChangeNotificationParameter
_QTMovieResolveDataRefsAttribute
_QTMovieSelectionAttribute
_QTMovieSelectionDidChangeNotification
_QTMovieSizeDidChangeNotification
_QTMovieStatusCodeNotificationParameter
_QTMovieStatusFlagsNotificationParameter
_QTMovieStatusStringNotificationParameter
_QTMovieStatusStringPostedNotification
_QTMovieStdControllerType
_QTMovieSubtitleDidChangeNotification
_QTMovieSubtitleNotificationAttributedStringParameter
_QTMovieTargetIDNotificationParameter
_QTMovieTargetNameNotificationParameter
_QTMovieTiltAngleAttribute
_QTMovieTimeDidChangeNotification
_QTMovieTimeScaleAttribute
_QTMovieTimedMetadataNotification
_QTMovieTimedMetadataNotificationDataParameter
_QTMovieTimedMetadataNotificationKeyParameter
_QTMovieTimedMetadataNotificationNamespaceParameter
_QTMovieTimedMetadataNotificationParameter
_QTMovieTrebleDidChangeNotification
_QTMovieURLAttribute
_QTMovieUneditableException
_QTMovieUseHardwareVideoDecoderIfAvailableAttribute
_QTMovieUsesHardwareVideoDecoderAttribute
_QTMovieUsesPreferredLanguageAttribute
_QTMovieVideoProviderQuartzComposerOnlyCurrentPixelBufferDidChangeNotification
_QTMovieViewControllerVisibleBinding
_QTMovieViewFillColorBinding
_QTMovieViewMovieBinding
_QTMovieViewPreservesAspectRatioBinding
_QTMovieVisualBackgroundColorAttribute
_QTMovieVisualBrightnessAttribute
_QTMovieVisualContrastAttribute
_QTMovieVisualDrawsMovieBoxBackgroundColorAttribute
_QTMovieVisualHueAttribute
_QTMovieVisualMovieBoxBackgroundColorAttribute
_QTMovieVisualMovieBoxIsOpaqueAttribute
_QTMovieVisualSaturationAttribute
_QTMovieVolumeAttribute
_QTMovieVolumeDidChangeNotification
_QTMovieVolumeMeteringIsEnabledAttribute
_QTMovieVolumePeakLevelsAttribute
_QTMovieVolumePowerLevelsAttribute
_QTMovieZoomRateAttribute
_QTOSTypeForString
_QTSampleBufferDateRecordedAttribute
_QTSampleBufferExplicitSceneChange
_QTSampleBufferHostTimeAttribute
_QTSampleBufferSMPTETimeAttribute
_QTSampleBufferSceneChangeTypeAttribute
_QTSampleBufferTimeStampDiscontinuitySceneChange
_QTSecurityPolicyBlockAllWiredActionsAttribute
_QTSecurityPolicyNoCrossSiteAttribute
_QTSecurityPolicyNoLocalToLocalSiteAttribute
_QTSecurityPolicyNoLocalToRemoteSiteAttribute
_QTSecurityPolicyNoRemoteToLocalSiteAttribute
_QTSecurityPolicySelfContainedAttribute
_QTSecurityPolicyZonePolicyAttribute
_QTSetThreadName
_QTStringForOSType
_QTStringFromSMPTETime
_QTStringFromTime
_QTStringFromTimeRange
_QTTimeCompare
_QTTimeDecrement
_QTTimeFormatterCopyProperty
_QTTimeFormatterCreate
_QTTimeFormatterCreateStringFromFloatTime
_QTTimeFormatterCreateStringFromRationalTime
_QTTimeFormatterGetFloatTimeFromString
_QTTimeFormatterGetLocale
_QTTimeFormatterGetRationalTimeFromString
_QTTimeFormatterGetTypeID
_QTTimeFormatterSetProperty
_QTTimeFromString
_QTTimeInTimeRange
_QTTimeIncrement
_QTTimeIsIndefinite
_QTTimeRangeEnd
_QTTimeRangeFromString
_QTTrackAudioBassAttribute
_QTTrackAudioGainAttribute
_QTTrackAudioIsMutedAttribute
_QTTrackAudioTrebleAttribute
_QTTrackBalanceAttribute
_QTTrackBalanceDidChangeNotification
_QTTrackBassDidChangeNotification
_QTTrackBoundsAttribute
_QTTrackCanDRMInteractWithUserAttribute
_QTTrackChapterlistAttribute
_QTTrackContentsAttribute
_QTTrackCreationTimeAttribute
_QTTrackDeinterlaceVideoAttribute
_QTTrackDimensionsAttribute
_QTTrackDisplayNameAttribute
_QTTrackEnabledAttribute
_QTTrackFormatSummaryAttribute
_QTTrackHasApertureModeDimensionsAttribute
_QTTrackHasAudioAttribute
_QTTrackHighQualityVideoAttribute
_QTTrackHrefAttribute
_QTTrackIDAttribute
_QTTrackIsChapterTrackAttribute
_QTTrackIsDRMAuthorizedAttribute
_QTTrackIsDRMProtectedAttribute
_QTTrackIsVisualAttribute
_QTTrackLanguageAttribute
_QTTrackLayerAttribute
_QTTrackMaskAttribute
_QTTrackMatrixAttribute
_QTTrackMediaSubTypeAttribute
_QTTrackMediaTypeAttribute
_QTTrackMediaTypeInMediaAttribute
_QTTrackModificationTimeAttribute
_QTTrackMutedDidChangeNotification
_QTTrackNeverPurgeTrackAttribute
_QTTrackOperationColorAttribute
_QTTrackPositionAttribute
_QTTrackPreloadRangeAttribute
_QTTrackPreloadTrackAttribute
_QTTrackRangeAttribute
_QTTrackScaledBoundsAttribute
_QTTrackSingleFieldVideoAttribute
_QTTrackSourceDimensionsAttribute
_QTTrackSourcePositionAttribute
_QTTrackTimeScaleAttribute
_QTTrackTransferModeAttribute
_QTTrackTrebleDidChangeNotification
_QTTrackUsageInMovieAttribute
_QTTrackUsageInPosterAttribute
_QTTrackUsageInPreviewAttribute
_QTTrackVolumeAttribute
_QTTrackVolumeDidChangeNotification
_QTUICopyMeasurements
_QTUIDraw
_QTUIHitTest
_QTUIIsFlippedKey
_QTUIIsFocusedKey
_QTUIMeasurementBoundsKey
_QTUIMeasurementContentBoundsKey
_QTUIMeasurementExtentKey
_QTUIMeasurementGlyphColorKey
_QTUIMeasurementMaximumSizeKey
_QTUIMeasurementMinimumSizeKey
_QTUIMeasurementNaturalSizeKey
_QTUIMeasurementThumbBoundsKey
_QTUIMeasurementTrackBoundsKey
_QTUISizeKey
_QTUISizeLarge
_QTUISizeMini
_QTUISizeRegular
_QTUISizeSmall
_QTUIStateActive
_QTUIStateDisabled
_QTUIStateInactive
_QTUIStateKey
_QTUIStatePressed
_QTUIValueKey
_QTUIVariantKey
_QTUIWidgetBackground
_QTUIWidgetBackgroundBorderKey
_QTUIWidgetBackgroundCornerRadiusKey
_QTUIWidgetBackgroundHighlightedFractionKey
_QTUIWidgetButton
_QTUIWidgetContainer
_QTUIWidgetContainerFillVariant
_QTUIWidgetContainerOutlineVariant
_QTUIWidgetContainerRoundLeftEdgeKey
_QTUIWidgetContainerRoundRightEdgeKey
_QTUIWidgetImage
_QTUIWidgetImageHUDVariant
_QTUIWidgetImageNormalVariant
_QTUIWidgetImageValueAudioVolumeHighGlyph
_QTUIWidgetImageValueAudioVolumeLowGlyph
_QTUIWidgetImageValueAudioVolumeMediumGlyph
_QTUIWidgetImageValueAudioVolumeMutedGlyph
_QTUIWidgetImageValueAudioVolumeOffGlyph
_QTUIWidgetImageValueBackwardGlyph
_QTUIWidgetImageValueBeginningGlyph
_QTUIWidgetImageValueEndGlyph
_QTUIWidgetImageValueEnterFullscreenGlyph
_QTUIWidgetImageValueExitFullscreenGlyph
_QTUIWidgetImageValueForwardGlyph
_QTUIWidgetImageValueNextGlyph
_QTUIWidgetImageValuePauseGlyph
_QTUIWidgetImageValuePlayGlyph
_QTUIWidgetImageValuePreviousGlyph
_QTUIWidgetImageValueRetreat30Glyph
_QTUIWidgetImageValueStopGlyph
_QTUIWidgetKey
_QTUIWidgetPopUpBackground
_QTUIWidgetPopUpBackgroundCornerRadiusKey
_QTUIWidgetSlider
_QTUIWidgetSliderAvailableRangesKey
_QTUIWidgetSliderDrawOutlineKey
_QTUIWidgetSliderHighlightedRangesKey
_QTUIWidgetSliderIndicatorOnlyKey
_QTUIWidgetSliderNoIndicatorKey
_QTUIWidgetSliderOrientationHorizontal
_QTUIWidgetSliderOrientationKey
_QTUIWidgetSliderOrientationVertical
_QTUIWidgetSliderRoundLeftEdgeKey
_QTUIWidgetSliderRoundRightEdgeKey
_QTUIWidgetSliderThumb
_QTUnionTimeRange
_QTVideoRendererWebKitOnlyNewImageAvailableNotification
_QTZeroTime
_kQTTimeFormatterComponentDays
_kQTTimeFormatterComponentHours
_kQTTimeFormatterComponentMinutes
_kQTTimeFormatterComponentOrder
_kQTTimeFormatterComponentOrderBigEndian
_kQTTimeFormatterComponentOrderLittleEndian
_kQTTimeFormatterComponentSeconds
_kQTTimeFormatterComponentSeparator
_kQTTimeFormatterDecimalSeparator
_kQTTimeFormatterDigitGroupingSeparator
_kQTTimeFormatterMaximumFractionDigits
_kQTTimeFormatterMaximumIntegerDigits
_kQTTimeFormatterMinimumFractionDigits
_kQTTimeFormatterMinimumIntegerDigits
_kQTTimeFormatterNegativePrefix
_kQTTimeFormatterNegativeSuffix
_kQTTimeFormatterNonfiniteSymbol
_kQTTimeFormatterOptionalComponents
_kQTTimeFormatterPositivePrefix
_kQTTimeFormatterPositiveSuffix
_kQTTimeFormatterRequiredComponents
_kQTTimeFormatterShowsSignInAllComponents
_kQTTimeFormatterUsesDigitGroupingSeparator
_APP_SANDBOX_READ
_APP_SANDBOX_READ_WRITE
_ATSFontGetHorizontalMetrics
_ATSUBreakLine
_ATSUClearStyle
_ATSUCreateStyle
_ATSUCreateTextLayout
_ATSUDisposeStyle
_ATSUDisposeTextLayout
_ATSUDrawText
_ATSUFindFontFromName
_ATSUGetAttribute
_ATSUGetGlyphBounds
_ATSUGetLayoutControl
_ATSUGetSoftLineBreaks
_ATSUGetTextLocation
_ATSUMeasureTextImage
_ATSUSetAttributes
_ATSUSetLayoutControls
_ATSUSetRunStyle
_ATSUSetTextPointerLocation
_ATSUSetTransientFontMatching
_AVAssetAssociatedSubtitlesTrackReferencesKey
_AVAssetChapterListTrackReferencesKey
_AVChannelLayoutKey
_AVFileTypeQuickTimeMovie
_AVFormatIDKey
_AVMediaTypeAudio
_AVMediaTypeClosedCaption
_AVMediaTypeText
_AVMediaTypeTimecode
_AVMediaTypeVideo
_AVNumberOfChannelsKey
_AVSampleRateKey
_AVTrackAssociationTypeAudioFallback
_AVURLAssetPreferPreciseDurationAndTimingKey
_AVVideoCodecAppleProRes422
_AVVideoCodecAppleProRes4444
_AVVideoCodecH264
_AVVideoCodecKey
_AVVideoColorPrimariesKey
_AVVideoColorPrimaries_ITU_R_709_2
_AVVideoColorPropertiesKey
_AVVideoHeightKey
_AVVideoTransferFunctionKey
_AVVideoTransferFunction_ITU_R_709_2
_AVVideoWidthKey
_AVVideoYCbCrMatrixKey
_AVVideoYCbCrMatrix_ITU_R_709_2
_AudioFormatGetProperty
_AudioFormatGetPropertyInfo
_AudioObjectAddPropertyListener
_AudioObjectGetPropertyData
_AudioObjectGetPropertyDataSize
_AudioObjectRemovePropertyListener
_AudioObjectSetPropertyData
_CAImageQueueCollect
_CAImageQueueCreate
_CAImageQueueDeleteBuffer
_CAImageQueueFlush
_CAImageQueueGetCapacity
_CAImageQueueGetDisplayMask
_CAImageQueueGetLatestTime
_CAImageQueueGetReleasedImageInfo
_CAImageQueueGetUnconsumedImageCount
_CAImageQueueInsertImage
_CAImageQueueInvalidate
_CAImageQueueRegisterBuffer
_CAImageQueueRegisterIOSurfaceBuffer
_CAImageQueueRegisterPixelBuffer
_CAImageQueueSetFlags
_CAImageQueueSetOwner
_CAImageQueueSetSize
_CFAbsoluteTimeGetCurrent
_CFAllocatorAllocate
_CFAllocatorCreate
_CFAllocatorDeallocate
_CFArrayAppendValue
_CFArrayApplyFunction
_CFArrayCreate
_CFArrayCreateCopy
_CFArrayCreateMutable
_CFArrayGetCount
_CFArrayGetTypeID
_CFArrayGetValueAtIndex
_CFAttributedStringBeginEditing
_CFAttributedStringCreateMutable
_CFAttributedStringCreateWithSubstring
_CFAttributedStringEndEditing
_CFAttributedStringGetAttribute
_CFAttributedStringGetAttributeAndLongestEffectiveRange
_CFAttributedStringGetAttributes
_CFAttributedStringGetAttributesAndLongestEffectiveRange
_CFAttributedStringGetLength
_CFAttributedStringGetString
_CFAttributedStringReplaceString
_CFAttributedStringSetAttributes
_CFBagAddValue
_CFBagContainsValue
_CFBagCreateMutable
_CFBagRemoveValue
_CFBooleanGetValue
_CFBundleCopyBundleLocalizations
_CFBundleCopyLocalizationsForPreferences
_CFBundleCopyResourceURL
_CFBundleCopyResourceURLForLocalization
_CFBundleGetBundleWithIdentifier
_CFBundleGetValueForInfoDictionaryKey
_CFCopyDescription
_CFCopyTypeIDDescription
_CFDataCreateWithBytesNoCopy
_CFDataGetBytePtr
_CFDataGetBytes
_CFDataGetLength
_CFDataGetTypeID
_CFDictionaryAddValue
_CFDictionaryApplyFunction
_CFDictionaryContainsKey
_CFDictionaryCreate
_CFDictionaryCreateMutable
_CFDictionaryCreateMutableCopy
_CFDictionaryGetCount
_CFDictionaryGetKeysAndValues
_CFDictionaryGetTypeID
_CFDictionaryGetValue
_CFDictionaryGetValueIfPresent
_CFDictionaryRemoveAllValues
_CFDictionaryRemoveValue
_CFDictionarySetValue
_CFEqual
_CFGetAllocator
_CFGetTypeID
_CFHash
_CFLocaleGetIdentifier
_CFLocaleGetSystem
_CFMachPortCreate
_CFMachPortCreateRunLoopSource
_CFMachPortCreateWithPort
_CFMachPortGetPort
_CFMachPortInvalidate
_CFMakeCollectable
_CFNotificationCenterAddObserver
_CFNotificationCenterGetDistributedCenter
_CFNotificationCenterGetLocalCenter
_CFNotificationCenterPostNotification
_CFNotificationCenterRemoveObserver
_CFNumberCreate
_CFNumberFormatterCopyProperty
_CFNumberFormatterCreate
_CFNumberFormatterCreateStringWithValue
_CFNumberFormatterGetLocale
_CFNumberFormatterSetProperty
_CFNumberGetTypeID
_CFNumberGetValue
_CFPreferencesCopyAppValue
_CFPreferencesCopyValue
_CFPreferencesGetAppBooleanValue
_CFPropertyListCreateFromXMLData
_CFRelease
_CFRetain
_CFRunLoopAddObserver
_CFRunLoopAddSource
_CFRunLoopAddTimer
_CFRunLoopGetCurrent
_CFRunLoopGetMain
_CFRunLoopObserverCreate
_CFRunLoopObserverInvalidate
_CFRunLoopRemoveSource
_CFRunLoopRun
_CFRunLoopRunInMode
_CFRunLoopSourceCreate
_CFRunLoopSourceGetContext
_CFRunLoopSourceInvalidate
_CFRunLoopSourceSignal
_CFRunLoopStop
_CFRunLoopTimerCreate
_CFRunLoopTimerInvalidate
_CFRunLoopTimerSetNextFireDate
_CFRunLoopWakeUp
_CFSetAddValue
_CFSetApplyFunction
_CFSetContainsValue
_CFSetCreate
_CFSetCreateMutable
_CFSetGetCount
_CFSetGetValues
_CFSetRemoveValue
_CFStringAppend
_CFStringAppendFormat
_CFStringCompare
_CFStringCreateCopy
_CFStringCreateMutable
_CFStringCreateMutableCopy
_CFStringCreateWithCString
_CFStringCreateWithCharacters
_CFStringCreateWithFormat
_CFStringGetCharacters
_CFStringGetDoubleValue
_CFStringGetIntValue
_CFStringGetLength
_CFStringGetSystemEncoding
_CFStringGetTypeID
_CFStringInsert
_CFStringLowercase
_CFURLCopyHostName
_CFURLCopyPathExtension
_CFURLCreateDataAndPropertiesFromResource
_CFURLCreateStringByReplacingPercentEscapes
_CFURLCreateWithBytes
_CFURLCreateWithString
_CFURLGetByteRangeForComponent
_CFURLGetBytes
_CFUUIDCreate
_CFUUIDCreateString
_CGAffineTransformConcat
_CGAffineTransformIdentity
_CGAffineTransformInvert
_CGAffineTransformMakeRotation
_CGAffineTransformMakeScale
_CGAffineTransformMakeTranslation
_CGAffineTransformRotate
_CGBitmapContextCreate
_CGBitmapContextCreateImage
_CGColorCreate
_CGColorCreateCopy
_CGColorCreateGenericGray
_CGColorCreateGenericRGB
_CGColorEqualToColor
_CGColorGetAlpha
_CGColorGetColorSpace
_CGColorGetComponents
_CGColorGetConstantColor
_CGColorGetNumberOfComponents
_CGColorGetTypeID
_CGColorRelease
_CGColorSpaceCreateCalibratedRGB
_CGColorSpaceCreateDeviceCMYK
_CGColorSpaceCreateDeviceGray
_CGColorSpaceCreateDeviceRGB
_CGColorSpaceCreateDisplayRGB
_CGColorSpaceCreateWithICCProfile
_CGColorSpaceCreateWithName
_CGColorSpaceCreateWithPlatformColorSpace
_CGColorSpaceEqualToColorSpace
_CGColorSpaceGetNumberOfComponents
_CGColorSpaceRelease
_CGColorSpaceRetain
_CGContextAddArc
_CGContextAddArcToPoint
_CGContextAddLineToPoint
_CGContextAddPath
_CGContextAddRect
_CGContextBeginPath
_CGContextBeginTransparencyLayer
_CGContextBeginTransparencyLayerWithRect
_CGContextClear
_CGContextClearRect
_CGContextClip
_CGContextClipToMask
_CGContextClipToRect
_CGContextClosePath
_CGContextConcatCTM
_CGContextConvertRectToDeviceSpace
_CGContextConvertRectToUserSpace
_CGContextConvertSizeToDeviceSpace
_CGContextConvertSizeToUserSpace
_CGContextCopyDeviceColorSpace
_CGContextDrawImage
_CGContextDrawLayerInRect
_CGContextDrawLinearGradient
_CGContextDrawPDFPage
_CGContextEOFillPath
_CGContextEndTransparencyLayer
_CGContextFillPath
_CGContextFillRect
_CGContextFillRects
_CGContextFlush
_CGContextGetBaseCTM
_CGContextGetCTM
_CGContextGetClipBoundingBox
_CGContextGetUserSpaceToDeviceSpaceTransform
_CGContextMoveToPoint
_CGContextRelease
_CGContextReplacePathWithStrokedPath
_CGContextRestoreGState
_CGContextRotateCTM
_CGContextSaveGState
_CGContextScaleCTM
_CGContextSetAllowsAntialiasing
_CGContextSetAlpha
_CGContextSetBlendMode
_CGContextSetCompositeOperation
_CGContextSetFillColorSpace
_CGContextSetFillColorWithColor
_CGContextSetGrayStrokeColor
_CGContextSetLineWidth
_CGContextSetRGBFillColor
_CGContextSetShadowWithColor
_CGContextSetShouldAntialias
_CGContextSetShouldSmoothFonts
_CGContextSetStrokeColorSpace
_CGContextSetStrokeColorWithColor
_CGContextSetStyle
_CGContextStrokePath
_CGContextTranslateCTM
_CGDataProviderCreateWithData
_CGDataProviderCreateWithURL
_CGDataProviderRelease
_CGDisplayBounds
_CGDisplayCurrentMode
_CGDisplayIDToOpenGLDisplayMask
_CGDisplayMirrorsDisplay
_CGDisplayRegisterReconfigurationCallback
_CGDisplayUsesOpenGLAcceleration
_CGEventCreateData
_CGGetActiveDisplayList
_CGGradientCreateWithColorComponents
_CGGradientCreateWithColors
_CGGradientGetTypeID
_CGGradientRelease
_CGImageCreate
_CGImageCreateCopyWithColorSpace
_CGImageGetAlphaInfo
_CGImageGetBitsPerComponent
_CGImageGetBitsPerPixel
_CGImageGetBytesPerRow
_CGImageGetHeight
_CGImageGetTypeID
_CGImageGetWidth
_CGImageRelease
_CGImageRetain
_CGImageSourceCopyPropertiesAtIndex
_CGImageSourceCreateImageAtIndex
_CGImageSourceCreateWithDataProvider
_CGLChoosePixelFormat
_CGLClearDrawable
_CGLCreateContext
_CGLDescribeRenderer
_CGLDestroyContext
_CGLDestroyPixelFormat
_CGLDestroyRendererInfo
_CGLFlushDrawable
_CGLGetParameter
_CGLLockContext
_CGLQueryRendererInfo
_CGLSetParameter
_CGLSetSurface
_CGLUnlockContext
_CGLUpdateContext
_CGLayerCreateWithContext
_CGLayerGetContext
_CGLayerGetSize
_CGLayerGetTypeID
_CGLayerRelease
_CGLayerRetain
_CGMainDisplayID
_CGPDFDocumentCreateWithProvider
_CGPDFDocumentGetPage
_CGPDFPageGetBoxRect
_CGPDFPageGetRotationAngle
_CGPathAddArc
_CGPathCloseSubpath
_CGPathCreateMutable
_CGPathMoveToPoint
_CGPointCreateDictionaryRepresentation
_CGPointMakeWithDictionaryRepresentation
_CGPointZero
_CGRectApplyAffineTransform
_CGRectContainsPoint
_CGRectContainsRect
_CGRectCreateDictionaryRepresentation
_CGRectDivide
_CGRectEqualToRect
_CGRectGetHeight
_CGRectGetMaxX
_CGRectGetMaxY
_CGRectGetMidX
_CGRectGetMidY
_CGRectGetMinX
_CGRectGetMinY
_CGRectGetWidth
_CGRectInset
_CGRectIntegral
_CGRectIntersection
_CGRectIntersectsRect
_CGRectIsEmpty
_CGRectMakeWithDictionaryRepresentation
_CGRectNull
_CGRectOffset
_CGRectUnion
_CGRectZero
_CGSAddSurface
_CGSBindSurface
_CGSDisableUpdate
_CGSFlushSurface
_CGSGetRegionData
_CGSGetWindowSharingState
_CGSIntersectRegion
_CGSMainConnectionID
_CGSMoveSurface
_CGSNewEmptyRegion
_CGSNewRegionWithRect
_CGSNewWindow
_CGSOrderSurface
_CGSQuadrangleToRegion
_CGSReenableUpdate
_CGSReleaseRegion
_CGSReleaseWindow
_CGSRemoveSurface
_CGSSetSurfaceBounds
_CGSSetSurfaceColorSpace
_CGSSetSurfaceOpacity
_CGSSetWindowAutofill
_CGSSetWindowShapeWithWeighting
_CGSSetWindowSharingState
_CGSizeCreateDictionaryRepresentation
_CGSizeMakeWithDictionaryRepresentation
_CGSizeZero
_CGStyleCreateFocusRing
_CGStyleRelease
_CGWindowContextCreate
_CGWindowLevelForKey
_CMAudioFormatDescriptionCopyAsBigEndianSoundDescriptionBlockBuffer
_CMAudioFormatDescriptionCreate
_CMAudioFormatDescriptionGetChannelLayout
_CMAudioFormatDescriptionGetMagicCookie
_CMAudioFormatDescriptionGetRichestDecodableFormat
_CMAudioFormatDescriptionGetStreamBasicDescription
_CMBaseObjectGetVTable
_CMBlockBufferAccessDataBytes
_CMBlockBufferCreateContiguous
_CMBlockBufferCreateEmpty
_CMBlockBufferGetDataLength
_CMBlockBufferGetDataPointer
_CMBlockBufferIsRangeContiguous
_CMByteStreamCreateForFileURL
_CMClockGetHostTimeClock
_CMCloseProfile
_CMCopyDictionaryOfAttachments
_CMFormatDescriptionEqual
_CMFormatDescriptionGetExtension
_CMFormatDescriptionGetExtensions
_CMFormatDescriptionGetMediaSubType
_CMFormatDescriptionGetMediaType
_CMGetAttachment
_CMGetProfileByAVID
_CMIODeviceProcessAVCCommand
_CMIOFileWritingControlTokenAllVolumesAreOutOfDiskSpace
_CMIOFileWritingControlTokenBufferIsIncompatibleWithCurrentFile
_CMIOFileWritingControlTokenCurrentVolumeIsOutOfDiskSpace
_CMIOFileWritingControlTokenGetDiscontinuityFlags
_CMIOFileWritingControlTokenGetFileDuration
_CMIOFileWritingControlTokenGetFileSize
_CMIOFileWritingControlTokenGetFileWriterOptionsDictionary
_CMIOFileWritingControlTokenGetSampleBuffer
_CMIOFileWritingControlTokenMaximumFileSizeHasBeenReached
_CMIOFileWritingControlTokenMaximumRecordDurationHasBeenReached
_CMIOFileWritingControlTokenPauseWriting
_CMIOFileWritingControlTokenResumeWriting
_CMIOFileWritingControlTokenStartWriting
_CMIOFileWritingControlTokenStopWriting
_CMIOFileWritingControlTokenUnitCanStartWriting
_CMIOFileWritingControlTokenUnitIsPaused
_CMIOFileWritingControlTokenUnitIsWriting
_CMIOGraphAddPropertyListener
_CMIOGraphConnectNodeInput
_CMIOGraphCountNodeConnections
_CMIOGraphCreate
_CMIOGraphCreateNode
_CMIOGraphDisconnectNodeInput
_CMIOGraphGetIndNode
_CMIOGraphGetNodeCount
_CMIOGraphGetNodeInfo
_CMIOGraphGetProperty
_CMIOGraphGetPropertyInfo
_CMIOGraphInitialize
_CMIOGraphRelease
_CMIOGraphRemoveNode
_CMIOGraphRemovePropertyListener
_CMIOGraphRetain
_CMIOGraphSetProperty
_CMIOGraphStart
_CMIOGraphStop
_CMIOGraphUninitialize
_CMIOObjectAddPropertyListener
_CMIOObjectGetPropertyData
_CMIOObjectGetPropertyDataSize
_CMIOObjectHasProperty
_CMIOObjectIsPropertySettable
_CMIOObjectRemovePropertyListener
_CMIOObjectSetPropertyData
_CMIOSampleBufferGetDiscontinuityFlags
_CMIOSampleBufferSetDiscontinuityFlags
_CMIOUnitRelease
_CMIOUnitUtilityCreateAudioCompressionOptionsDictionary
_CMNotificationCenterAddListener
_CMNotificationCenterGetDefaultLocalCenter
_CMNotificationCenterRemoveListener
_CMSampleBufferCreate
_CMSampleBufferCreateCopy
_CMSampleBufferDataIsReady
_CMSampleBufferGetAudioBufferListWithRetainedBlockBuffer
_CMSampleBufferGetAudioStreamPacketDescriptions
_CMSampleBufferGetDataBuffer
_CMSampleBufferGetFormatDescription
_CMSampleBufferGetImageBuffer
_CMSampleBufferGetNumSamples
_CMSampleBufferGetOutputDecodeTimeStamp
_CMSampleBufferGetOutputDuration
_CMSampleBufferGetOutputPresentationTimeStamp
_CMSampleBufferGetPresentationTimeStamp
_CMSampleBufferGetSampleSizeArray
_CMSampleBufferGetSampleTimingInfoArray
_CMSetAttachments
_CMSwapBigEndianImageDescriptionToHost
_CMSwapBigEndianSoundDescriptionToHost
_CMSwapBigEndianTextDescriptionToHost
_CMSyncConvertTime
_CMTextFormatDescriptionCopyAsBigEndianTextDescriptionBlockBuffer
_CMTimeAdd
_CMTimeCompare
_CMTimeConvertScale
_CMTimeCopyAsDictionary
_CMTimeGetSeconds
_CMTimeMake
_CMTimeMakeFromDictionary
_CMTimeMakeWithSeconds
_CMTimeMaximum
_CMTimeMinimum
_CMTimeRangeMake
_CMTimeSubtract
_CMTimebaseAddTimerDispatchSource
_CMTimebaseGetEffectiveRate
_CMTimebaseGetRate
_CMTimebaseGetTime
_CMTimebaseRemoveTimerDispatchSource
_CMTimebaseSetTimerDispatchSourceNextFireTime
_CMVideoFormatDescriptionCopyAsBigEndianImageDescriptionBlockBuffer
_CMVideoFormatDescriptionGetDimensions
_CMVideoFormatDescriptionGetExtensionKeysCommonWithImageBuffers
_CVBufferGetAttachment
_CVBufferGetAttachments
_CVBufferRelease
_CVBufferRemoveAttachment
_CVBufferRetain
_CVBufferSetAttachment
_CVBufferSetAttachments
_CVGetCurrentHostTime
_CVGetHostClockFrequency
_CVImageBufferCreateColorSpaceFromAttachments
_CVImageBufferGetCleanRect
_CVImageBufferGetColorSpace
_CVImageBufferGetEncodedSize
_CVImageBufferHasCleanRect
_CVImageBufferIsFlipped
_CVOpenGLBufferAttach
_CVOpenGLBufferGetDisplayMask
_CVOpenGLBufferGetSurfaceID
_CVOpenGLBufferGetTypeID
_CVOpenGLBufferPoolCreate
_CVOpenGLBufferPoolCreateOpenGLBuffer
_CVOpenGLBufferPoolGetOpenGLBufferAttributes
_CVOpenGLBufferPoolRelease
_CVOpenGLBufferRelease
_CVOpenGLTextureCacheCreate
_CVOpenGLTextureCacheCreateTextureFromImage
_CVOpenGLTextureCacheFlush
_CVOpenGLTextureCacheRelease
_CVOpenGLTextureCopyBacking
_CVOpenGLTextureGetCleanTexCoords
_CVOpenGLTextureGetName
_CVOpenGLTextureGetTarget
_CVOpenGLTextureGetTypeID
_CVOpenGLTextureRelease
_CVPixelBufferCreate
_CVPixelBufferCreateFromCVImageBufferRef
_CVPixelBufferCreateResolvedAttributesDictionary
_CVPixelBufferCreateWithBytes
_CVPixelBufferCreateWithIOSurface
_CVPixelBufferCreateWithPlanarBytes
_CVPixelBufferGetBaseAddress
_CVPixelBufferGetBufferBacking
_CVPixelBufferGetBytesPerRow
_CVPixelBufferGetDataSize
_CVPixelBufferGetHeight
_CVPixelBufferGetIOSurface
_CVPixelBufferGetPixelFormatType
_CVPixelBufferGetTypeID
_CVPixelBufferGetWidth
_CVPixelBufferIsCompatibleWithAttributes
_CVPixelBufferLockBaseAddress
_CVPixelBufferRelease
_CVPixelBufferRetain
_CVPixelBufferUnlockBaseAddress
_CVPixelFormatDescriptionArrayCreateWithAllPixelFormatTypes
_CVPixelFormatDescriptionCreateWithPixelFormatType
_DisposePtr
_FMGetATSFontRefFromFont
_FigAtomicIncrement32
_FigBlockBufferRelease
_FigBlockBufferRetain
_FigCFCreatePropertyListFromBundleIdentifierOnPlatform
_FigCaptionCommandCreateFromPropertyList
_FigCheckIsCurrentDispatchQueue
_FigCopySetOfFormatReaderSupportedFileExtensions
_FigCopySetOfFormatReaderSupportedMIMETypes
_FigFormatDescriptionRelease
_FigFormatDescriptionRetain
_FigFormatReaderCreateForStream
_FigMediaValidatorCreate
_FigMediaValidatorRelease
_FigPlaybackItemGetFigBaseObject
_FigPlayerFileCreate
_FigPlayerGetFigBaseObject
_FigPlayerStreamCreate
_FigRemakerIsFormatDescriptionProtected
_FigSampleBufferRelease
_FigSampleBufferRetain
_FigSemaphoreCreate
_FigSemaphoreDestroy
_FigSemaphoreSignal
_FigSemaphoreWaitRelative
_FigShared_CopyDiskCacheCheckedInIDs
_FigShared_DeleteFromDiskCache
_FigSubtitleSampleCreateFromPropertyList
_FigThreadGetMaxLogicalCoreCount
_FigTrackReaderGetFigBaseObject
_FigVisualContextCopyImageForTime
_FigVisualContextCreateBasic
_FigVisualContextIsNewImageAvailable
_FigVisualContextRelease
_FigVisualContextRetain
_FigVisualContextSetImageAvailableImmediateCallback
_FigVisualContextSetImageAvailableSequentialCallback
_FigVisualContextTask
_Fix2Long
_GetEventParameter
_GetHandleSize
_GetScriptVariable
_HLock
_HUnlock
_IOAccelFindAccelerator
_IOIteratorNext
_IOMasterPort
_IOObjectCopyClass
_IOPMAssertionCreateWithName
_IOPMAssertionRelease
_IORegistryEntryFromPath
_IORegistryEntryGetPath
_IOServiceGetMatchingServices
_IOServiceMatching
_IOSurfaceLookupFromMachPort
_MTCopyStringsForMediaTypeAndSubType
_MemError
_NDR_record
_NSAccessibilityActionDescription
_NSAccessibilityDecrementAction
_NSAccessibilityFocusedAttribute
_NSAccessibilityHorizontalOrientationValue
_NSAccessibilityImageRole
_NSAccessibilityIncrementAction
_NSAccessibilityMaxValueAttribute
_NSAccessibilityMinValueAttribute
_NSAccessibilityOrientationAttribute
_NSAccessibilityRoleAttribute
_NSAccessibilityRoleDescription
_NSAccessibilitySliderRole
_NSAccessibilityTitleAttribute
_NSAccessibilityValueAttribute
_NSAllocateCollectable
_NSApp
_NSAppKitVersionNumber
_NSApplicationWillTerminateNotification
_NSCalibratedRGBColorSpace
_NSClassFromString
_NSContainsRect
_NSDefaultRunLoopMode
_NSDeviceRGBColorSpace
_NSDisableScreenUpdates
_NSDivideRect
_NSEnableScreenUpdates
_NSEqualPoints
_NSEqualRects
_NSEqualSizes
_NSEventTrackingRunLoopMode
_NSFilePathErrorKey
_NSFilenamesPboardType
_NSFontAttributeName
_NSForegroundColorAttributeName
_NSFrameRectWithWidthUsingOperation
_NSGenericException
_NSGraphicsContextDestinationAttributeName
_NSImageHintCTM
_NSImageNameDropDownIndicatorTemplate
_NSInsetRect
_NSIntegralRect
_NSInternalInconsistencyException
_NSIntersectionRect
_NSIntersectsRect
_NSInvalidArgumentException
_NSIsControllerMarker
_NSIsEmptyRect
_NSKeyValueChangeNewKey
_NSKeyValueChangeNotificationIsPriorKey
_NSKeyValueChangeOldKey
_NSLocalizedDescriptionKey
_NSLocalizedRecoverySuggestionErrorKey
_NSLog
_NSMaxValueBinding
_NSMinValueBinding
_NSModalPanelRunLoopMode
_NSMouseInRect
_NSMultipleValuesMarker
_NSNoSelectionMarker
_NSNotApplicableMarker
_NSOSStatusErrorDomain
_NSObservedObjectKey
_NSOffsetRect
_NSParagraphStyleAttributeName
_NSPointFromString
_NSPointInRect
_NSPopAutoreleasePool
_NSPushAutoreleasePool
_NSRangeException
_NSRectClip
_NSRectFill
_NSRectFillListUsingOperation
_NSRectFromString
_NSRunLoopCommonModes
_NSSelectorFromString
_NSSetFocusRingStyle
_NSShadowAttributeName
_NSSizeFromString
_NSStringFromClass
_NSStringFromPoint
_NSStringFromRect
_NSStringFromSelector
_NSStringFromSize
_NSTIFFPboardType
_NSTemporaryDirectory
_NSThreadWillExitNotification
_NSURLErrorKey
_NSURLPboardType
_NSUnderlyingErrorKey
_NSViewBoundsDidChangeNotification
_NSViewFrameDidChangeNotification
_NSWindowDidBecomeKeyNotification
_NSWindowDidBecomeMainNotification
_NSWindowDidMoveNotification
_NSWindowDidOrderOnScreenNotification
_NSWindowDidResignKeyNotification
_NSWindowDidResignMainNotification
_NSWindowDidResizeNotification
_NSWorkspaceSessionDidResignActiveNotification
_NSWorkspaceWillSleepNotification
_NSZeroPoint
_NSZeroRect
_NSZeroSize
_NSZoneCalloc
_NSZoneFree
_NSZoneMalloc
_NewPtr
_OBJC_CLASS_$_AVAssetReader
_OBJC_CLASS_$_AVAssetReaderTrackOutput
_OBJC_CLASS_$_AVAssetTrack
_OBJC_CLASS_$_AVAssetWriter
_OBJC_CLASS_$_AVAssetWriterInput
_OBJC_CLASS_$_AVAssetWriterInputGroup
_OBJC_CLASS_$_AVMutableMetadataItem
_OBJC_CLASS_$_AVURLAsset
_OBJC_CLASS_$_CABasicAnimation
_OBJC_CLASS_$_CAConstraint
_OBJC_CLASS_$_CAConstraintLayoutManager
_OBJC_CLASS_$_CAContext
_OBJC_CLASS_$_CAGradientLayer
_OBJC_CLASS_$_CALayer
_OBJC_CLASS_$_CATextLayer
_OBJC_CLASS_$_CATransaction
_OBJC_CLASS_$_CIContext
_OBJC_CLASS_$_CIFilter
_OBJC_CLASS_$_CIImage
_OBJC_CLASS_$_FigCaptionLayer
_OBJC_CLASS_$_NSActionCell
_OBJC_CLASS_$_NSApplication
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAttributedString
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBezierPath
_OBJC_CLASS_$_NSBitmapImageRep
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSButton
_OBJC_CLASS_$_NSButtonCell
_OBJC_CLASS_$_NSCGImageRep
_OBJC_CLASS_$_NSCache
_OBJC_CLASS_$_NSCalendarDate
_OBJC_CLASS_$_NSCell
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSClipView
_OBJC_CLASS_$_NSCoder
_OBJC_CLASS_$_NSColor
_OBJC_CLASS_$_NSColorSpace
_OBJC_CLASS_$_NSCondition
_OBJC_CLASS_$_NSControl
_OBJC_CLASS_$_NSCountedSet
_OBJC_CLASS_$_NSCursor
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSEnumerator
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSEvent
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFileHandle
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSFont
_OBJC_CLASS_$_NSFormatter
_OBJC_CLASS_$_NSGraphicsContext
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSImageRep
_OBJC_CLASS_$_NSImageView
_OBJC_CLASS_$_NSIndexSet
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSLock
_OBJC_CLASS_$_NSMapTable
_OBJC_CLASS_$_NSMatrix
_OBJC_CLASS_$_NSMenu
_OBJC_CLASS_$_NSMenuItem
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableAttributedString
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableParagraphStyle
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotification
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNotificationQueue
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSNumberFormatter
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSPDFImageRep
_OBJC_CLASS_$_NSPICTImageRep
_OBJC_CLASS_$_NSPanel
_OBJC_CLASS_$_NSParagraphStyle
_OBJC_CLASS_$_NSPopUpButton
_OBJC_CLASS_$_NSPopUpButtonCell
_OBJC_CLASS_$_NSProgress
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSScreen
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSShadow
_OBJC_CLASS_$_NSSlider
_OBJC_CLASS_$_NSSliderCell
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTableView
_OBJC_CLASS_$_NSTextView
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimeZone
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSTrackingArea
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSView
_OBJC_CLASS_$_NSWindow
_OBJC_CLASS_$_NSWorkspace
_OBJC_EHTYPE_$_NSException
_OBJC_EHTYPE_id
_OBJC_IVAR_$_NSButtonCell._altContents
_OBJC_IVAR_$_NSCell._cFlags
_OBJC_IVAR_$_NSCell._contents
_OBJC_IVAR_$_NSSliderCell._maxValue
_OBJC_IVAR_$_NSSliderCell._minValue
_OBJC_IVAR_$_NSView._subviews
_OBJC_METACLASS_$_CALayer
_OBJC_METACLASS_$_NSActionCell
_OBJC_METACLASS_$_NSButton
_OBJC_METACLASS_$_NSButtonCell
_OBJC_METACLASS_$_NSControl
_OBJC_METACLASS_$_NSEnumerator
_OBJC_METACLASS_$_NSFormatter
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSPopUpButton
_OBJC_METACLASS_$_NSPopUpButtonCell
_OBJC_METACLASS_$_NSSlider
_OBJC_METACLASS_$_NSSliderCell
_OBJC_METACLASS_$_NSValue
_OBJC_METACLASS_$_NSView
_OSAtomicAdd64
_OSAtomicCompareAndSwap32
_OSAtomicCompareAndSwap64
_OSAtomicCompareAndSwap64Barrier
_OSSpinLockLock
_OSSpinLockUnlock
_PtrToHand
_RFExportAddMetadataItem
_RFExportAddSource
_RFExportCreateCopy
_RFExportCreateFromTemplateName
_RFExportRelease
_RFExportSessionCreateFromExport
_RFExportSessionGetNotificationCenter
_RFExportSetDestination
_RFExportSetMetadataArray
_RFExportSourceCreateQTMovieFileSource
_RFExportSourceCreateWithMovieData
_RFExportSourceCreateWithURL
_UTTypeConformsTo
_UTTypeCreatePreferredIdentifierForTag
_VTCompressionSessionCreate
_VTPixelTransferSessionCreate
_VTPixelTransferSessionTransferImage
_VTSelectAndCreateVideoEncoderInstance
_VTSessionCopyProperty
_VTSessionSetProperties
_X2Fix
__Block_object_assign
__Block_object_dispose
__CFCopyServerVersionDictionary
__CFCopySystemVersionDictionary
__CFExecutableLinkedOnOrAfter
__CFRuntimeCreateInstance
__CFRuntimeGetClassWithTypeID
__CFRuntimeRegisterClass
__LSCopyApplicationInformationItem
__LSGetCurrentApplicationASN
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__NSCreateImageRef
__NSMethodExceptionProem
__NSWindowDidChangeWindowNumber
__Unwind_Resume
__ZSt9terminatev
__ZTVN10__cxxabiv117__class_type_infoE
__ZTVN10__cxxabiv120__si_class_type_infoE
__ZdaPv
__ZdlPv
__Znam
__Znwm
___CFConstantStringClassReference
___bzero
___cxa_begin_catch
___cxa_call_unexpected
___cxa_pure_virtual
___exp10
___gxx_personality_v0
___objc_personality_v0
___snprintf_chk
___sprintf_chk
___stack_chk_fail
___stack_chk_guard
___stderrp
___strncpy_chk
___toupper
__dispatch_main_q
__dispatch_queue_attr_concurrent
__dispatch_source_type_timer
__kCFSystemVersionProductNameKey
__kLSDisplayNameKey
__objc_empty_cache
__xpc_error_key_description
__xpc_runtime_is_app_sandboxed
__xpc_type_error
_bcopy
_calloc
_ceil
_ceilf
_class_getClassMethod
_dispatch_after
_dispatch_async
_dispatch_barrier_async
_dispatch_get_global_queue
_dispatch_group_create
_dispatch_group_enter
_dispatch_group_leave
_dispatch_group_wait
_dispatch_once
_dispatch_queue_create
_dispatch_release
_dispatch_resume
_dispatch_retain
_dispatch_set_target_queue
_dispatch_source_create
_dispatch_source_set_event_handler
_dispatch_sync
_dispatch_time
_exit
_exp2
_fig_log
_fig_log_CF2
_fig_note_initialize_work
_floor
_floorf
_fmax
_fmin
_fmod
_fprintf
_free
_frexp
_getpid
_gettimeofday
_gluCheckExtension
_hypot
_kCAAlignmentCenter
_kCAGravityCenter
_kCATransactionAnimationDuration
_kCATransactionDisableActions
_kCFAllocatorDefault
_kCFAllocatorNull
_kCFBooleanFalse
_kCFBooleanTrue
_kCFBundleVersionKey
_kCFCopyStringDictionaryKeyCallBacks
_kCFCopyStringSetCallBacks
_kCFNumberFormatterDecimalSeparator
_kCFNumberFormatterGroupingSeparator
_kCFNumberFormatterMaxFractionDigits
_kCFNumberFormatterMaxIntegerDigits
_kCFNumberFormatterMinFractionDigits
_kCFNumberFormatterMinIntegerDigits
_kCFNumberFormatterNegativePrefix
_kCFNumberFormatterNegativeSuffix
_kCFNumberFormatterPositivePrefix
_kCFNumberFormatterPositiveSuffix
_kCFNumberFormatterRoundingMode
_kCFNumberFormatterUseGroupingSeparator
_kCFPreferencesAnyHost
_kCFPreferencesCurrentUser
_kCFRunLoopCommonModes
_kCFRunLoopDefaultMode
_kCFTypeArrayCallBacks
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kCFTypeSetCallBacks
_kCGColorBlack
_kCGColorClear
_kCGColorSpaceGenericGray
_kCGColorSpaceGenericRGB
_kCGColorWhite
_kCGImagePropertyOrientation
_kCIContextColorCubeSize
_kCIContextOpenGLShareContext
_kCIContextOutputColorSpace
_kCIContextParametricColorMatching
_kCIContextUseSoftwareRenderer
_kCIContextWorkingColorSpace
_kCIFormatARGB16
_kCIFormatARGB8
_kCIFormatBGRA8
_kCIFormatCbYCrY8
_kCIFormatNil
_kCIFormatRGB16
_kCIFormatRGB8
_kCIFormatRGBA8
_kCIFormatYCbYCr8
_kCIImageColorSpace
_kCIImageFlipped
_kCIImageIgnorePixelFormatFor601Fixup
_kCIImageOpaque
_kCMFormatDescriptionExtension_BytesPerRow
_kCMFormatDescriptionExtension_Depth
_kCMFormatDescriptionExtension_FormatName
_kCMFormatDescriptionKey_CleanApertureHeightRational
_kCMFormatDescriptionKey_CleanApertureWidthRational
_kCMIOBlockBufferAttachmentKey_CVPixelBufferReference
_kCMIOFileWritingOptionsKey_AudioEnabled
_kCMIOFileWritingOptionsKey_FileCompletionCallback
_kCMIOFileWritingOptionsKey_MaximumFileSize
_kCMIOFileWritingOptionsKey_MaximumRecordDuration
_kCMIOFileWritingOptionsKey_OutputFilePath
_kCMIOFileWritingOptionsKey_TimecodeEnabled
_kCMIOFileWritingOptionsKey_VideoEnabled
_kCMIOImageQueueBaggageKey_SourceFrame
_kCMIOSampleBufferAttachmentKey_HDV1_PackData
_kCMIOSampleBufferAttachmentKey_HDV2_VAUX
_kCMIOSampleBufferAttachmentKey_HostTime
_kCMIOSampleBufferAttachmentKey_NoDataMarker
_kCMIOSampleBufferAttachmentKey_SMPTETime
_kCMTimeIndefinite
_kCMTimeInvalid
_kCMTimeNegativeInfinity
_kCMTimePositiveInfinity
_kCMTimeZero
_kCMTimebaseNotification_EffectiveRateChanged
_kCMTimebaseNotification_TimeJumped
_kCVBufferBackingWillDeallocate
_kCVBufferMovieTimeKey
_kCVBufferTimeScaleKey
_kCVBufferTimeValueKey
_kCVImageBufferCGColorSpaceKey
_kCVImageBufferCleanApertureHeightKey
_kCVImageBufferCleanApertureKey
_kCVImageBufferCleanApertureWidthKey
_kCVImageBufferColorPrimariesKey
_kCVImageBufferColorPrimaries_ITU_R_709_2
_kCVImageBufferColorPrimaries_SMPTE_C
_kCVImageBufferFieldCountKey
_kCVImageBufferGammaLevelKey
_kCVImageBufferPixelAspectRatioHorizontalSpacingKey
_kCVImageBufferPixelAspectRatioKey
_kCVImageBufferPixelAspectRatioVerticalSpacingKey
_kCVImageBufferTransferFunctionKey
_kCVImageBufferTransferFunction_ITU_R_709_2
_kCVImageBufferTransferFunction_UseGamma
_kCVImageBufferYCbCrMatrixKey
_kCVImageBufferYCbCrMatrix_ITU_R_601_4
_kCVImageBufferYCbCrMatrix_ITU_R_709_2
_kCVOpenGLBufferFlipped
_kCVOpenGLBufferHeight
_kCVOpenGLBufferInternalFormat
_kCVOpenGLBufferPoolMaximumBufferAgeKey
_kCVOpenGLBufferPoolMinimumBufferCountKey
_kCVOpenGLBufferTarget
_kCVOpenGLBufferWidth
_kCVPixelBufferCGBitmapContextCompatibilityKey
_kCVPixelBufferCGImageCompatibilityKey
_kCVPixelBufferHeightKey
_kCVPixelBufferIOSurfaceCoreAnimationCompatibilityKey
_kCVPixelBufferIOSurfacePropertiesKey
_kCVPixelBufferOpenGLCompatibilityKey
_kCVPixelBufferPixelFormatTypeKey
_kCVPixelBufferWidthKey
_kCVPixelFormatBitsPerBlock
_kCVPixelFormatBlockWidth
_kCVPixelFormatCGBitmapInfo
_kCVPixelFormatCGImageCompatibility
_kCVPixelFormatContainsAlpha
_kCVPixelFormatOpenGLCompatibility
_kFigChapterKey_Name
_kFigChapterKey_Time
_kFigFormatReaderInstantiationOption_PreferPreciseDurationAndTiming
_kFigMediaValidatorKey_RefMovieSecurityPolicy
_kFigMetadataCommonKey_AlbumName
_kFigMetadataCommonKey_Artist
_kFigMetadataCommonKey_Artwork
_kFigMetadataCommonKey_Author
_kFigMetadataCommonKey_Copyrights
_kFigMetadataCommonKey_CreationDate
_kFigMetadataCommonKey_Description
_kFigMetadataCommonKey_Format
_kFigMetadataCommonKey_LastModifiedDate
_kFigMetadataCommonKey_Title
_kFigMetadataCommonKey_Type
_kFigMetadataFormat_ID3
_kFigMetadataFormat_QuickTimeMetadata
_kFigMetadataFormat_QuickTimeUserData
_kFigMetadataFormat_iTunes
_kFigMetadataItemProperty_DataType
_kFigMetadataItemProperty_Key
_kFigMetadataItemProperty_Keyspace
_kFigMetadataItemProperty_LanguageCode
_kFigMetadataItemProperty_Locale
_kFigMetadataItemProperty_Timestamp
_kFigMetadataItemProperty_Value
_kFigMetadataProperty_Format
_kFigMetadataProperty_Items
_kFigPlaybackItemAlternateInfoKey_ExcludeFromAutoSelection
_kFigPlaybackItemAlternateInfoKey_ExtendedLanguage
_kFigPlaybackItemAlternateInfoKey_Language
_kFigPlaybackItemAlternateInfoKey_Name
_kFigPlaybackItemAlternateInfoKey_TrackID
_kFigPlaybackItemAlternateType_Audio
_kFigPlaybackItemAlternateType_ChapterName
_kFigPlaybackItemAlternateType_Subtitle
_kFigPlaybackItemCommonMetadata_CommonKey
_kFigPlaybackItemCommonMetadata_Properties
_kFigPlaybackItemCommonMetadata_Value
_kFigPlaybackItemImageOptionsKey_MaxHeight
_kFigPlaybackItemImageOptionsKey_MaxWidth
_kFigPlaybackItemNotification_DidPlayToTheEnd
_kFigPlaybackItemNotification_DimensionsChanged
_kFigPlaybackItemNotification_FailedToBecomeReadyForInspection
_kFigPlaybackItemNotification_FailedToBecomeReadyForPlayback
_kFigPlaybackItemNotification_ItemWasRemovedFromPlayQueue
_kFigPlaybackItemNotification_PlayableRangeChanged
_kFigPlaybackItemNotification_ReadyForInspection
_kFigPlaybackItemNotification_ReadyForPlayback
_kFigPlaybackItemNotification_SeekableRangeChanged
_kFigPlaybackItemNotification_StreamLikelyToKeepUp
_kFigPlaybackItemNotification_StreamRanDry
_kFigPlaybackItemNotification_StreamUnlikelyToKeepUp
_kFigPlaybackItemNotification_TimeJumped
_kFigPlaybackItemNotification_TimebaseChanged
_kFigPlaybackItemParameter_Result
_kFigPlaybackItemPlayableTimeInterval_End
_kFigPlaybackItemPlayableTimeInterval_Start
_kFigPlaybackItemProperty_AudioDeviceChannelMap
_kFigPlaybackItemProperty_AvailableAlternateTrackGroups
_kFigPlaybackItemProperty_ChapterNames
_kFigPlaybackItemProperty_ChosenAlternateTrackIDDictionary
_kFigPlaybackItemProperty_ChosenTrackIDArray
_kFigPlaybackItemProperty_EnableDownloadWhenInPlayQueue
_kFigPlaybackItemProperty_EndTime
_kFigPlaybackItemProperty_ExpectedFileSize
_kFigPlaybackItemProperty_Metadata
_kFigPlaybackItemProperty_MovieMatrix
_kFigPlaybackItemProperty_PlayableTimeIntervals
_kFigPlaybackItemProperty_ReverseEndTime
_kFigPlaybackItemProperty_SeekableTimeIntervals
_kFigPlaybackItemProperty_TimePitchAlgorithm
_kFigPlaybackItemProperty_Timebase
_kFigPlaybackItemProperty_TrackIDArray
_kFigPlaybackItemTimePitchAlgorithm_Spectral
_kFigPlaybackItemTimePitchAlgorithm_Varispeed
_kFigPlaybackItemTrackProperty_Dimensions
_kFigPlaybackItemTrackProperty_EstimatedDataRate
_kFigPlaybackItemTrackProperty_FormatDescriptionArray
_kFigPlaybackItemTrackProperty_MediaType
_kFigPlaybackItemTrackProperty_NominalFrameRate
_kFigPlayerAction_None
_kFigPlayerAction_Stop
_kFigPlayerApertureMode_CleanAperture
_kFigPlayerApertureMode_EncodedPixels
_kFigPlayerApertureMode_ProductionAperture
_kFigPlayerNotification_ChapterNameChanged
_kFigPlayerNotification_ClosedCaptionCommand
_kFigPlayerNotification_RateDidChange
_kFigPlayerNotification_SubtitleChanged
_kFigPlayerNotification_TimedMetadata
_kFigPlayerNotification_VolumeDidChange
_kFigPlayerProperty_ActionAtEnd
_kFigPlayerProperty_ApertureMode
_kFigPlayerProperty_AudioDeviceUID
_kFigPlayerProperty_AutoSwitchStreamQuality
_kFigPlayerProperty_CurrentVideoFrameRate
_kFigPlayerProperty_DestinationPixelBufferAttributes
_kFigPlayerProperty_DisplayNonForcedSubtitles
_kFigPlayerProperty_DisplayTimedMetadata
_kFigPlayerProperty_EnableHardwareAcceleratedVideoDecoder
_kFigPlayerProperty_PerformanceDictionary
_kFigPlayerProperty_PostChapterNameChanges
_kFigPlayerProperty_PostClosedCaptionCommands
_kFigPlayerProperty_VisualContext
_kFigPlayerProperty_Volume
_kFigPlayerTimedMetadataNotificationKey_ValueArray
_kFigTrackProperty_Matrix
_kFigTrackProperty_MetadataReaderTypes
_kFigTrackProperty_QuickTimeMetadataReader
_kFigTrackProperty_QuickTimeUserDataReader
_kFigTrackProperty_Timescale
_kFigTrackProperty_Volume
_kFigUserDataKeyspace
_kFigiTunesMetadataKey_EncodedBy
_kIOMasterPortDefault
_kRFExportOption_UseQTSourceAlways
_kRFExportSession_ExportCompleteNotification
_kRFExportSession_ProgressNotification
_kUTTagClassFilenameExtension
_kUTTagClassOSType
_kUTTypeBMP
_kUTTypeJPEG
_kUTTypePNG
_kUTTypeQuickTimeMovie
_kVTCompressionPropertyKey_Usage
_kVTCompressionPropertyKey_VideoEncoderPixelBufferAttributes
_kVTDecompressionPropertyKey_FieldMode
_kVTDecompressionProperty_FieldMode_BothFields
_kVTDecompressionProperty_FieldMode_BottomFieldOnly
_kVTDecompressionProperty_FieldMode_DeinterlaceFields
_kVTDecompressionProperty_FieldMode_TopFieldOnly
_log10
_log2
_lrint
_mach_error_string
_mach_msg
_mach_msg_destroy
_mach_port_allocate
_mach_port_deallocate
_mach_port_destroy
_mach_port_insert_right
_mach_port_mod_refs
_mach_task_self_
_malloc
_memcpy
_memset
_memset_pattern16
_method_invoke
_mig_allocate
_mig_dealloc_reply_port
_mig_deallocate
_mig_get_reply_port
_mig_put_reply_port
_mk_timer_arm
_mk_timer_cancel
_mk_timer_create
_mk_timer_destroy
_modf
_msgtracer_log_with_keys
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_assign_weak
_objc_begin_catch
_objc_collectingEnabled
_objc_collecting_enabled
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_exception_throw
_objc_getProperty
_objc_loadWeak
_objc_msgSend
_objc_msgSendSuper2
_objc_msgSendSuper2_stret
_objc_msgSend_stret
_objc_read_weak
_objc_registerThreadWithCollector
_objc_setProperty
_objc_storeWeak
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_pthread_attr_destroy
_pthread_attr_init
_pthread_attr_setdetachstate
_pthread_attr_setscope
_pthread_cond_broadcast
_pthread_cond_destroy
_pthread_cond_init
_pthread_cond_signal
_pthread_cond_timedwait
_pthread_cond_wait
_pthread_create
_pthread_detach
_pthread_mutex_destroy
_pthread_mutex_init
_pthread_mutex_lock
_pthread_mutex_unlock
_pthread_mutexattr_destroy
_pthread_mutexattr_init
_pthread_mutexattr_settype
_pthread_once
_pthread_setcanceltype
_pthread_setname_np
_realloc
_realpath$DARWIN_EXTSN
_round
_sandbox_check
_sandbox_extension_issue_file
_sel_isEqual
_sel_registerName
_strcmp
_strlen
_sysctl
_vm_deallocate
_vm_map
_voucher_mach_msg_set
_xpc_connection_cancel
_xpc_connection_create
_xpc_connection_get_pid
_xpc_connection_resume
_xpc_connection_send_message
_xpc_connection_send_message_with_reply_sync
_xpc_connection_set_event_handler
_xpc_connection_set_target_queue
_xpc_dictionary_create
_xpc_dictionary_get_string
_xpc_dictionary_get_value
_xpc_dictionary_set_bool
_xpc_dictionary_set_value
_xpc_get_type
_xpc_mach_send_create
_xpc_mach_send_get_right
_xpc_release
_xpc_retain
dyld_stub_binder
