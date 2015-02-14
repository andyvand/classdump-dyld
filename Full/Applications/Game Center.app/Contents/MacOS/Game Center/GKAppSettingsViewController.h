/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Game Center.app/Contents/MacOS/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <Game Center/NSTabViewDelegate.h>

@class NSView, NSButton, NSWindow, NSTextField, GKAccountViewController, NSString;

@interface GKAppSettingsViewController : NSViewController <NSTabViewDelegate> {

	long long _displayMode;
	NSView* _profileView;
	NSButton* _innerRightButton;
	NSButton* _outerRightButton;
	NSButton* _innerLeftButton;
	NSButton* _outerLeftButton;
	NSView* _buttonView;
	NSWindow* _accountWindow;
	NSButton* _allowInviteButton;
	NSButton* _nearbyPlayersButton;
	NSButton* _contactsRecButton;
	NSButton* _facebookRecButton;
	NSTextField* _aliasTextLabel;
	NSView* _settingsView;
	GKAccountViewController* _profileWebViewController;
	NSView* _settingsWebView;

}

@property (assign,nonatomic) long long displayMode;                                 //@synthesize displayMode=_displayMode - In the implementation block
@property (assign) NSView * profileView;                                            //@synthesize profileView=_profileView - In the implementation block
@property (assign) NSButton * innerRightButton;                                     //@synthesize innerRightButton=_innerRightButton - In the implementation block
@property (assign) NSButton * outerRightButton;                                     //@synthesize outerRightButton=_outerRightButton - In the implementation block
@property (assign) NSButton * innerLeftButton;                                      //@synthesize innerLeftButton=_innerLeftButton - In the implementation block
@property (assign) NSButton * outerLeftButton;                                      //@synthesize outerLeftButton=_outerLeftButton - In the implementation block
@property (assign) NSView * buttonView;                                             //@synthesize buttonView=_buttonView - In the implementation block
@property (assign) NSWindow * accountWindow;                                        //@synthesize accountWindow=_accountWindow - In the implementation block
@property (assign) NSButton * allowInviteButton;                                    //@synthesize allowInviteButton=_allowInviteButton - In the implementation block
@property (assign) NSButton * nearbyPlayersButton;                                  //@synthesize nearbyPlayersButton=_nearbyPlayersButton - In the implementation block
@property (assign) NSButton * contactsRecButton;                                    //@synthesize contactsRecButton=_contactsRecButton - In the implementation block
@property (assign) NSButton * facebookRecButton;                                    //@synthesize facebookRecButton=_facebookRecButton - In the implementation block
@property (assign) NSTextField * aliasTextLabel;                                    //@synthesize aliasTextLabel=_aliasTextLabel - In the implementation block
@property (assign) NSView * settingsView;                                           //@synthesize settingsView=_settingsView - In the implementation block
@property (retain) GKAccountViewController * profileWebViewController;              //@synthesize profileWebViewController=_profileWebViewController - In the implementation block
@property (assign) NSView * settingsWebView;                                        //@synthesize settingsWebView=_settingsWebView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startLoadingURL;
-(void)setInnerRightButton:(NSButton *)arg1 ;
-(void)setOuterRightButton:(NSButton *)arg1 ;
-(void)setInnerLeftButton:(NSButton *)arg1 ;
-(void)setOuterLeftButton:(NSButton *)arg1 ;
-(void)refreshAlias;
-(NSButton *)facebookRecButton;
-(NSButton *)contactsRecButton;
-(NSButton *)allowInviteButton;
-(NSButton *)nearbyPlayersButton;
-(NSTextField *)aliasTextLabel;
-(void)initializeSettings;
-(NSWindow *)accountWindow;
-(void)presentFriendRecAlert:(id)arg1 ;
-(void)showAccountProfile:(id)arg1 ;
-(void)allowInvitesCheckBox:(id)arg1 ;
-(void)nearbyPlayersCheckBox:(id)arg1 ;
-(void)contactsRecCheckBox:(id)arg1 ;
-(void)facebookRecCheckBox:(id)arg1 ;
-(void)manageAppleID:(id)arg1 ;
-(NSButton *)innerRightButton;
-(NSButton *)outerRightButton;
-(NSButton *)innerLeftButton;
-(NSButton *)outerLeftButton;
-(NSView *)buttonView;
-(void)setButtonView:(NSView *)arg1 ;
-(void)setAccountWindow:(NSWindow *)arg1 ;
-(void)setAllowInviteButton:(NSButton *)arg1 ;
-(void)setNearbyPlayersButton:(NSButton *)arg1 ;
-(void)setContactsRecButton:(NSButton *)arg1 ;
-(void)setFacebookRecButton:(NSButton *)arg1 ;
-(void)setAliasTextLabel:(NSTextField *)arg1 ;
-(GKAccountViewController *)profileWebViewController;
-(void)setProfileWebViewController:(GKAccountViewController *)arg1 ;
-(NSView *)settingsWebView;
-(void)setSettingsWebView:(NSView *)arg1 ;
-(NSView *)settingsView;
-(void)setSettingsView:(NSView *)arg1 ;
-(void)dealloc;
-(void)setDisplayMode:(long long)arg1 ;
-(long long)displayMode;
-(void)awakeFromNib;
-(void)viewWillAppear;
-(void)setProfileView:(NSView *)arg1 ;
-(NSView *)profileView;
@end

