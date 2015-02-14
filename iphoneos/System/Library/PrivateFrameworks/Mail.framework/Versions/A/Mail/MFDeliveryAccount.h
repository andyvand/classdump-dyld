/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFAccount.h>

@interface MFDeliveryAccount : MFAccount
+(void)saveAccountInfoToDefaults;
+(id)deliveryAccounts;
+(void)removeDeliveryAccount:(id)arg1 ;
+(void)registerDynamicAccount:(id)arg1 ;
+(void)unregisterDynamicAccount:(id)arg1 ;
+(void)_postDeliveryAccountsHaveChanged;
+(void)reloadDeliveryAccounts;
+(id)_deliveryAccountsIncludingUnknownTypes;
+(id)_accountFromCollection:(id)arg1 withDeliveryIdentifier:(id)arg2 ;
+(id)accountForHeaders:(id)arg1 ;
+(id)accountWithDeliveryIdentifier:(id)arg1 ;
+(id)_deliveryIdentifierWithHostname:(id)arg1 username:(id)arg2 ;
+(id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(char)arg3 addToDeliveryAccountsIfNeeded:(char)arg4 ;
+(id)existingAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(void)addDeliveryAccount:(id)arg1 ;
+(void)setDeliveryAccounts:(id)arg1 ;
+(void)insertObjectInDeliveryAccounts:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)accountWithDomain:(id)arg1 ;
+(id)accountWithWhichToSendMessage:(id)arg1 ;
+(id)accountWithHostname:(id)arg1 username:(id)arg2 ;
+(void)initialize;
-(void)_setAccountInfo:(id)arg1 ;
-(char)shouldUseAuthentication;
-(char)autodiscoverSettings:(id*)arg1 ;
-(void)setShouldUseAuthentication:(char)arg1 ;
-(void)setAssociatedAccount:(id)arg1 ;
-(id)remoteMailAccountsEmployedBy;
-(id)associatedAccount;
-(id)deliveryIdentifier;
-(char)isDynamic;
-(unsigned long long)maximumMessageBytes;
-(Class)delivererClass;
-(void)setMaximumMessageBytes:(unsigned long long)arg1 ;
-(id)displayName;
@end

