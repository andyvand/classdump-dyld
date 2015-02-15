/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWEdgeSharpen : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputPreSharpenAmount;
	NSNumber* inputPreSharpenBlurAmount;
	NSNumber* inputVersion;

}
-(CGRect)regionOf:(int)arg1 rect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage;
-(id)customAttributes;
@end

