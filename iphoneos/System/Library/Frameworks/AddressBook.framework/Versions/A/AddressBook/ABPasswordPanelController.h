/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPanel, NSTextField, NSSecureTextField, NSButton, NSString;

@interface ABPasswordPanelController : NSObject {

	NSPanel* _passwordPanel;
	NSTextField* _passwordPanelDescriptionTextField;
	NSTextField* _passwordPanelReasonTextField;
	NSSecureTextField* _passwordTextField;
	NSButton* _rememberPasswordInKeychainButton;
	NSString* _accountDescription;
	NSString* _accountTypeDescription;
	NSString* _host;
	NSString* _username;
	char _alwaysSavePassword;
	/*^block*/id _completionHandler;

}

@property (assign) char alwaysSavePassword;                        //@synthesize alwaysSavePassword=_alwaysSavePassword - In the implementation block
@property (retain) NSString * accountDescription;                  //@synthesize accountDescription=_accountDescription - In the implementation block
@property (retain) NSString * accountTypeDescription;              //@synthesize accountTypeDescription=_accountTypeDescription - In the implementation block
@property (retain) NSString * host;                                //@synthesize host=_host - In the implementation block
@property (retain) NSString * username;                            //@synthesize username=_username - In the implementation block
@property (readonly) NSString * password; 
@property (readonly) unsigned long long persistence; 
-(NSString *)password;
-(NSString *)username;
-(unsigned long long)persistence;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)accountTypeDescription;
-(void)help:(id)arg1 ;
-(NSString *)accountDescription;
-(id)localizedReason;
-(char)alwaysSavePassword;
-(void)passwordSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)passwordPanelDescription;
-(void)setPasswordPanelDescription:(id)arg1 ;
-(id)passwordPanelReason;
-(void)setPasswordPanelReason:(id)arg1 ;
-(void)changePassword:(id)arg1 ;
-(void)setAlwaysSavePassword:(char)arg1 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)setAccountTypeDescription:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setHost:(NSString *)arg1 ;
-(id)localizedDescription;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancel:(id)arg1 ;
-(NSString *)host;
@end
