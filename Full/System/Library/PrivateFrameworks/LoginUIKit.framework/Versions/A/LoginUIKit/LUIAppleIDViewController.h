/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LUIPopoverViewController.h>
#import <LoginUIKit/NSTextFieldDelegate.h>

@class NSTextField, NSSecureTextField, NSButton, NSProgressIndicator, NSString;

@interface LUIAppleIDViewController : LUIPopoverViewController <NSTextFieldDelegate> {

	NSTextField* _titleTextField;
	NSTextField* _infoTextField;
	NSTextField* _appleIDLabel;
	NSTextField* _appleIDTextField;
	NSTextField* _passwordLabel;
	NSSecureTextField* _passwordSecureTextField;
	NSButton* _cancelButton;
	NSButton* _resetPasswordButton;
	NSProgressIndicator* _progressIndicator;

}

@property (assign) NSTextField * titleTextField;                             //@synthesize titleTextField=_titleTextField - In the implementation block
@property (assign) NSTextField * infoTextField;                              //@synthesize infoTextField=_infoTextField - In the implementation block
@property (assign) NSTextField * appleIDLabel;                               //@synthesize appleIDLabel=_appleIDLabel - In the implementation block
@property (assign) NSTextField * appleIDTextField;                           //@synthesize appleIDTextField=_appleIDTextField - In the implementation block
@property (assign) NSTextField * passwordLabel;                              //@synthesize passwordLabel=_passwordLabel - In the implementation block
@property (assign) NSSecureTextField * passwordSecureTextField;              //@synthesize passwordSecureTextField=_passwordSecureTextField - In the implementation block
@property (assign) NSButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign) NSButton * resetPasswordButton;                           //@synthesize resetPasswordButton=_resetPasswordButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)appleID;
-(void)startProgressIndicator;
-(void)stopProgressIndicator;
-(NSTextField *)titleTextField;
-(void)setTitleTextField:(NSTextField *)arg1 ;
-(NSTextField *)passwordLabel;
-(void)setPasswordLabel:(NSTextField *)arg1 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(char)isTransient;
-(NSButton *)cancelButton;
-(void)setCancelButtonTarget:(id)arg1 andSelector:(SEL)arg2 ;
-(void)setResetPasswordButtonTarget:(id)arg1 andSelector:(SEL)arg2 ;
-(void)_layoutContentView;
-(void)prepareForDisplay;
-(NSTextField *)appleIDTextField;
-(void)setAppleIDTextField:(NSTextField *)arg1 ;
-(void)_updateResetPasswordButton;
-(id)appleIDPassword;
-(void)selectAppropriateFirstResponder;
-(NSTextField *)infoTextField;
-(void)setInfoTextField:(NSTextField *)arg1 ;
-(NSTextField *)appleIDLabel;
-(void)setAppleIDLabel:(NSTextField *)arg1 ;
-(NSSecureTextField *)passwordSecureTextField;
-(void)setPasswordSecureTextField:(NSSecureTextField *)arg1 ;
-(NSButton *)resetPasswordButton;
-(void)setResetPasswordButton:(NSButton *)arg1 ;
@end

