/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext, NSArray, NSPredicate, NSMutableArray, NSMutableDictionary;

@interface ABContactFetcher : NSObject {

	NSManagedObjectContext* _managedObjectContext;
	NSArray* _affectedStores;
	NSPredicate* _fetchPredicate;
	char _includeGroups;
	char _includeLinkedContacts;
	char _unifyContacts;
	NSMutableArray* _records;
	NSMutableDictionary* _linkedContactsById;

}

@property (retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (copy) NSArray * affectedStores;                                     //@synthesize affectedStores=_affectedStores - In the implementation block
@property (copy) NSPredicate * fetchPredicate;                                 //@synthesize fetchPredicate=_fetchPredicate - In the implementation block
@property (assign) char includeGroups;                                         //@synthesize includeGroups=_includeGroups - In the implementation block
@property (assign) char includeLinkedContacts;                                 //@synthesize includeLinkedContacts=_includeLinkedContacts - In the implementation block
@property (assign) char unifyContacts;                                         //@synthesize unifyContacts=_unifyContacts - In the implementation block
@property (copy,readonly) NSArray * resultRecords; 
+(id)linkedContactsSortDescriptors;
-(void)fetchContacts;
-(void)setIncludeGroups:(char)arg1 ;
-(id)fetchRecordsWithEntityName:(id)arg1 affectedStores:(id)arg2 propertiesToFetch:(id)arg3 relationshipKeyPathsForPrefetching:(id)arg4 sortDescriptors:(id)arg5 predicate:(id)arg6 ;
-(id)mutableContactsForLinkId:(id)arg1 ;
-(void)buildContactsByLinkIdFromContactResults:(id)arg1 ;
-(id)contactPropertiesToFetch;
-(id)contactRelationshipKeyPathsForPrefetching;
-(id)fetchRecordsWithEntityName:(id)arg1 propertiesToFetch:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 sortDescriptors:(id)arg4 ;
-(id)fetchLinkedContactsForContacts:(id)arg1 ;
-(id)unifyContacts:(id)arg1 ;
-(void)resetResults;
-(void)fetchGroups;
-(void)fetchRecords;
-(NSArray *)resultRecords;
-(id)resultContactsForLinkId:(id)arg1 ;
-(char)includeGroups;
-(char)includeLinkedContacts;
-(void)setIncludeLinkedContacts:(char)arg1 ;
-(char)unifyContacts;
-(void)setUnifyContacts:(char)arg1 ;
-(NSArray *)affectedStores;
-(id)init;
-(void)dealloc;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setFetchPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)fetchPredicate;
-(void)setAffectedStores:(NSArray *)arg1 ;
@end

