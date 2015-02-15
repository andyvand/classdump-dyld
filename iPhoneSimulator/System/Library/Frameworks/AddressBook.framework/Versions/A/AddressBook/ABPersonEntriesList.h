/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPersonListHeadlining;
#import <AddressBook/AddressBook-Structs.h>
@class NSMutableArray, NSMutableDictionary, NSArray, NSString, NSMutableSet, NSPredicate;

@interface ABPersonEntriesList : NSObject {

	NSMutableArray* _entries;
	NSMutableDictionary* _entriesByUID;
	NSArray* _sectionedEntries;
	NSString* _filterTerms;
	NSMutableSet* _extraUIDsForSearchResults;
	id<ABPersonListHeadlining> _headliner;
	char _suspendSorting;

}

@property (copy) NSArray * entries;                                   //@synthesize entries=_entries - In the implementation block
@property (copy) NSArray * sectionedEntries;                          //@synthesize sectionedEntries=_sectionedEntries - In the implementation block
@property (copy) NSString * filterTerms;                              //@synthesize filterTerms=_filterTerms - In the implementation block
@property (readonly) NSPredicate * filterPredicate; 
@property (retain) id<ABPersonListHeadlining> headliner;              //@synthesize headliner=_headliner - In the implementation block
@property (assign) char suspendSorting;                               //@synthesize suspendSorting=_suspendSorting - In the implementation block
@property (copy) NSMutableDictionary * entriesByUID;                  //@synthesize entriesByUID=_entriesByUID - In the implementation block
+(id)keyPathsForValuesAffectingCountOfEntries;
-(unsigned long long)indexOfEntry:(id)arg1 ;
-(void)removeEntry:(id)arg1 ;
-(NSString *)filterTerms;
-(void)setFilterTerms:(NSString *)arg1 ;
-(void)loadEntriesByUid:(id)arg1 rearrangeObjects:(char)arg2 ;
-(id)indexesOfEntriesWithUids:(id)arg1 ;
-(id)entriesAtIndexes:(id)arg1 ;
-(id)entryForUID:(id)arg1 ;
-(unsigned long long)countOfEntries;
-(void)setHeadliner:(id<ABPersonListHeadlining>)arg1 ;
-(void)clearExtraUniqueIdsInSearchResults;
-(id<ABPersonListHeadlining>)headliner;
-(id)entriesForUIDs:(id)arg1 ;
-(void)appendExtraUniqueIdToSearchResults:(id)arg1 ;
-(char)suspendSorting;
-(void)setSuspendSorting:(char)arg1 ;
-(NSArray *)sectionedEntries;
-(void)removeAllEntries;
-(void)insertEntry:(id)arg1 inEntriesAtIndex:(unsigned long long)arg2 ;
-(void)addEntriesFromArray:(id)arg1 ;
-(void)removeEntriesInArray:(id)arg1 ;
-(void)replaceEntry:(id)arg1 withEntry:(id)arg2 ;
-(id)entryForLinkId:(id)arg1 ;
-(id)sortDescriptorsFromNameSortingPreference;
-(id)flattenedEntriesFromSectionedEntries:(id)arg1 ;
-(void)setSectionedEntries:(NSArray *)arg1 ;
-(id)mutableEntries;
-(void)addEntriesToSectionedEntries:(id)arg1 ;
-(void)addEntriesToReverseCache:(id)arg1 ;
-(void)insertEntry:(id)arg1 inSectionedEntriesAtIndex:(unsigned long long)arg2 ;
-(void)removeEntriesFromReverseCache:(id)arg1 ;
-(void)removeEntriesFromSectionedEntries:(id)arg1 ;
-(void)replaceEntry:(id)arg1 inSectionedEntriesWithEntry:(id)arg2 ;
-(void)removeEntry:(id)arg1 fromSectionedEntries:(id)arg2 ;
-(id)flattenedEntriesIncludingHeaders;
-(id)entryInEntriesAtIndex:(unsigned long long)arg1 ;
-(void)getEntries:(id*)arg1 range:(NSRange)arg2 ;
-(NSMutableDictionary *)entriesByUID;
-(void)setEntriesByUID:(NSMutableDictionary *)arg1 ;
-(NSArray *)entries;
-(void)setEntries:(NSArray *)arg1 ;
-(id)entryAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)rearrangeObjects;
-(NSPredicate *)filterPredicate;
-(void)addEntry:(id)arg1 ;
@end

