/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <AppKit/NSScrollerImpPairDelegate.h>
#import <AppKit/NSTextFinderBarContainer.h>

@class NSView, NSScroller, NSClipView, NSRulerView, NSCursor, NSColor, NSString;

@interface NSScrollView : NSView <NSScrollerImpPairDelegate, NSTextFinderBarContainer> {

	NSScroller* _vScroller;
	NSScroller* _hScroller;
	NSClipView* _contentView;
	NSClipView* _headerClipView;
	NSView* _cornerView;
	id _ruler;
	struct {
		unsigned RESERVED : 3;
		unsigned unarchiving : 1;
		unsigned registeredForWindowWillClose : 1;
		unsigned findBarPosition : 2;
		unsigned predominantAxisScrolling : 1;
		unsigned hContentElasticity : 2;
		unsigned vContentElasticity : 2;
		unsigned unused : 1;
		unsigned findBarVisible : 1;
		unsigned autoforwardsScrollWheelEvents : 1;
		unsigned autohidesScrollers : 1;
		unsigned hasCustomLineBorderColor : 1;
		unsigned focusRingNeedsRedisplay : 1;
		unsigned skipRemoveSuperviewCheck : 1;
		unsigned doesNotDrawBackground : 1;
		unsigned needsTile : 1;
		unsigned hasVerticalRuler : 1;
		unsigned hasHorizontalRuler : 1;
		unsigned showRulers : 1;
		unsigned oldRulerInstalled : 1;
		unsigned borderType : 2;
		unsigned noDynamicScrolling : 1;
		unsigned hScrollerStatus : 1;
		unsigned vScrollerStatus : 1;
		unsigned hScrollerRequired : 1;
		unsigned vScrollerRequired : 1;
	}  _sFlags;
	void* _extraIvars;
	NSRulerView* _horizontalRuler;
	NSRulerView* _verticalRuler;

}

