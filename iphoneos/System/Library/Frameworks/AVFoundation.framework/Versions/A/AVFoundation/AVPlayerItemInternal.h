/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVPlayerItemDelegate;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, NSMutableArray, NSMutableDictionary, AVPlayerItem, AVPlayerConnection, AVPropertyStorage, NSError, NSURL, AVAsset, NSDate, AVAudioMix, AVVideoComposition, AVCustomVideoCompositorSession, NSDictionary, NSString;

@interface AVPlayerItemInternal : NSObject {

	dispatch_queue_sRef ivarAccessQueue;
	AVWeakReference* weakReference;
	dispatch_queue_sRef figConfigurationQueue;
	OpaqueVTPixelBufferAttributesMediatorRef pixelBufferAttributeMediator;
	OpaqueCMTimebaseRef proxyTimebase;
	char isCurrentPlayerItem;
	NSArray* cachedTracks;
	NSMutableArray* syncLayers;
	NSArray* itemOutputs;
	NSMutableArray* itemVideoOutputs;
	NSMutableDictionary* itemLegibleOutputsForKeys;
	NSMutableDictionary* itemMetadataOutputsForKeys;
	char suppressesVideoLayers;
	OpaqueCMTimebaseRef figTimebase;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	AVPlayerItem* previousItem;
	AVPlayerItem* nextItem;
	OpaqueFigCPEProtectorRef figCPEProtector;
	id<AVPlayerItemDelegate> delegate;
	AVWeakReference* playerReference;
	AVPlayerConnection* playerConnection;
	dispatch_queue_sRef stateDispatchQueue;
	AVPropertyStorage* propertyStorage;
	long long status;
	NSError* error;
	NSURL* URL;
	AVAsset* asset;
	NSArray* automaticallyLoadedAssetKeys;
	AVAsset* assetWithFigPlaybackItem;
	NSArray* trackIDsForAssetWithFigPlaybackItem;
	NSArray* timedMetadata;
	SCD_Struct_CM5 initialTime;
	SCD_Struct_CM5 initialToleranceBefore;
	SCD_Struct_CM5 initialToleranceAfter;
	SCD_Struct_CM5 forwardPlaybackEndTime;
	SCD_Struct_CM5 reversePlaybackEndTime;
	NSDate* initialDate;
	NSDate* initialEstimatedDate;
	char allowsExtendedReadAhead;
	SCD_Struct_CM5 maximumTrailingBufferDuration;
	char shouldOptimizeForExclusivePlayback;
	long long initialPlaybackLikelyToKeepUpTrigger;
	char initialAlwaysMonitorsPlayability;
	char initialWillNeverSeekBackwardsHint;
	char initialContinuesPlayingDuringPrerollForSeek;
	char initialContinuesPlayingDuringPrerollForRateChange;
	char usesIFrameOnlyPlaybackForHighRateScaledEdits;
	char usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
	SCD_Struct_CM5 minimumIntervalForIFrameOnlyPlayback;
	char minimumIntervalForIFrameOnlyPlaybackWasSet;
	float speedThresholdForIFrameOnlyPlayback;
	char speedThresholdForIFrameOnlyPlaybackWasSet;
	CFStringRef initialFigTimePitchAlgorithm;
	char savesDownloadedDataToDiskWhenDone;
	char nonForcedSubtitlesEnabled;
	char networkUsuallyExceedsMaxBitRate;
	char allowProgressiveSwitchUp;
	double preferredPeakBitRate;
	AVAudioMix* audioMix;
	AVVideoComposition* videoComposition;
	AVWeakReference* clientsOriginalVideoComposition;
	void* figVideoCompositor;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	char seekingWaitsForVideoCompositionRendering;
	NSArray* textStyleRules;
	NSDictionary* gaplessInfo;
	long long initialVariantIndex;
	NSMutableArray* handlersToCallWhenReadyForEnqueueing;
	NSMutableDictionary* mediaOptionsSelectedByClient;
	char haveInitialSamples;
	char haveCPEProtector;
	char didSetAssetToAssetWithFigPlaybackItem;
	char didBecomeReadyForBasicInspection;
	char didBecomeReadyForInspectionOfMediaSelectionOptions;
	char didBecomeReadyForInspectionOfTracks;
	char didBecomeReadyForInspectionOfPresentationSize;
	char didBecomeReadyForInspectionOfDuration;
	char didInformObserversAboutAvailabilityOfTracks;
	char didFireKVOForAssetForNonStreamingItem;
	char wasInitializedWithURL;
	char needTimedMetadataNotification;
	char externalSubtitlesEnabled;
	long long lastContentAuthorizationStatus;
	char externalProtectionRequested;
	char requiresAccessLog;
	OpaqueFigSimpleMutexRef seekIDMutex;
	unsigned nextSeekIDToGenerate;
	int pendingSeekID;
	/*^block*/id seekCompletionHandler;
	NSString* dataYouTubeID;
	unsigned RTCReportingFlags;

}
@end

