/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <AOSUI/MMService.h>
#import <AOSUI/MMTermsOfServiceControllerDelegate.h>
#import <AOSUI/BTMMPasswordSheetDelegate.h>

@class NSPopUpButton, NSArray, NSString, NSTimer, MMNATPMP, NSWindow, MMBTMMPasswordSheet, MMTermsOfServiceController;

@interface MMBackToMyMacService : MMService <MMTermsOfServiceControllerDelegate, BTMMPasswordSheetDelegate> {

	NSPopUpButton* toggle;
	CFRunLoopSourceRef _dynamicStoreRLS;
	SEL _buttonActionTrampoline;
	NSArray* _errorQueue;
	NSString* _errorImageName;
	NSTimer* _statusTimer;
	NSTimer* _initializationTimer;
	MMNATPMP* _natpmpController;
	char _ignoreNotifications;
	char _isInitializing;
	char _isABSRestarting;
	char _hasEnergySaverWarning;
	char _hasAttemptedUpdateCredential;
	NSWindow* _badDNSSheet;
	NSWindow* _doubleNATSheet;
	NSWindow* _firewallSheet;
	NSWindow* _natPMPSheet;
	NSWindow* _notInitializedSheet;
	NSWindow* _noRelayServerSheet;
	NSWindow* _noNATPMPSheet;
	NSWindow* _noBonjourSheet;
	NSWindow* _noAuthSheet;
	NSWindow* _sharingSheet;
	NSWindow* _wakeFromSleepSheet;
	MMBTMMPasswordSheet* _btmmPasswordSheet;
	MMTermsOfServiceController* _tosController;

}

