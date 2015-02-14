/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QCPlugInInputImageSource
@required
-(unsigned)textureTarget;
-(CGRect*)imageBounds;
-(CGColorSpaceRef)imageColorSpace;
-(char)shouldColorMatch;
-(char)lockBufferRepresentationWithPixelFormat:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 forBounds:(CGRect)arg3;
-(unsigned long long)bufferPixelsWide;
-(unsigned long long)bufferPixelsHigh;
-(id)bufferPixelFormat;
-(CGColorSpaceRef)bufferColorSpace;
-(const void*)bufferBaseAddress;
-(unsigned long long)bufferBytesPerRow;
-(void)unlockBufferRepresentation;
-(char)lockTextureRepresentationWithColorSpace:(CGColorSpaceRef)arg1 forBounds:(CGRect)arg2;
-(unsigned long long)texturePixelsWide;
-(unsigned long long)texturePixelsHigh;
-(unsigned)textureName;
-(CGColorSpaceRef)textureColorSpace;
-(char)textureFlipped;
-(const float*)textureMatrix;
-(void)bindTextureRepresentationToCGLContext:(CGLContextObject*)arg1 textureUnit:(unsigned)arg2 normalizeCoordinates:(char)arg3;
-(void)unbindTextureRepresentationFromCGLContext:(CGLContextObject*)arg1 textureUnit:(unsigned)arg2;
-(void)unlockTextureRepresentation;

@end

