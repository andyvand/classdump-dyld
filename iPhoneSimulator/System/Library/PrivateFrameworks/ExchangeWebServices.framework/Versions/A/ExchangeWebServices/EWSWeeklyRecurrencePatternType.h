/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSIntervalRecurrencePatternBaseType.h>

@class NSIndexSet;

@interface EWSWeeklyRecurrencePatternType : EWSIntervalRecurrencePatternBaseType {

	NSIndexSet* _DaysOfWeek;
	int _FirstDayOfWeek;

}

@property (nonatomic,copy) NSIndexSet * DaysOfWeek;              //@synthesize DaysOfWeek=_DaysOfWeek - In the implementation block
@property (assign,nonatomic) int FirstDayOfWeek;                 //@synthesize FirstDayOfWeek=_FirstDayOfWeek - In the implementation block
+(id)definition;
-(void)setFirstDayOfWeek:(int)arg1 ;
-(void)dealloc;
-(void)setDaysOfWeek:(NSIndexSet *)arg1 ;
-(NSIndexSet *)DaysOfWeek;
-(int)FirstDayOfWeek;
@end
