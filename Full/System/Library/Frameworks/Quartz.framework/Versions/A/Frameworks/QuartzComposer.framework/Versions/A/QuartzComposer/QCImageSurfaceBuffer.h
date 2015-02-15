/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImagePixelBuffer.h>

@interface QCImageSurfaceBuffer : QCImagePixelBuffer {

	IOSurfaceRef _surface;

}
-(void)finalize;
-(void)dealloc;
-(unsigned long long)identifier;
-(const void*)baseAddress;
-(char)beginUpdatePixels:(char)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(void*)baseAddressForSkippedRows:(unsigned long long)arg1 skippedPixels:(unsigned long long)arg2 ;
-(void)endUpdatePixels;
-(IOSurfaceRef)surface;
-(id)initWithFormat:(id)arg1 pixelsWide:(unsigned long long)arg2 pixelsHigh:(unsigned long long)arg3 options:(id)arg4 ;
-(id)initWithBaseAddress:(const void*)arg1 format:(id)arg2 pixelsWide:(unsigned long long)arg3 pixelsHigh:(unsigned long long)arg4 options:(id)arg5 ;
-(void)_finalize_QCImageSurfaceBuffer;
@end

