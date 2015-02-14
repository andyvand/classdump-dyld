/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCommandExecutionPolicy.h>

@class ABAddressBook;

@interface ABAddressBookCommandExecutionPolicy : ABCommandExecutionPolicy {

	ABAddressBook* _addressBook;
	SEL _saveHook;

}
-(id)initWithAddressBook:(id)arg1 saveOnExecute:(char)arg2 ;
-(void)runWithBlock:(/*^block*/id)arg1 ;
-(void)saveHook;
-(void)nullSaveHook;
-(void)dealloc;
@end

