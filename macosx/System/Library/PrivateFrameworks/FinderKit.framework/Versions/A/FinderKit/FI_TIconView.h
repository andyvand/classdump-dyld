/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TImageBrowserView.h>
#import <FinderKit/TShrinkToFitDelegateProtocol.h>
#import <FinderKit/TDragImageProtocol.h>
#import <FinderKit/NSUserInterfaceItemIdentification.h>
#import <FinderKit/NSScrollViewDelegate.h>
#import <FinderKit/NSMenuDelegate.h>

@class NSString, FI_TIconViewController, FI_TShrinkToFitController;

@interface FI_TIconView : FI_TImageBrowserView <TShrinkToFitDelegateProtocol, TDragImageProtocol, NSUserInterfaceItemIdentification, NSScrollViewDelegate, NSMenuDelegate> {

	FI_TIconViewController* _controller;
	BOOL _isDoubleBufferedView;
	FI_TShrinkToFitController* _stfController;
	BOOL _viewIsReloadingData;
	BOOL _isDrawingInDragImage;
	BOOL _mouseDownInMoreButton;
	BOOL _singleClickOpensNode;
	BOOL _clearBackBufferOnDraw;
	BOOL _trackingCancel;
	long long _currentDropIndex;
	unsigned long long _editedCellIndex;
	unsigned long long _selectionCountBeforeReloadingData;
	unsigned long long _disabledTrackingIndex;
	unordered_map<TFENode, TNSRef<FI_TInlineProgressHostLayer *>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<FI_TInlineProgressHostLayer *> > > >* _nodeToInlineProgressLayerMap;
	TFENode* _alwaysVisibleNode;
	TFENode* _mouseDownNode;
	CGPoint _lastMouseDraggedLocation;
	TNSRef<NSDate *> _dateOfLastMouseDraggedEvent;

}

@property (nonatomic,retain) FI_TIconViewController * controller;                   //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) BOOL singleClickOpensNode;                             //@synthesize singleClickOpensNode=_singleClickOpensNode - In the implementation block
@property (assign,nonatomic) BOOL drawingInDragImage;                               //@synthesize isDrawingInDragImage=_isDrawingInDragImage - In the implementation block
@property (assign,nonatomic) unsigned long long disabledTrackingIndex;              //@synthesize disabledTrackingIndex=_disabledTrackingIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * identifier; 
-(void)stopEditing:(BOOL)arg1 ;
-(void)scrollSTFEditorIntoView_FI;
-(BOOL)isDragImageOpaque;
-(BOOL)shrinkToFitTextViewAboutToOpen;
-(void)shrinkToFitTextViewAboutToClose;
-(void)shrinkToFitTextViewEditingComplete:(id)arg1 ;
-(void)setSelectedSortSegment:(long long)arg1 ;
-(id)viewIdentifierPrefix;
-(void)updateSTFEditorLocation;
-(void)_trackDisabledClickWithEvent:(id)arg1 controller:(id)arg2 ;
-(void)_renameSelectedItem;
-(void)prepareForMenu:(id)arg1 withEvent:(id)arg2 ;
-(void)willOpenMenu:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldDrawCell:(id)arg1 ;
-(id)findOrCreateProgressLayerForCell:(id)arg1 ;
-(id)findOrCreateBadgeLayerForCell:(id)arg1 ;
-(BOOL)usingFinderFlavor;
-(void)ensureAlwaysVisibleNodeInView;
-(void)updateLastMouseDraggedDateAtLocation:(CGPoint)arg1 ;
-(CGRect)maxSTFEditorFrameForCellAtIndex:(unsigned long long)arg1 ;
-(void)setDisabledTrackingIndex:(unsigned long long)arg1 ;
-(BOOL)startEditingWithNode:(const TFENode*)arg1 renameOp:(id)arg2 afterDelay:(BOOL)arg3 ;
-(Class)iconViewClassForCellClass:(Class)arg1 ;
-(CGRect)alwaysVisibleNodeIconFrameForScrolling;
-(void)updateScrollerForAlwaysVisibleNode;
-(void)scrollAlwaysVisibleNodeToVisibleUsingCenterPoint:(BOOL)arg1 ;
-(void)scrollAlwaysVisibleNodeToVisible;
-(id)newCellForRepresentedItem:(id)arg1 useSubClass:(BOOL)arg2 ;
-(void)invalidateBackBuffer;
-(unsigned long long)stfEditorTextAlignmentForCellAtIndex:(unsigned long long)arg1 ;
-(id)stfEditorFontForCellAtIndex:(unsigned long long)arg1 ;
-(long long)finderGroupIndexAtCellIndex:(long long)arg1 ;
-(char)shouldPreserveVisibleRangeWhileZooming;
-(unsigned long long)selectionCountBeforeReloadingData;
-(long long)currentDropIndex;
-(TFENode*)alwaysVisibleNode;
-(void)setAlwaysVisibleNode:(const TFENode*)arg1 ;
-(double)timeSinceLastMouseMoved;
-(void)handleAXSelectionChange;
-(BOOL)singleClickOpensNode;
-(void)setSingleClickOpensNode:(BOOL)arg1 ;
-(BOOL)drawingInDragImage;
-(void)setDrawingInDragImage:(BOOL)arg1 ;
-(unsigned long long)disabledTrackingIndex;
-(id)axChildren;
-(id)axSelectedChildren;
-(void)browserDidScroll;
-(int)defaultHeightOfInfoSpaceWithCurrentViewOptions;
-(void)flushGLContext;
-(unsigned long long)editingIndex;
-(id)_viewIdentifier;
-(id)newCellForRepresentedItem:(id)arg1 ;
-(void)setLabelsOnRight:(char)arg1 ;
-(void)setTextSize:(double)arg1 ;
-(void)setDropIndex:(long long)arg1 dropOperation:(int)arg2 ;
-(id)draggedImageWithEvent:(id)arg1 countBadge:(int)arg2 hotPoint:(CGPoint*)arg3 ;
-(BOOL)editCellTitleAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 select:(BOOL)arg3 ;
-(int)nextIndexInGridLayoutWithDirectionKey:(unsigned short)arg1 currentIndex:(long long)arg2 ;
-(long long)indexOfItemAtPoint:(CGPoint)arg1 ;
-(void)setGridSpacing:(double)arg1 ;
-(void)setShowItemInfo:(char)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(FI_TIconViewController *)controller;
-(id)inputContext;
-(void)rightMouseDown:(id)arg1 ;
-(void)reloadData;
-(BOOL)_typeSelectInterpretKeyEvent:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)dragImage:(id)arg1 at:(CGPoint)arg2 offset:(CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(char)arg7 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)setController:(FI_TIconViewController *)arg1 ;
-(void)drawBackgroundOverhangInRect:(CGRect)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)awakeFromNib;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)updateDraggingItemsForDrag:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)viewDidEndLiveResize;
-(void)menu:(id)arg1 prepareForLocation:(CGPoint)arg2 inView:(id)arg3 ;
-(void)quickLookWithEvent:(id)arg1 ;
-(BOOL)isReloadingData;
-(char)hasFocus;
@end

