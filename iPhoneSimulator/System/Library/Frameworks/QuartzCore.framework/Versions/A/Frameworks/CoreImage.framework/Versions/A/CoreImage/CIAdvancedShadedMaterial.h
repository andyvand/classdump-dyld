/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIAdvancedShadedMaterial : CIFilter {

	CIImage* inputImage;
	CIImage* inputHeightField;
	CIImage* inputShadingMap;
	NSNumber* inputShadingHeightFactor;
	NSNumber* inputShadingOpacity;
	NSNumber* inputShadingMapHasAlpha;
	NSNumber* inputGenerateTransparency;

}
-(CGRect)transparencyROI:(int)arg1 forRect:(CGRect)arg2 ;
-(CGRect)emapROI:(int)arg1 forRect:(CGRect)arg2 ;
-(id)outputImage;
-(id)customAttributes;
@end

