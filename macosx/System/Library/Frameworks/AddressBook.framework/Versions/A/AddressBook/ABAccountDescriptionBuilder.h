/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface ABAccountDescriptionBuilder : NSObject {

	NSSet* _existingAccountDescriptions;

}
-(id)initWithRepository:(id)arg1 ;
-(id)accountDescriptionFromType:(id)arg1 config:(id)arg2 customizationPolicy:(id)arg3 ;
-(id)initWithExistingAccountDescriptions:(id)arg1 ;
-(id)domainForAddress:(id)arg1 ;
-(id)accountDescriptionFromDomain:(id)arg1 ;
-(id)serverAddressFromConfig:(id)arg1 ;
-(id)accountDescriptionFromAddress:(id)arg1 ;
-(id)internetAccountsTypeForAddressBookAccountType:(id)arg1 ;
-(id)internetAccountsSettingsFromType:(id)arg1 config:(id)arg2 ;
-(id)accountDescriptionFromInternetAccountsFromType:(id)arg1 config:(id)arg2 ;
-(id)accountDescriptionFromConfig:(id)arg1 ;
-(char)isAccountDescriptionAlreadyUsed:(id)arg1 ;
-(void)dealloc;
@end

