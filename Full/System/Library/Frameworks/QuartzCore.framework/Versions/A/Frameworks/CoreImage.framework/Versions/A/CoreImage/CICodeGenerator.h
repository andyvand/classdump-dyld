/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class NSData;

@interface CICodeGenerator : CIFilter {

	NSData* inputMessage;

}

@property (nonatomic,copy) NSData * inputMessage; 
-(CGImageRef)outputCGImage;
-(NSData *)inputMessage;
-(void)setInputMessage:(NSData *)arg1 ;
-(id)outputImage;
@end

