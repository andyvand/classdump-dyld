/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(id)mediaTypesForMediaCharacteristics;
+(id)keyPathsForValuesAffectingTimeRange;
-(char)isChapterTrack;
-(int)getChapterTrackIDReference;
-(char)isVideoChapterTrack;
-(unsigned)trackMediaSubTypeWithCount:(int*)arg1 ;
-(char)isNonModernVideoChapterTrack;
-(float)preferredVolume;
-(id)metadata;
-(char)hasMediaCharacteristic:(id)arg1 ;
-(int)trackID;
-(id)commonMetadata;
-(id)extendedLanguageTag;
-(id)languageCode;
-(id)mediaType;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)totalSampleDataLength;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(id)formatDescriptions;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(int)naturalTimeScale;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(char)hasProtectedContent;
-(char)isPlayable;
-(long long)statusOfValueForKey:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(char)hasMediaCharacteristics:(id)arg1 ;
-(AVAsset *)asset;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(int)playabilityValidationResult;
-(char)isSelfContained;
-(id)mediaCharacteristics;
-(SCD_Struct_CM6)mediaPresentationTimeRange;
-(SCD_Struct_CM6)mediaDecodeTimeRange;
-(char)requiresFrameReordering;
-(float)estimatedDataRate;
-(id)loudnessInfo;
-(float)nominalFrameRate;
-(id)segments;
-(id)segmentForTrackTime:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)samplePresentationTimeForTrackTime:(SCD_Struct_CM5)arg1 ;
-(long long)alternateGroupID;
-(char)isExcludedFromAutoselectionInTrackGroup;
-(id)associatedTracksOfType:(id)arg1 ;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(id)_trackReferences;
-(char)canProvideSampleCursors;
-(id)makeSampleCursorWithPresentationTimeStamp:(SCD_Struct_CM5)arg1 ;
-(id)makeSampleCursorAtFirstSampleInDecodeOrder;
-(id)makeSampleCursorAtLastSampleInDecodeOrder;
-(id)_assetTrackInspector;
-(char)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(SCD_Struct_CM5)minFrameDuration;
-(id)_fallbackTrack;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)availableTrackAssociationTypes;
-(char)_hasMultipleDistinctFormatDescriptions;
-(char)_hasScaledEdits;
-(char)_hasEmptyEdits;
-(char)_hasMultipleEdits;
-(char)_firstFormatDescriptionIsLPCM;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(long long)layer;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)locale;
-(SCD_Struct_CM6)timeRange;
-(CGSize)dimensions;
@end

