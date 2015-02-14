/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <QuartzCore/CAOpenGLLayer.h>

@class NSOpenGLPixelFormat, NSOpenGLContext, NSView;

@interface NSOpenGLLayer : CAOpenGLLayer {

	NSOpenGLPixelFormat* _openGLPixelFormat;
	NSOpenGLContext* _openGLContext;
	void** _reserved[5];

}

@property (assign) NSView * view; 
@property (retain) NSOpenGLPixelFormat * openGLPixelFormat;              //@synthesize openGLPixelFormat=_openGLPixelFormat - In the implementation block
@property (retain) NSOpenGLContext * openGLContext;                      //@synthesize openGLContext=_openGLContext - In the implementation block
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(NSView *)view;
-(void)display;
-(void)setView:(NSView *)arg1 ;
-(void)_NS_invalidateSuggestedContentsScale;
-(void)_appkitViewBackingLayerUniqueMethod;
-(NSOpenGLContext *)openGLContext;
-(void)setOpenGLContext:(NSOpenGLContext *)arg1 ;
-(CGLPixelFormatObjectRef)copyCGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(void)drawInCGLContext:(CGLContextObjectRef)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_NS98*)arg4 ;
-(id)openGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(void)setOpenGLPixelFormat:(NSOpenGLPixelFormat *)arg1 ;
-(NSOpenGLPixelFormat *)openGLPixelFormat;
-(id)openGLContextForPixelFormat:(id)arg1 ;
-(char)canDrawInOpenGLContext:(id)arg1 pixelFormat:(id)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_NS98*)arg4 ;
-(void)drawInOpenGLContext:(id)arg1 pixelFormat:(id)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_NS98*)arg4 ;
-(oneway void)releaseCGLPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(CGLContextObjectRef)copyCGLContextForPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(oneway void)releaseCGLContext:(CGLContextObjectRef)arg1 ;
-(char)canDrawInCGLContext:(CGLContextObjectRef)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_NS98*)arg4 ;
@end

