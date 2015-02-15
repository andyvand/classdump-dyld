/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABAccountRepository, ABUserDefaults;

@interface ABDefaultAccountPreference : NSObject {

	ABAccountRepository* _repository;
	ABUserDefaults* _preferences;

}
-(void)registerForNotifications;
-(id)defaultAccount;
-(id)initWithAccountRepository:(id)arg1 ;
-(void)setDefaultAccount:(id)arg1 ;
-(id)initWithAccountRepository:(id)arg1 defaults:(id)arg2 ;
-(id)sanityCheckDefaultAcountIdentifier:(id)arg1 ;
-(id)sanityCheckDefaultAccount:(id)arg1 ;
-(id)fallbackAccount;
-(void)postDidChangeNotifications;
-(void)defaultAccountChangedExternally:(id)arg1 ;
-(void)postLocalNotification;
-(void)postDistributedNotification;
-(void)dealloc;
@end
