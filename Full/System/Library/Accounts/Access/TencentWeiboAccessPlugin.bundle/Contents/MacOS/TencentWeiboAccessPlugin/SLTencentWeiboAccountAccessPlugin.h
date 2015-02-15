/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Accounts/Access/TencentWeiboAccessPlugin.bundle/Contents/MacOS/TencentWeiboAccessPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TencentWeiboAccessPlugin/ACDAccountAccessPlugin.h>

@class NSString;

@interface SLTencentWeiboAccountAccessPlugin : NSObject <ACDAccountAccessPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsAccountTypeWithIdentifier:(id)arg1 ;
-(id)_appIDFromOptionsDictionary:(id)arg1 ;
-(id)_persistentDictionaryForOptions:(id)arg1 ;
-(void)setAuthorization:(id)arg1 status:(char)arg2 forClient:(id)arg3 store:(id)arg4 onAccountType:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_saveCredentialForClient:(id)arg1 onAccount:(id)arg2 usingAccessToken:(id)arg3 openID:(id)arg4 consumerKey:(id)arg5 ;
-(char)validateServerAuthorizationReturnObject:(id)arg1 ;
-(void)_getServerAuthorizationForClient:(id)arg1 withAppID:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)TencentWeiboIconURL;
-(char)_validateOptionsDictionary:(id)arg1 ;
-(void)_handleUserResponse:(char)arg1 toRequestForClient:(id)arg2 withAppID:(id)arg3 persistentOptions:(id)arg4 onAccount:(id)arg5 ofType:(id)arg6 shouldSkipServer:(char)arg7 store:(id)arg8 completion:(/*^block*/id)arg9 ;
-(id)_errorForErrorCode:(id)arg1 ;
-(id)_accountOfType:(id)arg1 withStore:(id)arg2 ;
-(void)_presentAccessAlertforClient:(id)arg1 onAccountType:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

