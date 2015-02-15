/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <coreduetd/coreduetd-Structs.h>
@class CDD, NSObject, NSDate;

@interface CDDBatteryMonitor : NSObject {

	CDD* cdd;
	double lastPercentageReading;
	long long lastCapacityReading;
	double lastReadingTimestamp;
	NSObject*<OS_dispatch_queue> notificationQueue;
	int notficationToken;
	char timerStarted;
	unsigned powersvc;
	NSDate* lastTriggerTimestamp;

}

@property (assign,nonatomic) unsigned powersvc; 
@property (assign,nonatomic) double lastPercentageReading; 
@property (assign,nonatomic) long long lastCapacityReading; 
@property (assign,nonatomic) double lastReadingTimestamp; 
@property (nonatomic,retain) NSDate * lastTriggerTimestamp; 
@property (nonatomic,retain) CDD * cdd; 
-(id)initWithCDDinstance:(id)arg1 ;
-(CDD *)cdd;
-(void)setCdd:(CDD *)arg1 ;
-(void)dumpLight;
-(char)value64FromService:(unsigned)arg1 withKey:(CFStringRef)arg2 value:(long long*)arg3 ;
-(long long)getPowerMilliwatt;
-(double)getPercent;
-(long long)getCapacity;
-(long long)readBatteryStatus:(const char*)arg1 ;
-(double)lastPercentageReading;
-(void)setLastPercentageReading:(double)arg1 ;
-(long long)lastCapacityReading;
-(void)setLastCapacityReading:(long long)arg1 ;
-(double)lastReadingTimestamp;
-(void)setLastReadingTimestamp:(double)arg1 ;
-(unsigned)powersvc;
-(void)setPowersvc:(unsigned)arg1 ;
-(NSDate *)lastTriggerTimestamp;
-(void)setLastTriggerTimestamp:(NSDate *)arg1 ;
-(void)dumpAll;
-(void)dealloc;
@end
