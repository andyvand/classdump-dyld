/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/CNDataMapper.h>
#import <AddressBook/CNDataMapperSaveTransaction.h>

@class ABAddressBook, NSString;

@interface CNLegacyAddressBookDataMapper : NSObject <CNDataMapper, CNDataMapperSaveTransaction> {

	ABAddressBook* _addressBook;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)executeAddedPeople:(id)arg1 inAddressBook:(id)arg2 ;
+(/*^block*/id)executeAddedPerson:(id)arg1 inAddressBook:(id)arg2 accountIdentifier:(id)arg3 ;
+(void)applyContact:(id)arg1 toABPerson:(id)arg2 inAddressBook:(id)arg3 ;
+(/*^block*/id)executeUpdatedContacts:(id)arg1 inAddressBook:(id)arg2 ;
+(/*^block*/id)executeDeletedContact:(id)arg1 inAddressBook:(id)arg2 usingPreparedCollection:(id)arg3 ;
+(id)fetchRequestForGroups;
+(id)nts_fetchGroupsWithCoreDataRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)fetchDistributionListIdentifierWithProperty:(id)arg1 contactIdentifier:(id)arg2 groupIdentifier:(id)arg3 ;
-(id)fetchContactsWithIdentifiers:(id)arg1 unify:(char)arg2 error:(id*)arg3 ;
-(id)fetchIdentifierForMeCard:(id*)arg1 ;
-(id)fetchContactsWithLinkIdentifier:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)fetchCountOfContactsWithLinkIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchIdentifiersForMeCards:(id*)arg1 ;
-(id)photoForContact:(id)arg1 ;
-(id)photoForContacts:(id)arg1 ;
-(id)accountForContactWithIdentifier:(id)arg1 ;
-(id)accountsForContactsWithIdentifiers:(id)arg1 ;
-(char)isContactReadOnly:(id)arg1 ;
-(char)setImageData:(id)arg1 onContact:(id)arg2 error:(id*)arg3 ;
-(void)addContacts:(id)arg1 withSaveResponse:(id)arg2 ;
-(void)updateContacts:(id)arg1 withSaveResponse:(id)arg2 ;
-(void)deleteContacts:(id)arg1 withSaveResponse:(id)arg2 ;
-(void)addGroups:(id)arg1 withSaveResponse:(id)arg2 ;
-(void)updateGroups:(id)arg1 withSaveResponse:(id)arg2 ;
-(void)deleteGroups:(id)arg1 withSaveResponse:(id)arg2 ;
-(char)commitChangesWithSaveResponse:(id)arg1 error:(id*)arg2 ;
-(void)executeSaveTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)clearMeCardIdentifierWithSaveResponse:(id)arg1 ;
-(void)setMeCardIdentifier:(id)arg1 withSaveResponse:(id)arg2 ;
-(void)addGroup:(id)arg1 toAccountWithIdentifier:(id)arg2 withSaveResponse:(id)arg3 ;
-(void)updateGroup:(id)arg1 withSaveResponse:(id)arg2 ;
-(id)fetchGroupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)fetchGroupsWithCoreDataRequest:(id)arg1 error:(id*)arg2 ;
-(id)fetchContactsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)fetchContactsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(void)fetchGroupsMatchingPredicate:(id)arg1 withObserver:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithAddressBook:(id)arg1 ;
@end

