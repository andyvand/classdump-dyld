/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/NSCopying.h>

@class EKEvent, NSString, NSDate, NSTimeZone, EKStructuredLocation, EKCalendar, NSArray, NSURL;

@interface CalUIEventSuggestion : NSObject <NSCopying> {

	char _allDay;
	int _availability;
	EKEvent* _referenceEvent;
	NSString* _title;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	NSString* _location;
	EKStructuredLocation* _structuredLocation;
	NSString* _notes;
	EKCalendar* _calendar;
	NSArray* _attendees;
	NSURL* _URL;
	long long _privacyLevel;
	NSArray* _attachments;
	NSArray* _alarms;
	NSArray* _recurrenceRules;

}

@property (retain) EKEvent * referenceEvent;                               //@synthesize referenceEvent=_referenceEvent - In the implementation block
@property (retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (retain) NSDate * startDate;                                     //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                       //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSTimeZone * timeZone;                                  //@synthesize timeZone=_timeZone - In the implementation block
@property (assign) char allDay;                                            //@synthesize allDay=_allDay - In the implementation block
@property (retain) NSString * location;                                    //@synthesize location=_location - In the implementation block
@property (retain) EKStructuredLocation * structuredLocation;              //@synthesize structuredLocation=_structuredLocation - In the implementation block
@property (retain) NSString * notes;                                       //@synthesize notes=_notes - In the implementation block
@property (retain) EKCalendar * calendar;                                  //@synthesize calendar=_calendar - In the implementation block
@property (retain) NSArray * attendees;                                    //@synthesize attendees=_attendees - In the implementation block
@property (retain) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (assign) long long privacyLevel;                                 //@synthesize privacyLevel=_privacyLevel - In the implementation block
@property (assign) int availability;                                       //@synthesize availability=_availability - In the implementation block
@property (retain) NSArray * attachments;                                  //@synthesize attachments=_attachments - In the implementation block
@property (retain) NSArray * alarms;                                       //@synthesize alarms=_alarms - In the implementation block
@property (retain) NSArray * recurrenceRules;                              //@synthesize recurrenceRules=_recurrenceRules - In the implementation block
+(id)similarityPropertiesConsideringTimeProperties:(char)arg1 ;
+(id)propertiesForEquality;
+(id)allProperties;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(int)availability;
-(void)setAvailability:(int)arg1 ;
-(void)setPrivacyLevel:(long long)arg1 ;
-(EKEvent *)referenceEvent;
-(id)eventFromSuggestion;
-(long long)privacyLevel;
-(void)setRecurrenceRules:(NSArray *)arg1 ;
-(void)setReferenceEvent:(EKEvent *)arg1 ;
-(char)isDifferentEnoughFromInitialEvent:(id)arg1 consideringTimeProperties:(char)arg2 ;
-(id)description;
-(NSURL *)URL;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(EKCalendar *)calendar;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)endDate;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)attachments;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)alarms;
-(NSArray *)recurrenceRules;
-(void)setEndDate:(NSDate *)arg1 ;
-(EKStructuredLocation *)structuredLocation;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(NSString *)notes;
-(void)setAlarms:(NSArray *)arg1 ;
-(void)setNotes:(NSString *)arg1 ;
-(char)allDay;
-(void)setAllDay:(char)arg1 ;
@end

