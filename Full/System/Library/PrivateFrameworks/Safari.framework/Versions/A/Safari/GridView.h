/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <Safari/NSDraggingSource.h>
#import <Safari/NSDraggingDestination.h>
#import <Safari/ViewReuseManagerDelegate.h>
#import <Safari/SafariDelegatingView.h>

@protocol SafariViewDelegate, GridViewDataSource, GridViewDelegate;
@class ViewReuseManager, NSMutableArray, NSLayoutConstraint, SeparatorView, NSEvent, GridCellView, _GridViewDropInfo, NSTimer, NSIndexSet, NSDictionary, NSView, NSTextField, NSString;

@interface GridView : NSView <NSDraggingSource, NSDraggingDestination, ViewReuseManagerDelegate, SafariDelegatingView> {

	ViewReuseManager* _viewReuseManager;
	NSMutableArray* _cellViews;
	NSLayoutConstraint* _titleVerticalConstraint;
	SeparatorView* _separator;
	NSLayoutConstraint* _separatorWidthConstraint;
	char _needsReload;
	char _needsLayoutOnAppear;
	char _ignoreSetNeedsLayout;
	unsigned long long _numberOfColumns;
	CGSize _cellSize;
	CGSize _cellMargin;
	NSEdgeInsets _contentInsets;
	NSEvent* _initialMouseDownEvent;
	unsigned long long _selectedCellIndex;
	GridCellView* _selectedCell;
	unsigned long long _draggingSourceOperationMaskWithinApplication;
	unsigned long long _draggingSourceOperationMaskOutsideApplication;
	unsigned long long _lastDragOperation;
	char _didAttemptDragging;
	_GridViewDropInfo* _dropInfo;
	unsigned long long _legacyDraggedCellIndex;
	NSTimer* _deferredLayoutTimer;
	unsigned long long _replaceableIndex;
	NSIndexSet* _fixedCellIndexes;
	NSDictionary* _cellIndexesToDraggedCellIndexes;
	GridCellView* _removedCell;
	unsigned long long _removedCellIndex;
	GridCellView* _lastCellBeneathMouse;
	NSTimer* _cellHoverTimer;
	char _shouldShowAccessoryViewImmediately;
	NSLayoutConstraint* _widthConstraint;
	NSView* _externalNextKeyView;
	unsigned long long _indexOfCellToMakeFirstResponderWhenReverseLooping;
	long long _deferCellUpdatesCounter;
	NSMutableArray* _deferredCellUpdates;
	char _didPerformDragOperationForCurrentDrag;
	char _defersLayoutOnDrag;
	char _forceTitleVisible;
	int _presentationMode;
	float _widthConstraintPriority;
	float _heightConstraintPriority;
	id<SafariViewDelegate> _safariViewDelegate;
	id<GridViewDataSource> _dataSource;
	id<GridViewDelegate> _delegate;
	long long _gridViewDisplayMode;
	long long _gridViewLayoutMode;
	NSTextField* _titleView;
	unsigned long long _minimumNumberOfColumns;
	unsigned long long _maximumNumberOfColumns;
	unsigned long long _maximumNumberOfRows;
	double _minimumCellHeightToWidthRatio;
	double _maximumCellHeightToWidthRatio;
	double _maximumWidth;
	NSLayoutConstraint* _heightConstraint;
	CGSize _minimumCellMargin;
	CGSize _minimumCellSize;

}

