/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABAddressBook, NSArray, NSMutableArray, ABGroupEntry;

@interface ABGroupEntriesBuilder : NSObject {

	ABAddressBook* _addressBook;
	NSArray* _directoryAccounts;
	NSArray* _smartGroups;
	NSArray* _persistentAccounts;
	char _includeAllContactsForEachAccount;
	char _includeDirectoriesHeader;
	char _includeLastImport;
	char _includeHeaders;
	NSMutableArray* _allGroupEntries;
	ABGroupEntry* _allDirectoriesGroupEntry;
	ABGroupEntry* _firstDirectoryGroupEntry;

}

@property (retain) ABAddressBook * addressBook;                        //@synthesize addressBook=_addressBook - In the implementation block
@property (retain) NSArray * directoryAccounts;                        //@synthesize directoryAccounts=_directoryAccounts - In the implementation block
@property (retain) NSArray * persistentAccounts;                       //@synthesize persistentAccounts=_persistentAccounts - In the implementation block
@property (retain) NSArray * smartGroups;                              //@synthesize smartGroups=_smartGroups - In the implementation block
@property (assign) char includeAllContactsForEachAccount;              //@synthesize includeAllContactsForEachAccount=_includeAllContactsForEachAccount - In the implementation block
@property (assign) char includeDirectoriesHeader;                      //@synthesize includeDirectoriesHeader=_includeDirectoriesHeader - In the implementation block
@property (assign) char includeHeaders;                                //@synthesize includeHeaders=_includeHeaders - In the implementation block
@property (assign) char includeLastImport;                             //@synthesize includeLastImport=_includeLastImport - In the implementation block
-(ABAddressBook *)addressBook;
-(NSArray *)persistentAccounts;
-(NSArray *)smartGroups;
-(id)allDirectoriesGroupEntry;
-(id)makeAllContactsEntry;
-(void)addEntriesForAccountEntries:(id)arg1 ;
-(id)childrenEntriesForAccountEntries:(id)arg1 ;
-(id)makeDirectoryEntriesForAccounts:(id)arg1 ;
-(id)directoriesString;
-(id)makeAggregateDirectoryWithName:(id)arg1 directories:(id)arg2 ;
-(char)shouldHideSmartGroupsSection;
-(id)lastImportGroupEntry;
-(id)makeEntriesForSmartGroups:(id)arg1 ;
-(id)smartGroupsString;
-(unsigned long long)countOfVisibleSmartGroups;
-(id)allContactsEntryForAccountEntries:(id)arg1 ;
-(char)shouldAddEntryForAllContactsForAccountEntries:(id)arg1 ;
-(id)lastImportString;
-(char)shouldAddGroupEntryForAllDirectories;
-(id)allDirectoriesString;
-(id)allContactsString;
-(id)allGroupEntries;
-(id)firstDirectoryGroupEntry;
-(void)addSectionEntryWithIdentifier:(id)arg1 name:(id)arg2 ;
-(void)addEntryForAllContacts;
-(void)addEntriesForPersistentAccounts;
-(void)addEntriesForDirectories;
-(void)addEntriesForSmartGroups;
-(NSArray *)directoryAccounts;
-(void)setDirectoryAccounts:(NSArray *)arg1 ;
-(void)setPersistentAccounts:(NSArray *)arg1 ;
-(void)setSmartGroups:(NSArray *)arg1 ;
-(char)includeAllContactsForEachAccount;
-(void)setIncludeAllContactsForEachAccount:(char)arg1 ;
-(char)includeDirectoriesHeader;
-(void)setIncludeDirectoriesHeader:(char)arg1 ;
-(char)includeHeaders;
-(void)setIncludeHeaders:(char)arg1 ;
-(char)includeLastImport;
-(void)setIncludeLastImport:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
-(id)initWithAddressBook:(id)arg1 ;
@end

