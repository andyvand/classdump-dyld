/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABAccountFactoryDelegate;
@class NSString, ABUserDefaults;

@interface ABAccountFactory : NSObject {

	NSString* _basePath;
	ABUserDefaults* _userDefaults;
	NSString* _tag;
	id<ABAccountFactoryDelegate> _delegate;

}

@property (assign) id<ABAccountFactoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * tag;                                       //@synthesize tag=_tag - In the implementation block
@property (readonly) NSString * basePath;                              //@synthesize basePath=_basePath - In the implementation block
+(Class)sourceClassForClassName:(id)arg1 ;
+(id)userLdapServers;
+(id)ldapServerWithIdentifier:(id)arg1 ;
+(void)enumeratePersistentAccountsAtBasePath:(id)arg1 block:(/*^block*/id)arg2 ;
+(char)isDirectoryServicesConfigured;
+(id)sharedInstance;
-(NSString *)basePath;
-(Class)sourceClassForClassName:(id)arg1 ;
-(id)initWithBasePath:(id)arg1 ;
-(id)makeAccountWithExistingSource:(id)arg1 ;
-(id)uncachedAccountWithIdentifier:(id)arg1 ;
-(id)uncachedAccounts;
-(id)accountBuilderForAccountAtPath:(id)arg1 withIdentifier:(id)arg2 ;
-(id)accountAtPath:(id)arg1 withIdentifier:(id)arg2 ;
-(id)ldapAccountWithServerInfo:(id)arg1 ;
-(id)pointOfInterestAccount;
-(id)persistentAccountWithIdentifier:(id)arg1 ;
-(id)ldapAccountWithIdentifier:(id)arg1 ;
-(id)directoryServicesAccount;
-(id)uncachedLdapAccounts;
-(id)uncachedPersistentAccounts;
-(id)localAccount;
-(id)init;
-(void)setDelegate:(id<ABAccountFactoryDelegate>)arg1 ;
-(void)dealloc;
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(id<ABAccountFactoryDelegate>)delegate;
@end

