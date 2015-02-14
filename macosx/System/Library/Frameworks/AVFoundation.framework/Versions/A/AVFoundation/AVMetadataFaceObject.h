/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <AVFoundation/NSCopying.h>

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {

	AVMetadataFaceObjectInternal* _internal;

}

@property (readonly) long long faceID; 
@property (readonly) char hasRollAngle; 
@property (readonly) double rollAngle; 
@property (readonly) char hasYawAngle; 
@property (readonly) double yawAngle; 
-(long long)faceID;
-(char)hasRollAngle;
-(double)rollAngle;
-(char)hasYawAngle;
-(double)yawAngle;
-(id)initWithFaceID:(long long)arg1 hasRollAngle:(char)arg2 rollAngle:(double)arg3 hasYawAngle:(char)arg4 yawAngle:(double)arg5 time:(SCD_Struct_CM5)arg6 duration:(SCD_Struct_CM5)arg7 bounds:(CGRect)arg8 ;
-(id)initWithType:(id)arg1 time:(SCD_Struct_CM5)arg2 duration:(SCD_Struct_CM5)arg3 bounds:(CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(char)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithFaceID:(long long)arg1 hasRollAngle:(char)arg2 rollAngle:(double)arg3 hasYawAngle:(char)arg4 yawAngle:(double)arg5 time:(SCD_Struct_CM5)arg6 duration:(SCD_Struct_CM5)arg7 bounds:(CGRect)arg8 originalMetadataObject:(id)arg9 sourceCaptureInput:(id)arg10 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

