/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIVector, CIColor;

@interface CILinearGradient : CIFilter {

	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIColor* inputColor0;
	CIColor* inputColor1;
	int filterVersion;

}
-(id)initWithCompatibilityVersion:(int)arg1 ;
-(id)_provideFilterCopyWithZone:(NSZone*)arg1 ;
-(int)compatibilityVersion;
-(id)outputImage;
-(id)customAttributes;
-(id)init;
@end

