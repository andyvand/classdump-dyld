/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>
#import <AppKit/NSUserInterfaceValidations.h>

@class NSColor, NSMutableArray, NSArray;

@interface NSMatrix : NSControl <NSUserInterfaceValidations> {

	id _reserved2;
	SEL _reserved3;
	SEL _doubleAction;
	SEL _errorAction;
	id _delegate;
	id _selectedCell;
	long long _selectedRow;
	long long _selectedCol;
	long long _numRows;
	long long _numCols;
	CGSize _cellSize;
	CGSize _intercell;
	id _font;
	id _protoCell;
	id _cellClass;
	NSColor* _backgroundColor;
	id _private;
	NSMutableArray* _cells;
	struct {
		unsigned reservedMatrix : 2;
		unsigned cellSizeNeedsAutorecalc : 1;
		unsigned autorecalculatesCellSize : 1;
		unsigned drawingContextMenuHighlightOnAllSelectedRows : 1;
		unsigned drawingContextMenuHighlight : 1;
		unsigned browserOptimizationsEnabled : 1;
		unsigned needsRedrawBeforeFirstLiveResizeCache : 1;
		unsigned tmpAllowNonVisibleCellsToBecomeFirstResponder : 1;
		unsigned subclassIsSafeForLiveResize : 1;
		unsigned hasCachedSubclassIsSafeForLiveResize : 1;
		unsigned liveResizeImageCacheingEnabled : 1;
		unsigned checkForSimpleTrackingMode : 1;
		unsigned useSimpleTrackingMode : 1;
		unsigned refusesFirstResponder : 1;
		unsigned dontScroll : 1;
		unsigned changingSelectionWithKeyboard : 1;
		unsigned onlySetKeyCell : 1;
		unsigned currentlySelectingCell : 1;
		unsigned allowsIncrementalSearching : 1;
		unsigned tabKeyTraversesCellsExplicitlySet : 1;
		unsigned tabKeyTraversesCells : 1;
		unsigned drawingAncestor : 1;
		unsigned autosizeCells : 1;
		unsigned drawsBackground : 1;
		unsigned drawsCellBackground : 1;
		unsigned selectionByRect : 1;
		unsigned autoscroll : 1;
		unsigned allowEmptySel : 1;
		unsigned listMode : 1;
		unsigned radioMode : 1;
		unsigned highlightMode : 1;
	}  _mFlags;

}

