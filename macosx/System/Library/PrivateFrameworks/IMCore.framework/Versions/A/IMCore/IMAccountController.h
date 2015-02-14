/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface IMAccountController : NSObject {

	NSMutableArray* _accounts;
	NSMutableDictionary* _accountMap;
	char _isReadOnly;
	char _cachesEnabled;
	NSArray* _operationalAccountsCache;
	NSMutableDictionary* _serviceToActiveAccountsMap;
	NSMutableDictionary* _serviceToAccountsMap;
	NSMutableDictionary* _serviceToConnectedAccountsMap;
	NSMutableDictionary* _serviceToOperationalAccountsMap;

}

@property (nonatomic,readonly) int numberOfAccounts; 
@property (nonatomic,readonly) NSArray * accounts;                         //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,readonly) NSArray * activeAccounts; 
@property (nonatomic,readonly) NSArray * connectedAccounts; 
@property (nonatomic,readonly) NSArray * operationalAccounts; 
@property (nonatomic,readonly) NSMutableArray * _accounts; 
@property (nonatomic,readonly) id bestAccountForStatus; 
+(id)bestAccountFromAccounts:(id)arg1 ;
+(id)sharedInstance;
-(void)deleteiMessageAccount:(id)arg1 ;
-(void)_deleteExtraiMessageAccounts;
-(void)addiMessageAccountIfNeeded;
-(char)iMessageAccountIsDisabled:(id)arg1 ;
-(unsigned long long)myStatus;
-(id)bestAccountForStatus;
-(char)insertAccount:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_sortAccounts;
-(void)_saveSortedAccounts;
-(char)hasActiveLegacyAccount;
-(id)accountForService:(id)arg1 withConferenceName:(id)arg2 ;
-(id)sortOrderForAccounts:(id)arg1 ;
-(id)connectedSiblingsForAccount:(id)arg1 ;
-(id)accountsSupportingStatus;
-(id)bestAccountForServiceWithABProperty:(id)arg1 ;
-(id)activeAccountsSupportingStatus;
-(char)hasConnectedAccounts;
-(char)load;
-(char)save;
-(NSArray *)activeAccounts;
-(void)setReadOnly:(char)arg1 ;
-(NSArray *)accounts;
-(char)readOnly;
-(id)activeAccountsForService:(id)arg1 ;
-(id)connectedAccountsForService:(id)arg1 ;
-(id)accountsWithCapability:(unsigned long long)arg1 ;
-(id)connectedAccountsWithCapability:(unsigned long long)arg1 ;
-(id)operationalAccountsWithCapability:(unsigned long long)arg1 ;
-(id)accountsForService:(id)arg1 ;
-(id)accountForUniqueID:(id)arg1 ;
-(char)addAccount:(id)arg1 ;
-(void)autoLogin;
-(id)bestAccountForStatus;
-(NSArray *)connectedAccounts;
-(char)activateAccount:(id)arg1 locally:(char)arg2 ;
-(char)_deactivateAccount:(id)arg1 ;
-(char)addAccount:(id)arg1 locally:(char)arg2 ;
-(char)deleteAccount:(id)arg1 locally:(char)arg2 ;
-(char)deactivateAccount:(id)arg1 withDisable:(char)arg2 ;
-(char)activateAccounts:(id)arg1 ;
-(char)deactivateAccounts:(id)arg1 ;
-(id)_bestAccountForAddresses:(id)arg1 ;
-(void)_activeAccountChanged:(id)arg1 ;
-(void)_accountRegistrationStatusChanged:(id)arg1 ;
-(char)accountActive:(id)arg1 ;
-(NSArray *)operationalAccounts;
-(void)_rebuildOperationalAccountsCache:(char)arg1 ;
-(char)deactivateAccounts:(id)arg1 withDisable:(char)arg2 ;
-(char)_deactivateAccounts:(id)arg1 ;
-(char)canActivateAccounts:(id)arg1 ;
-(char)activateAccounts:(id)arg1 force:(char)arg2 locally:(char)arg3 ;
-(char)activateAccount:(id)arg1 force:(char)arg2 locally:(char)arg3 ;
-(char)activateAndHandleReconnectAccounts:(id)arg1 ;
-(char)canActivateAccount:(id)arg1 ;
-(id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)operationalAccountsForService:(id)arg1 ;
-(id)bestAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestActiveAccountForService:(id)arg1 ;
-(id)bestAccountForService:(id)arg1 ;
-(id)accountAtIndex:(int)arg1 ;
-(int)numberOfAccounts;
-(NSMutableArray *)_accounts;
-(char)canDeleteAccount:(id)arg1 ;
-(char)addAccount:(id)arg1 atIndex:(int)arg2 ;
-(char)addAccount:(id)arg1 atIndex:(int)arg2 locally:(char)arg3 ;
-(char)activateAccount:(id)arg1 ;
-(char)activateAccount:(id)arg1 force:(char)arg2 ;
-(char)activateAndHandleReconnectAccount:(id)arg1 ;
-(char)accountConnecting:(id)arg1 ;
-(char)accountConnected:(id)arg1 ;
-(id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3 ;
-(id)bestOperationalAccountForService:(id)arg1 ;
-(id)bestConnectedAccountForService:(id)arg1 ;
-(id)bestAccountWithCapability:(unsigned long long)arg1 ;
-(id)mostLoggedInAccount;
-(id)aimAccount;
-(id)jabberAccount;
-(void)_enableCache;
-(void)_disableCache;
-(id)_bestOperationalAccountForSendingForService:(id)arg1 ;
-(id)__iCloudSystemAccountForService:(id)arg1 ;
-(id)_operationalPhoneAccountForService:(id)arg1 ;
-(char)deleteAccount:(id)arg1 ;
-(char)deactivateAccount:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

