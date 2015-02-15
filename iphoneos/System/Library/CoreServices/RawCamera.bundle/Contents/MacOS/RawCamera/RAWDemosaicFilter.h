/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWDemosaicFilter : RAWFilter {

	CIImage* inputImage;
	CIVector* inputBlacks;
	NSNumber* inputRange;
	CIVector* inputFactors;
	NSNumber* inputPattern;
	CIVector* inputCropRect;
	NSNumber* inputDraftMode;

}
-(CGRect)outset2_roi:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage;
@end
