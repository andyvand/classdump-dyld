/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage;

@interface RAWConvertLinearToSRGB : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;

}
-(id)outputImage;
@end
