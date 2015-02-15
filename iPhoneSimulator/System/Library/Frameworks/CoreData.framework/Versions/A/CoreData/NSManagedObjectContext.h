/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:14 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCoding.h>
#import <CoreData/NSLocking.h>

@class NSMutableSet, NSString, NSPersistentStoreCoordinator, NSUndoManager, NSMutableDictionary, NSSet;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {

	id _queueOwner;
	void* _dispatchQueue;
	void* _reserved1;
	int _spinLock;
	id _parentObjectStore;
	struct {
		unsigned _registeredForCallback : 1;
		unsigned _propagatesDeletesAtEndOfEvent : 1;
		unsigned _exhaustiveValidation : 1;
		unsigned _processingChanges : 1;
		unsigned _useCommittedSnapshot : 1;
		unsigned _registeredUndoTransactionID : 1;
		unsigned _retainsAllRegisteredObjects : 1;
		unsigned _savingInProgress : 1;
		unsigned _wasDisposed : 1;
		unsigned _unprocessedChangesPending : 1;
		unsigned _isDirty : 1;
		unsigned _ignoreUndoCheckpoints : 1;
		unsigned _propagatingDeletes : 1;
		unsigned _isNSEditorEditing : 1;
		unsigned _isMainThreadBlessed : 1;
		unsigned _isImportContext : 1;
		unsigned _preflightSaveInProgress : 1;
		unsigned _disableDiscardEditing : 1;
		unsigned _isParentStoreContext : 1;
		unsigned _postSaveNotifications : 1;
		unsigned _isMerging : 1;
		unsigned _concurrencyType : 1;
		unsigned _reservedFlags : 10;
	}  _flags;
	NSMutableSet* _unprocessedChanges;
	NSMutableSet* _unprocessedDeletes;
	NSMutableSet* _unprocessedInserts;
	NSMutableSet* _insertedObjects;
	NSMutableSet* _deletedObjects;
	NSMutableSet* _changedObjects;
	NSMutableSet* _lockedObjects;
	NSMutableSet* _refreshedObjects;
	id _infoByGID;
	id* _cachedObsInfoByEntity;
	short _undoTransactionID;
	id _lock;
	long long _lockCount;
	long long _objectStoreLockCount;
	double _fetchTimestamp;
	id _reserved2;
	id _referenceQueue;
	id _reserved3;
	id _reserved4;
	int _cd_rc;
	int _ignoreChangeNotification;
	id _reserved6;
	NSString* _contextLabel;
	id* _additionalPrivateIvars;
	NSString* _name;

}

