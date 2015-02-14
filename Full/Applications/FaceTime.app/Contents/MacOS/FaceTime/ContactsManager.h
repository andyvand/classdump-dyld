/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray, NSMutableDictionary, NSOperationQueue;

@interface ContactsManager : NSObject {

	NSMutableArray* _contacts;
	NSArray* _orderedGroups;
	NSMutableDictionary* _uniqueIDToSideListItemMap;
	NSMutableDictionary* _uniqueIDToIMPersonMap;
	NSMutableDictionary* _groupNameToFTGroupMap;
	NSMutableDictionary* _uniqueIDToFTGroupMap;
	NSMutableDictionary* _linkIDToPreferredABPersonMap;
	NSOperationQueue* _searchOperationQueue;
	char _firstLastSorting;
	char _orderedGroupsNeedsUpdate;

}

@property (nonatomic,readonly) NSArray * contacts;                            //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * groups; 
@property (nonatomic,readonly) char firstLastSorting; 
@property (nonatomic,__weak,readonly) id contactsNameComparator; 
+(id)sharedInstance;
-(void)searchContactsForString:(id)arg1 inGroup:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)preferredABPersonForABPerson:(id)arg1 ;
-(void)_updateSortingOrder;
-(void)_buildUniquePersonIDCache;
-(id)_addABGroup:(id)arg1 ;
-(void)sortingOrderChanged:(id)arg1 ;
-(void)_updatePreferredLinks;
-(void)_updatePreferredLinkForPerson:(id)arg1 ;
-(void)_searchContactsForString:(id)arg1 inGroup:(id)arg2 searchID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_personForUniqueID:(id)arg1 ;
-(void)_removePersonFromCache:(id)arg1 ;
-(id)_removeABGroupWithUID:(id)arg1 ;
-(void)_insertSortedContact:(id)arg1 inArray:(id)arg2 ;
-(char)firstLastSorting;
-(id)contactsNameComparator;
-(id)contactsForGroup:(id)arg1 ;
-(id)sideListItemForIMPerson:(id)arg1 ;
-(id)sideListItemForUniqueID:(id)arg1 ;
-(id)preferredPersonForPerson:(id)arg1 ;
-(void)searchContactsForString:(id)arg1 inGroup:(id)arg2 withSearchID:(id)arg3 ;
-(void)cancelAllSearchOperations;
-(NSArray *)contacts;
-(void)addressBookChanged:(id)arg1 ;
-(NSArray *)groups;
-(id)init;
-(void)dealloc;
@end

