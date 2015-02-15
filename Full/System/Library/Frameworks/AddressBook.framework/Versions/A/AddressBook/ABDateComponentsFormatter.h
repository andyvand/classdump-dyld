/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSLocale, NSArray, NSString;

@interface ABDateComponentsFormatter : NSFormatter {

	NSLocale* _locale;
	NSArray* _lazyFormatterFutures;
	NSString* _dateFormatPlaceholderString;

}

@property (retain) NSLocale * locale;                                     //@synthesize locale=_locale - In the implementation block
@property (readonly) NSString * dateFormatPlaceholderString; 
+(id)shortDayMonthYearDateFormatterWithLocale:(id)arg1 ;
+(id)formatterFuturesWithLocale:(id)arg1 ;
+(char)shouldUseChinaSpecificFormattersForLocale:(id)arg1 ;
+(id)chineseRelatedGregorianYearMonthDayFormatter;
+(id)chineseMonthDayFormatter;
+(id)chineseMonthDayHanidayFormatter;
+(id)chineseCyclicYearMonthDayFormatter;
+(id)chineseRelatedGregorianYearMonthDayHanidayFormatter;
+(id)chineseLongStyleRelatedGregorianYearMonthDayFormatter;
+(id)longDayMonthYearDateFormatterWithLocale:(id)arg1 ;
+(id)shortDayMonthYearlessDateFormatterWithLocale:(id)arg1 ;
+(id)longDayMonthYearlessDateFormatterWithLocale:(id)arg1 ;
+(char)shouldUseIslamicSpecificFormattersForLocale:(id)arg1 ;
+(id)dateFormatterWithYearFormat:(id)arg1 hasLongFormat:(char)arg2 locale:(id)arg3 ;
-(NSString *)dateFormatPlaceholderString;
-(void)regenerateFormatterFutures;
-(id)dmyFormatString;
-(id)placeholderStringWithLocalizedDay:(id)arg1 month:(id)arg2 year:(id)arg3 ;
-(char)shouldUseChinesePlaceholderString;
-(id)chinesePlaceholderStringWithDay:(id)arg1 month:(id)arg2 year:(id)arg3 ;
-(id)placeholderSubstitutionStringWithDay:(unsigned long long)arg1 month:(unsigned long long)arg2 year:(unsigned long long)arg3 ;
-(id)displayFormatterForComponents:(id)arg1 ;
-(id)normalizedComponentsFromDate:(id)arg1 calendar:(id)arg2 ;
-(unsigned long long)componentsToExtract;
-(id)dateComponentsFromString:(id)arg1 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
@end