@property (assign,nonatomic) int presentationMode;                                          //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign,nonatomic,__weak) id<GridViewDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<GridViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long gridViewDisplayMode;                                 //@synthesize gridViewDisplayMode=_gridViewDisplayMode - In the implementation block
@property (assign,nonatomic) long long gridViewLayoutMode;                                  //@synthesize gridViewLayoutMode=_gridViewLayoutMode - In the implementation block
@property (assign,nonatomic) char defersLayoutOnDrag;                                       //@synthesize defersLayoutOnDrag=_defersLayoutOnDrag - In the implementation block
@property (nonatomic,readonly) NSTextField * titleView;                                     //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) char forceTitleVisible;                                        //@synthesize forceTitleVisible=_forceTitleVisible - In the implementation block
@property (assign,nonatomic) char drawsSeparator; 
@property (assign,nonatomic) float widthConstraintPriority;                                 //@synthesize widthConstraintPriority=_widthConstraintPriority - In the implementation block
@property (assign,nonatomic) float heightConstraintPriority;                                //@synthesize heightConstraintPriority=_heightConstraintPriority - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfColumns;                     //@synthesize minimumNumberOfColumns=_minimumNumberOfColumns - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfColumns;                     //@synthesize maximumNumberOfColumns=_maximumNumberOfColumns - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfRows;                        //@synthesize maximumNumberOfRows=_maximumNumberOfRows - In the implementation block
@property (assign,nonatomic) CGSize minimumCellMargin;                                      //@synthesize minimumCellMargin=_minimumCellMargin - In the implementation block
@property (assign,nonatomic) CGSize minimumCellSize;                                        //@synthesize minimumCellSize=_minimumCellSize - In the implementation block
@property (assign,nonatomic) double minimumCellHeightToWidthRatio;                          //@synthesize minimumCellHeightToWidthRatio=_minimumCellHeightToWidthRatio - In the implementation block
@property (assign,nonatomic) double maximumCellHeightToWidthRatio;                          //@synthesize maximumCellHeightToWidthRatio=_maximumCellHeightToWidthRatio - In the implementation block
@property (nonatomic,readonly) double maximumWidth;                                         //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (getter=isEditingCellView,nonatomic,readonly) char editingCellView; 
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                         //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SafariViewDelegate> safariViewDelegate;              //@synthesize safariViewDelegate=_safariViewDelegate - In the implementation block
+(id)indexExchangesWithDraggedIndex:(unsigned long long)arg1 dropIndex:(unsigned long long)arg2 replaceableIndex:(unsigned long long)arg3 numberOfIndexes:(unsigned long long)arg4 maximumNumberOfIndexes:(unsigned long long)arg5 fixedIndexes:(id)arg6 ;
+(id)arrayByExchangingElementsInArray:(id)arg1 usingMap:(id)arg2 ;
+(unsigned long long)insertedIndexInIndexMap:(id)arg1 type:(unsigned long long*)arg2 ;
+(unsigned long long)removedIndexInIndexMap:(id)arg1 type:(unsigned long long*)arg2 ;
+(void)_removeHoleInIndexMap:(id)arg1 betweenRangesOfOccupiedIndexes:(id)arg2 ;
+(char)requiresConstraintBasedLayout;
-(id<SafariViewDelegate>)safariViewDelegate;
-(void)setSafariViewDelegate:(id<SafariViewDelegate>)arg1 ;
-(void)setWidthConstraintPriority:(float)arg1 ;
-(float)heightConstraintPriority;
-(void)setDraggingSourceOperationMask:(unsigned long long)arg1 ifWithinApplication:(char)arg2 ;
-(void)_updatePresentationModeAttributes;
-(NSTextField *)titleView;
-(void)insertCellAtIndex:(unsigned long long)arg1 ;
-(void)removeCellAtIndex:(unsigned long long)arg1 ;
-(void)moveCellAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setMinimumCellSize:(CGSize)arg1 ;
-(void)setGridViewDisplayMode:(long long)arg1 ;
-(void)setMinimumCellMargin:(CGSize)arg1 ;
-(double)maximumWidth;
-(void)setPresentationMode:(int)arg1 ;
-(void)setMinimumNumberOfColumns:(unsigned long long)arg1 ;
-(void)setForceTitleVisible:(char)arg1 ;
-(void)setHeightConstraintPriority:(float)arg1 ;
-(int)presentationMode;
-(void)_cellViewDidBecomeFirstResponder:(id)arg1 ;
-(void)activateCellView:(id)arg1 ;
-(void)_commonGridViewInit;
-(void)_setLegacyDraggedCellIndex:(unsigned long long)arg1 ;
-(void)_updateGridViewWidths;
-(CGRect)frameForCellAtIndex:(unsigned long long)arg1 ;
-(id)viewForCellAtIndex:(unsigned long long)arg1 ;
-(void)_recalculateKeyLoop;
-(void)_invalidateDeferredLayoutTimerTriggeringLayout:(char)arg1 ;
-(unsigned long long)_numberOfCellsFromDataSource;
-(void)_enumeratePreparedCellsUsingBlock:(/*^block*/id)arg1 ;
-(void)_layOutSubviewsAnimated:(char)arg1 ;
-(void)_resetHighlightState;
-(unsigned long long)_draggedCellIndex;
-(char)_shouldDeferCellUpdates;
-(void)_deferCellUpdate:(/*^block*/id)arg1 ;
-(void)_prepareCellView:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(unsigned long long)_numberOfRows;
-(unsigned long long)indexOfCellView:(id)arg1 ;
-(void)_getColumnIndex:(unsigned long long*)arg1 andRowIndex:(unsigned long long*)arg2 forCellIndex:(unsigned long long)arg3 ;
-(CGSize)_cellSizeIncludingMargin;
-(unsigned long long)_numberOfCells;
-(void)_handleMouseExitedCellView:(id)arg1 ;
-(void)_registerForScrollViewNotificationsIfNeeded;
-(void)_unregisterForScrollViewNotificationsIfNeeded;
-(void)_setUpWidthConstraintIfNeeded;
-(double)_calculatedMinimumGridViewWidth;
-(void)_setUpHeightConstraintIfNeeded;
-(double)_calculatedMaximumGridViewHeight;
-(Class)_cellViewClass;
-(void)_setUpViewSizes;
-(void)_updateDrawnCellViews;
-(unsigned long long)_dropIndex;
-(CGRect)_availableBounds;
-(char)_usingTopSitesSnapshotsLayoutPath;
-(unsigned long long)_numberOfColumnsInWidth:(double)arg1 computedCellSize:(CGSize*)arg2 ;
-(double)_marginForCellWidth:(double)arg1 ;
-(unsigned long long)_numberOfRowsForNumberOfCells:(unsigned long long)arg1 dividedAmongNumberOfColumns:(unsigned long long)arg2 ;
-(NSRange)_visibleCellRange;
-(void)_scrollViewDidScroll:(id)arg1 ;
-(void)_createTitleViewIfNeeded;
-(unsigned long long)_indexOfCellFromEvent:(id)arg1 ;
-(void)_handleMouseEnteredCellView:(id)arg1 ;
-(unsigned long long)_indexOfCellAtPoint:(CGPoint)arg1 ;
-(unsigned long long)_dropIndexForPoint:(CGPoint)arg1 dropOperation:(int*)arg2 ;
-(unsigned long long)_maximumValidDropIndex;
-(void)_reinsertDraggedCellIfNecessary;
-(void)_beginAnimationOfType:(long long)arg1 forCellWithView:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(char)_canDragCellAtIndex:(unsigned long long)arg1 ;
-(void)_startDraggingCellAtIndex:(unsigned long long)arg1 event:(id)arg2 pasteboardWriter:(id)arg3 ;
-(id)_draggingImageForCellAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(id)_dropInfoWithUpdatedDropIndex:(unsigned long long)arg1 ;
-(void)_requestFixedCellIndexesIfNeeded;
-(void)_updateCellIndexDuringDraggingForDropIndex;
-(void)_applyCellReorderingAfterDraggingIsRemovingDraggedCell:(char)arg1 ;
-(void)_updateDragAndDropStateWithNewDropIndex:(unsigned long long)arg1 dropOperation:(int)arg2 shouldLayOut:(char)arg3 ;
-(void)_hideRemovedCellIfNeeded;
-(void)_revertDraggingChangesIfNeeded;
-(char)_canPerformHoverWithDropInfo:(id)arg1 ;
-(id)_cellViewUnderMouse;
-(char)_wantsDeferredLayoutForDropInfo:(id)arg1 ;
-(void)_scheduleDeferredLayoutForDropInfo:(id)arg1 ;
-(void)_invalidateDeferredLayoutTimer;
-(void)_updateDragAndDropStateWithNewDropIndex:(unsigned long long)arg1 shouldLayOut:(char)arg2 ;
-(long long)gridViewDisplayMode;
-(void)_beginDeferringCellUpdates;
-(void)_commitDeferredCellUpdates;
-(void)_updateFinalDraggingFrameForDraggingInfo:(id)arg1 dropIndex:(unsigned long long)arg2 ;
-(void)_cellHoverTimerFired:(id)arg1 ;
-(unsigned long long)_modelIndexForDropIndex:(unsigned long long)arg1 ;
-(unsigned long long)_dragOverBehaviorsForDropInfo:(id)arg1 ;
-(void)_deferredLayoutTimerFired:(id)arg1 ;
-(void)_invalidateDeferredLayoutTimerTriggeringLayout:(char)arg1 shouldTryToPerformHover:(char)arg2 ;
-(char)_performHoverWithDropInfo:(id)arg1 ;
-(void)_getCorrectedDropIndexForDeferredLayout:(unsigned long long*)arg1 dropOperation:(int*)arg2 interactive:(char)arg3 ;
-(NSRange)_cellRangeInRect:(CGRect)arg1 ;
-(void)_updateDrawnCellViewsWithoutTriggeringLayout;
-(void)_createViewReuseManagerIfNeeded;
-(NSRange)_rangeOfCellViewsAssumingAllRowsAreFilledInRect:(CGRect)arg1 ;
-(void)viewReuseManager:(id)arg1 willRecycleView:(id)arg2 ;
-(void)viewReuseManager:(id)arg1 prepareView:(id)arg2 toRepresentObjectAtIndex:(unsigned long long)arg3 ;
-(void)setGridViewLayoutMode:(long long)arg1 ;
-(void)setDefersLayoutOnDrag:(char)arg1 ;
-(unsigned long long)draggingSourceOperationMaskIfWithinApplication:(char)arg1 ;
-(id)makeGridCellView;
-(void)setMaximumNumberOfColumns:(unsigned long long)arg1 ;
-(unsigned long long)dropIndexForPoint:(CGPoint)arg1 ;
-(char)isEditingCellView;
-(long long)gridViewLayoutMode;
-(char)defersLayoutOnDrag;
-(char)forceTitleVisible;
-(float)widthConstraintPriority;
-(unsigned long long)minimumNumberOfColumns;
-(unsigned long long)maximumNumberOfColumns;
-(unsigned long long)maximumNumberOfRows;
-(void)setMaximumNumberOfRows:(unsigned long long)arg1 ;
-(CGSize)minimumCellMargin;
-(CGSize)minimumCellSize;
-(double)minimumCellHeightToWidthRatio;
-(void)setMinimumCellHeightToWidthRatio:(double)arg1 ;
-(double)maximumCellHeightToWidthRatio;
-(void)setMaximumCellHeightToWidthRatio:(double)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDelegate:(id<GridViewDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)layout;
-(void)setNextKeyView:(id)arg1 ;
-(id<GridViewDelegate>)delegate;
-(char)isFlipped;
-(void)setNeedsLayout:(char)arg1 ;
-(void)reloadData;
-(char)acceptsFirstResponder;
-(char)becomeFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)setDataSource:(id<GridViewDataSource>)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id<GridViewDataSource>)dataSource;
-(void)draggingSession:(id)arg1 willBeginAtPoint:(CGPoint)arg2 ;
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2 ;
-(void)draggingSession:(id)arg1 endedAtPoint:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)draggingSession:(id)arg1 movedToPoint:(CGPoint)arg2 ;
-(void)mouseMoved:(id)arg1 ;
-(void)_performDragFromMouseDown:(id)arg1 ;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(void)prepareContentInRect:(CGRect)arg1 ;
-(void)setDrawsSeparator:(char)arg1 ;
-(void)reloadCellAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_validateDragWithInfo:(id)arg1 dropIndex:(unsigned long long*)arg2 dropOperation:(int*)arg3 ;
-(char)drawsSeparator;
@end

