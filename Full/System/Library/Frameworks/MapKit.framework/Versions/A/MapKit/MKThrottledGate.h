/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, VKTimer;

@interface MKThrottledGate : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _maxAvailableTickets;
	double _availableTickets;
	double _refreshRate;
	NSMutableArray* _waitingJobs;
	VKTimer* _timer;

}
-(void)_timerFired:(id)arg1 ;
-(char)_dispatchWaitingJobsIfNecessary;
-(void)_ensureTimer;
-(char)_replenishAvailableJobsIfNecessary;
-(id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3 ;
-(void)dispatch:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
@end

