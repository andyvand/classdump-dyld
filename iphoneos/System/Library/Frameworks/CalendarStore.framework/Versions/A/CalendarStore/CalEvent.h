/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CalendarStore.framework/Versions/A/CalendarStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarStore/CalendarStore-Structs.h>
#import <CalendarStore/CalCalendarItem.h>

@class NSString, CalRecurrenceRule, NSDate, NSArray;

@interface CalEvent : CalCalendarItem {

	char _isAllDay;
	NSString* _location;
	CalRecurrenceRule* _recurrenceRule;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _attendees;
	char _isDetached;
	NSDate* _occurrence;

}

@property (assign) char isAllDay;                                 //@synthesize isAllDay=_isAllDay - In the implementation block
@property (copy) NSString * location;                             //@synthesize location=_location - In the implementation block
@property (copy) CalRecurrenceRule * recurrenceRule;              //@synthesize recurrenceRule=_recurrenceRule - In the implementation block
@property (copy) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (copy) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (copy) NSArray * attendees;                             //@synthesize attendees=_attendees - In the implementation block
@property (assign) char isDetached;                               //@synthesize isDetached=_isDetached - In the implementation block
@property (copy) NSDate * occurrence;                             //@synthesize occurrence=_occurrence - In the implementation block
@property (assign) char isInvitation; 
+(id)event;
+(id)eventFromRemoteManagedObject:(id)arg1 skipTimezoneTranslation:(char)arg2 ;
+(id)eventFromRemoteManagedObject:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setOccurrence:(NSDate *)arg1 ;
-(NSDate *)occurrence;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)endDate;
-(id)attachments;
-(NSString *)location;
-(char)isDetached;
-(void)setLocation:(NSString *)arg1 ;
-(void)setAttachments:(id)arg1 ;
-(long long)compareStartDate:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(char)isAllDay;
-(void)setIsDetached:(char)arg1 ;
-(char)isInvitation;
-(CalRecurrenceRule *)recurrenceRule;
-(void)setRecurrenceRule:(CalRecurrenceRule *)arg1 ;
-(void)setIsAllDay:(char)arg1 ;
-(id)remoteManagedEventFromEvent;
-(id)initWithTitle:(id)arg1 UID:(id)arg2 ;
-(void)_createReservedDictionaryIfNeeded;
-(id)initWithTitle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 UID:(id)arg4 ;
-(id)nextAlarmDate;
-(void)setIsInvitation:(char)arg1 ;
@end

