/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSString, NSButton, NSSecureTextField, NSTextField, NSProgressIndicator;

@interface FBAAuthenticationPanel : NSWindowController {

	NSString* _account;
	NSButton* _forgotButton;
	NSString* _password;
	/*^block*/id _completionHandler;
	NSSecureTextField* _passwordField;
	NSTextField* _accountField;
	NSTextField* _errorText;
	NSButton* _signInButton;
	NSProgressIndicator* _spinner;

}

@property (retain) NSString * account;                             //@synthesize account=_account - In the implementation block
@property (retain) NSButton * forgotButton;                        //@synthesize forgotButton=_forgotButton - In the implementation block
@property (retain) NSString * password;                            //@synthesize password=_password - In the implementation block
@property (copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (__weak) NSSecureTextField * passwordField;              //@synthesize passwordField=_passwordField - In the implementation block
@property (__weak) NSTextField * accountField;                     //@synthesize accountField=_accountField - In the implementation block
@property (__weak) NSTextField * errorText;                        //@synthesize errorText=_errorText - In the implementation block
@property (retain) NSButton * signInButton;                        //@synthesize signInButton=_signInButton - In the implementation block
@property (retain) NSProgressIndicator * spinner;                  //@synthesize spinner=_spinner - In the implementation block
-(void)enableUI;
-(NSTextField *)accountField;
-(NSButton *)forgotButton;
-(NSButton *)signInButton;
-(void)disableUI;
-(void)signIn:(id)arg1 ;
-(void)setAccountField:(NSTextField *)arg1 ;
-(void)setErrorText:(NSTextField *)arg1 ;
-(void)setSignInButton:(NSButton *)arg1 ;
-(void)setForgotButton:(NSButton *)arg1 ;
-(void)endSheetWithReturnCode:(long long)arg1 ;
-(void)cancelSheet;
-(NSString *)password;
-(void)beginSheetModalForWindow:(id)arg1 ;
-(NSSecureTextField *)passwordField;
-(void)setPasswordField:(NSSecureTextField *)arg1 ;
-(void)help:(id)arg1 ;
-(NSTextField *)errorText;
-(NSProgressIndicator *)spinner;
-(void)setSpinner:(NSProgressIndicator *)arg1 ;
-(id)init;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancel:(id)arg1 ;
-(void)sheetDidEnd:(id)arg1 returnCode:(unsigned long long)arg2 contextInfo:(void*)arg3 ;
-(void)windowDidLoad;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)forgotPassword:(id)arg1 ;
@end