@property (retain) NSPersistentStoreCoordinator * persistentStoreCoordinator; 
@property (retain) NSManagedObjectContext * parentContext; 
@property (copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager; 
@property (nonatomic,readonly) char hasChanges; 
@property (nonatomic,readonly) NSMutableDictionary * userInfo; 
@property (readonly) unsigned long long concurrencyType; 
@property (nonatomic,readonly) NSSet * insertedObjects; 
@property (nonatomic,readonly) NSSet * updatedObjects; 
@property (nonatomic,readonly) NSSet * deletedObjects; 
@property (nonatomic,readonly) NSSet * registeredObjects; 
@property (assign,nonatomic) char propagatesDeletesAtEndOfEvent; 
@property (assign,nonatomic) char retainsRegisteredObjects; 
@property (assign) double stalenessInterval; 
@property (retain) id mergePolicy; 
+(char)_handleError:(id)arg1 withError:(id*)arg2 ;
+(void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2 ;
+(void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+(void)initialize;
+(char)accessInstanceVariablesDirectly;
-(void)logDetailedValidationError:(id)arg1 ;
-(void)abPruneEmptyRelationships;
-(void)abPurgeManagedObjectContextUsingPredicate:(id)arg1 ;
-(void)abClearLastImportGroup;
-(char)abHasCommonStoreWithContext:(id)arg1 ;
-(void)abSuperMergeChangesFromContextDidSaveNotification:(id)arg1 ;
-(id)abCreateObjectWithEntityName:(id)arg1 ;
-(void)abPurgeManagedObjectContext;
-(char)abUsesStoreWithURL:(id)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(void)_registerForNotificationsWithCoordinator:(id)arg1 ;
-(void)_setPersistentStoreCoordinator:(id)arg1 ;
-(void)_setRetainsRegisteredObjects:(char)arg1 ;
-(void)_forgetObject:(id)arg1 propagateToObjectStore:(char)arg2 removeFromRegistry:(char)arg3 ;
-(void)_resetAllChanges;
-(void)lockObjectStore;
-(id)_parentStore;
-(void)unlockObjectStore;
-(void)_postObjectsDidChangeNotificationWithUserInfo:(id)arg1 ;
-(void)_processReferenceQueue:(char)arg1 ;
-(void)_unregisterForNotifications;
-(void)_dispose:(char)arg1 ;
-(void)_dealloc__;
-(void)_stopObservingUndoManagerNotifications;
-(void)_startObservingUndoManagerNotifications;
-(char)_processRecentChanges:(id*)arg1 ;
-(id)_retainedRegisteredObjects;
-(char)_ignoringChangeNotifications;
-(void)_insertObjectWithGlobalID:(id)arg1 globalID:(id)arg2 ;
-(void)_registerClearStateWithUndoManager;
-(void)_establishEventSnapshotsForObject:(id)arg1 ;
-(void)_enqueueEndOfEventNotification;
-(char)_handleError:(id)arg1 withError:(id*)arg2 ;
-(char)_parentObtainPermanentIDsForObjects:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(char)_prepareForPushChanges:(id*)arg1 ;
-(void)_disableChangeNotifications;
-(id)_newSaveRequestForCurrentState;
-(void)_informParentStore:(id)arg1 ofInterestInObjects:(id)arg2 ;
-(id)mergePolicy;
-(void)_thereIsNoSadnessLikeTheDeathOfOptimism;
-(char)_handleOptimisticLockingError:(id)arg1 withError:(id*)arg2 ;
-(void)_enableChangeNotifications;
-(void)_didSaveChanges;
-(id)_retainedObjectWithID:(id)arg1 ;
-(id)_retainedObjectWithID:(id)arg1 error:(id*)arg2 ;
-(void)_setStalenessInterval:(double)arg1 ;
-(id)_executeAsynchronousFetchRequest:(id)arg1 ;
-(char)_attemptCoalesceChangesForFetch;
-(unsigned long long)_countWithNoChangesForRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_countWithMergedChangesForRequest:(id)arg1 possibleChanges:(id)arg2 possibleDeletes:(id)arg3 error:(id*)arg4 ;
-(id)_createStoreFetchRequestForFetchRequest:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(char)propagatesDeletesAtEndOfEvent;
-(void)setPropagatesDeletesAtEndOfEvent:(char)arg1 ;
-(id)_committedSnapshotForObject:(id)arg1 ;
-(void)_refaultObject:(id)arg1 globalID:(id)arg2 boolean:(char)arg3 ;
-(void)_prepareUnprocessedDeletionAfterRefresh:(id)arg1 ;
-(id)_initWithParentObjectStore:(unsigned long long)arg1 ;
-(void)_forceRemoveFromDeletedObjects:(id)arg1 ;
-(char)_mergeRefreshObject:(id)arg1 mergeChanges:(char)arg2 withPersistentSnapshot:(id)arg3 ;
-(void)_mergeRefreshEpilogueForObject:(id)arg1 mergeChanges:(char)arg2 ;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(char)arg2 ;
-(void)_setParentContext:(id)arg1 ;
-(void)setRetainsRegisteredObjects:(char)arg1 ;
-(char)retainsRegisteredObjects;
-(void)assignObject:(id)arg1 toPersistentStore:(id)arg2 ;
-(NSSet *)registeredObjects;
-(void)_youcreatedanNSManagedObjectContextOnthemainthreadandillegallypassedittoabackgroundthread;
-(char)_checkObjectForExistenceAndCacheRow:(id)arg1 ;
-(id)executeRequest:(id)arg1 error:(id*)arg2 ;
-(void)rollback;
-(void)detectConflictsForObject:(id)arg1 ;
-(id)_newUnchangedLockedObjects;
-(void)_registerObject:(id)arg1 withID:(id)arg2 ;
-(void)_informParentStore:(id)arg1 noLongerInterestedInObjects:(id)arg2 ;
-(void)_performCoordinatorActionAndWait:(/*^block*/id)arg1 ;
-(void)_disposeObjects:(id*)arg1 count:(unsigned long long)arg2 notifyParent:(char)arg3 ;
-(void)_clearUnprocessedUpdates;
-(void)_clearUpdates;
-(void)_clearUnprocessedInsertions;
-(void)_clearInsertions;
-(void)_clearUnprocessedDeletions;
-(void)_clearDeletions;
-(void)_clearLockedObjects;
-(void)_clearRefreshedObjects;
-(void)_incrementUndoTransactionID;
-(id)_globalIDForObject:(id)arg1 ;
-(void)_forceRegisterLostFault:(id)arg1 ;
-(void)_clearOriginalSnapshotForObject:(id)arg1 ;
-(char)_validateObjects:(id)arg1 forOperation:(unsigned)arg2 error:(id*)arg3 exhaustive:(char)arg4 forSave:(char)arg5 ;
-(void)_clearOriginalSnapshotAndInitializeRec:(id)arg1 ;
-(void)_forgetObject:(id)arg1 propagateToObjectStore:(char)arg2 ;
-(char)_hasIDMappings;
-(id)_mappedForParentStoreID:(id)arg1 ;
-(void)_changeIDsForManagedObjects:(id)arg1 toIDs:(id)arg2 ;
-(id)_globalIDsForObjects:(id)arg1 ;
-(id)_retainedObjectWithID:(id)arg1 optionalHandler:(id)arg2 withInlineStorage:(char)arg3 ;
-(unsigned)_batchRetainedObjects:(id*)arg1 forCount:(unsigned)arg2 withIDs:(id*)arg3 optionalHandler:(id)arg4 withInlineStorage:(char)arg5 ;
-(char)_validateDeletesUsingTable:(id)arg1 withError:(id*)arg2 ;
-(char)_validateChangesForSave:(id*)arg1 ;
-(void)_informParentStoreOfInterestInObjectIDs:(id)arg1 ;
-(void)_informParentStoreNoLongerInterestedInObjectIDs:(id)arg1 ;
-(id)_retainedObjectsFromRemovedStore:(id)arg1 ;
-(char)_stopsValidationAfterFirstError;
-(void)_setStopsValidationAfterFirstError:(char)arg1 ;
-(id)_debuggingOnly_localObjectForGlobalID:(id)arg1 ;
-(id)_currentEventSnapshotForObject:(id)arg1 ;
-(void)_growRegistrationCollectionForEntitySlot:(unsigned)arg1 toSize:(unsigned long long)arg2 ;
-(void)_setIsUbiquityImportContext:(char)arg1 ;
-(char)_isImportContext;
-(char)_isPreflightSaveInProgress;
-(void)_setPostSaveNotifications:(char)arg1 ;
-(char)_postSaveNotifications;
-(void)_persistentStoreDidUpdateAdditionalRowsWithNewVersions:(id)arg1 ;
-(void)_undoInsertions:(id)arg1 ;
-(void)_registerUndoForOperation:(SEL)arg1 withObjects:(id)arg2 withExtraArguments:(id)arg3 ;
-(void)_undoDeletionsMovedToUpdates:(id)arg1 ;
-(void)_createAndPostChangeNotification:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 withRefreshes:(id)arg4 ;
-(void)_undoDeletions:(id)arg1 ;
-(void)_undoUpdates:(id)arg1 ;
-(void)_clearChangedThisTransaction:(id)arg1 ;
-(void)_postRefreshedObjectsNotificationAndClearList;
-(void)_updateUnprocessedOwnDestinations:(id)arg1 ;
-(char)_propagatePendingDeletesAtEndOfEvent:(id*)arg1 ;
-(id)_processPendingDeletions:(id)arg1 withInsertions:(id)arg2 withUpdates:(id)arg3 withNewlyForgottenList:(id)arg4 withRemovedChangedObjects:(id)arg5 ;
-(id)_processPendingInsertions:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 ;
-(id)_processPendingUpdates:(id)arg1 ;
-(void)_registerUndoForModifiedObjects:(id)arg1 ;
-(void)_registerUndoForInsertedObjects:(id)arg1 ;
-(void)_registerUndoForDeletedObjects:(id)arg1 withDeletedChanges:(id)arg2 ;
-(void)_updateUndoTransactionForThisEvent:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 ;
-(void)_processRecentlyForgottenObjects:(id)arg1 ;
-(char)_processDeletedObjects:(id*)arg1 ;
-(void)_propagateDeletesUsingTable:(id)arg1 ;
-(void)_forceInsertionForObject:(id)arg1 ;
-(void)_undoManagerCheckpoint:(id)arg1 ;
-(void)_noop:(id)arg1 ;
-(void)_processObjectStoreChanges:(id)arg1 ;
-(void)_processNotificationQueue;
-(void)_storeConfigurationChanged:(id)arg1 ;
-(void)_sendOrEnqueueNotification:(id)arg1 selector:(SEL)arg2 ;
-(void)_processChangedStoreConfigurationNotification:(id)arg1 ;
-(void)_objectsChangedInStore:(id)arg1 ;
-(id)_implicitObservationInfoForEntity:(id)arg1 forResultingClass:(Class*)arg2 ;
-(void)_managedObjectContextEditor:(id)arg1 didCommit:(char)arg2 contextInfo:(SCD_Struct_NS1*)arg3 ;
-(void)_sendCommitEditingSelectorToTarget:(id)arg1 sender:(id)arg2 selector:(SEL)arg3 flag:(char)arg4 contextInfo:(void*)arg5 delayed:(char)arg6 ;
-(id)_delegate;
-(id)_orderedSetWithResultsFromFetchRequest:(id)arg1 ;
-(void)_stopConflictDetectionForObject:(id)arg1 ;
-(void)_mergeChangesFromRemoteContextSave:(id)arg1 ;
-(void)handlePeerContextDidSaveNotification:(id)arg1 ;
-(void)_copyChildObject:(id)arg1 toParentObject:(id)arg2 fromChildContext:(id)arg3 ;
-(id)_parentObjectsForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)_parentProcessSaveRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)retainCount;
-(NSString *)name;
-(NSString *)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)lock;
-(void)unlock;
-(void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(char)commitEditing;
-(void)discardEditing;
-(void)deleteObject:(id)arg1 ;
-(char)isEditing;
-(void)reset;
-(NSUndoManager *)undoManager;
-(void)undo;
-(void)redo;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)objectDidBeginEditing:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(void)_processEndOfEventNotification:(id)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)objectWithID:(id)arg1 ;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(char)hasChanges;
-(char)_disableDiscardEditing;
-(void)_setDisableDiscardEditing:(char)arg1 ;
-(char)save:(id*)arg1 ;
-(char)tryLock;
-(NSManagedObjectContext *)parentContext;
-(void)mergeChangesFromContextDidSaveNotification:(id)arg1 ;
-(id)objectRegisteredForID:(id)arg1 ;
-(void)refreshObject:(id)arg1 mergeChanges:(char)arg2 ;
-(void)processPendingChanges;
-(void)insertObject:(id)arg1 ;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(char)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(NSSet *)updatedObjects;
-(NSSet *)insertedObjects;
-(NSSet *)deletedObjects;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(double)stalenessInterval;
-(void)setStalenessInterval:(double)arg1 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 ;
-(void)setMergePolicy:(id)arg1 ;
-(unsigned long long)concurrencyType;
-(void)setParentContext:(NSManagedObjectContext *)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)_setUndoManager:(id)arg1 ;
@end

