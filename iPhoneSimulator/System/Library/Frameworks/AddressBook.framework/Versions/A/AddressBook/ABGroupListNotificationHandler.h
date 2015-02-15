/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABAccountCollection;
@class ABAddressBook, ABGroupEntriesList, ABAbstractGroupEntriesFactory, NSArray;

@interface ABGroupListNotificationHandler : NSObject {

	ABAddressBook* _addressBook;
	ABGroupEntriesList* _groupEntriesList;
	ABAbstractGroupEntriesFactory* _groupEntriesFactory;
	id<ABAccountCollection> _accountCollection;
	NSArray* _emptyAccountIdentifiers;

}
-(id)emptyAccountIdentifiers;
-(char)doesLocalNotificationContainGroupChanges:(id)arg1 ;
-(char)doesLocalNotificationContainEmptyAccountsChanges:(id)arg1 ;
-(char)doesExternalNotificationContainGroupChanges:(id)arg1 ;
-(void)rebuildGroupEntriesListWithAccounts:(id)arg1 ;
-(char)didEmptyAccountsChange;
-(id)initWithAddressBook:(id)arg1 groupEntriesList:(id)arg2 groupEntriesFactory:(id)arg3 accountCollection:(id)arg4 ;
-(void)handleLocalAddressBookNotification:(id)arg1 ;
-(void)handleExternalAddressBookNotification:(id)arg1 ;
-(void)handleAccountRepositoryChangeNotification:(id)arg1 ;
-(void)handleAccountConfigurationChangeNotification:(id)arg1 ;
-(void)handleDefaultAccountChangedNotification:(id)arg1 ;
-(void)dealloc;
@end

