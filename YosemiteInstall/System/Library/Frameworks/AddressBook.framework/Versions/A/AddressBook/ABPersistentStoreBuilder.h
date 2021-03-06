/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPersistentStoreCoordinator, ABPersistentStoreDescription, NSDictionary, NSString, NSURL, NSPersistentStore, NSError;

@interface ABPersistentStoreBuilder : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	ABPersistentStoreDescription* _storeDescription;
	BOOL _readOnly;
	NSDictionary* _storeOptions;
	NSDictionary* _storeOptionsWithoutMigration;
	NSString* _databasePath;
	NSURL* _databaseUrl;
	char _pristineDatabase;
	NSPersistentStore* _store;
	char _cachePsc;
	char _didMigrate;
	BOOL _addAsReadOnly;
	NSError* _error;

}

@property (retain,readonly) NSPersistentStoreCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (retain) NSPersistentStore * store;                                        //@synthesize store=_store - In the implementation block
@property (copy) NSError * error;                                                    //@synthesize error=_error - In the implementation block
+(id)mergeDictionary:(id)arg1 withDictionary:(id)arg2 ;
+(id)readOnlyStoreOptionsWithBoolValue:(char)arg1 ;
+(id)proxyLockStoreOptionsForDatabaseAtUrl:(id)arg1 isReadOnly:(char)arg2 ;
-(NSPersistentStoreCoordinator *)coordinator;
-(id)initWithStoreDescription:(id)arg1 readOnly:(char)arg2 coordinator:(id)arg3 ;
-(void)setupInitialStateWithDatabasePath:(id)arg1 ;
-(void)preflightDatabaseFile;
-(void)removeDotNewPathForDatabasePath;
-(void)tryToAddPersistentStore;
-(void)migrateLabelsIfNeeded;
-(void)migrateOrphanPropertiesIfNeeded;
-(void)migrateMailRecentsToInMemoryIfNeeded;
-(void)moveAsideDatabaseIfNeeded;
-(void)fallBackToInMemoryIfNeeded;
-(char)didAddStore;
-(void)updateMetdataIfNeeded;
-(void)emptySaveIfNeeded;
-(void)logFailureMessage;
-(void)setDatabasePath:(id)arg1 ;
-(void)setDatabaseUrl:(id)arg1 ;
-(char)databaseFileIsMissing;
-(char)databaseFileIsEmpty;
-(id)urlByCopyingToTemporaryUrl:(id)arg1 ;
-(void)addSqlitePersistentStoreWithUrl:(id)arg1 ;
-(char)shouldMigrateLabels;
-(char)shouldMigrateOrphanProperties;
-(void)migrateMailRecentsToInMemory;
-(id)optionsWithoutMigrationForStoreAtUrl:(id)arg1 ;
-(id)optionsWithMigrationForStoreAtUrl:(id)arg1 ;
-(id)extraOptionsForStoreAtUrl:(id)arg1 ;
-(void)moveAsideDatabase;
-(void)logPersistentStoreTracerFailureWithMessage:(id)arg1 error:(id)arg2 ;
-(void)moveAsideDatabaseAtPath:(id)arg1 reason:(id)arg2 ;
-(void)fallBackToInMemory;
-(void)addInMemoryPersistentStore;
-(char)shouldUpdateMetadata;
-(void)updateMetdata;
-(id)initWithStoreDescription:(id)arg1 readOnly:(char)arg2 ;
-(id)addPersistentStoreAtDatabasePath:(id)arg1 ;
-(void)removePersistentStoreAtPath:(id)arg1 ;
-(NSPersistentStore *)store;
-(void)setStore:(NSPersistentStore *)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

