/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CISampleAreaOperation.h>

@class NSArray, NSNumber;

@interface CIBilateralConvolution : CISampleAreaOperation {

	NSArray* inputWeights;
	NSNumber* inputEdgeDetail;

}
-(int)samplesPerPass;
-(CGRect)bilateralInitROI:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(CGRect)bilateralAddROI:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)doBilateralPass:(id)arg1 points:(id)arg2 weights:(id)arg3 sums:(id)arg4 slope:(id)arg5 ;
-(id)outputImage;
@end

