/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSMatrix.h>
#import <AppKit/NSAnimationDelegate.h>

@class NSMutableArray, _NSRubberBand, NSAnimation, _NSIconViewDragContext, _NSTypeSelectData, NSString;

@interface NSIconView : NSMatrix <NSAnimationDelegate> {

	struct {
		unsigned unused : 29;
		unsigned allowsTypeSelect : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned needsLayoutUpdate : 1;
	}  _flags;
	NSMutableArray* _items;
	long long _itemCount;
	double _iconSize;
	unsigned long long _imagePosition;
	_NSRubberBand* _rubberBand;
	NSAnimation* _animation;
	unsigned long long _draggingSourceOperationMaskForLocal;
	unsigned long long _draggingSourceOperationMaskForNonLocal;
	_NSIconViewDragContext* _dragContext;
	_NSTypeSelectData* _typeSelectData;
	id _extra;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)setNeedsLayout;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImagePosition:(unsigned long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)delegate;
-(void)animation:(id)arg1 didReachProgressMark:(float)arg2 ;
-(void)animationDidStop:(id)arg1 ;
-(void)animationDidEnd:(id)arg1 ;
-(void)becomeKeyWindow;
-(void)resignKeyWindow;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)viewWillDraw;
-(char)preservesContentDuringLiveResize;
-(void)setAllowsTypeSelect:(char)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsTypeSelect;
-(void)_typeSelectEndCurrentSearch;
-(char)_hasKeyboardFocus;
-(void)_setFocusRingNeedsDisplay;
-(void)reloadData;
-(char)getRow:(long long*)arg1 column:(long long*)arg2 ofCell:(id)arg3 ;
-(void)selectCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(char)acceptsFirstResponder;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(char)_typeSelectUndoLastSearch;
-(char)_shouldTypeSelectForEvent:(id)arg1 ;
-(char)_typeSelectInterpretKeyEvent:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(id)currentTypeSelectSearchString;
-(char)_performTypeSelect:(id)arg1 ;
-(char)_dragShouldBeginFromMouseDown:(id)arg1 ;
-(char)getRow:(long long*)arg1 column:(long long*)arg2 forPoint:(CGPoint)arg3 ;
-(void)_validateDropForDragInfo:(id)arg1 ;
-(char)_hoverAreaIsSameAsLast:(id)arg1 ;
-(char)allowsMultipleSelection;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)updateCell:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)setDraggingSourceOperationMask:(unsigned long long)arg1 forLocal:(char)arg2 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 beganAt:(CGPoint)arg2 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(char)ignoreModifierKeysWhileDragging;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)deselectAllCells;
-(void)mouseDown:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(char)_delegateRespondsTo_shouldTypeSelectForEvent;
-(unsigned long long)imagePosition;
-(void)_commonInit;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(void)drawCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(id)cellAtIndex:(long long)arg1 ;
-(id)makeCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(void)setKeyCell:(id)arg1 ;
-(void)_setNeedsDisplayInRow:(long long)arg1 column:(long long)arg2 ;
-(char)_performDragFromMouseDown:(id)arg1 ;
-(double)iconSize;
-(void)setIconSize:(double)arg1 ;
-(void)animateSetIconSize:(double)arg1 ;
-(char)_delegate_shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2 ;
-(char)needsLayout;
-(void)superviewFrameChanged:(id)arg1 ;
-(void)loadCell:(id)arg1 ;
-(void)_setDefaultPrototypeCell;
-(void)_checkLoaded;
-(void)_createMatrixRowsAndColumns;
-(void)_performLayoutIfNeeded;
-(void)_delegateLoadCell:(id)arg1 forIndex:(long long)arg2 ;
-(CGRect)cellFrameForCell:(id)arg1 ;
-(id)selectedIndexes;
-(void)_putCellNoUpdate:(id)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(void)setSelectedIndexes:(id)arg1 ;
-(id)_dropHighlightEdgeColor;
-(void)updateCellSize;
-(void)_setState:(long long)arg1 ofCell:(id)arg2 ;
-(void)deselectCell:(id)arg1 ;
-(char)_isCellSelected:(id)arg1 ;
-(long long)cellIndexAtPoint:(CGPoint)arg1 ;
-(id)_userSelectionIndexesForProposedSelection:(id)arg1 ;
-(id)_firstSelectedCell;
-(void)scrollCellToVisible:(id)arg1 ;
-(char)_userCanSelectIndex:(long long)arg1 ;
-(char)_flipStateOfCellsInIndexSet:(id)arg1 toState:(long long)arg2 ;
-(char)_userSetStateOfCellsInSet:(id)arg1 toState:(long long)arg2 ;
-(char)_userCanSelectCell:(id)arg1 ;
-(id)cellAtPoint:(CGPoint)arg1 ;
-(id)_cellThatHasContentAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_trackMouseForHitCell:(id)arg1 withEvent:(id)arg2 ;
-(void)_getRowRange:(NSRange*)arg1 columnRange:(NSRange*)arg2 inRect:(CGRect)arg3 ;
-(char)_delegateRespondsTo_typeSelectStringForIndex;
-(id)_delegateTypeSelectStringForIndex:(long long)arg1 ;
-(id)_typeSelectStringForIndex:(long long)arg1 ;
-(long long)itemCount;
-(id)_internalTypeSelectStringForIndex:(long long)arg1 ;
-(char)_delegateRespondsTo_nextTypeSelectMatchFromIndex;
-(long long)_delegate_nextTypeSelectMatchFromIndex:(long long)arg1 toIndex:(long long)arg2 forString:(id)arg3 ;
-(long long)_nextTypeSelectMatchFromIndex:(long long)arg1 toIndex:(long long)arg2 forString:(id)arg3 ;
-(long long)_internalNextTypeSelectMatchFromIndex:(long long)arg1 toIndex:(long long)arg2 forString:(id)arg3 ;
-(char)_userCanSelectIndex:(long long)arg1 withNewSelectedIndexes:(id)arg2 ;
-(long long)_findFirstNonSelectedIndexFrom:(long long)arg1 to:(long long)arg2 selectedIndexes:(id)arg3 ;
-(void)_handleArrowMovementForChar:(unsigned short)arg1 ;
-(id)dragImageForIndexes:(id)arg1 withEvent:(id)arg2 offset:(CGPoint*)arg3 ;
-(char)_delegateRespondsToWriteIndexes;
-(char)_sendDelegateWriteIndexes:(id)arg1 toPasteboard:(id)arg2 ;
-(void)_dragIndexes:(id)arg1 withEvent:(id)arg2 pasteboard:(id)arg3 source:(id)arg4 slideBack:(char)arg5 ;
-(void)_setNeedsDisplayForIndex:(long long)arg1 ;
-(long long)_determineDropIndexForDragInfo:(id)arg1 ;
-(void)_setNeedsDisplayForDropIndex:(long long)arg1 ;
-(void)reloadCellAtIndex:(long long)arg1 ;
-(void)selectIndex:(long long)arg1 ;
-(void)deselectIndex:(long long)arg1 ;
-(void)_flipStateForCell:(id)arg1 ;
-(void)rubberBand:(id)arg1 rectangleFrom:(CGRect)arg2 to:(CGRect)arg3 withEvent:(id)arg4 ;
-(void)setDropTargetIndex:(long long)arg1 ;
@end

