/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <AppKit/NSView.h>
#import <ScreenSharing/IDSSessionDelegate.h>
#import <ScreenSharing/SSConnectionProgressViewControllerDelegate.h>
#import <ScreenSharing/SSSessionSelectViewControllerDelegate.h>
#import <ScreenSharing/SSCurtainMessageViewControllerDelegate.h>
#import <ScreenSharing/SSConnectionPromptObserver.h>
#import <ScreenSharing/SSSessionDelegate.h>
#import <ScreenSharing/SSFrameBufferViewDelegate.h>
#import <ScreenSharing/SSAddressResolutionObserver.h>
#import <ScreenSharing/SSCredentialsRequester.h>
#import <ScreenSharing/NSWindowDelegate.h>
#import <ScreenSharing/NSWindowRestoration.h>

@protocol SSSessionFileTransferDelegate, SSSessionViewDelegate;
@class NSShadow, NSCursor, SSSession, SSFrameBufferView, SSPanningScrollView, SSFadeView, SSConnectionWindowController, SSSessionSelectViewController, SSConnectionProgressViewController, SSConnectionAddressViewController, SSConnectionAuthenticationViewController, NSString, SSCredentials, NSMutableOrderedSet, NSDate, NSArray, NSMutableArray, NSTimer, NSTrackingArea, NSMutableDictionary, IDSSession, NSImage, SSScreenInfo, SSBorderView, SSCurtainMessageViewController, NotificationOverlayViewController, NSXPCConnection, NSOrderedSet, NSView;

@interface SSSessionView : NSView <IDSSessionDelegate, SSConnectionProgressViewControllerDelegate, SSSessionSelectViewControllerDelegate, SSCurtainMessageViewControllerDelegate, SSConnectionPromptObserver, SSSessionDelegate, SSFrameBufferViewDelegate, SSAddressResolutionObserver, SSCredentialsRequester, NSWindowDelegate, NSWindowRestoration> {

	double _borderSpacing;
	double _borderWidth;
	CGColorRef _borderColor;
	NSShadow* _borderShadow;
	char _curtained;
	char _shouldShowCursorForUnknownCursorState;
	char _fillsWindow;
	char _shouldSharePasteboard;
	char _allowsFileTransferToRemote;
	char _allowsFileTransferFromRemote;
	char allowsSSHTunnelForLegacyVNC;
	char shouldWarnUserForUnencryptedLegacyVNC;
	char hasEntireScreen;
	char isOffConsole;
	char showingFullScreenMenuBar;
	char simulatingLiveResize;
	char isUsingVirtualDisplay;
	char clientChangedCurtainMode;
	char userEndedConnection;
	char shouldNotifyOfFailureToEnterCurtainMode;
	char shouldNotifyOfFailureToExitCurtainMode;
	char userHasAlreadyAgreedToProceedWithUnencryptedLegacyVNC;
	char animatingResize;
	char switchedDisplay;
	char changingFullScreenMode;
	char mouseButtonIsDown;
	char menuBarIsLocked;
	char _assistModeWithMouseUp;
	char _hasUnknownCursorState;
	char _sessionAllowsControl;
	char _canToggleCurtainMode;
	char _shouldNotifyOfVirtualDisplayStateChange;
	char _shouldNotifyOfAllowsControlStateChange;
	char _shouldSkipAddressWindow;
	int sessionState;
	long long _controlMode;
	NSCursor* _observeCursor;
	NSCursor* _controlCursor;
	id<SSSessionFileTransferDelegate> _fileTransferDelegate;
	SSSession* session;
	SSFrameBufferView* frameBufferView;
	SSPanningScrollView* scrollView;
	SSFadeView* reconnectOverlay;
	SSConnectionWindowController* connectionWindowController;
	SSSessionSelectViewController* sessionSelectViewController;
	SSConnectionProgressViewController* connectionProgressViewController;
	SSConnectionAddressViewController* connectionAddressViewController;
	SSConnectionAuthenticationViewController* connectionAuthenticationViewController;
	OpaqueEventHandlerRefRef menuAutoShowEventHandler;
	NSString* currentConsoleUser;
	long long chosenSessionSelectionAction;
	NSString* requestConsoleCommand;
	SSCredentials* cachedCredentials;
	NSMutableOrderedSet* availableKerberosIdentities;
	NSDate* resolveStartTime;
	NSString* bonjourDisplayName;
	NSArray* resolvedAddresses;
	NSString* userEnteredAddressString;
	NSString* cachedURL;
	NSMutableArray* attemptedAuthTypes;
	NSString* kerberosClientPrincipal;
	NSString* lastRetainedKerberosClientPrincipal;
	NSTimer* connectionProgressTimer;
	NSTrackingArea* menuBarTrackingArea;
	NSMutableDictionary* netAuthContext;
	IDSSession* _idsSession;
	id<SSSessionViewDelegate> _delegate;
	NSArray* _screens;
	NSImage* _userPicture;
	double _lastResignTime;
	SSScreenInfo* __selectedScreen;
	SSBorderView* __borderView;
	SSCurtainMessageViewController* _curtainMessageViewController;
	NotificationOverlayViewController* _overlayNotificationViewController;
	NSXPCConnection* _xpcConnection;
	NSString* _curtainMessage;
	NSOrderedSet* _preferredURLs;
	NSMutableOrderedSet* _attemptedURLs;
	NSOrderedSet* _preferredCredentials;
	NSMutableOrderedSet* _attemptedCredentials;
	NSArray* _unresolvedAddresses;
	NSTimer* _menuBarUnlockTimer;
	NSTrackingArea* _cursorTrackingArea;
	unsigned long long _menuBarLockCounter;

}

