/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImageBuffer.h>

@interface QCImagePixelBuffer : QCImageBuffer {

	unsigned long long _rowBytes;
	char _purgeable;
	void** _unused2[4];

}
-(id)description;
-(unsigned long long)bytesPerRow;
-(char)purgeable;
-(char)setPurgeable:(char)arg1 ;
-(void*)baseAddress;
-(void)clearBuffer;
-(char)beginUpdatePixels:(char)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(void*)baseAddressForSkippedRows:(unsigned long long)arg1 skippedPixels:(unsigned long long)arg2 ;
-(void)endUpdatePixels;
-(id)initWithFormat:(id)arg1 baseAddress:(const void*)arg2 releaseCallback:(/*function pointer*/void*)arg3 releaseInfo:(void*)arg4 bytesPerRow:(unsigned long long)arg5 pixelsWide:(unsigned long long)arg6 pixelsHigh:(unsigned long long)arg7 flipped:(char)arg8 colorSpace:(CGColorSpaceRef)arg9 options:(id)arg10 ;
-(CGImageRef)createCGImageWithRenderingIntent:(int)arg1 shouldInterpolate:(char)arg2 ;
-(id)initWithFormat:(id)arg1 pixelsWide:(unsigned long long)arg2 pixelsHigh:(unsigned long long)arg3 options:(id)arg4 ;
-(id)pixelBufferRepresentation;
-(id)initWithPixelBuffer:(id)arg1 bounds:(CGRect)arg2 replacingFormat:(id)arg3 ;
-(CGContextRef)createCGContext;
-(void)clearToBlack;
@end

