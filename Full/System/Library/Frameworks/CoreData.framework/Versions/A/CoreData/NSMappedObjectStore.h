/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStore.h>

@class NSPersistentStoreMap, NSSet;

@interface NSMappedObjectStore : NSPersistentStore {

	NSPersistentStoreMap* _theMap;
	NSSet* _entitiesToFetch;

}
-(id)dataForKey:(id)arg1 ;
-(id)metadata;
-(id)_rawMetadata__;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(void)_setMap:(id)arg1 ;
-(id)_theMap;
-(void)saveDocumentToPath:(id)arg1 ;
-(id)executeFetchRequest:(id)arg1 withContext:(id)arg2 ;
-(id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2 ;
-(id)executeCountRequest:(id)arg1 withContext:(id)arg2 ;
-(id)getNewIDForObject:(id)arg1 ;
-(void)_addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)_removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)_updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)_pathFromURI:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)identifier;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)setMetadata:(id)arg1 ;
-(void)save;
@end

