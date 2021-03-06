/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <AppKit/NSDraggingSource.h>
#import <AppKit/NSDraggingDestination.h>

@class NSArray, NSMutableIndexSet, NSCollectionViewItem, NSMutableArray, NSNib, NSIndexSet, NSString;

@interface NSCollectionView : NSView <NSDraggingSource, NSDraggingDestination> {

	NSArray* _content;
	NSMutableIndexSet* _selectionIndexes;
	NSCollectionViewItem* _itemPrototype;
	CGSize _minItemSize;
	CGSize _maxItemSize;
	unsigned long long _maxGridRows;
	unsigned long long _maxGridColumns;
	NSArray* _backgroundColors;
	NSMutableArray* _displayedItems;
	double _animationDuration;
	struct {
		unsigned isFirstResponder : 1;
		unsigned invalidateItemViews : 1;
		unsigned selectable : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned avoidsEmptySelection : 1;
		unsigned superviewIsClipView : 1;
		unsigned needsUpdateGrid : 1;
		unsigned needsUpdateBackground : 1;
		unsigned gridSettingsNeedUpdate : 1;
		unsigned guardSetFrameSize : 1;
		unsigned canDisplayItems : 1;
		unsigned animateForDrag : 1;
		unsigned unarchiving : 1;
		unsigned observingScroll : 1;
		unsigned reserved : 18;
	}  _cvFlags;
	id _delegate;
	NSMutableArray* _backgroundLayers;
	CGSize _storedFrameSize;
	NSNib* _cachedNib;
	char* _animTimerCancel;
	NSArray* _removedItems;
	NSArray* _addedItems;
	NSIndexSet* _addedItemIndexes;
	char* _resizeTimerCancel;
	NSIndexSet* _draggedIndexes;
	unsigned long long _draggingSourceOperationMaskForLocal;
	unsigned long long _draggingSourceOperationMaskForNonLocal;
	long long _currentDropIndex;
	long long _currentDropSpaceIndex;
	long long _shiftRow;
	unsigned long long _currentDragOperation;
	long long _currentDropOperation;
	id _draggingInfo;
	char* _dragTimerCancel;
	id _private;
	void** _reserved[13];

}

