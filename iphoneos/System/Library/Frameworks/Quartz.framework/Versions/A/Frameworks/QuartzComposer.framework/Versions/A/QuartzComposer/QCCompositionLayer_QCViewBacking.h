/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCCompositionLayer.h>

@interface QCCompositionLayer_QCViewBacking : QCCompositionLayer {

	double _beginTimeOffset;
	double _pauseTime;
	CGColorRef _clearColor;
	SCD_Struct_QC42 _renderState;

}
-(void)drawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_QC41*)arg4 ;
-(char)canDrawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_QC41*)arg4 ;
-(void)_setEraseColor:(CGColorRef)arg1 ;
-(void)_erase;
-(double)_beginTimeOffset;
-(char)_startRendering;
-(void)_stopRendering;
-(void)_pauseRendering;
-(void)_resumeRendering;
-(char)_isRendering;
-(char)_isPausedRendering;
@end

