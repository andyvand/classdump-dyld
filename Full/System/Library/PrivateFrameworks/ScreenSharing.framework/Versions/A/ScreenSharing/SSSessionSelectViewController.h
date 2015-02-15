/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol SSSessionSelectViewControllerDelegateSSConnectionPromptObserver;
@class NSString, NSWindow, NSProgressIndicator, NSButton, NSTextField, NSMatrix;

@interface SSSessionSelectViewController : NSViewController {

	NSString* displayIsBusyDescriptiveText;
	NSString* logIntoYourAccountRadioTitle;
	NSString* authenticatingUser;
	NSString* machineName;
	NSString* userOnMainDisplay;
	NSWindow* waitingForAnswerSheet;
	NSProgressIndicator* waitingForAnswerProgress;
	NSButton* waitingButton;
	NSTextField* waitingMessageTextField;
	NSMatrix* askOrLoginRadioButtons;
	id<SSSessionSelectViewControllerDelegate><SSConnectionPromptObserver> delegate;
	NSString* _mainDisplayButtonText;
	NSString* _shareDisplayInformativeText;

}

@property (retain) NSWindow * waitingForAnswerSheet; 
@property (retain) NSProgressIndicator * waitingForAnswerProgress; 
@property (retain) NSButton * waitingButton; 
@property (retain) NSTextField * waitingMessageTextField; 
@property (retain) NSMatrix * askOrLoginRadioButtons; 
@property (assign) id<SSSessionSelectViewControllerDelegate><SSConnectionPromptObserver> delegate; 
@property (readonly) NSString * displayIsBusyDescriptiveText; 
@property (readonly) NSString * logIntoYourAccountRadioTitle; 
@property (copy) NSString * authenticatingUser; 
@property (copy) NSString * machineName; 
@property (copy) NSString * userOnMainDisplay; 
@property (copy) NSString * mainDisplayButtonText;                                                              //@synthesize mainDisplayButtonText=_mainDisplayButtonText - In the implementation block
@property (copy,readonly) NSString * shareDisplayInformativeText;                                               //@synthesize shareDisplayInformativeText=_shareDisplayInformativeText - In the implementation block
+(id)keyPathsForValuesAffectingShareDisplayInformativeText;
+(id)keyPathsForValuesAffectingVirtualSessionInformativeText;
+(id)keyPathsForValuesAffectingMainText;
+(id)keyPathsForValuesAffectingLoginUserNameText;
-(void)setMainDisplayButtonText:(NSString *)arg1 ;
-(void)setUserOnMainDisplay:(NSString *)arg1 ;
-(void)setMachineName:(NSString *)arg1 ;
-(void)setAuthenticatingUser:(NSString *)arg1 ;
-(void)setAskOrShareText:(char)arg1 ;
-(NSMatrix *)askOrLoginRadioButtons;
-(void)stopWaitingButtonPressed:(id)arg1 ;
-(void)acknowledgeUserDeclinedPressed:(id)arg1 ;
-(NSString *)authenticatingUser;
-(NSString *)userOnMainDisplay;
-(NSString *)machineName;
-(void)shareScreenButtonClicked:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)showWaitingForAnswerSheet;
-(void)showUserDeclined;
-(id)loginUserNameText;
-(NSString *)logIntoYourAccountRadioTitle;
-(NSString *)displayIsBusyDescriptiveText;
-(NSWindow *)waitingForAnswerSheet;
-(void)setWaitingForAnswerSheet:(NSWindow *)arg1 ;
-(NSProgressIndicator *)waitingForAnswerProgress;
-(void)setWaitingForAnswerProgress:(NSProgressIndicator *)arg1 ;
-(NSButton *)waitingButton;
-(void)setWaitingButton:(NSButton *)arg1 ;
-(NSTextField *)waitingMessageTextField;
-(void)setWaitingMessageTextField:(NSTextField *)arg1 ;
-(void)setAskOrLoginRadioButtons:(NSMatrix *)arg1 ;
-(NSString *)mainDisplayButtonText;
-(NSString *)shareDisplayInformativeText;
-(void)setDelegate:(id<SSSessionSelectViewControllerDelegate><SSConnectionPromptObserver>)arg1 ;
-(void)dealloc;
-(id<SSSessionSelectViewControllerDelegate><SSConnectionPromptObserver>)delegate;
-(void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

