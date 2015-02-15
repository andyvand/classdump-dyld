/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class _NSBrowserScrollView, _NSBrowserColumnView;

@interface _NSBrowserColumnScrollHelper : NSObject {

	_NSBrowserScrollView* _scrollView;
	_NSBrowserColumnView* _optimizableColumn;
	CGPoint _initialOrigin;
	CGRect _destinationRect;
	double _totalDistance;
	double _totalDuration;
	struct {
		unsigned done : 1;
		unsigned animate : 1;
		unsigned shouldPostScrollNotifications : 1;
		unsigned needsEndColumnAnimationOptimization : 1;
		unsigned reserved : 28;
	}  _brcshFlags;
	double _startTime;
	CFRunLoopTimerRef _timer;
	CFRunLoopRef _runLoop;
	CFRunLoopObserverRef _displayWindowForBrowserObserver;

}
-(void)finalize;
-(void)dealloc;
-(void)_stopAnimation;
-(void)_doAnimationStep;
-(void)changeDestinationToRect:(CGRect)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 inScrollView:(id)arg2 animate:(char)arg3 ;
-(void)setOptimizableColumn:(id)arg1 ;
-(void)_invalidateRunLoopTimer;
-(void)_scrollToPosition:(long long)arg1 ;
-(id)_enclosingBrowserView;
-(void)_scrollToFinalPosition;
-(void)_suppressScrollerSurfaceBackingForAnimationForBannedApps:(char)arg1 ;
-(void)_setupRunLoopTimer;
-(void)_doAnimation;
@end

