/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImageBufferConverter.h>

@interface QCBasicImageBufferConverter : QCImageBufferConverter
+(void)initialize;
-(char)supportsCropping;
-(id)supportedTextureBufferFormatsForFormat:(id)arg1 ;
-(id)createTextureBufferFromImageBuffer:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
-(id)supportedPixelBufferFormatsForFormat:(id)arg1 ;
-(id)createPixelBufferFromImageBuffer:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
@end

