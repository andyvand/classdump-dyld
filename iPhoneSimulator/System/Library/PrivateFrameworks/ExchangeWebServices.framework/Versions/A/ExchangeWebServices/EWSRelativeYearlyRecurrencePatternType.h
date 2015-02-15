/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSRecurrencePatternBaseType.h>

@interface EWSRelativeYearlyRecurrencePatternType : EWSRecurrencePatternBaseType {

	int _DaysOfWeek;
	long long _DayOfWeekIndex;
	int _Month;

}

@property (assign,nonatomic) int DaysOfWeek;                        //@synthesize DaysOfWeek=_DaysOfWeek - In the implementation block
@property (assign,nonatomic) long long DayOfWeekIndex;              //@synthesize DayOfWeekIndex=_DayOfWeekIndex - In the implementation block
@property (assign,nonatomic) int Month;                             //@synthesize Month=_Month - In the implementation block
+(id)definition;
-(id)description;
-(void)setMonth:(int)arg1 ;
-(void)setDaysOfWeek:(int)arg1 ;
-(void)setDayOfWeekIndex:(long long)arg1 ;
-(int)Month;
-(int)DaysOfWeek;
-(long long)DayOfWeekIndex;
@end

