/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustExposureAndBias : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputBaselineExposure;
	NSNumber* inputExposure;
	NSNumber* inputBias;

}
+(id)customAttributes;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)outputMatrix;
-(void)setInputExposure:(id)arg1 ;
-(void)setInputBias:(id)arg1 ;
-(id)outputImage;
-(id)customAttributes;
@end
