/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface IKThresholdCorrection : CIFilter {

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

