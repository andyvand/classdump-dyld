/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSManagedObjectContext, NSString, NSPredicate, NSArray;

@interface _NSManagedProxy : NSObject {

	id _callbackHandler;
	NSManagedObjectContext* _managedObjectContext;
	NSString* _entityName;
	NSPredicate* _fetchPredicate;
	NSArray* _sortDescriptors;
	id _lazyFetchingArray;

}
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)sortDescriptors;
-(void)setSortDescriptors:(id)arg1 ;
-(id)_lazyFetchResultProxyForObjects:(id)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(void)setManagedObjectContext:(id)arg1 ;
-(id)usableSortDescriptorsFromArray:(id)arg1 ;
-(id)fetchRequestWithSortDescriptors:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)fetchObjectsWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)updateBatchSizeForRange:(NSRange)arg1 ;
-(void)_setCallbackHandler:(id)arg1 ;
-(id)managedObjectContext;
-(id)entityName;
-(id)newInsertedObject;
-(void)setEntityName:(id)arg1 ;
-(void)setFetchPredicate:(id)arg1 ;
-(id)fetchPredicate;
-(char)isEntityUsable:(id)arg1 ;
-(id)_relationshipKeyPathsForPrefetching;
-(void)_managedObjectsChangedInContext:(id)arg1 ;
-(void)_managedObjectContextDidSave:(id)arg1 ;
-(void)_refetchForContext:(id)arg1 ;
-(void)_storesDidChange:(id)arg1 ;
-(id)_managedObjectContext;
-(id)_persistentStoreCoordinator;
-(id)_entity;
-(id)newInsertedObjectForEntity:(id)arg1 ;
-(id)_callbackHandler;
-(char)_objectMatchesEntity:(id)arg1 ;
-(char)_objectMatchesFetchPredicate:(id)arg1 ;
-(void)_executeFetchForObjects:(id)arg1 ;
@end

