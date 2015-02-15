/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:26:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABAddressBook, ABPersonListController, NSMutableArray, ABGroupListNotificationHandler, ABCardViewNotificationHandler;

@interface ABBookLocalNotificationWatcher : NSObject {

	ABAddressBook* _addressBook;
	ABPersonListController* _personListController;
	NSMutableArray* _observers;
	char _suspendPersonListReflection;
	ABGroupListNotificationHandler* _groupListHandler;
	ABCardViewNotificationHandler* _cardViewHandler;

}

@property (assign) char suspendPersonListReflection;              //@synthesize suspendPersonListReflection=_suspendPersonListReflection - In the implementation block
-(void)setSuspendPersonListReflection:(char)arg1 ;
-(id)initWithAddressBook:(id)arg1 personListController:(id)arg2 groupListNotificationHandler:(id)arg3 cardViewNotificationHandler:(id)arg4 ;
-(void)sourcesChanged:(id)arg1 ;
-(void)defaultAccountChanged:(id)arg1 ;
-(void)updatePersonListWithAddressBookUserInfo:(id)arg1 ;
-(char)suspendPersonListReflection;
-(char)shouldProcessNotification:(id)arg1 ;
-(char)isNotificationFromDirectorySearch:(id)arg1 ;
-(void)registerForNotifications;
-(void)managedObjectContextObjectsDidChange:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)managedObjectContextDidSave:(id)arg1 ;
@end
