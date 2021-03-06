/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>
#import <QuickLookUI/QLScrollable.h>
#import <QuickLookUI/QLDrawingLayerDelegate.h>

@protocol QLPreviewPageNavigationDataSource;
@class NSObject, NSMapTable, CALayer, QLDrawingLayer, CAScrollLayer, QLScrollController, NSString;

@interface QLPreviewPageNavigationView : NSView <QLScrollable, QLDrawingLayerDelegate> {

	NSObject*<QLPreviewPageNavigationDataSource> _dataSource;
	char _enableUpdates;
	char _needsUpdate;
	NSMapTable* _pageLayers;
	CALayer* _rootLayer;
	QLDrawingLayer* _maskLayer;
	CAScrollLayer* _pagesLayer;
	QLScrollController* _scrollController;
	int _gradientPositions;
	double _deltas;
	double _scrollValue;

}

@property (assign) id<QLPreviewPageNavigationDataSource> dataSource; 
@property (assign) char enableUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) double verticalScrollValue; 
@property (readonly) double verticalKnobProportion; 
@property (assign) double horizontalScrollValue; 
+(id)keyPathsForValuesAffectingVerticalScrollValue;
+(id)keyPathsForValuesAffectingVerticalKnobProportion;
-(char)enableUpdates;
-(char)mustHandleEvent:(id)arg1 ;
-(void)setEnableUpdates:(char)arg1 ;
-(double)verticalScrollValue;
-(void)setVerticalScrollValue:(double)arg1 ;
-(double)verticalKnobProportion;
-(void)drawDrawingLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)_updatePages;
-(id)_pageLayerForPage:(unsigned long long)arg1 ;
-(CGSize)_pageSize;
-(char)_getFullHeight:(double*)arg1 visibleHeight:(double*)arg2 ;
-(void)_scrollToValue:(double)arg1 animate:(char)arg2 ;
-(void)_updatePageThumbnails;
-(int)_selectedHighlightMode;
-(void)_updateScroll;
-(void)_setCurrentPage:(unsigned long long)arg1 ;
-(void)scaleFactorDidChange:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(char)acceptsFirstResponder;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)setDataSource:(id<QLPreviewPageNavigationDataSource>)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id<QLPreviewPageNavigationDataSource>)dataSource;
-(unsigned)_CAViewFlags;
@end

