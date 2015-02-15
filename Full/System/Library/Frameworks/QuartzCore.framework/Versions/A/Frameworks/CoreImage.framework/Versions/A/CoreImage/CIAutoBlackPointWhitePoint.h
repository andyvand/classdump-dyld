/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIAutoBlackPointWhitePoint : CIFilter {

	CIImage* inputImage;
	NSNumber* inputQuality;
	NSNumber* inputBlackPoint;
	NSNumber* inputGrayPoint;
	NSNumber* inputWhitePoint;

}
-(id)forcePromise:(id)arg1 ;
-(float)_quality;
-(id)outputImage;
-(id)customAttributes;
@end

