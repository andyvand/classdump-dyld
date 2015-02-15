/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CILinearGradientWithCubicEndsGenerator : CIFilter {

	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIColor* inputColor0;
	CIColor* inputColor1;
	NSNumber* inputRedSlope0;
	NSNumber* inputRedSlope1;
	NSNumber* inputRedBreak0;
	NSNumber* inputRedBreak1;
	NSNumber* inputRedLinearSlope;
	NSNumber* inputRedLinearBias;
	NSNumber* inputGreenSlope0;
	NSNumber* inputGreenSlope1;
	NSNumber* inputGreenBreak0;
	NSNumber* inputGreenBreak1;
	NSNumber* inputGreenLinearSlope;
	NSNumber* inputGreenLinearBias;
	NSNumber* inputBlueSlope0;
	NSNumber* inputBlueSlope1;
	NSNumber* inputBlueBreak0;
	NSNumber* inputBlueBreak1;
	NSNumber* inputBlueLinearSlope;
	NSNumber* inputBlueLinearBias;
	NSNumber* inputAlphaSlope0;
	NSNumber* inputAlphaSlope1;
	NSNumber* inputAlphaBreak0;
	NSNumber* inputAlphaBreak1;
	NSNumber* inputAlphaLinearSlope;
	NSNumber* inputAlphaLinearBias;
	NSNumber* inputGamma;

}
-(id)outputImage;
-(id)customAttributes;
@end

