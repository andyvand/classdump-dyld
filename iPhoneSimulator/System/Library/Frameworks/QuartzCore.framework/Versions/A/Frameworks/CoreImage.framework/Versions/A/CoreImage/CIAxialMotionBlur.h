/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIAxialMotionBlur : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint0;
	CIVector* inputPoint1;
	NSNumber* inputAmount;
	NSNumber* inputAngle;

}
-(id)accumulate:(id)arg1 :(id)arg2 minRadius:(float)arg3 factor:(float)arg4 ;
-(id)blur:(id)arg1 pass:(int)arg2 ;
-(id)outputImage;
-(id)customAttributes;
@end
