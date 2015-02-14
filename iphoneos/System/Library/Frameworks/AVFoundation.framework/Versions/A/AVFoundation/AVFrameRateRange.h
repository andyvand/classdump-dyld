/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject {

	AVFrameRateRangeInternal* _internal;

}

@property (readonly) double minFrameRate; 
@property (readonly) double maxFrameRate; 
@property (readonly) SCD_Struct_CM5 maxFrameDuration; 
@property (readonly) SCD_Struct_CM5 minFrameDuration; 
+(SCD_Struct_CM5)frameDurationForFrameRate:(double)arg1 ;
+(id)frameRateRangeWithMinRate:(double)arg1 maxRate:(double)arg2 maxDuration:(SCD_Struct_CM5)arg3 minDuration:(SCD_Struct_CM5)arg4 ;
-(SCD_Struct_CM5)minFrameDuration;
-(double)frameRateForFrameDuration:(SCD_Struct_CM5)arg1 ;
-(id)initWithMinRate:(double)arg1 maxRate:(double)arg2 maxDuration:(SCD_Struct_CM5)arg3 minDuration:(SCD_Struct_CM5)arg4 ;
-(SCD_Struct_CM5)maxFrameDuration;
-(double)minFrameRate;
-(double)maxFrameRate;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
@end

