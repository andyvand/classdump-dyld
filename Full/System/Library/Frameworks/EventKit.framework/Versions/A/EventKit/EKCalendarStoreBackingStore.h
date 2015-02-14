/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKBackingStore.h>

@class EKBackingStoreAccounting, CalAccumulatingQueue, NSDictionary;

@interface EKCalendarStoreBackingStore : EKBackingStore {

	char _isPrefetching;
	char _persistenceAvailable;
	EKBackingStoreAccounting* _accounting;
	CalAccumulatingQueue* _externalChangeQueue;
	NSDictionary* _uninitializedSourceErrors;

}

@property (nonatomic,retain) EKBackingStoreAccounting * accounting;              //@synthesize accounting=_accounting - In the implementation block
@property (assign) char isPrefetching;                                           //@synthesize isPrefetching=_isPrefetching - In the implementation block
@property (assign) char persistenceAvailable;                                    //@synthesize persistenceAvailable=_persistenceAvailable - In the implementation block
@property (retain) CalAccumulatingQueue * externalChangeQueue;                   //@synthesize externalChangeQueue=_externalChangeQueue - In the implementation block
@property (copy) NSDictionary * uninitializedSourceErrors;                       //@synthesize uninitializedSourceErrors=_uninitializedSourceErrors - In the implementation block
+(id)createNonPartialFrozenObjectForPartialObject:(id)arg1 withFrozenClass:(Class)arg2 ;
+(id)_createNonPartialFrozenObjectForPartialObject:(id)arg1 inManagedObjectContext:(id)arg2 withFrozenClass:(Class)arg3 updateBackingObjectsTracker:(id)arg4 onQueue:(id)arg5 ;
+(id)_readOnlyContextToleratingInaccessibleFault;
+(void)_addPrefetchRelationshipsForCalendarItemFetch:(id)arg1 prefetchItemsThatSupportFaulting:(char)arg2 ;
+(void)_updateOccurrenceCacheForChangedBackingCalendarItems:(id)arg1 backingStore:(id)arg2 ;
+(void)_processExternalChangeHelperPopulateChangedBackingSources:(id*)arg1 newBackingSources:(id*)arg2 backingStore:(id)arg3 ;
+(void)_processExternalChangeHelperPopulateChangedBackingCalendars:(id*)arg1 newBackingCalendars:(id*)arg2 withNewBackingSources:(id)arg3 backingStore:(id)arg4 ;
+(void)_processExternalChangeHelperPopulateChangedBackingCalendarItems:(id*)arg1 newBackingCalendarItems:(id*)arg2 withNewBackingCalendars:(id)arg3 backingStore:(id)arg4 ;
+(void)_addPrefetchRelationshipsForCalendarItemFetch:(id)arg1 ;
-(id)allSources;
-(id)contextToleratingInaccessibleFault;
-(id)remindersWithCalendarIdentifiers:(id)arg1 ;
-(id)allReminders;
-(void)refreshBackingStore;
-(char)finishBatch:(id*)arg1 onlyCommitObjects:(id)arg2 ;
-(void)refreshSources;
-(id)defaultCalendarForNewEvents;
-(void)setDefaultCalendarForNewEvents:(id)arg1 ;
-(id)defaultCalendarForNewReminders;
-(void)setDefaultCalendarForNewReminders:(id)arg1 ;
-(id)sourceWithIdentifier:(id)arg1 ;
-(id)sourceErrors;
-(id)occurrencesWithExternalIdentifier:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)allEvents;
-(void)refreshCalendarItemsWithObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)pruneCacheForRange:(id)arg1 localUIDs:(id)arg2 ;
-(id)initWithSourceFilters:(id)arg1 includeEnabledDelegates:(char)arg2 asyncWithCompletion:(/*^block*/id)arg3 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)_emptyCache;
-(id)remindersWithDueDatesInRange:(id)arg1 withCalendarIdentifiers:(id)arg2 withCompletion:(id)arg3 ;
-(id)remindersWithIsCompleted:(char)arg1 maxResults:(unsigned long long)arg2 withCalendarIdentifiers:(id)arg3 ;
-(id)_lookupOccurrenceWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_lookupOccurrencesWithIdentifiers:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_expandEventRangePredicate:(id)arg1 ;
-(char)_cleanUpAfterBatchWithError:(id*)arg1 managedObjectContext:(id)arg2 ;
-(long long)notificationBoxMessageCountForCalendar:(id)arg1 allowCachedValue:(char)arg2 ;
-(/*^block*/id)createNewManagedItemBlockWithContext:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)prepareForManagedItemChangesBlock;
-(/*^block*/id)applyChangeToManagedItemBlockWithError:(id*)arg1 ;
-(/*^block*/id)deleteManagedItemBlock;
-(char)_updateCreatedItemsWithCreatedObjectDictionary:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 createNewManagedObjectBlock:(/*^block*/id)arg4 prepareForChangesBlock:(/*^block*/id)arg5 applyChangeBlock:(/*^block*/id)arg6 locallyChangedIdentifiers:(id)arg7 ;
-(char)_updateChangedAndDeletedItemsWithCreatedObjectDictionary:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 prepareForChangesBlock:(/*^block*/id)arg4 applyChangeBlock:(/*^block*/id)arg5 deleteManagedObjectBlock:(/*^block*/id)arg6 changedLocalIDs:(id)arg7 locallyChangedIdentifiers:(id)arg8 ;
-(char)_updateRecurrenceExceptionsInContext:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)createNewManagedCalendarBlockWithContext:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)prepareForManagedCalendarChangesBlock;
-(/*^block*/id)applyChangeToManagedCalendarBlockWithError:(id*)arg1 ;
-(/*^block*/id)deleteManagedCalendarBlock;
-(char)_updateCreatedCalendarsWithCreatedObjectDictionary:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 createNewManagedObjectBlock:(/*^block*/id)arg4 prepareForChangesBlock:(/*^block*/id)arg5 applyChangeBlock:(/*^block*/id)arg6 locallyChangedIdentifiers:(id)arg7 ;
-(char)_updateChangedAndDeletedCalendarsWithCreatedObjectDictionary:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 prepareForChangesBlock:(/*^block*/id)arg4 applyChangeBlock:(/*^block*/id)arg5 deleteManagedObjectBlock:(/*^block*/id)arg6 changedLocalIDs:(id)arg7 locallyChangedIdentifiers:(id)arg8 ;
-(/*^block*/id)createNewManagedGroupBlockWithContext:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)prepareForManagedGroupChangesBlock;
-(/*^block*/id)applyChangeToManagedGroupBlockWithError:(id*)arg1 ;
-(/*^block*/id)deleteManagedGroupBlock;
-(char)_updateCreatedSourcesWithCreatedObjectDictionary:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 createNewManagedObjectBlock:(/*^block*/id)arg4 prepareForChangesBlock:(/*^block*/id)arg5 applyChangeBlock:(/*^block*/id)arg6 locallyChangedIdentifiers:(id)arg7 ;
-(char)_updateChangedAndDeletedSourcesWithCreatedObjectDictionary:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 prepareForChangesBlock:(/*^block*/id)arg4 applyChangeBlock:(/*^block*/id)arg5 deleteManagedObjectBlock:(/*^block*/id)arg6 changedLocalIDs:(id)arg7 locallyChangedIdentifiers:(id)arg8 ;
-(id)createNonPartialFrozenObjectAndUpdateBackingObjectsTrackerForPartialObject:(id)arg1 withFrozenClass:(Class)arg2 ;
-(char)resetObject:(id)arg1 inQueue:(id)arg2 ;
-(void)_refreshCalendarItemsWithObjectIDs:(id)arg1 createPartialObjects:(char)arg2 inQueue:(id)arg3 ;
-(void)_refreshCalendarsWithObjectIDs:(id)arg1 createPartialObjects:(char)arg2 inQueue:(id)arg3 ;
-(void)_refreshSourcesWithObjectIDs:(id)arg1 createPartialObjects:(char)arg2 inQueue:(id)arg3 ;
-(id)cachedRange;
-(id)remindersWithDueDates;
-(char)eventsExistOnCalendar:(id)arg1 ;
-(char)futureScheduledEventsExistOnCalendar:(id)arg1 ;
-(char)eventsMarkedScheduleAgentClientExistOnCalendar:(id)arg1 ;
-(id)errorForCalendar:(id)arg1 ;
-(id)errorForSource:(id)arg1 ;
-(id)initWithSourceFilters:(id)arg1 includeEnabledDelegates:(char)arg2 asyncWithCompletion:(/*^block*/id)arg3 orWithExistingStore:(id)arg4 ;
-(void)_processExternalChangeWithTags:(id)arg1 context:(id)arg2 ;
-(void)_updatePersistenceAvailability;
-(void)_databaseChangedExternally:(id)arg1 ;
-(void)_handleTimeZoneChange:(id)arg1 ;
-(void)_handleLocaleChange:(id)arg1 ;
-(void)_reloadSourceErrors:(id)arg1 ;
-(void)_sharedCalendarInviteChanged:(id)arg1 ;
-(EKBackingStoreAccounting *)accounting;
-(void)setAccounting:(EKBackingStoreAccounting *)arg1 ;
-(id)_fetchFrozenEventsInCalendars:(id)arg1 ;
-(id)_fetchFrozenRemindersInCalendars:(id)arg1 ;
-(id)_fetchFrozenRemindersWithCalendarIdentifiers:(id)arg1 ;
-(id)_reminderPredicateWithAnyCompletionDate;
-(id)_reminderPredicateForIncompleteReminders;
-(id)_fetchFrozenCalendarItemsOfType:(unsigned long long)arg1 withCoreDataPredicate:(id)arg2 ;
-(id)_reminderPredicateWithAnyDueDate;
-(id)_calendarItemPredicateWithExternalIdentifiers:(id)arg1 ;
-(id)_calendarItemPredicateWithItemIdentifiers:(id)arg1 ;
-(id)_reminderForLocalUID:(id)arg1 ;
-(id)_eventForLocalUID:(id)arg1 ;
-(void)_kickOffEventPrefetchIfNecessary:(id)arg1 ;
-(id)_fetchFrozenMasterOrDetachedEventsInRange:(id)arg1 inCalendars:(id)arg2 ;
-(char)isPrefetching;
-(id)_expandedRangeForPredicate:(id)arg1 ;
-(void)setIsPrefetching:(char)arg1 ;
-(id)_coreDataCalendarsFromCalendarIdentifiers:(id)arg1 inContext:(id)arg2 ;
-(id)_coreDataSourcesFromSourceIdentifiers:(id)arg1 inContext:(id)arg2 ;
-(id)_coreDataEventCalendarsFromCalendarIdentifiers:(id)arg1 inContext:(id)arg2 ;
-(id)firstWriteableCalendarPreferringServerBasedSupportingEntityType:(unsigned long long)arg1 ;
-(void)_registerForCreatingChangeRequestsWithCalendar:(id)arg1 ;
-(char)_changeEvent:(id)arg1 withLocalUID:(id)arg2 error:(id*)arg3 ;
-(char)_changeTask:(id)arg1 withLocalUID:(id)arg2 error:(id*)arg3 ;
-(char)_createMObjWithIdentifier:(id)arg1 createNewManagedObjectBlock:(/*^block*/id)arg2 prepareForChangesBlock:(/*^block*/id)arg3 applyChangeBlock:(/*^block*/id)arg4 createdManagedObjects:(id)arg5 locallyChangedIdentifiers:(id)arg6 ;
-(id)_managedObjectForEKObject:(id)arg1 withIdentifier:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(char)_changeOrDeleteMObj:(id)arg1 withIdentifier:(id)arg2 prepareForChangesBlock:(/*^block*/id)arg3 applyChangeBlock:(/*^block*/id)arg4 deleteManagedObjectBlock:(/*^block*/id)arg5 locallyChangedIdentifiers:(id)arg6 ;
-(char)_changeCalendar:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)_changeGroup:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_calendarPredicateWithCalendar:(id)arg1 ;
-(char)_updateMultiValueRelationshipObjectsOnCalManagedObject:(id)arg1 fromEKObject:(id)arg2 usingRelationKey:(id)arg3 uniqueIdentifierKeyForRelationshipObject:(id)arg4 createNewManagedObjectBlock:(/*^block*/id)arg5 applyChangesFromEKObjectToCalManagedObjectBlock:(/*^block*/id)arg6 removeAndAddNewlyCreatedObjectBlock:(/*^block*/id)arg7 deleteManagedObjectBlock:(/*^block*/id)arg8 context:(id)arg9 error:(id*)arg10 ;
-(id)_getPathInCacheForAttachment:(id)arg1 onEvent:(id)arg2 ;
-(char)_needToSetAttachmentDeletionEtagForEvent:(id)arg1 ;
-(void)_prepAttachment:(id)arg1 forUploadingForEvent:(id)arg2 ;
-(void)_removeAttachment:(id)arg1 fromEvent:(id)arg2 ;
-(char)_changeShareesOnCalManagedCalendar:(id)arg1 fromEKCalendar:(id)arg2 error:(id*)arg3 ;
-(id)_createNonPartialEventForLocalUID:(id)arg1 ;
-(char)_moveItem:(id)arg1 toCalendar:(id)arg2 ;
-(char)_changeAlarmsOnCalManagedCalendarItem:(id)arg1 fromEKCalendarItem:(id)arg2 error:(id*)arg3 ;
-(char)_changeAttendeesOnCalManagedEvent:(id)arg1 fromEKEvent:(id)arg2 error:(id*)arg3 ;
-(char)_changeNotificationBoxMessagesOnCalManagedEvent:(id)arg1 fromEKEvent:(id)arg2 error:(id*)arg3 ;
-(char)_changeAttachmentsOnCalManagedEvent:(id)arg1 fromEKEvent:(id)arg2 error:(id*)arg3 ;
-(char)_updateUnrecognizedICSOnCalManagedEvent:(id)arg1 fromEvent:(id)arg2 ;
-(id)_eventForLocalUID:(id)arg1 createNonPartialObject:(char)arg2 ;
-(id)_reminderForLocalUID:(id)arg1 createNonPartialObject:(char)arg2 ;
-(void)_refreshCalendarItemsWithObjectIDs:(id)arg1 createPartialObjects:(char)arg2 inQueue:(id)arg3 inManagedObjectContext:(id)arg4 ;
-(id)_managedObjectsForClass:(Class)arg1 withManagedObjectIDs:(id)arg2 managedObjectContext:(id)arg3 ;
-(void)_removeManagedObjectIDsFromCache:(id)arg1 ;
-(void)_addExceptionsForItem:(id)arg1 inRange:(id)arg2 toUpdates:(id)arg3 ;
-(id)_calendarPredicateWithCalendarIdentifiers:(id)arg1 ;
-(char)_shouldHandleNotification:(id)arg1 ;
-(id)_updateTagsForNotification:(id)arg1 contextForTags:(id*)arg2 ;
-(CalAccumulatingQueue *)externalChangeQueue;
-(id)_fetchFrozenCalendarItemsOfType:(unsigned long long)arg1 withCoreDataPredicate:(id)arg2 withCalendarPredicate:(id)arg3 ;
-(void)_fetchUpdatedRemindersForUpdatedCalendars:(id)arg1 updatedCalendarItems:(id)arg2 accountingInfo:(id)arg3 ;
-(void)_fetchUpdatedEventsForUpdatedCalendars:(id)arg1 updatedCalendarItems:(id)arg2 accountingInfo:(id)arg3 ;
-(id)_calendarItemPredicateWithItemIdentifiers:(id)arg1 calendarIdentifiers:(id)arg2 ;
-(NSDictionary *)uninitializedSourceErrors;
-(id)_fetchSourceErrors;
-(void)setUninitializedSourceErrors:(NSDictionary *)arg1 ;
-(id)_initializedSourceErrors;
-(id)sourceIdentifiers;
-(id)_fetchLastErrorForEntityName:(id)arg1 ;
-(id)eventKitErrorFromCalendarError:(id)arg1 ;
-(char)_objectIsDeletedInCoreData:(id)arg1 ;
-(id)_fetchUpdatedCalendarItemsForItems:(id)arg1 updatedCalendars:(id)arg2 accountingInfo:(id)arg3 ;
-(id)_changesFromOldBackingObjects:(id)arg1 toNewBackingObjects:(id)arg2 ;
-(char)_queueRetryIfReceiptIsStale:(long long)arg1 tags:(id)arg2 ;
-(void)_bumpBackoff;
-(void)_queueRetryForOldReceipt:(long long)arg1 currentReceipt:(long long)arg2 tags:(id)arg3 backoff:(unsigned long long)arg4 ;
-(char)_processExternalChangeHelperUpdateBackingStoreWithTags:(id)arg1 changedBackingSources:(id)arg2 changedBackingCalendars:(id)arg3 changedBackingCalendarItems:(id)arg4 newBackingSources:(id)arg5 newBackingCalendars:(id)arg6 newBackingCalendarItems:(id)arg7 accountingReceiptGeneration:(long long)arg8 copiedBackingStore:(id)arg9 ;
-(id)_fetchFrozenEventsWithCalendarIdentifiers:(id)arg1 ;
-(id)_calendarItemPredicateWithCalendarIdentifiers:(id)arg1 ;
-(id)_predicateForBackingCalendars;
-(Class)_coreDataClassFromMask:(unsigned long long)arg1 ;
-(void)_addExdatesForItem:(id)arg1 toUpdates:(id)arg2 ;
-(id)principalFromSource:(id)arg1 ;
-(id)_fetchFrozenMasterOrDetachedEventsInRange:(id)arg1 ;
-(char)persistenceAvailable;
-(void)setPersistenceAvailable:(char)arg1 ;
-(void)setExternalChangeQueue:(CalAccumulatingQueue *)arg1 ;
-(id)backingStoreAvailableGroup;
-(id)init;
-(void)dealloc;
@end

