/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CaliTIPHandler : NSObject
+(void)initialize;
+(void)process:(id)arg1 principal:(id)arg2 preferCalendar:(id)arg3 existingUIDs:(id)arg4 delayFlag:(char*)arg5 inManagedObjectContext:(id)arg6 ;
+(void)process:(id)arg1 principal:(id)arg2 preferCalendar:(id)arg3 existingUIDs:(id)arg4 delayFlag:(char*)arg5 inManagedObjectContext:(id)arg6 withPrefetchDictionary:(id)arg7 ;
+(char)scheduleWithCalendarItem:(id)arg1 changeRequest:(id*)arg2 ;
+(char)markAsScheduleAgentClientForEvent:(id)arg1 ;
+(void)acknowledgeMessages:(id)arg1 pendingMessages:(id)arg2 doAsyncWithCompletionBlock:(/*^block*/id)arg3 ;
+(void)acknowledgeMessage:(id)arg1 pendingMessages:(id)arg2 ;
+(void)acknowledgeMessage:(id)arg1 pendingMessages:(id)arg2 doAsyncWithCompletionBlock:(/*^block*/id)arg3 ;
+(void)removeMessages:(id)arg1 ;
+(void)removeMessages:(id)arg1 doAsyncWithCompletionBlock:(/*^block*/id)arg2 ;
+(char)replyToInviteMessages:(id)arg1 withStatus:(int)arg2 placingInCalendar:(id)arg3 inContext:(id)arg4 conflictDecisionBlock:(/*^block*/id)arg5 doAsyncWithCompletionBlock:(/*^block*/id)arg6 ;
+(char)logiTIPDetail;
+(void)setLogiTIPDetail:(char)arg1 ;
+(void)process:(id)arg1 preferCalendar:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(char)didDelayWhenProcessing:(id)arg1 principal:(id)arg2 preferCalendar:(id)arg3 ;
+(char)scheduleWithCalendarItem:(id)arg1 ;
+(char)diffsAreImportant:(id)arg1 ;
+(char)shouldMarkAsScheduleAgentClientForCalendar:(id)arg1 forMaster:(id)arg2 forMessage:(id)arg3 ;
+(void)markAsScheduleAgentClient:(id)arg1 ;
+(void)acknowledgeMessages:(id)arg1 pendingMessages:(id)arg2 ;
+(void)replyToMessage:(id)arg1 withStatus:(int)arg2 placingInCalendar:(id)arg3 conflictDecisionBlock:(/*^block*/id)arg4 doAsyncWithCompletionBlock:(/*^block*/id)arg5 ;
+(id)_findOrMakeMessageForEvent:(id)arg1 inContext:(id)arg2 ;
+(id)diffForAttendeeAddress:(id)arg1 ;
+(id)diffsFromCalDAVOccurrenceChange:(id)arg1 ;
+(id)resourceUpdatedDiffsFromCalDAVOccurrenceChange:(id)arg1 ;
+(void)deleteAndCreateChangeRequestForMessage:(id)arg1 principal:(id)arg2 context:(id)arg3 ;
+(id)debugStringForEvent:(id)arg1 ;
+(id)masterEventWithSharedUID:(id)arg1 principal:(id)arg2 inManagedObjectContext:(id)arg3 withPrefetchDictionary:(id)arg4 ;
+(id)preProcessRequestOccurrences:(id)arg1 forEvent:(id)arg2 principal:(id)arg3 ;
+(id)myAddressInPrincipal:(id)arg1 forEvent:(id)arg2 ;
+(char)requestForEvent:(id)arg1 withOccurrences:(id)arg2 inMessage:(id)arg3 masterEvent:(id)arg4 delayFlag:(char*)arg5 principal:(id)arg6 preferCalendar:(id)arg7 inManagedObjectContext:(id)arg8 withPrefetchDictionary:(id)arg9 ;
+(char)replyForEvent:(id)arg1 inMessage:(id)arg2 masterEvent:(id)arg3 principal:(id)arg4 ;
+(char)validateOrganizerMatches:(id)arg1 managedEvent:(id)arg2 ;
+(char)cancelEvent:(id)arg1 inMessage:(id)arg2 masterEvent:(id)arg3 principal:(id)arg4 existingUIDs:(id)arg5 ;
+(id)managedEventForEvent:(id)arg1 inCalendar:(id)arg2 withMaster:(id)arg3 withPrefetchDictionary:(id)arg4 ;
+(char)isAddressMe:(id)arg1 forPrincipal:(id)arg2 ;
+(/*^block*/id)iTIPCompletionBlockForPrincipal:(id)arg1 context:(id)arg2 ;
+(void)insertChangeRequestForEvent:(id)arg1 type:(int)arg2 context:(id)arg3 ;
+(id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3 ;
+(void)setReply:(int)arg1 onEvent:(id)arg2 forAddress:(id)arg3 ;
+(int)getChangesFromScheduleChanges:(id)arg1 event:(id)arg2 calendar:(id)arg3 managedEvent:(id)arg4 ;
+(id)getChanges:(int*)arg1 forIncomingEvent:(id)arg2 withOccurrences:(id)arg3 onCalendar:(id)arg4 managedEvent:(id)arg5 masterEvent:(id)arg6 principal:(id)arg7 attendee:(id)arg8 inManagedObjectContext:(id)arg9 ;
+(char)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3 ;
+(id)calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2 managedEvent:(id)arg3 ;
+(id)calculateDiffsForEvent:(id)arg1 ;
+(id)calculateDiffsForEvent:(id)arg1 changedProperties:(id)arg2 ;
+(void)process:(id)arg1 principal:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(char)cancelEvent:(id)arg1 inMessage:(id)arg2 masterEvent:(id)arg3 principal:(id)arg4 ;
@end

