/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSString, NSMutableDictionary, NSArray, NSView, NSButton;

@interface IACrossAppSetupViewController : NSViewController {

	NSString* _appBundleID;
	NSMutableDictionary* _settings;
	id _delegate;
	void* _contextInfo;
	NSString* _providerID;
	NSString* _accountID;
	NSMutableDictionary* _existingAccounts;
	NSMutableDictionary* _checkboxes;
	NSMutableDictionary* _apps;
	NSArray* _topLevelObjects2;
	NSView* _view;
	NSButton* _checkbox1;
	NSButton* _checkbox2;
	NSButton* _checkbox3;
	NSButton* _checkbox4;
	NSButton* _checkbox5;

}

@property (retain) NSString * appBundleID;                      //@synthesize appBundleID=_appBundleID - In the implementation block
@property (retain) NSMutableDictionary * settings;              //@synthesize settings=_settings - In the implementation block
-(void)setAppBundleID:(NSString *)arg1 ;
-(id)_possibleAppleIDForSettings:(id)arg1 ;
-(id)_providerIDForServerAddress:(id)arg1 ;
-(char)_isCastle;
-(id)_providerIDForSettings:(id)arg1 ;
-(void)_fillInCastleInfo;
-(void)_findAccountsMatchingAccountID:(id)arg1 ;
-(void)_findAppsForServices;
-(char)_initData;
-(char)_accountIsEnabledForApp:(id)arg1 ;
-(char)_createAccounts;
-(id)initWithSettings:(id)arg1 appBundleID:(id)arg2 ;
-(unsigned long long)numberOfAppsNeedingSetup;
-(void)createAccountsWithDelegate:(id)arg1 didCreateSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(NSString *)appBundleID;
-(void)setSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)settings;
-(char)createAccounts;
-(id)view;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

