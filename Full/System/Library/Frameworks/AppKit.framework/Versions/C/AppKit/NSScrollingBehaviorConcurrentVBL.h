/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSScrollingBehavior.h>
#import <AppKit/_NSScrollStateEventListener.h>

@class _NSScrollingConcurrentConstantData, _NSScrollingConcurrentVBLMonitor, _NSScrollingConcurrentEventMonitor, _NSScrollingConcurrentMainThreadSynchronizer, NSString;

@interface NSScrollingBehaviorConcurrentVBL : NSScrollingBehavior <_NSScrollStateEventListener> {

	id _theCakeIsALie;
	char* _timeOutCancelledPtr;
	unsigned long long _scrollingMode;
	long long _state;
	_NSScrollingConcurrentConstantData* _constantData;
	_NSScrollingConcurrentVBLMonitor* _vblMonitor;
	_NSScrollingConcurrentEventMonitor* _eventMonitor;
	_NSScrollingConcurrentMainThreadSynchronizer* _mainThreadSynchronizer;
	long long _gestureAxis;
	opaque_pthread_mutex_t _screenDisabledMutex;
	unsigned long long _gestureToken;
	long long _referencePageNumber;
	long long _targetPageNumber;
	unsigned long long _screenDisabledToken;
	SCD_Struct_NS19 _flags;

}

@property (assign) long long state; 
@property (assign) unsigned long long gestureToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)scrollStateEvent:(long long)arg1 sender:(id)arg2 ;
-(char)_isStretched;
-(id)_legacyBehavior;
-(id)scrollView:(id)arg1 responderToForwardMayBeginScrollEvent:(id)arg2 ;
-(id)scrollView:(id)arg1 responderToForwardScrollEvents:(id)arg2 ;
-(void)scrollView:(id)arg1 endScrollGestureDueToReason:(id)arg2 ;
-(void)scrollView:(id)arg1 scrollWheelWithEvent:(id)arg2 ;
-(void)_scrollView:(id)arg1 discreetScrollWithEvent:(id)arg2 ;
-(void)_scrollView:(id)arg1 smoothScrollWithEvent:(id)arg2 ;
-(void)_scrollView:(id)arg1 trackScrollMayBegin:(id)arg2 ;
-(void)_scrollView:(id)arg1 trackGestureScrollWithEvent:(id)arg2 ;
-(void)snapRubberBandOfScrollView:(id)arg1 ;
-(void)scrollView:(id)arg1 boundsChangedForClipView:(id)arg2 ;
-(void)automateLiveScrollOfScrollView:(id)arg1 ;
-(void)_updatePageReferenceNumber;
-(void)_stopGestureScrollTracking;
-(void)_snapRubberbandWithInitialInitialOrigin:(CGPoint)arg1 velocity:(CGPoint)arg2 stretch:(CGSize)arg3 ;
-(void)_animateSwipePageAlignment;
-(void)checkForGestureContinuance;
-(void)_beginMomentumScroll;
-(char)_snapRubberbandIfRequired;
-(void)_snapRubberband;
-(void)waitForEvent;
-(void)_beginPhysicalScroll;
-(void)_animateMomentum;
-(void)_updateMomentumEventsStateMachingWithScrollStateEvent:(long long)arg1 sender:(id)arg2 ;
-(void)_updateAnimatedMomentumStateMachingWithScrollStateEvent:(long long)arg1 sender:(id)arg2 ;
-(unsigned long long)gestureToken;
-(void)_asynchronouslyAllowDelegateToModifyProposedPageAlignedOrigin:(double*)arg1 onAxis:(long long)arg2 withInitialOrigin:(double)arg3 velocity:(double)arg4 synchronousTimeout:(unsigned long long)arg5 gestureToken:(unsigned long long)arg6 ;
-(char)supportsConcurrentScrolling;
-(void)setGestureToken:(unsigned long long)arg1 ;
@end

