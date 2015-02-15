/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVScheduledAudioParameters.h>

@class AVMutableScheduledAudioParametersInternal;

@interface AVMutableScheduledAudioParameters : AVScheduledAudioParameters {

	AVMutableScheduledAudioParametersInternal* _mutableScheduledParametersInternal;

}
+(id)scheduledAudioParameters;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_CM6)arg3 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_CM5)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

