/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAOpenGLLayer.h>

@interface WebGLLayer : CAOpenGLLayer {

	GraphicsContext3D* _context;
	float _devicePixelRatio;

}

@property (assign,nonatomic) GraphicsContext3D* context;              //@synthesize context=_context - In the implementation block
-(id)initWithGraphicsContext3D:(GraphicsContext3D*)arg1 ;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(GraphicsContext3D*)context;
-(void)display;
-(CGLPixelFormatObjectRef)copyCGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(void)drawInCGLContext:(CGLContextObjectRef)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_We31*)arg4 ;
-(CGLContextObjectRef)copyCGLContextForPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(void)setContext:(GraphicsContext3D*)arg1 ;
@end

