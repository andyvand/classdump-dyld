/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCalendar, NSDate;

@interface _AMPredicateUtilities : NSObject {

	NSCalendar* _calendar;
	NSDate* _currentDate;

}

@property (retain) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
@property (retain) NSDate * currentDate;               //@synthesize currentDate=_currentDate - In the implementation block
+(id)keyPathForPredicate:(id)arg1 ;
+(id)valueForPredicate:(id)arg1 ;
+(id)predicateUtilities;
+(unsigned long long)typeForPredicate:(id)arg1 ;
+(unsigned long long)countForPredicate:(id)arg1 ;
+(unsigned long long)calendarUnitForPredicate:(id)arg1 ;
+(unsigned long long)byteUnitForPredicate:(id)arg1 ;
+(unsigned long long)_typeByInspectionForPredicate:(id)arg1 ;
+(id)byteCountForPredicate:(id)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(id)convertPredicateToYearlessSearchElement:(id)arg1 withProperty:(id)arg2 withLabel:(id)arg3 withKey:(id)arg4 ;
-(id)convertPredicateToScriptingBridgeCompatiblePredicate:(id)arg1 ;
-(id)predicateWithKeyPath:(id)arg1 isOnDayOffsetByCount:(unsigned long long)arg2 calendarUnits:(unsigned long long)arg3 isForPastDate:(char)arg4 ;
-(id)predicateWithKeyPath:(id)arg1 isWithinCount:(unsigned long long)arg2 calendarUnits:(unsigned long long)arg3 isForPastDate:(char)arg4 ;
-(id)predicateWithKeyPath:(id)arg1 isNotWithinCount:(unsigned long long)arg2 calendarUnits:(unsigned long long)arg3 isForPastDate:(char)arg4 ;
-(id)predicateWithKeyPath:(id)arg1 isOnDate:(id)arg2 ;
-(id)predicateWithKeyPath:(id)arg1 isBeforeDate:(id)arg2 ;
-(id)predicateWithKeyPath:(id)arg1 isAfterDate:(id)arg2 ;
-(id)predicateForBytesWithKeyPath:(id)arg1 type:(unsigned long long)arg2 count:(unsigned long long)arg3 unit:(unsigned long long)arg4 ;
-(id)predicateWithKeyPath:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3 ;
-(id)isTodayPredicateWithKeyPath:(id)arg1 ;
-(id)isThisWeekPredicateWithKeyPath:(id)arg1 ;
-(id)predicateForTimeIntervalWithKeyPath:(id)arg1 type:(unsigned long long)arg2 count:(unsigned long long)arg3 ;
-(NSDate *)currentDate;
-(id)_getDateAtMidnightBeginningTheDayForPredicate:(id)arg1 ;
-(char)_getDatesForPredicate:(id)arg1 startDate:(id*)arg2 endDate:(id*)arg3 ;
-(long long)searchComparisonForPredicate:(id)arg1 ;
-(void)dealloc;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
@end

