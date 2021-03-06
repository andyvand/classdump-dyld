/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAOpenGLLayer : CALayer {

	CAOpenGLLayerPrivate* _glPriv;

}

@property (assign) float maximumFrameRate; 
@property (assign) unsigned long long maximumDrawableCount; 
@property (getter=isAsynchronous) char asynchronous; 
+(id)CA_attributes;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(char)shouldRenderOnBackgroundThread;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(char)_scheduleAnimationTimer;
-(void)_cancelAnimationTimer;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(char)asynchronous;
-(unsigned long long)maximumDrawableCount;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
-(void)setAsynchronous:(char)arg1 ;
-(void)_display;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)layerDidChangeDisplay:(unsigned)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)invalidateContents;
-(CGLPixelFormatObjectRef)copyCGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(void)drawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_CA24*)arg4 ;
-(void)releaseCGLPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(CGLContextObject*)copyCGLContextForPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(void)releaseCGLContext:(CGLContextObject*)arg1 ;
-(char)canDrawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_CA24*)arg4 ;
-(void)setMaximumFrameRate:(float)arg1 ;
-(char)isAsynchronous;
-(float)maximumFrameRate;
@end

