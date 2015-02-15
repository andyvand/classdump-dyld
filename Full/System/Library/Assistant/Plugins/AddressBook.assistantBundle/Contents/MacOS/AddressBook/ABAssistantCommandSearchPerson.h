/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/Contents/MacOS/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAABPersonSearch.h>
#import <AddressBook/ABAssistantCommand.h>
#import <AddressBook/ABSearchOperationDelegate.h>

@class ABAddressBook, NSMutableArray, DADConnection, CNContactStore, NSString;

@interface ABAssistantCommandSearchPerson : SAABPersonSearch <ABAssistantCommand, ABSearchOperationDelegate> {

	ABAddressBook* _addressBook;
	NSMutableArray* _peopleFound;
	DADConnection* _connection;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) DADConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ABAddressBook * addressBook; 
@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(id)remoteSearchOperationsForTerm:(id)arg1 ;
-(id)accountsToSearch;
-(id)searchForMeContacts;
-(char)_searchForLocalContacts;
-(id)unifiedContactsFromSearchResults;
-(id)_perform;
-(id)searchForPhone;
-(id)searchForEmail;
-(id)searchForOrganization;
-(id)searchForPostalAddress;
-(void)_addFoundRecords:(id)arg1 ;
-(id)remoteSearchString;
-(char)_searchForRemoteContacts;
-(id)searchForName;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(char)addABSearchOperationWithPredicate:(id)arg1 toOperationQueue:(id)arg2 ;
-(ABAddressBook *)addressBook;
-(void)searchOperationDidFinish:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setConnection:(DADConnection *)arg1 ;
-(DADConnection *)connection;
-(void)dealloc;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
-(void)searchOperation:(id)arg1 foundRecords:(id)arg2 ;
-(id)_validate;
@end

