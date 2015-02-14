/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {

	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigTrackReaderRef _trackReader;
	long long _copySampleCursorServiceOnce;
	OpaqueFigSampleCursorServiceRef _figSampleCursorService;
	char _sampleCursorTimeAccuracyIsExact;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(float)preferredVolume;
-(int)trackID;
-(id)commonMetadata;
-(id)extendedLanguageTag;
-(id)languageCode;
-(id)mediaType;
-(long long)totalSampleDataLength;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)asset;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(char)isSelfContained;
-(char)requiresFrameReordering;
-(float)estimatedDataRate;
-(id)loudnessInfo;
-(float)nominalFrameRate;
-(SCD_Struct_CM5)minSampleDuration;
-(id)segments;
-(id)segmentForTrackTime:(SCD_Struct_CM5)arg1 ;
-(long long)alternateGroupID;
-(char)isExcludedFromAutoselectionInTrackGroup;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(unsigned)_figMediaType;
-(OpaqueFigSampleCursorServiceRef)_getFigSampleCursorServiceReportingTimeAccuracy:(char*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(long long)layer;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)isEnabled;
-(SCD_Struct_CM6)timeRange;
-(CGSize)dimensions;
@end