@property (retain) SSSession * session; 
@property (retain) IDSSession * idsSession;                                                                        //@synthesize idsSession=_idsSession - In the implementation block
@property (retain) SSFrameBufferView * frameBufferView; 
@property (retain) SSPanningScrollView * scrollView; 
@property (retain,readonly) NSView * borderView; 
@property (assign) id<SSSessionFileTransferDelegate> fileTransferDelegate; 
@property (assign) id<SSSessionViewDelegate> delegate;                                                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) char audioChatSupported; 
@property (getter=isAudioChatMuted) char audioChatMuted; 
@property (assign) char fillsWindow; 
@property (assign) double borderSpacing; 
@property (assign) double borderWidth; 
@property (assign) CGColorRef borderColor; 
@property (assign) char shouldScaleScreen; 
@property (assign) char shouldSharePasteboard; 
@property (getter=isCurtained) char curtained; 
@property (assign) long long controlMode; 
@property (retain) SSScreenInfo * selectedScreen; 
@property (assign) long long screenQualityMode; 
@property (retain) NSCursor * observeCursor; 
@property (retain) NSCursor * controlCursor; 
@property (assign) char shouldShowCursorForUnknownCursorState; 
@property (assign) char allowsFileTransferToRemote; 
@property (assign) char allowsFileTransferFromRemote; 
@property (assign) char allowsSSHTunnelForLegacyVNC; 
@property (assign) char shouldWarnUserForUnencryptedLegacyVNC; 
@property (assign) char assistModeEnabled; 
@property (assign,nonatomic) char assistModeActive; 
@property (assign,nonatomic) char assistModeWithMouseUp;                                                           //@synthesize assistModeWithMouseUp=_assistModeWithMouseUp - In the implementation block
@property (assign,nonatomic) int assistPointerKind; 
@property (copy) NSArray * screens;                                                                                //@synthesize screens=_screens - In the implementation block
@property (copy) NSArray * resolvedAddresses; 
@property (retain) NSImage * userPicture;                                                                          //@synthesize userPicture=_userPicture - In the implementation block
@property (assign) int sessionState; 
@property (assign) char isOffConsole; 
@property (readonly) char isConnecting; 
@property (readonly) char isReconnecting; 
@property (readonly) char isConnected; 
@property (readonly) char isControlling; 
@property (readonly) char isSharingControl; 
@property (readonly) char isLegacyVNC; 
@property (assign) char hasUnknownCursorState;                                                                     //@synthesize hasUnknownCursorState=_hasUnknownCursorState - In the implementation block
@property (readonly) char isSessionVisible; 
@property (readonly) char isGatheringAddressForConnection; 
@property (readonly) char isSelectingSession; 
@property (readonly) char supportsCopyPaste; 
@property (readonly) char supportsSharedPasteboard; 
@property (readonly) char supportsCurtainMode; 
@property (readonly) char supportsScalingScreen; 
@property (readonly) char supportsChangingScreenQualityMode; 
@property (readonly) char supportsControlMode; 
@property (readonly) char supportsFileTransfer; 
@property (readonly) char isAppleIDInvitationSession; 
@property (assign) double lastResignTime;                                                                          //@synthesize lastResignTime=_lastResignTime - In the implementation block
@property (retain) NSMutableDictionary * netAuthContext; 
@property (assign) long long _controlMode;                                                                         //@synthesize controlMode=_controlMode - In the implementation block
@property (assign) char _curtained;                                                                                //@synthesize curtained=_curtained - In the implementation block
@property (assign) char _shouldShowCursorForUnknownCursorState;                                                    //@synthesize shouldShowCursorForUnknownCursorState=_shouldShowCursorForUnknownCursorState - In the implementation block
@property (retain) NSCursor * _observeCursor;                                                                      //@synthesize observeCursor=_observeCursor - In the implementation block
@property (retain) NSCursor * _controlCursor;                                                                      //@synthesize controlCursor=_controlCursor - In the implementation block
@property (assign) char _fillsWindow;                                                                              //@synthesize fillsWindow=_fillsWindow - In the implementation block
@property (assign) char _shouldSharePasteboard;                                                                    //@synthesize shouldSharePasteboard=_shouldSharePasteboard - In the implementation block
@property (assign) char _allowsFileTransferToRemote;                                                               //@synthesize allowsFileTransferToRemote=_allowsFileTransferToRemote - In the implementation block
@property (assign) char _allowsFileTransferFromRemote;                                                             //@synthesize allowsFileTransferFromRemote=_allowsFileTransferFromRemote - In the implementation block
@property (assign) id<SSSessionFileTransferDelegate> _fileTransferDelegate;                                        //@synthesize fileTransferDelegate=_fileTransferDelegate - In the implementation block
@property (retain) SSScreenInfo * _selectedScreen;                                                                 //@synthesize _selectedScreen=__selectedScreen - In the implementation block
@property (retain) SSBorderView * _borderView;                                                                     //@synthesize _borderView=__borderView - In the implementation block
@property (retain) SSFadeView * reconnectOverlay; 
@property (retain) SSConnectionWindowController * connectionWindowController; 
@property (retain) SSSessionSelectViewController * sessionSelectViewController; 
@property (retain) SSConnectionProgressViewController * connectionProgressViewController; 
@property (retain) SSConnectionAddressViewController * connectionAddressViewController; 
@property (retain) SSConnectionAuthenticationViewController * connectionAuthenticationViewController; 
@property (retain) SSCurtainMessageViewController * curtainMessageViewController;                                  //@synthesize curtainMessageViewController=_curtainMessageViewController - In the implementation block
@property (retain) NotificationOverlayViewController * overlayNotificationViewController;                          //@synthesize overlayNotificationViewController=_overlayNotificationViewController - In the implementation block
@property (retain) NSXPCConnection * xpcConnection;                                                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign) OpaqueEventHandlerRefRef menuAutoShowEventHandler; 
@property (readonly) char isDisconnected; 
@property (readonly) char isNotConnected; 
@property (assign) char hasEntireScreen; 
@property (assign) char sessionAllowsControl;                                                                      //@synthesize sessionAllowsControl=_sessionAllowsControl - In the implementation block
@property (assign) char canToggleCurtainMode;                                                                      //@synthesize canToggleCurtainMode=_canToggleCurtainMode - In the implementation block
@property (readonly) char isBonjourSession; 
@property (readonly) char isForcedViewer; 
@property (assign) char showingFullScreenMenuBar; 
@property (assign) char simulatingLiveResize; 
@property (assign) char isUsingVirtualDisplay; 
@property (assign) char clientChangedCurtainMode; 
@property (assign) char userEndedConnection; 
@property (assign) char shouldNotifyOfVirtualDisplayStateChange;                                                   //@synthesize shouldNotifyOfVirtualDisplayStateChange=_shouldNotifyOfVirtualDisplayStateChange - In the implementation block
@property (assign) char shouldNotifyOfFailureToEnterCurtainMode; 
@property (assign) char shouldNotifyOfFailureToExitCurtainMode; 
@property (assign) char shouldNotifyOfAllowsControlStateChange;                                                    //@synthesize shouldNotifyOfAllowsControlStateChange=_shouldNotifyOfAllowsControlStateChange - In the implementation block
@property (assign) char userHasAlreadyAgreedToProceedWithUnencryptedLegacyVNC; 
@property (getter=isAnimatingResize) char animatingResize; 
@property (assign) char switchedDisplay; 
@property (assign) char shouldSkipAddressWindow;                                                                   //@synthesize shouldSkipAddressWindow=_shouldSkipAddressWindow - In the implementation block
@property (retain) NSTimer * connectionProgressTimer; 
@property (copy) NSString * curtainMessage;                                                                        //@synthesize curtainMessage=_curtainMessage - In the implementation block
@property (copy) NSString * cachedURL; 
@property (copy) NSOrderedSet * preferredURLs;                                                                     //@synthesize preferredURLs=_preferredURLs - In the implementation block
@property (retain) NSMutableOrderedSet * attemptedURLs;                                                            //@synthesize attemptedURLs=_attemptedURLs - In the implementation block
@property (retain) SSCredentials * cachedCredentials; 
@property (retain) NSMutableOrderedSet * availableKerberosIdentities; 
@property (copy) NSOrderedSet * preferredCredentials;                                                              //@synthesize preferredCredentials=_preferredCredentials - In the implementation block
@property (retain) NSMutableOrderedSet * attemptedCredentials;                                                     //@synthesize attemptedCredentials=_attemptedCredentials - In the implementation block
@property (copy) NSString * currentConsoleUser; 
@property (assign) long long chosenSessionSelectionAction; 
@property (copy) NSString * requestConsoleCommand; 
@property (copy) NSDate * resolveStartTime; 
@property (copy) NSString * bonjourDisplayName; 
@property (copy) NSArray * unresolvedAddresses;                                                                    //@synthesize unresolvedAddresses=_unresolvedAddresses - In the implementation block
@property (copy) NSString * userEnteredAddressString; 
@property (retain) NSMutableArray * attemptedAuthTypes; 
@property (retain) NSString * kerberosClientPrincipal; 
@property (retain) NSString * lastRetainedKerberosClientPrincipal; 
@property (readonly) CGSize contentSize; 
@property (readonly) CGRect sessionFrame; 
@property (readonly) char isFullScreen; 
@property (assign) char changingFullScreenMode; 
@property (assign) char mouseButtonIsDown; 
@property (assign) char menuBarIsLocked; 
@property (retain) NSTimer * menuBarUnlockTimer;                                                                   //@synthesize menuBarUnlockTimer=_menuBarUnlockTimer - In the implementation block
@property (retain) NSTrackingArea * menuBarTrackingArea; 
@property (retain) NSTrackingArea * cursorTrackingArea;                                                            //@synthesize cursorTrackingArea=_cursorTrackingArea - In the implementation block
@property (assign) unsigned long long menuBarLockCounter;                                                          //@synthesize menuBarLockCounter=_menuBarLockCounter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isRedwoodApp;
+(char)screenSharingEnabledLocally;
+(id)connectionOptionsWithOptions:(id)arg1 urlOptions:(id)arg2 ;
+(id)keyPathsForValuesAffectingShouldScaleScreen;
+(id)keyPathsForValuesAffectingIsLegacyVNC;
+(id)keyPathsForValuesAffectingSupportsCopyPaste;
+(id)keyPathsForValuesAffectingSupportsSharedPasteboard;
+(id)keyPathsForValuesAffectingSupportsCurtainMode;
+(id)keyPathsForValuesAffectingSupportsScalingScreen;
+(id)keyPathsForValuesAffectingSupportsChangingScreenQualityMode;
+(id)keyPathsForValuesAffectingSupportsControlMode;
+(id)keyPathsForValuesAffectingSupportsFileTransfer;
+(id)keyPathsForValuesAffectingIsConnected;
+(id)keyPathsForValuesAffectingIsConnecting;
+(id)keyPathsForValuesAffectingIsReconnecting;
+(id)keyPathsForValuesAffectingIsDisconnected;
+(id)keyPathsForValuesAffectingIsNotConnected;
+(id)keyPathsForValuesAffectingControlMode;
+(id)keyPathsForValuesAffectingIsControlling;
+(id)keyPathsForValuesAffectingShouldSharePasteboard;
+(id)keyPathsForValuesAffectingCurtained;
+(id)keyPathsForValuesAffectingFillsWindow;
+(id)keyPathsForValuesAffectingAllowsFileTransferToRemote;
+(id)keyPathsForValuesAffectingAllowsFileTransferFromRemote;
+(id)keyPathsForValuesAffectingFileTransferDelegate;
+(id)keyPathsForValuesAffectingSelectedScreen;
+(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)commonInit;
-(double)borderSpacing;
-(void)setBorderSpacing:(double)arg1 ;
-(void)focus;
-(void)setScreenQualityMode:(long long)arg1 ;
-(void)setSelectedScreen:(SSScreenInfo *)arg1 ;
-(void)setShouldScaleScreen:(char)arg1 ;
-(void)setShouldSharePasteboard:(char)arg1 ;
-(void)registerForSessionObservation;
-(void)setFrameBufferView:(SSFrameBufferView *)arg1 ;
-(SSFrameBufferView *)frameBufferView;
-(void)setOverlayNotificationViewController:(NotificationOverlayViewController *)arg1 ;
-(NotificationOverlayViewController *)overlayNotificationViewController;
-(void)setFillsWindow:(char)arg1 ;
-(void)setAssistModeEnabled:(char)arg1 ;
-(void)setAllowsFileTransferToRemote:(char)arg1 ;
-(void)setAllowsFileTransferFromRemote:(char)arg1 ;
-(void)setCanToggleCurtainMode:(char)arg1 ;
-(void)setSessionAllowsControl:(char)arg1 ;
-(void)setShouldShowCursorForUnknownCursorState:(char)arg1 ;
-(void)setChosenSessionSelectionAction:(long long)arg1 ;
-(void)setSessionState:(int)arg1 ;
-(void)setAttemptedAuthTypes:(NSMutableArray *)arg1 ;
-(void)setAttemptedCredentials:(NSMutableOrderedSet *)arg1 ;
-(void)setAttemptedURLs:(NSMutableOrderedSet *)arg1 ;
-(void)handleScreenParameterChange:(id)arg1 ;
-(void)workspaceActiveSpaceChanged:(id)arg1 ;
-(char)isNotConnected;
-(void)clearSessionStateAndDisconnect:(char)arg1 ;
-(OpaqueEventHandlerRefRef)menuAutoShowEventHandler;
-(void)setMenuAutoShowEventHandler:(OpaqueEventHandlerRefRef)arg1 ;
-(NSTimer *)menuBarUnlockTimer;
-(void)setMenuBarUnlockTimer:(NSTimer *)arg1 ;
-(NSTimer *)connectionProgressTimer;
-(void)setConnectionProgressTimer:(NSTimer *)arg1 ;
-(void)unregisterForSessionObservation;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)set_selectedScreen:(SSScreenInfo *)arg1 ;
-(void)setScreens:(NSArray *)arg1 ;
-(void)setUserPicture:(NSImage *)arg1 ;
-(void)setNetAuthContext:(NSMutableDictionary *)arg1 ;
-(void)setConnectionWindowController:(SSConnectionWindowController *)arg1 ;
-(SSConnectionAddressViewController *)connectionAddressViewController;
-(void)setConnectionAddressViewController:(SSConnectionAddressViewController *)arg1 ;
-(SSConnectionAuthenticationViewController *)connectionAuthenticationViewController;
-(void)setConnectionAuthenticationViewController:(SSConnectionAuthenticationViewController *)arg1 ;
-(SSConnectionProgressViewController *)connectionProgressViewController;
-(void)setConnectionProgressViewController:(SSConnectionProgressViewController *)arg1 ;
-(SSCurtainMessageViewController *)curtainMessageViewController;
-(void)setCurtainMessageViewController:(SSCurtainMessageViewController *)arg1 ;
-(SSSessionSelectViewController *)sessionSelectViewController;
-(void)setSessionSelectViewController:(SSSessionSelectViewController *)arg1 ;
-(void)set_borderView:(SSBorderView *)arg1 ;
-(void)setReconnectOverlay:(SSFadeView *)arg1 ;
-(void)setObserveCursor:(NSCursor *)arg1 ;
-(void)setControlCursor:(NSCursor *)arg1 ;
-(void)setResolveStartTime:(NSDate *)arg1 ;
-(void)setBonjourDisplayName:(NSString *)arg1 ;
-(void)setCurtainMessage:(NSString *)arg1 ;
-(void)setPreferredURLs:(NSOrderedSet *)arg1 ;
-(void)setUserEnteredAddressString:(NSString *)arg1 ;
-(void)setResolvedAddresses:(NSArray *)arg1 ;
-(void)setUnresolvedAddresses:(NSArray *)arg1 ;
-(void)setCachedCredentials:(SSCredentials *)arg1 ;
-(void)setAvailableKerberosIdentities:(NSMutableOrderedSet *)arg1 ;
-(void)setPreferredCredentials:(NSOrderedSet *)arg1 ;
-(void)setCurrentConsoleUser:(NSString *)arg1 ;
-(void)setRequestConsoleCommand:(NSString *)arg1 ;
-(NSString *)userEnteredAddressString;
-(NSArray *)resolvedAddresses;
-(char)showingFullScreenMenuBar;
-(char)fillsWindow;
-(void)setShowingFullScreenMenuBar:(char)arg1 ;
-(void)lockMenuBar:(char)arg1 ;
-(void)resizeSessionToLargestPossibleSize;
-(SSScreenInfo *)selectedScreen;
-(NSImage *)userPicture;
-(void)setHasUnknownCursorState:(char)arg1 ;
-(void)setShouldSkipAddressWindow:(char)arg1 ;
-(NSOrderedSet *)preferredURLs;
-(void)showConnectionAddressWindow;
-(void)set_curtained:(char)arg1 ;
-(void)showCurtainMessageWindow;
-(void)resolveURL:(id)arg1 ;
-(void)connectWithOptions:(id)arg1 ;
-(void)connectToURL:(id)arg1 withOptions:(id)arg2 ;
-(void)connectToURLs:(id)arg1 withOptions:(id)arg2 ;
-(void)requestSystemInfo:(int)arg1 args:(id)arg2 senderToken:(unsigned)arg3 ;
-(void)armUnlockMenuBarTimer;
-(void)setMouseButtonIsDown:(char)arg1 ;
-(void)adjustShrinkModeForEvent:(id)arg1 ;
-(char)assistModeEnabled;
-(char)assistModeWithMouseUp;
-(void)setAssistModeActive:(char)arg1 ;
-(char)handleSSInputEvent:(id)arg1 ;
-(char)isSessionVisible;
-(SSConnectionWindowController *)connectionWindowController;
-(char)isWindowVisible:(id)arg1 ;
-(void)endReconnectOverlay:(char)arg1 ;
-(char)closeOrReshowConnectionAddressWindow;
-(char)assistModeActive;
-(void)dismissNotificationOverlay;
-(void)setHasEntireScreen:(char)arg1 ;
-(IDSSession *)idsSession;
-(NSXPCConnection *)xpcConnection;
-(void)releaseKerberosCredential;
-(NSMutableOrderedSet *)attemptedURLs;
-(NSMutableOrderedSet *)attemptedCredentials;
-(void)showReconnectOverlayView;
-(void)reconnectSessionAndResolve;
-(void)configureViewerForLocalContentsScale;
-(void)closeSession;
-(void)configureInputEventConsumer;
-(char)isControlling;
-(void)setLastResignTime:(double)arg1 ;
-(void)addMenuBarTrackingArea;
-(void)unlockMenuBar;
-(void)armMenuBarUnlockTimer;
-(void)unlockMenuBarTimer:(id)arg1 ;
-(unsigned long long)menuBarLockCounter;
-(void)setMenuBarLockCounter:(unsigned long long)arg1 ;
-(CGRect)sessionFrame;
-(CGSize)largestPossibleSessionSize;
-(CGRect)sessionContainingRect;
-(CGRect)adjustedFrame:(CGRect)arg1 forContainingRect:(CGRect)arg2 positionAdjustment:(int)arg3 sessionInsets:(Rect)arg4 containingRectInsets:(Rect)arg5 unscaledSize:(CGSize)arg6 resultingScalingFactor:(double*)arg7 ;
-(NSTrackingArea *)menuBarTrackingArea;
-(void)setMenuBarTrackingArea:(NSTrackingArea *)arg1 ;
-(CGSize)largestPossibleWindowedSessionSize;
-(id)localCursor;
-(NSTrackingArea *)cursorTrackingArea;
-(void)setCursorTrackingArea:(NSTrackingArea *)arg1 ;
-(void)addCursorTrackingArea;
-(char)mouseButtonIsDown;
-(char)menuBarIsLocked;
-(void)setMenuBarIsLocked:(char)arg1 ;
-(void)lockMenuBar;
-(void)menuBarUnlockTimer:(id)arg1 ;
-(void)setSimulatingLiveResize:(char)arg1 ;
-(void)setChangingFullScreenMode:(char)arg1 ;
-(void)installMenuBarTransitionHandler;
-(void)removeMenuBarTransitionHandler;
-(char)shouldScaleScreen;
-(long long)controlMode;
-(long long)screenQualityMode;
-(char)shouldSharePasteboard;
-(char)isAppleIDInvitationSession;
-(id)windowRestorationStateForWindow:(id)arg1 ;
-(char)supportsControlMode;
-(void)showFailedToControlWarning;
-(char)isLegacyVNC;
-(void)showFailedToObserveWarning;
-(char)isSharingControl;
-(void)showFailedToChangeSharingModeWarning;
-(void)set_controlMode:(long long)arg1 ;
-(void)ssSession:(id)arg1 showConnectDidFailUI:(int)arg2 ;
-(char)isReconnecting;
-(NSOrderedSet *)preferredCredentials;
-(char)isConnectionProgressViewVisible;
-(void)showConnectionFailedWarning;
-(void)showConnectionAddressWindowWithURLString:(id)arg1 ;
-(void)setViewControllersConnectingState:(char)arg1 ;
-(void)showPermanentFailure;
-(void)showSSHConfigurationWarning;
-(void)showSSHNotAvailableWarning;
-(void)showManagementAppWarning;
-(void)showNotRedwoodAppWarning;
-(char)isSelectingSession;
-(char)userEndedConnection;
-(void)runUserClosedConnectionSheet;
-(void)startReconnectOverlay;
-(void)reconnectSessionAndResolve:(char)arg1 ;
-(NSMutableOrderedSet *)availableKerberosIdentities;
-(id)principalSetIfKerberosIsInAuthTypes:(id)arg1 ;
-(NSMutableArray *)attemptedAuthTypes;
-(char)isForcedViewer;
-(void)showAuthenticationFailedWarning;
-(char)allowsSSHTunnelForLegacyVNC;
-(char)shouldProceedWithVNC;
-(void)cleanupForCancel;
-(char)shouldPreferKerberosWithAuthTypes:(id)arg1 wasBTMM:(char*)arg2 ;
-(id)orderedArrayOfAuthTypesForMethod:(long long)arg1 preferKerberos:(char)arg2 serverAllowedTypes:(id)arg3 ;
-(SSCredentials *)cachedCredentials;
-(char)cachedCredentialsAreValidForAuthType:(id)arg1 ;
-(void)setKerberosClientPrincipal:(NSString *)arg1 ;
-(NSString *)kerberosClientPrincipal;
-(id)servicePrincipalForClientPrincipal:(id)arg1 ;
-(id)loadCredentialsFromKeychain:(id)arg1 forAuthType:(id)arg2 ;
-(void)showAuthenticationViewForHostName:(id)arg1 canConnectAsGuest:(char)arg2 vnc:(char)arg3 ;
-(void)showConnectionProgressViewWithLabel:(id)arg1 andImage:(id)arg2 ;
-(char)shouldProceedWithGuestConnection;
-(id)standardizedUserInputString:(id)arg1 port:(id*)arg2 ;
-(id)standardizedKeychainIdentityWithPort:(id*)arg1 ;
-(OpaqueSecKeychainItemRefRef)findCredentialInKeychainForAuthType:(id)arg1 inRequestedAccountName:(id)arg2 outAccountName:(id*)arg3 ;
-(int)removeCredentialsFromKeychainWithAuthType:(id)arg1 accountName:(id)arg2 ;
-(void)retainKerberosCredential;
-(void)showCouldNotControlWarning;
-(void)showAskToObserveWasDeniedWarning;
-(void)showWarningWithTitle:(id)arg1 andMessage:(id)arg2 ;
-(long long)chosenSessionSelectionAction;
-(void)setIsOffConsole:(char)arg1 ;
-(void)showConnectionWindowWithViewFromController:(id)arg1 ;
-(void)showConnectionProgressView;
-(void)showShareConsoleRequestDeniedWarning;
-(void)configureViewerForScaling:(char)arg1 ;
-(void)configurePanningMode:(long long)arg1 ;
-(void)setControlMode:(long long)arg1 ;
-(void)configureDragAndDropFileCopy;
-(char)supportsSharedPasteboard;
-(void)set_shouldSharePasteboard:(char)arg1 ;
-(CGSize)defaultInitialSessionSize;
-(CGRect)adjustedFrame:(CGRect)arg1 forUnscaledSize:(CGSize)arg2 withResultingScalingFactor:(double*)arg3 ;
-(char)isUsingVirtualDisplay;
-(void)setCurtained:(char)arg1 ;
-(char)resetScalingFactorIfNeeded:(double)arg1 ;
-(void)resizeSessionForFrame:(CGRect)arg1 ;
-(char)switchedDisplay;
-(CGSize)addWindowOverheadToSize:(CGSize)arg1 ;
-(void)setAnimatingResize:(char)arg1 ;
-(void)setSwitchedDisplay:(char)arg1 ;
-(char)hasEntireScreen;
-(void)closeConnectingWindow;
-(char)isAnimatingResize;
-(void)saveUserFrame;
-(char)shouldNotifyOfAllowsControlStateChange;
-(char)sessionAllowsControl;
-(void)showAllowsControlStateChangeNotification:(char)arg1 ;
-(void)setShouldNotifyOfAllowsControlStateChange:(char)arg1 ;
-(char)shouldNotifyOfFailureToEnterCurtainMode;
-(void)showFailedToEnterCurtainModeWarning;
-(void)setShouldNotifyOfFailureToEnterCurtainMode:(char)arg1 ;
-(char)shouldNotifyOfFailureToExitCurtainMode;
-(void)showFailedToExitCurtainModeWarning;
-(void)setShouldNotifyOfFailureToExitCurtainMode:(char)arg1 ;
-(double)lastResignTime;
-(id<SSSessionFileTransferDelegate>)fileTransferDelegate;
-(void)setUserEndedConnection:(char)arg1 ;
-(char)isOffConsole;
-(char)_curtained;
-(char)clientChangedCurtainMode;
-(void)setClientChangedCurtainMode:(char)arg1 ;
-(void)setIsUsingVirtualDisplay:(char)arg1 ;
-(void)showPausedNotification;
-(void)dismissPausedNotification;
-(void)showReconnectOverlayView:(char)arg1 andMaxAlpha:(float)arg2 ;
-(NSString *)requestConsoleCommand;
-(void)connectToAddress:(id)arg1 withOptions:(id)arg2 ;
-(void)handleSessionEnded:(id)arg1 fromID:(id)arg2 withInfo:(id)arg3 ;
-(void)ssSessionTerminated:(id)arg1 ;
-(void)showAppleIDInvitationWasDeclinedWarning;
-(void)showAppleIDIsBlockedWarning;
-(void)showAppleIDInvitationWasUnansweredWarning;
-(void)ssSession:(id)arg1 connectDidFail:(int)arg2 ;
-(void)logAddressResolutionToMessageTracerWithStatus:(int)arg1 ;
-(void)addressesResolvedMainThread:(id)arg1 ;
-(void)addressResolutionFailedMainThread:(id)arg1 ;
-(void)cleanupUserCancelledCredentialsRequest;
-(id)lockedByMessageWithUserMessage:(id)arg1 ;
-(NSCursor *)controlCursor;
-(NSCursor *)observeCursor;
-(char)shouldShowCursorForUnknownCursorState;
-(char)isConnectionWindowVisible;
-(void)startResolveProgress:(id)arg1 ;
-(char)isConnecting;
-(id)inviteeImage;
-(void)showConnectToSelfWarning;
-(void)setAudioChatMuted:(char)arg1 ;
-(NSString *)lastRetainedKerberosClientPrincipal;
-(id)kerberosLabel;
-(void)setLastRetainedKerberosClientPrincipal:(NSString *)arg1 ;
-(id)escapedURL;
-(char)changingFullScreenMode;
-(double)adjustedScalingFactorForFrame:(CGRect)arg1 ;
-(char)simulatingLiveResize;
-(void)configureForNewFillsWindowValue:(char)arg1 withOldValue:(char)arg2 oldWindow:(id)arg3 newWindow:(id)arg4 ;
-(Rect)sessionInsets;
-(Rect)sessionContainingRectInsets;
-(Rect)sessionShrinkInsetsForFrame:(CGRect)arg1 ;
-(CGRect)subtractInsets:(Rect)arg1 fromRect:(CGRect)arg2 ;
-(CGSize)subtractInsets:(Rect)arg1 fromSize:(CGSize)arg2 ;
-(CGSize)adjustedContentSize:(CGSize)arg1 forContainingRectWithSize:(CGSize)arg2 unscaledSize:(CGSize)arg3 resultingScalingFactor:(double*)arg4 ;
-(CGSize)addInsets:(Rect)arg1 toSize:(CGSize)arg2 ;
-(double)scalingFactorForContentSize:(CGSize)arg1 unscaledSize:(CGSize)arg2 ;
-(Rect)toolbarAndTitleBarInsets;
-(CGSize)windowOverhead;
-(double)menuBarAndToolBarHeight;
-(char)fullScreenWindowNeedsShrinkingForFrame:(CGRect)arg1 ;
-(Rect)dockAndMenuBarInsets;
-(NSView *)borderView;
-(CGSize)subtractWindowOverheadFromSize:(CGSize)arg1 ;
-(char)isFullScreenToolbarAutohidingEnabled;
-(char)supportsFileTransfer;
-(char)allowsFileTransferToRemote;
-(char)allowsFileTransferFromRemote;
-(void)showWarningWithTitle:(id)arg1 andMessage:(id)arg2 withStatus:(int)arg3 ;
-(id)windowToTarget;
-(void)reshowConnectionAuthenticationWindow;
-(NSString *)currentConsoleUser;
-(char)isConnectionAddressViewVisible;
-(char)shouldSkipAddressWindow;
-(char)userHasAlreadyAgreedToProceedWithUnencryptedLegacyVNC;
-(char)shouldWarnUserForUnencryptedLegacyVNC;
-(void)setUserHasAlreadyAgreedToProceedWithUnencryptedLegacyVNC:(char)arg1 ;
-(void)setShouldWarnUserForUnencryptedLegacyVNC:(char)arg1 ;
-(NSString *)curtainMessage;
-(void)fillConnectionWindowWithViewFromController:(id)arg1 ;
-(void)updateAutoLayoutContraintsForView:(id)arg1 ;
-(void)clearAllViewControllers;
-(void)showNotificationOverlayWithImage:(id)arg1 andLabel:(id)arg2 andPersistence:(char)arg3 ;
-(void)startReconnectOverlayWithDelay:(double)arg1 showSpinner:(char)arg2 ;
-(void)showReconnectOverlayView:(char)arg1 ;
-(SSFadeView *)reconnectOverlay;
-(void)userClosedConnectionAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(NSArray *)unresolvedAddresses;
-(NSString *)bonjourDisplayName;
-(char)_fillsWindow;
-(void)set_fillsWindow:(char)arg1 ;
-(int)sessionState;
-(long long)_controlMode;
-(char)perceivedScalingFactorHasChanged;
-(SSScreenInfo *)_selectedScreen;
-(char)_shouldShowCursorForUnknownCursorState;
-(void)set_shouldShowCursorForUnknownCursorState:(char)arg1 ;
-(NSCursor *)_observeCursor;
-(void)set_observeCursor:(NSCursor *)arg1 ;
-(NSCursor *)_controlCursor;
-(void)set_controlCursor:(NSCursor *)arg1 ;
-(char)_shouldSharePasteboard;
-(void)setAssistPointerKind:(int)arg1 ;
-(int)assistPointerKind;
-(char)_allowsFileTransferToRemote;
-(void)set_allowsFileTransferToRemote:(char)arg1 ;
-(char)_allowsFileTransferFromRemote;
-(void)set_allowsFileTransferFromRemote:(char)arg1 ;
-(id<SSSessionFileTransferDelegate>)_fileTransferDelegate;
-(void)set_fileTransferDelegate:(id<SSSessionFileTransferDelegate>)arg1 ;
-(char)isAddressGatheringConnectionViewVisible;
-(char)isSessionSelectViewVisible;
-(char)canToggleCurtainMode;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)connectionCanceled;
-(void)selectMainDisplay:(id)arg1 ;
-(void)selectVirtualDisplay:(id)arg1 ;
-(void)selectCancelled:(id)arg1 ;
-(void)stopWaitingForUserOnMainDisplay:(id)arg1 ;
-(void)curtainPromptCanceled;
-(void)curtainPromptConfirmedWithMessage:(id)arg1 ;
-(void)closeConnectionWindow;
-(void)addressEntered:(id)arg1 ;
-(void)credentialsEntered;
-(void)teardownForNewConnectionPrompt;
-(void)ssSession:(id)arg1 delegateControlModeSet:(long long)arg2 ;
-(void)ssSession:(id)arg1 wantsCredentialsForAuthenticationTypes:(id)arg2 ;
-(void)ssSession:(id)arg1 authenticationResult:(int)arg2 ;
-(void)ssSession:(id)arg1 wantsSessionSelection:(id)arg2 consoleUser:(id)arg3 ;
-(void)ssSession:(id)arg1 sessionSelectionResult:(int)arg2 ;
-(void)ssSessionReady:(id)arg1 ;
-(void)ssSession:(id)arg1 sizeChanged:(SSSize)arg2 ;
-(void)ssSession:(id)arg1 fullScreenUpdateProgress:(double)arg2 ;
-(void)ssSession:(id)arg1 cursorPositionChanged:(SSPoint)arg2 ;
-(void)ssSessionRemotePasteboardChanged:(id)arg1 ;
-(void)ssSession:(id)arg1 systemInfoRequestCompleted:(id)arg2 ;
-(void)ssSession:(id)arg1 dragDroppedLocalPaths:(id)arg2 onRemotePath:(id)arg3 ;
-(void)ssSession:(id)arg1 fileCopyProgressDidUpdate:(id)arg2 ;
-(void)ssSession:(id)arg1 fileCopyDidComplete:(id)arg2 ;
-(void)ssSessionBeeped:(id)arg1 ;
-(void)ssSession:(id)arg1 virtualDisplayStateChanged:(char)arg2 ;
-(void)ssSessionUserClosedConnection:(id)arg1 ;
-(void)ssSessionDisplaysDidWake:(id)arg1 ;
-(void)ssSessionDisplaysDidSleep:(id)arg1 ;
-(void)ssSession:(id)arg1 onConsoleChanged:(char)arg2 ;
-(void)ssSession:(id)arg1 canToggleCurtainModeChanged:(char)arg2 ;
-(void)ssSession:(id)arg1 allowsControl:(char)arg2 ;
-(void)ssSessionPaused:(id)arg1 ;
-(void)ssSessionResumed:(id)arg1 ;
-(void)ssFrameBufferView:(id)arg1 didDropRemotePaths:(id)arg2 atLocalDropDestination:(id)arg3 ;
-(void)resolvedAddresses:(id)arg1 withStatus:(int)arg2 ;
-(void)startedBonjourResolveAtTimestamp:(id)arg1 ;
-(void)resolvedBonjourName:(id)arg1 ;
-(void)gatheredCredentials:(id)arg1 withStatus:(int)arg2 ;
-(void)guestAccessRequestCancelled;
-(id)displayNameForDialogs;
-(void)connectToURL:(id)arg1 withPreferredCredentials:(id)arg2 options:(id)arg3 ;
-(void)connectToURLs:(id)arg1 withPreferredCredentials:(id)arg2 options:(id)arg3 ;
-(void)requestSystemInfo:(int)arg1 args:(id)arg2 ;
-(void)captureScreen:(id)arg1 ;
-(void)sendLocalPasteboard:(id)arg1 ;
-(void)getRemotePasteboard:(id)arg1 ;
-(void)setHideCursor:(id)arg1 ;
-(void)setShowCursor:(id)arg1 ;
-(void)menuAutoShowHandlerWithEventKind:(unsigned)arg1 andWillShowMenuBar:(char)arg2 ;
-(void)setMenuBarDelay:(double)arg1 ;
-(void)saveCredentialsToKeychain;
-(id)getLocalCursor;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3 ;
-(void)session:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3 ;
-(void)clearCredentialsAndConnect;
-(void)cancelResolve:(id)arg1 ;
-(char)windowIsFullScreen:(id)arg1 ;
-(void)fullScreenUsableRectChanged;
-(void)fadeDidEnd;
-(void)loadProgressIcon;
-(char)isBonjourSession;
-(char)isDisconnected;
-(char)isCurtained;
-(char)audioChatSupported;
-(char)isAudioChatMuted;
-(void)setFileTransferDelegate:(id<SSSessionFileTransferDelegate>)arg1 ;
-(char)isGatheringAddressForConnection;
-(char)supportsCopyPaste;
-(char)supportsCurtainMode;
-(char)supportsScalingScreen;
-(char)supportsChangingScreenQualityMode;
-(void)setAllowsSSHTunnelForLegacyVNC:(char)arg1 ;
-(NSDate *)resolveStartTime;
-(NSMutableDictionary *)netAuthContext;
-(void)setAssistModeWithMouseUp:(char)arg1 ;
-(char)hasUnknownCursorState;
-(char)shouldNotifyOfVirtualDisplayStateChange;
-(void)setShouldNotifyOfVirtualDisplayStateChange:(char)arg1 ;
-(void)connect;
-(void)setSession:(SSSession *)arg1 ;
-(void)setDelegate:(id<SSSessionViewDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isConnected;
-(id)imageNamed:(id)arg1 ;
-(id<SSSessionViewDelegate>)delegate;
-(void)windowDidBecomeKey:(id)arg1 ;
-(NSArray *)screens;
-(SSBorderView *)_borderView;
-(double)borderWidth;
-(CGColorRef)borderColor;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(CGSize)contentSize;
-(void)viewDidMoveToWindow;
-(void)mouseEntered:(id)arg1 ;
-(double)aspectRatio;
-(CGSize)windowWillResize:(id)arg1 toSize:(CGSize)arg2 ;
-(void)windowWillClose:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)updateTrackingAreas;
-(id)shadow;
-(void)setShadow:(id)arg1 ;
-(id)displayName;
-(SSPanningScrollView *)scrollView;
-(char)windowShouldClose:(id)arg1 ;
-(CGSize)window:(id)arg1 willUseFullScreenContentSize:(CGSize)arg2 ;
-(unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2 ;
-(void)window:(id)arg1 willEncodeRestorableState:(id)arg2 ;
-(void)windowDidResignKey:(id)arg1 ;
-(void)windowDidMiniaturize:(id)arg1 ;
-(void)windowDidDeminiaturize:(id)arg1 ;
-(void)windowDidChangeScreenProfile:(id)arg1 ;
-(void)windowWillEnterFullScreen:(id)arg1 ;
-(void)windowDidEnterFullScreen:(id)arg1 ;
-(void)windowWillExitFullScreen:(id)arg1 ;
-(void)windowDidExitFullScreen:(id)arg1 ;
-(void)windowDidChangeOcclusionState:(id)arg1 ;
-(void)viewDidEndLiveResize;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(void)cursorUpdate:(id)arg1 ;
-(void)setScrollView:(SSPanningScrollView *)arg1 ;
-(void)viewWillStartLiveResize;
-(NSString *)cachedURL;
-(void)setCachedURL:(NSString *)arg1 ;
-(SSSession *)session;
-(char)isFullScreen;
@end

