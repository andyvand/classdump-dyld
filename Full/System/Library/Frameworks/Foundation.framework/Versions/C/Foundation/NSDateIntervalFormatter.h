/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale, NSCalendar, NSTimeZone, NSString;

@interface NSDateIntervalFormatter : NSFormatter {

	NSLocale* _locale;
	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	NSString* _dateTemplate;
	NSString* _dateTemplateFromStyles;
	void* _formatter;
	unsigned long long _dateStyle;
	unsigned long long _timeStyle;
	char _modified;
	char _useTemplate;
	dispatch_semaphore_sRef _lock;
	void** _reserved[4];

}

@property (copy) NSLocale * locale; 
@property (copy) NSCalendar * calendar; 
@property (copy) NSTimeZone * timeZone; 
@property (copy) NSString * dateTemplate; 
@property (assign) unsigned long long dateStyle; 
@property (assign) unsigned long long timeStyle; 
-(char)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(NSString *)dateTemplate;
-(void)setDateTemplate:(NSString *)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)editingStringForObjectValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSLocale *)locale;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(void)setTimeStyle:(unsigned long long)arg1 ;
-(unsigned long long)dateStyle;
-(unsigned long long)timeStyle;
@end

