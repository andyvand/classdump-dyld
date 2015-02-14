/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSOpenGLView.h>

@class NSOpenGLContext;

@interface IKImageFlowView : NSOpenGLView {

	id _dataSource;
	id _dragDestinationDelegate;
	id _delegate;
	void* _reserved;
	char _wasLayerBacked;
	NSOpenGLContext* _backingLayerContext;

}
+(char)flowViewIsSupportedByCurrentHardware;
+(void)setImportAnimationStyle:(unsigned long long)arg1 ;
+(void)initialize;
+(id)pixelFormat;
-(float)offset;
-(unsigned long long)itemsCount;
-(id)visibleCellIndexes;
-(void)initMovingAndDisappearingAnimationWithItems:(id)arg1 diff:(id)arg2 ;
-(void)initAppearingAnimationWithItems:(id)arg1 diff:(id)arg2 ;
-(void)initImportAnimationWithIndexes:(id)arg1 ;
-(void)setAnimationsMask:(unsigned)arg1 ;
-(unsigned)animationsMask;
-(id)animationValueForKey:(id)arg1 forCell:(id)arg2 ;
-(id)openGLContextCreateIfNeeded:(char)arg1 ;
-(id)cacheManager;
-(id)cellsArrayForTasks;
-(void)startFreeTemporaryCache;
-(void)abortFreeTemporaryCache;
-(id)freeTemporaryCacheProgress;
-(void)_taskRedisplay;
-(char)_convertColor:(id)arg1 toRed:(float*)arg2 green:(float*)arg3 blue:(float*)arg4 alpha:(float*)arg5 ;
-(void)switchOffCARenderer;
-(id)caRenderer;
-(void)switchOnCARenderer;
-(void)_drawCALayer:(id)arg1 forceUpdateRect:(char)arg2 ;
-(char)inlinePreviewEnabled;
-(void)drawInlinePreview;
-(void)performSynchronousTasksIfAny;
-(void)drawVisibleCells:(CGRect)arg1 ;
-(void)restartTasks;
-(char)drawWithCurrentRendererInRect:(CGRect)arg1 ;
-(void)__copyGLToCurrentFocusedView;
-(void)caNeedsDisplay;
-(CGRect)viewportRect;
-(id)prepareThumbnailBuilderForCell:(id)arg1 size:(double)arg2 quality:(int)arg3 ;
-(char)nicestRenderingExpendStep;
-(void)nicestRenderingLoop;
-(void)startNicestRendering;
-(void)abortNicestRendering;
-(id)nicestRenderingProgress;
-(id)nicestRenderingDelay;
-(double)cellMargin;
-(char)scrollBy:(CGSize)arg1 ;
-(char)_didComputeThumbnail:(id)arg1 ;
-(void)_didImportThumbnail:(id)arg1 ;
-(char)_needImport:(id)arg1 forCellSize:(double)arg2 ;
-(void)_didImportAsynchronousThumbnail:(id)arg1 ;
-(char)_importThumbnails:(id)arg1 state:(SCD_Struct_IK28*)arg2 ;
-(char)_shouldProcessLongTasks;
-(void)startImportVisibleCells;
-(void)abortImportVisibleCells;
-(id)importVisibleCellsPriority;
-(int)heightOfInfoSpace;
-(CGRect)titleFrame;
-(CGRect)subtitleFrame;
-(char)delegatesImageManagementToDatasource;
-(char)trackingOfRequestingViewsEnabled;
-(id)_viewIdentifier;
-(void)drawTitle;
-(void)initRenderingContext;
-(void)setCacheManager:(id)arg1 ;
-(void)_ikCommonInit;
-(void)setInlinePreviewEnabled:(char)arg1 ;
-(void)_cacheDidPurge:(id)arg1 ;
-(void)_cacheWillPurge:(id)arg1 ;
-(void)scrollerDidChange:(id)arg1 ;
-(void)switchOnCARenderer:(id)arg1 ;
-(id)newCellForRepresentedItem:(id)arg1 ;
-(void)deleteSelection;
-(void)frameDidChange:(id)arg1 ;
-(void)_colorProfileDidChange;
-(id)glRenderer;
-(void)setupInlinePreview;
-(void)unsetupInlinePreview;
-(char)_containsCell:(id)arg1 ;
-(unsigned long long)indexAtLocationOfDroppedItem;
-(void)setTrackingOfRequestingViewsEnabled:(char)arg1 ;
-(void)setDelegatesImageManagementToDatasource:(char)arg1 ;
-(id)thumbnailImageAtIndex:(unsigned long long)arg1 ;
-(void)_reloadCellDataAtIndex:(unsigned long long)arg1 ;
-(void)reloadAllCellsData;
-(void)reloadCellDataAtIndex:(unsigned long long)arg1 ;
-(void)setDraggingDestinationDelegate:(id)arg1 ;
-(char)_updateIndexAndDropOperationWithDrop:(id)arg1 ;
-(void)setIsDraggingOver:(char)arg1 ;
-(void)stopAutoscroll;
-(id)draggingDestinationDelegate;
-(CGPoint)dragStartPoint;
-(void)startDragNDropWithEvent:(id)arg1 ;
-(char)inlinePreviewMouseDown:(id)arg1 ;
-(void)updateInlinePreviewTrackingAreas;
-(void)inlinePreviewMouseEntered:(id)arg1 ;
-(void)inlinePreviewMouseExited:(id)arg1 ;
-(long long)indexOfItemAtPoint:(CGPoint)arg1 ;
-(void)autoscrollCallBack;
-(void)startAutoscroll;
-(void)_scaleFactorDidChange:(id)arg1 ;
-(void)__ikSetupGLContext:(id)arg1 ;
-(char)updatesCGSurfaceOnDrawRect;
-(void)setUpdatesCGSurfaceOnDrawRect:(char)arg1 ;
-(void)dataSourceDidChange;
-(id)backgroundLayer;
-(void)setBackgroundLayer:(id)arg1 ;
-(unsigned long long)cellIndexAtLocation:(CGPoint)arg1 ;
-(char)shouldStartTaskNamed:(id)arg1 ;
-(void)_updateTasksCellsCopy;
-(void)_cancelSynchronousTask;
-(void)_scrollingAnimationCallback;
-(void)_cellFinishedImportAnimation:(id)arg1 ;
-(float)convertPixelUnitTo3DUnit:(float)arg1 ;
-(char)backgroundIsBlack;
-(char)feedbackMode;
-(void*)fogShader;
-(void)_getFogColorForCell:(id)arg1 reflection:(char)arg2 red:(float*)arg3 green:(float*)arg4 blue:(float*)arg5 ;
-(id)dropOverCell;
-(CGSize)imageRenderedSize;
-(char)backgroundIsLight;
-(double)alignOnPixelValue;
-(char)cellsAlignOnBaseline;
-(void)registerTasks;
-(void)keyWindowChanged:(id)arg1 ;
-(void)_scrollerPrefsDidChange;
-(void)_setDefaultTextAttributes;
-(void)_adjustScroller;
-(void)setCellsAlignOnBaseline:(char)arg1 ;
-(void)_setBackgroundColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(float)pageScrollValue;
-(void)setScrollerValueFromSelection;
-(void)_ikSetNeedsDisplay;
-(void)removeInlinePreview;
-(void)updateInlinePreview;
-(void)updateLayoutInRange:(NSRange)arg1 ;
-(void)animateScrolling;
-(char)installViewport;
-(void)installPerspetiveViewportForPicking:(char)arg1 location:(CGPoint)arg2 ;
-(CGRect)clampedBounds;
-(char)hitTestWithImage:(id)arg1 x:(float)arg2 y:(float)arg3 ;
-(void)invalidateCameraPosition;
-(CGRect)splitterTrackingRect;
-(char)showScroller;
-(double)_viewAspectRatio;
-(double)cameraDZ;
-(int)_countOfVisibleCellsOnEachSide;
-(unsigned long long)focusedIndex;
-(int)countOfVisibleCellsOnEachSide;
-(float)fogAtLocation:(float)arg1 ;
-(NSRange)rangeOfVisibleIndexesAtSelection;
-(NSRange)rangeOfVisibleIndexes;
-(void)zoomOnSelectedLayerLayout:(NSRange)arg1 ;
-(void)flowLayout:(NSRange)arg1 ;
-(char)showSubtitles;
-(CGRect)clampedFrame;
-(double)_zScreen;
-(double)_computeCameraDZ;
-(double)_computeCameraDY;
-(int)cellIndexAtPosition:(float)arg1 ;
-(float)convert3DUnitToPixelUnit:(float)arg1 z:(float)arg2 ;
-(char)didImportCell:(id)arg1 thumbnail:(id)arg2 visible:(char)arg3 ;
-(void)makeContextCurrent;
-(void)_contextDidChange;
-(void)_drawBluishBackgroundColor;
-(void)drawBluishBackground;
-(char)inlinePreviewIsVisible;
-(double)cameraDY;
-(void)synchronousDisplayIfNeeded;
-(void)_drawCALayer:(id)arg1 inRect:(CGRect)arg2 forceUpdateRect:(char)arg3 ;
-(CGRect)splitterFrame;
-(CGRect)selectedImageFrame;
-(void)drawFocusRing;
-(void)setupGLState;
-(void)drawOverlaysInRect:(CGRect)arg1 ;
-(void)__copyPixels:(void*)arg1 withSize:(CGSize)arg2 toCurrentFocusedViewAtPoint:(CGPoint)arg3 scaleFactor:(double)arg4 ;
-(void)didStabilize;
-(char)itemAtIndexIsLoaded:(unsigned long long)arg1 ;
-(id)visibleCellIndexesAtSelection;
-(void)flipCellsWithOldSelectedIndex:(unsigned long long)arg1 newSelectedIndex:(unsigned long long)arg2 ;
-(char)showSplitter;
-(void)setShowSplitter:(char)arg1 ;
-(void)setShowSubtitles:(char)arg1 ;
-(void)setZoomOnSelectedLayer:(char)arg1 ;
-(char)zoomOnSelectedLayer;
-(char)bluishFlavorSupported;
-(void)setBluishFlavor:(char)arg1 ;
-(char)bluishFlavor;
-(void)setForegroundLayer:(id)arg1 ;
-(id)foregroundLayer;
-(id)cellBorderColor;
-(void)setCellBorderColor:(id)arg1 ;
-(double)imageAspectRatio;
-(void)setImageAspectRatio:(double)arg1 ;
-(void)setBorderMask:(unsigned)arg1 ;
-(id)previewImageAtIndex:(unsigned long long)arg1 ;
-(id)imageFlowContext;
-(void)setImageFlowContext:(id)arg1 ;
-(void)drawBluishBackgroundColorInRect:(CGRect)arg1 ;
-(char)autoscrollWithLocalPoint:(CGPoint)arg1 ;
-(char)copyDataToPasteboard:(id)arg1 ;
-(unsigned long long)cellIndexAtMouseEvent:(id)arg1 ;
-(id)_scrollerEventForEvent:(id)arg1 ;
-(char)handleDoubleClickOnCellAtIndex:(unsigned long long)arg1 ;
-(void)stopScrollingAnimation;
-(void)_autoSelectCallback;
-(char)__scrollerIsVisible;
-(id)nicestRenderingPriority;
-(void)startPrefetchThumbnails;
-(void)abortPrefetchThumbnails;
-(id)prefetchThumbnailsProgress;
-(id)prefetchThumbnailsDelay;
-(int)_prepareThumbnailBuildersForCells:(id)arg1 size:(int)arg2 start:(long long)arg3 quality:(int)arg4 skipPlaceHolders:(char)arg5 arrayOut:(id)arg6 ;
-(id)prepareThumbnailBuildersForCells:(id)arg1 size:(int)arg2 quality:(int)arg3 skipPlaceHolders:(char)arg4 ;
-(NSRange)_rangeToPrefetch;
-(char)_freeTemporaryCacheStepWithVisibleIndexes:(id)arg1 ;
-(void)__performSynchronousTasksIfAnyInSecondaryThread:(id)arg1 delegate:(id)arg2 ;
-(id)inlinePreviewView;
-(void)setSharingPreviewPanel:(id)arg1 ;
-(id)sharingPreviewPanel;
-(CGRect)inlinePreview:(id)arg1 frameForPreviewItem:(id)arg2 ;
-(void)inlinePreview:(id)arg1 didLoadPreviewItem:(id)arg2 ;
-(void)inlinePreview:(id)arg1 didChangeToState:(int)arg2 ;
-(id)inlinePreviewItemForCellAtIndex:(long long)arg1 ;
-(void)_inlinePreviewLayerTreeDidChange;
-(void)startInlinePreviewWithReflectedLayer:(id)arg1 ;
-(void)_inlinePreviewRedisplay;
-(CGRect)_reflectionFrame;
-(void)_showOverlayIfNeeded;
-(void)stopInlinePreview;
-(void)stopPlayingInlinePreview;
-(id)inlinePreviewController;
-(void)startInlinePreview;
-(CGRect)displayedImageFrame;
-(char)inlinePreviewShouldAlwaysHandleMultiClicks:(id)arg1 ;
-(void)drawBackground;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setHidden:(char)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(unsigned)accessibilityIndexOfChild:(id)arg1 ;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)delegate;
-(char)isAnimating;
-(id)accessibilityChildren;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(char)isOpaque;
-(id)backgroundColor;
-(void)reloadData;
-(id)cells;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(Class)cellClass;
-(void)setCellClass:(Class)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)resetCursorRects;
-(void)mouseDown:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id)dataSource;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(void)updateTrackingAreas;
-(id)draggedImage;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)setCellBackgroundColor:(id)arg1 ;
-(id)cellBackgroundColor;
-(id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(char)wantsBestResolutionOpenGLSurface;
-(id)pixelFormat;
-(id)openGLContext;
-(void)setOpenGLContext:(id)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(void)renewGState;
-(id)renderer;
-(id)_createLayer;
-(void)invalidateLayout;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)taskManager;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)updateLayout;
-(void)defaultDoubleClickAction:(int)arg1 ;
-(void)setNextFrameTime:(double)arg1 ;
@end

