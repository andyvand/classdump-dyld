/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSDisplayLink.h>

@interface NSScreenDisplayLink : NSDisplayLink {

	long long _screenNumber;
	/*^block*/id _handler;
	CFRunLoopTimerRef _timer;
	int _lock;
	unsigned long long _scheduleCount;
	SCD_Struct_NS112 _targetTime;
	unsigned _paused : 1;
	unsigned _firing : 1;

}
-(id)init;
-(void)finalize;
-(void)dealloc;
-(double)duration;
-(void)invalidate;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(double)timestamp;
-(char)isValid;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(char)isPaused;
-(void)setPaused:(char)arg1 ;
-(void)_fire;
-(void)_schedule;
-(id)initWithScreen:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

