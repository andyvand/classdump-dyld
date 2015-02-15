/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@interface ICScannerImageRep : NSObject {

	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bitsPerComponent;
	unsigned long long _bitsPerPixel;
	unsigned long long _bytesPerRow;
	CGColorSpaceRef _colorspace;
	unsigned _bitmapInfo;
	char* _buffer;
	long long _bufferSize;
	long long _bufferSizeUsed;
	int _bufferLock;
	char _bufferUpdated;
	char _useOverlay;
	CGRect _overlayRect;
	char* _overlayBuffer;
	long long _overlayBufferSize;
	unsigned char _backgroundGrayValue;

}

@property (readonly) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (readonly) unsigned long long bitsPerComponent;              //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (readonly) unsigned long long bitsPerPixel;                  //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (readonly) unsigned long long bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (readonly) CGColorSpaceRef colorspace;                       //@synthesize colorspace=_colorspace - In the implementation block
@property (readonly) unsigned bitmapInfo;                              //@synthesize bitmapInfo=_bitmapInfo - In the implementation block
@property (readonly) char* buffer;                                     //@synthesize buffer=_buffer - In the implementation block
@property (readonly) long long bufferSize;                             //@synthesize bufferSize=_bufferSize - In the implementation block
@property (readonly) long long bufferSizeUsed;                         //@synthesize bufferSizeUsed=_bufferSizeUsed - In the implementation block
@property (assign) unsigned char backgroundGrayValue;                  //@synthesize backgroundGrayValue=_backgroundGrayValue - In the implementation block
-(void)setBitsPerPixel:(unsigned long long)arg1 ;
-(void)setBitsPerComponent:(unsigned long long)arg1 ;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(void)setColorspace:(CGColorSpaceRef)arg1 ;
-(id)initWithBufferSize:(unsigned long long)arg1 andBytesPerRow:(unsigned long long)arg2 ;
-(CGRect)overlayRect;
-(void)setOverlayRect:(CGRect)arg1 ;
-(void)clearOverviewImageBuffer;
-(void)setBitmapInfo:(unsigned)arg1 ;
-(void)setBufferSizeUsed:(long long)arg1 ;
-(unsigned long long)copyFromOffset:(long long)arg1 length:(unsigned long long)arg2 toBuffer:(char*)arg3 ;
-(void)copyToRow:(long long)arg1 numRows:(unsigned long long)arg2 fromRGBBuffer:(const char*)arg3 withBytesPerRow:(unsigned long long)arg4 ;
-(char)copyOverlayBuffer:(id)arg1 toRect:(CGRect)arg2 ;
-(CGImageRef)copyCGImage:(char*)arg1 ;
-(void)clearOverlay;
-(long long)bufferSize;
-(long long)bufferSizeUsed;
-(unsigned char)backgroundGrayValue;
-(unsigned)bitmapInfo;
-(void)setHeight:(unsigned long long)arg1 ;
-(char*)buffer;
-(unsigned long long)bitsPerComponent;
-(CGColorSpaceRef)colorspace;
-(void)setBackgroundGrayValue:(unsigned char)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(unsigned long long)bytesPerRow;
-(unsigned long long)bitsPerPixel;
-(void)setWidth:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
@end

