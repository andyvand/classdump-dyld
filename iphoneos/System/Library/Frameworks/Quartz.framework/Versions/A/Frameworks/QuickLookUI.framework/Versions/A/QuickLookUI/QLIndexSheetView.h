/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>
#import <QuickLookUI/QLScrollControllerDelegate.h>
#import <QuickLookUI/QLScrollable.h>
#import <QuickLookUI/QLDrawingLayerDelegate.h>

@class NSArray, QLScrollController, NSMutableArray, NSMapTable, CALayer, CAScrollLayer, QLDrawingLayer, QLPreviewHighlightItemLayer, NSString;

@interface QLIndexSheetView : NSView <QLScrollControllerDelegate, QLScrollable, QLDrawingLayerDelegate> {

	int _status;
	char _transitioning;
	id _delegate;
	NSArray* _previewItems;
	QLScrollController* _scrollController;
	NSMutableArray* _thumbnailLayers;
	NSMapTable* _visibleThumbnailLayers;
	NSMutableArray* _cachedThumbnailLayers;
	CALayer* _rootLayer;
	CALayer* _maskedLayer;
	CAScrollLayer* _scrollLayer;
	QLDrawingLayer* _maskLayer;
	QLPreviewHighlightItemLayer* _overlayLayer;
	long long _maxColumns;
	long long _maxRows;
	long long _columns;
	long long _rows;
	long long _topRow;
	long long _itemIndex;
	double _margin;
	CGImageRef _placeholderImageRef;
	char _hasDarkBackground;

}

@property (assign) int status;                                          //@synthesize status=_status - In the implementation block
@property (readonly) long long highlightedItemIndex; 
@property (readonly) double animationDuration; 
@property (assign) id<QLIndexSheetViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long maxColumns;                                //@synthesize maxColumns=_maxColumns - In the implementation block
@property (assign) long long maxRows;                                   //@synthesize maxRows=_maxRows - In the implementation block
@property (assign) char hasDarkBackground; 
@property (readonly) char canGoToNextPage; 
@property (readonly) char canGoToPreviousPage; 
@property (readonly) char hasMultiplePages; 
@property (assign) CGRect indexSheetFrame; 
@property (readonly) CGImageRef thumbnailPlaceholderImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) double verticalScrollValue; 
@property (readonly) double verticalKnobProportion; 
@property (assign) double horizontalScrollValue; 
+(char)automaticallyNotifiesObserversOfVerticalScrollValue;
-(CGRect)frameOfDocumentAtIndex:(long long)arg1 ;
-(void)setPreviewItems:(id)arg1 withVisibleIndex:(long long)arg2 ;
-(long long)highlightedItemIndex;
-(CGRect)frameForPreviewItemURL:(id)arg1 ;
-(id)imageForPreviewItemURL:(id)arg1 ;
-(CGRect)indexSheetFrame;
-(CGImageRef)thumbnailPlaceholderImage;
-(id)_highlightedLayer;
-(void)_setHighlightedLayer:(id)arg1 animate:(char)arg2 update:(char)arg3 ;
-(id)titleForThumbnailLayer:(id)arg1 ;
-(void)_selectDocumentFromLayer:(id)arg1 ;
-(void)_updateInternalLayerFrames;
-(void)_updateThumbnailLayers;
-(id)_thumbnailLayerAtIndex:(long long)arg1 ;
-(char)_scrollRowToVisible:(long long)arg1 animate:(char)arg2 ;
-(void)_updateVisibleLayers;
-(void)_layoutThumbnailLayers;
-(void)_updateScrollWithAnimation:(char)arg1 ;
-(void)_updateThumbnails;
-(void)_updateRollover;
-(char)_setupLayers;
-(void)_startTransitionWithItemAtIndex:(long long)arg1 usingTransitionLayer:(id)arg2 atFrame:(CGRect)arg3 ;
-(void)_endTransitionWithLayer:(id)arg1 ;
-(void)_thumnailDidUpdate:(id)arg1 ;
-(void)_updateLayoutForResize;
-(double)verticalScrollValue;
-(long long)_numberOfVisibleRows;
-(NSRange)_visibleRows;
-(double)_verticalIntercellSpace;
-(double)_horizontalIntercellSpace;
-(double)_sideMargin;
-(double)_bottomMargin;
-(double)_topMargin;
-(char)_isRowVisible:(long long)arg1 ;
-(long long)_indexOfDocumentAtRow:(long long)arg1 column:(long long)arg2 ;
-(long long)_maxCachedThumbnails;
-(void)_selectDocumentAtIndex:(long long)arg1 ;
-(id)_setupOverlayLayer;
-(char)hasMultiplePages;
-(void)_updateInvisibleLayers;
-(double)_maxScrollValue;
-(void)_updateRolloverAtPoint:(CGPoint)arg1 ;
-(void)_setScrollValue:(double)arg1 animate:(char)arg2 ;
-(char)_setTopRow:(long long)arg1 animate:(char)arg2 ;
-(void)_goUp:(char)arg1 ;
-(void)_goDown:(char)arg1 ;
-(void)_snapToTopRow;
-(id)_thumbnailLayerHitTest:(CGPoint)arg1 ;
-(void)setVerticalScrollValue:(double)arg1 ;
-(double)scrollController:(id)arg1 pageScrollPercentageForScroller:(id)arg2 ;
-(void)scrollController:(id)arg1 scrollerDidEndTracking:(id)arg2 ;
-(double)verticalKnobProportion;
-(void)drawDrawingLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)activateForItemAtIndex:(long long)arg1 usingTransitionLayer:(id)arg2 atFrame:(CGRect)arg3 ;
-(void)deactivateForItemAtIndex:(long long)arg1 usingTransitionLayer:(id)arg2 atFrame:(CGRect)arg3 ;
-(void)setIndexSheetFrame:(CGRect)arg1 ;
-(void)makeItemAtIndexVisible:(long long)arg1 ;
-(char)hasDarkBackground;
-(void)setHasDarkBackground:(char)arg1 ;
-(void)goToPreviousPage:(id)arg1 ;
-(void)goToNextPage:(id)arg1 ;
-(char)canGoToNextPage;
-(char)canGoToPreviousPage;
-(long long)maxRows;
-(void)setMaxRows:(long long)arg1 ;
-(long long)maxColumns;
-(void)setMaxColumns:(long long)arg1 ;
-(void)setDelegate:(id<QLIndexSheetViewDelegate>)arg1 ;
-(void)dealloc;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id<QLIndexSheetViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 ;
-(char)isOpaque;
-(void)keyDown:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(int)status;
-(char)mouseDownCanMoveWindow;
-(void)mouseUp:(id)arg1 ;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(double)animationDuration;
-(void)mouseMoved:(id)arg1 ;
-(void)viewDidEndLiveResize;
-(unsigned)_CAViewFlags;
-(void)viewWillStartLiveResize;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(double)_animationDuration;
-(void)setStatus:(int)arg1 ;
@end

