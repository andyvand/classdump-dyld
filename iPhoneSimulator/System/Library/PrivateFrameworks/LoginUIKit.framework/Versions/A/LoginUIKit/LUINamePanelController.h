/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <LoginUIKit/LUIPanelController.h>
#import <LoginUIKit/LUITextFieldDelegate.h>
#import <LoginUIKit/NSTextFieldDelegate.h>

@class NSImageView, LUIEffectsButton, LUITextFieldView, LUISecureTextFieldView, LUIPopUpButton, LUISimplePopover, NSString;

@interface LUINamePanelController : LUIPanelController <LUITextFieldDelegate, NSTextFieldDelegate> {

	NSImageView* _otherUserPictureImageView;
	LUIEffectsButton* _backButton;
	LUITextFieldView* _userNameTextField;
	LUISecureTextFieldView* _passwordSecureTextField;
	LUIPopUpButton* _eapAuthenticationPopUpButton;
	/*^block*/id _tmHandler;
	LUISimplePopover* _popover;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithStyle:(int)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(id)userName;
-(void)setUserName:(id)arg1 ;
-(id)viewForPopover;
-(void)setUIEnabled:(char)arg1 ;
-(void)_setupContentView;
-(CGRect)progressRect;
-(void)_backButtonPressed:(id)arg1 ;
-(id)secureTextField;
-(void)forceClearFocusRing;
-(void)forceDrawFocusRing;
-(CGPoint)pointForPopover:(int)arg1 ;
-(void)setNameTextFieldPlaceholderString:(id)arg1 ;
-(void)setSecurityTextFieldPlaceholderString:(id)arg1 ;
-(void)resetNameAndPassword;
-(void)setUserImage:(id)arg1 ;
-(void)setUserImageHidden:(char)arg1 ;
-(void)setBackButtonHidden:(char)arg1 ;
-(void)shake;
-(void)setFocusOn:(int)arg1 forced:(char)arg2 ;
-(void)setSecureTextFieldMode:(int)arg1 ;
-(void)setSecureTextFieldUsesHint:(char)arg1 ;
-(void)_goButtonPressed:(id)arg1 ;
-(void)_textFieldButtonPressed:(id)arg1 ;
-(void)setEAPAuthenticationPopUpHidden:(char)arg1 ;
-(void)_closePopover;
-(char)textField:(id)arg1 processTextMovement:(long long)arg2 ;
-(void)setNetworkStatus:(int)arg1 ;
-(void)showNetworkStatusPopover:(id)arg1 ;
-(void)setEAPAuthenticationPopUpMenu:(id)arg1 ;
-(long long)eapAuthenticationPopUpIndexOfSelectedItem;
-(void)eapAuthenticationPopUpSelectItemAtIndex:(long long)arg1 ;
-(void)setTextMovementHandler:(/*^block*/id)arg1 ;
@end

