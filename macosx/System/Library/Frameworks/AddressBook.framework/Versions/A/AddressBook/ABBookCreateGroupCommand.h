/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@class ABAccount, ABAddressBook, ABGroupEntriesList, NSString;

@interface ABBookCreateGroupCommand : ABBookUndoableCommand {

	ABAccount* _account;
	ABAddressBook* _addressBook;
	ABGroupEntriesList* _groupEntriesList;
	NSString* _groupUid;
	NSString* _groupName;

}

@property (copy) NSString * groupName;              //@synthesize groupName=_groupName - In the implementation block
@property (copy) NSString * groupUid;               //@synthesize groupUid=_groupUid - In the implementation block
-(id)group;
-(void)execute;
-(void)executeUndo;
-(id)actionName;
-(void)executeRedo;
-(NSString *)groupName;
-(id)makeUntitledGroup;
-(id)untitledString;
-(void)setGroupUid:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 addressBook:(id)arg2 groupEntriesList:(id)arg3 ;
-(id)groupEntryForNewGroup;
-(void)updateGroupName:(id)arg1 ;
-(NSString *)groupUid;
-(void)dealloc;
-(void)setGroupName:(NSString *)arg1 ;
@end

