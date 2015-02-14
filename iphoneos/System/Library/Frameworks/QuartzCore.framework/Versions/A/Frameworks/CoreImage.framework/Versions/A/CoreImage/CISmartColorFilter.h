/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISmartColorFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputVibrancy;
	NSNumber* inputContrast;
	NSNumber* inputCast;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputVibrancy; 
@property (nonatomic,retain) NSNumber * inputContrast; 
@property (nonatomic,retain) NSNumber * inputCast; 
-(NSNumber *)inputContrast;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(NSNumber *)inputVibrancy;
-(void)setInputVibrancy:(NSNumber *)arg1 ;
-(NSNumber *)inputCast;
-(void)setInputCast:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(id)customAttributes;
-(char)_isIdentity;
@end

