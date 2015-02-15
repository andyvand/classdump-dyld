/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:30 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>

@class NSArray, NSString, NSAttributedString, NSURL, NSPathControlItem, NSColor, NSMenu;

@interface NSPathControl : NSControl {

	unsigned long long _draggingSourceOperationMaskForLocal;
	unsigned long long _draggingSourceOperationMaskForNonLocal;
	long long _reserved;
	id _delegate;
	id _pathAux;

}

@property (getter=isEditable) char editable; 
@property (copy) NSArray * allowedTypes; 
@property (copy) NSString * placeholderString; 
@property (copy) NSAttributedString * placeholderAttributedString; 
@property (copy) NSURL * URL; 
@property (assign) SEL doubleAction; 
@property (assign) long long pathStyle; 
@property (readonly) NSPathControlItem * clickedPathItem; 
@property (copy) NSArray * pathItems; 
@property (copy) NSColor * backgroundColor; 
@property (__weak) id<NSPathControlDelegate> delegate; 
@property (retain) NSMenu * menu; 
+(Class)cellClass;
-(void)setDelegate:(id<NSPathControlDelegate>)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id<NSPathControlDelegate>)delegate;
-(NSMenu *)menu;
-(void)setMenu:(NSMenu *)arg1 ;
-(char)isEditable;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setEditable:(char)arg1 ;
-(void)setCell:(id)arg1 ;
-(char)preservesContentDuringLiveResize;
-(NSEdgeInsets)alignmentRectInsets;
-(NSColor *)backgroundColor;
-(void)_windowChangedKeyState;
-(char)resignFirstResponder;
-(SEL)doubleAction;
-(char)_dragShouldBeginFromMouseDown:(id)arg1 ;
-(void)setDoubleAction:(SEL)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
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
-(char)performDragOperation:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(double)baselineOffsetFromBottom;
-(void)_commonInit;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)setPlaceholderString:(NSString *)arg1 ;
-(char)_hasRectangularFocusRingAroundFrame;
-(void)updateTrackingAreas;
-(void)setURL:(NSURL *)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)_removeTrackingRects;
-(NSString *)placeholderString;
-(void)setPlaceholderAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)placeholderAttributedString;
-(void)_toolTipManagerWillRecomputeToolTipsByRemoving:(char)arg1 adding:(char)arg2 ;
-(void)setPathComponentCells:(id)arg1 ;
-(id)clickedPathComponentCell;
-(id)pathComponentCells;
-(void)setPathStyle:(long long)arg1 ;
-(void)setAllowedTypes:(NSArray *)arg1 ;
-(long long)pathStyle;
-(void)pathCell:(id)arg1 willPopUpMenu:(id)arg2 ;
-(void)pathCell:(id)arg1 willDisplayOpenPanel:(id)arg2 ;
-(NSArray *)allowedTypes;
-(char)_isFirstResponder;
-(CGRect)_mainContentBounds;
-(void)_setNeedsDisplay;
-(id)arrayWithArray:(id)arg1 transformedByBlock:(/*^block*/id)arg2 ;
-(id)_dragImageForCell:(id)arg1 withEvent:(id)arg2 offset:(CGPoint*)arg3 ;
-(char)_performDragOfCell:(id)arg1 fromMouseDown:(id)arg2 ;
-(id)_draggedURL:(id)arg1 ;
-(void)_updateDropTargetToCell:(id)arg1 ;
-(void)_ensureDragContext;
-(void)_updateDropTargetForDraggingInfo:(id)arg1 ;
-(NSPathControlItem *)clickedPathItem;
-(NSArray *)pathItems;
-(void)setPathItems:(NSArray *)arg1 ;
-(id)ns_widgetType;
@end

