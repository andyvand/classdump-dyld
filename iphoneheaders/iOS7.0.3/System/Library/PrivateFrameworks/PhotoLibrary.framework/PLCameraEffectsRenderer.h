/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLCameraEffectsRendererDelegate;
#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class EAGLContext, CIContext, NSObject, , PLEffectsFullsizeView, PLEffectsGridView, PLVideoPreviewView;

@interface PLCameraEffectsRenderer : NSObject {

	EAGLContext* _eaglContext;
	CIContext* _ciContext;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	BOOL _isShowingGrid;
	BOOL _gridTransitionInFlight;
	BOOL _gridTransitionIsAnimated;
	<PLCameraEffectsRendererDelegate>* _delegate;
	double _lastReportedFrameDropTime;
	unsigned _totalFramesSinceLastReportedFrameDrop;
	unsigned _droppedFramesSinceLastReportedFrameDrop;
	BOOL __atomicPreviewStartedNotificationNeeded;
	BOOL _atomicMirrorFilterRendering;
	BOOL __previewLayerEnabled;
	BOOL __inBackground;
	PLEffectsFullsizeView* __renderEffectsFullsizeView;
	PLEffectsGridView* __renderGridView;
	PLVideoPreviewView* _atomicVideoPreviewView;
	unsigned _atomicFilterIndex;
	/*^block*/ id __atomicPreviewStartedBlock;
	int _atomicCameraMode;

}

@property (nonatomic,retain) PLVideoPreviewView * videoPreviewView; 
@property (assign,nonatomic) unsigned filterIndex; 
@property (assign,getter=isShowingGrid,nonatomic) BOOL showGrid; 
@property (assign) BOOL mirrorFilterRendering;                                                                            //@synthesize atomicMirrorFilterRendering=_atomicMirrorFilterRendering - In the implementation block
@property (assign) int cameraMode;                                                                                        //@synthesize atomicCameraMode=_atomicCameraMode - In the implementation block
@property (assign,nonatomic) <PLCameraEffectsRendererDelegate> * delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (retain) PLVideoPreviewView * atomicVideoPreviewView;                                                           //@synthesize atomicVideoPreviewView=_atomicVideoPreviewView - In the implementation block
@property (assign) unsigned atomicFilterIndex;                                                                            //@synthesize atomicFilterIndex=_atomicFilterIndex - In the implementation block
@property (setter=_setRenderEffectsFullsizeView:,retain) PLEffectsFullsizeView * _renderEffectsFullsizeView;              //@synthesize _renderEffectsFullsizeView=__renderEffectsFullsizeView - In the implementation block
@property (setter=_setRenderGridView:,retain) PLEffectsGridView * _renderGridView;                                        //@synthesize _renderGridView=__renderGridView - In the implementation block
@property (setter=_setPreviewStartedBlock:,copy) id _previewStartedBlock;                                                 //@synthesize _atomicPreviewStartedBlock=__atomicPreviewStartedBlock - In the implementation block
@property (setter=_setPreviewStartedNotificationNeeded:) BOOL _previewStartedNotificationNeeded;                          //@synthesize _atomicPreviewStartedNotificationNeeded=__atomicPreviewStartedNotificationNeeded - In the implementation block
@property (assign,setter=_setPreviewLayerEnabled:,nonatomic) BOOL _previewLayerEnabled;                                   //@synthesize _previewLayerEnabled=__previewLayerEnabled - In the implementation block
@property (setter=_setInBackground:,getter=_isInBackground) BOOL _inBackground;                                           //@synthesize _inBackground=__inBackground - In the implementation block
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setCameraMode:(int)arg1 ;
-(int)cameraMode;
-(void)_deviceStarted:(id)arg1 ;
-(void)renderWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)didDropSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setMirrorFilterRendering:(BOOL)arg1 ;
-(void)setFilterIndex:(unsigned)arg1 forceStateChange:(BOOL)arg2 renderNotifyBlock:(/*^block*/ id)arg3 ;
-(id)videoPreviewView;
-(void)setVideoPreviewView:(id)arg1 ;
-(BOOL)isShowingGrid;
-(void)setShowGrid:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned)filterIndex;
-(void)setFilterIndex:(unsigned)arg1 ;
-(void)_setInBackground:(BOOL)arg1 ;
-(void)_createContextIfNecessary;
-(void)_setPreviewLayerEnabled:(BOOL)arg1 ;
-(void)_setVideoDataOutputEnabled:(BOOL)arg1 ;
-(void)_setPreviewStartedNotificationNeeded:(BOOL)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(void)_tearDownEffectsView:(id)arg1 ;
-(BOOL)_isInBackground;
-(id)_renderEffectsFullsizeView;
-(id)_renderGridView;
-(void)_setupEffectsView:(id)arg1 ;
-(unsigned)atomicFilterIndex;
-(void)setAtomicFilterIndex:(unsigned)arg1 ;
-(void)_updateEffectsFullsizeView;
-(void)_setPreviewStartedBlock:(/*^block*/ id)arg1 ;
-(void)_forceResetToFilteredRendering:(BOOL)arg1 ;
-(void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(/*^block*/ id)arg1 ;
-(id)atomicVideoPreviewView;
-(void)_destroyEffectsFullsizeView;
-(void)_destroyEffectsGridView;
-(void)setAtomicVideoPreviewView:(id)arg1 ;
-(id)_setupEffectsGridView;
-(id)_setupEffectsFullsizeView;
-(void)_setRenderEffectsFullsizeView:(id)arg1 ;
-(void)_setRenderGridView:(id)arg1 ;
-(BOOL)mirrorFilterRendering;
-(void)_notifyOfRenderIfNecessary;
-(void)_renderWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateStatsForFrameWasDropped:(BOOL)arg1 ;
-(void)_reportStatsForFrameDrops;
-(void)_resumeRendering;
-(BOOL)_previewStartedNotificationNeeded;
-(void)_handlePreviewStartedFiltered:(BOOL)arg1 ;
-(/*^block*/ id)_previewStartedBlock;
-(BOOL)_gridTransitionInFlight;
-(void)_setGridTransitionIsInFlight:(BOOL)arg1 ;
-(void)_transitionToGrid:(/*^block*/ id)arg1 ;
-(void)_transitionFromGrid:(/*^block*/ id)arg1 ;
-(id)_animatedLayerForView:(id)arg1 ;
-(CGRect)_gridFrameForCurrentFilters;
-(void)_animateToGrid:(BOOL)arg1 layer:(id)arg2 fadeOutLayer:(id)arg3 startFrame:(CGRect)arg4 endFrame:(CGRect)arg5 completion:(/*^block*/ id)arg6 ;
-(void)_animateGridLayerZoomToGrid:(BOOL)arg1 ;
-(CGRect)_frameToZoomFromFrame:(CGRect)arg1 toFrame:(CGRect)arg2 withinFrame:(CGRect)arg3 ;
-(void)_animateLayer:(id)arg1 startFrame:(CGRect)arg2 endFrame:(CGRect)arg3 viewTransform:(CGAffineTransform)arg4 animationDuration:(double)arg5 animationTimingFunction:(id)arg6 animationDelegate:(id)arg7 ;
-(CGRect)_zoomedFrameForRect:(CGRect)arg1 fromFullFrame:(CGRect)arg2 toZoomFrame:(CGRect)arg3 ;
-(void)setShowGrid:(BOOL)arg1 ;
-(BOOL)_previewLayerEnabled;
@end
