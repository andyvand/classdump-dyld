/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <CoreImage/_CIFilterProperties.h>

@class CIImage, CIVector;

@interface CICrop : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	CIVector* inputRectangle;

}
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(id)outputImage;
-(id)customAttributes;
@end
