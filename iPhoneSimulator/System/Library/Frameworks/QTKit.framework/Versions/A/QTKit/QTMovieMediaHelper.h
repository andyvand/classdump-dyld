/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTMovieAttributes.h>

@class QTMovie, QTImageConsumerFanOut, QTVisualContextRenderer, NSDictionary;

@interface QTMovieMediaHelper : NSObject <QTMovieAttributes> {

	QTMovie* _qtMovie;
	QTImageConsumerFanOut* _fanOut;
	QTVisualContextRenderer* _compatibilityVisualContextRenderer;
	id _delegate;
	NSDictionary* _initializationAttributes;
	char _didBecomeMediaHelperForMovie;

}
+(id)movieFileTypes:(int)arg1 ;
+(id)movieTypesWithOptions:(int)arg1 ;
+(void)registerCurrentThreadWithMediaStack;
+(void)unregisterCurrentThreadWithMediaStack;
+(char)implementsCustomAsyncLoadingForAttributes:(id)arg1 ;
-(void)setCopyright:(id)arg1 ;
-(void)step:(int)arg1 ;
-(id)artist;
-(id)genre;
-(id)album;
-(int)trackCount;
-(char)autoQuitWhenDone;
-(id)creationTime;
-(unsigned long long)dataSize;
-(id)modificationTime;
-(float)preferredRate;
-(float)preferredVolume;
-(long long)timeScale;
-(int)dataRate;
-(char)previewMode;
-(void)setPreviewMode:(char)arg1 ;
-(char)canCut;
-(char)canPaste;
-(id)MIMEType;
-(char)canCopy;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(void)setDraggable:(char)arg1 ;
-(id)commonMetadata;
-(id)href;
-(void)setHref:(id)arg1 ;
-(char)draggable;
-(SCD_Struct_QT12)selectionStart;
-(SCD_Struct_QT12)selectionEnd;
-(void)setApertureMode:(id)arg1 ;
-(CGSize)naturalSize;
-(id)preferredTransform;
-(void)setMuted:(char)arg1 ;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)apertureMode;
-(char)isMuted;
-(void)removeTrack:(id)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(SCD_Struct_QT12)posterTime;
-(id)nodeAtIndex:(int)arg1 ;
-(char)hasVideo;
-(char)hasAudio;
-(CGSize)currentSize;
-(void)setCurrentSize:(CGSize)arg1 ;
-(id)trackEnumerator;
-(id)initWithAttributes:(id)arg1 error:(id*)arg2 forParent:(id)arg3 ;
-(id)qtMovie;
-(void)getDefaultDataLocatorAttributeKey:(id*)arg1 andValue:(id*)arg2 ;
-(void)setQTMovie:(id)arg1 ;
-(void)willBecomeMediaHelperForMovie:(id)arg1 ;
-(id)movieAttributesForVisibility:(unsigned long long)arg1 requireChangeNotification:(char)arg2 nilMarker:(id)arg3 ;
-(id)diagnosticString;
-(void)copyRenderingStateFromMediaHelper:(id)arg1 ;
-(void)didBecomeMediaHelperForMovie:(id)arg1 ;
-(char)usesFigMedia;
-(char)usesQuickTime;
-(void)setMovieAttributes:(id)arg1 ;
-(id)undoAttributes;
-(void)setIdling:(char)arg1 ;
-(char)isIdling;
-(id)copyWithZoneDeep:(NSZone*)arg1 forParent:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 forParent:(id)arg2 ;
-(void)setCurrentTime:(SCD_Struct_QT12)arg1 inRange:(SCD_Struct_QT16)arg2 ;
-(id)movieFormatRepresentationAndAnchor;
-(id)tracksOfMediaType:(id)arg1 ;
-(char)hasFrameImageAtTime:(SCD_Struct_QT12)arg1 ;
-(char)hasPosterImage;
-(id)frameImageAtTime:(SCD_Struct_QT12)arg1 withRepresentations:(id)arg2 error:(id*)arg3 ;
-(void*)frameImageAtTime:(SCD_Struct_QT12)arg1 withAttributes:(id)arg2 error:(id*)arg3 ;
-(char)writeToDataReference:(id)arg1 withAttributes:(id)arg2 error:(id*)arg3 ;
-(char)canUpdateMovieFile;
-(char)updateMovieFile;
-(char)saveSourceDataToDataReference:(id)arg1 error:(id*)arg2 ;
-(void)autoplay;
-(void)autoplay:(float)arg1 ;
-(void)gotoEnd;
-(void)gotoNextSelectionPoint;
-(void)gotoPreviousSelectionPoint;
-(void)gotoPosterTime;
-(void)stepForward;
-(void)stepBackward;
-(int)objectToken;
-(int)movieControllerObjectToken;
-(id)initialDataReference;
-(id)trackAtIndex:(int)arg1 ;
-(id)trackByIndexAndType:(long long)arg1 type:(unsigned)arg2 flags:(long long)arg3 ;
-(id)trackByID:(long long)arg1 ;
-(unsigned long long)sizeOfDataAtTime:(SCD_Struct_QT12)arg1 withDuration:(SCD_Struct_QT12)arg2 ;
-(char)hasSkin;
-(id)dataReferences;
-(id)mediaDataReferenceEnumerator;
-(void)setDataReference:(id)arg1 ;
-(id)tracksWithCharacteristic:(id)arg1 ;
-(id)missingComponentsWithOptions:(id)arg1 ;
-(void)setAllowDynamicResize:(char)arg1 ;
-(void)setPostsClosedCaptionDidChangeNotifications:(char)arg1 ;
-(void)setPostsNonForcedSubtitleDidChangeNotifications:(char)arg1 ;
-(char)postsNonForcedSubtitleDidChangeNotifications;
-(void)setChapterTrack:(id)arg1 ;
-(void)setClosedCaptionsVisible:(char)arg1 ;
-(void)setSubtitlesVisible:(char)arg1 ;
-(SCD_Struct_QT16)activeSegment;
-(SCD_Struct_QT16)previewRange;
-(SCD_Struct_QT12)maxTimeLoaded;
-(char)autoCloseWhenDone;
-(char)isInteractive;
-(char)isLinear;
-(char)isLoopable;
-(char)isSteppable;
-(char)isMPEG;
-(char)isMIAM;
-(char)hasQuartzComposer;
-(char)isStreaming;
-(char)playsAllFrames;
-(char)playsSelectionOnly;
-(char)loopsBackAndForth;
-(char)preferredMuted;
-(char)rateChangePreservesPitch;
-(char)hasLanguages;
-(char)isAutoPlay;
-(char)saveable;
-(float)staticFrameRate;
-(id)author;
-(id)information;
-(id)metaDataDescription;
-(id)controllerType;
-(id)interactivityFeatures;
-(id)annotationsWithCommonKeys;
-(id)annotationsExtended;
-(char)autoAlternates;
-(long long)loadState;
-(id)loadStateError;
-(id)availableRanges;
-(id)loadedRanges;
-(id)albumArtworkMovie;
-(id)albumArtworkAttributes;
-(unsigned)movieType;
-(MatrixRecord)movieMatrix;
-(MatrixRecord)movieMatrixWithoutTranslation;
-(MatrixRecord)originalMovieMatrix;
-(void)setActiveAndVisible:(char)arg1 ;
-(void)setAutoAlternates:(char)arg1 ;
-(void)setAutoCloseWhenDone:(char)arg1 ;
-(void)setAutoQuitWhenDone:(char)arg1 ;
-(void)setChanged:(char)arg1 ;
-(void)setLoopsBackAndForth:(char)arg1 ;
-(void)setPlaysAllFrames:(char)arg1 ;
-(void)setPlaysSelectionOnly:(char)arg1 ;
-(void)setPreferredMuted:(char)arg1 ;
-(void)setAutoPlay:(char)arg1 ;
-(void)setSaveable:(char)arg1 ;
-(void)setUsesPreferredLanguage:(char)arg1 ;
-(void)setTimeScale:(long long)arg1 ;
-(void)setPosterTime:(SCD_Struct_QT12)arg1 ;
-(void)setActiveSegment:(SCD_Struct_QT16)arg1 ;
-(void)setPreviewRange:(SCD_Struct_QT16)arg1 ;
-(void)setControllerType:(id)arg1 ;
-(void)setMovieMatrix:(MatrixRecord*)arg1 ;
-(void)setAnnotation:(id)arg1 ofType:(unsigned)arg2 ;
-(char)usesHardwareVideoDecoder;
-(char)useHardwareVideoDecoderIfAvailable;
-(void)setUseHardwareVideoDecoderIfAvailable:(char)arg1 ;
-(char)originalKeepInactiveFlag;
-(char)originalDontInteractFlag;
-(char)originalDontResolveDataRefsFlag;
-(char)originalDontAskUnresolvedDataRefsFlag;
-(char)originalPreventExternalURLLinksFlag;
-(void)setOriginalKeepInactiveFlag:(char)arg1 ;
-(void)setOriginalDontInteractFlag:(char)arg1 ;
-(void)setOriginalDontResolveDataRefsFlag:(char)arg1 ;
-(void)setOriginalDontAskUnresolvedDataRefsFlag:(char)arg1 ;
-(void)setOriginalPreventExternalURLLinksFlag:(char)arg1 ;
-(UserDataRecord*)userDataRef;
-(id)userDataOfType:(unsigned)arg1 ;
-(id)userDataOfType:(unsigned)arg1 atIndex:(long long)arg2 ;
-(char)setUserData:(id)arg1 ofType:(unsigned)arg2 ;
-(char)setUserData:(id)arg1 ofType:(unsigned)arg2 atIndex:(long long)arg3 ;
-(char)addUserData:(id)arg1 ofType:(unsigned)arg2 ;
-(long long)userDataCountOfType:(unsigned)arg1 ;
-(SCD_Struct_QT12)selectionDuration;
-(void)replaceSelectionWithSelectionFromMovie:(id)arg1 ;
-(void)appendSelectionFromMovie:(id)arg1 ;
-(void)insertSegmentOfMovie:(id)arg1 timeRange:(SCD_Struct_QT16)arg2 atTime:(SCD_Struct_QT12)arg3 ;
-(void)insertSegmentOfMovie:(id)arg1 fromRange:(SCD_Struct_QT16)arg2 scaledToRange:(SCD_Struct_QT16)arg3 ;
-(void)insertEmptySegmentAt:(SCD_Struct_QT16)arg1 ;
-(void)deleteSegment:(SCD_Struct_QT16)arg1 ;
-(void)scaleSegment:(SCD_Struct_QT16)arg1 newDuration:(SCD_Struct_QT12)arg2 ;
-(id)addTrack:(id)arg1 copyMedia:(char)arg2 error:(id*)arg3 ;
-(void)addImage:(id)arg1 forDuration:(SCD_Struct_QT12)arg2 atTime:(SCD_Struct_QT12)arg3 withAttributes:(id)arg4 ;
-(void)addMovieScaledToSelection:(id)arg1 ;
-(char)addCVImageBuffer:(CVBufferRef)arg1 forRange:(SCD_Struct_QT16)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(void)addToScrap;
-(id)insertSegmentOfTrack:(id)arg1 timeRange:(SCD_Struct_QT16)arg2 atTime:(SCD_Struct_QT12)arg3 ;
-(id)insertSegmentOfTrack:(id)arg1 fromRange:(SCD_Struct_QT16)arg2 scaledToRange:(SCD_Struct_QT16)arg3 ;
-(id)trackByInsertingSegmentOfTrack:(id)arg1 timeRange:(SCD_Struct_QT16)arg2 atTime:(SCD_Struct_QT12)arg3 ;
-(id)trackByInsertingSegmentOfTrack:(id)arg1 fromRange:(SCD_Struct_QT16)arg2 scaledToRange:(SCD_Struct_QT16)arg3 ;
-(id)targetTrackForInsertFromTrack:(id)arg1 ;
-(char)isVRMovie;
-(char)hotspotsVisible;
-(void)setHotspotsVisible:(char)arg1 ;
-(float)panAngle;
-(float)panTiltSpeed;
-(float)tiltAngle;
-(float)zoomRate;
-(void)setPanAngle:(float)arg1 ;
-(void)setPanTiltSpeed:(float)arg1 ;
-(void)setTiltAngle:(float)arg1 ;
-(void)setZoomRate:(float)arg1 ;
-(QTVRAngleRangeAtom)constraints:(short)arg1 ;
-(void)setConstraints:(QTVRAngleRangeAtom)arg1 ofKind:(short)arg2 ;
-(int)nodeCount;
-(void)gotoPreviousNode;
-(int)hotspotCount;
-(int)hotspotCountForNode:(id)arg1 ;
-(void)nudge:(long long)arg1 ;
-(void)goToNode:(long long)arg1 ;
-(char)isFlashMovie;
-(void)setZoom:(float)arg1 ;
-(void)setUndoAttributes:(id)arg1 ;
-(MovieStateRecord*)newMovieEditState;
-(void)useMovieEditState:(MovieStateRecord*)arg1 ;
-(SCD_Struct_QT16)minimumRangeForEdit;
-(char)attachToCurrentThread;
-(char)detachFromCurrentThread;
-(SCD_Struct_QT12)frameStartTime:(SCD_Struct_QT12)arg1 ;
-(SCD_Struct_QT12)frameEndTime:(SCD_Struct_QT12)arg1 ;
-(SCD_Struct_QT12)keyframeStartTime:(SCD_Struct_QT12)arg1 ;
-(float)balance;
-(float)bass;
-(float)gain;
-(float)treble;
-(void)setBalance:(float)arg1 ;
-(void)setBass:(float)arg1 ;
-(void)setGain:(float)arg1 ;
-(void)setTreble:(float)arg1 ;
-(char)volumeMeteringEnabled:(long long)arg1 ;
-(void)setVolumeMeteringEnabled:(char)arg1 onMix:(long long)arg2 ;
-(void)powerLevels:(QTAudioVolumeLevels*)arg1 onMix:(long long)arg2 ;
-(void)peakLevels:(QTAudioVolumeLevels*)arg1 onMix:(long long)arg2 ;
-(void)setAudioDevice:(id)arg1 error:(id*)arg2 ;
-(AudioChannelLayout*)audioChannelLayout;
-(void)setAudioChannelLayout:(AudioChannelLayout*)arg1 error:(id*)arg2 ;
-(void)addImageConsumer:(id)arg1 ;
-(void)removeImageConsumer:(id)arg1 flush:(char)arg2 ;
-(id)imageConsumers;
-(char)_usingWindowRefForPort;
-(void)_startUsingGWorldsUsingWindowRefForPort:(char)arg1 ;
-(void)_stopUsingGWorlds;
-(void)_syncWithView:(id)arg1 ;
-(void)_displayInWindowWithNumber:(long long)arg1 ;
-(void)_synchronizePortWithWindow;
-(void)_invalidatePort;
-(char)usesVisualContext;
-(char)wouldUseVisualContext;
-(char)visualMovieBoxIsOpaque;
-(unsigned)compositingMode;
-(float)visualHue;
-(void)setVisualHue:(float)arg1 ;
-(float)visualSaturation;
-(void)setVisualSaturation:(float)arg1 ;
-(float)visualBrightness;
-(void)setVisualBrightness:(float)arg1 ;
-(float)visualContrast;
-(void)setVisualContrast:(float)arg1 ;
-(id)visualBackgroundColor;
-(void)setVisualBackgroundColor:(id)arg1 ;
-(id)visualMovieBoxBackgroundColor;
-(void)setVisualMovieBoxBackgroundColor:(id)arg1 ;
-(char)visualDrawsMovieBoxBackgroundColor;
-(void)setVisualDrawsMovieBoxBackgroundColor:(char)arg1 ;
-(unsigned long long)droppedVideoFrameCount;
-(void)generateApertureModeDimensions;
-(void)removeApertureModeDimensions;
-(char)hasApertureModeDimensions;
-(char)hasChapters;
-(long long)chapterCount;
-(id)chapters;
-(void)addChapters:(id)arg1 withAttributes:(id)arg2 error:(id*)arg3 ;
-(char)removeChapters;
-(SCD_Struct_QT12)startTimeOfChapter:(long long)arg1 ;
-(long long)chapterIndexForTime:(SCD_Struct_QT12)arg1 ;
-(id)chapterTrack;
-(id)chapterList;
-(unsigned)currentChapterIndex;
-(void)setCurrentChapterIndex:(unsigned)arg1 ;
-(id)currentChapterName;
-(int)chapterMode;
-(id)addTextTrack:(id)arg1 atTimeRanges:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(id)addURLTrack:(id)arg1 atTimeRanges:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(void)deleteReferencesToTrack:(id)arg1 ofType:(id)arg2 ;
-(char)isDRMProtected;
-(char)isDRMAuthorized;
-(char)canDRMInteractWithUser;
-(void)setCanDRMInteractWithUser:(char)arg1 ;
-(char)hasEqualizer;
-(unsigned)numberOfEqualizerDeviceChannels;
-(unsigned)numberOfEqualizerBandLevels;
-(void)setNumberOfEqualizerBandLevels:(unsigned)arg1 ;
-(void)equalizerBandLevels:(QTAudioFrequencyLevels*)arg1 ;
-(char)hasFrameRate;
-(double)dynamicFrameRate;
-(long long)findText:(id)arg1 trackIndex:(long long)arg2 startTime:(SCD_Struct_QT12)arg3 offset:(long long)arg4 flags:(long long)arg5 retParamName:(unsigned)arg6 ;
-(SCD_Struct_QT16)playbackRange;
-(void)setPlaybackRange:(SCD_Struct_QT16)arg1 ;
-(void)doEditOperation:(unsigned)arg1 ;
-(id)userDataAnnotations;
-(id)internetLocation;
-(char)hasVRController;
-(void)stepFrameForward;
-(void)stepFrameBackward;
-(char)canSerialize;
-(short)classicVolume;
-(void)setClassicVolume:(short)arg1 ;
-(char)conformed;
-(void)setConformed:(char)arg1 ;
-(unsigned)playerApertureMode;
-(void)setPlayerApertureMode:(unsigned)arg1 ;
-(char)isBuffering;
-(char)usesAudioContext;
-(unsigned)audioRenderQuality;
-(void)setAudioRenderQuality:(unsigned)arg1 ;
-(id)sourceString;
-(id)timeCodeTrack;
-(char)hasTimeCodeTrack;
-(id)currentTimeCodeForInfoPanel;
-(id)timeCodeDurationForInfoPanel;
-(char)hasSubtitles;
-(void)setSubtitles:(id)arg1 flag:(int)arg2 ;
-(id)subtitlesTrack;
-(char)areSubtitlesVisible;
-(char)hasClosedCaptions;
-(char)areClosedCaptionsVisible;
-(id)alternateTrack;
-(id)alternateTracks;
-(id)subtitleTracks;
-(id)audioLanguageTracks;
-(char)containsTrackType:(unsigned)arg1 ;
-(void)setMovieLanguage:(id)arg1 flag:(int)arg2 ;
-(char)doneConsideringPlaySelectionOnly;
-(void)setDefaultDataReference:(char**)arg1 subType:(unsigned)arg2 ;
-(char)isMovieMarkedNonSerializable;
-(CGPoint)centerPoint;
-(void)rotate:(float)arg1 around:(CGPoint)arg2 ;
-(void)scale:(float)arg1 around:(CGPoint)arg2 ;
-(void)skew:(CGPoint)arg1 around:(CGPoint)arg2 ;
-(void)translate:(CGPoint)arg1 ;
-(void)flipX;
-(void)flipY;
-(char)_blocksAllWiredActions;
-(void)_setBlocksAllWiredActions:(char)arg1 ;
-(void)executeFrameLoadedActionsAtTime:(SCD_Struct_QT12)arg1 ;
-(void)executeWiredActionsAtTime:(SCD_Struct_QT12)arg1 ;
-(char)hasWiredActions;
-(char)limitReadAhead;
-(void)setLimitReadAhead:(char)arg1 ;
-(char)validateMetadata:(id)arg1 forFormat:(id)arg2 error:(id*)arg3 ;
-(char)setMetadata:(id)arg1 forFormat:(id)arg2 ;
-(void)postMovieNotificationName:(id)arg1 ;
-(void)postMovieNotificationName:(id)arg1 thread:(id)arg2 ;
-(void)addImageConsumerNoNotify:(id)arg1 ;
-(char)isMediaHelperForParentMovie;
-(void)copyStateFromMediaHelper:(id)arg1 ;
-(void)postMovieNotificationName:(id)arg1 userInfo:(id)arg2 thread:(id)arg3 ;
-(void)postMovieNotificationName:(id)arg1 userInfo:(id)arg2 thread:(id)arg3 delay:(char)arg4 ;
-(char)openedForPlayback;
-(id)_readableAttributeKeysForVisibility:(unsigned long long)arg1 ;
-(void)copyDeepStateFromMediaHelper:(id)arg1 ;
-(void)removeImageConsumerNoNotify:(id)arg1 flush:(char)arg2 ;
-(void)postMovieNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(id)_imageConsumerFanOut;
-(id)_writableAttributeKeysForVisibility:(unsigned long long)arg1 ;
-(id)commonMetadataForQTAnnotations:(id)arg1 ;
-(void)enqueueMovieNotificationName:(id)arg1 ;
-(char)hasDuration;
-(id)posterImage;
-(id)frameImageAtTime:(SCD_Struct_QT12)arg1 ;
-(id)annotations;
-(char)editable;
-(char)done;
-(void)setSelection:(SCD_Struct_QT16)arg1 ;
-(void)setAnnotations:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(SCD_Struct_QT12)duration;
-(id)description;
-(void)invalidate;
-(id)URL;
-(char)isActive;
-(id)delegate;
-(void)setEditable:(char)arg1 ;
-(void)play;
-(int)status;
-(id)undoManager;
-(char)canUndo;
-(void)setActive:(char)arg1 ;
-(id)displayName;
-(id)fileName;
-(void)setUndoManager:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(long long)language;
-(char)isChanged;
-(id)movieFormatRepresentation;
-(SCD_Struct_QT16)selection;
-(char)isPlaying;
-(void)gotoBeginning;
-(void)setVolume:(float)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(SCD_Struct_QT12)currentTime;
-(void)setCurrentTime:(SCD_Struct_QT12)arg1 ;
-(float)volume;
-(void)setLoops:(char)arg1 ;
-(char)loops;
-(id)attributeForKey:(id)arg1 ;
-(id)tracks;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setLanguage:(long long)arg1 ;
-(id)copyright;
-(int)proxy;
-(void)zoom:(float)arg1 ;
-(void)idle;
-(id)comments;
-(id)fullName;
-(void)setFullName:(id)arg1 ;
-(id)nodes;
-(id)currentNode;
-(char)writeToFile:(id)arg1 withAttributes:(id)arg2 error:(id*)arg3 ;
-(id)format;
-(float)fieldOfView;
-(void)setFieldOfView:(float)arg1 ;
-(id)dataReference;
@end