@property (assign) Class cellClass; 
@property (copy) id prototype; 
@property (assign) unsigned long long mode; 
@property (assign) char allowsEmptySelection; 
@property (copy,readonly) NSArray * cells; 
@property (readonly) id selectedCell; 
@property (copy,readonly) NSArray * selectedCells; 
@property (readonly) long long selectedRow; 
@property (readonly) long long selectedColumn; 
@property (getter=isSelectionByRect) char selectionByRect; 
@property (assign) CGSize cellSize; 
@property (assign) CGSize intercellSpacing; 
@property (copy) NSColor * backgroundColor; 
@property (copy) NSColor * cellBackgroundColor; 
@property (assign) char drawsCellBackground; 
@property (assign) char drawsBackground; 
@property (readonly) long long numberOfRows; 
@property (readonly) long long numberOfColumns; 
@property (assign) SEL doubleAction; 
@property (assign) char autosizesCells; 
@property (getter=isAutoscroll) char autoscroll; 
@property (readonly) long long mouseDownFlags; 
@property (assign) id<NSMatrixDelegate> delegate; 
@property (assign) char autorecalculatesCellSize; 
+(void)initialize;
+(id)_dropHighlightColor;
+(char)accessibilityIsSingleCelled;
+(char)isCompatibleWithResponsiveScrolling;
-(CGRect)QTHUD_frameForCell:(id)arg1 ;
-(void)setDelegate:(id<NSMatrixDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setRefusesFirstResponder:(char)arg1 ;
-(void)updateConstraints;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityHelpStringForChild:(id)arg1 ;
-(char)accessibilityIsChildFocusable:(id)arg1 ;
-(void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2 ;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(id)accessibilityChildrenAttribute;
-(id)font;
-(void)setFont:(id)arg1 ;
-(void)performClick:(id)arg1 ;
-(id<NSMatrixDelegate>)delegate;
-(void)startSpeaking:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)sizeToFit;
-(void)sortUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(char)_wantsHeartBeat;
-(void)becomeKeyWindow;
-(void)stopSpeaking:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)resignKeyWindow;
-(char)isFlipped;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(CGSize)cellSize;
-(char)isOpaque;
-(NSColor *)backgroundColor;
-(void)setPrototype:(id)arg1 ;
-(void)setAllowsEmptySelection:(char)arg1 ;
-(void)setDrawsBackground:(char)arg1 ;
-(long long)selectedColumn;
-(long long)selectedRow;
-(void)putCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(id)cellAtRow:(long long)arg1 column:(long long)arg2 ;
-(void)_windowChangedKeyState;
-(void)addColumn;
-(long long)numberOfRows;
-(id)prototype;
-(NSArray *)cells;
-(id)selectedCell;
-(NSArray *)selectedCells;
-(void)getNumberOfRows:(long long*)arg1 columns:(long long*)arg2 ;
-(char)getRow:(long long*)arg1 column:(long long*)arg2 ofCell:(id)arg3 ;
-(char)sendAction:(SEL)arg1 to:(id)arg2 ;
-(void)selectCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(char)acceptsFirstResponder;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(char)sendAction;
-(SEL)doubleAction;
-(CGRect)cellFrameAtRow:(long long)arg1 column:(long long)arg2 ;
-(void)selectCell:(id)arg1 ;
-(void)_setSelectedCell:(id)arg1 ;
-(char)_changingSelectionWithKeyboard;
-(char)getRow:(long long*)arg1 column:(long long*)arg2 forPoint:(CGPoint)arg3 ;
-(Class)cellClass;
-(char)_shouldDelegateTargetActionForSelector:(SEL)arg1 ;
-(void)setDoubleAction:(SEL)arg1 ;
-(void)setCellClass:(Class)arg1 ;
-(char)allowsEmptySelection;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)updateCell:(id)arg1 ;
-(void)updateCellInside:(id)arg1 ;
-(char)becomeFirstResponder;
-(char)needsPanelToBecomeKey;
-(char)refusesFirstResponder;
-(char)drawsBackground;
-(id)menuForEvent:(id)arg1 ;
-(void)resetCursorRects;
-(void)deselectAllCells;
-(void)mouseDown:(id)arg1 ;
-(void)setTabKeyTraversesCells:(char)arg1 ;
-(void)_setBrowserOptimizationsEnabled:(char)arg1 ;
-(void)_setAllowsNonVisibleCellsToBecomeFirstResponder:(char)arg1 ;
-(void)_setLiveResizeImageCacheingEnabled:(char)arg1 ;
-(void)_setNeedsRedrawBeforeFirstLiveResizeCache:(char)arg1 ;
-(void)setAutoscroll:(char)arg1 ;
-(void)setIntercellSpacing:(CGSize)arg1 ;
-(void)setCellSize:(CGSize)arg1 ;
-(void)sizeToCells;
-(id)initWithFrame:(CGRect)arg1 mode:(unsigned long long)arg2 prototype:(id)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5 ;
-(unsigned long long)mode;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setSelectionFrom:(long long)arg1 to:(long long)arg2 anchor:(long long)arg3 highlight:(char)arg4 ;
-(void)renewRows:(long long)arg1 columns:(long long)arg2 ;
-(id)_scrollRowToCenter:(long long)arg1 ;
-(long long)numberOfColumns;
-(void)_getVisibleRowRange:(NSRange*)arg1 columnRange:(NSRange*)arg2 ;
-(void)_selectAllNoRecurse:(id)arg1 ;
-(CGSize)intercellSpacing;
-(void)removeRow:(long long)arg1 ;
-(void)addRow;
-(void)invalidateIntrinsicContentSizeForCell:(id)arg1 ;
-(void)_setWindow:(id)arg1 ;
-(id)_recursiveFindDefaultButtonCell;
-(void)shiftModifySelection:(id)arg1 ;
-(void)altModifySelection:(id)arg1 ;
-(void)_setMouseTrackingForCell:(id)arg1 ;
-(void)_clearMouseTrackingForCell:(id)arg1 ;
-(void)_updateCellImage:(id)arg1 ;
-(void)setScrollable:(char)arg1 ;
-(void)drawCell:(id)arg1 ;
-(void)heartBeat:(SCD_Struct_NS20*)arg1 ;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(char)_performKeyEquivalent:(id)arg1 conditionally:(char)arg2 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)textDidChange:(id)arg1 ;
-(long long)mouseDownFlags;
-(id)accessibilityCurrentEditorForCell:(id)arg1 ;
-(void)addRowWithCells:(id)arg1 ;
-(void)setToolTip:(id)arg1 forCell:(id)arg2 ;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)textDidEndEditing:(id)arg1 ;
-(id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(NSRange)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(char)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
-(char)textShouldBeginEditing:(id)arg1 ;
-(char)textShouldEndEditing:(id)arg1 ;
-(void)textDidBeginEditing:(id)arg1 ;
-(void)selectText:(id)arg1 ;
-(void)selectNextKeyView:(id)arg1 ;
-(void)selectPreviousKeyView:(id)arg1 ;
-(void)_removeAllCellMouseTracking;
-(char)_shouldShowFirstResponderForCell:(id)arg1 ;
-(void)drawFocusRingMask;
-(void)keyUp:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)_rightMouseUpOrDown:(id)arg1 ;
-(void)calcSize;
-(void)drawCellInside:(id)arg1 ;
-(CGRect)focusRingMaskBounds;
-(char)_hasEditableCell;
-(void)helpRequested:(id)arg1 ;
-(void)drawCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(void)insertRow:(long long)arg1 ;
-(void)setValidateSize:(char)arg1 ;
-(id)cellWithTag:(long long)arg1 ;
-(id)selectTextAtRow:(long long)arg1 column:(long long)arg2 ;
-(id)accessibilityOrientationAttribute;
-(char)accessibilityIsOrientationAttributeSettable;
-(void)_setKeyCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(char)_accessibilityIsRadioGroup;
-(void)_setSelectedCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(void)setSelectionByRect:(char)arg1 ;
-(void)setCellBackgroundColor:(NSColor *)arg1 ;
-(id)makeCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(void)_checkForSimpleTrackingMode;
-(void)_selectCellIfRequired;
-(void)_maintainCell;
-(id)initWithFrame:(CGRect)arg1 mode:(unsigned long long)arg2 cellClass:(Class)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5 ;
-(void)_allocAndInitPrivateIvars;
-(id)_initialize:(long long)arg1 :(long long)arg2 :(long long)arg3 ;
-(void)_setFont:(id)arg1 forCell:(id)arg2 ;
-(char)isR2L;
-(char)autosizesCells;
-(char)drawsCellBackground;
-(NSColor *)cellBackgroundColor;
-(id)_findFirstOne:(long long*)arg1 :(long long*)arg2 ;
-(void)_deselectAllExcept:(long long)arg1 :(long long)arg2 andDraw:(char)arg3 ;
-(id)allowEmptySel:(char)arg1 ;
-(id)keyCell;
-(void)setKeyCell:(id)arg1 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(char)_clearSelectedCell;
-(void)_highlightCell:(char)arg1 atRow:(long long)arg2 column:(long long)arg3 andDraw:(char)arg4 ;
-(void)_getBrowser:(id*)arg1 browserColumn:(long long*)arg2 ;
-(id)_browserColumnController;
-(CGRect)_boundsRectOccupiedByCells;
-(void)_needsDisplayfromRow:(long long)arg1 ;
-(void)_needsDisplayfromColumn:(long long)arg1 ;
-(void)insertRow:(long long)arg1 withCells:(id)arg2 ;
-(void)insertColumn:(long long)arg1 ;
-(void)insertColumn:(long long)arg1 withCells:(id)arg2 ;
-(void)viewDidEndLiveResize;
-(void)_doResetOfCursorRects:(char)arg1 revealovers:(char)arg2 ;
-(void)_computeAllRevealovers;
-(void)_recursiveWindowDidEnableToolTipCreationAndDisplay;
-(void)_autorecalculateCellSize;
-(char)_shouldShowFirstResponderAtRow:(long long)arg1 column:(long long)arg2 ignoringWindowKeyState:(char)arg3 ;
-(void)_getRowRange:(NSRange*)arg1 andColumnRange:(NSRange*)arg2 intersectingRect:(CGRect)arg3 ;
-(void)_setNeedsDisplayInRow:(long long)arg1 column:(long long)arg2 ;
-(void)_drawCellAt:(long long)arg1 col:(long long)arg2 insideOnly:(char)arg3 ;
-(char)_liveResizeImageCacheingEnabled;
-(void)_liveResizeHighlightSelectionInClipRect:(CGRect)arg1 ;
-(char)_needsRedrawForMovement;
-(char)_shouldDrawContextMenuHighlightForRow:(long long)arg1 column:(long long)arg2 ;
-(char)_selectFirstEnabledCell;
-(void)_drawCellAtRow:(long long)arg1 column:(long long)arg2 inFrame:(CGRect)arg3 ;
-(void)drawContextMenuHighlightForCellIndexes:(id)arg1 ;
-(void)scrollCellToVisibleAtRow:(long long)arg1 column:(long long)arg2 ;
-(void)_setKeyCellNeedsDisplay;
-(void)_selectKeyCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(char)_selectNextCellKeyStartingAtRow:(long long)arg1 column:(long long)arg2 ;
-(char)_makeNextCellKey;
-(void)_clearKeyCell;
-(char)_makePreviousCellKey;
-(id)_cellForRow:(long long)arg1 browser:(id)arg2 browserColumn:(long long)arg3 ;
-(char)tabKeyTraversesCells;
-(void)_makeNextCellOrViewKey;
-(void)_makePreviousCellOrViewKey;
-(void)_allowAnimationInCells:(char)arg1 ;
-(void)_makeLeftCellKey;
-(void)_makeRightCellKey;
-(void)_makeUpCellKey;
-(void)_makeDownCellKey;
-(void)_changeSelectionWithEvent:(id)arg1 ;
-(void)_getRow:(long long*)arg1 column:(long long*)arg2 nearPoint:(CGPoint)arg3 ;
-(long long)_acceptableRowAboveRow:(long long)arg1 minRow:(long long)arg2 ;
-(long long)_acceptableRowBelowRow:(long long)arg1 maxRow:(long long)arg2 ;
-(long long)_acceptableRowBelowKeyInVisibleRect:(CGRect)arg1 ;
-(void)_keyboardModifyRow:(long long)arg1 column:(long long)arg2 withEvent:(id)arg3 ;
-(long long)_acceptableRowBelowRow:(long long)arg1 tryAbovePoint:(CGPoint)arg2 ;
-(long long)_acceptableRowAboveKeyInVisibleRect:(CGRect)arg1 ;
-(long long)_acceptableRowAboveRow:(long long)arg1 tryBelowPoint:(CGPoint)arg2 ;
-(void)_pageDownWithEvent:(id)arg1 ;
-(void)_pageUpWithEvent:(id)arg1 ;
-(void)_moveDownWithEvent:(id)arg1 ;
-(void)_moveUpWithEvent:(id)arg1 ;
-(void)_moveRightWithEvent:(id)arg1 ;
-(void)_moveLeftWithEvent:(id)arg1 ;
-(void)_setKeyCellFromTop;
-(void)_setKeyCellFromBottom;
-(void)_setNeedsDisplayForSelectedCells;
-(id)_setSelectionRange:(SelectionAnchor*)arg1 :(char)arg2 ;
-(id)_firstHighlightedCell;
-(long long)_cellFurthestFrom:(long long)arg1 andCol:(long long)arg2 ;
-(char)_mouseHit:(CGPoint)arg1 row:(long long*)arg2 col:(long long*)arg3 ;
-(char)_performDragFromMouseDown:(id)arg1 ;
-(id)_shiftDown:(id)arg1 :(id)arg2 :(long long)arg3 :(long long)arg4 ;
-(id)_alternateDown:(id)arg1 :(id)arg2 :(long long)arg3 :(long long)arg4 ;
-(id)_makeEditable:(id)arg1 :(long long)arg2 :(long long)arg3 :(id)arg4 ;
-(id)_normalListmodeDown:(id)arg1 :(id)arg2 :(long long)arg3 :(long long)arg4 ;
-(void)_sendDoubleActionToCellAt:(CGPoint)arg1 ;
-(void)highlightCell:(char)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(char)_radioHit:(CGPoint)arg1 row:(long long*)arg2 col:(long long*)arg3 ;
-(char)isSelectionByRect;
-(id)_selectRectRange:(SelectionAnchor*)arg1 :(char)arg2 ;
-(id)_selectRowRange:(SelectionAnchor*)arg1 :(char)arg2 ;
-(id)_selectRange:(SelectionAnchor*)arg1 oldArea:(SelectionAnchor*)arg2 lit:(char)arg3 includeX:(char)arg4 ;
-(void)_mouseLoop:(id)arg1 :(id)arg2 :(long long)arg3 :(long long)arg4 :(SelectionAnchor*)arg5 :(char)arg6 ;
-(char)_loopHit:(CGPoint)arg1 row:(long long*)arg2 col:(long long*)arg3 ;
-(void)sendDoubleAction;
-(void)_mouseDownListmode:(id)arg1 ;
-(char)_useSimpleTrackingMode;
-(id)_mouseDownSimpleTrackingMode:(id)arg1 ;
-(id)_mouseDownNonListmode:(id)arg1 ;
-(id)_selectTextOfCell:(id)arg1 ;
-(char)autorecalculatesCellSize;
-(void)setAutorecalculatesCellSize:(char)arg1 ;
-(void)_resetBrowserClickedRowAndColumn;
-(void)_menuDidEndTracking:(id)arg1 ;
-(char)_containedInSingleColumnClipView;
-(void)sendAction:(SEL)arg1 to:(id)arg2 forAllCells:(char)arg3 ;
-(void)deselectSelectedCell;
-(char)selectCellWithTag:(long long)arg1 ;
-(void)setDrawsCellBackground:(char)arg1 ;
-(void)setState:(long long)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(id)_getDrawingRow:(long long*)arg1 andCol:(long long*)arg2 ;
-(char)_getRow:(long long*)arg1 andCol:(long long*)arg2 ofCell:(id)arg3 atRect:(const CGRect*)arg4 ;
-(void)addColumnWithCells:(id)arg1 ;
-(void)removeColumn:(long long)arg1 ;
-(void)setTag:(long long)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(void)setTarget:(id)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(void)setAction:(SEL)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(void)setTag:(long long)arg1 target:(id)arg2 action:(SEL)arg3 atRow:(long long)arg4 column:(long long)arg5 ;
-(void)setAutosizesCells:(char)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(long long)_firstSelectableRow;
-(char)_needsRedrawBeforeFirstLiveResizeCache;
-(char)_wantsLiveResizeToUseCachedImage;
-(char)_shouldAttemptIdleTimeDisposeOfLiveResizeCacheWithFrame:(CGRect)arg1 ;
-(void)_drawRect:(CGRect)arg1 liveResizeFill:(CGRect)arg2 :(CGRect)arg3 :(CGRect)arg4 :(CGRect)arg5 cacheCoveredArea:(CGRect)arg6 ;
-(void)_propagateDownNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_toolTipManagerWillRecomputeToolTipsByRemoving:(char)arg1 adding:(char)arg2 ;
-(char)isAutoscroll;
-(long long)__keyRow;
-(long long)__keyCol;
-(char)_browserOptimizationsEnabled;
-(char)_keyEquivalentModifierMask:(unsigned long long)arg1 matchesModifierFlags:(unsigned long long)arg2 ;
-(id)toolTipForCell:(id)arg1 ;
-(void)_setUseSimpleTrackingMode:(char)arg1 ;
-(SEL)errorAction;
-(void)setErrorAction:(SEL)arg1 ;
-(void)_accessibilityLoadBrowserCellsAtRow:(long long)arg1 count:(long long)arg2 ;
-(id)accessiblityChildCells;
-(id)_accessibilityCorrectlyParentedCells:(id)arg1 ;
-(id)accessibilitySelectedChildrenAttribute;
-(char)accessibilityIsSelectedChildrenAttributeSettable;
-(void)accessibilitySetSelectedChildrenAttribute:(id)arg1 ;
-(id)accessibilityVisibleChildrenAttribute;
-(char)accessibilityIsVisibleChildrenAttributeSettable;
@end

