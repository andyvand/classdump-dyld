/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSTextField, NSSecureTextField, NSButton, NSImageView, NSProgressIndicator, IAAccount, NSDictionary, NSString, NSImage;

@interface IAPasswordUIController : NSWindowController {

	NSTextField* _alertTitleField;
	NSTextField* _alertMessageField;
	NSSecureTextField* _passwordField;
	NSButton* _okButton;
	NSImageView* _icon;
	NSTextField* _statusText;
	NSProgressIndicator* _spinner;
	/*^block*/id _completion;
	IAAccount* _parentAccount;
	NSDictionary* _settings;
	NSString* _bundleID;
	NSString* _aListPluginID;
	NSString* _aListProviderID;
	NSString* _accountDescription;
	NSString* _userName;
	NSString* _password;
	NSString* _prepopulatedPassword;
	NSString* _customAppName;
	NSImage* _customIcon;
	char _isSheet;
	char _accountSettingsValidForCompare;
	char _doCoalesce;
	long long _result;
	id _strongSelf;
	NSString* _uid;

}

@property (retain) NSString * uid;                               //@synthesize uid=_uid - In the implementation block
@property (retain) NSDictionary * settings;                      //@synthesize settings=_settings - In the implementation block
@property (readonly) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (retain) NSString * prepopulatedPassword;              //@synthesize prepopulatedPassword=_prepopulatedPassword - In the implementation block
@property (retain) NSString * customAppName;                     //@synthesize customAppName=_customAppName - In the implementation block
@property (retain) NSImage * customIcon;                         //@synthesize customIcon=_customIcon - In the implementation block
@property (assign) char doCoalesce;                              //@synthesize doCoalesce=_doCoalesce - In the implementation block
@property (assign) long long result;                             //@synthesize result=_result - In the implementation block
-(char)_getAccountInfo;
-(void)_configureUI;
-(void)_displayForWindow:(id)arg1 ;
-(void)_notifyPlugins;
-(char)_settingsAreSame:(id)arg1 ;
-(NSString *)customAppName;
-(NSImage *)customIcon;
-(void)_passwordDidChange:(id)arg1 ;
-(NSString *)prepopulatedPassword;
-(void)setPrepopulatedPassword:(NSString *)arg1 ;
-(void)setCustomAppName:(NSString *)arg1 ;
-(void)setCustomIcon:(NSImage *)arg1 ;
-(char)doCoalesce;
-(void)setSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)settings;
-(NSString *)password;
-(void)help:(id)arg1 ;
-(void)abort;
-(void)setDoCoalesce:(char)arg1 ;
-(void)displayForWindow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authFailed:(id)arg1 ;
-(void)setResult:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)close;
-(long long)result;
-(void)dismiss;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(void)done:(id)arg1 ;
@end

