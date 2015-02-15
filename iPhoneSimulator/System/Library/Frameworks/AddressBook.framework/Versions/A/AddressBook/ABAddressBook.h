/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class NSMutableDictionary, NSTimer, ABPersistentStoreCoordinatorCache, ABAddressBookImpl;

@interface ABAddressBook : NSObject {

	id _reserved8;
	void* _reserved2;
	void* _reserved3;
	id _reserved4;
	NSMutableDictionary* _tableSchemas;
	NSMutableDictionary* _reserved5;
	void* _converterPort;
	NSTimer* _inactivityTimer;
	id _reserved;
	id _reserved1;
	void* _reserved6;
	void* _reserved7;
	struct {
		unsigned hasUnsavedChanges : 1;
		unsigned readOnly : 1;
		unsigned importMe : 1;
		unsigned needConversion : 1;
		unsigned cleanedUp : 1;
		unsigned importTips : 1;
		unsigned restoreFromMetaData : 1;
		unsigned prefsNeedSync : 1;
		unsigned waitingForReset : 1;
		unsigned enforcesConstraints : 1;
		unsigned tracksAllSources : 1;
		unsigned _reserved : 21;
	}  _flags;

}

@property (retain) ABPersistentStoreCoordinatorCache * persistentStoreCoordinatorCache; 
@property (nonatomic,retain) ABAddressBookImpl * impl;                                               //@synthesize reserved8=_reserved8 - In the implementation block
+(char)_firstNameShouldBeFirstForRecord:(id)arg1 ;
+(id)addressBook;
+(void)initialize_MailRecents;
+(void)_userDefaultsChanged:(id)arg1 ;
+(void)postDistributedNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(char)arg4 ;
+(char)_remotelySyncSourcesWithIdentifiers:(id)arg1 usingService:(CFStringRef)arg2 ;
+(id)addressBookDirectory;
+(char)isInert;
+(id)nts_SharedAddressBook;
+(void)runAddressBookManager;
+(id)nts_CreateSharedAddressBook;
+(id)addressBookWithDatabaseDirectory:(id)arg1 options:(id)arg2 ;
+(id)localAddressBook;
+(id)nts_AddressBookWithDatabaseDirectory:(id)arg1 ;
+(id)nts_AddressBookWithDatabaseDirectory:(id)arg1 options:(id)arg2 ;
+(id)nts_AddressBookWithDatabaseDirectory:(id)arg1 doInitialImports:(char)arg2 ;
+(char)nts_hasSharedInstance;
+(char)isPredicateSearchingEnabled;
+(char)isUsingDefaultAddressBookDirectory;
+(char)isUsingMailRecents;
+(void)_remotelySyncSourcesWithIdentifiers:(id)arg1 ;
+(char)shouldDisableDistributedChangeNotifications;
+(id)recordClassFromUniqueId:(id)arg1 ;
+(id)persistentUrlsForAccount:(id)arg1 ;
+(id)persistentUrlsForAccounts:(id)arg1 ;
+(id)temporaryTimeMachineStoreUrlForAccount:(id)arg1 ;
+(void)addStoreUrlsForAccount:(id)arg1 to:(id)arg2 ;
+(id)nts_persistentStoreForUrls:(id)arg1 inCoordinator:(id)arg2 ;
+(id)defaultAddressBookDirectory;
+(id)addressBookCoreDataDatabaseFile;
+(id)defaultCountryCode;
+(char)shouldCreateEmptyDatabase;
+(id)localizedDefaults;
+(BOOL)initializeFileLock;
+(id)addressBookSaveFile;
+(id)addressFormats;
+(void)setDefaultCountryCode:(id)arg1 ;
+(void)abGlobalAPILockInFile:(const char*)arg1 line:(unsigned long long)arg2 contextBlock:(/*^block*/id)arg3 togglingSuddenTermination:(char)arg4 ;
+(void)abGlobalAPIUnlockInFile:(const char*)arg1 line:(unsigned long long)arg2 contextBlock:(/*^block*/id)arg3 togglingSuddenTermination:(char)arg4 ;
+(id)sharedLocalAddressBook;
+(id)nts_AddressBook;
+(id)addressBookWithDatabaseDirectory:(id)arg1 ;
+(id)addressBookWithDatabaseDirectory:(id)arg1 doInitialImports:(char)arg2 ;
+(void)setAddressBookDirectory:(id)arg1 ;
+(id)addressBookCoreDataDatabaseFileName;
+(id)mailRecentsCoreDataDatabaseFileName;
+(id)mailRecentsCoreDataDatabaseFile;
+(id)addressBookTempImagesDirectory;
+(id)addressBookMetadataDirectory;
+(id)fileLock;
+(void)setIsInert:(char)arg1 ;
+(void)setShouldCreateEmptyDatabase:(char)arg1 ;
+(void)setShouldDisableSync:(char)arg1 ;
+(char)shouldDisableSync;
+(void)setShouldDisableDistributedChangeNotifications:(char)arg1 ;
+(void)abGlobalAPILockInFile:(const char*)arg1 line:(unsigned long long)arg2 contextBlock:(/*^block*/id)arg3 ;
+(void)abGlobalAPIUnlockInFile:(const char*)arg1 line:(unsigned long long)arg2 contextBlock:(/*^block*/id)arg3 ;
+(void)setIsUsingMailRecents:(char)arg1 ;
+(id)provisionalAddressBook;
+(char)forMessages_prefersNicknames;
+(id)emptyMemoryBackedAddressBookWithOptions:(id)arg1 ;
+(id)emptyDirectoryResultsAddressBook;
+(void)initialize;
+(long long)defaultNameOrdering;
+(id)sharedAddressBook;
+(id)emptyMemoryBackedAddressBook;
-(id)bestRecordMatchingFormattedAddress:(id)arg1 ;
-(id)formattedAddressFromDictionary:(id)arg1 ;
-(id)me;
-(id)notificationID;
-(void)abGlobalAPILockInFile:(const char*)arg1 line:(unsigned long long)arg2 ;
-(void)abGlobalAPIUnlockInFile:(const char*)arg1 line:(unsigned long long)arg2 ;
-(void)nts_SetNeedsToRestoreAddressBookFromMetaData:(char)arg1 ;
-(char)nts_RestoreFromMetaDataIfNeededAndTriggerSync:(char)arg1 ;
-(id)makeCommonNotificationUserInfoDictionary;
-(char)nts_RestoreFromMetaDataAndTriggerSync:(char)arg1 ;
-(id)nts_InitDefaultContactManager;
-(void)nts_DoInitialImports;
-(id)addressBookDirectory;
-(char)nts_RestoreFromMetaDataIfNeeded;
-(void)nts_ImportMacBuddyMeCard;
-(void)nts_ImportTipCards;
-(void)validateMetaData;
-(void)rebroadcastUserPictureDidChange;
-(id)addressBookMetaDataDirectory;
-(ABAddressBookImpl *)impl;
-(char)isProvisional;
-(id)nts_InitAddressBookWithDatabaseDirectory:(id)arg1 options:(id)arg2 ;
-(char)isSharedInstance;
-(long long)nts_SyncCount;
-(void)performFetchWithType:(id)arg1 recordClass:(Class)arg2 predicate:(id)arg3 takeLock:(char)arg4 block:(/*^block*/id)arg5 ;
-(id)nts_peopleMatchingSearchElement:(id)arg1 ;
-(id)nts_groupsMatchingSearchElement:(id)arg1 ;
-(id)nts_AllRecordsForClass:(Class)arg1 ;
-(id)recordsMatchingSearchElementNoHinting:(id)arg1 takeLock:(char)arg2 ;
-(id)recordsForClass:(Class)arg1 matchingPredicate:(id)arg2 prefetchingKeyPaths:(id)arg3 sortDescriptors:(id)arg4 takeLock:(char)arg5 ;
-(id)recordsMatchingSearchElement:(id)arg1 takeLock:(char)arg2 ;
-(char)isMemoryBacked;
-(char)isUsingDefaultAddressBookDirectory;
-(void)addChangedRecordsToNotificationInfo:(id)arg1 ;
-(id)sourcesAffectedByCurrentChanges;
-(void)logPeopleWereDeleted:(id)arg1 ;
-(void)updateNotificationInfo:(id)arg1 withRecords:(id)arg2 userInfoKey:(id)arg3 ignoreRecordsForKey:(id)arg4 ;
-(char)saveAndTriggerSync:(char)arg1 ;
-(char)nts_SaveWithFileLock:(char)arg1 triggerSync:(char)arg2 ;
-(char)nts_hasUnsavedChanges;
-(char)hasUnsavedMailRecentsChanges;
-(void)pruneEmptyRelationships;
-(char)_isReadOnlyIgnoresInert:(char)arg1 ;
-(void)nts_Cleanup;
-(id)nts_mailRecentsManagedObjectContext;
-(char)prepareNotificationInfo:(id)arg1 ;
-(void)postDatabaseWillSaveNotification:(id)arg1 ;
-(void)nts_SendAddressBookDidSaveNotificationsWithPublicUserInfo:(id)arg1 privateUserInfo:(id)arg2 privateTablesChanged:(char)arg3 ;
-(char)isSharedInstanceOrClone;
-(void)abGlobalMailRecentAPILockInFile:(const char*)arg1 line:(unsigned long long)arg2 ;
-(char)nts_hasUnsavedMailRecentsChanges;
-(void)abGlobalMailRecentAPIUnlockInFile:(const char*)arg1 line:(unsigned long long)arg2 ;
-(id)nts_Me;
-(void)nts_SetMe:(id)arg1 ;
-(id)nts_meInDefaultAccount;
-(id)nts_meInAllAccounts;
-(id)nts_meUnqiueIdsInDefaultAccount;
-(id)nts_firstExistingPersonForUniqueIds:(id)arg1 ;
-(id)nts_meUnqiueIdsInAllAccounts;
-(id)nts_infosForDefaultAccount;
-(id)nts_meUniqueIdsFromInfos:(id)arg1 ;
-(id)nts_infosForAllAccounts;
-(id)defaultAccount;
-(id)nts_AllRecordsForClass:(Class)arg1 forAccounts:(id)arg2 ;
-(id)nts_RecordForUniqueId:(id)arg1 ;
-(void)abRunWithGlobalAPILockInFile:(const char*)arg1 line:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)nts_SetMe:(id)arg1 account:(id)arg2 ;
-(char)nts_AddRecord:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(id)nts_PropertyTypesForRecordOfClass:(Class)arg1 ;
-(long long)nts_TypeOfProperty:(id)arg1 forTable:(id)arg2 ;
-(id)recordClassFromUniqueId:(id)arg1 ;
-(id)nts_CachedRecordForUniqueId:(id)arg1 ;
-(char)nts_record:(id)arg1 isInAccount:(id)arg2 ;
-(id)primaryPersistentStore;
-(id)recordsForUniqueIDs:(id)arg1 inAccount:(id)arg2 ;
-(id)nts_RecordsForUniqueIds:(id)arg1 inAccount:(id)arg2 ;
-(id)nts_CachedRecordForUniqueId:(id)arg1 inAccount:(id)arg2 ;
-(void)nts_SetCachedRecord:(id)arg1 forUniqueId:(id)arg2 ;
-(id)recordForUniqueId:(id)arg1 inAccount:(id)arg2 ;
-(id)nts_RecordForUniqueId:(id)arg1 inAccount:(id)arg2 ;
-(char)addRecords:(id)arg1 error:(id*)arg2 ;
-(char)addRecords:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(char)addRecord:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(id)nts_addRecords:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(void)partitionRecords:(id)arg1 intoRegularRecords:(id)arg2 mailRecentRecords:(id)arg3 ;
-(id)addRegularRecords:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(id)addMailRecentRecords:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(char)_isReadOnly;
-(char)removeRecord:(id)arg1 error:(id*)arg2 ;
-(char)recordDeniesRemove:(id)arg1 ;
-(id)nts_GroupsThatUseGroup:(id)arg1 ;
-(char)overridesReadOnly;
-(char)canRemoveRecord:(id)arg1 ;
-(id)nts_RemoveRecords:(id)arg1 ;
-(char)removeRecords:(id)arg1 error:(id*)arg2 ;
-(char)nts_RemoveRecord:(id)arg1 ;
-(id)orderGroupsForRemoval:(id)arg1 ;
-(id)nts_RemovePeople:(id)arg1 ;
-(id)nts_RemoveGroups:(id)arg1 ;
-(void)nts_ClearCachedRecordsByUniqueId;
-(void)clearCustomPropertyCaches;
-(void)_purgeAddressBookUsingPredicate:(id)arg1 ;
-(id)peopleForAccount:(id)arg1 ;
-(id)peopleForAccount:(id)arg1 prefetchingKeyPaths:(id)arg2 ;
-(id)nts_AllRecordsForClass:(Class)arg1 forAccounts:(id)arg2 prefetchingKeyPaths:(id)arg3 ;
-(unsigned long long)nts_CountOfRecordsForClass:(Class)arg1 forAccounts:(id)arg2 ;
-(id)nts_SubscribedPeople;
-(id)subscribedPeople;
-(id)groupsForAccount:(id)arg1 ;
-(id)_allGroupsForAccount:(id)arg1 prefetchingKeyPaths:(id)arg2 includeSmartGroups:(char)arg3 ;
-(id)_allGroupsForAccount:(id)arg1 prefetchingKeyPaths:(id)arg2 ;
-(id)relationshipKeypathsToFetchOnEntity:(id)arg1 ;
-(id)persistentStoreForAccount:(id)arg1 ;
-(void)markContactsAsImported:(id)arg1 ;
-(char)isRelatedManagedObjectContext:(id)arg1 ;
-(char)nts_isRelatedManagedObjectContext:(id)arg1 ;
-(void)nts_superMergeChangesFromContextDidSaveNotification:(id)arg1 ;
-(void)runWithDisabledUndoRegistration:(/*^block*/id)arg1 ;
-(id)allocationBacktrace;
-(id)peopleWithLinkIdentifier:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)peopleLinkedToPerson:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)nts_peopleWithLinkIdentifier:(id)arg1 sortDescriptors:(id)arg2 ;
-(unsigned long long)countOfRecordsForClass:(Class)arg1 matchingPredicate:(id)arg2 takeLock:(char)arg3 ;
-(void)setPersonWithPreferredName:(id)arg1 forLinkedPeople:(id)arg2 ;
-(void)setPersonWithPreferredPhoto:(id)arg1 forLinkedPeople:(id)arg2 ;
-(id)nts_peopleWithMOCState:(id)arg1 ;
-(id)nts_peopleUIDsWithMOCState:(id)arg1 ;
-(id)nts_contactsWithMOCState:(id)arg1 ;
-(char)tracksAllSources;
-(id)_unscopedVersion;
-(ABPersistentStoreCoordinatorCache *)persistentStoreCoordinatorCache;
-(void)setPersistentStoreCoordinatorCache:(ABPersistentStoreCoordinatorCache *)arg1 ;
-(id)addressBookCoreDataDatabaseFile;
-(id)persistentStoreForScopedAddressBook;
-(id)persistentStoreAtDefaultPath;
-(id)nts_persistentStoreForUrl:(id)arg1 ;
-(id)storeKeyForDatabaseDataType:(int)arg1 ;
-(id)managedObjectContextForDataType:(int)arg1 ;
-(void)myContextWillSave:(id)arg1 ;
-(void)myContextDidSave:(id)arg1 ;
-(id)defaultCountryCode;
-(char)hasUnfilteredAccess;
-(id)sanitizeDatabaseDirectory:(id)arg1 withOptions:(id)arg2 ;
-(void)abDidRevertFromBackupCompleteResetContextAndUnlock:(id)arg1 ;
-(void)abManagedObjectContextDidSave:(id)arg1 ;
-(void)registerForLocalDatabaseChangeNotifications;
-(void)registerForDistributedDatabaseChangeNotifications;
-(char)nts_OpenContactManagerWithMode:(long long)arg1 cacheSchema:(char)arg2 ;
-(id)localizedDefaults;
-(id)nts_InitializeDatabase;
-(void)localDatabaseChangedExternally:(id)arg1 ;
-(void)willRestoreFromMetadata:(id)arg1 ;
-(void)distributedDatabaseChangedExternally:(id)arg1 ;
-(char)registeredForChangeNotifications;
-(id)addressBookDatabaseFile;
-(id)addressBookSaveFile;
-(char)nts_DoesPropertyExist:(id)arg1 forClass:(Class)arg2 ;
-(id)notificationNameForRebroadcast:(id)arg1 ;
-(char)shouldRebroadcast:(id)arg1 ;
-(void)commonDatabaseChangedExternally:(id)arg1 ;
-(char)shouldResetDatabase:(id)arg1 ;
-(char)anyRecordChanged:(id)arg1 ;
-(char)notificationIsAccountRemoved:(id)arg1 ;
-(void)refreshRecordsWithUserInfo:(id)arg1 ;
-(void)resetDatabaseAtPath:(id)arg1 ;
-(void)rebroadcastDatabaseChangedExternally:(id)arg1 ;
-(void)refreshRecordsWithUniqueIds:(id)arg1 ;
-(void)nts_ClearCachedRecordsForUniqueIds:(id)arg1 ;
-(void)setDefaultCountryCode:(id)arg1 ;
-(id)_formattedAddressFromDictionary:(id)arg1 includeName:(char)arg2 includeCompany:(char)arg3 order:(id*)arg4 ;
-(id)combinePeople:(id)arg1 error:(id*)arg2 ;
-(char)writeChangesToServer;
-(void)setWriteChangesToServer:(char)arg1 ;
-(id)smartGroups;
-(id)nts_SmartGroups;
-(char)isDirectoryResults;
-(id)accountRepository;
-(void)_linkRecordsWithFactory:(id)arg1 ;
-(id)mailRecentsCoreDataDatabaseFile;
-(void)setSyncCount:(long long)arg1 ;
-(long long)syncCount;
-(id)recordsMatchingSearchElementNoHinting:(id)arg1 ;
-(id)nts_UniqueIdsForRecordsInSet:(id)arg1 ;
-(char)saveAndReturnError:(id*)arg1 ;
-(char)nts_SaveWithFileLock:(char)arg1 ;
-(id)allMeUniqueIds;
-(id)meUniqueId;
-(id)propertyTypesForRecordOfClass:(Class)arg1 ;
-(long long)typeOfProperty:(id)arg1 forTable:(id)arg2 ;
-(void)nts_ClearCachedRecordForUniqueId:(id)arg1 ;
-(id)affectedStoreForAccount:(id)arg1 ;
-(unsigned long long)countOfRecords;
-(id)personForUniqueId:(id)arg1 ;
-(id)peopleForUniqueIDs:(id)arg1 ;
-(id)groupForUniqueId:(id)arg1 ;
-(char)addRecord:(id)arg1 error:(id*)arg2 ;
-(char)addRecord:(id)arg1 account:(id)arg2 ;
-(char)nts_AddRecord:(id)arg1 ;
-(void)_purgeAddressBook;
-(id)peoplePrefetchingParentGroupsAndCustomProperties;
-(unsigned long long)peopleCountForAccount:(id)arg1 ;
-(id)nts_People;
-(unsigned long long)peopleCount;
-(unsigned long long)subscribedPeopleCount;
-(id)subscribedGroups;
-(id)peopleAtRemoteLocation:(id)arg1 ;
-(id)mailRecents;
-(id)logs;
-(id)_allGroups;
-(id)_allGroupsPrefetchingParentGroupsAndCustomProperties;
-(id)_groupsOnly;
-(unsigned long long)_groupsOnlyCountForAccount:(id)arg1 ;
-(void)preheatPeople:(id)arg1 inAccount:(id)arg2 ;
-(id)peopleForWritableAccounts;
-(void)fetchToManysWithPeople:(id)arg1 ;
-(id)importPeople:(id)arg1 intoAccount:(id)arg2 createNewUIDs:(char)arg3 ;
-(void)applyChangesToAccount:(id)arg1 addedPeople:(id)arg2 deletedPeople:(id)arg3 updatedPeople:(id)arg4 group:(id)arg5 mergedIntoGroup:(id)arg6 shouldSave:(char)arg7 ;
-(void)lockManagedObjectContextUntilDealloc;
-(id)groupsAtRemoteLocation:(id)arg1 ;
-(id)persistentStoresForAccount:(id)arg1 ;
-(char)isAffectedByContextDidSaveNotification:(id)arg1 ;
-(void)superMergeChangesFromContextDidSaveNotification:(id)arg1 ;
-(char)hasUserDataInAccount:(id)arg1 ;
-(id)mergeAndLinkPeople:(id)arg1 ;
-(id)peopleIdsLinkedToPerson:(id)arg1 ;
-(unsigned long long)countOfPeopleWithLinkIdentifier:(id)arg1 ;
-(void)linkPerson:(id)arg1 toPerson:(id)arg2 ;
-(void)unlinkPerson:(id)arg1 ;
-(id)personWithPreferredNameForLink:(id)arg1 ;
-(void)setPersonWithPreferredName:(id)arg1 forLinkWithIdentifier:(id)arg2 ;
-(id)personWithPreferredPhotoForLink:(id)arg1 ;
-(void)setPersonWithPreferredPhoto:(id)arg1 forLinkWithIdentifier:(id)arg2 ;
-(id)nts_insertedPeople;
-(id)nts_updatedPeople;
-(id)nts_deletedPeople;
-(id)nts_linkIDsOfPeopleWithMOCState:(id)arg1 ;
-(id)_unscopedVersionOrSelf;
-(id)addressBookImagesDirectory;
-(void)nts_assignDatabaseImpl:(id)arg1 toStoreAtUrl:(id)arg2 ;
-(void)setManagedObjectContext:(id)arg1 forDatabaseType:(int)arg2 takingOwnership:(char)arg3 ;
-(void)markABCoreDataImportCompleted;
-(char)isABCoreDataImportCompleted;
-(id)nts_InitAddressBookWithDatabaseDirectory:(id)arg1 ;
-(char)doesPropertyExist:(id)arg1 forClass:(Class)arg2 ;
-(id)searchIndexForRecordsMatching:(id)arg1 selectedGroup:(id)arg2 ;
-(void)nts_syncGroupSmartGroupPropertiesWithLock:(char)arg1 ;
-(void)prefetchDataForRecords:(id)arg1 ;
-(id)groupsThatUseGroup:(id)arg1 ;
-(id)syncAnchors;
-(void)setSyncAnchorsFromString:(id)arg1 ;
-(char)isSyncAnchorUnsynced;
-(id)assistantValidity;
-(void)setAssistantValidity:(id)arg1 ;
-(long long)assistantSyncAnchor;
-(void)setAssistantSyncAnchor:(long long)arg1 ;
-(id)nts_managedObjectContextForMailRecentsCoreDataSPI;
-(void)_performImplicitLinking;
-(void)setImpl:(ABAddressBookImpl *)arg1 ;
-(id)makeManagedObjectContext;
-(id)nts_managedObjectContextWithStoreDescription:(id)arg1 databasePath:(id)arg2 loadFailure:(char*)arg3 ;
-(void)abGlobalAPILockInFile:(const char*)arg1 line:(unsigned long long)arg2 togglingSuddenTermination:(char)arg3 ;
-(char)abGlobalAPITryLockInFile:(const char*)arg1 line:(unsigned long long)arg2 togglingSuddenTermination:(char)arg3 ;
-(void)abGlobalAPIUnlockInFile:(const char*)arg1 line:(unsigned long long)arg2 togglingSuddenTermination:(char)arg3 ;
-(id)customPropertyDescriptionsWithRecordType:(id)arg1 persistentStore:(id)arg2 ;
-(char)set:(id)arg1 containsEntity:(id)arg2 ;
-(id)persistentStoreForSourceIdentifier:(id)arg1 ;
-(char)abGlobalAPITryLockInFile:(const char*)arg1 line:(unsigned long long)arg2 ;
-(id)fetchAllRecordsForClass:(Class)arg1 ;
-(id)customPropertiesAndTypesWithRecordType:(id)arg1 persistentStore:(id)arg2 ;
-(id)customPropertyWithName:(id)arg1 recordType:(id)arg2 persistentStore:(id)arg3 ;
-(id)customPropertyDescriptionWithName:(id)arg1 recordType:(id)arg2 persistentStore:(id)arg3 ;
-(void)resetManagedObjectContext;
-(void)setNonRetainedCachedRecord:(id)arg1 forKey:(id)arg2 ;
-(id)nonRetainedCachedRecordForKey:(id)arg1 ;
-(id)mailRecentForEmail:(id)arg1 ;
-(id)mailRecentsMatching:(id)arg1 ;
-(id)uncachedImageReferences;
-(id)photoFutureForPersonWithUniqueId:(id)arg1 ;
-(id)availableLabelsForProperty:(id)arg1 person:(id)arg2 ;
-(char)enforcesConstraints;
-(id)subscriptions;
-(id)subscriptionsWithAddressBook:(id)arg1 ;
-(id)allGroup;
-(id)dbCache;
-(id)parallelUniverseAddressBook;
-(id)lastImportGroup;
-(id)nts_dbCache;
-(void)nts_SubscriptionListChanged;
-(id)clonedAddressBook;
-(id)allUniqueIdsWithModificationDates;
-(id)snapshotDate;
-(id)allUniqueIds;
-(id)deltasSinceAddressBook:(id)arg1 ;
-(id)nts_ContactsMatchingNormalizedEmailAddress:(id)arg1 inSubscribedContent:(char)arg2 context:(id)arg3 ;
-(id)nts_GroupsMatchingNormalizedName:(id)arg1 inSubscribedContent:(char)arg2 context:(id)arg3 ;
-(id)recordsMatchingMailAddressWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 inSubscribedContent:(char)arg5 ;
-(void)setManagedObjectContext:(id)arg1 takingOwnership:(char)arg2 ;
-(char)isAggregate;
-(id)clonedAddressBookWithOptions:(id)arg1 ;
-(id)massageOptionsForClone:(id)arg1 ;
-(void)setEnforcesConstraints:(char)arg1 ;
-(id)_constraintsForRecord:(id)arg1 ;
-(char)isReadOnlyRecord:(id)arg1 ;
-(id)availablePropertiesForPerson:(id)arg1 delegate:(id)arg2 ;
-(id)_availablePropertiesForContact:(id)arg1 delegate:(id)arg2 constraints:(id)arg3 ;
-(id)availablePropertiesForContact:(id)arg1 delegate:(id)arg2 ;
-(id)_constraintsForRecordClass:(Class)arg1 account:(id)arg2 ;
-(id)availableLabelsForProperty:(id)arg1 person:(id)arg2 delegate:(id)arg3 ;
-(id)_availableLabelsForProperty:(id)arg1 contact:(id)arg2 delegate:(id)arg3 constraints:(id)arg4 ;
-(id)availableLabelsForProperty:(id)arg1 contact:(id)arg2 delegate:(id)arg3 ;
-(id)activeLabelsForProperty:(id)arg1 person:(id)arg2 delegate:(id)arg3 ;
-(id)activeLabelsForProperty:(id)arg1 contact:(id)arg2 delegate:(id)arg3 ;
-(id)genericRepresentationOfLabel:(id)arg1 forProperty:(id)arg2 record:(id)arg3 ;
-(id)validPropertiesForRecord:(id)arg1 ;
-(id)availablePropertiesForPerson:(id)arg1 ;
-(id)validLabelsForProperty:(id)arg1 record:(id)arg2 source:(id)arg3 ;
-(id)activeLabelsForProperty:(id)arg1 person:(id)arg2 ;
-(id)allSmartGroup;
-(id)extravCardInformationForRecordsWithIdentifiers:(id)arg1 ;
-(/*^block*/id)personToExtraInfo;
-(id)_peopleMatchingPhoneNumber:(id)arg1 countryCode:(id)arg2 ;
-(char)addRecord:(id)arg1 ;
-(char)hasUnsavedChanges;
-(char)removeRecord:(id)arg1 ;
-(id)groups;
-(void)_vacuum;
-(void)setMe:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)deactivate;
-(void)setManagedObjectContext:(id)arg1 ;
-(id)undoManager;
-(void)disableUndoRegistration;
-(void)enableUndoRegistration;
-(void)setUndoManager:(id)arg1 ;
-(long long)version;
-(id)managedObjectContext;
-(id)persistentStoreCoordinator;
-(id)recordsMatchingSearchElement:(id)arg1 ;
-(long long)defaultNameOrdering;
-(char)save;
-(id)recordForUniqueId:(id)arg1 ;
-(id)recordsForUniqueIDs:(id)arg1 ;
-(id)peopleWithLinkIdentifier:(id)arg1 ;
-(id)people;
@end

