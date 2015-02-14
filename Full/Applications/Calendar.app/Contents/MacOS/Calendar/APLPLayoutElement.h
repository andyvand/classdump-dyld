/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/APLPropertiesElement.h>

@protocol APLDataSourceProtocol;
@class NSColor;

@interface APLPLayoutElement : APLPropertiesElement {

	double largeMargin;
	double smallMargin;
	double globalWidth;
	double thinLineWidth;
	double globalLeftMargin;
	NSColor* lineColor;
	NSColor* textColor;
	id<APLDataSourceProtocol> _dataSource;
	char resolved;

}
-(char)resolveWithDataSource:(id)arg1 ;
-(id)fontForKey:(id)arg1 ;
-(id)attStringWithString:(id)arg1 andFont:(id)arg2 textMode:(int)arg3 ;
-(CGSize)sizeForAttributedString:(id)arg1 ;
-(id)printColorForCalendarColor:(id)arg1 variant:(int)arg2 ;
-(id)colorForKey:(id)arg1 ;
-(id)colorForOccurrence:(id)arg1 variant:(int)arg2 ;
-(long long)intForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(char)boolForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
@end

