/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/MMCSCPinSetupViewControllerDelegate.h>
#import <AOSUI/MMCSCPassPhraseSetupViewControllerDelegate.h>
#import <AOSUI/MMCSCSMSTargetSetupViewControllerDelegate.h>
#import <AOSUI/MMCSCOptionsSetupViewControllerDelegate.h>

@protocol MMCSCSetupControllerDelegate;
@class NSWindow, MMCSCPinSetupViewController, MMCSCOptionsSetupViewController, MMCSCPassPhraseSetupViewController, MMCSCSMSTargetSetupViewController, NSString, NSMutableDictionary;

@interface MMCSCSetupController : NSObject <MMCSCPinSetupViewControllerDelegate, MMCSCPassPhraseSetupViewControllerDelegate, MMCSCSMSTargetSetupViewControllerDelegate, MMCSCOptionsSetupViewControllerDelegate> {

	id<MMCSCSetupControllerDelegate> _delegate;
	NSWindow* _dialog;
	NSWindow* _parentWindow;
	MMCSCPinSetupViewController* _cscPinVC;
	MMCSCOptionsSetupViewController* _cscOptionsVC;
	MMCSCPassPhraseSetupViewController* _cscPassPhraseVC;
	MMCSCSMSTargetSetupViewController* _cscSMSTargetVC;
	NSString* _passPhrase;
	NSString* _smsCountryCode;
	NSString* _smsCountryPrefix;
	NSString* _smsTarget;
	long long _currentView;
	NSMutableDictionary* _setupContext;
	char _isUpdatingPassphrase;

}

@property (assign) id<MMCSCSetupControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * passPhrase;                                               //@synthesize passPhrase=_passPhrase - In the implementation block
@property (copy) NSString * smsCountryCode;                                           //@synthesize smsCountryCode=_smsCountryCode - In the implementation block
@property (copy) NSString * smsCountryPrefix;                                         //@synthesize smsCountryPrefix=_smsCountryPrefix - In the implementation block
@property (copy) NSString * smsTarget;                                                //@synthesize smsTarget=_smsTarget - In the implementation block
@property (readonly) char usingComplexPassphrase; 
@property (readonly) char isSecurePassphrase; 
@property (retain) NSMutableDictionary * setupContext;                                //@synthesize setupContext=_setupContext - In the implementation block
@property (assign) char isUpdatingPassphrase;                                         //@synthesize isUpdatingPassphrase=_isUpdatingPassphrase - In the implementation block
@property (retain) NSWindow * parentWindow;                                           //@synthesize parentWindow=_parentWindow - In the implementation block
@property (retain) NSWindow * dialog;                                                 //@synthesize dialog=_dialog - In the implementation block
@property (retain) MMCSCPinSetupViewController * cscPinVC;                            //@synthesize cscPinVC=_cscPinVC - In the implementation block
@property (retain) MMCSCOptionsSetupViewController * cscOptionsVC;                    //@synthesize cscOptionsVC=_cscOptionsVC - In the implementation block
@property (retain) MMCSCPassPhraseSetupViewController * cscPassPhraseVC;              //@synthesize cscPassPhraseVC=_cscPassPhraseVC - In the implementation block
@property (retain) MMCSCSMSTargetSetupViewController * cscSMSTargetVC;                //@synthesize cscSMSTargetVC=_cscSMSTargetVC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)smsCountryPrefix;
-(void)mmCSCSMSTargetSetupViewControllerDidEnd:(id)arg1 ;
-(void)mmCSCSMSTargetSetupViewControllerDidCancel:(id)arg1 ;
-(NSString *)smsCountryCode;
-(NSString *)smsTarget;
-(void)setSmsCountryCode:(NSString *)arg1 ;
-(void)setSmsCountryPrefix:(NSString *)arg1 ;
-(void)setSmsTarget:(NSString *)arg1 ;
-(void)setPassPhrase:(NSString *)arg1 ;
-(char)isSecurePassphrase;
-(NSString *)passPhrase;
-(char)usingComplexPassphrase;
-(void)setIsUpdatingPassphrase:(char)arg1 ;
-(void)beginDialogWithParentWindow:(id)arg1 shouldNest:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(MMCSCPinSetupViewController *)cscPinVC;
-(MMCSCPassPhraseSetupViewController *)cscPassPhraseVC;
-(MMCSCSMSTargetSetupViewController *)cscSMSTargetVC;
-(NSWindow *)dialog;
-(void)endModalDialog;
-(void)animateFromView:(id)arg1 toView:(id)arg2 ;
-(void)modalDialogCancelled;
-(void)beginDialogWithParentWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDialog:(NSWindow *)arg1 ;
-(void)setCscPinVC:(MMCSCPinSetupViewController *)arg1 ;
-(void)setCscPassPhraseVC:(MMCSCPassPhraseSetupViewController *)arg1 ;
-(void)setCscSMSTargetVC:(MMCSCSMSTargetSetupViewController *)arg1 ;
-(void)mmCSCPassPhraseSetupViewControllerDidEnd:(id)arg1 ;
-(void)mmCSCPassPhraseSetupViewControllerDidReturn:(id)arg1 ;
-(void)mmCSCPassPhraseSetupViewControllerDidCancel:(id)arg1 ;
-(void)mmCSCOptionsSetupViewControllerDidEnd:(id)arg1 ;
-(void)mmCSCOptionsSetupViewControllerDidReturn:(id)arg1 ;
-(void)mmCSCOptionsSetupViewControllerDidCancel:(id)arg1 ;
-(NSMutableDictionary *)setupContext;
-(void)setSetupContext:(NSMutableDictionary *)arg1 ;
-(char)isUpdatingPassphrase;
-(MMCSCOptionsSetupViewController *)cscOptionsVC;
-(void)_showOptOutConfirmation:(id)arg1 ;
-(void)mmCSCPinSetupViewControllerDidEnd:(id)arg1 ;
-(void)mmCSCPinSetupViewControllerDidSelectOption:(id)arg1 ;
-(void)mmCSCPinSetupViewControllerDidCancel:(id)arg1 ;
-(void)setCscOptionsVC:(MMCSCOptionsSetupViewController *)arg1 ;
-(id)init;
-(void)setDelegate:(id<MMCSCSetupControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MMCSCSetupControllerDelegate>)delegate;
-(NSWindow *)parentWindow;
-(void)setParentWindow:(NSWindow *)arg1 ;
@end

