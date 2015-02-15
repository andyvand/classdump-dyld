/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalStoreRemoteManagedObject.h>

@class NSSet, CalStoreRemoteManagedCalendar, NSDate, NSString, NSTimeZone, NSURL;

@interface CalStoreRemoteManagedCalendarItem : CalStoreRemoteManagedObject {

	NSSet* _attachments;
	CalStoreRemoteManagedCalendar* _calendar;
	NSDate* _dateStamp;
	NSSet* _derivedAlarms;
	char _isAllDay;
	NSString* _notes;
	NSString* _occurrenceID;
	NSString* _recurrenceRule;
	NSString* _sharedUID;
	NSDate* _startDate;
	NSTimeZone* _timeZone;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,retain) NSSet * attachments;                                   //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) CalStoreRemoteManagedCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDate * dateStamp;                                    //@synthesize dateStamp=_dateStamp - In the implementation block
@property (nonatomic,retain) NSSet * derivedAlarms;                                 //@synthesize derivedAlarms=_derivedAlarms - In the implementation block
@property (nonatomic,readonly) char hasAlarm; 
@property (assign,nonatomic) char isAllDay;                                         //@synthesize isAllDay=_isAllDay - In the implementation block
@property (nonatomic,retain) NSString * notes;                                      //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSString * occurrenceID;                               //@synthesize occurrenceID=_occurrenceID - In the implementation block
@property (nonatomic,retain) NSString * recurrenceRule;                             //@synthesize recurrenceRule=_recurrenceRule - In the implementation block
@property (nonatomic,retain) NSString * sharedUID;                                  //@synthesize sharedUID=_sharedUID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                 //@synthesize timeZone=_timeZone - In the implementation block
+(id)fetchObjectsWithPredicate:(id)arg1 ;
+(id)fetchObjectsWithPredicate:(id)arg1 inCalendars:(id)arg2 ;
+(id)fetchObjectsWithSharedUID:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setDerivedAlarms:(NSSet *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setUrl:(NSURL *)arg1 ;
-(CalStoreRemoteManagedCalendar *)calendar;
-(void)setCalendar:(CalStoreRemoteManagedCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSSet *)attachments;
-(void)setAttachments:(NSSet *)arg1 ;
-(NSString *)occurrenceID;
-(NSString *)sharedUID;
-(void)setSharedUID:(NSString *)arg1 ;
-(char)isAllDay;
-(void)setDateStamp:(NSDate *)arg1 ;
-(NSDate *)dateStamp;
-(NSString *)notes;
-(NSString *)recurrenceRule;
-(void)setNotes:(NSString *)arg1 ;
-(NSSet *)derivedAlarms;
-(void)setRecurrenceRule:(NSString *)arg1 ;
-(void)setIsAllDay:(char)arg1 ;
-(char)hasAlarm;
-(void)setOccurrenceID:(NSString *)arg1 ;
@end

