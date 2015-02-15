/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIConvolution3X3 : CIFilter {

	CIImage* inputImage;
	CIVector* inputWeights;
	NSNumber* inputBias;

}
-(CGRect)convolutionROI:(int)arg1 rect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage_GLSL;
-(id)forcePromise:(id)arg1 ;
-(id)outputImage_CLGPU:(int)arg1 ;
-(id)outputImage;
-(id)customAttributes;
-(char)_isIdentity;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
@end

