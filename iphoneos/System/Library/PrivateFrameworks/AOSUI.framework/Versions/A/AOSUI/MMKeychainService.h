/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <AOSUI/MMService.h>
#import <AOSUI/MMAuthenticatingPasswordSheetDelegate.h>
#import <AOSUI/MMTermsOfServiceControllerDelegate.h>
#import <AOSUI/MMCSCSetupControllerDelegate.h>
#import <AOSUI/MMCSCRecoveryControllerDelegate.h>
#import <AOSUI/MMServicePreflightProtocol.h>

@class MMTermsOfServiceController, MMModalDialog, MMAuthenticatingPasswordSheet, MMCSCRecoveryController, NSWindow, NSImageView, NSTextField, NSButton, NSLock, MMKeychainOptionsController, NSString;

@interface MMKeychainService : MMService <MMAuthenticatingPasswordSheetDelegate, MMTermsOfServiceControllerDelegate, MMCSCSetupControllerDelegate, MMCSCRecoveryControllerDelegate, MMServicePreflightProtocol> {

	MMTermsOfServiceController* _tosController;
	MMModalDialog* _pendingApprovalDialog;
	MMAuthenticatingPasswordSheet* _applicantDialog;
	MMModalDialog* _notificationSheet;
	MMModalDialog* _requestSentSheet;
	MMCSCRecoveryController* _cscRecoverController;
	int _notificationToken;
	char _notificationSetup;
	char _isPendingCached;
	NSWindow* _securityResetSheet;
	NSImageView* _securityResetImageView;
	NSTextField* _securityResetTitleTextField;
	NSTextField* _securityResetMessageText;
	NSButton* _securityResetConfirmButton;
	NSButton* _securityResetInfoButton;
	NSButton* _securityResetDisableButton;
	NSLock* _securityResetSheetLock;
	MMKeychainOptionsController* optionsController;

}

