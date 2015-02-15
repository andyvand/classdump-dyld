/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKDrawing : NSObject
+(void)pushRoundedRectPath:(CGRect)arg1 inContext:(CGContextRef)arg2 withCornerRadius:(float)arg3 topLeftCorner:(char)arg4 topRightCorner:(char)arg5 bottomRightCorner:(char)arg6 bottomLeftCorner:(char)arg7 alignOnPixelCenter:(char)arg8 ;
+(void)drawBorderImage:(id)arg1 middleImage:(id)arg2 borderImage:(id)arg3 inRect:(CGRect)arg4 withOrientation:(unsigned long long)arg5 flipped:(char)arg6 operation:(unsigned long long)arg7 fraction:(float)arg8 ;
+(id)_pathOfImageWithName:(id)arg1 inBundle:(id)arg2 ;
+(char)loadCGImageNamed:(id)arg1 fromBundle:(id)arg2 into:(CGImage*)arg3 ;
+(char)loadNSImageNamed:(id)arg1 fromBundle:(id)arg2 into:(id*)arg3 ;
+(void)pushRoundedRectPath:(CGRect)arg1 inContext:(CGContextRef)arg2 withCornerRadius:(float)arg3 alignOnPixelCenter:(char)arg4 ;
+(void)drawBorderImage:(id)arg1 middleImage:(id)arg2 borderImage:(id)arg3 inRect:(CGRect)arg4 withOrientation:(unsigned long long)arg5 flipped:(char)arg6 ;
+(void)drawImage:(id)arg1 withBackgroundImage:(id)arg2 atPoint:(CGPoint)arg3 fraction:(float)arg4 ;
+(char)loadCGImageNamed:(id)arg1 into:(CGImage*)arg2 ;
+(char)loadNSImageNamed:(id)arg1 into:(id*)arg2 ;
+(id)imageNamed:(id)arg1 fromBundle:(id)arg2 ;
+(void)pushLineFrom:(CGPoint)arg1 to:(CGPoint)arg2 inContext:(CGContextRef)arg3 ;
+(id)imageNamed:(id)arg1 ;
@end

