/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <AppKit/NSView.h>
#import <MailUI/NSScrollViewDelegate.h>

@protocol MUICollectionViewDelegate;
@class NSMutableArray, NSMutableSet, NSMutableIndexSet, MUICollectionHeightStorage, NSIndexSet, NSString;

@interface MUICollectionView : NSView <NSScrollViewDelegate> {

	NSMutableArray* _activeCellViews;
	NSMutableSet* _spareCellViews;
	NSMutableIndexSet* _faultedIndexes;
	NSMutableIndexSet* _lockedIndexes;
	NSMutableIndexSet* _selectionIndexes;
	CGSize _cellSpacing;
	char _emphasized;
	unsigned long long _focusedIndex;
	char _adjustHeightForPinning;
	char _adjustScrollForPinning;
	char _inScroll;
	id<MUICollectionViewDelegate> _delegate;
	MUICollectionHeightStorage* _heightStorage;
	unsigned long long _pinnedCellEdge;
	unsigned long long _pinnedEdge;
	double _pinnedHeightAdjustment;
	unsigned long long _pinnedIndex;
	double _pinnedOffset;

}

@property (assign,nonatomic,__weak) id<MUICollectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize cellSpacing; 
@property (assign,nonatomic) unsigned long long focusedIndex; 
@property (nonatomic,copy) NSIndexSet * selectionIndexes; 
@property (assign,nonatomic) char emphasized; 
@property (assign,nonatomic) char inScroll;                                              //@synthesize inScroll=_inScroll - In the implementation block
@property (nonatomic,readonly) NSRange visibleRange; 
@property (nonatomic,readonly) unsigned long long firstResponderIndex; 
@property (nonatomic,readonly) unsigned long long numberOfCells; 
@property (nonatomic,readonly) MUICollectionHeightStorage * heightStorage;               //@synthesize heightStorage=_heightStorage - In the implementation block
@property (assign,nonatomic) unsigned long long pinnedIndex;                             //@synthesize pinnedIndex=_pinnedIndex - In the implementation block
@property (assign,nonatomic) unsigned long long pinnedCellEdge;                          //@synthesize pinnedCellEdge=_pinnedCellEdge - In the implementation block
@property (assign,nonatomic) unsigned long long pinnedEdge;                              //@synthesize pinnedEdge=_pinnedEdge - In the implementation block
@property (assign,nonatomic) double pinnedOffset;                                        //@synthesize pinnedOffset=_pinnedOffset - In the implementation block
@property (assign,nonatomic) double pinnedHeightAdjustment;                              //@synthesize pinnedHeightAdjustment=_pinnedHeightAdjustment - In the implementation block
@property (assign,nonatomic) char adjustHeightForPinning;                                //@synthesize adjustHeightForPinning=_adjustHeightForPinning - In the implementation block
@property (assign,nonatomic) char adjustScrollForPinning;                                //@synthesize adjustScrollForPinning=_adjustScrollForPinning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingNumberOfCells;
+(char)requiresConstraintBasedLayout;
-(void)insertCellAtIndex:(unsigned long long)arg1 ;
-(void)removeCellAtIndex:(unsigned long long)arg1 ;
-(void)moveCellAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)_scrollViewDidScroll:(id)arg1 ;
-(unsigned long long)indexForView:(id)arg1 ;
-(void)noteHeightOfCellAtIndex:(unsigned long long)arg1 ;
-(void)_muiCollectionViewCommonInit;
-(MUICollectionHeightStorage *)heightStorage;
-(void)enumerateCellViewsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfCells;
-(id)cellViewAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForResponder:(id)arg1 ;
-(NSRange)rangeOfCellsInRect:(CGRect)arg1 ;
-(void)_updateEmphasisIfNeeded;
-(void)_updateSelectionIfNeeded;
-(void)enumerateCellViewsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)insertCellsAtIndexesInRange:(NSRange)arg1 ;
-(void)setFocusedIndex:(unsigned long long)arg1 ;
-(unsigned long long)pinnedIndex;
-(void)setPinnedIndex:(unsigned long long)arg1 ;
-(void)_updateCellIndexes;
-(void)removeCellsAtIndexesInRange:(NSRange)arg1 ;
-(unsigned long long)firstResponderIndex;
-(void)scrollToCellAtIndex:(unsigned long long)arg1 constrainScroll:(char)arg2 ;
-(void)lockCellsAtIndexesInRange:(NSRange)arg1 ;
-(void)_faultCellsAtIndexesInRange:(NSRange)arg1 ;
-(void)unlockCellsAtIndexesInRange:(NSRange)arg1 ;
-(void)_updateConstraintsForCellAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexOfCellView:(id)arg1 ;
-(void)_pinToCellAtIndex:(unsigned long long)arg1 cellEdge:(unsigned long long)arg2 edge:(unsigned long long)arg3 offset:(double)arg4 ;
-(void)setPinnedCellEdge:(unsigned long long)arg1 ;
-(void)setPinnedEdge:(unsigned long long)arg1 ;
-(void)setPinnedOffset:(double)arg1 ;
-(unsigned long long)pinnedCellEdge;
-(unsigned long long)pinnedEdge;
-(double)pinnedOffset;
-(char)adjustScrollForPinning;
-(CGRect)_adjustRectForPinning:(CGRect)arg1 ;
-(void)selectCellsAtIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)deselectCellsAtIndexes:(id)arg1 ;
-(NSRange)visibleRange;
-(void)_updateGeometryIfNeeded;
-(void)setAdjustScrollForPinning:(char)arg1 ;
-(char)inScroll;
-(CGRect)rectForCellAtIndex:(unsigned long long)arg1 ;
-(double)pinnedHeightAdjustment;
-(char)adjustHeightForPinning;
-(void)setPinnedHeightAdjustment:(double)arg1 ;
-(void)_pinTo:(CGRect)arg1 edge:(unsigned long long)arg2 ;
-(void)setInScroll:(char)arg1 ;
-(void)setAdjustHeightForPinning:(char)arg1 ;
-(void)_scrollEdge:(unsigned long long)arg1 to:(/*^block*/id)arg2 ;
-(char)_scrollToPreviousCell:(id)arg1 contiguously:(char)arg2 ;
-(char)_scrollToNextCell:(id)arg1 contiguously:(char)arg2 ;
-(void)insertCellsAtIndexes:(id)arg1 ;
-(void)removeCellsAtIndexes:(id)arg1 ;
-(void)lockCellAtIndex:(unsigned long long)arg1 ;
-(void)lockCellsAtIndexes:(id)arg1 ;
-(void)unlockCellAtIndex:(unsigned long long)arg1 ;
-(void)unlockCellsAtIndexes:(id)arg1 ;
-(void)pinToCellAtIndex:(unsigned long long)arg1 cellEdge:(unsigned long long)arg2 edge:(unsigned long long)arg3 ;
-(CGSize)cellSpacing;
-(void)setCellSpacing:(CGSize)arg1 ;
-(void)removeAllCells;
-(unsigned long long)focusedIndex;
-(void)setDelegate:(id<MUICollectionViewDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)layout;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id<MUICollectionViewDelegate>)delegate;
-(char)performKeyEquivalent:(id)arg1 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(NSIndexSet *)selectionIndexes;
-(void)setSelectionIndexes:(NSIndexSet *)arg1 ;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)scrollRectToVisible:(CGRect)arg1 ;
-(void)scrollPoint:(CGPoint)arg1 ;
-(char)acceptsFirstResponder;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(id)enclosingScrollView;
-(void)viewDidMoveToWindow;
-(void)viewDidMoveToSuperview;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(CGRect)adjustScroll:(CGRect)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(char)emphasized;
-(void)setEmphasized:(char)arg1 ;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(void)prepareContentInRect:(CGRect)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(void)scrollPageUp:(id)arg1 ;
-(void)scrollPageDown:(id)arg1 ;
-(void)didEndScrollInScrollView:(id)arg1 ;
-(void)didBeginScrollInScrollView:(id)arg1 ;
-(void)didScrollInScrollView:(id)arg1 ;
@end

