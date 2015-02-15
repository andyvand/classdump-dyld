/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSString, NSCalendar, NSDate, NSNumberFormatter;

@interface NSDateComponentsFormatter : NSFormatter {

	opaque_pthread_mutex_t _lock;
	void* _fmt;
	void* _unused;
	NSString* _fmtLocaleIdent;
	NSCalendar* _calendar;
	NSDate* _referenceDate;
	NSNumberFormatter* _unitFormatter;
	unsigned long long _allowedUnits;
	long long _formattingContext;
	long long _unitsStyle;
	unsigned long long _zeroFormattingBehavior;
	long long _maximumUnitCount;
	char _allowsFractionalUnits;
	char _collapsesLargestUnit;
	char _includesApproximationPhrase;
	char _includesTimeRemainingPhrase;
	void* _reserved;

}

@property (assign) long long unitsStyle; 
@property (assign) unsigned long long allowedUnits; 
@property (assign) unsigned long long zeroFormattingBehavior; 
@property (copy) NSCalendar * calendar; 
@property (assign) char allowsFractionalUnits; 
@property (assign) long long maximumUnitCount; 
@property (assign) char collapsesLargestUnit; 
@property (assign) char includesApproximationPhrase; 
@property (assign) char includesTimeRemainingPhrase; 
@property (assign) long long formattingContext; 
@property (copy) NSDate * referenceDate; 
+(id)localizedStringFromDateComponents:(id)arg1 unitsStyle:(long long)arg2 ;
-(void)setFormattingContext:(long long)arg1 ;
-(long long)formattingContext;
-(void)_flushFormatterCache;
-(id)_calendarOrCanonicalCalendar;
-(id)_stringFromDateComponents:(id)arg1 ;
-(id)_calendarFromDateComponents:(id)arg1 ;
-(id)_canonicalizedDateComponents:(id)arg1 withCalendar:(id)arg2 usedUnits:(unsigned long long*)arg3 ;
-(void)_ensureUnitFormatterWithLocale:(id)arg1 ;
-(void)setUnitsStyle:(long long)arg1 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(id)_stringFromTimeInterval:(double)arg1 ;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)stringFromTimeInterval:(double)arg1 ;
-(void)setAllowedUnits:(unsigned long long)arg1 ;
-(unsigned long long)allowedUnits;
-(void)setMaximumUnitCount:(long long)arg1 ;
-(long long)maximumUnitCount;
-(void)setAllowsFractionalUnits:(char)arg1 ;
-(char)allowsFractionalUnits;
-(void)setCollapsesLargestUnit:(char)arg1 ;
-(char)collapsesLargestUnit;
-(long long)unitsStyle;
-(void)setZeroFormattingBehavior:(unsigned long long)arg1 ;
-(unsigned long long)zeroFormattingBehavior;
-(void)setIncludesApproximationPhrase:(char)arg1 ;
-(char)includesApproximationPhrase;
-(void)setIncludesTimeRemainingPhrase:(char)arg1 ;
-(char)includesTimeRemainingPhrase;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
@end

