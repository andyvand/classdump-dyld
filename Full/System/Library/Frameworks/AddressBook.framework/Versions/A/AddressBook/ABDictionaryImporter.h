/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABAddressBook, ABAccount, NSString, NSMutableDictionary, NSMutableArray;

@interface ABDictionaryImporter : NSObject {

	ABAddressBook* _addressBook;
	ABAccount* _account;
	char _acceptSubscribedRecords;
	char _subscriptionInfoChanged;
	NSString* _discoveredMeIdentifier;
	char _preservesIdentifiers;
	NSMutableDictionary* _recordMapping;
	NSMutableArray* _importedGroups;

}

@property (readonly) ABAddressBook * addressBook;                //@synthesize addressBook=_addressBook - In the implementation block
@property (assign) char acceptSubscribedRecords;                 //@synthesize acceptSubscribedRecords=_acceptSubscribedRecords - In the implementation block
@property (readonly) char subscriptionInfoChanged;               //@synthesize subscriptionInfoChanged=_subscriptionInfoChanged - In the implementation block
@property (assign) char preservesIdentifiers;                    //@synthesize preservesIdentifiers=_preservesIdentifiers - In the implementation block
@property (copy) NSString * discoveredMeIdentifier;              //@synthesize discoveredMeIdentifier=_discoveredMeIdentifier - In the implementation block
-(ABAddressBook *)addressBook;
-(id)initWithAddressBook:(id)arg1 account:(id)arg2 ;
-(char)preservesIdentifiers;
-(id)propertiesToImportForRecordType:(id)arg1 ;
-(id)nts_importDictionary:(id)arg1 ;
-(id)prepareRepresentationForRecordCreation:(id)arg1 ;
-(void)_rememberToFinalizeGroup:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(char)acceptSubscribedRecords;
-(void)setDiscoveredMeIdentifier:(NSString *)arg1 ;
-(NSString *)discoveredMeIdentifier;
-(id)importDictionary:(id)arg1 ;
-(id)mappedIdentifierForIdentifier:(id)arg1 ;
-(unsigned long long)countOfImportedRecords;
-(void)finalizeImport;
-(void)setAcceptSubscribedRecords:(char)arg1 ;
-(char)subscriptionInfoChanged;
-(void)setPreservesIdentifiers:(char)arg1 ;
-(id)init;
-(void)dealloc;
@end

