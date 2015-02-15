/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface IKTemperatureCorrection : CIFilter {

	CIImage* inputImage;
	NSNumber* inputPower;

}
+(void)registerFilter;
+(id)filterWithName:(id)arg1 ;
-(id)outputImage;
-(id)customAttributes;
-(char)_isIdentity;
-(id)init;
@end

