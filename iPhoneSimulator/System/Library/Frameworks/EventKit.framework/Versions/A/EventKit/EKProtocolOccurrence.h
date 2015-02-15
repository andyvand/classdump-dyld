/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDate, NSNumber, NSString, NSURL, NSTimeZone;


@protocol EKProtocolOccurrence <EKProtocolObject>
@property (nonatomic,retain,readonly) NSDate * recurrenceDateUnadjustedFromUTC; 
@property (nonatomic,readonly) NSNumber * calendarItemPermissionNumber; 
@property (nonatomic,copy,readonly) id<EKProtocolCalendar> container; 
@property (nonatomic,copy,readonly) NSString * recurrenceRuleString; 
@property (nonatomic,readonly) char cachedHasAttendee; 
@property (nonatomic,readonly) char cachedHasAttachment; 
@property (nonatomic,readonly) char cachedHasAlarm; 
@property (nonatomic,readonly) char cachedIsCalendarOwnerInvitedAttendee; 
@property (nonatomic,readonly) char cachedIsCurrentUserInvitedAttendee; 
@property (nonatomic,copy,readonly) id<EKProtocolParticipant> participantForMe; 
@property (nonatomic,copy,readonly) NSString * organizerName; 
@property (nonatomic,copy,readonly) NSURL * organizerURL; 
@property (nonatomic,copy,readonly) NSString * organizerEmail; 
@property (nonatomic,readonly) char organizedByMe; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSString * scheduleAgentString; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZoneObject; 
@property (nonatomic,copy,readonly) NSDate * startDateUnadjustedFromUTC; 
@property (nonatomic,readonly) char defaultAlarmWasDeleted; 
@required
-(NSDate *)lastModifiedDate;
-(id)URL;
-(id)title;
-(id)location;
-(id)creationDate;
-(id<EKProtocolCalendar>)container;
-(id)localUID;
-(NSDate *)startDateUnadjustedFromUTC;
-(NSDate *)recurrenceDateUnadjustedFromUTC;
-(char)organizedByMe;
-(id<EKProtocolParticipant>)participantForMe;
-(NSURL *)organizerURL;
-(NSString *)organizerEmail;
-(NSString *)scheduleAgentString;
-(id)attendeeSet;
-(id)sharedUID;
-(NSString *)organizerName;
-(NSTimeZone *)timeZoneObject;
-(id)notes;
-(char)isEvent;
-(id)priorityNumber;
-(id)alarmSet;
-(id)attachmentSet;
-(char)allDay;
-(char)isReminder;
-(NSNumber *)calendarItemPermissionNumber;
-(NSString *)recurrenceRuleString;
-(char)cachedHasAttendee;
-(char)cachedHasAttachment;
-(char)cachedHasAlarm;
-(char)cachedIsCalendarOwnerInvitedAttendee;
-(char)cachedIsCurrentUserInvitedAttendee;
-(char)defaultAlarmWasDeleted;

@end

