/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <ScreenSharing/NSTextFieldDelegate.h>

@protocol SSConnectionPromptObserver;
@class NSObject, NSTextField, NSMatrix, NSView, NSLayoutConstraint, NSSecureTextField, NSButton, NSProgressIndicator, NSString;

@interface SSConnectionAuthenticationViewController : NSViewController <NSTextFieldDelegate> {

	NSObject*<SSConnectionPromptObserver> mPromptObserver;
	double toggleExpandAmount;
	NSTextField* mHostNameLabel;
	NSMatrix* mGuestOrUserMatrix;
	NSView* mNamePassContainer;
	NSLayoutConstraint* mNamePassTopConstraint;
	NSLayoutConstraint* mNamePassBottomConstraint;
	NSLayoutConstraint* mNamePassLeftConstraint;
	NSLayoutConstraint* mNamePassRightConstraint;
	NSTextField* mUsernameLabel;
	NSTextField* mUsernameField;
	NSTextField* mPasswordLabel;
	NSSecureTextField* mPasswordField;
	NSButton* mSaveToKeychainCheckbox;
	NSButton* mConnectButton;
	NSProgressIndicator* mConnectingProgressSpinner;
	NSTextField* mConnectingText;

}

@property (assign) id<SSConnectionPromptObserver> promptObserver; 
@property (retain) NSTextField * mHostNameLabel; 
@property (retain) NSMatrix * mGuestOrUserMatrix; 
@property (retain) NSView * mNamePassContainer; 
@property (retain) NSLayoutConstraint * mNamePassTopConstraint; 
@property (retain) NSLayoutConstraint * mNamePassBottomConstraint; 
@property (retain) NSLayoutConstraint * mNamePassLeftConstraint; 
@property (retain) NSLayoutConstraint * mNamePassRightConstraint; 
@property (retain) NSTextField * mUsernameLabel; 
@property (retain) NSTextField * mUsernameField; 
@property (retain) NSTextField * mPasswordLabel; 
@property (retain) NSSecureTextField * mPasswordField; 
@property (retain) NSButton * mSaveToKeychainCheckbox; 
@property (retain) NSButton * mConnectButton; 
@property (retain) NSProgressIndicator * mConnectingProgressSpinner; 
@property (retain) NSTextField * mConnectingText; 
@property (assign) NSString * username; 
@property (assign) NSString * password; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setPromptObserver:(id<SSConnectionPromptObserver>)arg1 ;
-(void)setUsername:(id)arg1 andPassword:(id)arg2 fromKeychain:(char)arg3 ;
-(NSSecureTextField *)mPasswordField;
-(char)shouldConnectAsGuest;
-(char)shouldSaveCredentialsToKeychain;
-(void)setIsConnecting:(char)arg1 ;
-(void)setHostName:(id)arg1 isVNC:(char)arg2 ;
-(NSTextField *)mUsernameField;
-(NSMatrix *)mGuestOrUserMatrix;
-(NSProgressIndicator *)mConnectingProgressSpinner;
-(NSTextField *)mConnectingText;
-(NSButton *)mConnectButton;
-(NSButton *)mSaveToKeychainCheckbox;
-(NSTextField *)mHostNameLabel;
-(void)radioClicked:(id)arg1 ;
-(void)connectClicked:(id)arg1 ;
-(void)cancelClicked:(id)arg1 ;
-(void)adjustViewHeightBy:(double)arg1 ;
-(id<SSConnectionPromptObserver>)promptObserver;
-(void)setMHostNameLabel:(NSTextField *)arg1 ;
-(void)setMGuestOrUserMatrix:(NSMatrix *)arg1 ;
-(NSView *)mNamePassContainer;
-(void)setMNamePassContainer:(NSView *)arg1 ;
-(NSLayoutConstraint *)mNamePassTopConstraint;
-(void)setMNamePassTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mNamePassBottomConstraint;
-(void)setMNamePassBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mNamePassLeftConstraint;
-(void)setMNamePassLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mNamePassRightConstraint;
-(void)setMNamePassRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSTextField *)mUsernameLabel;
-(void)setMUsernameLabel:(NSTextField *)arg1 ;
-(void)setMUsernameField:(NSTextField *)arg1 ;
-(NSTextField *)mPasswordLabel;
-(void)setMPasswordLabel:(NSTextField *)arg1 ;
-(void)setMPasswordField:(NSSecureTextField *)arg1 ;
-(void)setMSaveToKeychainCheckbox:(NSButton *)arg1 ;
-(void)setMConnectButton:(NSButton *)arg1 ;
-(void)setMConnectingProgressSpinner:(NSProgressIndicator *)arg1 ;
-(void)setMConnectingText:(NSTextField *)arg1 ;
-(void)dealloc;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setPassword:(NSString *)arg1 ;
@end

