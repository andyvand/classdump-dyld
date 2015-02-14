/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CalTimeIntervalLocalization : NSObject
+(id)localizedStringForInterval:(double)arg1 withOptions:(unsigned long long)arg2 ;
+(id)_localizedTimeStringForTimedEventDuration:(double)arg1 abbreviate:(char)arg2 ;
+(id)_localizedStringWithTimeString:(id)arg1 rawDuration:(double)arg2 options:(unsigned long long)arg3 ;
+(id)_localizedTimeStringForAllDayEventDuration:(double)arg1 includeAlert:(char)arg2 ;
+(void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(char)arg4 abbreviate:(char)arg5 ;
+(id)_stringWithDurations:(id)arg1 timeUnits:(id)arg2 ;
+(void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(char)arg4 dayDuration:(id*)arg5 hourDuration:(id*)arg6 minuteDuration:(id*)arg7 secondDuration:(id*)arg8 abbreviate:(char)arg9 ;
@end

