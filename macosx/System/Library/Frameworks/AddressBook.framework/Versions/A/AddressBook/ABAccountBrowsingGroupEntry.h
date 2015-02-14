/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBrowsingGroupEntry.h>

@class ABAccount, ABAddressBook;

@interface ABAccountBrowsingGroupEntry : ABBrowsingGroupEntry {

	ABAccount* _account;
	ABAddressBook* _addressBook;

}

@property (retain,readonly) ABAccount * account;                      //@synthesize account=_account - In the implementation block
@property (retain,readonly) ABAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
+(id)identifierForAccount:(id)arg1 ;
-(ABAddressBook *)addressBook;
-(char)canDeletePeople;
-(char)canCreatePeople;
-(char)canCreateGroup;
-(id)createHelperWithFactory:(id)arg1 ;
-(char)containsPeople:(id)arg1 ;
-(char)canDrop;
-(char)canCreateGroupFromSelection;
-(id)iconWithStyleProvider:(id)arg1 ;
-(id)actionScope;
-(id)initWithName:(id)arg1 account:(id)arg2 addressBook:(id)arg3 ;
-(char)shouldImportToDefaultAccount;
-(void)dealloc;
-(id)description;
-(ABAccount *)account;
@end

