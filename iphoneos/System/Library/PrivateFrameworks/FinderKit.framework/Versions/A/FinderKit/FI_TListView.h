/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSOutlineView.h>
#import <FinderKit/NSMenuDelegate.h>

@class FI_TListViewController, FI_TTableViewShrinkToFitController, NSString;

@interface FI_TListView : NSOutlineView <NSMenuDelegate> {

	FI_TListViewController* _controller;
	BOOL _itemHitOnMouseDown;
	BOOL _mouseDownInMoreButton;
	FI_TTableViewShrinkToFitController* _stfController;
	TNSRef<NSTrackingArea *> _headerTrackingArea;
	TFENode* _currentDropNode;
	long long _disabledTrackingRow;
	BOOL _shouldAutoResizeColumns;
	BOOL _visibleRectGreaterThanLastColumn;
	long long _lastVisibleColumnIndex;
	TNSRef<FI_TLayer *> _headerDropShadowLayer;

}

@property (assign,nonatomic) FI_TListViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) TFENode* currentDropNode;                         //@synthesize currentDropNode=_currentDropNode - In the implementation block
@property (assign) long long disabledTrackingRow;                              //@synthesize disabledTrackingRow=_disabledTrackingRow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isCompatibleWithResponsiveScrolling;
-(void)initCommon;
-(BOOL)startEditingWithNode:(const TFENode*)arg1 renameOp:(id)arg2 ;
-(void)stopEditing:(BOOL)arg1 ;
-(id)stfEditorController_FI;
-(void)scrollSTFEditorIntoView_FI;
-(BOOL)handleUnicodeTextInput:(id)arg1 atTime:(double)arg2 ;
-(BOOL)shrinkToFitTextViewAboutToOpen;
-(void)shrinkToFitTextViewAboutToClose;
-(void)shrinkToFitTextViewEditingComplete:(id)arg1 ;
-(void)deallocCommon;
-(void)updateSTFEditorLocation;
-(void)removeHeaderDropShadowLayer;
-(id)columnWithStringIdentifier:(id)arg1 ;
-(long long)disabledTrackingRow;
-(void)setCurrentDropNode:(TFENode*)arg1 ;
-(void)setDisabledTrackingRow:(long long)arg1 ;
-(void)_trackDisabledClickWithEvent:(id)arg1 controller:(id)arg2 ;
-(BOOL)commonMouseDownAndEarlyReturn:(id)arg1 controller:(id)arg2 ;
-(long long)lastVisibleColumnIndex;
-(void)adjustForRowChangesDuringEditing;
-(unsigned long long)hitTestForEvent:(id)arg1 row:(long long)arg2 ;
-(BOOL)isDroppingOnTagNode;
-(CGRect)frameForDropShadow;
-(void)_renameSelectedItem;
-(void)addHeaderDropShadowLayer;
-(void)prepareForMenu:(id)arg1 withEvent:(id)arg2 ;
-(void)willOpenMenu:(id)arg1 withEvent:(id)arg2 ;
-(TFENode*)currentDropNode;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(FI_TListViewController *)controller;
-(void)layout;
-(id)inputContext;
-(void)viewWillDraw;
-(char)acceptsFirstResponder;
-(BOOL)_typeSelectInterpretKeyEvent:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)dragImage:(id)arg1 at:(CGPoint)arg2 offset:(CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(char)arg7 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(void)selectRowIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2 ;
-(void)editColumn:(long long)arg1 row:(long long)arg2 withEvent:(id)arg3 select:(char)arg4 ;
-(char)canDragRowsWithIndexes:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(CGPoint*)arg4 ;
-(CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2 ;
-(void)setController:(FI_TListViewController *)arg1 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(void)updateDraggingItemsForDrag:(id)arg1 ;
-(char)wantsPeriodicDraggingUpdates;
-(id)viewController;
-(BOOL)_wantsLiveResizeToUseCachedImage;
-(void)menu:(id)arg1 prepareForLocation:(CGPoint)arg2 inView:(id)arg3 ;
-(CGRect)frameOfOutlineCellAtRow:(long long)arg1 ;
-(BOOL)_shouldContinueExpandAtLevel:(long long)arg1 beganAtLevel:(long long)arg2 ;
-(BOOL)_canUseWhiteDisclosureTriangles;
-(char)_supportsTrackingAreasForCells;
-(void)expandItem:(id)arg1 expandChildren:(char)arg2 ;
-(void)collapseItem:(id)arg1 collapseChildren:(char)arg2 ;
-(BOOL)_canUseUpdatedIdentation;
-(BOOL)_onlyAcceptRowDropOnContent;
-(BOOL)_shouldAutoExpandItem:(id)arg1 ;
-(void)_outlineControlClicked:(id)arg1 ;
-(void)didAddRowView:(id)arg1 forRow:(long long)arg2 ;
-(void)didRemoveRowView:(id)arg1 forRow:(long long)arg2 ;
-(void)prepareDraggingDestinationView:(id)arg1 forRowIndexes:(id)arg2 draggingStyle:(long long)arg3 ;
-(void)cursorUpdate:(id)arg1 ;
-(void)quickLookWithEvent:(id)arg1 ;
-(void)viewWillStartLiveResize;
-(void)_setNeedsDisplayForColumn:(long long)arg1 draggedDelta:(double)arg2 ;
-(void)moveColumn:(long long)arg1 toColumn:(long long)arg2 ;
-(void)_sizeToFitForUserColumnResizeWithOriginalWidths:(id)arg1 ;
-(void)_autoresizeToFit;
-(void)_drawDropHighlightOutlineForRow:(long long)arg1 ;
-(void)addDropFeedbackViews;
@end

