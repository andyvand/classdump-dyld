/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIVector, NSNumber;

@interface CIColorWheelGenerator : CIFilter {

	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputBrightness;
	NSNumber* inputSaturation;

}
-(CGColorRef)createColorAtPoint:(CGPoint)arg1 ;
-(id)outputImage;
-(id)customAttributes;
@end

