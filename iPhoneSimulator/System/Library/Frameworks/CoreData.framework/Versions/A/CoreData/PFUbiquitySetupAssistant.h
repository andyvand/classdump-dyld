/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObjectNSCopyingNSCoding;
#import <CoreData/CoreData-Structs.h>
@class NSMutableDictionary, NSPersistentStoreCoordinator, NSPersistentStore, NSString, NSURL, PFUbiquityKnowledgeVector, PFUbiquityLocation, _PFUbiquityStack, PFUbiquityStoreMetadata, PFUbiquityPeerState, PFUbiquityBaseline, PFUbiquityPeerReceipt, PFUbiquityContainerIdentifier, PFUbiquityMigrationAssistant, PFUbiquityMigrationManager, PFUbiquitySwitchboardEntry, NSMutableSet, NSMutableArray, NSError, NSDictionary;

@interface PFUbiquitySetupAssistant : NSObject {

	NSMutableDictionary* _options;
	NSPersistentStoreCoordinator* _psc;
	NSPersistentStore* _store;
	NSString* _storeType;
	NSURL* _storeURL;
	NSURL* _actualStoreFileURL;
	NSMutableDictionary* _storeMetadataDict;
	char _needsMetadataWrite;
	PFUbiquityKnowledgeVector* _storeKV;
	char _ubiquityEnabled;
	id<NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;
	NSURL* _ubiquityRootURL;
	NSString* _ubiquityRootSubpath;
	NSString* _ubiquityName;
	NSString* _ubiquityContainerIdentifier;
	NSString* _localPeerID;
	NSString* _modelVersionHash;
	NSString* _previousModelVersionHash;
	PFUbiquityLocation* _ubiquityRootLocation;
	PFUbiquityLocation* _localRootLocation;
	_PFUbiquityStack* _stack;
	PFUbiquityStoreMetadata* _storeMetadata;
	PFUbiquityPeerState* _localPeerState;
	PFUbiquityKnowledgeVector* _metaKV;
	PFUbiquityBaseline* _baseline;
	char _baselineFileExistsInCloud;
	char _hasUploadingBaseline;
	char _monitorUploadingBaselineAsync;
	char _didBaselineCopy;
	PFUbiquityKnowledgeVector* _baselineKV;
	char _votedOffIsland;
	char _reapUbiquitousLogs;
	char _respondToBaselineRoll;
	char _storeFileExists;
	char _storeFileIsReadOnly;
	char _hasStoreMetadataFile;
	char _hasStoreMetadataEntry;
	char _hasContainerUUID;
	char _hasContainerUUIDInStore;
	char _needsMetadataRecovery;
	PFUbiquityPeerReceipt* _localPeerReceipt;
	PFUbiquityKnowledgeVector* _receiptKV;
	PFUbiquityContainerIdentifier* _containerIdentifier;
	NSString* _preStoreContainerUUID;
	char _usedExistingUUIDMapping;
	char _hasLocalTransactionLogs;
	char _hasMigrationOptions;
	char _didMigrateBaseline;
	char _storeWasMigrated;
	PFUbiquityMigrationAssistant* _migrationAssistant;
	PFUbiquityMigrationManager* _migrationManager;
	char _replayLogsSynchronously;
	char _useLocalAccount;
	char _seedStore;
	NSURL* _seedStoreURL;
	char _haveExistingUUIDMappings;
	char _abortSetup;
	PFUbiquitySwitchboardEntry* _entry;
	char _gotExportNotification;
	int _sideLoadLock;
	NSMutableSet* _logLocationsExportedDuringSideLoad;
	NSMutableDictionary* _gidToRid;
	NSMutableDictionary* _entityNameToGidSet;
	dispatch_semaphore_sRef _initialSyncSemaphore;
	int _initialSyncComplete;
	NSMutableArray* _queryLocations;
	char _notifyAboutSetupProgress;
	long long _numSetupTries;
	unsigned long long _retryDelaySec;
	char _failSetup;
	NSError* _failSetupError;
	char _gotAccountChange;
	char _cacheFilePresenterForUbiquityRoot;

}

