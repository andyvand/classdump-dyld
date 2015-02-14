/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSError, AVAsset, AVAssetTrack, NSString, NSURL, AVAudioMix, AVVideoComposition, AVCustomVideoCompositorSession, NSArray, AVMetadataItemFilter;

@interface AVAssetExportSessionInternal : NSObject {

	AVWeakReference* weakReference;
	dispatch_queue_sRef readWriteQueue;
	OpaqueFigRemakerRef remaker;
	long long status;
	NSError* error;
	float progress;
	AVAsset* asset;
	AVAssetTrack* firstVideoTrack;
	NSString* preset;
	NSString* preset16x9;
	NSURL* outputURL;
	NSString* outputFileType;
	NSString* actualOutputFileType;
	NSString* audioTimePitchAlgorithm;
	AVAudioMix* audioMix;
	AVVideoComposition* videoComposition;
	void* figVideoCompositor;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	NSArray* metadata;
	AVMetadataItemFilter* metadataItemFilter;
	SCD_Struct_CM6 timeRange;
	SCD_Struct_CM5 minVideoFrameDuration;
	char canUseFastFrameRateConversion;
	NSString* videoFrameRateConversionAlgorithm;
	char waitingForFastFrameRateResponse;
	dispatch_semaphore_sRef canUseFastFrameRateConversionSemaphore;
	long long maxFileSize;
	/*^block*/id handler;
	char optimizeForNetworkUse;
	char useMultiPass;
	NSURL* directoryForTemporaryFiles;
	char outputFileCreatedByRemaker;
	long long compatibleFileTypesDispatchOncePredicate;
	NSArray* compatibleFileTypes;
	dispatch_queue_sRef remakerNotificationSerializationQueue;

}
@end

