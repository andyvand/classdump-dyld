/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class ABAccount, ABAddressBook, ABGroup, NSArray;


@protocol ABPersonListControllerProtocol <NSObject>
@property (retain) ABAccount * account; 
@property (retain) ABAddressBook * addressBook; 
@property (retain) ABGroup * displayedGroup; 
@property (readonly) NSArray * entries; 
@property (readonly) NSArray * personEntries; 
@property (readonly) char shouldIncludeGroups; 
@required
-(ABAddressBook *)addressBook;
-(void)setFilterTerms:(id)arg1;
-(void)fetchContacts;
-(char)shouldIncludeGroups;
-(ABGroup *)displayedGroup;
-(void)setShouldUnifyPeople:(char)arg1;
-(void)setHeadliner:(id)arg1;
-(void)setSelectedEntries:(id)arg1;
-(void)clearExtraUniqueIdsInSearchResults;
-(void)reflectChangesInUIForNotificationUserInfo:(id)arg1;
-(void)scrollVisibleToSelectedRow;
-(void)setDisplayedGroup:(id)arg1;
-(NSArray *)personEntries;
-(NSArray *)entries;
-(void)rearrangeObjects;
-(void)selectNext:(id)arg1;
-(void)selectPrevious:(id)arg1;
-(ABAccount *)account;
-(void)setAccount:(id)arg1;
-(void)setAddressBook:(id)arg1;

@end

