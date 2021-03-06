/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <CoreImage/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputOrigI;
	NSNumber* inputOrigQ;
	NSNumber* inputStrength;
	NSNumber* inputWarmth;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputOrigI; 
@property (nonatomic,copy) NSNumber * inputOrigQ; 
@property (nonatomic,copy) NSNumber * inputStrength; 
@property (nonatomic,copy) NSNumber * inputWarmth; 
-(void)setInputOrigI:(NSNumber *)arg1 ;
-(void)setInputOrigQ:(NSNumber *)arg1 ;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(void)setInputWarmth:(NSNumber *)arg1 ;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(NSNumber *)inputOrigI;
-(NSNumber *)inputOrigQ;
-(NSNumber *)inputStrength;
-(NSNumber *)inputWarmth;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(id)customAttributes;
-(char)_isIdentity;
@end