@property (assign) id<NSCollectionViewDelegate> delegate; 
@property (getter=isFirstResponder,readonly) char firstResponder; 
@property (copy) NSArray * content; 
@property (getter=isSelectable) char selectable; 
@property (assign) char allowsMultipleSelection; 
@property (copy) NSIndexSet * selectionIndexes; 
@property (retain) NSCollectionViewItem * itemPrototype; 
@property (assign) unsigned long long maxNumberOfRows; 
@property (assign) unsigned long long maxNumberOfColumns; 
@property (assign) CGSize minItemSize; 
@property (assign) CGSize maxItemSize; 
@property (copy) NSArray * backgroundColors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)defaultFocusRingType;
-(void)setDelegate:(id<NSCollectionViewDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setContent:(NSArray *)arg1 ;
-(void)setLayer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)accessibilityEnabledAttribute;
-(char)accessibilityIsEnabledAttributeSettable;
-(id)accessibilityChildrenAttribute;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(id<NSCollectionViewDelegate>)delegate;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(NSIndexSet *)selectionIndexes;
-(void)discardEditing;
-(char)avoidsEmptySelection;
-(NSArray *)content;
-(void)setSelectionIndexes:(NSIndexSet *)arg1 ;
-(void)setAvoidsEmptySelection:(char)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)viewWillDraw;
-(void)setSelectable:(char)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)_shouldDrawFocus;
-(void)_windowChangedKeyState;
-(char)acceptsFirstResponder;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(char)_hoverAreaIsSameAsLast:(id)arg1 ;
-(char)allowsMultipleSelection;
-(void)_drawScrollViewFocusRing:(id)arg1 clipRect:(CGRect)arg2 needsFullDisplay:(char)arg3 ;
-(char)becomeFirstResponder;
-(char)needsPanelToBecomeKey;
-(void)setDraggingSourceOperationMask:(unsigned long long)arg1 forLocal:(char)arg2 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 beganAt:(CGPoint)arg2 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(char)ignoreModifierKeysWhileDragging;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(char)_showingFocusRingAroundEnclosingScrollView:(id)arg1 ;
-(char)_willDrawFocusRingAroundEnclosingScrollView;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(id)_recursiveFindDefaultButtonCell;
-(void)_commonInit;
-(char)isSelectable;
-(void)drawBackgroundOverhangInRect:(CGRect)arg1 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(char)_drawsNothing;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)awakeFromNib;
-(void)insertTab:(id)arg1 ;
-(void)insertBacktab:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)_finishedMakingConnections;
-(void)updateDraggingItemsForDrag:(id)arg1 ;
-(void)draggingSession:(id)arg1 willBeginAtPoint:(CGPoint)arg2 ;
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2 ;
-(void)draggingSession:(id)arg1 endedAtPoint:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(void)concludeDragOperation:(id)arg1 ;
-(char)wantsPeriodicDraggingUpdates;
-(void)draggingSession:(id)arg1 movedToPoint:(CGPoint)arg2 ;
-(char)ignoreModifierKeysForDraggingSession:(id)arg1 ;
-(void)instantiateWithObjectInstantiator:(id)arg1 ;
-(id)accessibilityOrientationAttribute;
-(char)accessibilityIsOrientationAttributeSettable;
-(void)viewDidEndLiveResize;
-(char)_performDragFromMouseDown:(id)arg1 ;
-(id)accessibilitySelectedChildrenAttribute;
-(char)accessibilityIsSelectedChildrenAttributeSettable;
-(void)accessibilitySetSelectedChildrenAttribute:(id)arg1 ;
-(id)accessibilityVisibleChildrenAttribute;
-(char)accessibilityIsVisibleChildrenAttributeSettable;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)_scrollSelectionToVisible;
-(void)viewWillStartLiveResize;
-(void)_setFocusRingNeedsDisplayIfNecessary;
-(void)_scrollViewDidChangeBounds:(id)arg1 ;
-(void)_stopObservingViewDidScroll;
-(void)_startObservingViewDidScroll;
-(void)_drawFocusRingAroundRect:(CGRect)arg1 ;
-(id)draggingSession:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 ;
-(unsigned long long)_accessibilityNumberOfChildren;
-(void)moveWordRight:(id)arg1 ;
-(void)moveWordLeft:(id)arg1 ;
-(void)moveToBeginningOfParagraph:(id)arg1 ;
-(void)moveToEndOfParagraph:(id)arg1 ;
-(void)moveRightAndModifySelection:(id)arg1 ;
-(void)moveLeftAndModifySelection:(id)arg1 ;
-(void)moveWordRightAndModifySelection:(id)arg1 ;
-(void)moveWordLeftAndModifySelection:(id)arg1 ;
-(void)moveUpAndModifySelection:(id)arg1 ;
-(void)moveDownAndModifySelection:(id)arg1 ;
-(void)_createLayerAndInitialize;
-(char)_canSubtreeUseInclusiveLayersAutomatically;
-(char)_shouldCopyConnections;
-(void)_selectionStateChanged:(id)arg1 ;
-(id)_cachedNibWithName:(id)arg1 bundle:(id)arg2 ;
-(void)setItemPrototype:(NSCollectionViewItem *)arg1 ;
-(id)_getItemsToDisplay;
-(SCD_Struct_NS113)_computeGridConfiguration;
-(void)_displayItems:(id)arg1 withConfiguration:(SCD_Struct_NS113)arg2 animate:(char)arg3 ;
-(void)_updateGridSettingsWithPrototype;
-(void)_registerNeedsUpdateGrid;
-(void)_selectObjectsAtIndexes:(id)arg1 avoidsEmptySelection:(char)arg2 ;
-(void)_selectIndex:(unsigned long long)arg1 scrollToVisible:(char)arg2 ;
-(void)_setBackgroundNeedsDisplay;
-(NSCollectionViewItem *)itemPrototype;
-(SCD_Struct_NS113)_computeGridConfigurationWithCount:(unsigned long long)arg1 ;
-(CGRect)_frameForItemAtIndex:(unsigned long long)arg1 withConfiguration:(SCD_Struct_NS113)arg2 ignoreDropSpace:(char)arg3 ;
-(void)_updateGridWithCurrentItemsIfNecessary;
-(CGRect)frameForItemAtIndex:(unsigned long long)arg1 withNumberOfItems:(unsigned long long)arg2 ;
-(SCD_Struct_NS113)_computeGridConfigurationWithSize:(CGSize)arg1 ;
-(void)_doSuperSetFrameSize:(CGSize)arg1 ;
-(char)_shouldResizeSubviewsImmediately;
-(void)_updateGridWithCurrentItems;
-(void)_updateBackgroundLayers;
-(char)_needsLayerBackgrounds;
-(NSArray *)backgroundColors;
-(void)_drawBackgroundGridWithProperties:(id)arg1 ;
-(long long)_createGridBackgroundInRect:(CGRect)arg1 withSelector:(SEL)arg2 ;
-(void)_drawBackgroundForRect:(CGRect)arg1 ;
-(void)_storeCurrentFrameSize;
-(char)isFirstResponder;
-(void)_updateFrame:(id)arg1 ;
-(unsigned long long)_itemIndexAtPoint:(CGPoint)arg1 ;
-(void)_scrollToVisibleItemAtIndex:(unsigned long long)arg1 ;
-(void)_unregisterFirstResponderObservance;
-(void)_registerFirstResponderObservance;
-(CGPoint)_pointWithinBounds:(CGPoint)arg1 ;
-(void)_setBackgroundNeedsDisplayInRect:(CGRect)arg1 ;
-(id)_indexesToSelectForEvent:(id)arg1 initialSelectionIndexes:(id)arg2 startingPoint:(CGPoint)arg3 commandKey:(char)arg4 shiftKey:(char)arg5 rubberband:(id)arg6 ;
-(id)draggingImageForItemsAtIndexes:(id)arg1 withEvent:(id)arg2 offset:(CGPoint*)arg3 ;
-(id)_draggingImageForItemsAtIndexes:(id)arg1 withEvent:(id)arg2 offset:(CGPoint*)arg3 ;
-(char)_canDragItemsAtIndexes:(id)arg1 withEvent:(id)arg2 ;
-(void)_startDragWithItemsAtIndexes:(id)arg1 event:(id)arg2 pasteboard:(id)arg3 ;
-(char)_configurationIsColumnMajorOrder:(SCD_Struct_NS113)arg1 ;
-(long long)_dropIndexForDraggingInfo:(id)arg1 proposedDropOperation:(long long*)arg2 ;
-(long long)_computeRowToShiftWithDropSpaceIndex:(long long)arg1 draggingInfo:(id)arg2 ;
-(unsigned long long)_validateDragWithInfo:(id)arg1 dropIndex:(long long*)arg2 dropOperation:(long long*)arg3 ;
-(void)_updateDragAndDropStateWithDraggingInfo:(id)arg1 newDragOperation:(unsigned long long)arg2 newDropIndex:(long long)arg3 newDropOperation:(long long)arg4 ;
-(SCD_Struct_NS113)_computeGridConfigurationWithSize:(CGSize)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)maxNumberOfRows;
-(unsigned long long)maxNumberOfColumns;
-(CGSize)minItemSize;
-(CGSize)maxItemSize;
-(char)_filledViewShouldExtendVertically;
-(void)setMinItemSize:(CGSize)arg1 ;
-(void)setMaxItemSize:(CGSize)arg1 ;
-(id)newItemForRepresentedObject:(id)arg1 ;
-(char)_itemIsVisibleAtIndex:(unsigned long long)arg1 ;
-(void)_addItemViewAsSubview:(id)arg1 ;
-(void)_ensureVisibleItemsLoaded;
-(double)_animationDuration;
-(char)_animationFromStartRect:(CGRect)arg1 crossesVisibleRectToEndRect:(CGRect)arg2 ;
-(void)_scheduleEndOfAnimationTimer:(double)arg1 ;
-(void)_createBackgroundLayerWithProperties:(id)arg1 ;
-(void)_removeBackgroundLayers;
-(void)_applySelectionIndexes:(id)arg1 toItems:(id)arg2 ;
-(unsigned long long)_indexForIncrementMove:(unsigned long long)arg1 ;
-(unsigned long long)_indexForDecrementMove:(unsigned long long)arg1 ;
-(unsigned long long)_indexForMoveRight;
-(unsigned long long)_indexForMoveLeft;
-(unsigned long long)_indexForMoveUp;
-(unsigned long long)_indexForMoveDown;
-(void)_selectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 scrollIndexToVisible:(unsigned long long)arg3 ;
-(void)setMaxNumberOfRows:(unsigned long long)arg1 ;
-(void)setMaxNumberOfColumns:(unsigned long long)arg1 ;
-(void)setBackgroundColors:(NSArray *)arg1 ;
-(CGRect)frameForItemAtIndex:(unsigned long long)arg1 ;
-(void)_setAnimationDuration:(double)arg1 ;
-(char)_writeItemsAtIndexes:(id)arg1 toPasteboard:(id)arg2 ;
-(SCD_Struct_NS113)_currentGridConfiguration;
-(NSRange)_contiguousRangeOfItemsForRect:(CGRect)arg1 ;
-(id)_accessibilityChildrenAtIndexes:(id)arg1 ;
-(id)accessibilityRowCountAttribute;
-(unsigned long long)accessibilityIsRowCountAttributeSettable;
-(id)accessibilityColumnCountAttribute;
-(unsigned long long)accessibilityIsColumnCountAttributeSettable;
-(id)accessibilityOrderedByRowAttribute;
-(char)accessibilityIsOrderedByRowAttributeSettable;
@end