@property (nonatomic,readonly) NSDictionary * options;                                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) char ubiquityEnabled;                                             //@synthesize ubiquityEnabled=_ubiquityEnabled - In the implementation block
@property (nonatomic,readonly) char needsMetadataRecovery;                                       //@synthesize needsMetadataRecovery=_needsMetadataRecovery - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                           //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSURL * ubiquityRootURL;                                          //@synthesize ubiquityRootURL=_ubiquityRootURL - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                        //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * localRootLocation;                           //@synthesize localRootLocation=_localRootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityContainerIdentifier * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) char useLocalAccount;                                             //@synthesize useLocalAccount=_useLocalAccount - In the implementation block
@property (assign,nonatomic) char storeWasMigrated;                                              //@synthesize storeWasMigrated=_storeWasMigrated - In the implementation block
@property (nonatomic,readonly) NSURL * actualStoreFileURL;                                       //@synthesize actualStoreFileURL=_actualStoreFileURL - In the implementation block
@property (assign,nonatomic) char abortSetup;                                                    //@synthesize abortSetup=_abortSetup - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * storeKV;                              //@synthesize storeKV=_storeKV - In the implementation block
@property (assign,nonatomic) unsigned long long retryDelaySec;                                   //@synthesize retryDelaySec=_retryDelaySec - In the implementation block
@property (assign,nonatomic) char cacheFilePresenterForUbiquityRoot;                             //@synthesize cacheFilePresenterForUbiquityRoot=_cacheFilePresenterForUbiquityRoot - In the implementation block
@property (assign,nonatomic) char failSetup;                                                     //@synthesize failSetup=_failSetup - In the implementation block
@property (nonatomic,retain) NSError * failSetupError;                                           //@synthesize failSetupError=_failSetupError - In the implementation block
+(void)removeUbiquityMetadataFromStore:(id)arg1 ;
+(id)findContainerIDForToken:(id)arg1 storeName:(id)arg2 haveExistingMappings:(char*)arg3 ;
+(id)createDefaultLocalPeerID;
+(id)createActualStoreURLForStoreURL:(id)arg1 localPeerID:(id)arg2 containerIdentifier:(id)arg3 andStoreName:(id)arg4 ;
+(void)setContainerIdentifierUUID:(id)arg1 forIdentityToken:(id)arg2 forStoreName:(id)arg3 ;
+(char)doBasicSanityCheckForUbiquityRootURL:(id)arg1 withError:(id*)arg2 ;
+(id)createBaselineFromMostRecentLocation:(id)arg1 localPeerID:(id)arg2 error:(id*)arg3 ;
+(id)generateMachineUUIDString;
+(char)ubiquityMetadataTablesPresentInStore:(id)arg1 ;
+(void)cleanUserDefaultsForStore:(id)arg1 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 andStoreOptions:(id)arg2 forPersistentStoreOfType:(id)arg3 atURL:(id)arg4 ;
-(char)validateOptionsWithError:(id*)arg1 ;
-(char)ubiquityEnabled;
-(NSURL *)actualStoreFileURL;
-(void)setStoreWasMigrated:(char)arg1 ;
-(char)performCoordinatorPostStoreSetup:(id)arg1 error:(id*)arg2 ;
-(void)setCacheFilePresenterForUbiquityRoot:(char)arg1 ;
-(char)canReadFromUbiquityRootLocation:(id*)arg1 ;
-(NSURL *)ubiquityRootURL;
-(NSString *)localPeerID;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(PFUbiquityLocation *)localRootLocation;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(void)setAbortSetup:(char)arg1 ;
-(PFUbiquityContainerIdentifier *)containerIdentifier;
-(PFUbiquityKnowledgeVector *)storeKV;
-(char)useLocalAccount;
-(void)setFailSetupError:(NSError *)arg1 ;
-(char)doPostValidationInit:(id*)arg1 ;
-(id)longDescription;
-(id)getCurrentUbiquityIdentityToken;
-(void)ubiquityIdentityTokenChanged:(id)arg1 ;
-(char)initializeStoreKnowledgeVectorFromStore:(id)arg1 error:(id*)arg2 ;
-(void)finishSetupWithRetry:(id)arg1 ;
-(char)finishSetupForStore:(id)arg1 error:(id*)arg2 ;
-(char)cleanUpFromFailedSetup:(id*)arg1 ;
-(char)detectAndFixForkedContainer:(char)arg1 error:(id*)arg2 ;
-(char)initializeReceiptFile:(id*)arg1 ;
-(char)initializeContainerIdentifierWithStore:(id)arg1 error:(id*)arg2 ;
-(char)initializeStack:(id*)arg1 ;
-(char)initializeBaselineForStore:(id)arg1 error:(id*)arg2 ;
-(char)checkKnowledgeVectorsAndBaselineWithStore:(id)arg1 error:(id*)arg2 ;
-(char)sideLoadStore:(id)arg1 error:(id*)arg2 ;
-(char)respondToBaselineRoll:(id*)arg1 ;
-(char)attemptMetadataRecoveryForStore:(id)arg1 error:(id*)arg2 ;
-(char)moveLocalLogFilesToUbiquityLocation:(id*)arg1 ;
-(char)pruneStagingDirectoryForStore:(id)arg1 error:(id*)arg2 ;
-(char)seedStore:(id)arg1 error:(id*)arg2 ;
-(void)initialSyncComplete;
-(id)migrationAssistant;
-(void)updateDictionary:(id)arg1 withShortcutSnapshot:(id)arg2 ;
-(void)updateDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2 ;
-(void)updateDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2 ;
-(void)updateDictionary:(id)arg1 withBigramSnapshot:(id)arg2 ;
-(void)removeEntriesFromDictionary:(id)arg1 withShortcutSnapshot:(id)arg2 ;
-(void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2 ;
-(void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2 ;
-(void)removeEntriesFromDictionary:(id)arg1 withBigramSnapshot:(id)arg2 ;
-(void)insertEntriesInDicitonary:(id)arg1 inUserDictionaryManagedObjectContext:(id)arg2 ;
-(void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryManagedObjectContext:(id)arg2 ;
-(char)migrateMetadataRoot:(id*)arg1 ;
-(void)exportedLog:(id)arg1 ;
-(char)tryToReplaceLocalStore:(id)arg1 withStoreSideLoadedByImporter:(id)arg2 ;
-(id)createSetOfLocalLogLocations:(id*)arg1 ;
-(char)rewriteTransactionLogs:(id)arg1 toMatchStore:(id)arg2 error:(id*)arg3 ;
-(char)checkAndPerformMigrationForStore:(id)arg1 error:(id*)arg2 ;
-(void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryJPManagedObjectContext:(id)arg2 ;
-(void)insertEntriesInDicitonary:(id)arg1 inBigramManagedObjectContext:(id)arg2 ;
-(char)isInitialSyncComplete;
-(void)_setUbiquityRootLocation:(id)arg1 storeName:(id)arg2 localPeerID:(id)arg3 andModelVersionHash:(id)arg4 ;
-(char)needsMetadataRecovery;
-(char)storeWasMigrated;
-(char)abortSetup;
-(unsigned long long)retryDelaySec;
-(void)setRetryDelaySec:(unsigned long long)arg1 ;
-(char)failSetup;
-(void)setFailSetup:(char)arg1 ;
-(NSError *)failSetupError;
-(char)cacheFilePresenterForUbiquityRoot;
-(id)init;
-(void)dealloc;
-(NSDictionary *)options;
@end

