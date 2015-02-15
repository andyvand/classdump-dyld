+[AVMediaFileType initialize]
+[AVMediaFileType allFileTypeIdentifiers]
+[AVURLAsset URLAssetWithURL:options:]
-[AVURLAsset initWithURL:options:]
-[AVAsset init]
_AVRequireConcreteObject
+[AVWeakReference initialize]
+[AVWeakReference allocWithZone:]
-[AVRetainReleaseWeakReference initWithReferencedObject:]
_av_readwrite_dispatch_queue_create
+[AVCMNotificationDispatcher initialize]
+[AVCMNotificationDispatcher notificationDispatcherForCMNotificationCenter:]
_av_readwrite_dispatch_queue_read
_av_readwrite_dispatch_queue_write
-[AVCMNotificationDispatcher initWithCMNotificationCenter:]
+[AVCallbackRegistry initialize]
-[AVCallbackRegistry init]
-[AVAssetInspectorLoader _weakReference]
-[AVCMNotificationDispatcher addListenerWithWeakReference:callback:name:object:flags:]
-[AVCMNotificationDispatcherListenerAndCallback initWithWeakReferenceToListener:callback:]
-[AVCMNotificationDispatcher _callbackRegistry]
-[AVCallbackRegistry registerCallbackObserver:]
-[AVCMNotificationDispatcher _addListenerAndCallback:forWeakReferenceToListener:callback:name:object:]
-[AVCMNotificationDispatcher CMNotificationCenter]
+[AVCMNotificationDispatcherListenerKey listenerKeyWithWeakReferenceToListener:callback:name:object:]
-[AVURLAsset _setAssetInspectorLoader:]
-[AVCMNotificationDispatcherListenerKey initWithWeakReferenceToListener:callback:name:object:]
-[AVCMNotificationDispatcherListenerKey copyWithZone:]
-[AVCMNotificationDispatcherListenerKey hash]
-[AVCMNotificationDispatcherListenerKey isEqual:]
-[AVCMNotificationDispatcherListenerKey dealloc]
-[AVAsset loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVURLAsset _assetInspectorLoader]
-[AVAssetInspectorLoader loadValuesAsynchronouslyForKeys:completionHandler:]
_AVCMNotificationDispatcherCallback
-[AVCallbackRegistry callbackObserver:]
-[AVCMNotificationDispatcherListenerAndCallback listener]
-[AVRetainReleaseWeakReference referencedObject]
-[AVCMNotificationDispatcherListenerAndCallback callback]
-[AVAsset statusOfValueForKey:error:]
-[AVAssetInspectorLoader statusOfValueForKey:error:]
-[AVURLAsset tracks]
-[AVURLAsset _assetInspector]
-[AVAssetInspectorLoader _formatReader]
-[AVFormatReaderInspector initWithFormatReader:]
-[AVFormatReaderInspector _setFormatReader:]
-[AVFormatReaderInspector trackCount]
-[AVFormatReaderInspector _formatReader]
-[AVAssetTrack _initWithAsset:trackIndex:]
-[AVAssetTrack _initWithAsset:trackID:trackIndex:]
+[AVAssetTrackInspector assetTrackInspectorWithAsset:trackID:trackIndex:]
-[AVTrackReaderInspector _initWithAsset:trackID:trackIndex:]
-[AVURLAsset _formatReader]
-[AVAsset _weakReference]
-[AVAssetTrack loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVURLAsset URL]
-[AVAsset tracksWithMediaType:]
-[AVAssetTrackEnumerator initWithAsset:mediaType:]
-[AVAssetTrackEnumerator initWithAsset:]
-[AVAssetTrackEnumerator setMediaType:]
-[AVAssetTrackEnumerator nextObject]
-[AVAssetTrack mediaType]
-[AVTrackReaderInspector mediaType]
-[AVAssetTrackEnumerator dealloc]
-[AVAssetTrack formatDescriptions]
-[AVTrackReaderInspector formatDescriptions]
-[AVAsset isComposable]
-[AVAssetInspectorLoader isComposable]
-[AVAssetInspectorLoader hasProtectedContent]
-[AVFormatReaderInspector isComposable]
-[AVFormatReaderInspector _hasQTSaveRestriction]
-[AVFormatReaderInspector availableMetadataFormats]
-[AVAssetTrack isEnabled]
-[AVTrackReaderInspector isEnabled]
-[AVAsset duration]
-[AVAssetInspectorLoader duration]
-[AVFormatReaderInspector duration]
-[AVFormatReaderInspector providesPreciseDurationAndTiming]
-[AVAsset providesPreciseDurationAndTiming]
-[AVPlayerItem initWithAsset:]
-[AVPlayerItem init]
-[AVPropertyStorage init]
-[AVPropertyStorage setObject:forKey:]
-[AVPlayerItem _setURL:]
-[AVAsset _playbackItem]
-[AVAssetInspectorLoader _playbackItem]
-[AVPlayerItem _setAsset:]
-[AVPlayerItem setReversePlaybackEndTime:]
-[AVPlayerItem willChangeValueForKey:]
-[AVPropertyStorage willAccessKVOForKey:]
-[AVPlayerItem didChangeValueForKey:]
-[AVPropertyStorage didAccessKVOForKey:]
-[AVPlayerItem setForwardPlaybackEndTime:]
-[AVPlayerItem reversePlaybackEndTime]
-[AVPropertyStorage objectForKey:defaultObjectBlock:]
-[AVPlayerItem _reversePlaybackEndTime]
+[CMTimeAsValue valueWithCMTime:]
-[CMTimeAsValue CMTimeValue]
-[AVPlayerItem seekToTime:toleranceBefore:toleranceAfter:]
-[AVPlayerItem seekToTime:toleranceBefore:toleranceAfter:completionHandler:]
-[AVPlayerItem _cancelPendingSeekAndRegisterSeekCompletionHandler:]
-[AVPlayerItem asset]
-[AVAsset hasProtectedContent]
+[AVPlayer initialize]
+[AVPlayer playerWithPlayerItem:]
-[AVPlayer initWithPlayerItem:]
-[AVPlayer init]
-[AVPlayer setActionAtItemEnd:]
-[AVPlayer _setActionAtItemEnd:allowingAdvance:]
-[AVPlayer willChangeValueForKey:]
-[AVPlayer didChangeValueForKey:]
-[AVPlayer _checkDefaultsWriteForPerformanceLogging]
-[AVPlayer _insertItem:afterItem:]
-[AVPlayer _attachItem:andPerformOperation:withObject:]
-[AVPlayer currentItem]
-[AVPlayer _setCurrentItem:]
-[AVPlayerItem _setIsCurrentPlayerItem:]
-[AVPlayerItem _cachedValueForKey:]
-[AVPropertyStorage objectForKey:]
-[AVPlayerItem _player]
-[AVAsset _isStreaming]
-[AVAssetInspectorLoader _isStreaming]
-[AVPlayerItem addObserver:forKeyPath:options:context:]
-[AVPlayerItem _willAccessKVOForKey:]
-[AVPlayerItem status]
+[AVPlayerItem automaticallyNotifiesObserversOfStatus]
-[AVPlayerItem _didAccessKVOForKey:]
-[AVPlayer _addFPListeners]
-[AVPlayer _weakReference]
-[AVPlayer _fpNotificationNames]
-[AVPlayer _insertPlaybackItemOfItem:inPlayerQueueAfterPlaybackItemOfItem:]
-[AVPlayer _stateDispatchQueue]
-[AVURLAsset(AVURLAssetCache_Private) assetCache]
-[AVURLAsset(AVURLAssetCache_Private) downloadDestinationURL]
-[AVPlayerItem _configurePlaybackItem]
-[AVPlayerItem _quietlySetForwardPlaybackEndTime:]
-[AVPlayerItem _quietlySetReversePlaybackEndTime:]
-[AVPlayerItem _addFPListeners]
-[AVPlayerItem _weakReference]
-[AVPlayerItem _fpNotificationNames]
-[AVPlayerItem _quietlySetLimitReadAhead:]
-[AVPlayerItem _informObserversAboutAvailabilityOfTracks]
-[AVPlayerItem _propertyStorage]
-[AVPlayerItem _tracks]
-[AVPlayerItem _createPlayerConnection:shouldAppendItem:]
-[AVPlayerConnection initWithWeakReferenceToPlayer:weakReferenceToPlayerItem:shouldAppendItem:]
-[AVPlayerItem _setPlayerConnection:]
-[AVPlayerItem _playerConnection]
-[AVPlayerConnection addItemToPlayQueue]
-[AVPlayerConnection serializationQueue]
-[AVPlayerConnection player]
-[AVPlayerConnection status]
-[AVPlayerConnection playerItem]
-[AVPlayerItem _previousItem]
-[AVPlayerItem _nextItem]
_avplayeritem_fpItemNotificationCallback
-[AVPlayerItem _duration]
_avplayer_fpNotificationCallback
-[AVPlayerItem _presentationSize]
-[AVPlayerItem _setAssetToAssetWithFigPlaybackItemIfAppropriate]
+[AVPlayerItem _forStreamingItemsVendAssetWithFigPlaybackItem]
-[AVPlayerItem error]
-[AVPlayer rate]
-[AVPlayer _rate]
-[AVPlayer actionAtItemEnd]
-[AVPlayer _defaultActionAtItemEnd]
-[AVPlayer _actionAtItemEnd]
-[AVPlayer addObserver:forKeyPath:options:context:]
+[AVPlayer keyPathsForValuesAffectingRate]
+[AVPlayer automaticallyNotifiesObserversOfRate]
+[AVPlayer keyPathsForValuesAffectingActionAtItemEnd]
+[AVPlayer automaticallyNotifiesObserversOfActionAtItemEnd]
+[AVPlayerItem automaticallyNotifiesObserversOfPresentationSize]
+[AVPlayer automaticallyNotifiesObserversOfCurrentItem]
+[AVPlayerItem automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp]
+[AVPlayerItem automaticallyNotifiesObserversOfPlaybackBufferEmpty]
-[AVPlayerItem tracks]
-[AVPlayerItemTrack assetTrack]
-[AVAsset trackWithTrackID:]
-[AVAssetTrack trackID]
-[AVTrackReaderInspector trackID]
-[AVPlayerItemTrack videoFieldMode]
-[AVPlayerItem description]
-[AVURLAsset description]
-[AVPlayerItem currentTime]
-[AVPlayerItem presentationSize]
+[AVPlayerItem automaticallyNotifiesObserversOfTracks]
-[AVAsset subtitleAlternatesTrackGroup]
-[AVAsset _firstTrackGroupWithMediaType:]
-[AVAsset trackGroups]
-[AVAsset alternateTrackGroups]
-[AVFormatReaderInspector alternateTrackGroups]
-[AVAsset audioAlternatesTrackGroup]
-[AVPlayerItem setNonForcedSubtitleDisplayEnabled:]
-[AVPlayer _setCachedValue:forKey:]
-[AVPlayer setClosedCaptionDisplayEnabled:]
-[AVPlayerItem _isCurrentPlayerItem]
-[AVPlayerItemTrack dealloc]
-[AVAsset commonMetadata]
-[AVFormatReaderInspector commonMetadata]
-[AVMetadataItem _initWithFigMetadataDictionary:]
-[AVMetadataItem init]
-[AVMetadataItem(AVMetadataItem_Local) _extractPropertiesFromDictionary:]
-[AVMetadataItem(AVMetadataItem_Local) _updateCommonKey]
-[AVMutableMetadataItem value]
-[AVMutableMetadataItem setValue:]
+[AVMetadataItem metadataItemsFromArray:withKey:keySpace:]
-[AVMutableMetadataItem keySpace]
-[AVMetadataItem commonKey]
-[AVMetadataItem(AVMetadataItem_Local) _makePropertiesReady]
+[AVMetadataItem metadataItemsFromArray:withLocale:]
-[AVMutableMetadataItem locale]
-[AVMetadataItem(AVMetadataItemTypeCoercion) stringValue]
-[AVPlayer addPeriodicTimeObserverForInterval:queue:usingBlock:]
-[AVPlayer _willAccessKVOForKey:]
-[AVPlayer status]
-[AVPlayer _didAccessKVOForKey:]
-[AVAssetTrack hasMediaCharacteristic:]
+[AVPlayerItem automaticallyNotifiesObserversOfAsset]
+[AVPlayer keyPathsForValuesAffectingMuted]
+[AVPlayer keyPathsForValuesAffectingVolume]
-[AVPlayer volume]
-[AVPlayer isMuted]
-[AVPlayer _isMuted]
-[AVPlayerItem duration]
-[AVPlayerItem forwardPlaybackEndTime]
-[AVPlayerItem _forwardPlaybackEndTime]
-[CMTimeAsValue objCType]
-[CMTimeAsValue getValue:]
-[CMTimeAsValue doubleValue]
+[AVPlayerItem automaticallyNotifiesObserversOfLoadedTimeRanges]
-[AVPlayerItem loadedTimeRanges]
-[AVPlayerItem _loadedTimeRanges]
+[CMTimeRangeAsValue valueWithCMTimeRange:]
-[CMTimeRangeAsValue objCType]
-[CMTimeRangeAsValue CMTimeRangeValue]
-[AVPlayerItem seekableTimeRanges]
-[AVPlayerItem _seekableTimeRanges]
-[CMTimeRangeAsValue getValue:]
-[AVPlayer removeTimeObserver:]
-[AVCMNotificationDispatcher removeListenerWithWeakReference:callback:name:object:]
-[AVCMNotificationDispatcher _copyAndRemoveListenerAndCallbackForWeakReferenceToListener:callback:name:object:]
-[AVCallbackRegistry unregisterCallbackObserver:]
-[AVCMNotificationDispatcherListenerAndCallback dealloc]
-[AVMetadataItem dealloc]
-[AVPlayerItem isPlaybackLikelyToKeepUp]
-[AVRetainReleaseWeakReference dealloc]
-[AVPlayer currentTime]
-[NSCoder(AVTimeCoding) encodeCMTime:forKey:]
-[AVPlayer isClosedCaptionDisplayEnabled]
-[AVPlayer _isClosedCaptionDisplayEnabled]
-[AVPlayerItem isNonForcedSubtitleDisplayEnabled]
-[AVAsset tracksWithMediaCharacteristic:]
-[AVPlayer setRate:]
-[AVPlayer _propertyStorage]
-[AVPlayer setVolume:]
-[AVAssetTrack commonMetadata]
-[AVTrackReaderInspector commonMetadata]
-[AVAssetTrack estimatedDataRate]
-[AVTrackReaderInspector estimatedDataRate]
-[AVPlayer dealloc]
-[AVPlayer _removeFPListeners]
-[AVPlayerItem dealloc]
-[AVPlayerItem _removeFPListeners]
-[AVPlayerConnection dealloc]
-[AVPropertyStorage dealloc]
-[AVURLAsset dealloc]
-[AVAssetInspectorLoader dealloc]
-[AVFormatReaderInspector dealloc]
-[AVAssetTrack dealloc]
-[AVTrackReaderInspector dealloc]
-[AVAsset dealloc]
-[AVPlayer _removeAllLayers]
-[AVFormatReaderInspector metadataForFormat:]
+[AVMetadataEnumerator metadataEnumeratorWithMetadataReader:]
-[AVMetadataEnumerator initWithMetadataReader:]
-[AVMetadataEnumerator initWithMetadataReader:array:key:keySpace:locale:]
-[AVMetadataEnumerator _setMetadataReader:]
-[AVMetadataEnumerator _setKey:]
-[AVMetadataEnumerator _setKeySpace:]
-[AVMetadataEnumerator _setLocale:]
-[AVMetadataEnumerator nextObject]
-[AVMetadataItem _initWithReader:itemIndex:]
-[AVMetadataItem keySpace]
-[AVMetadataItem key]
-[AVMetadataEnumerator dealloc]
-[AVMetadataEnumerator _setArrayEnumerator:]
-[AVPlayerItem _respondToBecomingReadyForBasicInspection]
-[AVPlayerItem _kickAssetObserversIfAppropriate]
-[AVPlayerItem _CreateSeekID]
-[AVPlayer _shouldLogPerformanceData]
-[AVAssetInspectorLoader _mapFigErrorCodeToNSError:]
-[AVAssetInspectorLoader URL]
_AVLocalizedErrorWithUnderlyingOSStatus
_AVLocalizedError
_AVLocalizedStringFromTable
-[AVURLAsset cancelLoading]
-[AVAssetInspectorLoader cancelLoading]
-[AVAssetTrack asset]
-[AVAsset trackReferences]
-[AVFormatReaderInspector trackReferences]
-[AVAssetTrack naturalSize]
-[AVTrackReaderInspector naturalSize]
-[AVAssetTrack preferredTransform]
-[AVTrackReaderInspector preferredTransform]
-[AVPlayerLayer init]
-[AVPlayerLayer setVideoGravity:]
-[AVSubtitleLayer init]
-[AVPlayerLayer _setSubtitleGravity:]
-[AVPlayerLayer observeValueForKeyPath:ofObject:change:context:]
-[AVAsset availableMetadataFormats]
-[AVPlayerLayer setPlayer:]
-[AVPlayerLayer _setHasPlayerToObserve:andShouldObserveIt:]
-[AVSubtitleLayer setPlayer:]
-[AVSubtitleLayer _setHasPlayerToObserve:andShouldObserveIt:]
-[AVSubtitleLayer _updateNonForcedSubtitleDisplayEnabled:]
-[AVPlayer _cachedValueForKey:]
_AVPlayerLayerTransformForPlacement
___copy_helper_block_13
-[AVPlayer _addLayer:]
-[AVPlayer(AVPlayerProtectedContentPrivate) _setDisplaysUsedForPlayback:]
-[AVPlayer(AVPlayerProtectedContentPrivate) _playbackDisplaysForFigPlayer]
-[AVPlayerLayer layerDidBecomeVisible:]
-[AVSubtitleLayer layerDidBecomeVisible:]
+[AVComposition initialize]
-[AVPlayerLayer setBounds:]
-[AVPlayerLayer videoGravity]
-[AVPlayerLayer _subtitleGravity]
-[AVSubtitleLayer drawInContext:]
-[AVPlayerLayer initWithLayer:]
-[AVPlayerLayer player]
-[AVPlayerLayer dealloc]
-[AVAssetTrack nominalFrameRate]
-[AVTrackReaderInspector nominalFrameRate]
-[AVSubtitleLayer observeValueForKeyPath:ofObject:change:context:]
-[AVPlayerLayer _setItem:readyForDisplay:]
-[AVAssetImageGenerator initWithAsset:]
-[AVAssetImageGenerator setAppliesPreferredTrackTransform:]
-[AVAssetImageGenerator setRequestedTimeToleranceBefore:]
-[AVAssetImageGenerator setRequestedTimeToleranceAfter:]
-[AVPlayerLayer addAnimation:forKey:]
__forBoundsAnimationsApplyBlock
-[AVPlayerLayer _addAnimationsForVideoLayer:size:gravity:]
__animationByTransformingValues
-[AVAssetImageGenerator cancelAllCGImageGeneration]
-[AVAssetImageGenerator dealloc]
-[AVPlayer _removeLayer:]
-[AVSubtitleLayer dealloc]
-[AVPlayerItemTrack setVideoFieldMode:]
-[AVAsset metadataForFormat:]
-[AVAssetTrackGroup initWithAsset:trackIDs:]
-[AVAsset _comparisonToken]
-[AVAssetTrackGroup trackIDs]
-[AVAssetTrack extendedLanguageTag]
-[AVTrackReaderInspector extendedLanguageTag]
-[AVAssetTrack languageCode]
-[AVTrackReaderInspector languageCode]
-[AVAssetTrack isExcludedFromAutoselectionInTrackGroup]
-[AVTrackReaderInspector isExcludedFromAutoselectionInTrackGroup]
-[AVPlayerItem _trackWithTrackID:]
-[AVPlayerItemTrack isEnabled]
-[AVAssetTrackGroup dealloc]
-[AVPlayer addBoundaryTimeObserverForTimes:queue:usingBlock:]
___copy_helper_block_21
___copy_helper_block_25
___destroy_helper_block_26
-[AVTimedMetadataGroup initWithItems:timeRange:]
-[AVTimedMetadataGroup init]
-[AVTimedMetadataGroup mutableCopyWithZone:]
-[AVMutableTimedMetadataGroup setTimeRange:]
-[AVMutableTimedMetadataGroup setItems:]
-[AVMutableTimedMetadataGroup timeRange]
-[AVMutableTimedMetadataGroup copyWithZone:]
-[AVTimedMetadataGroup isEqual:]
-[AVMutableTimedMetadataGroup items]
-[AVChapterMetadataItem commonKey]
-[AVChapterMetadataItem value]
-[AVChapterMetadataItem _ensureValueLoadedSync]
-[AVChapterMetadataItem _valueStatus]
-[AVChapterMetadataItem _takeValueFrom:]
-[AVChapterMetadataItem _setValueStatus:figErrorCode:]
-[AVAssetImageGenerator generateCGImagesAsynchronouslyForTimes:completionHandler:]
-[AVAssetImageGenerator videoComposition]
-[AVAssetImageGenerator _optionsDictionary]
_NSDictionaryFromCMTime
_aig_didGenerateCGImage
-[AVAssetImageGenerator _didGenerateCGImage:]
-[AVAssetImageGenerator _requestWithRequestID:]
-[AVTimedMetadataGroup dealloc]
-[AVChapterMetadataItem dealloc]
+[AVAssetReader initialize]
-[AVAssetReader initWithAsset:error:]
-[AVWeakKeyValueObserverProxy initWithWeakReferenceToObserver:]
+[AVAssetReaderOutput initialize]
+[AVAssetReaderAudioMixOutput assetReaderAudioMixOutputWithAudioTracks:audioSettings:]
-[AVAssetReaderAudioMixOutput initWithAudioTracks:audioSettings:]
-[AVAssetReaderOutput init]
-[AVRunLoopCondition init]
+[AVAudioOutputSettings _audioOutputSettingsWithAudioSettingsDictionary:exceptionReason:]
+[AVOutputSettings _outputSettingsWithOutputSettingsDictionary:exceptionReason:]
+[AVAudioOutputSettings registeredOutputSettingsClasses]
+[AVOutputSettings _validateOutputSettingsDictionary:compatibilityDescription:]
+[AVAVAudioSettingsAudioOutputSettings eligibleOutputSettingsDictionaryKeys]
+[AVAudioOutputSettings _outputSettingsWithOutputSettingsDictionary:exceptionReason:]
+[AVAVAudioSettingsAudioOutputSettings _audioOutputSettingsWithAudioSettingsDictionary:exceptionReason:]
-[AVAVAudioSettingsAudioOutputSettings initWithAVAudioSettingsDictionary:exceptionReason:]
-[AVAudioOutputSettings initWithAudioSettingsDictionary:exceptionReason:]
-[AVOutputSettings initWithOutputSettingsDictionary:exceptionReason:]
_copyAudioChannelLayoutFromData
-[AVAVAudioSettingsAudioOutputSettings willYieldCompressedSamples]
-[AVAudioOutputSettings audioSettingsDictionary]
-[AVOutputSettings outputSettingsDictionary]
-[AVAssetReader addOutput:]
-[AVAssetReader _canAddOutput:exceptionReason:]
-[AVAssetReader outputs]
-[AVAssetReader status]
-[AVAssetReader asset]
-[AVAssetReaderAudioMixOutput _asset]
-[AVAssetReaderAudioMixOutput audioTracks]
-[AVAsset isEqual:]
-[AVAssetReaderOutput _attachToWeakReferenceToAssetReader:]
-[AVAssetReader _figAssetReader]
-[AVAssetReaderOutput _setFigAssetReader:]
-[AVAssetReader startReading]
-[AVAssetReader timeRange]
-[AVAssetReaderOutput _prepareForReadingReturningError:]
-[AVAssetReaderAudioMixOutput _enableTrackExtractionReturningError:]
-[AVAssetReaderOutput _figAssetReaderExtractionOptions]
-[AVAssetReaderOutput _trimsSampleDurations]
-[AVAssetReaderAudioMixOutput _audioVolumeCurveForTrack:]
-[AVAVAudioSettingsAudioOutputSettings getAudioStreamBasicDescription:forAudioFileTypeID:sourceFormatDescription:]
-[AVAVAudioSettingsAudioOutputSettings copyAudioChannelLayoutForSourceFormatDescription:audioChannelLayoutSize:]
-[AVAssetReaderOutput _figAssetReader]
-[AVAssetReaderOutput _setExtractionID:]
-[AVAssetReader _transitionToStatus:failureError:]
-[AVAssetReaderOutput copyNextSampleBuffer]
-[AVAssetReaderOutput _status]
-[AVAssetReaderOutput _weakReferenceToAssetReader]
-[AVAssetReaderOutput _isFinished]
-[AVAssetReaderOutput _extractionID]
_figAssetReaderSampleBufferDidBecomeAvailable
-[AVAssetReaderOutput _figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:]
-[AVRunLoopCondition signal]
-[AVAssetImageGenerator setMaximumSize:]
-[AVAssetReaderOutput _markAsFinished]
-[AVWeakKeyValueObserverProxy observeValueForKeyPath:ofObject:change:context:]
-[AVAssetReader observeValueForKeyPath:ofObject:change:context:]
-[AVPlayerItemTrack fallbackTrack]
-[AVPlayerItemTrack setEnabled:]
-[AVPlayerItem videoComposition]
-[AVPlayerItem audioMix]
+[AVAssetImageGenerator assetImageGeneratorWithAsset:]
-[AVAssetImageGenerator setVideoComposition:]
-[AVPlayer pause]
-[AVPlayer replaceCurrentItemWithPlayerItem:]
-[AVPlayerItem _insertAfterItem:]
-[AVPlayer _removeItem:]
-[AVPlayerItem isPlaybackBufferEmpty]
-[AVPlayerConnection removeItemFromPlayQueue]
-[AVPlayerItem _removeFromItems]
-[AVAssetReader cancelReading]
-[AVAssetReaderOutput _cancelReading]
-[AVAssetReader dealloc]
-[AVWeakKeyValueObserverProxy dealloc]
-[AVAssetReaderAudioMixOutput dealloc]
-[AVOutputSettings dealloc]
-[AVAssetReaderOutput dealloc]
-[AVRunLoopCondition dealloc]
+[AVMutableComposition composition]
-[AVComposition init]
-[AVMutableComposition _initWithComposition:]
-[AVComposition _initWithComposition:]
-[AVComposition _createEmptyMutableCompositionIfNeeded]
-[AVMutableComposition addMutableTrackWithMediaType:preferredTrackID:]
-[AVComposition _mutableComposition]
-[AVComposition _mutableTracks]
-[AVComposition _formatReader]
-[AVAssetTrack _initWithAsset:trackID:]
-[AVCompositionTrack _initWithAsset:trackID:trackIndex:]
-[AVCompositionTrackReaderInspector _initWithAsset:trackID:trackIndex:]
-[AVMutableCompositionTrack insertTimeRange:ofTrack:atTime:error:]
-[AVCompositionTrack _mutableComposition]
+[AVVideoCompositionLayerInstruction initialize]
+[AVMutableVideoCompositionLayerInstruction videoCompositionLayerInstructionWithAssetTrack:]
-[AVVideoCompositionLayerInstruction init]
-[AVMutableVideoCompositionLayerInstruction setTrackID:]
-[AVVideoCompositionLayerInstruction setTrackID:]
-[AVMutableVideoCompositionLayerInstruction setTransform:atTime:]
-[AVVideoCompositionLayerInstruction setTransform:atTime:]
_AVRampsIncludesRampThatOverlapsTimeRange
+[AVVideoCompositionInstruction initialize]
+[AVMutableVideoCompositionInstruction videoCompositionInstruction]
-[AVVideoCompositionInstruction init]
-[AVMutableVideoCompositionInstruction setTimeRange:]
-[AVVideoCompositionInstruction setTimeRange:]
-[AVMutableVideoCompositionInstruction setEnablePostProcessing:]
-[AVVideoCompositionInstruction setEnablePostProcessing:]
-[AVMutableVideoCompositionInstruction setLayerInstructions:]
-[AVVideoCompositionInstruction setLayerInstructions:]
-[AVMutableComposition copyWithZone:]
-[AVAsset _assetInspectorLoader]
+[AVMutableVideoComposition videoComposition]
-[AVVideoComposition init]
-[AVMutableVideoComposition setFrameDuration:]
-[AVVideoComposition setFrameDuration:]
-[AVMutableVideoComposition setRenderSize:]
-[AVVideoComposition setRenderSize:]
-[AVMutableVideoComposition setInstructions:]
-[AVVideoComposition setInstructions:]
-[AVPlayerItem setVideoComposition:]
-[AVVideoComposition _isValidReturningExceptionReason:]
-[AVMutableVideoComposition animationTool]
-[AVVideoComposition animationTool]
-[AVVideoComposition copyWithZone:]
-[AVMutableVideoComposition frameDuration]
-[AVVideoComposition frameDuration]
-[AVMutableVideoComposition renderSize]
-[AVVideoComposition renderSize]
-[AVMutableVideoComposition instructions]
-[AVVideoComposition instructions]
-[AVVideoComposition setAnimationTool:]
+[AVMutableAudioMix audioMix]
-[AVAudioMix init]
-[AVMutableAudioMix setInputParameters:]
-[AVAudioMix setInputParameters:]
-[AVPlayerItem setAudioMix:]
-[AVAudioMix copyWithZone:]
-[AVComposition _assetInspector]
-[AVFormatReaderInspector isEqual:]
-[AVComposition tracks]
-[AVComposition _newTrackForIndex:]
-[AVPlayerItem _setVideoCompositionFrameDuration:]
-[AVPlayerItem _setVideoCompositionRenderSize:]
-[AVVideoComposition _serializableInstructions]
-[AVVideoCompositionInstruction dictionaryRepresentation]
-[AVMutableVideoCompositionInstruction timeRange]
-[AVVideoCompositionInstruction timeRange]
-[AVVideoCompositionLayerInstruction dictionaryRepresentationWithTimeRange:]
-[AVMutableVideoCompositionInstruction enablePostProcessing]
-[AVVideoCompositionInstruction enablePostProcessing]
-[AVPlayerItem _setVideoCompositionInstructions:]
-[AVPlayerItem _setVideoCompositor:]
-[AVPlayerItemTrack trackID]
-[AVMutableAudioMix inputParameters]
-[AVAudioMix inputParameters]
-[AVAsset(AVAssetChapterInspection) availableChapterLocales]
-[AVAudioMix dealloc]
-[AVVideoComposition dealloc]
-[AVComposition dealloc]
-[AVCompositionTrack dealloc]
-[AVCompositionTrackReaderInspector dealloc]
-[NSCoder(AVTimeCoding) encodeCMTimeRange:forKey:]
-[NSCoder(AVTimeCoding) decodeCMTimeForKey:]
-[NSCoder(AVTimeCoding) decodeCMTimeRangeForKey:]
-[AVVideoCompositionInstruction dealloc]
-[AVVideoCompositionLayerInstruction dealloc]
+[AVPlayerItem playerItemWithAsset:]
+[AVPlayerLayer playerLayerWithPlayer:]
-[AVPlayerLayer isReadyForDisplay]
+[AVMutableAudioMixInputParameters audioMixInputParametersWithTrack:]
-[AVAudioMixInputParameters init]
-[AVMutableAudioMixInputParameters setTrackID:]
-[AVAudioMixInputParameters setTrackID:]
-[AVMutableAudioMixInputParameters setVolumeRampFromStartVolume:toEndVolume:timeRange:]
-[AVAudioMixInputParameters setVolumeRampFromStartVolume:toEndVolume:timeRange:]
-[AVAudioMixInputParameters _setVolumeRampFromStartVolume:toEndVolume:timeRange:]
-[AVMutableAudioMixInputParameters trackID]
-[AVAudioMixInputParameters trackID]
-[AVAudioMixInputParameters _audioVolumeCurve]
-[AVAsset(AVAssetChapterInspection) chapterMetadataGroupsWithTitleLocale:containingItemsWithCommonKeys:]
-[AVPlayer play]
-[AVPlayerItem _playbackItemNotificationPayloadToError:]
-[AVAudioMixInputParameters dealloc]
+[AVAsset assetWithURL:]
-[AVAssetTrack totalSampleDataLength]
-[AVTrackReaderInspector totalSampleDataLength]
-[AVComposition naturalSize]
-[AVAsset naturalSize]
-[AVPlayer seekToTime:toleranceBefore:toleranceAfter:]
-[AVAssetTrack isEqual:]
-[AVAssetTrack _assetTrackInspector]
-[AVTrackReaderInspector isEqual:]
_ensureUserInfoDictionaryContainsObjectForKey
-[AVAssetExportSession initWithAsset:presetName:]
-[AVAssetExportSession dealloc]
+[AVAssetExportSession(AVAssetExportSession_Local) _settingForPreset:]
-[AVAssetExportSession setVideoComposition:]
-[AVAssetExportSession setAudioMix:]
-[AVAssetExportSession setOutputURL:]
-[AVAssetExportSession supportedFileTypes]
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForPresets]
-[AVAssetExportSession(AVAssetExportSession_Local) _actualPresetName]
-[AVAssetExportSession setOutputFileType:]
-[AVAssetExportSession outputURL]
-[AVAssetExportSession presetName]
-[AVAssetExportSession timeRange]
-[AVAssetExportSession audioMix]
-[AVAssetExportSession videoComposition]
-[AVVideoComposition _hasLayerAsAuxiliaryTrack]
-[AVVideoComposition _hasPostProcessingLayers]
-[AVAssetExportSession metadata]
+[AVCaptureSession initialize]
-[AVCaptureSession init]
+[AVCaptureMovieFileOutput initialize]
-[AVCaptureMovieFileOutput init]
-[AVCaptureFileOutput init]
-[AVCaptureOutput init]
-[AVCaptureOperationDescriptorQueue init]
-[AVCaptureSession addOutput:]
-[AVCaptureSession beginConfiguration]
-[AVCaptureSession _addOutputWithNoConnections:]
-[AVCaptureSession _canAddOutput:failureReason:]
-[AVCaptureOutput session]
-[AVCaptureOutput setSession:]
-[AVCaptureSession _connectionsForNewOutput:]
-[AVCaptureMovieFileOutput connectionMediaTypes]
-[AVCaptureSession inputs]
-[AVCaptureSession commitConfiguration]
-[AVCaptureSession _endSessionUpdates]
-[AVCaptureSession isBeingConfigured]
-[AVCaptureSession _stopAndTearDownGraph]
-[AVCaptureSession captureGraph]
-[AVCaptureSession _graphIsInitialized]
-[AVCaptureSession isRunning]
-[AVCaptureFileOutput setDelegate:]
+[AVCaptureAudioPreviewOutput initialize]
-[AVCaptureAudioPreviewOutput init]
-[AVCaptureAudioPreviewOutput connectionMediaTypes]
-[AVCaptureAudioPreviewOutput setVolume:]
+[AVCaptureDevice devices]
+[AVCaptureDevice _registeredDeviceClassNames]
+[AVCaptureHALDevice initialize]
+[AVCaptureHALDevice devices]
+[AVCaptureHALDevice _refreshDevices]
-[AVCaptureHALDevice initWithUniqueID:connectionID:]
-[AVCaptureDevice init]
-[AVCaptureHALDevice setConnectionID:]
-[AVCaptureHALDevice uniqueID]
-[AVCaptureDevice deviceConnectionWillChange]
-[AVCaptureHALDevice _removePropertyListeners]
-[AVCaptureHALDevice _refreshProperties]
-[AVCaptureHALDevice _refreshFormats]
-[AVCaptureHALDevice _getDeviceChannelCount]
-[AVCaptureHALDevice connectionID]
+[AVCaptureHALDevice _deviceFormatWithASBD:deviceChannelCount:]
+[AVCaptureDeviceFormat deviceFormatWithFormatDescription:]
-[AVCaptureDeviceFormat initWithFormatDescription:]
-[AVCaptureDeviceFormat isEqual:]
-[AVCaptureHALDevice _refreshInputSources]
_AVStringForOSType
+[AVCaptureDeviceInputSource inputSourceWithID:localizedName:]
-[AVCaptureDeviceInputSource initWithDeviceInputSourceID:localizedName:]
-[AVCaptureDeviceInputSource inputSourceID]
-[AVCaptureHALDevice inputSources]
-[AVCaptureHALDevice activeInputSource]
-[AVCaptureDevice deviceConnectionDidChange]
-[AVCaptureDevice isOpen]
+[AVCaptureDALDevice initialize]
+[AVCaptureDALDevice devices]
+[AVCaptureDALDevice _refreshDevices]
-[AVCaptureDALDevice initWithUniqueID:connectionID:]
-[AVCaptureDALDevice setConnectionID:]
-[AVCaptureDALDevice uniqueID]
-[AVCaptureDALDevice _removePropertyListeners]
_AddListenerForProperty
-[AVCaptureDALDevice _refreshProperties]
-[AVCaptureDALDevice _refreshStreams]
-[AVCaptureDALDevice connectionID]
-[AVCaptureDALDevice _refreshFormats]
-[AVCaptureDALDevice deviceFormatForStream:formatDescription:]
-[AVCaptureDALDevice supportedFrameRateRangesForStream:formatDescription:]
+[AVFrameRateRange frameDurationForFrameRate:]
-[AVFrameRateRange initWithMinRate:maxRate:maxDuration:minDuration:]
-[AVCaptureDeviceFormat _setVideoSupportedFrameRateRanges:]
-[AVCaptureDALDevice _refreshActiveFormat]
-[AVCaptureDALDevice activeVideoMinFrameDurationForStream:]
-[AVCaptureDALDevice _refreshLocalizedName]
-[AVCaptureDALDevice _refreshModelID]
-[AVCaptureDALDevice _refreshLinkedDevices]
-[AVCaptureDevice setLinkedDevices:]
+[AVCaptureDevice _linkedDevicesLock]
-[AVCaptureDevice linkedDevices]
-[AVCaptureDALDevice _refreshSuspendedAttribute]
-[AVCaptureDALDevice isSuspended]
-[AVCaptureDALDevice _refreshIsInUseByAnotherApplication]
-[AVCaptureDALDevice isConnected]
-[AVCaptureDevice hasMediaType:]
_AVOSTypeForString
-[AVCaptureHALDevice formats]
-[AVCaptureDeviceFormat formatDescription]
-[AVCaptureDALDevice formats]
+[AVCaptureDevice defaultDeviceWithMediaType:]
+[AVCaptureHALDevice defaultDeviceWithMediaType:]
+[AVCaptureDALDevice defaultDeviceWithMediaType:]
+[AVCaptureDevice devicesWithMediaType:]
+[AVCaptureDeviceInput initialize]
+[AVCaptureDeviceInput deviceInputWithDevice:error:]
-[AVCaptureDeviceInput initWithDevice:error:]
-[AVCaptureInput init]
-[AVCaptureDeviceInput setAutomaticallyConfiguresDevice:]
-[AVCaptureDevice open:]
-[AVCaptureDevice _startUsingDevice:]
-[AVCaptureDALDevice startUsingDevice:]
-[AVCaptureDeviceInput _setDevice:]
-[AVCaptureDALDevice addObserver:forKeyPath:options:context:]
-[AVCaptureSession addInput:]
-[AVCaptureSession _addInputWithNoConnections:]
-[AVCaptureSession _canAddInput:failureReason:]
-[AVCaptureInput session]
-[AVCaptureSession sessionPreset]
-[AVCaptureDeviceInput device]
-[AVCaptureDALDevice supportsAVCaptureSessionPreset:]
+[AVCaptureSession avCaptureSessionPlist]
-[AVCaptureInput setSession:]
-[AVCaptureDeviceInput ports]
-[AVCaptureDALDevice activeFormat]
-[AVCaptureDeviceFormat mediaType]
+[AVCaptureInputPort portWithInput:mediaType:formatDescription:enabled:]
-[AVCaptureInputPort initWithInput:mediaType:formatDescription:enabled:]
-[AVCaptureInputPort init]
-[AVCaptureSession _connectionsForNewInputPort:]
-[AVCaptureInputPort mediaType]
-[AVCaptureMovieFileOutput canAddConnectionForMediaType:]
-[AVCaptureOutput connections]
+[AVCaptureConnection initialize]
+[AVCaptureConnection connectionWithInputPorts:output:]
-[AVCaptureConnection initWithInputPorts:output:]
-[AVCaptureConnection init]
-[AVCaptureConnection initCommonStorage]
-[AVCaptureOutput defaultVideoOrientationForConnection:]
-[AVCaptureOutput defaultVideoMirroringForConnection:]
-[AVCaptureOutput defaultVideoFieldModeForConnection:]
-[AVCaptureConnection mediaType]
-[AVCaptureConnection firstInputPort]
-[AVCaptureConnection inputPorts]
-[AVCaptureSession _addConnection:]
-[AVCaptureSession _canAddConnection:failureReason:]
-[AVCaptureConnection output]
-[AVCaptureInputPort input]
-[AVCaptureConnection videoPreviewLayer]
-[AVCaptureMovieFileOutput addConnection:error:]
+[AVCallbackRegistry sharedCallbackRegistry]
-[AVCaptureOutput insertConnection:atIndex:error:]
-[AVCaptureOutput addConnection:error:]
-[AVCaptureInputPort isEnabled]
-[AVCaptureInputPort setEnabled:]
-[AVCaptureSession observeValueForKeyPath:ofObject:change:context:]
-[AVCaptureSession _rebuildGraph]
-[AVCaptureSession _beginSessionUpdates]
+[AVCaptureHALDevice deviceWithUniqueID:]
-[AVCaptureHALDevice isConnected]
-[AVCaptureHALDevice startUsingDevice:]
-[AVCaptureHALDevice supportsAVCaptureSessionPreset:]
-[AVCaptureHALDevice activeFormat]
-[AVCaptureAudioPreviewOutput canAddConnectionForMediaType:]
-[AVCaptureDevice activeInputSource]
-[AVCaptureMovieFileOutput setOutputSettings:forConnection:]
-[AVCaptureMovieFileOutput outputSettingsForConnection:]
-[AVCaptureSession defaultOutputSettingsForConnection:fileType:]
-[NSDictionary(AVCaptureSessionAdditions) mutableDeepAutoreleasedCopy]
-[NSMutableDictionary(AVCaptureSessionPlistAdditions) addEntriesFromDictionaryWithRecursion:]
-[AVCaptureFileOutput hasOutputSettingsForConnection:]
-[AVCaptureFileOutput setOutputSettings:forConnection:]
+[AVOutputSettings outputSettingsWithOutputSettingsDictionary:]
+[AVOutputSettings registeredOutputSettingsClasses]
+[AVOutputSettings eligibleOutputSettingsDictionaryKeys]
+[AVVideoOutputSettings registeredOutputSettingsClasses]
+[AVAVVideoSettingsVideoOutputSettings eligibleOutputSettingsDictionaryKeys]
+[AVPixelBufferAttributesVideoOutputSettings eligibleOutputSettingsDictionaryKeys]
+[AVVideoOutputSettings _outputSettingsWithOutputSettingsDictionary:exceptionReason:]
+[AVVideoOutputSettings _videoOutputSettingsWithVideoSettingsDictionary:exceptionReason:]
+[AVAVVideoSettingsVideoOutputSettings _videoOutputSettingsWithVideoSettingsDictionary:exceptionReason:]
-[AVAVVideoSettingsVideoOutputSettings initWithAVVideoSettingsDictionary:exceptionReason:]
-[AVVideoOutputSettings initWithVideoSettingsDictionary:exceptionReason:]
+[AVVideoOutputSettings _validValuesForScalingMode]
-[AVCaptureMovieFileOutput _updateCompressorNodesForConnection:]
-[AVCaptureMovieFileOutput _updateVideoDecompressorNodeForConnection:]
-[AVCaptureSession decompressionRequirementsDidChangeForConnection:]
-[AVCaptureAudioPreviewOutput volume]
+[AVCaptureVideoPreviewLayer initialize]
-[AVCaptureVideoPreviewLayer initWithSession:]
-[AVCaptureVideoPreviewLayer initCommonStorage]
-[AVCaptureVideoPreviewLayer setVideoGravity:]
-[AVCaptureVideoPreviewLayer setSession:]
-[AVCaptureSession addVideoPreviewLayer:]
-[AVCaptureSession _connectionsForNewVideoPreviewLayer:]
-[AVCaptureVideoPreviewLayer canAddConnectionForMediaType:]
+[AVCaptureConnection connectionWithInputPort:videoPreviewLayer:]
-[AVCaptureConnection initWithInputPort:videoPreviewLayer:]
-[AVCaptureVideoPreviewLayer defaultVideoOrientationForConnection:]
-[AVCaptureVideoPreviewLayer defaultVideoMirroringForConnection:]
-[AVCaptureVideoPreviewLayer defaultVideoFieldModeForConnection:]
-[AVCaptureVideoPreviewLayer addConnection:error:]
-[AVCaptureVideoPreviewLayer refreshFormatDescriptionFromInputPort:]
-[AVCaptureInputPort formatDescription]
-[AVCaptureVideoPreviewLayer positionSublayer]
-[AVCaptureVideoPreviewLayer setBounds:]
-[AVCaptureDevice isSuspended]
-[AVCaptureVideoPreviewLayer layoutSublayers]
-[AVCaptureConnection videoOrientation]
-[AVCaptureConnection isVideoMirrored]
-[AVCaptureSession startRunning]
-[AVCaptureSession _setRunning:]
-[AVCaptureSession _buildAndRunGraph]
-[AVCaptureSessionInternalState init]
-[AVCaptureSessionInternalState graph]
-[AVCaptureDeviceInput notReadyError]
-[AVCaptureSession _buildGraphUnitsForInputPort:error:]
-[AVCaptureConnection isEnabled]
-[AVCaptureConnection isActive]
-[AVCaptureDeviceInput addInputUnitsForInputPort:toGraph:ofCaptureSession:error:]
-[AVCaptureDevice connectionUnit]
-[AVCaptureDALDevice connectionUnitComponentSubType]
-[MediaIOGraphNodeDescription initWithNode:graph:]
-[AVCaptureDeviceInput unitOutputNumberForInputPort:]
-[AVCaptureDeviceInput graphNodeForInputPort:]
-[MediaIOGraphNodeDescription node]
-[AVCaptureInputPort setGraph:node:element:scope:]
-[AVCaptureInputPort node]
-[AVCaptureInputPort element]
-[AVCaptureInputPort scope]
-[AVCaptureSession _buildSupportUnitsForVideoInputPort:error:]
-[AVCaptureSession _resolvedDecompressionSettingsForInputPort:alsoRequiresDeviceNative:]
-[AVCaptureOutput notReadyError]
+[AVVideoOutputSettings videoOutputSettingsWithVideoSettingsDictionary:]
-[AVAVVideoSettingsVideoOutputSettings width]
-[AVAVVideoSettingsVideoOutputSettings height]
-[AVResolvedDecompressionSettings init]
-[AVAVVideoSettingsVideoOutputSettings videoCompressionProperties]
-[AVCaptureConnection videoFieldMode]
-[AVCaptureConnection videoMinFrameDuration]
-[AVResolvedDecompressionSettings resolveDecompressionAttributes:]
-[AVCaptureVideoPreviewLayer notReadyError]
-[AVCaptureVideoPreviewLayer videoDecompressionRequirementForConnection:]
-[AVCaptureVideoPreviewLayer pixelBufferAttributes]
-[AVCaptureDeviceInput clockProviderNodeForInputPort:]
-[AVResolvedDecompressionSettings vtDecompressionProperties]
-[AVResolvedDecompressionSettings pixelBufferAttributes]
-[AVResolvedDecompressionSettings allowUpscaling]
-[AVResolvedDecompressionSettings minFrameDuration]
+[MediaIOGraphNodeList nodeListWithNodes:count:]
-[MediaIOGraphNodeList initWithNodes:count:]
-[AVCaptureSessionInternalState supportUnitsForInputPorts]
-[AVCaptureDeviceInput sessionWillUseOutputDecompressionOptions:forPort:]
-[AVCaptureDeviceInput automaticallyConfiguresDevice]
-[AVCaptureDALDevice deviceSystem]
-[AVCaptureDevice isLockedForConfiguration]
-[AVCaptureDALDevice deviceID]
-[AVCaptureHALDevice connectionUnitComponentSubType]
-[AVCaptureSession _buildSupportUnitsForAudioInputPort:error:]
-[AVCaptureInputPort attachToAudioMixerNode:element:scope:isReadOnly:]
-[AVCaptureSession _buildGraphUnitsForConnection:error:]
-[AVCaptureMovieFileOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
-[AVCaptureMovieFileOutput _addActiveConnection:]
-[AVCaptureMovieFileOutput _addFileWriterUnitElement:forConnection:]
-[AVCaptureConnection setWriterElement:]
+[MediaIOGraphNodeDescription nodeDescriptionWithGraphNode:graph:]
-[AVCaptureMovieFileOutput _fileWriterUnitElementForConnection:]
-[AVCaptureConnection writerElement]
-[MediaIOGraphNodeDescription graph]
-[AVCaptureMovieFileOutput _updateVideoFrameRateGovernorNodeForConnection:]
-[AVAVVideoSettingsVideoOutputSettings videoCodecType]
-[AVCaptureSession _connectGraphUnitsForVideoConnection:error:]
-[AVCaptureConnection firstActiveInputPort]
-[MediaIOGraphNodeList count]
-[MediaIOGraphNodeList nodeAtIndex:]
-[AVCaptureMovieFileOutput connectionGraphNodeForConnection:]
-[AVCaptureMovieFileOutput connectionUnitInputNumberForConnection:]
-[AVCaptureConnection setGraph:node:element:scope:]
+[AVAudioOutputSettings audioOutputSettingsWithAudioSettingsDictionary:]
-[AVCaptureConnection copySourceSummaryAudioFormatDescription]
+[AVAudioOutputSettings audioConverterPropertiesForAudioSettingsDictionary:]
-[AVCaptureSession _connectGraphUnitsForAudioConnection:error:]
-[AVCaptureConnection graph]
-[AVCaptureConnection extendedNodeInfo]
-[AVCaptureAudioPreviewOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
_audioPreviewVolumePropertyListener
-[AVCaptureAudioPreviewOutput connectionUnitInputNumberForConnection:]
-[AVCaptureAudioPreviewOutput connectionGraphNodeForConnection:]
-[AVCaptureVideoPreviewLayer connection]
-[AVCaptureVideoPreviewLayer addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
-[AVCaptureVideoPreviewLayer _videoPreviewUnitPixelBufferAttributes]
-[AVCaptureVideoPreviewLayer connectionGraphNodeForConnection:]
-[AVCaptureVideoPreviewLayer connectionUnitInputNumberForConnection:]
-[AVCaptureSession _setupMasterSynchronizers]
-[AVCaptureSession _configureAudioDecoderConverters]
-[AVCaptureSession _informActiveInputsAndOutputsThatGraphWillStart]
-[AVCaptureOutput graphWillStartForSession:]
-[AVCaptureMovieFileOutput graphWillStartForSession:]
-[AVCaptureMovieFileOutput _activeConnections]
-[AVCaptureMovieFileOutput _setStopError:]
-[AVCaptureMovieFileOutput _setNoDataConnections:]
-[AVCaptureInput graphWillStartForSession:]
-[AVCaptureAudioPreviewOutput _updateVolumeFromPropertyListener]
-[AVCaptureAudioPreviewOutput _updateVolume]
-[AVAVVideoSettingsVideoOutputSettings dealloc]
-[AVResolvedDecompressionSettings dealloc]
_StreamFormatDescriptionListener
-[AVCaptureMovieFileOutput isRecordingPaused]
-[AVCaptureDALDevice _refreshFormatsFromCallback]
-[AVCaptureDeviceFormat dealloc]
-[AVFrameRateRange dealloc]
-[AVCaptureConnection audioChannels]
-[AVCaptureMovieFileOutput _compressorDidRenderConnection:busNumber:processHints:sampleBuffer:]
_ConnectionFormatDescriptionListener
-[AVCaptureInputPort _updateFormatDescriptionFromPropertyListener]
-[AVCaptureInputPort _updateFormatDescription]
-[AVCaptureInputPort graph]
-[AVCaptureInputPort _setFormatDescription:]
-[AVCaptureConnection _updateAudioChannelsArrayCount]
-[AVCaptureAudioChannel initWithConnection:]
-[AVCaptureAudioChannel _updateEnabled:]
-[AVCaptureAudioChannel _updateVolume:]
-[AVCaptureVideoPreviewLayer inputFormatDescriptionChanged:]
-[AVCaptureAudioChannel averagePowerLevel]
-[AVCaptureConnection getAvgAudioLevelForChannel:]
-[AVCaptureConnection updateAudioAvgLevelsArray]
-[AVCaptureConnection _audioLevelsForPropertyID:]
-[AVCaptureMovieFileOutput _controlFileWritingForConnection:busNumber:fileControlToken:]
-[AVCaptureMovieFileOutput _runningRecordingOperationDescriptor]
-[AVCaptureMovieFileOutput _noDataConnections]
-[AVCaptureFileOutput delegate]
-[AVCaptureOperationDescriptorQueue operationDescriptorForTime:dequeue:]
_DevicesListener
-[AVCaptureDALDevice _postNotificationNamed:]
-[AVCaptureDevice inputSources]
-[AVCaptureDALDevice localizedName]
-[AVCaptureHALDevice localizedName]
-[AVCaptureDeviceInputSource localizedName]
+[AVCaptureHALDevice _refreshDevicesFromCallback]
-[AVCaptureHALDevice _postNotificationNamed:]
-[AVCaptureSession removeInput:]
-[AVCaptureSession _removeConnectionsForInputPort:]
-[AVCaptureSession _removeConnection:]
-[AVCaptureMovieFileOutput removeConnection:]
-[AVCaptureOutput removeConnection:]
-[AVCaptureVideoPreviewLayer removeConnection:]
-[AVCaptureSession _graphIsRunning]
-[AVCaptureSession _stopError]
-[AVCaptureSession _informActiveInputsAndOutputsThatGraphWillStopWithError:]
-[AVCaptureOutput graphWillStopForSession:error:]
-[AVCaptureMovieFileOutput graphWillStopForSession:error:]
-[AVCaptureMovieFileOutput _cancelFileControlCallbackTimeoutTimer]
-[AVCaptureMovieFileOutput _cancelAllOperations]
-[AVCaptureOperationDescriptorQueue dequeueAllOperationDescriptors]
-[AVCaptureMovieFileOutput _handleCanceledOperations:]
-[AVCaptureMovieFileOutput _stopError]
-[AVCaptureInput graphWillStopForSession:error:]
-[AVCaptureConnection _clearAudioPropertyListeners]
-[AVCaptureDeviceInput removeInputUnitsForInputPort:fromGraph:ofCaptureSession:]
-[MediaIOGraphNodeDescription dealloc]
-[AVCaptureMovieFileOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[AVCaptureMovieFileOutput _removeFileWriterUnitElementForConnection:]
-[AVCaptureMovieFileOutput _removeActiveConnection:]
-[AVCaptureAudioPreviewOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[AVCaptureConnection dealloc]
-[AVCaptureAudioChannel dealloc]
-[AVCaptureDeviceInput dealloc]
-[AVCaptureDALDevice removeObserver:forKeyPath:]
-[AVCaptureInputPort setInput:]
-[AVCaptureDevice close]
-[AVCaptureDevice _stopUsingDevice]
-[AVCaptureDALDevice stopUsingDevice]
-[AVCaptureInput dealloc]
-[AVCaptureSessionInternalState invalidate]
-[AVCaptureSessionInternalState dealloc]
-[MediaIOGraphNodeList dealloc]
-[AVCaptureInputPort _removeFormatDescriptionPropertyListener]
-[AVCaptureInputPort dealloc]
-[AVCaptureMovieFileOutput _refreshRecordingState]
-[AVCaptureOperationDescriptorQueue newestOperationDescriptorOfClass:operationTime:]
-[AVCaptureSession decompressionSettingsDidChangeForConnection:]
-[AVResolvedDecompressionSettings resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:]
-[AVCaptureHALDevice stopUsingDevice]
-[AVCaptureMovieFileOutput startRecordingToOutputFileURL:recordingDelegate:]
-[AVCaptureMovieFileOutput outputFileURL]
-[AVCaptureMovieFileOutput _syncTime]
+[AVCaptureFileOutputRecordingOperationDescriptor recordingOperationDescriptorWithOutputFileURL:delegate:connections:]
-[AVCaptureFileOutputRecordingOperationDescriptor initWithOutputFileURL:delegate:connections:]
-[AVCaptureOperationDescriptorQueue enqueueOperationDescriptor:forTime:dequeuedOperationDescriptors:]
-[AVCaptureOperationDescriptorQueueItem initWithOperationDescriptor:operationTime:]
-[AVCaptureMovieFileOutput _startFileControlCallbackTimeoutTimer]
-[AVCaptureOperationDescriptorQueueItem operationDescriptor]
-[AVCaptureOperationDescriptorQueueItem operationTime]
-[AVCaptureFileOutputRecordingOperationDescriptor isPaused]
-[AVCaptureFileOutputRecordingOperationDescriptor outputFileURL]
-[AVCaptureMovieFileOutput _setRunningRecordingOperationDescriptor:]
-[AVCaptureMovieFileOutput _startFileWritingForConnection:fileControlToken:runningRecordingOperationDescriptor:]
-[AVCaptureFileOutputRecordingOperationDescriptor delegate]
-[AVCaptureFileOutputRecordingOperationDescriptor connections]
-[AVCaptureMovieFileOutput movieFragmentInterval]
-[AVCaptureFileOutput maxRecordedDuration]
-[AVCaptureFileOutput maxRecordedFileSize]
-[AVCaptureFileOutputRecordingOperationDescriptor setDidStartWritingIfNotAlreadyStarted]
-[AVCaptureOperationDescriptorQueueItem dealloc]
-[AVCaptureFileOutputRecordingOperationDescriptor stopError]
-[AVCaptureMovieFileOutput recordedDuration]
-[AVCaptureMovieFileOutput recordedFileSize]
-[AVCaptureMovieFileOutput _fileControlCallbackTimeout:]
-[AVCaptureMovieFileOutput stopRecording]
-[AVCaptureFileOutputRecordingOperationDescriptor setStopError:]
-[AVCaptureMovieFileOutput _removeRunningRecordingOperationDescriptorEqualTo:]
-[AVCaptureSession stopRunning]
-[AVCaptureFileOutputRecordingOperationDescriptor dealloc]
-[AVCaptureMovieFileOutput _filesCompleted:]
-[AVCaptureMovieFileOutput metadata]
-[AVCaptureVideoPreviewLayer dealloc]
-[AVCaptureSession removeVideoPreviewLayer:]
-[AVCaptureSession dealloc]
-[AVCaptureSession outputs]
-[AVCaptureSession removeOutput:]
-[AVCaptureMovieFileOutput dealloc]
-[AVCaptureOperationDescriptorQueue dealloc]
-[AVCaptureFileOutput dealloc]
-[AVCaptureOutput dealloc]
-[AVCaptureAudioPreviewOutput dealloc]
+[AVCaptureDevice deviceWithUniqueID:]
+[AVCaptureDALDevice deviceWithUniqueID:]
-[AVCaptureDevice lockForConfiguration:]
-[AVCaptureDeviceInput observeValueForKeyPath:ofObject:change:context:]
-[AVCaptureHALDevice becomeDeviceMaster:]
-[AVCaptureHALDevice setActiveInputSource:]
-[AVCaptureDevice unlockForConfiguration]
-[AVCaptureHALDevice relinquishDeviceMaster]
-[AVCaptureDeviceInputSource dealloc]
-[AVCaptureAudioFileOutput init]
-[AVCaptureAudioFileOutput connectionMediaTypes]
-[AVCaptureAudioFileOutput canAddConnectionForMediaType:]
-[AVCaptureAudioFileOutput addConnection:error:]
-[AVCaptureAudioFileOutput setAudioSettings:]
-[AVCaptureOutput firstEnabledConnectionForMediaType:]
-[AVCaptureAudioFileOutput audioSettings]
-[AVCaptureAudioFileOutput _updateCompressorNodesForConnection:]
-[AVCaptureAudioFileOutput notReadyError]
-[AVCaptureAudioFileOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
-[AVCaptureAudioFileOutput _addActiveConnection:]
-[AVCaptureAudioFileOutput _fileWriterUnitElementForConnection:]
-[AVCaptureAudioFileOutput connectionUnitInputNumberForConnection:]
-[AVCaptureAudioFileOutput connectionGraphNodeForConnection:]
-[AVCaptureAudioFileOutput graphWillStartForSession:]
-[AVCaptureAudioFileOutput _activeConnections]
-[AVCaptureAudioFileOutput _setStopError:]
-[AVCaptureAudioFileOutput _setNoDataConnections:]
_CompressorRender
-[AVCaptureAudioFileOutput _compressorDidRenderConnection:busNumber:processHints:sampleBuffer:]
_FileControlCallback
-[AVCaptureAudioFileOutput _controlFileWritingForConnection:busNumber:fileControlToken:]
-[AVCaptureAudioFileOutput _runningRecordingOperationDescriptor]
-[AVCaptureAudioFileOutput _noDataConnections]
-[AVCaptureAudioFileOutput startRecordingToOutputFileURL:outputFileType:recordingDelegate:]
+[AVCaptureAudioFileOutput availableOutputFileTypes]
-[AVMediaFileType initWithFileTypeIdentifier:exceptionReason:]
-[AVMediaFileType supportsOutputSettings:reason:]
+[AVMediaFileOutputSettingsValidator initialize]
+[AVMediaFileOutputSettingsValidator mediaFileOutputSettingsValidatorForFileType:]
-[AVMediaFileType UTI]
-[AVMediaFileOutputSettingsValidator initWithFileType:]
-[AVMediaFileType copyWithZone:]
-[AVAudioOutputSettings validateUsingOutputSettingsValidator:reason:]
-[AVMediaFileOutputSettingsValidator validateAudioOutputSettings:reason:]
-[AVMediaFileOutputSettingsValidator fileType]
-[AVMediaFileType audioFileTypeID]
-[AVCaptureAudioFileOutput _startRecordingToOutputFileURL:recordingDelegate:]
-[AVCaptureAudioFileOutput outputFileURL]
-[AVCaptureAudioFileOutput _stopError]
-[AVCaptureAudioFileOutput _syncTime]
-[AVCaptureAudioFileOutput _startFileControlCallbackTimeoutTimer]
-[AVCaptureAudioFileOutput _handleCanceledOperations:]
-[AVCaptureAudioFileOutput isRecordingPaused]
-[AVCaptureAudioFileOutput _refreshRecordingState]
-[AVCaptureAudioFileOutput _setRunningRecordingOperationDescriptor:]
-[AVCaptureAudioFileOutput _startFileWritingForConnection:fileControlToken:runningRecordingOperationDescriptor:]
-[AVMediaFileOutputSettingsValidator dealloc]
-[AVCaptureAudioFileOutput recordedDuration]
-[AVCaptureAudioFileOutput recordedFileSize]
-[AVCaptureAudioFileOutput _fileControlCallbackTimeout:]
-[AVCaptureAudioFileOutput stopRecording]
-[AVCaptureAudioFileOutput _removeRunningRecordingOperationDescriptorEqualTo:]
_FileCompletionCallback
-[AVCaptureAudioFileOutput graphWillStopForSession:error:]
-[AVCaptureAudioFileOutput _cancelFileControlCallbackTimeoutTimer]
-[AVCaptureAudioFileOutput _cancelAllOperations]
-[AVCaptureAudioFileOutput _filesCompleted:]
-[AVCaptureAudioFileOutput metadata]
-[AVCaptureAudioFileOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[AVCaptureAudioFileOutput _removeActiveConnection:]
-[AVCaptureAudioFileOutput removeConnection:]
-[AVCaptureAudioFileOutput dealloc]
-[AVAIFCOutputSettingsValidator initWithFileType:]
-[AVAIFCOutputSettingsValidator validateAudioOutputSettings:reason:]
+[AVCaptureScreenInput initialize]
-[AVCaptureScreenInput initWithDisplayID:]
-[AVCaptureScreenInput setCapturesMouseClicks:]
-[AVCaptureScreenInput _mouseClickEffect]
-[AVCaptureScreenInput capturesMouseClicks]
-[AVCaptureScreenInput _setInputUnitProperty:bytes:length:]
-[AVCaptureScreenInput setCropRect:]
-[AVCaptureScreenInput _flippedCropRectForCropRect:]
-[AVCaptureScreenInput setMinFrameDuration:]
-[AVCaptureScreenInput _syncScreenInputWithSessionSettings]
-[AVCaptureScreenInput ports]
-[AVCaptureInput notReadyError]
-[AVCaptureScreenInput addInputUnitsForInputPort:toGraph:ofCaptureSession:error:]
-[MediaIOGraphNodeDescription unit]
-[AVCaptureScreenInput cropRect]
-[AVCaptureScreenInput captureTimeScale]
-[AVCaptureScreenInput scaleFactor]
-[AVCaptureScreenInput unitOutputNumberForInputPort:]
-[AVCaptureScreenInput graphNodeForInputPort:]
-[AVCaptureScreenInput clockProviderNodeForInputPort:]
-[AVCaptureScreenInput sessionWillUseOutputDecompressionOptions:forPort:]
-[AVCaptureScreenInput removeInputUnitsForInputPort:fromGraph:ofCaptureSession:]
-[AVAssetExportSession setTimeRange:]
-[AVAssetImageGenerator copyCGImageAtTime:actualTime:error:]
-[AVAssetImageGenerator _makeAutoreleasedAssetReader]
-[AVAssetImageGenerator _scaledSizeForRenderSize:]
-[AVAssetImageGenerator _createPixelBufferAttributesWithSize:]
+[AVAssetReader assetReaderWithAsset:error:]
+[AVAssetReaderVideoCompositionOutput assetReaderVideoCompositionOutputWithVideoTracks:videoSettings:]
-[AVAssetReaderVideoCompositionOutput initWithVideoTracks:videoSettings:]
+[AVPixelBufferAttributesVideoOutputSettings _videoOutputSettingsWithVideoSettingsDictionary:exceptionReason:]
-[AVPixelBufferAttributesVideoOutputSettings initWithPixelBufferAttributes:exceptionReason:]
-[AVPixelBufferAttributesVideoOutputSettings willYieldCompressedSamples]
-[AVAssetReaderVideoCompositionOutput setVideoComposition:]
-[AVAssetReaderVideoCompositionOutput _asset]
-[AVAssetReaderVideoCompositionOutput videoTracks]
-[AVAssetImageGenerator _copyCGImageAtTime:usingAssetReader:error:]
-[AVAssetReader setTimeRange:]
-[AVAssetReaderVideoCompositionOutput _enableTrackExtractionReturningError:]
-[AVAssetReaderVideoCompositionOutput videoComposition]
-[AVPixelBufferAttributesVideoOutputSettings pixelBufferAttributes]
-[AVVideoOutputSettings videoSettingsDictionary]
-[AVAssetReaderVideoCompositionOutput dealloc]
-[AVMetadataItem locale]
-[AVMetadataItem time]
-[AVMetadataItem value]
-[AVMetadataItem(AVMetadataItem_Local) _makeValueReady]
-[AVMetadataItem extraAttributes]
-[AVMetadataItem _figMetadataProperties]
-[AVAssetInspector trackCount]
-[AVAssetInspector isComposable]
-[AVPlayerItem _URL]
-[AVPlaybackItemInspectorLoader _addFigObjectNotifications]
-[AVURLAsset _tracksDidChange]
-[AVPlaybackItemInspectorLoader assetInspector]
-[AVPlaybackItemInspector _setPlaybackItem:]
-[AVPlaybackItemInspector trackCount]
-[AVPlaybackItemInspector _playbackItem]
-[AVPlaybackItemInspectorLoader _copyFormatReaderFromFigObjectWithFigErrorCode:]
-[AVPlaybackItemInspectorLoader _inspectionRequiresAFormatReader]
-[AVPlaybackItemTrackInspector _initWithAsset:trackID:trackIndex:]
-[AVPlaybackItemInspectorLoader _playbackItem]
-[AVPlaybackItemTrackInspector trackID]
-[AVPlaybackItemTrackInspector formatDescriptions]
-[AVAssetInspector commonMetadata]
-[AVAssetInspector alternateTrackGroups]
-[AVPlaybackItemTrackInspector mediaType]
-[AVPlaybackItemTrackInspector dealloc]
-[AVPlaybackItemInspectorLoader dealloc]
-[AVPlaybackItemInspectorLoader _removeFigObjectNotifications]
-[AVPlaybackItemInspector dealloc]
-[AVPlayerItem _changeStatusToFailedWithError:]
-[AVPlayerItem _invokeReadyForEnqueueingHandlers]
-[AVPlayer _enumerateItemsUsingBlock:]
-[AVStreamingResourceInspector duration]
-[AVPlayerLayerIntermediateLayer actionForKey:]
+[AVPlayerLayerIntermediateLayer defaultActionForKey:]
___27-[AVPlayerLayer setBounds:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVPlayerLayer _addAnimationsForMaskLayer:]
___44-[AVPlayerLayer _addAnimationsForMaskLayer:]_block_invoke
___44-[AVPlayerLayer _addAnimationsForMaskLayer:]_block_invoke_2
-[AVPlayerLayer _addAnimationsForClosedCaptionLayer:gravity:]
___61-[AVPlayerLayer _addAnimationsForClosedCaptionLayer:gravity:]_block_invoke
___copy_helper_block_138
___destroy_helper_block_139
___61-[AVPlayerLayer _addAnimationsForClosedCaptionLayer:gravity:]_block_invoke142
___58-[AVPlayerLayer _addAnimationsForVideoLayer:size:gravity:]_block_invoke
___copy_helper_block_152
___destroy_helper_block_153
___58-[AVPlayerLayer _addAnimationsForVideoLayer:size:gravity:]_block_invoke156
-[AVPlayerLayer _transformToAbsoluteAnimationOfBounds:]
___55-[AVPlayerLayer _transformToAbsoluteAnimationOfBounds:]_block_invoke
-[AVPlayerLayer _forBoundsAnimations:applyBlock:]
___37-[AVPlayerLayer addAnimation:forKey:]_block_invoke
___37-[AVPlayerLayer addAnimation:forKey:]_block_invoke_2
___copy_helper_block_186
___destroy_helper_block_187
___copy_helper_block_198
___destroy_helper_block_199
-[AVPlayerLayer removeAnimationForKey:]
___39-[AVPlayerLayer removeAnimationForKey:]_block_invoke
___copy_helper_block_209
___destroy_helper_block_210
-[AVPlayerLayer removeAllAnimations]
-[AVPlayerLayer finalize]
-[AVPlayerLayer _getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:]
-[AVPlayerLayer _notifyPlayerOfDisplaySize]
-[AVPlayerLayer _updatePresentationSize:forceUpdate:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___53-[AVPlayerLayer _updatePresentationSize:forceUpdate:]_block_invoke
___copy_helper_block_237
___destroy_helper_block_238
___59-[AVPlayerLayer _setHasPlayerToObserve:andShouldObserveIt:]_block_invoke
___copy_helper_block_247
___destroy_helper_block_248
___59-[AVPlayerLayer _setHasPlayerToObserve:andShouldObserveIt:]_block_invoke259
___copy_helper_block_270
___destroy_helper_block_271
___23-[AVPlayerLayer player]_block_invoke
___copy_helper_block_287
___destroy_helper_block_288
___27-[AVPlayerLayer setPlayer:]_block_invoke
___copy_helper_block_295
___destroy_helper_block_296
___29-[AVPlayerLayer videoGravity]_block_invoke
___copy_helper_block_309
___destroy_helper_block_310
___33-[AVPlayerLayer setVideoGravity:]_block_invoke
___copy_helper_block_313
___destroy_helper_block_314
-[AVPlayerLayer _videoLayer]
-[AVPlayerLayer _closedCaptionLayer]
-[AVPlayerLayer _subtitleLayer]
+[AVPlayerLayer keyPathsForValuesAffectingVideoRect]
-[AVPlayerLayer videoRect]
___26-[AVPlayerLayer videoRect]_block_invoke
___copy_helper_block_331
___destroy_helper_block_332
-[AVPlayerLayer _videoRectForBounds:]
-[CMTimeAsValue floatValue]
-[CMTimeAsValue charValue]
-[CMTimeAsValue unsignedCharValue]
-[CMTimeAsValue shortValue]
-[CMTimeAsValue unsignedShortValue]
-[CMTimeAsValue intValue]
-[CMTimeAsValue unsignedIntValue]
-[CMTimeAsValue longValue]
-[CMTimeAsValue unsignedLongValue]
-[CMTimeAsValue longLongValue]
-[CMTimeAsValue unsignedLongLongValue]
-[CMTimeAsValue boolValue]
-[CMTimeAsValue integerValue]
-[CMTimeAsValue unsignedIntegerValue]
-[CMTimeAsValue description]
-[CMTimeRangeAsValue description]
+[CMTimeMappingAsValue valueWithCMTimeMapping:]
-[CMTimeMappingAsValue CMTimeMappingValue]
-[CMTimeMappingAsValue getValue:]
-[CMTimeMappingAsValue objCType]
-[CMTimeMappingAsValue description]
+[NSValue(NSValueCMTimeExtensions) valueWithCMTime:]
-[NSValue(NSValueCMTimeExtensions) CMTimeValue]
+[NSValue(NSValueCMTimeExtensions) valueWithCMTimeRange:]
-[NSValue(NSValueCMTimeExtensions) CMTimeRangeValue]
+[NSValue(NSValueCMTimeExtensions) valueWithCMTimeMapping:]
-[NSValue(NSValueCMTimeExtensions) CMTimeMappingValue]
-[NSCoder(AVTimeCoding) encodeCMTimeMapping:forKey:]
-[NSCoder(AVTimeCoding) decodeCMTimeMappingForKey:]
_CMTimeHash
-[AVFragmentedMovie initWithURL:options:]
-[AVFragmentedMovie init]
-[AVFragmentedMovie _removeFigAssetNotifications]
_fragmentedMovieNotificationHandler
-[AVFragmentedMovie dealloc]
-[AVFragmentedMovie finalize]
-[AVFragmentedMovie _classForMovieTracks]
-[AVFragmentedMovie tracks]
-[AVFragmentedMovie _mindingInterval]
-[AVFragmentedMovie _setMindingInterval:]
+[AVFragmentedMovieMinder fragmentedMovieMinderWithMovie:mindingInterval:]
-[AVFragmentedMovieMinder init]
-[AVFragmentedMovieMinder initWithMovie:mindingInterval:]
-[AVFragmentedMovieMinder dealloc]
-[AVFragmentedMovieMinder finalize]
-[AVFragmentedMovieMinder movies]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___33-[AVFragmentedMovieMinder movies]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVFragmentedMovieMinder mindingInterval]
-[AVFragmentedMovieMinder setMindingInterval:]
-[AVFragmentedMovieMinder addFragmentedMovie:]
___46-[AVFragmentedMovieMinder addFragmentedMovie:]_block_invoke
___copy_helper_block_102
___destroy_helper_block_103
-[AVFragmentedMovieMinder removeFragmentedMovie:]
___49-[AVFragmentedMovieMinder removeFragmentedMovie:]_block_invoke
___copy_helper_block_108
___destroy_helper_block_109
-[AVFragmentedMovieTrack _startListeningToTrackReaderNotifications]
_fragmentedMovieTrackNotificationHandler
-[AVFragmentedMovieTrack _stopListeningToTrackReaderNotifications]
-[AVFragmentedMovieTrack _initWithAsset:trackID:trackIndex:]
-[AVFragmentedMovieTrack dealloc]
-[AVFragmentedMovieTrack finalize]
_AVMetadataObjectCreateBoxedMetadataFromFaceObjectAndFormatDescription
-[AVMetadataItem(AVMetadataItem_Local) _updateIdentifier]
-[AVMetadataItem(AVMetadataItem_Local) _updateExtendedLanguageTagFromLocale:]
-[AVMetadataItem(AVMetadataItem_Local) _updateLocaleFromExtendedLanguageTag:]
-[AVMetadataItem(AVMetadataItem_Local) _keyAsString]
-[AVMetadataItem(AVMetadataItemTypeCoercion) numberValue]
-[AVMetadataItem(AVMetadataItemTypeCoercion) dateValue]
-[AVMetadataItem(AVMetadataItemTypeCoercion) dataValue]
-[AVMetadataItem(AVMetadataItemTypeCoercion) imageValue]
+[AVMetadataItem initialize]
___52+[AVMetadataItem metadataItemsFromArray:withLocale:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[AVMetadataItem metadataItemsFromArray:filteredAndSortedAccordingToPreferredLanguages:]
___88+[AVMetadataItem metadataItemsFromArray:filteredAndSortedAccordingToPreferredLanguages:]_block_invoke
___copy_helper_block_202
___destroy_helper_block_203
___88+[AVMetadataItem metadataItemsFromArray:filteredAndSortedAccordingToPreferredLanguages:]_block_invoke206
___copy_helper_block_213
___destroy_helper_block_214
+[AVMetadataItem metadataItemsFromArray:filteredByIdentifier:]
___62+[AVMetadataItem metadataItemsFromArray:filteredByIdentifier:]_block_invoke
___copy_helper_block_229
___destroy_helper_block_230
___58+[AVMetadataItem metadataItemsFromArray:withKey:keySpace:]_block_invoke
___copy_helper_block_237
___destroy_helper_block_238
+[AVMetadataItem metadataItemsFromArray:withStringValue:]
___57+[AVMetadataItem metadataItemsFromArray:withStringValue:]_block_invoke
___copy_helper_block_241
___destroy_helper_block_242
+[AVMetadataItem metadataItemsFromArray:filteredByMetadataItemFilter:]
+[AVMetadataItem identifierForKey:keySpace:]
+[AVMetadataItem keyForIdentifier:]
+[AVMetadataItem keySpaceForIdentifier:]
-[AVMetadataItem finalize]
-[AVMetadataItem copyWithZone:]
-[AVMetadataItem mutableCopyWithZone:]
-[AVMetadataItem description]
-[AVMetadataItem intrinsicAttributesOfExtraAttributes:]
-[AVMetadataItem _areExtraAttributesOf:comparableToExtraAttributesOf:]
-[AVMetadataItem isEqual:]
-[AVMetadataItem hash]
-[AVMetadataItem _figMetadataDictionary]
-[AVMetadataItem _figMetadataFormat]
-[AVMetadataItem _figMetadataSpecificationReturningError:]
-[AVMetadataItem _copyValueAsCFTypeWithFormatDescription:failureReason:]
+[AVMetadataItem _clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace]
+[AVMetadataItem _isoUserDataKeysRequiringKeySpaceConversion]
___61+[AVMetadataItem _isoUserDataKeysRequiringKeySpaceConversion]_block_invoke
+[AVMetadataItem _replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:]
+[AVMetadataItem _figMetadataPropertyFromMetadataItems:]
-[AVMetadataItem identifier]
-[AVMetadataItem extendedLanguageTag]
-[AVMetadataItem duration]
-[AVMetadataItem dataType]
+[AVMetadataItem dataTypeForValue:]
-[AVMetadataItem _serializationDataType]
-[AVMetadataItem _conformingDataTypes]
-[AVMetadataItem statusOfValueForKey:error:]
-[AVMetadataItem loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVMetadataItem cancelLoading]
+[AVMutableMetadataItem metadataItem]
-[AVMutableMetadataItem key]
-[AVMutableMetadataItem identifier]
-[AVMutableMetadataItem extendedLanguageTag]
-[AVMutableMetadataItem time]
-[AVMutableMetadataItem duration]
-[AVMutableMetadataItem dataType]
-[AVMutableMetadataItem extraAttributes]
-[AVMutableMetadataItem setKey:]
-[AVMutableMetadataItem setKeySpace:]
-[AVMutableMetadataItem setIdentifier:]
+[AVMutableMetadataItem keyPathsForValuesAffectingIdentifier]
-[AVMutableMetadataItem setLocale:]
-[AVMutableMetadataItem setExtendedLanguageTag:]
-[AVMutableMetadataItem setTime:]
-[AVMutableMetadataItem setDuration:]
-[AVMutableMetadataItem setDataType:]
-[AVMutableMetadataItem setExtraAttributes:]
-[AVMutableMetadataItem copyWithZone:]
-[AVChapterMetadataItem init]
-[AVChapterMetadataItem _initWithAsset:chapterGroupIndex:chapterIndex:chapterType:locale:chapterDataType:time:duration:]
-[AVChapterMetadataItem _addFigAssetNotifications]
_chapterItem_handleFigChapterLoadingNotification
-[AVChapterMetadataItem _removeFigAssetNotifications]
-[AVChapterMetadataItem finalize]
-[AVChapterMetadataItem copyWithZone:]
-[AVChapterMetadataItem mutableCopyWithZone:]
-[AVChapterMetadataItem description]
-[AVChapterMetadataItem key]
-[AVChapterMetadataItem keySpace]
-[AVChapterMetadataItem locale]
-[AVChapterMetadataItem time]
-[AVChapterMetadataItem duration]
-[AVChapterMetadataItem dataType]
-[AVChapterMetadataItem extraAttributes]
-[AVChapterMetadataItem _chapterGroupIndex]
-[AVChapterMetadataItem _chapterIndex]
-[AVChapterMetadataItem _valueForKeyDependsOnMetadataValue:]
___37-[AVChapterMetadataItem _valueStatus]_block_invoke
___copy_helper_block_474
___destroy_helper_block_475
___Block_byref_object_copy_
___Block_byref_object_dispose_
___54-[AVChapterMetadataItem _setValueStatus:figErrorCode:]_block_invoke
___copy_helper_block_480
___destroy_helper_block_481
___54-[AVChapterMetadataItem _setValueStatus:figErrorCode:]_block_invoke484
___copy_helper_block_485
___destroy_helper_block_486
-[AVChapterMetadataItem statusOfValueForKey:error:]
-[AVChapterMetadataItem loadValuesAsynchronouslyForKeys:completionHandler:]
___75-[AVChapterMetadataItem loadValuesAsynchronouslyForKeys:completionHandler:]_block_invoke
___copy_helper_block_495
___destroy_helper_block_496
___75-[AVChapterMetadataItem loadValuesAsynchronouslyForKeys:completionHandler:]_block_invoke499
___copy_helper_block_500
___destroy_helper_block_501
-[AVChapterMetadataItem cancelLoading]
+[AVMetadataItemFilterForSharing addKeySpace:key:toWhitelistDictionary:]
+[AVMetadataItemFilterForSharing addIdentifier:toWhitelistDictionary:]
-[AVMetadataItemFilterForSharing whitelist]
___43-[AVMetadataItemFilterForSharing whitelist]_block_invoke
+[AVMetadataItemFilter metadataItemFilterForSharing]
___52+[AVMetadataItemFilter metadataItemFilterForSharing]_block_invoke
-[AVMetadataItemFilter whitelist]
_AVMetadataItemGetDataTypesForIdentifiersOfFieldsOfDetectedFaces
+[AVAsset assetWithURL:figPlaybackItem:trackIDs:dynamicBehavior:]
-[AVAsset copyWithZone:]
-[AVAsset _assetInspector]
-[AVAsset hash]
-[AVAsset valueForUndefinedKey:]
-[AVAsset statusOfValueForKey:]
-[AVAsset loadValuesAsynchronouslyForKeys:keysForCollectionKeys:completionHandler:]
-[AVAsset cancelLoading]
-[AVAsset _figAsset]
-[AVAsset _formatReader]
-[AVAsset _classForTrackInspectors]
-[AVAsset _absoluteURL]
-[AVAsset _mutableComposition]
-[AVAsset preferredRate]
-[AVAsset preferredVolume]
-[AVAsset preferredSoundCheckVolumeNormalization]
-[AVAsset preferredTransform]
-[AVAsset naturalTimeScale]
-[AVAsset referenceRestrictions]
-[AVAsset mediaSelectionGroups]
-[AVAsset availableMediaCharacteristicsWithMediaSelectionOptions]
-[AVAsset mediaSelectionGroupForMediaCharacteristic:]
-[AVAsset mediaSelectionGroupForPropertyList:mediaSelectionOption:]
-[AVAsset creationDate]
-[AVAsset lyrics]
-[AVAsset metadata]
-[AVAsset _ID3Metadata]
-[AVAsset tracks]
-[AVAsset _tracksDidChange]
-[AVAsset tracksWithMediaCharacteristics:]
-[AVAsset compatibleTrackForCompositionTrack:]
-[AVAsset isPlayable]
-[AVAsset isExportable]
-[AVAsset isReadable]
-[AVAsset canContainMovieFragments]
-[AVAsset containsMovieFragments]
-[AVAsset _hasResourceLoaderDelegate]
-[AVAsset(AVAssetChapterInspection) _loadChapterInfo]
___53-[AVAsset(AVAssetChapterInspection) _loadChapterInfo]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVAsset(AVAssetChapterInspection) _addChapterMetadataItem:timeRange:toChapters:fromIndex:]
-[AVAsset(AVAssetChapterInspection) _chapterDataTypeForMediaSubType:]
-[AVAsset(AVAssetChapterInspection) _chapterMetadataGroupsWithFigChapterGroups:titleLocale:containingItemsWithCommonKeys:]
-[AVAsset(AVAssetChapterInspection) chapterMetadataGroupsBestMatchingPreferredLanguages:]
+[AVURLAsset _avfValidationPlist]
___33+[AVURLAsset _avfValidationPlist]_block_invoke
+[AVURLAsset _figStreamingMIMETypes]
+[AVURLAsset _figFileMIMETypes]
+[AVURLAsset _figFilePathExtensions]
+[AVURLAsset _figMIMETypes]
___27+[AVURLAsset _figMIMETypes]_block_invoke
+[AVURLAsset _streamingUTTypes]
___31+[AVURLAsset _streamingUTTypes]_block_invoke
+[AVURLAsset _fileUTTypes]
___26+[AVURLAsset _fileUTTypes]_block_invoke
+[AVURLAsset _UTTypes]
___22+[AVURLAsset _UTTypes]_block_invoke
+[AVURLAsset audiovisualTypes]
+[AVURLAsset audiovisualMIMETypes]
+[AVURLAsset isPlayableExtendedMIMEType:]
-[AVURLAsset init]
-[AVURLAsset _handleURLAssetInitializationOptionsReturningFigAssetCreationOptions:selector:]
-[AVURLAsset _errorForFigNotificationPayload:key:]
-[AVURLAsset _addFigAssetNotifications]
_figLoaderNotificationHandler
-[AVURLAsset _removeFigAssetNotifications]
-[AVURLAsset finalize]
-[AVURLAsset _playbackItem]
-[AVURLAsset _classForTrackInspectors]
-[AVURLAsset _tracks]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___20-[AVURLAsset tracks]_block_invoke
___copy_helper_block_564
___destroy_helper_block_565
___30-[AVURLAsset _tracksDidChange]_block_invoke
___copy_helper_block_568
___destroy_helper_block_569
-[AVURLAsset _absoluteURL]
-[AVURLAsset lyrics]
-[AVURLAsset referenceRestrictions]
-[AVURLAsset(AVURLAssetCache_Private) shouldMatchDataInCacheByURLPathComponentOnly]
-[AVURLAsset(AVURLAssetCache_Private) shouldMatchDataInCacheByURLWithoutQueryComponent]
-[AVURLAsset(AVURLAssetCache_Private) cacheKey]
-[AVURLAsset(AVURLAssetCache_Private) identifyingTagClass]
-[AVURLAsset(AVURLAssetCache_Private) resolvedURL]
-[AVURLAsset(AVURLAssetCache_Private) downloadToken]
-[AVURLAsset(AVURLAssetCache_Private) SHA1Digest]
-[AVURLAsset(AVURLAssetCache_Private) _shouldOptimizeAccessForLinearMoviePlayback]
-[AVURLAsset(AVURLAssetCache_Private) _shouldPrepareToOptimizeForExclusivePlayback]
-[AVURLAsset(AVURLAssetURLHandling) resourceLoader]
___51-[AVURLAsset(AVURLAssetURLHandling) resourceLoader]_block_invoke
___copy_helper_block_615
___destroy_helper_block_616
-[AVURLAsset(AVURLAssetURLHandling) _hasResourceLoaderDelegate]
_AVSendResponseDictionaryToFigPlaybackItem
_AVSendResponseDictionaryToFigAsset
_AVSendResponseDictionaryToFigAssetImageGenerator
-[AVURLAsset(AVAssetURLLoading_Private) _finishLoadingCustomURLProviderRequestWithResponseProperties:context:]
-[AVURLAsset(AVAssetURLLoading_Private) _handleURLRequest:]
___59-[AVURLAsset(AVAssetURLLoading_Private) _handleURLRequest:]_block_invoke
___copy_helper_block_629
___destroy_helper_block_630
___59-[AVURLAsset(AVAssetURLLoading_Private) _handleURLRequest:]_block_invoke636
_assetURLResponseCallback
___copy_helper_block_642
___destroy_helper_block_643
+[AVAssetTrackEnumerator trackEnumeratorWithAsset:]
-[AVAssetTrackEnumerator initWithAsset:mediaCharacteristics:]
-[AVAssetTrackEnumerator setMediaCharacteristics:]
-[AVAssetImageGenerator init]
_aig_failedToGenerateCGImage
_aig_handleURLRequest
-[AVAssetImageGenerator finalize]
-[AVAssetImageGenerator asset]
-[AVAssetImageGenerator _ensureFigAssetImageGeneratorReturningError:]
___82-[AVAssetImageGenerator generateCGImagesAsynchronouslyForTimes:completionHandler:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___82-[AVAssetImageGenerator generateCGImagesAsynchronouslyForTimes:completionHandler:]_block_invoke134
___copy_helper_block_137
___destroy_helper_block_138
___82-[AVAssetImageGenerator generateCGImagesAsynchronouslyForTimes:completionHandler:]_block_invoke141
___82-[AVAssetImageGenerator generateCGImagesAsynchronouslyForTimes:completionHandler:]_block_invoke_2
___copy_helper_block_144
___destroy_helper_block_145
___copy_helper_block_148
___destroy_helper_block_149
-[AVAssetImageGenerator appliesPreferredTrackTransform]
-[AVAssetImageGenerator maximumSize]
-[AVAssetImageGenerator setApertureMode:]
-[AVAssetImageGenerator apertureMode]
-[AVAssetImageGenerator customVideoCompositor]
-[AVAssetImageGenerator requestedTimeToleranceBefore]
-[AVAssetImageGenerator requestedTimeToleranceAfter]
___45-[AVAssetImageGenerator _didGenerateCGImage:]_block_invoke
___copy_helper_block_166
___destroy_helper_block_167
-[AVAssetImageGenerator _failedToGenerateCGImage:]
___50-[AVAssetImageGenerator _failedToGenerateCGImage:]_block_invoke
___copy_helper_block_172
___destroy_helper_block_173
-[AVAssetImageGenerator _serverDied]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___47-[AVAssetImageGenerator _requestWithRequestID:]_block_invoke
___copy_helper_block_178
___destroy_helper_block_179
-[AVAssetImageGenerator _NSErrorForError:]
_aig_cgDataProviderReleaseCVPixelBufferCallback
+[AVAssetTrack mediaTypesForMediaCharacteristics]
___49+[AVAssetTrack mediaTypesForMediaCharacteristics]_block_invoke
-[AVAssetTrack init]
-[AVAssetTrack copyWithZone:]
-[AVAssetTrack finalize]
-[AVAssetTrack description]
-[AVAssetTrack _figTrackReader]
-[AVAssetTrack _figAssetTrack]
-[AVAssetTrack statusOfValueForKey:]
-[AVAssetTrack statusOfValueForKey:error:]
-[AVAssetTrack isPlayable]
-[AVAssetTrack playabilityValidationResult]
-[AVAssetTrack isSelfContained]
-[AVAssetTrack _subtitleFormatDescriptionMatchesTextDisplayFlags:flagsMask:]
-[AVAssetTrack hasMediaCharacteristics:]
-[AVAssetTrack mediaCharacteristics]
-[AVAssetTrack timeRange]
-[AVAssetTrack mediaPresentationTimeRange]
-[AVAssetTrack mediaDecodeTimeRange]
-[AVAssetTrack requiresFrameReordering]
-[AVAssetTrack naturalTimeScale]
-[AVAssetTrack locale]
-[AVAssetTrack dimensions]
-[AVAssetTrack layer]
-[AVAssetTrack preferredVolume]
-[AVAssetTrack loudnessInfo]
-[AVAssetTrack minFrameDuration]
-[AVAssetTrack segments]
-[AVAssetTrack segmentForTrackTime:]
-[AVAssetTrack samplePresentationTimeForTrackTime:]
-[AVAssetTrack availableMetadataFormats]
-[AVAssetTrack metadataForFormat:]
-[AVAssetTrack metadata]
-[AVAssetTrack alternateGroupID]
-[AVAssetTrack _firstAssociatedTrackWithAssociationType:]
-[AVAssetTrack _fallbackTrack]
-[AVAssetTrack _followingTrackAmongTracks:]
-[AVAssetTrack _pairedForcedOnlySubtitlesTrack]
-[AVAssetTrack _trackReferences]
-[AVAssetTrack hasProtectedContent]
-[AVAssetTrack availableTrackAssociationTypes]
-[AVAssetTrack associatedTracksOfType:]
-[AVAssetTrack canProvideSampleCursors]
-[AVAssetTrack makeSampleCursorWithPresentationTimeStamp:]
-[AVAssetTrack makeSampleCursorAtFirstSampleInDecodeOrder]
-[AVAssetTrack makeSampleCursorAtLastSampleInDecodeOrder]
-[AVAssetTrack hash]
+[AVAssetTrack keyPathsForValuesAffectingTimeRange]
+[AVPlayer playerWithURL:]
-[AVPlayer initWithURL:]
-[AVPlayer initWithDispatchQueue:]
-[AVPlayer finalize]
-[AVPlayer dispatchQueue]
-[AVPlayer _copyFigPlayer]
___26-[AVPlayer _copyFigPlayer]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVPlayer _isChangingValueForKey:]
-[AVPlayer valueForUndefinedKey:]
-[AVPlayer setValue:forUndefinedKey:]
-[AVPlayer error]
-[AVPlayer _changeStatusToFailedWithError:]
-[AVPlayer _updateDecoderPixelBufferAttributes:onFigPlayer:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___23-[AVPlayer currentItem]_block_invoke
___copy_helper_block_197
___destroy_helper_block_198
-[AVPlayer _updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression]
___84-[AVPlayer _updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression]_block_invoke
___copy_helper_block_217
___destroy_helper_block_218
___28-[AVPlayer _setCurrentItem:]_block_invoke
___copy_helper_block_223
___destroy_helper_block_224
-[AVPlayer _startObservingPropertiesOfCurrentItem:]
-[AVPlayer _stopObservingPropertiesOfCurrentItem:]
-[AVPlayer observeValueForKeyPath:ofObject:change:context:]
-[AVPlayer _advanceCurrentItemAccordingToFigPlaybackItem:]
___58-[AVPlayer _advanceCurrentItemAccordingToFigPlaybackItem:]_block_invoke
___copy_helper_block_252
___destroy_helper_block_253
-[AVPlayer prepareItem:withCompletionHandler:]
-[AVPlayer _createPlayer:item:preparationRequested:completionHandler:]
___70-[AVPlayer _createPlayer:item:preparationRequested:completionHandler:]_block_invoke
___70-[AVPlayer _createPlayer:item:preparationRequested:completionHandler:]_block_invoke_2
___copy_helper_block_284
___destroy_helper_block_285
___70-[AVPlayer _createPlayer:item:preparationRequested:completionHandler:]_block_invoke296
___copy_helper_block_297
___destroy_helper_block_298
___copy_helper_block_319
___destroy_helper_block_320
-[AVPlayer expectedAssetTypes]
-[AVPlayer setExpectedAssetTypes:]
___55-[AVPlayer _attachItem:andPerformOperation:withObject:]_block_invoke
___copy_helper_block_355
___destroy_helper_block_356
___55-[AVPlayer _attachItem:andPerformOperation:withObject:]_block_invoke363
___copy_helper_block_364
___destroy_helper_block_365
-[AVPlayer _coordinateWithRemovalOfItem:]
-[AVPlayer _items]
___18-[AVPlayer _items]_block_invoke
___copy_helper_block_380
___destroy_helper_block_381
-[AVPlayer _removeAllItems]
___16-[AVPlayer rate]_block_invoke
___copy_helper_block_390
___destroy_helper_block_391
-[AVPlayer setRate:withVolumeRampDuration:]
-[AVPlayer seekToDate:]
-[AVPlayer seekToDate:completionHandler:]
-[AVPlayer seekToTime:]
-[AVPlayer seekToTime:completionHandler:]
-[AVPlayer seekToTime:toleranceBefore:toleranceAfter:completionHandler:]
-[AVPlayer setRate:time:atHostTime:]
-[AVPlayer _createPrerollID]
-[AVPlayer _cancelPendingPrerollAndRegisterPrerollCompletionHandler:]
___Block_byref_object_copy_418
___Block_byref_object_dispose_419
-[AVPlayer _unregisterAndReturnRetainedPrerollCompletionHandler]
-[AVPlayer prerollAtRate:completionHandler:]
-[AVPlayer cancelPendingPrerolls]
-[AVPlayer prerollOperationDidComplete:notificationPayload:]
-[AVPlayer masterClock]
-[AVPlayer setMasterClock:]
-[AVPlayer _playerVolume]
___18-[AVPlayer volume]_block_invoke
___copy_helper_block_432
___destroy_helper_block_433
___19-[AVPlayer isMuted]_block_invoke
___copy_helper_block_442
___destroy_helper_block_443
-[AVPlayer setMuted:]
___27-[AVPlayer actionAtItemEnd]_block_invoke
___copy_helper_block_454
___destroy_helper_block_455
___41-[AVPlayer isClosedCaptionDisplayEnabled]_block_invoke
___copy_helper_block_473
___destroy_helper_block_474
+[AVPlayer keyPathsForValuesAffectingClosedCaptionDisplayEnabled]
-[AVPlayer _isDisplayingClosedCaptions]
-[AVPlayer isDisplayingClosedCaptions]
___38-[AVPlayer isDisplayingClosedCaptions]_block_invoke
___copy_helper_block_479
___destroy_helper_block_480
___64-[AVPlayer addPeriodicTimeObserverForInterval:queue:usingBlock:]_block_invoke
___61-[AVPlayer addBoundaryTimeObserverForTimes:queue:usingBlock:]_block_invoke
-[AVPlayer _pixelBufferAttributeMediator]
-[AVPlayer _subtitleLayers]
___27-[AVPlayer _subtitleLayers]_block_invoke
___copy_helper_block_515
___destroy_helper_block_516
-[AVPlayer _closedCaptionLayers]
___32-[AVPlayer _closedCaptionLayers]_block_invoke
___copy_helper_block_519
___destroy_helper_block_520
-[AVPlayer _videoLayers]
___24-[AVPlayer _videoLayers]_block_invoke
___copy_helper_block_523
___destroy_helper_block_524
-[AVPlayer _avPlayerLayers]
___27-[AVPlayer _avPlayerLayers]_block_invoke
___copy_helper_block_527
___destroy_helper_block_528
-[AVPlayer _updateClosedCaptionLayerBounds:]
-[AVPlayer _conformVideoLayer:toSize:]
-[AVPlayer _noteDisplaySize:forPlayerLayer:]
-[AVPlayer _attachFigPlayerToSubtitleLayers]
-[AVPlayer _detachFigPlayerFromSubtitleLayers]
-[AVPlayer _attachVideoLayersToFigPlayer]
-[AVPlayer _detachVideoLayersFromFigPlayer]
-[AVPlayer _attachClosedCaptionLayersToFigPlayer]
-[AVPlayer _detachClosedCaptionLayersFromFigPlayer]
___25-[AVPlayer _removeLayer:]_block_invoke
___copy_helper_block_555
___destroy_helper_block_556
___22-[AVPlayer _addLayer:]_block_invoke
___copy_helper_block_559
___destroy_helper_block_560
-[AVPlayer externalPlaybackVideoGravity]
-[AVPlayer setExternalPlaybackVideoGravity:]
-[AVPlayer _setNeroVideoGravityOnFigPlayer]
___43-[AVPlayer _setNeroVideoGravityOnFigPlayer]_block_invoke
-[AVPlayer _setFigPlaybackItemToMakeCurrent:]
-[AVPlayer _logPerformanceDataForPreviousItem]
-[AVPlayer _copyPerformanceDataForCurrentItem]
-[AVPlayer _logPerformanceDataForCurrentItem]
-[AVPlayer(AVPlayerProtectedContentPrivate) _displaysUsedForPlayback]
-[AVPlayer(AVPlayerProtectedContentPrivate) _externalProtectionStatus]
-[AVPlayer(AVPlayerProtectedContentPrivate) _extractVerifiedFPExternalProtectionStatus:]
___88-[AVPlayer(AVPlayerProtectedContentPrivate) _extractVerifiedFPExternalProtectionStatus:]_block_invoke
___88-[AVPlayer(AVPlayerProtectedContentPrivate) _extractVerifiedFPExternalProtectionStatus:]_block_invoke_2
-[AVPlayer(AVPlayerAudioPlaybackRateLimits) removeAudioPlaybackRateLimits]
-[AVPlayer(AVPlayerAudioPlaybackRateLimits) isAudioPlaybackEnabledAtAllRates]
-[AVPlayer(AVPlayerAudioPlaybackRateLimits) setMinRateForAudioPlayback:]
-[AVPlayer(AVPlayerAudioPlaybackRateLimits) minRateForAudioPlayback]
-[AVPlayer(AVPlayerAudioPlaybackRateLimits) setMaxRateForAudioPlayback:]
-[AVPlayer(AVPlayerAudioPlaybackRateLimits) maxRateForAudioPlayback]
-[AVPlayer(AVPlayerPixelBufferPoolSharing) _allowsPixelBufferPoolSharing]
-[AVPlayer(AVPlayerPixelBufferPoolSharing) allowsPixelBufferPoolSharing]
___72-[AVPlayer(AVPlayerPixelBufferPoolSharing) allowsPixelBufferPoolSharing]_block_invoke
___copy_helper_block_740
___destroy_helper_block_741
-[AVPlayer(AVPlayerPixelBufferPoolSharing) setAllowsPixelBufferPoolSharing:]
-[AVPlayer(AVPlayerFormatRestrictions) _disallowsAMRAudio]
-[AVPlayer(AVPlayerFormatRestrictions) disallowsAMRAudio]
___57-[AVPlayer(AVPlayerFormatRestrictions) disallowsAMRAudio]_block_invoke
___copy_helper_block_753
___destroy_helper_block_754
-[AVPlayer(AVPlayerFormatRestrictions) setDisallowsAMRAudio:]
-[AVPlayer(AVPlayerFormatRestrictions) _disallowsHardwareAcceleratedVideoDecoder]
-[AVPlayer(AVPlayerFormatRestrictions) disallowsHardwareAcceleratedVideoDecoder]
___80-[AVPlayer(AVPlayerFormatRestrictions) disallowsHardwareAcceleratedVideoDecoder]_block_invoke
___copy_helper_block_761
___destroy_helper_block_762
-[AVPlayer(AVPlayerFormatRestrictions) setDisallowsHardwareAcceleratedVideoDecoder:]
-[AVPlayer(AVPlayerAutomaticMediaSelection) setAppliesMediaSelectionCriteriaAutomatically:]
-[AVPlayer(AVPlayerAutomaticMediaSelection) _appliesMediaSelectionCriteriaAutomatically]
-[AVPlayer(AVPlayerAutomaticMediaSelection) appliesMediaSelectionCriteriaAutomatically]
___87-[AVPlayer(AVPlayerAutomaticMediaSelection) appliesMediaSelectionCriteriaAutomatically]_block_invoke
___copy_helper_block_775
___destroy_helper_block_776
-[AVPlayer(AVPlayerAutomaticMediaSelection) setMediaSelectionCriteria:forMediaCharacteristic:]
-[AVPlayer(AVPlayerAutomaticMediaSelection) mediaSelectionCriteriaForMediaCharacteristic:]
-[AVPlayer(AVPlayerAutomaticMediaSelectionPrivate) defaultMediaSelectionCriteriaForMediaCharacteristic:]
-[AVPlayer(AVPlayerAudioDeviceSupport) _audioOutputDeviceUniqueID]
-[AVPlayer(AVPlayerAudioDeviceSupport) audioOutputDeviceUniqueID]
___65-[AVPlayer(AVPlayerAudioDeviceSupport) audioOutputDeviceUniqueID]_block_invoke
___copy_helper_block_799
___destroy_helper_block_800
-[AVPlayer(AVPlayerAudioDeviceSupport) setAudioOutputDeviceUniqueID:]
-[AVPlayer(AVPlayerAudioDeviceSupport) autoSwitchStreamVariants]
-[AVPlayer(AVPlayerAudioDeviceSupport) setAutoSwitchStreamVariants:]
+[AVPlayer(AVPlayerAudioDeviceSupport) automaticallyNotifiesObserversOfAutoSwitchStreamVariants]
-[AVPlayer(AVPlayerAudioDeviceSupport) preparesItemsForPlaybackAsynchronously]
-[AVPlayer(AVPlayerAudioDeviceSupport) setPreparesItemsForPlaybackAsynchronously:]
-[AVPlayer(AVPlayerOutOfBandTextTrackRendering) allowsOutOfBandTextTrackRendering]
-[AVPlayer(AVPlayerOutOfBandTextTrackRendering) setAllowsOutOfBandTextTrackRendering:]
___avplayer_fpNotificationCallback_block_invoke
___copy_helper_block_830
___destroy_helper_block_831
+[AVAssetWriterInputMetadataAdaptor initialize]
+[AVAssetWriterInputMetadataAdaptor assetWriterInputMetadataAdaptorWithAssetWriterInput:]
-[AVAssetWriterInputMetadataAdaptor init]
-[AVAssetWriterInputMetadataAdaptor initWithAssetWriterInput:]
-[AVAssetWriterInputMetadataAdaptor dealloc]
-[AVAssetWriterInputMetadataAdaptor finalize]
-[AVAssetWriterInputMetadataAdaptor description]
-[AVAssetWriterInputMetadataAdaptor assetWriterInput]
-[AVAssetWriterInputMetadataAdaptor appendTimedMetadataGroup:]
+[AVPlayerItem _forNonStreamingURLsFireKVOForAssetWhenReadyForInspection]
+[AVPlayerItem playerItemWithURL:]
+[AVPlayerItem playerItemWithAsset:automaticallyLoadedAssetKeys:]
-[AVPlayerItem _createPlayerItemInternal]
-[AVPlayerItem initWithURL:]
-[AVPlayerItem initWithAsset:automaticallyLoadedAssetKeys:]
-[AVPlayerItem finalize]
-[AVPlayerItem copyWithZone:]
-[AVPlayerItem delegate]
-[AVPlayerItem setDelegate:]
-[AVPlayerItem valueForUndefinedKey:]
-[AVPlayerItem _stateDispatchQueue]
-[AVPlayerItem _copyFigPlaybackItem]
___36-[AVPlayerItem _copyFigPlaybackItem]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___Block_byref_object_copy_
___Block_byref_object_dispose_
___38-[AVPlayerItem _configurePlaybackItem]_block_invoke
___copy_helper_block_406
___destroy_helper_block_407
___36-[AVPlayerItem _isCurrentPlayerItem]_block_invoke
___copy_helper_block_422
___destroy_helper_block_423
___40-[AVPlayerItem _setIsCurrentPlayerItem:]_block_invoke
___copy_helper_block_426
___destroy_helper_block_427
-[AVPlayerItem _attachToPlayer:]
-[AVPlayerItem _attachToFigPlayer]
___34-[AVPlayerItem _attachToFigPlayer]_block_invoke
___copy_helper_block_458
___destroy_helper_block_459
-[AVPlayerItem _enqueueWithPlayer:shouldAppendItem:]
-[AVPlayerItem _dequeueFromPlayer]
-[AVPlayerItem _playerChangeStatusToFailedWithError:]
-[AVPlayerItem _setAssetWithFigPlaybackItem:]
-[AVPlayerItem _setTrackIDsForAssetWithFigPlaybackItem:]
-[AVPlayerItem _makeNewAssetWithFigPlaybackItem]
-[AVPlayerItem _informObserversAboutAvailabilityOfPresentationSize]
-[AVPlayerItem _informObserversAboutAvailabilityOfDuration:]
-[AVPlayerItem automaticallyLoadedAssetKeys]
___25-[AVPlayerItem _duration]_block_invoke
___24-[AVPlayerItem duration]_block_invoke
___copy_helper_block_579
___destroy_helper_block_580
-[AVPlayerItem _tracksWithFPTrackIDArray:]
-[AVPlayerItem _cachedTracks]
___29-[AVPlayerItem _cachedTracks]_block_invoke
___copy_helper_block_601
___destroy_helper_block_602
-[AVPlayerItem _tracksFromAssetTrackIDs]
___40-[AVPlayerItem _tracksFromAssetTrackIDs]_block_invoke
___copy_helper_block_611
___destroy_helper_block_612
___22-[AVPlayerItem tracks]_block_invoke
___copy_helper_block_619
___destroy_helper_block_620
_AVFigPlaybackItemNotificationCallback_FigPlaybackItemLegibleOutputChanged
_AVFigPlaybackItemNotificationCallback_FigPlaybackItemLegibleOutputWasFlushed
_AVFigPlaybackItemNotificationCallback_MetadataOutputChanged
_AVFigPlaybackItemNotificationCallback_MetadataOutputWasFlushed
-[AVPlayerItem _addFAListeners]
_avplayeritem_figassetNotificationCallback
-[AVPlayerItem _removeFAListeners]
-[AVPlayerItem _respondToBecomingReadyForBasicInspectionWithDuration:]
-[AVPlayerItem _makeReadyForEnqueueingWithCompletionHandler:]
-[AVPlayerItem _canPlayFastForward]
-[AVPlayerItem canPlayFastForward]
___34-[AVPlayerItem canPlayFastForward]_block_invoke
___copy_helper_block_659
___destroy_helper_block_660
-[AVPlayerItem _canPlayFastReverse]
-[AVPlayerItem canPlayFastReverse]
___34-[AVPlayerItem canPlayFastReverse]_block_invoke
___copy_helper_block_669
___destroy_helper_block_670
-[AVPlayerItem _isAFileBasedItemThatsReadyToPlay]
-[AVPlayerItem _canPlayReverse]
-[AVPlayerItem canPlayReverse]
___30-[AVPlayerItem canPlayReverse]_block_invoke
___copy_helper_block_679
___destroy_helper_block_680
-[AVPlayerItem _canPlaySlowForward]
-[AVPlayerItem canPlaySlowForward]
___34-[AVPlayerItem canPlaySlowForward]_block_invoke
___copy_helper_block_687
___destroy_helper_block_688
-[AVPlayerItem _canPlaySlowReverse]
-[AVPlayerItem canPlaySlowReverse]
___34-[AVPlayerItem canPlaySlowReverse]_block_invoke
___copy_helper_block_695
___destroy_helper_block_696
-[AVPlayerItem _canStepForward]
-[AVPlayerItem canStepForward]
___30-[AVPlayerItem canStepForward]_block_invoke
___copy_helper_block_703
___destroy_helper_block_704
-[AVPlayerItem _canStepBackward]
-[AVPlayerItem canStepBackward]
___31-[AVPlayerItem canStepBackward]_block_invoke
___copy_helper_block_711
___destroy_helper_block_712
___32-[AVPlayerItem presentationSize]_block_invoke
___copy_helper_block_715
___destroy_helper_block_716
___Block_byref_object_copy_721
___Block_byref_object_dispose_722
-[AVPlayerItem _unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:finished:]
-[AVPlayerItem seekToTime:]
-[AVPlayerItem seekToTime:completionHandler:]
-[AVPlayerItem cancelPendingSeeks]
-[AVPlayerItem currentDate]
-[AVPlayerItem seekToDate:completionHandler:]
-[AVPlayerItem seekToDate:]
-[AVPlayerItem initialDate]
-[AVPlayerItem setInitialDate:]
-[AVPlayerItem currentEstimatedDate]
-[AVPlayerItem initialEstimatedDate]
-[AVPlayerItem setInitialEstimatedDate:]
-[AVPlayerItem stepByCount:]
___38-[AVPlayerItem forwardPlaybackEndTime]_block_invoke
___copy_helper_block_755
___destroy_helper_block_756
___38-[AVPlayerItem reversePlaybackEndTime]_block_invoke
___copy_helper_block_763
___destroy_helper_block_764
+[AVPlayerItem _copyTimebaseFromFigPlaybackItem:]
-[AVPlayerItem _copyProxyTimebase]
-[AVPlayerItem _copyTimebase]
___29-[AVPlayerItem _copyTimebase]_block_invoke
___copy_helper_block_767
___destroy_helper_block_768
-[AVPlayerItem timebase]
-[AVPlayerItem _updateTimebase]
___31-[AVPlayerItem _updateTimebase]_block_invoke
___copy_helper_block_775
___destroy_helper_block_776
-[AVPlayerItem _quietlySetRTCReportingFlags:]
-[AVPlayerItem setRTCReportingFlags:]
-[AVPlayerItem RTCReportingFlags]
-[AVPlayerItem allowsExtendedReadAhead]
-[AVPlayerItem _quietlySetAllowsExtendedReadAhead:]
-[AVPlayerItem setAllowsExtendedReadAhead:]
-[AVPlayerItem maximumTrailingBufferDuration]
-[AVPlayerItem _quietlySetMaximumTrailingBufferDuration:]
-[AVPlayerItem setMaximumTrailingBufferDuration:]
-[AVPlayerItem shouldOptimizeForExclusivePlayback]
-[AVPlayerItem _quietlySetShouldOptimizeForExclusivePlayback:]
-[AVPlayerItem setShouldOptimizeForExclusivePlayback:]
-[AVPlayerItem _alwaysMonitorsPlayability]
-[AVPlayerItem alwaysMonitorsPlayability]
___41-[AVPlayerItem alwaysMonitorsPlayability]_block_invoke
___copy_helper_block_783
___destroy_helper_block_784
-[AVPlayerItem _quietlySetAlwaysMonitorsPlayability:]
-[AVPlayerItem setAlwaysMonitorsPlayability:]
-[AVPlayerItem _playbackLikelyToKeepUpTrigger]
-[AVPlayerItem playbackLikelyToKeepUpTrigger]
___45-[AVPlayerItem playbackLikelyToKeepUpTrigger]_block_invoke
___copy_helper_block_793
___destroy_helper_block_794
-[AVPlayerItem _quietlySetPlaybackLikelyToKeepUpTrigger:]
-[AVPlayerItem setPlaybackLikelyToKeepUpTrigger:]
-[AVPlayerItem _willNeverSeekBackwardsHint]
-[AVPlayerItem willNeverSeekBackwardsHint]
___42-[AVPlayerItem willNeverSeekBackwardsHint]_block_invoke
___copy_helper_block_803
___destroy_helper_block_804
-[AVPlayerItem _quietlySetWillNeverSeekBackwardsHint:]
-[AVPlayerItem setWillNeverSeekBackwardsHint:]
-[AVPlayerItem savesDownloadedDataToDiskWhenDone]
-[AVPlayerItem setSavesDownloadedDataToDiskWhenDone:]
+[AVPlayerItem automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone]
-[AVPlayerItem _continuesPlayingDuringPrerollForSeek]
-[AVPlayerItem continuesPlayingDuringPrerollForSeek]
___52-[AVPlayerItem continuesPlayingDuringPrerollForSeek]_block_invoke
___copy_helper_block_811
___destroy_helper_block_812
-[AVPlayerItem _quietlySetContinuesPlayingDuringPrerollForSeek:]
-[AVPlayerItem setContinuesPlayingDuringPrerollForSeek:]
-[AVPlayerItem _continuesPlayingDuringPrerollForRateChange]
-[AVPlayerItem continuesPlayingDuringPrerollForRateChange]
___58-[AVPlayerItem continuesPlayingDuringPrerollForRateChange]_block_invoke
___copy_helper_block_819
___destroy_helper_block_820
-[AVPlayerItem _quietlySetContinuesPlayingDuringPrerollForRateChange:]
-[AVPlayerItem setContinuesPlayingDuringPrerollForRateChange:]
-[AVPlayerItem usesIFrameOnlyPlaybackForHighRateScaledEdits]
-[AVPlayerItem _quietlySetUsesIFrameOnlyPlaybackForHighRateScaledEdits:]
-[AVPlayerItem setUsesIFrameOnlyPlaybackForHighRateScaledEdits:]
-[AVPlayerItem minimumIntervalForIFrameOnlyPlayback]
-[AVPlayerItem _quietlySetMinimumIntervalForIFrameOnlyPlayback:]
-[AVPlayerItem setMinimumIntervalForIFrameOnlyPlayback:]
-[AVPlayerItem speedThresholdForIFrameOnlyPlayback]
-[AVPlayerItem _quietlySetSpeedThresholdForIFrameOnlyPlayback:]
-[AVPlayerItem setSpeedThresholdForIFrameOnlyPlayback:]
-[AVPlayerItem _setAudioCurvesAccordingToInputParameters:forTrackID:]
-[AVPlayerItem _setAudioTapProcessor:forTrackID:]
-[AVPlayerItem _setAudioTimePitchAlgorithm:forTrackID:]
-[AVPlayerItem _applyNewAudioMix:oldAudioMix:]
-[AVPlayerItem _setVideoCompositionRenderScale:]
-[AVPlayerItem customVideoCompositor]
-[AVPlayerItem seekingWaitsForVideoCompositionRendering]
-[AVPlayerItem _applySeekingWaitsForVideoCompositionRendering]
-[AVPlayerItem setSeekingWaitsForVideoCompositionRendering:]
-[AVPlayerItem textStyleRules]
-[AVPlayerItem _applyTextStyleRules]
-[AVPlayerItem setTextStyleRules:]
-[AVPlayerItem _audioTimePitchAlgorithm]
-[AVPlayerItem audioTimePitchAlgorithm]
___39-[AVPlayerItem audioTimePitchAlgorithm]_block_invoke
___copy_helper_block_867
___destroy_helper_block_868
-[AVPlayerItem _quietlySetFigTimePitchAlgorithm:]
-[AVPlayerItem setAudioTimePitchAlgorithm:]
___40-[AVPlayerItem isPlaybackLikelyToKeepUp]_block_invoke
___copy_helper_block_876
___destroy_helper_block_877
-[AVPlayerItem isPlaybackBufferFull]
___36-[AVPlayerItem isPlaybackBufferFull]_block_invoke
___copy_helper_block_882
___destroy_helper_block_883
___37-[AVPlayerItem isPlaybackBufferEmpty]_block_invoke
___copy_helper_block_888
___destroy_helper_block_889
-[AVPlayerItem progressTowardsPlaybackLikelyToKeepUp]
-[AVPlayerItem playabilityMetrics]
-[AVPlayerItem _seekableTimeRangesFromFPSeekableTimeIntervals:]
___34-[AVPlayerItem seekableTimeRanges]_block_invoke
___copy_helper_block_914
___destroy_helper_block_915
-[AVPlayerItem _loadedTimeRangesFromFPPlaybableTimeIntervals:]
___32-[AVPlayerItem loadedTimeRanges]_block_invoke
___copy_helper_block_924
___destroy_helper_block_925
-[AVPlayerItem gaplessInfo]
-[AVPlayerItem _playbackProperties]
-[AVPlayerItem _quietlySetPlaybackProperties:]
___46-[AVPlayerItem _quietlySetPlaybackProperties:]_block_invoke
-[AVPlayerItem setGaplessInfo:]
-[AVPlayerItem variantIndex]
-[AVPlayerItem _quietlySetVariantIndex:]
-[AVPlayerItem setVariantIndex:]
+[AVPlayerItem automaticallyNotifiesObserversOfVariantIndex]
-[AVPlayerItem _applyMediaSelectionOptions]
-[AVPlayerItem _cacheMediaSelectionOption:forMediaSelectionGroup:]
-[AVPlayerItem _clearCachedMediaSelectionGroup:]
-[AVPlayerItem _selectMediaOption:usingFigSelectedMediaArrayObtainedFromGroup:]
-[AVPlayerItem _allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:]
-[AVPlayerItem _selectMediaOption:inNonStreamingGroup:cacheIfAppropriate:]
-[AVPlayerItem _selectMediaOption:inStreamingGroup:cacheIfAppropriate:]
-[AVPlayerItem _selectMediaOption:inMediaSelectionGroup:cacheIfAppropriate:]
-[AVPlayerItem selectMediaOption:inMediaSelectionGroup:]
-[AVPlayerItem selectMediaOptionAutomaticallyInMediaSelectionGroup:]
-[AVPlayerItem selectedMediaOptionInMediaSelectionGroup:]
-[AVPlayerItem _quietlySetNonForcedSubtitleDisplayEnabled:]
-[AVPlayerItem _isNonForcedSubtitleDisplayEnabled]
___49-[AVPlayerItem isNonForcedSubtitleDisplayEnabled]_block_invoke
___copy_helper_block_978
___destroy_helper_block_979
-[AVPlayerItem _figCPEProtector]
-[AVPlayerItem timedMetadata]
-[AVPlayerItem _setTimedMetadata:]
-[AVPlayerItem _setSyncLayersOnFigPlaybackItem:]
-[AVPlayerItem _removeSyncLayer:]
___33-[AVPlayerItem _removeSyncLayer:]_block_invoke
___copy_helper_block_987
___destroy_helper_block_988
-[AVPlayerItem _addSyncLayer:]
___30-[AVPlayerItem _addSyncLayer:]_block_invoke
___copy_helper_block_991
___destroy_helper_block_992
-[AVPlayerItem _hasEnabledVideo]
-[AVPlayerItem hasEnabledVideo]
___31-[AVPlayerItem hasEnabledVideo]_block_invoke
___copy_helper_block_1001
___destroy_helper_block_1002
+[AVPlayerItem automaticallyNotifiesObserversOfHasEnabledVideo]
-[AVPlayerItem _hasEnabledAudio]
-[AVPlayerItem hasEnabledAudio]
___31-[AVPlayerItem hasEnabledAudio]_block_invoke
___copy_helper_block_1005
___destroy_helper_block_1006
+[AVPlayerItem automaticallyNotifiesObserversOfHasEnabledAudio]
-[AVPlayerItem _suppressionForOutputs:]
-[AVPlayerItem _suppressesVideoLayers]
___38-[AVPlayerItem _suppressesVideoLayers]_block_invoke
___copy_helper_block_1011
___destroy_helper_block_1012
-[AVPlayerItem _setSuppressesVideoLayers:]
___42-[AVPlayerItem _setSuppressesVideoLayers:]_block_invoke
___copy_helper_block_1015
___destroy_helper_block_1016
-[AVPlayerItem _updateVideoSuppressionOnFigPlaybackItem:basedOnOutputs:]
-[AVPlayerItem _updateLegibleSuppressionOnFigPlaybackItem:basedOnOutputs:]
-[AVPlayerItem networkUsuallyExceedsMaxBitRate]
-[AVPlayerItem setNetworkUsuallyExceedsMaxBitRate:]
+[AVPlayerItem automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate]
-[AVPlayerItem allowProgressiveSwitchUp]
-[AVPlayerItem setAllowProgressiveSwitchUp:]
+[AVPlayerItem automaticallyNotifiesObserversOfAllowProgressiveSwitchUp]
-[AVPlayerItem preferredPeakBitRate]
-[AVPlayerItem setPreferredPeakBitRate:]
-[AVPlayerItem maximumBitRate]
-[AVPlayerItem setMaximumBitRate:]
-[AVPlayerItem _renderingSuppressionDidChangeForOutput:]
___56-[AVPlayerItem _renderingSuppressionDidChangeForOutput:]_block_invoke
___copy_helper_block_1040
___destroy_helper_block_1041
-[AVPlayerItem requiresAccessLog]
-[AVPlayerItem setRequiresAccessLog:]
+[AVPlayerItem automaticallyNotifiesObserversOfPlaybackBufferFull]
+[AVPlayerItem automaticallyNotifiesObserversOfSeekableTimeRanges]
-[AVPlayerItem(AVPlayerItemProtectedContent) isAuthorizationRequiredForPlayback]
-[AVPlayerItem(AVPlayerItemProtectedContent) isApplicationAuthorizedForPlayback]
-[AVPlayerItem(AVPlayerItemProtectedContent) isContentAuthorizedForPlayback]
-[AVPlayerItem(AVPlayerItemProtectedContent) requestContentAuthorizationAsynchronouslyWithTimeoutInterval:completionHandler:]
___125-[AVPlayerItem(AVPlayerItemProtectedContent) requestContentAuthorizationAsynchronouslyWithTimeoutInterval:completionHandler:]_block_invoke
___copy_helper_block_1187
___destroy_helper_block_1188
_contentAuthorizationHandler
-[AVPlayerItem(AVPlayerItemProtectedContent) cancelContentAuthorizationRequest]
-[AVPlayerItem(AVPlayerItemProtectedContent) contentAuthorizationRequestStatus]
+[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:withOptions:]
___140+[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:withOptions:]_block_invoke
___copy_helper_block_1211
___destroy_helper_block_1212
+[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _uninitializeProtectedContentPlaybackSupportSession:]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _isExternalProtectionRequiredForPlaybackInternal]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _isExternalProtectionRequiredForPlayback]
___93-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _isExternalProtectionRequiredForPlayback]_block_invoke
___copy_helper_block_1222
___destroy_helper_block_1223
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _setExternalProtectionRequiredForPlayback:]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _applicationAuthorizationChallengeProvider]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _applicationAuthorizationChallenge]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _setApplicationAuthorizationChallengeResponse:]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _isRental]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _rentalStartDate]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _rentalExpirationDate]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _isRentalPlaybackStarted]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _rentalPlaybackStartedDate]
-[AVPlayerItem(AVPlayerItemProtectedContentPrivate) _rentalPlaybackExpirationDate]
-[AVPlayerItem(AVPlayerItemLogging) accessLog]
-[AVPlayerItem(AVPlayerItemLogging) errorLog]
-[AVPlayerConnection description]
-[AVPlayerConnection error]
-[AVPlayerItem(AVPlayerItemDataYouTubeID_Private) setDataYouTubeID:]
-[AVPlayerItem(AVPlayerItemDataYouTubeID_Private) dataYouTubeID]
-[AVPlayerItem(AVPlayerItemOutputs) _videoOutputs]
___50-[AVPlayerItem(AVPlayerItemOutputs) _videoOutputs]_block_invoke
___copy_helper_block_1306
___destroy_helper_block_1307
-[AVPlayerItem(AVPlayerItemOutputs) _legibleOutputsForKeys]
___59-[AVPlayerItem(AVPlayerItemOutputs) _legibleOutputsForKeys]_block_invoke
___copy_helper_block_1310
___destroy_helper_block_1311
-[AVPlayerItem(AVPlayerItemOutputs) _metadataOutputsForKeys]
___60-[AVPlayerItem(AVPlayerItemOutputs) _metadataOutputsForKeys]_block_invoke
___copy_helper_block_1314
___destroy_helper_block_1315
-[AVPlayerItem(AVPlayerItemOutputs) _evaluateVideoOutputs]
___58-[AVPlayerItem(AVPlayerItemOutputs) _evaluateVideoOutputs]_block_invoke
___copy_helper_block_1320
___destroy_helper_block_1321
-[AVPlayerItem(AVPlayerItemOutputs) _evaluateLegibleOutputs]
___60-[AVPlayerItem(AVPlayerItemOutputs) _evaluateLegibleOutputs]_block_invoke
___copy_helper_block_1328
___destroy_helper_block_1329
-[AVPlayerItem(AVPlayerItemOutputs) _evaluateMetadataOutputs]
___61-[AVPlayerItem(AVPlayerItemOutputs) _evaluateMetadataOutputs]_block_invoke
___copy_helper_block_1338
___destroy_helper_block_1339
-[AVPlayerItem(AVPlayerItemOutputs) _preferredPixelBufferAttributes]
-[AVPlayerItem(AVPlayerItemOutputs) _addVideoOutput:]
___53-[AVPlayerItem(AVPlayerItemOutputs) _addVideoOutput:]_block_invoke
___copy_helper_block_1342
___destroy_helper_block_1343
-[AVPlayerItem(AVPlayerItemOutputs) _addLegibleOutput:]
___55-[AVPlayerItem(AVPlayerItemOutputs) _addLegibleOutput:]_block_invoke
___copy_helper_block_1352
___destroy_helper_block_1353
-[AVPlayerItem(AVPlayerItemOutputs) _addMetadataOutput:]
___56-[AVPlayerItem(AVPlayerItemOutputs) _addMetadataOutput:]_block_invoke
___copy_helper_block_1356
___destroy_helper_block_1357
-[AVPlayerItem(AVPlayerItemOutputs) addOutput:]
___47-[AVPlayerItem(AVPlayerItemOutputs) addOutput:]_block_invoke
___copy_helper_block_1364
___destroy_helper_block_1365
-[AVPlayerItem(AVPlayerItemOutputs) _removeVideoOutput:]
___56-[AVPlayerItem(AVPlayerItemOutputs) _removeVideoOutput:]_block_invoke
___copy_helper_block_1381
___destroy_helper_block_1382
-[AVPlayerItem(AVPlayerItemOutputs) _removeLegibleOutput:]
___58-[AVPlayerItem(AVPlayerItemOutputs) _removeLegibleOutput:]_block_invoke
___copy_helper_block_1387
___destroy_helper_block_1388
-[AVPlayerItem(AVPlayerItemOutputs) _removeMetadataOutput:]
___59-[AVPlayerItem(AVPlayerItemOutputs) _removeMetadataOutput:]_block_invoke
___copy_helper_block_1391
___destroy_helper_block_1392
-[AVPlayerItem(AVPlayerItemOutputs) removeOutput:]
___50-[AVPlayerItem(AVPlayerItemOutputs) removeOutput:]_block_invoke
___copy_helper_block_1395
___destroy_helper_block_1396
-[AVPlayerItem(AVPlayerItemOutputs) outputs]
___44-[AVPlayerItem(AVPlayerItemOutputs) outputs]_block_invoke
___copy_helper_block_1407
___destroy_helper_block_1408
-[AVPlayerItem(LegibleOutputSupport) _legibleOutputForKey:]
-[AVPlayerItem(LegibleOutputSupport) _figPlaybackItem:didOutputAttributedStrings:nativeSampleBuffers:atItemTime:withLegibleOutputsDictionaryKey:]
-[AVPlayerItem(LegibleOutputSupport) _figPlaybackItem:didFlushLegibleOutputWithDictionaryKey:]
-[AVPlayerItem(MetadataOutputSupport) _metadataOutputForKey:]
-[AVPlayerItem(MetadataOutputSupport) _figPlaybackItem:didOutputSampleBuffers:fromTrackWithID:forMetadataOutputWithDictionaryKey:]
-[AVPlayerItem(MetadataOutputSupport) _figPlaybackItem:didFlushMetadataOutputWithDictionaryKey:]
___avplayeritem_figassetNotificationCallback_block_invoke
___copy_helper_block_1449
___destroy_helper_block_1450
___avplayeritem_fpItemNotificationCallback_block_invoke
___copy_helper_block_1475
___destroy_helper_block_1476
+[AVPlayerItemTrack playerItemTrackWithFigPlaybackItem:readyForInspection:trackID:asset:playerItem:]
-[AVPlayerItemTrack _initWithFigPlaybackItem:readyForInspection:trackID:asset:playerItem:]
-[AVPlayerItemTrack finalize]
-[AVPlayerItemTrack description]
-[AVPlayerItemTrack isEqual:]
-[AVPlayerItemTrack hash]
-[AVPlayerItemTrack _weakReferenceToPlayerItem]
-[AVPlayerItemTrack _playerItem]
-[AVPlayerItemTrack _transferEnabledToFig]
-[AVPlayerItemTrack currentVideoFrameRate]
-[AVPlayerItemTrack _transferVideoFieldModeToFig]
-[AVPlayerItemTrack loudnessInfo]
-[AVPlayerItemTrack _transferLoudnessInfoToFig]
-[AVPlayerItemTrack setLoudnessInfo:]
-[AVPlayerItemTrack _transferCachedValuesToFig]
-[AVPlayerItemTrack _attachToFigPlaybackItemOfPlayerItem:]
-[AVPlayerItemTrack _respondToFigPlaybackItemBecomingReadyForInpection]
+[AVQueuePlayer initialize]
+[AVQueuePlayer queuePlayerWithItems:]
+[AVQueuePlayer playerWithPlayerItem:]
+[AVQueuePlayer playerWithURL:]
-[AVQueuePlayer init]
-[AVQueuePlayer initWithItems:]
-[AVQueuePlayer dealloc]
-[AVQueuePlayer _defaultActionAtItemEnd]
-[AVQueuePlayer setActionAtItemEnd:]
-[AVQueuePlayer items]
-[AVQueuePlayer advanceToNextItem]
-[AVQueuePlayer canInsertItem:afterItem:]
-[AVQueuePlayer _shouldEnqueueModifications]
-[AVQueuePlayer _enqueueModification:]
-[AVQueuePlayer insertItem:afterItem:]
___38-[AVQueuePlayer insertItem:afterItem:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVQueuePlayer removeItem:]
___28-[AVQueuePlayer removeItem:]_block_invoke
___copy_helper_block_51
___destroy_helper_block_52
-[AVQueuePlayer removeAllItems]
___31-[AVQueuePlayer removeAllItems]_block_invoke
___copy_helper_block_57
___destroy_helper_block_58
-[AVQueuePlayer beginModifications]
-[AVQueuePlayer commitModifications]
-[AVComposition finalize]
-[AVComposition description]
-[AVComposition _loadAssetInspectorAndLoaderOnce]
___49-[AVComposition _loadAssetInspectorAndLoaderOnce]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVComposition _assetInspectorLoader]
___30-[AVComposition _formatReader]_block_invoke
___copy_helper_block_50
___destroy_helper_block_51
-[AVComposition _classForTrackInspectors]
-[AVComposition mutableCopyWithZone:]
___31-[AVComposition _mutableTracks]_block_invoke
___copy_helper_block_70
___destroy_helper_block_71
-[AVComposition _setNaturalSize:]
-[AVMutableComposition _newTrackForIndex:]
-[AVMutableComposition tracks]
-[AVMutableComposition naturalSize]
-[AVMutableComposition setNaturalSize:]
-[AVMutableComposition insertTimeRange:ofAsset:atTime:error:]
-[AVMutableComposition insertEmptyTimeRange:]
-[AVMutableComposition removeTimeRange:]
-[AVMutableComposition scaleTimeRange:toDuration:]
-[AVMutableComposition removeTrack:]
-[AVMutableComposition mutableTrackCompatibleWithTrack:]
-[AVMutableComposition _notifyAllTracksThatSegmentsWillChange]
-[AVMutableComposition _notifyAllTracksThatSegmentsDidChange]
-[AVCompositionFormatReaderInspector isPlayable]
-[AVCompositionFormatReaderInspector isExportable]
-[AVCompositionFormatReaderInspector isReadable]
-[AVCompositionFormatReaderInspector isComposable]
-[AVCompositionTrack finalize]
-[AVCompositionTrack description]
-[AVCompositionTrack segments]
-[AVMutableCompositionTrack segments]
-[AVMutableCompositionTrack setSegments:]
-[AVMutableCompositionTrack insertTimeRanges:ofTracks:atTime:error:]
-[AVMutableCompositionTrack insertEmptyTimeRange:]
-[AVMutableCompositionTrack removeTimeRange:]
-[AVMutableCompositionTrack scaleTimeRange:toDuration:]
-[AVMutableCompositionTrack validateTrackSegments:error:]
-[AVMutableCompositionTrack _setTrackReaderPropertyValue:forKey:]
-[AVMutableCompositionTrack naturalTimeScale]
-[AVMutableCompositionTrack setNaturalTimeScale:]
-[AVMutableCompositionTrack languageCode]
-[AVMutableCompositionTrack setLanguageCode:]
-[AVMutableCompositionTrack extendedLanguageTag]
-[AVMutableCompositionTrack setExtendedLanguageTag:]
-[AVMutableCompositionTrack preferredTransform]
-[AVMutableCompositionTrack setPreferredTransform:]
-[AVMutableCompositionTrack preferredVolume]
-[AVMutableCompositionTrack setPreferredVolume:]
-[AVMutableCompositionTrack alternateGroupID]
-[AVMutableCompositionTrack setAlternateGroupID:]
+[AVCompositionTrackSegment compositionTrackSegmentWithURL:trackID:sourceTimeRange:targetTimeRange:]
+[AVCompositionTrackSegment compositionTrackSegmentWithTimeRange:]
-[AVCompositionTrackSegment init]
-[AVCompositionTrackSegment initWithURL:trackID:sourceTimeRange:targetTimeRange:]
-[AVCompositionTrackSegment initWithTimeRange:]
-[AVCompositionTrackSegment dealloc]
-[AVCompositionTrackSegment finalize]
-[AVCompositionTrackSegment description]
-[AVCompositionTrackSegment isEmpty]
-[AVCompositionTrackSegment sourceURL]
-[AVCompositionTrackSegment sourceTrackID]
-[AVCompositionTrackSegment isEqual:]
-[AVCompositionTrackSegment hash]
-[AVAssetReader init]
-[AVAssetReader finalize]
-[AVAssetReader _tearDownFigAssetReader]
-[AVAssetReader description]
___23-[AVAssetReader status]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[AVAssetReader _errorForOSStatus:]
___50-[AVAssetReader _transitionToStatus:failureError:]_block_invoke
___copy_helper_block_99
___destroy_helper_block_100
-[AVAssetReader error]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___22-[AVAssetReader error]_block_invoke
___copy_helper_block_105
___destroy_helper_block_106
-[AVAssetReader canAddOutput:]
-[AVMovieTrack mediaDataStorage]
-[AVMovieTrack mediaPresentationTimeRange]
-[AVMovieTrack mediaDecodeTimeRange]
-[AVMovieTrack alternateGroupID]
-[AVMovieTrack description]
+[AVMutableMovieTrack trackWithTrackID:forMovie:]
-[AVMutableMovieTrack initWithTrackID:forMovie:]
-[AVMutableMovieTrack _createMutableMovieTrackInternal]
-[AVMutableMovieTrack statusOfValueForKey:error:]
-[AVMutableMovieTrack loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVMutableMovieTrack _figMutableMovie]
-[AVMutableMovieTrack trackID]
-[AVMutableMovieTrack languageCode]
-[AVMutableMovieTrack extendedLanguageTag]
-[AVMutableMovieTrack locale]
-[AVMutableMovieTrack naturalSize]
-[AVMutableMovieTrack dimensions]
-[AVMutableMovieTrack preferredTransform]
-[AVMutableMovieTrack layer]
-[AVMutableMovieTrack preferredVolume]
-[AVMutableMovieTrack cleanApertureDimensions]
-[AVMutableMovieTrack productionApertureDimensions]
-[AVMutableMovieTrack encodedPixelsDimensions]
-[AVMutableMovieTrack isEnabled]
-[AVMutableMovieTrack isModified]
-[AVMutableMovieTrack _sizeForProperty:]
-[AVMutableMovieTrack _setSize:forProperty:]
-[AVMutableMovieTrack _stringForProperty:]
-[AVMutableMovieTrack _setString:forProperty:]
-[AVMutableMovieTrack alternateGroupID]
-[AVMutableMovieTrack sampleReferenceBaseURL]
-[AVMutableMovieTrack setSampleReferenceBaseURL:]
-[AVMutableMovieTrack mediaDataStorage]
-[AVMutableMovieTrack setMediaDataStorage:]
-[AVMutableMovieTrack setLanguageCode:]
-[AVMutableMovieTrack setExtendedLanguageTag:]
-[AVMutableMovieTrack setNaturalSize:]
-[AVMutableMovieTrack setPreferredVolume:]
-[AVMutableMovieTrack setPreferredTransform:]
-[AVMutableMovieTrack setCleanApertureDimensions:]
-[AVMutableMovieTrack setProductionApertureDimensions:]
-[AVMutableMovieTrack setEncodedPixelsDimensions:]
-[AVMutableMovieTrack setLayer:]
-[AVMutableMovieTrack setAlternateGroupID:]
-[AVMutableMovieTrack setEnabled:]
-[AVMutableMovieTrack setModified:]
-[AVMutableMovieTrack description]
-[AVMutableMovieTrack(AVMutableMovieTrackMovieLevelEditing) insertTimeRange:ofTrack:atTime:copySampleData:error:]
-[AVMutableMovieTrack(AVMutableMovieTrackMovieLevelEditing) insertEmptyTimeRange:]
-[AVMutableMovieTrack(AVMutableMovieTrackMovieLevelEditing) removeTimeRange:]
-[AVMutableMovieTrack(AVMutableMovieTrackMovieLevelEditing) scaleTimeRange:toDuration:]
-[AVMutableMovieTrack(AVMutableMovieTrack_SampleLevelEditing) appendSampleBuffer:decodeTime:presentationTime:]
-[AVMutableMovieTrack(AVMutableMovieTrack_SampleLevelEditing) insertMediaTimeRange:intoTimeRange:]
-[AVMutableMovieTrack(AVMutableMovieTrack_SampleLevelEditingPrivate) appendMediaData:dataOffset:]
-[AVMutableMovieTrack(AVMutableMovieTrackMetadataEditing) availableMetadataFormats]
-[AVMutableMovieTrack(AVMutableMovieTrackMetadataEditing) metadataForFormat:]
-[AVMutableMovieTrack(AVMutableMovieTrackMetadataEditing) metadata]
-[AVMutableMovieTrack(AVMutableMovieTrackMetadataEditing) setMetadata:]
-[AVMutableMovieTrack(AVMutableMovieTrackTrackAssociations) addTrackAssociationToMovieTrack:type:]
-[AVMutableMovieTrack(AVMutableMovieTrackTrackAssociations) removeTrackAssociationToMovieTrack:type:]
_figAssetReaderDecodeError
_figAssetReaderFailed
-[AVAssetReaderOutput finalize]
-[AVAssetReaderOutput mediaType]
-[AVAssetReaderOutput alwaysCopiesSampleData]
-[AVAssetReaderOutput setAlwaysCopiesSampleData:]
-[AVAssetReaderOutput supportsRandomAccess]
-[AVAssetReaderOutput setSupportsRandomAccess:]
-[AVAssetReaderOutput _asset]
-[AVAssetReaderOutput _updateTimeRangesOnFigAssetReaderReturningError:]
___71-[AVAssetReaderOutput _updateTimeRangesOnFigAssetReaderReturningError:]_block_invoke
-[AVAssetReaderOutput _enableTrackExtractionReturningError:]
-[AVAssetReaderOutput currentTimeRanges]
-[AVAssetReaderOutput _errorForOSStatus:]
-[AVAssetReaderOutput resetForReadingTimeRanges:]
-[AVAssetReaderOutput markConfigurationAsFinal]
-[AVAssetReaderOutput _figAssetReaderDecodeError]
-[AVAssetReaderOutput _figAssetReaderFailed]
+[AVAssetReaderTrackOutput assetReaderTrackOutputWithTrack:outputSettings:]
-[AVAssetReaderTrackOutput init]
-[AVAssetReaderTrackOutput initWithTrack:outputSettings:]
-[AVAssetReaderTrackOutput dealloc]
-[AVAssetReaderTrackOutput finalize]
-[AVAssetReaderTrackOutput description]
-[AVAssetReaderTrackOutput track]
-[AVAssetReaderTrackOutput outputSettings]
-[AVAssetReaderTrackOutput audioTimePitchAlgorithm]
-[AVAssetReaderTrackOutput setAudioTimePitchAlgorithm:]
-[AVAssetReaderTrackOutput _attachToMetadataAdaptor:]
-[AVAssetReaderTrackOutput _isAttachedToMetadataAdaptor]
-[AVAssetReaderTrackOutput setAppliesPreferredTrackTransform:]
-[AVAssetReaderTrackOutput appliesPreferredTrackTransform]
-[AVAssetReaderTrackOutput mediaType]
-[AVAssetReaderTrackOutput copyNextSampleBuffer]
-[AVAssetReaderTrackOutput _copyNextSampleBufferForMetadataAdaptor]
-[AVAssetReaderTrackOutput _asset]
-[AVAssetReaderTrackOutput _trimsSampleDurations]
-[AVAssetReaderTrackOutput _figAssetReaderExtractionOptions]
-[AVAssetReaderTrackOutput _enableTrackExtractionReturningError:]
_AVAssetReaderGetFigAssetReaderAudioTimePitchAlgorithmForAudioTimePitchAlgorithm
-[AVAssetReaderAudioMixOutput init]
-[AVAssetReaderAudioMixOutput finalize]
-[AVAssetReaderAudioMixOutput description]
-[AVAssetReaderAudioMixOutput audioSettings]
-[AVAssetReaderAudioMixOutput _setAudioVolumeCurve:forTrack:]
-[AVAssetReaderAudioMixOutput _audioTimePitchAlgorithmForTrack:]
-[AVAssetReaderAudioMixOutput _setAudioTimePitchAlgorithm:forTrack:]
-[AVAssetReaderAudioMixOutput _audioTapProcessorForTrack:]
-[AVAssetReaderAudioMixOutput _setAudioTapProcessor:forTrack:]
-[AVAssetReaderAudioMixOutput audioMix]
-[AVAssetReaderAudioMixOutput setAudioMix:]
-[AVAssetReaderAudioMixOutput audioTimePitchAlgorithm]
-[AVAssetReaderAudioMixOutput setAudioTimePitchAlgorithm:]
-[AVAssetReaderAudioMixOutput mediaType]
-[AVAssetReaderVideoCompositionOutput init]
-[AVAssetReaderVideoCompositionOutput finalize]
-[AVAssetReaderVideoCompositionOutput alwaysCopiesSampleData]
-[AVAssetReaderVideoCompositionOutput description]
-[AVAssetReaderVideoCompositionOutput videoSettings]
-[AVAssetReaderVideoCompositionOutput _setVideoComposition:]
-[AVAssetReaderVideoCompositionOutput _setVideoComposition:customVideoCompositorSession:]
-[AVAssetReaderVideoCompositionOutput customVideoCompositor]
-[AVAssetReaderVideoCompositionOutput mediaType]
-[AVAssetReaderVideoCompositionOutput _errorForOSStatus:]
-[AVAssetReaderVideoCompositionOutput _prepareForReadingReturningError:]
+[AVAssetReaderSampleReferenceOutput assetReaderSampleReferenceOutputWithTrack:]
-[AVAssetReaderSampleReferenceOutput init]
-[AVAssetReaderSampleReferenceOutput initWithTrack:]
-[AVAssetReaderSampleReferenceOutput dealloc]
-[AVAssetReaderSampleReferenceOutput finalize]
-[AVAssetReaderSampleReferenceOutput description]
-[AVAssetReaderSampleReferenceOutput track]
-[AVAssetReaderSampleReferenceOutput mediaType]
-[AVAssetReaderSampleReferenceOutput _asset]
-[AVAssetReaderSampleReferenceOutput _trimsSampleDurations]
-[AVAssetReaderSampleReferenceOutput _enableTrackExtractionReturningError:]
-[AVAssetWriterConfigurationState dealloc]
-[AVAssetWriterConfigurationState URL]
-[AVAssetWriterConfigurationState setURL:]
-[AVAssetWriterConfigurationState mediaFileType]
-[AVAssetWriterConfigurationState setMediaFileType:]
-[AVAssetWriterConfigurationState movieFragmentInterval]
-[AVAssetWriterConfigurationState setMovieFragmentInterval:]
-[AVAssetWriterConfigurationState shouldOptimizeForNetworkUse]
-[AVAssetWriterConfigurationState setShouldOptimizeForNetworkUse:]
-[AVAssetWriterConfigurationState directoryForTemporaryFiles]
-[AVAssetWriterConfigurationState setDirectoryForTemporaryFiles:]
-[AVAssetWriterConfigurationState metadataItems]
-[AVAssetWriterConfigurationState setMetadataItems:]
-[AVAssetWriterConfigurationState movieTimeScale]
-[AVAssetWriterConfigurationState setMovieTimeScale:]
-[AVAssetWriterConfigurationState preferredTransform]
-[AVAssetWriterConfigurationState setPreferredTransform:]
-[AVAssetWriterConfigurationState preferredVolume]
-[AVAssetWriterConfigurationState setPreferredVolume:]
-[AVAssetWriterConfigurationState preferredRate]
-[AVAssetWriterConfigurationState setPreferredRate:]
-[AVAssetWriterConfigurationState inputs]
-[AVAssetWriterConfigurationState setInputs:]
-[AVAssetWriterConfigurationState inputGroups]
-[AVAssetWriterConfigurationState setInputGroups:]
+[AVAssetWriter initialize]
+[AVAssetWriter assetWriterWithURL:fileType:error:]
-[AVAssetWriter init]
-[AVAssetWriter initWithURL:fileType:error:]
-[AVAssetWriter dealloc]
-[AVAssetWriter finalize]
-[AVAssetWriter description]
-[AVAssetWriter _helper]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___24-[AVAssetWriter _helper]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVAssetWriter _setHelper:ifCurrentHelper:]
-[AVAssetWriter _setHelper:ifCurrentHelper:withBlock:]
___54-[AVAssetWriter _setHelper:ifCurrentHelper:withBlock:]_block_invoke
___copy_helper_block_149
___destroy_helper_block_150
-[AVAssetWriter outputURL]
-[AVAssetWriter outputFileType]
-[AVAssetWriter availableMediaTypes]
-[AVAssetWriter _supportsSampleReferencesReturningError:]
+[AVAssetWriter automaticallyNotifiesObserversForKey:]
+[AVAssetWriter keyPathsForValuesAffectingStatus]
-[AVAssetWriter status]
+[AVAssetWriter keyPathsForValuesAffectingError]
-[AVAssetWriter error]
-[AVAssetWriter movieFragmentInterval]
-[AVAssetWriter setMovieFragmentInterval:]
-[AVAssetWriter shouldOptimizeForNetworkUse]
-[AVAssetWriter setShouldOptimizeForNetworkUse:]
-[AVAssetWriter directoryForTemporaryFiles]
-[AVAssetWriter setDirectoryForTemporaryFiles:]
-[AVAssetWriter movieTimeScale]
-[AVAssetWriter setMovieTimeScale:]
-[AVAssetWriter preferredTransform]
-[AVAssetWriter setPreferredTransform:]
-[AVAssetWriter preferredVolume]
-[AVAssetWriter setPreferredVolume:]
-[AVAssetWriter preferredRate]
-[AVAssetWriter setPreferredRate:]
-[AVAssetWriter inputs]
-[AVAssetWriter inputGroups]
-[AVAssetWriter canApplyOutputSettings:forMediaType:]
-[AVAssetWriter canAddInput:]
-[AVAssetWriter addInput:]
-[AVAssetWriter canAddInputGroup:]
-[AVAssetWriter addInputGroup:]
-[AVAssetWriter metadata]
-[AVAssetWriter setMetadata:]
-[AVAssetWriter startWriting]
-[AVAssetWriter startSessionAtSourceTime:]
-[AVAssetWriter endSessionAtSourceTime:]
-[AVAssetWriter cancelWriting]
-[AVAssetWriter finishWriting]
-[AVAssetWriter finishWritingWithCompletionHandler:]
+[AVAssetWriter _errorForOSStatus:]
-[AVAssetWriter _transitionToFailedStatusWithError:]
-[AVAssetWriterUnknownHelper initWithConfigurationState:]
-[AVAssetWriterUnknownHelper initWithURL:fileType:]
-[AVAssetWriterUnknownHelper status]
-[AVAssetWriterUnknownHelper setMovieFragmentInterval:]
-[AVAssetWriterUnknownHelper setShouldOptimizeForNetworkUse:]
-[AVAssetWriterUnknownHelper setDirectoryForTemporaryFiles:]
-[AVAssetWriterUnknownHelper setMetadata:]
-[AVAssetWriterUnknownHelper setMovieTimeScale:]
-[AVAssetWriterUnknownHelper setPreferredTransform:]
-[AVAssetWriterUnknownHelper setPreferredVolume:]
-[AVAssetWriterUnknownHelper setPreferredRate:]
-[AVAssetWriterUnknownHelper _canAddInput:exceptionReason:]
-[AVAssetWriterUnknownHelper canAddInput:]
-[AVAssetWriterUnknownHelper addInput:]
-[AVAssetWriterUnknownHelper _canAddInputGroup:exceptionReason:]
-[AVAssetWriterUnknownHelper canAddInputGroup:]
-[AVAssetWriterUnknownHelper addInputGroup:]
-[AVAssetWriterUnknownHelper startWriting]
-[AVAssetWriterUnknownHelper cancelWriting]
-[AVAssetWriterFigAssetWriterNotificationHandler initWithFigAssetWriter:weakReferenceToDelegate:]
_AVAssetWriterFigAssetWriterHandleCompletedNotification
_AVAssetWriterFigAssetWriterHandleFailedNotification
-[AVAssetWriterFigAssetWriterNotificationHandler dealloc]
-[AVAssetWriterFigAssetWriterNotificationHandler finalize]
-[AVAssetWriterFigAssetWriterNotificationHandler _callDelegateIfNotCalledWithSuccess:error:]
-[AVAssetWriterFigAssetWriterNotificationHandler _teardownNotificationHandlers]
-[AVAssetWriterFigAssetWriterNotificationHandler _handleCompletedWritingNotification]
-[AVAssetWriterFigAssetWriterNotificationHandler _handleFailedNotificationWithError:]
-[AVAssetWriterFigAssetWriterNotificationHandler weakReferenceToDelegate]
-[AVAssetWriterFigAssetWriterNotificationHandler setWeakReferenceToDelegate:]
-[AVAssetWriterWritingHelper initWithConfigurationState:]
-[AVAssetWriterWritingHelper initWithConfigurationState:error:]
-[AVAssetWriterWritingHelper figTrackReferences]
-[AVAssetWriterWritingHelper dealloc]
-[AVAssetWriterWritingHelper finalize]
-[AVAssetWriterWritingHelper didReceiveFigAssetWriterNotificationWithSuccess:error:]
-[AVAssetWriterWritingHelper status]
-[AVAssetWriterWritingHelper startSessionAtSourceTime:]
-[AVAssetWriterWritingHelper endSessionAtSourceTime:]
-[AVAssetWriterWritingHelper _retainedFigAssetWriter]
___53-[AVAssetWriterWritingHelper _retainedFigAssetWriter]_block_invoke
___copy_helper_block_424
___destroy_helper_block_425
-[AVAssetWriterWritingHelper cancelWriting]
___43-[AVAssetWriterWritingHelper cancelWriting]_block_invoke
___copy_helper_block_429
___destroy_helper_block_430
-[AVAssetWriterWritingHelper finishWriting]
-[AVAssetWriterWritingHelper finishWritingWithCompletionHandler:]
-[AVAssetWriterFinishWritingHelper initWithConfigurationState:figAssetWriter:delegate:]
-[AVAssetWriterFinishWritingHelper dealloc]
-[AVAssetWriterFinishWritingHelper finalize]
-[AVAssetWriterFinishWritingHelper performFinishOperation]
-[AVAssetWriterFinishWritingHelper finishOperationCompletedSuccessfully:withError:]
-[AVAssetWriterFinishWritingHelper cancelWriting]
___49-[AVAssetWriterFinishWritingHelper cancelWriting]_block_invoke
___copy_helper_block_512
___destroy_helper_block_513
-[AVAssetWriterFinishWritingHelper status]
-[AVAssetWriterFinishWritingHelper _retainedFigAssetWriter]
___59-[AVAssetWriterFinishWritingHelper _retainedFigAssetWriter]_block_invoke
___copy_helper_block_518
___destroy_helper_block_519
-[AVAssetWriterDoNothingFinishWritingDelegate initWithHandler:]
-[AVAssetWriterDoNothingFinishWritingDelegate dealloc]
-[AVAssetWriterDoNothingFinishWritingDelegate finishWritingHelper:didInitiateFinishWritingForFigAssetWriter:]
-[AVAssetWriterDoNothingFinishWritingDelegate finishWritingHelperDidCancelFinishWriting:]
-[AVAssetWriterDoNothingFinishWritingDelegate finishWritingHelperDidFail:]
-[AVAssetWriterDoNothingFinishWritingDelegate _callHandlerIfNotCalled]
-[AVAssetWriterDoNothingFinishWritingDelegate shouldHelperPrepareInputs]
-[AVAssetWriterSynchronousMainThreadFinishWritingDelegate finishWritingHelper:didInitiateFinishWritingForFigAssetWriter:]
-[AVAssetWriterSynchronousMainThreadFinishWritingDelegate finishWritingHelperDidCancelFinishWriting:]
-[AVAssetWriterSynchronousMainThreadFinishWritingDelegate finishWritingHelperDidFail:]
-[AVAssetWriterSynchronousMainThreadFinishWritingDelegate shouldHelperPrepareInputs]
-[AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate init]
-[AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate dealloc]
-[AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate finalize]
-[AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate didReceiveFigAssetWriterNotificationWithSuccess:error:]
-[AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate finishWritingHelper:didInitiateFinishWritingForFigAssetWriter:]
-[AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate finishWritingHelperDidCancelFinishWriting:]
-[AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate finishWritingHelperDidFail:]
-[AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate shouldHelperPrepareInputs]
-[AVAssetWriterAsynchronousFinishWritingDelegate initWithHandler:]
-[AVAssetWriterAsynchronousFinishWritingDelegate dealloc]
-[AVAssetWriterAsynchronousFinishWritingDelegate didReceiveFigAssetWriterNotificationWithSuccess:error:]
-[AVAssetWriterAsynchronousFinishWritingDelegate finishWritingHelper:didInitiateFinishWritingForFigAssetWriter:]
-[AVAssetWriterAsynchronousFinishWritingDelegate finishWritingHelperDidCancelFinishWriting:]
-[AVAssetWriterAsynchronousFinishWritingDelegate finishWritingHelperDidFail:]
-[AVAssetWriterAsynchronousFinishWritingDelegate _callHandlerIfNotCalled]
-[AVAssetWriterAsynchronousFinishWritingDelegate shouldHelperPrepareInputs]
-[AVAssetWriterTerminalHelper initWithConfigurationState:]
-[AVAssetWriterTerminalHelper transitionToFailedStatusWithError:]
-[AVAssetWriterFailedTerminalHelper initWithConfigurationState:]
-[AVAssetWriterFailedTerminalHelper initWithConfigurationState:terminalError:]
-[AVAssetWriterFailedTerminalHelper dealloc]
-[AVAssetWriterFailedTerminalHelper status]
-[AVAssetWriterFailedTerminalHelper error]
-[AVAssetWriterFailedTerminalHelper startSessionAtSourceTime:]
-[AVAssetWriterFailedTerminalHelper endSessionAtSourceTime:]
-[AVAssetWriterFailedTerminalHelper finishWriting]
-[AVAssetWriterFailedTerminalHelper finishWritingWithCompletionHandler:]
-[AVAssetWriterClientInitiatedTerminalHelper initWithConfigurationState:]
-[AVAssetWriterClientInitiatedTerminalHelper initWithConfigurationState:terminalStatus:]
-[AVAssetWriterClientInitiatedTerminalHelper status]
-[AVAssetWriterHelper init]
-[AVAssetWriterHelper initWithConfigurationState:]
-[AVAssetWriterHelper dealloc]
-[AVAssetWriterHelper outputURL]
-[AVAssetWriterHelper mediaFileType]
-[AVAssetWriterHelper availableMediaTypes]
-[AVAssetWriterHelper status]
-[AVAssetWriterHelper error]
-[AVAssetWriterHelper movieFragmentInterval]
-[AVAssetWriterHelper setMovieFragmentInterval:]
-[AVAssetWriterHelper shouldOptimizeForNetworkUse]
-[AVAssetWriterHelper setShouldOptimizeForNetworkUse:]
-[AVAssetWriterHelper directoryForTemporaryFiles]
-[AVAssetWriterHelper setDirectoryForTemporaryFiles:]
-[AVAssetWriterHelper movieTimeScale]
-[AVAssetWriterHelper setMovieTimeScale:]
-[AVAssetWriterHelper metadata]
-[AVAssetWriterHelper setMetadata:]
-[AVAssetWriterHelper preferredTransform]
-[AVAssetWriterHelper setPreferredTransform:]
-[AVAssetWriterHelper preferredVolume]
-[AVAssetWriterHelper setPreferredVolume:]
-[AVAssetWriterHelper preferredRate]
-[AVAssetWriterHelper setPreferredRate:]
-[AVAssetWriterHelper inputs]
-[AVAssetWriterHelper inputGroups]
-[AVAssetWriterHelper _canApplyOutputSettings:forMediaType:sourceFormat:exceptionReason:]
_AVAssetWriterCanAddPassthroughInputWithMediaTypeToAssetWriterWithFileType
-[AVAssetWriterHelper canApplyOutputSettings:forMediaType:]
-[AVAssetWriterHelper _canApplyTrackReferences:exceptionReason:]
-[AVAssetWriterHelper canAddInput:]
-[AVAssetWriterHelper addInput:]
-[AVAssetWriterHelper canAddInputGroup:]
-[AVAssetWriterHelper addInputGroup:]
-[AVAssetWriterHelper startWriting]
-[AVAssetWriterHelper startSessionAtSourceTime:]
-[AVAssetWriterHelper endSessionAtSourceTime:]
-[AVAssetWriterHelper cancelWriting]
-[AVAssetWriterHelper finishWriting]
-[AVAssetWriterHelper finishWritingWithCompletionHandler:]
-[AVAssetWriterHelper _transitionToClientInitiatedTerminalStatus:]
___66-[AVAssetWriterHelper _transitionToClientInitiatedTerminalStatus:]_block_invoke
___copy_helper_block_622
___destroy_helper_block_623
-[AVAssetWriterHelper transitionToFailedStatusWithError:]
___57-[AVAssetWriterHelper transitionToFailedStatusWithError:]_block_invoke
___copy_helper_block_627
___destroy_helper_block_628
-[AVAssetWriterHelper configurationState]
-[AVAssetWriterHelper weakReferenceToAssetWriter]
-[AVAssetWriterHelper setWeakReferenceToAssetWriter:]
+[AVAssetWriterInputGroup assetWriterInputGroupWithInputs:defaultInput:]
-[AVAssetWriterInputGroup init]
-[AVAssetWriterInputGroup initWithInputs:defaultInput:]
-[AVAssetWriterInputGroup dealloc]
-[AVAssetWriterInputGroup finalize]
-[AVAssetWriterInputGroup copyWithZone:]
-[AVAssetWriterInputGroup inputs]
-[AVAssetWriterInputGroup defaultInput]
-[AVAssetWriterInputGroup _startObservingInputPropertiesThatMayChangeValueOfOptions]
-[AVAssetWriterInputGroup _stopObservingInputPropertiesThatMayChangeValueOfOptions]
-[AVAssetWriterInputGroup observeValueForKeyPath:ofObject:change:context:]
-[AVAssetWriterInputGroup options]
+[AVAssetWriterInputSelectionOption assetWriterInputSelectionOptionWithAssetWriterInput:]
+[AVAssetWriterInputSelectionOption assetWriterInputSelectionOptionWithAssetWriterInput:displaysNonForcedSubtitles:]
-[AVAssetWriterInputSelectionOption initWithAssetWriterInput:]
-[AVAssetWriterInputSelectionOption initWithAssetWriterInput:displaysNonForcedSubtitles:]
-[AVAssetWriterInputSelectionOption dealloc]
-[AVAssetWriterInputSelectionOption finalize]
-[AVAssetWriterInputSelectionOption _hasEqualValueForKey:asObject:]
-[AVAssetWriterInputSelectionOption isEqual:]
-[AVAssetWriterInputSelectionOption hash]
-[AVAssetWriterInputSelectionOption _ancillaryDescription]
-[AVAssetWriterInputSelectionOption mediaSubTypes]
-[AVAssetWriterInputSelectionOption _taggedCharacteristics]
-[AVAssetWriterInputSelectionOption _isAuxiliaryContent]
-[AVAssetWriterInputSelectionOption _isMainProgramContent]
-[AVAssetWriterInputSelectionOption hasMediaCharacteristic:]
-[AVAssetWriterInputSelectionOption isPlayable]
-[AVAssetWriterInputSelectionOption _isDesignatedDefault]
-[AVAssetWriterInputSelectionOption locale]
-[AVAssetWriterInputSelectionOption commonMetadata]
___51-[AVAssetWriterInputSelectionOption commonMetadata]_block_invoke
-[AVAssetWriterInputSelectionOption availableMetadataFormats]
-[AVAssetWriterInputSelectionOption metadataForFormat:]
___55-[AVAssetWriterInputSelectionOption metadataForFormat:]_block_invoke
___copy_helper_block_754
___destroy_helper_block_755
-[AVAssetWriterInputSelectionOption associatedMediaSelectionOptionInMediaSelectionGroup:]
-[AVAssetWriterInputSelectionOption propertyList]
-[AVAssetWriterInputSelectionOption input]
-[AVAssetWriterInputSelectionOption mediaType]
-[AVAssetWriterInputSelectionOption outputSettings]
-[AVAssetWriterInputSelectionOption sourceFormatHint]
-[AVAssetWriterInputSelectionOption languageCode]
-[AVAssetWriterInputSelectionOption extendedLanguageTag]
-[AVAssetWriterInputSelectionOption metadata]
-[AVAssetWriterInputSelectionOption trackReferences]
-[AVAssetWriterInputSelectionOption displaysNonForcedSubtitles]
-[AVAssetWriterInputConfigurationState dealloc]
-[AVAssetWriterInputConfigurationState mediaType]
-[AVAssetWriterInputConfigurationState setMediaType:]
-[AVAssetWriterInputConfigurationState outputSettings]
-[AVAssetWriterInputConfigurationState setOutputSettings:]
-[AVAssetWriterInputConfigurationState sourceFormatHint]
-[AVAssetWriterInputConfigurationState setSourceFormatHint:]
-[AVAssetWriterInputConfigurationState sourcePixelBufferAttributes]
-[AVAssetWriterInputConfigurationState setSourcePixelBufferAttributes:]
-[AVAssetWriterInputConfigurationState attachedToPixelBufferAdaptor]
-[AVAssetWriterInputConfigurationState setAttachedToPixelBufferAdaptor:]
-[AVAssetWriterInputConfigurationState metadataItems]
-[AVAssetWriterInputConfigurationState setMetadataItems:]
-[AVAssetWriterInputConfigurationState transform]
-[AVAssetWriterInputConfigurationState setTransform:]
-[AVAssetWriterInputConfigurationState mediaTimeScale]
-[AVAssetWriterInputConfigurationState setMediaTimeScale:]
-[AVAssetWriterInputConfigurationState expectsMediaDataInRealTime]
-[AVAssetWriterInputConfigurationState setExpectsMediaDataInRealTime:]
-[AVAssetWriterInputConfigurationState naturalSize]
-[AVAssetWriterInputConfigurationState setNaturalSize:]
-[AVAssetWriterInputConfigurationState languageCode]
-[AVAssetWriterInputConfigurationState setLanguageCode:]
-[AVAssetWriterInputConfigurationState extendedLanguageTag]
-[AVAssetWriterInputConfigurationState setExtendedLanguageTag:]
-[AVAssetWriterInputConfigurationState marksOutputTrackAsEnabled]
-[AVAssetWriterInputConfigurationState setMarksOutputTrackAsEnabled:]
-[AVAssetWriterInputConfigurationState preferredVolume]
-[AVAssetWriterInputConfigurationState setPreferredVolume:]
-[AVAssetWriterInputConfigurationState layer]
-[AVAssetWriterInputConfigurationState setLayer:]
-[AVAssetWriterInputConfigurationState alternateGroupID]
-[AVAssetWriterInputConfigurationState setAlternateGroupID:]
-[AVAssetWriterInputConfigurationState trackReferences]
-[AVAssetWriterInputConfigurationState setTrackReferences:]
-[AVAssetWriterInputConfigurationState performsMultiPassEncodingIfSupported]
-[AVAssetWriterInputConfigurationState setPerformsMultiPassEncodingIfSupported:]
-[AVAssetWriterInputConfigurationState preferredMediaChunkDuration]
-[AVAssetWriterInputConfigurationState setPreferredMediaChunkDuration:]
-[AVAssetWriterInputConfigurationState preferredMediaChunkAlignment]
-[AVAssetWriterInputConfigurationState setPreferredMediaChunkAlignment:]
-[AVAssetWriterInputConfigurationState preferredMediaChunkSize]
-[AVAssetWriterInputConfigurationState setPreferredMediaChunkSize:]
-[AVAssetWriterInputConfigurationState sampleReferenceBaseURL]
-[AVAssetWriterInputConfigurationState setSampleReferenceBaseURL:]
+[AVAssetWriterInput initialize]
+[AVAssetWriterInput assetWriterInputWithMediaType:outputSettings:]
+[AVAssetWriterInput assetWriterInputWithMediaType:outputSettings:sourceFormatHint:]
-[AVAssetWriterInput init]
-[AVAssetWriterInput initWithMediaType:outputSettings:]
-[AVAssetWriterInput initWithMediaType:outputSettings:sourceFormatHint:]
-[AVAssetWriterInput dealloc]
_AVAssetWriterInputInternalCollectUncollectables_invokedFromDeallocAndFinalize
-[AVAssetWriterInput finalize]
-[AVAssetWriterInput description]
-[AVAssetWriterInput _helper]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___29-[AVAssetWriterInput _helper]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVAssetWriterInput _weakReferenceToAssetWriter]
-[AVAssetWriterInput _setWeakReferenceToAssetWriter:]
-[AVAssetWriterInput _tellAssetWriterToTransitionToFailedStatusWithError:]
+[AVAssetWriterInput keyPathsForValuesAffectingStatus]
-[AVAssetWriterInput _status]
-[AVAssetWriterInput _setHelper:]
___33-[AVAssetWriterInput _setHelper:]_block_invoke
___copy_helper_block_248
___destroy_helper_block_249
-[AVAssetWriterInput _trackID]
-[AVAssetWriterInput mediaType]
-[AVAssetWriterInput _outputSettingsObject]
-[AVAssetWriterInput outputSettings]
-[AVAssetWriterInput sourceFormatHint]
-[AVAssetWriterInput metadata]
-[AVAssetWriterInput setMetadata:]
-[AVAssetWriterInput transform]
-[AVAssetWriterInput setTransform:]
-[AVAssetWriterInput mediaTimeScale]
-[AVAssetWriterInput setMediaTimeScale:]
-[AVAssetWriterInput naturalSize]
-[AVAssetWriterInput setNaturalSize:]
-[AVAssetWriterInput languageCode]
-[AVAssetWriterInput setLanguageCode:]
-[AVAssetWriterInput extendedLanguageTag]
-[AVAssetWriterInput setExtendedLanguageTag:]
-[AVAssetWriterInput marksOutputTrackAsEnabled]
-[AVAssetWriterInput setMarksOutputTrackAsEnabled:]
-[AVAssetWriterInput preferredVolume]
-[AVAssetWriterInput setPreferredVolume:]
-[AVAssetWriterInput layer]
-[AVAssetWriterInput setLayer:]
-[AVAssetWriterInput _alternateGroupID]
-[AVAssetWriterInput _setAlternateGroupID:]
-[AVAssetWriterInput _trackReferences]
-[AVAssetWriterInput preferredMediaChunkDuration]
-[AVAssetWriterInput setPreferredMediaChunkDuration:]
-[AVAssetWriterInput preferredMediaChunkAlignment]
-[AVAssetWriterInput setPreferredMediaChunkAlignment:]
-[AVAssetWriterInput preferredMediaChunkSize]
-[AVAssetWriterInput setPreferredMediaChunkSize:]
-[AVAssetWriterInput sampleReferenceBaseURL]
-[AVAssetWriterInput setSampleReferenceBaseURL:]
-[AVAssetWriterInput _pixelBufferPool]
-[AVAssetWriterInput _sourcePixelBufferAttributes]
-[AVAssetWriterInput _setSourcePixelBufferAttributes:]
-[AVAssetWriterInput _isAttachedToPixelBufferAdaptor]
-[AVAssetWriterInput _setAttachedToPixelBufferAdaptor:]
-[AVAssetWriterInput _attachToMetadataAdaptor:]
-[AVAssetWriterInput _isAttachedToMetadataAdaptor]
-[AVAssetWriterInput _prepareForWritingWithFigAssetWriter:mediaFileType:error:]
-[AVAssetWriterInput _didStartInitialSession]
-[AVAssetWriterInput _prepareToEndSession]
-[AVAssetWriterInput _prepareToFinishWritingReturningError:]
-[AVAssetWriterInput _transitionToTerminalStatus:]
+[AVAssetWriterInput keyPathsForValuesAffectingReadyForMoreMediaData]
-[AVAssetWriterInput isReadyForMoreMediaData]
-[AVAssetWriterInput expectsMediaDataInRealTime]
-[AVAssetWriterInput setExpectsMediaDataInRealTime:]
-[AVAssetWriterInput performsMultiPassEncodingIfSupported]
-[AVAssetWriterInput setPerformsMultiPassEncodingIfSupported:]
+[AVAssetWriterInput keyPathsForValuesAffectingCanPerformMultiplePasses]
-[AVAssetWriterInput canPerformMultiplePasses]
+[AVAssetWriterInput keyPathsForValuesAffectingCurrentPassDescription]
-[AVAssetWriterInput currentPassDescription]
-[AVAssetWriterInput respondToEachPassDescriptionOnQueue:usingBlock:]
-[AVAssetWriterInput observeValueForKeyPath:ofObject:change:context:]
-[AVAssetWriterInput requestMediaDataWhenReadyOnQueue:usingBlock:]
-[AVAssetWriterInput appendSampleBuffer:]
___41-[AVAssetWriterInput appendSampleBuffer:]_block_invoke
___copy_helper_block_378
___destroy_helper_block_379
-[AVAssetWriterInput _appendPixelBuffer:withPresentationTime:]
___62-[AVAssetWriterInput _appendPixelBuffer:withPresentationTime:]_block_invoke
___copy_helper_block_384
___destroy_helper_block_385
-[AVAssetWriterInput numberOfAppendFailures]
___44-[AVAssetWriterInput numberOfAppendFailures]_block_invoke
___copy_helper_block_388
___destroy_helper_block_389
-[AVAssetWriterInput markAsFinished]
-[AVAssetWriterInput markCurrentPassAsFinished]
-[AVAssetWriterInput canAddTrackAssociationWithTrackOfInput:type:]
-[AVAssetWriterInput addTrackAssociationWithTrackOfInput:type:]
-[AVAssetWriterInput availableTrackAssociationTypes]
-[AVAssetWriterInput associatedInputsWithTrackAssociationType:]
-[AVAssetWriterInputUnknownHelper initWithConfigurationState:]
-[AVAssetWriterInputUnknownHelper initWithMediaType:outputSettings:sourceFormatHint:]
-[AVAssetWriterInputUnknownHelper status]
-[AVAssetWriterInputUnknownHelper setTransform:]
-[AVAssetWriterInputUnknownHelper setMetadata:]
-[AVAssetWriterInputUnknownHelper setMediaTimeScale:]
-[AVAssetWriterInputUnknownHelper setExpectsMediaDataInRealTime:]
-[AVAssetWriterInputUnknownHelper setNaturalSize:]
-[AVAssetWriterInputUnknownHelper _validateLanguageCode:]
-[AVAssetWriterInputUnknownHelper setLanguageCode:]
-[AVAssetWriterInputUnknownHelper setExtendedLanguageTag:]
-[AVAssetWriterInputUnknownHelper setMarksOutputTrackAsEnabled:]
-[AVAssetWriterInputUnknownHelper setPreferredVolume:]
-[AVAssetWriterInputUnknownHelper setLayer:]
-[AVAssetWriterInputUnknownHelper setAlternateGroupID:]
-[AVAssetWriterInputUnknownHelper setPerformsMultiPassEncodingIfSupported:]
+[AVAssetWriterInputUnknownHelper keyPathsForValuesAffectingCanPerformMultiplePasses]
-[AVAssetWriterInputUnknownHelper canPerformMultiplePasses]
-[AVAssetWriterInputUnknownHelper setSourcePixelBufferAttributes:]
-[AVAssetWriterInputUnknownHelper setPreferredMediaChunkDuration:]
-[AVAssetWriterInputUnknownHelper setPreferredMediaChunkAlignment:]
-[AVAssetWriterInputUnknownHelper setPreferredMediaChunkSize:]
-[AVAssetWriterInputUnknownHelper setSampleReferenceBaseURL:]
-[AVAssetWriterInputUnknownHelper _canAddTrackAssociationWithTrackOfInput:type:exceptionReason:]
-[AVAssetWriterInputUnknownHelper canAddTrackAssociationWithTrackOfInput:type:]
-[AVAssetWriterInputUnknownHelper addTrackAssociationWithTrackOfInput:type:]
-[AVAssetWriterInputUnknownHelper canStartRespondingToEachPassDescriptionReturningReason:]
-[AVAssetWriterInputWritingHelper initWithConfigurationState:]
-[AVAssetWriterInputWritingHelper initWithConfigurationState:assetWriterTrack:error:]
-[AVAssetWriterInputWritingHelper dealloc]
-[AVAssetWriterInputWritingHelper finalize]
-[AVAssetWriterInputWritingHelper status]
-[AVAssetWriterInputWritingHelper canPerformMultiplePasses]
+[AVAssetWriterInputWritingHelper keyPathsForValuesAffectingReadyForMoreMediaData]
-[AVAssetWriterInputWritingHelper isReadyForMoreMediaData]
-[AVAssetWriterInputWritingHelper requestMediaDataWhenReadyOnQueue:usingBlock:]
-[AVAssetWriterInputWritingHelper _nudgeMediaDataRequesterIfAppropriate]
___72-[AVAssetWriterInputWritingHelper _nudgeMediaDataRequesterIfAppropriate]_block_invoke
___copy_helper_block_605
___destroy_helper_block_606
-[AVAssetWriterInputWritingHelper mediaDataRequesterShouldRequestMediaData:]
-[AVAssetWriterInputWritingHelper _attachToMediaDataRequester:]
-[AVAssetWriterInputWritingHelper _detachFromMediaDataRequester:]
-[AVAssetWriterInputWritingHelper observeValueForKeyPath:ofObject:change:context:]
-[AVAssetWriterInputWritingHelper didStartInitialSession]
-[AVAssetWriterInputWritingHelper beginPassIfAppropriate]
-[AVAssetWriterInputWritingHelper appendSampleBuffer:]
-[AVAssetWriterInputWritingHelper appendPixelBuffer:withPresentationTime:]
-[AVAssetWriterInputWritingHelper prepareToEndSession]
-[AVAssetWriterInputWritingHelper prepareToFinishWritingReturningError:]
-[AVAssetWriterInputWritingHelper markCurrentPassAsFinished]
___60-[AVAssetWriterInputWritingHelper markCurrentPassAsFinished]_block_invoke
___copy_helper_block_637
___destroy_helper_block_638
-[AVAssetWriterInputWritingHelper markAsFinished]
-[AVAssetWriterInputWritingHelper markAsFinishedAndTransitionCurrentHelper:]
-[AVAssetWriterInputWritingHelper trackID]
-[AVAssetWriterInputWritingHelper transitionToAndReturnTerminalHelperWithTerminalStatus:]
-[AVAssetWriterInputWritingHelper pixelBufferPool]
-[AVAssetWriterInputWritingHelper _assetWriterTrack]
-[AVAssetWriterInputWritingHelper currentPassDescription]
-[AVAssetWriterInputWritingHelper setCurrentPassDescription:]
-[AVAssetWriterInputInterPassAnalysisHelper initWithConfigurationState:]
-[AVAssetWriterInputInterPassAnalysisHelper initWithWritingHelper:]
-[AVAssetWriterInputInterPassAnalysisHelper dealloc]
-[AVAssetWriterInputInterPassAnalysisHelper startPassAnalysis]
___62-[AVAssetWriterInputInterPassAnalysisHelper startPassAnalysis]_block_invoke
___copy_helper_block_708
___destroy_helper_block_709
-[AVAssetWriterInputInterPassAnalysisHelper status]
-[AVAssetWriterInputInterPassAnalysisHelper canPerformMultiplePasses]
-[AVAssetWriterInputInterPassAnalysisHelper currentPassDescription]
-[AVAssetWriterInputInterPassAnalysisHelper isReadyForMoreMediaData]
-[AVAssetWriterInputInterPassAnalysisHelper shouldRespondToInitialPassDescription]
-[AVAssetWriterInputInterPassAnalysisHelper requestMediaDataWhenReadyOnQueue:usingBlock:]
-[AVAssetWriterInputInterPassAnalysisHelper appendSampleBuffer:]
-[AVAssetWriterInputInterPassAnalysisHelper appendPixelBuffer:withPresentationTime:]
-[AVAssetWriterInputInterPassAnalysisHelper pixelBufferPool]
-[AVAssetWriterInputInterPassAnalysisHelper markAsFinished]
-[AVAssetWriterInputInterPassAnalysisHelper markCurrentPassAsFinished]
-[AVAssetWriterInputNoMorePassesHelper initWithConfigurationState:]
-[AVAssetWriterInputNoMorePassesHelper initWithWritingHelper:]
-[AVAssetWriterInputNoMorePassesHelper dealloc]
-[AVAssetWriterInputNoMorePassesHelper status]
-[AVAssetWriterInputNoMorePassesHelper canPerformMultiplePasses]
-[AVAssetWriterInputNoMorePassesHelper currentPassDescription]
-[AVAssetWriterInputNoMorePassesHelper isReadyForMoreMediaData]
-[AVAssetWriterInputNoMorePassesHelper requestMediaDataWhenReadyOnQueue:usingBlock:]
-[AVAssetWriterInputNoMorePassesHelper appendSampleBuffer:]
-[AVAssetWriterInputNoMorePassesHelper appendPixelBuffer:withPresentationTime:]
-[AVAssetWriterInputNoMorePassesHelper pixelBufferPool]
-[AVAssetWriterInputNoMorePassesHelper markAsFinished]
-[AVAssetWriterInputNoMorePassesHelper markCurrentPassAsFinished]
-[AVAssetWriterInputTerminalHelper initWithConfigurationState:]
-[AVAssetWriterInputTerminalHelper initWithConfigurationState:terminalStatus:]
-[AVAssetWriterInputTerminalHelper status]
-[AVAssetWriterInputTerminalHelper transitionToAndReturnTerminalHelperWithTerminalStatus:]
-[AVAssetWriterInputTerminalHelper isReadyForMoreMediaData]
-[AVAssetWriterInputTerminalHelper requestMediaDataWhenReadyOnQueue:usingBlock:]
-[AVAssetWriterInputTerminalHelper mediaDataRequesterShouldRequestMediaData:]
-[AVAssetWriterInputTerminalHelper requestMediaDataOnceIfNecessaryWithMediaDataRequester:]
___90-[AVAssetWriterInputTerminalHelper requestMediaDataOnceIfNecessaryWithMediaDataRequester:]_block_invoke
___copy_helper_block_735
___destroy_helper_block_736
-[AVAssetWriterInputTerminalHelper canStartRespondingToEachPassDescriptionReturningReason:]
-[AVAssetWriterInputTerminalHelper appendSampleBuffer:]
-[AVAssetWriterInputTerminalHelper appendPixelBuffer:withPresentationTime:]
-[AVAssetWriterInputTerminalHelper markAsFinished]
-[AVAssetWriterInputTerminalHelper markCurrentPassAsFinished]
-[AVAssetWriterInputHelper initWithConfigurationState:]
-[AVAssetWriterInputHelper dealloc]
-[AVAssetWriterInputHelper description]
-[AVAssetWriterInputHelper status]
-[AVAssetWriterInputHelper transitionToAndReturnTerminalHelperWithTerminalStatus:]
-[AVAssetWriterInputHelper transitionAssetWriterAndAllInputsToFailedStatusWithError:]
-[AVAssetWriterInputHelper trackID]
-[AVAssetWriterInputHelper mediaType]
-[AVAssetWriterInputHelper outputSettings]
-[AVAssetWriterInputHelper sourceFormatHint]
-[AVAssetWriterInputHelper transform]
-[AVAssetWriterInputHelper setTransform:]
-[AVAssetWriterInputHelper metadata]
-[AVAssetWriterInputHelper setMetadata:]
-[AVAssetWriterInputHelper mediaTimeScale]
-[AVAssetWriterInputHelper setMediaTimeScale:]
-[AVAssetWriterInputHelper isReadyForMoreMediaData]
-[AVAssetWriterInputHelper expectsMediaDataInRealTime]
-[AVAssetWriterInputHelper setExpectsMediaDataInRealTime:]
-[AVAssetWriterInputHelper naturalSize]
-[AVAssetWriterInputHelper setNaturalSize:]
-[AVAssetWriterInputHelper languageCode]
-[AVAssetWriterInputHelper setLanguageCode:]
-[AVAssetWriterInputHelper extendedLanguageTag]
-[AVAssetWriterInputHelper setExtendedLanguageTag:]
-[AVAssetWriterInputHelper marksOutputTrackAsEnabled]
-[AVAssetWriterInputHelper setMarksOutputTrackAsEnabled:]
-[AVAssetWriterInputHelper preferredVolume]
-[AVAssetWriterInputHelper setPreferredVolume:]
-[AVAssetWriterInputHelper layer]
-[AVAssetWriterInputHelper setLayer:]
-[AVAssetWriterInputHelper alternateGroupID]
-[AVAssetWriterInputHelper setAlternateGroupID:]
-[AVAssetWriterInputHelper trackReferences]
-[AVAssetWriterInputHelper performsMultiPassEncodingIfSupported]
-[AVAssetWriterInputHelper setPerformsMultiPassEncodingIfSupported:]
-[AVAssetWriterInputHelper canPerformMultiplePasses]
-[AVAssetWriterInputHelper currentPassDescription]
-[AVAssetWriterInputHelper canStartRespondingToEachPassDescriptionReturningReason:]
-[AVAssetWriterInputHelper shouldRespondToInitialPassDescription]
-[AVAssetWriterInputHelper preferredMediaChunkDuration]
-[AVAssetWriterInputHelper setPreferredMediaChunkDuration:]
-[AVAssetWriterInputHelper preferredMediaChunkAlignment]
-[AVAssetWriterInputHelper setPreferredMediaChunkAlignment:]
-[AVAssetWriterInputHelper preferredMediaChunkSize]
-[AVAssetWriterInputHelper setPreferredMediaChunkSize:]
-[AVAssetWriterInputHelper sampleReferenceBaseURL]
-[AVAssetWriterInputHelper setSampleReferenceBaseURL:]
-[AVAssetWriterInputHelper requestMediaDataWhenReadyOnQueue:usingBlock:]
-[AVAssetWriterInputHelper appendSampleBuffer:]
-[AVAssetWriterInputHelper appendPixelBuffer:withPresentationTime:]
-[AVAssetWriterInputHelper didStartInitialSession]
-[AVAssetWriterInputHelper prepareToEndSession]
-[AVAssetWriterInputHelper prepareToFinishWritingReturningError:]
-[AVAssetWriterInputHelper markAsFinished]
-[AVAssetWriterInputHelper markCurrentPassAsFinished]
-[AVAssetWriterInputHelper sourcePixelBufferAttributes]
-[AVAssetWriterInputHelper setSourcePixelBufferAttributes:]
-[AVAssetWriterInputHelper pixelBufferPool]
-[AVAssetWriterInputHelper canAddTrackAssociationWithTrackOfInput:type:]
-[AVAssetWriterInputHelper addTrackAssociationWithTrackOfInput:type:]
-[AVAssetWriterInputHelper availableTrackAssociationTypes]
-[AVAssetWriterInputHelper associatedInputsWithTrackAssociationType:]
-[AVAssetWriterInputHelper configurationState]
-[AVAssetWriterInputHelper weakReferenceToAssetWriterInput]
-[AVAssetWriterInputHelper setWeakReferenceToAssetWriterInput:]
+[AVAssetWriterInputPixelBufferAdaptor assetWriterInputPixelBufferAdaptorWithAssetWriterInput:sourcePixelBufferAttributes:]
-[AVAssetWriterInputPixelBufferAdaptor init]
-[AVAssetWriterInputPixelBufferAdaptor initWithAssetWriterInput:sourcePixelBufferAttributes:]
-[AVAssetWriterInputPixelBufferAdaptor dealloc]
-[AVAssetWriterInputPixelBufferAdaptor finalize]
-[AVAssetWriterInputPixelBufferAdaptor description]
-[AVAssetWriterInputPixelBufferAdaptor assetWriterInput]
-[AVAssetWriterInputPixelBufferAdaptor sourcePixelBufferAttributes]
+[AVAssetWriterInputPixelBufferAdaptor keyPathsForValuesAffectingPixelBufferPool]
-[AVAssetWriterInputPixelBufferAdaptor pixelBufferPool]
-[AVAssetWriterInputPixelBufferAdaptor appendPixelBuffer:withPresentationTime:]
+[AVFigAssetWriterTrack assetWriterTrackWithFigAssetWriter:mediaType:mediaFileType:formatSpecification:sourcePixelBufferAttributes:multiPass:error:]
-[AVFigAssetWriterTrack init]
-[AVFigAssetWriterTrack initWithFigAssetWriter:mediaType:mediaFileType:formatSpecification:sourcePixelBufferAttributes:multiPass:error:]
_figAssetWriterTrackDidDropBelowLowWaterLevel
-[AVFigAssetWriterTrack dealloc]
-[AVFigAssetWriterTrack finalize]
-[AVFigAssetWriterTrack pixelBufferPool]
-[AVFigAssetWriterTrack _figAssetWriterDidDropBelowLowWaterLevelForTrackID:]
-[AVFigAssetWriterTrack _refreshAboveHighWaterLevel]
___52-[AVFigAssetWriterTrack _refreshAboveHighWaterLevel]_block_invoke
___copy_helper_block_847
___destroy_helper_block_848
-[AVFigAssetWriterTrack encoderSupportsMultiPass]
-[AVFigAssetWriterTrack isAboveHighWaterLevel]
___46-[AVFigAssetWriterTrack isAboveHighWaterLevel]_block_invoke
___copy_helper_block_851
___destroy_helper_block_852
-[AVFigAssetWriterTrack beginPassReturningError:]
-[AVFigAssetWriterTrack addSampleBuffer:error:]
-[AVFigAssetWriterTrack addPixelBuffer:atPresentationTime:error:]
-[AVFigAssetWriterTrack endPassWithCompletionHandler:]
___54-[AVFigAssetWriterTrack endPassWithCompletionHandler:]_block_invoke
___copy_helper_block_876
___destroy_helper_block_877
-[AVFigAssetWriterTrack prepareToEndSession]
-[AVFigAssetWriterTrack markEndOfDataReturningError:]
-[AVFigAssetWriterTrack setFigMetadata:]
-[AVFigAssetWriterTrack setFigTrackMatrix:]
-[AVFigAssetWriterTrack setMediaTimeScale:]
-[AVFigAssetWriterTrack setFigDimensions:]
-[AVFigAssetWriterTrack setLanguageCode:]
-[AVFigAssetWriterTrack setExtendedLanguageTag:]
-[AVFigAssetWriterTrack setMarksOutputTrackAsEnabled:]
-[AVFigAssetWriterTrack setTrackVolume:]
-[AVFigAssetWriterTrack setLayer:]
-[AVFigAssetWriterTrack setAlternateGroupID:]
-[AVFigAssetWriterTrack setExcludeFromAutoSelection:]
-[AVFigAssetWriterTrack setPreferredChunkDuration:]
-[AVFigAssetWriterTrack setPreferredChunkAlignment:]
-[AVFigAssetWriterTrack setPreferredChunkSize:]
-[AVFigAssetWriterTrack setSampleReferenceBaseURL:]
-[AVFigAssetWriterTrack _attachToFigAssetWriterUsingFormatSpecification:sourcePixelBufferAttributes:multiPass:error:]
-[AVFigAssetWriterTrack sampleBufferCoalescingInterval]
-[AVFigAssetWriterTrack setSampleBufferCoalescingInterval:]
-[AVFigAssetWriterTrack figAssetWriter]
-[AVFigAssetWriterTrack trackID]
-[AVFigAssetWriterTrack mediaType]
-[AVFigAssetWriterTrack mediaFileType]
-[AVFigAssetWriterAudioTrack initWithFigAssetWriter:mediaType:mediaFileType:formatSpecification:sourcePixelBufferAttributes:multiPass:error:]
-[AVFigAssetWriterAudioTrack dealloc]
-[AVFigAssetWriterAudioTrack _attachToFigAssetWriterUsingFormatSpecification:sourcePixelBufferAttributes:multiPass:error:]
-[AVFigAssetWriterAudioTrack _flushPendingSampleBuffersReturningError:]
-[AVFigAssetWriterAudioTrack addSampleBuffer:error:]
-[AVFigAssetWriterAudioTrack prepareToEndSession]
-[AVFigAssetWriterAudioTrack markEndOfDataReturningError:]
-[AVFigAssetWriterVideoTrack _attachToFigAssetWriterUsingFormatSpecification:sourcePixelBufferAttributes:multiPass:error:]
-[AVAssetWriterInputMediaDataRequester initWithRequestQueue:requestBlock:]
-[AVAssetWriterInputMediaDataRequester init]
-[AVAssetWriterInputMediaDataRequester _collectUncollectables_invokedFromDeallocAndFinalize]
-[AVAssetWriterInputMediaDataRequester dealloc]
-[AVAssetWriterInputMediaDataRequester finalize]
-[AVAssetWriterInputMediaDataRequester requestMediaDataIfNecessary]
___67-[AVAssetWriterInputMediaDataRequester requestMediaDataIfNecessary]_block_invoke
___copy_helper_block_971
___destroy_helper_block_972
-[AVAssetWriterInputMediaDataRequester delegate]
-[AVAssetWriterInputMediaDataRequester setDelegate:]
-[AVAssetWriterInputMediaDataRequester requestQueue]
-[AVAssetWriterInputPassDescriptionResponder init]
-[AVAssetWriterInputPassDescriptionResponder initWithCallbackQueue:block:]
-[AVAssetWriterInputPassDescriptionResponder dealloc]
_AVAssetWriterInputPassDescriptionResponderCollectUncollectables
-[AVAssetWriterInputPassDescriptionResponder finalize]
-[AVAssetWriterInputPassDescriptionResponder respondToNewPassDescription:]
___74-[AVAssetWriterInputPassDescriptionResponder respondToNewPassDescription:]_block_invoke
___74-[AVAssetWriterInputPassDescriptionResponder respondToNewPassDescription:]_block_invoke_2
___copy_helper_block_994
___destroy_helper_block_995
___copy_helper_block_1000
___destroy_helper_block_1001
-[AVAssetWriterInputPassDescriptionResponder _releaseAndClearCallbackBlock_invokeOnSerializationQueue]
-[AVAssetWriterInputPassDescriptionResponder stopRespondingToPassDescriptions]
___78-[AVAssetWriterInputPassDescriptionResponder stopRespondingToPassDescriptions]_block_invoke
___copy_helper_block_1004
___destroy_helper_block_1005
-[AVAssetWriterInputPassDescriptionResponder _hasStoppedResponding]
-[AVAssetWriterInputFigAssetWriterEndPassOperation init]
-[AVAssetWriterInputFigAssetWriterEndPassOperation initWithFigAssetWriter:trackID:]
-[AVAssetWriterInputFigAssetWriterEndPassOperation dealloc]
-[AVAssetWriterInputFigAssetWriterEndPassOperation finalize]
-[AVAssetWriterInputFigAssetWriterEndPassOperation start]
_AVAssetWriterInputFigAssetWriterEndPassOperationPassFinished
-[AVAssetWriterInputFigAssetWriterEndPassOperation _notifyWhetherMorePassesAreNeeded:timeRanges:forTrackWithID:]
-[AVAssetWriterInputFigAssetWriterEndPassOperation _markOperationAsCompletedWithSuccess:error:]
-[AVAssetWriterInputFigAssetWriterEndPassOperation completionBlock]
-[AVAssetWriterInputFigAssetWriterEndPassOperation setCompletionBlock:]
-[AVAssetWriterInputFigAssetWriterEndPassOperation succeeded]
-[AVAssetWriterInputFigAssetWriterEndPassOperation error]
-[AVAssetWriterInputFigAssetWriterEndPassOperation descriptionForNextPass]
-[AVAssetWriterInputPassDescription init]
-[AVAssetWriterInputPassDescription initWithTimeRanges:]
-[AVAssetWriterInputPassDescription dealloc]
-[AVAssetWriterInputPassDescription finalize]
-[AVAssetWriterInputPassDescription description]
-[AVAssetWriterInputPassDescription sourceTimeRanges]
-[AVVideoCompositionInstruction initWithCoder:]
+[AVVideoCompositionInstruction supportsSecureCoding]
-[AVVideoCompositionInstruction encodeWithCoder:]
-[AVVideoCompositionInstruction isEqual:]
-[AVVideoCompositionInstruction copyWithZone:]
-[AVVideoCompositionInstruction mutableCopyWithZone:]
-[AVVideoCompositionInstruction finalize]
-[AVVideoCompositionInstruction passthroughTrackID]
-[AVVideoCompositionInstruction requiredSourceTrackIDs]
-[AVVideoCompositionInstruction containsTweening]
-[AVVideoCompositionInstruction backgroundColor]
-[AVVideoCompositionInstruction setBackgroundColor:]
-[AVVideoCompositionInstruction layerInstructions]
-[AVVideoCompositionInstruction _setValuesFromDictionary:]
-[AVVideoCompositionInstruction description]
-[AVMutableVideoCompositionInstruction backgroundColor]
-[AVMutableVideoCompositionInstruction setBackgroundColor:]
-[AVMutableVideoCompositionInstruction layerInstructions]
-[AVVideoCompositionLayerInstruction initWithCoder:]
__rampArrayWithTimeRangesAsValues
+[AVVideoCompositionLayerInstruction supportsSecureCoding]
-[AVVideoCompositionLayerInstruction encodeWithCoder:]
__rampArrayWithTimeRangesAsDictionaries
-[AVVideoCompositionLayerInstruction isEqual:]
-[AVVideoCompositionLayerInstruction copyWithZone:]
-[AVVideoCompositionLayerInstruction mutableCopyWithZone:]
-[AVVideoCompositionLayerInstruction finalize]
-[AVVideoCompositionLayerInstruction trackID]
-[AVVideoCompositionLayerInstruction _setTransformRamps:]
-[AVVideoCompositionLayerInstruction _setOpacityRamps:]
-[AVVideoCompositionLayerInstruction _setCropRectangleRamps:]
-[AVVideoCompositionLayerInstruction _setTransformRampFromStartTransform:toEndTransform:timeRange:selector:]
___108-[AVVideoCompositionLayerInstruction _setTransformRampFromStartTransform:toEndTransform:timeRange:selector:]_block_invoke
-[AVVideoCompositionLayerInstruction setTransformRampFromStartTransform:toEndTransform:timeRange:]
-[AVVideoCompositionLayerInstruction getTransformRampForTime:startTransform:endTransform:timeRange:]
___100-[AVVideoCompositionLayerInstruction getTransformRampForTime:startTransform:endTransform:timeRange:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVVideoCompositionLayerInstruction _setOpacityRampFromStartOpacity:toEndOpacity:timeRange:selector:]
___102-[AVVideoCompositionLayerInstruction _setOpacityRampFromStartOpacity:toEndOpacity:timeRange:selector:]_block_invoke
-[AVVideoCompositionLayerInstruction setOpacity:atTime:]
-[AVVideoCompositionLayerInstruction setOpacityRampFromStartOpacity:toEndOpacity:timeRange:]
-[AVVideoCompositionLayerInstruction getOpacityRampForTime:startOpacity:endOpacity:timeRange:]
___94-[AVVideoCompositionLayerInstruction getOpacityRampForTime:startOpacity:endOpacity:timeRange:]_block_invoke
___copy_helper_block_310
___destroy_helper_block_311
-[AVVideoCompositionLayerInstruction _setCropRectangleRampFromStartCropRectangle:toEndCropRectangle:timeRange:selector:]
___120-[AVVideoCompositionLayerInstruction _setCropRectangleRampFromStartCropRectangle:toEndCropRectangle:timeRange:selector:]_block_invoke
-[AVVideoCompositionLayerInstruction setCropRectangle:atTime:]
-[AVVideoCompositionLayerInstruction setCropRectangleRampFromStartCropRectangle:toEndCropRectangle:timeRange:]
-[AVVideoCompositionLayerInstruction getCropRectangleRampForTime:startCropRectangle:endCropRectangle:timeRange:]
___112-[AVVideoCompositionLayerInstruction getCropRectangleRampForTime:startCropRectangle:endCropRectangle:timeRange:]_block_invoke
___copy_helper_block_326
___destroy_helper_block_327
-[AVVideoCompositionLayerInstruction _setValuesFromDictionary:timeRange:]
+[AVMutableVideoCompositionLayerInstruction videoCompositionLayerInstruction]
-[AVMutableVideoCompositionLayerInstruction trackID]
-[AVMutableVideoCompositionLayerInstruction setTransformRampFromStartTransform:toEndTransform:timeRange:]
-[AVMutableVideoCompositionLayerInstruction setOpacity:atTime:]
-[AVMutableVideoCompositionLayerInstruction setOpacityRampFromStartOpacity:toEndOpacity:timeRange:]
-[AVMutableVideoCompositionLayerInstruction setCropRectangle:atTime:]
-[AVMutableVideoCompositionLayerInstruction setCropRectangleRampFromStartCropRectangle:toEndCropRectangle:timeRange:]
+[AVVideoComposition videoCompositionWithPropertiesOfAsset:]
+[AVVideoComposition videoCompositionWithPropertiesOfAsset:videoGravity:]
+[AVVideoComposition initialize]
-[AVVideoComposition mutableCopyWithZone:]
-[AVVideoComposition finalize]
-[AVVideoComposition _changeSeed]
-[AVVideoComposition _bumpChangeSeed]
-[AVVideoComposition builtInCompositorName]
-[AVVideoComposition setBuiltInCompositorName:]
-[AVVideoComposition customVideoCompositorClass]
-[AVVideoComposition setCustomVideoCompositorClass:]
-[AVVideoComposition _copyFigVideoCompositor:andSession:recyclingSession:forFigRemaker:error:]
-[AVVideoComposition _auxiliaryTrackLayer]
-[AVVideoComposition _auxiliaryTrackID]
-[AVVideoComposition _postProcessingVideoLayer]
-[AVVideoComposition _postProcessingVideoLayers]
-[AVVideoComposition _postProcessingRootLayer]
-[AVVideoComposition instructionForFigInstruction:]
-[AVVideoComposition isValidForAsset:timeRange:validationDelegate:]
+[AVMutableVideoComposition videoCompositionWithPropertiesOfAsset:]
_trackLayerSort
___67+[AVMutableVideoComposition videoCompositionWithPropertiesOfAsset:]_block_invoke
+[AVMutableVideoComposition videoCompositionWithPropertiesOfAsset:videoGravity:]
-[AVMutableVideoComposition builtInCompositorName]
-[AVMutableVideoComposition setBuiltInCompositorName:]
-[AVMutableVideoComposition customVideoCompositorClass]
-[AVMutableVideoComposition setCustomVideoCompositorClass:]
-[AVMutableVideoComposition setAnimationTool:]
-[AVVideoCompositionCoreAnimationTool initWithMagicTrackID:animationLayer:videoLayers:]
+[AVVideoCompositionCoreAnimationTool videoCompositionCoreAnimationToolWithAdditionalLayer:asTrackID:]
+[AVVideoCompositionCoreAnimationTool videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:inLayer:]
+[AVVideoCompositionCoreAnimationTool videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:inLayer:]
-[AVVideoCompositionCoreAnimationTool dealloc]
-[AVVideoCompositionCoreAnimationTool finalize]
-[AVVideoCompositionCoreAnimationTool _hasLayerAsAuxiliaryTrack]
-[AVVideoCompositionCoreAnimationTool _auxiliaryTrackLayer]
-[AVVideoCompositionCoreAnimationTool _auxiliaryTrackID]
-[AVVideoCompositionCoreAnimationTool _hasPostProcessingLayers]
-[AVVideoCompositionCoreAnimationTool _postProcessingRootLayer]
-[AVVideoCompositionCoreAnimationTool _postProcessingVideoLayers]
-[AVAsset(AVAssetVideoCompositionUtility) unusedTrackID]
_avvc_CGAffineTransformDecompose
+[AVAssetExportSession allExportPresets]
___40+[AVAssetExportSession allExportPresets]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[AVAssetExportSession exportPresetsCompatibleWithAsset:]
+[AVAssetExportSession _canWriteMediaOfAsset:toFileType:]
+[AVAssetExportSession determineCompatibilityOfExportPreset:withAsset:outputFileType:completionHandler:]
___104+[AVAssetExportSession determineCompatibilityOfExportPreset:withAsset:outputFileType:completionHandler:]_block_invoke
___copy_helper_block_171
___destroy_helper_block_172
+[AVAssetExportSession exportSessionWithAsset:presetName:]
+[AVAssetExportSession maximumDurationForPreset:properties:]
+[AVAssetExportSession estimatedOutputFileLengthForPreset:duration:properties:]
-[AVAssetExportSession init]
+[AVAssetExportSession _presetRequiresRemaker:]
-[AVAssetExportSession finalize]
-[AVAssetExportSession description]
-[AVAssetExportSession asset]
+[AVAssetExportSession _getPassthroughExportPolicyForAssetTrack:fileType:asChapterTrack:]
-[AVAssetExportSession _determineCompatibleFileTypes]
___53-[AVAssetExportSession _determineCompatibleFileTypes]_block_invoke
___53-[AVAssetExportSession _determineCompatibleFileTypes]_block_invoke_2
___copy_helper_block_251
___destroy_helper_block_252
___copy_helper_block_264
___destroy_helper_block_265
-[AVAssetExportSession determineCompatibleFileTypesWithCompletionHandler:]
___74-[AVAssetExportSession determineCompatibleFileTypesWithCompletionHandler:]_block_invoke
___copy_helper_block_270
___destroy_helper_block_271
-[AVAssetExportSession outputFileType]
-[AVAssetExportSession status]
___30-[AVAssetExportSession status]_block_invoke
___copy_helper_block_285
___destroy_helper_block_286
-[AVAssetExportSession error]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___29-[AVAssetExportSession error]_block_invoke
___copy_helper_block_289
___destroy_helper_block_290
-[AVAssetExportSession _updateProgress]
-[AVAssetExportSession progress]
___32-[AVAssetExportSession progress]_block_invoke
___copy_helper_block_295
___destroy_helper_block_296
-[AVAssetExportSession _validateSettablePropertiesReturningError:]
-[AVAssetExportSession _validateOutputFileTypeForExport]
-[AVAssetExportSession exportAsynchronouslyWithCompletionHandler:]
___66-[AVAssetExportSession exportAsynchronouslyWithCompletionHandler:]_block_invoke
___copy_helper_block_327
___destroy_helper_block_328
-[AVAssetExportSession _createRemakerAndBeginExport]
___52-[AVAssetExportSession _createRemakerAndBeginExport]_block_invoke
___copy_helper_block_343
___destroy_helper_block_344
-[AVAssetExportSession cancelExport]
-[AVAssetExportSession maxDuration]
-[AVAssetExportSession setMinVideoFrameDuration:]
-[AVAssetExportSession minVideoFrameDuration]
-[AVAssetExportSession setVideoFrameRateConversionAlgorithm:]
-[AVAssetExportSession videoFrameRateConversionAlgorithm]
-[AVAssetExportSession _canPerformFastFrameRateConversionWithPreset:usingRemaker:]
__figRemakerNotification
+[AVAssetExportSession keyPathsForValuesAffectingEstimatedOutputFileLength]
-[AVAssetExportSession estimatedOutputFileLength]
-[AVAssetExportSession setMetadata:]
-[AVAssetExportSession metadataItemFilter]
-[AVAssetExportSession setMetadataItemFilter:]
-[AVAssetExportSession fileLengthLimit]
-[AVAssetExportSession setFileLengthLimit:]
-[AVAssetExportSession audioTimePitchAlgorithm]
-[AVAssetExportSession setAudioTimePitchAlgorithm:]
-[AVAssetExportSession customVideoCompositor]
-[AVAssetExportSession shouldOptimizeForNetworkUse]
-[AVAssetExportSession setShouldOptimizeForNetworkUse:]
-[AVAssetExportSession canPerformMultiplePassesOverSourceMediaData]
-[AVAssetExportSession setCanPerformMultiplePassesOverSourceMediaData:]
-[AVAssetExportSession directoryForTemporaryFiles]
-[AVAssetExportSession setDirectoryForTemporaryFiles:]
+[AVAssetExportSession(AVAssetExportSession_Local) _audioOnlyPresets]
___69+[AVAssetExportSession(AVAssetExportSession_Local) _audioOnlyPresets]_block_invoke
+[AVAssetExportSession(AVAssetExportSession_Local) _audioVideoPresets]
___70+[AVAssetExportSession(AVAssetExportSession_Local) _audioVideoPresets]_block_invoke
___70+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForPresets]_block_invoke
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForTemporalMetadataPresets]
___86+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForTemporalMetadataPresets]_block_invoke
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForDefaultPassthroughPreset]
___87+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForDefaultPassthroughPreset]_block_invoke
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForAudioOnly]
___72+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForAudioOnly]_block_invoke
+[AVAssetExportSession(AVAssetExportSession_Local) _asynchronousDispatchQueue]
___78+[AVAssetExportSession(AVAssetExportSession_Local) _asynchronousDispatchQueue]_block_invoke
+[AVAssetExportSession(AVAssetExportSession_Local) _mediaTypesToStripOnPassthroughExport]
___89+[AVAssetExportSession(AVAssetExportSession_Local) _mediaTypesToStripOnPassthroughExport]_block_invoke
+[AVAssetExportSession(AVAssetExportSession_Local) _mediaTypesToFailPassthroughExport]
___86+[AVAssetExportSession(AVAssetExportSession_Local) _mediaTypesToFailPassthroughExport]_block_invoke
+[AVAssetExportSession(AVAssetExportSession_Local) _isPassthroughExportSupportedForAudioFormatDescription:forFileType:asChapterTrack:usingModifiedFormatDescription:]
+[AVAssetExportSession(AVAssetExportSession_Local) _isPassthroughExportSupportedForFormatDescription:forFileType:asChapterTrack:]
+[AVAssetExportSession(AVAssetExportSession_Local) _failsAudioPassthroughRestrictions:outputFileType:]
+[AVAssetExportSession(AVAssetExportSession_Local) _isPassthroughExportPresetCompatibleWithAsset:outputFileType:]
___113+[AVAssetExportSession(AVAssetExportSession_Local) _isPassthroughExportPresetCompatibleWithAsset:outputFileType:]_block_invoke
___copy_helper_block_603
___destroy_helper_block_604
+[AVAssetExportSession(AVAssetExportSession_Local) _isNonPassthroughExportPreset:compatibleWithAssetContainingPlayableAudio:playableVideo:outputFileType:]
+[AVAssetExportSession(AVAssetExportSession_Local) _isNonPassthroughExportPreset:compatibleWithAsset:outputFileType:]
+[AVAssetExportSession(AVAssetExportSession_Local) _disableExportCompatibilityCheck]
+[AVAssetExportSession(AVAssetExportSession_Local) _isExportPreset:compatibleWithAsset:outputFileType:]
-[AVAssetExportSession(AVAssetExportSession_Local) _averageBitRateForSourceAndPreset:targetFrameRate:]
-[AVAssetExportSession(AVAssetExportSession_Local) _actualSettingForPresetAppleM4VAppleTV:]
-[AVAssetExportSession(AVAssetExportSession_Local) _actualSettingForPreset:]
__computeVideoByteRate
__computeAudioByteRate
+[AVAssetExportSession(AVAssetExportSession_Local) _figRemakerNotificationNames]
+[AVAssetExportSession(AVAssetExportSession_Local) _maximumDurationForPreset:fileSizeBytesLimit:properties:]
+[AVAssetExportSession(AVAssetExportSession_Local) _estimatedOutputFileLengthForPreset:duration:properties:]
__computeAudioVideoByteRate
-[AVAssetExportSession(AVAssetExportSession_Local) _handleFigRemakerNotification:payload:]
-[AVAssetExportSession(AVAssetExportSession_Local) _handleFigRemakerNotificationAsync:payload:]
___95-[AVAssetExportSession(AVAssetExportSession_Local) _handleFigRemakerNotificationAsync:payload:]_block_invoke
___copy_helper_block_648
___destroy_helper_block_649
-[AVAssetExportSession(AVAssetExportSession_Local) _transitionToStatus:error:]
___78-[AVAssetExportSession(AVAssetExportSession_Local) _transitionToStatus:error:]_block_invoke
___copy_helper_block_662
___destroy_helper_block_663
-[AVAssetExportSession(AVAssetExportSession_Local) _removeListeners]
-[AVAssetExportSession(AVAssetExportSession_Local) _addListeners]
-[AVAssetExportSession(AVAssetExportSession_Local) _getSourceDimension]
-[AVAssetExportSession(AVAssetExportSession_Local) _getUntransformedSourceDimension]
-[AVAssetExportSession(AVAssetExportSession_Local) _getSourceVideoFrameRate]
-[AVAssetExportSession(AVAssetExportSession_Local) _getTrackCountOfType:checkEnabled:]
-[AVAssetExportSession(AVAssetExportSession_Local) _hasProtectedNonAudioVideoTracks]
-[AVAssetExportSession(AVAssetExportSession_Local) _totalSizeOfTracksIsWithinFileLengthLimit:forSetting:]
+[AVAssetExportSession(AVAssetExportSession_Local) _disablePassthrough]
-[AVAssetExportSession(AVAssetExportSession_Local) _canPassThroughAudio:checkEnabled:checkProtected:]
-[AVAssetExportSession(AVAssetExportSession_Local) _retrieveChannelSpecificAudioSettingForAudioTrack:fromAudioSetting:]
-[AVAssetExportSession(AVAssetExportSession_Local) _settingForFigRemaker]
-[AVAssetExportSession(AVAssetExportSession_Local) _canPassThroughTemporalMetadata]
-[AVAssetExportSession(AVAssetExportSession_Local) _canPassThroughVideo:remaker:checkEnabled:checkAll:checkProtected:]
-[AVAssetExportSession(AVAssetExportSession_Local) _isAudioMixdownRequired:error:]
-[AVAssetExportSession(AVAssetExportSession_Local) _audioProcessingOptions]
_AVAssetExportSessionGetFigRemakerAudioTimePitchAlgorithmForAudioTimePitchAlgorithm
-[AVAssetExportSession(AVAssetExportSession_Local) _addAudioPassthroughTrack:asChapterTrack:toFigRemaker:returningTrackID:]
-[AVAssetExportSession(AVAssetExportSession_Local) _addTracksAndPropertiesToFigRemakerForPassthroughExport:]
-[AVAssetExportSession(AVAssetExportSession_Local) _transferTrackProperties:sourceTrackID:destinationTrackID:]
+[AVAssetExportSession(AVAssetExportSession_Local) _videoCompressionPropertiesForVideoSetting:]
-[AVAssetExportSession(AVAssetExportSession_Local) _actualOutputFileType]
-[AVAssetExportSession(AVAssetExportSession_Local) _createFormatWriterOptions:forFileFormat:]
-[AVAssetExportSession(AVAssetExportSession_Local) _remakerOptionsForFileFormat:]
-[AVAssetExportSession(AVAssetExportSession_Local) _createFigRemaker:]
-[AVAsset(AVAsset_ForExportSession) _chapterTracks]
-[AVAsset(AVAsset_ForExportSession) _containsAtLeastOnePlayableAudioTrack]
-[AVAsset(AVAsset_ForExportSession) _containsAtLeastOnePlayableVideoTrack]
-[AVAsset(AVAsset_ForExportSession) _exportURL]
-[AVAssetTrack(AVAssetTrack_ForExportSession) _hasMultipleEdits]
-[AVAssetTrack(AVAssetTrack_ForExportSession) _hasScaledEdits]
-[AVAssetTrack(AVAssetTrack_ForExportSession) _hasEmptyEdits]
-[AVAssetTrack(AVAssetTrack_ForExportSession) _hasMultipleDistinctFormatDescriptions]
-[AVAssetTrack(AVAssetTrack_ForExportSession) _firstFormatDescriptionIsLPCM]
+[AVSynchronizedLayer synchronizedLayerWithPlayerItem:]
-[AVSynchronizedLayer init]
-[AVSynchronizedLayer playerItem]
-[AVSynchronizedLayer setPlayerItem:]
___37-[AVSynchronizedLayer setPlayerItem:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___37-[AVSynchronizedLayer setPlayerItem:]_block_invoke22
-[AVSynchronizedLayer layerDidBecomeVisible:]
___45-[AVSynchronizedLayer layerDidBecomeVisible:]_block_invoke
___copy_helper_block_29
___destroy_helper_block_30
-[AVSynchronizedLayer dealloc]
___30-[AVSynchronizedLayer dealloc]_block_invoke
___copy_helper_block_33
___destroy_helper_block_34
-[AVSynchronizedLayer finalize]
_AVTranslateFigMediaCharacteristicToAVMediaCharacteristic
___AVTranslateFigMediaCharacteristicToAVMediaCharacteristic_block_invoke
_AVTranslateAVMediaCharacteristicToFigMediaCharacteristic
___AVTranslateAVMediaCharacteristicToFigMediaCharacteristic_block_invoke
_AVSynthesizeAVMediaCharacteristicsFromFigMediaCharactericsAndMediaType
_AVTranslateFigMediaCharacteristicsToAVMediaCharacteristics
_AVTranslateAVMediaCharacteristicsToFigMediaCharacteristics
_AVUnsupportedOutputURLPathExtensions
___AVUnsupportedOutputURLPathExtensions_block_invoke
_AVDictionaryWithTimeRange
___AVRampsIncludesRampThatOverlapsTimeRange_block_invoke
_AVNSLocalesMatchAccordingToRFC4647FilteringRules
_AVNSLanguageIdentifiersMatchAccordingToRFC4647FilteringRules
_languageCodeFromExtendedLanguageTag
_isSpecialSpokenLanguageCode
_AVNSArrayFromCGColor
_AVCGColorMakeFromArray
_AVSerializeOnQueueAsyncIfNecessary
_AVErrorForClientProgrammingError
+[AVMetadataEnumerator metadataEnumeratorWithArray:key:keySpace:locale:]
-[AVMetadataEnumerator initWithArray:key:keySpace:locale:]
-[AVMetadataEnumerator finalize]
-[AVAssetTrackSegment _initWithTimeMapping:]
-[AVAssetTrackSegment isEmpty]
-[AVAssetTrackSegment isEqual:]
-[AVAssetTrackSegment hash]
-[AVAssetTrackSegment timeMapping]
-[AVPropertyStorage finalize]
___38-[AVPropertyStorage setObject:forKey:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVPropertyStorage shouldUsePropertyStorageCacheForKey:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___34-[AVPropertyStorage objectForKey:]_block_invoke
___copy_helper_block_35
___destroy_helper_block_36
-[AVAudioMix finalize]
-[AVAudioMix description]
-[AVAudioMix mutableCopyWithZone:]
-[AVAudioMix isEqual:]
-[AVAudioMix hash]
-[AVAudioMix _audioMixInputParametersForTrackID:]
-[AVAudioMixInputParameters finalize]
-[AVAudioMixInputParameters description]
-[AVAudioMixInputParameters copyWithZone:]
-[AVAudioMixInputParameters mutableCopyWithZone:]
-[AVAudioMixInputParameters isEqual:]
-[AVAudioMixInputParameters hash]
-[AVAudioMixInputParameters audioTimePitchAlgorithm]
-[AVAudioMixInputParameters setAudioTimePitchAlgorithm:]
-[AVAudioMixInputParameters audioTapProcessor]
-[AVAudioMixInputParameters setAudioTapProcessor:]
-[AVAudioMixInputParameters _setVolume:atTime:]
-[AVAudioMixInputParameters setVolume:atTime:]
-[AVAudioMixInputParameters getVolumeRampForTime:startVolume:endVolume:timeRange:]
-[AVAudioMixInputParameters _setScheduledAudioParameters:]
-[AVAudioMixInputParameters _volumeCurveAsString]
+[AVMutableAudioMixInputParameters audioMixInputParameters]
-[AVMutableAudioMixInputParameters audioTimePitchAlgorithm]
-[AVMutableAudioMixInputParameters setAudioTimePitchAlgorithm:]
-[AVMutableAudioMixInputParameters audioTapProcessor]
-[AVMutableAudioMixInputParameters setAudioTapProcessor:]
-[AVMutableAudioMixInputParameters setVolume:atTime:]
+[AVRunLoopConditionRunLoopState runLoopStateWithRunLoop:]
-[AVRunLoopConditionRunLoopState initWithRunLoop:]
-[AVRunLoopConditionRunLoopState dealloc]
-[AVRunLoopConditionRunLoopState runLoop]
-[AVRunLoopConditionRunLoopState signalSource]
-[AVRunLoopConditionRunLoopState setSignalSource:]
-[AVRunLoopConditionRunLoopState signaled]
-[AVRunLoopConditionRunLoopState setSignaled:]
-[AVRunLoopCondition wait]
-[AVRunLoopCondition waitUntilDate:]
-[AVRunLoopCondition waitInMode:]
-[AVRunLoopCondition waitUntilDate:inMode:]
-[AVRunLoopCondition _waitInMode:untilDate:]
_AVRunLoopConditionSignal
-[AVRunLoopCondition broadcast]
-[AVRunLoopCondition _signalRunLoopWithState:]
-[AVMediaDataStorage init]
-[AVMediaDataStorage initWithURL:options:]
-[AVMediaDataStorage URL]
-[AVMediaDataStorage isEqual:]
-[AVMediaDataStorage hash]
-[AVMediaDataStorage description]
+[AVMovie initialize]
+[AVMovie movieTypes]
___21+[AVMovie movieTypes]_block_invoke
-[AVMovie init]
+[AVMovie movieWithURL:options:]
-[AVMovie _movieOptionsDictionaryToFigAssetOptionsDictionary:figAssetCreationFlags:]
-[AVMovie initWithURL:options:]
+[AVMovie movieWithData:options:]
-[AVMovie initWithData:options:]
-[AVMovie _initWithFormatReader:URL:data:fileType:options:]
-[AVMovie copyWithZone:]
-[AVMovie mutableCopyWithZone:]
-[AVMovie dealloc]
-[AVMovie finalize]
-[AVMovie _createMovieInternal]
-[AVMovie _assetInspectorLoader]
-[AVMovie _assetInspector]
-[AVMovie _classForTrackInspectors]
-[AVMovie _formatReader]
-[AVMovie _figMutableMovie]
-[AVMovie _figMutableMovieFromFormatReader:]
-[AVMovie _absoluteURL]
-[AVMovie defaultMediaDataStorage]
-[AVMovie URL]
-[AVMovie data]
-[AVMovie fileType]
-[AVMovie _classForMovieTracks]
-[AVMovie tracks]
___17-[AVMovie tracks]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVMovie referenceRestrictions]
-[AVMovie _shouldPrepareToOptimizeForExclusivePlayback]
-[AVMovie canContainMovieFragments]
-[AVMovie containsMovieFragments]
-[AVMovie posterTime]
-[AVMovie description]
-[AVMovie(AVMovieMovieHeaderSupport) movieHeaderWithFileType:error:]
-[AVMovie(AVMovieMovieHeaderSupport) writeMovieHeaderToURL:fileType:options:error:]
-[AVMutableMovie initWithURL:options:]
-[AVMutableMovie initWithData:options:]
-[AVMutableMovie initWithFileType:copySettingsFromMovie:options:]
-[AVMutableMovie _initWithMutableMovie:formatReader:URL:data:fileType:figOptions:avMovieOptions:]
-[AVMutableMovie copyWithZone:]
-[AVMutableMovie _addFigAssetNotifications]
_mutableMovieNotificationHandler
-[AVMutableMovie _removeFigAssetNotifications]
-[AVMutableMovie dealloc]
-[AVMutableMovie finalize]
-[AVMutableMovie _classForTrackInspectors]
-[AVMutableMovie statusOfValueForKey:error:]
-[AVMutableMovie loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVMutableMovie defaultMediaDataStorage]
-[AVMutableMovie tracks]
-[AVMutableMovie isModified]
-[AVMutableMovie setModified:]
-[AVMutableMovie _figMutableMovie]
-[AVMutableMovie _formatReader]
-[AVMutableMovie _setTracksUpdated:]
-[AVMutableMovie duration]
-[AVMutableMovie preferredRate]
-[AVMutableMovie preferredVolume]
-[AVMutableMovie preferredTransform]
-[AVMutableMovie setPreferredRate:]
-[AVMutableMovie setPreferredVolume:]
-[AVMutableMovie setPreferredTransform:]
-[AVMutableMovie setDefaultMediaDataStorage:]
-[AVMutableMovie description]
-[AVMutableMovie(AVMutableMovieMovieLevelEditing) insertTimeRange:ofAsset:atTime:copySampleData:error:]
-[AVMutableMovie(AVMutableMovieMovieLevelEditing) insertEmptyTimeRange:]
-[AVMutableMovie(AVMutableMovieMovieLevelEditing) removeTimeRange:]
-[AVMutableMovie(AVMutableMovieMovieLevelEditing) scaleTimeRange:toDuration:]
-[AVMutableMovie(AVMutableMovieTrackLevelEditing) addMutableTrackWithMediaType:copySettingsFromTrack:options:]
-[AVMutableMovie(AVMutableMovieTrackLevelEditing) removeTrack:]
-[AVMutableMovie(AVMutableMovieMetadataEditing) availableMetadataFormats]
-[AVMutableMovie(AVMutableMovieMetadataEditing) metadataForFormat:]
-[AVMutableMovie(AVMutableMovieMetadataEditing) metadata]
-[AVMutableMovie(AVMutableMovieMetadataEditing) setMetadata:]
_AVCanWriteFilesToDirectoryAtURL
_AVUseBackwardCompatibleID3MetadataReader
-[AVAssetInspector copyWithZone:]
-[AVAssetInspector duration]
-[AVAssetInspector preferredRate]
-[AVAssetInspector preferredVolume]
-[AVAssetInspector preferredSoundCheckVolumeNormalization]
-[AVAssetInspector preferredTransform]
-[AVAssetInspector naturalSize]
-[AVAssetInspector naturalTimeScale]
-[AVAssetInspector providesPreciseDurationAndTiming]
-[AVAssetInspector trackIDs]
-[AVAssetInspector trackReferences]
-[AVAssetInspector mediaSelectionGroups]
-[AVAssetInspector creationDate]
-[AVAssetInspector lyrics]
-[AVAssetInspector availableMetadataFormats]
-[AVAssetInspector metadataForFormat:]
-[AVAssetInspector identifyingTagClass]
-[AVAssetInspector hasProtectedContent]
-[AVAssetInspector isPlayable]
-[AVAssetInspector isExportable]
-[AVAssetInspector isReadable]
-[AVAssetInspector SHA1Digest]
-[AVAssetInspector canContainMovieFragments]
-[AVAssetInspector containsMovieFragments]
-[AVAssetInspector propertyListForProxy]
-[AVFormatReaderInspector finalize]
-[AVFormatReaderInspector hash]
-[AVFormatReaderInspector _valueAsCFTypeForProperty:]
-[AVFormatReaderInspector preferredRate]
-[AVFormatReaderInspector preferredVolume]
-[AVFormatReaderInspector preferredSoundCheckVolumeNormalization]
-[AVFormatReaderInspector preferredTransform]
-[AVFormatReaderInspector naturalSize]
-[AVFormatReaderInspector naturalTimeScale]
-[AVFormatReaderInspector lyrics]
-[AVFormatReaderInspector isExportable]
-[AVFormatReaderInspector isReadable]
-[AVFormatReaderInspector canContainMovieFragments]
-[AVFormatReaderInspector containsMovieFragments]
-[AVPlaybackItemInspector initWithPlaybackItem:trackIDs:]
-[AVPlaybackItemInspector finalize]
-[AVPlaybackItemInspector isEqual:]
-[AVPlaybackItemInspector hash]
-[AVPlaybackItemInspector _valueAsCFTypeForProperty:]
-[AVPlaybackItemInspector duration]
-[AVPlaybackItemInspector naturalSize]
-[AVPlaybackItemInspector providesPreciseDurationAndTiming]
-[AVPlaybackItemInspector trackIDs]
-[AVPlaybackItemInspector lyrics]
-[AVPlaybackItemInspector commonMetadata]
-[AVPlaybackItemInspector availableMetadataFormats]
-[AVPlaybackItemInspector metadataForFormat:]
-[AVPlaybackItemInspector compatibleTrackForCompositionTrack:]
-[AVFigAssetInspector initWithFigAsset:]
-[AVFigAssetInspector dealloc]
-[AVFigAssetInspector finalize]
-[AVFigAssetInspector isEqual:]
-[AVFigAssetInspector hash]
-[AVFigAssetInspector _figAsset]
-[AVFigAssetInspector _formatReader]
___36-[AVFigAssetInspector _formatReader]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVFigAssetInspector _valueAsCFTypeForProperty:]
-[AVFigAssetInspector identifyingTagClass]
-[AVFigAssetInspector duration]
-[AVFigAssetInspector preferredRate]
-[AVFigAssetInspector preferredVolume]
-[AVFigAssetInspector preferredSoundCheckVolumeNormalization]
-[AVFigAssetInspector preferredTransform]
-[AVFigAssetInspector naturalSize]
-[AVFigAssetInspector naturalTimeScale]
-[AVFigAssetInspector providesPreciseDurationAndTiming]
-[AVFigAssetInspector trackCount]
-[AVFigAssetInspector alternateTrackGroups]
-[AVFigAssetInspector trackReferences]
-[AVFigAssetInspector mediaSelectionGroups]
-[AVFigAssetInspector creationDate]
-[AVFigAssetInspector lyrics]
-[AVFigAssetInspector commonMetadata]
-[AVFigAssetInspector availableMetadataFormats]
-[AVFigAssetInspector metadataForFormat:]
-[AVFigAssetInspector _hasQTSaveRestriction]
-[AVFigAssetInspector isExportable]
-[AVFigAssetInspector isReadable]
-[AVFigAssetInspector isComposable]
-[AVFigAssetInspector figChapterGroupInfo]
-[AVFigAssetInspector figChapters]
-[AVFigAssetInspector URL]
-[AVFigAssetInspector resolvedURL]
-[AVFigAssetInspector downloadToken]
-[AVFigAssetInspector hasProtectedContent]
-[AVFigAssetInspector _isStreaming]
-[AVFigAssetInspector isPlayable]
-[AVFigAssetInspector SHA1Digest]
-[AVFigAssetInspector canContainMovieFragments]
-[AVFigAssetInspector containsMovieFragments]
-[AVFigAssetInspector propertyListForProxy]
-[AVTimebaseObserver initWithTimebase:queue:]
___45-[AVTimebaseObserver initWithTimebase:queue:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVTimebaseObserver dealloc]
-[AVTimebaseObserver finalize]
-[AVTimebaseObserver timebase]
-[AVTimebaseObserver invalidate]
-[AVTimebaseObserver _resetNextFireTime]
-[AVTimebaseObserver _handleTimeDiscontinuity]
-[AVTimebaseObserver _effectiveRateChanged]
-[AVTimebaseObserver invalidated]
-[AVTimebaseObserver _attachTimerSourceToTimebase]
-[AVTimebaseObserver _finishInitialization]
___43-[AVTimebaseObserver _finishInitialization]_block_invoke
___copy_helper_block_34
___destroy_helper_block_35
-[AVTimebaseObserver _removeTimebaseFromTimerSource]
-[AVTimebaseObserver _startObservingTimebaseNotifications]
_AVTimebaseObserver_timebaseNotificationCallback
-[AVTimebaseObserver _stopObservingTimebaseNotifications]
-[AVTimebaseObserver _weakReference]
-[AVPeriodicTimebaseObserver initWithTimebase:interval:queue:block:]
___68-[AVPeriodicTimebaseObserver initWithTimebase:interval:queue:block:]_block_invoke
___copy_helper_block_77
___destroy_helper_block_78
___68-[AVPeriodicTimebaseObserver initWithTimebase:interval:queue:block:]_block_invoke82
___copy_helper_block_83
___destroy_helper_block_84
___68-[AVPeriodicTimebaseObserver initWithTimebase:interval:queue:block:]_block_invoke88
___copy_helper_block_89
___destroy_helper_block_90
___68-[AVPeriodicTimebaseObserver initWithTimebase:interval:queue:block:]_block_invoke96
_AVTimebaseObserver_figTimebaseGetTime
___copy_helper_block_103
___destroy_helper_block_104
-[AVPeriodicTimebaseObserver dealloc]
-[AVPeriodicTimebaseObserver _fireBlockForTime:]
-[AVPeriodicTimebaseObserver _effectiveRateChanged]
-[AVPeriodicTimebaseObserver _resetNextFireTime]
-[AVPeriodicTimebaseObserver _handleTimeDiscontinuity]
-[AVOccasionalTimebaseObserver initWithTimebase:times:queue:block:]
___67-[AVOccasionalTimebaseObserver initWithTimebase:times:queue:block:]_block_invoke
___copy_helper_block_126
___destroy_helper_block_127
___67-[AVOccasionalTimebaseObserver initWithTimebase:times:queue:block:]_block_invoke131
___copy_helper_block_132
___destroy_helper_block_133
___67-[AVOccasionalTimebaseObserver initWithTimebase:times:queue:block:]_block_invoke136
___67-[AVOccasionalTimebaseObserver initWithTimebase:times:queue:block:]_block_invoke_2
___copy_helper_block_148
___destroy_helper_block_149
-[AVOccasionalTimebaseObserver dealloc]
-[AVOccasionalTimebaseObserver _fireBlock]
-[AVOccasionalTimebaseObserver _effectiveRateChanged]
-[AVOccasionalTimebaseObserver _previousFiringTimeBeforeTime:]
___62-[AVOccasionalTimebaseObserver _previousFiringTimeBeforeTime:]_block_invoke
___copy_helper_block_154
___destroy_helper_block_155
-[AVOccasionalTimebaseObserver _nextFiringTimeAfterTime:]
___57-[AVOccasionalTimebaseObserver _nextFiringTimeAfterTime:]_block_invoke
-[AVOccasionalTimebaseObserver _resetNextFireTime]
-[AVOccasionalTimebaseObserver _handleTimeDiscontinuity]
-[AVOnceTimebaseObserver initWithTimebase:fireTime:queue:block:]
___64-[AVOnceTimebaseObserver initWithTimebase:fireTime:queue:block:]_block_invoke
___copy_helper_block_175
___destroy_helper_block_176
___64-[AVOnceTimebaseObserver initWithTimebase:fireTime:queue:block:]_block_invoke180
___copy_helper_block_181
___destroy_helper_block_182
-[AVOnceTimebaseObserver dealloc]
-[AVOnceTimebaseObserver invalidate]
-[AVOnceTimebaseObserver _fireBlock]
-[AVOnceTimebaseObserver didFire]
-[AVOnceTimebaseObserver _resetNextFireTime]
___44-[AVOnceTimebaseObserver _resetNextFireTime]_block_invoke
___copy_helper_block_185
___destroy_helper_block_186
-[AVOnceTimebaseObserver _handleTimeDiscontinuity]
-[AVOnceTimebaseObserver _effectiveRateChanged]
___AVTimebaseObserver_timebaseNotificationCallback_block_invoke
___copy_helper_block_197
___destroy_helper_block_198
-[AVStreamDataParser init]
-[AVStreamDataParser _willDeallocOrFinalize]
-[AVStreamDataParser finalize]
-[AVStreamDataParser dealloc]
-[AVStreamDataParser setDelegate:]
-[AVStreamDataParser delegate]
-[AVStreamDataParser status]
-[AVStreamDataParser appendStreamData:]
-[AVStreamDataParser error]
-[AVStreamDataParser _setError:]
-[AVStreamDataParser _appendStreamData:withFlags:]
-[AVStreamDataParser appendStreamData:withFlags:]
-[AVStreamDataParser providePendingMediaData]
-[AVStreamDataParser asset]
-[AVStreamDataParser setShouldProvideMediaData:forTrackID:]
-[AVStreamDataParser shouldProvideMediaDataForTrackID:]
-[AVStreamDataParser _createAssetIfNecessary]
+[AVStreamDataParser(FigManifold) _createBlockBufferUsingNSData:]
+[AVStreamDataParser(FigManifold) _createNSDataWithBlockBuffer:]
-[AVStreamDataParser(FigManifold) _figManifold:pushedSampleBuffer:trackID:flags:]
-[AVStreamDataParser(FigManifold) _figManifold:trackDidEnd:]
-[AVStreamDataParser(FigManifold) _figManifold:formatDescription:orDecryptorDidChange:forTrackID:]
-[AVStreamDataParser(FigManifold) _registerForFigManifoldCallbacksForTrackID:]
-[AVStreamDataParser(FigManifold) _unregisterForFigManifoldCallbacksForTrackID:]
-[AVStreamDataParser(FigManifold) _figManifoldAllNewTracksReady:]
-[AVStreamDataParser(FigManifold) _figManifold:discoveredNewTrackID:mediaType:]
-[AVStreamDataParser(FigManifold) _createFigManifoldWithBlockBuffer:manifold:]
__figManifoldDiscoveredNewTrackInStream
__figManifoldAllNewTracksReady
__figManifoldError
-[AVStreamDataParser(AVStreamDataParser_ContentKeyRequestSupport) processContentKeyResponseData:forTrackID:]
-[AVStreamDataParser(AVStreamDataParser_ContentKeyRequestSupport) processContentKeyResponseError:forTrackID:]
-[AVStreamDataParser(AVStreamDataParser_ContentKeyRequestSupport) renewExpiringContentKeyResponseDataForTrackID:]
-[AVStreamDataParser(AVStreamDataParser_ContentKeyRequestSupport) streamingContentKeyRequestDataForApp:contentIdentifier:trackID:options:error:]
__figManifoldFormatDescriptionOrDecryptorDidChange
__figManifoldPushedSampleBuffer
__figManifoldTrackDidEnd
+[AVAssetInspectorLoader initialize]
-[AVAssetInspectorLoader init]
-[AVAssetInspectorLoader copyWithZone:]
-[AVAssetInspectorLoader assetInspector]
-[AVAssetInspectorLoader _figAsset]
-[AVAssetInspectorLoader _classForTrackInspectors]
-[AVAssetInspectorLoader lyrics]
-[AVAssetInspectorLoader isPlayable]
-[AVAssetInspectorLoader isExportable]
-[AVAssetInspectorLoader isReadable]
-[AVAssetInspectorLoader figChapterGroupInfo]
-[AVAssetInspectorLoader figChapters]
-[AVAssetInspectorLoader resolvedURL]
-[AVAssetInspectorLoader downloadToken]
-[AVAssetInspectorLoader _ensureAllDependenciesOfKeyAreLoaded:]
-[AVAssetInspectorLoader loadValuesAsynchronouslyForKeys:keysForCollectionKeys:completionHandler:]
-[AVAssetSynchronousInspectorLoader initWithAssetInspector:]
-[AVAssetSynchronousInspectorLoader dealloc]
-[AVAssetSynchronousInspectorLoader isEqual:]
-[AVAssetSynchronousInspectorLoader hash]
-[AVAssetSynchronousInspectorLoader assetInspector]
-[AVAssetSynchronousInspectorLoader statusOfValueForKey:error:]
-[AVAssetSynchronousInspectorLoader loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVAssetSynchronousInspectorLoader loadValuesAsynchronouslyForKeys:keysForCollectionKeys:completionHandler:]
-[AVAssetSynchronousInspectorLoader duration]
-[AVAssetSynchronousInspectorLoader lyrics]
-[AVAssetSynchronousInspectorLoader isPlayable]
-[AVAssetSynchronousInspectorLoader isExportable]
-[AVAssetSynchronousInspectorLoader isReadable]
-[AVAssetSynchronousInspectorLoader isComposable]
-[AVAssetMakeReadyForInspectionLoader initWithURL:]
-[AVAssetMakeReadyForInspectionLoader dealloc]
-[AVAssetMakeReadyForInspectionLoader finalize]
-[AVAssetMakeReadyForInspectionLoader copyWithZone:]
-[AVAssetMakeReadyForInspectionLoader assetInspector]
-[AVAssetMakeReadyForInspectionLoader cancelLoading]
-[AVAssetMakeReadyForInspectionLoader _formatReader]
-[AVAssetMakeReadyForInspectionLoader _loadingMutex]
-[AVAssetMakeReadyForInspectionLoader _providesAccurateTiming]
-[AVAssetMakeReadyForInspectionLoader _copyFormatReaderFromFigObjectWithFigErrorCode:]
-[AVAssetMakeReadyForInspectionLoader _inspectionRequiresAFormatReader]
-[AVAssetMakeReadyForInspectionLoader _playbackItem]
-[AVAssetMakeReadyForInspectionLoader _statusOfValueForKeyThatIsAlwaysLoaded]
-[AVAssetMakeReadyForInspectionLoader _dictionaryOfSpecialGettersForKeyValueStatus]
-[AVAssetMakeReadyForInspectionLoader _statusOfValueWhileMutexLockedForKey:error:]
-[AVAssetMakeReadyForInspectionLoader _statusOfValuesIsTerminalWhileMutexLockedForKeys:]
-[AVAssetMakeReadyForInspectionLoader _getAndPruneCompletionsWhileMutexLocked]
-[AVAssetMakeReadyForInspectionLoader statusOfValueForKey:error:]
-[AVAssetMakeReadyForInspectionLoader _status]
-[AVAssetMakeReadyForInspectionLoader _updateStatusWhileMutexLocked:figErrorCode:]
-[AVAssetMakeReadyForInspectionLoader _setStatus:figErrorCode:]
-[AVAssetMakeReadyForInspectionLoader _loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:]
-[AVAssetMakeReadyForInspectionLoader _dictionaryOfSpecialLoadingMethodsForKeys]
-[AVAssetMakeReadyForInspectionLoader _loadValuesWhileMutexLockedForKeys:]
-[AVAssetMakeReadyForInspectionLoader loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVAssetMakeReadyForInspectionLoader duration]
-[AVAssetMakeReadyForInspectionLoader lyrics]
-[AVAssetMakeReadyForInspectionLoader figChapterGroupInfo]
-[AVAssetMakeReadyForInspectionLoader isPlayable]
-[AVAssetMakeReadyForInspectionLoader isExportable]
-[AVAssetMakeReadyForInspectionLoader isReadable]
-[AVAssetMakeReadyForInspectionLoader isComposable]
-[AVAssetMakeReadyForInspectionLoader hasProtectedContent]
-[AVAssetMakeReadyForInspectionLoader _isStreaming]
-[AVAssetMakeReadyForInspectionLoader URL]
-[AVPlaybackItemInspectorLoader initWithURL:playbackItem:trackIDs:dynamicBehavior:]
_handlePlaybackItemNotification
-[AVPlaybackItemInspectorLoader finalize]
-[AVPlaybackItemInspectorLoader isEqual:]
-[AVPlaybackItemInspectorLoader hash]
-[AVPlaybackItemInspectorLoader cancelLoading]
-[AVPlaybackItemInspectorLoader _classForTrackInspectors]
-[AVPlaybackItemInspectorLoader _dictionaryOfSpecialGettersForKeyValueStatus]
-[AVPlaybackItemInspectorLoader _playbackItemPropertiesForKeys:]
-[AVPlaybackItemInspectorLoader _loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:]
-[AVPlaybackItemInspectorLoader duration]
+[AVFigAssetInspectorLoader _figAssetPropertiesForKeys]
+[AVFigAssetInspectorLoader _figAssetTrackPropertiesForKeys]
_figAssetCreationFlagsForAssetReferenceRestrictions
-[AVFigAssetInspectorLoader initWithURL:figAssetCreationFlags:figAssetCreationOptions:forAsset:]
-[AVFigAssetInspectorLoader initWithFigAsset:forAsset:]
-[AVFigAssetInspectorLoader _addFigAssetNotifications]
_handleFigAssetLoadingNotification
_handleAndReflectFigAssetNotification
-[AVFigAssetInspectorLoader _removeFigAssetNotifications]
-[AVFigAssetInspectorLoader dealloc]
-[AVFigAssetInspectorLoader finalize]
-[AVFigAssetInspectorLoader _formatReader]
-[AVFigAssetInspectorLoader assetInspector]
___43-[AVFigAssetInspectorLoader assetInspector]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVFigAssetInspectorLoader _figAsset]
___38-[AVFigAssetInspectorLoader _figAsset]_block_invoke
___copy_helper_block_268
___destroy_helper_block_269
-[AVFigAssetInspectorLoader _classForTrackInspectors]
-[AVFigAssetInspectorLoader _completionHandlerQueue]
-[AVFigAssetInspectorLoader _loadingMutex]
-[AVFigAssetInspectorLoader _loadingBatches]
-[AVFigAssetInspectorLoader _loadStatusForProperty:figAsset:returningError:]
-[AVFigAssetInspectorLoader statusOfValueForKey:error:]
+[AVFigAssetInspectorLoader _mapAssetKeys:toFigAssetPropertySet:figAssetTrackPropertySet:callerName:]
___101+[AVFigAssetInspectorLoader _mapAssetKeys:toFigAssetPropertySet:figAssetTrackPropertySet:callerName:]_block_invoke
___copy_helper_block_281
___destroy_helper_block_282
-[AVFigAssetInspectorLoader loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVFigAssetInspectorLoader loadValuesAsynchronouslyForKeys:keysForCollectionKeys:completionHandler:]
___101-[AVFigAssetInspectorLoader loadValuesAsynchronouslyForKeys:keysForCollectionKeys:completionHandler:]_block_invoke
___copy_helper_block_302
___destroy_helper_block_303
-[AVFigAssetInspectorLoader cancelLoading]
-[AVFigAssetInspectorLoader _ensureAllDependenciesOfKeyAreLoaded:]
___66-[AVFigAssetInspectorLoader _ensureAllDependenciesOfKeyAreLoaded:]_block_invoke
-[AVFigAssetInspectorLoader duration]
-[AVFigAssetInspectorLoader lyrics]
-[AVFigAssetInspectorLoader isPlayable]
-[AVFigAssetInspectorLoader isExportable]
-[AVFigAssetInspectorLoader isReadable]
-[AVFigAssetInspectorLoader isComposable]
-[AVFigAssetInspectorLoader figChapterGroupInfo]
-[AVFigAssetInspectorLoader figChapters]
-[AVFigAssetInspectorLoader URL]
-[AVFigAssetInspectorLoader resolvedURL]
-[AVFigAssetInspectorLoader downloadToken]
-[AVFigAssetInspectorLoader hasProtectedContent]
-[AVFigAssetInspectorLoader _isStreaming]
-[AVFigAssetInspectorLoader _invokeCompletionHandlerForLoadingBatches:]
-[AVUnreachableAssetInspectorLoader initWithFigError:userInfo:]
-[AVUnreachableAssetInspectorLoader dealloc]
-[AVUnreachableAssetInspectorLoader statusOfValueForKey:error:]
-[AVUnreachableAssetInspectorLoader loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVUnreachableAssetInspectorLoader _classForTrackInspectors]
___handleFigAssetLoadingNotification_block_invoke
___handleFigAssetLoadingNotification_block_invoke_2
___ensureDictionariesOfFigPropertiesForKeys_block_invoke
___getDictionaryOfSpecialPlaybackItemGettersForKeyValueStatus_block_invoke
___getDictionaryOfSpecialLoadingMethodsForKeys_block_invoke
-[AVAssetTrackInspector _initWithAsset:trackID:trackIndex:]
-[AVAssetTrackInspector _initWithAsset:trackID:]
-[AVAssetTrackInspector _initWithAsset:trackIndex:]
-[AVAssetTrackInspector init]
-[AVAssetTrackInspector _weakReference]
-[AVAssetTrackInspector dealloc]
-[AVAssetTrackInspector copyWithZone:]
-[AVAssetTrackInspector statusOfValueForKey:error:]
-[AVAssetTrackInspector loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVAssetTrackInspector trackID]
-[AVAssetTrackInspector _figMediaType]
-[AVAssetTrackInspector _figTrackReader]
-[AVAssetTrackInspector _figAssetTrack]
-[AVAssetTrackInspector mediaType]
-[AVAssetTrackInspector formatDescriptions]
-[AVAssetTrackInspector isPlayable]
-[AVAssetTrackInspector playabilityValidationResult]
-[AVAssetTrackInspector isEnabled]
-[AVAssetTrackInspector isSelfContained]
-[AVAssetTrackInspector totalSampleDataLength]
-[AVAssetTrackInspector timeRange]
-[AVAssetTrackInspector mediaPresentationTimeRange]
-[AVAssetTrackInspector mediaDecodeTimeRange]
-[AVAssetTrackInspector requiresFrameReordering]
-[AVAssetTrackInspector naturalTimeScale]
-[AVAssetTrackInspector estimatedDataRate]
-[AVAssetTrackInspector languageCode]
-[AVAssetTrackInspector mediaCharacteristics]
___45-[AVAssetTrackInspector mediaCharacteristics]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVAssetTrackInspector extendedLanguageTag]
-[AVAssetTrackInspector locale]
-[AVAssetTrackInspector naturalSize]
-[AVAssetTrackInspector dimensions]
-[AVAssetTrackInspector preferredTransform]
-[AVAssetTrackInspector layer]
-[AVAssetTrackInspector preferredVolume]
-[AVAssetTrackInspector loudnessInfo]
-[AVAssetTrackInspector nominalFrameRate]
-[AVAssetTrackInspector minSampleDuration]
-[AVAssetTrackInspector segments]
-[AVAssetTrackInspector segmentForTrackTime:]
-[AVAssetTrackInspector samplePresentationTimeForTrackTime:]
-[AVAssetTrackInspector commonMetadata]
-[AVAssetTrackInspector availableMetadataFormats]
-[AVAssetTrackInspector metadataForFormat:]
-[AVAssetTrackInspector alternateGroupID]
-[AVAssetTrackInspector isExcludedFromAutoselectionInTrackGroup]
-[AVAssetTrackInspector _trackReferences]
-[AVAssetTrackInspector hasProtectedContent]
-[AVAssetTrackInspector canProvideSampleCursors]
-[AVAssetTrackInspector makeSampleCursorWithPresentationTimeStamp:]
-[AVAssetTrackInspector makeSampleCursorAtFirstSampleInDecodeOrder]
-[AVAssetTrackInspector makeSampleCursorAtLastSampleInDecodeOrder]
-[AVAssetTrackInspector _getFigSampleCursorServiceReportingTimeAccuracy:]
-[AVTrackReaderInspector finalize]
-[AVTrackReaderInspector asset]
-[AVTrackReaderInspector _figMediaType]
-[AVTrackReaderInspector _figTrackReader]
-[AVTrackReaderInspector _getFigSampleCursorServiceReportingTimeAccuracy:]
___74-[AVTrackReaderInspector _getFigSampleCursorServiceReportingTimeAccuracy:]_block_invoke
___copy_helper_block_187
___destroy_helper_block_188
-[AVTrackReaderInspector _valueAsCFTypeForProperty:]
-[AVTrackReaderInspector isSelfContained]
-[AVTrackReaderInspector timeRange]
-[AVTrackReaderInspector requiresFrameReordering]
-[AVTrackReaderInspector naturalTimeScale]
-[AVTrackReaderInspector dimensions]
-[AVTrackReaderInspector layer]
-[AVTrackReaderInspector preferredVolume]
-[AVTrackReaderInspector loudnessInfo]
-[AVTrackReaderInspector minSampleDuration]
-[AVTrackReaderInspector segments]
-[AVTrackReaderInspector segmentForTrackTime:]
-[AVTrackReaderInspector availableMetadataFormats]
-[AVTrackReaderInspector metadataForFormat:]
-[AVTrackReaderInspector alternateGroupID]
-[AVTrackReaderInspector hash]
_dictionaryOfFigAssetTrackPropertiesForTrackKeys
___dictionaryOfFigAssetTrackPropertiesForTrackKeys_block_invoke
-[AVFigAssetTrackInspector _initWithAsset:trackID:trackIndex:]
-[AVFigAssetTrackInspector dealloc]
-[AVFigAssetTrackInspector finalize]
-[AVFigAssetTrackInspector _addFigNotifications]
_handleFigAssetTrackNotification
-[AVFigAssetTrackInspector _removeFigNotifications]
-[AVFigAssetTrackInspector _loadStatusForFigAssetTrackProperty:returningError:]
-[AVFigAssetTrackInspector statusOfValueForKey:error:]
-[AVFigAssetTrackInspector loadValuesAsynchronouslyForKeys:completionHandler:]
___78-[AVFigAssetTrackInspector loadValuesAsynchronouslyForKeys:completionHandler:]_block_invoke
___copy_helper_block_396
___destroy_helper_block_397
-[AVFigAssetTrackInspector _ensureAllDependenciesOfKeyAreLoaded:]
___65-[AVFigAssetTrackInspector _ensureAllDependenciesOfKeyAreLoaded:]_block_invoke
-[AVFigAssetTrackInspector asset]
-[AVFigAssetTrackInspector _figAssetTrack]
-[AVFigAssetTrackInspector _figTrackReader]
-[AVFigAssetTrackInspector _loadingMutex]
-[AVFigAssetTrackInspector _loadingBatches]
-[AVFigAssetTrackInspector trackID]
-[AVFigAssetTrackInspector _figMediaType]
-[AVFigAssetTrackInspector mediaType]
-[AVFigAssetTrackInspector _getFigSampleCursorServiceReportingTimeAccuracy:]
___76-[AVFigAssetTrackInspector _getFigSampleCursorServiceReportingTimeAccuracy:]_block_invoke
___copy_helper_block_413
___destroy_helper_block_414
-[AVFigAssetTrackInspector _valueAsCFTypeForProperty:]
-[AVFigAssetTrackInspector formatDescriptions]
-[AVFigAssetTrackInspector isPlayable]
-[AVFigAssetTrackInspector playabilityValidationResult]
-[AVFigAssetTrackInspector isEnabled]
-[AVFigAssetTrackInspector isSelfContained]
-[AVFigAssetTrackInspector totalSampleDataLength]
-[AVFigAssetTrackInspector timeRange]
-[AVFigAssetTrackInspector mediaPresentationTimeRange]
-[AVFigAssetTrackInspector mediaDecodeTimeRange]
-[AVFigAssetTrackInspector requiresFrameReordering]
-[AVFigAssetTrackInspector naturalTimeScale]
-[AVFigAssetTrackInspector estimatedDataRate]
-[AVFigAssetTrackInspector languageCode]
-[AVFigAssetTrackInspector extendedLanguageTag]
-[AVFigAssetTrackInspector naturalSize]
-[AVFigAssetTrackInspector dimensions]
-[AVFigAssetTrackInspector preferredTransform]
-[AVFigAssetTrackInspector layer]
-[AVFigAssetTrackInspector preferredVolume]
-[AVFigAssetTrackInspector loudnessInfo]
-[AVFigAssetTrackInspector nominalFrameRate]
-[AVFigAssetTrackInspector minSampleDuration]
-[AVFigAssetTrackInspector segments]
-[AVFigAssetTrackInspector segmentForTrackTime:]
-[AVFigAssetTrackInspector commonMetadata]
-[AVFigAssetTrackInspector availableMetadataFormats]
-[AVFigAssetTrackInspector metadataForFormat:]
-[AVFigAssetTrackInspector alternateGroupID]
-[AVFigAssetTrackInspector isExcludedFromAutoselectionInTrackGroup]
-[AVFigAssetTrackInspector _trackReferences]
-[AVFigAssetTrackInspector hasProtectedContent]
-[AVFigAssetTrackInspector isEqual:]
-[AVFigAssetTrackInspector hash]
-[AVFigAssetTrackInspector _invokeCompletionHandlerForLoadingBatches:]
-[AVCompositionTrackReaderInspector finalize]
-[AVCompositionTrackReaderInspector _mutableComposition]
-[AVCompositionTrackReaderInspector segments]
-[AVCompositionTrackReaderInspector segmentForTrackTime:]
-[AVCompositionTrackReaderInspector _getFigSampleCursorServiceReportingTimeAccuracy:]
-[AVPlaybackItemTrackInspector finalize]
-[AVPlaybackItemTrackInspector asset]
-[AVPlaybackItemTrackInspector _figMediaType]
-[AVPlaybackItemTrackInspector _playbackItem]
-[AVPlaybackItemTrackInspector _valueAsCFTypeForProperty:]
-[AVPlaybackItemTrackInspector isEnabled]
-[AVPlaybackItemTrackInspector timeRange]
-[AVPlaybackItemTrackInspector estimatedDataRate]
-[AVPlaybackItemTrackInspector naturalSize]
-[AVPlaybackItemTrackInspector dimensions]
-[AVPlaybackItemTrackInspector preferredTransform]
-[AVPlaybackItemTrackInspector samplePresentationTimeForTrackTime:]
-[AVPlaybackItemTrackInspector isEqual:]
-[AVPlaybackItemTrackInspector hash]
___handleFigAssetTrackNotification_block_invoke
___handleFigAssetTrackNotification_block_invoke_2
_AVFullMethodName
_AVFullMethodNameFromClass
_AVRequestConcreteImplementation
_AVNSValueWithCGPoint
_AVNSValueWithCGRect
_AVNSValueWithCGSize
_AVCGPointFromNSValue
_AVCGRectFromNSValue
_AVCGSizeFromNSValue
-[AVMetadataObjectInternal init]
-[AVMetadataObjectInternal dealloc]
-[AVMetadataObjectInternal time]
-[AVMetadataObjectInternal setTime:]
-[AVMetadataObjectInternal duration]
-[AVMetadataObjectInternal setDuration:]
-[AVMetadataObjectInternal bounds]
-[AVMetadataObjectInternal setBounds:]
-[AVMetadataObjectInternal type]
-[AVMetadataObjectInternal setType:]
-[AVMetadataObjectInternal input]
-[AVMetadataObjectInternal setInput:]
-[AVMetadataObjectInternal originalMetadataObject]
-[AVMetadataObjectInternal setOriginalMetadataObject:]
-[AVMetadataObject init]
-[AVMetadataObject initWithType:time:duration:bounds:originalMetadataObject:sourceCaptureInput:]
+[AVMetadataObject derivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:]
-[AVMetadataObject initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:]
-[AVMetadataObject dealloc]
-[AVMetadataObject time]
-[AVMetadataObject duration]
-[AVMetadataObject bounds]
-[AVMetadataObject type]
-[AVMetadataObject input]
-[AVMetadataObject originalMetadataObject]
-[AVMetadataFaceObjectInternal faceID]
-[AVMetadataFaceObjectInternal setFaceID:]
-[AVMetadataFaceObjectInternal hasRollAngle]
-[AVMetadataFaceObjectInternal setHasRollAngle:]
-[AVMetadataFaceObjectInternal rollAngle]
-[AVMetadataFaceObjectInternal setRollAngle:]
-[AVMetadataFaceObjectInternal hasYawAngle]
-[AVMetadataFaceObjectInternal setHasYawAngle:]
-[AVMetadataFaceObjectInternal yawAngle]
-[AVMetadataFaceObjectInternal setYawAngle:]
-[AVMetadataFaceObject initWithType:time:duration:bounds:originalMetadataObject:sourceCaptureInput:]
-[AVMetadataFaceObject initWithFaceID:hasRollAngle:rollAngle:hasYawAngle:yawAngle:time:duration:bounds:]
-[AVMetadataFaceObject initWithFaceID:hasRollAngle:rollAngle:hasYawAngle:yawAngle:time:duration:bounds:originalMetadataObject:sourceCaptureInput:]
-[AVMetadataFaceObject initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:]
-[AVMetadataFaceObject dealloc]
-[AVMetadataFaceObject description]
-[AVMetadataFaceObject copyWithZone:]
-[AVMetadataFaceObject faceID]
-[AVMetadataFaceObject hasRollAngle]
-[AVMetadataFaceObject rollAngle]
-[AVMetadataFaceObject hasYawAngle]
-[AVMetadataFaceObject yawAngle]
-[AVWeakReference initWithReferencedObject:]
-[AVWeakReference referencedObject]
-[AVGarbageCollectedWeakReference initWithReferencedObject:]
-[AVGarbageCollectedWeakReference init]
-[AVGarbageCollectedWeakReference description]
-[AVGarbageCollectedWeakReference referencedObject]
-[AVRetainReleaseWeakReference init]
-[AVRetainReleaseWeakReference description]
_av_readwrite_dispatch_queue_write_async
-[AVWeakKeyValueObserverProxy init]
-[AVCallbackRegistry dealloc]
-[AVCallbackRegistry finalize]
___47-[AVCallbackRegistry registerCallbackObserver:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___49-[AVCallbackRegistry unregisterCallbackObserver:]_block_invoke
___copy_helper_block_15
___destroy_helper_block_16
___Block_byref_object_copy_
___Block_byref_object_dispose_
___39-[AVCallbackRegistry callbackObserver:]_block_invoke
___destroy_helper_block_22
___Block_byref_object_copy_
___Block_byref_object_dispose_
___76+[AVCMNotificationDispatcher notificationDispatcherForCMNotificationCenter:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___76+[AVCMNotificationDispatcher notificationDispatcherForCMNotificationCenter:]_block_invoke7
___copy_helper_block_14
___destroy_helper_block_15
-[AVCMNotificationDispatcher dealloc]
-[AVCMNotificationDispatcher finalize]
___102-[AVCMNotificationDispatcher _addListenerAndCallback:forWeakReferenceToListener:callback:name:object:]_block_invoke
___copy_helper_block_57
___destroy_helper_block_58
___111-[AVCMNotificationDispatcher _copyAndRemoveListenerAndCallbackForWeakReferenceToListener:callback:name:object:]_block_invoke
___copy_helper_block_71
___destroy_helper_block_72
+[AVAssetReaderOutputMetadataAdaptor assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:]
-[AVAssetReaderOutputMetadataAdaptor init]
-[AVAssetReaderOutputMetadataAdaptor initWithAssetReaderTrackOutput:]
-[AVAssetReaderOutputMetadataAdaptor dealloc]
-[AVAssetReaderOutputMetadataAdaptor finalize]
-[AVAssetReaderOutputMetadataAdaptor assetReaderTrackOutput]
-[AVAssetReaderOutputMetadataAdaptor nextTimedMetadataGroup]
_AVMethodExceptionReasonWithObjectAndSelector
_AVMethodExceptionReasonWithClassAndSelector
+[AVSubtitleLayer subtitleLayerWithPlayer:]
-[AVSubtitleLayer _setSubtitleSample:]
-[AVSubtitleLayer updateSubtitle:forcedSubtitleSample:shouldBeHidden:]
___70-[AVSubtitleLayer updateSubtitle:forcedSubtitleSample:shouldBeHidden:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVSubtitleLayer getLayout:suggestLayout:shouldUpdateCachedSubtitleSample:]
-[AVSubtitleLayer setNeedsDisplay]
_getDisplayScale
-[AVSubtitleLayer subtitleRenderingNeedsLayout]
_subtitleRenderingNeedsLayoutNotification
-[AVSubtitleLayer initWithLayer:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___33-[AVSubtitleLayer drawInContext:]_block_invoke
___copy_helper_block_57
___destroy_helper_block_58
___58-[AVSubtitleLayer _updateNonForcedSubtitleDisplayEnabled:]_block_invoke
___copy_helper_block_65
___destroy_helper_block_66
___61-[AVSubtitleLayer _setHasPlayerToObserve:andShouldObserveIt:]_block_invoke
___copy_helper_block_78
___destroy_helper_block_79
___61-[AVSubtitleLayer _setHasPlayerToObserve:andShouldObserveIt:]_block_invoke90
___copy_helper_block_98
___destroy_helper_block_99
-[AVSubtitleLayer finalize]
___29-[AVSubtitleLayer setPlayer:]_block_invoke
___copy_helper_block_108
___destroy_helper_block_109
-[AVSubtitleLayer player]
___25-[AVSubtitleLayer player]_block_invoke
___copy_helper_block_112
___destroy_helper_block_113
-[AVSubtitleLayer setDelegate:]
___getDisplayScale_block_invoke
_clearMaxDisplayScale
-[AVAssetTrackGroup init]
-[AVAssetTrackGroup finalize]
-[AVAssetTrackGroup copyWithZone:]
-[AVAssetTrackGroup isEqual:]
-[AVAssetTrackGroup hash]
-[AVAssetTrackGroup _assetComparisonToken]
+[AVTimedMetadataGroup initialize]
-[AVTimedMetadataGroup initWithSampleBuffer:]
-[AVTimedMetadataGroup finalize]
-[AVTimedMetadataGroup copyWithZone:]
-[AVTimedMetadataGroup description]
-[AVTimedMetadataGroup hash]
-[AVTimedMetadataGroup timeRange]
-[AVTimedMetadataGroup items]
-[AVTimedMetadataGroup copyFormatDescription]
-[AVTimedMetadataGroup _createSerializedRepresentationWithFormatDescription:error:]
+[AVAssetCache assetCacheWithURL:]
-[AVAssetCache initWithURL:]
-[AVAssetCache dealloc]
-[AVAssetCache finalize]
-[AVAssetCache maxSize]
-[AVAssetCache setMaxSize:]
-[AVAssetCache maxEntrySize]
-[AVAssetCache setMaxEntrySize:]
-[AVAssetCache currentSize]
-[AVAssetCache URL]
-[AVAssetCache removeEntryForKey:]
-[AVAssetCache sizeOfEntryForKey:]
-[AVAssetCache lastModifiedDateOfEntryForKey:]
-[AVAssetCache allKeys]
-[AVCaptureAudioChannel invalidate]
-[AVCaptureAudioChannel peakHoldLevel]
-[AVCaptureAudioChannel volume]
-[AVCaptureAudioChannel setVolume:]
-[AVCaptureAudioChannel isEnabled]
-[AVCaptureAudioChannel setEnabled:]
+[AVCaptureAudioDataOutputCallbackData callbackDataWithOutput:connection:]
-[AVCaptureAudioDataOutputCallbackData initWithOutput:connection:]
-[AVCaptureAudioDataOutputCallbackData dealloc]
-[AVCaptureAudioDataOutputCallbackData finalize]
-[AVCaptureAudioDataOutputCallbackData output]
-[AVCaptureAudioDataOutputCallbackData connection]
-[AVCaptureAudioDataOutputCallbackData bufferQueue]
-[AVCaptureAudioDataOutputInternal init]
-[AVCaptureAudioDataOutputInternal dealloc]
-[AVCaptureAudioDataOutputInternal finalize]
+[AVCaptureAudioDataOutput initialize]
-[AVCaptureAudioDataOutput init]
-[AVCaptureAudioDataOutput dealloc]
-[AVCaptureAudioDataOutput sampleBufferDelegate]
-[AVCaptureAudioDataOutput sampleBufferCallbackQueue]
-[AVCaptureAudioDataOutput setSampleBufferDelegate:queue:]
-[AVCaptureAudioDataOutput audioSettings]
-[AVCaptureAudioDataOutput setAudioSettings:]
-[AVCaptureAudioDataOutput getAudioSplitterNode:andAudioMixerNode:forConnection:]
-[AVCaptureAudioDataOutput _updateCompressorNodesForConnection:]
-[AVCaptureAudioDataOutput avCaptureOutputSettingsForConnection:fileType:]
-[AVCaptureAudioDataOutput connectionMediaTypes]
-[AVCaptureAudioDataOutput canAddConnectionForMediaType:]
-[AVCaptureAudioDataOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
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
-[AVCaptureAudioDataOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[AVCaptureAudioDataOutput connectionGraphNodeForConnection:]
-[AVCaptureAudioDataOutput connectionUnitInputNumberForConnection:]
-[AVCaptureAudioDataOutput outputGraphNodeDescriptionForConnection:]
___ConsumerRender_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[AVCaptureAudioFileOutput initialize]
-[AVCaptureAudioFileOutput setMetadata:]
+[AVCaptureAudioFileOutput _avMetadataToID3Metadata:]
-[AVCaptureAudioFileOutput isRecording]
-[AVCaptureAudioFileOutput stopError]
-[AVCaptureAudioFileOutput startRecordingToOutputFileURL:recordingDelegate:]
-[AVCaptureAudioFileOutput pauseRecording]
-[AVCaptureAudioFileOutput resumeRecording]
-[AVCaptureAudioFileOutput _setPaused:]
-[AVCaptureAudioFileOutput setEnabled:forConnection:]
-[AVCaptureAudioFileOutput getAudioSplitterNode:andAudioMixerNode:forConnection:]
-[AVCaptureAudioFileOutput _stopFileWritingForConnection:fileControlToken:runningRecordingOperationDescriptor:stopWritingFlags:stopError:]
-[AVCaptureAudioFileOutput _forciblyStopFileWritingForRunningRecordingOperation]
-[AVCaptureAudioFileOutput _operationFailed:]
-[AVCaptureAudioPreviewOutput _updateOutputDeviceUniqueID]
-[AVCaptureAudioPreviewOutput _updateOutputDeviceUniqueIDFromPropertyListener]
-[AVCaptureAudioPreviewOutput outputDeviceUniqueID]
-[AVCaptureAudioPreviewOutput setOutputDeviceUniqueID:]
_audioPreviewDeviceIDPropertyListener
-[AVCaptureAudioPreviewOutput outputGraphNodeDescriptionForConnection:]
-[AVCaptureAudioPreviewOutput getAudioSplitterNode:andAudioMixerNode:forConnection:]
-[AVCaptureAudioPreviewOutput _updateCompressorNodesForConnection:]
-[AVCaptureConnection description]
-[AVCaptureConnection attachToSplitterNode:audioMixerNode:]
_ConnectionSplitterNodeFormatDescriptionListener
_ConnectionMixerNodeFormatDescriptionListener
-[AVCaptureConnection detachFromAudioSplitterAndMixerNodes]
-[AVCaptureConnection finalize]
-[AVCaptureConnection node]
-[AVCaptureConnection element]
-[AVCaptureConnection scope]
-[AVCaptureConnection incrementClientSequenceIDAndRetain]
-[AVCaptureConnection copyClientSequenceID]
-[AVCaptureConnection setMostRecentlySeenClientSequenceID:]
-[AVCaptureConnection mostRecentlySeenClientSequenceID]
-[AVCaptureConnection _splitterNodeFormatDescriptionDidChange]
-[AVCaptureConnection _mixerNodeFormatDescriptionDidChange]
-[AVCaptureConnection _rebuildEnabledAudioChannelsArray]
-[AVCaptureConnection _applySplitterChannelMapFromAudioChannelsEnabled]
-[AVCaptureConnection setEnabled:forChannel:]
-[AVCaptureConnection _applyVolumeFromAudioChannel:]
-[AVCaptureConnection setVolume:forChannel:]
-[AVCaptureConnection updateAudioPeakLevelsArray]
-[AVCaptureConnection getPeakAudioLevelForChannel:]
-[AVCaptureConnection audioChannelsAreAllEnabled]
-[AVCaptureConnection splitterAudioChannelMapWithSize:]
-[AVCaptureConnection copyPostSplitSummaryAudioFormatDescription]
-[AVCaptureConnection copySourceSummaryAudioFormatDescriptionWithOptionalExpansion:]
-[AVCaptureConnection copyExpandedSourceSummaryAudioFormatDescription]
-[AVCaptureConnection setActive:]
-[AVCaptureConnection setEnabled:]
-[AVCaptureConnection isLive]
-[AVCaptureConnection isVideoMirroringSupported]
-[AVCaptureConnection automaticallyAdjustsVideoMirroring]
-[AVCaptureConnection setAutomaticallyAdjustsVideoMirroring:]
-[AVCaptureConnection _setVideoMirrored:]
-[AVCaptureConnection setVideoMirrored:]
-[AVCaptureConnection isVideoOrientationSupported]
-[AVCaptureConnection setVideoOrientation:]
-[AVCaptureConnection isVideoFieldModeSupported]
-[AVCaptureConnection setVideoFieldMode:]
-[AVCaptureConnection isVideoMinFrameDurationSupported]
-[AVCaptureConnection setVideoMinFrameDuration:]
-[AVCaptureConnection isVideoMaxFrameDurationSupported]
-[AVCaptureConnection videoMaxFrameDuration]
-[AVCaptureConnection setVideoMaxFrameDuration:]
-[AVCaptureConnection maxVideoScaleAndCropFactor]
-[AVCaptureConnection videoScaleAndCropFactor]
-[AVCaptureConnection setVideoScaleAndCropFactor:]
-[AVCaptureConnection _splitterNodeFormatDescriptionDidChangeFromPropertyListener]
-[AVCaptureConnection _mixerNodeFormatDescriptionDidChangeFromPropertyListener]
-[AVCaptureConnection videoMaxScaleAndCropFactor]
-[AVCaptureConnection isVideoStabilizationSupported]
-[AVCaptureConnection isVideoStabilizationEnabled]
-[AVCaptureConnection enablesVideoStabilizationWhenAvailable]
-[AVCaptureConnection setEnablesVideoStabilizationWhenAvailable:]
+[AVCaptureDALDevice _putDeviceIntoInputModeIfPossible:]
_DeviceIsAliveListener
_InUseListener
_StreamsListener
_LinkedDevicesListener
_SuspendedListener
_RemoveListenerForProperty
_FocusAdjustListener
_ExposureAdjustListener
_WhiteBalanceAdjustListener
_getDeviceControlObject
_DeviceInputSourceListener
-[AVCaptureDALDevice finalize]
-[AVCaptureDALDevice dealloc]
-[AVCaptureDALDevice deviceClock]
-[AVCaptureDALDevice modelID]
-[AVCaptureDALDevice manufacturer]
-[AVCaptureDALDevice setActiveFormat:]
-[AVCaptureDALDevice activeVideoMinFrameDuration]
-[AVCaptureDALDevice setActiveVideoMinFrameDuration:]
-[AVCaptureDALDevice activeVideoMaxFrameDuration]
-[AVCaptureDALDevice setActiveVideoMaxFrameDuration:]
-[AVCaptureDALDevice transportType]
-[AVCaptureDALDevice inputSources]
-[AVCaptureDALDevice activeInputSource]
-[AVCaptureDALDevice setActiveInputSource:]
-[AVCaptureDALDevice _refreshManufacturer]
-[AVCaptureDALDevice activeVideoMaxFrameDurationForStream:]
-[AVCaptureDALDevice _refreshInputSources]
-[AVCaptureDALDevice isInUseByAnotherApplication]
-[AVCaptureDALDevice _handleDeviceIsAliveNotification:]
-[AVCaptureDALDevice becomeDeviceMaster:]
-[AVCaptureDALDevice relinquishDeviceMaster]
-[AVCaptureDALDevice transportControlsSupported]
-[AVCaptureDALDevice transportControlsPlaybackMode]
-[AVCaptureDALDevice transportControlsSpeed]
-[AVCaptureDALDevice _sendAVCDeviceOpcode:playbackMode:]
-[AVCaptureDALDevice _retrieveTransportValues]
-[AVCaptureDALDevice _retrieveAVCDeviceValues]
-[AVCaptureDALDevice _retrieveRS422DeviceValues]
-[AVCaptureDALDevice _startupTransportPropertyObserverTimerForPlaybackMode:]
___76-[AVCaptureDALDevice _startupTransportPropertyObserverTimerForPlaybackMode:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___61-[AVCaptureDALDevice addObserver:forKeyPath:options:context:]_block_invoke
___copy_helper_block_258
___destroy_helper_block_259
___48-[AVCaptureDALDevice removeObserver:forKeyPath:]_block_invoke
___copy_helper_block_264
___destroy_helper_block_265
-[AVCaptureDALDevice _refreshIsInUseByAnotherApplicationFromCallback]
-[AVCaptureDALDevice _refreshStreamsFromCallback]
-[AVCaptureDALDevice _refreshLinkedDevicesFromCallback]
-[AVCaptureDALDevice _refreshSuspendedPropertyFromCallback]
-[AVCaptureDALDevice _refreshInputSourcesFromCallback]
-[AVCaptureDALDevice setAutomaticallyAdjustsFeatureControls:]
-[AVCaptureDALDevice automaticallyAdjustsFeatureControls]
-[AVCaptureDALDevice isHighResolutionCamera]
-[AVCaptureDALDevice availableStillImageFormats]
-[AVCaptureDALDevice copyStillImageSampleBufferWithFormat:error:]
-[AVCaptureDALDevice setTransportControlsSupported:]
-[AVCaptureDALDevice setTransportControlsPlaybackMode:]
-[AVCaptureDALDevice setTransportControlsSpeed:]
-[AVCaptureDALDevice isAdjustingFocus]
-[AVCaptureDALDevice setAdjustingFocus:]
-[AVCaptureDALDevice isAdjustingExposure]
-[AVCaptureDALDevice setAdjustingExposure:]
-[AVCaptureDALDevice isAdjustingWhiteBalance]
-[AVCaptureDALDevice setAdjustingWhiteBalance:]
-[AVCaptureDALDevice(AVCaptureDeviceFocus) isFocusModeSupported:]
_isPropertySupported
-[AVCaptureDALDevice(AVCaptureDeviceFocus) setFocusMode:]
_setProperty
-[AVCaptureDALDevice(AVCaptureDeviceExposure) isExposureModeSupported:]
-[AVCaptureDALDevice(AVCaptureDeviceExposure) exposureMode]
-[AVCaptureDALDevice(AVCaptureDeviceExposure) setExposureMode:]
-[AVCaptureDALDevice(AVCaptureDeviceWhiteBalance) isWhiteBalanceModeSupported:]
-[AVCaptureDALDevice(AVCaptureDeviceWhiteBalance) setWhiteBalanceMode:]
-[AVCaptureDALDevice(AVCaptureDeviceTransportControls) _retrieveTransportControlsSupported]
-[AVCaptureDALDevice(AVCaptureDeviceTransportControls) setTransportControlsPlaybackMode:speed:]
+[AVCaptureDevice CMIOBundleIdentifier]
-[AVCaptureDevice dealloc]
-[AVCaptureDevice finalize]
-[AVCaptureDevice description]
-[AVCaptureDevice uniqueID]
-[AVCaptureDevice modelID]
-[AVCaptureDevice localizedName]
-[AVCaptureDevice manufacturer]
-[AVCaptureDevice formats]
-[AVCaptureDevice activeFormat]
-[AVCaptureDevice setActiveFormat:]
-[AVCaptureDevice setActiveInputSource:]
-[AVCaptureDevice frameRateRangeForDuration:]
-[AVCaptureDevice activeVideoMinFrameDuration]
-[AVCaptureDevice setActiveVideoMinFrameDuration:]
-[AVCaptureDevice activeVideoMaxFrameDuration]
-[AVCaptureDevice setActiveVideoMaxFrameDuration:]
-[AVCaptureDevice transportType]
-[AVCaptureDevice supportsAVCaptureSessionPreset:]
-[AVCaptureDevice addLinkedDeviceWithoutReentering:]
-[AVCaptureDevice removeLinkedDeviceWithoutReentering:]
-[AVCaptureDevice _removeAllLinkedDevices]
-[AVCaptureDevice position]
-[AVCaptureDevice hasFlash]
-[AVCaptureDevice isFlashModeSupported:]
-[AVCaptureDevice flashMode]
-[AVCaptureDevice setFlashMode:]
-[AVCaptureDevice hasTorch]
-[AVCaptureDevice isTorchModeSupported:]
-[AVCaptureDevice torchMode]
-[AVCaptureDevice setTorchMode:]
-[AVCaptureDevice isFocusModeSupported:]
-[AVCaptureDevice focusMode]
-[AVCaptureDevice setFocusMode:]
-[AVCaptureDevice isFocusPointOfInterestSupported]
-[AVCaptureDevice focusPointOfInterest]
-[AVCaptureDevice setFocusPointOfInterest:]
-[AVCaptureDevice isAdjustingFocus]
-[AVCaptureDevice isExposureModeSupported:]
-[AVCaptureDevice exposureMode]
-[AVCaptureDevice setExposureMode:]
-[AVCaptureDevice isExposurePointOfInterestSupported]
-[AVCaptureDevice exposurePointOfInterest]
-[AVCaptureDevice setExposurePointOfInterest:]
-[AVCaptureDevice isAdjustingExposure]
-[AVCaptureDevice isWhiteBalanceModeSupported:]
-[AVCaptureDevice whiteBalanceMode]
-[AVCaptureDevice setWhiteBalanceMode:]
-[AVCaptureDevice isAdjustingWhiteBalance]
-[AVCaptureDevice transportControlsSupported]
-[AVCaptureDevice transportControlsPlaybackMode]
-[AVCaptureDevice transportControlsSpeed]
-[AVCaptureDevice setTransportControlsPlaybackMode:speed:]
-[AVCaptureDevice deviceSystem]
-[AVCaptureDevice deviceID]
-[AVCaptureDevice connectionUnitComponentSubType]
-[AVCaptureDevice connectionID]
-[AVCaptureDevice setAutomaticallyAdjustsFeatureControls:]
-[AVCaptureDevice automaticallyAdjustsFeatureControls]
-[AVCaptureDevice isHighResolutionCamera]
-[AVCaptureDevice availableStillImageFormats]
-[AVCaptureDevice copyStillImageSampleBufferWithFormat:error:]
-[AVCaptureDevice isInUseByAnotherApplication]
-[AVCaptureDevice isConnected]
-[AVCaptureDevice _forceClosed]
-[AVCaptureDevice startUsingDevice:]
-[AVCaptureDevice stopUsingDevice]
-[AVCaptureDevice becomeDeviceMaster:]
-[AVCaptureDevice relinquishDeviceMaster]
-[AVMediaDataRequester initWithMediaDataConsumer:requestQueue:requestBlock:]
-[AVMediaDataRequester init]
-[AVMediaDataRequester dealloc]
-[AVMediaDataRequester finalize]
-[AVMediaDataRequester startRequestingMediaData]
___48-[AVMediaDataRequester startRequestingMediaData]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVMediaDataRequester invalidate]
-[AVMediaDataRequester _requestMediaDataIfReady]
___48-[AVMediaDataRequester _requestMediaDataIfReady]_block_invoke
___copy_helper_block_31
___destroy_helper_block_32
-[AVMediaDataRequester requestQueue]
-[AVMediaDataRequester requestBlock]
+[AVCaptureDeviceFormat _stringForFormatDescription:frameRateRanges:]
-[AVCaptureDeviceFormat description]
-[AVCaptureDeviceFormat finalize]
-[AVCaptureDeviceFormat videoSupportedFrameRateRanges]
-[AVSampleBufferRenderSynchronizer init]
-[AVSampleBufferRenderSynchronizer _initializeTimebase]
-[AVSampleBufferRenderSynchronizer dealloc]
_avrendersynchronize_cleanUpAddedRenderers
-[AVSampleBufferRenderSynchronizer finalize]
-[AVSampleBufferRenderSynchronizer timebase]
-[AVSampleBufferRenderSynchronizer rate]
-[AVSampleBufferRenderSynchronizer setRate:]
-[AVSampleBufferRenderSynchronizer setRate:time:]
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) renderers]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___97-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) renderers]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _addRenderer:]
___101-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _addRenderer:]_block_invoke
___copy_helper_block_62
___destroy_helper_block_63
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) addRenderer:]
___100-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) addRenderer:]_block_invoke
___copy_helper_block_114
___destroy_helper_block_115
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _getTimebaseObserverForRenderer:]
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _getClientCompletionHandlerForRenderer:]
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _removeTimebaseObserverForRenderer:]
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _storeObserver:clientCompletionHandler:forRenderer:]
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _createOnceTimebaseObserverForRemovalOfRenderer:atTime:]
___143-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _createOnceTimebaseObserverForRemovalOfRenderer:atTime:]_block_invoke
___143-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _createOnceTimebaseObserverForRemovalOfRenderer:atTime:]_block_invoke_2
___143-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _createOnceTimebaseObserverForRemovalOfRenderer:atTime:]_block_invoke_3
___copy_helper_block_146
___destroy_helper_block_147
___copy_helper_block_150
___destroy_helper_block_151
___copy_helper_block_154
___destroy_helper_block_155
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _scheduleTimedRendererRemovalAtTime:atTime:withClientCompletionHandler:]
___159-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) _scheduleTimedRendererRemovalAtTime:atTime:withClientCompletionHandler:]_block_invoke
___copy_helper_block_163
___destroy_helper_block_164
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) removeRenderer:atTime:withCompletionHandler:]
___132-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerRendererManagement) removeRenderer:atTime:withCompletionHandler:]_block_invoke
___copy_helper_block_173
___destroy_helper_block_174
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerTimeObservation) addPeriodicTimeObserverForInterval:queue:usingBlock:]
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerTimeObservation) addBoundaryTimeObserverForTimes:queue:usingBlock:]
-[AVSampleBufferRenderSynchronizer(AVSampleBufferRenderSynchronizerTimeObservation) removeTimeObserver:]
-[AVCaptureDeviceInput description]
-[AVCaptureDeviceInput init]
-[AVCaptureDeviceInput inputClock]
+[AVSampleCursor initialize]
+[AVSampleCursor sampleCursorWithFigSampleCursor:]
-[AVSampleCursor init]
-[AVSampleCursor initWithFigSampleCursor:]
-[AVSampleCursor description]
-[AVSampleCursor dealloc]
-[AVSampleCursor finalize]
-[AVSampleCursor copyWithZone:]
-[AVSampleCursor _figSampleCursor]
-[AVSampleCursor stepInDecodeOrderByCount:]
-[AVSampleCursor stepInPresentationOrderByCount:]
-[AVSampleCursor stepByDecodeTime:wasPinned:]
-[AVSampleCursor stepByDecodeTime:]
-[AVSampleCursor stepByPresentationTime:wasPinned:]
-[AVSampleCursor stepByPresentationTime:]
-[AVSampleCursor presentationTimeStamp]
-[AVSampleCursor decodeTimeStamp]
-[AVSampleCursor comparePositionInDecodeOrderWithPositionOfCursor:]
-[AVSampleCursor samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:]
-[AVSampleCursor samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:]
-[AVSampleCursor canProvideSampleBuffers]
-[AVSampleCursor createSampleBufferForCurrentSampleReturningError:]
-[AVSampleCursor createSampleBufferFromCurrentSampleToEndCursor:error:]
-[AVSampleCursor currentSampleDuration]
-[AVSampleCursor copyCurrentSampleFormatDescription]
-[AVSampleCursor currentSampleSyncInfo]
-[AVSampleCursor currentSampleDependencyInfo]
-[AVSampleCursor currentChunkStorageURL]
-[AVSampleCursor currentChunkStorageRange]
-[AVSampleCursor currentChunkInfo]
-[AVSampleCursor currentSampleIndexInChunk]
-[AVSampleCursor currentSampleStorageRange]
-[AVCaptureDeviceInputSource description]
-[AVCaptureDeviceInputSource isEqual:]
-[AVCaptureFileOutputRecordingOperationDescriptor init]
-[AVCaptureFileOutputRecordingOperationDescriptor setPaused:]
-[AVCaptureFileOutputRecordingOperationDescriptor operationDescriptorCoalescedWithExistingOperationDescriptor:]
+[AVCaptureFileOutputPauseOperationDescriptor operationThatShouldPause:]
-[AVCaptureFileOutputPauseOperationDescriptor init]
-[AVCaptureFileOutputPauseOperationDescriptor initOperationThatShouldPause:]
-[AVCaptureFileOutputPauseOperationDescriptor shouldPause]
-[AVCaptureFileOutputPauseOperationDescriptor operationDescriptorCoalescedWithExistingOperationDescriptor:]
-[AVCaptureFileOutput finalize]
-[AVCaptureFileOutput outputFileURL]
-[AVCaptureFileOutput startRecordingToOutputFileURL:recordingDelegate:]
-[AVCaptureFileOutput stopRecording]
-[AVCaptureFileOutput isRecording]
-[AVCaptureFileOutput isRecordingPaused]
-[AVCaptureFileOutput pauseRecording]
-[AVCaptureFileOutput resumeRecording]
-[AVCaptureFileOutput avCaptureOutputSettingsForConnection:fileType:]
-[AVCaptureFileOutput recordedDuration]
-[AVCaptureFileOutput recordedFileSize]
-[AVCaptureFileOutput setMaxRecordedDuration:]
-[AVCaptureFileOutput setMaxRecordedFileSize:]
-[AVCaptureFileOutput minFreeDiskSpaceLimit]
-[AVCaptureFileOutput setMinFreeDiskSpaceLimit:]
-[AVCaptureFileOutput compressorNodesMode]
-[AVCaptureFileOutput setCompressorNodesMode:]
-[AVCaptureFileOutput delegateRequiresFrameAccurateStart]
_DevicesListener
-[AVCaptureHALDevice init]
_DeviceIsAliveListener
_DeviceFormatListener
_DeviceInputSourceListener
-[AVCaptureHALDevice finalize]
-[AVCaptureHALDevice dealloc]
-[AVCaptureHALDevice deviceSystem]
-[AVCaptureHALDevice deviceID]
-[AVCaptureHALDevice modelID]
-[AVCaptureHALDevice manufacturer]
-[AVCaptureHALDevice setActiveFormat:]
-[AVCaptureHALDevice transportType]
-[AVCaptureHALDevice _refreshFormatsFromCallback]
-[AVCaptureHALDevice _refreshInputSourcesFromCallback]
-[AVCaptureHALDevice isInUseByAnotherApplication]
-[AVCaptureHALDevice deviceClock]
-[AVCaptureHALDevice _handleDeviceIsAliveNotification:]
-[AVCaptureInput ports]
-[AVCaptureInput portsForMediaType:]
-[AVCaptureInput defaultPortForMediaType:]
-[AVCaptureInput addInputUnitsForInputPort:toGraph:ofCaptureSession:error:]
-[AVCaptureInput removeInputUnitsForInputPort:fromGraph:ofCaptureSession:]
-[AVCaptureInput graphNodeForInputPort:]
-[AVCaptureInput unitOutputNumberForInputPort:]
-[AVCaptureInput clockProviderNodeForInputPort:]
-[AVCaptureInput sessionWillUseOutputDecompressionOptions:forPort:]
-[AVCaptureInput inputClock]
+[AVCaptureInputPort initialize]
-[AVCaptureInputPort finalize]
-[AVCaptureInputPort description]
-[AVCaptureInputPort clock]
-[AVCaptureInputPort _setClock:]
-[AVCaptureInputPort valueForUndefinedKey:]
+[AVCaptureInputPort automaticallyNotifiesObserversOfClock]
-[AVCaptureInputPort audioMixerNodeElement]
-[AVCaptureInputPort detachFromAudioMixerNode]
-[AVCaptureMovieFileOutput isRecording]
-[AVCaptureMovieFileOutput _setPaused:]
-[AVCaptureMovieFileOutput pauseRecording]
-[AVCaptureMovieFileOutput resumeRecording]
-[AVCaptureMovieFileOutput setMovieFragmentInterval:]
+[AVCaptureMovieFileOutput recorderCommonMetadataForAVMetadataItemArray:]
+[AVCaptureMovieFileOutput updateMovieMetadataInFile:withMetadata:error:]
-[AVCaptureMovieFileOutput setMetadata:]
-[AVCaptureMovieFileOutput observeValueForKeyPath:ofObject:change:context:]
_FileControlCallback
_CompressorRender
-[AVCaptureMovieFileOutput setEnabled:forConnection:]
-[AVCaptureMovieFileOutput getAudioSplitterNode:andAudioMixerNode:forConnection:]
-[AVCaptureMovieFileOutput supportsVideoMirroringForConnection:]
-[AVCaptureMovieFileOutput supportsVideoOrientationForConnection:]
-[AVCaptureMovieFileOutput supportsVideoFieldModeForConnection:]
-[AVCaptureMovieFileOutput supportsVideoMinFrameDurationForConnection:]
-[AVCaptureMovieFileOutput supportsVideoMaxFrameDurationForConnection:]
_FileCompletionCallback
-[AVCaptureMovieFileOutput _stopFileWritingForConnection:fileControlToken:runningRecordingOperationDescriptor:stopWritingFlags:stopError:]
-[AVCaptureMovieFileOutput _forciblyStopFileWritingForRunningRecordingOperation]
-[AVCaptureMovieFileOutput _operationFailed:]
-[AVCaptureOperationDescriptorQueueItem init]
+[AVCaptureOutput initialize]
-[AVCaptureOutput connectionMediaTypes]
-[AVCaptureOutput canAddConnectionForMediaType:]
-[AVCaptureOutput connectionWithMediaType:]
-[AVCaptureOutput prefersMixedAudio]
-[AVCaptureOutput activeConnections]
___36-[AVCaptureOutput activeConnections]_block_invoke
-[AVCaptureOutput firstActiveConnection]
-[AVCaptureOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
-[AVCaptureOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[AVCaptureOutput setEnabled:forConnection:]
-[AVCaptureOutput connectionGraphNodeForConnection:]
-[AVCaptureOutput outputGraphNodeDescriptionForConnection:]
-[AVCaptureOutput connectionUnitInputNumberForConnection:]
-[AVCaptureOutput avCaptureOutputSettingsForConnection:fileType:]
-[AVCaptureOutput _videoOutputSettingsSizeForConnection:]
-[AVCaptureOutput _vtCompressionPropertiesForConnection:]
-[AVCaptureOutput _preferredInputPixelBufferAttributesForConnection:]
_DummyEncodedFrameOutputCallback
-[AVCaptureOutput h264BitRateForConnection:]
-[AVCaptureOutput h264ProfileLevelForBitRate:]
-[AVCaptureOutput videoDecompressionSettingsForVideoConnection:]
-[AVCaptureOutput videoDecompressionRequirementForConnection:]
-[AVCaptureOutput getAudioSplitterNode:andAudioMixerNode:forConnection:]
-[AVCaptureOutput supportsVideoMirroringForConnection:]
-[AVCaptureOutput supportsVideoOrientationForConnection:]
-[AVCaptureOutput supportsVideoFieldModeForConnection:]
-[AVCaptureOutput supportsVideoMinFrameDurationForConnection:]
-[AVCaptureOutput supportsVideoMaxFrameDurationForConnection:]
-[AVCaptureOutput inputPortFormatDescriptionDidChange:]
-[AVCaptureOutput _updateCompressorNodesForConnection:]
-[AVCaptureOutput _updateVideoDecompressorNodeForConnection:]
-[AVCaptureOutput configureAudioSplitter:mixer:converter:forGraph:connection:withSettings:audioFileType:forceConverterToPassThru:setClientSequenceID:]
-[AVCaptureScreenInput init]
-[AVCaptureScreenInput dealloc]
-[AVCaptureScreenInput finalize]
-[AVCaptureScreenInput _getInputUnitProperty:bytes:length:]
_AVCaptureScreenInputGetCaptureWidthAndHeightForScaleFactor
_AVCaptureScreenInputGetH264MacroBlockWidthAndHeightForScaleFactor
-[AVCaptureScreenInput minFrameDuration]
-[AVCaptureScreenInput capturesCursor]
-[AVCaptureScreenInput setCapturesCursor:]
-[AVCaptureScreenInput setScaleFactor:]
-[AVCaptureScreenInput setCaptureTimeScale:]
-[AVCaptureScreenInput removesDuplicateFrames]
-[AVCaptureScreenInput setRemovesDuplicateFrames:]
_graphicsSubsystemErrorStatusPropertyListener
-[AVCaptureScreenInput notReadyError]
-[AVCaptureScreenInput _updateGraphicsSubsystemErrorStatusFromPropertyListener:]
-[AVCaptureScreenInput inputClock]
-[AVCaptureSessionInternalState finalize]
+[AVCaptureSession allAVCaptureSessionPresets]
-[AVCaptureSession encodeWithCoder:]
-[AVCaptureSession initWithCoder:]
-[AVCaptureSession finalize]
-[AVCaptureSession description]
-[AVCaptureSession applicationWillTerminate:]
-[AVCaptureSession canSetSessionPreset:]
-[AVCaptureSession setSessionPreset:]
-[AVCaptureSession canAddInput:]
-[AVCaptureSession addInputWithNoConnections:]
-[AVCaptureSession canAddOutput:]
-[AVCaptureSession addOutputWithNoConnections:]
-[AVCaptureSession addVideoPreviewLayerWithNoConnection:]
-[AVCaptureSession canAddConnection:]
-[AVCaptureSession addConnection:]
-[AVCaptureSession removeConnection:]
-[AVCaptureSession _postRuntimeError:]
___38-[AVCaptureSession _postRuntimeError:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___38-[AVCaptureSession _endSessionUpdates]_block_invoke
___copy_helper_block_324
___destroy_helper_block_325
-[AVCaptureSession _setupMasterClock]
-[AVCaptureSession masterClock]
-[AVCaptureSession _setMasterClock:]
-[AVCaptureSession valueForUndefinedKey:]
+[AVCaptureSession automaticallyNotifiesObserversOfMasterClock]
___32-[AVCaptureSession _setRunning:]_block_invoke
___32-[AVCaptureSession _setRunning:]_block_invoke_2
___copy_helper_block_376
___destroy_helper_block_377
___32-[AVCaptureSession _setRunning:]_block_invoke380
___copy_helper_block_381
___destroy_helper_block_382
___32-[AVCaptureSession _setRunning:]_block_invoke385
___copy_helper_block_386
___destroy_helper_block_387
___copy_helper_block_390
___destroy_helper_block_391
_decompressorLastRenderErrorListener
-[AVCaptureSession audioChannelMapForConnection:size:]
-[AVCaptureSession _buildSupportUnitsForClosedCaptionInputPort:error:]
-[AVCaptureSession _connectGraphUnitsForClosedCaptionConnection:error:]
-[AVCaptureSession _buildSupportUnitsForGenericInputPort:error:]
-[AVCaptureSession _connectGraphUnitsForGenericConnection:error:]
_AVCaptureGetHardwareH264Enabled
-[AVCaptureSession defaultConnectionPropertiesForConnection:]
+[AVCaptureVideoDataOutputCallbackData callbackDataWithOutput:connection:]
-[AVCaptureVideoDataOutputCallbackData initWithOutput:connection:]
-[AVCaptureVideoDataOutputCallbackData dealloc]
-[AVCaptureVideoDataOutputCallbackData finalize]
-[AVCaptureVideoDataOutputCallbackData bufferQueue]
-[AVCaptureVideoDataOutputCallbackData output]
-[AVCaptureVideoDataOutputCallbackData connection]
-[AVCaptureVideoDataOutputInternal init]
-[AVCaptureVideoDataOutputInternal dealloc]
-[AVCaptureVideoDataOutputInternal finalize]
+[AVCaptureVideoDataOutput initialize]
-[AVCaptureVideoDataOutput init]
-[AVCaptureVideoDataOutput dealloc]
-[AVCaptureVideoDataOutput sampleBufferDelegate]
-[AVCaptureVideoDataOutput sampleBufferCallbackQueue]
-[AVCaptureVideoDataOutput setSampleBufferDelegate:queue:]
-[AVCaptureVideoDataOutput availableVideoCVPixelFormatTypes]
-[AVCaptureVideoDataOutput availableVideoCodecTypes]
-[AVCaptureVideoDataOutput avCaptureOutputSettingsForConnection:fileType:]
-[AVCaptureVideoDataOutput videoSettings]
-[AVCaptureVideoDataOutput setVideoSettings:]
-[AVCaptureVideoDataOutput minFrameDuration]
-[AVCaptureVideoDataOutput setMinFrameDuration:]
-[AVCaptureVideoDataOutput alwaysDiscardsLateVideoFrames]
-[AVCaptureVideoDataOutput setAlwaysDiscardsLateVideoFrames:]
-[AVCaptureVideoDataOutput observeValueForKeyPath:ofObject:change:context:]
-[AVCaptureVideoDataOutput connectionMediaTypes]
-[AVCaptureVideoDataOutput canAddConnectionForMediaType:]
-[AVCaptureVideoDataOutput addConnection:error:]
-[AVCaptureVideoDataOutput removeConnection:]
-[AVCaptureVideoDataOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
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
_decompressorLastRenderErrorListener
-[AVCaptureVideoDataOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[AVCaptureVideoDataOutput connectionGraphNodeForConnection:]
-[AVCaptureVideoDataOutput connectionUnitInputNumberForConnection:]
-[AVCaptureVideoDataOutput outputGraphNodeDescriptionForConnection:]
-[AVCaptureVideoDataOutput _updateVideoDecompressorNodeForConnection:]
-[AVCaptureVideoDataOutput _updateVideoFrameRateGovernorNodeForConnection:]
-[AVCaptureVideoDataOutput _updateCompressorNodesForConnection:]
-[AVCaptureVideoDataOutput supportsVideoMirroringForConnection:]
-[AVCaptureVideoDataOutput supportsVideoOrientationForConnection:]
-[AVCaptureVideoDataOutput supportsVideoFieldModeForConnection:]
-[AVCaptureVideoDataOutput supportsVideoMinFrameDurationForConnection:]
-[AVCaptureVideoDataOutput supportsVideoMaxFrameDurationForConnection:]
___ConsumerRender_block_invoke
___copy_helper_block_
___destroy_helper_block_
_AVCaptureVideoDataOutputMakeDataReadyCallback
+[AVCaptureVideoPreviewLayer layerWithSession:]
+[AVCaptureVideoPreviewLayer layerWithSessionWithNoConnection:]
-[AVCaptureVideoPreviewLayer init]
-[AVCaptureVideoPreviewLayer initWithSessionWithNoConnection:]
-[AVCaptureVideoPreviewLayer initWithLayer:]
-[AVCaptureVideoPreviewLayer finalize]
-[AVCaptureVideoPreviewLayer session]
-[AVCaptureVideoPreviewLayer setSessionWithNoConnection:]
-[AVCaptureVideoPreviewLayer subLayer]
-[AVCaptureVideoPreviewLayer videoGravity]
-[AVCaptureVideoPreviewLayer shouldMirrorPreviewForConnection:]
-[AVCaptureVideoPreviewLayer observeValueForKeyPath:ofObject:change:context:]
-[AVCaptureVideoPreviewLayer setPixelBufferAttributes:]
-[AVCaptureVideoPreviewLayer supportsVideoMirroringForConnection:]
-[AVCaptureVideoPreviewLayer supportsVideoOrientationForConnection:]
-[AVCaptureVideoPreviewLayer supportsVideoFieldModeForConnection:]
-[AVCaptureVideoPreviewLayer supportsVideoMinFrameDurationForConnection:]
-[AVCaptureVideoPreviewLayer supportsVideoMaxFrameDurationForConnection:]
_videoPreviewLastRenderErrorListener
-[AVCaptureVideoPreviewLayer removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[AVCaptureVideoPreviewLayer videoDecompressionSettingsForVideoConnection:]
-[AVCaptureVideoPreviewLayer setPaused:forConnection:]
-[AVCaptureVideoPreviewLayer pausePreviewForConnection:]
-[AVCaptureVideoPreviewLayer resumePreviewForConnection:]
-[AVCaptureVideoPreviewLayer didStopForSession:error:]
-[AVCaptureVideoPreviewLayer connectionMediaTypes]
-[AVSampleBufferAudioRenderer _initializeTimebase]
-[AVSampleBufferAudioRenderer _triggerMediaRequestCallback]
-[AVSampleBufferAudioRenderer init]
+[AVSampleBufferAudioRenderer sampleBufferAudioRenderer]
-[AVSampleBufferAudioRenderer dealloc]
-[AVSampleBufferAudioRenderer finalize]
-[AVSampleBufferAudioRenderer _transitionToStatus:error:]
-[AVSampleBufferAudioRenderer _transitionToFailedStatusWithOSStatus:]
-[AVSampleBufferAudioRenderer status]
-[AVSampleBufferAudioRenderer error]
-[AVSampleBufferAudioRenderer setAudioOutputDeviceUniqueID:]
-[AVSampleBufferAudioRenderer audioOutputDeviceUniqueID]
-[AVSampleBufferAudioRenderer setAudioTimePitchAlgorithm:]
-[AVSampleBufferAudioRenderer audioTimePitchAlgorithm]
-[AVSampleBufferAudioRenderer setVolume:]
-[AVSampleBufferAudioRenderer volume]
-[AVSampleBufferAudioRenderer setScheduledAudioParameters:]
-[AVSampleBufferAudioRenderer scheduledAudioParameters]
-[AVSampleBufferAudioRenderer setMuted:]
-[AVSampleBufferAudioRenderer isMuted]
-[AVSampleBufferAudioRenderer timebase]
-[AVSampleBufferAudioRenderer copyFigSampleBufferAudioRenderer:]
-[AVSampleBufferAudioRenderer setRenderSynchronizer:]
-[AVSampleBufferAudioRenderer enqueueSampleBuffer:]
-[AVSampleBufferAudioRenderer flush]
-[AVSampleBufferAudioRenderer isReadyForMoreMediaData]
-[AVSampleBufferAudioRenderer requestMediaDataWhenReadyOnQueue:usingBlock:]
-[AVSampleBufferAudioRenderer stopRequestingMediaData]
_avqsbar_figRendererNowBelowLowWaterLevelNotificationHandler
-[AVResolvedDecompressionSettings description]
-[AVResolvedDecompressionSettings maxFrameDuration]
-[AVResolvedDecompressionSettings videoOrientation]
-[AVResolvedDecompressionSettings isVideoMirrored]
-[AVResolvedDecompressionSettings outputCodecTypes]
-[MediaIOGraphNodeDescription nodeFunctionalDesignation]
-[MediaIOGraphNodeDescription nodeIndex]
+[AVAsset(AVAssetProxy) assetProxyWithPropertyList:]
-[AVAsset(AVAssetProxy) propertyListForProxy]
-[AVAsset(AVAssetProxy) isProxy]
+[AVAssetProxy makePropertyListForMovieProxyHeader:name:]
+[AVAssetProxy assetProxyWithPropertyList:]
-[AVAssetProxy initWithPropertyList:]
-[AVAssetProxy dealloc]
-[AVAssetProxy finalize]
-[AVAssetProxy isProxy]
-[AVAssetProxy _figAsset]
-[AVAssetProxy _formatReader]
-[AVAssetProxy _playbackItem]
-[AVAssetProxy _assetInspectorLoader]
-[AVAssetProxy _assetInspector]
-[AVAssetProxy _classForTrackInspectors]
-[AVAssetProxy tracks]
___22-[AVAssetProxy tracks]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MediaIOGraphNodeList finalize]
-[MediaIOGraphNodeList nodeListByAppendingNodes:count:]
+[AVCaptureStillImageRequest request]
-[AVCaptureStillImageRequest dealloc]
-[AVCaptureStillImageRequest completionBlock]
-[AVCaptureStillImageRequest setCompletionBlock:]
-[AVCaptureStillImageRequest outputSettings]
-[AVCaptureStillImageRequest setOutputSettings:]
-[AVCaptureStillImageRequest imageOrientation]
-[AVCaptureStillImageRequest setImageOrientation:]
-[AVCaptureStillImageRequest imageMirrored]
-[AVCaptureStillImageRequest setImageMirrored:]
-[AVCaptureStillImageOutputInternal init]
-[AVCaptureStillImageOutputInternal dealloc]
+[AVCaptureStillImageOutput initialize]
-[AVCaptureStillImageOutput init]
-[AVCaptureStillImageOutput dealloc]
-[AVCaptureStillImageOutput _deviceFromActiveDeviceInput]
-[AVCaptureStillImageOutput _videoDecompressionSettings]
-[AVCaptureStillImageOutput videoDecompressionSettingsForVideoConnection:]
-[AVCaptureStillImageOutput _updateVideoDecompressorNodeForConnection:]
-[AVCaptureStillImageOutput _updateHighResMode]
-[AVCaptureStillImageOutput outputSettings]
-[AVCaptureStillImageOutput setOutputSettings:]
-[AVCaptureStillImageOutput availableImageDataCVPixelFormatTypes]
-[AVCaptureStillImageOutput availableImageDataCodecTypes]
-[AVCaptureStillImageOutput connectionMediaTypes]
-[AVCaptureStillImageOutput canAddConnectionForMediaType:]
-[AVCaptureStillImageOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:]
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
_DecompressorLastRenderErrorListener
-[AVCaptureStillImageOutput removeOutputUnitsForConnection:fromGraph:ofCaptureSession:]
-[AVCaptureStillImageOutput connectionGraphNodeForConnection:]
-[AVCaptureStillImageOutput connectionUnitInputNumberForConnection:]
-[AVCaptureStillImageOutput videoDecompressionRequirementForConnection:]
-[AVCaptureStillImageOutput isCapturingStillImage]
-[AVCaptureStillImageOutput configureAndInitiateCopyStillImageForRequest:]
-[AVCaptureStillImageOutput captureStillImageAsynchronouslyFromConnection:completionHandler:]
-[AVCaptureStillImageOutput _receiveSampleBuffer:]
-[AVCaptureStillImageOutput _handleSampleBuffer:imageRequest:error:]
+[AVCaptureStillImageOutput jpegStillImageNSDataRepresentation:]
-[AVCaptureStillImageOutput supportsVideoMirroringForConnection:]
-[AVCaptureStillImageOutput supportsVideoOrientationForConnection:]
-[AVCaptureStillImageOutput supportsVideoFieldModeForConnection:]
-[AVCaptureStillImageOutput defaultVideoFieldModeForConnection:]
-[AVCaptureStillImageOutput supportsVideoMinFrameDurationForConnection:]
-[AVCaptureStillImageOutput supportsVideoMaxFrameDurationForConnection:]
-[AVPlayerItemAccessLog init]
-[AVPlayerItemAccessLog initWithLogArray:]
-[AVPlayerItemAccessLog description]
-[AVPlayerItemAccessLog copyWithZone:]
-[AVPlayerItemAccessLog finalize]
-[AVPlayerItemAccessLog dealloc]
-[AVPlayerItemAccessLog extendedLogData]
-[AVPlayerItemAccessLog extendedLogDataStringEncoding]
-[AVPlayerItemAccessLog events]
-[AVPlayerItemAccessLogEvent init]
-[AVPlayerItemAccessLogEvent initWithDictionary:]
-[AVPlayerItemAccessLogEvent copyWithZone:]
-[AVPlayerItemAccessLogEvent finalize]
-[AVPlayerItemAccessLogEvent dealloc]
-[AVPlayerItemAccessLogEvent numberOfMediaRequests]
-[AVPlayerItemAccessLogEvent numberOfSegmentsDownloaded]
-[AVPlayerItemAccessLogEvent playbackStartDate]
-[AVPlayerItemAccessLogEvent URI]
-[AVPlayerItemAccessLogEvent serverAddress]
-[AVPlayerItemAccessLogEvent numberOfServerAddressChanges]
-[AVPlayerItemAccessLogEvent playbackSessionID]
-[AVPlayerItemAccessLogEvent playbackStartOffset]
-[AVPlayerItemAccessLogEvent segmentsDownloadedDuration]
-[AVPlayerItemAccessLogEvent durationWatched]
-[AVPlayerItemAccessLogEvent numberOfStalls]
-[AVPlayerItemAccessLogEvent numberOfBytesTransferred]
-[AVPlayerItemAccessLogEvent transferDuration]
-[AVPlayerItemAccessLogEvent observedBitrate]
-[AVPlayerItemAccessLogEvent currentObservedBitrate]
-[AVPlayerItemAccessLogEvent indicatedBitrate]
-[AVPlayerItemAccessLogEvent numberOfDroppedVideoFrames]
-[AVPlayerItemAccessLogEvent startupTime]
-[AVPlayerItemAccessLogEvent downloadOverdue]
-[AVPlayerItemAccessLogEvent entryReasonCode]
-[AVPlayerItemAccessLogEvent observedMaxBitrate]
-[AVPlayerItemAccessLogEvent observedMinBitrate]
-[AVPlayerItemAccessLogEvent observedBitrateStandardDeviation]
-[AVPlayerItemAccessLogEvent playbackType]
-[AVPlayerItemAccessLogEvent mediaRequestsWWAN]
-[AVPlayerItemAccessLogEvent switchBitrate]
-[AVPlayerItemAccessLogEvent(AVPlayerItemAccessLogEventServiceIdentifier_Private) serviceIdentifier]
-[AVPlayerItemErrorLog init]
-[AVPlayerItemErrorLog initWithLogArray:]
-[AVPlayerItemErrorLog description]
-[AVPlayerItemErrorLog copyWithZone:]
-[AVPlayerItemErrorLog finalize]
-[AVPlayerItemErrorLog dealloc]
-[AVPlayerItemErrorLog extendedLogData]
-[AVPlayerItemErrorLog extendedLogDataStringEncoding]
-[AVPlayerItemErrorLog events]
-[AVPlayerItemErrorLogEvent init]
-[AVPlayerItemErrorLogEvent initWithDictionary:]
-[AVPlayerItemErrorLogEvent copyWithZone:]
-[AVPlayerItemErrorLogEvent finalize]
-[AVPlayerItemErrorLogEvent dealloc]
-[AVPlayerItemErrorLogEvent date]
-[AVPlayerItemErrorLogEvent URI]
-[AVPlayerItemErrorLogEvent serverAddress]
-[AVPlayerItemErrorLogEvent playbackSessionID]
-[AVPlayerItemErrorLogEvent errorStatusCode]
-[AVPlayerItemErrorLogEvent errorDomain]
-[AVPlayerItemErrorLogEvent errorComment]
-[AVCaptureStillImageTransform setSourceBuffer:]
-[AVCaptureStillImageTransform sourceBuffer]
-[AVCaptureStillImageTransform setResultBuffer:]
-[AVCaptureStillImageTransform resultBuffer]
+[AVCaptureStillImageTransform transform]
-[AVCaptureStillImageTransform dealloc]
-[AVCaptureStillImageTransform finalize]
-[AVCaptureStillImageTransform status]
-[AVCaptureStillImageTransform setStatus:]
+[AVCaptureStillImageOutputUtils initialize]
-[AVCaptureStillImageOutputUtils init]
-[AVCaptureStillImageOutputUtils clean]
-[AVCaptureStillImageOutputUtils dealloc]
-[AVCaptureStillImageOutputUtils finalize]
-[AVCaptureStillImageOutputUtils isImageMirrored]
-[AVCaptureStillImageOutputUtils setImageMirrored:]
-[AVCaptureStillImageOutputUtils imageOrientation]
-[AVCaptureStillImageOutputUtils setImageOrientation:]
-[AVCaptureStillImageOutputUtils outputSettings]
-[AVCaptureStillImageOutputUtils setOutputSettings:]
-[AVCaptureStillImageOutputUtils rotationTransform:]
_CreateCVImageBufferFromCMSampleBuffer
-[AVCaptureStillImageOutputUtils transferTransform:]
-[AVCaptureStillImageOutputUtils encodeTransform:]
_VTCompressionOutputFct
-[AVCaptureStillImageOutputUtils transform:forceClean:error:]
-[AVCaptureStillImageOutputUtils transformWithSettings:orientation:mirrored:sample:forceClean:error:]
_ReleaseCMBlockBuffer
-[AVFrameRateRange description]
-[AVFrameRateRange isEqual:]
+[AVFrameRateRange frameRateRangeWithMinRate:maxRate:maxDuration:minDuration:]
-[AVFrameRateRange frameRateForFrameDuration:]
-[AVFrameRateRange minFrameRate]
-[AVFrameRateRange maxFrameRate]
-[AVFrameRateRange maxFrameDuration]
-[AVFrameRateRange minFrameDuration]
_AVVerifyBundleCodeSignature
___AVVerifyBundleCodeSignature_block_invoke
___AVVerifyBundleCodeSignature_block_invoke_2
___AVVerifyBundleCodeSignature_block_invoke_3
___copy_helper_block_
___destroy_helper_block_
___AVVerifyBundleCodeSignature_block_invoke7
___copy_helper_block_8
___destroy_helper_block_9
___AVVerifyBundleCodeSignature_block_invoke12
___destroy_helper_block_14
___copy_helper_block_17
___destroy_helper_block_18
+[AVMediaSelectionGroup mediaSelectionGroupWithAsset:dictionary:]
-[AVMediaSelectionGroup init]
-[AVMediaSelectionGroup _weakReference]
-[AVMediaSelectionGroup dealloc]
-[AVMediaSelectionGroup finalize]
-[AVMediaSelectionGroup copyWithZone:]
-[AVMediaSelectionGroup description]
-[AVMediaSelectionGroup asset]
-[AVMediaSelectionGroup options]
-[AVMediaSelectionGroup allowsEmptySelection]
-[AVMediaSelectionGroup dictionary]
-[AVMediaSelectionGroup _groupID]
-[AVMediaSelectionGroup _groupMediaType]
-[AVMediaSelectionGroup _matchesGroupID:mediaType:]
-[AVMediaSelectionGroup _isStreamingGroup]
-[AVMediaSelectionGroup defaultOption]
-[AVMediaSelectionGroup _optionWithID:displaysNonForcedSubtitles:]
-[AVMediaSelectionGroup mediaSelectionOptionWithPropertyList:]
+[AVMediaSelectionGroup playableMediaSelectionOptionsFromArray:]
___64+[AVMediaSelectionGroup playableMediaSelectionOptionsFromArray:]_block_invoke
+[AVMediaSelectionGroup mediaSelectionOptionsFromArray:withLocale:]
___67+[AVMediaSelectionGroup mediaSelectionOptionsFromArray:withLocale:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[AVMediaSelectionGroup mediaSelectionOptionsFromArray:filteredAndSortedAccordingToPreferredLanguages:]
___103+[AVMediaSelectionGroup mediaSelectionOptionsFromArray:filteredAndSortedAccordingToPreferredLanguages:]_block_invoke
___copy_helper_block_86
___destroy_helper_block_87
___103+[AVMediaSelectionGroup mediaSelectionOptionsFromArray:filteredAndSortedAccordingToPreferredLanguages:]_block_invoke90
___copy_helper_block_97
___destroy_helper_block_98
+[AVMediaSelectionGroup mediaSelectionOptionsFromArray:withMediaCharacteristics:]
___81+[AVMediaSelectionGroup mediaSelectionOptionsFromArray:withMediaCharacteristics:]_block_invoke
___copy_helper_block_108
___destroy_helper_block_109
+[AVMediaSelectionGroup mediaSelectionOptionsFromArray:withoutMediaCharacteristics:]
___84+[AVMediaSelectionGroup mediaSelectionOptionsFromArray:withoutMediaCharacteristics:]_block_invoke
___copy_helper_block_112
___destroy_helper_block_113
-[AVAssetMediaSelectionGroup init]
-[AVAssetMediaSelectionGroup initWithAsset:dictionary:]
-[AVAssetMediaSelectionGroup dealloc]
-[AVAssetMediaSelectionGroup isEqual:]
-[AVAssetMediaSelectionGroup hash]
-[AVAssetMediaSelectionGroup options]
-[AVAssetMediaSelectionGroup asset]
-[AVAssetMediaSelectionGroup dictionary]
-[AVAssetMediaSelectionGroup _isStreamingGroup]
-[AVAssetMediaSelectionGroup defaultOption]
-[AVAssetMediaSelectionGroup _optionWithID:identifier:source:displaysNonForcedSubtitles:]
-[AVAssetMediaSelectionGroup _optionWithID:displaysNonForcedSubtitles:]
-[AVAssetMediaSelectionGroup mediaSelectionOptionWithPropertyList:]
+[AVMediaSelectionOption mediaSelectionOptionForAsset:group:dictionary:hasUnderlyingTrack:]
-[AVMediaSelectionOption init]
-[AVMediaSelectionOption dealloc]
-[AVMediaSelectionOption copyWithZone:]
-[AVMediaSelectionOption description]
-[AVMediaSelectionOption _ancillaryDescription]
-[AVMediaSelectionOption dictionary]
-[AVMediaSelectionOption optionID]
-[AVMediaSelectionOption group]
-[AVMediaSelectionOption _groupID]
-[AVMediaSelectionOption _groupMediaType]
-[AVMediaSelectionOption mediaType]
-[AVMediaSelectionOption mediaSubTypes]
-[AVMediaSelectionOption hasMediaCharacteristic:]
-[AVMediaSelectionOption isPlayable]
-[AVMediaSelectionOption _isDesignatedDefault]
-[AVMediaSelectionOption locale]
-[AVMediaSelectionOption extendedLanguageTag]
-[AVMediaSelectionOption associatedExtendedLanguageTag]
-[AVMediaSelectionOption associatedPersistentIDs]
-[AVMediaSelectionOption displaysNonForcedSubtitles]
-[AVMediaSelectionOption commonMetadata]
-[AVMediaSelectionOption _title]
-[AVMediaSelectionOption availableMetadataFormats]
-[AVMediaSelectionOption metadataForFormat:]
-[AVMediaSelectionOption associatedMediaSelectionOptionInMediaSelectionGroup:]
-[AVMediaSelectionOption propertyList]
-[AVMediaSelectionOption _preferredMetadataTitleAccordingToPreferredLanguages:fallingBackToMatchingEmptyLocale:]
-[AVMediaSelectionOption displayNameWithLocale:fallingBackToMatchingUndeterminedAndMultilingual:]
-[AVMediaSelectionOption displayNameWithLocale:]
-[AVMediaSelectionOption displayName]
-[AVMediaSelectionOption outOfBandSource]
-[AVMediaSelectionOption outOfBandIdentifier]
-[AVMediaSelectionOption track]
-[AVMediaSelectionOption trackID]
-[AVMediaSelectionTrackOption initWithAsset:group:dictionary:]
-[AVMediaSelectionTrackOption dealloc]
-[AVMediaSelectionTrackOption isEqual:]
-[AVMediaSelectionTrackOption hash]
-[AVMediaSelectionTrackOption dictionary]
-[AVMediaSelectionTrackOption group]
-[AVMediaSelectionTrackOption _groupID]
-[AVMediaSelectionTrackOption displaysNonForcedSubtitles]
-[AVMediaSelectionTrackOption mediaType]
-[AVMediaSelectionTrackOption mediaSubTypes]
-[AVMediaSelectionTrackOption hasMediaCharacteristic:]
-[AVMediaSelectionTrackOption isPlayable]
-[AVMediaSelectionTrackOption locale]
-[AVMediaSelectionTrackOption commonMetadata]
-[AVMediaSelectionTrackOption availableMetadataFormats]
-[AVMediaSelectionTrackOption metadataForFormat:]
-[AVMediaSelectionTrackOption associatedMediaSelectionOptionInMediaSelectionGroup:]
-[AVMediaSelectionTrackOption track]
-[AVMediaSelectionTrackOption trackID]
-[AVMediaSelectionKeyValueOption initWithAsset:group:dictionary:]
-[AVMediaSelectionKeyValueOption dealloc]
-[AVMediaSelectionKeyValueOption isEqual:]
-[AVMediaSelectionKeyValueOption hash]
-[AVMediaSelectionKeyValueOption dictionary]
-[AVMediaSelectionKeyValueOption group]
-[AVMediaSelectionKeyValueOption _groupID]
-[AVMediaSelectionKeyValueOption _groupMediaType]
-[AVMediaSelectionKeyValueOption mediaType]
-[AVMediaSelectionKeyValueOption mediaSubTypes]
-[AVMediaSelectionKeyValueOption hasMediaCharacteristic:]
-[AVMediaSelectionKeyValueOption isPlayable]
-[AVMediaSelectionKeyValueOption locale]
-[AVMediaSelectionKeyValueOption commonMetadata]
-[AVMediaSelectionKeyValueOption availableMetadataFormats]
-[AVMediaSelectionKeyValueOption metadataForFormat:]
+[AVFigObjectInspector initialize]
-[AVFigObjectInspector _valueAsCFTypeForProperty:]
-[AVFigObjectInspector _timeForProperty:defaultValue:]
-[AVFigObjectInspector _timeForProperty:]
-[AVFigObjectInspector _timeRangeForProperty:]
-[AVFigObjectInspector _floatForProperty:defaultValue:]
-[AVFigObjectInspector _floatForProperty:]
-[AVFigObjectInspector _SInt16ForProperty:]
-[AVFigObjectInspector _SInt32ForProperty:]
-[AVFigObjectInspector _longLongForProperty:]
-[AVFigObjectInspector _booleanForProperty:]
-[AVFigObjectInspector _sizeForProperty:defaultValue:]
-[AVFigObjectInspector _sizeForProperty:]
-[AVFigObjectInspector _affineTransformForProperty:]
-[AVFigObjectInspector _tollFreeBridgedObjectForProperty:]
-[AVFigObjectInspector _stringForProperty:]
-[AVFigObjectInspector _arrayForProperty:]
-[AVFigObjectInspector _nonNilArrayForProperty:]
-[AVFigObjectInspector _dictionaryForProperty:]
-[AVFigObjectInspector _nonNilDictionaryForProperty:]
-[AVFigObjectInspector _dataForProperty:]
_copyBestAudioChannelLayoutFromFormatDescription
_cmMediaTypeFromMediaType
_mediaTypeFromCMMediaType
_AVVideoOutputSettingsVTPASPDictionaryForAVPASPDictionary
_AVVideoOutputSettingsVTCLAPDictionaryForAVCLAPDictionary
+[AVOutputSettings validateOutputSettingsDictionary:]
+[AVOutputSettings defaultOutputSettingsForMediaType:]
-[AVOutputSettings init]
-[AVOutputSettings copyWithZone:]
-[AVOutputSettings description]
-[AVOutputSettings compatibleMediaTypes]
-[AVOutputSettings willYieldCompressedSamples]
-[AVOutputSettings canFullySpecifyOutputFormatReturningReason:]
-[AVOutputSettings validateUsingOutputSettingsValidator:reason:]
-[AVOutputSettings encoderIsAvailableOnCurrentSystemReturningError:]
-[AVFormatSpecification initWithOutputSettings:sourceFormatDescription:]
+[AVFormatSpecification formatSpecificationWithOutputSettings:sourceFormatDescription:]
-[AVFormatSpecification dealloc]
-[AVFormatSpecification outputSettings]
-[AVFormatSpecification sourceFormatDescription]
+[AVSampleBufferGenerator initialize]
-[AVSampleBufferGenerator initWithAsset:timebase:]
-[AVSampleBufferGenerator init]
-[AVSampleBufferGenerator dealloc]
-[AVSampleBufferGenerator finalize]
-[AVSampleBufferGenerator copyWithZone:]
-[AVSampleBufferGenerator createSampleBufferForRequest:]
_AVSampleBufferGenerator_remapSampleBufferTiming
+[AVSampleBufferGenerator notifyOfDataReadyForSampleBuffer:completionHandler:]
___78+[AVSampleBufferGenerator notifyOfDataReadyForSampleBuffer:completionHandler:]_block_invoke
___Block_byref_object_copy_
___Block_byref_object_dispose_
___78+[AVSampleBufferGenerator notifyOfDataReadyForSampleBuffer:completionHandler:]_block_invoke54
___copy_helper_block_
___destroy_helper_block_
_AVSampleBufferGenerator_dataBecameReady
_AVSampleBufferGenerator_dataFailed
___78+[AVSampleBufferGenerator notifyOfDataReadyForSampleBuffer:completionHandler:]_block_invoke57
___copy_helper_block_58
___destroy_helper_block_59
___78+[AVSampleBufferGenerator notifyOfDataReadyForSampleBuffer:completionHandler:]_block_invoke62
___copy_helper_block_63
___destroy_helper_block_64
+[AVSampleBufferRequest sampleBufferRequestWithStartCursor:]
-[AVSampleBufferRequest initWithStartCursor:]
-[AVSampleBufferRequest init]
-[AVSampleBufferRequest dealloc]
-[AVSampleBufferRequest finalize]
-[AVSampleBufferRequest startCursor]
-[AVSampleBufferRequest direction]
-[AVSampleBufferRequest setDirection:]
-[AVSampleBufferRequest limitCursor]
-[AVSampleBufferRequest setLimitCursor:]
-[AVSampleBufferRequest preferredMinSampleCount]
-[AVSampleBufferRequest setPreferredMinSampleCount:]
-[AVSampleBufferRequest maxSampleCount]
-[AVSampleBufferRequest setMaxSampleCount:]
-[AVSampleBufferRequest mode]
-[AVSampleBufferRequest setMode:]
-[AVSampleBufferRequest overrideTime]
-[AVSampleBufferRequest setOverrideTime:]
___AVSampleBufferGenerator_dataFailed_block_invoke
___copy_helper_block_121
___destroy_helper_block_122
___AVSampleBufferGenerator_dataBecameReady_block_invoke
___copy_helper_block_125
___destroy_helper_block_126
+[AVWeakReferencingDelegateStorage initialize]
-[AVWeakReferencingDelegateStorage init]
-[AVWeakReferencingDelegateStorage _collectUncollectables]
-[AVWeakReferencingDelegateStorage dealloc]
-[AVWeakReferencingDelegateStorage finalize]
-[AVWeakReferencingDelegateStorage delegate]
-[AVWeakReferencingDelegateStorage delegateQueue]
-[AVWeakReferencingDelegateStorage _delegate]
-[AVWeakReferencingDelegateStorage _setDelegate:]
-[AVWeakReferencingDelegateStorage getRetainedDelegate:retainedDelegateQueue:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___78-[AVWeakReferencingDelegateStorage getRetainedDelegate:retainedDelegateQueue:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVWeakReferencingDelegateStorage setDelegate:queue:]
___54-[AVWeakReferencingDelegateStorage setDelegate:queue:]_block_invoke
___copy_helper_block_40
___destroy_helper_block_41
-[AVWeakReferencingDelegateStorage invokeDelegateCallbackWithBlock:]
_AVPerformDelegateCallbackSynchronouslyForDelegateStorageIfCurrentDelegateQueueIsQueueElseDispatchToCurrentDelegateQueue
___AVPerformDelegateCallbackSynchronouslyForDelegateStorageIfCurrentDelegateQueueIsQueueElseDispatchToCurrentDelegateQueue_block_invoke
___copy_helper_block_103
___destroy_helper_block_104
+[AVMediaFileType mediaFileTypeWithFileTypeIdentifier:]
+[AVMediaFileType _mediaFileTypeWithFileTypeIdentifier:exceptionReason:]
-[AVMediaFileType dealloc]
-[AVMediaFileType description]
-[AVMediaFileType defaultFileExtension]
-[AVMediaFileType supportedMediaTypes]
-[AVMediaFileType supportsSampleReferences]
___43-[AVMediaFileType supportsSampleReferences]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVMediaFileType figFormatReaderFileFormat]
-[AVMediaFileType supportsFormat:]
+[AVMediaFileType isoFileTypes]
-[AVMediaFileOutputSettingsValidator init]
-[AVMediaFileOutputSettingsValidator validateVideoOutputSettings:reason:]
-[AVWAVEOutputSettingsValidator initWithFileType:]
-[AVWAVEOutputSettingsValidator validateAudioOutputSettings:reason:]
-[AVAIFFOutputSettingsValidator initWithFileType:]
-[AVAIFFOutputSettingsValidator validateAudioOutputSettings:reason:]
-[AVISOOutputSettingsValidator validateAudioOutputSettings:reason:]
-[AVISOOutputSettingsValidator validateVideoOutputSettings:reason:]
_audioChannelLayoutChannelCount
+[AVAudioOutputSettings audioOutputSettingsWithTrustedAudioSettingsDictionary:]
+[AVAudioOutputSettings defaultAudioOutputSettings]
_AVAudioOutputSettingsCoreAudioSampleRateConverterComplexityForSampleRateConverterAlgorithm
-[AVAudioOutputSettings compatibleMediaTypes]
_encoderExistsForFormat
-[AVAVAudioSettingsAudioOutputSettings initWithTrustedAVAudioSettingsDictionary:]
-[AVAVAudioSettingsAudioOutputSettings encoderIsAvailableOnCurrentSystemReturningError:]
-[AVAVAudioSettingsAudioOutputSettings canFullySpecifyOutputFormatReturningReason:]
_copyDefaultChannelLayoutForChannelCount
-[AVAVAudioSettingsAudioOutputSettings audioOptions]
+[AVVideoOutputSettings videoOutputSettingsWithTrustedVideoSettingsDictionary:]
+[AVVideoOutputSettings defaultVideoOutputSettings]
-[AVVideoOutputSettings compatibleMediaTypes]
-[AVVideoOutputSettings width]
-[AVVideoOutputSettings height]
-[AVVideoOutputSettings pixelAspectRatioDictionary]
-[AVVideoOutputSettings cleanApertureDictionary]
-[AVVideoOutputSettings videoScalingProperties]
-[AVVideoOutputSettings pixelTransferProperties]
-[AVVideoOutputSettings videoCompositionProcessorProperties]
-[AVVideoOutputSettings dimensionsAreBoundingBox]
-[AVVideoOutputSettings validateUsingOutputSettingsValidator:reason:]
_AVVideoOutputSettingsValidateAVPixelAspectRatioDictionaryAndReturnVTPixelAspectRatioDictionary
_AVVideoOutputSettingsValidateAVCleanApertureDictionaryAndReturnVTCleanApertureDictionary
_AVVideoOutputSettingsValidateVideoColorProperties
-[AVPixelBufferAttributesVideoOutputSettings initWithTrustedPixelBufferAttributes:]
-[AVPixelBufferAttributesVideoOutputSettings dealloc]
-[AVPixelBufferAttributesVideoOutputSettings width]
-[AVPixelBufferAttributesVideoOutputSettings height]
-[AVPixelBufferAttributesVideoOutputSettings pixelAspectRatioDictionary]
-[AVPixelBufferAttributesVideoOutputSettings cleanApertureDictionary]
-[AVPixelBufferAttributesVideoOutputSettings encoderIsAvailableOnCurrentSystemReturningError:]
-[AVPixelBufferAttributesVideoOutputSettings canFullySpecifyOutputFormatReturningReason:]
+[AVAVVideoSettingsVideoOutputSettings _validateVideoCompressionProperties:againstSupportedPropertyDictionary:forCodecType:exceptionReason:]
_AVVideoOutputSettingsExtractPixelAspectRatioAndCleanApertureFromAVVideoSettingsDictionary
-[AVAVVideoSettingsVideoOutputSettings initWithTrustedAVVideoSettingsDictionary:]
-[AVAVVideoSettingsVideoOutputSettings willYieldCompressedSamples]
-[AVAVVideoSettingsVideoOutputSettings encoderIsAvailableOnCurrentSystemReturningError:]
-[AVAVVideoSettingsVideoOutputSettings canFullySpecifyOutputFormatReturningReason:]
-[AVAVVideoSettingsVideoOutputSettings pixelAspectRatioDictionary]
-[AVAVVideoSettingsVideoOutputSettings cleanApertureDictionary]
-[AVAVVideoSettingsVideoOutputSettings videoEncoderSpecification]
_AVVideoOutputSettingsDummyEncodedFrameCallback
_AVVideoOutputSettingsValidateVTPixelAspectRatioDictionary
_AVVideoOutputSettingsValidateAndExtractValuesFromVTCleanApertureDictionary
_AVVideoOutputSettingsValidPixelBufferAttributesKeys
-[AVAudioSettingsValueConstrainer init]
-[AVAudioSettingsValueConstrainer dealloc]
-[AVAudioSettingsValueConstrainer finalize]
-[AVAudioSettingsValueConstrainer _buildAudioConverter]
-[AVAudioSettingsValueConstrainer _buildAvailableSampleRates]
_audioValueRangeArrayWithAudioValueRanges
-[AVAudioSettingsValueConstrainer _buildApplicableDataRatesForSampleRates]
-[AVAudioSettingsValueConstrainer _fetchApplicableOutputDataRates]
-[AVAudioSettingsValueConstrainer _bringUpToDate]
-[AVAudioSettingsValueConstrainer setInputPropertiesFromASBD:]
-[AVAudioSettingsValueConstrainer outputSampleRate]
-[AVAudioSettingsValueConstrainer setOutputSampleRate:]
-[AVAudioSettingsValueConstrainer outputFormat]
-[AVAudioSettingsValueConstrainer setOutputFormat:]
-[AVAudioSettingsValueConstrainer outputFormatFlags]
-[AVAudioSettingsValueConstrainer setOutputFormatFlags:]
-[AVAudioSettingsValueConstrainer outputBitsPerChannel]
-[AVAudioSettingsValueConstrainer setOutputBitsPerChannel:]
-[AVAudioSettingsValueConstrainer outputChannelCount]
-[AVAudioSettingsValueConstrainer setOutputChannelCount:]
-[AVAudioSettingsValueConstrainer outputDataRate]
-[AVAudioSettingsValueConstrainer setOutputDataRate:]
-[AVAudioSettingsValueConstrainer applicableOutputSampleRateForDesiredSampleRate:rounding:]
_indexOfValueInAudioValueRangeArray
_normalizeValueToAudioValueRangeArray
-[AVAudioSettingsValueConstrainer availableOutputChannelCountForDesiredChannelCount:rounding:]
-[AVAudioSettingsValueConstrainer _getAvailableOutputSampleRateFor:rounding:]
-[AVFloat64Range initWithMinimum:maximum:]
-[AVFloat64Range initWithAudioValueRange:]
+[AVFloat64Range float64RangeWithMinimum:maximum:]
+[AVFloat64Range float64RangeWithAudioValueRange:]
-[AVFloat64Range isEqual:]
-[AVFloat64Range hash]
-[AVFloat64Range description]
-[AVFloat64Range copyWithZone:]
-[AVFloat64Range minimum]
-[AVFloat64Range maximum]
-[AVAssetDownloadSession init]
-[AVAssetDownloadSession initWithURL:destinationURL:options:]
-[AVAssetDownloadSession initWithDownloadToken:]
-[AVAssetDownloadSession dealloc]
-[AVAssetDownloadSession finalize]
+[AVAssetDownloadSession assetDownloadSessionWithURL:destinationURL:options:]
+[AVAssetDownloadSession assetDownloadSessionWithDownloadToken:]
-[AVAssetDownloadSession start]
___31-[AVAssetDownloadSession start]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVAssetDownloadSession pause]
___31-[AVAssetDownloadSession pause]_block_invoke
___copy_helper_block_133
___destroy_helper_block_134
-[AVAssetDownloadSession stop]
___30-[AVAssetDownloadSession stop]_block_invoke
___copy_helper_block_137
___destroy_helper_block_138
-[AVAssetDownloadSession status]
___32-[AVAssetDownloadSession status]_block_invoke
___copy_helper_block_141
___destroy_helper_block_142
-[AVAssetDownloadSession error]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___31-[AVAssetDownloadSession error]_block_invoke
___copy_helper_block_147
___destroy_helper_block_148
-[AVAssetDownloadSession URL]
-[AVAssetDownloadSession destinationURL]
-[AVAssetDownloadSession priority]
-[AVAssetDownloadSession fileSize]
-[AVAssetDownloadSession availableFileSize]
-[AVAssetDownloadSession downloadToken]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _weakReference]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _figAsset]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _setFigAsset:]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _playbackItem]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _transitionToTerminalStatus:error:]
___90-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _transitionToTerminalStatus:error:]_block_invoke
___copy_helper_block_185
___destroy_helper_block_186
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _errorForFigNotificationPayload:key:]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _primeCacheOnDispatchQueue]
___82-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _primeCacheOnDispatchQueue]_block_invoke
___copy_helper_block_197
___destroy_helper_block_198
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _primeCache]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _readyForInspection]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _figAssetNotificationNames]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _addFigAssetListeners]
_avAssetDownloadSession_figAssetNotificationCallback
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _removeFigAssetListeners]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _figPlaybackItemNotificationNames]
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _addFigPlaybackItemListeners]
_avAssetDownloadSession_figPlaybackItemNotificationCallback
-[AVAssetDownloadSession(AVAssetDownloadSession_Local) _removeFigPlaybackItemListeners]
-[AVPlayerItemOutput init]
-[AVPlayerItemOutput dealloc]
-[AVPlayerItemOutput finalize]
-[AVPlayerItemOutput _itemTimeForHostTimeAsCMTime:]
-[AVPlayerItemOutput itemTimeForHostTime:]
-[AVPlayerItemOutput itemTimeForMachAbsoluteTime:]
-[AVPlayerItemOutput itemTimeForCVTimeStamp:]
-[AVPlayerItemOutput setSuppressesPlayerRendering:]
-[AVPlayerItemOutput suppressesPlayerRendering]
-[AVPlayerItemOutput _weakReference]
-[AVPlayerItemOutput _attachToPlayerItem:]
-[AVPlayerItemOutput _detachFromPlayerItem]
-[AVPlayerItemOutput _copyTimebase]
___35-[AVPlayerItemOutput _copyTimebase]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVPlayerItemOutput _setTimebase:]
___35-[AVPlayerItemOutput _setTimebase:]_block_invoke
___copy_helper_block_36
___destroy_helper_block_37
-[AVPlayerItemVideoOutput init]
-[AVPlayerItemVideoOutput initWithPixelBufferAttributes:]
_AVPlayerItemVideoOutput_figVCSequentialAvailable
___57-[AVPlayerItemVideoOutput initWithPixelBufferAttributes:]_block_invoke
___copy_helper_block_102
___destroy_helper_block_103
-[AVPlayerItemVideoOutput finalize]
-[AVPlayerItemVideoOutput dealloc]
-[AVPlayerItemVideoOutput _pixelBufferAttributes]
-[AVPlayerItemVideoOutput _attachToPlayerItem:]
___47-[AVPlayerItemVideoOutput _attachToPlayerItem:]_block_invoke
___copy_helper_block_108
___destroy_helper_block_109
-[AVPlayerItemVideoOutput _detachFromPlayerItem]
___48-[AVPlayerItemVideoOutput _detachFromPlayerItem]_block_invoke
___copy_helper_block_112
___destroy_helper_block_113
-[AVPlayerItemVideoOutput setDelegate:queue:]
___45-[AVPlayerItemVideoOutput setDelegate:queue:]_block_invoke
___copy_helper_block_116
___destroy_helper_block_117
-[AVPlayerItemVideoOutput delegate]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___35-[AVPlayerItemVideoOutput delegate]_block_invoke
___copy_helper_block_120
___destroy_helper_block_121
-[AVPlayerItemVideoOutput delegateQueue]
___40-[AVPlayerItemVideoOutput delegateQueue]_block_invoke
___copy_helper_block_124
___destroy_helper_block_125
-[AVPlayerItemVideoOutput requestNotificationOfMediaDataChangeWithAdvanceInterval:]
___83-[AVPlayerItemVideoOutput requestNotificationOfMediaDataChangeWithAdvanceInterval:]_block_invoke
_AVPlayerItemVideoOutputConvertImageTimeToDispatchTimeWithInterval
___copy_helper_block_130
___destroy_helper_block_131
-[AVPlayerItemVideoOutput hasNewPixelBufferForItemTime:]
-[AVPlayerItemVideoOutput copyPixelBufferForItemTime:itemTimeForDisplay:]
-[AVPlayerItemVideoOutput setSuppressesPlayerRendering:]
___56-[AVPlayerItemVideoOutput setSuppressesPlayerRendering:]_block_invoke
___copy_helper_block_153
___destroy_helper_block_154
-[AVPlayerItemVideoOutput suppressesPlayerRendering]
___52-[AVPlayerItemVideoOutput suppressesPlayerRendering]_block_invoke
___copy_helper_block_159
___destroy_helper_block_160
-[AVPlayerItemVideoOutput _setTagBuffersWithConversionInformation]
-[AVPlayerItemVideoOutput _visualContext]
-[AVPlayerItemVideoOutput _stopObservingTimebaseNotificationsForTimebase:]
_AVPlayerItemVideoOutput_timebaseNotificationCallback
-[AVPlayerItemVideoOutput _startObservingTimebaseNotificationsForTimebase:]
-[AVPlayerItemVideoOutput _setTimebase:]
___40-[AVPlayerItemVideoOutput _setTimebase:]_block_invoke
___copy_helper_block_175
___destroy_helper_block_176
-[AVPlayerItemVideoOutput _dispatchOutputMediaDataWillChange]
___61-[AVPlayerItemVideoOutput _dispatchOutputMediaDataWillChange]_block_invoke
___copy_helper_block_183
___destroy_helper_block_184
-[AVPlayerItemVideoOutput _dispatchOutputSequenceWasFlushed]
___60-[AVPlayerItemVideoOutput _dispatchOutputSequenceWasFlushed]_block_invoke
___copy_helper_block_189
___destroy_helper_block_190
___AVPlayerItemVideoOutput_figVCSequentialAvailable_block_invoke
___copy_helper_block_216
___destroy_helper_block_217
___AVPlayerItemVideoOutput_figVCSequentialAvailable_block_invoke220
___copy_helper_block_221
___destroy_helper_block_222
___AVPlayerItemVideoOutput_timebaseNotificationCallback_block_invoke
___copy_helper_block_225
___destroy_helper_block_226
-[AVAssetCollection _willDeallocOrFinalize]
-[AVAssetCollection dealloc]
-[AVAssetCollection finalize]
+[AVAssetCollection assetCollectionWithURL:options:]
-[AVAssetCollection _inspectorLoader]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___37-[AVAssetCollection _inspectorLoader]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVAssetCollection cancelLoading]
-[AVAssetCollection assetCount]
-[AVAssetCollection _avAssetCollectionTypeFromFigType:]
-[AVAssetCollection type]
-[AVAssetCollection assetsWithIndexes:options:]
___47-[AVAssetCollection assetsWithIndexes:options:]_block_invoke
___copy_helper_block_62
___destroy_helper_block_63
-[AVAssetCollection statusOfValueForKey:error:]
-[AVAssetCollection loadValuesAsynchronouslyForKeys:completionHandler:]
-[AVAssetCollection _avassetWithFigAsset:]
-[AVAssetCollection _avassetWithFigAsset:optionalCreationURL:]
-[AVAssetCollection(AVAssetCollection_Internal) initWithURL:options:]
-[AVAssetCollection(AVAssetCollection_Internal) URL]
-[AVAssetCollection(AVAssetCollection_Internal) weakReference]
-[AVAssetCollection(AVAssetCollection_Internal) assetWithURL:options:]
+[AVAssetCollection(AVAssetCollection_Private) _fragmentParamsFromURL:]
+[AVAssetCollection(AVAssetCollection_Private) _URLByRemovingFragmentFromURL:]
+[AVAssetCollection(AVAssetCollection_Private) isURLForCollection:]
+[AVAssetCollection(AVAssetCollection_Private) isURLForAssetInCollection:]
+[AVAssetCollection(AVAssetCollection_Private) baseCollectionURLFromURL:]
+[AVAssetCollection(AVAssetCollection_Private) indexHintFromURL:]
+[AVAssetCollectionFactory sharedAVAssetCollectionFactory]
___58+[AVAssetCollectionFactory sharedAVAssetCollectionFactory]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVAssetCollectionFactory init]
-[AVAssetCollectionFactory _cleanUpUncollectables]
-[AVAssetCollectionFactory dealloc]
-[AVAssetCollectionFactory finalize]
-[AVAssetCollectionFactory collectionWithURL:options:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___54-[AVAssetCollectionFactory collectionWithURL:options:]_block_invoke
___copy_helper_block_31
___destroy_helper_block_32
-[AVAssetCollectionFactory forgetCollectionWithURL:]
___52-[AVAssetCollectionFactory forgetCollectionWithURL:]_block_invoke
___copy_helper_block_37
___destroy_helper_block_38
-[AVSampleBufferDisplayLayerContentLayer actionForKey:]
+[AVSampleBufferDisplayLayerContentLayer defaultActionForKey:]
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _setControlTimebase:]
___84-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _setControlTimebase:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
__targetReadOnlyTimebaseAtDummyTimebase
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _setSynchronizerTimebase:]
___89-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _setSynchronizerTimebase:]_block_invoke
___copy_helper_block_45
___destroy_helper_block_46
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _initializeTimebases]
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _createVideoQueue]
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _updateLayerTreeGeometryWithVideoGravity:bounds:presentationSize:]
_AVSampleBufferDisplayLayerTransformForPlacement
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _updatePresentationSize:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___88-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _updatePresentationSize:]_block_invoke
___copy_helper_block_69
___destroy_helper_block_70
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _refreshAboveHighWaterLevel]
___91-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _refreshAboveHighWaterLevel]_block_invoke
___copy_helper_block_77
___destroy_helper_block_78
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _setStatus:error:]
___81-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _setStatus:error:]_block_invoke
___copy_helper_block_93
___destroy_helper_block_94
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _resetStatusWithOSStatus:]
___89-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _resetStatusWithOSStatus:]_block_invoke
___copy_helper_block_99
___destroy_helper_block_100
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _setOutputObscuredDueToInsufficientExternalProtection:]
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _weakReference]
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _addFigVideoQueueListeners]
__figVideoQueueDidDropBelowLowWaterLevel
__figVideoQueueDecodeError
__figVideoQueueExternalProtectionStatusChanged
__figVideoQueueFailed
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayer_Local) _removeFigVideoQueueListeners]
-[AVSampleBufferDisplayLayer init]
-[AVSampleBufferDisplayLayer dealloc]
-[AVSampleBufferDisplayLayer finalize]
-[AVSampleBufferDisplayLayer setControlTimebase:]
-[AVSampleBufferDisplayLayer controlTimebase]
___45-[AVSampleBufferDisplayLayer controlTimebase]_block_invoke
___copy_helper_block_165
___destroy_helper_block_166
-[AVSampleBufferDisplayLayer setVideoGravity:]
___46-[AVSampleBufferDisplayLayer setVideoGravity:]_block_invoke
___copy_helper_block_171
___destroy_helper_block_172
-[AVSampleBufferDisplayLayer videoGravity]
___42-[AVSampleBufferDisplayLayer videoGravity]_block_invoke
___copy_helper_block_184
___destroy_helper_block_185
-[AVSampleBufferDisplayLayer setBounds:]
___40-[AVSampleBufferDisplayLayer setBounds:]_block_invoke
___copy_helper_block_188
___destroy_helper_block_189
-[AVSampleBufferDisplayLayer _addAnimationsForContentLayer:size:gravity:]
__animationByTransformingValues
___73-[AVSampleBufferDisplayLayer _addAnimationsForContentLayer:size:gravity:]_block_invoke
___copy_helper_block_197
___destroy_helper_block_198
___73-[AVSampleBufferDisplayLayer _addAnimationsForContentLayer:size:gravity:]_block_invoke202
-[AVSampleBufferDisplayLayer addAnimation:forKey:]
___50-[AVSampleBufferDisplayLayer addAnimation:forKey:]_block_invoke
___copy_helper_block_217
___destroy_helper_block_218
___50-[AVSampleBufferDisplayLayer addAnimation:forKey:]_block_invoke221
___copy_helper_block_224
___destroy_helper_block_225
-[AVSampleBufferDisplayLayer setRenderSynchronizer:]
-[AVSampleBufferDisplayLayer copyFigSampleBufferAudioRenderer:]
-[AVSampleBufferDisplayLayer isReadyForMoreMediaData]
___53-[AVSampleBufferDisplayLayer isReadyForMoreMediaData]_block_invoke
___copy_helper_block_234
___destroy_helper_block_235
-[AVSampleBufferDisplayLayer status]
___36-[AVSampleBufferDisplayLayer status]_block_invoke
___copy_helper_block_238
___destroy_helper_block_239
+[AVSampleBufferDisplayLayer automaticallyNotifiesObserversOfStatus]
-[AVSampleBufferDisplayLayer error]
___35-[AVSampleBufferDisplayLayer error]_block_invoke
___copy_helper_block_242
___destroy_helper_block_243
+[AVSampleBufferDisplayLayer automaticallyNotifiesObserversOfError]
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayerQueueManagement) enqueueSampleBuffer:]
___93-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayerQueueManagement) enqueueSampleBuffer:]_block_invoke
___copy_helper_block_318
___destroy_helper_block_319
_enqueueSample
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayerQueueManagement) flush]
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayerQueueManagement) flushAndRemoveImage]
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayerQueueManagement) requestMediaDataWhenReadyOnQueue:usingBlock:]
___117-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayerQueueManagement) requestMediaDataWhenReadyOnQueue:usingBlock:]_block_invoke
___copy_helper_block_333
___destroy_helper_block_334
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayerQueueManagement) stopRequestingMediaData]
___96-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayerQueueManagement) stopRequestingMediaData]_block_invoke
___copy_helper_block_337
___destroy_helper_block_338
-[AVSampleBufferDisplayLayer(AVSampleBufferDisplayLayerQueuedSampleBufferRendering) timebase]
-[AVVideoPerformanceMetrics init]
-[AVVideoPerformanceMetrics initWithDictionary:]
-[AVVideoPerformanceMetrics finalize]
-[AVVideoPerformanceMetrics dealloc]
-[AVVideoPerformanceMetrics totalNumberOfVideoFrames]
-[AVVideoPerformanceMetrics numberOfDroppedVideoFrames]
-[AVVideoPerformanceMetrics numberOfCorruptedVideoFrames]
-[AVVideoPerformanceMetrics totalFrameDelay]
-[AVSampleBufferDisplayLayer(VideoPerformanceMetrics) videoPerformanceMetrics]
-[AVSampleBufferDisplayLayer(ProtectedContent) outputObscuredDueToInsufficientExternalProtection]
-[AVAssetCollectionInspector initWithFigCollection:]
-[AVAssetCollectionInspector _cleanUpUncollectables]
-[AVAssetCollectionInspector dealloc]
-[AVAssetCollectionInspector finalize]
-[AVAssetCollectionInspector copyWithZone:]
-[AVAssetCollectionInspector _valueAsCFTypeForProperty:]
-[AVAssetCollectionInspector type]
-[AVAssetCollectionInspector assetCount]
-[AVAssetCollectionInspector _figAssetCreationOptionsFromAVFOptions:]
-[AVAssetCollectionInspector copyFigAssetAtIndex:options:figErr:]
-[AVAssetCollectionInspector copyFigAssetWithURL:options:figErr:]
-[AVAssetCollectionInspectorLoader copyWithZone:]
-[AVAssetCollectionInspectorLoader initWithFigCollectionAtURL:]
-[AVAssetCollectionInspectorLoader _cleanUpUncollectables]
-[AVAssetCollectionInspectorLoader dealloc]
-[AVAssetCollectionInspectorLoader finalize]
-[AVAssetCollectionInspectorLoader type]
-[AVAssetCollectionInspectorLoader assetCount]
-[AVAssetCollectionInspectorLoader copyFigAssetAtIndex:options:figErr:]
-[AVAssetCollectionInspectorLoader copyFigAssetWithURL:options:figErr:]
-[AVAssetCollectionInspectorLoader _loadingQOnly_figCollection]
-[AVAssetCollectionInspectorLoader inspector]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___45-[AVAssetCollectionInspectorLoader inspector]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVAssetCollectionInspectorLoader cancelLoading]
___49-[AVAssetCollectionInspectorLoader cancelLoading]_block_invoke
___copy_helper_block_47
___destroy_helper_block_48
-[AVAssetCollectionInspectorLoader _loadStatusForProperty:returningError:]
-[AVAssetCollectionInspectorLoader _figPropertiesByKey]
-[AVAssetCollectionInspectorLoader _mapFigErrorCodeToNSError:]
-[AVAssetCollectionInspectorLoader statusOfValueForKey:error:]
___62-[AVAssetCollectionInspectorLoader statusOfValueForKey:error:]_block_invoke
___copy_helper_block_69
___destroy_helper_block_70
-[AVAssetCollectionInspectorLoader loadValuesAsynchronouslyForKeys:completionHandler:]
___86-[AVAssetCollectionInspectorLoader loadValuesAsynchronouslyForKeys:completionHandler:]_block_invoke
___copy_helper_block_90
___destroy_helper_block_91
-[AVAssetCollectionInspectorLoader _completionHandlerQ]
-[AVAssetCollectionInspectorLoader _loadingQ]
-[AVAssetCollectionInspectorLoader _loadingBatches]
___handleFigAssetCollectionNotification_block_invoke
___handleFigAssetCollectionNotification_block_invoke_2
___copy_helper_block_153
___destroy_helper_block_154
-[AVPixelBufferAttributeMediator init]
_mediatedPixelBufferAttributesChanged
-[AVPixelBufferAttributeMediator finalize]
-[AVPixelBufferAttributeMediator dealloc]
-[AVPixelBufferAttributeMediator setRequestedPixelBufferAttributes:forKey:]
-[AVPixelBufferAttributeMediator removeRequestedPixelBufferAttributesAttributesForKey:]
-[AVPixelBufferAttributeMediator setLayersAreSuppressed:]
-[AVPixelBufferAttributeMediator mediatedPixelBufferAttributes]
-[AVStreamDataAssetTrackInspector _initWithAsset:trackID:trackIndex:]
-[AVStreamDataAssetTrackInspector dealloc]
-[AVStreamDataAssetTrackInspector trackID]
-[AVStreamDataAssetTrackInspector figMediaType]
-[AVStreamDataAssetTrackInspector mediaType]
-[AVStreamDataAssetTrackInspector isEnabled]
-[AVStreamDataAssetTrackInspector timeRange]
-[AVStreamDataAssetTrackInspector naturalSize]
-[AVStreamDataAssetTrackInspector dimensions]
-[AVStreamDataAssetTrackInspector formatDescriptions]
-[AVStreamDataAssetTrackInspector mediaCharacteristics]
-[AVStreamDataAssetInspector initWithTrackIDs:]
-[AVStreamDataAssetInspector dealloc]
-[AVStreamDataAssetInspector isEqual:]
-[AVStreamDataAssetInspector duration]
-[AVStreamDataAssetInspector providesPreciseDurationAndTiming]
-[AVStreamDataAssetInspector trackCount]
-[AVStreamDataAssetInspector trackIDs]
-[AVStreamDataInspectionOnlyAsset initWithFigAsset:]
-[AVStreamDataInspectionOnlyAsset isPlayable]
-[AVStreamDataInspectionOnlyAsset isExportable]
-[AVStreamDataInspectionOnlyAsset isReadable]
-[AVStreamDataInspectionOnlyAsset isComposable]
-[AVStreamDataAsset initWithParser:tracks:]
-[AVStreamDataAsset dealloc]
-[AVStreamDataAsset parser]
-[AVStreamDataAsset copyAssetWithAdditionalTrackID:mediaType:]
-[AVStreamDataAsset copyAssetWithReplacementFormatDescription:forTrackID:]
-[AVStreamDataAsset copyAssetRemovingTrackID:]
-[AVStreamDataAsset mediaTypeForTrackID:]
-[AVStreamDataAsset formatDescriptionsForTrackID:]
-[AVStreamDataAsset tracks]
___27-[AVStreamDataAsset tracks]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVStreamDataAsset _formatReader]
-[AVStreamDataAsset _assetInspector]
-[AVStreamDataAsset _assetInspectorLoader]
-[AVStreamDataAsset _classForTrackInspectors]
+[AVAsset(StreamDataParsing) inspectionOnlyAssetWithFigAsset:]
+[AVAsset(StreamDataParsing) inspectionOnlyAssetWithStreamDataParser:tracks:]
-[AVCaptureOutputSettings outputSettingsDictionary]
-[AVCaptureOutputSettings isEqual:]
-[AVCaptureOutputSettings settingsArePassthru]
-[AVCaptureOutputSettings setSettingsArePassthru:]
-[AVCaptureVideoSettings initWithVideoSettingsDictionary:]
-[AVCaptureVideoSettings initWithTrustedVideoSettingsDictionary:]
-[AVCaptureVideoSettings dealloc]
-[AVCaptureVideoSettings outputSettingsDictionary]
-[AVCaptureVideoSettings avVideoOutputSettings]
-[AVCaptureVideoSettings pixelAspectRatioDictionary]
-[AVCaptureVideoSettings cleanApertureDictionary]
-[AVCaptureAudioSettings initWithAudioSettingsDictionary:]
-[AVCaptureAudioSettings initWithTrustedAudioSettingsDictionary:]
-[AVCaptureAudioSettings dealloc]
-[AVCaptureAudioSettings outputSettingsDictionary]
-[AVCaptureAudioSettings avAudioOutputSettings]
-[AVURLAuthenticationChallenge init]
-[AVURLAuthenticationChallenge initWithAuthenticationChallenge:sender:requestDictionary:]
-[AVURLAuthenticationChallenge initWithAuthenticationChallenge:sender:]
-[AVURLAuthenticationChallenge initWithProtectionSpace:proposedCredential:previousFailureCount:failureResponse:error:sender:]
-[AVURLAuthenticationChallenge dealloc]
-[AVURLAuthenticationChallenge _weakReference]
-[AVURLAuthenticationChallenge _requestDictionary]
-[AVURLAuthenticationChallenge _shouldInformDelegateOfFigCancellation]
+[AVURLAuthenticationChallenge _selectorForInformingDelegateOfCancellationByFig]
-[AVURLAuthenticationChallenge _performCancellationByClient]
-[AVAssetResourceLoader init]
-[AVAssetResourceLoader initWithAsset:]
-[AVAssetResourceLoader dealloc]
-[AVAssetResourceLoader finalize]
-[AVAssetResourceLoader _weakReference]
-[AVAssetResourceLoader setDelegate:]
-[AVAssetResourceLoader setDelegate:queue:]
___43-[AVAssetResourceLoader setDelegate:queue:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVAssetResourceLoader stateQueue]
-[AVAssetResourceLoader delegate]
-[AVAssetResourceLoader delegateQueue]
-[AVAssetResourceLoader asset]
-[AVAssetResourceLoader cancelLoading]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___38-[AVAssetResourceLoader cancelLoading]_block_invoke
___copy_helper_block_130
___destroy_helper_block_131
-[AVAssetResourceLoader _performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:delegateCallbackBlock:]
___114-[AVAssetResourceLoader _performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:delegateCallbackBlock:]_block_invoke
___copy_helper_block_142
___destroy_helper_block_143
___114-[AVAssetResourceLoader _performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:delegateCallbackBlock:]_block_invoke146
___copy_helper_block_149
___destroy_helper_block_150
-[AVAssetResourceLoader _performDelegateSelector:withObject:representingNewRequest:key:fallbackHandler:]
___104-[AVAssetResourceLoader _performDelegateSelector:withObject:representingNewRequest:key:fallbackHandler:]_block_invoke
___104-[AVAssetResourceLoader _performDelegateSelector:withObject:representingNewRequest:key:fallbackHandler:]_block_invoke_2
___copy_helper_block_177
___destroy_helper_block_178
___copy_helper_block_181
___destroy_helper_block_182
-[AVAssetResourceLoader _cancelRequestWithKey:requestDictionary:fallbackHandler:]
___81-[AVAssetResourceLoader _cancelRequestWithKey:requestDictionary:fallbackHandler:]_block_invoke
___copy_helper_block_187
___destroy_helper_block_188
-[AVAssetResourceLoader _issueLoadingRequestWithKey:requestDictionary:fallbackHandler:]
___87-[AVAssetResourceLoader _issueLoadingRequestWithKey:requestDictionary:fallbackHandler:]_block_invoke
___copy_helper_block_207
___destroy_helper_block_208
-[AVAssetResourceLoader _poseAuthenticationChallengeWithKey:data:requestDictionary:fallbackHandler:]
___100-[AVAssetResourceLoader _poseAuthenticationChallengeWithKey:data:requestDictionary:fallbackHandler:]_block_invoke
___copy_helper_block_222
___destroy_helper_block_223
-[AVAssetResourceLoader _noteFinishingOfRequest:]
___49-[AVAssetResourceLoader _noteFinishingOfRequest:]_block_invoke
___copy_helper_block_231
___destroy_helper_block_232
-[AVAssetResourceLoader(AVAssetResourceLoaderURLAuthenticationChallengeSender) useCredential:forAuthenticationChallenge:]
-[AVAssetResourceLoader(AVAssetResourceLoaderURLAuthenticationChallengeSender) _rejectChallenge:withError:]
-[AVAssetResourceLoader(AVAssetResourceLoaderURLAuthenticationChallengeSender) cancelAuthenticationChallenge:]
-[AVAssetResourceLoader(AVAssetResourceLoaderURLAuthenticationChallengeSender) continueWithoutCredentialForAuthenticationChallenge:]
-[AVAssetResourceLoader(AVAssetResourceLoaderURLAuthenticationChallengeSender) rejectProtectionSpaceAndContinueWithChallenge:]
-[AVAssetResourceLoader(AVAssetResourceLoaderURLAuthenticationChallengeSender) performDefaultHandlingForAuthenticationChallenge:]
-[AVAssetResourceLoader(AVAssetResourceLoaderContentInformationCache) cacheContentInformation:forURL:]
___102-[AVAssetResourceLoader(AVAssetResourceLoaderContentInformationCache) cacheContentInformation:forURL:]_block_invoke
___copy_helper_block_308
___destroy_helper_block_309
-[AVAssetResourceLoader(AVAssetResourceLoaderContentInformationCache) cachedContentInformationForURL:]
___102-[AVAssetResourceLoader(AVAssetResourceLoaderContentInformationCache) cachedContentInformationForURL:]_block_invoke
___copy_helper_block_312
___destroy_helper_block_313
-[AVAssetResourceLoadingContentInformationRequest init]
-[AVAssetResourceLoadingContentInformationRequest initWithLoadingRequest:]
-[AVAssetResourceLoadingContentInformationRequest dealloc]
-[AVAssetResourceLoadingContentInformationRequest finalize]
-[AVAssetResourceLoadingContentInformationRequest description]
-[AVAssetResourceLoadingContentInformationRequest propertyList]
-[AVAssetResourceLoadingContentInformationRequest setContentType:]
-[AVAssetResourceLoadingContentInformationRequest contentType]
-[AVAssetResourceLoadingContentInformationRequest setContentLength:]
-[AVAssetResourceLoadingContentInformationRequest contentLength]
-[AVAssetResourceLoadingContentInformationRequest setByteRangeAccessSupported:]
-[AVAssetResourceLoadingContentInformationRequest isByteRangeAccessSupported]
-[AVAssetResourceLoadingContentInformationRequest setRenewalDate:]
-[AVAssetResourceLoadingContentInformationRequest renewalDate]
-[AVAssetResourceLoadingContentInformationRequest setDiskCachingPermitted:]
-[AVAssetResourceLoadingContentInformationRequest isDiskCachingPermitted]
-[AVAssetResourceLoadingDataRequest init]
-[AVAssetResourceLoadingDataRequest initWithLoadingRequest:requestedOffset:requestedLength:canSupplyIncrementalDataImmediately:]
-[AVAssetResourceLoadingDataRequest dealloc]
-[AVAssetResourceLoadingDataRequest finalize]
-[AVAssetResourceLoadingDataRequest description]
-[AVAssetResourceLoadingDataRequest requestedOffset]
-[AVAssetResourceLoadingDataRequest requestedLength]
-[AVAssetResourceLoadingDataRequest currentOffset]
___50-[AVAssetResourceLoadingDataRequest currentOffset]_block_invoke
___copy_helper_block_393
___destroy_helper_block_394
-[AVAssetResourceLoadingDataRequest _loadingRequest]
-[AVAssetResourceLoadingDataRequest respondWithData:]
___53-[AVAssetResourceLoadingDataRequest respondWithData:]_block_invoke
___copy_helper_block_405
___destroy_helper_block_406
-[AVAssetResourceLoadingRequest init]
-[AVAssetResourceLoadingRequest initWithResourceLoader:requestDictionary:]
-[AVAssetResourceLoadingRequest dealloc]
-[AVAssetResourceLoadingRequest finalize]
-[AVAssetResourceLoadingRequest description]
-[AVAssetResourceLoadingRequest _weakReference]
-[AVAssetResourceLoadingRequest _resourceLoader]
-[AVAssetResourceLoadingRequest _requestDictionary]
-[AVAssetResourceLoadingRequest request]
-[AVAssetResourceLoadingRequest isFinished]
-[AVAssetResourceLoadingRequest finished]
-[AVAssetResourceLoadingRequest _tryToMarkAsCancelled]
-[AVAssetResourceLoadingRequest isCancelled]
-[AVAssetResourceLoadingRequest _shouldInformDelegateOfFigCancellation]
+[AVAssetResourceLoadingRequest _selectorForInformingDelegateOfCancellationByFig]
-[AVAssetResourceLoadingRequest _performCancellationByClient]
-[AVAssetResourceLoadingRequest _setContentInformationRequest:]
-[AVAssetResourceLoadingRequest contentInformationRequest]
-[AVAssetResourceLoadingRequest _setDataRequest:]
-[AVAssetResourceLoadingRequest dataRequest]
-[AVAssetResourceLoadingRequest setResponse:]
-[AVAssetResourceLoadingRequest response]
-[AVAssetResourceLoadingRequest setRedirect:]
-[AVAssetResourceLoadingRequest _getAndClearCachedData]
___55-[AVAssetResourceLoadingRequest _getAndClearCachedData]_block_invoke
___copy_helper_block_490
___destroy_helper_block_491
-[AVAssetResourceLoadingRequest _appendToCachedData:]
___53-[AVAssetResourceLoadingRequest _appendToCachedData:]_block_invoke
___copy_helper_block_498
___destroy_helper_block_499
-[AVAssetResourceLoadingRequest redirect]
-[AVAssetResourceLoadingRequest serializableRepresentation]
-[AVAssetResourceLoadingRequest _sendDictionaryForURLRequest:context:]
-[AVAssetResourceLoadingRequest _sendDataIncrementally:data:]
-[AVAssetResourceLoadingRequest finishLoading]
-[AVAssetResourceLoadingRequest finishLoadingWithError:]
-[AVAssetResourceLoadingRequest finishLoadingWithResponse:data:redirect:]
-[AVAssetResourceLoadingRequest streamingContentKeyRequestDataForApp:contentIdentifier:options:error:]
-[AVAssetResourceLoadingRequest generateStreamingContentKeyRequestDataAsynchronouslyForApp:contentIdentifier:options:completionHandler:]
-[AVAssetResourceLoadingRequest _addFigPlaybackItemListeners]
_avassetresourceloadingrequest_streamingContentKeyNotificationCallback
-[AVAssetResourceLoadingRequest _removeFigPlaybackItemListeners]
-[AVAssetResourceLoadingRequest _addFigAssetImageGeneratorListeners]
-[AVAssetResourceLoadingRequest _removeFigAssetImageGeneratorListeners]
+[AVTextStyleRule propertyListForTextStyleRules:]
+[AVTextStyleRule textStyleRulesFromPropertyList:]
+[AVTextStyleRule textStyleRuleWithTextMarkupAttributes:]
+[AVTextStyleRule textStyleRuleWithTextMarkupAttributes:textSelector:]
-[AVTextStyleRule initWithTextMarkupAttributes:]
-[AVTextStyleRule initWithTextMarkupAttributes:textSelector:]
-[AVTextStyleRule dealloc]
-[AVTextStyleRule finalize]
-[AVTextStyleRule copyWithZone:]
-[AVTextStyleRule isEqual:]
-[AVTextStyleRule hash]
-[AVTextStyleRule textMarkupAttributes]
-[AVTextStyleRule textSelector]
-[AVTextStyleRule _dictionaryPlistRepresentation]
-[AVPlayerMediaSelectionCriteriaInternal dealloc]
-[AVPlayerMediaSelectionCriteriaInternal preferredLanguages]
-[AVPlayerMediaSelectionCriteriaInternal setPreferredLanguages:]
-[AVPlayerMediaSelectionCriteriaInternal requiredMediaCharacteristics]
-[AVPlayerMediaSelectionCriteriaInternal setRequiredMediaCharacteristics:]
-[AVPlayerMediaSelectionCriteriaInternal preferredMediaCharacteristics]
-[AVPlayerMediaSelectionCriteriaInternal setPreferredMediaCharacteristics:]
-[AVPlayerMediaSelectionCriteriaInternal precludedMediaCharacteristics]
-[AVPlayerMediaSelectionCriteriaInternal setPrecludedMediaCharacteristics:]
-[AVPlayerMediaSelectionCriteriaInternal preferredMediaSubTypes]
-[AVPlayerMediaSelectionCriteriaInternal setPreferredMediaSubTypes:]
-[AVPlayerMediaSelectionCriteriaInternal precludedMediaSubTypes]
-[AVPlayerMediaSelectionCriteriaInternal setPrecludedMediaSubTypes:]
-[AVPlayerMediaSelectionCriteriaInternal preferMultichannelAudio]
-[AVPlayerMediaSelectionCriteriaInternal setPreferMultichannelAudio:]
-[AVPlayerMediaSelectionCriteriaInternal precludeMultichannelAudio]
-[AVPlayerMediaSelectionCriteriaInternal setPrecludeMultichannelAudio:]
-[AVPlayerMediaSelectionCriteria init]
-[AVPlayerMediaSelectionCriteria initWithPreferredLanguages:preferredMediaCharacteristics:preferredMediaSubTypes:precludedMediaSubTypes:preferMultichannelAudio:precludeMultichannelAudio:]
-[AVPlayerMediaSelectionCriteria initWithPreferredLanguages:preferredMediaCharacteristics:]
-[AVPlayerMediaSelectionCriteria initWithPreferredLanguages:preferredMediaCharacteristics:preferredMediaSubTypes:precludedMediaSubTypes:]
-[AVPlayerMediaSelectionCriteria dealloc]
-[AVPlayerMediaSelectionCriteria preferredLanguages]
-[AVPlayerMediaSelectionCriteria preferredMediaCharacteristics]
-[AVPlayerMediaSelectionCriteria preferredMediaSubTypes]
-[AVPlayerMediaSelectionCriteria precludedMediaSubTypes]
-[AVPlayerMediaSelectionCriteria preferMultichannelAudio]
-[AVPlayerMediaSelectionCriteria precludeMultichannelAudio]
-[AVPlayerMediaSelectionCriteria description]
-[AVPlayerMediaSelectionCriteria(FigDictionaryRepresentation) figDictionary]
-[AVPlayerMediaSelectionCriteria(FigDictionaryRepresentation) initWithFigDictionary:]
+[AVPlayerItemMetadataOutput initialize]
-[AVPlayerItemMetadataOutput init]
-[AVPlayerItemMetadataOutput initWithIdentifiers:]
-[AVPlayerItemMetadataOutput _collectUncollectables]
-[AVPlayerItemMetadataOutput dealloc]
-[AVPlayerItemMetadataOutput finalize]
-[AVPlayerItemMetadataOutput _attachToPlayerItem:]
___50-[AVPlayerItemMetadataOutput _attachToPlayerItem:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVPlayerItemMetadataOutput _detachFromPlayerItem]
___51-[AVPlayerItemMetadataOutput _detachFromPlayerItem]_block_invoke
___copy_helper_block_49
___destroy_helper_block_50
-[AVPlayerItemMetadataOutput setDelegate:queue:]
-[AVPlayerItemMetadataOutput delegate]
-[AVPlayerItemMetadataOutput delegateQueue]
-[AVPlayerItemMetadataOutput advanceIntervalForDelegateInvocation]
___66-[AVPlayerItemMetadataOutput advanceIntervalForDelegateInvocation]_block_invoke
___copy_helper_block_61
___destroy_helper_block_62
-[AVPlayerItemMetadataOutput setAdvanceIntervalForDelegateInvocation:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___70-[AVPlayerItemMetadataOutput setAdvanceIntervalForDelegateInvocation:]_block_invoke
___copy_helper_block_65
___destroy_helper_block_66
-[AVPlayerItemMetadataOutput(AVPlayerItemMetadataOutput_Internal) _signalFlush]
___79-[AVPlayerItemMetadataOutput(AVPlayerItemMetadataOutput_Internal) _signalFlush]_block_invoke
___79-[AVPlayerItemMetadataOutput(AVPlayerItemMetadataOutput_Internal) _signalFlush]_block_invoke_2
___79-[AVPlayerItemMetadataOutput(AVPlayerItemMetadataOutput_Internal) _signalFlush]_block_invoke_3
___copy_helper_block_99
___destroy_helper_block_100
___copy_helper_block_106
___destroy_helper_block_107
___copy_helper_block_110
___destroy_helper_block_111
-[AVPlayerItemMetadataOutput(AVPlayerItemMetadataOutput_Internal) _pushTimedMetadataGroups:fromPlayerItemTrack:]
___112-[AVPlayerItemMetadataOutput(AVPlayerItemMetadataOutput_Internal) _pushTimedMetadataGroups:fromPlayerItemTrack:]_block_invoke
___112-[AVPlayerItemMetadataOutput(AVPlayerItemMetadataOutput_Internal) _pushTimedMetadataGroups:fromPlayerItemTrack:]_block_invoke_2
___112-[AVPlayerItemMetadataOutput(AVPlayerItemMetadataOutput_Internal) _pushTimedMetadataGroups:fromPlayerItemTrack:]_block_invoke_3
___copy_helper_block_119
___destroy_helper_block_120
___copy_helper_block_123
___destroy_helper_block_124
___copy_helper_block_127
___destroy_helper_block_128
-[AVPlayerItemLegibleOutputRealDependencyFactory playerItemOutputHostForPlayerItem:]
+[AVPlayerItemLegibleOutput initialize]
-[AVPlayerItemLegibleOutput init]
-[AVPlayerItemLegibleOutput initWithMediaSubtypesForNativeRepresentation:]
-[AVPlayerItemLegibleOutput initWithDependencyFactory:mediaSubtypesForNativeRepresentation:]
-[AVPlayerItemLegibleOutput _collectUncollectables]
-[AVPlayerItemLegibleOutput dealloc]
-[AVPlayerItemLegibleOutput finalize]
-[AVPlayerItemLegibleOutput _pushAttributedStrings:andSampleBuffers:atItemTime:]
___80-[AVPlayerItemLegibleOutput _pushAttributedStrings:andSampleBuffers:atItemTime:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVPlayerItemLegibleOutput _signalFlush]
___41-[AVPlayerItemLegibleOutput _signalFlush]_block_invoke
___copy_helper_block_114
___destroy_helper_block_115
-[AVPlayerItemLegibleOutput _attachToPlayerItem:]
___49-[AVPlayerItemLegibleOutput _attachToPlayerItem:]_block_invoke
___copy_helper_block_122
___destroy_helper_block_123
-[AVPlayerItemLegibleOutput _detachFromPlayerItem]
___50-[AVPlayerItemLegibleOutput _detachFromPlayerItem]_block_invoke
___copy_helper_block_127
___destroy_helper_block_128
-[AVPlayerItemLegibleOutput _figLegibleOutputsDictionaryOptions]
-[AVPlayerItemLegibleOutput setDelegate:queue:]
-[AVPlayerItemLegibleOutput delegate]
-[AVPlayerItemLegibleOutput delegateQueue]
-[AVPlayerItemLegibleOutput advanceIntervalForDelegateInvocation]
___65-[AVPlayerItemLegibleOutput advanceIntervalForDelegateInvocation]_block_invoke
___copy_helper_block_149
___destroy_helper_block_150
-[AVPlayerItemLegibleOutput setAdvanceIntervalForDelegateInvocation:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___69-[AVPlayerItemLegibleOutput setAdvanceIntervalForDelegateInvocation:]_block_invoke
___copy_helper_block_153
___destroy_helper_block_154
-[AVPlayerItemLegibleOutput textStylingResolution]
___50-[AVPlayerItemLegibleOutput textStylingResolution]_block_invoke
___copy_helper_block_161
___destroy_helper_block_162
-[AVPlayerItemLegibleOutput setTextStylingResolution:]
___54-[AVPlayerItemLegibleOutput setTextStylingResolution:]_block_invoke
___copy_helper_block_172
___destroy_helper_block_173
-[AVPlayerItemLegibleOutput suppressesPlayerRendering]
___54-[AVPlayerItemLegibleOutput suppressesPlayerRendering]_block_invoke
___copy_helper_block_176
___destroy_helper_block_177
-[AVPlayerItemLegibleOutput setSuppressesPlayerRendering:]
___58-[AVPlayerItemLegibleOutput setSuppressesPlayerRendering:]_block_invoke
___copy_helper_block_180
___destroy_helper_block_181
+[AVOutputSettingsAssistant _allOutputSettingsPresets]
+[AVOutputSettingsAssistant availableOutputSettingsPresets]
+[AVOutputSettingsAssistant outputSettingsAssistantWithPreset:]
-[AVOutputSettingsAssistant init]
-[AVOutputSettingsAssistant initWithPreset:]
-[AVOutputSettingsAssistant dealloc]
_AVOutputSettingsAssistantCollectUncollectables
-[AVOutputSettingsAssistant finalize]
-[AVOutputSettingsAssistant outputFileType]
-[AVOutputSettingsAssistant audioSettings]
-[AVOutputSettingsAssistant videoSettings]
-[AVOutputSettingsAssistant sourceAudioFormat]
-[AVOutputSettingsAssistant setSourceAudioFormat:]
-[AVOutputSettingsAssistant sourceVideoFormat]
-[AVOutputSettingsAssistant setSourceVideoFormat:]
-[AVOutputSettingsAssistant sourceVideoAverageFrameDuration]
-[AVOutputSettingsAssistant setSourceVideoAverageFrameDuration:]
-[AVOutputSettingsAssistant sourceVideoMinFrameDuration]
-[AVOutputSettingsAssistant setSourceVideoMinFrameDuration:]
+[AVOutputSettingsAssistant(Dependencies) baseSettingsProviderForPreset:]
+[AVOutputSettingsAssistant(Dependencies) videoSettingsAdjusterForPreset:]
+[AVOutputSettingsAssistant(Dependencies) videoEncoderCapabilities]
+[AVOutputSettingsAssistant(Dependencies) validatesSourceVideoMinFrameDuration]
-[AVExportSettingsOutputSettingsAssistantBaseSettings init]
-[AVExportSettingsOutputSettingsAssistantBaseSettings initWithOutputSettingsPreset:]
-[AVExportSettingsOutputSettingsAssistantBaseSettings dealloc]
-[AVExportSettingsOutputSettingsAssistantBaseSettings baseAudioSettings]
-[AVExportSettingsOutputSettingsAssistantBaseSettings baseVideoSettings]
-[AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster initWithOutputSettingsPreset:]
-[AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster dealloc]
-[AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster averageBitRateForSourceDimensions:andTargetFrameRate:]
-[AVIOKitOutputSettingsAssistantVideoEncoderCapabilities averageNonDroppableFrameIntervalIsSupportedByDefaultEncoderForVideoCodec:]
+[AVCustomVideoCompositorSession sessionWithVideoComposition:recyclingSession:]
-[AVCustomVideoCompositorSession initWithVideoComposition:]
-[AVCustomVideoCompositorSession customVideoCompositor]
-[AVCustomVideoCompositorSession detachVideoComposition]
___56-[AVCustomVideoCompositorSession detachVideoComposition]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVCustomVideoCompositorSession _willDeallocOrFinalize]
-[AVCustomVideoCompositorSession finalize]
-[AVCustomVideoCompositorSession dealloc]
-[AVCustomVideoCompositorSession setVideoComposition:]
___54-[AVCustomVideoCompositorSession setVideoComposition:]_block_invoke
___copy_helper_block_60
___destroy_helper_block_61
-[AVCustomVideoCompositorSession _copyFigVideoCompositor]
-[AVCustomVideoCompositorSession getAndClearClientError]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___56-[AVCustomVideoCompositorSession getAndClearClientError]_block_invoke
___copy_helper_block_66
___destroy_helper_block_67
-[AVCustomVideoCompositorSession request:didFinishWithComposedPixelBuffer:]
___75-[AVCustomVideoCompositorSession request:didFinishWithComposedPixelBuffer:]_block_invoke
___copy_helper_block_72
___destroy_helper_block_73
-[AVCustomVideoCompositorSession request:didFinishWithError:]
___61-[AVCustomVideoCompositorSession request:didFinishWithError:]_block_invoke
___copy_helper_block_76
___destroy_helper_block_77
___61-[AVCustomVideoCompositorSession request:didFinishWithError:]_block_invoke80
___copy_helper_block_81
___destroy_helper_block_82
-[AVCustomVideoCompositorSession requestDidCancel:]
___51-[AVCustomVideoCompositorSession requestDidCancel:]_block_invoke
___copy_helper_block_85
___destroy_helper_block_86
-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _compositionFrame:atTime:requiresRenderUsingSources:withInstruction:]
___154-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _compositionFrame:atTime:requiresRenderUsingSources:withInstruction:]_block_invoke
___copy_helper_block_130
___destroy_helper_block_131
___154-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _compositionFrame:atTime:requiresRenderUsingSources:withInstruction:]_block_invoke134
___154-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _compositionFrame:atTime:requiresRenderUsingSources:withInstruction:]_block_invoke_2
___copy_helper_block_142
___destroy_helper_block_143
___copy_helper_block_146
___destroy_helper_block_147
___154-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _compositionFrame:atTime:requiresRenderUsingSources:withInstruction:]_block_invoke153
___copy_helper_block_156
___destroy_helper_block_157
-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _customCompositorShouldCancelPendingFrames]
___128-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _customCompositorShouldCancelPendingFrames]_block_invoke
___copy_helper_block_164
___destroy_helper_block_165
-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _customCompositorFigPropertyDidChange]
___123-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _customCompositorFigPropertyDidChange]_block_invoke
___copy_helper_block_170
___destroy_helper_block_171
-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _setupFigCallbacks]
__customCompositorPropertyChangedNotificationReceived
__customCompositorShouldRenderFrameCallback
__customCompositorShouldCancelPendingFramesCallback
-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _cleanupFigCallbacks]
-[AVScheduledAudioParameters init]
-[AVScheduledAudioParameters dealloc]
-[AVScheduledAudioParameters finalize]
-[AVScheduledAudioParameters description]
-[AVScheduledAudioParameters copyWithZone:]
-[AVScheduledAudioParameters mutableCopyWithZone:]
-[AVScheduledAudioParameters hash]
-[AVScheduledAudioParameters isEqual:]
-[AVScheduledAudioParameters _ramps]
-[AVScheduledAudioParameters _setRamps:]
-[AVScheduledAudioParameters getVolumeRampForTime:startVolume:endVolume:timeRange:]
___83-[AVScheduledAudioParameters getVolumeRampForTime:startVolume:endVolume:timeRange:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AVScheduledAudioParameters _setVolumeRampFromStartVolume:toEndVolume:timeRange:]
___82-[AVScheduledAudioParameters _setVolumeRampFromStartVolume:toEndVolume:timeRange:]_block_invoke
-[AVScheduledAudioParameters(AVScheduledAudioParameters_Internal) _audioVolumeCurve]
-[AVScheduledAudioParameters(AVScheduledAudioParameters_Internal) _volumeCurveAsString]
+[AVMutableScheduledAudioParameters scheduledAudioParameters]
-[AVMutableScheduledAudioParameters copyWithZone:]
-[AVMutableScheduledAudioParameters setVolumeRampFromStartVolume:toEndVolume:timeRange:]
-[AVMutableScheduledAudioParameters setVolume:atTime:]
-[AVAsynchronousVideoCompositionRequestInternal dealloc]
-[AVAsynchronousVideoCompositionRequestInternal session]
-[AVAsynchronousVideoCompositionRequestInternal setSession:]
-[AVAsynchronousVideoCompositionRequestInternal renderContext]
-[AVAsynchronousVideoCompositionRequestInternal setRenderContext:]
-[AVAsynchronousVideoCompositionRequestInternal compositionFrame]
-[AVAsynchronousVideoCompositionRequestInternal setCompositionFrame:]
-[AVAsynchronousVideoCompositionRequestInternal compositionTime]
-[AVAsynchronousVideoCompositionRequestInternal setCompositionTime:]
-[AVAsynchronousVideoCompositionRequestInternal sourcesByTrackID]
-[AVAsynchronousVideoCompositionRequestInternal setSourcesByTrackID:]
-[AVAsynchronousVideoCompositionRequestInternal sourceTrackIDsInClientOrder]
-[AVAsynchronousVideoCompositionRequestInternal setSourceTrackIDsInClientOrder:]
-[AVAsynchronousVideoCompositionRequestInternal instruction]
-[AVAsynchronousVideoCompositionRequestInternal setInstruction:]
-[AVAsynchronousVideoCompositionRequestInternal isFinished]
-[AVAsynchronousVideoCompositionRequestInternal setIsFinished:]
-[AVAsynchronousVideoCompositionRequest _willDeallocOrFinalize]
-[AVAsynchronousVideoCompositionRequest finalize]
-[AVAsynchronousVideoCompositionRequest dealloc]
-[AVAsynchronousVideoCompositionRequest copyWithZone:]
-[AVAsynchronousVideoCompositionRequest renderContext]
-[AVAsynchronousVideoCompositionRequest compositionTime]
-[AVAsynchronousVideoCompositionRequest sourceTrackIDs]
-[AVAsynchronousVideoCompositionRequest videoCompositionInstruction]
-[AVAsynchronousVideoCompositionRequest sourceFrameByTrackID:]
-[AVAsynchronousVideoCompositionRequest finishWithComposedVideoFrame:]
-[AVAsynchronousVideoCompositionRequest finishWithError:]
-[AVAsynchronousVideoCompositionRequest finishCancelledRequest]
-[AVAsynchronousVideoCompositionRequest(Internal) initUsingSession:withRenderContext:compositionFrame:atTime:usingSources:instruction:]
-[AVAsynchronousVideoCompositionRequest(Internal) compositionFrame]
-[AVVideoCompositionRenderContextInternal _willDeallocOrFinalize]
___65-[AVVideoCompositionRenderContextInternal _willDeallocOrFinalize]_block_invoke
-[AVVideoCompositionRenderContextInternal finalize]
-[AVVideoCompositionRenderContextInternal dealloc]
-[AVVideoCompositionRenderContext _willDeallocOrFinalize]
-[AVVideoCompositionRenderContext finalize]
-[AVVideoCompositionRenderContext dealloc]
-[AVVideoCompositionRenderContext size]
-[AVVideoCompositionRenderContext renderTransform]
-[AVVideoCompositionRenderContext renderScale]
-[AVVideoCompositionRenderContext pixelAspectRatio]
-[AVVideoCompositionRenderContext edgeWidths]
-[AVVideoCompositionRenderContext highQualityRendering]
-[AVVideoCompositionRenderContext videoComposition]
-[AVVideoCompositionRenderContext newPixelBuffer]
___49-[AVVideoCompositionRenderContext newPixelBuffer]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[AVVideoCompositionRenderContext(Internal) renderContextPropertiesFromFigCompositor:]
___86+[AVVideoCompositionRenderContext(Internal) renderContextPropertiesFromFigCompositor:]_block_invoke
-[AVVideoCompositionRenderContext(Internal) initWithFigVideoCompositor:clientRequiredPixelBufferAttributes:videoComposition:pixelBufferPool:]
-[AVVideoCompositionRenderContext(Internal) hasEqualPropertiesToFigVideoCompositor:]
-[AVVideoCompositionRenderContext(Internal) pixelBufferPool]
-[AVVideoCompositionRenderContext(Internal) isBufferYCbCr:]
_AVGetValidAudioTimePitchAlgorithms
_AVExportSettingsForExportPreset
_AVExportSettingsForOutputSettingsPreset
_exportSettings_exportPresetForOutputSettingsPreset
_AVExportSettingsAverageBitRateForSourceAndExportPreset
_AVExportSettingsAverageBitRateForSourceAndOutputSettingsPreset
-[AVCaptureAudioPreviewOutput _updateOutputDeviceUniqueID].inAddress
-[AVCaptureAudioPreviewOutput addOutputUnitsForConnection:toGraph:ofCaptureSession:error:].inAddress
_.memset_pattern
+[AVCaptureDALDevice _putDeviceIntoInputModeIfPossible:].deviceIsRunningSomewhereAddress
+[AVCaptureDALDevice _putDeviceIntoInputModeIfPossible:].booleanControlPropertyValuePropertyAddress
-[AVCaptureDALDevice setActiveInputSource:].inAddress
-[AVCaptureDALDevice supportedFrameRateRangesForStream:formatDescription:].rateRangesProp
-[AVCaptureDALDevice supportedFrameRateRangesForStream:formatDescription:].ratesProp
-[AVCaptureDALDevice _refreshInputSources].inAddress
-[AVCaptureDALDevice _refreshInputSources].itemNamePropAddress
-[AVCaptureDALDevice _retrieveRS422DeviceValues].rs422Address
-[AVCaptureDALDevice isHighResolutionCamera].streamsPropertyAddress
-[AVCaptureDALDevice isHighResolutionCamera].formatDescriptionsPropertyAddress
-[AVCaptureDALDevice(AVCaptureDeviceTransportControls) _retrieveTransportControlsSupported].propertyAddress
_RemoveListenerForProperty.tunePropAddress
_RemoveListenerForProperty.ownedObjectsPropAddress
_RemoveListenerForProperty.streamPropAddress
_AddListenerForProperty.tunePropAddress
_AddListenerForProperty.ownedObjectsPropAddress
_AddListenerForProperty.streamPropAddress
+[AVCaptureHALDevice _refreshDevices].inAddress
+[AVCaptureHALDevice defaultDeviceWithMediaType:].inAddress
-[AVCaptureHALDevice setConnectionID:].inAddress
-[AVCaptureHALDevice setActiveFormat:].inAddress
-[AVCaptureHALDevice transportType].inAddress
-[AVCaptureHALDevice setActiveInputSource:].inAddress
-[AVCaptureHALDevice _getDeviceChannelCount].propAddress
-[AVCaptureHALDevice _refreshFormats].kPreferredAudioSampleRate
-[AVCaptureHALDevice _refreshFormats].inAddress
-[AVCaptureHALDevice _refreshInputSources].inAddress
-[AVCaptureHALDevice _refreshInputSources].inputSourceNameTranslation
-[AVCaptureHALDevice isInUseByAnotherApplication].inAddress
-[AVCaptureVideoDataOutput availableVideoCVPixelFormatTypes].cvPixelCodecTypes
-[AVResolvedDecompressionSettings pixelBufferAttributes].bestDefaultFormats
_MediaIODeviceConfigureToBestMatchPixelBufferAttributesAndMinimumFrameDuration.preferredVideoCodecTypes
-[AVCaptureStillImageOutput availableImageDataCVPixelFormatTypes].cvPixelCodecTypes
_kCodeSignRequirement
-[AVOutputSettingsAssistant audioSettings].acl
GCC_except_table5
GCC_except_table28
GCC_except_table43
GCC_except_table49
GCC_except_table70
GCC_except_table82
GCC_except_table127
GCC_except_table131
GCC_except_table109
GCC_except_table12
GCC_except_table31
GCC_except_table49
GCC_except_table101
GCC_except_table181
GCC_except_table185
GCC_except_table19
GCC_except_table30
GCC_except_table37
GCC_except_table83
GCC_except_table87
GCC_except_table155
GCC_except_table189
GCC_except_table342
GCC_except_table346
GCC_except_table364
GCC_except_table443
GCC_except_table447
GCC_except_table451
GCC_except_table480
GCC_except_table496
GCC_except_table500
GCC_except_table9
GCC_except_table18
GCC_except_table32
GCC_except_table39
GCC_except_table126
GCC_except_table137
GCC_except_table55
GCC_except_table137
GCC_except_table336
GCC_except_table58
GCC_except_table66
GCC_except_table74
GCC_except_table38
GCC_except_table42
GCC_except_table49
GCC_except_table59
GCC_except_table115
GCC_except_table139
GCC_except_table9
GCC_except_table13
GCC_except_table1
GCC_except_table22
GCC_except_table13
GCC_except_table19
GCC_except_table23
GCC_except_table36
GCC_except_table51
GCC_except_table55
GCC_except_table56
GCC_except_table58
GCC_except_table59
GCC_except_table60
GCC_except_table61
GCC_except_table25
GCC_except_table26
GCC_except_table31
GCC_except_table34
GCC_except_table35
GCC_except_table39
GCC_except_table41
GCC_except_table43
GCC_except_table44
GCC_except_table45
GCC_except_table57
GCC_except_table1
GCC_except_table2
GCC_except_table6
GCC_except_table21
GCC_except_table27
GCC_except_table79
GCC_except_table80
GCC_except_table9
GCC_except_table19
GCC_except_table41
GCC_except_table39
GCC_except_table40
GCC_except_table1
GCC_except_table2
GCC_except_table6
GCC_except_table13
GCC_except_table20
GCC_except_table25
GCC_except_table56
GCC_except_table63
GCC_except_table64
GCC_except_table66
GCC_except_table67
GCC_except_table68
GCC_except_table69
GCC_except_table11
GCC_except_table15
GCC_except_table16
GCC_except_table17
GCC_except_table21
GCC_except_table22
GCC_except_table24
GCC_except_table26
GCC_except_table27
GCC_except_table28
GCC_except_table29
GCC_except_table31
GCC_except_table33
GCC_except_table34
GCC_except_table35
GCC_except_table36
GCC_except_table37
GCC_except_table38
GCC_except_table42
GCC_except_table44
GCC_except_table55
GCC_except_table61
GCC_except_table64
GCC_except_table65
GCC_except_table66
GCC_except_table68
GCC_except_table69
GCC_except_table70
GCC_except_table71
GCC_except_table88
GCC_except_table90
GCC_except_table20
GCC_except_table21
GCC_except_table43
GCC_except_table45
GCC_except_table15
GCC_except_table17
GCC_except_table18
GCC_except_table19
GCC_except_table25
GCC_except_table26
GCC_except_table8
GCC_except_table15
GCC_except_table16
GCC_except_table9
GCC_except_table7
GCC_except_table19
GCC_except_table23
GCC_except_table39
GCC_except_table44
GCC_except_table12
GCC_except_table58
GCC_except_table4
GCC_except_table14
GCC_except_table8
GCC_except_table2
GCC_except_table15
GCC_except_table21
GCC_except_table45
GCC_except_table49
GCC_except_table57
GCC_except_table67
GCC_except_table86
GCC_except_table91
GCC_except_table102
GCC_except_table3
GCC_except_table11
GCC_except_table17
GCC_except_table21
GCC_except_table24
GCC_except_table29
GCC_except_table24
GCC_except_table30
GCC_except_table44
GCC_except_table70
GCC_except_table97
GCC_except_table129
GCC_except_table6
GCC_except_table17
GCC_except_table21
GCC_except_table16
GCC_except_table28
GCC_except_table32
GCC_except_table38
GCC_except_table42
GCC_except_table46
GCC_except_table50
GCC_except_table36
GCC_except_table10
___block_descriptor_tmp
___block_descriptor_tmp111
___block_literal_global
___block_descriptor_tmp118
___block_literal_global119
___block_descriptor_tmp141
___block_descriptor_tmp144
___block_literal_global145
___block_descriptor_tmp155
___block_descriptor_tmp158
___block_literal_global159
___block_descriptor_tmp167
___block_descriptor_tmp189
___block_descriptor_tmp202
___block_descriptor_tmp212
___block_descriptor_tmp240
___block_descriptor_tmp250
___block_descriptor_tmp273
___block_descriptor_tmp290
___block_descriptor_tmp298
___block_descriptor_tmp312
___block_descriptor_tmp316
___block_descriptor_tmp334
_AVMoviePrepareForIncrementalFragmentsKey
___block_descriptor_tmp
___block_descriptor_tmp105
___block_descriptor_tmp111
___block_descriptor_tmp
___block_descriptor_tmp205
___block_descriptor_tmp217
___block_descriptor_tmp232
___block_descriptor_tmp240
___block_descriptor_tmp244
___block_descriptor_tmp329
___block_literal_global
___block_descriptor_tmp477
___block_descriptor_tmp483
___block_descriptor_tmp488
___block_descriptor_tmp498
___block_descriptor_tmp503
___block_descriptor_tmp525
___block_literal_global526
___block_descriptor_tmp534
___block_literal_global535
_AVURLAssetInspectorLoaderKey
_AVMetadataFormatTypedID3Metadata
___block_descriptor_tmp
___block_descriptor_tmp450
___block_literal_global
___block_descriptor_tmp460
___block_literal_global461
___block_descriptor_tmp463
___block_literal_global464
___block_descriptor_tmp471
___block_literal_global472
___block_descriptor_tmp478
___block_literal_global479
___block_descriptor_tmp567
___block_descriptor_tmp571
___block_descriptor_tmp618
___block_descriptor_tmp633
___block_descriptor_tmp645
___block_descriptor_tmp
___block_descriptor_tmp140
___block_descriptor_tmp147
___block_descriptor_tmp151
___block_descriptor_tmp169
___block_descriptor_tmp175
___block_descriptor_tmp181
___block_descriptor_tmp
___block_literal_global
_AVPlayerItemCanOccupyOnePositionOnlyExceptionReason
_AVPlayerCurrentItemPresentationSizeKey
_AVPlayerCurrentItemNonForcedSubtitlesEnabledKey
___block_descriptor_tmp
___block_descriptor_tmp200
___block_descriptor_tmp220
___block_descriptor_tmp226
___block_descriptor_tmp256
___block_descriptor_tmp287
___block_descriptor_tmp300
___block_descriptor_tmp322
___block_descriptor_tmp359
___block_descriptor_tmp367
___block_descriptor_tmp383
___block_descriptor_tmp394
___block_descriptor_tmp435
___block_descriptor_tmp445
___block_descriptor_tmp457
___block_descriptor_tmp476
___block_descriptor_tmp482
___block_descriptor_tmp490
___block_literal_global
___block_descriptor_tmp495
___block_literal_global496
___block_descriptor_tmp518
___block_descriptor_tmp522
___block_descriptor_tmp526
___block_descriptor_tmp530
___block_descriptor_tmp558
___block_descriptor_tmp562
___block_descriptor_tmp566
___block_literal_global567
___block_descriptor_tmp709
___block_literal_global710
___block_descriptor_tmp712
___block_literal_global713
___block_descriptor_tmp743
___block_descriptor_tmp756
___block_descriptor_tmp764
___block_descriptor_tmp778
___block_descriptor_tmp802
___block_descriptor_tmp833
___block_descriptor_tmp
___block_descriptor_tmp409
___block_descriptor_tmp425
___block_descriptor_tmp429
___block_descriptor_tmp461
___block_descriptor_tmp576
___block_literal_global
___block_descriptor_tmp583
___block_descriptor_tmp604
___block_descriptor_tmp614
___block_descriptor_tmp622
___block_descriptor_tmp662
___block_descriptor_tmp672
___block_descriptor_tmp682
___block_descriptor_tmp690
___block_descriptor_tmp698
___block_descriptor_tmp706
___block_descriptor_tmp714
___block_descriptor_tmp718
___block_descriptor_tmp758
___block_descriptor_tmp766
___block_descriptor_tmp770
___block_descriptor_tmp778
___block_descriptor_tmp786
___block_descriptor_tmp796
___block_descriptor_tmp806
___block_descriptor_tmp814
___block_descriptor_tmp822
___block_descriptor_tmp871
___block_descriptor_tmp879
___block_descriptor_tmp885
___block_descriptor_tmp891
___block_descriptor_tmp917
___block_descriptor_tmp927
___block_descriptor_tmp935
___block_literal_global936
___block_descriptor_tmp982
___block_descriptor_tmp990
___block_descriptor_tmp994
___block_descriptor_tmp1004
___block_descriptor_tmp1008
___block_descriptor_tmp1014
___block_descriptor_tmp1018
___block_descriptor_tmp1043
___block_descriptor_tmp1191
___block_descriptor_tmp1215
___block_descriptor_tmp1225
___block_descriptor_tmp1309
___block_descriptor_tmp1313
___block_descriptor_tmp1317
___block_descriptor_tmp1323
___block_descriptor_tmp1331
___block_descriptor_tmp1341
___block_descriptor_tmp1345
___block_descriptor_tmp1355
___block_descriptor_tmp1359
___block_descriptor_tmp1367
___block_descriptor_tmp1384
___block_descriptor_tmp1390
___block_descriptor_tmp1394
___block_descriptor_tmp1398
___block_descriptor_tmp1410
___block_descriptor_tmp1452
___block_descriptor_tmp1478
___block_descriptor_tmp
___block_descriptor_tmp54
___block_descriptor_tmp60
___block_descriptor_tmp
___block_descriptor_tmp53
___block_descriptor_tmp73
___block_descriptor_tmp
___block_descriptor_tmp102
___block_descriptor_tmp108
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp152
___block_descriptor_tmp427
___block_descriptor_tmp432
___block_descriptor_tmp515
___block_descriptor_tmp521
___block_descriptor_tmp625
___block_descriptor_tmp630
___block_descriptor_tmp745
___block_literal_global
___block_descriptor_tmp757
___block_descriptor_tmp
___block_descriptor_tmp251
___block_descriptor_tmp381
___block_descriptor_tmp387
___block_descriptor_tmp391
___block_descriptor_tmp608
___block_descriptor_tmp640
___block_descriptor_tmp712
___block_descriptor_tmp738
___block_descriptor_tmp850
___block_descriptor_tmp854
___block_descriptor_tmp879
___block_descriptor_tmp974
___block_descriptor_tmp997
___block_descriptor_tmp1003
___block_descriptor_tmp1007
___block_descriptor_tmp
___block_descriptor_tmp296
___block_descriptor_tmp300
___block_descriptor_tmp313
___block_descriptor_tmp319
___block_descriptor_tmp329
___block_descriptor_tmp541
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp174
___block_descriptor_tmp255
___block_descriptor_tmp267
___block_descriptor_tmp273
___block_descriptor_tmp288
___block_descriptor_tmp292
___block_descriptor_tmp298
___block_descriptor_tmp330
___block_descriptor_tmp346
___block_descriptor_tmp509
___block_literal_global
___block_descriptor_tmp517
___block_literal_global518
___block_descriptor_tmp527
___block_literal_global528
___block_descriptor_tmp530
___block_literal_global531
___block_descriptor_tmp533
___block_literal_global534
___block_descriptor_tmp536
___block_literal_global537
___block_descriptor_tmp540
___block_literal_global541
___block_descriptor_tmp549
___block_literal_global550
___block_descriptor_tmp582
___block_literal_global583
___block_descriptor_tmp606
___block_descriptor_tmp651
___block_descriptor_tmp665
___block_descriptor_tmp
___block_descriptor_tmp28
___block_descriptor_tmp32
___block_descriptor_tmp36
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp6
___block_literal_global7
___block_descriptor_tmp38
___block_literal_global39
___block_descriptor_tmp53
___block_descriptor_tmp
___block_descriptor_tmp38
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp130
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp37
___block_descriptor_tmp80
___block_descriptor_tmp86
___block_descriptor_tmp92
___block_descriptor_tmp106
___block_descriptor_tmp129
___block_descriptor_tmp135
___block_descriptor_tmp141
___block_literal_global
___block_descriptor_tmp151
___block_descriptor_tmp158
___block_descriptor_tmp162
___block_descriptor_tmp178
___block_descriptor_tmp184
___block_descriptor_tmp188
___block_descriptor_tmp200
_AVAsynchronousLoadingPropertyBatchIDKey
_AVAsynchronousLoadingCompletionHandlerKey
___block_descriptor_tmp
___block_descriptor_tmp271
___block_descriptor_tmp285
___block_descriptor_tmp306
___block_descriptor_tmp320
___block_descriptor_tmp367
___block_descriptor_tmp371
___block_literal_global
___block_descriptor_tmp482
___block_literal_global483
___block_descriptor_tmp490
___block_literal_global491
___block_descriptor_tmp495
___block_literal_global496
___block_descriptor_tmp
___block_descriptor_tmp190
___block_descriptor_tmp366
___block_literal_global
___block_descriptor_tmp400
___block_descriptor_tmp411
___block_descriptor_tmp416
___block_descriptor_tmp471
___block_descriptor_tmp475
___block_literal_global476
___block_descriptor_tmp
___block_descriptor_tmp18
___block_descriptor_tmp24
___block_descriptor_tmp
___block_descriptor_tmp17
___block_descriptor_tmp60
___block_descriptor_tmp74
___block_descriptor_tmp
___block_descriptor_tmp60
___block_descriptor_tmp68
___block_descriptor_tmp81
___block_descriptor_tmp101
___block_descriptor_tmp111
___block_descriptor_tmp115
___block_descriptor_tmp147
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp261
___block_descriptor_tmp267
___block_descriptor_tmp
___block_descriptor_tmp34
___block_descriptor_tmp
___block_descriptor_tmp65
___block_descriptor_tmp117
___block_descriptor_tmp149
___block_descriptor_tmp153
___block_descriptor_tmp157
___block_descriptor_tmp166
___block_descriptor_tmp176
_AVCaptureAnyMediaType
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp327
___block_descriptor_tmp379
___block_descriptor_tmp384
___block_descriptor_tmp389
___block_descriptor_tmp393
___block_descriptor_tmp
_AVResolvedDecompressionSettingsPixelBufferAttributesKey
_AVResolvedDecompressionSettingsVideoFieldModeKey
_AVResolvedDecompressionSettingsAllowUpscalingKey
_AVResolvedDecompressionSettingsMinFrameDurationKey
_AVResolvedDecompressionSettingsMaxFrameDurationKey
_AVResolvedDecompressionSettingsVideoOrientationKey
_AVResolvedDecompressionSettingsVideoMirroredKey
_AVResolvedDecompressionSettingsOutputCodecTypeKey
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp6
___block_descriptor_tmp11
___block_descriptor_tmp16
___block_descriptor_tmp20
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp72
___block_descriptor_tmp89
___block_descriptor_tmp101
___block_descriptor_tmp111
___block_descriptor_tmp115
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp56
___block_descriptor_tmp61
___block_descriptor_tmp66
___block_descriptor_tmp124
___block_descriptor_tmp128
___block_descriptor_tmp
___block_descriptor_tmp43
___block_descriptor_tmp106
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp136
___block_descriptor_tmp140
___block_descriptor_tmp144
___block_descriptor_tmp150
___block_descriptor_tmp188
___block_descriptor_tmp200
___block_descriptor_tmp
___block_descriptor_tmp39
___block_descriptor_tmp105
___block_descriptor_tmp111
___block_descriptor_tmp115
___block_descriptor_tmp119
___block_descriptor_tmp123
___block_descriptor_tmp127
___block_descriptor_tmp133
___block_descriptor_tmp156
___block_descriptor_tmp162
___block_descriptor_tmp178
___block_descriptor_tmp186
___block_descriptor_tmp192
___block_descriptor_tmp219
___block_descriptor_tmp224
___block_descriptor_tmp228
___block_descriptor_tmp
___block_descriptor_tmp66
___block_descriptor_tmp
___block_descriptor_tmp34
___block_descriptor_tmp40
___block_descriptor_tmp
___block_descriptor_tmp48
___block_descriptor_tmp72
___block_descriptor_tmp80
___block_descriptor_tmp96
___block_descriptor_tmp102
___block_descriptor_tmp168
___block_descriptor_tmp174
___block_descriptor_tmp187
___block_descriptor_tmp191
___block_descriptor_tmp201
___block_descriptor_tmp206
___block_literal_global
___block_descriptor_tmp220
___block_descriptor_tmp228
___block_descriptor_tmp237
___block_descriptor_tmp241
___block_descriptor_tmp245
___block_descriptor_tmp321
___block_descriptor_tmp336
___block_descriptor_tmp340
___block_descriptor_tmp
___block_descriptor_tmp50
___block_descriptor_tmp72
___block_descriptor_tmp93
___block_descriptor_tmp146
___block_literal_global
___block_descriptor_tmp156
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp133
___block_descriptor_tmp145
___block_descriptor_tmp152
___block_descriptor_tmp180
___block_descriptor_tmp185
___block_descriptor_tmp190
___block_descriptor_tmp210
___block_descriptor_tmp225
___block_descriptor_tmp234
___block_descriptor_tmp311
___block_descriptor_tmp315
___block_descriptor_tmp396
___block_descriptor_tmp408
___block_descriptor_tmp493
___block_descriptor_tmp501
___block_descriptor_tmp
___block_descriptor_tmp52
___block_descriptor_tmp64
___block_descriptor_tmp68
___block_descriptor_tmp103
___block_descriptor_tmp109
___block_descriptor_tmp113
___block_descriptor_tmp122
___block_descriptor_tmp126
___block_descriptor_tmp130
___block_descriptor_tmp
___block_descriptor_tmp117
___block_descriptor_tmp126
___block_descriptor_tmp130
___block_descriptor_tmp152
___block_descriptor_tmp156
___block_descriptor_tmp164
___block_descriptor_tmp175
___block_descriptor_tmp179
___block_descriptor_tmp183
___block_descriptor_tmp
___block_descriptor_tmp63
___block_descriptor_tmp69
___block_descriptor_tmp75
___block_descriptor_tmp79
___block_descriptor_tmp84
___block_descriptor_tmp88
___block_descriptor_tmp133
___block_descriptor_tmp145
___block_descriptor_tmp149
___block_descriptor_tmp159
___block_descriptor_tmp167
___block_descriptor_tmp173
___block_descriptor_tmp
___block_descriptor_tmp55
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp48
___block_descriptor_tmp90
___block_literal_global91
_AVExportSettingsKey_AudioDictionary
_AVExportSettingsKey_AudioSettingPerChannelCount
_AVExportSettingsKey_AudioPreset
_AVExportSettingsKey_ApplicableAudioCodecs
_AVExportSettingsKey_MaxAudioBitRate
_AVExportSettingsKey_MinAudioBitRate
_AVExportSettingsKey_AudioAverageBitRate
_AVExportSettingsKey_VideoDictionary
_AVExportSettingsKey_ApplicableVideoCodecs
_AVExportSettingsKey_VideoCodec
_AVExportSettingsKey_MaxWidth
_AVExportSettingsKey_MinWidth
_AVExportSettingsKey_Width
_AVExportSettingsKey_MaxHeight
_AVExportSettingsKey_MinHeight
_AVExportSettingsKey_Height
_AVExportSettingsKey_ScalingMode
_AVExportSettingsKey_VideoMatrixHandling
_AVExportSettingsKey_MaxFrameRate
_AVExportSettingsKey_MinFrameRate
_AVExportSettingsKey_FrameDurationValue
_AVExportSettingsKey_FrameDurationTimeScale
_AVExportSettingsKey_MaxVideoBitRate
_AVExportSettingsKey_MinVideoBitRate
_AVExportSettingsKey_VideoAverageBitRate
_AVExportSettingsKey_KeyFrameInterval
_AVExportSettingsKey_FrameReordering
_AVExportSettingsKey_ProfileLevel
_AVExportSettingsKey_EntropyMode
_AVExportSettingsKey_ColorPrimaries
_AVExportSettingsKey_TransferFunction
_AVExportSettingsKey_YCbCrMatrix
_AVExportSettingsKey_DataRateLimitBytes
_AVExportSettingsKey_DataRateLimitDuration
_AVExportSettingsKey_UsageMode
_AVExportSettingsKey_MediaTiers
_AVExportSettingsKey_AudioInterleavingAdvance
_AVExportSettingsKey_MaxFileSize
_OBJC_IVAR_$_AVPlayerLayer._playerLayer
_OBJC_IVAR_$_CMTimeAsValue._time
_OBJC_IVAR_$_CMTimeRangeAsValue._timeRange
_OBJC_IVAR_$_CMTimeMappingAsValue._timeMapping
_OBJC_IVAR_$_AVFragmentedMovieMinder._fragmentedMovieMinder
_OBJC_IVAR_$_AVMetadataItemFilter._itemFilterInternal
_OBJC_IVAR_$_AVAsset._asset
_OBJC_IVAR_$_AVURLAsset._URLAsset
_OBJC_IVAR_$_AVAssetTrackEnumerator._enumerator
_OBJC_IVAR_$_AVAssetTrackEnumerator._mediaType
_OBJC_IVAR_$_AVAssetTrackEnumerator._mediaCharacteristics
_OBJC_IVAR_$_AVAssetImageGenerator._priv
_OBJC_IVAR_$_AVAssetTrack._track
_OBJC_IVAR_$_AVPlayer._player
_OBJC_IVAR_$_AVPlayerItem._playerItem
_OBJC_IVAR_$_AVPlayerConnection._playerReference
_OBJC_IVAR_$_AVPlayerConnection._playerItemReference
_OBJC_IVAR_$_AVPlayerConnection._shouldAppendItem
_OBJC_IVAR_$_AVPlayerConnection._status
_OBJC_IVAR_$_AVPlayerConnection._error
_OBJC_IVAR_$_AVPlayerConnection._previousPlayerItem
_OBJC_IVAR_$_AVPlayerItemTrack._playerItemTrack
_OBJC_IVAR_$_AVQueuePlayer._queuePlayer
_OBJC_IVAR_$_AVComposition._priv
_OBJC_IVAR_$_AVMutableComposition._mutablePriv
_OBJC_IVAR_$_AVCompositionTrack._priv
_OBJC_IVAR_$_AVMutableCompositionTrack._mutablePriv
_OBJC_IVAR_$_AVCompositionTrackSegment._priv
_OBJC_IVAR_$_AVAssetReader._priv
_OBJC_IVAR_$_AVAssetReaderOutput._internal
_OBJC_IVAR_$_AVAssetReaderTrackOutput._trackOutputInternal
_OBJC_IVAR_$_AVAssetReaderAudioMixOutput._audioMixOutputInternal
_OBJC_IVAR_$_AVAssetReaderVideoCompositionOutput._videoCompositionOutputInternal
_OBJC_IVAR_$_AVAssetReaderSampleReferenceOutput._sampleReferenceOutputInternal
_OBJC_IVAR_$_AVAssetWriterConfigurationState._URL
_OBJC_IVAR_$_AVAssetWriterConfigurationState._mediaFileType
_OBJC_IVAR_$_AVAssetWriterConfigurationState._directoryForTemporaryFiles
_OBJC_IVAR_$_AVAssetWriterConfigurationState._metadataItems
_OBJC_IVAR_$_AVAssetWriterConfigurationState._inputs
_OBJC_IVAR_$_AVAssetWriterConfigurationState._inputGroups
_OBJC_IVAR_$_AVAssetWriterConfigurationState._movieFragmentInterval
_OBJC_IVAR_$_AVAssetWriterConfigurationState._shouldOptimizeForNetworkUse
_OBJC_IVAR_$_AVAssetWriterConfigurationState._movieTimeScale
_OBJC_IVAR_$_AVAssetWriterConfigurationState._preferredTransform
_OBJC_IVAR_$_AVAssetWriterConfigurationState._preferredVolume
_OBJC_IVAR_$_AVAssetWriterConfigurationState._preferredRate
_OBJC_IVAR_$_AVAssetWriter._internal
_OBJC_IVAR_$_AVAssetWriterUnknownHelper._alternateGroupID
_OBJC_IVAR_$_AVAssetWriterFigAssetWriterNotificationHandler._figAssetWriter
_OBJC_IVAR_$_AVAssetWriterFigAssetWriterNotificationHandler._weakReferenceToSelf
_OBJC_IVAR_$_AVAssetWriterFigAssetWriterNotificationHandler._weakReferenceToDelegate
_OBJC_IVAR_$_AVAssetWriterFigAssetWriterNotificationHandler._didNotCallDelegate
_OBJC_IVAR_$_AVAssetWriterFigAssetWriterNotificationHandler._notificationHandlersAreRegistered
_OBJC_IVAR_$_AVAssetWriterWritingHelper._weakReference
_OBJC_IVAR_$_AVAssetWriterWritingHelper._figAssetWriter
_OBJC_IVAR_$_AVAssetWriterWritingHelper._notificationHandler
_OBJC_IVAR_$_AVAssetWriterWritingHelper._figAssetWriterAccessQueue
_OBJC_IVAR_$_AVAssetWriterWritingHelper._startSessionCalled
_OBJC_IVAR_$_AVAssetWriterFinishWritingHelper._delegate
_OBJC_IVAR_$_AVAssetWriterFinishWritingHelper._figAssetWriter
_OBJC_IVAR_$_AVAssetWriterFinishWritingHelper._figAssetWriterAccessQueue
_OBJC_IVAR_$_AVAssetWriterFinishWritingHelper._weakReferenceToSelf
_OBJC_IVAR_$_AVAssetWriterDoNothingFinishWritingDelegate._handler
_OBJC_IVAR_$_AVAssetWriterDoNothingFinishWritingDelegate._handlerCalled
_OBJC_IVAR_$_AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate._finishedWritingNotificationSemaphore
_OBJC_IVAR_$_AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate._weakReferenceToSelf
_OBJC_IVAR_$_AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate._weakReferenceToHelper
_OBJC_IVAR_$_AVAssetWriterAsynchronousFinishWritingDelegate._handler
_OBJC_IVAR_$_AVAssetWriterAsynchronousFinishWritingDelegate._handlerCalled
_OBJC_IVAR_$_AVAssetWriterAsynchronousFinishWritingDelegate._weakReferenceToSelf
_OBJC_IVAR_$_AVAssetWriterAsynchronousFinishWritingDelegate._notificationHandler
_OBJC_IVAR_$_AVAssetWriterAsynchronousFinishWritingDelegate._weakReferenceToHelper
_OBJC_IVAR_$_AVAssetWriterFailedTerminalHelper._terminalError
_OBJC_IVAR_$_AVAssetWriterClientInitiatedTerminalHelper._terminalStatus
_OBJC_IVAR_$_AVAssetWriterHelper._configurationState
_OBJC_IVAR_$_AVAssetWriterHelper._weakReferenceToAssetWriter
_OBJC_IVAR_$_AVAssetWriterInputGroup._internal
_OBJC_IVAR_$_AVAssetWriterInputSelectionOption._input
_OBJC_IVAR_$_AVAssetWriterInputSelectionOption._mediaType
_OBJC_IVAR_$_AVAssetWriterInputSelectionOption._outputSettings
_OBJC_IVAR_$_AVAssetWriterInputSelectionOption._sourceFormatHint
_OBJC_IVAR_$_AVAssetWriterInputSelectionOption._languageCode
_OBJC_IVAR_$_AVAssetWriterInputSelectionOption._extendedLanguageTag
_OBJC_IVAR_$_AVAssetWriterInputSelectionOption._metadata
_OBJC_IVAR_$_AVAssetWriterInputSelectionOption._trackReferences
_OBJC_IVAR_$_AVAssetWriterInputSelectionOption._displaysNonForcedSubtitles
_OBJC_IVAR_$_AVAssetWriterInputSelectionOption._enabled
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._mediaType
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._outputSettings
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._sourceFormatHint
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._sourcePixelBufferAttributes
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._metadataItems
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._languageCode
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._extendedLanguageTag
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._trackReferences
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._sampleReferenceBaseURL
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._attachedToPixelBufferAdaptor
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._transform
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._mediaTimeScale
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._expectsMediaDataInRealTime
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._naturalSize
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._marksOutputTrackAsEnabled
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._preferredVolume
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._layer
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._alternateGroupID
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._performsMultiPassEncodingIfSupported
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._chunkDuration
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._chunkAlignment
_OBJC_IVAR_$_AVAssetWriterInputConfigurationState._chunkSize
_OBJC_IVAR_$_AVAssetWriterInput._internal
_OBJC_IVAR_$_AVAssetWriterInputWritingHelper._assetWriterTrack
_OBJC_IVAR_$_AVAssetWriterInputWritingHelper._currentPassDescription
_OBJC_IVAR_$_AVAssetWriterInputWritingHelper._mediaDataRequester
_OBJC_IVAR_$_AVAssetWriterInputWritingHelper._pixelBufferPool
_OBJC_IVAR_$_AVAssetWriterInputInterPassAnalysisHelper._writingHelper
_OBJC_IVAR_$_AVAssetWriterInputInterPassAnalysisHelper._initialPassDescription
_OBJC_IVAR_$_AVAssetWriterInputNoMorePassesHelper._writingHelper
_OBJC_IVAR_$_AVAssetWriterInputTerminalHelper._terminalStatus
_OBJC_IVAR_$_AVAssetWriterInputTerminalHelper._didRequestMediaDataOnce
_OBJC_IVAR_$_AVAssetWriterInputHelper._configurationState
_OBJC_IVAR_$_AVAssetWriterInputHelper._weakReferenceToAssetWriterInput
_OBJC_IVAR_$_AVAssetWriterInputPixelBufferAdaptor._internal
_OBJC_IVAR_$_AVFigAssetWriterTrack._figAssetWriter
_OBJC_IVAR_$_AVFigAssetWriterTrack._mediaType
_OBJC_IVAR_$_AVFigAssetWriterTrack._mediaFileType
_OBJC_IVAR_$_AVFigAssetWriterTrack._trackID
_OBJC_IVAR_$_AVFigAssetWriterTrack._weakReference
_OBJC_IVAR_$_AVFigAssetWriterTrack._aboveHighWaterLevelQueue
_OBJC_IVAR_$_AVFigAssetWriterTrack._sampleBufferCoalescingInterval
_OBJC_IVAR_$_AVFigAssetWriterTrack._aboveHighWaterLevel
_OBJC_IVAR_$_AVFigAssetWriterTrack._endPassOperation
_OBJC_IVAR_$_AVFigAssetWriterAudioTrack._pendingAudioSampleBuffers
_OBJC_IVAR_$_AVAssetWriterInputMediaDataRequester._requestQueue
_OBJC_IVAR_$_AVAssetWriterInputMediaDataRequester._requestBlock
_OBJC_IVAR_$_AVAssetWriterInputMediaDataRequester._delegate
_OBJC_IVAR_$_AVAssetWriterInputPassDescriptionResponder._callbackQueue
_OBJC_IVAR_$_AVAssetWriterInputPassDescriptionResponder._callbackBlock
_OBJC_IVAR_$_AVAssetWriterInputPassDescriptionResponder._serializationQueue
_OBJC_IVAR_$_AVAssetWriterInputPassDescriptionResponder._mostRecentPassDescription
_OBJC_IVAR_$_AVAssetWriterInputPassDescriptionResponder._hasRespondedAtLeastOnce
_OBJC_IVAR_$_AVAssetWriterInputPassDescriptionResponder._stoppedResponding
_OBJC_IVAR_$_AVAssetWriterInputFigAssetWriterEndPassOperation._figAssetWriter
_OBJC_IVAR_$_AVAssetWriterInputFigAssetWriterEndPassOperation._trackID
_OBJC_IVAR_$_AVAssetWriterInputFigAssetWriterEndPassOperation._completionBlock
_OBJC_IVAR_$_AVAssetWriterInputFigAssetWriterEndPassOperation._error
_OBJC_IVAR_$_AVAssetWriterInputFigAssetWriterEndPassOperation._nextPassDescription
_OBJC_IVAR_$_AVAssetWriterInputFigAssetWriterEndPassOperation._succeeded
_OBJC_IVAR_$_AVAssetWriterInputPassDescription._internal
_OBJC_IVAR_$_AVVideoCompositionInstruction._instruction
_OBJC_IVAR_$_AVMutableVideoCompositionInstruction._mutableInstruction
_OBJC_IVAR_$_AVVideoCompositionLayerInstruction._layerInstruction
_OBJC_IVAR_$_AVMutableVideoCompositionLayerInstruction._mutableLayerInstruction
_OBJC_IVAR_$_AVVideoComposition._videoComposition
_OBJC_IVAR_$_AVMutableVideoComposition._mutableVideoComposition
_OBJC_IVAR_$_AVVideoCompositionCoreAnimationTool._videoCompositionTool
_OBJC_IVAR_$_AVAssetExportSession._exportSession
_OBJC_IVAR_$_AVSynchronizedLayer._syncLayer
_OBJC_IVAR_$_AVMetadataEnumerator._count
_OBJC_IVAR_$_AVMetadataEnumerator._reader
_OBJC_IVAR_$_AVMetadataEnumerator._arrayEnumerator
_OBJC_IVAR_$_AVMetadataEnumerator._key
_OBJC_IVAR_$_AVMetadataEnumerator._keySpace
_OBJC_IVAR_$_AVMetadataEnumerator._locale
_OBJC_IVAR_$_AVMetadataEnumerator._index
_OBJC_IVAR_$_AVAssetTrackSegment._timeMapping
_OBJC_IVAR_$_AVPropertyStorage._storageAccessWorkQueue
_OBJC_IVAR_$_AVPropertyStorage._propertyStorage
_OBJC_IVAR_$_AVAudioMix._audioMix
_OBJC_IVAR_$_AVMutableAudioMix._mutableAudioMix
_OBJC_IVAR_$_AVAudioMixInputParameters._inputParameters
_OBJC_IVAR_$_AVMutableAudioMixInputParameters._mutableInputParameters
_OBJC_IVAR_$_AVRunLoopConditionRunLoopState._runLoop
_OBJC_IVAR_$_AVRunLoopConditionRunLoopState._signaled
_OBJC_IVAR_$_AVRunLoopConditionRunLoopState._signalSource
_OBJC_IVAR_$_AVMovie._movie
_OBJC_IVAR_$_AVMutableMovie._mutableMovieInternal
_OBJC_IVAR_$_AVStreamDataParser._internal
_OBJC_IVAR_$_AVAssetInspectorLoader._weakReference
_OBJC_IVAR_$_AVAssetMakeReadyForInspectionLoader._status
_OBJC_IVAR_$_AVAssetMakeReadyForInspectionLoader._loadingMutex
_OBJC_IVAR_$_AVAssetMakeReadyForInspectionLoader._URL
_OBJC_IVAR_$_AVAssetMakeReadyForInspectionLoader._formatReader
_OBJC_IVAR_$_AVAssetMakeReadyForInspectionLoader._keysAwaitingCompletion
_OBJC_IVAR_$_AVAssetMakeReadyForInspectionLoader._basicInspectionFailureCode
_OBJC_IVAR_$_AVFigAssetInspectorLoader._URL
_OBJC_IVAR_$_AVFigAssetInspectorLoader._figAssetCreationFlags
_OBJC_IVAR_$_AVFigAssetInspectorLoader._figAssetCreationOptions
_OBJC_IVAR_$_AVFigAssetInspectorLoader._assetInspectorOnce
_OBJC_IVAR_$_AVFigAssetInspectorLoader._weakReferenceToAsset
_OBJC_IVAR_$_AVFigAssetInspectorLoader._figAsset
_OBJC_IVAR_$_AVFigAssetInspectorLoader._figAssetOnce
_OBJC_IVAR_$_AVFigAssetInspectorLoader._loadingMutex
_OBJC_IVAR_$_AVFigAssetInspectorLoader._loadingBatches
_OBJC_IVAR_$_AVFigAssetInspectorLoader._completionHandlerQueue
_OBJC_IVAR_$_AVFigAssetInspectorLoader._assetInspector
_OBJC_IVAR_$_AVFigAssetInspectorLoader._figAssetCreationStatus
_OBJC_IVAR_$_AVFigAssetInspectorLoader._loadingCanceled
_OBJC_IVAR_$_AVAssetTrackInspector._weakReference
_OBJC_IVAR_$_AVAssetTrackInspector._synthesizeMediaCharacteristicsOnce
_OBJC_IVAR_$_AVAssetTrackInspector._cachedMediaCharacteristics
_OBJC_IVAR_$_AVTrackReaderInspector._formatReader
_OBJC_IVAR_$_AVTrackReaderInspector._trackReader
_OBJC_IVAR_$_AVTrackReaderInspector._copySampleCursorServiceOnce
_OBJC_IVAR_$_AVTrackReaderInspector._trackID
_OBJC_IVAR_$_AVTrackReaderInspector._mediaType
_OBJC_IVAR_$_AVTrackReaderInspector._weakReferenceToAsset
_OBJC_IVAR_$_AVTrackReaderInspector._figSampleCursorService
_OBJC_IVAR_$_AVTrackReaderInspector._sampleCursorTimeAccuracyIsExact
_OBJC_IVAR_$_AVFigAssetTrackInspector._figAsset
_OBJC_IVAR_$_AVFigAssetTrackInspector._figFormatReader
_OBJC_IVAR_$_AVFigAssetTrackInspector._figAssetTrack
_OBJC_IVAR_$_AVFigAssetTrackInspector._figTrackReader
_OBJC_IVAR_$_AVFigAssetTrackInspector._copySampleCursorServiceOnce
_OBJC_IVAR_$_AVFigAssetTrackInspector._weakReferenceToAsset
_OBJC_IVAR_$_AVFigAssetTrackInspector._loadingMutex
_OBJC_IVAR_$_AVFigAssetTrackInspector._loadingBatches
_OBJC_IVAR_$_AVFigAssetTrackInspector._completionHandlerQueue
_OBJC_IVAR_$_AVFigAssetTrackInspector._figSampleCursorService
_OBJC_IVAR_$_AVFigAssetTrackInspector._sampleCursorTimeAccuracyIsExact
_OBJC_IVAR_$_AVCompositionTrackReaderInspector._figMutableComposition
_OBJC_IVAR_$_AVPlaybackItemTrackInspector._playbackItem
_OBJC_IVAR_$_AVPlaybackItemTrackInspector._trackID
_OBJC_IVAR_$_AVPlaybackItemTrackInspector._weakReferenceToAsset
_OBJC_IVAR_$_AVPlaybackItemTrackInspector._mediaType
_OBJC_IVAR_$_AVMetadataObjectInternal._time
_OBJC_IVAR_$_AVMetadataObjectInternal._duration
_OBJC_IVAR_$_AVMetadataObjectInternal._bounds
_OBJC_IVAR_$_AVMetadataObjectInternal._type
_OBJC_IVAR_$_AVMetadataObjectInternal._input
_OBJC_IVAR_$_AVMetadataObjectInternal._originalMetadataObject
_OBJC_IVAR_$_AVMetadataObject._objectInternal
_OBJC_IVAR_$_AVMetadataFaceObjectInternal._faceID
_OBJC_IVAR_$_AVMetadataFaceObjectInternal._hasRollAngle
_OBJC_IVAR_$_AVMetadataFaceObjectInternal._rollAngle
_OBJC_IVAR_$_AVMetadataFaceObjectInternal._hasYawAngle
_OBJC_IVAR_$_AVMetadataFaceObjectInternal._yawAngle
_OBJC_IVAR_$_AVMetadataFaceObject._internal
_OBJC_IVAR_$_AVGarbageCollectedWeakReference._referencedObject
_OBJC_IVAR_$_AVGarbageCollectedWeakReference._cachedReferencedObjectDescription
_OBJC_IVAR_$_AVRetainReleaseWeakReference._cachedReferencedObjectDescription
_OBJC_IVAR_$_AVRetainReleaseWeakReference._weakStorage
_OBJC_IVAR_$_AVWeakKeyValueObserverProxy._weakReferenceToObserver
_OBJC_IVAR_$_AVCallbackRegistry._observers
_OBJC_IVAR_$_AVCallbackRegistry._readWriteQueue
_OBJC_IVAR_$_AVCMNotificationDispatcher._cmNotificationCenter
_OBJC_IVAR_$_AVCMNotificationDispatcher._listenerObjectsPassedToFig
_OBJC_IVAR_$_AVCMNotificationDispatcher._listenerObjectsQueue
_OBJC_IVAR_$_AVCMNotificationDispatcher._callbackRegistry
_OBJC_IVAR_$_AVCMNotificationDispatcherListenerAndCallback._weakReferenceToListener
_OBJC_IVAR_$_AVCMNotificationDispatcherListenerAndCallback._callback
_OBJC_IVAR_$_AVCMNotificationDispatcherListenerKey._weakReferenceToListener
_OBJC_IVAR_$_AVCMNotificationDispatcherListenerKey._callback
_OBJC_IVAR_$_AVCMNotificationDispatcherListenerKey._name
_OBJC_IVAR_$_AVCMNotificationDispatcherListenerKey._object
_OBJC_IVAR_$_AVAssetReaderOutputMetadataAdaptor._internal
_OBJC_IVAR_$_AVAssetTrackGroup._assetTrackGroup
_OBJC_IVAR_$_AVAssetCache._priv
_OBJC_IVAR_$_AVCaptureAudioChannel._internal
_OBJC_IVAR_$_AVCaptureAudioDataOutput._internal
_OBJC_IVAR_$_AVCaptureAudioFileOutput._internal
_OBJC_IVAR_$_AVCaptureAudioPreviewOutput._internal
_OBJC_IVAR_$_AVCaptureConnection._internal
_OBJC_IVAR_$_AVCaptureConnection._videoMaxScaleAndCropFactor
_OBJC_IVAR_$_AVCaptureConnection._supportsVideoStabilization
_OBJC_IVAR_$_AVCaptureConnection._videoStabilizationEnabled
_OBJC_IVAR_$_AVCaptureConnection._enablesVideoStabilizationWhenAvailable
_OBJC_IVAR_$_AVCaptureDevice._internal
_OBJC_IVAR_$_AVMediaDataRequester._mediaDataConsumer
_OBJC_IVAR_$_AVMediaDataRequester._requestQueue
_OBJC_IVAR_$_AVMediaDataRequester._requestBlock
_OBJC_IVAR_$_AVCaptureDeviceFormat._internal
_OBJC_IVAR_$_AVSampleBufferRenderSynchronizer._synchronizerInternal
_OBJC_IVAR_$_AVCaptureDeviceInput._internal
_OBJC_IVAR_$_AVCaptureDeviceInputSource._internal
_OBJC_IVAR_$_AVCaptureFileOutputRecordingOperationDescriptor._outputFileURL
_OBJC_IVAR_$_AVCaptureFileOutputRecordingOperationDescriptor._delegate
_OBJC_IVAR_$_AVCaptureFileOutputRecordingOperationDescriptor._connections
_OBJC_IVAR_$_AVCaptureFileOutputRecordingOperationDescriptor._pausedLock
_OBJC_IVAR_$_AVCaptureFileOutputRecordingOperationDescriptor._stopError
_OBJC_IVAR_$_AVCaptureFileOutputRecordingOperationDescriptor._paused
_OBJC_IVAR_$_AVCaptureFileOutputRecordingOperationDescriptor._didStartWriting
_OBJC_IVAR_$_AVCaptureFileOutputPauseOperationDescriptor._shouldPause
_OBJC_IVAR_$_AVCaptureFileOutput._fileOutputInternal
_OBJC_IVAR_$_AVCaptureInput._inputInternal
_OBJC_IVAR_$_AVCaptureInputPort._internal
_OBJC_IVAR_$_AVCaptureMovieFileOutput._internal
_OBJC_IVAR_$_AVCaptureOperationDescriptorQueueItem._operationDescriptor
_OBJC_IVAR_$_AVCaptureOperationDescriptorQueueItem._operationTime
_OBJC_IVAR_$_AVCaptureOperationDescriptorQueue._operationDescriptorQueueItems
_OBJC_IVAR_$_AVCaptureOutput._outputInternal
_OBJC_IVAR_$_AVCaptureScreenInput._internal
_OBJC_IVAR_$_AVCaptureSessionInternalState._graph
_OBJC_IVAR_$_AVCaptureSessionInternalState._supportUnitsForInputPorts
_OBJC_IVAR_$_AVCaptureSession._internal
_OBJC_IVAR_$_AVCaptureVideoDataOutput._internal
_OBJC_IVAR_$_AVCaptureVideoPreviewLayer._internal
_OBJC_IVAR_$_AVSampleBufferAudioRenderer._audioRendererInternal
_OBJC_IVAR_$_AVResolvedDecompressionSettings._decompressionAttributes
_OBJC_IVAR_$_AVResolvedDecompressionSettings._outputCodecTypes
_OBJC_IVAR_$_AVResolvedDecompressionSettings._useDefaultPixelBufferAttributes
_OBJC_IVAR_$_AVAssetProxy._assetProxy
_OBJC_IVAR_$_AVCaptureStillImageOutput._internal
_OBJC_IVAR_$_AVPlayerItemAccessLog._playerItemAccessLog
_OBJC_IVAR_$_AVPlayerItemAccessLogEvent._playerItemAccessLogEvent
_OBJC_IVAR_$_AVPlayerItemErrorLog._playerItemErrorLog
_OBJC_IVAR_$_AVPlayerItemErrorLogEvent._playerItemErrorLogEvent
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._outputSettings
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._imageDataFormatType
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._imageOrientation
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._imageMirrored
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._transferDimensions
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._transferPixelFormatType
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._sourceFormatDescription
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._cvRotationBufferPool
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._vtImageRotationSession
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._cvTransferBufferPool
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._vtPixelTransferSession
_OBJC_IVAR_$_AVCaptureStillImageOutputUtils._vtCompressionSession
_OBJC_IVAR_$_AVFrameRateRange._internal
_OBJC_IVAR_$_AVMediaSelectionGroup._mediaSelectionGroup
_OBJC_IVAR_$_AVMediaSelectionOption._mediaSelectionOption
_OBJC_IVAR_$_AVOutputSettings._outputSettingsDictionary
_OBJC_IVAR_$_AVFormatSpecification._outputSettings
_OBJC_IVAR_$_AVFormatSpecification._sourceFormatDescription
_OBJC_IVAR_$_AVSampleBufferGenerator._generator
_OBJC_IVAR_$_AVSampleBufferRequest._request
_OBJC_IVAR_$_AVWeakReferencingDelegateStorage._delegateReadWriteQueue
_OBJC_IVAR_$_AVWeakReferencingDelegateStorage._delegateQueue
_OBJC_IVAR_$_AVWeakReferencingDelegateStorage._weakReferenceToDelegate
_OBJC_IVAR_$_AVMediaFileType._uti
_OBJC_IVAR_$_AVMediaFileType._supportsSampleReferencesOnce
_OBJC_IVAR_$_AVMediaFileType._supportsSampleReferences
_OBJC_IVAR_$_AVMediaFileOutputSettingsValidator._fileType
_OBJC_IVAR_$_AVPixelBufferAttributesVideoOutputSettings._VTPixelAspectRatioDictionary
_OBJC_IVAR_$_AVPixelBufferAttributesVideoOutputSettings._VTCleanApertureDictionary
_OBJC_IVAR_$_AVAVVideoSettingsVideoOutputSettings._VTPixelAspectRatioDictionary
_OBJC_IVAR_$_AVAVVideoSettingsVideoOutputSettings._VTCleanApertureDictionary
_OBJC_IVAR_$_AVAVVideoSettingsVideoOutputSettings._adaptedVideoCompressionProperties
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._inputASBD
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._outputASBD
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._needAvailableSampleRates
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._needNewConverter
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._needApplicableParameters
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._audioConverter
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._availableOutputSampleRates
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._availableOutputDataRates
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._applicableOutputSampleRatesForDataRate
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._applicableOutputDataRatesForSampleRate
_OBJC_IVAR_$_AVAudioSettingsValueConstrainer._outputDataRate
_OBJC_IVAR_$_AVFloat64Range._minimum
_OBJC_IVAR_$_AVFloat64Range._maximum
_OBJC_IVAR_$_AVPlayerItemOutput._outputInternal
_OBJC_IVAR_$_AVPlayerItemVideoOutput._videoOutputInternal
_OBJC_IVAR_$_AVAssetCollection._internal
_OBJC_IVAR_$_AVSampleBufferDisplayLayer._sampleBufferDisplayLayerInternal
_OBJC_IVAR_$_AVVideoPerformanceMetrics._performanceMetricsInternal
_OBJC_IVAR_$_AVAssetCollectionInspectorLoader._weakReference
_OBJC_IVAR_$_AVAssetCollectionInspectorLoader._URL
_OBJC_IVAR_$_AVAssetCollectionInspectorLoader.completionHandlerQ
_OBJC_IVAR_$_AVAssetCollectionInspectorLoader.loadingQ
_OBJC_IVAR_$_AVAssetCollectionInspectorLoader.loadingBatches
_OBJC_IVAR_$_AVAssetCollectionInspectorLoader._optionalFigCollection
_OBJC_IVAR_$_AVAssetCollectionInspectorLoader._optionalInspector
_OBJC_IVAR_$_AVAssetCollectionInspectorLoader._figCollectionCreateErr
_OBJC_IVAR_$_AVAssetCollectionInspectorLoader._loadingCanceled
_OBJC_IVAR_$_AVPixelBufferAttributeMediator._mediator
_OBJC_IVAR_$_AVStreamDataAssetTrackInspector._trackID
_OBJC_IVAR_$_AVStreamDataAssetTrackInspector._weakReferenceToAsset
_OBJC_IVAR_$_AVStreamDataAssetInspector._trackIDs
_OBJC_IVAR_$_AVStreamDataAsset._parser
_OBJC_IVAR_$_AVStreamDataAsset._inspector
_OBJC_IVAR_$_AVStreamDataAsset._inspectorLoader
_OBJC_IVAR_$_AVStreamDataAsset._trackDictsByTrackID
_OBJC_IVAR_$_AVStreamDataAsset._tracksOnce
_OBJC_IVAR_$_AVStreamDataAsset._tracks
_OBJC_IVAR_$_AVAssetResourceLoader._resourceLoader
_OBJC_IVAR_$_AVAssetResourceLoadingContentInformationRequest._contentInformationRequest
_OBJC_IVAR_$_AVAssetResourceLoadingDataRequest._dataRequest
_OBJC_IVAR_$_AVAssetResourceLoadingRequest._loadingRequest
_OBJC_IVAR_$_AVTextStyleRule._textStyleRule
_OBJC_IVAR_$_AVPlayerMediaSelectionCriteriaInternal._preferredLanguages
_OBJC_IVAR_$_AVPlayerMediaSelectionCriteriaInternal._requiredMediaCharacteristics
_OBJC_IVAR_$_AVPlayerMediaSelectionCriteriaInternal._preferredMediaCharacteristics
_OBJC_IVAR_$_AVPlayerMediaSelectionCriteriaInternal._precludedMediaCharacteristics
_OBJC_IVAR_$_AVPlayerMediaSelectionCriteriaInternal._preferredMediaSubTypes
_OBJC_IVAR_$_AVPlayerMediaSelectionCriteriaInternal._precludedMediaSubTypes
_OBJC_IVAR_$_AVPlayerMediaSelectionCriteriaInternal._preferMultichannelAudio
_OBJC_IVAR_$_AVPlayerMediaSelectionCriteriaInternal._precludeMultichannelAudio
_OBJC_IVAR_$_AVPlayerMediaSelectionCriteria._criteria
_OBJC_IVAR_$_AVPlayerItemMetadataOutput._metadataOutputInternal
_OBJC_IVAR_$_AVPlayerItemLegibleOutput._legibleOutputInternal
_OBJC_IVAR_$_AVOutputSettingsAssistant._internal
_OBJC_IVAR_$_AVExportSettingsOutputSettingsAssistantBaseSettings._exportSettings
_OBJC_IVAR_$_AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster._outputSettingsPresetIdentifier
_OBJC_IVAR_$_AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster._exportSettings
_OBJC_IVAR_$_AVScheduledAudioParameters._scheduledParametersInternal
_OBJC_IVAR_$_AVMutableScheduledAudioParameters._mutableScheduledParametersInternal
_OBJC_IVAR_$_AVAsynchronousVideoCompositionRequest._internal
_OBJC_IVAR_$_AVVideoCompositionRenderContext._internal
_AVPlayerLayerPlayerItemChangedObserverContext
_AVPlayerLayerPlayerItemSubtitleDisplayEnabledObserverContext
_AVPlayerLayerDisplayingClosedCaptionsChangedObserverContext
-[AVPlayer(AVPlayerProtectedContentPrivate) _extractVerifiedFPExternalProtectionStatus:].codeSignatureVerified
_strictlyIncreasingInteger.sCurrentNumber
_sAVAssetReaderObserverOutputFinishedContext
_AVRampsIncludesRampThatOverlapsTimeRange.slopTime
_kManifoldTrackCallbacks
_AVSubtitleLayerPlayerItemChangedObserverContext
_AVSubtitleLayerPlayerItemSubtitleDisplayEnabledObserverContext
-[AVCustomVideoCompositorSession(AVCustomVideoCompositorSession_FigCallbackHandling) _setupFigCallbacks].callbacks
+[AVMetadataItem _isoUserDataKeysRequiringKeySpaceConversion].conversionList
+[AVMetadataItem _isoUserDataKeysRequiringKeySpaceConversion].onceToken
-[AVMetadataItemFilterForSharing whitelist].sWhitelist
-[AVMetadataItemFilterForSharing whitelist].onceToken
+[AVMetadataItemFilter metadataItemFilterForSharing].sSharingFilter
+[AVMetadataItemFilter metadataItemFilterForSharing].onceToken
+[AVURLAsset _avfValidationPlist].sAVFoundationValidationPlist
+[AVURLAsset _avfValidationPlist].loadValidationPlistOnceToken
+[AVURLAsset _figMIMETypes].sFigMIMETypes
+[AVURLAsset _figMIMETypes].onceToken
+[AVURLAsset _streamingUTTypes].sStreamingUTTypes
+[AVURLAsset _streamingUTTypes].onceToken
+[AVURLAsset _fileUTTypes].sFileUTTypes
+[AVURLAsset _fileUTTypes].onceToken
+[AVURLAsset _UTTypes].sUTTypes
+[AVURLAsset _UTTypes].onceToken
+[AVAssetTrack mediaTypesForMediaCharacteristics].sMediaTypesForMediaCharacteristicsDictionary
+[AVAssetTrack mediaTypesForMediaCharacteristics].onceToken
-[AVPlayer _setNeroVideoGravityOnFigPlayer].sAVLayerVideoGravityToFigGravity
-[AVPlayer _setNeroVideoGravityOnFigPlayer].sCreatesAVLayerVideoGravityToFigGravityOnce
-[AVPlayer(AVPlayerProtectedContentPrivate) _extractVerifiedFPExternalProtectionStatus:].verifyCodeSignatureOnce
-[AVPlayerItem _quietlySetPlaybackProperties:].keyMapOnce
-[AVPlayerItem _quietlySetPlaybackProperties:].keyMap
_sPreferredBuiltInVideoCompositor
_getRGBSpace.colorSpace
+[AVAssetExportSession allExportPresets].sAllPresets
+[AVAssetExportSession allExportPresets].onceToken
+[AVAssetExportSession(AVAssetExportSession_Local) _audioOnlyPresets]._gAudioOnlyPresets
+[AVAssetExportSession(AVAssetExportSession_Local) _audioOnlyPresets].onceToken
+[AVAssetExportSession(AVAssetExportSession_Local) _audioVideoPresets]._gAudioVideoPresets
+[AVAssetExportSession(AVAssetExportSession_Local) _audioVideoPresets].onceToken
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForPresets]._gUTTypesForPresets
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForPresets].onceToken
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForTemporalMetadataPresets]._gUTTypesForTemporalMetadataPresets
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForTemporalMetadataPresets].onceToken
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForDefaultPassthroughPreset].onceToken
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForDefaultPassthroughPreset]._gUTTypesForPassthroughPresetDefault
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForAudioOnly]._gUTTypesForAudioOnlyArray
+[AVAssetExportSession(AVAssetExportSession_Local) _utTypesForAudioOnly].onceToken
+[AVAssetExportSession(AVAssetExportSession_Local) _asynchronousDispatchQueue].sAsyncDispatchQueue
+[AVAssetExportSession(AVAssetExportSession_Local) _asynchronousDispatchQueue].onceToken
+[AVAssetExportSession(AVAssetExportSession_Local) _mediaTypesToStripOnPassthroughExport].sMediaTypesToStrip
+[AVAssetExportSession(AVAssetExportSession_Local) _mediaTypesToStripOnPassthroughExport].onceToken
+[AVAssetExportSession(AVAssetExportSession_Local) _mediaTypesToFailPassthroughExport].sMediaTypesToFail
+[AVAssetExportSession(AVAssetExportSession_Local) _mediaTypesToFailPassthroughExport].onceToken
+[AVAssetExportSession(AVAssetExportSession_Local) _figRemakerNotificationNames].notificationNames
_AVTranslateFigMediaCharacteristicToAVMediaCharacteristic.sTranslationDict
_AVTranslateFigMediaCharacteristicToAVMediaCharacteristic.sTranslationDictOnce
_AVTranslateAVMediaCharacteristicToFigMediaCharacteristic.sTranslationDict
_AVTranslateAVMediaCharacteristicToFigMediaCharacteristic.sTranslationDictOnce
_AVUnsupportedOutputURLPathExtensions.createExtensionListOnce
_AVUnsupportedOutputURLPathExtensions.sUnsupportedExtensionList
+[AVMovie movieTypes].movieTypesArray
+[AVMovie movieTypes].makeMovieTypesArrayOnceToken
_sFigAssetPropertiesForKeys
_sFigAssetTrackPropertiesForKeys
_ensureDictionariesOfFigPropertiesForKeys.buildFigPropertiesForKeysOnce
_getDictionaryOfSpecialPlaybackItemGettersForKeyValueStatus.sSpecialPlaybackItemGettersForKeyValueStatus
_getDictionaryOfSpecialPlaybackItemGettersForKeyValueStatus.onceToken
_getDictionaryOfSpecialLoadingMethodsForKeys.sSpecialLoadingMethodsForKeys
_getDictionaryOfSpecialLoadingMethodsForKeys.onceToken
_dictionaryOfFigAssetTrackPropertiesForTrackKeys.sFigAssetTrackPropertiesForTrackKeys
_dictionaryOfFigAssetTrackPropertiesForTrackKeys.buildFigAssetTrackPropertiesForTrackKeysOnce
__concreteAVWeakReferenceClass
__sSharedCallbackRegistry
_sNotificationDispatchersForCMNotificationCenters
_sGlobalNotificationDispatcherReadWriteQueue
_sMaxDisplayScale
_registerOnce
-[AVCaptureAudioDataOutput connectionMediaTypes].connectionMediaTypes
+[AVCaptureAudioFileOutput availableOutputFileTypes].availableTypesArray
-[AVCaptureAudioFileOutput connectionMediaTypes].connectionMediaTypes
-[AVCaptureAudioPreviewOutput connectionMediaTypes].connectionMediaTypes
_sDevicesInited
_sDevices
+[AVCaptureDevice _registeredDeviceClassNames].registeredDeviceClassNames
+[AVCaptureDevice _registeredDeviceClassNames].shadowRegisteredDeviceClassNames
+[AVCaptureDevice _linkedDevicesLock].linkedDevicesLock
+[AVCaptureDevice _linkedDevicesLock].shadowLinkedDevicesLock
_sDevicesInited
_sDevices
-[AVCaptureMovieFileOutput connectionMediaTypes].connectionMediaTypes
-[AVCaptureSession canSetSessionPreset:].doablePresets
+[AVCaptureSession avCaptureSessionPlist].plist
-[AVCaptureVideoDataOutput availableVideoCVPixelFormatTypes].availableTypes
-[AVCaptureVideoDataOutput availableVideoCodecTypes].availableVideoCodecTypes
-[AVCaptureVideoDataOutput connectionMediaTypes].connectionMediaTypes
-[AVCaptureVideoPreviewLayer connectionMediaTypes].connectionMediaTypes
-[AVResolvedDecompressionSettings pixelBufferAttributes].sAllPixelFormatTypes
-[AVResolvedDecompressionSettings pixelBufferAttributes].sShadowAllPixelFormatTypes
-[AVCaptureStillImageOutput availableImageDataCVPixelFormatTypes].availableTypes
-[AVCaptureStillImageOutput availableImageDataCodecTypes].availableTypes
-[AVCaptureStillImageOutput connectionMediaTypes].connectionMediaTypes
_AVVerifyBundleCodeSignature.sVerifyCodeSignatureOnce
_AVVerifyBundleCodeSignature.sVerifiedCodeSignatures
_AVVerifyBundleCodeSignature.sVerificationQueue
_AVVerifyBundleCodeSignature.sVerifiedCodeSignaturesAccessQueue
_sAVSampleBufferGenerator_SetupOnce
_sAVSampleBufferGenerator_CMSampleBufferToCompletionHandler
_sAVSampleBufferGenerator_DispatchQueue
_sAVSampleBufferGenerator_Listener
_sFigFileFormatsForUTIs
_sAVMediaFileOutputSettingsValidatorClassesForFileType
+[AVAssetCollectionFactory sharedAVAssetCollectionFactory].gAVAssetCollectionFactory_Once
+[AVAssetCollectionFactory sharedAVAssetCollectionFactory].gAVAssetCollectionFactory
+[AVVideoCompositionRenderContext(Internal) renderContextPropertiesFromFigCompositor:].keysOnce
+[AVVideoCompositionRenderContext(Internal) renderContextPropertiesFromFigCompositor:].keys
_AVExportSettingsForExportPreset.sSettings
_exportSettings_bitRateTableForExportPreset.sBitRateTable
_AVApplicationAuthorizationChallengeProviderFairPlay
_AVApplicationAuthorizationChallengeProviderNone
_AVAssetAssociatedSubtitlesTrackReferencesKey
_AVAssetChapterListTrackReferencesKey
_AVAssetCollectionTypeAVCHD
_AVAssetDownloadSessionAirPlayAuthorizationInfoKey
_AVAssetDownloadSessionCachePrimingDownloadTokenKey
_AVAssetDownloadSessionClientAuditTokenKey
_AVAssetDownloadSessionClientBundleIdentifierKey
_AVAssetDownloadSessionDownloadFailedNotification
_AVAssetDownloadSessionDownloadSucceededNotification
_AVAssetDownloadSessionFileSizeAvailableNotification
_AVAssetDownloadSessionHTTPCookiesKey
_AVAssetDownloadSessionHTTPHeaderFieldsKey
_AVAssetDownloadSessionMaxSizeAllowedForCellularAccessKey
_AVAssetDownloadSessionPriorityKey
_AVAssetDownloadSessionProtectedContentSupportStorageURLKey
_AVAssetDownloadSessionPurchaseBundleKey
_AVAssetDownloadSessioniTunesStoreContentDSIDKey
_AVAssetDownloadSessioniTunesStoreContentDownloadParametersKey
_AVAssetDownloadSessioniTunesStoreContentIDKey
_AVAssetDownloadSessioniTunesStoreContentInfoKey
_AVAssetDownloadSessioniTunesStoreContentPurchasedMediaKindKey
_AVAssetDownloadSessioniTunesStoreContentTypeKey
_AVAssetDownloadSessioniTunesStoreContentUserAgentKey
_AVAssetExportPreset1280x720
_AVAssetExportPreset1920x1080
_AVAssetExportPreset3840x2160
_AVAssetExportPreset640x480
_AVAssetExportPreset960x540
_AVAssetExportPresetAVCHD
_AVAssetExportPresetAppPreview
_AVAssetExportPresetAppleM4A
_AVAssetExportPresetAppleM4V1080pHD
_AVAssetExportPresetAppleM4V480pSD
_AVAssetExportPresetAppleM4V720pHD
_AVAssetExportPresetAppleM4VAppleTV
_AVAssetExportPresetAppleM4VAppleTVHD
_AVAssetExportPresetAppleM4VCellular
_AVAssetExportPresetAppleM4VWiFi
_AVAssetExportPresetAppleM4ViPod
_AVAssetExportPresetAppleProRes422LPCM
_AVAssetExportPresetICPL
_AVAssetExportPresetICPLHD
_AVAssetExportPresetICPLProxy
_AVAssetExportPresetICPLProxyHD
_AVAssetExportPresetMessage
_AVAssetExportPresetMessageAudio
_AVAssetExportPresetMessage_16x9
_AVAssetExportPresetPassthrough
_AVAssetExportPresetPhotoStream
_AVAssetExportPresetPhotoStreamHD
_AVAssetForcedOnlySubtitlesTrackReferencesKey
_AVAssetImageGeneratorApertureModeCleanAperture
_AVAssetImageGeneratorApertureModeEncodedPixels
_AVAssetImageGeneratorApertureModeProductionAperture
_AVAssetMediaServicesWereResetErrorKey
_AVAssetMediaServicesWereResetNotification
_AVAssetMetadataTrackReferencesKey
_AVAssetModifierTrackReferencesKey
_AVAssetResourceLoadingRequestContentLengthKey
_AVAssetResourceLoadingRequestContentShouldNotBeCachedOnDiskKey
_AVAssetResourceLoadingRequestContentSupportsByteRangeAccessKey
_AVAssetResourceLoadingRequestContentTypeKey
_AVAssetSoundFallbackTrackReferencesKey
_AVAssetTimecodeTrackReferencesKey
_AVAudioTimePitchAlgorithmSpectral
_AVAudioTimePitchAlgorithmTimeDomain
_AVAudioTimePitchAlgorithmVarispeed
_AVCaptureDeviceWasConnectedNotification
_AVCaptureDeviceWasDisconnectedNotification
_AVCaptureInputPortFormatDescriptionDidChangeNotification
_AVCaptureSessionDidStartRunningNotification
_AVCaptureSessionDidStopRunningNotification
_AVCaptureSessionErrorKey
_AVCaptureSessionPreset1280x720
_AVCaptureSessionPreset320x240
_AVCaptureSessionPreset352x288
_AVCaptureSessionPreset640x480
_AVCaptureSessionPreset960x540
_AVCaptureSessionPresetCommon
_AVCaptureSessionPresetHigh
_AVCaptureSessionPresetLow
_AVCaptureSessionPresetMedium
_AVCaptureSessionPresetPhoto
_AVCaptureSessionPresetiFrame1280x720
_AVCaptureSessionPresetiFrame960x540
_AVCaptureSessionRuntimeErrorNotification
_AVChapterGroupChaptersKey
_AVChapterGroupLocaleKey
_AVChapterGroupPerChapterInfoKey
_AVChapterGroupTypeKey
_AVContentAuthorizationInfoPlayInfoKey
_AVContentAuthorizationInfoSessionIDKey
_AVCoreAnimationBeginTimeAtZero
_AVCropRectangleRampEndCropRectangleKey
_AVCropRectangleRampStartCropRectangleKey
_AVErrorDeviceKey
_AVErrorDiscontinuityFlagsKey
_AVErrorExceptionKey
_AVErrorFileSizeKey
_AVErrorFileTypeKey
_AVErrorMediaSubTypeKey
_AVErrorMediaTypeKey
_AVErrorPIDKey
_AVErrorPersistentTrackIDKey
_AVErrorPresentationTimeStampKey
_AVErrorRecordingSuccessfullyFinishedKey
_AVErrorTimeKey
_AVFileType3GPP
_AVFileType3GPP2
_AVFileTypeAC3
_AVFileTypeAIFC
_AVFileTypeAIFF
_AVFileTypeAMR
_AVFileTypeAppleM4A
_AVFileTypeAppleM4V
_AVFileTypeCoreAudioFormat
_AVFileTypeMPEG4
_AVFileTypeMPEG4Audio
_AVFileTypeMPEGLayer3
_AVFileTypeQuickTimeMovie
_AVFileTypeSunAU
_AVFileTypeWAVE
_AVFoundationErrorDomain
_AVFragmentedMovieContainsMovieFragmentsDidChangeNotification
_AVFragmentedMovieDurationDidChangeNotification
_AVFragmentedMovieTrackSegmentsDidChangeNotification
_AVFragmentedMovieTrackTimeRangeDidChangeNotification
_AVFragmentedMovieTrackTotalSampleDataLengthDidChangeNotification
_AVFragmentedMovieWasDefragmentedNotification
_AVInitializeProtectedContentPlaybackSupportExternalProtectionKey
_AVInitializeProtectedContentPlaybackSupportStorageURLKey
_AVInitializeProtectedContentPlaybackSupportVideoKey
_AVLayerSubtitleGravityPlacementOver
_AVLayerSubtitleGravityPreferPlacementNonObscuring
_AVLayerVideoGravityResize
_AVLayerVideoGravityResizeAspect
_AVLayerVideoGravityResizeAspectFill
_AVMakeRectWithAspectRatioInsideRect
_AVMediaCharacteristicAudible
_AVMediaCharacteristicContainsOnlyForcedSubtitles
_AVMediaCharacteristicDescribesMusicAndSoundForAccessibility
_AVMediaCharacteristicDescribesVideoForAccessibility
_AVMediaCharacteristicEasyToRead
_AVMediaCharacteristicFrameBased
_AVMediaCharacteristicIsAuxiliaryContent
_AVMediaCharacteristicIsMainProgramContent
_AVMediaCharacteristicLegible
_AVMediaCharacteristicTranscribesSpokenDialogForAccessibility
_AVMediaCharacteristicVisual
_AVMediaTypeAudio
_AVMediaTypeClosedCaption
_AVMediaTypeMetadata
_AVMediaTypeMetadataObject
_AVMediaTypeMuxed
_AVMediaTypeSubtitle
_AVMediaTypeText
_AVMediaTypeTimecode
_AVMediaTypeTimedMetadata
_AVMediaTypeVideo
_AVMetadata3GPUserDataKeyAlbumAndTrack
_AVMetadata3GPUserDataKeyAuthor
_AVMetadata3GPUserDataKeyCollection
_AVMetadata3GPUserDataKeyCopyright
_AVMetadata3GPUserDataKeyDescription
_AVMetadata3GPUserDataKeyGenre
_AVMetadata3GPUserDataKeyKeywordList
_AVMetadata3GPUserDataKeyLocation
_AVMetadata3GPUserDataKeyMediaClassification
_AVMetadata3GPUserDataKeyMediaRating
_AVMetadata3GPUserDataKeyPerformer
_AVMetadata3GPUserDataKeyRecordingYear
_AVMetadata3GPUserDataKeyThumbnail
_AVMetadata3GPUserDataKeyTitle
_AVMetadata3GPUserDataKeyUserRating
_AVMetadataCommonIdentifierAlbumName
_AVMetadataCommonIdentifierArtist
_AVMetadataCommonIdentifierArtwork
_AVMetadataCommonIdentifierAssetIdentifier
_AVMetadataCommonIdentifierAuthor
_AVMetadataCommonIdentifierContributor
_AVMetadataCommonIdentifierCopyrights
_AVMetadataCommonIdentifierCreationDate
_AVMetadataCommonIdentifierCreator
_AVMetadataCommonIdentifierDescription
_AVMetadataCommonIdentifierFormat
_AVMetadataCommonIdentifierLanguage
_AVMetadataCommonIdentifierLastModifiedDate
_AVMetadataCommonIdentifierLocation
_AVMetadataCommonIdentifierMake
_AVMetadataCommonIdentifierModel
_AVMetadataCommonIdentifierPublisher
_AVMetadataCommonIdentifierRelation
_AVMetadataCommonIdentifierSoftware
_AVMetadataCommonIdentifierSource
_AVMetadataCommonIdentifierSubject
_AVMetadataCommonIdentifierTitle
_AVMetadataCommonIdentifierType
_AVMetadataCommonKeyAlbumName
_AVMetadataCommonKeyArtist
_AVMetadataCommonKeyArtwork
_AVMetadataCommonKeyAuthor
_AVMetadataCommonKeyContributor
_AVMetadataCommonKeyCopyrights
_AVMetadataCommonKeyCreationDate
_AVMetadataCommonKeyCreator
_AVMetadataCommonKeyDescription
_AVMetadataCommonKeyFormat
_AVMetadataCommonKeyIdentifier
_AVMetadataCommonKeyLanguage
_AVMetadataCommonKeyLastModifiedDate
_AVMetadataCommonKeyLocation
_AVMetadataCommonKeyMake
_AVMetadataCommonKeyModel
_AVMetadataCommonKeyPublisher
_AVMetadataCommonKeyRelation
_AVMetadataCommonKeySoftware
_AVMetadataCommonKeySource
_AVMetadataCommonKeySubject
_AVMetadataCommonKeyTitle
_AVMetadataCommonKeyType
_AVMetadataExtraAttributeBaseURIKey
_AVMetadataExtraAttributeDataTypeKey
_AVMetadataExtraAttributeDataTypeNamespaceKey
_AVMetadataExtraAttributeHREFKey
_AVMetadataExtraAttributePictureTypeKey
_AVMetadataExtraAttributeValueURIKey
_AVMetadataFormatHLSMetadata
_AVMetadataFormatID3Metadata
_AVMetadataFormatISOUserData
_AVMetadataFormatQuickTimeMetadata
_AVMetadataFormatQuickTimeUserData
_AVMetadataFormatiTunesMetadata
_AVMetadataID3MetadataKeyAlbumSortOrder
_AVMetadataID3MetadataKeyAlbumTitle
_AVMetadataID3MetadataKeyAttachedPicture
_AVMetadataID3MetadataKeyAudioEncryption
_AVMetadataID3MetadataKeyAudioSeekPointIndex
_AVMetadataID3MetadataKeyBand
_AVMetadataID3MetadataKeyBeatsPerMinute
_AVMetadataID3MetadataKeyComments
_AVMetadataID3MetadataKeyCommercialInformation
_AVMetadataID3MetadataKeyCommerical
_AVMetadataID3MetadataKeyComposer
_AVMetadataID3MetadataKeyConductor
_AVMetadataID3MetadataKeyContentGroupDescription
_AVMetadataID3MetadataKeyContentType
_AVMetadataID3MetadataKeyCopyright
_AVMetadataID3MetadataKeyCopyrightInformation
_AVMetadataID3MetadataKeyDate
_AVMetadataID3MetadataKeyEncodedBy
_AVMetadataID3MetadataKeyEncodedWith
_AVMetadataID3MetadataKeyEncodingTime
_AVMetadataID3MetadataKeyEncryption
_AVMetadataID3MetadataKeyEqualization
_AVMetadataID3MetadataKeyEqualization2
_AVMetadataID3MetadataKeyEventTimingCodes
_AVMetadataID3MetadataKeyFileOwner
_AVMetadataID3MetadataKeyFileType
_AVMetadataID3MetadataKeyGeneralEncapsulatedObject
_AVMetadataID3MetadataKeyGroupIdentifier
_AVMetadataID3MetadataKeyInitialKey
_AVMetadataID3MetadataKeyInternationalStandardRecordingCode
_AVMetadataID3MetadataKeyInternetRadioStationName
_AVMetadataID3MetadataKeyInternetRadioStationOwner
_AVMetadataID3MetadataKeyInvolvedPeopleList_v23
_AVMetadataID3MetadataKeyInvolvedPeopleList_v24
_AVMetadataID3MetadataKeyLanguage
_AVMetadataID3MetadataKeyLeadPerformer
_AVMetadataID3MetadataKeyLength
_AVMetadataID3MetadataKeyLink
_AVMetadataID3MetadataKeyLyricist
_AVMetadataID3MetadataKeyMPEGLocationLookupTable
_AVMetadataID3MetadataKeyMediaType
_AVMetadataID3MetadataKeyModifiedBy
_AVMetadataID3MetadataKeyMood
_AVMetadataID3MetadataKeyMusicCDIdentifier
_AVMetadataID3MetadataKeyMusicianCreditsList
_AVMetadataID3MetadataKeyOfficialArtistWebpage
_AVMetadataID3MetadataKeyOfficialAudioFileWebpage
_AVMetadataID3MetadataKeyOfficialAudioSourceWebpage
_AVMetadataID3MetadataKeyOfficialInternetRadioStationHomepage
_AVMetadataID3MetadataKeyOfficialPublisherWebpage
_AVMetadataID3MetadataKeyOriginalAlbumTitle
_AVMetadataID3MetadataKeyOriginalArtist
_AVMetadataID3MetadataKeyOriginalFilename
_AVMetadataID3MetadataKeyOriginalLyricist
_AVMetadataID3MetadataKeyOriginalReleaseTime
_AVMetadataID3MetadataKeyOriginalReleaseYear
_AVMetadataID3MetadataKeyOwnership
_AVMetadataID3MetadataKeyPartOfASet
_AVMetadataID3MetadataKeyPayment
_AVMetadataID3MetadataKeyPerformerSortOrder
_AVMetadataID3MetadataKeyPlayCounter
_AVMetadataID3MetadataKeyPlaylistDelay
_AVMetadataID3MetadataKeyPopularimeter
_AVMetadataID3MetadataKeyPositionSynchronization
_AVMetadataID3MetadataKeyPrivate
_AVMetadataID3MetadataKeyProducedNotice
_AVMetadataID3MetadataKeyPublisher
_AVMetadataID3MetadataKeyRecommendedBufferSize
_AVMetadataID3MetadataKeyRecordingDates
_AVMetadataID3MetadataKeyRecordingTime
_AVMetadataID3MetadataKeyRelativeVolumeAdjustment
_AVMetadataID3MetadataKeyRelativeVolumeAdjustment2
_AVMetadataID3MetadataKeyReleaseTime
_AVMetadataID3MetadataKeyReverb
_AVMetadataID3MetadataKeySeek
_AVMetadataID3MetadataKeySetSubtitle
_AVMetadataID3MetadataKeySignature
_AVMetadataID3MetadataKeySize
_AVMetadataID3MetadataKeySubTitle
_AVMetadataID3MetadataKeySynchronizedLyric
_AVMetadataID3MetadataKeySynchronizedTempoCodes
_AVMetadataID3MetadataKeyTaggingTime
_AVMetadataID3MetadataKeyTermsOfUse
_AVMetadataID3MetadataKeyTime
_AVMetadataID3MetadataKeyTitleDescription
_AVMetadataID3MetadataKeyTitleSortOrder
_AVMetadataID3MetadataKeyTrackNumber
_AVMetadataID3MetadataKeyUniqueFileIdentifier
_AVMetadataID3MetadataKeyUnsynchronizedLyric
_AVMetadataID3MetadataKeyUserText
_AVMetadataID3MetadataKeyUserURL
_AVMetadataID3MetadataKeyYear
_AVMetadataISOUserDataKeyCopyright
_AVMetadataISOUserDataKeyTaggedCharacteristic
_AVMetadataIcyMetadataKeyStreamTitle
_AVMetadataIcyMetadataKeyStreamURL
_AVMetadataIdentifier3GPUserDataAlbumAndTrack
_AVMetadataIdentifier3GPUserDataAuthor
_AVMetadataIdentifier3GPUserDataCollection
_AVMetadataIdentifier3GPUserDataCopyright
_AVMetadataIdentifier3GPUserDataDescription
_AVMetadataIdentifier3GPUserDataGenre
_AVMetadataIdentifier3GPUserDataKeywordList
_AVMetadataIdentifier3GPUserDataLocation
_AVMetadataIdentifier3GPUserDataMediaClassification
_AVMetadataIdentifier3GPUserDataMediaRating
_AVMetadataIdentifier3GPUserDataPerformer
_AVMetadataIdentifier3GPUserDataRecordingYear
_AVMetadataIdentifier3GPUserDataThumbnail
_AVMetadataIdentifier3GPUserDataTitle
_AVMetadataIdentifier3GPUserDataUserRating
_AVMetadataIdentifierID3MetadataAlbumSortOrder
_AVMetadataIdentifierID3MetadataAlbumTitle
_AVMetadataIdentifierID3MetadataAttachedPicture
_AVMetadataIdentifierID3MetadataAudioEncryption
_AVMetadataIdentifierID3MetadataAudioSeekPointIndex
_AVMetadataIdentifierID3MetadataBand
_AVMetadataIdentifierID3MetadataBeatsPerMinute
_AVMetadataIdentifierID3MetadataComments
_AVMetadataIdentifierID3MetadataCommercialInformation
_AVMetadataIdentifierID3MetadataCommerical
_AVMetadataIdentifierID3MetadataComposer
_AVMetadataIdentifierID3MetadataConductor
_AVMetadataIdentifierID3MetadataContentGroupDescription
_AVMetadataIdentifierID3MetadataContentType
_AVMetadataIdentifierID3MetadataCopyright
_AVMetadataIdentifierID3MetadataCopyrightInformation
_AVMetadataIdentifierID3MetadataDate
_AVMetadataIdentifierID3MetadataEncodedBy
_AVMetadataIdentifierID3MetadataEncodedWith
_AVMetadataIdentifierID3MetadataEncodingTime
_AVMetadataIdentifierID3MetadataEncryption
_AVMetadataIdentifierID3MetadataEqualization
_AVMetadataIdentifierID3MetadataEqualization2
_AVMetadataIdentifierID3MetadataEventTimingCodes
_AVMetadataIdentifierID3MetadataFileOwner
_AVMetadataIdentifierID3MetadataFileType
_AVMetadataIdentifierID3MetadataGeneralEncapsulatedObject
_AVMetadataIdentifierID3MetadataGroupIdentifier
_AVMetadataIdentifierID3MetadataInitialKey
_AVMetadataIdentifierID3MetadataInternationalStandardRecordingCode
_AVMetadataIdentifierID3MetadataInternetRadioStationName
_AVMetadataIdentifierID3MetadataInternetRadioStationOwner
_AVMetadataIdentifierID3MetadataInvolvedPeopleList_v23
_AVMetadataIdentifierID3MetadataInvolvedPeopleList_v24
_AVMetadataIdentifierID3MetadataLanguage
_AVMetadataIdentifierID3MetadataLeadPerformer
_AVMetadataIdentifierID3MetadataLength
_AVMetadataIdentifierID3MetadataLink
_AVMetadataIdentifierID3MetadataLyricist
_AVMetadataIdentifierID3MetadataMPEGLocationLookupTable
_AVMetadataIdentifierID3MetadataMediaType
_AVMetadataIdentifierID3MetadataModifiedBy
_AVMetadataIdentifierID3MetadataMood
_AVMetadataIdentifierID3MetadataMusicCDIdentifier
_AVMetadataIdentifierID3MetadataMusicianCreditsList
_AVMetadataIdentifierID3MetadataOfficialArtistWebpage
_AVMetadataIdentifierID3MetadataOfficialAudioFileWebpage
_AVMetadataIdentifierID3MetadataOfficialAudioSourceWebpage
_AVMetadataIdentifierID3MetadataOfficialInternetRadioStationHomepage
_AVMetadataIdentifierID3MetadataOfficialPublisherWebpage
_AVMetadataIdentifierID3MetadataOriginalAlbumTitle
_AVMetadataIdentifierID3MetadataOriginalArtist
_AVMetadataIdentifierID3MetadataOriginalFilename
_AVMetadataIdentifierID3MetadataOriginalLyricist
_AVMetadataIdentifierID3MetadataOriginalReleaseTime
_AVMetadataIdentifierID3MetadataOriginalReleaseYear
_AVMetadataIdentifierID3MetadataOwnership
_AVMetadataIdentifierID3MetadataPartOfASet
_AVMetadataIdentifierID3MetadataPayment
_AVMetadataIdentifierID3MetadataPerformerSortOrder
_AVMetadataIdentifierID3MetadataPlayCounter
_AVMetadataIdentifierID3MetadataPlaylistDelay
_AVMetadataIdentifierID3MetadataPopularimeter
_AVMetadataIdentifierID3MetadataPositionSynchronization
_AVMetadataIdentifierID3MetadataPrivate
_AVMetadataIdentifierID3MetadataProducedNotice
_AVMetadataIdentifierID3MetadataPublisher
_AVMetadataIdentifierID3MetadataRecommendedBufferSize
_AVMetadataIdentifierID3MetadataRecordingDates
_AVMetadataIdentifierID3MetadataRecordingTime
_AVMetadataIdentifierID3MetadataRelativeVolumeAdjustment
_AVMetadataIdentifierID3MetadataRelativeVolumeAdjustment2
_AVMetadataIdentifierID3MetadataReleaseTime
_AVMetadataIdentifierID3MetadataReverb
_AVMetadataIdentifierID3MetadataSeek
_AVMetadataIdentifierID3MetadataSetSubtitle
_AVMetadataIdentifierID3MetadataSignature
_AVMetadataIdentifierID3MetadataSize
_AVMetadataIdentifierID3MetadataSubTitle
_AVMetadataIdentifierID3MetadataSynchronizedLyric
_AVMetadataIdentifierID3MetadataSynchronizedTempoCodes
_AVMetadataIdentifierID3MetadataTaggingTime
_AVMetadataIdentifierID3MetadataTermsOfUse
_AVMetadataIdentifierID3MetadataTime
_AVMetadataIdentifierID3MetadataTitleDescription
_AVMetadataIdentifierID3MetadataTitleSortOrder
_AVMetadataIdentifierID3MetadataTrackNumber
_AVMetadataIdentifierID3MetadataUniqueFileIdentifier
_AVMetadataIdentifierID3MetadataUnsynchronizedLyric
_AVMetadataIdentifierID3MetadataUserText
_AVMetadataIdentifierID3MetadataUserURL
_AVMetadataIdentifierID3MetadataYear
_AVMetadataIdentifierISOUserDataCopyright
_AVMetadataIdentifierISOUserDataTaggedCharacteristic
_AVMetadataIdentifierIcyMetadataStreamTitle
_AVMetadataIdentifierIcyMetadataStreamURL
_AVMetadataIdentifierQuickTimeMetadataAlbum
_AVMetadataIdentifierQuickTimeMetadataArranger
_AVMetadataIdentifierQuickTimeMetadataArtist
_AVMetadataIdentifierQuickTimeMetadataArtwork
_AVMetadataIdentifierQuickTimeMetadataAuthor
_AVMetadataIdentifierQuickTimeMetadataCameraFrameReadoutTime
_AVMetadataIdentifierQuickTimeMetadataCameraIdentifier
_AVMetadataIdentifierQuickTimeMetadataCollectionUser
_AVMetadataIdentifierQuickTimeMetadataComment
_AVMetadataIdentifierQuickTimeMetadataComposer
_AVMetadataIdentifierQuickTimeMetadataCopyright
_AVMetadataIdentifierQuickTimeMetadataCreationDate
_AVMetadataIdentifierQuickTimeMetadataCredits
_AVMetadataIdentifierQuickTimeMetadataDescription
_AVMetadataIdentifierQuickTimeMetadataDetectedFace
_AVMetadataIdentifierQuickTimeMetadataDirectionFacing
_AVMetadataIdentifierQuickTimeMetadataDirectionMotion
_AVMetadataIdentifierQuickTimeMetadataDirector
_AVMetadataIdentifierQuickTimeMetadataDisplayName
_AVMetadataIdentifierQuickTimeMetadataEncodedBy
_AVMetadataIdentifierQuickTimeMetadataGenre
_AVMetadataIdentifierQuickTimeMetadataInformation
_AVMetadataIdentifierQuickTimeMetadataKeywords
_AVMetadataIdentifierQuickTimeMetadataLocationBody
_AVMetadataIdentifierQuickTimeMetadataLocationDate
_AVMetadataIdentifierQuickTimeMetadataLocationISO6709
_AVMetadataIdentifierQuickTimeMetadataLocationName
_AVMetadataIdentifierQuickTimeMetadataLocationNote
_AVMetadataIdentifierQuickTimeMetadataLocationRole
_AVMetadataIdentifierQuickTimeMetadataMake
_AVMetadataIdentifierQuickTimeMetadataModel
_AVMetadataIdentifierQuickTimeMetadataOriginalArtist
_AVMetadataIdentifierQuickTimeMetadataPerformer
_AVMetadataIdentifierQuickTimeMetadataPhonogramRights
_AVMetadataIdentifierQuickTimeMetadataPreferredAffineTransform
_AVMetadataIdentifierQuickTimeMetadataProducer
_AVMetadataIdentifierQuickTimeMetadataPublisher
_AVMetadataIdentifierQuickTimeMetadataRatingUser
_AVMetadataIdentifierQuickTimeMetadataSoftware
_AVMetadataIdentifierQuickTimeMetadataTitle
_AVMetadataIdentifierQuickTimeMetadataYear
_AVMetadataIdentifierQuickTimeMetadataiXML
_AVMetadataIdentifierQuickTimeUserDataAlbum
_AVMetadataIdentifierQuickTimeUserDataArranger
_AVMetadataIdentifierQuickTimeUserDataArtist
_AVMetadataIdentifierQuickTimeUserDataAuthor
_AVMetadataIdentifierQuickTimeUserDataChapter
_AVMetadataIdentifierQuickTimeUserDataClassicTrackName
_AVMetadataIdentifierQuickTimeUserDataComment
_AVMetadataIdentifierQuickTimeUserDataComposer
_AVMetadataIdentifierQuickTimeUserDataCopyright
_AVMetadataIdentifierQuickTimeUserDataCreationDate
_AVMetadataIdentifierQuickTimeUserDataCredits
_AVMetadataIdentifierQuickTimeUserDataDescription
_AVMetadataIdentifierQuickTimeUserDataDirector
_AVMetadataIdentifierQuickTimeUserDataDisclaimer
_AVMetadataIdentifierQuickTimeUserDataEncodedBy
_AVMetadataIdentifierQuickTimeUserDataFullName
_AVMetadataIdentifierQuickTimeUserDataGenre
_AVMetadataIdentifierQuickTimeUserDataHostComputer
_AVMetadataIdentifierQuickTimeUserDataInformation
_AVMetadataIdentifierQuickTimeUserDataKeywords
_AVMetadataIdentifierQuickTimeUserDataLocationISO6709
_AVMetadataIdentifierQuickTimeUserDataMake
_AVMetadataIdentifierQuickTimeUserDataModel
_AVMetadataIdentifierQuickTimeUserDataOriginalArtist
_AVMetadataIdentifierQuickTimeUserDataOriginalFormat
_AVMetadataIdentifierQuickTimeUserDataOriginalSource
_AVMetadataIdentifierQuickTimeUserDataPerformers
_AVMetadataIdentifierQuickTimeUserDataPhonogramRights
_AVMetadataIdentifierQuickTimeUserDataProducer
_AVMetadataIdentifierQuickTimeUserDataProduct
_AVMetadataIdentifierQuickTimeUserDataPublisher
_AVMetadataIdentifierQuickTimeUserDataSoftware
_AVMetadataIdentifierQuickTimeUserDataSpecialPlaybackRequirements
_AVMetadataIdentifierQuickTimeUserDataTaggedCharacteristic
_AVMetadataIdentifierQuickTimeUserDataTrack
_AVMetadataIdentifierQuickTimeUserDataTrackName
_AVMetadataIdentifierQuickTimeUserDataURLLink
_AVMetadataIdentifierQuickTimeUserDataWarning
_AVMetadataIdentifierQuickTimeUserDataWriter
_AVMetadataIdentifieriTunesMetadataAccountKind
_AVMetadataIdentifieriTunesMetadataAcknowledgement
_AVMetadataIdentifieriTunesMetadataAlbum
_AVMetadataIdentifieriTunesMetadataAlbumArtist
_AVMetadataIdentifieriTunesMetadataAppleID
_AVMetadataIdentifieriTunesMetadataArranger
_AVMetadataIdentifieriTunesMetadataArtDirector
_AVMetadataIdentifieriTunesMetadataArtist
_AVMetadataIdentifieriTunesMetadataArtistID
_AVMetadataIdentifieriTunesMetadataAuthor
_AVMetadataIdentifieriTunesMetadataBeatsPerMin
_AVMetadataIdentifieriTunesMetadataComposer
_AVMetadataIdentifieriTunesMetadataConductor
_AVMetadataIdentifieriTunesMetadataContentRating
_AVMetadataIdentifieriTunesMetadataCopyright
_AVMetadataIdentifieriTunesMetadataCoverArt
_AVMetadataIdentifieriTunesMetadataCredits
_AVMetadataIdentifieriTunesMetadataDescription
_AVMetadataIdentifieriTunesMetadataDirector
_AVMetadataIdentifieriTunesMetadataDiscCompilation
_AVMetadataIdentifieriTunesMetadataDiscNumber
_AVMetadataIdentifieriTunesMetadataEQ
_AVMetadataIdentifieriTunesMetadataEncodedBy
_AVMetadataIdentifieriTunesMetadataEncodingTool
_AVMetadataIdentifieriTunesMetadataExecProducer
_AVMetadataIdentifieriTunesMetadataGenreID
_AVMetadataIdentifieriTunesMetadataGrouping
_AVMetadataIdentifieriTunesMetadataLinerNotes
_AVMetadataIdentifieriTunesMetadataLyrics
_AVMetadataIdentifieriTunesMetadataOnlineExtras
_AVMetadataIdentifieriTunesMetadataOriginalArtist
_AVMetadataIdentifieriTunesMetadataPerformer
_AVMetadataIdentifieriTunesMetadataPhonogramRights
_AVMetadataIdentifieriTunesMetadataPlaylistID
_AVMetadataIdentifieriTunesMetadataPredefinedGenre
_AVMetadataIdentifieriTunesMetadataProducer
_AVMetadataIdentifieriTunesMetadataPublisher
_AVMetadataIdentifieriTunesMetadataRecordCompany
_AVMetadataIdentifieriTunesMetadataReleaseDate
_AVMetadataIdentifieriTunesMetadataSoloist
_AVMetadataIdentifieriTunesMetadataSongID
_AVMetadataIdentifieriTunesMetadataSongName
_AVMetadataIdentifieriTunesMetadataSoundEngineer
_AVMetadataIdentifieriTunesMetadataThanks
_AVMetadataIdentifieriTunesMetadataTrackNumber
_AVMetadataIdentifieriTunesMetadataTrackSubTitle
_AVMetadataIdentifieriTunesMetadataUserComment
_AVMetadataIdentifieriTunesMetadataUserGenre
_AVMetadataItemAttributeDataType
_AVMetadataItemAttributeInfo
_AVMetadataItemAttributeLanguageCode
_AVMetadataItemAttributeMIMEType
_AVMetadataItemAttributeName
_AVMetadataKeySpaceCommon
_AVMetadataKeySpaceID3
_AVMetadataKeySpaceISOUserData
_AVMetadataKeySpaceIcy
_AVMetadataKeySpaceQuickTimeMetadata
_AVMetadataKeySpaceQuickTimeUserData
_AVMetadataKeySpaceiTunes
_AVMetadataObjectTypeAztecCode
_AVMetadataObjectTypeCode128Code
_AVMetadataObjectTypeCode39Code
_AVMetadataObjectTypeCode39Mod43Code
_AVMetadataObjectTypeCode93Code
_AVMetadataObjectTypeDataMatrixCode
_AVMetadataObjectTypeEAN13Code
_AVMetadataObjectTypeEAN8Code
_AVMetadataObjectTypeFace
_AVMetadataObjectTypeITF14Code
_AVMetadataObjectTypeInterleaved2of5Code
_AVMetadataObjectTypePDF417Code
_AVMetadataObjectTypeQRCode
_AVMetadataObjectTypeUPCECode
_AVMetadataQuickTimeMetadataKeyAlbum
_AVMetadataQuickTimeMetadataKeyArranger
_AVMetadataQuickTimeMetadataKeyArtist
_AVMetadataQuickTimeMetadataKeyArtwork
_AVMetadataQuickTimeMetadataKeyAuthor
_AVMetadataQuickTimeMetadataKeyCameraFrameReadoutTime
_AVMetadataQuickTimeMetadataKeyCameraIdentifier
_AVMetadataQuickTimeMetadataKeyCollectionUser
_AVMetadataQuickTimeMetadataKeyComment
_AVMetadataQuickTimeMetadataKeyComposer
_AVMetadataQuickTimeMetadataKeyCopyright
_AVMetadataQuickTimeMetadataKeyCreationDate
_AVMetadataQuickTimeMetadataKeyCredits
_AVMetadataQuickTimeMetadataKeyDescription
_AVMetadataQuickTimeMetadataKeyDirectionFacing
_AVMetadataQuickTimeMetadataKeyDirectionMotion
_AVMetadataQuickTimeMetadataKeyDirector
_AVMetadataQuickTimeMetadataKeyDisplayName
_AVMetadataQuickTimeMetadataKeyEncodedBy
_AVMetadataQuickTimeMetadataKeyGenre
_AVMetadataQuickTimeMetadataKeyInformation
_AVMetadataQuickTimeMetadataKeyKeywords
_AVMetadataQuickTimeMetadataKeyLocationBody
_AVMetadataQuickTimeMetadataKeyLocationDate
_AVMetadataQuickTimeMetadataKeyLocationISO6709
_AVMetadataQuickTimeMetadataKeyLocationName
_AVMetadataQuickTimeMetadataKeyLocationNote
_AVMetadataQuickTimeMetadataKeyLocationRole
_AVMetadataQuickTimeMetadataKeyMake
_AVMetadataQuickTimeMetadataKeyModel
_AVMetadataQuickTimeMetadataKeyOriginalArtist
_AVMetadataQuickTimeMetadataKeyPerformer
_AVMetadataQuickTimeMetadataKeyPhonogramRights
_AVMetadataQuickTimeMetadataKeyProducer
_AVMetadataQuickTimeMetadataKeyPublisher
_AVMetadataQuickTimeMetadataKeyRatingUser
_AVMetadataQuickTimeMetadataKeySoftware
_AVMetadataQuickTimeMetadataKeyTitle
_AVMetadataQuickTimeMetadataKeyYear
_AVMetadataQuickTimeMetadataKeyiXML
_AVMetadataQuickTimeUserDataKeyAlbum
_AVMetadataQuickTimeUserDataKeyArranger
_AVMetadataQuickTimeUserDataKeyArtist
_AVMetadataQuickTimeUserDataKeyAuthor
_AVMetadataQuickTimeUserDataKeyChapter
_AVMetadataQuickTimeUserDataKeyClassicTrackName
_AVMetadataQuickTimeUserDataKeyComment
_AVMetadataQuickTimeUserDataKeyComposer
_AVMetadataQuickTimeUserDataKeyCopyright
_AVMetadataQuickTimeUserDataKeyCreationDate
_AVMetadataQuickTimeUserDataKeyCredits
_AVMetadataQuickTimeUserDataKeyDescription
_AVMetadataQuickTimeUserDataKeyDirector
_AVMetadataQuickTimeUserDataKeyDisclaimer
_AVMetadataQuickTimeUserDataKeyEncodedBy
_AVMetadataQuickTimeUserDataKeyFullName
_AVMetadataQuickTimeUserDataKeyGenre
_AVMetadataQuickTimeUserDataKeyHostComputer
_AVMetadataQuickTimeUserDataKeyInformation
_AVMetadataQuickTimeUserDataKeyKeywords
_AVMetadataQuickTimeUserDataKeyLocationISO6709
_AVMetadataQuickTimeUserDataKeyMake
_AVMetadataQuickTimeUserDataKeyModel
_AVMetadataQuickTimeUserDataKeyOriginalArtist
_AVMetadataQuickTimeUserDataKeyOriginalFormat
_AVMetadataQuickTimeUserDataKeyOriginalSource
_AVMetadataQuickTimeUserDataKeyPerformers
_AVMetadataQuickTimeUserDataKeyPhonogramRights
_AVMetadataQuickTimeUserDataKeyProducer
_AVMetadataQuickTimeUserDataKeyProduct
_AVMetadataQuickTimeUserDataKeyPublisher
_AVMetadataQuickTimeUserDataKeySoftware
_AVMetadataQuickTimeUserDataKeySpecialPlaybackRequirements
_AVMetadataQuickTimeUserDataKeyTaggedCharacteristic
_AVMetadataQuickTimeUserDataKeyTrack
_AVMetadataQuickTimeUserDataKeyTrackName
_AVMetadataQuickTimeUserDataKeyURLLink
_AVMetadataQuickTimeUserDataKeyWarning
_AVMetadataQuickTimeUserDataKeyWriter
_AVMetadataiTunesMetadataKeyAccountKind
_AVMetadataiTunesMetadataKeyAcknowledgement
_AVMetadataiTunesMetadataKeyAlbum
_AVMetadataiTunesMetadataKeyAlbumArtist
_AVMetadataiTunesMetadataKeyAppleID
_AVMetadataiTunesMetadataKeyArranger
_AVMetadataiTunesMetadataKeyArtDirector
_AVMetadataiTunesMetadataKeyArtist
_AVMetadataiTunesMetadataKeyArtistID
_AVMetadataiTunesMetadataKeyAuthor
_AVMetadataiTunesMetadataKeyBeatsPerMin
_AVMetadataiTunesMetadataKeyComposer
_AVMetadataiTunesMetadataKeyConductor
_AVMetadataiTunesMetadataKeyContentRating
_AVMetadataiTunesMetadataKeyCopyright
_AVMetadataiTunesMetadataKeyCoverArt
_AVMetadataiTunesMetadataKeyCredits
_AVMetadataiTunesMetadataKeyDescription
_AVMetadataiTunesMetadataKeyDirector
_AVMetadataiTunesMetadataKeyDiscCompilation
_AVMetadataiTunesMetadataKeyDiscNumber
_AVMetadataiTunesMetadataKeyEQ
_AVMetadataiTunesMetadataKeyEncodedBy
_AVMetadataiTunesMetadataKeyEncodingTool
_AVMetadataiTunesMetadataKeyExecProducer
_AVMetadataiTunesMetadataKeyGenreID
_AVMetadataiTunesMetadataKeyGrouping
_AVMetadataiTunesMetadataKeyLinerNotes
_AVMetadataiTunesMetadataKeyLyrics
_AVMetadataiTunesMetadataKeyOnlineExtras
_AVMetadataiTunesMetadataKeyOriginalArtist
_AVMetadataiTunesMetadataKeyPerformer
_AVMetadataiTunesMetadataKeyPhonogramRights
_AVMetadataiTunesMetadataKeyPlaylistID
_AVMetadataiTunesMetadataKeyPredefinedGenre
_AVMetadataiTunesMetadataKeyProducer
_AVMetadataiTunesMetadataKeyPublisher
_AVMetadataiTunesMetadataKeyRecordCompany
_AVMetadataiTunesMetadataKeyReleaseDate
_AVMetadataiTunesMetadataKeySoloist
_AVMetadataiTunesMetadataKeySongID
_AVMetadataiTunesMetadataKeySongName
_AVMetadataiTunesMetadataKeySoundEngineer
_AVMetadataiTunesMetadataKeyThanks
_AVMetadataiTunesMetadataKeyTrackNumber
_AVMetadataiTunesMetadataKeyTrackSubTitle
_AVMetadataiTunesMetadataKeyUserComment
_AVMetadataiTunesMetadataKeyUserGenre
_AVMovieReferenceRestrictionsKey
_AVMovieShouldPrepareToOptimizeForExclusivePlaybackKey
_AVOutOfBandAlternateTrackDisplayNameKey
_AVOutOfBandAlternateTrackExtendedLanguageTagKey
_AVOutOfBandAlternateTrackIdentifierKey
_AVOutOfBandAlternateTrackIsDefaultKey
_AVOutOfBandAlternateTrackMediaCharactersticsKey
_AVOutOfBandAlternateTrackSourceKey
_AVOutputSettingsPreset1280x720
_AVOutputSettingsPreset1920x1080
_AVOutputSettingsPreset3840x2160
_AVOutputSettingsPreset640x480
_AVOutputSettingsPreset960x540
_AVPixelBufferAttributeMediatorPixelBufferAttributesDidChangeNotification
_AVPlayerItemBecameCurrentNotification
_AVPlayerItemDidPlayToEndTimeNotification
_AVPlayerItemFailedToPlayToEndTimeErrorKey
_AVPlayerItemFailedToPlayToEndTimeNotification
_AVPlayerItemGaplessInfoDurationInFramesKey
_AVPlayerItemGaplessInfoEncodingDelayInFramesKey
_AVPlayerItemGaplessInfoEncodingDrainInFramesKey
_AVPlayerItemGaplessInfoHeuristicInfoKey
_AVPlayerItemGaplessInfoLastPacketsResyncKey
_AVPlayerItemLegibleOutputTextStylingResolutionDefault
_AVPlayerItemLegibleOutputTextStylingResolutionSourceAndRulesOnly
_AVPlayerItemNewAccessLogEntryNotification
_AVPlayerItemNewErrorLogEntryNotification
_AVPlayerItemOutputDidFinishSampleSequenceNotification
_AVPlayerItemOutputWillStartSampleSequenceNotification
_AVPlayerItemPlayabilityMetricsBandwidthSlopFactorKey
_AVPlayerItemPlayabilityMetricsBytesStillNeededToEndKey
_AVPlayerItemPlayabilityMetricsCurrentMeasuredBytesPerSecondKey
_AVPlayerItemPlayabilityMetricsDurationFromNowToEndKey
_AVPlayerItemPlayabilityMetricsEstimatedTimeToLikelyToKeepUpKey
_AVPlayerItemPlayabilityMetricsRawMeasuredBytesPerSecondKey
_AVPlayerItemPlayabilityMetricsRemoteIPAddress
_AVPlayerItemPlaybackStalledNotification
_AVPlayerItemStoppedBeingCurrentNotification
_AVPlayerItemTimeJumpedNotification
_AVPlayerItemTimebaseChangedNotification
_AVPlayerItemTrackVideoFieldModeDeinterlaceFields
_AVPlayerItemVariantChangedNotification
_AVPlayerItemWasRemovedFromPlayQueueNotification
_AVPlayerLayerContentsAreFlippedObservationContext
_AVPlayerLayerPlayerCurrentItemPresentationSizeObservationContext
_AVPlayerPreferredAudioLanguagesKey
_AVPlayerPreferredChapterHREFLanguagesKey
_AVPlayerPreferredChapterNameLanguagesKey
_AVPlayerPreferredMetadataLanguagesKey
_AVPlayerPreferredSubtitleLanguagesKey
_AVPlayer_FigPlayerProperty_AudioVolumeRampDuration
_AVPlayer_FigPlayerProperty_Rate
_AVPropertyStoragePerThreadStorageKey
_AVProtectedContentProviderFairPlay
_AVSampleBufferDisplayLayerFailedToDecodeNotification
_AVSampleBufferDisplayLayerFailedToDecodeNotificationErrorKey
_AVStreamDataParserContentKeyRequestProtocolVersionsKey
_AVTrackAssociationTypeAudioFallback
_AVTrackAssociationTypeChapterList
_AVTrackAssociationTypeForcedSubtitlesOnly
_AVTrackAssociationTypeMetadataReferent
_AVTrackAssociationTypeSelectionFollower
_AVTrackAssociationTypeTimecode
_AVTransformRampEndTransformKey
_AVTransformRampStartTransformKey
_AVURLAssetAirPlayAuthorizationInfoKey
_AVURLAssetAllowedHTTPProtocolTypesKey
_AVURLAssetAlternativeConfigurationOptionsKey
_AVURLAssetBoundNetworkInterfaceName
_AVURLAssetCacheKey
_AVURLAssetCacheNonPurgeableMemoryLimitKey
_AVURLAssetCacheUseNonPurgeableMemoryKey
_AVURLAssetClientBundleIdentifierKey
_AVURLAssetDownloadCompleteFailedNotification
_AVURLAssetDownloadCompleteNotificationErrorKey
_AVURLAssetDownloadCompleteSuccessNotification
_AVURLAssetDownloadDestinationURLKey
_AVURLAssetDownloadIsLowPriorityKey
_AVURLAssetDownloadTokenKey
_AVURLAssetHTTPCookiesKey
_AVURLAssetHTTPHeaderFieldsKey
_AVURLAssetInheritURIQueryComponentFromReferencingURIKey
_AVURLAssetMaxSizeAllowedForCellularAccessKey
_AVURLAssetNetworkProbeRequestDisabledKey
_AVURLAssetOptimizeAccessForLinearMoviePlaybackKey
_AVURLAssetOutOfBandAlternateTracksKey
_AVURLAssetPlayabilityValidationPropertyListKey
_AVURLAssetPreferPreciseDurationAndTimingKey
_AVURLAssetPreloadDurationWhenNextItemKey
_AVURLAssetProtectedContentSupportStorageURLKey
_AVURLAssetPurchaseBundleKey
_AVURLAssetReadAheadOnByteStreamCreationEnabledKey
_AVURLAssetReferenceRestrictionsKey
_AVURLAssetSSLPropertiesKey
_AVURLAssetShouldMatchDataInCacheByURLPathComponentOnlyKey
_AVURLAssetShouldMatchDataInCacheByURLWithoutQueryComponentKey
_AVURLAssetShouldPrepareToOptimizeForExclusivePlaybackKey
_AVURLAssetShouldSupportAliasDataReferencesKey
_AVURLAssetTypeKey
_AVURLAssetUseAppleWirelessDirectLinkKey
_AVURLAssetUsesNoPersistentCacheKey
_AVURLAssetiTunesStoreContentDSIDKey
_AVURLAssetiTunesStoreContentDownloadParametersKey
_AVURLAssetiTunesStoreContentIDKey
_AVURLAssetiTunesStoreContentInfoKey
_AVURLAssetiTunesStoreContentPurchasedMediaKindKey
_AVURLAssetiTunesStoreContentTypeKey
_AVURLAssetiTunesStoreContentUserAgentKey
_AVVideoAllowFrameReorderingKey
_AVVideoAverageBitRateKey
_AVVideoAverageNonDroppableFrameRateKey
_AVVideoCleanApertureHeightKey
_AVVideoCleanApertureHorizontalOffsetKey
_AVVideoCleanApertureKey
_AVVideoCleanApertureVerticalOffsetKey
_AVVideoCleanApertureWidthKey
_AVVideoCodecAppleProRes422
_AVVideoCodecAppleProRes4444
_AVVideoCodecH264
_AVVideoCodecJPEG
_AVVideoCodecKey
_AVVideoColorPrimariesKey
_AVVideoColorPrimaries_EBU_3213
_AVVideoColorPrimaries_ITU_R_709_2
_AVVideoColorPrimaries_SMPTE_C
_AVVideoColorPropertiesKey
_AVVideoCompositionInstructionEnablePostProcessingKey
_AVVideoCompositionLayerDefinitionConstantCropRectangleKey
_AVVideoCompositionLayerDefinitionTweenedCropRectangleKey
_AVVideoCompressionPropertiesKey
_AVVideoEncoderSpecificationKey
_AVVideoEncoderSpecificationUseHardwareEncoderIfAvailableKey
_AVVideoExpectedSourceFrameRateKey
_AVVideoFrameRateConversionAlgorithmFast
_AVVideoFrameRateConversionAlgorithmPrecise
_AVVideoH264EntropyModeCABAC
_AVVideoH264EntropyModeCAVLC
_AVVideoH264EntropyModeKey
_AVVideoHeightKey
_AVVideoMaxKeyFrameIntervalDurationKey
_AVVideoMaxKeyFrameIntervalKey
_AVVideoPixelAspectRatioHorizontalSpacingKey
_AVVideoPixelAspectRatioKey
_AVVideoPixelAspectRatioVerticalSpacingKey
_AVVideoProfileLevelH264Baseline30
_AVVideoProfileLevelH264Baseline31
_AVVideoProfileLevelH264Baseline41
_AVVideoProfileLevelH264BaselineAutoLevel
_AVVideoProfileLevelH264High40
_AVVideoProfileLevelH264High41
_AVVideoProfileLevelH264HighAutoLevel
_AVVideoProfileLevelH264Main30
_AVVideoProfileLevelH264Main31
_AVVideoProfileLevelH264Main32
_AVVideoProfileLevelH264Main41
_AVVideoProfileLevelH264MainAutoLevel
_AVVideoProfileLevelKey
_AVVideoQualityKey
_AVVideoScalingModeFit
_AVVideoScalingModeKey
_AVVideoScalingModeResize
_AVVideoScalingModeResizeAspect
_AVVideoScalingModeResizeAspectFill
_AVVideoTransferFunctionKey
_AVVideoTransferFunction_ITU_R_709_2
_AVVideoTransferFunction_SMPTE_240M_1995
_AVVideoWidthKey
_AVVideoYCbCrMatrixKey
_AVVideoYCbCrMatrix_ITU_R_601_4
_AVVideoYCbCrMatrix_ITU_R_709_2
_AVVideoYCbCrMatrix_SMPTE_240M_1995
_CGAffineTransformFromNSArray
_CopyFigOptionsFromAVMovieOptions
_MediaIODeviceConfigureToBestMatchPixelBufferAttributesAndMinimumFrameDuration
_MediaIOGraphConnectNodeToFanOutNode
_MediaIOGraphRemoveAllNodes
_MediaIOGraphUnusedNodeIndexForNodeFunctionalDesignation
_NSArrayFromCGAffineTransform
_NSArrayFromRGBAComponents
_NSArrayGetRGBAComponents
_OBJC_CLASS_$_AVAIFCOutputSettingsValidator
_OBJC_CLASS_$_AVAIFFOutputSettingsValidator
_OBJC_CLASS_$_AVAVAudioSettingsAudioOutputSettings
_OBJC_CLASS_$_AVAVVideoSettingsVideoOutputSettings
_OBJC_CLASS_$_AVAsset
_OBJC_CLASS_$_AVAssetCache
_OBJC_CLASS_$_AVAssetCacheInternal
_OBJC_CLASS_$_AVAssetCollection
_OBJC_CLASS_$_AVAssetCollectionFactory
_OBJC_CLASS_$_AVAssetCollectionInspector
_OBJC_CLASS_$_AVAssetCollectionInspectorLoader
_OBJC_CLASS_$_AVAssetCollectionInternal
_OBJC_CLASS_$_AVAssetDownloadSession
_OBJC_CLASS_$_AVAssetDownloadSessionInternal
_OBJC_CLASS_$_AVAssetExportSession
_OBJC_CLASS_$_AVAssetExportSessionInternal
_OBJC_CLASS_$_AVAssetImageGenerator
_OBJC_CLASS_$_AVAssetImageGeneratorInternal
_OBJC_CLASS_$_AVAssetInspector
_OBJC_CLASS_$_AVAssetInspectorLoader
_OBJC_CLASS_$_AVAssetInternal
_OBJC_CLASS_$_AVAssetMakeReadyForInspectionLoader
_OBJC_CLASS_$_AVAssetMediaSelectionGroup
_OBJC_CLASS_$_AVAssetProxy
_OBJC_CLASS_$_AVAssetProxyInternal
_OBJC_CLASS_$_AVAssetReader
_OBJC_CLASS_$_AVAssetReaderAudioMixOutput
_OBJC_CLASS_$_AVAssetReaderAudioMixOutputInternal
_OBJC_CLASS_$_AVAssetReaderInternal
_OBJC_CLASS_$_AVAssetReaderOutput
_OBJC_CLASS_$_AVAssetReaderOutputInternal
_OBJC_CLASS_$_AVAssetReaderOutputMetadataAdaptor
_OBJC_CLASS_$_AVAssetReaderOutputMetadataAdaptorInternal
_OBJC_CLASS_$_AVAssetReaderSampleReferenceOutput
_OBJC_CLASS_$_AVAssetReaderSampleReferenceOutputInternal
_OBJC_CLASS_$_AVAssetReaderTrackOutput
_OBJC_CLASS_$_AVAssetReaderTrackOutputInternal
_OBJC_CLASS_$_AVAssetReaderVideoCompositionOutput
_OBJC_CLASS_$_AVAssetReaderVideoCompositionOutputInternal
_OBJC_CLASS_$_AVAssetResourceLoader
_OBJC_CLASS_$_AVAssetResourceLoaderInternal
_OBJC_CLASS_$_AVAssetResourceLoadingContentInformationRequest
_OBJC_CLASS_$_AVAssetResourceLoadingContentInformationRequestInternal
_OBJC_CLASS_$_AVAssetResourceLoadingDataRequest
_OBJC_CLASS_$_AVAssetResourceLoadingDataRequestInternal
_OBJC_CLASS_$_AVAssetResourceLoadingRequest
_OBJC_CLASS_$_AVAssetResourceLoadingRequestInternal
_OBJC_CLASS_$_AVAssetResourceRenewalRequest
_OBJC_CLASS_$_AVAssetSynchronousInspectorLoader
_OBJC_CLASS_$_AVAssetTrack
_OBJC_CLASS_$_AVAssetTrackEnumerator
_OBJC_CLASS_$_AVAssetTrackGroup
_OBJC_CLASS_$_AVAssetTrackGroupInternal
_OBJC_CLASS_$_AVAssetTrackInspector
_OBJC_CLASS_$_AVAssetTrackInternal
_OBJC_CLASS_$_AVAssetTrackSegment
_OBJC_CLASS_$_AVAssetWriter
_OBJC_CLASS_$_AVAssetWriterAsynchronousFinishWritingDelegate
_OBJC_CLASS_$_AVAssetWriterClientInitiatedTerminalHelper
_OBJC_CLASS_$_AVAssetWriterConfigurationState
_OBJC_CLASS_$_AVAssetWriterDoNothingFinishWritingDelegate
_OBJC_CLASS_$_AVAssetWriterFailedTerminalHelper
_OBJC_CLASS_$_AVAssetWriterFigAssetWriterNotificationHandler
_OBJC_CLASS_$_AVAssetWriterFinishWritingHelper
_OBJC_CLASS_$_AVAssetWriterHelper
_OBJC_CLASS_$_AVAssetWriterInput
_OBJC_CLASS_$_AVAssetWriterInputConfigurationState
_OBJC_CLASS_$_AVAssetWriterInputFigAssetWriterEndPassOperation
_OBJC_CLASS_$_AVAssetWriterInputGroup
_OBJC_CLASS_$_AVAssetWriterInputGroupInternal
_OBJC_CLASS_$_AVAssetWriterInputHelper
_OBJC_CLASS_$_AVAssetWriterInputInterPassAnalysisHelper
_OBJC_CLASS_$_AVAssetWriterInputInternal
_OBJC_CLASS_$_AVAssetWriterInputMediaDataRequester
_OBJC_CLASS_$_AVAssetWriterInputMetadataAdaptor
_OBJC_CLASS_$_AVAssetWriterInputMetadataAdaptorInternal
_OBJC_CLASS_$_AVAssetWriterInputNoMorePassesHelper
_OBJC_CLASS_$_AVAssetWriterInputPassDescription
_OBJC_CLASS_$_AVAssetWriterInputPassDescriptionInternal
_OBJC_CLASS_$_AVAssetWriterInputPassDescriptionResponder
_OBJC_CLASS_$_AVAssetWriterInputPixelBufferAdaptor
_OBJC_CLASS_$_AVAssetWriterInputPixelBufferAdaptorInternal
_OBJC_CLASS_$_AVAssetWriterInputSelectionOption
_OBJC_CLASS_$_AVAssetWriterInputTerminalHelper
_OBJC_CLASS_$_AVAssetWriterInputUnknownHelper
_OBJC_CLASS_$_AVAssetWriterInputWritingHelper
_OBJC_CLASS_$_AVAssetWriterInternal
_OBJC_CLASS_$_AVAssetWriterSynchronousMainThreadFinishWritingDelegate
_OBJC_CLASS_$_AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate
_OBJC_CLASS_$_AVAssetWriterTerminalHelper
_OBJC_CLASS_$_AVAssetWriterUnknownHelper
_OBJC_CLASS_$_AVAssetWriterWritingHelper
_OBJC_CLASS_$_AVAsynchronousVideoCompositionRequest
_OBJC_CLASS_$_AVAsynchronousVideoCompositionRequestInternal
_OBJC_CLASS_$_AVAudioMix
_OBJC_CLASS_$_AVAudioMixInputParameters
_OBJC_CLASS_$_AVAudioMixInputParametersInternal
_OBJC_CLASS_$_AVAudioMixInternal
_OBJC_CLASS_$_AVAudioOutputSettings
_OBJC_CLASS_$_AVAudioSettingsValueConstrainer
_OBJC_CLASS_$_AVCMNotificationDispatcher
_OBJC_CLASS_$_AVCMNotificationDispatcherListenerAndCallback
_OBJC_CLASS_$_AVCMNotificationDispatcherListenerKey
_OBJC_CLASS_$_AVCallbackRegistry
_OBJC_CLASS_$_AVCaptureAudioChannel
_OBJC_CLASS_$_AVCaptureAudioChannelInternal
_OBJC_CLASS_$_AVCaptureAudioDataOutput
_OBJC_CLASS_$_AVCaptureAudioDataOutputCallbackData
_OBJC_CLASS_$_AVCaptureAudioDataOutputInternal
_OBJC_CLASS_$_AVCaptureAudioFileOutput
_OBJC_CLASS_$_AVCaptureAudioFileOutputInternal
_OBJC_CLASS_$_AVCaptureAudioPreviewOutput
_OBJC_CLASS_$_AVCaptureAudioPreviewOutputInternal
_OBJC_CLASS_$_AVCaptureAudioSettings
_OBJC_CLASS_$_AVCaptureConnection
_OBJC_CLASS_$_AVCaptureConnectionInternal
_OBJC_CLASS_$_AVCaptureDALDevice
_OBJC_CLASS_$_AVCaptureDevice
_OBJC_CLASS_$_AVCaptureDeviceFormat
_OBJC_CLASS_$_AVCaptureDeviceFormatInternal
_OBJC_CLASS_$_AVCaptureDeviceInput
_OBJC_CLASS_$_AVCaptureDeviceInputInternal
_OBJC_CLASS_$_AVCaptureDeviceInputSource
_OBJC_CLASS_$_AVCaptureDeviceInputSourceInternal
_OBJC_CLASS_$_AVCaptureDeviceInternal
_OBJC_CLASS_$_AVCaptureFileOutput
_OBJC_CLASS_$_AVCaptureFileOutputInternal
_OBJC_CLASS_$_AVCaptureFileOutputPauseOperationDescriptor
_OBJC_CLASS_$_AVCaptureFileOutputRecordingOperationDescriptor
_OBJC_CLASS_$_AVCaptureHALDevice
_OBJC_CLASS_$_AVCaptureInput
_OBJC_CLASS_$_AVCaptureInputInternal
_OBJC_CLASS_$_AVCaptureInputPort
_OBJC_CLASS_$_AVCaptureInputPortInternal
_OBJC_CLASS_$_AVCaptureMovieFileOutput
_OBJC_CLASS_$_AVCaptureMovieFileOutputInternal
_OBJC_CLASS_$_AVCaptureOperationDescriptorQueue
_OBJC_CLASS_$_AVCaptureOperationDescriptorQueueItem
_OBJC_CLASS_$_AVCaptureOutput
_OBJC_CLASS_$_AVCaptureOutputInternal
_OBJC_CLASS_$_AVCaptureOutputSettings
_OBJC_CLASS_$_AVCaptureScreenInput
_OBJC_CLASS_$_AVCaptureScreenInputInternal
_OBJC_CLASS_$_AVCaptureSession
_OBJC_CLASS_$_AVCaptureSessionInternal
_OBJC_CLASS_$_AVCaptureSessionInternalState
_OBJC_CLASS_$_AVCaptureStillImageOutput
_OBJC_CLASS_$_AVCaptureStillImageOutputInternal
_OBJC_CLASS_$_AVCaptureStillImageOutputUtils
_OBJC_CLASS_$_AVCaptureStillImageRequest
_OBJC_CLASS_$_AVCaptureStillImageTransform
_OBJC_CLASS_$_AVCaptureVideoDataOutput
_OBJC_CLASS_$_AVCaptureVideoDataOutputCallbackData
_OBJC_CLASS_$_AVCaptureVideoDataOutputInternal
_OBJC_CLASS_$_AVCaptureVideoPreviewLayer
_OBJC_CLASS_$_AVCaptureVideoPreviewLayerInternal
_OBJC_CLASS_$_AVCaptureVideoSettings
_OBJC_CLASS_$_AVChapterMetadataItem
_OBJC_CLASS_$_AVChapterMetadataItemInternal
_OBJC_CLASS_$_AVComposition
_OBJC_CLASS_$_AVCompositionFormatReaderInspector
_OBJC_CLASS_$_AVCompositionInternal
_OBJC_CLASS_$_AVCompositionTrack
_OBJC_CLASS_$_AVCompositionTrackInternal
_OBJC_CLASS_$_AVCompositionTrackReaderInspector
_OBJC_CLASS_$_AVCompositionTrackSegment
_OBJC_CLASS_$_AVCompositionTrackSegmentInternal
_OBJC_CLASS_$_AVCustomVideoCompositorSession
_OBJC_CLASS_$_AVExportSettingsOutputSettingsAssistantBaseSettings
_OBJC_CLASS_$_AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster
_OBJC_CLASS_$_AVFigAssetInspector
_OBJC_CLASS_$_AVFigAssetInspectorLoader
_OBJC_CLASS_$_AVFigAssetTrackInspector
_OBJC_CLASS_$_AVFigAssetWriterAudioTrack
_OBJC_CLASS_$_AVFigAssetWriterGenericTrack
_OBJC_CLASS_$_AVFigAssetWriterTrack
_OBJC_CLASS_$_AVFigAssetWriterVideoTrack
_OBJC_CLASS_$_AVFigObjectInspector
_OBJC_CLASS_$_AVFloat64Range
_OBJC_CLASS_$_AVFormatReaderInspector
_OBJC_CLASS_$_AVFormatSpecification
_OBJC_CLASS_$_AVFragmentedMovie
_OBJC_CLASS_$_AVFragmentedMovieInternal
_OBJC_CLASS_$_AVFragmentedMovieMinder
_OBJC_CLASS_$_AVFragmentedMovieMinderInternal
_OBJC_CLASS_$_AVFragmentedMovieTrack
_OBJC_CLASS_$_AVFragmentedMovieTrackInternal
_OBJC_CLASS_$_AVFrameRateRange
_OBJC_CLASS_$_AVFrameRateRangeInternal
_OBJC_CLASS_$_AVGarbageCollectedWeakReference
_OBJC_CLASS_$_AVGenericMediaFileOutputSettingsValidator
_OBJC_CLASS_$_AVIOKitOutputSettingsAssistantVideoEncoderCapabilities
_OBJC_CLASS_$_AVISOOutputSettingsValidator
_OBJC_CLASS_$_AVMediaDataRequester
_OBJC_CLASS_$_AVMediaDataStorage
_OBJC_CLASS_$_AVMediaDataStorageInternal
_OBJC_CLASS_$_AVMediaFileOutputSettingsValidator
_OBJC_CLASS_$_AVMediaFileType
_OBJC_CLASS_$_AVMediaSelectionGroup
_OBJC_CLASS_$_AVMediaSelectionGroupInternal
_OBJC_CLASS_$_AVMediaSelectionKeyValueOption
_OBJC_CLASS_$_AVMediaSelectionOption
_OBJC_CLASS_$_AVMediaSelectionOptionInternal
_OBJC_CLASS_$_AVMediaSelectionTrackOption
_OBJC_CLASS_$_AVMetadataEnumerator
_OBJC_CLASS_$_AVMetadataFaceObject
_OBJC_CLASS_$_AVMetadataFaceObjectInternal
_OBJC_CLASS_$_AVMetadataItem
_OBJC_CLASS_$_AVMetadataItemFilter
_OBJC_CLASS_$_AVMetadataItemFilterForSharing
_OBJC_CLASS_$_AVMetadataItemFilterInternal
_OBJC_CLASS_$_AVMetadataItemInternal
_OBJC_CLASS_$_AVMetadataObject
_OBJC_CLASS_$_AVMetadataObjectInternal
_OBJC_CLASS_$_AVMovie
_OBJC_CLASS_$_AVMovieInternal
_OBJC_CLASS_$_AVMovieTrack
_OBJC_CLASS_$_AVMovieTrackInternal
_OBJC_CLASS_$_AVMutableAudioMix
_OBJC_CLASS_$_AVMutableAudioMixInputParameters
_OBJC_CLASS_$_AVMutableComposition
_OBJC_CLASS_$_AVMutableCompositionInternal
_OBJC_CLASS_$_AVMutableCompositionTrack
_OBJC_CLASS_$_AVMutableCompositionTrackInternal
_OBJC_CLASS_$_AVMutableMetadataItem
_OBJC_CLASS_$_AVMutableMovie
_OBJC_CLASS_$_AVMutableMovieInternal
_OBJC_CLASS_$_AVMutableMovieTrack
_OBJC_CLASS_$_AVMutableMovieTrackInternal
_OBJC_CLASS_$_AVMutableScheduledAudioParameters
_OBJC_CLASS_$_AVMutableTimedMetadataGroup
_OBJC_CLASS_$_AVMutableVideoComposition
_OBJC_CLASS_$_AVMutableVideoCompositionInstruction
_OBJC_CLASS_$_AVMutableVideoCompositionLayerInstruction
_OBJC_CLASS_$_AVOccasionalTimebaseObserver
_OBJC_CLASS_$_AVOnceTimebaseObserver
_OBJC_CLASS_$_AVOutputSettings
_OBJC_CLASS_$_AVOutputSettingsAssistant
_OBJC_CLASS_$_AVOutputSettingsAssistantInternal
_OBJC_CLASS_$_AVPeriodicTimebaseObserver
_OBJC_CLASS_$_AVPixelBufferAttributeMediator
_OBJC_CLASS_$_AVPixelBufferAttributesVideoOutputSettings
_OBJC_CLASS_$_AVPlaybackItemInspector
_OBJC_CLASS_$_AVPlaybackItemInspectorLoader
_OBJC_CLASS_$_AVPlaybackItemTrackInspector
_OBJC_CLASS_$_AVPlayer
_OBJC_CLASS_$_AVPlayerConnection
_OBJC_CLASS_$_AVPlayerInternal
_OBJC_CLASS_$_AVPlayerItem
_OBJC_CLASS_$_AVPlayerItemAccessLog
_OBJC_CLASS_$_AVPlayerItemAccessLogEvent
_OBJC_CLASS_$_AVPlayerItemAccessLogEventInternal
_OBJC_CLASS_$_AVPlayerItemAccessLogInternal
_OBJC_CLASS_$_AVPlayerItemErrorLog
_OBJC_CLASS_$_AVPlayerItemErrorLogEvent
_OBJC_CLASS_$_AVPlayerItemErrorLogEventInternal
_OBJC_CLASS_$_AVPlayerItemErrorLogInternal
_OBJC_CLASS_$_AVPlayerItemInternal
_OBJC_CLASS_$_AVPlayerItemLegibleOutput
_OBJC_CLASS_$_AVPlayerItemLegibleOutputInternal
_OBJC_CLASS_$_AVPlayerItemLegibleOutputRealDependencyFactory
_OBJC_CLASS_$_AVPlayerItemMetadataOutput
_OBJC_CLASS_$_AVPlayerItemMetadataOutputInternal
_OBJC_CLASS_$_AVPlayerItemOutput
_OBJC_CLASS_$_AVPlayerItemOutputInternal
_OBJC_CLASS_$_AVPlayerItemTrack
_OBJC_CLASS_$_AVPlayerItemTrackInternal
_OBJC_CLASS_$_AVPlayerItemVideoOutput
_OBJC_CLASS_$_AVPlayerItemVideoOutputInternal
_OBJC_CLASS_$_AVPlayerLayer
_OBJC_CLASS_$_AVPlayerLayerIntermediateLayer
_OBJC_CLASS_$_AVPlayerLayerInternal
_OBJC_CLASS_$_AVPlayerMediaSelectionCriteria
_OBJC_CLASS_$_AVPlayerMediaSelectionCriteriaInternal
_OBJC_CLASS_$_AVPropertyStorage
_OBJC_CLASS_$_AVQueuePlayer
_OBJC_CLASS_$_AVQueuePlayerInternal
_OBJC_CLASS_$_AVResolvedDecompressionSettings
_OBJC_CLASS_$_AVRetainReleaseWeakReference
_OBJC_CLASS_$_AVRunLoopCondition
_OBJC_CLASS_$_AVRunLoopConditionRunLoopState
_OBJC_CLASS_$_AVSampleBufferAudioRenderer
_OBJC_CLASS_$_AVSampleBufferAudioRendererInternal
_OBJC_CLASS_$_AVSampleBufferDisplayLayer
_OBJC_CLASS_$_AVSampleBufferDisplayLayerContentLayer
_OBJC_CLASS_$_AVSampleBufferDisplayLayerInternal
_OBJC_CLASS_$_AVSampleBufferGenerator
_OBJC_CLASS_$_AVSampleBufferGeneratorInternal
_OBJC_CLASS_$_AVSampleBufferRenderSynchronizer
_OBJC_CLASS_$_AVSampleBufferRenderSynchronizerInternal
_OBJC_CLASS_$_AVSampleBufferRequest
_OBJC_CLASS_$_AVSampleBufferRequestInternal
_OBJC_CLASS_$_AVSampleCursor
_OBJC_CLASS_$_AVSampleCursorInternal
_OBJC_CLASS_$_AVScheduledAudioParameters
_OBJC_CLASS_$_AVScheduledAudioParametersInternal
_OBJC_CLASS_$_AVStreamDataAsset
_OBJC_CLASS_$_AVStreamDataAssetInspector
_OBJC_CLASS_$_AVStreamDataAssetTrackInspector
_OBJC_CLASS_$_AVStreamDataInspectionOnlyAsset
_OBJC_CLASS_$_AVStreamDataParser
_OBJC_CLASS_$_AVStreamDataParserInternal
_OBJC_CLASS_$_AVStreamingResourceInspector
_OBJC_CLASS_$_AVSubtitleLayer
_OBJC_CLASS_$_AVSubtitleLayerInternal
_OBJC_CLASS_$_AVSynchronizedLayer
_OBJC_CLASS_$_AVSynchronizedLayerInternal
_OBJC_CLASS_$_AVTextStyleRule
_OBJC_CLASS_$_AVTextStyleRuleInternal
_OBJC_CLASS_$_AVTimebaseObserver
_OBJC_CLASS_$_AVTimedMetadataGroup
_OBJC_CLASS_$_AVTimedMetadataGroupInternal
_OBJC_CLASS_$_AVTrackReaderInspector
_OBJC_CLASS_$_AVURLAsset
_OBJC_CLASS_$_AVURLAssetInternal
_OBJC_CLASS_$_AVURLAuthenticationChallenge
_OBJC_CLASS_$_AVUnreachableAssetInspectorLoader
_OBJC_CLASS_$_AVVideoComposition
_OBJC_CLASS_$_AVVideoCompositionCoreAnimationTool
_OBJC_CLASS_$_AVVideoCompositionCoreAnimationToolInternal
_OBJC_CLASS_$_AVVideoCompositionInstruction
_OBJC_CLASS_$_AVVideoCompositionInstructionInternal
_OBJC_CLASS_$_AVVideoCompositionInternal
_OBJC_CLASS_$_AVVideoCompositionLayerInstruction
_OBJC_CLASS_$_AVVideoCompositionLayerInstructionInternal
_OBJC_CLASS_$_AVVideoCompositionRenderContext
_OBJC_CLASS_$_AVVideoCompositionRenderContextInternal
_OBJC_CLASS_$_AVVideoOutputSettings
_OBJC_CLASS_$_AVVideoPerformanceMetrics
_OBJC_CLASS_$_AVVideoPerformanceMetricsInternal
_OBJC_CLASS_$_AVWAVEOutputSettingsValidator
_OBJC_CLASS_$_AVWeakKeyValueObserverProxy
_OBJC_CLASS_$_AVWeakReference
_OBJC_CLASS_$_AVWeakReferencingDelegateStorage
_OBJC_CLASS_$_CMTimeAsValue
_OBJC_CLASS_$_CMTimeMappingAsValue
_OBJC_CLASS_$_CMTimeRangeAsValue
_OBJC_CLASS_$_MediaIOGraphNodeDescription
_OBJC_CLASS_$_MediaIOGraphNodeList
_OBJC_IVAR_$_AVAssetCacheInternal.url
_OBJC_IVAR_$_AVAssetCollectionFactory._collectionsByURLString
_OBJC_IVAR_$_AVAssetCollectionFactory._collectionsQ
_OBJC_IVAR_$_AVAssetCollectionInspector._figCollection
_OBJC_IVAR_$_AVAssetCollectionInternal.inspectorLoader
_OBJC_IVAR_$_AVAssetCollectionInternal.inspectorQ
_OBJC_IVAR_$_AVAssetCollectionInternal.rootURL
_OBJC_IVAR_$_AVAssetCollectionInternal.weakReference
_OBJC_IVAR_$_AVAssetDownloadSession._internal
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.URL
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.asset
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.cachePrimingDownloadTokenNum
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.destinationURL
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.downloadToken
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.error
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.playbackItem
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.player
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.priority
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.readWriteQueue
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.status
_OBJC_IVAR_$_AVAssetDownloadSessionInternal.weakReference
_OBJC_IVAR_$_AVAssetExportSessionInternal.actualOutputFileType
_OBJC_IVAR_$_AVAssetExportSessionInternal.asset
_OBJC_IVAR_$_AVAssetExportSessionInternal.audioMix
_OBJC_IVAR_$_AVAssetExportSessionInternal.audioTimePitchAlgorithm
_OBJC_IVAR_$_AVAssetExportSessionInternal.canUseFastFrameRateConversion
_OBJC_IVAR_$_AVAssetExportSessionInternal.canUseFastFrameRateConversionSemaphore
_OBJC_IVAR_$_AVAssetExportSessionInternal.compatibleFileTypes
_OBJC_IVAR_$_AVAssetExportSessionInternal.compatibleFileTypesDispatchOncePredicate
_OBJC_IVAR_$_AVAssetExportSessionInternal.customVideoCompositorSession
_OBJC_IVAR_$_AVAssetExportSessionInternal.directoryForTemporaryFiles
_OBJC_IVAR_$_AVAssetExportSessionInternal.error
_OBJC_IVAR_$_AVAssetExportSessionInternal.figVideoCompositor
_OBJC_IVAR_$_AVAssetExportSessionInternal.firstVideoTrack
_OBJC_IVAR_$_AVAssetExportSessionInternal.handler
_OBJC_IVAR_$_AVAssetExportSessionInternal.maxFileSize
_OBJC_IVAR_$_AVAssetExportSessionInternal.metadata
_OBJC_IVAR_$_AVAssetExportSessionInternal.metadataItemFilter
_OBJC_IVAR_$_AVAssetExportSessionInternal.minVideoFrameDuration
_OBJC_IVAR_$_AVAssetExportSessionInternal.optimizeForNetworkUse
_OBJC_IVAR_$_AVAssetExportSessionInternal.outputFileCreatedByRemaker
_OBJC_IVAR_$_AVAssetExportSessionInternal.outputFileType
_OBJC_IVAR_$_AVAssetExportSessionInternal.outputURL
_OBJC_IVAR_$_AVAssetExportSessionInternal.preset
_OBJC_IVAR_$_AVAssetExportSessionInternal.preset16x9
_OBJC_IVAR_$_AVAssetExportSessionInternal.progress
_OBJC_IVAR_$_AVAssetExportSessionInternal.readWriteQueue
_OBJC_IVAR_$_AVAssetExportSessionInternal.remaker
_OBJC_IVAR_$_AVAssetExportSessionInternal.remakerNotificationSerializationQueue
_OBJC_IVAR_$_AVAssetExportSessionInternal.status
_OBJC_IVAR_$_AVAssetExportSessionInternal.timeRange
_OBJC_IVAR_$_AVAssetExportSessionInternal.useMultiPass
_OBJC_IVAR_$_AVAssetExportSessionInternal.videoComposition
_OBJC_IVAR_$_AVAssetExportSessionInternal.videoFrameRateConversionAlgorithm
_OBJC_IVAR_$_AVAssetExportSessionInternal.waitingForFastFrameRateResponse
_OBJC_IVAR_$_AVAssetExportSessionInternal.weakReference
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.apertureMode
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.appliesPreferredTrackTransform
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.asset
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.cancelledRequestIDThreshold
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.customVideoCompositorSession
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.generator
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.imageRequestQueue
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.maximumSize
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.nextRequestID
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.requestedTimeToleranceAfter
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.requestedTimeToleranceBefore
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.requests
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.requestsQueue
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.videoComposition
_OBJC_IVAR_$_AVAssetImageGeneratorInternal.weakReference
_OBJC_IVAR_$_AVAssetInternal.anchorChapterType
_OBJC_IVAR_$_AVAssetInternal.availableChapterLocales
_OBJC_IVAR_$_AVAssetInternal.chapterGroupInfo
_OBJC_IVAR_$_AVAssetInternal.loadChapterInfoOnce
_OBJC_IVAR_$_AVAssetInternal.weakReference
_OBJC_IVAR_$_AVAssetMakeReadyForInspectionLoader._assetInspector
_OBJC_IVAR_$_AVAssetMediaSelectionGroup._asset
_OBJC_IVAR_$_AVAssetMediaSelectionGroup._defaultOption
_OBJC_IVAR_$_AVAssetMediaSelectionGroup._dictionary
_OBJC_IVAR_$_AVAssetMediaSelectionGroup._isStreamingGroup
_OBJC_IVAR_$_AVAssetMediaSelectionGroup._options
_OBJC_IVAR_$_AVAssetProxyInternal.loader
_OBJC_IVAR_$_AVAssetProxyInternal.makeTracksArrayOnce
_OBJC_IVAR_$_AVAssetProxyInternal.tracks
_OBJC_IVAR_$_AVAssetReaderAudioMixOutputInternal.audioMix
_OBJC_IVAR_$_AVAssetReaderAudioMixOutputInternal.audioOutputSettings
_OBJC_IVAR_$_AVAssetReaderAudioMixOutputInternal.audioTapProcessorsForTracks
_OBJC_IVAR_$_AVAssetReaderAudioMixOutputInternal.audioTimePitchAlgorithm
_OBJC_IVAR_$_AVAssetReaderAudioMixOutputInternal.audioTimePitchAlgorithmsForTracks
_OBJC_IVAR_$_AVAssetReaderAudioMixOutputInternal.audioTracks
_OBJC_IVAR_$_AVAssetReaderAudioMixOutputInternal.audioVolumeCurvesForTracks
_OBJC_IVAR_$_AVAssetReaderInternal.KVOProxy
_OBJC_IVAR_$_AVAssetReaderInternal.asset
_OBJC_IVAR_$_AVAssetReaderInternal.error
_OBJC_IVAR_$_AVAssetReaderInternal.figAssetReader
_OBJC_IVAR_$_AVAssetReaderInternal.outputs
_OBJC_IVAR_$_AVAssetReaderInternal.status
_OBJC_IVAR_$_AVAssetReaderInternal.statusReadWriteQueue
_OBJC_IVAR_$_AVAssetReaderInternal.timeRange
_OBJC_IVAR_$_AVAssetReaderInternal.weakReference
_OBJC_IVAR_$_AVAssetReaderOutputInternal.alwaysCopiesSampleData
_OBJC_IVAR_$_AVAssetReaderOutputInternal.currentConfigurationIsFinal
_OBJC_IVAR_$_AVAssetReaderOutputInternal.currentTimeRanges
_OBJC_IVAR_$_AVAssetReaderOutputInternal.extractionCompleteForCurrentConfiguration
_OBJC_IVAR_$_AVAssetReaderOutputInternal.extractionID
_OBJC_IVAR_$_AVAssetReaderOutputInternal.figAssetReader
_OBJC_IVAR_$_AVAssetReaderOutputInternal.finished
_OBJC_IVAR_$_AVAssetReaderOutputInternal.sampleBufferAvailabilityCondition
_OBJC_IVAR_$_AVAssetReaderOutputInternal.supportsRandomAccess
_OBJC_IVAR_$_AVAssetReaderOutputInternal.weakReference
_OBJC_IVAR_$_AVAssetReaderOutputInternal.weakReferenceToAssetReader
_OBJC_IVAR_$_AVAssetReaderOutputMetadataAdaptorInternal.trackOutput
_OBJC_IVAR_$_AVAssetReaderSampleReferenceOutputInternal.track
_OBJC_IVAR_$_AVAssetReaderTrackOutputInternal.appliesPreferredTrackTransform
_OBJC_IVAR_$_AVAssetReaderTrackOutputInternal.audioTimePitchAlgorithm
_OBJC_IVAR_$_AVAssetReaderTrackOutputInternal.isAttachedToMetadataAdaptor
_OBJC_IVAR_$_AVAssetReaderTrackOutputInternal.outputSettings
_OBJC_IVAR_$_AVAssetReaderTrackOutputInternal.track
_OBJC_IVAR_$_AVAssetReaderVideoCompositionOutputInternal.customVideoCompositorSession
_OBJC_IVAR_$_AVAssetReaderVideoCompositionOutputInternal.figVideoCompositor
_OBJC_IVAR_$_AVAssetReaderVideoCompositionOutputInternal.videoComposition
_OBJC_IVAR_$_AVAssetReaderVideoCompositionOutputInternal.videoOutputSettings
_OBJC_IVAR_$_AVAssetReaderVideoCompositionOutputInternal.videoTracks
_OBJC_IVAR_$_AVAssetResourceLoaderInternal.contentInformationCache
_OBJC_IVAR_$_AVAssetResourceLoaderInternal.contentInformationCachingQueue
_OBJC_IVAR_$_AVAssetResourceLoaderInternal.delegateQueue
_OBJC_IVAR_$_AVAssetResourceLoaderInternal.loadingCancelled
_OBJC_IVAR_$_AVAssetResourceLoaderInternal.pendingRequests
_OBJC_IVAR_$_AVAssetResourceLoaderInternal.stateQueue
_OBJC_IVAR_$_AVAssetResourceLoaderInternal.weakReference
_OBJC_IVAR_$_AVAssetResourceLoaderInternal.weakReferenceToAsset
_OBJC_IVAR_$_AVAssetResourceLoaderInternal.weakReferenceToDelegate
_OBJC_IVAR_$_AVAssetResourceLoadingContentInformationRequestInternal.byteRangeAccessSupported
_OBJC_IVAR_$_AVAssetResourceLoadingContentInformationRequestInternal.contentLength
_OBJC_IVAR_$_AVAssetResourceLoadingContentInformationRequestInternal.contentType
_OBJC_IVAR_$_AVAssetResourceLoadingContentInformationRequestInternal.diskCachingPermitted
_OBJC_IVAR_$_AVAssetResourceLoadingContentInformationRequestInternal.renewalDate
_OBJC_IVAR_$_AVAssetResourceLoadingDataRequestInternal.canSupplyIncrementalDataImmediately
_OBJC_IVAR_$_AVAssetResourceLoadingDataRequestInternal.currentOffset
_OBJC_IVAR_$_AVAssetResourceLoadingDataRequestInternal.dataResponseQueue
_OBJC_IVAR_$_AVAssetResourceLoadingDataRequestInternal.requestedLength
_OBJC_IVAR_$_AVAssetResourceLoadingDataRequestInternal.requestedOffset
_OBJC_IVAR_$_AVAssetResourceLoadingDataRequestInternal.weakReferenceToLoadingRequest
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.URLRequest
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.cachedContentInformation
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.cachedData
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.cancelled
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.contentInformationRequest
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.dataCachingQueue
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.dataRequest
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.figImageGenerator
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.figPlaybackItem
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.finished
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.redirect
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.requestDictionary
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.response
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.sentContentInfo
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.streamingKeyRequestCompletionHandler
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.weakReference
_OBJC_IVAR_$_AVAssetResourceLoadingRequestInternal.weakReferenceToResourceLoader
_OBJC_IVAR_$_AVAssetSynchronousInspectorLoader._assetInspector
_OBJC_IVAR_$_AVAssetTrackGroupInternal.assetComparisonToken
_OBJC_IVAR_$_AVAssetTrackGroupInternal.trackIDs
_OBJC_IVAR_$_AVAssetTrackInternal.assetWeakReference
_OBJC_IVAR_$_AVAssetTrackInternal.trackInspector
_OBJC_IVAR_$_AVAssetWriterInputGroupInternal.defaultInput
_OBJC_IVAR_$_AVAssetWriterInputGroupInternal.inputs
_OBJC_IVAR_$_AVAssetWriterInputInternal.appendFailureReadWriteQueue
_OBJC_IVAR_$_AVAssetWriterInputInternal.attachedToMetadataAdaptor
_OBJC_IVAR_$_AVAssetWriterInputInternal.attachedToPixelBufferAdaptor
_OBJC_IVAR_$_AVAssetWriterInputInternal.helper
_OBJC_IVAR_$_AVAssetWriterInputInternal.helperQueue
_OBJC_IVAR_$_AVAssetWriterInputInternal.numberOfAppendFailures
_OBJC_IVAR_$_AVAssetWriterInputInternal.passDescriptionResponder
_OBJC_IVAR_$_AVAssetWriterInputInternal.weakReference
_OBJC_IVAR_$_AVAssetWriterInputInternal.weakReferenceToAssetWriter
_OBJC_IVAR_$_AVAssetWriterInputMetadataAdaptor._internal
_OBJC_IVAR_$_AVAssetWriterInputMetadataAdaptorInternal.input
_OBJC_IVAR_$_AVAssetWriterInputPassDescriptionInternal.timeRanges
_OBJC_IVAR_$_AVAssetWriterInputPixelBufferAdaptorInternal.input
_OBJC_IVAR_$_AVAssetWriterInternal.helper
_OBJC_IVAR_$_AVAssetWriterInternal.helperReadWriteQueue
_OBJC_IVAR_$_AVAssetWriterInternal.weakReference
_OBJC_IVAR_$_AVAsynchronousVideoCompositionRequestInternal._compositionFrame
_OBJC_IVAR_$_AVAsynchronousVideoCompositionRequestInternal._compositionTime
_OBJC_IVAR_$_AVAsynchronousVideoCompositionRequestInternal._instruction
_OBJC_IVAR_$_AVAsynchronousVideoCompositionRequestInternal._isFinished
_OBJC_IVAR_$_AVAsynchronousVideoCompositionRequestInternal._renderContext
_OBJC_IVAR_$_AVAsynchronousVideoCompositionRequestInternal._session
_OBJC_IVAR_$_AVAsynchronousVideoCompositionRequestInternal._sourceTrackIDsInClientOrder
_OBJC_IVAR_$_AVAsynchronousVideoCompositionRequestInternal._sourcesByTrackID
_OBJC_IVAR_$_AVAudioMixInputParametersInternal.audioTimePitchAlgorithm
_OBJC_IVAR_$_AVAudioMixInputParametersInternal.scheduledAudioParameters
_OBJC_IVAR_$_AVAudioMixInputParametersInternal.tap
_OBJC_IVAR_$_AVAudioMixInputParametersInternal.trackID
_OBJC_IVAR_$_AVAudioMixInternal.inputParameters
_OBJC_IVAR_$_AVCaptureAudioChannelInternal.connection
_OBJC_IVAR_$_AVCaptureAudioChannelInternal.enabled
_OBJC_IVAR_$_AVCaptureAudioChannelInternal.volume
_OBJC_IVAR_$_AVCaptureAudioDataOutputCallbackData._bufferQueue
_OBJC_IVAR_$_AVCaptureAudioDataOutputCallbackData._connection
_OBJC_IVAR_$_AVCaptureAudioDataOutputCallbackData._output
_OBJC_IVAR_$_AVCaptureAudioDataOutputInternal.audioConverterUnits
_OBJC_IVAR_$_AVCaptureAudioDataOutputInternal.audioSettings
_OBJC_IVAR_$_AVCaptureAudioDataOutputInternal.audioToProcsUnits
_OBJC_IVAR_$_AVCaptureAudioDataOutputInternal.callbackData
_OBJC_IVAR_$_AVCaptureAudioDataOutputInternal.clientQueue
_OBJC_IVAR_$_AVCaptureAudioDataOutputInternal.delegate
_OBJC_IVAR_$_AVCaptureAudioDataOutputInternal.mixerUnits
_OBJC_IVAR_$_AVCaptureAudioDataOutputInternal.splitterUnits
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.activeConnectionCount
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.activeConnections
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.compressorUnits
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.connectionsLock
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.fileControlCallbackRanSinceLastCheck
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.fileControlCallbackTimedOut
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.fileControlCallbackTimeoutLock
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.fileControlCallbackTimeoutTimer
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.fileType
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.fileUTI
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.fileWriterOutputUnit
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.metadata
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.metadataLock
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.mixerUnits
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.noDataConnections
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.operationDescriptorQueue
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.operationDescriptorQueueLock
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.outputFileURL
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.recordingPaused
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.recordingStateLock
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.runningRecordingOperationDescriptor
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.runningRecordingOperationDescriptorLock
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.sizeWritten
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.splitterUnits
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.statsLock
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.stopError
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.stopErrorLock
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.syncTime
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.syncTimeConnection
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.syncTimeLock
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.timeWritten
_OBJC_IVAR_$_AVCaptureAudioFileOutputInternal.wasForcedToPause
_OBJC_IVAR_$_AVCaptureAudioPreviewOutputInternal.audioPreviewOutputUnits
_OBJC_IVAR_$_AVCaptureAudioPreviewOutputInternal.audioPreviewSynchronizerUnits
_OBJC_IVAR_$_AVCaptureAudioPreviewOutputInternal.outputDeviceUniqueID
_OBJC_IVAR_$_AVCaptureAudioPreviewOutputInternal.splitterUnits
_OBJC_IVAR_$_AVCaptureAudioPreviewOutputInternal.volume
_OBJC_IVAR_$_AVCaptureAudioSettings._avAudioOutputSettings
_OBJC_IVAR_$_AVCaptureConnectionInternal._clientSequenceID
_OBJC_IVAR_$_AVCaptureConnectionInternal._clientSequenceIDCF
_OBJC_IVAR_$_AVCaptureConnectionInternal._mostRecentlySeenClientSequenceID
_OBJC_IVAR_$_AVCaptureConnectionInternal.active
_OBJC_IVAR_$_AVCaptureConnectionInternal.audioChannelAvgLevels
_OBJC_IVAR_$_AVCaptureConnectionInternal.audioChannelPeakLevels
_OBJC_IVAR_$_AVCaptureConnectionInternal.audioChannels
_OBJC_IVAR_$_AVCaptureConnectionInternal.automaticallyAdjustsVideoMirroring
_OBJC_IVAR_$_AVCaptureConnectionInternal.element
_OBJC_IVAR_$_AVCaptureConnectionInternal.enabled
_OBJC_IVAR_$_AVCaptureConnectionInternal.enabledAudioChannels
_OBJC_IVAR_$_AVCaptureConnectionInternal.extendedNodeInfo
_OBJC_IVAR_$_AVCaptureConnectionInternal.graph
_OBJC_IVAR_$_AVCaptureConnectionInternal.inputPorts
_OBJC_IVAR_$_AVCaptureConnectionInternal.lastGetAudioAvgLevelsTime
_OBJC_IVAR_$_AVCaptureConnectionInternal.lastGetAudioPeakLevelsTime
_OBJC_IVAR_$_AVCaptureConnectionInternal.maxVideoScaleAndCropFactor
_OBJC_IVAR_$_AVCaptureConnectionInternal.node
_OBJC_IVAR_$_AVCaptureConnectionInternal.outputWeakReference
_OBJC_IVAR_$_AVCaptureConnectionInternal.scope
_OBJC_IVAR_$_AVCaptureConnectionInternal.videoFieldMode
_OBJC_IVAR_$_AVCaptureConnectionInternal.videoMaxFrameDuration
_OBJC_IVAR_$_AVCaptureConnectionInternal.videoMinFrameDuration
_OBJC_IVAR_$_AVCaptureConnectionInternal.videoMirrored
_OBJC_IVAR_$_AVCaptureConnectionInternal.videoOrientation
_OBJC_IVAR_$_AVCaptureConnectionInternal.videoPreviewLayerWeakReference
_OBJC_IVAR_$_AVCaptureConnectionInternal.videoScaleAndCropFactor
_OBJC_IVAR_$_AVCaptureConnectionInternal.writerElement
_OBJC_IVAR_$_AVCaptureDALDevice._activeFormat
_OBJC_IVAR_$_AVCaptureDALDevice._activeInputSource
_OBJC_IVAR_$_AVCaptureDALDevice._activeMaxFrameDuration
_OBJC_IVAR_$_AVCaptureDALDevice._activeMinFrameDuration
_OBJC_IVAR_$_AVCaptureDALDevice._adjustingExposure
_OBJC_IVAR_$_AVCaptureDALDevice._adjustingFocus
_OBJC_IVAR_$_AVCaptureDALDevice._adjustingWhiteBalance
_OBJC_IVAR_$_AVCaptureDALDevice._automaticallyAdjustsFeatureControls
_OBJC_IVAR_$_AVCaptureDALDevice._connectionID
_OBJC_IVAR_$_AVCaptureDALDevice._deviceClock
_OBJC_IVAR_$_AVCaptureDALDevice._exposureMode
_OBJC_IVAR_$_AVCaptureDALDevice._exposurePointOfInterest
_OBJC_IVAR_$_AVCaptureDALDevice._flags
_OBJC_IVAR_$_AVCaptureDALDevice._focusMode
_OBJC_IVAR_$_AVCaptureDALDevice._focusPointOfInterest
_OBJC_IVAR_$_AVCaptureDALDevice._formats
_OBJC_IVAR_$_AVCaptureDALDevice._inputSources
_OBJC_IVAR_$_AVCaptureDALDevice._localizedName
_OBJC_IVAR_$_AVCaptureDALDevice._manufacturer
_OBJC_IVAR_$_AVCaptureDALDevice._modelID
_OBJC_IVAR_$_AVCaptureDALDevice._propertiesLock
_OBJC_IVAR_$_AVCaptureDALDevice._suspended
_OBJC_IVAR_$_AVCaptureDALDevice._transportControlsPlaybackMode
_OBJC_IVAR_$_AVCaptureDALDevice._transportControlsSpeed
_OBJC_IVAR_$_AVCaptureDALDevice._transportControlsSupported
_OBJC_IVAR_$_AVCaptureDALDevice._transportPropertyObserverCount
_OBJC_IVAR_$_AVCaptureDALDevice._transportPropertyObserverQueue
_OBJC_IVAR_$_AVCaptureDALDevice._transportPropertyObserverTimer
_OBJC_IVAR_$_AVCaptureDALDevice._transportTimerQueue
_OBJC_IVAR_$_AVCaptureDALDevice._transportType
_OBJC_IVAR_$_AVCaptureDALDevice._uniqueID
_OBJC_IVAR_$_AVCaptureDALDevice._whiteBalanceMode
_OBJC_IVAR_$_AVCaptureDeviceFormatInternal.formatDescription
_OBJC_IVAR_$_AVCaptureDeviceFormatInternal.videoSupportedFrameRateRanges
_OBJC_IVAR_$_AVCaptureDeviceInputInternal.automaticallyConfiguresDevice
_OBJC_IVAR_$_AVCaptureDeviceInputInternal.demuxUnitDescription
_OBJC_IVAR_$_AVCaptureDeviceInputInternal.device
_OBJC_IVAR_$_AVCaptureDeviceInputInternal.deviceInputUnitDescription
_OBJC_IVAR_$_AVCaptureDeviceInputInternal.ports
_OBJC_IVAR_$_AVCaptureDeviceInputInternal.ready
_OBJC_IVAR_$_AVCaptureDeviceInputSourceInternal.localizedName
_OBJC_IVAR_$_AVCaptureDeviceInputSourceInternal.sourceID
_OBJC_IVAR_$_AVCaptureDeviceInternal.linkedDevices
_OBJC_IVAR_$_AVCaptureDeviceInternal.lockedForConfigurationRefCount
_OBJC_IVAR_$_AVCaptureDeviceInternal.openRefCount
_OBJC_IVAR_$_AVCaptureDeviceInternal.usingDevice
_OBJC_IVAR_$_AVCaptureFileOutputInternal.compressorNodesMode
_OBJC_IVAR_$_AVCaptureFileOutputInternal.delegate
_OBJC_IVAR_$_AVCaptureFileOutputInternal.delegateRequiresFrameAccurateStart
_OBJC_IVAR_$_AVCaptureFileOutputInternal.maxRecordedDuration
_OBJC_IVAR_$_AVCaptureFileOutputInternal.maxRecordedDurationLock
_OBJC_IVAR_$_AVCaptureFileOutputInternal.maxRecordedFileSize
_OBJC_IVAR_$_AVCaptureFileOutputInternal.maxRecordedFileSizeLock
_OBJC_IVAR_$_AVCaptureFileOutputInternal.minFreeDiskSpaceLimit
_OBJC_IVAR_$_AVCaptureFileOutputInternal.minFreeDiskSpaceLimitLock
_OBJC_IVAR_$_AVCaptureFileOutputInternal.outputSettings
_OBJC_IVAR_$_AVCaptureHALDevice._activeFormat
_OBJC_IVAR_$_AVCaptureHALDevice._activeInputSource
_OBJC_IVAR_$_AVCaptureHALDevice._connectionID
_OBJC_IVAR_$_AVCaptureHALDevice._deviceClock
_OBJC_IVAR_$_AVCaptureHALDevice._formats
_OBJC_IVAR_$_AVCaptureHALDevice._inputSources
_OBJC_IVAR_$_AVCaptureHALDevice._localizedName
_OBJC_IVAR_$_AVCaptureHALDevice._manufacturer
_OBJC_IVAR_$_AVCaptureHALDevice._modelID
_OBJC_IVAR_$_AVCaptureHALDevice._physicalASBDs
_OBJC_IVAR_$_AVCaptureHALDevice._propertiesLock
_OBJC_IVAR_$_AVCaptureHALDevice._uniqueID
_OBJC_IVAR_$_AVCaptureInputInternal._session
_OBJC_IVAR_$_AVCaptureInputPortInternal.clock
_OBJC_IVAR_$_AVCaptureInputPortInternal.element
_OBJC_IVAR_$_AVCaptureInputPortInternal.enabled
_OBJC_IVAR_$_AVCaptureInputPortInternal.formatDescription
_OBJC_IVAR_$_AVCaptureInputPortInternal.graph
_OBJC_IVAR_$_AVCaptureInputPortInternal.input
_OBJC_IVAR_$_AVCaptureInputPortInternal.mediaType
_OBJC_IVAR_$_AVCaptureInputPortInternal.mixerElement
_OBJC_IVAR_$_AVCaptureInputPortInternal.mixerIsReadOnly
_OBJC_IVAR_$_AVCaptureInputPortInternal.mixerNode
_OBJC_IVAR_$_AVCaptureInputPortInternal.mixerScope
_OBJC_IVAR_$_AVCaptureInputPortInternal.node
_OBJC_IVAR_$_AVCaptureInputPortInternal.scope
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.activeConnectionCount
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.activeConnections
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.compressorUnits
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.connectionsLock
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.decompressorUnits
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.fileControlCallbackRanSinceLastCheck
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.fileControlCallbackTimedOut
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.fileControlCallbackTimeoutLock
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.fileControlCallbackTimeoutTimer
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.fileWriterOutputUnit
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.metadata
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.metadataLock
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.mixerUnits
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.movieFragmentInterval
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.movieFragmentIntervalLock
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.noDataConnections
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.operationDescriptorQueue
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.operationDescriptorQueueLock
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.outputFileURL
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.recordingPaused
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.recordingStateLock
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.runningRecordingOperationDescriptor
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.runningRecordingOperationDescriptorLock
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.sizeWritten
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.splitterUnits
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.statsLock
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.stopError
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.stopErrorLock
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.syncTime
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.syncTimeConnection
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.syncTimeLock
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.timeWritten
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.videoFrameRateGovernorUnits
_OBJC_IVAR_$_AVCaptureMovieFileOutputInternal.wasForcedToPause
_OBJC_IVAR_$_AVCaptureOutputInternal.connections
_OBJC_IVAR_$_AVCaptureOutputInternal.session
_OBJC_IVAR_$_AVCaptureOutputSettings._settingsArePassthru
_OBJC_IVAR_$_AVCaptureScreenInputInternal.captureTimeScale
_OBJC_IVAR_$_AVCaptureScreenInputInternal.capturesCursor
_OBJC_IVAR_$_AVCaptureScreenInputInternal.capturesMouseClicks
_OBJC_IVAR_$_AVCaptureScreenInputInternal.clock
_OBJC_IVAR_$_AVCaptureScreenInputInternal.cropRect
_OBJC_IVAR_$_AVCaptureScreenInputInternal.displayID
_OBJC_IVAR_$_AVCaptureScreenInputInternal.graphicsSubsystemErrorStatus
_OBJC_IVAR_$_AVCaptureScreenInputInternal.inputUnitNodeDescription
_OBJC_IVAR_$_AVCaptureScreenInputInternal.minFrameDuration
_OBJC_IVAR_$_AVCaptureScreenInputInternal.minFrameDurationFromSession
_OBJC_IVAR_$_AVCaptureScreenInputInternal.outputCodecTypesFromSession
_OBJC_IVAR_$_AVCaptureScreenInputInternal.pixelBufferAttributesFromSession
_OBJC_IVAR_$_AVCaptureScreenInputInternal.removesDuplicateFrames
_OBJC_IVAR_$_AVCaptureScreenInputInternal.scaleFactor
_OBJC_IVAR_$_AVCaptureScreenInputInternal.scaleFactorIsSetByClient
_OBJC_IVAR_$_AVCaptureScreenInputInternal.videoPort
_OBJC_IVAR_$_AVCaptureSessionInternal.activeConnections
_OBJC_IVAR_$_AVCaptureSessionInternal.activeInputs
_OBJC_IVAR_$_AVCaptureSessionInternal.activeOutputs
_OBJC_IVAR_$_AVCaptureSessionInternal.beginConfigRefCount
_OBJC_IVAR_$_AVCaptureSessionInternal.buildAndRunGraphQueue
_OBJC_IVAR_$_AVCaptureSessionInternal.connections
_OBJC_IVAR_$_AVCaptureSessionInternal.inputs
_OBJC_IVAR_$_AVCaptureSessionInternal.masterClock
_OBJC_IVAR_$_AVCaptureSessionInternal.outputs
_OBJC_IVAR_$_AVCaptureSessionInternal.running
_OBJC_IVAR_$_AVCaptureSessionInternal.sessionPreset
_OBJC_IVAR_$_AVCaptureSessionInternal.state
_OBJC_IVAR_$_AVCaptureSessionInternal.stopError
_OBJC_IVAR_$_AVCaptureSessionInternal.videoPreviewLayers
_OBJC_IVAR_$_AVCaptureSessionInternalState._audioMixerFanOutNode
_OBJC_IVAR_$_AVCaptureSessionInternalState._audioMixerNode
_OBJC_IVAR_$_AVCaptureSessionInternalState._candidateMasterSynchronizerNode
_OBJC_IVAR_$_AVCaptureSessionInternalState._hasAudioMixerFanOutNode
_OBJC_IVAR_$_AVCaptureSessionInternalState._hasAudioMixerNode
_OBJC_IVAR_$_AVCaptureSessionInternalState._masterSynchronizerSet
_OBJC_IVAR_$_AVCaptureStillImageOutputInternal.highResModeFormat
_OBJC_IVAR_$_AVCaptureStillImageOutputInternal.imageDataFormatType
_OBJC_IVAR_$_AVCaptureStillImageOutputInternal.isCapturing
_OBJC_IVAR_$_AVCaptureStillImageOutputInternal.isEnableHighResMode
_OBJC_IVAR_$_AVCaptureStillImageOutputInternal.isHighResMode
_OBJC_IVAR_$_AVCaptureStillImageOutputInternal.outputSettings
_OBJC_IVAR_$_AVCaptureStillImageOutputInternal.stillImageRequests
_OBJC_IVAR_$_AVCaptureStillImageOutputInternal.tranformUtils
_OBJC_IVAR_$_AVCaptureStillImageOutputInternal.videoDecompressorUnits
_OBJC_IVAR_$_AVCaptureStillImageOutputInternal.videoToProcsUnits
_OBJC_IVAR_$_AVCaptureStillImageRequest._completionBlock
_OBJC_IVAR_$_AVCaptureStillImageRequest._imageMirrored
_OBJC_IVAR_$_AVCaptureStillImageRequest._imageOrientation
_OBJC_IVAR_$_AVCaptureStillImageRequest._outputSettings
_OBJC_IVAR_$_AVCaptureStillImageTransform._resultBuffer
_OBJC_IVAR_$_AVCaptureStillImageTransform._sourceBuffer
_OBJC_IVAR_$_AVCaptureStillImageTransform._status
_OBJC_IVAR_$_AVCaptureVideoDataOutputCallbackData._bufferQueue
_OBJC_IVAR_$_AVCaptureVideoDataOutputCallbackData._connection
_OBJC_IVAR_$_AVCaptureVideoDataOutputCallbackData._output
_OBJC_IVAR_$_AVCaptureVideoDataOutputInternal.alwaysDiscardsLateVideoFrames
_OBJC_IVAR_$_AVCaptureVideoDataOutputInternal.callbackData
_OBJC_IVAR_$_AVCaptureVideoDataOutputInternal.clientQueue
_OBJC_IVAR_$_AVCaptureVideoDataOutputInternal.delegate
_OBJC_IVAR_$_AVCaptureVideoDataOutputInternal.videoCompressorUnits
_OBJC_IVAR_$_AVCaptureVideoDataOutputInternal.videoDecompressorUnits
_OBJC_IVAR_$_AVCaptureVideoDataOutputInternal.videoFrameRateGovernorUnits
_OBJC_IVAR_$_AVCaptureVideoDataOutputInternal.videoSettings
_OBJC_IVAR_$_AVCaptureVideoDataOutputInternal.videoToProcsUnits
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.connection
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.disableActions
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.gravity
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.isPresentationLayer
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.pixelBufferAttributes
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.session
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.sourceSize
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.sublayer
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.videoPreviewOutputUnits
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.videoPreviewSynchronizerUnits
_OBJC_IVAR_$_AVCaptureVideoPreviewLayerInternal.visible
_OBJC_IVAR_$_AVCaptureVideoSettings._avVideoOutputSettings
_OBJC_IVAR_$_AVChapterMetadataItem._privChapter
_OBJC_IVAR_$_AVChapterMetadataItemInternal.chapterDataType
_OBJC_IVAR_$_AVChapterMetadataItemInternal.chapterGroupIndex
_OBJC_IVAR_$_AVChapterMetadataItemInternal.chapterIndex
_OBJC_IVAR_$_AVChapterMetadataItemInternal.chapterType
_OBJC_IVAR_$_AVChapterMetadataItemInternal.completions
_OBJC_IVAR_$_AVChapterMetadataItemInternal.duration
_OBJC_IVAR_$_AVChapterMetadataItemInternal.figAsset
_OBJC_IVAR_$_AVChapterMetadataItemInternal.locale
_OBJC_IVAR_$_AVChapterMetadataItemInternal.readWriteQueue
_OBJC_IVAR_$_AVChapterMetadataItemInternal.time
_OBJC_IVAR_$_AVChapterMetadataItemInternal.value
_OBJC_IVAR_$_AVChapterMetadataItemInternal.valueErrorCode
_OBJC_IVAR_$_AVChapterMetadataItemInternal.valueStatus
_OBJC_IVAR_$_AVChapterMetadataItemInternal.weakReference
_OBJC_IVAR_$_AVCompositionInternal.assetInspector
_OBJC_IVAR_$_AVCompositionInternal.assetInspectorInitializationOnce
_OBJC_IVAR_$_AVCompositionInternal.assetInspectorLoader
_OBJC_IVAR_$_AVCompositionInternal.formatReader
_OBJC_IVAR_$_AVCompositionInternal.formatReaderInitializationOnce
_OBJC_IVAR_$_AVCompositionInternal.mutableComposition
_OBJC_IVAR_$_AVCompositionInternal.naturalSize
_OBJC_IVAR_$_AVCompositionInternal.tracks
_OBJC_IVAR_$_AVCompositionInternal.tracksInitializationOnce
_OBJC_IVAR_$_AVCompositionTrackInternal.mutableComposition
_OBJC_IVAR_$_AVCompositionTrackSegmentInternal.editAssetTrackID
_OBJC_IVAR_$_AVCompositionTrackSegmentInternal.editAssetURL
_OBJC_IVAR_$_AVCustomVideoCompositorSession._clientCustomCompositor
_OBJC_IVAR_$_AVCustomVideoCompositorSession._clientCustomCompositorQ
_OBJC_IVAR_$_AVCustomVideoCompositorSession._clientError
_OBJC_IVAR_$_AVCustomVideoCompositorSession._clientErrorQ
_OBJC_IVAR_$_AVCustomVideoCompositorSession._clientRequiredPixelBufferAttributes
_OBJC_IVAR_$_AVCustomVideoCompositorSession._figCustomCompositor
_OBJC_IVAR_$_AVCustomVideoCompositorSession._finishedRequestQ
_OBJC_IVAR_$_AVCustomVideoCompositorSession._hasRegisteredFigCustomCompositorCallbacks
_OBJC_IVAR_$_AVCustomVideoCompositorSession._renderContext
_OBJC_IVAR_$_AVCustomVideoCompositorSession._renderContextQ
_OBJC_IVAR_$_AVCustomVideoCompositorSession._videoComposition
_OBJC_IVAR_$_AVCustomVideoCompositorSession._videoCompositionDidChange
_OBJC_IVAR_$_AVCustomVideoCompositorSession._videoCompositionQ
_OBJC_IVAR_$_AVCustomVideoCompositorSession._weakSelf
_OBJC_IVAR_$_AVFigAssetInspector._figAsset
_OBJC_IVAR_$_AVFigAssetInspector._formatReader
_OBJC_IVAR_$_AVFigAssetInspector._formatReaderOnce
_OBJC_IVAR_$_AVFigAssetInspector.didCheckForSaveRestriction
_OBJC_IVAR_$_AVFigAssetInspector.hasSaveRestriction
_OBJC_IVAR_$_AVFormatReaderInspector._formatReader
_OBJC_IVAR_$_AVFormatReaderInspector.didCheckForSaveRestriction
_OBJC_IVAR_$_AVFormatReaderInspector.hasSaveRestriction
_OBJC_IVAR_$_AVFragmentedMovie._fragmentedMovie
_OBJC_IVAR_$_AVFragmentedMovieInternal.mindingInterval
_OBJC_IVAR_$_AVFragmentedMovieMinderInternal.accessSerializer
_OBJC_IVAR_$_AVFragmentedMovieMinderInternal.mindingInterval
_OBJC_IVAR_$_AVFragmentedMovieMinderInternal.movies
_OBJC_IVAR_$_AVFragmentedMovieTrack._fragmentedMovieTrack
_OBJC_IVAR_$_AVFragmentedMovieTrackInternal.weakReferenceToSelf
_OBJC_IVAR_$_AVFrameRateRangeInternal.maxFrameDuration
_OBJC_IVAR_$_AVFrameRateRangeInternal.maxFrameRate
_OBJC_IVAR_$_AVFrameRateRangeInternal.minFrameDuration
_OBJC_IVAR_$_AVFrameRateRangeInternal.minFrameRate
_OBJC_IVAR_$_AVMediaDataStorage._mediaDataStorageInternal
_OBJC_IVAR_$_AVMediaDataStorageInternal.URL
_OBJC_IVAR_$_AVMediaSelectionGroupInternal.weakReference
_OBJC_IVAR_$_AVMediaSelectionKeyValueOption._dictionary
_OBJC_IVAR_$_AVMediaSelectionKeyValueOption._displaysNonForcedSubtitles
_OBJC_IVAR_$_AVMediaSelectionKeyValueOption._groupID
_OBJC_IVAR_$_AVMediaSelectionKeyValueOption._groupMediaType
_OBJC_IVAR_$_AVMediaSelectionKeyValueOption._optionMediaType
_OBJC_IVAR_$_AVMediaSelectionKeyValueOption._weakReferenceToGroup
_OBJC_IVAR_$_AVMediaSelectionOptionInternal._displayName
_OBJC_IVAR_$_AVMediaSelectionOptionInternal._displayNameLocaleIdentifier
_OBJC_IVAR_$_AVMediaSelectionTrackOption._dictionary
_OBJC_IVAR_$_AVMediaSelectionTrackOption._displaysNonForcedSubtitles
_OBJC_IVAR_$_AVMediaSelectionTrackOption._groupID
_OBJC_IVAR_$_AVMediaSelectionTrackOption._track
_OBJC_IVAR_$_AVMediaSelectionTrackOption._weakReferenceToGroup
_OBJC_IVAR_$_AVMetadataItem._priv
_OBJC_IVAR_$_AVMetadataItemInternal.commonKey
_OBJC_IVAR_$_AVMetadataItemInternal.dataType
_OBJC_IVAR_$_AVMetadataItemInternal.duration
_OBJC_IVAR_$_AVMetadataItemInternal.extendedLanguageTag
_OBJC_IVAR_$_AVMetadataItemInternal.extras
_OBJC_IVAR_$_AVMetadataItemInternal.identifier
_OBJC_IVAR_$_AVMetadataItemInternal.itemIndex
_OBJC_IVAR_$_AVMetadataItemInternal.key
_OBJC_IVAR_$_AVMetadataItemInternal.keySpace
_OBJC_IVAR_$_AVMetadataItemInternal.locale
_OBJC_IVAR_$_AVMetadataItemInternal.reader
_OBJC_IVAR_$_AVMetadataItemInternal.time
_OBJC_IVAR_$_AVMetadataItemInternal.value
_OBJC_IVAR_$_AVMovieInternal.URL
_OBJC_IVAR_$_AVMovieInternal.data
_OBJC_IVAR_$_AVMovieInternal.fileType
_OBJC_IVAR_$_AVMovieInternal.initializationOptions
_OBJC_IVAR_$_AVMovieInternal.loader
_OBJC_IVAR_$_AVMovieInternal.makeTracksArrayOnce
_OBJC_IVAR_$_AVMovieInternal.referenceRestrictions
_OBJC_IVAR_$_AVMovieInternal.shouldPrepareToOptimizeForExclusivePlayback
_OBJC_IVAR_$_AVMovieInternal.tracks
_OBJC_IVAR_$_AVMovieTrack._movieTrackInternal
_OBJC_IVAR_$_AVMutableMetadataItem._mutablePriv
_OBJC_IVAR_$_AVMutableMovieInternal.figAsset
_OBJC_IVAR_$_AVMutableMovieInternal.figMutableMovie
_OBJC_IVAR_$_AVMutableMovieInternal.formatReader
_OBJC_IVAR_$_AVMutableMovieInternal.tracksUpdated
_OBJC_IVAR_$_AVMutableMovieInternal.waitingSemaphore
_OBJC_IVAR_$_AVMutableMovieTrack._mutableMovieTrackInternal
_OBJC_IVAR_$_AVMutableMovieTrackInternal.figMutableMovie
_OBJC_IVAR_$_AVMutableMovieTrackInternal.trackID
_OBJC_IVAR_$_AVMutableTimedMetadataGroup._mutablePriv
_OBJC_IVAR_$_AVOccasionalTimebaseObserver._block
_OBJC_IVAR_$_AVOccasionalTimebaseObserver._times
_OBJC_IVAR_$_AVOnceTimebaseObserver._block
_OBJC_IVAR_$_AVOnceTimebaseObserver._didFire
_OBJC_IVAR_$_AVOnceTimebaseObserver._fireTime
_OBJC_IVAR_$_AVOutputSettingsAssistantInternal.baseSettingsProvider
_OBJC_IVAR_$_AVOutputSettingsAssistantInternal.sourceAudioFormat
_OBJC_IVAR_$_AVOutputSettingsAssistantInternal.sourceVideoAverageFrameDuration
_OBJC_IVAR_$_AVOutputSettingsAssistantInternal.sourceVideoFormat
_OBJC_IVAR_$_AVOutputSettingsAssistantInternal.sourceVideoMinFrameDuration
_OBJC_IVAR_$_AVOutputSettingsAssistantInternal.videoSettingsAdjuster
_OBJC_IVAR_$_AVPeriodicTimebaseObserver._block
_OBJC_IVAR_$_AVPeriodicTimebaseObserver._intervalRequested
_OBJC_IVAR_$_AVPeriodicTimebaseObserver._lastIntervalUsed
_OBJC_IVAR_$_AVPeriodicTimebaseObserver._lastNonperiodicFireTime
_OBJC_IVAR_$_AVPeriodicTimebaseObserver._lastPeriodicFireTime
_OBJC_IVAR_$_AVPeriodicTimebaseObserver._lastStopTime
_OBJC_IVAR_$_AVPeriodicTimebaseObserver._sequenceNum
_OBJC_IVAR_$_AVPlaybackItemInspector._playbackItem
_OBJC_IVAR_$_AVPlaybackItemInspector._trackIDs
_OBJC_IVAR_$_AVPlaybackItemInspectorLoader._cachedDuration
_OBJC_IVAR_$_AVPlaybackItemInspectorLoader._playbackItem
_OBJC_IVAR_$_AVPlaybackItemInspectorLoader._shouldCacheDuration
_OBJC_IVAR_$_AVPlaybackItemInspectorLoader._trackIDs
_OBJC_IVAR_$_AVPlayerInternal.KVOProxy
_OBJC_IVAR_$_AVPlayerInternal.allowsOutOfBandTextTrackRendering
_OBJC_IVAR_$_AVPlayerInternal.autoSwitchStreamVariants
_OBJC_IVAR_$_AVPlayerInternal.avPlayerLayers
_OBJC_IVAR_$_AVPlayerInternal.cachedDisplaySize
_OBJC_IVAR_$_AVPlayerInternal.cachedFigMediaSelectionCriteriaProperty
_OBJC_IVAR_$_AVPlayerInternal.closedCaptionLayers
_OBJC_IVAR_$_AVPlayerInternal.currentItem
_OBJC_IVAR_$_AVPlayerInternal.displaysUsedForPlayback
_OBJC_IVAR_$_AVPlayerInternal.error
_OBJC_IVAR_$_AVPlayerInternal.expectedAssetTypes
_OBJC_IVAR_$_AVPlayerInternal.externalPlaybackVideoGravity
_OBJC_IVAR_$_AVPlayerInternal.figConfigurationQueue
_OBJC_IVAR_$_AVPlayerInternal.figMasterClock
_OBJC_IVAR_$_AVPlayerInternal.figPlaybackItemToIdentifyNextCurrentItem
_OBJC_IVAR_$_AVPlayerInternal.figPlayer
_OBJC_IVAR_$_AVPlayerInternal.items
_OBJC_IVAR_$_AVPlayerInternal.ivarAccessQueue
_OBJC_IVAR_$_AVPlayerInternal.lastItem
_OBJC_IVAR_$_AVPlayerInternal.layersQ
_OBJC_IVAR_$_AVPlayerInternal.logPerformanceData
_OBJC_IVAR_$_AVPlayerInternal.needsToCreateFigPlayer
_OBJC_IVAR_$_AVPlayerInternal.nextPrerollIDToGenerate
_OBJC_IVAR_$_AVPlayerInternal.pendingFigPlayerProperties
_OBJC_IVAR_$_AVPlayerInternal.pendingPrerollID
_OBJC_IVAR_$_AVPlayerInternal.pixelBufferAttributeMediator
_OBJC_IVAR_$_AVPlayerInternal.preparesItemsForPlaybackAsynchronously
_OBJC_IVAR_$_AVPlayerInternal.prerollCompletionHandler
_OBJC_IVAR_$_AVPlayerInternal.prerollIDMutex
_OBJC_IVAR_$_AVPlayerInternal.propertyStorage
_OBJC_IVAR_$_AVPlayerInternal.proxyTimebase
_OBJC_IVAR_$_AVPlayerInternal.stateDispatchQueue
_OBJC_IVAR_$_AVPlayerInternal.status
_OBJC_IVAR_$_AVPlayerInternal.subtitleLayers
_OBJC_IVAR_$_AVPlayerInternal.videoLayers
_OBJC_IVAR_$_AVPlayerInternal.weakReference
_OBJC_IVAR_$_AVPlayerItemAccessLogEventInternal.dict
_OBJC_IVAR_$_AVPlayerItemAccessLogInternal.logArray
_OBJC_IVAR_$_AVPlayerItemErrorLogEventInternal.dict
_OBJC_IVAR_$_AVPlayerItemErrorLogInternal.logArray
_OBJC_IVAR_$_AVPlayerItemInternal.RTCReportingFlags
_OBJC_IVAR_$_AVPlayerItemInternal.URL
_OBJC_IVAR_$_AVPlayerItemInternal.allowProgressiveSwitchUp
_OBJC_IVAR_$_AVPlayerItemInternal.allowsExtendedReadAhead
_OBJC_IVAR_$_AVPlayerItemInternal.asset
_OBJC_IVAR_$_AVPlayerItemInternal.assetWithFigPlaybackItem
_OBJC_IVAR_$_AVPlayerItemInternal.audioMix
_OBJC_IVAR_$_AVPlayerItemInternal.automaticallyLoadedAssetKeys
_OBJC_IVAR_$_AVPlayerItemInternal.cachedTracks
_OBJC_IVAR_$_AVPlayerItemInternal.clientsOriginalVideoComposition
_OBJC_IVAR_$_AVPlayerItemInternal.customVideoCompositorSession
_OBJC_IVAR_$_AVPlayerItemInternal.dataYouTubeID
_OBJC_IVAR_$_AVPlayerItemInternal.delegate
_OBJC_IVAR_$_AVPlayerItemInternal.didBecomeReadyForBasicInspection
_OBJC_IVAR_$_AVPlayerItemInternal.didBecomeReadyForInspectionOfDuration
_OBJC_IVAR_$_AVPlayerItemInternal.didBecomeReadyForInspectionOfMediaSelectionOptions
_OBJC_IVAR_$_AVPlayerItemInternal.didBecomeReadyForInspectionOfPresentationSize
_OBJC_IVAR_$_AVPlayerItemInternal.didBecomeReadyForInspectionOfTracks
_OBJC_IVAR_$_AVPlayerItemInternal.didFireKVOForAssetForNonStreamingItem
_OBJC_IVAR_$_AVPlayerItemInternal.didInformObserversAboutAvailabilityOfTracks
_OBJC_IVAR_$_AVPlayerItemInternal.didSetAssetToAssetWithFigPlaybackItem
_OBJC_IVAR_$_AVPlayerItemInternal.error
_OBJC_IVAR_$_AVPlayerItemInternal.externalProtectionRequested
_OBJC_IVAR_$_AVPlayerItemInternal.externalSubtitlesEnabled
_OBJC_IVAR_$_AVPlayerItemInternal.figCPEProtector
_OBJC_IVAR_$_AVPlayerItemInternal.figConfigurationQueue
_OBJC_IVAR_$_AVPlayerItemInternal.figPlaybackItem
_OBJC_IVAR_$_AVPlayerItemInternal.figTimebase
_OBJC_IVAR_$_AVPlayerItemInternal.figVideoCompositor
_OBJC_IVAR_$_AVPlayerItemInternal.forwardPlaybackEndTime
_OBJC_IVAR_$_AVPlayerItemInternal.gaplessInfo
_OBJC_IVAR_$_AVPlayerItemInternal.handlersToCallWhenReadyForEnqueueing
_OBJC_IVAR_$_AVPlayerItemInternal.haveCPEProtector
_OBJC_IVAR_$_AVPlayerItemInternal.haveInitialSamples
_OBJC_IVAR_$_AVPlayerItemInternal.initialAlwaysMonitorsPlayability
_OBJC_IVAR_$_AVPlayerItemInternal.initialContinuesPlayingDuringPrerollForRateChange
_OBJC_IVAR_$_AVPlayerItemInternal.initialContinuesPlayingDuringPrerollForSeek
_OBJC_IVAR_$_AVPlayerItemInternal.initialDate
_OBJC_IVAR_$_AVPlayerItemInternal.initialEstimatedDate
_OBJC_IVAR_$_AVPlayerItemInternal.initialFigTimePitchAlgorithm
_OBJC_IVAR_$_AVPlayerItemInternal.initialPlaybackLikelyToKeepUpTrigger
_OBJC_IVAR_$_AVPlayerItemInternal.initialTime
_OBJC_IVAR_$_AVPlayerItemInternal.initialToleranceAfter
_OBJC_IVAR_$_AVPlayerItemInternal.initialToleranceBefore
_OBJC_IVAR_$_AVPlayerItemInternal.initialVariantIndex
_OBJC_IVAR_$_AVPlayerItemInternal.initialWillNeverSeekBackwardsHint
_OBJC_IVAR_$_AVPlayerItemInternal.isCurrentPlayerItem
_OBJC_IVAR_$_AVPlayerItemInternal.itemLegibleOutputsForKeys
_OBJC_IVAR_$_AVPlayerItemInternal.itemMetadataOutputsForKeys
_OBJC_IVAR_$_AVPlayerItemInternal.itemOutputs
_OBJC_IVAR_$_AVPlayerItemInternal.itemVideoOutputs
_OBJC_IVAR_$_AVPlayerItemInternal.ivarAccessQueue
_OBJC_IVAR_$_AVPlayerItemInternal.lastContentAuthorizationStatus
_OBJC_IVAR_$_AVPlayerItemInternal.maximumTrailingBufferDuration
_OBJC_IVAR_$_AVPlayerItemInternal.mediaOptionsSelectedByClient
_OBJC_IVAR_$_AVPlayerItemInternal.minimumIntervalForIFrameOnlyPlayback
_OBJC_IVAR_$_AVPlayerItemInternal.minimumIntervalForIFrameOnlyPlaybackWasSet
_OBJC_IVAR_$_AVPlayerItemInternal.needTimedMetadataNotification
_OBJC_IVAR_$_AVPlayerItemInternal.networkUsuallyExceedsMaxBitRate
_OBJC_IVAR_$_AVPlayerItemInternal.nextItem
_OBJC_IVAR_$_AVPlayerItemInternal.nextSeekIDToGenerate
_OBJC_IVAR_$_AVPlayerItemInternal.nonForcedSubtitlesEnabled
_OBJC_IVAR_$_AVPlayerItemInternal.pendingSeekID
_OBJC_IVAR_$_AVPlayerItemInternal.pixelBufferAttributeMediator
_OBJC_IVAR_$_AVPlayerItemInternal.playerConnection
_OBJC_IVAR_$_AVPlayerItemInternal.playerReference
_OBJC_IVAR_$_AVPlayerItemInternal.preferredPeakBitRate
_OBJC_IVAR_$_AVPlayerItemInternal.previousItem
_OBJC_IVAR_$_AVPlayerItemInternal.propertyStorage
_OBJC_IVAR_$_AVPlayerItemInternal.proxyTimebase
_OBJC_IVAR_$_AVPlayerItemInternal.requiresAccessLog
_OBJC_IVAR_$_AVPlayerItemInternal.reversePlaybackEndTime
_OBJC_IVAR_$_AVPlayerItemInternal.savesDownloadedDataToDiskWhenDone
_OBJC_IVAR_$_AVPlayerItemInternal.seekCompletionHandler
_OBJC_IVAR_$_AVPlayerItemInternal.seekIDMutex
_OBJC_IVAR_$_AVPlayerItemInternal.seekingWaitsForVideoCompositionRendering
_OBJC_IVAR_$_AVPlayerItemInternal.shouldOptimizeForExclusivePlayback
_OBJC_IVAR_$_AVPlayerItemInternal.speedThresholdForIFrameOnlyPlayback
_OBJC_IVAR_$_AVPlayerItemInternal.speedThresholdForIFrameOnlyPlaybackWasSet
_OBJC_IVAR_$_AVPlayerItemInternal.stateDispatchQueue
_OBJC_IVAR_$_AVPlayerItemInternal.status
_OBJC_IVAR_$_AVPlayerItemInternal.suppressesVideoLayers
_OBJC_IVAR_$_AVPlayerItemInternal.syncLayers
_OBJC_IVAR_$_AVPlayerItemInternal.textStyleRules
_OBJC_IVAR_$_AVPlayerItemInternal.timedMetadata
_OBJC_IVAR_$_AVPlayerItemInternal.trackIDsForAssetWithFigPlaybackItem
_OBJC_IVAR_$_AVPlayerItemInternal.usesIFrameOnlyPlaybackForHighRateScaledEdits
_OBJC_IVAR_$_AVPlayerItemInternal.usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet
_OBJC_IVAR_$_AVPlayerItemInternal.videoComposition
_OBJC_IVAR_$_AVPlayerItemInternal.wasInitializedWithURL
_OBJC_IVAR_$_AVPlayerItemInternal.weakReference
_OBJC_IVAR_$_AVPlayerItemLegibleOutputInternal.advanceInterval
_OBJC_IVAR_$_AVPlayerItemLegibleOutputInternal.delegateStorage
_OBJC_IVAR_$_AVPlayerItemLegibleOutputInternal.dependencyFactory
_OBJC_IVAR_$_AVPlayerItemLegibleOutputInternal.ivarAccessQueue
_OBJC_IVAR_$_AVPlayerItemLegibleOutputInternal.nativeRepresentationSubtypes
_OBJC_IVAR_$_AVPlayerItemLegibleOutputInternal.suppressesPlayerRendering
_OBJC_IVAR_$_AVPlayerItemLegibleOutputInternal.textStylingResolution
_OBJC_IVAR_$_AVPlayerItemLegibleOutputInternal.weakReferenceToHost
_OBJC_IVAR_$_AVPlayerItemMetadataOutputInternal.accumulatedMetadataGroups
_OBJC_IVAR_$_AVPlayerItemMetadataOutputInternal.accumulationQueue
_OBJC_IVAR_$_AVPlayerItemMetadataOutputInternal.advanceInterval
_OBJC_IVAR_$_AVPlayerItemMetadataOutputInternal.delegateStorage
_OBJC_IVAR_$_AVPlayerItemMetadataOutputInternal.ivarAccessQueue
_OBJC_IVAR_$_AVPlayerItemMetadataOutputInternal.metadataIdentifiers
_OBJC_IVAR_$_AVPlayerItemMetadataOutputInternal.weakReferenceToHost
_OBJC_IVAR_$_AVPlayerItemOutputInternal.timebase
_OBJC_IVAR_$_AVPlayerItemOutputInternal.timebaseReadWriteQueue
_OBJC_IVAR_$_AVPlayerItemOutputInternal.weakReference
_OBJC_IVAR_$_AVPlayerItemTrackInternal.asset
_OBJC_IVAR_$_AVPlayerItemTrackInternal.enabled
_OBJC_IVAR_$_AVPlayerItemTrackInternal.enabledWasSet
_OBJC_IVAR_$_AVPlayerItemTrackInternal.figPlaybackItem
_OBJC_IVAR_$_AVPlayerItemTrackInternal.figPlaybackItemIsReadyForInspection
_OBJC_IVAR_$_AVPlayerItemTrackInternal.loudnessInfo
_OBJC_IVAR_$_AVPlayerItemTrackInternal.trackID
_OBJC_IVAR_$_AVPlayerItemTrackInternal.videoFieldMode
_OBJC_IVAR_$_AVPlayerItemTrackInternal.weakReferenceToPlayerItem
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.advanceWakeUpInterval
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.advanceWakeUpIntervalIsValid
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.currentRate
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.delegate
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.delegateQueue
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.delegateWakeupSource
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.pixelBufferConformer
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.playerItemWeakReference
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.shouldTagBuffersWithInfo
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.stateQueue
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.suppressesPlayerRendering
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.timebase
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.vc
_OBJC_IVAR_$_AVPlayerItemVideoOutputInternal.wakeUpImageTime
_OBJC_IVAR_$_AVPlayerLayerInternal._player
_OBJC_IVAR_$_AVPlayerLayerInternal.closedCaptionLayer
_OBJC_IVAR_$_AVPlayerLayerInternal.hasPlayerToObserve
_OBJC_IVAR_$_AVPlayerLayerInternal.isInPIPMode
_OBJC_IVAR_$_AVPlayerLayerInternal.isObservingPlayer
_OBJC_IVAR_$_AVPlayerLayerInternal.isPresentationLayer
_OBJC_IVAR_$_AVPlayerLayerInternal.isReadyForDisplay
_OBJC_IVAR_$_AVPlayerLayerInternal.isReadyForDisplayMutex
_OBJC_IVAR_$_AVPlayerLayerInternal.itemMarkedReadyForDisplay
_OBJC_IVAR_$_AVPlayerLayerInternal.latestPlayerLayerBoundsAtRendering
_OBJC_IVAR_$_AVPlayerLayerInternal.latestPresentationSizeAtRendering
_OBJC_IVAR_$_AVPlayerLayerInternal.latestSubtitleLayoutAtRendering
_OBJC_IVAR_$_AVPlayerLayerInternal.maskLayer
_OBJC_IVAR_$_AVPlayerLayerInternal.presentationSize
_OBJC_IVAR_$_AVPlayerLayerInternal.serialQueue
_OBJC_IVAR_$_AVPlayerLayerInternal.shouldObservePlayer
_OBJC_IVAR_$_AVPlayerLayerInternal.subtitleGravity
_OBJC_IVAR_$_AVPlayerLayerInternal.subtitleLayer
_OBJC_IVAR_$_AVPlayerLayerInternal.videoGravity
_OBJC_IVAR_$_AVPlayerLayerInternal.videoLayer
_OBJC_IVAR_$_AVQueuePlayerInternal.beginModificationCount
_OBJC_IVAR_$_AVQueuePlayerInternal.queuedModifications
_OBJC_IVAR_$_AVRunLoopCondition._runLoopStateList
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.audioOutputDeviceUniqueID
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.audioTimePitchAlgorithm
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.error
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.figAudioRenderer
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.hasEnqueuedSamples
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.isRequestingMediaData
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.mediaDataRequester
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.muted
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.rate
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.readOnlyControlTimebase
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.scheduledAudioParameters
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.status
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.volume
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.weakReferenceToSelf
_OBJC_IVAR_$_AVSampleBufferAudioRendererInternal.weakReferenceToSynchronizer
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.aboveHighWaterLevel
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.addedToSynchronizer
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.bounds
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.contentLayer
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.controlTimebaseSetByUser
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.controlTimebaseSetByUserIsInUse
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.error
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.isRequestingMediaData
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.mediaDataRequester
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.outputObscured
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.presentationSize
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.readOnlyRenderingTimebase
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.readOnlyVideoQueueTimebase
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.serialQueue
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.status
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.videoGravity
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.videoQueue
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.weakReferenceToSelf
_OBJC_IVAR_$_AVSampleBufferDisplayLayerInternal.weakReferenceToSynchronizer
_OBJC_IVAR_$_AVSampleBufferGeneratorInternal.figSampleGenerator
_OBJC_IVAR_$_AVSampleBufferGeneratorInternal.timebase
_OBJC_IVAR_$_AVSampleBufferGeneratorInternal.weakReferenceToAsset
_OBJC_IVAR_$_AVSampleBufferRenderSynchronizerInternal.figSynchronizer
_OBJC_IVAR_$_AVSampleBufferRenderSynchronizerInternal.figSynchronizerAccessQueue
_OBJC_IVAR_$_AVSampleBufferRenderSynchronizerInternal.rate
_OBJC_IVAR_$_AVSampleBufferRenderSynchronizerInternal.readOnlyTimebase
_OBJC_IVAR_$_AVSampleBufferRenderSynchronizerInternal.rendererListQueue
_OBJC_IVAR_$_AVSampleBufferRenderSynchronizerInternal.renderers
_OBJC_IVAR_$_AVSampleBufferRenderSynchronizerInternal.timedRenderRemovals
_OBJC_IVAR_$_AVSampleBufferRequestInternal.direction
_OBJC_IVAR_$_AVSampleBufferRequestInternal.limitCursor
_OBJC_IVAR_$_AVSampleBufferRequestInternal.maxSampleCount
_OBJC_IVAR_$_AVSampleBufferRequestInternal.mode
_OBJC_IVAR_$_AVSampleBufferRequestInternal.overrideTime
_OBJC_IVAR_$_AVSampleBufferRequestInternal.preferredMinSampleCount
_OBJC_IVAR_$_AVSampleBufferRequestInternal.startCursor
_OBJC_IVAR_$_AVSampleCursor._sampleCursor
_OBJC_IVAR_$_AVSampleCursorInternal.figSampleCursor
_OBJC_IVAR_$_AVSampleCursorInternal.implementsCopyChunkDetails
_OBJC_IVAR_$_AVSampleCursorInternal.implementsCopySampleLocation
_OBJC_IVAR_$_AVSampleCursorInternal.implementsCreateSampleBuffer
_OBJC_IVAR_$_AVSampleCursorInternal.implementsGetDecodeTimeStamp
_OBJC_IVAR_$_AVSampleCursorInternal.implementsGetDependencyInfo
_OBJC_IVAR_$_AVSampleCursorInternal.implementsGetDuration
_OBJC_IVAR_$_AVSampleCursorInternal.implementsTestReorderingBoundary
_OBJC_IVAR_$_AVScheduledAudioParametersInternal.ramps
_OBJC_IVAR_$_AVStreamDataParserInternal._accumulatedInitializationData
_OBJC_IVAR_$_AVStreamDataParserInternal._asset
_OBJC_IVAR_$_AVStreamDataParserInternal._delegate
_OBJC_IVAR_$_AVStreamDataParserInternal._encounteredStreamDiscontinuity
_OBJC_IVAR_$_AVStreamDataParserInternal._error
_OBJC_IVAR_$_AVStreamDataParserInternal._figManifold
_OBJC_IVAR_$_AVStreamDataParserInternal._samplesBeforeReady
_OBJC_IVAR_$_AVStreamDataParserInternal._samplesBeforeReadyTotalDuration
_OBJC_IVAR_$_AVStreamDataParserInternal._samplesBeforeReadyTotalSize
_OBJC_IVAR_$_AVStreamDataParserInternal._status
_OBJC_IVAR_$_AVStreamDataParserInternal._trackDecryptorsByTrackID
_OBJC_IVAR_$_AVStreamDataParserInternal._trackIDsNotProvidingMedia
_OBJC_IVAR_$_AVStreamDataParserInternal._trackKeyRequestInitializationDataByTrackID
_OBJC_IVAR_$_AVStreamDataParserInternal._tracksBecomingReadyByTrackID
_OBJC_IVAR_$_AVStreamDataParserInternal._typeIdOfInitialFigManifold
_OBJC_IVAR_$_AVSubtitleLayer._subtitleLayer
_OBJC_IVAR_$_AVSubtitleLayerInternal.currentSubtitleSample
_OBJC_IVAR_$_AVSubtitleLayerInternal.currentSubtitleSampleIsForced
_OBJC_IVAR_$_AVSubtitleLayerInternal.delegate
_OBJC_IVAR_$_AVSubtitleLayerInternal.hasPlayerToObserve
_OBJC_IVAR_$_AVSubtitleLayerInternal.isObservingPlayer
_OBJC_IVAR_$_AVSubtitleLayerInternal.isOverscanSubtitleSupportEnabled
_OBJC_IVAR_$_AVSubtitleLayerInternal.isPresentationLayer
_OBJC_IVAR_$_AVSubtitleLayerInternal.nonForcedSubtitleDisplayEnabled
_OBJC_IVAR_$_AVSubtitleLayerInternal.player
_OBJC_IVAR_$_AVSubtitleLayerInternal.renderer
_OBJC_IVAR_$_AVSubtitleLayerInternal.serialQueue
_OBJC_IVAR_$_AVSubtitleLayerInternal.shouldObservePlayer
_OBJC_IVAR_$_AVSynchronizedLayerInternal.isVisible
_OBJC_IVAR_$_AVSynchronizedLayerInternal.playerItem
_OBJC_IVAR_$_AVSynchronizedLayerInternal.serialQueue
_OBJC_IVAR_$_AVTextStyleRuleInternal.textMarkupAttributes
_OBJC_IVAR_$_AVTextStyleRuleInternal.textSelector
_OBJC_IVAR_$_AVTimebaseObserver._currentRate
_OBJC_IVAR_$_AVTimebaseObserver._invalid
_OBJC_IVAR_$_AVTimebaseObserver._lastRate
_OBJC_IVAR_$_AVTimebaseObserver._timebase
_OBJC_IVAR_$_AVTimebaseObserver._timerQueue
_OBJC_IVAR_$_AVTimebaseObserver._timerSource
_OBJC_IVAR_$_AVTimebaseObserver._weakReference
_OBJC_IVAR_$_AVTimedMetadataGroup._priv
_OBJC_IVAR_$_AVTimedMetadataGroupInternal.backingSBuf
_OBJC_IVAR_$_AVTimedMetadataGroupInternal.items
_OBJC_IVAR_$_AVTimedMetadataGroupInternal.timeRange
_OBJC_IVAR_$_AVURLAssetInternal.URL
_OBJC_IVAR_$_AVURLAssetInternal.assetCache
_OBJC_IVAR_$_AVURLAssetInternal.downloadDestinationURL
_OBJC_IVAR_$_AVURLAssetInternal.loader
_OBJC_IVAR_$_AVURLAssetInternal.makeOneResourceLoaderOnly
_OBJC_IVAR_$_AVURLAssetInternal.referenceRestrictions
_OBJC_IVAR_$_AVURLAssetInternal.resourceLoader
_OBJC_IVAR_$_AVURLAssetInternal.shouldMatchDataInCacheByURLPathComponentOnly
_OBJC_IVAR_$_AVURLAssetInternal.shouldMatchDataInCacheByURLWithoutQueryComponent
_OBJC_IVAR_$_AVURLAssetInternal.shouldOptimizeAccessForLinearMoviePlayback
_OBJC_IVAR_$_AVURLAssetInternal.shouldPrepareToOptimizeForExclusivePlayback
_OBJC_IVAR_$_AVURLAssetInternal.tracks
_OBJC_IVAR_$_AVURLAssetInternal.tracksAccessQueue
_OBJC_IVAR_$_AVURLAuthenticationChallenge._requestDictionary
_OBJC_IVAR_$_AVURLAuthenticationChallenge._weakReference
_OBJC_IVAR_$_AVUnreachableAssetInspectorLoader._figError
_OBJC_IVAR_$_AVUnreachableAssetInspectorLoader._figErrorUserInfo
_OBJC_IVAR_$_AVVideoCompositionCoreAnimationToolInternal.animationLayer
_OBJC_IVAR_$_AVVideoCompositionCoreAnimationToolInternal.auxiliaryTrackID
_OBJC_IVAR_$_AVVideoCompositionCoreAnimationToolInternal.postProcessingVideoLayers
_OBJC_IVAR_$_AVVideoCompositionCoreAnimationToolInternal.way
_OBJC_IVAR_$_AVVideoCompositionInstructionInternal.backgroundColor
_OBJC_IVAR_$_AVVideoCompositionInstructionInternal.enablePostProcessing
_OBJC_IVAR_$_AVVideoCompositionInstructionInternal.layerInstructions
_OBJC_IVAR_$_AVVideoCompositionInstructionInternal.timeRange
_OBJC_IVAR_$_AVVideoCompositionInternal.animationTool
_OBJC_IVAR_$_AVVideoCompositionInternal.auxiliaryTrackLayerSetLast
_OBJC_IVAR_$_AVVideoCompositionInternal.builtInCompositorName
_OBJC_IVAR_$_AVVideoCompositionInternal.changeSeed
_OBJC_IVAR_$_AVVideoCompositionInternal.customCompositorClass
_OBJC_IVAR_$_AVVideoCompositionInternal.frameDuration
_OBJC_IVAR_$_AVVideoCompositionInternal.instructions
_OBJC_IVAR_$_AVVideoCompositionInternal.renderScale
_OBJC_IVAR_$_AVVideoCompositionInternal.renderSize
_OBJC_IVAR_$_AVVideoCompositionLayerInstructionInternal.cropRectangleRamps
_OBJC_IVAR_$_AVVideoCompositionLayerInstructionInternal.opacityRamps
_OBJC_IVAR_$_AVVideoCompositionLayerInstructionInternal.trackID
_OBJC_IVAR_$_AVVideoCompositionLayerInstructionInternal.transformRamps
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._basisProperties
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._cleanApertureDict
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._clientRequiredPixelBufferAttributes
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._destinationDesiredPixelBufferAttributes
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._destinationDesiredPixelBufferColorPrimaries
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._destinationDesiredPixelBufferTransferFunction
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._destinationDesiredPixelBufferYCbCrMatrix
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._destinationPixelBufferDimensions
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._edgeWidths
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._highQualityRendering
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._pixelAspectRatio
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._pixelAspectRatioDict
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._pixelBufferPool
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._pixelBufferPoolQ
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._renderScale
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._renderTransform
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._size
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal._videoComposition
_OBJC_IVAR_$_AVVideoCompositionRenderContextInternal.pixelFormatFamily
_OBJC_IVAR_$_AVVideoPerformanceMetricsInternal._metricsDictionary
_OBJC_IVAR_$_MediaIOGraphNodeDescription._graph
_OBJC_IVAR_$_MediaIOGraphNodeDescription._graphNode
_OBJC_IVAR_$_MediaIOGraphNodeList._count
_OBJC_IVAR_$_MediaIOGraphNodeList._nodes
_OBJC_METACLASS_$_AVAIFCOutputSettingsValidator
_OBJC_METACLASS_$_AVAIFFOutputSettingsValidator
_OBJC_METACLASS_$_AVAVAudioSettingsAudioOutputSettings
_OBJC_METACLASS_$_AVAVVideoSettingsVideoOutputSettings
_OBJC_METACLASS_$_AVAsset
_OBJC_METACLASS_$_AVAssetCache
_OBJC_METACLASS_$_AVAssetCacheInternal
_OBJC_METACLASS_$_AVAssetCollection
_OBJC_METACLASS_$_AVAssetCollectionFactory
_OBJC_METACLASS_$_AVAssetCollectionInspector
_OBJC_METACLASS_$_AVAssetCollectionInspectorLoader
_OBJC_METACLASS_$_AVAssetCollectionInternal
_OBJC_METACLASS_$_AVAssetDownloadSession
_OBJC_METACLASS_$_AVAssetDownloadSessionInternal
_OBJC_METACLASS_$_AVAssetExportSession
_OBJC_METACLASS_$_AVAssetExportSessionInternal
_OBJC_METACLASS_$_AVAssetImageGenerator
_OBJC_METACLASS_$_AVAssetImageGeneratorInternal
_OBJC_METACLASS_$_AVAssetInspector
_OBJC_METACLASS_$_AVAssetInspectorLoader
_OBJC_METACLASS_$_AVAssetInternal
_OBJC_METACLASS_$_AVAssetMakeReadyForInspectionLoader
_OBJC_METACLASS_$_AVAssetMediaSelectionGroup
_OBJC_METACLASS_$_AVAssetProxy
_OBJC_METACLASS_$_AVAssetProxyInternal
_OBJC_METACLASS_$_AVAssetReader
_OBJC_METACLASS_$_AVAssetReaderAudioMixOutput
_OBJC_METACLASS_$_AVAssetReaderAudioMixOutputInternal
_OBJC_METACLASS_$_AVAssetReaderInternal
_OBJC_METACLASS_$_AVAssetReaderOutput
_OBJC_METACLASS_$_AVAssetReaderOutputInternal
_OBJC_METACLASS_$_AVAssetReaderOutputMetadataAdaptor
_OBJC_METACLASS_$_AVAssetReaderOutputMetadataAdaptorInternal
_OBJC_METACLASS_$_AVAssetReaderSampleReferenceOutput
_OBJC_METACLASS_$_AVAssetReaderSampleReferenceOutputInternal
_OBJC_METACLASS_$_AVAssetReaderTrackOutput
_OBJC_METACLASS_$_AVAssetReaderTrackOutputInternal
_OBJC_METACLASS_$_AVAssetReaderVideoCompositionOutput
_OBJC_METACLASS_$_AVAssetReaderVideoCompositionOutputInternal
_OBJC_METACLASS_$_AVAssetResourceLoader
_OBJC_METACLASS_$_AVAssetResourceLoaderInternal
_OBJC_METACLASS_$_AVAssetResourceLoadingContentInformationRequest
_OBJC_METACLASS_$_AVAssetResourceLoadingContentInformationRequestInternal
_OBJC_METACLASS_$_AVAssetResourceLoadingDataRequest
_OBJC_METACLASS_$_AVAssetResourceLoadingDataRequestInternal
_OBJC_METACLASS_$_AVAssetResourceLoadingRequest
_OBJC_METACLASS_$_AVAssetResourceLoadingRequestInternal
_OBJC_METACLASS_$_AVAssetResourceRenewalRequest
_OBJC_METACLASS_$_AVAssetSynchronousInspectorLoader
_OBJC_METACLASS_$_AVAssetTrack
_OBJC_METACLASS_$_AVAssetTrackEnumerator
_OBJC_METACLASS_$_AVAssetTrackGroup
_OBJC_METACLASS_$_AVAssetTrackGroupInternal
_OBJC_METACLASS_$_AVAssetTrackInspector
_OBJC_METACLASS_$_AVAssetTrackInternal
_OBJC_METACLASS_$_AVAssetTrackSegment
_OBJC_METACLASS_$_AVAssetWriter
_OBJC_METACLASS_$_AVAssetWriterAsynchronousFinishWritingDelegate
_OBJC_METACLASS_$_AVAssetWriterClientInitiatedTerminalHelper
_OBJC_METACLASS_$_AVAssetWriterConfigurationState
_OBJC_METACLASS_$_AVAssetWriterDoNothingFinishWritingDelegate
_OBJC_METACLASS_$_AVAssetWriterFailedTerminalHelper
_OBJC_METACLASS_$_AVAssetWriterFigAssetWriterNotificationHandler
_OBJC_METACLASS_$_AVAssetWriterFinishWritingHelper
_OBJC_METACLASS_$_AVAssetWriterHelper
_OBJC_METACLASS_$_AVAssetWriterInput
_OBJC_METACLASS_$_AVAssetWriterInputConfigurationState
_OBJC_METACLASS_$_AVAssetWriterInputFigAssetWriterEndPassOperation
_OBJC_METACLASS_$_AVAssetWriterInputGroup
_OBJC_METACLASS_$_AVAssetWriterInputGroupInternal
_OBJC_METACLASS_$_AVAssetWriterInputHelper
_OBJC_METACLASS_$_AVAssetWriterInputInterPassAnalysisHelper
_OBJC_METACLASS_$_AVAssetWriterInputInternal
_OBJC_METACLASS_$_AVAssetWriterInputMediaDataRequester
_OBJC_METACLASS_$_AVAssetWriterInputMetadataAdaptor
_OBJC_METACLASS_$_AVAssetWriterInputMetadataAdaptorInternal
_OBJC_METACLASS_$_AVAssetWriterInputNoMorePassesHelper
_OBJC_METACLASS_$_AVAssetWriterInputPassDescription
_OBJC_METACLASS_$_AVAssetWriterInputPassDescriptionInternal
_OBJC_METACLASS_$_AVAssetWriterInputPassDescriptionResponder
_OBJC_METACLASS_$_AVAssetWriterInputPixelBufferAdaptor
_OBJC_METACLASS_$_AVAssetWriterInputPixelBufferAdaptorInternal
_OBJC_METACLASS_$_AVAssetWriterInputSelectionOption
_OBJC_METACLASS_$_AVAssetWriterInputTerminalHelper
_OBJC_METACLASS_$_AVAssetWriterInputUnknownHelper
_OBJC_METACLASS_$_AVAssetWriterInputWritingHelper
_OBJC_METACLASS_$_AVAssetWriterInternal
_OBJC_METACLASS_$_AVAssetWriterSynchronousMainThreadFinishWritingDelegate
_OBJC_METACLASS_$_AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate
_OBJC_METACLASS_$_AVAssetWriterTerminalHelper
_OBJC_METACLASS_$_AVAssetWriterUnknownHelper
_OBJC_METACLASS_$_AVAssetWriterWritingHelper
_OBJC_METACLASS_$_AVAsynchronousVideoCompositionRequest
_OBJC_METACLASS_$_AVAsynchronousVideoCompositionRequestInternal
_OBJC_METACLASS_$_AVAudioMix
_OBJC_METACLASS_$_AVAudioMixInputParameters
_OBJC_METACLASS_$_AVAudioMixInputParametersInternal
_OBJC_METACLASS_$_AVAudioMixInternal
_OBJC_METACLASS_$_AVAudioOutputSettings
_OBJC_METACLASS_$_AVAudioSettingsValueConstrainer
_OBJC_METACLASS_$_AVCMNotificationDispatcher
_OBJC_METACLASS_$_AVCMNotificationDispatcherListenerAndCallback
_OBJC_METACLASS_$_AVCMNotificationDispatcherListenerKey
_OBJC_METACLASS_$_AVCallbackRegistry
_OBJC_METACLASS_$_AVCaptureAudioChannel
_OBJC_METACLASS_$_AVCaptureAudioChannelInternal
_OBJC_METACLASS_$_AVCaptureAudioDataOutput
_OBJC_METACLASS_$_AVCaptureAudioDataOutputCallbackData
_OBJC_METACLASS_$_AVCaptureAudioDataOutputInternal
_OBJC_METACLASS_$_AVCaptureAudioFileOutput
_OBJC_METACLASS_$_AVCaptureAudioFileOutputInternal
_OBJC_METACLASS_$_AVCaptureAudioPreviewOutput
_OBJC_METACLASS_$_AVCaptureAudioPreviewOutputInternal
_OBJC_METACLASS_$_AVCaptureAudioSettings
_OBJC_METACLASS_$_AVCaptureConnection
_OBJC_METACLASS_$_AVCaptureConnectionInternal
_OBJC_METACLASS_$_AVCaptureDALDevice
_OBJC_METACLASS_$_AVCaptureDevice
_OBJC_METACLASS_$_AVCaptureDeviceFormat
_OBJC_METACLASS_$_AVCaptureDeviceFormatInternal
_OBJC_METACLASS_$_AVCaptureDeviceInput
_OBJC_METACLASS_$_AVCaptureDeviceInputInternal
_OBJC_METACLASS_$_AVCaptureDeviceInputSource
_OBJC_METACLASS_$_AVCaptureDeviceInputSourceInternal
_OBJC_METACLASS_$_AVCaptureDeviceInternal
_OBJC_METACLASS_$_AVCaptureFileOutput
_OBJC_METACLASS_$_AVCaptureFileOutputInternal
_OBJC_METACLASS_$_AVCaptureFileOutputPauseOperationDescriptor
_OBJC_METACLASS_$_AVCaptureFileOutputRecordingOperationDescriptor
_OBJC_METACLASS_$_AVCaptureHALDevice
_OBJC_METACLASS_$_AVCaptureInput
_OBJC_METACLASS_$_AVCaptureInputInternal
_OBJC_METACLASS_$_AVCaptureInputPort
_OBJC_METACLASS_$_AVCaptureInputPortInternal
_OBJC_METACLASS_$_AVCaptureMovieFileOutput
_OBJC_METACLASS_$_AVCaptureMovieFileOutputInternal
_OBJC_METACLASS_$_AVCaptureOperationDescriptorQueue
_OBJC_METACLASS_$_AVCaptureOperationDescriptorQueueItem
_OBJC_METACLASS_$_AVCaptureOutput
_OBJC_METACLASS_$_AVCaptureOutputInternal
_OBJC_METACLASS_$_AVCaptureOutputSettings
_OBJC_METACLASS_$_AVCaptureScreenInput
_OBJC_METACLASS_$_AVCaptureScreenInputInternal
_OBJC_METACLASS_$_AVCaptureSession
_OBJC_METACLASS_$_AVCaptureSessionInternal
_OBJC_METACLASS_$_AVCaptureSessionInternalState
_OBJC_METACLASS_$_AVCaptureStillImageOutput
_OBJC_METACLASS_$_AVCaptureStillImageOutputInternal
_OBJC_METACLASS_$_AVCaptureStillImageOutputUtils
_OBJC_METACLASS_$_AVCaptureStillImageRequest
_OBJC_METACLASS_$_AVCaptureStillImageTransform
_OBJC_METACLASS_$_AVCaptureVideoDataOutput
_OBJC_METACLASS_$_AVCaptureVideoDataOutputCallbackData
_OBJC_METACLASS_$_AVCaptureVideoDataOutputInternal
_OBJC_METACLASS_$_AVCaptureVideoPreviewLayer
_OBJC_METACLASS_$_AVCaptureVideoPreviewLayerInternal
_OBJC_METACLASS_$_AVCaptureVideoSettings
_OBJC_METACLASS_$_AVChapterMetadataItem
_OBJC_METACLASS_$_AVChapterMetadataItemInternal
_OBJC_METACLASS_$_AVComposition
_OBJC_METACLASS_$_AVCompositionFormatReaderInspector
_OBJC_METACLASS_$_AVCompositionInternal
_OBJC_METACLASS_$_AVCompositionTrack
_OBJC_METACLASS_$_AVCompositionTrackInternal
_OBJC_METACLASS_$_AVCompositionTrackReaderInspector
_OBJC_METACLASS_$_AVCompositionTrackSegment
_OBJC_METACLASS_$_AVCompositionTrackSegmentInternal
_OBJC_METACLASS_$_AVCustomVideoCompositorSession
_OBJC_METACLASS_$_AVExportSettingsOutputSettingsAssistantBaseSettings
_OBJC_METACLASS_$_AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster
_OBJC_METACLASS_$_AVFigAssetInspector
_OBJC_METACLASS_$_AVFigAssetInspectorLoader
_OBJC_METACLASS_$_AVFigAssetTrackInspector
_OBJC_METACLASS_$_AVFigAssetWriterAudioTrack
_OBJC_METACLASS_$_AVFigAssetWriterGenericTrack
_OBJC_METACLASS_$_AVFigAssetWriterTrack
_OBJC_METACLASS_$_AVFigAssetWriterVideoTrack
_OBJC_METACLASS_$_AVFigObjectInspector
_OBJC_METACLASS_$_AVFloat64Range
_OBJC_METACLASS_$_AVFormatReaderInspector
_OBJC_METACLASS_$_AVFormatSpecification
_OBJC_METACLASS_$_AVFragmentedMovie
_OBJC_METACLASS_$_AVFragmentedMovieInternal
_OBJC_METACLASS_$_AVFragmentedMovieMinder
_OBJC_METACLASS_$_AVFragmentedMovieMinderInternal
_OBJC_METACLASS_$_AVFragmentedMovieTrack
_OBJC_METACLASS_$_AVFragmentedMovieTrackInternal
_OBJC_METACLASS_$_AVFrameRateRange
_OBJC_METACLASS_$_AVFrameRateRangeInternal
_OBJC_METACLASS_$_AVGarbageCollectedWeakReference
_OBJC_METACLASS_$_AVGenericMediaFileOutputSettingsValidator
_OBJC_METACLASS_$_AVIOKitOutputSettingsAssistantVideoEncoderCapabilities
_OBJC_METACLASS_$_AVISOOutputSettingsValidator
_OBJC_METACLASS_$_AVMediaDataRequester
_OBJC_METACLASS_$_AVMediaDataStorage
_OBJC_METACLASS_$_AVMediaDataStorageInternal
_OBJC_METACLASS_$_AVMediaFileOutputSettingsValidator
_OBJC_METACLASS_$_AVMediaFileType
_OBJC_METACLASS_$_AVMediaSelectionGroup
_OBJC_METACLASS_$_AVMediaSelectionGroupInternal
_OBJC_METACLASS_$_AVMediaSelectionKeyValueOption
_OBJC_METACLASS_$_AVMediaSelectionOption
_OBJC_METACLASS_$_AVMediaSelectionOptionInternal
_OBJC_METACLASS_$_AVMediaSelectionTrackOption
_OBJC_METACLASS_$_AVMetadataEnumerator
_OBJC_METACLASS_$_AVMetadataFaceObject
_OBJC_METACLASS_$_AVMetadataFaceObjectInternal
_OBJC_METACLASS_$_AVMetadataItem
_OBJC_METACLASS_$_AVMetadataItemFilter
_OBJC_METACLASS_$_AVMetadataItemFilterForSharing
_OBJC_METACLASS_$_AVMetadataItemFilterInternal
_OBJC_METACLASS_$_AVMetadataItemInternal
_OBJC_METACLASS_$_AVMetadataObject
_OBJC_METACLASS_$_AVMetadataObjectInternal
_OBJC_METACLASS_$_AVMovie
_OBJC_METACLASS_$_AVMovieInternal
_OBJC_METACLASS_$_AVMovieTrack
_OBJC_METACLASS_$_AVMovieTrackInternal
_OBJC_METACLASS_$_AVMutableAudioMix
_OBJC_METACLASS_$_AVMutableAudioMixInputParameters
_OBJC_METACLASS_$_AVMutableComposition
_OBJC_METACLASS_$_AVMutableCompositionInternal
_OBJC_METACLASS_$_AVMutableCompositionTrack
_OBJC_METACLASS_$_AVMutableCompositionTrackInternal
_OBJC_METACLASS_$_AVMutableMetadataItem
_OBJC_METACLASS_$_AVMutableMovie
_OBJC_METACLASS_$_AVMutableMovieInternal
_OBJC_METACLASS_$_AVMutableMovieTrack
_OBJC_METACLASS_$_AVMutableMovieTrackInternal
_OBJC_METACLASS_$_AVMutableScheduledAudioParameters
_OBJC_METACLASS_$_AVMutableTimedMetadataGroup
_OBJC_METACLASS_$_AVMutableVideoComposition
_OBJC_METACLASS_$_AVMutableVideoCompositionInstruction
_OBJC_METACLASS_$_AVMutableVideoCompositionLayerInstruction
_OBJC_METACLASS_$_AVOccasionalTimebaseObserver
_OBJC_METACLASS_$_AVOnceTimebaseObserver
_OBJC_METACLASS_$_AVOutputSettings
_OBJC_METACLASS_$_AVOutputSettingsAssistant
_OBJC_METACLASS_$_AVOutputSettingsAssistantInternal
_OBJC_METACLASS_$_AVPeriodicTimebaseObserver
_OBJC_METACLASS_$_AVPixelBufferAttributeMediator
_OBJC_METACLASS_$_AVPixelBufferAttributesVideoOutputSettings
_OBJC_METACLASS_$_AVPlaybackItemInspector
_OBJC_METACLASS_$_AVPlaybackItemInspectorLoader
_OBJC_METACLASS_$_AVPlaybackItemTrackInspector
_OBJC_METACLASS_$_AVPlayer
_OBJC_METACLASS_$_AVPlayerConnection
_OBJC_METACLASS_$_AVPlayerInternal
_OBJC_METACLASS_$_AVPlayerItem
_OBJC_METACLASS_$_AVPlayerItemAccessLog
_OBJC_METACLASS_$_AVPlayerItemAccessLogEvent
_OBJC_METACLASS_$_AVPlayerItemAccessLogEventInternal
_OBJC_METACLASS_$_AVPlayerItemAccessLogInternal
_OBJC_METACLASS_$_AVPlayerItemErrorLog
_OBJC_METACLASS_$_AVPlayerItemErrorLogEvent
_OBJC_METACLASS_$_AVPlayerItemErrorLogEventInternal
_OBJC_METACLASS_$_AVPlayerItemErrorLogInternal
_OBJC_METACLASS_$_AVPlayerItemInternal
_OBJC_METACLASS_$_AVPlayerItemLegibleOutput
_OBJC_METACLASS_$_AVPlayerItemLegibleOutputInternal
_OBJC_METACLASS_$_AVPlayerItemLegibleOutputRealDependencyFactory
_OBJC_METACLASS_$_AVPlayerItemMetadataOutput
_OBJC_METACLASS_$_AVPlayerItemMetadataOutputInternal
_OBJC_METACLASS_$_AVPlayerItemOutput
_OBJC_METACLASS_$_AVPlayerItemOutputInternal
_OBJC_METACLASS_$_AVPlayerItemTrack
_OBJC_METACLASS_$_AVPlayerItemTrackInternal
_OBJC_METACLASS_$_AVPlayerItemVideoOutput
_OBJC_METACLASS_$_AVPlayerItemVideoOutputInternal
_OBJC_METACLASS_$_AVPlayerLayer
_OBJC_METACLASS_$_AVPlayerLayerIntermediateLayer
_OBJC_METACLASS_$_AVPlayerLayerInternal
_OBJC_METACLASS_$_AVPlayerMediaSelectionCriteria
_OBJC_METACLASS_$_AVPlayerMediaSelectionCriteriaInternal
_OBJC_METACLASS_$_AVPropertyStorage
_OBJC_METACLASS_$_AVQueuePlayer
_OBJC_METACLASS_$_AVQueuePlayerInternal
_OBJC_METACLASS_$_AVResolvedDecompressionSettings
_OBJC_METACLASS_$_AVRetainReleaseWeakReference
_OBJC_METACLASS_$_AVRunLoopCondition
_OBJC_METACLASS_$_AVRunLoopConditionRunLoopState
_OBJC_METACLASS_$_AVSampleBufferAudioRenderer
_OBJC_METACLASS_$_AVSampleBufferAudioRendererInternal
_OBJC_METACLASS_$_AVSampleBufferDisplayLayer
_OBJC_METACLASS_$_AVSampleBufferDisplayLayerContentLayer
_OBJC_METACLASS_$_AVSampleBufferDisplayLayerInternal
_OBJC_METACLASS_$_AVSampleBufferGenerator
_OBJC_METACLASS_$_AVSampleBufferGeneratorInternal
_OBJC_METACLASS_$_AVSampleBufferRenderSynchronizer
_OBJC_METACLASS_$_AVSampleBufferRenderSynchronizerInternal
_OBJC_METACLASS_$_AVSampleBufferRequest
_OBJC_METACLASS_$_AVSampleBufferRequestInternal
_OBJC_METACLASS_$_AVSampleCursor
_OBJC_METACLASS_$_AVSampleCursorInternal
_OBJC_METACLASS_$_AVScheduledAudioParameters
_OBJC_METACLASS_$_AVScheduledAudioParametersInternal
_OBJC_METACLASS_$_AVStreamDataAsset
_OBJC_METACLASS_$_AVStreamDataAssetInspector
_OBJC_METACLASS_$_AVStreamDataAssetTrackInspector
_OBJC_METACLASS_$_AVStreamDataInspectionOnlyAsset
_OBJC_METACLASS_$_AVStreamDataParser
_OBJC_METACLASS_$_AVStreamDataParserInternal
_OBJC_METACLASS_$_AVStreamingResourceInspector
_OBJC_METACLASS_$_AVSubtitleLayer
_OBJC_METACLASS_$_AVSubtitleLayerInternal
_OBJC_METACLASS_$_AVSynchronizedLayer
_OBJC_METACLASS_$_AVSynchronizedLayerInternal
_OBJC_METACLASS_$_AVTextStyleRule
_OBJC_METACLASS_$_AVTextStyleRuleInternal
_OBJC_METACLASS_$_AVTimebaseObserver
_OBJC_METACLASS_$_AVTimedMetadataGroup
_OBJC_METACLASS_$_AVTimedMetadataGroupInternal
_OBJC_METACLASS_$_AVTrackReaderInspector
_OBJC_METACLASS_$_AVURLAsset
_OBJC_METACLASS_$_AVURLAssetInternal
_OBJC_METACLASS_$_AVURLAuthenticationChallenge
_OBJC_METACLASS_$_AVUnreachableAssetInspectorLoader
_OBJC_METACLASS_$_AVVideoComposition
_OBJC_METACLASS_$_AVVideoCompositionCoreAnimationTool
_OBJC_METACLASS_$_AVVideoCompositionCoreAnimationToolInternal
_OBJC_METACLASS_$_AVVideoCompositionInstruction
_OBJC_METACLASS_$_AVVideoCompositionInstructionInternal
_OBJC_METACLASS_$_AVVideoCompositionInternal
_OBJC_METACLASS_$_AVVideoCompositionLayerInstruction
_OBJC_METACLASS_$_AVVideoCompositionLayerInstructionInternal
_OBJC_METACLASS_$_AVVideoCompositionRenderContext
_OBJC_METACLASS_$_AVVideoCompositionRenderContextInternal
_OBJC_METACLASS_$_AVVideoOutputSettings
_OBJC_METACLASS_$_AVVideoPerformanceMetrics
_OBJC_METACLASS_$_AVVideoPerformanceMetricsInternal
_OBJC_METACLASS_$_AVWAVEOutputSettingsValidator
_OBJC_METACLASS_$_AVWeakKeyValueObserverProxy
_OBJC_METACLASS_$_AVWeakReference
_OBJC_METACLASS_$_AVWeakReferencingDelegateStorage
_OBJC_METACLASS_$_CMTimeAsValue
_OBJC_METACLASS_$_CMTimeMappingAsValue
_OBJC_METACLASS_$_CMTimeRangeAsValue
_OBJC_METACLASS_$_MediaIOGraphNodeDescription
_OBJC_METACLASS_$_MediaIOGraphNodeList
_handleFigAssetCollectionNotification
_kAVStreamDataParserMaxCachedOutputDuration
_kAVStreamDataParserMaxCachedTotalSampleSize
_AVAudioBitRateStrategy_Constant
_AVAudioBitRateStrategy_LongTermAverage
_AVAudioBitRateStrategy_Variable
_AVAudioBitRateStrategy_VariableConstrained
_AVChannelLayoutKey
_AVEncoderAudioQualityForVBRKey
_AVEncoderAudioQualityKey
_AVEncoderBitDepthHintKey
_AVEncoderBitRateKey
_AVEncoderBitRatePerChannelKey
_AVEncoderBitRateStrategyKey
_AVFormatIDKey
_AVLinearPCMBitDepthKey
_AVLinearPCMIsBigEndianKey
_AVLinearPCMIsFloatKey
_AVLinearPCMIsNonInterleaved
_AVNumberOfChannelsKey
_AVSampleRateConverterAlgorithmKey
_AVSampleRateConverterAlgorithm_Mastering
_AVSampleRateConverterAlgorithm_Normal
_AVSampleRateConverterAudioQualityKey
_AVSampleRateKey
_AudioConverterDispose
_AudioConverterGetProperty
_AudioConverterGetPropertyInfo
_AudioConverterNew
_AudioFileGetGlobalInfo
_AudioFileGetGlobalInfoSize
_AudioFormatGetProperty
_AudioFormatGetPropertyInfo
_AudioObjectAddPropertyListener
_AudioObjectGetPropertyData
_AudioObjectGetPropertyDataSize
_AudioObjectRemovePropertyListener
_AudioObjectSetPropertyData
_CATransform3DGetAffineTransform
_CATransform3DIdentity
_CATransform3DRotate
_CATransform3DScale
_CFArrayAppendValue
_CFArrayContainsValue
_CFArrayCreateMutable
_CFArrayCreateMutableCopy
_CFArrayGetCount
_CFArrayGetFirstIndexOfValue
_CFArrayGetTypeID
_CFArrayGetValueAtIndex
_CFArrayInsertValueAtIndex
_CFArrayRemoveValueAtIndex
_CFBagAddValue
_CFBagContainsValue
_CFBagCreateMutable
_CFBagRemoveValue
_CFBooleanGetTypeID
_CFBooleanGetValue
_CFDataCreateMutable
_CFDataCreateWithBytesNoCopy
_CFDataGetLength
_CFDataGetTypeID
_CFDictionaryAddValue
_CFDictionaryContainsKey
_CFDictionaryCreate
_CFDictionaryCreateCopy
_CFDictionaryCreateMutable
_CFDictionaryCreateMutableCopy
_CFDictionaryGetCount
_CFDictionaryGetKeysAndValues
_CFDictionaryGetTypeID
_CFDictionaryGetValue
_CFDictionaryGetValueIfPresent
_CFDictionaryRemoveValue
_CFDictionarySetValue
_CFEqual
_CFGetAllocator
_CFGetTypeID
_CFHash
_CFLocaleCreate
_CFMakeCollectable
_CFNumberCreate
_CFNumberGetByteSize
_CFNumberGetType
_CFNumberGetTypeID
_CFNumberGetValue
_CFPreferencesGetAppBooleanValue
_CFPropertyListCreateDeepCopy
_CFPropertyListIsValid
_CFRelease
_CFRetain
_CFRunLoopAddSource
_CFRunLoopGetCurrent
_CFRunLoopGetMain
_CFRunLoopRemoveSource
_CFRunLoopRunInMode
_CFRunLoopSourceCreate
_CFRunLoopSourceSignal
_CFRunLoopWakeUp
_CFStringCreateWithFormat
_CFStringGetTypeID
_CFURLGetTypeID
_CGAffineTransformConcat
_CGAffineTransformEqualToTransform
_CGAffineTransformIdentity
_CGAffineTransformIsIdentity
_CGAffineTransformMakeTranslation
_CGAffineTransformRotate
_CGAffineTransformScale
_CGColorCreate
_CGColorEqualToColor
_CGColorGetColorSpace
_CGColorGetComponents
_CGColorGetNumberOfComponents
_CGColorGetTypeID
_CGColorRelease
_CGColorSpaceCreateWithName
_CGColorSpaceGetModel
_CGColorSpaceRelease
_CGContextClearRect
_CGContextConcatCTM
_CGContextRestoreGState
_CGContextSaveGState
_CGContextSetTextMatrix
_CGDataProviderCreateWithData
_CGDataProviderRelease
_CGDisplayBounds
_CGDisplayCopyDisplayMode
_CGDisplayModeGetHeight
_CGDisplayModeGetPixelsHigh
_CGDisplayModeGetPixelsWide
_CGDisplayModeGetResolution
_CGDisplayModeGetWidth
_CGDisplayRegisterReconfigurationCallback
_CGGetActiveDisplayList
_CGImageCreate
_CGImageDestinationAddImage
_CGImageDestinationCreateWithData
_CGImageDestinationFinalize
_CGImageRelease
_CGImageSourceCreateImageAtIndex
_CGImageSourceCreateWithData
_CGImageSourceGetType
_CGMainDisplayID
_CGPointMakeWithDictionaryRepresentation
_CGPointZero
_CGRectApplyAffineTransform
_CGRectContainsRect
_CGRectCreateDictionaryRepresentation
_CGRectEqualToRect
_CGRectGetHeight
_CGRectGetMaxY
_CGRectGetMidX
_CGRectGetMidY
_CGRectGetMinX
_CGRectGetWidth
_CGRectInfinite
_CGRectIntersection
_CGRectIsEmpty
_CGRectMakeWithDictionaryRepresentation
_CGRectNull
_CGRectStandardize
_CGRectUnion
_CGRectZero
_CGSizeCreateDictionaryRepresentation
_CGSizeMakeWithDictionaryRepresentation
_CGSizeZero
_CMAudioDeviceClockCreate
_CMAudioFormatDescriptionCreate
_CMAudioFormatDescriptionCreateSummary
_CMAudioFormatDescriptionGetChannelLayout
_CMAudioFormatDescriptionGetMagicCookie
_CMAudioFormatDescriptionGetRichestDecodableFormat
_CMAudioFormatDescriptionGetStreamBasicDescription
_CMBaseObjectGetVTable
_CMBlockBufferAppendBufferReference
_CMBlockBufferCopyDataBytes
_CMBlockBufferCreateContiguous
_CMBlockBufferCreateEmpty
_CMBlockBufferGetDataLength
_CMBlockBufferGetDataPointer
_CMBufferQueueCreate
_CMBufferQueueDequeueAndRetain
_CMBufferQueueEnqueue
_CMBufferQueueGetBufferCount
_CMBufferQueueGetCallbacksForUnsortedSampleBuffers
_CMByteStreamCreateForBlockBuffer
_CMByteStreamGetCMBaseObject
_CMClockGetHostTimeClock
_CMClockGetTime
_CMClockMakeHostTimeFromSystemUnits
_CMCopyDictionaryOfAttachments
_CMFormatDescriptionEqual
_CMFormatDescriptionGetExtension
_CMFormatDescriptionGetExtensions
_CMFormatDescriptionGetMediaSubType
_CMFormatDescriptionGetMediaType
_CMFormatDescriptionGetTypeID
_CMGetAttachment
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
_CMIOGraphSetProperties
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
_CMIOStreamDeckJog
_CMIOStreamDeckPlay
_CMIOStreamDeckStop
_CMIOUnitRelease
_CMIOUnitUtilityCreateAudioCompressionOptionsDictionary
_CMIOUnitUtilityCreateAudioCompressionOptionsDictionary2
_CMMetadataCreateIdentifierForKeyAndKeySpace
_CMMetadataCreateKeyFromIdentifier
_CMMetadataCreateKeySpaceFromIdentifier
_CMMetadataDataTypeRegistryGetBaseDataTypeForConformingDataType
_CMMetadataFormatDescriptionCreateWithMetadataSpecifications
_CMNotificationCenterAddListener
_CMNotificationCenterGetDefaultLocalCenter
_CMNotificationCenterPostNotification
_CMNotificationCenterRemoveListener
_CMPropagateAttachments
_CMSampleBufferCallForEachSample
_CMSampleBufferCreate
_CMSampleBufferCreateCopy
_CMSampleBufferCreateForImageBuffer
_CMSampleBufferDataIsReady
_CMSampleBufferGetDataBuffer
_CMSampleBufferGetDuration
_CMSampleBufferGetFormatDescription
_CMSampleBufferGetImageBuffer
_CMSampleBufferGetNumSamples
_CMSampleBufferGetOutputDuration
_CMSampleBufferGetOutputPresentationTimeStamp
_CMSampleBufferGetPresentationTimeStamp
_CMSampleBufferGetSampleAttachmentsArray
_CMSampleBufferGetSampleSize
_CMSampleBufferGetSampleSizeArray
_CMSampleBufferGetSampleTimingInfo
_CMSampleBufferGetSampleTimingInfoArray
_CMSampleBufferGetTotalSampleSize
_CMSampleBufferHasDataFailed
_CMSampleBufferSetOutputPresentationTimeStamp
_CMSetAttachments
_CMSyncConvertTime
_CMTextFormatDescriptionGetDisplayFlags
_CMTimeAdd
_CMTimeCompare
_CMTimeConvertScale
_CMTimeCopyAsDictionary
_CMTimeCopyDescription
_CMTimeGetSeconds
_CMTimeMake
_CMTimeMakeFromDictionary
_CMTimeMakeWithSeconds
_CMTimeMaximum
_CMTimeMultiplyByFloat64
_CMTimeRangeContainsTime
_CMTimeRangeCopyAsDictionary
_CMTimeRangeCopyDescription
_CMTimeRangeEqual
_CMTimeRangeGetEnd
_CMTimeRangeGetIntersection
_CMTimeRangeMake
_CMTimeRangeMakeFromDictionary
_CMTimeSubtract
_CMTimebaseAddTimerDispatchSource
_CMTimebaseCreateReadOnlyTimebase
_CMTimebaseCreateWithMasterClock
_CMTimebaseGetRate
_CMTimebaseGetTime
_CMTimebaseRemoveTimerDispatchSource
_CMTimebaseSetRate
_CMTimebaseSetTime
_CMTimebaseSetTimerDispatchSourceNextFireTime
_CMVideoFormatDescriptionCreateForImageBuffer
_CMVideoFormatDescriptionGetDimensions
_CMVideoFormatDescriptionGetPresentationDimensions
_CVBufferRelease
_CVBufferRetain
_CVBufferSetAttachment
_CVBufferSetAttachments
_CVImageBufferGetColorSpace
_CVPixelBufferCreateWithBytes
_CVPixelBufferGetBaseAddress
_CVPixelBufferGetBytesPerRow
_CVPixelBufferGetDataSize
_CVPixelBufferGetHeight
_CVPixelBufferGetPixelFormatType
_CVPixelBufferGetTypeID
_CVPixelBufferGetWidth
_CVPixelBufferLockBaseAddress
_CVPixelBufferPoolCreate
_CVPixelBufferPoolCreatePixelBuffer
_CVPixelBufferPoolCreatePixelBufferWithAuxAttributes
_CVPixelBufferPoolRelease
_CVPixelBufferPoolRetain
_CVPixelBufferRelease
_CVPixelBufferUnlockBaseAddress
_CVPixelFormatDescriptionArrayCreateWithAllPixelFormatTypes
_CVPixelFormatDescriptionCreateWithPixelFormatType
_CVPixelFormatDescriptionGetDescriptionWithPixelFormatType
_FCSupport_CopyChapterTimeRangesForChapterGroup
_FPSupport_CreateDestinationPixelBufferAttributes
_FigAssetCollectionFactoryCreateCollectionWithURL
_FigAssetCollectionGetCMBaseObject
_FigAssetCopyAssetWithDownloadToken
_FigAssetCreateWithByteStream
_FigAssetCreateWithFormatReader
_FigAssetCreateWithMovieProxyData
_FigAssetCreateWithURL
_FigAssetGetCMBaseObject
_FigAssetImageGeneratorCreateFromAsset
_FigAssetImageGeneratorGetFigBaseObject
_FigAssetImageGeneratorGetGeneratorForURLRequest
_FigAssetReaderCreateWithURLAndFormatReader
_FigAssetReaderGetFigBaseObject
_FigAssetTrackGetCMBaseObject
_FigAssetWriterCreateWithURL
_FigAssetWriterGetFigBaseObject
_FigAtomicCompareAndSwap32
_FigAtomicIncrement32
_FigAudioCompressionOptionsGetPreset
_FigAudioFormatDescriptionGetRichestDecodableFormatAndChannelLayout
_FigBoxedMetadataAppendCFTypedValue
_FigBoxedMetadataAppendCGPoint
_FigBoxedMetadataAppendCGRect
_FigBoxedMetadataAppendCGSize
_FigBoxedMetadataAppendFloat32
_FigBoxedMetadataAppendSInt32
_FigBoxedMetadataCreateForConstruction
_FigBoxedMetadataEndConstruction
_FigBoxedMetadataGetBlockBuffer
_FigBoxedMetadataGetFormatDescription
_FigBoxedMetadataGetLocalIDOfItemAtIndex
_FigBoxedMetadataGetNumberOfItems
_FigBoxedMetadataGetTypeID
_FigBoxedMetadataGetValueOfItemAtIndexAsCGRect
_FigBoxedMetadataGetValueOfItemAtIndexAsFloat32
_FigBoxedMetadataGetValueOfItemAtIndexAsSInt32
_FigCFCreatePropertyListFromBundleIdentifierOnPlatform
_FigCFDateCreateFromString
_FigCFEqual
_FigCFHTTPRetainGlobalSmallCustomURLProvider
_FigCFURLCreateCacheKey
_FigCFURLIsLocalResource
_FigCPEInitializeWithOptions
_FigCPEIsSupportedFormatDescription
_FigCPEProtectorCreateForScheme
_FigCPEUninitialize
_FigCopySetOfFormatReaderSupportedFileExtensions
_FigCopySetOfFormatReaderSupportedMIMETypes
_FigCopySetOfStreamingSupportedMIMETypes
_FigCoreTextSubtitleRendererCreate
_FigCreate3x2MatrixArrayFromCGAffineTransform
_FigCreate3x3MatrixArrayFromCGAffineTransform
_FigCreateBlockBufferWithCFDataNoCopy
_FigDiskCacheRepositoryCopyDefaultParentURLForCurrentTask
_FigDispatchOnceInitWithinObject
_FigFileTypeDoesSupportExternalSampleReferences
_FigFormatReaderGetFigBaseObject
_FigGetBaseByteStreamProvider
_FigGetCFPreferenceNumberWithDefault
_FigGetCGAffineTransformFrom3x2MatrixArray
_FigGetCGAffineTransformFrom3x3MatrixArray
_FigGetUpTimeNanoseconds
_FigManifoldCreateForICY
_FigManifoldCreateForMPEG2
_FigManifoldCreateForMovieFragmentStream
_FigManifoldCreateForWebVTT
_FigManifoldGetFigBaseObject
_FigMediaValidatorValidateFormatDescription
_FigMediaValidatorValidateRFC4281ExtendedMIMEType
_FigMetadataCopyMovieCommonMetadata
_FigMetadataCopyTrackCommonMetadata
_FigMetadataFormatDescriptionGetIdentifierForLocalID
_FigMetadataFormatDescriptionGetLocalIDForMetadataIdentifyingFactors
_FigMetadataGetCommonKey
_FigMetadataGetCoreMediaDataType
_FigMetadataGetDataTypeWithNamespaceForCoreMediaDataType
_FigMetadataReaderCreateForBoxedMetadata
_FigMetadataReaderCreateForTimedID3
_FigMetadataReaderCreateWithSampleBufferForIcy
_FigMetadataReaderGetFigBaseObject
_FigMetadataRewriterSetValues
_FigMetadataStringKeyToOSTypeKeyWithKeySpace
_FigMutableCompositionCreate
_FigMutableMovieCreateEmpty
_FigMutableMovieCreateFromData
_FigMutableMovieCreateFromFormatReader
_FigMutableMovieCreateWithURL
_FigMutableMovieGetFigBaseObject
_FigPlaybackItemGetFigBaseObject
_FigPlaybackItemGetItemForURLRequest
_FigPlaybackItemLogCreateW3CLogData
_FigPlayerAsyncCreate
_FigPlayerCreateStreamingKeyRequest
_FigPlayerFileCreate
_FigPlayerGetFigBaseObject
_FigPlayerStreamCreate
_FigReadOnlyTimebaseSetTargetTimebase
_FigRemakerCanFileTypeSupportFormatDescription
_FigRemakerCanFileTypeSupportMediaType
_FigRemakerCreateBaseWithURLs
_FigRemakerGetFigBaseObject
_FigRemakerIsFormatDescriptionProtected
_FigSampleBufferAudioRendererCreateWithOptions
_FigSampleBufferAudioRendererGetFigBaseObject
_FigSampleBufferRenderSynchronizerCreateWithOptions
_FigSampleBufferSetDecryptor
_FigSampleCursorGetFigBaseObject
_FigSampleGeneratorCreateForFormatReaderUsingByteStreams
_FigSampleGeneratorCreateForFormatReaderUsingScheduledIO
_FigShared_CopyCacheLastModifiedDate
_FigShared_CopyDiskCacheCheckedInIDs
_FigShared_CopyDiskCacheParams
_FigShared_DeleteFromDiskCache
_FigShared_GetCacheFileSize
_FigShared_SetDiskCacheParams
_FigSignalErrorAt
_FigSimpleMutexCreate
_FigSimpleMutexDestroy
_FigSimpleMutexLock
_FigSimpleMutexUnlock
_FigStreamAssetImageGeneratorCreateFromAsset
_FigSubtitleRendererDrawSubtitleText
_FigSubtitleRendererLayout
_FigSubtitleRendererNotificationBarrier
_FigTrackReaderGetFigBaseObject
_FigVideoCompositorCreateCustom
_FigVideoCompositorGetFigBaseObject
_FigVideoCompositorUtilityCopyRenderPixelBufferDimensionsAndCleanAperture
_FigVideoQueueCreateLocal
_FigVideoQueueGetCMBaseObject
_FigVisualContextCopyImageForTime2
_FigVisualContextCreateBasic
_FigVisualContextGetEarliestSequentialImageTimeAfterTime
_FigVisualContextInvalidate
_FigVisualContextIsNewImageAvailable
_FigVisualContextSetImageAvailableSequentialCallback
_NSClassFromString
_NSCocoaErrorDomain
_NSFilePathErrorKey
_NSGenericException
_NSInternalInconsistencyException
_NSInvalidArgumentException
_NSKeyValueChangeNewKey
_NSKeyValueChangeOldKey
_NSLocaleIdentifier
_NSLocaleLanguageCode
_NSLocalizedDescriptionKey
_NSLocalizedFailureReasonErrorKey
_NSLocalizedRecoverySuggestionErrorKey
_NSLog
_NSOSStatusErrorDomain
_NSPOSIXErrorDomain
_NSRangeException
_NSStringFromClass
_NSStringFromSelector
_NSURLErrorDomain
_NSURLErrorKey
_NSUnderlyingErrorKey
_OBJC_CLASS_$_CAAnimationGroup
_OBJC_CLASS_$_CABasicAnimation
_OBJC_CLASS_$_CAKeyframeAnimation
_OBJC_CLASS_$_CALayer
_OBJC_CLASS_$_CAPropertyAnimation
_OBJC_CLASS_$_CATransaction
_OBJC_CLASS_$_FigSubtitleCALayer
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSCoder
_OBJC_CLASS_$_NSCondition
_OBJC_CLASS_$_NSCountedSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSEnumerator
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSHTTPURLResponse
_OBJC_CLASS_$_NSHashTable
_OBJC_CLASS_$_NSInvocation
_OBJC_CLASS_$_NSJSONSerialization
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSLock
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSMutableURLRequest
_OBJC_CLASS_$_NSNotification
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSNumberFormatter
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSURLAuthenticationChallenge
_OBJC_CLASS_$_NSURLCredential
_OBJC_CLASS_$_NSValue
_OBJC_EHTYPE_$_NSException
_OBJC_EHTYPE_id
_OBJC_METACLASS_$_CALayer
_OBJC_METACLASS_$_NSCondition
_OBJC_METACLASS_$_NSEnumerator
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSURLAuthenticationChallenge
_OBJC_METACLASS_$_NSValue
_OSAtomicAdd32
_OSAtomicCompareAndSwap32
_OSAtomicCompareAndSwap32Barrier
_OSAtomicCompareAndSwap64
_OSSpinLockLock
_OSSpinLockUnlock
_SecCodeMapMemory
_SecRequirementCreateWithData
_SecStaticCodeCheckValidity
_SecStaticCodeCreateWithPath
_UTTypeConformsTo
_UTTypeCopyDescription
_UTTypeCopyPreferredTagWithClass
_UTTypeCreateAllIdentifiersForTag
_UTTypeCreatePreferredIdentifierForTag
_VTBuildPixelBufferPools
_VTCompressionSessionCompleteFrames
_VTCompressionSessionCreate
_VTCompressionSessionEncodeFrame
_VTCompressionSessionInvalidate
_VTCompressionSessionPrepareToEncodeFrames
_VTCopyVideoEncoderList
_VTImageRotationSessionCreate
_VTImageRotationSessionInvalidate
_VTImageRotationSessionSetProperty
_VTImageRotationSessionTransferImage
_VTPixelBufferAttributesMediatorAddLayer
_VTPixelBufferAttributesMediatorCopyProperty
_VTPixelBufferAttributesMediatorCreate
_VTPixelBufferAttributesMediatorNotificationBarrier
_VTPixelBufferAttributesMediatorRemoveLayer
_VTPixelBufferAttributesMediatorRemoveRequestedPixelBufferAttributesForKey
_VTPixelBufferAttributesMediatorSetProperty
_VTPixelBufferAttributesMediatorSetRequestedPixelBufferAttributesForKey
_VTPixelBufferConformerCopyConformedPixelBuffer
_VTPixelBufferConformerCreateWithAttributes
_VTPixelBufferConformerGetAttributes
_VTPixelTransferSessionCreate
_VTPixelTransferSessionInvalidate
_VTPixelTransferSessionTransferImage
_VTSessionCopyProperty
_VTSessionCopySupportedPropertyDictionary
_VTSessionSetProperties
__Block_object_assign
__Block_object_dispose
__CFExecutableLinkedOnOrAfter
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___assert_rtn
___objc_personality_v0
___snprintf_chk
___sprintf_chk
___stack_chk_fail
___stack_chk_guard
___strncpy_chk
__dispatch_main_q
__dispatch_queue_attr_concurrent
__dispatch_source_type_timer
__objc_empty_cache
_atan2
_calloc
_ceil
_class_getClassMethod
_csops
_dispatch_async
_dispatch_barrier_async
_dispatch_barrier_sync
_dispatch_get_context
_dispatch_get_current_queue
_dispatch_get_global_queue
_dispatch_group_async
_dispatch_group_create
_dispatch_group_enter
_dispatch_group_leave
_dispatch_group_notify
_dispatch_group_wait
_dispatch_once
_dispatch_queue_create
_dispatch_queue_set_width
_dispatch_release
_dispatch_resume
_dispatch_retain
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_set_context
_dispatch_set_target_queue
_dispatch_source_cancel
_dispatch_source_create
_dispatch_source_set_event_handler
_dispatch_source_set_timer
_dispatch_sync
_dispatch_time
_dyld_get_program_sdk_version
_fig_note_initialize_logging
_fmax
_fmin
_fmod
_free
_getpid
_kCATransactionDisableActions
_kCFAllocatorDefault
_kCFAllocatorNull
_kCFBooleanFalse
_kCFBooleanTrue
_kCFErrorDebugDescriptionKey
_kCFNull
_kCFRunLoopCommonModes
_kCFTypeArrayCallBacks
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kCGColorSpaceGenericRGB
_kCGImagePropertyExifDictionary
_kCMByteStreamProperty_URL
_kCMFormatDescriptionExtension_BytesPerRow
_kCMFormatDescriptionExtension_SampleDescriptionExtensionAtoms
_kCMIOFileWritingOptionsKey_AudioEnabled
_kCMIOFileWritingOptionsKey_AudioFileType
_kCMIOFileWritingOptionsKey_ClosedCaptionsEnabled
_kCMIOFileWritingOptionsKey_FileCompletionCallback
_kCMIOFileWritingOptionsKey_FragmentCheckpointInterval
_kCMIOFileWritingOptionsKey_MaximumFileSize
_kCMIOFileWritingOptionsKey_MaximumRecordDuration
_kCMIOFileWritingOptionsKey_MovieMetadataSpaceSizesToReserve
_kCMIOFileWritingOptionsKey_OutputFilePath
_kCMIOFileWritingOptionsKey_TimecodeEnabled
_kCMIOFileWritingOptionsKey_VideoEnabled
_kCMIOFileWritingOptionsKey_VideoMatrix
_kCMIOSampleBufferAttachmentKey_ClientSequenceID
_kCMIOSampleBufferAttachmentKey_NoDataMarker
_kCMIOSampleBufferAttachmentKey_SourceAudioFormatDescription
_kCMMetadataBaseDataType_BMP
_kCMMetadataBaseDataType_DimensionsF32
_kCMMetadataBaseDataType_Float32
_kCMMetadataBaseDataType_Float64
_kCMMetadataBaseDataType_GIF
_kCMMetadataBaseDataType_JPEG
_kCMMetadataBaseDataType_PNG
_kCMMetadataBaseDataType_PointF32
_kCMMetadataBaseDataType_RawData
_kCMMetadataBaseDataType_RectF32
_kCMMetadataBaseDataType_SInt16
_kCMMetadataBaseDataType_SInt32
_kCMMetadataBaseDataType_SInt64
_kCMMetadataBaseDataType_SInt8
_kCMMetadataBaseDataType_UInt32
_kCMMetadataBaseDataType_UTF16
_kCMMetadataBaseDataType_UTF8
_kCMMetadataDataType_QuickTimeMetadataDetectedFace
_kCMMetadataFormatDescriptionMetadataSpecificationKey_DataType
_kCMMetadataFormatDescriptionMetadataSpecificationKey_ExtendedLanguageTag
_kCMMetadataFormatDescriptionMetadataSpecificationKey_Identifier
_kCMSampleAttachmentKey_DependsOnOthers
_kCMSampleAttachmentKey_HasRedundantCoding
_kCMSampleAttachmentKey_IsDependedOnByOthers
_kCMSampleBufferAttachmentKey_SampleReferenceURL
_kCMSampleBufferNotificationParameter_OSStatus
_kCMSampleBufferNotification_DataBecameReady
_kCMSampleBufferNotification_DataFailed
_kCMTextMarkupAttribute_BackgroundColorARGB
_kCMTextMarkupAttribute_ForegroundColorARGB
_kCMTextMarkupKey_TextSelector
_kCMTextMarkupTextSelector_DefaultSelector
_kCMTimeIndefinite
_kCMTimeInvalid
_kCMTimeNegativeInfinity
_kCMTimePositiveInfinity
_kCMTimeRangeInvalid
_kCMTimeZero
_kCMTimebaseNotification_EffectiveRateChanged
_kCMTimebaseNotification_TimeJumped
_kCMTimingInfoInvalid
_kCVImageBufferCleanApertureHeightKey
_kCVImageBufferCleanApertureHorizontalOffsetKey
_kCVImageBufferCleanApertureKey
_kCVImageBufferCleanApertureVerticalOffsetKey
_kCVImageBufferCleanApertureWidthKey
_kCVImageBufferColorPrimariesKey
_kCVImageBufferFieldCountKey
_kCVImageBufferPixelAspectRatioHorizontalSpacingKey
_kCVImageBufferPixelAspectRatioKey
_kCVImageBufferPixelAspectRatioVerticalSpacingKey
_kCVImageBufferTransferFunctionKey
_kCVImageBufferYCbCrMatrixKey
_kCVPixelBufferBytesPerRowAlignmentKey
_kCVPixelBufferCGBitmapContextCompatibilityKey
_kCVPixelBufferCGImageCompatibilityKey
_kCVPixelBufferCacheModeKey
_kCVPixelBufferCustomMemoryLayoutCallbacksKey
_kCVPixelBufferExactBytesPerRowKey
_kCVPixelBufferExtendedPixelsBottomKey
_kCVPixelBufferExtendedPixelsLeftKey
_kCVPixelBufferExtendedPixelsRightKey
_kCVPixelBufferExtendedPixelsTopKey
_kCVPixelBufferHeightKey
_kCVPixelBufferIOSurfacePropertiesKey
_kCVPixelBufferMemoryAllocatorKey
_kCVPixelBufferOpenGLCompatibilityKey
_kCVPixelBufferPixelFormatDescriptionKey
_kCVPixelBufferPixelFormatTypeKey
_kCVPixelBufferPlaneAlignmentKey
_kCVPixelBufferQDCompatibilityKey
_kCVPixelBufferWidthKey
_kCVPixelFormatContainsYCbCr
_kFigAccessLogKey_BytesTransferred
_kFigAccessLogKey_CurrentObservedBitrate
_kFigAccessLogKey_DownloadOverdue
_kFigAccessLogKey_DownloadedDuration
_kFigAccessLogKey_DroppedVideoFrames
_kFigAccessLogKey_DurationWatched
_kFigAccessLogKey_EntryReasonCode
_kFigAccessLogKey_IndicatedBitrate
_kFigAccessLogKey_MediaRequests
_kFigAccessLogKey_MediaRequestsWWAN
_kFigAccessLogKey_ObservedBitrate
_kFigAccessLogKey_ObservedBitrateStandardDeviation
_kFigAccessLogKey_ObservedMaxBitrate
_kFigAccessLogKey_ObservedMinBitrate
_kFigAccessLogKey_PlaybackSessionID
_kFigAccessLogKey_PlaybackStartDate
_kFigAccessLogKey_PlaybackStartOffset
_kFigAccessLogKey_PlaybackType
_kFigAccessLogKey_ServerAddress
_kFigAccessLogKey_ServerAddressChanges
_kFigAccessLogKey_Stalls
_kFigAccessLogKey_StartupTime
_kFigAccessLogKey_SwitchBitrate
_kFigAccessLogKey_TransferDuration
_kFigAccessLogKey_URI
_kFigAssetClientHandledURLRequestNotificationKey_RequestDictionary
_kFigAssetCollectionNotification_BatchPropertyLoadComplete
_kFigAssetCollectionProperty_AssetCount
_kFigAssetCollectionProperty_CollectionType
_kFigAssetCollectionType_AVCHD
_kFigAssetContentProtectionOptionsKey_ProtectedContentSupportStorageURL
_kFigAssetContentProtectionOptionsKey_PurchaseBundle
_kFigAssetImageGeneratorCreateStreamingKeyRequestOptions_RemoteContext
_kFigAssetImageGeneratorCreateStreamingKeyResponseKey_StreamingKeyRequest
_kFigAssetImageGeneratorImageOptionsKey_ApertureMode
_kFigAssetImageGeneratorImageOptionsKey_ApplyVideoTrackMatrix
_kFigAssetImageGeneratorImageOptionsKey_MaxHeight
_kFigAssetImageGeneratorImageOptionsKey_MaxWidth
_kFigAssetImageGeneratorImageOptionsKey_RequestID
_kFigAssetImageGeneratorImageOptionsKey_TimeFlags
_kFigAssetImageGeneratorImageOptionsKey_TimeToleranceAfter
_kFigAssetImageGeneratorImageOptionsKey_TimeToleranceBefore
_kFigAssetImageGeneratorImageOptionsKey_TimeoutInterval
_kFigAssetImageGeneratorNotification_DidGenerateCGImage
_kFigAssetImageGeneratorNotification_FailedToGenerateCGImage
_kFigAssetImageGeneratorNotification_StreamingKeyRequestReady
_kFigAssetImageGeneratorNotification_URLResponseRequired
_kFigAssetImageGeneratorParameter_CGImage
_kFigAssetImageGeneratorParameter_ImageTime
_kFigAssetImageGeneratorParameter_RequestID
_kFigAssetImageGeneratorParameter_Result
_kFigAssetImageGeneratorProperty_ResponseForClientHandledURLRequest
_kFigAssetNetworkCacheBackingValue_Disk
_kFigAssetNetworkCacheBackingValue_NonPurgeableMemory
_kFigAssetNotification_BatchPropertyLoadComplete
_kFigAssetNotification_ChapterDataFetchFailed
_kFigAssetNotification_ChapterDataFetched
_kFigAssetNotification_ClientHandledURLRequest
_kFigAssetNotification_DownloadToDestinationFailed
_kFigAssetNotification_DownloadToDestinationSucceeded
_kFigAssetNotification_PropertyFailedToLoad
_kFigAssetNotification_PropertyLoaded
_kFigAssetNotification_PropertyRevised
_kFigAssetOptionKey_AllowedHTTPProtocolTypes
_kFigAssetOptionKey_AlternativeConfigurationOptions
_kFigAssetOptionKey_BoundNetworkInterfaceName
_kFigAssetOptionKey_ClientBundleIdentifier
_kFigAssetOptionKey_ClientHandlesURLRequest
_kFigAssetOptionKey_ContentProtectionOptions
_kFigAssetOptionKey_DeclaredAssetType
_kFigAssetOptionKey_DisableNetworkLargeDownload
_kFigAssetOptionKey_DisableNetworkProbeRequest
_kFigAssetOptionKey_DownloadDestinationURL
_kFigAssetOptionKey_DownloadIsLowPriority
_kFigAssetOptionKey_FormatReaderInstantiationOptions
_kFigAssetOptionKey_HTTPHeaders
_kFigAssetOptionKey_InheritURIQueryComponentFromReferencingURI
_kFigAssetOptionKey_InhibitReferenceMovieResolution
_kFigAssetOptionKey_MakeReadAheadAssertionWhenCreatingByteStream
_kFigAssetOptionKey_MovieFormatReaderOnly
_kFigAssetOptionKey_MovieProxyName
_kFigAssetOptionKey_NetworkCacheBacking
_kFigAssetOptionKey_NetworkCacheNonPurgeableMemoryLimit
_kFigAssetOptionKey_NetworkCacheURL
_kFigAssetOptionKey_NetworkCacheUsePathAsKey
_kFigAssetOptionKey_NetworkCacheUseURLWithoutQueryStringAsKey
_kFigAssetOptionKey_NoPersistentCache
_kFigAssetOptionKey_OutOfBandAlternateTracks
_kFigAssetOptionKey_PreferPreciseDurationAndTiming
_kFigAssetOptionKey_PreloadDurationWhenNextItem
_kFigAssetOptionKey_PrepareForExclusivePlaybackMode
_kFigAssetOptionKey_PrepareForIncrementalFragments
_kFigAssetOptionKey_ReadEntireMoovAtom
_kFigAssetOptionKey_SupportAliasDataReferences
_kFigAssetOptionKey_UseAWDL
_kFigAssetPayloadKey_BatchID
_kFigAssetPayloadKey_ChapterCount
_kFigAssetPayloadKey_ChapterData
_kFigAssetPayloadKey_ChapterGroupIndex
_kFigAssetPayloadKey_ChapterIndex
_kFigAssetPayloadKey_Property
_kFigAssetPayloadKey_Result
_kFigAssetProperty_AlternateTrackGroups
_kFigAssetProperty_AssetType
_kFigAssetProperty_AvailableMetadataFormats
_kFigAssetProperty_ByteStreamProvider
_kFigAssetProperty_CPEProtector
_kFigAssetProperty_CameraRollValidation
_kFigAssetProperty_ChapterGroupInfo
_kFigAssetProperty_CommonMetadata
_kFigAssetProperty_ContainsFragments
_kFigAssetProperty_ContentByteStream
_kFigAssetProperty_CouldContainFragments
_kFigAssetProperty_CreationURL
_kFigAssetProperty_CustomURLProvider
_kFigAssetProperty_DownloadToken
_kFigAssetProperty_FormatReader
_kFigAssetProperty_HLSMetadata
_kFigAssetProperty_ID3Metadata
_kFigAssetProperty_ID3MetadataWithBackwardCompatibility
_kFigAssetProperty_ISOUserData
_kFigAssetProperty_IncrementalFragmentParseInterval
_kFigAssetProperty_MakeReadAheadAssertionWhenCreatingByteStream
_kFigAssetProperty_MatchingContainerLabelType
_kFigAssetProperty_MediaPlaybackValidation
_kFigAssetProperty_MovieProxy
_kFigAssetProperty_ProtectedStatus
_kFigAssetProperty_ProvidesPreciseDurationAndTiming
_kFigAssetProperty_QuickTimeMetadata
_kFigAssetProperty_QuickTimeUserData
_kFigAssetProperty_ResolvedURL
_kFigAssetProperty_ResponseForClientHandledURLRequest
_kFigAssetProperty_SHA1Digest
_kFigAssetProperty_TrackReferences
_kFigAssetProperty_Tracks
_kFigAssetProperty_iTunesMetadata
_kFigAssetReaderAudioProcessingOption_TimePitchAlgorithm
_kFigAssetReaderCreationOption_PermitNonLocalURLs
_kFigAssetReaderExtractionOption_CopyDataBuffers
_kFigAssetReaderExtractionOption_MatrixHandling
_kFigAssetReaderExtractionOption_TrimSampleBufferDurations
_kFigAssetReaderMatrixHandling_ApplyRotation
_kFigAssetReaderMatrixHandling_PreserveMatrix
_kFigAssetReaderNotificationParameter_ExtractionID
_kFigAssetReaderNotification_DecodeError
_kFigAssetReaderNotification_Failed
_kFigAssetReaderNotification_SampleBufferNowAvailable
_kFigAssetReaderSourceTrackArrayKey_AudioProcessingTap
_kFigAssetReaderSourceTrackArrayKey_AudioVolumeCurve
_kFigAssetReaderSourceTrackArrayKey_TimePitchAlgorithm
_kFigAssetReaderSourceTrackArrayKey_TrackID
_kFigAssetReaderTimePitchAlgorithm_Spectral
_kFigAssetReaderTimePitchAlgorithm_TimeDomain
_kFigAssetReaderTimePitchAlgorithm_Varispeed
_kFigAssetTrackNotification_BatchPropertyLoadComplete
_kFigAssetTrackNotification_PropertyRevised
_kFigAssetTrackProperty_EditSegmentData
_kFigAssetTrackProperty_ISOUserData
_kFigAssetTrackProperty_MediaPlaybackValidation
_kFigAssetTrackProperty_ProtectedStatus
_kFigAssetTrackProperty_QuickTimeMetadata
_kFigAssetTrackProperty_QuickTimeUserData
_kFigAssetTrackProperty_TrackReferences
_kFigAssetType_File
_kFigAssetType_Streaming
_kFigAssetWriterAudioTrackProcessingOption_SourceAudioFormatDescriptionHint
_kFigAssetWriterNotificationParameter_FurtherPassesRequested
_kFigAssetWriterNotificationParameter_OSStatus
_kFigAssetWriterNotificationParameter_PassTimeRanges
_kFigAssetWriterNotificationParameter_WriterTrackID
_kFigAssetWriterNotification_Completed
_kFigAssetWriterNotification_Failed
_kFigAssetWriterNotification_PassFinished
_kFigAssetWriterNotification_TrackQueueNowBelowLowWaterLevel
_kFigAssetWriterOption_FastStart
_kFigAssetWriterProperty_Metadata
_kFigAssetWriterProperty_RealTime
_kFigAssetWriterTrackProperty_EncoderSupportsMultiPass
_kFigAssetWriterTrackProperty_Metadata
_kFigAssetWriterTrackProperty_PixelBufferPool
_kFigAudioCompressionOption_AudioConverterEncodeBitRate
_kFigAudioCompressionOption_AudioConverterSampleRateConverterComplexity
_kFigAudioCompressionOption_BitRateControlMode
_kFigAudioCompressionOption_QualityForVBR
_kFigAudioRenderPipelineAudioCurve_Volume
_kFigByteStreamProperty_FileType
_kFigCPEOption_InitializeForHDCP
_kFigCPEOption_InitializeForVideoPlayback
_kFigCPEOption_StorageURL
_kFigCPEProtectionScheme_FairPlay
_kFigCPEProtectionScheme_PKD
_kFigCPEProtectorApplicationAuthorizationChallengeProviderNone
_kFigCPEProtectorCryptorCreationOption_FormatDescription
_kFigCPEProtectorProperty_ApplicationAuthorizationChallengeProvider
_kFigCPEProtectorProperty_ExternalProtectionRequiredForPlayback
_kFigCPEProtectorProperty_IsRental
_kFigCPEProtectorProperty_IsRentalPlaybackStarted
_kFigCPEProtectorProperty_RentalPeriodEndDate
_kFigCPEProtectorProperty_RentalPeriodStartDate
_kFigCPEProtectorProperty_RentalPlaybackPeriodEndDate
_kFigCPEProtectorProperty_RentalPlaybackPeriodStartDate
_kFigChapterArtworkDataKey_ImageData
_kFigChapterGroupKey_Language
_kFigChapterGroupKey_PerChapterInfo
_kFigChapterGroupKey_Type
_kFigChapterKey_Duration
_kFigChapterKey_ImageMediaSubType
_kFigChapterKey_MetadataItems
_kFigChapterKey_Time
_kFigChapterTitleDataKey_HREF
_kFigChapterTitleDataKey_Text
_kFigCustomURLProviderResponseKey_ClientInfo
_kFigCustomURLProviderResponseKey_ContentRenewalDate
_kFigCustomURLProviderResponseKey_ContentSize
_kFigCustomURLProviderResponseKey_Data
_kFigCustomURLProviderResponseKey_Headers
_kFigCustomURLProviderResponseKey_Incomplete
_kFigCustomURLProviderResponseKey_IsRenewalRequest
_kFigCustomURLProviderResponseKey_NoCache
_kFigCustomURLProviderResponseKey_RequestByteOffset
_kFigCustomURLProviderResponseKey_RequestID
_kFigCustomURLProviderResponseKey_RequestSize
_kFigCustomURLProviderResponseKey_SerializedNSAuthenticationChallenge
_kFigCustomURLProviderResponseKey_SerializedNSURLCredential
_kFigCustomURLProviderResponseKey_StatusCode
_kFigCustomURLProviderResponseKey_URL
_kFigCustomURLProviderResponseKey_UniversalTypeIndentifier
_kFigCustomURLProviderResponseKey_WasCancelled
_kFigErrorLogKey_Date
_kFigErrorLogKey_ErrorComment
_kFigErrorLogKey_ErrorDomain
_kFigErrorLogKey_ErrorStatusCode
_kFigErrorLogKey_PlaybackSessionID
_kFigErrorLogKey_ServerAddress
_kFigErrorLogKey_URI
_kFigFormatReaderInstantiationOption_PrepareForCopying
_kFigFormatReaderProperty_AlternateGroupArray
_kFigFormatReaderProperty_ContainsFragments
_kFigFormatReaderProperty_CouldContainFragments
_kFigFormatReaderProperty_Duration
_kFigFormatReaderProperty_EstimatedDuration
_kFigFormatReaderProperty_Lyrics
_kFigFormatReaderProperty_MetadataReaders
_kFigFormatReaderProperty_MovieMatrix
_kFigFormatReaderProperty_PreferredRate
_kFigFormatReaderProperty_PreferredVolume
_kFigFormatReaderProperty_SampleCursorTimeAccuracyIsExact
_kFigFormatReaderProperty_Timescale
_kFigFormatReaderProperty_TrackReferenceDictionary
_kFigFormatReaderProperty_iTunesSoundCheckVolumeNormalization
_kFigFormatWriterOption_FileFormat
_kFigFormatWriterOption_FileFormat_3GPFamily
_kFigFormatWriterOption_FileFormat_AIFFAudioFile
_kFigFormatWriterOption_FileFormat_AMRAudioFile
_kFigFormatWriterOption_FileFormat_CAFAudioFile
_kFigFormatWriterOption_FileFormat_MP4Family
_kFigFormatWriterOption_FileFormat_QuickTimeMovie
_kFigFormatWriterOption_FileFormat_WAVEAudioFile
_kFigFormatWriterOption_FileFormat_iTunesAudioFamily
_kFigFormatWriterOption_FileFormat_iTunesVideoFamily
_kFigFormatWriterProperty_MovieFragmentCheckpointInterval
_kFigFormatWriterProperty_MovieMatrix
_kFigFormatWriterProperty_MovieTimeScale
_kFigFormatWriterProperty_PreferredVolume
_kFigFormatWriterProperty_TrackReference
_kFigFormatWriterTrackProperty_AlternateGroupID
_kFigFormatWriterTrackProperty_CleanApertureDimensions
_kFigFormatWriterTrackProperty_EnableTrack
_kFigFormatWriterTrackProperty_EncodedPixelsDimensions
_kFigFormatWriterTrackProperty_ExcludeFromAutoSelection
_kFigFormatWriterTrackProperty_ExtendedLanguageTag
_kFigFormatWriterTrackProperty_InterleavingAdvance
_kFigFormatWriterTrackProperty_LanguageTag
_kFigFormatWriterTrackProperty_MediaTimeScale
_kFigFormatWriterTrackProperty_PreferredChunkAlignment
_kFigFormatWriterTrackProperty_PreferredChunkDuration
_kFigFormatWriterTrackProperty_PreferredChunkSize
_kFigFormatWriterTrackProperty_ProductionApertureDimensions
_kFigFormatWriterTrackProperty_SampleReferenceBaseURL
_kFigFormatWriterTrackProperty_TrackDimensions
_kFigFormatWriterTrackProperty_TrackMatrix
_kFigFormatWriterTrackProperty_TrackVolume
_kFigManifoldProperty_Asset
_kFigManifoldProperty_UnconsumedData
_kFigMetadataCommonKey_Artwork
_kFigMetadataCommonKey_Title
_kFigMetadataCommonKeyspace
_kFigMetadataDataTypeNamespace_CoreMedia
_kFigMetadataDataTypeNamespace_UTI
_kFigMetadataFormatDescriptionMetadataSpecificationKey_DependentSpecifications
_kFigMetadataFormat_QuickTimeMetadata
_kFigMetadataFormat_QuickTimeUserData
_kFigMetadataIdentifier_QuickTimeMetadataDetectedFace_Bounds
_kFigMetadataIdentifier_QuickTimeMetadataDetectedFace_FaceID
_kFigMetadataIdentifier_QuickTimeMetadataDetectedFace_RollAngle
_kFigMetadataIdentifier_QuickTimeMetadataDetectedFace_YawAngle
_kFigMetadataItemProperty_ConformingDataTypes
_kFigMetadataItemProperty_DataLength
_kFigMetadataItemProperty_DataType
_kFigMetadataItemProperty_DataTypeNamespace
_kFigMetadataItemProperty_ExtendedLanguageTag
_kFigMetadataItemProperty_HREF
_kFigMetadataItemProperty_Key
_kFigMetadataItemProperty_Keyspace
_kFigMetadataItemProperty_Locale
_kFigMetadataItemProperty_Timestamp
_kFigMetadataItemProperty_Value
_kFigMetadataProperty_Format
_kFigMetadataProperty_Items
_kFigMetadataReaderProperty_Format
_kFigMutableCompositionTrackProperty_AlternateGroupID
_kFigMutableMovieProperty_AvailableMetadataFormats
_kFigMutableMovieProperty_DefaultMediaDataStorageURL
_kFigMutableMovieProperty_Metadata
_kFigMutableMovieProperty_Modified
_kFigMutableMovieProperty_MovieDuration
_kFigMutableMovieProperty_MovieMatrix
_kFigMutableMovieProperty_PreferredRate
_kFigMutableMovieProperty_PreferredVolume
_kFigMutableMovieProperty_Tracks
_kFigMutableMovieTrackProperty_AlternateGroupID
_kFigMutableMovieTrackProperty_AvailableMetadataFormats
_kFigMutableMovieTrackProperty_CleanApertureDimensions
_kFigMutableMovieTrackProperty_Dimensions
_kFigMutableMovieTrackProperty_EncodedPixelsDimensions
_kFigMutableMovieTrackProperty_ExtendedLanguageTag
_kFigMutableMovieTrackProperty_IsEnabled
_kFigMutableMovieTrackProperty_LanguageCode
_kFigMutableMovieTrackProperty_Layer
_kFigMutableMovieTrackProperty_MediaDataStorageURL
_kFigMutableMovieTrackProperty_Metadata
_kFigMutableMovieTrackProperty_Modified
_kFigMutableMovieTrackProperty_ProductionApertureDimensions
_kFigMutableMovieTrackProperty_SampleReferenceBaseURL
_kFigMutableMovieTrackProperty_TrackMatrix
_kFigMutableMovieTrackProperty_Volume
_kFigPlaybackItemAudioCurve_Volume
_kFigPlaybackItemLegibleOutputKey_AdvanceInterval
_kFigPlaybackItemLegibleOutputKey_SubTypesForNativeSamples
_kFigPlaybackItemLegibleOutputKey_TextStylingResolution
_kFigPlaybackItemLegibleOutputTextStylingResolution_Default
_kFigPlaybackItemLegibleOutputTextStylingResolution_SourceAndRulesOnly
_kFigPlaybackItemLikelyToKeepUpTrigger_Default
_kFigPlaybackItemLikelyToKeepUpTrigger_Live
_kFigPlaybackItemMetadataOutputKey_AdvanceInterval
_kFigPlaybackItemNotification_AlternateStreamChanged
_kFigPlaybackItemNotification_CachePrimingCompleted
_kFigPlaybackItemNotification_ChosenTracksChanged
_kFigPlaybackItemNotification_DidPlayToTheEnd
_kFigPlaybackItemNotification_DimensionsChanged
_kFigPlaybackItemNotification_DisplayNonForcedSubtitlesChanged
_kFigPlaybackItemNotification_DurationChanged
_kFigPlaybackItemNotification_FailedToBecomeReadyForInspection
_kFigPlaybackItemNotification_FailedToBecomeReadyForPlayback
_kFigPlaybackItemNotification_FailedToPlayToEnd
_kFigPlaybackItemNotification_FirstVideoFrameEnqueued
_kFigPlaybackItemNotification_ItemBecameCurrent
_kFigPlaybackItemNotification_ItemStoppedBeingCurrent
_kFigPlaybackItemNotification_ItemWasRemovedFromPlayQueue
_kFigPlaybackItemNotification_LegibleOutputChanged
_kFigPlaybackItemNotification_LegibleOutputWasFlushed
_kFigPlaybackItemNotification_MetadataOutputChanged
_kFigPlaybackItemNotification_MetadataOutputWasFlushed
_kFigPlaybackItemNotification_NewAccessLogEntry
_kFigPlaybackItemNotification_NewErrorLogEntry
_kFigPlaybackItemNotification_PlayableRangeChanged
_kFigPlaybackItemNotification_PlaybackStalled
_kFigPlaybackItemNotification_ReadyForInspection
_kFigPlaybackItemNotification_ReadyForPlayback
_kFigPlaybackItemNotification_RequiresExternalProtectionChanged
_kFigPlaybackItemNotification_SeekDidComplete
_kFigPlaybackItemNotification_SeekWasCanceled
_kFigPlaybackItemNotification_SeekableRangeChanged
_kFigPlaybackItemNotification_StreamBufferFull
_kFigPlaybackItemNotification_StreamLikelyToKeepUp
_kFigPlaybackItemNotification_StreamRanDry
_kFigPlaybackItemNotification_StreamUnlikelyToKeepUp
_kFigPlaybackItemNotification_StreamingKeyRequestReady
_kFigPlaybackItemNotification_TimeJumped
_kFigPlaybackItemNotification_TimebaseChanged
_kFigPlaybackItemNotification_TracksChanged
_kFigPlaybackItemNotification_URLResponseRequired
_kFigPlaybackItemParameter_CurrentCanPlayFastForward
_kFigPlaybackItemParameter_CurrentCanPlayFastReverse
_kFigPlaybackItemParameter_CurrentDimensions
_kFigPlaybackItemParameter_CurrentDuration
_kFigPlaybackItemParameter_CurrentPlayableTimeIntervals
_kFigPlaybackItemParameter_CurrentSeekableTimeIntervals
_kFigPlaybackItemParameter_CurrentTrackIDArray
_kFigPlaybackItemParameter_FigTime
_kFigPlaybackItemParameter_LegibleOutputAttributedStrings
_kFigPlaybackItemParameter_LegibleOutputKey
_kFigPlaybackItemParameter_LegibleOutputNativeSamples
_kFigPlaybackItemParameter_MetadataOutputKey
_kFigPlaybackItemParameter_Properties
_kFigPlaybackItemParameter_Result
_kFigPlaybackItemParameter_SampleBuffers
_kFigPlaybackItemParameter_SeekID
_kFigPlaybackItemParameter_TrackID
_kFigPlaybackItemPlayableTimeInterval_EndTime
_kFigPlaybackItemPlayableTimeInterval_StartTime
_kFigPlaybackItemProperty_AccessLog
_kFigPlaybackItemProperty_AllowExtendedReadAhead
_kFigPlaybackItemProperty_AllowProgressiveSwitchUp
_kFigPlaybackItemProperty_AlwaysMonitorPlayability
_kFigPlaybackItemProperty_AutomaticallyLoadedAssetProperties
_kFigPlaybackItemProperty_AutomaticallyLoadedAssetTrackProperties
_kFigPlaybackItemProperty_AvailableFileSize
_kFigPlaybackItemProperty_BandwidthCap
_kFigPlaybackItemProperty_BasicsReadyForInspection
_kFigPlaybackItemProperty_CPEProtector
_kFigPlaybackItemProperty_CachePrimingDownloadToken
_kFigPlaybackItemProperty_CanPlayFastForward
_kFigPlaybackItemProperty_CanPlayFastReverse
_kFigPlaybackItemProperty_ContinuePlayingDuringPrerollForRateChange
_kFigPlaybackItemProperty_ContinuePlayingDuringPrerollForSeek
_kFigPlaybackItemProperty_CurrentDate
_kFigPlaybackItemProperty_DataYouTubeID
_kFigPlaybackItemProperty_DisplayNonForcedSubtitles
_kFigPlaybackItemProperty_DownloadDestinationURL
_kFigPlaybackItemProperty_EnableDownloadWhenInPlayQueue
_kFigPlaybackItemProperty_EnableDownloadWhenNotInPlayQueue
_kFigPlaybackItemProperty_EndTime
_kFigPlaybackItemProperty_ErrorLog
_kFigPlaybackItemProperty_EstimatedCurrentDate
_kFigPlaybackItemProperty_ExclusivePlaybackMode
_kFigPlaybackItemProperty_FileSize
_kFigPlaybackItemProperty_ForceEnableAccessLog
_kFigPlaybackItemProperty_IFrameOnlySpeedThreshold
_kFigPlaybackItemProperty_InitialSamples
_kFigPlaybackItemProperty_LegibleOutputsDictionary
_kFigPlaybackItemProperty_LikelyToKeepUpTrigger
_kFigPlaybackItemProperty_Lyrics
_kFigPlaybackItemProperty_MaximumTrailingBufferDuration
_kFigPlaybackItemProperty_MetadataOutputsDictionary
_kFigPlaybackItemProperty_MinimumIntervalForIFrameOnlyPlayback
_kFigPlaybackItemProperty_NetworkCacheURL
_kFigPlaybackItemProperty_NetworkCacheUseDiskBacked
_kFigPlaybackItemProperty_NetworkCacheUsePathAsKey
_kFigPlaybackItemProperty_NetworkCacheUseURLWithoutQueryStringAsKey
_kFigPlaybackItemProperty_NetworkUsuallyExceedsMaxBitRate
_kFigPlaybackItemProperty_PlayabilityMetrics
_kFigPlaybackItemProperty_PlayableTimeIntervals
_kFigPlaybackItemProperty_PlaybackItemProperties
_kFigPlaybackItemProperty_ProgressToPlayThrough
_kFigPlaybackItemProperty_QualityGear
_kFigPlaybackItemProperty_RTCReportingFlags
_kFigPlaybackItemProperty_ReadAheadAllowBackfill
_kFigPlaybackItemProperty_RequiresExternalProtection
_kFigPlaybackItemProperty_ResponseForClientHandledURLRequest
_kFigPlaybackItemProperty_ReverseEndTime
_kFigPlaybackItemProperty_SaveDownloadedDataToDiskWhenDone
_kFigPlaybackItemProperty_SeekableTimeIntervals
_kFigPlaybackItemProperty_SeekingWaitsForVideoCompositionRendering
_kFigPlaybackItemProperty_SelectedMediaArray
_kFigPlaybackItemProperty_SupportsFrameStepping
_kFigPlaybackItemProperty_SuppressLegibleRendering
_kFigPlaybackItemProperty_SuppressVideoLayers
_kFigPlaybackItemProperty_SynchronizedLayers
_kFigPlaybackItemProperty_TextMarkupArray
_kFigPlaybackItemProperty_TimePitchAlgorithm
_kFigPlaybackItemProperty_Timebase
_kFigPlaybackItemProperty_TrackIDArray
_kFigPlaybackItemProperty_UseIFrameOnlyPlaybackForHighRateScaledEdits
_kFigPlaybackItemProperty_VideoCompositionInstructionArray
_kFigPlaybackItemProperty_VideoCompositor
_kFigPlaybackItemProperty_VideoCompositorFrameDuration
_kFigPlaybackItemProperty_VideoCompositorRenderDimensions
_kFigPlaybackItemProperty_VideoCompositorRenderScale
_kFigPlaybackItemProperty_VisualContextArray
_kFigPlaybackItemSeekableTimeInterval_EndTime
_kFigPlaybackItemSeekableTimeInterval_StartTime
_kFigPlaybackItemSelectedMediaOptionsKey_AutomaticSelection
_kFigPlaybackItemTimePitchAlgorithm_Spectral
_kFigPlaybackItemTrackProperty_AudioCurves
_kFigPlaybackItemTrackProperty_AudioProcessingTap
_kFigPlaybackItemTrackProperty_CurrentVideoFrameRate
_kFigPlaybackItemTrackProperty_Dimensions
_kFigPlaybackItemTrackProperty_Enabled
_kFigPlaybackItemTrackProperty_EstimatedDataRate
_kFigPlaybackItemTrackProperty_FormatDescriptionArray
_kFigPlaybackItemTrackProperty_LoudnessInfo
_kFigPlaybackItemTrackProperty_Matrix
_kFigPlaybackItemTrackProperty_MediaType
_kFigPlaybackItemTrackProperty_TimePitchAlgorithm
_kFigPlaybackItemTrackProperty_VideoFieldMode
_kFigPlaybackItem_PlaybackProperties_GaplessDurationInFrames
_kFigPlaybackItem_PlaybackProperties_GaplessEncodingDelayInFrames
_kFigPlaybackItem_PlaybackProperties_GaplessEncodingDrainInFrames
_kFigPlaybackItem_PlaybackProperties_GaplessHeuristicInfo
_kFigPlaybackItem_PlaybackProperties_GaplessLastPacketsResync
_kFigPlayerAction_Advance
_kFigPlayerAction_None
_kFigPlayerAction_Stop
_kFigPlayerClosedCaptionLayerBoundsUpdate_LayerBounds
_kFigPlayerClosedCaptionLayerBoundsUpdate_LayerIndex
_kFigPlayerCreateStreamingKeyResponseKey_StreamingKeyRequest
_kFigPlayerExternalProtectionStatus_Protected
_kFigPlayerMediaSelectionCriteria_PrecludeMultichannelAudio
_kFigPlayerMediaSelectionCriteria_PrecludedCharacteristics
_kFigPlayerMediaSelectionCriteria_PrecludedSubTypes
_kFigPlayerMediaSelectionCriteria_PreferMultichannelAudio
_kFigPlayerMediaSelectionCriteria_PreferredCharacteristics
_kFigPlayerMediaSelectionCriteria_PreferredLanguages
_kFigPlayerMediaSelectionCriteria_PreferredSubTypes
_kFigPlayerMediaSelectionCriteria_RequiredCharacteristics
_kFigPlayerNeroVideoGravity_Resize
_kFigPlayerNeroVideoGravity_ResizeAspect
_kFigPlayerNeroVideoGravity_ResizeAspectFill
_kFigPlayerNotification_CurrentItemDidChange
_kFigPlayerNotification_DisplayingClosedCaptionsChanged
_kFigPlayerNotification_MutedDidChange
_kFigPlayerNotification_PrerollDidComplete
_kFigPlayerNotification_PrerollWasCancelled
_kFigPlayerNotification_RateDidChange
_kFigPlayerNotification_TimedMetadata
_kFigPlayerNotification_UserVolumeDidChange
_kFigPlayerNotification_VolumeDidChange
_kFigPlayerParameter_CurrentDisplayingClosedCaptions
_kFigPlayerParameter_CurrentMuted
_kFigPlayerParameter_CurrentRate
_kFigPlayerParameter_PrerollID
_kFigPlayerProperty_ActionAtEnd
_kFigPlayerProperty_AllowGaplessTransitions
_kFigPlayerProperty_AllowOutOfBandTextTrackRendering
_kFigPlayerProperty_AllowPixelBufferPoolSharing
_kFigPlayerProperty_AppliesMediaSelectionCriteriaAutomatically
_kFigPlayerProperty_ApplyVideoTrackMatrix
_kFigPlayerProperty_AudioDeviceUID
_kFigPlayerProperty_AutoSwitchStreamQuality
_kFigPlayerProperty_ClosedCaptionLayerArray
_kFigPlayerProperty_ClosedCaptionLayerBoundsUpdate
_kFigPlayerProperty_DecodeMultipleAudioTracks
_kFigPlayerProperty_DefaultMediaSelectionCriteria
_kFigPlayerProperty_DestinationPixelBufferAttributes
_kFigPlayerProperty_DisplayClosedCaptions
_kFigPlayerProperty_DisplayList
_kFigPlayerProperty_DisplayNonForcedSubtitles
_kFigPlayerProperty_DisplayTimedMetadata
_kFigPlayerProperty_DisplayingClosedCaptions
_kFigPlayerProperty_EnableHardwareAcceleratedVideoDecoder
_kFigPlayerProperty_ExternalProtectionStatus
_kFigPlayerProperty_GatherPerformanceHistoryArray
_kFigPlayerProperty_MasterClock
_kFigPlayerProperty_MaxRateForAudioPlayback
_kFigPlayerProperty_MediaSelectionCriteria
_kFigPlayerProperty_MinRateForAudioPlayback
_kFigPlayerProperty_Muted
_kFigPlayerProperty_NeroVideoGravity
_kFigPlayerProperty_NetworkCacheURL
_kFigPlayerProperty_PerformanceDictionary
_kFigPlayerProperty_PerformanceHistoryArray
_kFigPlayerProperty_PrepareItemOnDispatchQueue
_kFigPlayerProperty_PrimaryVideoOutputSize
_kFigPlayerProperty_ProhibitAMR
_kFigPlayerProperty_ResizeThisVideoLayer
_kFigPlayerProperty_SetVideoLayerBoundsAutomatically
_kFigPlayerProperty_VideoLayerArray
_kFigPlayerProperty_Volume
_kFigPlayerResizeThisVideoLayer_Layer
_kFigPlayerResizeThisVideoLayer_Size
_kFigPlayerTimedMetadataNotificationKey_ValueArray
_kFigRemakerAudioMixdown_AudioProcessingTap
_kFigRemakerAudioMixdown_SourceTrackID
_kFigRemakerAudioMixdown_TimePitchAlgorithm
_kFigRemakerAudioMixdown_VolumeCurve
_kFigRemakerAudioProcessingOption_TimePitchAlgorithm
_kFigRemakerMatrixHandling_ApplyRotation
_kFigRemakerMultiPass
_kFigRemakerNotificationParameter_CFBoolean
_kFigRemakerNotificationParameter_OSStatus
_kFigRemakerNotification_CanPerformFastFrameRateConversion
_kFigRemakerNotification_Completed
_kFigRemakerNotification_DecodeError
_kFigRemakerNotification_Failed
_kFigRemakerOption_FastStart
_kFigRemakerOption_NoInterruptions
_kFigRemakerOption_PermitNonLocalSourceURLs
_kFigRemakerPassthroughOption_FrameDuration
_kFigRemakerPassthroughOption_Retime
_kFigRemakerProperty_MaxFileSize
_kFigRemakerProperty_Metadata
_kFigRemakerProperty_MetadataTransferWhitelist
_kFigRemakerProperty_Progress
_kFigRemakerTemporaryDirectoryURL
_kFigRemakerTimePitchAlgorithm_Spectral
_kFigRemakerTimePitchAlgorithm_TimeDomain
_kFigRemakerTimePitchAlgorithm_Varispeed
_kFigRemakerVideoCompositor_Basic
_kFigRemakerVideoCompositor_DeviceSpecific
_kFigRemakerVideoCompositor_OpenGL
_kFigRemakerVideoFrameRateConversionAlgorithm_Fast
_kFigRemakerVideoProcessingOption_VideoFrameRateConversionAlgorithm
_kFigRemakerVideoScalingProperty_MatrixHandling
_kFigSampleBufferAudioRendererNotification_NowBelowLowWaterLevel
_kFigSampleBufferAudioRendererProperty_AudioOutputDeviceUniqueID
_kFigSampleBufferAudioRendererProperty_AudioTimePitchAlgorithm
_kFigSampleBufferAudioRendererProperty_Muted
_kFigSampleBufferAudioRendererProperty_Volume
_kFigSampleBufferAudioRendererProperty_VolumeCurves
_kFigSampleCursorProperty_SampleDependencyAttributes
_kFigStdAssetMediaCharacteristic_Audible
_kFigStdAssetMediaCharacteristic_Legible
_kFigStdAssetMediaCharacteristic_Visual
_kFigStdAssetMediaSelectionGroupKey_AllowEmptySelection
_kFigStdAssetMediaSelectionGroupKey_ID
_kFigStdAssetMediaSelectionGroupKey_MediaCharacteristics
_kFigStdAssetMediaSelectionGroupKey_MediaType
_kFigStdAssetMediaSelectionGroupKey_OptionsArray
_kFigStdAssetMediaSelectionOptionsKey_AssociatedExtendedLanguageTag
_kFigStdAssetMediaSelectionOptionsKey_AssociatedPersistentIDs
_kFigStdAssetMediaSelectionOptionsKey_ClientIdentifier
_kFigStdAssetMediaSelectionOptionsKey_DisplaysNonForcedSubtitles
_kFigStdAssetMediaSelectionOptionsKey_ExtendedLanguageTag
_kFigStdAssetMediaSelectionOptionsKey_IsAuxiliaryContent
_kFigStdAssetMediaSelectionOptionsKey_IsDefault
_kFigStdAssetMediaSelectionOptionsKey_MediaType
_kFigStdAssetMediaSelectionOptionsKey_Name
_kFigStdAssetMediaSelectionOptionsKey_PersistentID
_kFigStdAssetMediaSelectionOptionsKey_TaggedMediaCharacteristics
_kFigStdAssetMediaSelectionOptionsKey_URL
_kFigStdAssetProperty_Chapters
_kFigStdAssetProperty_CreationDate
_kFigStdAssetProperty_Duration
_kFigStdAssetProperty_Lyrics
_kFigStdAssetProperty_MediaSelectionArray
_kFigStdAssetProperty_PreferredRate
_kFigStdAssetProperty_PreferredTransform
_kFigStdAssetProperty_PreferredVolume
_kFigStdAssetProperty_iTunesSoundCheckVolumeNormalization
_kFigStdTrackProperty_AlternateGroupID
_kFigStdTrackProperty_AvailableMetadataFormats
_kFigStdTrackProperty_CommonMetadata
_kFigStdTrackProperty_Dimensions
_kFigStdTrackProperty_EstimatedDataRate
_kFigStdTrackProperty_ExtendedLanguageTag
_kFigStdTrackProperty_FormatDescriptionArray
_kFigStdTrackProperty_IsEnabled
_kFigStdTrackProperty_IsExcludedFromAutoselection
_kFigStdTrackProperty_IsSelfContained
_kFigStdTrackProperty_LanguageCode
_kFigStdTrackProperty_Layer
_kFigStdTrackProperty_LoudnessInfo
_kFigStdTrackProperty_MediaCharacteristicArray
_kFigStdTrackProperty_MediaDecodeTimeRange
_kFigStdTrackProperty_MediaPresentationTimeRange
_kFigStdTrackProperty_MinSampleDuration
_kFigStdTrackProperty_NaturalSize
_kFigStdTrackProperty_NaturalTimeScale
_kFigStdTrackProperty_NominalFrameRate
_kFigStdTrackProperty_PreferredTransform
_kFigStdTrackProperty_TimeRange
_kFigStdTrackProperty_TotalSampleDataLength
_kFigStdTrackProperty_Volume
_kFigSubtitleRendererNotification_NeedsLayout
_kFigTrackProperty_AlternateGroupID
_kFigTrackProperty_CleanApertureDimensions
_kFigTrackProperty_Dimensions
_kFigTrackProperty_EditCursorService
_kFigTrackProperty_Enabled
_kFigTrackProperty_EncodedPixelsDimensions
_kFigTrackProperty_EstimatedDataRate
_kFigTrackProperty_ExcludeFromAutoSelection
_kFigTrackProperty_ExtendedLanguageTagString
_kFigTrackProperty_FormatDescriptionArray
_kFigTrackProperty_FrameReorderingRequired
_kFigTrackProperty_LanguageCode
_kFigTrackProperty_Layer
_kFigTrackProperty_LoudnessInfo
_kFigTrackProperty_Matrix
_kFigTrackProperty_MetadataReaders
_kFigTrackProperty_NominalFrameRate
_kFigTrackProperty_ProductionApertureDimensions
_kFigTrackProperty_SelfContained
_kFigTrackProperty_Timescale
_kFigTrackProperty_UneditedDuration
_kFigTrackProperty_UneditedNumDataBytes
_kFigTrackProperty_Volume
_kFigTrackReaderNotification_SampleCountChanged
_kFigVideoCompositionProcessorProperty_DestinationPixelBufferDesiredColorPrimaries
_kFigVideoCompositionProcessorProperty_DestinationPixelBufferDesiredTransferFunction
_kFigVideoCompositionProcessorProperty_DestinationPixelBufferDesiredYCbCrMatrix
_kFigVideoCompositorNotification_PropertyChanged
_kFigVideoCompositorProperty_DestinationPixelBufferDesiredAttributes
_kFigVideoCompositorProperty_DestinationPixelBufferDesiredColorPrimaries
_kFigVideoCompositorProperty_DestinationPixelBufferDesiredTransferFunction
_kFigVideoCompositorProperty_DestinationPixelBufferDesiredYCbCrMatrix
_kFigVideoCompositorProperty_HighQualityRendering
_kFigVideoCompositorProperty_RenderDimensions
_kFigVideoCompositorProperty_RenderEdgeProcessingPixels
_kFigVideoCompositorProperty_RenderPixelAspectRatio
_kFigVideoCompositorProperty_RenderScale
_kFigVideoCompositorProperty_SourcePixelBufferAttributes
_kFigVideoPerformanceKey_NumberOfFramesDroppedByVideoDecoder
_kFigVideoPerformanceKey_NumberOfFramesDroppedFromImageQueue
_kFigVideoPerformanceKey_NumberOfFramesDroppedFromPreQueue
_kFigVideoPerformanceKey_NumberOfFramesEnqueuedForDisplay
_kFigVideoPerformanceKey_NumberOfFramesRejectedByImageQueue
_kFigVideoPerformanceKey_TotalFrameDelay
_kFigVideoQueueExternalProtectionStatusKey_Video
_kFigVideoQueueExternalProtectionStatus_NotProtected
_kFigVideoQueueNotificationParameter_CodecType
_kFigVideoQueueNotificationParameter_OSStatus
_kFigVideoQueueNotificationParameter_OutputPresentationTimeStamp
_kFigVideoQueueNotification_DecodeError
_kFigVideoQueueNotification_ExternalProtectionStatusChanged
_kFigVideoQueueNotification_Failed
_kFigVideoQueueNotification_NowBelowLowWaterLevel
_kFigVideoQueueProperty_ControlTimebase
_kFigVideoQueueProperty_DisplayBounds
_kFigVideoQueueProperty_DisplayLayer
_kFigVideoQueueProperty_ExternalProtectionStatus
_kFigVideoQueueProperty_PerformanceDictionary
_kFigVisualContext_AutoPruneInterval
_kUTTagClassFilenameExtension
_kUTTagClassMIMEType
_kUTTagClassOSType
_kUTTypeImage
_kUTTypeJPEG
_kVTCompressionPropertyKey_AllowFrameReordering
_kVTCompressionPropertyKey_AverageBitRate
_kVTCompressionPropertyKey_CleanAperture
_kVTCompressionPropertyKey_ColorPrimaries
_kVTCompressionPropertyKey_DataRateLimits
_kVTCompressionPropertyKey_H264EntropyMode
_kVTCompressionPropertyKey_MaxKeyFrameInterval
_kVTCompressionPropertyKey_PixelAspectRatio
_kVTCompressionPropertyKey_PixelTransferProperties
_kVTCompressionPropertyKey_Priority
_kVTCompressionPropertyKey_ProfileLevel
_kVTCompressionPropertyKey_Quality
_kVTCompressionPropertyKey_RealTime
_kVTCompressionPropertyKey_TransferFunction
_kVTCompressionPropertyKey_Usage
_kVTCompressionPropertyKey_VideoEncoderPixelBufferAttributes
_kVTCompressionPropertyKey_YCbCrMatrix
_kVTDecompressionPropertyKey_FieldMode
_kVTDecompressionPropertyKey_PixelTransferProperties
_kVTDecompressionProperty_FieldMode_BothFields
_kVTDecompressionProperty_FieldMode_BottomFieldOnly
_kVTDecompressionProperty_FieldMode_DeinterlaceFields
_kVTDecompressionProperty_FieldMode_TopFieldOnly
_kVTImageRotationPropertyKey_FlipHorizontalOrientation
_kVTImageRotationPropertyKey_FlipVerticalOrientation
_kVTPixelBufferAttributesMediatorNotification_MediatedPixelBufferAttributesChanged
_kVTPixelBufferAttributesMediatorProperty_AlwaysVendsNonNULLAttributes
_kVTPixelBufferAttributesMediatorProperty_LayersAreSuppressed
_kVTPixelBufferAttributesMediatorProperty_MediatedPixelBufferAttributes
_kVTPixelTransferPropertyKey_DestinationCleanAperture
_kVTPixelTransferPropertyKey_DestinationColorPrimaries
_kVTPixelTransferPropertyKey_DestinationPixelAspectRatio
_kVTPixelTransferPropertyKey_DestinationTransferFunction
_kVTPixelTransferPropertyKey_DestinationYCbCrMatrix
_kVTPixelTransferPropertyKey_ScalingMode
_kVTProfileLevel_H264_High_AutoLevel
_kVTProfileLevel_H264_Main_AutoLevel
_kVTPropertyReadWriteStatusKey
_kVTPropertyReadWriteStatus_ReadOnly
_kVTPropertySupportedValueListKey
_kVTPropertySupportedValueMaximumKey
_kVTPropertySupportedValueMinimumKey
_kVTScalingMode_CropSourceToCleanAperture
_kVTScalingMode_Letterbox
_kVTScalingMode_Normal
_kVTScalingMode_Trim
_kVTVideoEncoderList_CodecType
_kVTVideoEncoderList_RevealHardwareAcceleratedEncoders
_kVTVideoEncoderList_RevealHiddenEncoders
_kVTVideoEncoderSpecification_Usage
_malloc
_memcmp
_memcpy
_memset_pattern16
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_assign_weak
_objc_atomicCompareAndSwapPtrBarrier
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_begin_catch
_objc_collectingEnabled
_objc_copyStruct
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
_objc_setProperty
_objc_storeWeak
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_round
_strcmp
dyld_stub_binder
