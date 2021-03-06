/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CoreRecurrenceRule.h>

@interface CALDailyRecurrence : CoreRecurrenceRule
-(int)lastSpecifiedRulePartOrder;
-(id)matchingDaysOnTimeRangeArray:(id)arg1 withRecurrenceStart:(id)arg2 ;
-(void)appendICSStringToString:(id)arg1 ;
-(char)fastPathEligible;
-(unsigned long long)_recurrenceUnitsToJumpBetween:(id)arg1 rangeStart:(id)arg2 inCalendar:(id)arg3 ;
-(id)_fastPathDeltaComponentsWithCount:(unsigned long long)arg1 ;
-(id)realOccurrencesOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2 alwaysIncludeStartDate:(char)arg3 ;
-(char)isEqualToRule:(id)arg1 consideringStartDate:(id)arg2 ;
@end

