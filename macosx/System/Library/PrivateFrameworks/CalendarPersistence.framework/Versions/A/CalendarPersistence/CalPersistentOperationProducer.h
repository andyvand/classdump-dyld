/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalPersistenceMonitor.h>

@interface CalPersistentOperationProducer : CalPersistenceMonitor
+(void)registerForContextNotifications;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(char)_processInsertedManagedObjects:(id)arg1 ;
-(char)_processUpdatedManagedObjects:(id)arg1 ;
-(char)_processDeletedManagedObjects:(id)arg1 ;
-(char)_processInsertedCalendar:(id)arg1 ;
-(char)_processInsertedCalendarItem:(id)arg1 ;
-(char)_processInsertedRecurrenceException:(id)arg1 ;
-(char)_processInsertedAttachment:(id)arg1 ;
-(char)_processInsertedAttendees:(id)arg1 ;
-(void)_archivePersistentOperations:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)_sessionIDForAttachment:(id)arg1 ;
-(id)_changedValuesForItem:(id)arg1 ;
-(id)_sessionIDForCalendar:(id)arg1 ;
-(id)_sessionIDForItem:(id)arg1 ;
-(char)_markInvitationSent:(id)arg1 ;
-(id)_sessionIDForRecurrenceException:(id)arg1 ;
-(id)_changedValuesForDetachedEvent:(id)arg1 comparedToMasterEvent:(id)arg2 ;
-(void)_markResponseSent:(int)arg1 forEvent:(id)arg2 ;
-(char)_processUpdatedCalendarItem:(id)arg1 ;
-(char)_processUpdatedCalendar:(id)arg1 ;
-(char)_processUpdatedAttachment:(id)arg1 ;
-(char)_processUpdatedDefaultAlarmSet:(id)arg1 ;
-(char)_processUpdatedAttendee:(id)arg1 ;
-(char)_processDeletedAttachment:(id)arg1 ;
-(id)_sessionIDForDefaultAlarmSet:(id)arg1 ;
-(id)_changedValuesForDefaultAlarmSet:(id)arg1 ;
-(id)_changedValuesForCalendar:(id)arg1 ;
-(char)_processDeletedCalendarItem:(id)arg1 ;
-(char)_processDeletedAttendees:(id)arg1 ;
-(char)_processDeletedCalendar:(id)arg1 ;
-(id)_archivableChangedValuesForObject:(id)arg1 visitedObjects:(id)arg2 ;
-(id)_additionalChangedValuesForObject:(id)arg1 ;
-(char)_hasChangesRequiringReschedule:(id)arg1 ;
-(void)managedObjectContextWillSave:(id)arg1 ;
@end

