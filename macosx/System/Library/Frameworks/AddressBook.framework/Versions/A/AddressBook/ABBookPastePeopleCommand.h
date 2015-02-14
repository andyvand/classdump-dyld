/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@class ABRecordContext, NSArray, NSDictionary, NSMutableArray, ABImportRecordFactory;

@interface ABBookPastePeopleCommand : ABBookUndoableCommand {

	ABRecordContext* _recordContext;
	NSArray* _groups;
	NSDictionary* _pasteboardDictionary;
	NSMutableArray* _addedPersonUids;
	ABImportRecordFactory* _importRecordFactory;

}
-(void)execute;
-(id)addedPeople;
-(void)executeUndo;
-(id)actionName;
-(id)initWithRecordContext:(id)arg1 groups:(id)arg2 pasteboardDictionary:(id)arg3 ;
-(id)peopleFromPasteboardDictionary;
-(void)addMembersToGroups:(id)arg1 ;
-(void)rememberPersonUidsOfPeople:(id)arg1 ;
-(id)personWithUid:(id)arg1 fromExistingPeople:(id)arg2 orPersonDictionary:(id)arg3 ;
-(id)addPersonWithDictionary:(id)arg1 ;
-(char)personIsMemberOfAllGroups:(id)arg1 ;
-(id)massagePersonDictionary:(id)arg1 ;
-(void)removeAllPropertyIdentifiers:(id)arg1 ;
-(void)removeIdentifiers:(id)arg1 forProperty:(id)arg2 ;
-(void)addMembers:(id)arg1 toGroup:(id)arg2 ;
-(void)removePeople:(id)arg1 ;
-(id)initWithAccount:(id)arg1 addressBook:(id)arg2 groups:(id)arg3 pasteboardDictionary:(id)arg4 ;
-(id)pastedUids;
-(void)dealloc;
@end

