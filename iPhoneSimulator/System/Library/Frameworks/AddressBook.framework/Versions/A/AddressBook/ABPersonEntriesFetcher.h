/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABAddressBook, NSArray, NSPredicate, NSString, NSMutableDictionary, NSDictionary;

@interface ABPersonEntriesFetcher : NSObject {

	ABAddressBook* _addressBook;
	NSArray* _affectedStores;
	NSPredicate* _fetchPredicate;
	char _includeGroups;
	char _includeLinkedPeople;
	char _unifyPeople;
	NSString* _displayedProperty;
	NSPredicate* _displayedPropertyFilterPredicate;
	NSMutableDictionary* _entriesByUID;

}

@property (retain) ABAddressBook * addressBook;                               //@synthesize addressBook=_addressBook - In the implementation block
@property (copy) NSArray * affectedStores;                                    //@synthesize affectedStores=_affectedStores - In the implementation block
@property (copy) NSPredicate * fetchPredicate;                                //@synthesize fetchPredicate=_fetchPredicate - In the implementation block
@property (copy) NSString * displayedProperty;                                //@synthesize displayedProperty=_displayedProperty - In the implementation block
@property (copy) NSPredicate * displayedPropertyFilterPredicate;              //@synthesize displayedPropertyFilterPredicate=_displayedPropertyFilterPredicate - In the implementation block
@property (assign) char includeGroups;                                        //@synthesize includeGroups=_includeGroups - In the implementation block
@property (assign) char includeLinkedPeople;                                  //@synthesize includeLinkedPeople=_includeLinkedPeople - In the implementation block
@property (assign) char unifyPeople;                                          //@synthesize unifyPeople=_unifyPeople - In the implementation block
@property (copy,readonly) NSDictionary * resultEntriesByUID; 
-(ABAddressBook *)addressBook;
-(void)setDisplayedProperty:(NSString *)arg1 ;
-(void)setIncludeGroups:(char)arg1 ;
-(void)setIncludeLinkedPeople:(char)arg1 ;
-(void)setUnifyPeople:(char)arg1 ;
-(NSString *)displayedProperty;
-(void)setDisplayedPropertyFilterPredicate:(NSPredicate *)arg1 ;
-(void)fetchEntries;
-(NSDictionary *)resultEntriesByUID;
-(char)includeGroups;
-(char)includeLinkedPeople;
-(char)unifyPeople;
-(NSPredicate *)displayedPropertyFilterPredicate;
-(NSArray *)affectedStores;
-(id)init;
-(void)dealloc;
-(void)setFetchPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)fetchPredicate;
-(void)setAffectedStores:(NSArray *)arg1 ;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
@end

