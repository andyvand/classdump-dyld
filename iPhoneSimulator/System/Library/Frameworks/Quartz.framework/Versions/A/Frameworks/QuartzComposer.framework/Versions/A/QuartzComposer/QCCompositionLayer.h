/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzCore/CAOpenGLLayer.h>
#import <QuartzComposer/QCCompositionRenderer.h>

@interface QCCompositionLayer : CAOpenGLLayer <QCCompositionRenderer> {

	void* _QCCompositionLayerPrivate;

}
+(id)defaultValueForKey:(id)arg1 ;
+(id)defaultRenderingOptions;
+(char)automaticRedisplay;
+(char)implicitParameterAnimations;
+(char)shouldRenderOnBackgroundThread;
+(id)compositionLayerWithFile:(id)arg1 ;
+(id)compositionLayerWithComposition:(id)arg1 ;
-(void)setAsynchronous:(char)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)invalidate;
-(id)actionForKey:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(id)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(CGPoint)mouseLocation;
-(void*)observationInfo;
-(id)attributes;
-(id)event;
-(void)_finishInitialization;
-(void)setObservationInfo:(void*)arg1 ;
-(CGLPixelFormatObjectRef)copyCGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(void)drawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_QC41*)arg4 ;
-(void)releaseCGLPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(CGLContextObject*)copyCGLContextForPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(void)releaseCGLContext:(CGLContextObject*)arg1 ;
-(char)canDrawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_QC41*)arg4 ;
-(void)setEvent:(id)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(id)patch;
-(id)renderingContext;
-(id)initWithPatch:(id)arg1 ;
-(id)inputKeys;
-(id)outputKeys;
-(id)valueForInputKey:(id)arg1 ;
-(id)valueForOutputKey:(id)arg1 ;
-(char)setValue:(id)arg1 forInputKey:(id)arg2 ;
-(id)valueForOutputKey:(id)arg1 ofType:(id)arg2 ;
-(id)propertyListFromInputValues;
-(void)setInputValuesWithPropertyList:(id)arg1 ;
-(id)composition;
-(char)renderAtTime:(double)arg1 arguments:(id)arg2 ;
-(id)initWithComposition:(id)arg1 andPatch:(id)arg2 ;
-(id)initWithComposition:(id)arg1 ;
-(char)needsRender:(double)arg1 arguments:(id)arg2 ;
-(void)_releaseOpenGLContext;
-(id)_parameterValues;
-(void)setMouseLocation:(CGPoint)arg1 ;
-(void)__portUpdated:(id)arg1 ;
-(void)setRenderingAspectRatio:(CGSize)arg1 ;
-(CGSize)renderingAspectRatio;
@end

