/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIPhotoEffect : CIFilter {

	CIImage* inputImage;
	int filterVersion;

}

@property (nonatomic,retain) CIImage * inputImage; 
-(id)initWithCompatibilityVersion:(int)arg1 ;
-(id)_provideFilterCopyWithZone:(NSZone*)arg1 ;
-(int)compatibilityVersion;
-(int)bestVersion;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(id)init;
@end

