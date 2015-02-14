/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSString, NSTextField, NSSecureTextField, NSButton, NSPopUpButton, IMAccount, ProfileAuthenticationMessage, FTMessageDelivery, NSWindow;

@interface FTPreferencesAccountOptionsWindowController : NSWindowController {

	char _isAuthenticating;
	NSString* _authID;
	NSString* _authToken;
	NSTextField* _titleField;
	NSTextField* _accountIDField;
	NSSecureTextField* _accountPasswordField;
	NSTextField* _authErrorField;
	NSButton* _viewAccountButton;
	NSPopUpButton* _locationPopup;
	IMAccount* _account;
	ProfileAuthenticationMessage* _authMessage;
	FTMessageDelivery* _authDelivery;
	NSWindow* _parentWindow;

}

@property (nonatomic,retain) NSString * authID;                                            //@synthesize authID=_authID - In the implementation block
@property (nonatomic,retain) NSString * authToken;                                         //@synthesize authToken=_authToken - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * titleField;                              //@synthesize titleField=_titleField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * accountIDField;                          //@synthesize accountIDField=_accountIDField - In the implementation block
@property (assign,nonatomic,__weak) NSSecureTextField * accountPasswordField;              //@synthesize accountPasswordField=_accountPasswordField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * authErrorField;                          //@synthesize authErrorField=_authErrorField - In the implementation block
@property (assign,nonatomic,__weak) NSButton * viewAccountButton;                          //@synthesize viewAccountButton=_viewAccountButton - In the implementation block
@property (assign,nonatomic,__weak) NSPopUpButton * locationPopup;                         //@synthesize locationPopup=_locationPopup - In the implementation block
@property (nonatomic,retain) IMAccount * account;                                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ProfileAuthenticationMessage * authMessage;                   //@synthesize authMessage=_authMessage - In the implementation block
@property (nonatomic,retain) FTMessageDelivery * authDelivery;                             //@synthesize authDelivery=_authDelivery - In the implementation block
@property (assign,nonatomic,__weak) NSWindow * parentWindow;                               //@synthesize parentWindow=_parentWindow - In the implementation block
@property (assign,nonatomic) char isAuthenticating;                                        //@synthesize isAuthenticating=_isAuthenticating - In the implementation block
-(void)signOut:(id)arg1 ;
-(void)viewAccount:(id)arg1 ;
-(char)isAuthenticating;
-(NSString *)authID;
-(void)_updateViewAccountButton;
-(void)openForgotURL:(id)arg1 ;
-(void)setAuthID:(NSString *)arg1 ;
-(NSTextField *)accountIDField;
-(void)setAccountIDField:(NSTextField *)arg1 ;
-(NSSecureTextField *)accountPasswordField;
-(void)setAccountPasswordField:(NSSecureTextField *)arg1 ;
-(NSTextField *)authErrorField;
-(void)setAuthErrorField:(NSTextField *)arg1 ;
-(NSButton *)viewAccountButton;
-(void)setViewAccountButton:(NSButton *)arg1 ;
-(NSPopUpButton *)locationPopup;
-(void)setLocationPopup:(NSPopUpButton *)arg1 ;
-(ProfileAuthenticationMessage *)authMessage;
-(void)setAuthMessage:(ProfileAuthenticationMessage *)arg1 ;
-(FTMessageDelivery *)authDelivery;
-(void)setAuthDelivery:(FTMessageDelivery *)arg1 ;
-(void)setIsAuthenticating:(char)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)authToken;
-(NSTextField *)titleField;
-(void)setTitleField:(NSTextField *)arg1 ;
-(void)dealloc;
-(NSWindow *)parentWindow;
-(void)cancel:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(void)windowDidLoad;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
@end

