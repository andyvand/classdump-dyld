/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSDateFormatter;

@interface CNVCardDateComponentsFormatter : NSFormatter {

	NSCalendar* _gregorianCalendar;
	NSDateFormatter* _compactYearMonthDayDateFormatter;
	NSDateFormatter* _compactYearMonthDayDateHourMinuteSecondZFormatter;
	NSDateFormatter* _monthDayDateFormatter;
	NSDateFormatter* _yearMonthDayDateFormatter;
	NSDateFormatter* _yearMonthDayDateHourMinuteSecondZFormatter;

}
+(id)dateComponentsFromALTBDAYString:(id)arg1 ;
-(id)yearMonthDayStringFromDateComponents:(id)arg1 ;
-(id)monthDayStringFromDateComponents:(id)arg1 ;
-(id)yearMonthDayDateFormatter;
-(id)yearMonthDayDateHourMinuteSecondZFormatter;
-(id)compactYearMonthDayDateFormatter;
-(id)compactYearMonthDayDateHourMinuteSecondZFormatter;
-(id)monthDayDateFormatter;
-(id)dateComponentsFromALTBDAYString:(id)arg1 ;
-(id)stringForComponentValue:(long long)arg1 format:(id)arg2 ;
-(id)altBDAYStringFromDateComponents:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg1 ;
-(id)gregorianCalendar;
-(id)stringFromDateComponents:(id)arg1 ;
-(void)dealloc;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
@end
