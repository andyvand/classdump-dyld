/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, ABAddressBook, CNContactStore, NSMutableDictionary;

@interface ABDeleteRecordsCommandBuilder : NSObject {

	NSMutableArray* _deletedRecords;
	ABAddressBook* _legacyAddressBook;
	CNContactStore* _addressBook;
	NSMutableDictionary* _removeMemberBuilders;

}
+(id)builderWithAddressBook:(id)arg1 ;
-(id)build;
-(id)_makeBuilder;
-(void)_removeRecordsFromParentGroupsWithBuilder:(id)arg1 ;
-(void)_deletePeopleWithBuilder:(id)arg1 ;
-(void)_deleteGroupsWithBuilder:(id)arg1 ;
-(void)_removeRecordFromParentGroups:(id)arg1 ;
-(void)_buildRemoveMemberCommandsWithBuilder:(id)arg1 ;
-(id)_removeMembersBuilderForGroup:(id)arg1 ;
-(void)_buildDeleteCommandsForPeopleUIDs:(id)arg1 withBuilder:(id)arg2 ;
-(void)deleteRecord:(id)arg1 ;
-(void)dealloc;
-(id)initWithAddressBook:(id)arg1 ;
@end

