/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIColor, NSNumber;

@interface CISpotColor : CIFilter {

	CIImage* inputImage;
	CIColor* inputCenterColor1;
	CIColor* inputReplacementColor1;
	NSNumber* inputCloseness1;
	NSNumber* inputContrast1;
	CIColor* inputCenterColor2;
	CIColor* inputReplacementColor2;
	NSNumber* inputCloseness2;
	NSNumber* inputContrast2;
	CIColor* inputCenterColor3;
	CIColor* inputReplacementColor3;
	NSNumber* inputCloseness3;
	NSNumber* inputContrast3;

}
-(id)outputImage;
-(id)customAttributes;
@end

