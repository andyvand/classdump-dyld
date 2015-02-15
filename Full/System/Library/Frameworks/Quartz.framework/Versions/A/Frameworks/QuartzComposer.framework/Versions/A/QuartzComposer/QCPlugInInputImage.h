/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPlugInInputImageSource.h>

@class QCImage, NSDictionary, QCImageManager, QCPixelFormat, QCImagePixelBuffer, QCImageTextureBuffer;

@interface QCPlugInInputImage : NSObject <QCPlugInInputImageSource> {

	QCImage* _image;
	NSDictionary* _defaultOptions;
	QCImageManager* _imageManager;
	unsigned _textureTarget;
	unsigned long long _maxTextureSize;
	QCPixelFormat* _renderingPixelFormat;
	opaque_pthread_mutex_t _mutex;
	QCImagePixelBuffer* _pixelBuffer;
	QCImagePixelBuffer* _pixelBufferCached;
	CGRect _pixelBufferBounds;
	QCImageTextureBuffer* _textureBuffer;
	QCImageTextureBuffer* _textureBufferCached;
	CGRect _textureBufferBounds;
	SCD_Struct_QC18* _savedState;

}
-(void)dealloc;
-(id)description;
-(id)image;
-(unsigned)textureTarget;
-(CGRect)imageBounds;
-(CGColorSpaceRef)imageColorSpace;
-(char)shouldColorMatch;
-(char)lockBufferRepresentationWithPixelFormat:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 forBounds:(CGRect)arg3 ;
-(unsigned long long)bufferPixelsWide;
-(unsigned long long)bufferPixelsHigh;
-(id)bufferPixelFormat;
-(CGColorSpaceRef)bufferColorSpace;
-(const void*)bufferBaseAddress;
-(unsigned long long)bufferBytesPerRow;
-(void)unlockBufferRepresentation;
-(char)lockTextureRepresentationWithColorSpace:(CGColorSpaceRef)arg1 forBounds:(CGRect)arg2 ;
-(unsigned long long)texturePixelsWide;
-(unsigned long long)texturePixelsHigh;
-(unsigned)textureName;
-(CGColorSpaceRef)textureColorSpace;
-(char)textureFlipped;
-(const float*)textureMatrix;
-(void)bindTextureRepresentationToCGLContext:(CGLContextObject*)arg1 textureUnit:(unsigned)arg2 normalizeCoordinates:(char)arg3 ;
-(void)unbindTextureRepresentationFromCGLContext:(CGLContextObject*)arg1 textureUnit:(unsigned)arg2 ;
-(void)unlockTextureRepresentation;
-(id)initWithImage:(id)arg1 context:(id)arg2 ;
@end

