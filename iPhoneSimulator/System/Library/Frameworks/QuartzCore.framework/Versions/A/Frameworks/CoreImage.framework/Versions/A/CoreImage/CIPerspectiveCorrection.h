/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIPerspectiveCorrection : CIFilter {

	CIImage* inputImage;
	CIVector* inputTopLeft;
	CIVector* inputTopRight;
	CIVector* inputBottomRight;
	CIVector* inputBottomLeft;

}
-(CGRect)perspectiveCorrectionROI:(int)arg1 forRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage;
-(id)customAttributes;
@end

