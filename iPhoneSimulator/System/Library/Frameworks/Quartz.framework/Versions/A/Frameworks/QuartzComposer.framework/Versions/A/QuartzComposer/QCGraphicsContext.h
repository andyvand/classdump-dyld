/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCContext.h>

@class QCImageManager, NSMutableDictionary, QCEventManager, QCStreamManager;

@interface QCGraphicsContext : QCContext {

	QCImageManager* _imageManager;
	CGColorSpaceRef _colorspace;
	int _quality;
	int _cachingMode;
	CGRect _fullFrame;
	CGRect _cleanFrame;
	CGRect _fullBounds;
	CGRect _cleanBounds;
	CGSize _pixelAspectRatio;
	CGRect _cleanAperture;
	NSMutableDictionary* _defaultOptions;
	QCEventManager* _eventManager;
	QCStreamManager* _streamManager;
	void** _unused2[1];

}
+(CGColorSpaceRef)defaultColorSpace;
+(Class)renderStateClass;
-(void)finalize;
-(void)dealloc;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)invalidate;
-(CGRect)frame;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(char)isValid;
-(id)imageManager;
-(id)imageManagerDefaultOptions;
-(id)streamManager;
-(void)setPixelAspectRatio:(CGSize)arg1 ;
-(void)setCleanAperture:(CGRect)arg1 ;
-(id)eventManager;
-(CGSize)pixelAspectRatio;
-(CGRect)cleanAperture;
-(id)initWithImageManager:(id)arg1 options:(id)arg2 ;
-(void)_updateOptions;
-(void)_finalize_QCGraphicsContext;
-(char)startRenderingPatch:(id)arg1 options:(id)arg2 ;
-(void)pauseRenderingPatch:(id)arg1 ;
-(double)nextExecutionTimeForPatch:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)renderPatch:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)resumeRenderingPatch:(id)arg1 ;
-(void)stopRenderingPatch:(id)arg1 ;
-(char)willPushRenderState:(id)arg1 ;
-(void)didPushRenderState:(id)arg1 ;
-(void)didPopRenderState:(id)arg1 ;
-(void)_updateDimensions;
-(void)setQualityHint:(int)arg1 ;
-(int)qualityHint;
-(void)setCachingModeHint:(int)arg1 ;
-(int)cachingModeHint;
-(CGRect)convertRectFromFrameToBounds:(CGRect)arg1 ;
-(CGRect)convertRectFromBoundsToFrame:(CGRect)arg1 ;
-(CGRect)fullFrame;
-(CGRect)fullBounds;
-(char)prerenderPatch:(id)arg1 time:(double)arg2 imageSizeHint:(CGSize)arg3 arguments:(id)arg4 ;
@end

