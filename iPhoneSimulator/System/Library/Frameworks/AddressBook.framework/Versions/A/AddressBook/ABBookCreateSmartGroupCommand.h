/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@class ABSearchElement, ABAddressBook, ABGroupEntriesList, ABAccount, NSString;

@interface ABBookCreateSmartGroupCommand : ABBookUndoableCommand {

	ABSearchElement* _searchElement;
	char _tracksModification;
	ABAddressBook* _addressBook;
	ABGroupEntriesList* _groupEntriesList;
	ABAccount* _account;
	NSString* _smartGroupUid;
	NSString* _name;

}

@property (copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)execute;
-(id)smartGroup;
-(void)executeUndo;
-(id)actionName;
-(id)initWithName:(id)arg1 searchElement:(id)arg2 tracksModification:(char)arg3 addressBook:(id)arg4 account:(id)arg5 groupEntriesList:(id)arg6 ;
-(id)groupEntryForNewSmartGroup;
-(void)updateSmartGroupName:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end

