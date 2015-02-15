/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@class CNContactStore, NSString, CNContactIdentifier;

@interface AKEditPropertyCommand : ABBookUndoableCommand {

	CNContactStore* _addressBook;
	NSString* _key;
	CNContactIdentifier* _identifier;
	id _oldValue;
	id _newValue;

}
+(id)commandWithAddressBook:(id)arg1 personIdentifier:(id)arg2 propertyKey:(id)arg3 oldValue:(id)arg4 updatedValue:(id)arg5 ;
-(void)execute;
-(void)executeUndo;
-(id)initWithAddressBook:(id)arg1 personIdentifier:(id)arg2 propertyKey:(id)arg3 oldValue:(id)arg4 updatedValue:(id)arg5 ;
-(void)_applyValue:(id)arg1 ;
-(id)_fetchMutablePerson;
-(void)_savePeople:(id)arg1 ;
-(void)dealloc;
@end

