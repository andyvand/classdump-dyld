/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABAddressBook, ABGroupEntriesList, ABPersonListController, NSMutableArray;

@interface ABPeoplePickerLocalNotificationWatcher : NSObject {

	ABAddressBook* _addressBook;
	ABGroupEntriesList* _groupEntriesList;
	ABPersonListController* _personListController;
	NSMutableArray* _observers;

}
-(void)registerForNotifications;
-(id)initWithAddressBook:(id)arg1 groupEntriesList:(id)arg2 personListController:(id)arg3 ;
-(void)addressBookWillReset:(id)arg1 ;
-(void)accountRepositoryDidChange:(id)arg1 ;
-(void)addressBookChanged:(id)arg1 ;
-(void)addressBookDidReset:(id)arg1 ;
-(char)anyGroupChanged:(id)arg1 ;
-(void)updateUserInterfaceWithContextDidUpdateNotification:(id)arg1 ;
-(id)identifiersForRecords:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)managedObjectContextDidSave:(id)arg1 ;
@end

