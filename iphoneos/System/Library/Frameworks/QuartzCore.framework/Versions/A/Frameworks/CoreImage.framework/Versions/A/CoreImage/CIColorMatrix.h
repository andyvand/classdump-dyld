/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorMatrix : CIFilter {

	CIImage* inputImage;
	CIVector* inputRVector;
	CIVector* inputGVector;
	CIVector* inputBVector;
	CIVector* inputAVector;
	CIVector* inputBiasVector;

}
-(id)outputImage;
-(id)customAttributes;
@end

