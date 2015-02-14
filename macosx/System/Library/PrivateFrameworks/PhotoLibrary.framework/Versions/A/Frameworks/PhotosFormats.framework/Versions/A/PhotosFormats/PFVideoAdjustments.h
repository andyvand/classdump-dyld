/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/Versions/A/Frameworks/PhotosFormats.framework/Versions/A/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <PhotosFormats/PFAssetAdjustments.h>

@interface PFVideoAdjustments : PFAssetAdjustments {

	float _slowMotionRate;
	SCD_Struct_PF1 _slowMotionTimeRange;

}

@property (nonatomic,readonly) float slowMotionRate; 
@property (nonatomic,readonly) SCD_Struct_PF1 slowMotionTimeRange; 
@property (nonatomic,readonly) SCD_Struct_PF1 slowMotionRampIn; 
@property (nonatomic,readonly) SCD_Struct_PF1 slowMotionRampOut; 
@property (assign,nonatomic) float slowMotionRate;                              //@synthesize slowMotionRate=_slowMotionRate - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF1 slowMotionTimeRange;                //@synthesize slowMotionTimeRange=_slowMotionTimeRange - In the implementation block
+(id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1 ;
+(float)defaultSlowMotionRateForNominalFrameRate:(float)arg1 ;
+(SCD_Struct_PF1)defaultSlowMotionTimeRangeForDuration:(SCD_Struct_PF0)arg1 ;
-(SCD_Struct_PF1)slowMotionTimeRange;
-(void)setSlowMotionTimeRange:(SCD_Struct_PF1)arg1 ;
-(char)hasSlowMotionAdjustments;
-(float)slowMotionRate;
-(id)initWithSlowMotionTimeRange:(SCD_Struct_PF1)arg1 rate:(float)arg2 ;
-(char)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(SCD_Struct_PF1*)arg2 rate:(float*)arg3 ;
-(id)initWithPropertyListDictionary:(id)arg1 ;
-(void)_updateDerivedPropertiesFromVersionedData;
-(char)_isSlowMotionFormat;
-(char)_parseVersionedDataForSlowMotionTimeRange:(SCD_Struct_PF1*)arg1 rate:(float*)arg2 ;
-(void)setSlowMotionRate:(float)arg1 ;
-(id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1 ;
-(char)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(SCD_Struct_PF1*)arg2 rate:(float*)arg3 ;
-(char)isRecognizedFormat;
-(id)_dictionaryFromSlowMotionTimeRange:(SCD_Struct_PF1)arg1 rate:(float)arg2 ;
-(char)_isValidSlowMotionTimeRange:(SCD_Struct_PF1)arg1 rate:(float)arg2 ;
-(SCD_Struct_PF1)slowMotionRampIn;
-(SCD_Struct_PF1)slowMotionRampOut;
-(SCD_Struct_PF0)convertToScaledTimeFromOriginalTime:(SCD_Struct_PF0)arg1 forExport:(char)arg2 ;
-(SCD_Struct_PF0)convertToOriginalTimeFromScaledTime:(SCD_Struct_PF0)arg1 forExport:(char)arg2 ;
-(id)description;
@end

