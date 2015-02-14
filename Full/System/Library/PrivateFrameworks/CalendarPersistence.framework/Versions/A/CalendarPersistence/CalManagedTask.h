/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedCalendarItem.h>
#import <CalendarPersistence/EKProtocolReminderOccurrence.h>

@class NSDate, NSNumber, NSString, NSDictionary, NSManagedObjectID, NSURL, NSTimeZone;

@interface CalManagedTask : CalManagedCalendarItem <EKProtocolReminderOccurrence>

@property (assign) unsigned long long order; 
@property (retain) NSDate * completedDate; 
@property (retain) NSDate * dueDate; 
@property (retain) NSNumber * priority; 
@property (retain) NSNumber * percentComplete; 
@property (assign) char hasLocationAlarm; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
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
@property (nonatomic,copy,readonly) NSDate * dueDateUnadjustedFromUTC; 
@property (nonatomic,copy,readonly) NSDate * completionDate; 
@property (nonatomic,copy,readonly) NSNumber * orderNumber; 
@property (nonatomic,readonly) char statusCompleteNotByDate; 
@property (nonatomic,readonly) char canEditRecurrence; 
@property (nonatomic,readonly) char cachedHasLocationAlarm; 
+(id)entityName;
+(id)recognizedICSProperties;
+(id)fetchRequestWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)isExchangeCompatible;
-(id)_makeExchangeCompatible;
-(NSDate *)completionDate;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)updateWithEntity:(id)arg1 inCalendar:(id)arg2 ;
-(void)importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5 ;
-(void)setCompletedDate:(NSDate *)arg1 ;
-(id)_iCalendarElementWithOptions:(unsigned long long)arg1 ;
-(id)attributesToCompareForMerge;
-(void)updateAlarmDerivedProperties;
-(id)defaultAlarmsBasedOnItemAndPreferences;
-(id)defaultAlarmsBasedOnItemAndPreferencesFromServer:(char)arg1 ;
-(id)priorityNumber;
-(char)isReminder;
-(char)hasOccurrenceInRangeFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)earliestOccurrenceDateBetweenStartDate:(id)arg1 endDate:(id)arg2 withOffSet:(long long)arg3 ;
-(void)setPriorityNumber:(id)arg1 ;
-(Class)entityClass;
-(NSNumber *)orderNumber;
-(void)setOrderNumber:(NSNumber *)arg1 ;
-(id)importantDate;
-(id)dueDateAdjustedFromUTC;
-(NSDate *)dueDateUnadjustedFromUTC;
-(char)statusCompleteNotByDate;
-(char)canEditRecurrence;
-(char)cachedHasLocationAlarm;
-(void)setDueDateUnadjustedFromUTC:(NSDate *)arg1 ;
@end

