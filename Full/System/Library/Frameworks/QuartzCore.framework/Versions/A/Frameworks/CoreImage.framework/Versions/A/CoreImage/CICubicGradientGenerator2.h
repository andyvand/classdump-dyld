/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, NSNumber, CIColor;

@interface CICubicGradientGenerator2 : CIFilter {

	CIVector* inputPoint0;
	CIVector* inputPoint1;
	NSNumber* inputSmoothness;
	CIColor* inputColor0;
	CIColor* inputColor1;
	NSNumber* inputLocation0;
	NSNumber* inputLocation1;
	NSNumber* inputSpread0;
	NSNumber* inputSpread1;

}
-(id)outputImage;
-(id)customAttributes;
@end

