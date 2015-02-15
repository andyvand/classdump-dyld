/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CICheckerboardGenerator : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor0;
	CIColor* inputColor1;
	NSNumber* inputWidth;
	NSNumber* inputSharpness;

}
-(id)outputImage;
-(id)customAttributes;
@end

