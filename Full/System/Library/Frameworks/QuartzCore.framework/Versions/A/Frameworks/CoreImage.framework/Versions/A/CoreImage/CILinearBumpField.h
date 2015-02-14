/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, NSNumber;

@interface CILinearBumpField : CIFilter {

	CIVector* inputCenter;
	NSNumber* inputSize;
	NSNumber* inputAngle;
	NSNumber* inputLevel1;
	NSNumber* inputLevel2;

}
-(id)outputImage;
-(id)customAttributes;
@end

