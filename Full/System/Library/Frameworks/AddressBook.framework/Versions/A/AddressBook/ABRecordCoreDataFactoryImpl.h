/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABRecordFactoryProtocol.h>

@interface ABRecordCoreDataFactoryImpl : NSObject <ABRecordFactoryProtocol>
+(unsigned long long)countOfPublicRecordsForClass:(Class)arg1 withPredicate:(id)arg2 addressBook:(id)arg3 ;
+(id)fetchPublicRecordsForClass:(Class)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 prefetchingKeyPaths:(id)arg4 addressBook:(id)arg5 ;
+(Class)implClassForPublicRecordClass:(Class)arg1 ;
+(Class)publicRecordClassForImplClass:(Class)arg1 ;
+(id)propertyTypesForClass:(Class)arg1 withAddressBook:(id)arg2 acquireLock:(char)arg3 ;
+(id)publicRecordsWithUniqueIds:(id)arg1 inAddressBook:(id)arg2 persistentStoreUrls:(id)arg3 ;
+(id)publicRecordWithUniqueId:(id)arg1 inAddressBook:(id)arg2 persistentStoreUrls:(id)arg3 ;
+(unsigned long long)countOfPublicRecordsForClass:(Class)arg1 withPredicate:(id)arg2 addressBook:(id)arg3 persistentStoreUrls:(id)arg4 ;
+(id)fetchPublicRecordsForClass:(Class)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 prefetchingKeyPaths:(id)arg4 addressBook:(id)arg5 persistentStoreUrls:(id)arg6 ;
+(long long)addPropertiesAndTypes:(id)arg1 forClass:(Class)arg2 withAddressBook:(id)arg3 acquireLock:(char)arg4 save:(char)arg5 ;
+(id)createNewDatabaseImplForInstance:(id)arg1 withUniqueId:(id)arg2 addressBook:(id)arg3 ;
+(id)fetchPublicRecordsForClass:(Class)arg1 withPredicate:(id)arg2 addressBook:(id)arg3 ;
+(Class)publicRecordClassFromUniqueId:(id)arg1 inAddressBook:(id)arg2 ;
+(id)uniqueIdsByType:(id)arg1 addressBook:(id)arg2 ;
+(id)fetchPublicRecordsForClass:(Class)arg1 withUniqueIds:(id)arg2 addressBook:(id)arg3 persistentStoreUrls:(id)arg4 ;
+(id)storesFromPersistentStoreUrls:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)fetchPublicRecordForClass:(Class)arg1 withUniqueId:(id)arg2 addressBook:(id)arg3 affectedStores:(id)arg4 ;
+(unsigned long long)countOfObjectsForClass:(Class)arg1 withPredicate:(id)arg2 managedObjectContext:(id)arg3 affectedStores:(id)arg4 ;
+(id)fetchObjectForClass:(Class)arg1 withUniqueId:(id)arg2 managedObjectContext:(id)arg3 affectedStores:(id)arg4 ;
+(id)fetchObjectsForClass:(Class)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 prefetchingKeyPaths:(id)arg4 managedObjectContext:(id)arg5 affectedStores:(id)arg6 ;
+(long long)addPropertiesAndTypes:(id)arg1 forClass:(Class)arg2 withAddressBook:(id)arg3 ;
+(id)publicRecordWithUniqueId:(id)arg1 inAddressBook:(id)arg2 ;
+(id)fetchObjectForClass:(Class)arg1 withUniqueId:(id)arg2 managedObjectContext:(id)arg3 ;
+(id)fetchObjectsForClass:(Class)arg1 withPredicate:(id)arg2 prefetchingKeyPaths:(id)arg3 managedObjectContext:(id)arg4 ;
+(void)initialize;
@end
