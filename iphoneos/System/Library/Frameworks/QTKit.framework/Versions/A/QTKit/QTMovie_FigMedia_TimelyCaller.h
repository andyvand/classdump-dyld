/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@interface QTMovie_FigMedia_TimelyCaller : NSObject {

	dispatch_queue_sRef _timerQueue;
	OpaqueFigPlaybackItemRef _playbackItem;
	dispatch_source_sRef _timerSource;
	char _isInvalidated;
	OpaqueCMTimebaseRef _timebase;
	double _lastRate;
	double _currentRate;

}
-(void)_stopObservingTimebaseNotifications;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_startObservingTimebaseNotificationsForCurrentItem;
-(void)_timebaseDidChange;
-(void)_removeCurrentTimebaseFromTimerSource;
-(id)initWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(OpaqueFigPlaybackItemRef)playbackItem;
-(void)finalize;
-(void)dealloc;
-(void)invalidate;
@end

