/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MCISPAccountSettingsManager : NSObject {

	NSMutableDictionary* _ispAccountsSettings;
	NSMutableDictionary* _ispReceivingAccountsSettingsByDomain;
	NSMutableDictionary* _ispDeliveryAccountsSettingsByDomain;
	NSMutableDictionary* _ispDeliveryAccountsSettingsByIdentifier;

}
+(id)locallyInstalledSettings;
+(id)onlineDatabaseSettings;
+(id)_alwaysPersistedKeys;
+(id)_accountInformationStringForKey:(id)arg1 localizedKey:(id)arg2 domain:(id)arg3 ;
+(id)ispSupportURLForDomain:(id)arg1 ;
+(id)ispSupportURLLabelForDomain:(id)arg1 ;
+(id)ispSubscriptionURLForDomain:(id)arg1 ;
+(id)ispSubscriptionURLLabelForDomain:(id)arg1 ;
+(char)ispAccountInformationAvailableForDomain:(id)arg1 ;
+(id)ispBrandNameForDomain:(id)arg1 ;
+(void)initialize;
-(id)receivingAccountSettingsForDomain:(id)arg1 ;
-(id)deliveryAccountsSettingsForDomain:(id)arg1 ;
-(void)_unloadISPAccounts;
-(id)_persistanceFolderName;
-(void)_loadISPPlistsAtPath:(id)arg1 ;
-(void)_loadISPPlist:(id)arg1 bundle:(id)arg2 path:(id)arg3 ;
-(char)_getAccountIsReceivingAccount:(char*)arg1 isDeliveryAccount:(char*)arg2 fromAccountSettings:(id)arg3 ;
-(char)_shouldVerifyLoadedISPPlist;
-(id)_persistantAccountSettings:(id)arg1 ;
-(id)_persistantISPAccountSettings:(id)arg1 ;
-(void)_loadISPAccountsIfNecessary;
-(id)_receivingAccountSettingsForDomain:(id)arg1 fetchIfNecessary:(char)arg2 ;
-(id)_deliveryAccountsSettingsForDomain:(id)arg1 fetchIfNecessary:(char)arg2 ;
-(char)_persistISPPlist:(id)arg1 ;
-(void)emptyCache;
-(void)dealloc;
@end

