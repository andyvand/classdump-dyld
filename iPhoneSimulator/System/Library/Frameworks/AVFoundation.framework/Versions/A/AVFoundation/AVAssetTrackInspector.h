/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, NSArray, NSString, NSLocale, NSDictionary;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;
	long long _synthesizeMediaCharacteristicsOnce;
	NSArray* _cachedMediaCharacteristics;

}

@property (nonatomic,readonly) int trackID; 
@property (getter=_figMediaType,nonatomic,readonly) unsigned figMediaType; 
@property (getter=_figTrackReader,nonatomic,readonly) OpaqueFigTrackReaderRef figTrackReader; 
@property (getter=_figAssetTrack,nonatomic,readonly) OpaqueFigAssetTrackRef figAssetTrack; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * formatDescriptions; 
@property (getter=isPlayable,nonatomic,readonly) char playable; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (getter=isSelfContained,nonatomic,readonly) char selfContained; 
@property (nonatomic,readonly) long long totalSampleDataLength; 
@property (nonatomic,readonly) SCD_Struct_CM6 timeRange; 
@property (nonatomic,readonly) SCD_Struct_CM6 mediaPresentationTimeRange; 
@property (nonatomic,readonly) SCD_Struct_CM6 mediaDecodeTimeRange; 
@property (nonatomic,readonly) char requiresFrameReordering; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) float estimatedDataRate; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSArray * mediaCharacteristics; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) long long layer; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) NSDictionary * loudnessInfo; 
@property (nonatomic,readonly) float nominalFrameRate; 
@property (nonatomic,readonly) SCD_Struct_CM5 minSampleDuration; 
@property (nonatomic,copy,readonly) NSArray * segments; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) long long alternateGroupID; 
@property (getter=isExcludedFromAutoselectionInTrackGroup,nonatomic,readonly) char excludedFromAutoselectionInTrackGroup; 
@property (nonatomic,readonly) CGSize dimensions; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,readonly) char hasProtectedContent; 
@property (nonatomic,readonly) int playabilityValidationResult; 
@property (nonatomic,readonly) char canProvideSampleCursors; 
+(id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(float)preferredVolume;
-(int)trackID;
-(NSArray *)commonMetadata;
-(NSString *)extendedLanguageTag;
-(NSString *)languageCode;
-(NSString *)mediaType;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)totalSampleDataLength;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(NSArray *)formatDescriptions;
-(id)_weakReference;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(int)naturalTimeScale;
-(NSArray *)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(char)hasProtectedContent;
-(char)isPlayable;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(int)playabilityValidationResult;
-(char)isSelfContained;
-(NSArray *)mediaCharacteristics;
-(SCD_Struct_CM6)mediaPresentationTimeRange;
-(SCD_Struct_CM6)mediaDecodeTimeRange;
-(char)requiresFrameReordering;
-(float)estimatedDataRate;
-(NSDictionary *)loudnessInfo;
-(float)nominalFrameRate;
-(SCD_Struct_CM5)minSampleDuration;
-(NSArray *)segments;
-(id)segmentForTrackTime:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)samplePresentationTimeForTrackTime:(SCD_Struct_CM5)arg1 ;
-(long long)alternateGroupID;
-(char)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(char)canProvideSampleCursors;
-(id)makeSampleCursorWithPresentationTimeStamp:(SCD_Struct_CM5)arg1 ;
-(id)makeSampleCursorAtFirstSampleInDecodeOrder;
-(id)makeSampleCursorAtLastSampleInDecodeOrder;
-(unsigned)_figMediaType;
-(OpaqueFigSampleCursorServiceRef)_getFigSampleCursorServiceReportingTimeAccuracy:(char*)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)layer;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLocale *)locale;
-(SCD_Struct_CM6)timeRange;
-(CGSize)dimensions;
@end

