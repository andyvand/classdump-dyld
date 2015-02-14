/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSEntityDescription, NSURL, NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSArray;

@interface MecabraCoreDataController : NSObject {

	NSEntityDescription* _entityDescription;
	NSURL* _localInfoPlistURL;
	NSURL* _localStoreURL;
	NSURL* _localURL;
	NSString* _localURLLastPartOfName;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSURL* _storeURL;
	NSString* _type;
	NSArray* _storedElementsForMerge;

}

@property (nonatomic,readonly) NSEntityDescription * entityDescription;                              //@synthesize entityDescription=_entityDescription - In the implementation block
@property (nonatomic,retain) NSURL * localStoreURL;                                                  //@synthesize localStoreURL=_localStoreURL - In the implementation block
@property (nonatomic,readonly) NSURL * localInfoPlistURL;                                            //@synthesize localInfoPlistURL=_localInfoPlistURL - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                                       //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSString * type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * localURL;                                                       //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain) NSArray * storedElementsForMerge;                                       //@synthesize storedElementsForMerge=_storedElementsForMerge - In the implementation block
+(void)resetDatabaseWithType:(id)arg1 URL:(id)arg2 ;
-(void)deleteEntry:(id)arg1 ;
-(id)initWithType:(id)arg1 URL:(id)arg2 ;
-(id)searchResultsWithValueDictionary:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)dictionaryValuesFromManagedObjects:(id)arg1 ;
-(void)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2 ;
-(id)removeDuplicatesForEntry:(id)arg1 uniquingKeys:(id)arg2 sortDescriptors:(id)arg3 restrictToNumberOfElements:(unsigned long long)arg4 identifierKey:(id)arg5 ;
-(id)databasePropertyForKey:(id)arg1 ;
-(void)setDatabaseProperty:(id)arg1 forKey:(id)arg2 ;
-(id)entriesToMerge;
-(void)clearStoredMergeEntries;
-(id)entityDescriptionForContext:(id)arg1 ;
-(char)dictionaryEntryHasAllRequiredKeys:(id)arg1 ;
-(char)isLogging;
-(id)dictionaryValueFromManagedObject:(id)arg1 ;
-(void)logEntry:(id)arg1 operationType:(id)arg2 extraInformation:(id)arg3 ;
-(void)deleteAllMatchingEntries:(id)arg1 ;
-(NSURL *)localInfoPlistURL;
-(void)prepareURLForDatabaseFile:(id)arg1 ;
-(id)searchResultsWithValueDictionary:(id)arg1 ;
-(id)searchResultsWithValueDictionary:(id)arg1 sortDescriptors:(id)arg2 ;
-(void)deleteAllElements;
-(void)setValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3 ;
-(NSURL *)localURL;
-(id)databaseName;
-(char)containsLegacyUbiquitousInformation:(id)arg1 ;
-(char)containsLocalDatabase:(id)arg1 ;
-(void)migrateLocallyStoredUbiquitousInformationToLocalDictionary;
-(void)removeCoreDataUbiquitySupportFolder:(id)arg1 ;
-(NSURL *)localStoreURL;
-(id)newPersistentStoreWithURL:(id)arg1 ubiquityContainerIdentifier:(id)arg2 managedObjectModel:(id)arg3 ;
-(void)databaseSynced:(id)arg1 ;
-(void)sendRemoteNotification;
-(id)locallyPresentUbiquitousFiles;
-(char)stripUbiquitousInformationFromStore:(id)arg1 ;
-(id)entriesFromStrippedStoreURL:(id)arg1 ;
-(void)setStoredElementsForMerge:(NSArray *)arg1 ;
-(id)coreDataUbiquityFolderURLforStore:(id)arg1 ;
-(NSArray *)storedElementsForMerge;
-(char)shouldSyncDatabase;
-(void)setLocalStoreURL:(NSURL *)arg1 ;
-(void)setLocalURL:(NSURL *)arg1 ;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSURL *)storeURL;
-(void)setStoreURL:(NSURL *)arg1 ;
-(NSEntityDescription *)entityDescription;
-(void)dealloc;
-(NSString *)type;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)addEntry:(id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)save;
-(void)logMessage:(id)arg1 ;
@end

