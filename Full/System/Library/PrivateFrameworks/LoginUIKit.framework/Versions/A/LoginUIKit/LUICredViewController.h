/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <LoginUIKit/LUIViewController.h>

@class LUIPanelController, LUIUserPanelController, LUINamePanelController, LUIWindowController, SFAuthorizationPluginView;

@interface LUICredViewController : LUIViewController {

	LUIPanelController* _currentPanelController;
	LUIUserPanelController* _userPanelController;
	LUINamePanelController* _namePanelController;
	LUIWindowController* _owningWindowController;
	SFAuthorizationPluginView* _authPluginView;
	char _useHighPosition;
	char _useTallOffset;
	/*^block*/id _tmHandler;

}
+(id)identifier;
+(id)controllerWithStyle:(int)arg1 ;
+(id)controllerWithStyle:(int)arg1 andAuthPluginView:(id)arg2 ;
-(void)dealloc;
-(void)setUserInfo:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)setWindowController:(id)arg1 ;
-(id)userName;
-(void)setUserName:(id)arg1 ;
-(id)viewForPopover;
-(void)setUIEnabled:(char)arg1 ;
-(void)tearDownController;
-(id)initWithStyle:(int)arg1 andAuthPluginView:(id)arg2 ;
-(void)_layoutContentView;
-(void)_setupContentView;
-(CGRect)progressRect;
-(id)secureTextField;
-(void)forceClearFocusRing;
-(void)forceDrawFocusRing;
-(CGPoint)pointForPopover:(int)arg1 ;
-(void)setNameTextFieldPlaceholderString:(id)arg1 ;
-(void)setSecurityTextFieldPlaceholderString:(id)arg1 ;
-(void)resetNameAndPassword;
-(void)setUserImage:(id)arg1 ;
-(void)setBackButtonHidden:(char)arg1 ;
-(void)shake;
-(void)setFocusOn:(int)arg1 forced:(char)arg2 ;
-(void)setSecureTextFieldMode:(int)arg1 ;
-(void)setSecureTextFieldUsesHint:(char)arg1 ;
-(void)setEAPAuthenticationPopUpHidden:(char)arg1 ;
-(void)setNetworkStatus:(int)arg1 ;
-(void)showNetworkStatusPopover:(id)arg1 ;
-(void)setEAPAuthenticationPopUpMenu:(id)arg1 ;
-(long long)eapAuthenticationPopUpIndexOfSelectedItem;
-(void)eapAuthenticationPopUpSelectItemAtIndex:(long long)arg1 ;
-(void)setTextMovementHandler:(/*^block*/id)arg1 ;
-(void)setPanelStyle:(int)arg1 ;
-(void)didDeactivate;
-(void)setUsesExtendedPosition:(char)arg1 ;
-(void)setFocusOn:(int)arg1 ;
-(int)panelStyle;
-(void)setAuthPluginView:(id)arg1 ;
-(void)setUsesHighPosition:(char)arg1 ;
-(void)refresh;
-(void)setActionHandler:(/*^block*/id)arg1 ;
@end

