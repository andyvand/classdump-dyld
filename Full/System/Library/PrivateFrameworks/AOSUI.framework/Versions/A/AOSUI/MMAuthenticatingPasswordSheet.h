/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:25 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MMAuthenticatingPasswordSheetDelegate;
#import <AOSUI/AOSUI-Structs.h>
@class NSString, NSWindow, NSImageView, NSTextField, NSSecureTextField, NSButton, NSProgressIndicator, NSURL, NSError, NSLayoutConstraint;

@interface MMAuthenticatingPasswordSheet : NSObject {

	id<MMAuthenticatingPasswordSheetDelegate> _delegate;
	NSString* _accountID;
	NSString* _password;
	NSWindow* _parentWindow;
	NSWindow* _passwordWindow;
	NSImageView* _passwordIcon;
	NSTextField* _passwordTitle;
	NSTextField* _passwordMessage;
	NSTextField* _passwordLabel;
	NSSecureTextField* _passwordField;
	NSButton* _passwordDefaultButton;
	NSButton* _passwordCancelButton;
	NSButton* _passwordAlternateButton;
	NSButton* _passwordForgotButton;
	NSProgressIndicator* _passwordProgressSpinner;
	NSTextField* _passwordErrorField;
	NSButton* _passwordHelpButton;
	NSURL* _iForgotURL;
	NSError* _authenticationError;
	NSLayoutConstraint* _incorrectPasswordToCancelButtonConstraint;
	NSLayoutConstraint* _secureTextFieldToincorrectPasswordConstraint;
	double _originalSecureTextFieldToIncorrectPasswordConstant;
	double _originalIncorrectPasswordToCancelButtonConstant;
	/*^block*/id _helpHandler;

}

