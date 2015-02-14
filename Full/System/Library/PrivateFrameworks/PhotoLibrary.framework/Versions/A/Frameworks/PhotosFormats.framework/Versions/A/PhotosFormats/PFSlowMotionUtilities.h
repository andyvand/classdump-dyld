/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/Versions/A/Frameworks/PhotosFormats.framework/Versions/A/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFSlowMotionUtilities : NSObject
+(id)sharedConfiguration;
+(char)scaleAVCFAsset:(OpaqueAVCFAssetRef)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(SCD_Struct_PF1)arg3 forExport:(char)arg4 allocator:(CFAllocatorRef)arg5 outComposition:(OpaqueAVCFAsset*)arg6 outAudioMix:(OpaqueAVCFAudioMix*)arg7 outError:(_CFError*)arg8 ;
+(id)assetFromVideoAsset:(id)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(SCD_Struct_PF1)arg3 forExport:(char)arg4 outAudioMix:(id*)arg5 outTimeRangeMapper:(id*)arg6 ;
+(id)exportPresetForAsset:(id)arg1 preferredPreset:(id)arg2 ;
+(void)configureExportSession:(id)arg1 forcePreciseConversion:(char)arg2 ;
+(id)timeRangeMapperForSourceDuration:(double)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(SCD_Struct_PF1)arg3 forExport:(char)arg4 ;
+(int)preferredTimeScale;
+(char)_isValidSlowMotionRate:(float)arg1 ;
+(char)_isValidSlowMotionTimeRange:(SCD_Struct_PF1)arg1 ;
+(id)_scaledCompositionForAsset:(id)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(SCD_Struct_PF1)arg3 forExport:(char)arg4 outTimeRangeMapper:(id*)arg5 ;
+(id)audioMixForScaledComposition:(id)arg1 timeRangeMapper:(id)arg2 ;
+(id)_slowMotionRegionsFromSlowMotionTimeRange:(SCD_Struct_PF1)arg1 ;
+(char)_scaleComposition:(id)arg1 compositionCF:(OpaqueAVCFAssetRef)arg2 baseDuration:(double)arg3 slowMotionRate:(float)arg4 slowMotionRegions:(id)arg5 forExport:(char)arg6 outTimeRangeMapper:(id*)arg7 ;
+(OpaqueAVCFAssetRef)_createScaledAVCFCompositionForAsset:(OpaqueAVCFAssetRef)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(SCD_Struct_PF1)arg3 forExport:(char)arg4 allocator:(CFAllocatorRef)arg5 outTimeRangeMapper:(id*)arg6 outError:(_CFError*)arg7 ;
+(OpaqueAVCFAudioMixRef)_createAVCFAudioMixForScaledComposition:(OpaqueAVCFAssetRef)arg1 timeRangeMapper:(id)arg2 allocator:(CFAllocatorRef)arg3 ;
+(void)_applyPreferredTransformFromAsset:(OpaqueAVCFAssetRef)arg1 toComposition:(OpaqueAVCFAssetRef)arg2 ;
+(double)_scaleWithinComposition:(id)arg1 compositionCF:(OpaqueAVCFAssetRef)arg2 fromCursor:(double)arg3 timeStep:(double)arg4 rate:(float)arg5 timeRangeMapper:(id)arg6 ;
+(SCD_Struct_PF1)_timeRangeFromTime:(float)arg1 toTime:(float)arg2 ;
+(id)_setVolume:(float)arg1 forSlowMotionRegionsInTrack:(id)arg2 timeRangeMapper:(id)arg3 ;
+(OpaqueAVCFAudioMixInputParametersRef)_createInputParametersForSlowMotionRegionsInTrack:(OpaqueAVCFAssetTrackRef)arg1 timeRangeMapper:(id)arg2 volume:(float)arg3 allocator:(CFAllocatorRef)arg4 ;
+(SCD_Struct_PF1)adjustTimeRange:(SCD_Struct_PF1)arg1 forNewStartTime:(SCD_Struct_PF0)arg2 endTime:(SCD_Struct_PF0)arg3 ;
@end

