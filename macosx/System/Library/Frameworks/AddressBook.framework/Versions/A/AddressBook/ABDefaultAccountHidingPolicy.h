/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABAccountHidingPolicy.h>

@class ABAddressBook, NSString;

@interface ABDefaultAccountHidingPolicy : NSObject <ABAccountHidingPolicy> {

	ABAddressBook* _addressBook;
	unsigned long long _numberOfDefaultableAccounts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isDefaultAccount:(id)arg1 ;
-(char)isAccountEligibleForHiding:(id)arg1 ;
-(char)isAccountEmpty:(id)arg1 ;
-(void)analyzeAccount:(id)arg1 ;
-(char)shouldHideAccount:(id)arg1 ;
-(void)dealloc;
-(id)initWithAddressBook:(id)arg1 ;
@end