@property (assign) char ignoreNotifications;                                //@synthesize ignoreNotifications=_ignoreNotifications - In the implementation block
@property (retain) NSWindow * badDNSSheet;                                  //@synthesize badDNSSheet=_badDNSSheet - In the implementation block
@property (retain) NSWindow * doubleNATSheet;                               //@synthesize doubleNATSheet=_doubleNATSheet - In the implementation block
@property (retain) NSWindow * firewallSheet;                                //@synthesize firewallSheet=_firewallSheet - In the implementation block
@property (retain) NSWindow * natPMPSheet;                                  //@synthesize natPMPSheet=_natPMPSheet - In the implementation block
@property (retain) NSWindow * noAuthSheet;                                  //@synthesize noAuthSheet=_noAuthSheet - In the implementation block
@property (retain) NSWindow * noBonjourSheet;                               //@synthesize noBonjourSheet=_noBonjourSheet - In the implementation block
@property (retain) NSWindow * noNATPMPSheet;                                //@synthesize noNATPMPSheet=_noNATPMPSheet - In the implementation block
@property (retain) NSWindow * noRelayServerSheet;                           //@synthesize noRelayServerSheet=_noRelayServerSheet - In the implementation block
@property (retain) NSWindow * notInitializedSheet;                          //@synthesize notInitializedSheet=_notInitializedSheet - In the implementation block
@property (retain) NSWindow * sharingSheet;                                 //@synthesize sharingSheet=_sharingSheet - In the implementation block
@property (retain) NSWindow * wakeFromSleepSheet;                           //@synthesize wakeFromSleepSheet=_wakeFromSleepSheet - In the implementation block
@property (retain) MMBTMMPasswordSheet * btmmPasswordSheet;                 //@synthesize btmmPasswordSheet=_btmmPasswordSheet - In the implementation block
@property (assign) SEL buttonActionTrampoline;                              //@synthesize buttonActionTrampoline=_buttonActionTrampoline - In the implementation block
@property (retain) NSArray * errorQueue;                                    //@synthesize errorQueue=_errorQueue - In the implementation block
@property (retain) NSString * errorImageName;                               //@synthesize errorImageName=_errorImageName - In the implementation block
@property (retain) NSTimer * initializationTimer;                           //@synthesize initializationTimer=_initializationTimer - In the implementation block
@property (assign) char isInitializing;                                     //@synthesize isInitializing=_isInitializing - In the implementation block
@property (assign) char isABSRestarting;                                    //@synthesize isABSRestarting=_isABSRestarting - In the implementation block
@property (retain) MMTermsOfServiceController * tosController;              //@synthesize tosController=_tosController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_errorWithDNSErrorCode:(int)arg1 forErrorDomain:(id)arg2 ;
-(void)setIgnoreNotifications:(char)arg1 ;
-(char)ignoreNotifications;
-(id)initWithServiceID:(id)arg1 forAccount:(id)arg2 ;
-(void)invalidateService;
-(void)setEnabled:(char)arg1 creating:(char)arg2 withWindow:(id)arg3 ;
-(void)_serviceFailed:(id)arg1 ;
-(void)willSelect;
-(void)willUnselect;
-(void)_closeTermsOfServiceDialog;
-(void)_handleTermsOfServiceCancel:(id)arg1 ;
-(void)mmTermOfServiceControllerDidCancel:(id)arg1 ;
-(void)mmTermOfServiceControllerDidSucceed:(id)arg1 ;
-(void)_servicePropertiesChanged:(id)arg1 ;
-(void)_showClientFailureSheet:(id)arg1 enabling:(char)arg2 ;
-(void)_setupDynamicStoreNotifications;
-(void)_updateStatus;
-(void)_stateChanged:(id)arg1 ;
-(void)_showABSRestartingMessage;
-(void)setErrorQueue:(NSArray *)arg1 ;
-(void)setErrorImageName:(NSString *)arg1 ;
-(void)setBadDNSSheet:(NSWindow *)arg1 ;
-(void)setDoubleNATSheet:(NSWindow *)arg1 ;
-(void)setFirewallSheet:(NSWindow *)arg1 ;
-(void)setNatPMPSheet:(NSWindow *)arg1 ;
-(void)setNoAuthSheet:(NSWindow *)arg1 ;
-(void)setNoBonjourSheet:(NSWindow *)arg1 ;
-(void)setNoNATPMPSheet:(NSWindow *)arg1 ;
-(void)setNoRelayServerSheet:(NSWindow *)arg1 ;
-(void)setNotInitializedSheet:(NSWindow *)arg1 ;
-(void)setSharingSheet:(NSWindow *)arg1 ;
-(void)setWakeFromSleepSheet:(NSWindow *)arg1 ;
-(void)_removeDynamicStoreNotifications;
-(void)_destroyInitializationTimer;
-(NSString *)errorImageName;
-(char)_needsPasswordRefresh;
-(void)_handlePasswordError:(long long)arg1 forWindow:(id)arg2 ;
-(NSArray *)errorQueue;
-(SEL)buttonActionTrampoline;
-(void)setIsInitializing:(char)arg1 ;
-(void)_createInitializationTimer;
-(char)_isFakeDNSServiceErr:(id)arg1 ;
-(char)isInitializing;
-(id)_gatherStatus;
-(id)_peekErrorFromDNSErrorQueue:(id)arg1 ;
-(void)_updateUIWithError:(id)arg1 ;
-(char)isABSRestarting;
-(char)_isAllIncomingConnectionBlocked;
-(int)_dnsServiceStatusCode;
-(char)_isFileSharingEnabled;
-(char)_isScreenSharingEnabled;
-(char)_shouldShowWakeOnLAN;
-(void)showNotInitializedSheet:(id)arg1 ;
-(void)showDoubleNATSheet:(id)arg1 ;
-(void)launchNetworkDiagnostics:(id)arg1 ;
-(void)showNoRelayServerSheet:(id)arg1 ;
-(void)showNoNATPMPSheet:(id)arg1 ;
-(void)showNoAuthSheet:(id)arg1 ;
-(void)showBadDNSSheet:(id)arg1 ;
-(void)showNATPMPSheet:(id)arg1 ;
-(void)showFirewallSheet:(id)arg1 ;
-(void)showSharingSheet:(id)arg1 ;
-(void)showWakeFromSleepSheet:(id)arg1 ;
-(void)showPasswordEntry:(id)arg1 ;
-(void)setButtonActionTrampoline:(SEL)arg1 ;
-(NSTimer *)initializationTimer;
-(void)_fireIntializationTimer:(id)arg1 ;
-(void)setInitializationTimer:(NSTimer *)arg1 ;
-(void)_createInitializationTimerWithTimeInternval:(double)arg1 ;
-(void)setIsABSRestarting:(char)arg1 ;
-(id)btmmMemberStatusDict;
-(id)btmmMemberDomain;
-(id)btmmStateDicts;
-(void)fireUpdateStatus:(id)arg1 ;
-(void)showSheetForWindow:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 defaultKeyEquivalent:(id)arg5 alternateButtonTitle:(id)arg6 alternateKeyEquivalent:(id)arg7 otherButtonTitle:(id)arg8 otherKeyEquivalent:(id)arg9 icon:(id)arg10 andHelpHandler:(/*^block*/id)arg11 completionHandler:(/*^block*/id)arg12 ;
-(void)openSecurityPreferences:(id)arg1 ;
-(void)showNATPMPPrompt:(id)arg1 ;
-(void)openSharingPreferences:(id)arg1 ;
-(void)openEnergySaverPreferences:(id)arg1 ;
-(void)setBtmmPasswordSheet:(MMBTMMPasswordSheet *)arg1 ;
-(MMBTMMPasswordSheet *)btmmPasswordSheet;
-(void)_updatePowerManagementNotification:(id)arg1 ;
-(id)_copyTermsOfServiceInfoForAccountID:(id)arg1 password:(id)arg2 ;
-(void)setTosController:(MMTermsOfServiceController *)arg1 ;
-(MMTermsOfServiceController *)tosController;
-(void)btmmPasswordSheetDidEnd:(id)arg1 returnCode:(long long)arg2 ;
-(char)_areDynamicStoreNotificationsEnabled;
-(void)_updateStatusTimer;
-(void)showNoBonjourSheet:(id)arg1 ;
-(NSWindow *)badDNSSheet;
-(NSWindow *)doubleNATSheet;
-(NSWindow *)firewallSheet;
-(NSWindow *)natPMPSheet;
-(NSWindow *)noAuthSheet;
-(NSWindow *)noBonjourSheet;
-(NSWindow *)noNATPMPSheet;
-(NSWindow *)noRelayServerSheet;
-(NSWindow *)notInitializedSheet;
-(NSWindow *)sharingSheet;
-(NSWindow *)wakeFromSleepSheet;
-(void)finalize;
-(void)dealloc;
-(id)icon;
-(void)_setEnabled:(char)arg1 ;
-(void)showMoreInfo:(id)arg1 ;
@end

