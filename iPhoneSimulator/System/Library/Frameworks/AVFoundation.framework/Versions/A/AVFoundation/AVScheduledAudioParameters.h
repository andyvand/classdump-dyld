/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>
#import <AVFoundation/NSMutableCopying.h>

@class AVScheduledAudioParametersInternal, NSArray;

@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying> {

	AVScheduledAudioParametersInternal* _scheduledParametersInternal;

}

@property (setter=_setRamps:,getter=_ramps,nonatomic,copy) NSArray * ramps; 
-(id)_audioVolumeCurve;
-(id)_volumeCurveAsString;
-(void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_CM6)arg3 ;
-(char)getVolumeRampForTime:(SCD_Struct_CM5)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_CM6*)arg4 ;
-(void)_setRamps:(id)arg1 ;
-(id)_ramps;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

