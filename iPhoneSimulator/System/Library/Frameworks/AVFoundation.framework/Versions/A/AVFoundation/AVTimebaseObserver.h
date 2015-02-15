/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference;

@interface AVTimebaseObserver : NSObject {

	dispatch_queue_sRef _timerQueue;
	AVWeakReference* _weakReference;
	dispatch_source_sRef _timerSource;
	OpaqueCMTimebaseRef _timebase;
	double _lastRate;
	double _currentRate;
	char _invalid;

}

@property (getter=_weakReference,nonatomic,readonly) AVWeakReference * weakReference;              //@synthesize weakReference=_weakReference - In the implementation block
@property (readonly) OpaqueCMTimebaseRef timebase; 
@property (nonatomic,readonly) char invalidated; 
-(id)_weakReference;
-(void)_startObservingTimebaseNotifications;
-(void)_attachTimerSourceToTimebase;
-(void)_removeTimebaseFromTimerSource;
-(void)_stopObservingTimebaseNotifications;
-(void)_effectiveRateChanged;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(char)invalidated;
-(void)finalize;
-(void)dealloc;
-(void)invalidate;
-(void)_finishInitialization;
-(OpaqueCMTimebaseRef)timebase;
@end

