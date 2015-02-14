/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSLocking.h>

@class NSView, NSOpenGLPixelFormat;

@interface NSOpenGLContext : NSObject <NSLocking> {

	NSView* _view;
	CGLContextObjectRef _CGLContext;

}

@property (readonly) CGSize defaultFramebufferDimensions; 
@property (readonly) char hasDefaultFramebuffer; 
@property (readonly) NSOpenGLPixelFormat * pixelFormat; 
@property (assign) NSView * view; 
@property (assign) int currentVirtualScreen; 
@property (readonly) CGLContextObjectRef CGLContextObj; 
+(void)initialize;
+(id)currentContext;
+(void)clearCurrentContext;
+(id)openGLContextWithCGLContextObj:(CGLContextObjectRef)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(NSView *)view;
-(void)update;
-(void)setView:(NSView *)arg1 ;
-(CGLContextObjectRef)CGLContextObj;
-(id)initWithCGLContextObj:(CGLContextObjectRef)arg1 ;
-(void)clearDrawable;
-(void)_updateOpenGLViewport;
-(void)makeCurrentContext;
-(void)setValues:(const int*)arg1 forParameter:(long long)arg2 ;
-(id)initWithFormat:(id)arg1 shareContext:(id)arg2 ;
-(NSOpenGLPixelFormat *)pixelFormat;
-(void)copyAttributesFromContext:(id)arg1 withMask:(unsigned)arg2 ;
-(void)flushBuffer;
-(void)_surfaceWillGoAway:(id)arg1 ;
-(void)_surfaceDidComeBack:(id)arg1 ;
-(void)setOffScreen:(void*)arg1 width:(int)arg2 height:(int)arg3 rowbytes:(int)arg4 ;
-(void)setFullScreen;
-(void)getValues:(int*)arg1 forParameter:(long long)arg2 ;
-(void)setCurrentVirtualScreen:(int)arg1 ;
-(int)currentVirtualScreen;
-(void)createTexture:(unsigned)arg1 fromView:(id)arg2 internalFormat:(unsigned)arg3 ;
-(CGSize)defaultFramebufferDimensions;
-(char)hasDefaultFramebuffer;
-(char)isSharedWithContext:(id)arg1 ;
-(void*)_contextAuxiliary;
-(id)_initWithCGLContextObj:(void*)arg1 ;
-(id)pixelBuffer;
-(void)setPixelBuffer:(id)arg1 cubeMapFace:(unsigned)arg2 mipMapLevel:(int)arg3 currentVirtualScreen:(int)arg4 ;
-(unsigned)pixelBufferCubeMapFace;
-(int)pixelBufferMipMapLevel;
-(void)setTextureImageToPixelBuffer:(id)arg1 colorBuffer:(unsigned)arg2 ;
@end

