/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MFIMAPAccount.h>

@class MFAosSmtpAccount;

@interface MFAosImapAccount : MFIMAPAccount {

	id _aoskitLock;
	AOSAccountRef _aoskitAccount;
	AOSTransactionCRef _mailPropertiesTransaction;
	AOSTransactionCRef _aliasesTransaction;
	AOSTransactionCRef _editAliasesURLTransaction;
	unsigned char _shouldBypassCache;
	MFAosSmtpAccount* _aosSmtpAccount;

}

@property (assign) unsigned char shouldBypassCache;                            //@synthesize shouldBypassCache=_shouldBypassCache - In the implementation block
@property (nonatomic,readonly) MFAosSmtpAccount * aosSmtpAccount;              //@synthesize aosSmtpAccount=_aosSmtpAccount - In the implementation block
+(char)defaultsToSSL;
+(id)defaultPathNameForAccount;
+(id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(void)updateAllEmailAliases:(char)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)setHostname:(id)arg1 ;
-(id)hostname;
-(id)initWithAccountInfo:(id)arg1 ;
-(id)defaultsDictionary;
-(void)_setAccountInfo:(id)arg1 ;
-(id)canonicalEmailAddress;
-(id)permanentPassword;
-(id)preferredAuthScheme;
-(void)setSessionPassword:(id)arg1 ;
-(void)setPermanentPassword:(id)arg1 ;
-(char)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char*)arg3 ;
-(char)autodiscoverSettings:(id*)arg1 ;
-(char)canAuthenticateWithScheme:(id)arg1 ;
-(id)applePersonID;
-(id)appleAuthenticationToken;
-(void)setIsOffline:(char)arg1 ;
-(char)usesConnectionBasedAutodiscovery;
-(id)deliveryAccount;
-(void)_updateAoskitAccount;
-(void)_updateAliases:(char)arg1 ;
-(void)completeDeferredInitialization;
-(char)_didUpdateToAppleToken;
-(id)_passwordFromKeychain;
-(id)aoskitPropertyForKey:(CFStringRef)arg1 ;
-(AOSAccountRef)_copyAoskitAccount;
-(void)setShouldBypassCache:(unsigned char)arg1 ;
-(id)rawEmailAddresses;
-(MFAosSmtpAccount *)aosSmtpAccount;
-(id)_replacementDeliveryAccountForDeliveryAccount:(id)arg1 ;
-(void)setDeliveryAccount:(id)arg1 ;
-(void)_removeDeliveryAccountIfNotInUse:(id)arg1 ;
-(void)migrateToNewAOSService;
-(void)handleAlertResponse:(id)arg1 ;
-(void)_setDidUpdateToAppleToken:(char)arg1 ;
-(void)_setAoskitAccount:(AOSAccountRef)arg1 ;
-(void)_updateMailProperties;
-(AOSTransactionCRef)_copyAliasesTransaction;
-(void)_setAliasesTransaction:(AOSTransactionCRef)arg1 ;
-(void)updateEmailAliases;
-(AOSTransactionCRef)_copyMailPropertiesTransaction;
-(unsigned char)shouldBypassCache;
-(void)_setMailPropertiesTransaction:(AOSTransactionCRef)arg1 ;
-(AOSTransactionCRef)_copyEditAliasesURLTransaction;
-(void)_setEditAliasesURLTransaction:(AOSTransactionCRef)arg1 ;
-(id)_URLPersistenceHostname;
-(void)_setEmailAliases:(id)arg1 ;
-(id)dynamicDeliveryAccount;
-(void)presentOverQuotaAlert;
-(void)setDefaultAddress:(id)arg1 ;
-(void)openEditEmailAliasesURL;
-(long long)lastSuccessfulAosSmtpPortNumber;
-(long long)lastSuccessfulAosSmtpSecurityLayerType;
-(void)setLastSuccessfulAosSmtpPortNumber:(long long)arg1 ;
-(void)setLastSuccessfulAosSmtpSecurityLayerType:(long long)arg1 ;
-(void)dealloc;
-(id)emailAddresses;
-(void)setPassword:(id)arg1 ;
@end

