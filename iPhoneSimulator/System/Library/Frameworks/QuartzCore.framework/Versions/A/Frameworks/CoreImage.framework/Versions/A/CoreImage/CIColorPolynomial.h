/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorPolynomial : CIFilter {

	CIImage* inputImage;
	CIVector* inputRedCoefficients;
	CIVector* inputGreenCoefficients;
	CIVector* inputBlueCoefficients;
	CIVector* inputAlphaCoefficients;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRedCoefficients; 
@property (nonatomic,retain) CIVector * inputGreenCoefficients; 
@property (nonatomic,retain) CIVector * inputBlueCoefficients; 
@property (nonatomic,retain) CIVector * inputAlphaCoefficients; 
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(CIVector *)inputRedCoefficients;
-(void)setInputRedCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputGreenCoefficients;
-(void)setInputGreenCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputBlueCoefficients;
-(void)setInputBlueCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputAlphaCoefficients;
-(void)setInputAlphaCoefficients:(CIVector *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(id)customAttributes;
-(char)_isIdentity;
@end

