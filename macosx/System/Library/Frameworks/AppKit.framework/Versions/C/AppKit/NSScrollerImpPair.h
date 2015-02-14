/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSScrollerImpPairDelegate;
#import <AppKit/AppKit-Structs.h>
@class NSScrollView, NSScrollerImp, NSTimer, NSTrackingArea;

@interface NSScrollerImpPair : NSObject {

	NSScrollView* scrollView;
	id<NSScrollerImpPairDelegate> delegate;
	NSScrollerImp* verticalScrollerImp;
	NSScrollerImp* horizontalScrollerImp;
	long long scrollerStyle;
	NSTimer* overlayScrollerHideTimer;
	struct {
		unsigned isFlipped : 1;
		unsigned wantsToFlashOverlayScrollers : 1;
		unsigned windowIsVisible : 1;
		unsigned inScrollGesture : 1;
		unsigned scrollerKnobStyle : 2;
		unsigned scrollerFlashPending : 1;
		unsigned overlayScrollerStateLocked : 1;
		unsigned inVertScroller : 1;
		unsigned inHorzScroller : 1;
		unsigned areScrollersCatchable : 1;
		unsigned shouldFadeCaughtScroller : 1;
		unsigned reserved : 20;
	}  flags;
	struct {
		unsigned reserved : 32;
	}  flags2;
	NSTrackingArea* contentViewTrackingArea;
	CGPoint lastMouseInContentPoint;
	id reserved2;
	id reserved3;

}

@property (assign) NSScrollView * scrollView; 
@property (assign) id<NSScrollerImpPairDelegate> delegate; 
@property (retain) NSScrollerImp * verticalScrollerImp; 
@property (retain) NSScrollerImp * horizontalScrollerImp; 
@property (getter=isFlipped) char flipped; 
@property (assign) long long scrollerStyle; 
@property (assign) long long scrollerKnobStyle; 
@property (readonly) char overlayScrollersShown; 
@property (readonly) char inScrollGesture; 
+(void)initialize;
+(void)_scrollerStyleRecommendationChanged:(id)arg1 ;
+(void)_updateAllScrollerImpPairsForNewRecommendedScrollerStyle:(long long)arg1 ;
+(void)setSuppressScrollerFlash:(char)arg1 forDecendantsOfView:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<NSScrollerImpPairDelegate>)arg1 ;
-(void)dealloc;
-(void)setFlipped:(char)arg1 ;
-(id<NSScrollerImpPairDelegate>)delegate;
-(char)isFlipped;
-(long long)scrollerStyle;
-(void)setScrollerStyle:(long long)arg1 ;
-(void)contentAreaScrolledInDirection:(CGPoint)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)updateTrackingAreas;
-(NSScrollView *)scrollView;
-(void)beginScrollGesture;
-(void)contentAreaScrolled;
-(void)cancelScrollGesture;
-(void)endScrollGesture;
-(void)mouseMoved:(id)arg1 ;
-(void)windowOrderedOut;
-(void)windowOrderedIn;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(void)setVerticalScrollerImp:(NSScrollerImp *)arg1 ;
-(void)setHorizontalScrollerImp:(NSScrollerImp *)arg1 ;
-(void)flashScrollers;
-(void)_doWork:(/*^block*/id)arg1 ;
-(void)removedFromSuperview;
-(void)endTrackingInScrollerImp:(id)arg1 ;
-(void)startLiveResize;
-(void)endLiveResize;
-(void)movedToNewWindow;
-(void)contentAreaWillDraw;
-(void)contentAreaDidHide;
-(long long)scrollerKnobStyle;
-(void)setScrollerKnobStyle:(long long)arg1 ;
-(void)contentAreaDidResize;
-(void)hideOverlayScrollers;
-(void)lockOverlayScrollerState:(unsigned long long)arg1 ;
-(void)unlockOverlayScrollerState;
-(char)overlayScrollerStateIsLocked;
-(void)_addRemoveTrackingAreasAsNeeded;
-(void)_setOverlayScrollerState:(unsigned long long)arg1 forScrollerImp:(id)arg2 forceImmediately:(char)arg3 ;
-(void)_beginHideOverlayScrollers;
-(void)_cancelOverlayScrollerHideTimer;
-(void)_overlayScrollerHideTimerFired:(id)arg1 ;
-(void)_rescheduleOverlayScrollerHideTimerWithDelay:(double)arg1 ;
-(void)_updateOverlayScrollersStateWithReason:(id)arg1 forcingVisibilityForHorizontalKnob:(long long)arg2 verticalKnob:(long long)arg3 ;
-(void)_updateOverlayScrollersStateWithReason:(id)arg1 forceAtLeastKnobsVisible:(char)arg2 ;
-(char)overlayScrollersShown;
-(void)_endScrollGestureWithCancel:(char)arg1 ;
-(void)mouseEnteredContentArea;
-(void)mouseMovedInContentArea;
-(void)mouseExitedContentArea;
-(NSScrollerImp *)verticalScrollerImp;
-(NSScrollerImp *)horizontalScrollerImp;
-(char)inScrollGesture;
@end

