/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CIMaterialMapReflectionMapLightGenerator : CIFilter {

	CIImage* inputReflectedImage;
	CIVector* inputBallCenter;
	NSNumber* inputBallRadius;
	NSNumber* inputReflectedImageWidth;
	NSNumber* inputReflectedImageHeight;
	NSNumber* inputAngle;
	NSNumber* inputBrightness;
	CIColor* inputColor;

}
-(CGRect)reflROI:(int)arg1 forRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage;
-(id)customAttributes;
@end

