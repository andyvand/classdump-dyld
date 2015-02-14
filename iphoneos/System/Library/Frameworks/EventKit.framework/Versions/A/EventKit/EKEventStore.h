/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, EKBackingStore, NSObject, EKCalendar;

@interface EKEventStore : NSObject {

	char _allowScheduling;
	char _onlyNotifyForAccountedChanges;
	int backingStoreType;
	NSString* eventStoreIdentifier;
	EKBackingStore* backingStore;
	NSObject*<OS_dispatch_queue> backgroundFetchQueue;

}

@property (nonatomic,readonly) NSString * eventStoreIdentifier; 
@property (nonatomic,readonly) EKCalendar * defaultCalendarForNewEvents; 
@property (assign) char allowScheduling;                                                             //@synthesize allowScheduling=_allowScheduling - In the implementation block
@property (assign) char onlyNotifyForAccountedChanges;                                               //@synthesize onlyNotifyForAccountedChanges=_onlyNotifyForAccountedChanges - In the implementation block
@property (nonatomic,retain) EKBackingStore * backingStore; 
@property (nonatomic,readonly) int backingStoreType; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> backingStoreAvailableGroup; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> backgroundFetchQueue; 
+(char)accessGrantedForEntityType:(unsigned long long)arg1 ;
+(id)dateStringFromDate:(id)arg1 ;
+(id)dateFromDateString:(id)arg1 ;
+(void)setDenyAccessToEvents:(char)arg1 ;
+(void)setDenyAccessToReminders:(char)arg1 ;
+(char)accessGrantedForCalendar:(id)arg1 ;
+(char)accessGrantedForSource:(id)arg1 ;
+(long long)authorizationStatusForEntityType:(unsigned long long)arg1 ;
-(id)initWithAccessToEntityTypes:(unsigned long long)arg1 ;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(char)saveCalendar:(id)arg1 commit:(char)arg2 error:(id*)arg3 ;
-(char)saveEvent:(id)arg1 span:(int)arg2 commit:(char)arg3 error:(id*)arg4 ;
-(id)calendarItemWithIdentifier:(id)arg1 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 ;
-(id)eventsMatchingPredicate:(id)arg1 ;
-(id)predicateForRemindersInCalendars:(id)arg1 ;
-(id)eventWithIdentifier:(id)arg1 ;
-(int)backingStoreType;
-(id)localSource;
-(char)commit:(id*)arg1 ;
-(id)sourceFilters;
-(void)_setEventStoreOnObject:(id)arg1 ;
-(EKBackingStore *)backingStore;
-(char)allowScheduling;
-(id)reminderWithIdentifier:(id)arg1 ;
-(id)remindersWithCalendarIdentifiers:(id)arg1 ;
-(char)saveReminder:(id)arg1 commit:(char)arg2 error:(id*)arg3 ;
-(id)allReminders;
-(void)_noteAccessRequestedToEntityType:(unsigned long long)arg1 ;
-(id)initWithSourceFilters:(id)arg1 ;
-(id)initWithStoreType:(int)arg1 includeEnabledDelegates:(char)arg2 sourceFilters:(id)arg3 asyncWithCompletion:(/*^block*/id)arg4 ;
-(void)_requestAccessForMask:(unsigned long long)arg1 ;
-(id)initWithStoreType:(int)arg1 sourceFilters:(id)arg2 ;
-(id)initWithStoreType:(int)arg1 includeEnabledDelegates:(char)arg2 sourceFilters:(id)arg3 asyncWithCompletion:(/*^block*/id)arg4 orWithExistingStore:(id)arg5 andBackingStore:(id)arg6 ;
-(id)_newBackingStoreForType:(int)arg1 includeEnabledDelegates:(char)arg2 sourceFilters:(id)arg3 asyncWithCompletion:(/*^block*/id)arg4 ;
-(id)initWithEventStore:(id)arg1 andNewBackingStore:(id)arg2 ;
-(char)includeEnabledDelegates;
-(char)_commit:(id*)arg1 onlyCommitObjects:(id)arg2 ;
-(NSString *)eventStoreIdentifier;
-(char)_savePreFlight:(id)arg1 withValidateBlock:(/*^block*/id)arg2 anObject:(id*)arg3 error:(id*)arg4 ;
-(char)_conditionalSave:(id)arg1 commit:(char)arg2 error:(id*)arg3 withActionBlock:(/*^block*/id)arg4 withValidateBlock:(/*^block*/id)arg5 ;
-(void)setBackingStore:(EKBackingStore *)arg1 ;
-(id)allCalendars;
-(void)_setEventStoreOnObjects:(id)arg1 ;
-(EKCalendar *)defaultCalendarForNewEvents;
-(void)setDefaultCalendarForNewEvents:(EKCalendar *)arg1 ;
-(id)defaultCalendarForNewReminders;
-(void)setDefaultCalendarForNewReminders:(id)arg1 ;
-(id)sourceWithIdentifier:(id)arg1 ;
-(id)sourceErrors;
-(id)remindersWithExternalIdentifier:(id)arg1 ;
-(id)eventsWithExternalIdentifier:(id)arg1 ;
-(id)recurrenceChangeManager;
-(id)stringForViewOption:(int)arg1 ;
-(id)stringForOpenOption:(int)arg1 ;
-(void)showCalendarItemInApp:(id)arg1 withOpenOptions:(int)arg2 inView:(int)arg3 ;
-(id)eventWithExternalURI:(id)arg1 ;
-(id)reminderWithExternalURI:(id)arg1 ;
-(id)calendarItemsWithExternalIdentifier:(id)arg1 ;
-(char)_conditionalSave:(id)arg1 commit:(char)arg2 error:(id*)arg3 withActionBlock:(/*^block*/id)arg4 ;
-(id)_wrapReminderOccurrence:(id)arg1 ;
-(id)fetchRemindersMatchingPredicate:(id)arg1 completionCallback:(/*^block*/id)arg2 cancelCallback:(/*^block*/id)arg3 ;
-(id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(char)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(char)arg4 completed:(char)arg5 includeDatesBefore:(char)arg6 sortOrder:(int)arg7 ;
-(id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(char)arg3 completed:(char)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 maxResults:(unsigned long long)arg9 ;
-(id)predicateForCompletedRemindersMaxResults:(unsigned long long)arg1 calendars:(id)arg2 ;
-(id)_predicateForNumberOfCompletedRemindersInCalendars:(id)arg1 ;
-(unsigned long long)numberOfCompletedRemindersInCalendars:(id)arg1 ;
-(id)allEvents;
-(char)_saveEvent:(id)arg1 span:(int)arg2 commit:(char)arg3 error:(id*)arg4 ignoreValidation:(char)arg5 ;
-(char)_saveEvents:(id)arg1 span:(int)arg2 commit:(char)arg3 error:(id*)arg4 ignoreValidation:(char)arg5 ;
-(void)deleteDraftOfEventWithOccurrenceID:(id)arg1 ;
-(id)_wrapAndValidateEventOccurrence:(id)arg1 ;
-(id)_wrapEventOccurrence:(id)arg1 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 calendarIdentifiers:(id)arg5 prefetchHint:(long long)arg6 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 prefetchHint:(long long)arg5 ;
-(char)_saveDraftOfEvent:(id)arg1 toDirectory:(id)arg2 ;
-(id)_draftPathForEventWithOccurrenceID:(id)arg1 draftDirectory:(id)arg2 ;
-(id)_loadDraftOfEventWithOccurrenceID:(id)arg1 fromDirectory:(id)arg2 ;
-(void)_deleteDraft:(id)arg1 ;
-(void)_deleteDraftOfEventWithOccurrenceID:(id)arg1 fromDirectory:(id)arg2 ;
-(id)initWithStoreType:(int)arg1 ;
-(id)initWithStoreType:(int)arg1 includeEnabledDelegates:(char)arg2 ;
-(id)copyForBackgroundUpdate;
-(char)commitObjects:(id)arg1 error:(id*)arg2 ;
-(void)refreshSourcesIfNecessary;
-(id)sourcesEnabledForEntityType:(unsigned long long)arg1 ;
-(void)showDateInCalendar:(id)arg1 inView:(int)arg2 ;
-(void)showEventInCalendar:(id)arg1 withOpenOptions:(int)arg2 inView:(int)arg3 ;
-(void)showReminderInReminders:(id)arg1 withOpenOptions:(int)arg2 ;
-(id)calendarWithExternalURI:(id)arg1 ;
-(id)calendarItemWithExternalURI:(id)arg1 ;
-(char)removeReminder:(id)arg1 commit:(char)arg2 error:(id*)arg3 ;
-(char)removeCalendar:(id)arg1 commit:(char)arg2 error:(id*)arg3 ;
-(char)saveSource:(id)arg1 commit:(char)arg2 error:(id*)arg3 ;
-(char)removeSource:(id)arg1 commit:(char)arg2 error:(id*)arg3 ;
-(void)notifyChangedCalendarSource:(char)arg1 changedCalendarSourceIdentifiers:(id)arg2 calendar:(char)arg3 changedCalendarIdentifiers:(id)arg4 reminder:(char)arg5 changedReminderIdentifiers:(id)arg6 event:(char)arg7 changedEventIdentifiers:(id)arg8 otherChanges:(id)arg9 ;
-(id)remindersMatchingPredicate:(id)arg1 ;
-(id)fetchRemindersMatchingPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelFetchRequest:(id)arg1 ;
-(id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForCompletedRemindersWithCalendars:(id)arg1 ;
-(id)predicateForRemindersWithSearchTerm:(id)arg1 ;
-(id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(char)arg3 completed:(char)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 ;
-(id)predicateForAllIncompleteReminders;
-(id)predicateForCompletedRemindersMaxResults:(unsigned long long)arg1 ;
-(char)anyCompletedRemindersInCalendars:(id)arg1 ;
-(char)removeEvent:(id)arg1 span:(int)arg2 commit:(char)arg3 error:(id*)arg4 ;
-(id)eventsWithIdentifiers:(id)arg1 ;
-(void)fetchEventsMatchingPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)eventWithUniqueId:(id)arg1 occurrenceDate:(id)arg2 ;
-(void)refreshObjectIDs:(id)arg1 inContext:(id)arg2 ;
-(void)_setRangeOfInterest:(id)arg1 identifiersOfInterest:(id)arg2 ;
-(id)loadDraftOfEventWithOccurrenceID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)backgroundFetchQueue;
-(void)setAllowScheduling:(char)arg1 ;
-(char)onlyNotifyForAccountedChanges;
-(id)wrapEventOccurrences:(id)arg1 ;
-(char)saveDraftOfEvent:(id)arg1 ;
-(void)requestAccessToEntityType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initAsyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setOnlyNotifyForAccountedChanges:(char)arg1 ;
-(NSObject*<OS_dispatch_group>)backingStoreAvailableGroup;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendarIdentifiers:(id)arg3 prefetchHint:(long long)arg4 ;
-(id)predicateForEventsWithTitle:(id)arg1 location:(id)arg2 notes:(id)arg3 participantNames:(id)arg4 calendars:(id)arg5 ;
-(id)calendarItemsMatchingPredicate:(id)arg1 entityClass:(id)arg2 ;
-(id)init;
-(void)resetCache;
-(void)reset;
-(id)calendarWithIdentifier:(id)arg1 ;
-(id)sources;
@end

