/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SystemAdministration/SystemAdministration-Structs.h>
@interface ADMLoginPrefs : NSObject
+(id)sharedLoginPrefs;
-(CFBundleRef)_loginFrameworkBundle;
-(char)_boolFromCFValue:(void*)arg1 ;
-(int)_setAutoLoginPassword:(id)arg1 ;
-(id)automaticLoginUser;
-(char)setAutomaticLoginUser:(id)arg1 password:(id)arg2 ;
-(void)syncLoginPrefs;
-(id)loginAuthenticator;
-(void)setLoginAuthenticator:(id)arg1 ;
-(long long)numberOfRetriesBeforeHintIsDisplayed;
-(void)setNumberOfRetriesBeforeHintIsDisplayed:(long long)arg1 ;
-(char)showHostname;
-(void)setShowHostname:(char)arg1 ;
-(char)otherUserEnabled;
-(void)showOtherUser:(char)arg1 ;
-(char)showListEnabled;
-(void)showList:(char)arg1 ;
-(char)isVOEnabled;
-(void)setVOEnabled:(char)arg1 ;
-(char)isIMEnabled;
-(void)setIMEnabled:(char)arg1 ;
-(char)disableRestartShutdown;
-(void)setDisableRestartShutdown:(char)arg1 ;
-(void)setAutoLoginUser:(id)arg1 password:(id)arg2 ;
-(void)convertFileVaultForCurrentUserWithPassword:(id)arg1 ;
-(void)setGuestUserPassword:(id)arg1 accountName:(id)arg2 ;
-(char)setAutomaticLoginUser:(id)arg1 uid:(long long)arg2 password:(id)arg3 ;
-(void)enableFileVaultForCurrentUserWithPassword:(id)arg1 ;
-(void)disableFileVaultForCurrentUserWithPassword:(id)arg1 ;
-(char)setFileVaultPassword:(id)arg1 oldPassword:(id)arg2 ;
@end

