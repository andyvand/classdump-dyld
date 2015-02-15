/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBrowsingGroupEntry.h>

@class ABAccount, ABAddressBook, ABGroup;

@interface ABGroupBrowsingGroupEntry : ABBrowsingGroupEntry {

	ABAccount* _account;
	ABAddressBook* _addressBook;
	ABGroup* _group;

}

@property (retain,readonly) ABAccount * account;                      //@synthesize account=_account - In the implementation block
@property (retain,readonly) ABAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
@property (retain,readonly) ABGroup * group;                          //@synthesize group=_group - In the implementation block
+(id)identifierForGroup:(id)arg1 ;
+(id)identifierForGroupWithIdentifier:(id)arg1 ;
-(ABGroup *)group;
-(char)canCut;
-(ABAddressBook *)addressBook;
-(char)canDeletePeople;
-(char)canCreatePeople;
-(char)canCreateGroup;
-(id)createHelperWithFactory:(id)arg1 ;
-(char)canDelete;
-(id)deleteHelperWithFactory:(id)arg1 ;
-(char)canCopy;
-(id)copyHelperWithFactory:(id)arg1 ;
-(id)cutHelperWithFactory:(id)arg1 ;
-(char)canRename;
-(char)containsPeople:(id)arg1 ;
-(char)canDrop;
-(id)renameHelperWithFactory:(id)arg1 ;
-(char)canExportGroupVCard;
-(char)canSendEmailToGroup;
-(char)canEditDistributionLists;
-(char)canCreateGroupFromSelection;
-(id)iconWithStyleProvider:(id)arg1 ;
-(id)initWithAccount:(id)arg1 addressBook:(id)arg2 group:(id)arg3 ;
-(id)actionScope;
-(char)shouldImportToDefaultAccount;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(ABAccount *)account;
@end

