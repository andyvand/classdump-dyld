/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface CIBurstFaceStat : NSObject <NSCopying> {

	BOOL leftEyeOpen;
	BOOL rightEyeOpen;
	BOOL smiling;
	BOOL hasLeftEye;
	BOOL hasRightEye;
	BOOL foundByFaceCore;
	CGRect faceRect;
	CGRect leftEyeRect;
	CGRect rightEyeRect;
	float leftEyeBlinkScore;
	float rightEyeBlinkScore;
	float smileScore;
	CGRect normalizedFaceRect;
	int faceId;
	int framesSinceLast;
	float focusScore;
	float faceScore;
	float normalizedFocusScore;
	float normalizedSigma;
	BOOL hasRollAngle;
	BOOL hasYawAngle;
	float rollAngle;
	float yawAngle;
	double timestamp;

}

@property (assign) BOOL leftEyeOpen; 
@property (assign) BOOL rightEyeOpen; 
@property (assign) BOOL smiling; 
@property (assign) float leftEyeBlinkScore; 
@property (assign) float rightEyeBlinkScore; 
@property (assign) float smileScore; 
@property (assign) BOOL hasLeftEye; 
@property (assign) BOOL hasRightEye; 
@property (assign) BOOL foundByFaceCore; 
@property (assign) CGRect faceRect; 
@property (assign) CGRect normalizedFaceRect; 
@property (assign) int faceId; 
@property (assign) int framesSinceLast; 
@property (assign) float focusScore; 
@property (assign) float faceScore; 
@property (assign) CGRect leftEyeRect; 
@property (assign) CGRect rightEyeRect; 
@property (assign) float normalizedFocusScore; 
@property (assign) float normalizedSigma; 
@property (assign) BOOL hasRollAngle; 
@property (assign) BOOL hasYawAngle; 
@property (assign) float rollAngle; 
@property (assign) float yawAngle; 
@property (assign) double timestamp; 
-(int)faceId;
-(void)setFaceId:(int)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(int)framesSinceLast;
-(void)setFramesSinceLast:(int)arg1 ;
-(void)setNormalizedFaceRect:(CGRect)arg1 ;
-(void)setFoundByFaceCore:(BOOL)arg1 ;
-(void)setHasLeftEye:(BOOL)arg1 ;
-(void)setHasRightEye:(BOOL)arg1 ;
-(void)setLeftEyeOpen:(BOOL)arg1 ;
-(void)setRightEyeOpen:(BOOL)arg1 ;
-(void)setSmiling:(BOOL)arg1 ;
-(void)setLeftEyeBlinkScore:(float)arg1 ;
-(void)setRightEyeBlinkScore:(float)arg1 ;
-(void)setSmileScore:(float)arg1 ;
-(BOOL)leftEyeOpen;
-(BOOL)rightEyeOpen;
-(void)setLeftEyeRect:(CGRect)arg1 ;
-(void)setRightEyeRect:(CGRect)arg1 ;
-(BOOL)foundByFaceCore;
-(BOOL)hasLeftEye;
-(BOOL)hasRightEye;
-(CGRect)leftEyeRect;
-(CGRect)rightEyeRect;
-(void)setFocusScore:(float)arg1 ;
-(float)focusScore;
-(void)setNormalizedFocusScore:(float)arg1 ;
-(void)setNormalizedSigma:(float)arg1 ;
-(void)setHasRollAngle:(BOOL)arg1 ;
-(void)setRollAngle:(float)arg1 ;
-(void)setHasYawAngle:(BOOL)arg1 ;
-(void)setYawAngle:(float)arg1 ;
-(BOOL)smiling;
-(CGRect)normalizedFaceRect;
-(float)normalizedSigma;
-(float)normalizedFocusScore;
-(float)faceScore;
-(float)leftEyeBlinkScore;
-(float)rightEyeBlinkScore;
-(float)smileScore;
-(id)initWithFaceStat:(id)arg1 ;
-(void)setFaceScore:(float)arg1 ;
-(BOOL)hasRollAngle;
-(BOOL)hasYawAngle;
-(float)rollAngle;
-(float)yawAngle;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end
