/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSOpenGLLayer.h>

@class QCSCN_View;

@interface QCSCN_BackingLayer : NSOpenGLLayer {

	QCSCN_View* _parentView;
	char _needsRedrawForJittering;

}

@property (__weak) QCSCN_View * parentView;              //@synthesize parentView=_parentView - In the implementation block
-(char)canDrawConcurrently;
-(id)openGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(id)openGLContextForPixelFormat:(id)arg1 ;
-(char)canDrawInOpenGLContext:(id)arg1 pixelFormat:(id)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_QC41*)arg4 ;
-(void)drawInOpenGLContext:(id)arg1 pixelFormat:(id)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_QC41*)arg4 ;
-(void)_jitterRedisplay:(CGLContextObject*)arg1 ;
-(void)_cancelJitterRedisplay;
-(QCSCN_View *)parentView;
-(void)setParentView:(QCSCN_View *)arg1 ;
@end

