/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LUIPopoverViewController.h>
#import <LoginUIKit/NSTextFieldDelegate.h>

@class NSTextField, NSSecureTextField, NSButton, NSImageView, NSMutableArray, LUISimplePopover, NSString;

@interface LUIPasswordChangeViewController : LUIPopoverViewController <NSTextFieldDelegate> {

	NSTextField* _titleTextField;
	NSTextField* _instructionsTextField;
	NSTextField* _firstPasswordLabel;
	NSSecureTextField* _firstPasswordTextField;
	NSTextField* _secondPasswordLabel;
	NSSecureTextField* _secondPasswordTextField;
	NSTextField* _verifyLabel;
	NSSecureTextField* _verifyTextField;
	NSTextField* _passwordHintLabel;
	NSTextField* _recommendedLabel;
	NSTextField* _hintTextField;
	NSButton* _cancelButton;
	NSButton* _changePasswordButton;
	NSImageView* _errorImageView;
	NSMutableArray* _errorImageViewConstraints;
	int _mode;
	long long _subMode;
	LUISimplePopover* _errorPopover;

}

@property (assign) NSTextField * titleTextField;                             //@synthesize titleTextField=_titleTextField - In the implementation block
@property (assign) NSTextField * instructionsTextField;                      //@synthesize instructionsTextField=_instructionsTextField - In the implementation block
@property (assign) NSTextField * firstPasswordLabel;                         //@synthesize firstPasswordLabel=_firstPasswordLabel - In the implementation block
@property (assign) NSSecureTextField * firstPasswordTextField;               //@synthesize firstPasswordTextField=_firstPasswordTextField - In the implementation block
@property (assign) NSTextField * secondPasswordLabel;                        //@synthesize secondPasswordLabel=_secondPasswordLabel - In the implementation block
@property (assign) NSSecureTextField * secondPasswordTextField;              //@synthesize secondPasswordTextField=_secondPasswordTextField - In the implementation block
@property (assign) NSTextField * verifyLabel;                                //@synthesize verifyLabel=_verifyLabel - In the implementation block
@property (assign) NSSecureTextField * verifyTextField;                      //@synthesize verifyTextField=_verifyTextField - In the implementation block
@property (assign) NSTextField * passwordHintLabel;                          //@synthesize passwordHintLabel=_passwordHintLabel - In the implementation block
@property (assign) NSTextField * recommendedLabel;                           //@synthesize recommendedLabel=_recommendedLabel - In the implementation block
@property (assign) NSTextField * hintTextField;                              //@synthesize hintTextField=_hintTextField - In the implementation block
@property (assign) NSButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign) NSButton * changePasswordButton;                          //@synthesize changePasswordButton=_changePasswordButton - In the implementation block
@property (assign) long long subMode;                                        //@synthesize subMode=_subMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hint;
-(id)updatedPassword;
-(NSTextField *)titleTextField;
-(void)setTitleTextField:(NSTextField *)arg1 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(int)mode;
-(void)setMode:(int)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(char)isTransient;
-(NSButton *)cancelButton;
-(NSSecureTextField *)secondPasswordTextField;
-(NSSecureTextField *)verifyTextField;
-(void)showVerifyPasswordError;
-(void)setCancelButtonTarget:(id)arg1 andSelector:(SEL)arg2 ;
-(void)setSubMode:(long long)arg1 ;
-(void)setChangePasswordButtonTarget:(id)arg1 andSelector:(SEL)arg2 ;
-(void)showNewPasswordError:(id)arg1 ;
-(void)_layoutContentView;
-(NSButton *)changePasswordButton;
-(void)setChangePasswordButton:(NSButton *)arg1 ;
-(void)_updateChangePasswordButton;
-(void)_showErrorForField:(id)arg1 ;
-(void)_hideError;
-(void)showFirstPasswordError;
-(id)firstPassword;
-(id)verifyPassword;
-(NSTextField *)instructionsTextField;
-(void)setInstructionsTextField:(NSTextField *)arg1 ;
-(NSTextField *)firstPasswordLabel;
-(void)setFirstPasswordLabel:(NSTextField *)arg1 ;
-(NSSecureTextField *)firstPasswordTextField;
-(void)setFirstPasswordTextField:(NSSecureTextField *)arg1 ;
-(NSTextField *)secondPasswordLabel;
-(void)setSecondPasswordLabel:(NSTextField *)arg1 ;
-(void)setSecondPasswordTextField:(NSSecureTextField *)arg1 ;
-(NSTextField *)verifyLabel;
-(void)setVerifyLabel:(NSTextField *)arg1 ;
-(void)setVerifyTextField:(NSSecureTextField *)arg1 ;
-(NSTextField *)passwordHintLabel;
-(void)setPasswordHintLabel:(NSTextField *)arg1 ;
-(NSTextField *)recommendedLabel;
-(void)setRecommendedLabel:(NSTextField *)arg1 ;
-(NSTextField *)hintTextField;
-(void)setHintTextField:(NSTextField *)arg1 ;
-(long long)subMode;
@end

