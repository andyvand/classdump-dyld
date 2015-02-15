/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IAAListPlugin.h>

@class NSTextField, NSSecureTextField, NSProgressIndicator, NSButton, NSImageView, NSView, NSString, IAAccount, ACAccountsHelper, NSImage;

@interface IAExtensionAdapter : IAAListPlugin {

	NSTextField* _userNameField;
	NSSecureTextField* _passwordField;
	NSProgressIndicator* _statusSpinner;
	NSTextField* _statusText;
	NSTextField* _errorText;
	NSButton* _loginOK;
	NSButton* _loginCancel;
	NSImageView* _signInLogo;
	NSView* _view;
	NSTextField* _detailsUserName;
	NSTextField* _detailsDescription;
	NSSecureTextField* _detailsPassword;
	NSProgressIndicator* _detailsPasswordSpinner;
	NSImageView* _mainViewLogo;
	char _nibLoaded;
	char _canceled;
	NSString* _userNameString;
	NSString* _passwordString;
	IAAccount* _accountRepresentedInUI;
	ACAccountsHelper* _acHelper;
	NSImage* _logo;
	NSImage* _icon;
	char _supportsCustomSignInUI;
	NSString* _accountTypeIdentifier;
	NSString* _accountTypeHumanReadableName;
	NSString* _accountTypeOwningBundleID;

}

@property (retain) NSString * passwordString;                            //@synthesize passwordString=_passwordString - In the implementation block
@property (retain) NSString * userNameString;                            //@synthesize userNameString=_userNameString - In the implementation block
@property (retain) NSString * accountTypeIdentifier;                     //@synthesize accountTypeIdentifier=_accountTypeIdentifier - In the implementation block
@property (retain) NSString * accountTypeHumanReadableName;              //@synthesize accountTypeHumanReadableName=_accountTypeHumanReadableName - In the implementation block
@property (retain) NSString * accountTypeOwningBundleID;                 //@synthesize accountTypeOwningBundleID=_accountTypeOwningBundleID - In the implementation block
@property (assign) char supportsCustomSignInUI;                          //@synthesize supportsCustomSignInUI=_supportsCustomSignInUI - In the implementation block
-(id)accountStore;
-(id)bannerImage;
-(id)bannerImageLarge;
-(id)imageForAccount:(id)arg1 ;
-(void)configViewWillLoad;
-(void)createAccountInWindow:(id)arg1 ;
-(id)accountFromSettings:(id)arg1 ;
-(void)continueButton:(id)arg1 ;
-(void)setAccountTypeIdentifier:(NSString *)arg1 ;
-(void)setAccountTypeHumanReadableName:(NSString *)arg1 ;
-(void)setAccountTypeOwningBundleID:(NSString *)arg1 ;
-(char)supportsCustomSignInUI;
-(void)detailsTextDidEndEditing:(id)arg1 ;
-(void)_loadNibIfNeeded;
-(NSString *)accountTypeOwningBundleID;
-(id)acHelper;
-(void)finishAuthentication:(id)arg1 success:(char)arg2 error:(id)arg3 ;
-(char)authenticateName:(id)arg1 password:(id)arg2 error:(id*)arg3 ;
-(void)setUserNameString:(NSString *)arg1 ;
-(void)setPasswordString:(NSString *)arg1 ;
-(NSString *)userNameString;
-(void)startAuthentication;
-(void)pluginDidLoad;
-(id)createACAccountWithLoginName:(id)arg1 password:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(long long)authType;
-(void)authenticate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSString *)passwordString;
-(id)initWithBundle:(id)arg1 ;
-(id)initWithAccountType:(id)arg1 ;
-(NSString *)accountTypeIdentifier;
-(NSString *)accountTypeHumanReadableName;
-(void)setSupportsCustomSignInUI:(char)arg1 ;
-(id)defaultAccountDescription;
-(id)viewForAccount:(id)arg1 ;
-(id)iconImage;
-(void)dealloc;
-(id)identifier;
-(void)textDidChange:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(id)brandName;
@end
