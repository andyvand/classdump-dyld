/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNDataMapper <NSObject>
@optional
-(id)fetchContactsWithIdentifiers:(id)arg1 unify:(char)arg2 error:(id*)arg3;
-(id)fetchContactsWithLinkIdentifier:(id)arg1 error:(id*)arg2;
-(unsigned long long)fetchCountOfContactsWithLinkIdentifier:(id)arg1 error:(id*)arg2;
-(id)photoForContact:(id)arg1;
-(id)photoForContacts:(id)arg1;
-(id)accountForContactWithIdentifier:(id)arg1;
-(id)accountsForContactsWithIdentifiers:(id)arg1;
-(char)isContactReadOnly:(id)arg1;
-(char)setImageData:(id)arg1 onContact:(id)arg2 error:(id*)arg3;

@required
-(id)fetchDistributionListIdentifierWithProperty:(id)arg1 contactIdentifier:(id)arg2 groupIdentifier:(id)arg3;
-(id)fetchIdentifierForMeCard:(id*)arg1;
-(id)fetchIdentifiersForMeCards:(id*)arg1;
-(void)executeSaveTransactionWithBlock:(/*^block*/id)arg1;
-(id)fetchContactsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(id)fetchContactsMatchingPredicate:(id)arg1 error:(id*)arg2;
-(void)fetchGroupsMatchingPredicate:(id)arg1 withObserver:(id)arg2;

@end

