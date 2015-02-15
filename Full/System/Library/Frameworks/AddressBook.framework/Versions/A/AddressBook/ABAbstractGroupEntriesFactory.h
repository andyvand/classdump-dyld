/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABGroupEntriesFactory.h>

@class NSArray, ABAddressBook, NSString;

@interface ABAbstractGroupEntriesFactory : NSObject <ABGroupEntriesFactory> {

	NSArray* _accounts;
	ABAddressBook* _addressBook;

}

@property (retain) NSArray * accounts;                              //@synthesize accounts=_accounts - In the implementation block
@property (retain) ABAddressBook * addressBook;                     //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ABAddressBook *)addressBook;
-(NSArray *)accounts;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)setAccounts:(id)arg1 withAddressBook:(id)arg2 ;
-(id)sortAccounts:(id)arg1 ;
-(id)makeGroupEntries;
-(id)makeGroupEntriesWithHidingPolicy:(id)arg1 ;
-(void)dealloc;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
@end

