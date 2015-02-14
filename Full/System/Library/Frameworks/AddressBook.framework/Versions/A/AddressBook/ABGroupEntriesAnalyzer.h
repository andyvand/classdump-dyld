/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABAccountHidingPolicy;
@class NSArray, ABAddressBook, NSMutableArray;

@interface ABGroupEntriesAnalyzer : NSObject {

	NSArray* _accounts;
	ABAddressBook* _addressBook;
	NSMutableArray* _directoryAccounts;
	NSMutableArray* _persistentAccounts;
	NSMutableArray* _smartGroups;
	NSMutableArray* _visibleAccounts;
	id<ABAccountHidingPolicy> _accountHidingPolicy;

}
-(id)persistentAccounts;
-(id)smartGroups;
-(id)directoryAccounts;
-(void)analyzeAccount:(id)arg1 ;
-(id)initWithAccounts:(id)arg1 addressBook:(id)arg2 hidingPolicy:(id)arg3 ;
-(void)analyzeAccounts;
-(void)collectVisibleAccounts;
-(void)collectPersistentAccounts;
-(void)collectDirectoryAccounts;
-(void)collectSmartGroups;
-(void)dealloc;
@end

