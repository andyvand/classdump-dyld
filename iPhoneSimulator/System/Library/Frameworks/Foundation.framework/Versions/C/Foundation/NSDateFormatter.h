/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSMutableDictionary, NSString, NSLocale, NSTimeZone, NSCalendar, NSDate, NSArray;

@interface NSDateFormatter : NSFormatter {

	NSMutableDictionary* _attributes;
	CFDateFormatterRef _formatter;
	unsigned long long _counter;
	dispatch_semaphore_sRef _lock;
	unsigned long long _behavior;

}

@property (assign) long long formattingContext; 
@property (copy) NSString * dateFormat; 
@property (assign) unsigned long long dateStyle; 
@property (assign) unsigned long long timeStyle; 
@property (copy) NSLocale * locale; 
@property (assign) char generatesCalendarDates; 
@property (assign) unsigned long long formatterBehavior; 
@property (copy) NSTimeZone * timeZone; 
@property (copy) NSCalendar * calendar; 
@property (getter=isLenient) char lenient; 
@property (copy) NSDate * twoDigitStartDate; 
@property (copy) NSDate * defaultDate; 
@property (copy) NSArray * eraSymbols; 
@property (copy) NSArray * monthSymbols; 
@property (copy) NSArray * shortMonthSymbols; 
@property (copy) NSArray * weekdaySymbols; 
@property (copy) NSArray * shortWeekdaySymbols; 
@property (copy) NSString * AMSymbol; 
@property (copy) NSString * PMSymbol; 
@property (copy) NSArray * longEraSymbols; 
@property (copy) NSArray * veryShortMonthSymbols; 
@property (copy) NSArray * standaloneMonthSymbols; 
@property (copy) NSArray * shortStandaloneMonthSymbols; 
@property (copy) NSArray * veryShortStandaloneMonthSymbols; 
@property (copy) NSArray * veryShortWeekdaySymbols; 
@property (copy) NSArray * standaloneWeekdaySymbols; 
@property (copy) NSArray * shortStandaloneWeekdaySymbols; 
@property (copy) NSArray * veryShortStandaloneWeekdaySymbols; 
@property (copy) NSArray * quarterSymbols; 
@property (copy) NSArray * shortQuarterSymbols; 
@property (copy) NSArray * standaloneQuarterSymbols; 
@property (copy) NSArray * shortStandaloneQuarterSymbols; 
@property (copy) NSDate * gregorianStartDate; 
@property (assign) char doesRelativeDateFormatting; 
+(id)CalSharedDateFormatter;
+(void)setDefaultFormatterBehavior:(unsigned long long)arg1 ;
+(unsigned long long)defaultFormatterBehavior;
+(void)initialize;
+(id)dateFormatFromTemplate:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 ;
+(id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3 ;
-(void)setFormattingContext:(long long)arg1 ;
-(id)dateFromString:(id)arg1 ;
-(NSDate *)gregorianStartDate;
-(void)setGregorianStartDate:(NSDate *)arg1 ;
-(void)_regenerateFormatter;
-(void)_clearFormatter;
-(char)isLenient;
-(char)allowsNaturalLanguage;
-(id)initWithDateFormat:(id)arg1 allowNaturalLanguage:(char)arg2 ;
-(id)_timeZone_forOldMethods;
-(id)_locale_forOldMethods;
-(void)_regenerateFormatterIfAbsent;
-(id)_getLocaleAlreadyLocked:(char)arg1 ;
-(void)_setDateFormat:(id)arg1 alreadyLocked:(char)arg2 ;
-(void)setLocalizedDateFormatFromTemplate:(id)arg1 ;
-(char)generatesCalendarDates;
-(void)setGeneratesCalendarDates:(char)arg1 ;
-(unsigned long long)formatterBehavior;
-(id)_dateFormat;
-(void)_setDateFormat:(id)arg1 ;
-(void)_setIsLenient:(char)arg1 ;
-(void)setLenient:(char)arg1 ;
-(NSDate *)twoDigitStartDate;
-(void)setTwoDigitStartDate:(NSDate *)arg1 ;
-(NSDate *)defaultDate;
-(void)setDefaultDate:(NSDate *)arg1 ;
-(NSArray *)eraSymbols;
-(void)setEraSymbols:(NSArray *)arg1 ;
-(void)setMonthSymbols:(NSArray *)arg1 ;
-(NSArray *)shortMonthSymbols;
-(void)setShortMonthSymbols:(NSArray *)arg1 ;
-(void)setWeekdaySymbols:(NSArray *)arg1 ;
-(void)setShortWeekdaySymbols:(NSArray *)arg1 ;
-(void)setAMSymbol:(NSString *)arg1 ;
-(void)setPMSymbol:(NSString *)arg1 ;
-(NSArray *)longEraSymbols;
-(void)setLongEraSymbols:(NSArray *)arg1 ;
-(NSArray *)veryShortMonthSymbols;
-(void)setVeryShortMonthSymbols:(NSArray *)arg1 ;
-(NSArray *)standaloneMonthSymbols;
-(void)setStandaloneMonthSymbols:(NSArray *)arg1 ;
-(NSArray *)shortStandaloneMonthSymbols;
-(void)setShortStandaloneMonthSymbols:(NSArray *)arg1 ;
-(NSArray *)veryShortStandaloneMonthSymbols;
-(void)setVeryShortStandaloneMonthSymbols:(NSArray *)arg1 ;
-(void)setVeryShortWeekdaySymbols:(NSArray *)arg1 ;
-(NSArray *)standaloneWeekdaySymbols;
-(void)setStandaloneWeekdaySymbols:(NSArray *)arg1 ;
-(NSArray *)shortStandaloneWeekdaySymbols;
-(void)setShortStandaloneWeekdaySymbols:(NSArray *)arg1 ;
-(void)setVeryShortStandaloneWeekdaySymbols:(NSArray *)arg1 ;
-(NSArray *)quarterSymbols;
-(void)setQuarterSymbols:(NSArray *)arg1 ;
-(NSArray *)shortQuarterSymbols;
-(void)setShortQuarterSymbols:(NSArray *)arg1 ;
-(NSArray *)standaloneQuarterSymbols;
-(void)setStandaloneQuarterSymbols:(NSArray *)arg1 ;
-(NSArray *)shortStandaloneQuarterSymbols;
-(void)setShortStandaloneQuarterSymbols:(NSArray *)arg1 ;
-(long long)formattingContext;
-(char)doesRelativeDateFormatting;
-(char)_usesCharacterDirection;
-(void)_setUsesCharacterDirection:(char)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSLocale *)locale;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setFormatterBehavior:(unsigned long long)arg1 ;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(void)setTimeStyle:(unsigned long long)arg1 ;
-(NSString *)AMSymbol;
-(NSString *)PMSymbol;
-(void)setDateFormat:(NSString *)arg1 ;
-(id)stringFromDate:(id)arg1 ;
-(NSString *)dateFormat;
-(NSArray *)shortWeekdaySymbols;
-(NSArray *)veryShortWeekdaySymbols;
-(void)setDoesRelativeDateFormatting:(char)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout NSRange*)arg3 error:(out id*)arg4 ;
-(void)_reset;
-(NSArray *)veryShortStandaloneWeekdaySymbols;
-(NSArray *)weekdaySymbols;
-(NSArray *)monthSymbols;
-(unsigned long long)dateStyle;
-(unsigned long long)timeStyle;
@end

