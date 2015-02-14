/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData;

@interface RAWLensCorrectionLateralCAFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputLateralCAAmount;
	NSData* inputLateralCAMap;
	NSNumber* inputLateralCAMapWidth;
	NSNumber* inputLateralCAMapHeight;
	id inputColorSpace;
	CIImage* mapImg;

}
+(id)customAttributes;
-(BOOL)makeMapImages;
-(CGRect)mapPoint:(CGPoint)arg1 extent:(CGRect)arg2 map:(const vec4*)arg3 mapWidth:(int)arg4 mapHeight:(int)arg5 amount:(float)arg6 ;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage;
-(id)customAttributes;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
@end

