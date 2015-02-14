/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimebaseObserver.h>

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_CM5 _intervalRequested;
	SCD_Struct_CM5 _lastIntervalUsed;
	SCD_Struct_CM5 _lastPeriodicFireTime;
	SCD_Struct_CM5 _lastNonperiodicFireTime;
	SCD_Struct_CM5 _lastStopTime;
	unsigned _sequenceNum;
	/*^block*/id _block;

}
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 interval:(SCD_Struct_CM5)arg2 queue:(dispatch_queue_sRef)arg3 block:(/*^block*/id)arg4 ;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_fireBlockForTime:(SCD_Struct_CM5)arg1 ;
-(void)dealloc;
@end

