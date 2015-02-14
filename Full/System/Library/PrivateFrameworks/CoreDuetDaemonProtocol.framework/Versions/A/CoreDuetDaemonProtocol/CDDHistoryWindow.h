/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/Versions/A/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface CDDHistoryWindow : NSObject {

	NSDate* _start;
	double _duration;
	double _recurrenceDelta;
	double _recurrenceWidth;

}

@property (readonly) NSDate * start;                      //@synthesize start=_start - In the implementation block
@property (readonly) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (readonly) double recurrenceDelta;              //@synthesize recurrenceDelta=_recurrenceDelta - In the implementation block
@property (readonly) double recurrenceWidth;              //@synthesize recurrenceWidth=_recurrenceWidth - In the implementation block
+(id)dailyHistoryWindowWithWidth:(double)arg1 endingOnDate:(id)arg2 historyLengthInDays:(int)arg3 ;
+(id)singleDayHistoryWindowWithWidth:(double)arg1 forDate:(id)arg2 ;
+(id)allTimeHistoryWindow;
-(id)initWithStart:(id)arg1 duration:(double)arg2 recurrenceDelta:(double)arg3 recurrenceWidth:(double)arg4 error:(id*)arg5 ;
-(double)recurrenceDelta;
-(double)recurrenceWidth;
-(NSDate *)start;
-(double)duration;
@end

