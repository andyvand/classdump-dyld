/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSToolbar, NSToolbarClippedItemsIndicator, NSView, NSMutableArray, NSToolbarItem, NSResponder;

@interface NSToolbarView : NSView {

	NSToolbar* _toolbar;
	NSToolbarClippedItemsIndicator* _clipIndicator;
	NSView* _ivClipView;
	void* _lastEventProcessedForValidation;
	NSMutableArray* _layoutOrderedItemViewers;
	NSMutableArray* _toolbarOrderedItemViewers;
	NSToolbarItem* _dragDataItem;
	long long _dragDataItemViewerStartIndex;
	char _dragDataItemShouldBeRemoved;
	NSToolbarItem* _dragDataInsertionGapItem;
	CGPoint _dragDataLastPoint;
	char _insertionAnimationRunning;
	CGPoint _halftonePhaseOverrideValue;
	NSToolbar* _actingPaletteTargetToolbar;
	long long _layoutEnabledCount;
	double _earliestDateToStartDragAnimation;
	struct {
		unsigned _layoutInProgress : 1;
		unsigned _sizingToFit : 1;
		unsigned _isEditing : 1;
		unsigned _inCustomizationMode : 1;
		unsigned _reserved : 1;
		unsigned _enabledAsDragSrc : 1;
		unsigned _enabledAsDragDest : 1;
		unsigned _actingAsPalette : 1;
		unsigned _usePaletteLabels : 1;
		unsigned _validatesItems : 1;
		unsigned _forceItemsToBeMinSize : 1;
		unsigned _forceAllClicksToBeDrags : 1;
		unsigned _wrapsItems : 1;
		unsigned _useGridAlignment : 1;
		unsigned _autosizesToFitHorizontally : 1;
		unsigned transparentBackground : 1;
		unsigned _horizontalBaselineDrawingDisabled : 1;
		unsigned suppressedClipIndicatorDuringAnimation : 1;
		unsigned weStartedDrag : 1;
		unsigned dragOptimizationOn : 1;
		unsigned dragIsInsideView : 1;
		unsigned insertionOptimizationShouldEndAfterUpdates : 1;
		unsigned wantsKeyboardLoop : 1;
		unsigned clipIndicatorWasFirstResponder : 1;
		unsigned scheduledDelayedValidateVisibleItems : 1;
		unsigned canDeferDelayedValidateVisibleItems : 1;
		unsigned skippedLayoutWhileDisabled : 1;
		unsigned shouldHideAfterKeyboardHotKeyEvent : 1;
		unsigned windowWantsSquareToolbarSelectionHighlight : 1;
		unsigned RESERVED : 3;
	}  _tbvFlags;
	NSResponder* _windowPriorFirstResponder;
	char* _delayedValidationCancel;
	char* _updateDragInsertionCancel;
	id toolbarViewReserved;

}
+(id)defaultMenu;
+(id)newViewForToolbar:(id)arg1 inWindow:(id)arg2 attachedToEdge:(unsigned long long)arg3 ;
+(id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)_endLiveResize;
-(char)accessibilityIsIgnored;
-(void)setToolbar:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)toolbar;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)accessibilityChildrenAttribute;
-(void)layout;
-(void)updateLayer;
-(id)hitTest:(CGPoint)arg1 ;
-(long long)numberOfItems;
-(char)validateMenuItem:(id)arg1 ;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)_didRemoveLayer;
-(char)isOpaque;
-(char)preservesContentDuringLiveResize;
-(void)_windowChangedKeyState;
-(id)_hitTest:(CGPoint*)arg1 dragTypes:(id)arg2 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(id)_hitTestToBlockWindowResizing:(CGPoint)arg1 forResizeDirection:(long long)arg2 ;
-(void)mouseDown:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(char)mouseDownCanMoveWindow;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(char)_wantsUserCancelledOperation;
-(void)draggedImage:(id)arg1 movedTo:(CGPoint)arg2 ;
-(void)windowDidUpdate:(id)arg1 ;
-(void)_cycleWindows:(id)arg1 ;
-(id)accessibilitySelectedChildrenAttribute;
-(char)accessibilityIsSelectedChildrenAttributeSettable;
-(char)_isEditing;
-(void)viewDidChangeBackingProperties;
-(id)_coreUIDrawOptions;
-(void)_noteToolbarLayoutChanged;
-(void)_drawForTransitionInWindow:(id)arg1 usingPatternPhase:(CGSize)arg2 inRect:(CGRect)arg3 ;
-(void)_forceResetTexturedWindowDragMargins;
-(const _NSToolbarMetrics*)_metrics;
-(void)_fullLayout;
-(void)adjustToWindow:(id)arg1 attachedToEdge:(unsigned long long)arg2 ;
-(id)_findHitItemViewer:(CGPoint)arg1 ;
-(void)removeToolbarItem:(id)arg1 ;
-(void)_printVerboseDebuggingInformation:(id)arg1 ;
-(void)_beginCustomizationMode;
-(void)_endCustomizationMode;
-(void)_noteToolbarShowsBaselinePropertyChanged;
-(void)_setNeedsDisplayForItemIdentifierSelection:(id)arg1 ;
-(void)_disableLayout;
-(void)_enableLayout;
-(id)visibleItems;
-(void)_computeToolbarItemKeyboardLoopIfNecessary;
-(void)_makeFirstResponderForKeyboardHotKeyEvent;
-(void)_noteToolbarSizeModeChanged;
-(void)_noteToolbarDisplayModeChanged;
-(void)_toolbarDidChangeDraggedTypesFrom:(id)arg1 to:(id)arg2 ;
-(CGSize)_minimumSizeEnsuringVisibilityOfItem:(id)arg1 ;
-(void)_returnFirstResponderToWindowFromKeyboardHotKeyEvent;
-(id)clippedItems;
-(char)_isPaletteView;
-(id)_validDestinationForDragsWeInitiate;
-(void)_setWantsKeyboardLoop:(char)arg1 ;
-(void)_setAllowsMultipleRows:(char)arg1 ;
-(void)_sizeHorizontallyToFitWidth:(double)arg1 ;
-(void)_setAllItemsTransparentBackground:(char)arg1 ;
-(char)_clipIndicatorIsShowing;
-(void)_setForceItemsToBeMinSize:(char)arg1 ;
-(void)_sizeHorizontallyToFit;
-(void)_setDrawsBaseline:(char)arg1 ;
-(void)_setActsAsPalette:(char)arg1 forToolbar:(id)arg2 ;
-(double)_distanceFromBaseToTopOfWindow;
-(void)_sizeVerticallyToFit;
-(Class)_classToCheckForWantsUpdateLayer;
-(void)_addToolbarItemToToolbarFromMenuItem:(id)arg1 ;
-(CGAffineTransform)_getPixelAligningTransformForLayout;
-(char)_windowWantsSquareToolbarSelectionHighlight;
-(void)_swapToolbarItemViewerAfterView:(id)arg1 ;
-(void)_selectToolbarItemViewerAfterView:(id)arg1 ;
-(void)_swapToolbarItemViewerPreviousToView:(id)arg1 ;
-(void)_selectToolbarItemViewerPreviousToView:(id)arg1 ;
-(char)_mouseUpWithEvent:(id)arg1 forView:(id)arg2 ;
-(char)_isItemViewerMoveable:(id)arg1 ;
-(char)_beginSrcDragItemViewerWithEvent:(id)arg1 ;
-(void)_layoutDirtyItemViewersAndTileToolbar;
-(void)_setWindowWantsSquareToolbarSelectionHighlight:(char)arg1 ;
-(void)_toolbarViewCommonInit;
-(id)privateDragTypes;
-(void)_unregisterForToolbarNotifications:(id)arg1 ;
-(void)_registerForToolbarNotifications:(id)arg1 ;
-(void)_syncItemSetAndUpdateItemViewersWithSEL:(SEL)arg1 setNeedsModeConfiguration:(char)arg2 sizeToFit:(char)arg3 setNeedsDisplay:(char)arg4 updateKeyLoop:(char)arg5 ;
-(void)_selectToolbarItemViewerInDirection:(long long)arg1 relativeToView:(id)arg2 ;
-(void)_swapToolbarItemViewerInDirection:(long long)arg1 relativeToView:(id)arg2 ;
-(CGRect)_validItemViewerBoundsAssumingClipIndicatorNotShown;
-(CGRect)_validItemViewerBounds;
-(_NSToolbarLayoutMetrics)_toolbarMetrics;
-(void)_createClipIndicatorIfNecessary;
-(id)_visibleItemViewers;
-(char)_isInCustomizationMode;
-(char)_inTexturedWindow;
-(id)_findItemViewerAtPoint:(CGPoint)arg1 ;
-(void)_beginTempEditingMode;
-(char)_shouldStealHitTestForCurrentEvent;
-(void)resetToolbarToDefaultConfiguration:(id)arg1 ;
-(unsigned long long)_findIndexOfFirstDuplicateItemWithItemIdentifier:(id)arg1 ;
-(char)_beginSrcDragItemWithEvent:(id)arg1 ;
-(id)_baselineView;
-(void)_cancelAnyDelayedValidation;
-(void)_scheduleDelayedValidationAfterTime:(double)arg1 ;
-(id)_currentBackgroundColor;
-(void)_drawBackgroundFillInClipRect:(CGRect)arg1 ;
-(char)_drawsBaseline;
-(void)_drawBaselineInClipRect:(CGRect)arg1 ;
-(CGRect)_baselineViewFrame;
-(void)_setBaselineView:(id)arg1 ;
-(char)_updateBaselineView;
-(char)_removeBaselineView;
-(Class)_toolbarItemViewerClass;
-(void)_syncItemSet;
-(void)_setNeedsModeConfiguration:(char)arg1 itemViewers:(id)arg2 ;
-(void)_sizeToFit:(char)arg1 ;
-(void)_sendBackgroundGradientHeightChangedNotification;
-(id)_clipIndicator;
-(void)_detatchNextAndPreviousForView:(id)arg1 ;
-(char)_wantsKeyboardLoop;
-(id)_clippedItemViewers;
-(void)_detatchNextAndPreviousForAllSubviews;
-(void)_makeSureFirstResponderIsNotInInvisibleItemViewer;
-(void)_computeToolbarItemKeyboardLoop;
-(id)_computePriorFirstResponder;
-(char)_isInCustomizationWindow;
-(void)_distributeAvailableSpaceIfNecessary:(double)arg1 toFlexibleSizedItems:(id)arg2 lastItemIsRightAligned:(char*)arg3 undistributedWidth:(double*)arg4 ctm:(const CGAffineTransform*)arg5 ;
-(double)_desiredExtraSpaceForItemViewersWithPreferredWidthRatios:(id)arg1 ;
-(long long)_layoutRowStartingAtIndex:(long long)arg1 endingAtIndex:(long long)arg2 withFirstItemPosition:(CGPoint)arg3 gridWidth:(long long)arg4 allowOverflowMenu:(char)arg5 validWidthWithClipIndicator:(double)arg6 withoutClip:(double)arg7 clippedItemViewers:(id)arg8 canClipFirstItem:(char)arg9 leadingFlexibleSpaceOffset:(double)arg10 flexibleSpace:(double*)arg11 unusedSpace:(double*)arg12 ;
-(void)_setClipIndicatorItemsFromItemViewers:(id)arg1 ;
-(void)_adjustClipIndicatorPosition;
-(void)_removeClipIndicatorFromSuperview;
-(id)_computeCustomItemViewersWithPreferredWidthRatiosInRange:(NSRange)arg1 ;
-(void)_sizeItemViewersWithPreferredWidthRatios:(id)arg1 withRemainingUndistributedWidth:(double*)arg2 ctm:(const CGAffineTransform*)arg3 ;
-(unsigned long long)_sizePartitioningSpacersInItemViewers:(id)arg1 startingAtPoint:(CGPoint)arg2 withInterItemViewerSpacing:(double)arg3 withCTM:(const CGAffineTransform*)arg4 withRemainingUndistributedWidth:(double*)arg5 ;
-(id)_computeResizeableCustomItemViewersInRange:(NSRange)arg1 ;
-(id)_computeFlexibleSpaceItemViewersInRange:(NSRange)arg1 ;
-(CGRect)_validItemViewerBoundsAssumingClipIndicatorShown;
-(double)_leadingFlexibleSpaceOffset;
-(void)_setNeedsDisplayForItemViewerSelection:(id)arg1 ;
-(char)_layoutEnabled;
-(void)_collectItemViewerFrames:(id)arg1 intoRectArray:(CGRect*)arg2 ;
-(void)_makeSureItemViewersInArray:(id)arg1 areSubviews:(char)arg2 from:(long long)arg3 to:(long long)arg4 ;
-(double)_maximumItemViewerHeight;
-(void)_superSetFrameSize:(CGSize)arg1 ;
-(NSRange)_rangeOfCenteredItemsForItemViewers:(id)arg1 ;
-(long long)_layoutRowStartingAtIndex:(long long)arg1 withFirstItemPosition:(CGPoint)arg2 gridWidth:(long long)arg3 allowOverflowMenu:(char)arg4 validWidthWithClipIndicator:(double)arg5 withoutClip:(double)arg6 leadingFlexibleSpaceOffset:(double)arg7 ;
-(long long)_layoutRowWithCenterStartingAtIndex:(long long)arg1 endingAtIndex:(long long)arg2 withFirstItemPosition:(CGPoint)arg3 gridWidth:(double)arg4 ;
-(void)_setNeedsDisplayForItemViewers:(id)arg1 movingFromFrames:(CGRect*)arg2 toFrames:(CGRect*)arg3 ;
-(void)_setNeedsViewerLayout:(char)arg1 itemViewers:(id)arg2 ;
-(char)_shouldUseEngineFrameForResizingWithOldSuperviewSize:(CGSize)arg1 ;
-(void)_noteToolbarModeChangedAndUpdateItemViewers:(SEL)arg1 ;
-(void)_windowIsAddingOrRemovingSheet:(id)arg1 ;
-(unsigned long long)_autovalidationTypeForTypedCharacters:(id)arg1 ;
-(unsigned long long)_autovalidationTypeForEvent:(id)arg1 ;
-(void)_suppressClipIndicatorDuringAnimation;
-(void)_unsuppressClipIndicatorAfterAnimationIfNecessary;
-(char)_isInConfigurationMode;
-(id)_allItems;
-(char)_isKeyLoopGroup;
-(void)_setNeedsDisplayIfTopLeftChanged;
-(char)_hasTransparentBackground;
-(char)_layoutInProgress;
-(void)_setLayoutInProgress:(char)arg1 ;
-(CGRect)_rectOfItemAtIndex:(long long)arg1 ;
-(id)_dragDataInsertionGapItemViewer;
-(id)_dragDataItemViewer;
-(void)_dragEndedNotification:(id)arg1 ;
-(void)_endInsertionOptimizationWithDragSource:(id)arg1 force:(char)arg2 ;
-(void)_updateDragInsertion:(id)arg1 ;
-(double)_computeTravelTimeForInsertionOfItemViewer:(id)arg1 ;
-(char)_isAcceptableDragSource:(id)arg1 pasteboard:(id)arg2 dragInfo:(id)arg3 ;
-(id)_itemForDraggingInfo:(id)arg1 draggingSource:(id)arg2 ;
-(long long)_layoutOrderInsertionIndexForPoint:(CGPoint)arg1 previousIndex:(long long)arg2 ;
-(id)_createInsertionGapItemForItemViewer:(id)arg1 forDraggingSource:(id)arg2 ;
-(void)removeItemViewerAtIndex:(long long)arg1 ;
-(void)_startInsertionOptimizationWithDragSource:(id)arg1 ;
-(void)insertItemViewer:(id)arg1 atIndex:(long long)arg2 ;
-(double)_computeEarliestDateForDragAnimationForInfo:(id)arg1 ;
-(void)beginUpdateInsertionAnimationAtIndex:(long long)arg1 throwAwayCacheWhenDone:(char)arg2 ;
-(void)_dstDraggingExitedAtPoint:(CGPoint)arg1 draggingInfo:(id)arg2 stillInViewBounds:(char)arg3 ;
-(unsigned long long)_draggingModeForInfo:(id)arg1 ;
-(void)stopUpdateInsertionAnimation;
-(char)_canMoveItemAsSource:(id)arg1 ;
-(id)_computeDragImageFromItemViewer:(id)arg1 ;
-(unsigned long long)dstDraggingEnteredAtPoint:(CGPoint)arg1 draggingInfo:(id)arg2 ;
-(unsigned long long)dstDraggingMovedToPoint:(CGPoint)arg1 draggingInfo:(id)arg2 ;
-(void)dstDraggingExitedAtPoint:(CGPoint)arg1 draggingInfo:(id)arg2 ;
-(char)dstDraggingDepositedAtPoint:(CGPoint)arg1 draggingInfo:(id)arg2 ;
-(void)_setImageOnDragSession:(id)arg1 withOffset:(CGPoint)arg2 ;
-(void)_toolbarAttributesChanged:(id)arg1 ;
-(void)_toolbarContentsChanged:(id)arg1 ;
-(void)_toolbarContentsAttributesChanged:(id)arg1 ;
-(id)accessibilityOverflowButtonAttribute;
-(char)accessibilityIsOverflowButtonAttributeSettable;
@end

