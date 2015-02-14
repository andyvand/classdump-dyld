/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class GFGraph, GFNode, NSColor, GFPort, GFConnection, NSMutableDictionary, GFList, GFGraphEditorView, NSUndoManager, NSTrackingArea;

@interface GFGraphView : NSView {

	GFGraph* _graph;
	GFNode* _firstResponder;
	char _drawsBackground;
	char _drawsShadows;
	unsigned long long _gridStep;
	NSColor* _backgroundColor;
	NSColor* _gridColor;
	double _tooltipDelay;
	char _spaceDown;
	CGRect _selectionBounds;
	GFPort* _connectionPort;
	CGPoint _connectionStart;
	CGPoint _connectionEnd;
	GFConnection* _connection;
	CFRunLoopTimerRef _tooltipTimer;
	char _tooltipPending;
	CGRect _tooltipBounds;
	GFNode* _tooltipNode;
	NSMutableDictionary* _alignment;
	GFList* _nodeActorCache;
	GFGraphEditorView* _graphEditor;
	NSUndoManager* _undoManager;
	char _disableValidation;
	CGPoint _cachedCenter;
	float _cachedZoomFactor;
	NSTrackingArea* _trackingArea;
	void** _unused[1];

}
+(id)_noteAttributes;
-(void)finalize;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(char)isFlipped;
-(char)isOpaque;
-(id)backgroundColor;
-(void)setDrawsBackground:(char)arg1 ;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(char)drawsBackground;
-(void)scrollWheel:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)print:(id)arg1 ;
-(void)setBoundsOrigin:(CGPoint)arg1 ;
-(void)setBoundsSize:(CGSize)arg1 ;
-(CGRect)adjustScroll:(CGRect)arg1 ;
-(char)autoscroll:(id)arg1 ;
-(id)gridColor;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)otherMouseDown:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(CGRect)rectForPage:(long long)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(void)setGridColor:(id)arg1 ;
-(char)_deselectAll;
-(char)knowsPageRange:(NSRange*)arg1 ;
-(void)_finishInitialization;
-(id)graph;
-(void)setGraph:(id)arg1 ;
-(id)_graphEditor;
-(id)nodeActorForNode:(id)arg1 ;
-(CGRect)boundsForNode:(id)arg1 ;
-(CGSize)_sizeForNode:(id)arg1 ;
-(CGPoint)_pointForPort:(id)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 ;
-(id)_portForPoint:(CGPoint)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 ;
-(void)_drawNode:(id)arg1 bounds:(CGRect)arg2 ;
-(void)_drawSelectionRingWithColor:(id)arg1 width:(double)arg2 forNode:(id)arg3 bounds:(CGRect)arg4 ;
-(char)_trackMouse:(id)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 ;
-(id)_menuForNode:(id)arg1 ;
-(char)_nodeAcceptsFirstResponder:(id)arg1 ;
-(char)_nodeBecomesFirstResponder:(id)arg1 ;
-(char)_nodeResignsFirstResponder:(id)arg1 ;
-(char)_handleKeyUp:(id)arg1 inNode:(id)arg2 ;
-(char)_handleKeyDown:(id)arg1 inNode:(id)arg2 ;
-(void)resetInspectorViews;
-(id)setupInspectorViews;
-(char)drawsShadows;
-(id)_colorForConnection:(id)arg1 ;
-(char)trackConnection:(id)arg1 fromPort:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)resetTooltipView;
-(void)__stateUpdated:(id)arg1 ;
-(void)_stopTooltips;
-(void)_setUndoManager:(id)arg1 ;
-(unsigned long long)_performActionOnSelectedNodes:(SEL)arg1 context:(void*)arg2 ;
-(void)_startTooltips;
-(char)_setFirstResponderNode:(id)arg1 ;
-(void)_editParentGraph:(id)arg1 ;
-(char)_editNode:(id)arg1 ;
-(void)_hideTooltip;
-(char)handleKeyDown:(id)arg1 ;
-(char)handleKeyUp:(id)arg1 ;
-(id)_nodeAtPosition:(CGPoint)arg1 outBounds:(CGRect*)arg2 ;
-(CGRect)_boundsForSelection;
-(id)_menuForNote:(unsigned long long)arg1 ;
-(id)menuForGraph;
-(void)_updateTooltipsForMouseLocation:(CGPoint)arg1 ;
-(char)trackMouse:(id)arg1 ;
-(void)_zoomWithSpeedFactor:(float)arg1 ;
-(void)duplicate:(id)arg1 ;
-(void)__select:(id)arg1 context:(void*)arg2 ;
-(unsigned long long)_performActionOnAllNodes:(SEL)arg1 context:(void*)arg2 ;
-(void)_readSelectionFromPasteboard:(id)arg1 toPoint:(CGPoint)arg2 ;
-(void)_adjustFrame;
-(char)_addNode:(id)arg1 atPosition:(CGPoint)arg2 ;
-(void)drawBackground:(CGRect)arg1 ;
-(void)drawNote:(id)arg1 inBounds:(CGRect)arg2 withColor:(id)arg3 ;
-(void)_drawGraph:(CGRect)arg1 selectionRingColor:(id)arg2 selectionRingWidth:(double)arg3 nodeCount:(unsigned long long)arg4 nodeList:(id*)arg5 connectionCount:(unsigned long long)arg6 connectionList:(id*)arg7 ;
-(void)_drawConnection:(id)arg1 fromPort:(id)arg2 point:(CGPoint)arg3 toPoint:(CGPoint)arg4 ;
-(void)drawSelectionArea:(CGRect)arg1 ;
-(CGPoint)_centerPoint;
-(float)_zoomFactor;
-(void)_printWithInfo:(id)arg1 showingPrintPanel:(char)arg2 ;
-(void)__validatePosition:(id)arg1 context:(void*)arg2 ;
-(void)_writeSelectionToPasteboard:(id)arg1 fromPoint:(CGPoint)arg2 ;
-(id)_imageForSelection;
-(void)setNeedsDisplayForNode:(id)arg1 ;
-(void)__savePosition:(id)arg1 context:(void*)arg2 ;
-(void)__restorePosition:(id)arg1 context:(void*)arg2 ;
-(void)__undoableMove:(id)arg1 context:(void*)arg2 ;
-(void)noteContentChanged;
-(CGRect)titlebarBoundsForNote:(id)arg1 inBounds:(CGRect)arg2 ;
-(void)_editNoteAtIndex:(unsigned long long)arg1 ;
-(CGRect)resizeBoundsForNote:(id)arg1 inBounds:(CGRect)arg2 ;
-(void)__saveSelection:(id)arg1 context:(void*)arg2 ;
-(void)__restoreSelection:(id)arg1 context:(void*)arg2 ;
-(void)__addToSelection:(id)arg1 context:(void*)arg2 ;
-(void)__removeFromSelection:(id)arg1 context:(void*)arg2 ;
-(void)_cacheZoomState;
-(void)_zoomToFitSelection;
-(void)_zoomToFitAll;
-(void)_restoreZoomState;
-(CGRect)boundsForConnection:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 ;
-(id)tooltipStringForPoint:(CGPoint)arg1 tooltipBounds:(CGRect*)arg2 ;
-(id)_createSubgraphFromSelection:(id)arg1 ;
-(void)_addNote:(id)arg1 ;
-(CGRect)maxBounds;
-(void)_setZoomFactor:(float)arg1 centerPoint:(CGPoint)arg2 ;
-(void)_setZoomFactor:(float)arg1 ;
-(void)__unionRect:(id)arg1 context:(void*)arg2 ;
-(CGPoint)_pastePoint;
-(void)__delete:(id)arg1 context:(void*)arg2 ;
-(id)setupTooltipViewForPoint:(CGPoint)arg1 tooltipBounds:(CGRect*)arg2 ;
-(void)setDrawsShadows:(char)arg1 ;
-(void)setGridStep:(unsigned long long)arg1 ;
-(unsigned long long)gridStep;
-(char)alignNodes;
-(void)setAlignNodes:(char)arg1 ;
-(void)setTooltipDelay:(double)arg1 ;
-(double)tooltipDelay;
-(CGRect)boundsForConnection:(id)arg1 ;
-(void)drawConnection:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 ;
-(void)_editNote:(id)arg1 ;
-(void)_setNoteColor:(id)arg1 ;
-(void)_deleteNote:(id)arg1 ;
-(void)__frameChanged:(id)arg1 ;
-(void)_zoomToFitRect:(CGRect)arg1 ;
-(void)_setCenterPoint:(CGPoint)arg1 ;
-(void)_validateNodePositions;
-(void)_validateNodePosition:(id)arg1 ;
-(void)__layoutUpdated:(id)arg1 ;
-(void)__windowKey:(id)arg1 ;
-(unsigned long long)_performActionOnNodes:(SEL)arg1 context:(void*)arg2 selectedOnly:(char)arg3 ;
-(void)__deselect:(id)arg1 context:(void*)arg2 ;
-(char)__selectionFilter:(id)arg1 ;
-(void)_writeSelectionToState:(id)arg1 fromPoint:(CGPoint)arg2 ;
-(void)_writeSelectionToArchiver:(id)arg1 fromPoint:(CGPoint)arg2 ;
-(void)__move:(id)arg1 context:(void*)arg2 ;
-(char)_readSelectionFromState:(id)arg1 toPoint:(CGPoint)arg2 ;
-(char)_readSelectionFromUnarchiver:(id)arg1 toPoint:(CGPoint)arg2 ;
-(void)_showTooltip;
-(void)_setGraphEditor:(id)arg1 ;
-(id)_firstResponderNode;
-(id)_trackedConnection;
-(id)_createSubgraphFromSelection:(id)arg1 withMacroType:(Class)arg2 ;
@end

