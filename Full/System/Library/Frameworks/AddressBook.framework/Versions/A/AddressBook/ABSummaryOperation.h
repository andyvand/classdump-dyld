/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ABAccountRepository, NSString;

@interface ABSummaryOperation : NSOperation {

	ABAccountRepository* _accountRepository;
	NSString* _accountIdentifier;

}
-(id)initWithAccountRepository:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)makeAccount;
-(id)makeAddressBookForAccount:(id)arg1 ;
-(id)makeSummaryOfAddressBook:(id)arg1 ;
-(void)exportSummary:(id)arg1 accountName:(id)arg2 ;
-(id)outputURLWithAccountName:(id)arg1 ;
-(void)dealloc;
-(void)main;
@end

