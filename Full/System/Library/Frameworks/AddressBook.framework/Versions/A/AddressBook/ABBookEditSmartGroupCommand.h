/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@class ABAddressBook, NSString, ABSearchElement, ABGroupEntriesList;

@interface ABBookEditSmartGroupCommand : ABBookUndoableCommand {

	ABAddressBook* _addressBook;
	NSString* _smartGroupUid;
	NSString* _name;
	ABSearchElement* _searchElement;
	char _tracksModification;
	NSString* _oldName;
	ABSearchElement* _oldSearchElement;
	char _oldTracksModification;
	ABGroupEntriesList* _groupEntriesList;

}
-(void)execute;
-(id)smartGroup;
-(void)executeUndo;
-(id)actionName;
-(void)rememberOldState;
-(id)initWithSmartGroup:(id)arg1 name:(id)arg2 searchElement:(id)arg3 tracksModification:(char)arg4 groupEntriesList:(id)arg5 ;
-(void)dealloc;
@end

