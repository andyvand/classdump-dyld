/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABLinkingInfoDataSource;
@class NSDictionary, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface ABMatchesPeopleByName : NSObject {

	id<ABLinkingInfoDataSource> _adapter;
	NSDictionary* _recordsByAccount;
	NSMutableDictionary* _recordsByAccountByName;
	NSMutableSet* _allIndexedNames;
	NSMutableArray* _matches;

}
-(void)match;
-(void)indexAccount:(id)arg1 ;
-(void)collectPeopleWithName:(id)arg1 ;
-(id)peopleWithName:(id)arg1 ;
-(char)anyAccountHasMoreThanOnePersonWithName:(id)arg1 ;
-(void)addUnlinkedPeople:(id)arg1 ;
-(void)addLinkedPeople:(id)arg1 ;
-(id)initWithRecordsByAccount:(id)arg1 adapter:(id)arg2 ;
-(id)matchedRecords;
-(void)dealloc;
-(void)index;
@end

