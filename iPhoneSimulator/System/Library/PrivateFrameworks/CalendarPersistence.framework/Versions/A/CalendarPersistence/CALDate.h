/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/NSCopying.h>
#import <CalendarPersistence/NSSecureCoding.h>

@class NSTimeZone, NSString;

@interface CALDate : NSObject <NSCopying, NSSecureCoding> {

	CALCDate _cdate;
	NSTimeZone* _timeZone;
	NSString* _calendarFormat;

}
+(id)dateWithTimeIntervalSince1970:(double)arg1 ;
+(id)alloc;
+(id)distantFuture;
+(id)distantPast;
+(char)supportsSecureCoding;
+(id)date;
+(id)dateFromICSString:(id)arg1 timeZone:(id)arg2 ;
+(id)dateWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
+(id)dateWithDatePartFrom:(id)arg1 withTimePartFrom:(id)arg2 withTimeZone:(id)arg3 ;
+(id)dateWithString:(id)arg1 calendarFormat:(id)arg2 ;
+(id)dateFromICSDateValue:(id)arg1 timeZone:(id)arg2 ;
+(id)dateWithString:(id)arg1 ;
+(id)dateWithDate:(id)arg1 ;
+(id)dateWithDatePartFrom:(id)arg1 withTimePartFrom:(id)arg2 ;
+(id)dateFromIsoString:(id)arg1 ;
+(id)dateFromICSDate:(id)arg1 timeZone:(id)arg2 ;
+(id)dateOnlyFromDate:(id)arg1 ;
+(id)getICUFormatForFormatKey:(id)arg1 ;
+(void)generatePreferedOrders;
+(id)localizedOneCharacterAbbrevDayOfWeekForDay:(int)arg1 ;
+(void)generateLocalizedDateTimeFormats;
+(id)getSizeOrderedDateFormats;
+(id)getSizeOrderedDateFormatsWithYear;
+(id)getSizeOrderedDateFormatsWithoutYear;
+(id)getSizeOrderedAllDateFormatsWithoutYear;
-(double)timeIntervalSince1970;
-(long long)weekOfYear;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)timeIntervalSinceNow;
-(id)initWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)timeZone;
-(void)setTimeZone:(id)arg1 ;
-(char)isEqualToDate:(id)arg1 ;
-(double)timeIntervalSinceDate:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
-(char)isAfter:(id)arg1 ;
-(char)isBefore:(id)arg1 ;
-(id)dateRoundedToDay;
-(id)dateByAddingDuration:(id)arg1 ;
-(id)dateRoundedToNextDay;
-(char)isBeforeOrEqual:(id)arg1 ;
-(id)representationID;
-(id)NSDate;
-(id)initWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
-(void)setYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7 ;
-(char)meetComparisonCondition:(unsigned char)arg1 withDate:(id)arg2 ;
-(id)initWithString:(id)arg1 calendarFormat:(id)arg2 ;
-(void)getCDateInTimeZone:(CALCDate*)arg1 ;
-(void)years:(long long*)arg1 months:(long long*)arg2 days:(long long*)arg3 hours:(long long*)arg4 minutes:(long long*)arg5 seconds:(long long*)arg6 sinceDate:(id)arg7 ;
-(long long)offsetFromGMT;
-(id)NSDateWithTimeZone:(id)arg1 ;
-(id)NSCalendarDate;
-(id)descriptionWithCalendarFormat:(id)arg1 ;
-(id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2 ;
-(void)addYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6 ;
-(long long)hourOfDay;
-(long long)minuteOfHour;
-(long long)secondOfMinute;
-(id)dateByAddingRawInterval:(double)arg1 ;
-(long long)yearOfCommonEra;
-(long long)monthOfYear;
-(long long)dayOfMonth;
-(void)year:(long long*)arg1 month:(long long*)arg2 day:(long long*)arg3 dayOfWeek:(long long*)arg4 dayOfYear:(long long*)arg5 hour:(long long*)arg6 minute:(long long*)arg7 second:(long long*)arg8 ;
-(id)dateByAddingYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6 ;
-(CALCDate*)cdate;
-(id)initWithTimeIntervalSince2001:(double)arg1 ;
-(double)absoluteTimeInterval;
-(long long)dayOfWeek;
-(long long)dayOfCommonEra;
-(long long)dayOfYear;
-(long long)dayCountInMonth;
-(char)isAfterOrEqual:(id)arg1 ;
-(id)NSDateWithGMT;
-(void)setCalendarFormat:(id)arg1 ;
-(id)calendarFormat;
-(char)isMidnight;
-(id)dateBySubstractingDuration:(id)arg1 ;
-(id)dateRoundedToMinute;
-(id)dateRoundedToHour;
-(id)dateRoundedToPreviousDay;
-(id)dateRoundedToMonth;
-(id)dateRoundedToYear;
-(id)dateWithHour:(long long)arg1 ;
-(id)dateWithHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ;
-(id)isoStringRepresentation;
-(long long)offsetFromGMTForTimeZone:(id)arg1 ;
-(char)isEqualToDateAsLocaltime:(id)arg1 ;
-(void)setTimeZone:(id)arg1 keepingLocalDate:(char)arg2 ;
-(void)roundToDay;
-(void)addSecondsInGMT:(long long)arg1 ;
-(void)takeValueFrom:(id)arg1 ;
-(char)isEqualAsDateOnly:(id)arg1 ;
-(id)dateByRoundingToWeekdayForward;
-(id)dateByRoundingToWeekdayBackward;
-(id)dateOfNextDayShouldSkipWeekend:(char)arg1 ;
-(id)dateOfPreviousDayShouldSkipWeekend:(char)arg1 ;
-(char)isDateOnly;
-(int)dateType;
-(id)localizedWithICUFormat:(id)arg1 ;
-(id)localizedWithFormatKey:(id)arg1 ;
-(id)localizedRelativeWithDateFormatKey:(id)arg1 titlecase:(char)arg2 ;
-(id)localizedRelativeWithDateFormatKey:(id)arg1 withTimeFormatKey:(id)arg2 titlecase:(char)arg3 ;
-(id)localizedYear;
-(id)localizedMonth;
-(id)localizedFullDateAndTime;
-(id)localizedShortDateAndTime;
-(id)localizedDayOfMonthWithoutLeadingZero;
-(id)localizedAbbreviatedMonth;
-(id)localizedLongDate;
-(id)localizedAbbrevDate;
-(id)localizedShortDate;
-(id)localizedLongDateWithoutDay;
-(id)localizedLongDateWithoutYear;
-(id)localizedAbbrevDateWithoutYear;
-(id)localizedShortDateWithoutYear;
-(id)localizedLongDayMonthWithoutDayOfWeek;
-(id)localizedAbbrevDayMonthWithoutDayOfWeek;
-(id)localizedLongDayOfWeek;
-(id)localizedAbbrevDayOfWeek;
-(id)localizedLongDayOfWeekWithDayOfMonth;
-(id)localizedTime;
-(id)localizedHourMinutes;
-(id)localizedHour;
-(id)localizedHourMinutesWithoutAMPM;
-(id)localizedHourWithoutAMPM;
-(id)localizedRelativeWithDateFormatKey:(id)arg1 ;
-(id)localizedRelativeWithDateFormatKey:(id)arg1 withTimeFormatKey:(id)arg2 ;
-(id)NSCalendarDateForISync;
@end

