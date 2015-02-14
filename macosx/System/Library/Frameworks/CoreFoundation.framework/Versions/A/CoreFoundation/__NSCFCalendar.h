/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@interface __NSCFCalendar : NSCalendar
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)calendarWithIdentifier:(id)arg1 ;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(id)gregorianStartDate;
-(unsigned long long)minimumDaysInFirstWeek;
-(void)setGregorianStartDate:(id)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(char)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
-(char)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(oneway void)release;
-(id)retain;
-(void)finalize;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(void)setLocale:(id)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)locale;
-(id)timeZone;
-(void)setTimeZone:(id)arg1 ;
-(id)dateFromComponents:(id)arg1 ;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(unsigned long long)firstWeekday;
-(id)calendarIdentifier;
-(char)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
@end