@property (retain) NSWindow * securityResetSheet;                                //@synthesize securityResetSheet=_securityResetSheet - In the implementation block
@property (assign) NSImageView * securityResetImageView;                         //@synthesize securityResetImageView=_securityResetImageView - In the implementation block
@property (assign) NSTextField * securityResetTitleTextField;                    //@synthesize securityResetTitleTextField=_securityResetTitleTextField - In the implementation block
@property (assign) NSTextField * securityResetMessageText;                       //@synthesize securityResetMessageText=_securityResetMessageText - In the implementation block
@property (assign) NSButton * securityResetConfirmButton;                        //@synthesize securityResetConfirmButton=_securityResetConfirmButton - In the implementation block
@property (assign) NSButton * securityResetInfoButton;                           //@synthesize securityResetInfoButton=_securityResetInfoButton - In the implementation block
@property (assign) NSButton * securityResetDisableButton;                        //@synthesize securityResetDisableButton=_securityResetDisableButton - In the implementation block
@property (retain) MMTermsOfServiceController * tosController;                   //@synthesize tosController=_tosController - In the implementation block
@property (retain) MMModalDialog * pendingApprovalDialog;                        //@synthesize pendingApprovalDialog=_pendingApprovalDialog - In the implementation block
@property (retain) MMAuthenticatingPasswordSheet * applicantDialog;              //@synthesize applicantDialog=_applicantDialog - In the implementation block
@property (retain) MMModalDialog * notificationSheet;                            //@synthesize notificationSheet=_notificationSheet - In the implementation block
@property (retain) MMModalDialog * requestSentSheet;                             //@synthesize requestSentSheet=_requestSentSheet - In the implementation block
@property (retain) MMCSCRecoveryController * cscRecoverController;               //@synthesize cscRecoverController=_cscRecoverController - In the implementation block
@property (assign) char notificationSetup;                                       //@synthesize notificationSetup=_notificationSetup - In the implementation block
@property (assign) char isPendingCached;                                         //@synthesize isPendingCached=_isPendingCached - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceID:(id)arg1 forAccount:(id)arg2 ;
-(void)handleAEEvents:(id)arg1 ;
-(void)setEnabled:(char)arg1 creating:(char)arg2 withWindow:(id)arg3 ;
-(void)_serviceFailed:(id)arg1 ;
-(void)willSelect;
-(void)willUnselect;
-(void)didBecomeActive;
-(char)preflightForSignout:(id*)arg1 withWindow:(id)arg2 ;
-(void)_handleSetupKeychainSyncError;
-(id)_applicantList;
-(void)_handleAcceptApplicant:(OpaqueSOSPeerInfoRef)arg1 window:(id)arg2 ;
-(char)_isRequestPending;
-(void)mmCSCSetupControllerDidEnd:(id)arg1 ;
-(void)mmCSCSetupControllerDidOptOut:(id)arg1 ;
-(void)mmCSCSetupControllerDidCancel:(id)arg1 ;
-(char)_isDeviceInCircle;
-(void)_servicePropertiesChanged:(id)arg1 ;
-(void)mmCSCRecoveryControllerDidCancel:(id)arg1 ;
-(void)mmCSCRecoveryControllerDidEnd:(id)arg1 error:(id)arg2 ;
-(void)mmCSCRecoveryControllerDidForget:(id)arg1 ;
-(void)_updateStatus;
-(void)_stateChanged:(id)arg1 ;
-(void)openSecurityPreferences:(id)arg1 ;
-(void)setTosController:(MMTermsOfServiceController *)arg1 ;
-(MMTermsOfServiceController *)tosController;
-(void)_setupNotifications;
-(void)_removeNotifications;
-(void)_stopEnableStateChangedListener;
-(void)setCscRecoverController:(MMCSCRecoveryController *)arg1 ;
-(char)isPendingCached;
-(void)showGuestUserSheet:(id)arg1 ;
-(void)handleEnable:(id)arg1 ;
-(void)showSecuritySheet:(id)arg1 ;
-(id)safariHasDataToDelete;
-(void)showSafariDeletionSheet:(id)arg1 safariKeychainDatMask:(unsigned long long)arg2 ;
-(void)_completeEnable:(id)arg1 registerCredentials:(char)arg2 usingPassword:(id)arg3 ;
-(void)_showGenericAuthErrorSheet:(id)arg1 ;
-(void)_handleCredentialVerification:(id)arg1 shouldNest:(char)arg2 title:(id)arg3 message:(id)arg4 authenticatedHandler:(/*^block*/id)arg5 cancelHandler:(/*^block*/id)arg6 errorHandler:(/*^block*/id)arg7 ;
-(char)_isSecureBackupEnabled;
-(char)_isFirstDeviceInCircle;
-(void)_handleRestoreSecureBackup:(id)arg1 registerCredentials:(char)arg2 password:(id)arg3 ;
-(void)_handleSetupSecureBackup:(id)arg1 registerCredentials:(char)arg2 password:(id)arg3 didReset:(char)arg4 modifyCircle:(char)arg5 ;
-(void)_handleReqestApproval:(id)arg1 secureBackupEnabled:(char)arg2 registerCredentials:(char)arg3 password:(id)arg4 ;
-(void)_handleAlreadyPending:(id)arg1 secureBackupEnabled:(char)arg2 ;
-(void)_handleManaullyResetSheet;
-(void)_handleManaullyResetApprovalRequested;
-(void)_handleWaitingForApproval;
-(void)_handleSecureBackupInvalid:(char)arg1 ;
-(void)setIsPendingCached:(char)arg1 ;
-(void)_handleStartupChecks:(char)arg1 ;
-(int)_keychainSyncStatus;
-(id)_peerList;
-(void)setPendingApprovalDialog:(MMModalDialog *)arg1 ;
-(MMModalDialog *)pendingApprovalDialog;
-(void)_startEnableStateChangedListener;
-(void)_finishRequestApproval:(id)arg1 secureBackupEnabled:(char)arg2 alreadyPending:(char)arg3 registerCredentials:(char)arg4 password:(id)arg5 ;
-(void)_resetKeychainSync;
-(void)_handleResetKeychainConfirmation:(id)arg1 setupSecurityCode:(char)arg2 shouldNest:(char)arg3 resetHandler:(/*^block*/id)arg4 cancelHandler:(/*^block*/id)arg5 ;
-(char)_usinComplexPassphrase;
-(char)_usinRandomPassphrase;
-(char)_isVerificationRequired;
-(id)_smsVerificationTarget:(id*)arg1 ;
-(MMCSCRecoveryController *)cscRecoverController;
-(void)setApplicantDialog:(MMAuthenticatingPasswordSheet *)arg1 ;
-(MMAuthenticatingPasswordSheet *)applicantDialog;
-(void)_finishAcceptApplicants:(id)arg1 ;
-(void)_handleHardLimitReset:(id)arg1 shouldRegister:(char)arg2 password:(id)arg3 didReset:(char)arg4 modifiesCircle:(char)arg5 firstDevice:(char)arg6 ;
-(void)setRequestSentSheet:(MMModalDialog *)arg1 ;
-(MMModalDialog *)requestSentSheet;
-(MMModalDialog *)notificationSheet;
-(void)_finishManuallyResetSheet:(id)arg1 shouldRestore:(char)arg2 ;
-(void)setNotificationSheet:(MMModalDialog *)arg1 ;
-(char)_needsCredentials;
-(void)_handleWaitingForApprovalAuthentication:(id)arg1 secureBackupEnabled:(char)arg2 ;
-(char)_isTrustFailed;
-(char)_isRecordInvalid;
-(void)_showSecurityCodeResetSheet:(long long)arg1 ;
-(void)_handleSecurityCodeResetAuthentication:(long long)arg1 ;
-(NSImageView *)securityResetImageView;
-(NSTextField *)securityResetTitleTextField;
-(NSTextField *)securityResetMessageText;
-(NSButton *)securityResetConfirmButton;
-(NSButton *)securityResetInfoButton;
-(NSButton *)securityResetDisableButton;
-(NSWindow *)securityResetSheet;
-(void)setSecurityResetSheet:(NSWindow *)arg1 ;
-(void)_closeSecurityCodeResetSheet;
-(void)_handleResetAndTurnOffKeychainConfirmation;
-(void)_emptyKeychainSync;
-(void)_showAprovalRequestSentSheet:(id)arg1 ;
-(void)_enabledStateChanged:(id)arg1 ;
-(char)notificationSetup;
-(void)setNotificationSetup:(char)arg1 ;
-(void)_showResetCompletedSheet:(id)arg1 isBackupEnabled:(char)arg2 ;
-(void)_handleDidForgetSheet:(id)arg1 window:(id)arg2 shouldRegister:(char)arg3 password:(id)arg4 firstDevice:(char)arg5 alreadyPending:(char)arg6 ;
-(void)_handleHardLimitRecoveryError:(id)arg1 ;
-(void)_handleRestoreKeychainBackupError;
-(char)_wasKeychainManuallyReset;
-(void)createNewCodeButtonClicked:(id)arg1 ;
-(void)learnMoreButtonClicked:(id)arg1 ;
-(void)turnOffButtonClicked:(id)arg1 ;
-(void)_handleCredentialVerificationIfNeeded:(id)arg1 shouldNest:(char)arg2 title:(id)arg3 message:(id)arg4 authenticatedHandler:(/*^block*/id)arg5 cancelHandler:(/*^block*/id)arg6 errorHandler:(/*^block*/id)arg7 ;
-(void)setSecurityResetImageView:(NSImageView *)arg1 ;
-(void)setSecurityResetTitleTextField:(NSTextField *)arg1 ;
-(void)setSecurityResetMessageText:(NSTextField *)arg1 ;
-(void)setSecurityResetConfirmButton:(NSButton *)arg1 ;
-(void)setSecurityResetInfoButton:(NSButton *)arg1 ;
-(void)setSecurityResetDisableButton:(NSButton *)arg1 ;
-(void)dealloc;
-(id)icon;
-(void)showMoreInfo:(id)arg1 ;
@end
