/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>

@class NSMutableArray, NSString, NSScroller, NSArray, NSIndexPath, NSColor;

@interface NSBrowser : NSControl {

	id _nsreserved2;
	SEL _nsreserved3;
	id _delegate;
	SEL _doubleAction;
	Class _matrixClass;
	id _cellPrototype;
	CGSize _columnSize;
	short _numberOfVisibleColumns;
	short _minColumnWidth;
	short _firstVisibleColumn;
	short _maxVisibleColumns;
	NSMutableArray* _titles;
	NSString* _pathSeparator;
	NSMutableArray* _columns;
	id _brAuxiliaryStorage;
	NSString* _firstColumnTitle;
	NSScroller* _scroller;
	struct {
		unsigned firstVisibleCalculationDisabled : 1;
		unsigned prefersAllColumnUserResizing : 1;
		unsigned usesSmallScrollers : 1;
		unsigned usesSmallSizeTitleFont : 1;
		unsigned actionNeedsToBeSent : 1;
		unsigned acceptsFirstMouse : 1;
		unsigned refusesFirstResponder : 1;
		unsigned disableCompositing : 6;
		unsigned delegateSelectsCellsByRow : 1;
		unsigned allowsIncrementalSearching : 1;
		unsigned time : 1;
		unsigned hasHorizontalScroller : 1;
		unsigned prohibitEmptySel : 1;
		unsigned sendActionOnArrowKeys : 1;
		unsigned dontDrawTitles : 1;
		unsigned acceptArrowKeys : 1;
		unsigned delegateValidatesColumns : 1;
		unsigned delegateDoesNotCreateRowsInMatrix : 1;
		unsigned delegateSelectsCellsByString : 1;
		unsigned delegateSetsTitles : 1;
		unsigned delegateImplementsWillDisplayCell : 1;
		unsigned separateColumns : 1;
		unsigned titleFromPrevious : 1;
		unsigned isTitled : 1;
		unsigned reuseColumns : 1;
		unsigned allowsBranchSelection : 1;
		unsigned allowsMultipleSelection : 1;
	}  _brflags;

}

