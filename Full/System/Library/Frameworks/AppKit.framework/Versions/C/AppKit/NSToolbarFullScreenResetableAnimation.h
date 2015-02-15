/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface NSToolbarFullScreenResetableAnimation : NSObject {

	NSTimer* timer;
	/*^block*/id handler;
	double startTime;
	double endTime;

}
-(void)dealloc;
-(void)invalidate;
-(void)timerFired:(id)arg1 ;
-(void)runForTime:(double)arg1 ;
-(id)initWithDuration:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)completeImmediately;
-(void)resetWithDuration:(double)arg1 handler:(/*^block*/id)arg2 ;
@end

