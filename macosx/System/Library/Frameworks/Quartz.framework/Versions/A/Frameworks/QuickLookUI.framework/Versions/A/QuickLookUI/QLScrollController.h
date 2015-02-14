/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/NSScrollerImpPairDelegate.h>
#import <QuickLookUI/QLScrollerDelegate.h>

@protocol QLScrollControllerDelegate;
@class NSView, CALayer, NSScrollerImpPair, QLScrollerLayer, NSTrackingArea, NSString;

@interface QLScrollController : NSObject <NSScrollerImpPairDelegate, QLScrollerDelegate> {

	NSView* _view;
	CALayer* _hostingLayer;
	id<QLScrollControllerDelegate> _delegate;
	unsigned long long _controlSize;
	NSScrollerImpPair* _scrollerImpPair;
	QLScrollerLayer* _verticalScroller;
	QLScrollerLayer* _horizontalScroller;
	NSTrackingArea* _trackingArea;

}

@property (getter=isActive,readonly) char active; 
@property (assign) id<QLScrollControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) QLScrollerLayer * verticalScroller; 
@property (readonly) QLScrollerLayer * horizontalScroller; 
@property (assign) unsigned long long controlSize;                       //@synthesize controlSize=_controlSize - In the implementation block
@property (assign) NSView * view;                                        //@synthesize view=_view - In the implementation block
@property (assign) CALayer * hostingLayer;                               //@synthesize hostingLayer=_hostingLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scrollControllerForView:(id)arg1 hostingLayer:(id)arg2 ;
-(id)scrollerAtPoint:(CGPoint)arg1 ;
-(CALayer *)hostingLayer;
-(void)scrollerDidScroll:(id)arg1 ;
-(CGPoint)scroller:(id)arg1 localPointFromEvent:(id)arg2 ;
-(double)pageScrollPercentageForScroller:(id)arg1 ;
-(void)scrollerDidEndTracking:(id)arg1 ;
-(char)_hasVerticalScrolling;
-(char)_hasHorizontalScrolling;
-(void)_setupScrollers;
-(void)viewDidResize:(id)arg1 ;
-(void)_updateScrollerVisibility;
-(void)_teardownScrollers;
-(void)setHostingLayer:(CALayer *)arg1 ;
-(void)setDelegate:(id<QLScrollControllerDelegate>)arg1 ;
-(void)dealloc;
-(char)isActive;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSView *)view;
-(id<QLScrollControllerDelegate>)delegate;
-(void)activate;
-(QLScrollerLayer *)verticalScroller;
-(void)deactivate;
-(QLScrollerLayer *)horizontalScroller;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(void)setView:(NSView *)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)scrollerImpPair:(id)arg1 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)arg2 ;
-(CGRect)contentAreaRectForScrollerImpPair:(id)arg1 ;
-(char)inLiveResizeForScrollerImpPair:(id)arg1 ;
-(CGPoint)mouseLocationInContentAreaForScrollerImpPair:(id)arg1 ;
-(CGPoint)scrollerImpPair:(id)arg1 convertContentPoint:(CGPoint)arg2 toScrollerImp:(id)arg3 ;
-(void)scrollerImpPair:(id)arg1 setContentAreaNeedsDisplayInRect:(CGRect)arg2 ;
@end