@property (getter=isLoaded,readonly) char loaded; 
@property (assign) SEL doubleAction; 
@property (retain) id cellPrototype; 
@property (assign) id<NSBrowserDelegate> delegate; 
@property (assign) char reusesColumns; 
@property (assign) char hasHorizontalScroller; 
@property (assign) char autohidesScroller; 
@property (assign) char separatesColumns; 
@property (getter=isTitled) char titled; 
@property (assign) double minColumnWidth; 
@property (assign) long long maxVisibleColumns; 
@property (assign) char allowsMultipleSelection; 
@property (assign) char allowsBranchSelection; 
@property (assign) char allowsEmptySelection; 
@property (assign) char takesTitleFromPreviousColumn; 
@property (assign) char sendsActionOnArrowKeys; 
@property (copy) NSString * pathSeparator; 
@property (readonly) long long clickedColumn; 
@property (readonly) long long clickedRow; 
@property (readonly) long long selectedColumn; 
@property (readonly) id selectedCell; 
@property (copy,readonly) NSArray * selectedCells; 
@property (copy) NSIndexPath * selectionIndexPath; 
@property (copy) NSArray * selectionIndexPaths; 
@property (assign) long long lastColumn; 
@property (readonly) long long numberOfVisibleColumns; 
@property (readonly) long long firstVisibleColumn; 
@property (readonly) long long lastVisibleColumn; 
@property (readonly) char sendAction; 
@property (readonly) double titleHeight; 
@property (assign) unsigned long long columnResizingType; 
@property (assign) char prefersAllColumnUserResizing; 
@property (assign) double rowHeight; 
@property (copy) NSString * columnsAutosaveName; 
@property (assign) char allowsTypeSelect; 
@property (retain) NSColor * backgroundColor; 
+(void)initialize;
+(Class)browserColumnViewClass;
+(Class)previewColumnViewControllerClass;
+(Class)tableColumnViewControllerClass;
+(Class)matrixColumnViewControllerClass;
+(Class)cellClass;
+(Class)browserTableViewClass;
+(Class)browserTableColumnClass;
+(void)removeSavedColumnsWithAutosaveName:(id)arg1 ;
+(char)accessibilityIsSingleCelled;
-(void)setDelegate:(id<NSBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id)path;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setRefusesFirstResponder:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(void)performClick:(id)arg1 ;
-(void)setNextKeyView:(id)arg1 ;
-(void)setNeedsDisplay:(char)arg1 ;
-(id<NSBrowserDelegate>)delegate;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)becomeKeyWindow;
-(void)setMenu:(id)arg1 ;
-(void)resignKeyWindow;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)viewWillDraw;
-(char)isOpaque;
-(void)setBorderType:(unsigned long long)arg1 ;
-(char)preservesContentDuringLiveResize;
-(NSEdgeInsets)alignmentRectInsets;
-(NSColor *)backgroundColor;
-(id)_scrollViewForColumns;
-(id)_visitedColumnContentWidths;
-(char)separatesColumns;
-(CGRect)_containerRelativeFrameOfColumn:(long long)arg1 ;
-(void)_computeFirstVisibleColumnRequireCompletelyVisible:(char)arg1 ;
-(char)hasHorizontalScroller;
-(long long)numberOfVisibleColumns;
-(void)scrollColumnsRightBy:(long long)arg1 ;
-(void)scrollColumnsLeftBy:(long long)arg1 ;
-(long long)lastColumn;
-(void)_scrollColumnToVisible:(long long)arg1 requireCompletelyVisible:(char)arg2 ;
-(void)setPathSeparator:(NSString *)arg1 ;
-(void)_setWantsRevealovers:(char)arg1 ;
-(void)setTitled:(char)arg1 ;
-(void)setTakesTitleFromPreviousColumn:(char)arg1 ;
-(void)setAllowsTypeSelect:(char)arg1 ;
-(void)tile;
-(void)_doPostColumnConfigurationDidChangeNotification:(id)arg1 ;
-(char)isTitled;
-(char)_delegateDoesNotCreateRowsInMatrix;
-(id)matrixInColumn:(long long)arg1 ;
-(void)setCellPrototype:(id)arg1 ;
-(void)_releaseAutoExpandingItemsCache;
-(void)_clearLeafControllers;
-(void)setLastColumn:(long long)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(void)setAllowsEmptySelection:(char)arg1 ;
-(char)allowsTypeSelect;
-(char)_shouldClipViewForTitlesCopyOnScroll;
-(void)_fixKeyViewForView:(id)arg1 ;
-(void)setHasHorizontalScroller:(char)arg1 ;
-(void)_scrollViewForColumnsWillTrackHorizontalScroller:(id)arg1 ;
-(void)_scrollViewForColumnsDidTrackHorizontalScroller:(id)arg1 ;
-(void)_setHasHorizontalScroller:(char)arg1 ;
-(long long)selectedColumn;
-(id)_viewInColumn:(long long)arg1 ;
-(char)abortEditing;
-(id)itemAtRow:(long long)arg1 inColumn:(long long)arg2 ;
-(id)parentForItemsInColumn:(long long)arg1 ;
-(id)_itemAtRow:(long long)arg1 parentItem:(id)arg2 ;
-(long long)_indexOfItem:(id)arg1 inParent:(id)arg2 ;
-(long long)_indexOfItem:(id)arg1 inColumn:(long long)arg2 ;
-(long long)selectedRowInColumn:(long long)arg1 ;
-(char)isLeafItem:(id)arg1 ;
-(char)_hasLeafViewControllerForItem:(id)arg1 ;
-(char)_isExpandableItem:(id)arg1 ;
-(void)_typeSelectEndCurrentSearch;
-(id)_rootItem;
-(void)reloadColumn:(long long)arg1 ;
-(char)_findRow:(long long*)arg1 column:(long long*)arg2 forItem:(id)arg3 ;
-(char)isLoaded;
-(id)cellPrototype;
-(long long)columnOfMatrix:(id)arg1 ;
-(void)_sendDelegateWillDisplayCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(id)_loadedCellAtRow:(long long)arg1 column:(long long)arg2 inMatrix:(id)arg3 ;
-(void)_updateNumberOfTitleCellsIfNecessary:(long long)arg1 ;
-(void)setTitle:(id)arg1 ofColumn:(long long)arg2 ;
-(void)_setFirstColumnTitle:(id)arg1 ;
-(CGRect)_containerRelativeTitleFrameOfColumn:(long long)arg1 ;
-(id)_containerViewOfTitles;
-(void)_setTitle:(id)arg1 ofColumn:(long long)arg2 ;
-(char)_hasKeyboardFocus;
-(char)_shouldDrawFocus;
-(void)_setFocusRingNeedsDisplay;
-(void)_windowChangedKeyState;
-(char)_shouldMaintainFirstResponder;
-(void)addColumn;
-(void)loadColumnZero;
-(char)_useSnowLeopardBehavior;
-(void)_addAnimatedColumn;
-(void)_selectRowIndexes:(id)arg1 inColumn:(long long)arg2 ;
-(char)_delegateRespondsToSelectCellsByRow;
-(char)_sendDelegateSelectRow:(long long)arg1 inColumn:(long long)arg2 ;
-(void)setSelectionIndexPaths:(NSArray *)arg1 ;
-(NSIndexPath *)selectionIndexPath;
-(CGRect)frameOfColumn:(long long)arg1 ;
-(id)_containerViewOfColumns;
-(void)_scrollRectToVisible:(CGRect)arg1 ;
-(char)_selectCell:(id)arg1 inColumn:(long long)arg2 ;
-(void)_animateLastAddedColumnToVisible;
-(void)scrollColumnToVisible:(long long)arg1 ;
-(id)pathToColumn:(long long)arg1 ;
-(CGRect)_containerRelativeFrameOfInsideOfColumn:(long long)arg1 ;
-(void)_setNeedsDisplayInColumn:(long long)arg1 ;
-(long long)_numberOfChildrenOfItem:(id)arg1 ;
-(id)_child:(long long)arg1 ofItem:(id)arg2 ;
-(id)_newSelectionIndexesFromOldSelectedItems:(id)arg1 parentItem:(id)arg2 ;
-(void)_scrollOptimizingLastColumnPlacement;
-(void)_itemBasedReloadColumn:(long long)arg1 ;
-(void)_matrixBasedReloadColumn:(long long)arg1 ;
-(unsigned long long)_controlSizeForScrollers;
-(void)_syncScrollerSizeOfColumn:(id)arg1 ;
-(void)_postWillScrollNotification;
-(void)_postDidScrollNotification;
-(void)_scrollColumnsRightBy:(long long)arg1 ;
-(char)_shouldAnimateColumnScrolling;
-(void)didFinishColumnScrollWithHelper:(id)arg1 ;
-(char)_shouldScrollStartOfColumnToVisible;
-(void)_scrollColumnToVisible:(long long)arg1 private:(char)arg2 ;
-(long long)lastVisibleColumn;
-(void)_sizeDocumentViewToColumnsAndAlign;
-(void)_didChangeLastColumn:(long long)arg1 toColumn:(long long)arg2 ;
-(void)_ensureValidSelection;
-(char)_addingOrAnimatingNewColumn;
-(unsigned long long)columnResizingType;
-(void)_sizeDocumentViewToColumns;
-(void)_computeFirstMostlyVisibleColumn;
-(void)_alignFirstVisibleColumnToDocumentViewEdge:(char)arg1 ;
-(void)_computeFirstCompletelyVisibleColumn;
-(void)_scrollLastColumnMaxXEdgeToVisible;
-(void)_disableAutosavingAndColumnResizingNotificationsAndMark:(char)arg1 ;
-(double)minColumnWidth;
-(double)_preferedColumnWidth;
-(void)setWidth:(double)arg1 ofColumn:(long long)arg2 ;
-(void)_enableAutosavingAndColumnResizingNotifications;
-(void)_setInitialColumnContentSizeOfColumn:(id)arg1 ;
-(void)_updateNumberOfTitleCellsIfNecessary;
-(void)_addColumnSubviewAndAnimateIfNecessary:(id)arg1 ;
-(id)selectedCellInColumn:(long long)arg1 ;
-(id)_columnControllerInColumn:(long long)arg1 ;
-(id)selectedCell;
-(NSArray *)selectedCells;
-(id)_selectedCellsInColumn:(long long)arg1 ;
-(long long)_columnOfView:(id)arg1 ;
-(double)columnWidthForColumnContentWidth:(double)arg1 ;
-(double)columnContentWidthForColumnWidth:(double)arg1 ;
-(double)titleHeight;
-(CGRect)titleFrameOfColumn:(long long)arg1 ;
-(CGRect)frameOfInsideOfColumn:(long long)arg1 ;
-(CGSize)_calcVisibleColumnAreaAvailable;
-(void)_setNumVisibleColumns:(long long)arg1 ;
-(void)_synchronizeTitlesAndColumnsViewWidth;
-(void)_synchronizeTitlesAndColumnsViewVisibleRect;
-(void)_computeAndAlignFirstClosestVisibleColumn;
-(void)_calcNumVisibleColumnsAndColumnSize;
-(void)_setLineBorderColor:(id)arg1 ;
-(unsigned long long)_borderType;
-(void)_sizeMatrixOfColumnToFit:(id)arg1 ;
-(void)_scrollViewForColumnsDocumentViewFrameDidChange:(id)arg1 ;
-(void)_sizeDocumentViewToColumnsAndAlignIfNecessary:(char)arg1 ;
-(void)_tileContinuousScrollingBrowser;
-(id)_imageForEmptyVerticalScroller;
-(id)_createColumn:(CGRect)arg1 empty:(char)arg2 ;
-(id)_imageForEmptyColumnOfSize:(CGSize)arg1 ;
-(void)_slowPathDrawEmptyColumnsForView:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_fastPathDrawEmptyColumnsForView:(id)arg1 inRect:(CGRect)arg2 ;
-(CGRect)_focusRingRect;
-(char)_getMatchingRow:(long long*)arg1 forString:(id)arg2 inMatrix:(id)arg3 startingAtRow:(long long)arg4 prefixMatch:(char)arg5 caseSensitive:(char)arg6 ;
-(char)acceptsFirstResponder;
-(long long)_firstSelectableRowInMatrix:(id)arg1 inColumn:(long long)arg2 ;
-(long long)_selectedOrFirstValidRowInColumn:(long long)arg1 ;
-(void)_doClickAndQueueSendingOfAction:(id)arg1 ;
-(char)_doMoveRight;
-(void)moveRight:(id)arg1 ;
-(char)_doMoveLeft;
-(void)moveLeft:(id)arg1 ;
-(char)_typeSelectUndoLastSearch;
-(char)_shouldTypeSelectForEvent:(id)arg1 ;
-(char)_typeSelectInterpretKeyEvent:(id)arg1 ;
-(void)_sendQueuedAction;
-(char)_actOnKeyDown:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(id)_viewThatShouldBecomeFirstResponder;
-(void)selectAll:(id)arg1 ;
-(id)selectedRowIndexesInColumn:(long long)arg1 ;
-(char)sendAction;
-(SEL)doubleAction;
-(char)_matrixShouldAddColumnForColumn:(long long)arg1 matrix:(id)arg2 ;
-(char)_userClickOrKeyInColumnShouldMaintainColumnPosition;
-(void)_addColumnWithoutChangingVisibleColumn;
-(id)_old_initWithCoder_NSBrowser:(id)arg1 ;
-(void)setColumnsAutosaveName:(NSString *)arg1 ;
-(char)setPath:(id)arg1 ;
-(void)_old_encodeWithCoder_NSBrowser:(id)arg1 ;
-(id)currentTypeSelectSearchString;
-(id)loadedCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(id)_typeSelectStringForColumn:(long long)arg1 row:(long long)arg2 ;
-(id)_internalTypeSelectStringForColumn:(long long)arg1 row:(long long)arg2 ;
-(long long)_nextTypeSelectMatchFromRow:(long long)arg1 toRow:(long long)arg2 inColumn:(long long)arg3 forString:(id)arg4 ;
-(long long)_internalNextTypeSelectMatchFromRow:(long long)arg1 toRow:(long long)arg2 inColumn:(long long)arg3 forString:(id)arg4 ;
-(void)_restoreTypeSelectCellValue;
-(void)selectRow:(long long)arg1 inColumn:(long long)arg2 ;
-(char)_performTypeSelect:(id)arg1 ;
-(id)_lastNonLeafColumnController;
-(id)_lastDraggedEventFollowing:(id)arg1 ;
-(void)_setNeedsDisplayBeginingAtColumn:(long long)arg1 ;
-(void)setDefaultColumnWidth:(double)arg1 ;
-(void)_setNewPreferedColumnWidth:(double)arg1 ;
-(double)defaultColumnWidth;
-(void)setRowHeight:(double)arg1 ;
-(NSString *)columnsAutosaveName;
-(void)_writePersistentBrowserColumns;
-(void)_readPersistentBrowserColumns;
-(void)_clearVisitedColumnContentWidths;
-(double)_validateNewWidthOfColumn:(id)arg1 width:(double)arg2 ;
-(char)userColumnResizingAutoresizesWindow;
-(char)_shouldStretchWindowIfNecessaryForUserColumnResize;
-(double)widthOfColumn:(long long)arg1 ;
-(char)_stretchWindowIfNecessaryToFitResizedColumnWithInfo:(NSBrowserColumnResizeInfo*)arg1 resizeColumnDelta:(double*)arg2 ;
-(void)_alignColumnForStretchedWindowWithInfo:(NSBrowserColumnResizeInfo*)arg1 ;
-(void)_columnResizeChangeFrameOfColumn:(id)arg1 toFrame:(CGRect)arg2 constrainWidth:(char)arg3 resizeInfo:(NSBrowserColumnResizeInfo*)arg4 ;
-(void)_zeroPinnedResizeColumnsBySharingDelta:(double)arg1 lastSharingColumn:(id)arg2 resizeInfo:(NSBrowserColumnResizeInfo*)arg3 ;
-(void)_equalyResizeColumnsByDelta:(double)arg1 resizeInfo:(NSBrowserColumnResizeInfo*)arg2 ;
-(void)_autosaveColumnsIfNecessary;
-(void)_postColumnConfigurationDidChangeNotification;
-(char)prefersAllColumnUserResizing;
-(void)_resizeColumnByDelta:(double)arg1 resizeInfo:(NSBrowserColumnResizeInfo*)arg2 ;
-(id)_lastDraggedOrUpEventFollowing:(id)arg1 ;
-(long long)_calculateSizeToFitWidthOfColumn:(long long)arg1 testLoadedOnly:(char)arg2 ;
-(void)_setWidth:(double)arg1 ofColumn:(long long)arg2 stretchWindow:(char)arg3 ;
-(void)_sizeToFitColumn:(id)arg1 withSizeToFitType:(long long)arg2 ;
-(id)draggingImageForRowsWithIndexes:(id)arg1 inColumn:(long long)arg2 withEvent:(id)arg3 offset:(CGPoint*)arg4 ;
-(id)_draggingImageForRowsWithIndexes:(id)arg1 inColumn:(long long)arg2 withEvent:(id)arg3 offset:(CGPoint*)arg4 ;
-(char)canDragRowsWithIndexes:(id)arg1 inColumn:(long long)arg2 withEvent:(id)arg3 ;
-(char)_delegateRespondsToWriteRows;
-(char)_dragShouldBeginFromMouseDown:(id)arg1 ;
-(char)getRow:(long long*)arg1 column:(long long*)arg2 forPoint:(CGPoint)arg3 ;
-(char)_canDragRowsWithIndexes:(id)arg1 inColumn:(long long)arg2 withEvent:(id)arg3 ;
-(char)_sendDelegateWriteRowsWithIndexes:(id)arg1 inColumn:(long long)arg2 toPasteboard:(id)arg3 ;
-(void)_prepareToDragRows:(id)arg1 inColumn:(long long)arg2 ;
-(void)_dragRowIndexes:(id)arg1 inColumn:(long long)arg2 withEvent:(id)arg3 pasteboard:(id)arg4 source:(id)arg5 slideBack:(char)arg6 ;
-(void)_concludeDragRows:(id)arg1 inColumn:(long long)arg2 ;
-(char)_autoExpandItemUnderCursor;
-(void)registerForDraggedTypes:(id)arg1 ;
-(void)unregisterDraggedTypes;
-(id)_dropHighlightColor;
-(id)_dropHighlightBackgroundColor;
-(id)_dropHighlightColorForEntireTableView;
-(void)_drawDropHighlightBackgroundAroundRect:(CGRect)arg1 ;
-(void)_setDropHighilightColorIfSelected:(char)arg1 ;
-(id)_uncachedLastSelectedIndexSetForItem:(id)arg1 ;
-(void)selectRowIndexes:(id)arg1 inColumn:(long long)arg2 ;
-(void)_restoreLastSelectedItemsBeforeAutoExpand;
-(void)_drawDropHighlightAroundRect:(CGRect)arg1 isSelected:(char)arg2 rounded:(char)arg3 ;
-(void)_drawDropHighlightAboveRect:(CGRect)arg1 ;
-(void)_drawDropHighlightAroundColumnWithRect:(CGRect)arg1 ;
-(void)_recursiveDisplayRectIfNeededIgnoringOpacity:(CGRect)arg1 isVisibleRect:(char)arg2 rectIsVisibleRectForView:(id)arg3 topView:(char)arg4 ;
-(void)_drawDropHighlight;
-(void)_recursiveDisplayAllDirtyWithLockFocus:(char)arg1 visRect:(CGRect)arg2 ;
-(char)_determineIsSameTargetForDragInfo:(id)arg1 ;
-(void)_sendDelegateValidateDropForDragInfo:(id)arg1 ;
-(void)_setNeedsDisplayForTargetRow:(long long)arg1 column:(long long)arg2 operation:(unsigned long long)arg3 ;
-(char)_delegateRepondsToValidateDrop;
-(void)_validateDropForDragInfo:(id)arg1 ;
-(char)_hoverAreaIsSameAsLast:(id)arg1 ;
-(void)_collapseAutoExpandedItems;
-(void)_scheduleCollapsingAutoExpandedItems;
-(char)_sendDelegateAcceptDropForDragInfo:(id)arg1 ;
-(void)_commitAutoExpandedItems;
-(char)_delegateRespondsToNamesOfPromisedFilesDroppedAtDestination;
-(char)_shouldAutoScrollForPoint:(CGPoint)arg1 ;
-(id)_hitTest:(CGPoint*)arg1 dragTypes:(id)arg2 ;
-(char)_shouldAutoscrollForDraggingInfo:(id)arg1 ;
-(void)_autoscrollForDraggingInfo:(id)arg1 timeDelta:(double)arg2 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)_browserIBMetrics;
-(void)_doTiming;
-(void)updateScroller;
-(char)_scrollColumnsForScrollerIncrementOrDecrementUsingPart:(long long)arg1 ;
-(void)scrollViaScroller:(id)arg1 ;
-(char)_shouldDelegateTargetActionForSelector:(SEL)arg1 ;
-(void)setDoubleAction:(SEL)arg1 ;
-(void)setMatrixClass:(Class)arg1 ;
-(Class)matrixClass;
-(void)setCellClass:(Class)arg1 ;
-(char)allowsMultipleSelection;
-(void)setAllowsBranchSelection:(char)arg1 ;
-(char)allowsBranchSelection;
-(char)allowsEmptySelection;
-(void)setAllowsIncrementalSearching:(char)arg1 ;
-(char)allowsIncrementalSearching;
-(void)setReusesColumns:(char)arg1 ;
-(char)reusesColumns;
-(id)_horizontalScroller;
-(void)setAutohidesScroller:(char)arg1 ;
-(char)autohidesScroller;
-(void)setSeparatesColumns:(char)arg1 ;
-(void)setAcceptsArrowKeys:(char)arg1 ;
-(char)acceptsArrowKeys;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)_setAcceptsFirstMouse:(char)arg1 ;
-(void)setSendsActionOnArrowKeys:(char)arg1 ;
-(char)sendsActionOnArrowKeys;
-(char)_shouldForwardTypeSelectionToNextColumn;
-(void)_setShouldForwardTypeSelectionToNextColumn:(char)arg1 ;
-(id)itemAtRow:(long long)arg1 column:(long long)arg2 ;
-(id)indexPathForItem:(id)arg1 ;
-(id)indexPathForColumn:(long long)arg1 ;
-(id)parentForItem:(id)arg1 ;
-(char)_isLeafRow:(long long)arg1 withParentItem:(id)arg2 ;
-(char)_isExpandableRow:(long long)arg1 withParentItem:(id)arg2 ;
-(id)_gdbColumnControllers;
-(void)_reloadRow:(long long)arg1 column:(long long)arg2 ;
-(void)reloadDataForRowIndexes:(id)arg1 inColumn:(long long)arg2 ;
-(void)reloadItem:(id)arg1 reloadChildren:(char)arg2 ;
-(id)_loadCell:(id)arg1 atRow:(long long)arg2 col:(long long)arg3 inMatrix:(id)arg4 ;
-(void)_sendDelegateCreateRowsForColumn:(long long)arg1 inMatrix:(id)arg2 ;
-(char)_delegateRespondsToWillDisplayCell;
-(char)_isTypeSelectRow:(long long)arg1 column:(long long)arg2 ;
-(id)_typeSelectString;
-(id)_titleCellOfColumn:(long long)arg1 ;
-(id)titleOfColumn:(long long)arg1 ;
-(void)_setUsesSmallTitleFont:(char)arg1 ;
-(void)beforeDraw;
-(void)_viewWillResignFirstResponder:(id)arg1 ;
-(void)setSelectionIndexPath:(NSIndexPath *)arg1 ;
-(NSArray *)selectionIndexPaths;
-(NSString *)pathSeparator;
-(char)takesTitleFromPreviousColumn;
-(void)validateVisibleColumns;
-(void)displayColumn:(long long)arg1 ;
-(void)displayAllColumns;
-(id)_unhookColumnSubviews;
-(void)_reattachColumnSubviews:(id)arg1 ;
-(void)_setScrollerSize:(unsigned long long)arg1 ;
-(id)_recursiveSetDefaultKeyViewLoop;
-(void)_scrollFirstVisibleColumnIntoView;
-(void)scrollRowToVisible:(long long)arg1 inColumn:(long long)arg2 ;
-(CGRect)_visibleRectOfColumns;
-(void)_setVisibleRectOfColumns:(CGRect)arg1 ;
-(void)_disableColumnAnimation;
-(void)_enableColumnAnimation;
-(void)_setShouldAnimateColumnScrolling:(char)arg1 ;
-(void)_setScrollViewForColumns:(id)arg1 ;
-(char)_shouldShowCellExpansionForRow:(long long)arg1 column:(long long)arg2 ;
-(void)setMinColumnWidth:(double)arg1 ;
-(void)setMaxVisibleColumns:(long long)arg1 ;
-(long long)maxVisibleColumns;
-(long long)firstVisibleColumn;
-(void)_setClickedColumn:(long long)arg1 clickedRow:(long long)arg2 ;
-(long long)clickedColumn;
-(long long)clickedRow;
-(CGRect)frameOfRow:(long long)arg1 inColumn:(long long)arg2 ;
-(void)drawTitleOfColumn:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)_scrollViewForColumnsDocumentViewVisibilityChange:(id)arg1 ;
-(char)_forceSynchronizedScrollingAnimation;
-(void)_setBorderType:(unsigned long long)arg1 ;
-(void)updateCell:(id)arg1 ;
-(void)updateCellInside:(id)arg1 ;
-(char)_drawRectIfEmptyWhenSubviewsCoverDirtyRect:(CGRect)arg1 ;
-(void)_drawEmptyColumnsForView:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_drawTitlesForView:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_drawScrollViewFocusRing:(id)arg1 clipRect:(CGRect)arg2 needsFullDisplay:(char)arg3 ;
-(char)_selectItemBestMatching:(id)arg1 ;
-(void)_bumpSelectedItem:(id)arg1 ;
-(long long)_keyRowOrSelectedRowOfMatrix:(id)arg1 inColumn:(long long)arg2 ;
-(char)becomeFirstResponder;
-(char)needsPanelToBecomeKey;
-(char)refusesFirstResponder;
-(void)_scrollColumnToLastVisible:(long long)arg1 ;
-(void)doClick:(id)arg1 ;
-(void)_doClickAndQueueSendingOfAction:(id)arg1 removeAndAddColumnsIfNecessary:(char)arg2 movingBack:(char)arg3 ;
-(void)_willStartTrackingMouseInMatrix:(id)arg1 withEvent:(id)arg2 ;
-(void)doDoubleClick:(id)arg1 ;
-(void)_typeSelectScheduleEndOfSearch;
-(void)setColumnResizingType:(unsigned long long)arg1 ;
-(void)setPrefersAllColumnUserResizing:(char)arg1 ;
-(double)rowHeight;
-(void)noteHeightOfRowsWithIndexesChanged:(id)arg1 inColumn:(long long)arg2 ;
-(void)_setContinuousResizeNotifications:(char)arg1 ;
-(char)_continuousResizeNotifications;
-(void)_setAllowsDelegateSizingForUserResize:(char)arg1 ;
-(char)_allowsDelegateSizingForUserResize;
-(void)setUserColumnResizingAutoresizesWindow:(char)arg1 ;
-(void)_resizeColumn:(id)arg1 withEvent:(id)arg2 ;
-(void)_sizeToFitColumn:(id)arg1 withEvent:(id)arg2 ;
-(void)_sizeToFitColumnMenuAction:(id)arg1 ;
-(char)_performDragFromMouseDown:(id)arg1 inColumn:(long long)arg2 ;
-(char)_shouldAutoExpandItemAtRow:(long long)arg1 inColumn:(long long)arg2 ;
-(void)_cancelAutoExpandItemUnderCursor;
-(void)setDraggingSourceOperationMask:(unsigned long long)arg1 forLocal:(char)arg2 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 beganAt:(CGPoint)arg2 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(char)ignoreModifierKeysWhileDragging;
-(void)_beforeDrawCell:(id)arg1 atRow:(long long)arg2 col:(long long)arg3 clipRect:(CGRect)arg4 ;
-(void)_beginColumnDragging;
-(void)_setDropTargetColumn:(long long)arg1 targetRow:(long long)arg2 targetDropOperation:(unsigned long long)arg3 dragOperation:(unsigned long long)arg4 ;
-(void)_markAutoExpandedItemWithDragInfo:(id)arg1 ;
-(void)_endColumnDragging;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)editItemAtIndexPath:(id)arg1 withEvent:(id)arg2 select:(char)arg3 ;
-(id)_gdbLeafItemViewControllerByItem;
-(id)accessibilityVisibleColumnsAttribute;
-(char)accessibilityIsVisibleColumnsAttributeSettable;
-(id)accessibilityHorizontalScrollBarAttribute;
-(char)accessibilityIsHorizontalScrollBarAttributeSettable;
-(id)accessibilityColumnTitlesAttribute;
-(char)accessibilityIsColumnTitlesAttributeSettable;
-(id)accessibilityColumnsAttribute;
-(char)accessibilityIsColumnsAttributeSettable;
-(id)ns_widgetType;
@end

