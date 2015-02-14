/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@class NSString, NSArray, ABAddressBook;

@interface ABRemoveMembersCommand : ABBookUndoableCommand {

	NSString* _groupIdentifier;
	NSArray* _memberIdentifiers;
	ABAddressBook* _addressBook;

}
-(void)execute;
-(id)_fetchMembers;
-(id)_fetchGroup;
-(void)_removePeople:(id)arg1 fromGroup:(id)arg2 ;
-(void)_removeSubgroups:(id)arg1 fromGroup:(id)arg2 ;
-(void)_addPeople:(id)arg1 toGroup:(id)arg2 ;
-(void)_addSubgroups:(id)arg1 toGroup:(id)arg2 ;
-(id)initWithGroup:(id)arg1 members:(id)arg2 addressBook:(id)arg3 ;
-(void)executeUndo;
-(void)dealloc;
@end

