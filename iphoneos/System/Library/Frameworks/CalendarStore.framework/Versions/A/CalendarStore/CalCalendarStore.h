/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CalendarStore.framework/Versions/A/CalendarStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarStore/CalendarStore-Structs.h>
#import <CalendarStore/CalendarAgentClient.h>

@interface CalCalendarStore : NSObject <CalendarAgentClient> {

	void* _reserved;

}
+(id)defaultCalendarStore;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(void)setCurrentTimeZone:(id)arg1 ;
+(id)defaultLocalCalendarAttachmentsBackupPath;
+(id)taskPredicateWithCalendars:(id)arg1 ;
+(id)activeCalendar;
+(id)currentTimeZone;
+(id)localCalendarsGroupTitle;
+(id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 ;
+(id)calendarPredicateWithGroups:(id)arg1 ;
+(char)authorizationStatusForServiceName:(CFStringRef)arg1 ;
+(char)requestAccessForServiceName:(CFStringRef)arg1 ;
+(id)_calendarNotFoundWithCalendarName:(id)arg1 isEvent:(char)arg2 ;
+(id)_calendarNotEditableErrorWithCalendarName:(id)arg1 isEvent:(char)arg2 ;
+(id)_calendarDoesNotSupportEventsErrorWithCalendarName:(id)arg1 ;
+(id)_calendarDoesNotSupportTasksErrorWithCalendarName:(id)arg1 ;
+(id)_dateFromPotentialNSCalendarDate:(id)arg1 ;
+(id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 UID:(id)arg3 calendars:(id)arg4 ;
+(id)taskPredicateWithTasksCompletedSince:(id)arg1 calendars:(id)arg2 ;
+(id)taskPredicateWithUncompletedTasks:(id)arg1 ;
+(id)taskPredicateWithUncompletedTasksDueBefore:(id)arg1 calendars:(id)arg2 ;
+(char)calendarIsDefaultLocal:(id)arg1 ;
+(id)_calendarAllDayFlagMustApplyToAllOccurrencesError;
+(id)_calendarAllDayFlagCannotApplyWhenExceptionsToRecurrenceError;
-(char)anyLocalRemindersExist;
-(char)anyLocalCalendarsExist;
-(id)taskWithUID:(id)arg1 ;
-(id)calendarWithUID:(id)arg1 ;
-(id)eventsWithPredicate:(id)arg1 ;
-(id)eventWithUID:(id)arg1 occurrence:(id)arg2 ;
-(id)groups;
-(char)saveGroup:(id)arg1 error:(id*)arg2 ;
-(char)saveCalendar:(id)arg1 error:(id*)arg2 ;
-(id)tasksWithPredicate:(id)arg1 ;
-(char)saveTask:(id)arg1 error:(id*)arg2 ;
-(char)removeCalendar:(id)arg1 error:(id*)arg2 ;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)calendars;
-(void)sessionConnectedStateChanged:(id)arg1 state:(id)arg2 ;
-(void)calDavSharedUIDChanged:(id)arg1 ;
-(void)calMeCardChanged;
-(void)calPersistanceNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)calendarsWithPredicate:(id)arg1 ;
-(char)saveEvent:(id)arg1 span:(int)arg2 error:(id*)arg3 ;
-(char)removeEvent:(id)arg1 span:(int)arg2 error:(id*)arg3 ;
-(char)removeTask:(id)arg1 error:(id*)arg2 ;
-(void)_openCalendarItem:(id)arg1 options:(int)arg2 ;
-(char)isPluginIdSupported:(id)arg1 forApp:(id)arg2 ;
-(char)removeGroup:(id)arg1 error:(id*)arg2 ;
-(id)notificationForDistributedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)openEvent:(id)arg1 options:(int)arg2 ;
-(void)openTask:(id)arg1 options:(int)arg2 ;
-(id)firstWritableCalendarThatSupportsTasks;
-(id)eventWithItemID:(id)arg1 ;
-(id)groupWithUID:(id)arg1 ;
-(id)groupWithPrincipalURL:(id)arg1 userName:(id)arg2 ;
-(id)groupWithExchangeURL:(id)arg1 externalURL:(id)arg2 userName:(id)arg3 emailAddress:(id)arg4 ;
-(id)_createURLString:(id)arg1 removePath:(char)arg2 fromGroup:(id)arg3 ;
-(char)removeGroupForCalendar:(id)arg1 error:(id*)arg2 ;
-(char)removeGroupForReminders:(id)arg1 error:(id*)arg2 ;
-(char)migrateLocalCalendarsToGroup:(id)arg1 error:(id*)arg2 ;
-(char)anyLocalCalendarHasAttachments;
@end

