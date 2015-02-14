/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTableView, NSImage;

@interface NSTableHeaderView : NSView {

	NSTableView* _tableView;
	long long _resizedColumn;
	long long _draggedColumn;
	long long _pressedColumn;
	NSImage* _headerDragImage;
	double _draggedDistance;
	unsigned _isColumnResizing : 1;
	unsigned _showHandCursorFired : 1;
	unsigned _toolTipRectsDirty : 1;
	unsigned _alignTitleWithDataCell : 1;
	unsigned _nextColumnAfterDrawnOneIsSelected : 1;
	unsigned _wantsTranslucency : 1;
	unsigned _addedBlurToClipView : 1;
	unsigned _usedNewHeight : 1;
	unsigned _reserved : 24;
	char _skipDrawingSeparator;
	id _viewDataX;

}

@property (assign) NSTableView * tableView; 
@property (readonly) long long draggedColumn; 
@property (readonly) double draggedDistance; 
@property (readonly) long long resizedColumn; 
-(id)init;
-(void)dealloc;
-(void)setLayer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityHelpStringForChild:(id)arg1 ;
-(char)accessibilityIsChildFocusable:(id)arg1 ;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityParentAttribute;
-(NSTableView *)tableView;
-(id)accessibilityChildrenAttribute;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(char)isFlipped;
-(void)_removeBackgroundView;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)_backgroundView;
-(void)_setBackgroundView:(id)arg1 ;
-(char)isOpaque;
-(char)preservesContentDuringLiveResize;
-(char)allowsVibrancy;
-(long long)draggedColumn;
-(void)_windowChangedKeyState;
-(char)acceptsFirstResponder;
-(id)_lastDraggedEventFollowing:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)_resizeColumn:(long long)arg1 withEvent:(id)arg2 ;
-(void)resetCursorRects;
-(void)mouseDown:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(void)_invalidateLiveResizeCachedImage;
-(void)drawBackgroundOverhangInRect:(CGRect)arg1 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(char)_wantsClipViewToDoOverhangViews;
-(char)mouseDownCanMoveWindow;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id)_vibrancyFilter;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(char)_wantsLiveResizeToUseCachedImage;
-(char)_shouldAttemptIdleTimeDisposeOfLiveResizeCacheWithFrame:(CGRect)arg1 ;
-(void)_drawRect:(CGRect)arg1 liveResizeFill:(CGRect)arg2 :(CGRect)arg3 :(CGRect)arg4 :(CGRect)arg5 cacheCoveredArea:(CGRect)arg6 ;
-(void)_setAlignTitleWithDataCell:(char)arg1 ;
-(void)setTableView:(NSTableView *)arg1 ;
-(void)_switchToViewBasedIfNeeded;
-(long long)columnAtPoint:(CGPoint)arg1 ;
-(void)_setToolTipRectsDirty:(char)arg1 ;
-(void)_invalidateOrComputeNewCursorRectsIfNecessary;
-(id)accessibilityChildForColumn:(id)arg1 ;
-(CGRect)headerRectOfColumn:(long long)arg1 ;
-(char)_canSupportTallerHeight;
-(char)_drawingEndSeparator;
-(char)_nextColumnAfterOneBeingDrawnIsSelected;
-(char)_alignTitleWithDataCell;
-(double)_defaultHeight;
-(void)_setOverflowHeaderCellPrototype:(id)arg1 ;
-(id)_overflowHeaderCellPrototype;
-(id)_preparedHeaderFillerCell;
-(void)_drawHeaderCell:(id)arg1 withFrame:(CGRect)arg2 withStateFromColumn:(long long)arg3 ;
-(void)_drawHeaderFillerInRect:(CGRect)arg1 matchLastState:(char)arg2 ;
-(id)_preparedHeaderCellAtColumn:(long long)arg1 ;
-(char)_nextColumnDrawsLeftSeparatorFromColumn:(long long)arg1 ;
-(CGRect)_overflowRectForBounds:(CGRect)arg1 ;
-(void)_updateBackgroundViewFrame;
-(void)_invalidateRightMostLineIfNeeded;
-(char)_layoutIsSameAsCachedLayoutWithFrame:(CGRect)arg1 ;
-(void)_drawRect:(CGRect)arg1 liveResizeCacheCoveredArea:(CGRect)arg2 ;
-(CGRect)_rowHeaderFixedContentRect;
-(CGRect)_rowHeaderScrollableContentVisibleRect;
-(char)_hasRowHeaderColumn;
-(void)_drawHeaderOfColumn:(long long)arg1 ;
-(void)_showOpenHandCursor:(id)arg1 ;
-(void)_cancelDelayedShowOpenHandCursor;
-(CGRect)_headerRectForInvalidation:(long long)arg1 ;
-(void)_scheduleDelayedShowOpenHandCursorIfNecessary;
-(void)_unshowOpenHandCursor:(id)arg1 ;
-(void)_doModifySelectionWithEvent:(id)arg1 onColumn:(long long)arg2 ;
-(void)_drawHeaderDragImageForColumn:(long long)arg1 ;
-(void)_beginDraggingColumn:(long long)arg1 ;
-(void)_endDraggingColumn:(long long)arg1 ;
-(void)_dropTableViewOverdrawIfNecessary;
-(void)_setNeedsDisplayForDraggedDelta:(double)arg1 ;
-(id)_lastDraggedOrUpEventFollowing:(id)arg1 canceled:(char*)arg2 ;
-(id)_resizeCursorForTableColumn:(id)arg1 ;
-(void)_windowKeyChanged:(id)arg1 ;
-(void)_stopObservingKeyWindow;
-(void)_old_encodeWithCoder_NSTableHeaderView:(id)arg1 ;
-(void)_addToolTipRects;
-(long long)resizedColumn;
-(char)_supportsViewsForAnimations;
-(void)_updateClipViewBackgroundColors;
-(char)_wantsTranslucency;
-(char)_canAddBlurView;
-(id)_makeBlurBackgroundViewWithFrame:(CGRect)arg1 ;
-(void)_addBlurViewIfNecessary;
-(void)_viewBasedRawRect:(CGRect)arg1 ;
-(void)_drawOverflowHeaderInRect:(CGRect)arg1 ;
-(void)_drawColumnHeaderWithIndexes:(id)arg1 ;
-(long long)_resizeableColumnAtPoint:(CGPoint)arg1 ;
-(char)_trackAndModifySelectionWithEvent:(id)arg1 onColumn:(long long)arg2 stopOnReorderGesture:(char*)arg3 ;
-(void)_reorderColumn:(long long)arg1 withEvent:(id)arg2 ;
-(CGRect)_unobstructedVisibleHeaderRectOfColumn:(long long)arg1 ;
-(CGRect)_cursorRectForColumn:(long long)arg1 ;
-(long long)_previousNonHiddenColumnStartingAtColumn:(long long)arg1 ;
-(void)_startObservingKeyWindow:(id)arg1 ;
-(void)_tableView:(id)arg1 willAddTableColumn:(id)arg2 ;
-(void)_tableView:(id)arg1 didAddTableColumn:(id)arg2 ;
-(void)_tableView:(id)arg1 willRemoveTableColumn:(id)arg2 ;
-(void)_tableView:(id)arg1 didRemoveTableColumnAtIndex:(long long)arg2 ;
-(id)_rectsForMultiClippedContentDrawing;
-(char)_isColumnResizing;
-(char)_isColumnReordering;
-(void)_switchToNonViewBasedIfNeeded;
-(void)_setWantsTranslucency:(char)arg1 ;
-(double)draggedDistance;
-(void)_didMoveFromColumn:(long long)arg1 toColumn:(long long)arg2 animated:(char)arg3 ;
-(void)_endDraggingColumn:(long long)arg1 animated:(char)arg2 ;
-(void)_updateColumnViewWidthsAnimated:(char)arg1 ;
-(unsigned long long)accessibilityColumnForChild:(id)arg1 ;
@end