@property (assign) char rulersVisible; 
@property (assign) char hasHorizontalRuler; 
@property (assign) char hasVerticalRuler; 
@property (retain) NSRulerView * horizontalRulerView; 
@property (retain) NSRulerView * verticalRulerView; 
@property (assign) NSEdgeInsets contentInset; 
@property (assign) char automaticallyAdjustsContentViewInsets; 
@property (readonly) CGRect documentVisibleRect; 
@property (readonly) CGSize contentSize; 
@property (assign) id documentView; 
@property (retain) NSClipView * contentView; 
@property (retain) NSCursor * documentCursor; 
@property (assign) unsigned long long borderType; 
@property (copy) NSColor * backgroundColor; 
@property (assign) char drawsBackground; 
@property (assign) char hasVerticalScroller; 
@property (assign) char hasHorizontalScroller; 
@property (retain) NSScroller * verticalScroller; 
@property (retain) NSScroller * horizontalScroller; 
@property (assign) char autohidesScrollers; 
@property (assign) double horizontalLineScroll; 
@property (assign) double verticalLineScroll; 
@property (assign) double lineScroll; 
@property (assign) double horizontalPageScroll; 
@property (assign) double verticalPageScroll; 
@property (assign) double pageScroll; 
@property (assign) char scrollsDynamically; 
@property (assign) long long scrollerStyle; 
@property (assign) long long scrollerKnobStyle; 
@property (assign) long long horizontalScrollElasticity; 
@property (assign) long long verticalScrollElasticity; 
@property (assign) char usesPredominantAxisScrolling; 
@property (assign) char allowsMagnification; 
@property (assign) double magnification; 
@property (assign) double maxMagnification; 
@property (assign) double minMagnification; 
@property (assign) char automaticallyAdjustsContentInsets; 
@property (assign) NSEdgeInsets contentInsets; 
@property (assign) NSEdgeInsets scrollerInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSView * findBarView; 
@property (getter=isFindBarVisible) char findBarVisible; 
+(void)initialize;
+(id)_findScrollViewToAutoLiveScrollInWindow:(id)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(CGSize)frameSizeForContentSize:(CGSize)arg1 hasHorizontalScroller:(char)arg2 hasVerticalScroller:(char)arg3 borderType:(unsigned long long)arg4 ;
+(Class)_verticalScrollerClass;
+(CGSize)contentSizeForFrameSize:(CGSize)arg1 hasHorizontalScroller:(char)arg2 hasVerticalScroller:(char)arg3 borderType:(unsigned long long)arg4 ;
+(CGSize)contentSizeForFrameSize:(CGSize)arg1 horizontalScrollerClass:(Class)arg2 verticalScrollerClass:(Class)arg3 borderType:(unsigned long long)arg4 controlSize:(unsigned long long)arg5 scrollerStyle:(long long)arg6 ;
+(id)defaultAnimationForKey:(id)arg1 ;
+(char)isCompatibleWithResponsiveScrolling;
+(CGSize)frameSizeForContentSize:(CGSize)arg1 horizontalScrollerClass:(Class)arg2 verticalScrollerClass:(Class)arg3 borderType:(unsigned long long)arg4 controlSize:(unsigned long long)arg5 scrollerStyle:(long long)arg6 ;
+(Class)_horizontalScrollerClass;
+(Class)rulerViewClass;
+(void)setRulerViewClass:(Class)arg1 ;
+(void)_setShowsResponsiveScrollingStatus:(char)arg1 ;
-(id)safari_swapClipViewForNewClipViewWithClassIfNecessary:(Class)arg1 ;
-(void)dd_addHighlightsView:(id)arg1 ;
-(id)dd_highlightsViews;
-(id)ax_dd_highlightViews;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2 ;
-(id)_webcore_effectiveFirstResponder;
-(CGRect)documentVisibleRectIncludingContentInsets;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(void)setLayer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)accessibilityPositionAttribute;
-(id)accessibilitySizeAttribute;
-(id)accessibilityChildrenAttribute;
-(NSClipView *)contentView;
-(void)layout;
-(void)setNextKeyView:(id)arg1 ;
-(void)removeFromSuperview;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)delegate;
-(void)updateLayer;
-(id)hitTest:(CGPoint)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(NSScroller *)verticalScroller;
-(void)_automateLiveScroll;
-(void)setContentView:(NSClipView *)arg1 ;
-(char)isFlipped;
-(char)wantsUpdateLayer;
-(void)setNeedsLayout:(char)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)viewWillDraw;
-(unsigned long long)borderType;
-(void)_didRemoveLayer;
-(char)isOpaque;
-(void)setBorderType:(unsigned long long)arg1 ;
-(char)preservesContentDuringLiveResize;
-(void)willRemoveSubview:(id)arg1 ;
-(char)_drawRectIfEmpty;
-(NSColor *)backgroundColor;
-(id)_contentView;
-(id)accessibilityContentsAttribute;
-(char)accessibilityIsContentsAttributeSettable;
-(id)documentView;
-(char)hasHorizontalScroller;
-(void)tile;
-(void)setDocumentView:(id)arg1 ;
-(void)setDrawsBackground:(char)arg1 ;
-(void)setCopiesOnScroll:(char)arg1 ;
-(void)setHasHorizontalScroller:(char)arg1 ;
-(NSScroller *)horizontalScroller;
-(void)setAutohidesScrollers:(char)arg1 ;
-(char)autohidesScrollers;
-(void)_windowChangedKeyState;
-(CGRect)documentVisibleRect;
-(void)setAutoforwardsScrollWheelEvents:(char)arg1 ;
-(void)setVerticalScrollElasticity:(long long)arg1 ;
-(void)setHorizontalScrollElasticity:(long long)arg1 ;
-(void)setHasVerticalScroller:(char)arg1 ;
-(CGSize)contentSize;
-(void)_setLineBorderColor:(id)arg1 ;
-(void)setHorizontalLineScroll:(double)arg1 ;
-(char)acceptsFirstResponder;
-(double)horizontalLineScroll;
-(char)becomeFirstResponder;
-(char)needsPanelToBecomeKey;
-(char)drawsBackground;
-(void)_doScroller:(id)arg1 hitPart:(long long)arg2 multiplier:(double)arg3 ;
-(void)scrollWheel:(id)arg1 ;
-(void)_handleBoundsChangeForSubview:(id)arg1 ;
-(void)_overlayScroller:(id)arg1 didBecomeShown:(char)arg2 ;
-(long long)scrollerStyle;
-(void)_lockOverlayScrollerState:(unsigned long long)arg1 ;
-(void)_unlockOverlayScrollerState;
-(void)viewDidMoveToWindow;
-(void)setScrollerStyle:(long long)arg1 ;
-(char)_accessoryViewMightInterfereWithOverlayScrollers:(id)arg1 ;
-(id)_lineBorderColor;
-(id)scrollerImpPair;
-(void)setLineScroll:(double)arg1 ;
-(id)accessibilityHorizontalScrollBarAttribute;
-(char)accessibilityIsHorizontalScrollBarAttributeSettable;
-(void)_setWindow:(id)arg1 ;
-(void)_setKeyboardFocusRingNeedsDisplayDuringLiveResize;
-(void)setAutomaticallyAdjustsContentInsets:(char)arg1 ;
-(void)reflectScrolledClipView:(id)arg1 ;
-(void)scrollClipView:(id)arg1 toPoint:(CGPoint)arg2 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(NSEdgeInsets)contentInsets;
-(char)drawsContentShadow;
-(char)_allowsVerticalStretching;
-(char)_allowsHorizontalStretching;
-(void)_recursiveGainedLayerTreeHostAncestor;
-(void)_recursiveLostLayerTreeHostAncestor;
-(id)_headerClipView;
-(void)setContentInsets:(NSEdgeInsets)arg1 ;
-(char)automaticallyAdjustsContentInsets;
-(void)_reflectDocumentViewBoundsChange;
-(double)verticalLineScroll;
-(double)_repeatMultiplier:(double)arg1 ;
-(void)_drawRect:(CGRect)arg1 clip:(char)arg2 ;
-(void)_informDelegateUserDidLiveScroll;
-(void)_invalidateOverlayScrollerDebrisForScrollCopyOfClipView:(id)arg1 byDeltas:(CGPoint)arg2 ;
-(void)setDocumentCursor:(NSCursor *)arg1 ;
-(void)setDrawsContentShadow:(char)arg1 ;
-(NSEdgeInsets)contentInset;
-(void)setContentInset:(NSEdgeInsets)arg1 ;
-(NSCursor *)documentCursor;
-(Class)_animatorClass;
-(void)pageUp:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(double)magnification;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)setMagnification:(double)arg1 ;
-(double)_magnification;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(char)hasVerticalScroller;
-(void)_finishedMakingConnections;
-(void)_windowWillClose:(id)arg1 ;
-(char)_hasRectangularFocusRingAroundFrame;
-(void)showActiveFirstResponderIndication;
-(void)drawFocusRingMask;
-(void)updateTrackingAreas;
-(CGRect)focusRingMaskBounds;
-(unsigned long long)_scrollingModeForAxis:(long long)arg1 ;
-(void)_beginScrollGesture;
-(void)_endScrollGesture;
-(NSView *)findBarView;
-(CGSRegionObjectRef)_regionForOpaqueDescendants:(CGRect)arg1 forMove:(char)arg2 ;
-(void)instantiateWithObjectInstantiator:(id)arg1 ;
-(void)viewDidEndLiveResize;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)viewDidChangeBackingProperties;
-(void)_tileIfNeeded;
-(void)_updateTrackingAreas;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(void)smartMagnifyWithEvent:(id)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(void)_updateRulerlineForRuler:(id)arg1 oldPosition:(double)arg2 newPosition:(double)arg3 vertical:(char)arg4 ;
-(char)rulersVisible;
-(void)setRulersVisible:(char)arg1 ;
-(void)geometryInWindowDidChange;
-(id)accessibilityVerticalScrollBarAttribute;
-(char)hasHorizontalRuler;
-(NSRulerView *)horizontalRulerView;
-(char)hasVerticalRuler;
-(NSRulerView *)verticalRulerView;
-(id)_accessibilityAdditionalChildren;
-(char)accessibilityIsVerticalScrollBarAttributeSettable;
-(double)_destinationFloatValueForScroller:(id)arg1 ;
-(void)_conditionallyReflectScrolledClipView;
-(char)_desiredLayerSizeMeritsTiledBackingLayer:(CGSize)arg1 ;
-(char)_overlayScrollersShown;
-(void)flashScrollers;
-(void)renewGState;
-(void)_update;
-(void)viewWillStartLiveResize;
-(char)usesPredominantAxisScrolling;
-(id)_pageAlignmentsForAxis:(long long)arg1 ;
-(id)_synchronizedSiblingsForAxis:(long long)arg1 ;
-(CGSize)_stretchAmount;
-(char)_shouldAutoFlattenLayerTree;
-(double)_verticalScrollerWidthWithBorder;
-(void)_setForcesContentInsetsLayout:(char)arg1 ;
-(char)_shouldUseFocusRingMask;
-(void)addFloatingSubview:(id)arg1 forAxis:(long long)arg2 ;
-(id)_pointInVisibleScroller:(CGPoint)arg1 ;
-(void)setHasHorizontalRuler:(char)arg1 ;
-(void)setHasVerticalRuler:(char)arg1 ;
-(void)_viewDidDrawInLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)_copySubviewsInOrderOfDisplay;
-(void)_setHasAutoSetWantsLayer:(char)arg1 ;
-(CGRect)_contentFrameMinusScrollers;
-(char)scrollRectToVisible:(const CGRect*)arg1 fromView:(id)arg2 ;
-(char)_updateGrowBoxForWindowFrameChange;
-(id)_floatingSubviewsContainerForAxis:(long long)arg1 ;
-(double)_horizontalScrollerHeightWithBorder;
-(void)_pulseOverlayScrollers;
-(void)_informDelegateWillStartLiveScroll;
-(void)_informDelegateDidEndLiveScroll;
-(void)_updateContentInsetsIfAutomatic;
-(char)_willCoverBackingStore;
-(char)_documentViewSubclassesLockFocus;
-(char)_hasNonLayeredOverlappingSiblingView;
-(char)_wantsConcurrentScrolling;
-(char)_isConcurrentScrollingCompatible;
-(void)_updateAutomaticInclusiveLayerSupport;
-(void)_updateAutomaticInclusiveLayerSupportSlightlyLater;
-(char)_canUseInclusiveLayersAutomatically;
-(void)_makeAutomaticInclusiveLayer;
-(char)_shouldUseInclusiveLayersAutomatically;
-(void)_makeAutomaticInclusiveLayerIfNecessary;
-(void)_removeAutomaticInclusiveLayer;
-(void)_messageTraceFutureResponsiveScrollingOptInOut;
-(void)_updateStateOfUnderTitlebarView;
-(void)_doMemoryPressureHandler;
-(void)_unregisterForWindowWillClose;
-(void)_setUnderTitlebarView:(id)arg1 ;
-(char)_documentViewWantsHeaderView;
-(void)_addMemoryPressureMonitor;
-(void)_registerForWindowWillClose;
-(void)_removeMemoryPressureMonitor;
-(char)_canOptInToConcurrentScrolling;
-(id)_allocContentAreaLayout;
-(void)_dynamicColorsChanged:(id)arg1 ;
-(void)_snapRubberBandDueToNotification:(id)arg1 ;
-(void)_addUnderTitlebarNotifications;
-(id)_underTitlebarView;
-(char)_canAddUnderTitlebarView;
-(id)_makeUnderTitlebarView;
-(void)_removeUnderTitlebarNotifications;
-(double)_horizontalScrollerHeight;
-(double)_verticalScrollerWidth;
-(void)_sortSubviews;
-(void)_checkForAccessoryViewsInScrollerAreas;
-(NSEdgeInsets)scrollerInsets;
-(void)scrollerImpPair:(id)arg1 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)arg2 ;
-(CGRect)_boundsInsetForBorder;
-(void)_setContentViewFrame:(CGRect)arg1 ;
-(void)_setVerticalScrollerHidden:(char)arg1 ;
-(void)_setHorizontalScrollerHidden:(char)arg1 ;
-(void)_tileWithoutRecursing;
-(long long)scrollerKnobStyle;
-(void)setScrollerKnobStyle:(long long)arg1 ;
-(char)_ownsWindowGrowBox;
-(char)_fixHeaderAndCornerViews;
-(id)_cornerViewForLayer;
-(void)_updateForLiveResizeWithOldSize:(CGSize)arg1 ;
-(CGRect)_cornerViewFrame;
-(void)_setCornerViewForLayer:(id)arg1 ;
-(char)_corneViewIsSmallSize;
-(char)_needsCornerViewDrawn;
-(void)_drawCornerViewInRect:(CGRect)arg1 ;
-(void)_removeCornerViewForLayer;
-(void)_updateCornerViewForLayer;
-(void)_layoutLayerPiecesIfNeeded;
-(void)_drawOldSchoolFocusRingIfNecessaryInRect:(CGRect)arg1 ;
-(void)_dirtyFocusRingOrMask;
-(void)_updateWithDisplay;
-(id)_newScroll:(char)arg1 ;
-(id)_commonNewScroll:(id)arg1 ;
-(void)_doScroller:(id)arg1 ;
-(void)_scrollerDidBeginTracking:(id)arg1 ;
-(void)_scrollerDidEndTracking:(id)arg1 ;
-(void)setVerticalLineScroll:(double)arg1 ;
-(void)setHorizontalPageScroll:(double)arg1 ;
-(void)setVerticalPageScroll:(double)arg1 ;
-(double)verticalPageScroll;
-(char)_pinnedInDirectionX:(double)arg1 y:(double)arg2 ;
-(long long)verticalScrollElasticity;
-(long long)horizontalScrollElasticity;
-(char)allowsMagnification;
-(void)_setMagnification:(double)arg1 centeredAroundPoint:(CGPoint)arg2 animate:(char)arg3 ;
-(void)_endMagnifyGesture;
-(void)_beginMagnifyGesture;
-(double)maxMagnification;
-(double)minMagnification;
-(void)_smartMagnifyToRect:(CGRect)arg1 centeredAt:(CGPoint)arg2 animate:(char)arg3 ;
-(void)_beginMagnifying;
-(void)_endMagnifying;
-(void)_scrollPageInDirection:(int)arg1 ;
-(void)_resetOveralyScrollerFlashForWindowOrderOut:(id)arg1 ;
-(void)_ensureOveralyScrollerFlashForWindowOrderIn:(id)arg1 ;
-(char)_cornerViewHidesWithVerticalScroller;
-(void)_applyContentAreaLayout:(id)arg1 ;
-(void)_fixGrowBox;
-(void)_setIngoreSynchronizedSiblings:(char)arg1 ;
-(void)_setMagnification:(double)arg1 ;
-(void)_magnifyToFitRect:(CGRect)arg1 animate:(char)arg2 ;
-(void)findBarViewDidChangeHeight;
-(void)setFindBarView:(NSView *)arg1 ;
-(char)isFindBarVisible;
-(void)setFindBarVisible:(char)arg1 ;
-(char)_usesOverlayScrollers;
-(void)_floatingSubviewCountChanged;
-(void)setScrollsDynamically:(char)arg1 ;
-(char)scrollsDynamically;
-(void)setVerticalScroller:(NSScroller *)arg1 ;
-(void)setHorizontalScroller:(NSScroller *)arg1 ;
-(id)_rulerline:(double)arg1 :(double)arg2 last:(char)arg3 ;
-(void)_setScrollerNeedsDisplay:(id)arg1 ;
-(double)lineScroll;
-(void)setPageScroll:(double)arg1 ;
-(double)horizontalPageScroll;
-(double)pageScroll;
-(char)_pinnedInDirectionOfScroll:(id)arg1 ;
-(char)_hasScrollOccurredOutsideOfGesture;
-(void)_setHasScrollOccurredOutsideOfGesture:(char)arg1 ;
-(char)_isInScrollGesture;
-(void)_informDelegateOfNewScrollGesture;
-(id)_magnificationInflectionPoints;
-(void)setUsesPredominantAxisScrolling:(char)arg1 ;
-(void)setFindBarPosition:(long long)arg1 ;
-(long long)findBarPosition;
-(void)setAllowsMagnification:(char)arg1 ;
-(void)setMaxMagnification:(double)arg1 ;
-(void)setMinMagnification:(double)arg1 ;
-(void)magnifyToFitRect:(CGRect)arg1 ;
-(void)setMagnification:(double)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(void)setScrollerInsets:(NSEdgeInsets)arg1 ;
-(char)_forcesContentInsetsLayout;
-(void)setHorizontalRulerView:(NSRulerView *)arg1 ;
-(void)setVerticalRulerView:(NSRulerView *)arg1 ;
-(id)rulerStateDescription;
-(void)_setScrollingMode:(unsigned long long)arg1 forAxis:(long long)arg2 ;
-(id)_synchronizedSiblingForAxis:(long long)arg1 ;
-(void)_setPageAlignments:(id)arg1 forAxis:(long long)arg2 ;
-(void)addFloatingHeaderView:(id)arg1 forAxis:(long long)arg2 ;
-(void)removeFloatingHeaderView:(id)arg1 ;
-(void)_resetScrollingBehavior;
-(CGRect)contentAreaRectForScrollerImpPair:(id)arg1 ;
-(char)inLiveResizeForScrollerImpPair:(id)arg1 ;
-(CGPoint)mouseLocationInContentAreaForScrollerImpPair:(id)arg1 ;
-(CGPoint)scrollerImpPair:(id)arg1 convertContentPoint:(CGPoint)arg2 toScrollerImp:(id)arg3 ;
-(char)scrollerImpPair:(id)arg1 isContentPointVisible:(CGPoint)arg2 ;
-(void)scrollerImpPair:(id)arg1 setContentAreaNeedsDisplayInRect:(CGRect)arg2 ;
-(char)autoforwardsScrollWheelEvents;
-(void)_hideOverlayScrollers;
-(char)_overlayScrollerStateIsLocked;
-(void)_setWantsPageAlignedHorizontalAxis:(char)arg1 ;
-(char)_wantsPageAlignedHorizontalAxis;
-(void)_setWantsPageAlignedVerticalAxis:(char)arg1 ;
-(char)_wantsPageAlignedVerticalAxis;
-(void)_setSynchronizedSibling:(id)arg1 forAxis:(long long)arg2 ;
-(void)_setStuntedForIB:(char)arg1 ;
-(char)_isStuntedForIB;
-(char)automaticallyAdjustsContentViewInsets;
-(void)setAutomaticallyAdjustsContentViewInsets:(char)arg1 ;
-(void)_automatedLiveScrollingWillBegin;
-(void)_automatedLiveScrollingDidEnd;
-(id)ns_widgetType;
@end

