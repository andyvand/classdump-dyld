/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:25 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/MMCSCPinRecoveryViewControllerDelegate.h>
#import <AOSUI/MMCSCPassPhraseRecoveryViewControllerDelegate.h>
#import <AOSUI/MMCSCSMSTargetRecoveryViewControllerDelegate.h>

@protocol MMCSCRecoveryControllerDelegate;
@class NSWindow, MMCSCPinRecoveryViewController, MMCSCPassPhraseRecoveryViewController, MMCSCSMSTargetRecoveryViewController, NSString, NSMutableDictionary;

@interface MMCSCRecoveryController : NSObject <MMCSCPinRecoveryViewControllerDelegate, MMCSCPassPhraseRecoveryViewControllerDelegate, MMCSCSMSTargetRecoveryViewControllerDelegate> {

	id<MMCSCRecoveryControllerDelegate> _delegate;
	NSWindow* _dialog;
	NSWindow* _parentWindow;
	MMCSCPinRecoveryViewController* _cscPinVC;
	MMCSCPassPhraseRecoveryViewController* _cscPassPhraseVC;
	MMCSCSMSTargetRecoveryViewController* _cscSMSTargetVC;
	NSString* _accountID;
	NSString* _passPhrase;
	NSString* _verificationToken;
	NSString* _smsTargetCountryCode;
	NSString* _smsTarget;
	char _isFirstDevice;
	char _useComplexPassphraseView;
	char _needsVerification;
	char _usesRandomPassphrase;
	NSMutableDictionary* _recoveryContext;

}

@property (assign) id<MMCSCRecoveryControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * accountID;                                                   //@synthesize accountID=_accountID - In the implementation block
@property (assign) char isFirstDevice;                                                   //@synthesize isFirstDevice=_isFirstDevice - In the implementation block
@property (assign) char useComplexPassphraseView;                                        //@synthesize useComplexPassphraseView=_useComplexPassphraseView - In the implementation block
@property (assign) char usesRandomPassphrase;                                            //@synthesize usesRandomPassphrase=_usesRandomPassphrase - In the implementation block
@property (assign) char needsVerification;                                               //@synthesize needsVerification=_needsVerification - In the implementation block
@property (copy) NSString * smsTargetCountryCode;                                        //@synthesize smsTargetCountryCode=_smsTargetCountryCode - In the implementation block
@property (copy) NSString * smsTarget;                                                   //@synthesize smsTarget=_smsTarget - In the implementation block
@property (copy) NSString * passPhrase;                                                  //@synthesize passPhrase=_passPhrase - In the implementation block
@property (copy) NSString * verificationToken;                                           //@synthesize verificationToken=_verificationToken - In the implementation block
@property (retain) NSMutableDictionary * recoveryContext;                                //@synthesize recoveryContext=_recoveryContext - In the implementation block
@property (retain) NSWindow * parentWindow;                                              //@synthesize parentWindow=_parentWindow - In the implementation block
@property (retain) NSWindow * dialog;                                                    //@synthesize dialog=_dialog - In the implementation block
@property (retain) MMCSCPinRecoveryViewController * cscPinVC;                            //@synthesize cscPinVC=_cscPinVC - In the implementation block
@property (retain) MMCSCPassPhraseRecoveryViewController * cscPassPhraseVC;              //@synthesize cscPassPhraseVC=_cscPassPhraseVC - In the implementation block
@property (retain) MMCSCSMSTargetRecoveryViewController * cscSMSTargetVC;                //@synthesize cscSMSTargetVC=_cscSMSTargetVC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)smsTarget;
-(void)setSmsTarget:(NSString *)arg1 ;
-(void)setPassPhrase:(NSString *)arg1 ;
-(NSString *)passPhrase;
-(char)needsVerification;
-(void)mmCSCPinRecoveryViewControllerDidEnd:(id)arg1 ;
-(void)mmCSCPinRecoveryViewControllerDidCancel:(id)arg1 ;
-(void)mmCSCPinRecoveryViewControllerDidForget:(id)arg1 ;
-(void)setNeedsVerification:(char)arg1 ;
-(void)setRecoveryContext:(NSMutableDictionary *)arg1 ;
-(MMCSCPinRecoveryViewController *)cscPinVC;
-(MMCSCPassPhraseRecoveryViewController *)cscPassPhraseVC;
-(char)usesRandomPassphrase;
-(MMCSCSMSTargetRecoveryViewController *)cscSMSTargetVC;
-(NSString *)smsTargetCountryCode;
-(void)setSmsTargetCountryCode:(NSString *)arg1 ;
-(char)useComplexPassphraseView;
-(NSWindow *)dialog;
-(void)endModalDialog;
-(NSString *)verificationToken;
-(void)animateFromView:(id)arg1 toView:(id)arg2 ;
-(void)_handleSoftLimitRecoveryError:(id)arg1 ;
-(void)modalDialogCancelled;
-(void)_handleSMSRetryError;
-(void)_handleSecurityCodeVerificationAndRestore:(id)arg1 ;
-(void)setVerificationToken:(NSString *)arg1 ;
-(void)mmCSCPassPhraseRecoveryViewControllerDidEnd:(id)arg1 ;
-(void)mmCSCPassPhraseRecoveryViewControllerDidForget:(id)arg1 ;
-(void)mmCSCPassPhraseRecoveryViewControllerDidCancel:(id)arg1 ;
-(void)mmCSCSMSTargetRecoveryViewControllerDidEnd:(id)arg1 ;
-(void)mmCSCSMSTargetRecoveryViewControllerDidCancel:(id)arg1 ;
-(void)beginDialogWithParentWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isFirstDevice;
-(void)setIsFirstDevice:(char)arg1 ;
-(void)setUseComplexPassphraseView:(char)arg1 ;
-(void)setUsesRandomPassphrase:(char)arg1 ;
-(void)setDialog:(NSWindow *)arg1 ;
-(NSMutableDictionary *)recoveryContext;
-(void)setCscPinVC:(MMCSCPinRecoveryViewController *)arg1 ;
-(void)setCscPassPhraseVC:(MMCSCPassPhraseRecoveryViewController *)arg1 ;
-(void)setCscSMSTargetVC:(MMCSCSMSTargetRecoveryViewController *)arg1 ;
-(id)init;
-(void)setDelegate:(id<MMCSCRecoveryControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MMCSCRecoveryControllerDelegate>)delegate;
-(NSWindow *)parentWindow;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
@end

