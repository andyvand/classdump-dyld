/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSScrollingBehavior.h>

@class NSScrollView, _NSPeriodicInvoker;

@interface NSScrollingBehaviorLegacy : NSScrollingBehavior {

	struct {
		unsigned inScrollGesture : 1;
		unsigned momentumScrollInProgress : 1;
		unsigned ignoreMomentumScrolls : 1;
		unsigned momentumScrollPreventsForwarding : 1;
		unsigned processingScrollMayBegin : 1;
		unsigned acceleratedScrollPreventsForwarding : 1;
		unsigned RESERVED : 26;
	}  _flags;
	CGSize _overflowScrollDelta;
	CGSize _stretchScrollForce;
	CGSize _momentumVelocity;
	double _lastMomentumScrollTimeStamp;
	id _endGestureMonitor;
	id _mouseDownMonitor;
	NSScrollView* _scrollViewRefForCarbonApps;
	_NSPeriodicInvoker* _snapBackAnimator;

}

@property (assign) id endGestureMonitor;                                   //@synthesize endGestureMonitor=_endGestureMonitor - In the implementation block
@property (retain) NSScrollView * scrollViewRefForCarbonApps;              //@synthesize scrollViewRefForCarbonApps=_scrollViewRefForCarbonApps - In the implementation block
-(void)dealloc;
-(id)scrollView:(id)arg1 responderToForwardScrollEvents:(id)arg2 ;
-(void)scrollView:(id)arg1 endScrollGestureDueToReason:(id)arg2 ;
-(void)scrollView:(id)arg1 scrollWheelWithEvent:(id)arg2 ;
-(void)_scrollView:(id)arg1 discreetScrollWithEvent:(id)arg2 ;
-(void)_scrollView:(id)arg1 smoothScrollWithEvent:(id)arg2 ;
-(void)snapRubberBandOfScrollView:(id)arg1 ;
-(void)automateLiveScrollOfScrollView:(id)arg1 ;
-(void)_latchAcceleratedScrollEventsToScrollView:(id)arg1 ;
-(void)_latchMomentumScrollEventsToScrollView:(id)arg1 ;
-(void)_snapRubberBandWhenMouseReleasedFromTrackingLoopOfScrollView:(id)arg1 ;
-(void)_endSnapBackAnimationIfNeededForScrollView:(id)arg1 ;
-(void)setScrollViewRefForCarbonApps:(NSScrollView *)arg1 ;
-(void)_scrollView:(id)arg1 snabRubberBandWithVelocity:(CGSize)arg2 ;
-(char)isInScrollGesture;
-(id)endGestureMonitor;
-(void)setEndGestureMonitor:(id)arg1 ;
-(NSScrollView *)scrollViewRefForCarbonApps;
@end

