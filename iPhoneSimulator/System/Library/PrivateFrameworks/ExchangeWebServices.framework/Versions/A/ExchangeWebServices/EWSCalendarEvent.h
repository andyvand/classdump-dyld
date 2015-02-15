/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDateComponents, EWSCalendarEventDetails;

@interface EWSCalendarEvent : NSObject {

	NSDateComponents* _StartTime;
	NSDateComponents* _EndTime;
	int _BusyType;
	EWSCalendarEventDetails* _CalendarEventDetails;

}

@property (setter=tartTime,nonatomic,retain) NSDateComponents * StartTime;                //@synthesize StartTime=_StartTime - In the implementation block
@property (nonatomic,retain) NSDateComponents * EndTime;                                  //@synthesize EndTime=_EndTime - In the implementation block
@property (assign,nonatomic) int BusyType;                                                //@synthesize BusyType=_BusyType - In the implementation block
@property (nonatomic,retain) EWSCalendarEventDetails * CalendarEventDetails;              //@synthesize CalendarEventDetails=_CalendarEventDetails - In the implementation block
+(id)definition;
-(void)setBusyType:(int)arg1 ;
-(void)setCalendarEventDetails:(EWSCalendarEventDetails *)arg1 ;
-(void)dealloc;
-(int)BusyType;
-(NSDateComponents *)StartTime;
-(NSDateComponents *)EndTime;
-(EWSCalendarEventDetails *)CalendarEventDetails;
-(void)setStartTime:(NSDateComponents *)arg1 ;
-(void)setEndTime:(NSDateComponents *)arg1 ;
@end