@property (assign) id<MMAuthenticatingPasswordSheetDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * accountID;                                                             //@synthesize accountID=_accountID - In the implementation block
@property (copy) NSString * password;                                                              //@synthesize password=_password - In the implementation block
@property (copy) NSURL * iForgotURL; 
@property (retain) NSError * authenticationError;                                                  //@synthesize authenticationError=_authenticationError - In the implementation block
@property (assign) NSWindow * parentWindow;                                                        //@synthesize parentWindow=_parentWindow - In the implementation block
@property (copy) id helpHandler;                                                                   //@synthesize helpHandler=_helpHandler - In the implementation block
@property (retain) NSWindow * passwordWindow;                                                      //@synthesize passwordWindow=_passwordWindow - In the implementation block
@property (retain) NSImageView * passwordIcon;                                                     //@synthesize passwordIcon=_passwordIcon - In the implementation block
@property (retain) NSTextField * passwordTitle;                                                    //@synthesize passwordTitle=_passwordTitle - In the implementation block
@property (retain) NSTextField * passwordMessage;                                                  //@synthesize passwordMessage=_passwordMessage - In the implementation block
@property (retain) NSTextField * passwordLabel;                                                    //@synthesize passwordLabel=_passwordLabel - In the implementation block
@property (retain) NSSecureTextField * passwordField;                                              //@synthesize passwordField=_passwordField - In the implementation block
@property (retain) NSButton * passwordDefaultButton;                                               //@synthesize passwordDefaultButton=_passwordDefaultButton - In the implementation block
@property (retain) NSButton * passwordCancelButton;                                                //@synthesize passwordCancelButton=_passwordCancelButton - In the implementation block
@property (retain) NSButton * passwordAlternateButton;                                             //@synthesize passwordAlternateButton=_passwordAlternateButton - In the implementation block
@property (retain) NSButton * passwordForgotButton;                                                //@synthesize passwordForgotButton=_passwordForgotButton - In the implementation block
@property (retain) NSProgressIndicator * passwordProgressSpinner;                                  //@synthesize passwordProgressSpinner=_passwordProgressSpinner - In the implementation block
@property (retain) NSTextField * passwordErrorField;                                               //@synthesize passwordErrorField=_passwordErrorField - In the implementation block
@property (retain) NSButton * passwordHelpButton;                                                  //@synthesize passwordHelpButton=_passwordHelpButton - In the implementation block
@property (retain) NSLayoutConstraint * incorrectPasswordToCancelButtonConstraint;                 //@synthesize incorrectPasswordToCancelButtonConstraint=_incorrectPasswordToCancelButtonConstraint - In the implementation block
@property (retain) NSLayoutConstraint * secureTextFieldToincorrectPasswordConstraint;              //@synthesize secureTextFieldToincorrectPasswordConstraint=_secureTextFieldToincorrectPasswordConstraint - In the implementation block
+(id)standardiForgotURL;
-(NSString *)password;
-(NSSecureTextField *)passwordField;
-(void)setPasswordField:(NSSecureTextField *)arg1 ;
-(id)initWithAccountID:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 alternateButtonTitle:(id)arg6 icon:(id)arg7 ;
-(void)setIForgotURL:(NSURL *)arg1 ;
-(NSError *)authenticationError;
-(void)showPasswordSheetUsingWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_isTransactionSuccessful:(AOSTransactionCRef)arg1 ;
-(id)_errorFromTransaction:(AOSTransactionCRef)arg1 ;
-(void)showPasswordSheetUsingWindow:(id)arg1 ;
-(NSWindow *)passwordWindow;
-(void)setPasswordWindow:(NSWindow *)arg1 ;
-(NSImageView *)passwordIcon;
-(void)setPasswordIcon:(NSImageView *)arg1 ;
-(NSButton *)passwordCancelButton;
-(void)setPasswordCancelButton:(NSButton *)arg1 ;
-(void)stopPasswordSheet;
-(void)showPasswordSheetUsingWindow:(id)arg1 shouldNest:(char)arg2 helpHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSTextField *)passwordLabel;
-(NSTextField *)passwordErrorField;
-(NSButton *)passwordForgotButton;
-(NSButton *)passwordDefaultButton;
-(NSButton *)passwordAlternateButton;
-(void)setAuthenticationError:(NSError *)arg1 ;
-(NSLayoutConstraint *)incorrectPasswordToCancelButtonConstraint;
-(NSLayoutConstraint *)secureTextFieldToincorrectPasswordConstraint;
-(void)setHelpHandler:(id)arg1 ;
-(NSTextField *)passwordTitle;
-(NSTextField *)passwordMessage;
-(NSProgressIndicator *)passwordProgressSpinner;
-(NSURL *)iForgotURL;
-(void)startProgress;
-(void)_refreshAccount:(id)arg1 ;
-(void)passwordSheetDidEnd:(id)arg1 returnCode:(long long)arg2 ;
-(NSButton *)passwordHelpButton;
-(void)endProgress;
-(void)_hidePasswordErrorField;
-(void)_showPasswordErrorField;
-(char)_isPasswordErrorFieldVisible;
-(void)iForgotButtonPressed:(id)arg1 ;
-(void)defaultButtonPressed:(id)arg1 ;
-(void)alternateButtonPressed:(id)arg1 ;
-(void)helpButtonPressed:(id)arg1 ;
-(id)helpHandler;
-(void)setPasswordTitle:(NSTextField *)arg1 ;
-(void)setPasswordMessage:(NSTextField *)arg1 ;
-(void)setPasswordLabel:(NSTextField *)arg1 ;
-(void)setPasswordDefaultButton:(NSButton *)arg1 ;
-(void)setPasswordAlternateButton:(NSButton *)arg1 ;
-(void)setPasswordForgotButton:(NSButton *)arg1 ;
-(void)setPasswordProgressSpinner:(NSProgressIndicator *)arg1 ;
-(void)setPasswordErrorField:(NSTextField *)arg1 ;
-(void)setPasswordHelpButton:(NSButton *)arg1 ;
-(void)setIncorrectPasswordToCancelButtonConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSecureTextFieldToincorrectPasswordConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDelegate:(id<MMAuthenticatingPasswordSheetDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id<MMAuthenticatingPasswordSheetDelegate>)delegate;
-(char)isVisible;
-(NSWindow *)parentWindow;
-(void)controlTextDidChange:(id)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
@end
