/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhotoPlugin2012.ilmbplugin/Contents/MacOS/iLMBiPhotoPlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSScanner, NSDateComponents, NSNumber, NSTimeZone, NSCalendar, NSArray, NSMutableCharacterSet;

@interface IP2012_RKDateParser : NSObject {

	NSString* m_parseString;
	NSScanner* m_dateScanner;
	int m_parseStatus;
	NSDateComponents* m_dateComponents;
	NSNumber* m_amPmIndicator;
	NSTimeZone* m_timeZone;
	NSCalendar* m_gregorianCal;
	NSArray* m_monthNames;
	NSArray* m_monthAbbrNames;
	NSArray* m_amPmNames;
	NSMutableCharacterSet* m_dateSeperatorCharSet;
	NSMutableCharacterSet* m_timeSeperatorCharSet;
	unsigned long long m_currentYear;
	unsigned long long m_currentCentury;

}
+(void)testParsing;
-(id)scanForAmPmIndicator;
-(void)resetDateComponents;
-(void)resetTimeComponents;
-(void)resetToParseString:(id)arg1 ;
-(int)parseTimestampString:(id)arg1 ;
-(int)largestComponent;
-(int)parseDateString:(id)arg1 ;
-(void)parseTimeZone;
-(id)lowestDateUsingTimeZone:(id)arg1 ;
-(id)highestDateUsingTimeZone:(id)arg1 ;
-(char)scanMonthName;
-(void)parseTimeStamp;
-(void)parseDate;
-(void)parseTime;
-(char)isDateRange;
-(id)amPmIndicator;
-(id)highestDate;
-(id)lowestDate;
-(int)parseTimeString:(id)arg1 ;
-(id)parseString;
-(id)dateComponents;
-(id)init;
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
-(int)status;
-(id)year;
-(id)timeZone;
-(id)month;
-(id)day;
-(id)hour;
-(id)minute;
-(id)second;
@end

