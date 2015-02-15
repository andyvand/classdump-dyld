/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <Dock/ECLayerSource.h>
#import <Dock/ECEventHandlingDelegate.h>
#import <Dock/ECKeyboardNavigating.h>

@protocol OS_dispatch_source, ECItemListDataSourceECItemListActionHandling;
@class NSObject, ECItemListLayer, ECItemListItemLayer, ECTooltipLayer, NSString;

@interface ECItemList : NSObject <ECLayerSource, ECEventHandlingDelegate, ECKeyboardNavigating> {

	Class _itemLayerClass;
	NSObject*<OS_dispatch_source> _springTimer;
	NSObject*<OS_dispatch_source> _scrollTimer;
	NSObject*<OS_dispatch_source> _scrollWheelTimer;
	NSObject*<OS_dispatch_source> _animationTimer;
	NSObject*<OS_dispatch_source> _hoverTimer;
	double _overflowScrollDelta;
	double _stretchScrollForce;
	double _momentumVelocity;
	unsigned long long _lastMomentumScrollTime;
	unsigned _dragScrollingUp : 1;
	unsigned _dragScrollingDown : 1;
	unsigned _disableScrollingAnimation : 1;
	unsigned _hasScrollableContent : 1;
	unsigned _inScrollGesture : 1;
	unsigned _hasScrollOccurred : 1;
	unsigned _momentumScrollInProgress : 1;
	unsigned _ignoreMomentumScrolls : 1;
	unsigned _constrainScroll : 1;
	unsigned _delayHover : 1;
	float _scaleFactor;
	ECItemListLayer* _layer;
	unsigned long long _selectedIndex;
	id<ECItemListDataSource><ECItemListActionHandling> _handler;
	ECItemListItemLayer* _expandedItemLayer;
	ECTooltipLayer* _tooltipLayer;

}

@property (nonatomic,readonly) ECItemListLayer * layer;                                                      //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) Class itemLayerClass;                                                           //@synthesize itemLayerClass=_itemLayerClass - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                                               //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,readonly) NSRange visibleItemRange; 
@property (assign,nonatomic) float scaleFactor;                                                              //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic,__weak) id<ECItemListDataSource><ECItemListActionHandling> handler;              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) ECItemListItemLayer * expandedItemLayer;                                 //@synthesize expandedItemLayer=_expandedItemLayer - In the implementation block
@property (nonatomic,retain) ECTooltipLayer * tooltipLayer;                                                  //@synthesize tooltipLayer=_tooltipLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemLayerForIndex:(unsigned long long)arg1 ;
-(char)navigate:(int)arg1 withEvent:(id)arg2 ;
-(NSRange)visibleItemRange;
-(unsigned long long)numberOfItemsForLayer:(id)arg1 ;
-(id)makeLayerForLayer:(id)arg1 ;
-(void)setContentInLayers:(id)arg1 withDataRange:(NSRange)arg2 forLayer:(id)arg3 usingScaleFactor:(float)arg4 ;
-(void)_scrollContentToPoint:(CGPoint)arg1 animating:(BOOL)arg2 ;
-(void)_snapRubberBand;
-(BOOL)_canExpandTextOfItemLayer:(id)arg1 ;
-(void)setExpandedItemLayer:(ECItemListItemLayer *)arg1 ;
-(void)_expandTextOfItemLayer:(id)arg1 ;
-(void)_smoothScrollWithEvent:(id)arg1 ;
-(char)mouseExited:(id)arg1 inLayer:(id)arg2 ;
-(char)leftMouseUp:(id)arg1 inLayer:(id)arg2 ;
-(char)leftMouseDraggedEntered:(id)arg1 inLayer:(id)arg2 ;
-(char)mouseEntered:(id)arg1 inLayer:(id)arg2 ;
-(char)leftMouseDraggedExited:(id)arg1 inLayer:(id)arg2 ;
-(ECItemListItemLayer *)expandedItemLayer;
-(char)leftMouseDown:(id)arg1 inLayer:(id)arg2 ;
-(char)scrollWheel:(id)arg1 inLayer:(id)arg2 ;
-(char)gesture:(id)arg1 inLayer:(id)arg2 ;
-(id)initWithHandler:(id)arg1 scaleFactor:(float)arg2 ;
-(void)setItemLayerClass:(Class)arg1 ;
-(unsigned long long)indexOfItemLayer:(id)arg1 ;
-(void)_scrollToIndex:(unsigned long long)arg1 ;
-(void)_collapseTextOfItemLayer:(id)arg1 ;
-(void)_scrollToRect:(CGRect)arg1 ;
-(BOOL)_pinnedInDirectionX:(double)arg1 ;
-(void)_removeTooltipLayer;
-(Class)itemLayerClass;
-(ECTooltipLayer *)tooltipLayer;
-(void)setTooltipLayer:(ECTooltipLayer *)arg1 ;
-(float)scaleFactor;
-(void)setScaleFactor:(float)arg1 ;
-(void)dealloc;
-(ECItemListLayer *)layer;
-(void)invalidate;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)layout;
-(void)setHandler:(id<ECItemListDataSource><ECItemListActionHandling>)arg1 ;
-(char)keyDown:(id)arg1 ;
-(double)_stretchAmount;
-(id<ECItemListDataSource><ECItemListActionHandling>)handler;
@end
