/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSIntervalRecurrencePatternBaseType.h>

@interface EWSRelativeMonthlyRecurrencePatternType : EWSIntervalRecurrencePatternBaseType {

	int _DaysOfWeek;
	long long _DayOfWeekIndex;

}

@property (assign,nonatomic) int DaysOfWeek;                        //@synthesize DaysOfWeek=_DaysOfWeek - In the implementation block
@property (assign,nonatomic) long long DayOfWeekIndex;              //@synthesize DayOfWeekIndex=_DayOfWeekIndex - In the implementation block
+(id)definition;
-(void)setDaysOfWeek:(int)arg1 ;
-(void)setDayOfWeekIndex:(long long)arg1 ;
-(int)DaysOfWeek;
-(long long)DayOfWeekIndex;
@end

