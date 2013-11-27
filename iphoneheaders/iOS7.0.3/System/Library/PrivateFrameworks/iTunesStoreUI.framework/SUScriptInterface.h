/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@protocol SUScriptInterfaceDelegate;
@class SUScriptAccountManager, SUScriptKeyValueStore, SSAuthenticationContext, SUClientInterface, , NSMutableDictionary, WebFrame, SUScriptMediaLibrary, SUScriptNotificationObserver, SUScriptPreviewOverlay, SUScriptPurchaseManager, SUScriptOperationDelegate, SUScriptWindowContext, NSArray, SUScriptAccount, SUScriptSectionsController, SUScriptViewController, SUScriptProtocol, SUScriptWindow, SUScriptApplication, SUScriptDevice, NSString, SUScriptAppleAccountStore, SUScriptFairPlayContext, SUScriptNavigationBar, NSNumber;

@interface SUScriptInterface : SUScriptObject {

	SUScriptAccountManager* _accountManager;
	SUScriptKeyValueStore* _applicationLocalStorage;
	SSAuthenticationContext* _authenticationContext;
	SUClientInterface* _clientInterface;
	<SUScriptInterfaceDelegate>* _delegate;
	SUScriptKeyValueStore* _deviceLocalStorage;
	NSMutableDictionary* _downloadQueues;
	WebFrame* _frame;
	SUScriptMediaLibrary* _mediaLibrary;
	SUScriptNotificationObserver* _notificationObserver;
	SUScriptPreviewOverlay* _previewOverlay;
	SUScriptPurchaseManager* _purchaseManager;
	SUScriptOperationDelegate* _scriptOperationDelegate;
	SUScriptWindowContext* _scriptWindowContext;
	id _threadSafeDelegate;

}

@property (readonly) NSArray * installedSoftwareApplications; 
@property (readonly) NSArray * accounts; 
@property (retain) SUScriptAccount * primaryAccount; 
@property (retain) SUScriptAccount * primaryLockerAccount; 
@property (readonly) SUScriptSectionsController * sectionsController; 
@property (readonly) SUScriptViewController * viewController; 
@property (readonly) SUScriptProtocol * protocol; 
@property (readonly) SUScriptWindow * window; 
@property (readonly) SUScriptMediaLibrary * mediaLibrary; 
@property (readonly) SUScriptApplication * application; 
@property (readonly) SUScriptDevice * device; 
@property (readonly) NSString * actionTypeReturnToLibrary; 
@property (readonly) NSString * actionTypeDismissWindows; 
@property (readonly) NSString * actionTypeDismissSheet; 
@property (readonly) SUScriptPurchaseManager * purchaseManager; 
@property (readonly) SUScriptAppleAccountStore * appleAccountStore; 
@property (readonly) SUScriptFairPlayContext * accountCreationSecureContext; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (retain) SUScriptWindowContext * scriptWindowContext; 
@property (assign) <SUScriptInterfaceDelegate> * delegate; 
@property (readonly) <SUScriptInterfaceDelegate> * threadSafeDelegate; 
@property (retain) SUClientInterface * clientInterface; 
@property (retain) WebFrame * webFrame; 
@property (readonly) id applicationAccessibilityEnabled; 
@property (readonly) SUScriptKeyValueStore * applicationLocalStorage; 
@property (readonly) NSString * clientIdentifier; 
@property (copy) NSString * cookie; 
@property (readonly) SUScriptKeyValueStore * deviceLocalStorage; 
@property (readonly) id globalRootObject; 
@property (readonly) id loggingEnabled; 
@property (readonly) SUScriptNavigationBar * navigationBar; 
@property (readonly) NSNumber * orientation; 
@property (readonly) SUScriptPreviewOverlay * previewOverlay; 
@property (readonly) id screenReaderRunning; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(int)purchaseAnimationStyleFromString:(id)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setDevice:(id)arg1 ;
-(void)log:(id)arg1 ;
-(id)mediaLibrary;
-(void)setMediaLibrary:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)window;
-(id)init;
-(id)delegate;
-(id)navigationBar;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)setWindow:(id)arg1 ;
-(id)orientation;
-(id)parentViewController;
-(void)openURL:(id)arg1 ;
-(void)startedTest:(id)arg1 ;
-(id)systemVersion;
-(void)setNavigationBar:(id)arg1 ;
-(id)viewController;
-(BOOL)launchedToTest;
-(BOOL)isRunningTest;
-(void)setOrientation:(id)arg1 ;
-(id)webFrame;
-(void)goBack;
-(id)protocol;
-(id)device;
-(id)accountName;
-(id)accounts;
-(id)clientInterface;
-(BOOL)canSendEmail;
-(id)cookie;
-(void)setCookie:(id)arg1 ;
-(id)attributeKeys;
-(void)setClientInterface:(id)arg1 ;
-(void)initAuthentication;
-(void)_globalEventNotification:(id)arg1 ;
-(void)_scriptUserInfoDidChangeNotification:(id)arg1 ;
-(void)deallocAuthentication;
-(void)deallocMediaLibrary;
-(id)DOMElementWithElement:(id)arg1 ;
-(void)_accessibilityPostLayoutChange;
-(id)clientIdentifier;
-(id)accountDSID;
-(BOOL)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(BOOL)arg2 ;
-(id)activeNetworkType;
-(id)diskSpaceAvailable;
-(id)hardwareType;
-(id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4 ;
-(id)scriptAttributeKeys;
-(void)accessibilityPostLayoutChange;
-(void)accessibilityPostScreenChange;
-(id)accountForDSID:(id)arg1 ;
-(void)addExternalDownloads:(id)arg1 options:(id)arg2 ;
-(void)addExternalDownloadsFromManifestURL:(id)arg1 ;
-(void)addPurchaseWithInfo:(id)arg1 options:(id)arg2 ;
-(BOOL)arePodcastsDisabled;
-(void)authenticateForAccount:(id)arg1 withOptions:(id)arg2 ;
-(void)composeEmailWithSubject:(id)arg1 body:(id)arg2 ;
-(void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3 ;
-(int)dialogDisplayCountForKey:(id)arg1 ;
-(void)dismissSheet;
-(void)dismissWindowsWithOptions:(id)arg1 ;
-(void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2 ;
-(id)getAudioPlayerForURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3 ;
-(void)getInstalledSoftwareApplicationsWithCompletionFunction:(id)arg1 ;
-(id)getDownloadQueueWithQueueType:(id)arg1 ;
-(void)getSoftwareApplicationWithAdamID:(id)arg1 completionFunction:(id)arg2 ;
-(void)getSoftwareApplicationWithBundleID:(id)arg1 completionFunction:(id)arg2 ;
-(void)gotoStoreURL:(id)arg1 ;
-(void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(BOOL)arg3 forceAuthentication:(BOOL)arg4 ;
-(void)handleDialogPropertyListString:(id)arg1 ;
-(void)handleProtocolPropertyListString:(id)arg1 ;
-(void)handleRootObjectWithPropertyListString:(id)arg1 ;
-(void)handleTrackListWithPropertyListString:(id)arg1 ;
-(BOOL)haveAccount;
-(BOOL)isExplicitContentDisabled;
-(id)machineGUID;
-(id)makeAccount;
-(id)makeAccountPageWithURLs:(id)arg1 ;
-(id)makeActivity;
-(id)makeActivityItemProviderWithMIMEType:(id)arg1 ;
-(id)makeActivityViewControllerWithProviders:(id)arg1 activities:(id)arg2 ;
-(id)makeButtonWithSystemItemString:(id)arg1 action:(id)arg2 ;
-(id)makeButtonWithTitle:(id)arg1 action:(id)arg2 ;
-(id)makeCalloutView;
-(id)makeCanvasWithWidth:(id)arg1 height:(id)arg2 ;
-(id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4 ;
-(id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4 ;
-(id)makeColorWithWhite:(id)arg1 alpha:(id)arg2 ;
-(id)makeComposeReviewViewControllerWithReview:(id)arg1 ;
-(id)makeDateFormatter;
-(id)makeDialog;
-(id)makeDocumentInteractionController;
-(id)makeDonationViewControllerWithCharityIdentifier:(id)arg1 ;
-(id)makeFacebookRequestWithURL:(id)arg1 requestMethod:(id)arg2 ;
-(id)makeFacebookSessionWithAccount:(id)arg1 ;
-(id)makeGiftViewController;
-(id)makeLinearGradientWithX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4 ;
-(id)makeLookupRequest;
-(id)makeMediaPlayerItemWithProperties:(id)arg1 ;
-(id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg1 ;
-(id)makeMenuViewController;
-(id)makeNavigationControllerWithRootViewController:(id)arg1 ;
-(id)makeNumberFormatterWithStyle:(id)arg1 ;
-(id)makePopOverWithViewController:(id)arg1 ;
-(id)makeRadialGradientWithX0:(float)arg1 y0:(float)arg2 r0:(float)arg3 x1:(float)arg4 y1:(float)arg5 r1:(float)arg6 ;
-(id)makeRedeemViewController;
-(id)makeReportAProblemViewControllerWithAdamID:(id)arg1 ;
-(id)makeReviewWithAdamID:(id)arg1 ;
-(id)makeScriptActionWithType:(id)arg1 ;
-(id)makeSegmentedControl;
-(id)makeSplitViewController;
-(id)makeStorePageWithURLs:(id)arg1 ;
-(id)makeStoreSheetViewController;
-(id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4 ;
-(id)makeTweetComposeViewController;
-(id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2 ;
-(id)makeVolumeViewController;
-(id)makeWindow;
-(void)perfLog:(id)arg1 ;
-(void)performPurchaseAnimationForIdentifier:(id)arg1 style:(id)arg2 ;
-(void)pingURL:(id)arg1 ;
-(void)redeemCode:(id)arg1 ;
-(void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3 ;
-(void)reloadFooterSection:(id)arg1 withURL:(id)arg2 ;
-(void)reportAProblemForIdentifier:(id)arg1 ;
-(void)retryAllRestoreDownloads;
-(void)selectSectionWithIdentifier:(id)arg1 ;
-(void)selectTrackListItemWithIdentifier:(id)arg1 ;
-(void)sendPostOfType:(id)arg1 withOptions:(id)arg2 ;
-(void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2 ;
-(BOOL)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2 ;
-(void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3 ;
-(BOOL)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
-(void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8 ;
-(void)showMediaPreviewWithURLString:(id)arg1 ;
-(id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 ;
-(void)signOutPrimaryAccount;
-(id)softwareApplicationWithAdamID:(id)arg1 ;
-(id)softwareApplicationWithBundleID:(id)arg1 ;
-(id)authenticationContext;
-(OpaqueJSContextRef)copyJavaScriptContext;
-(id)deviceLocalStorage;
-(id)scriptWindowContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(void)setScriptWindowContext:(id)arg1 ;
-(void)setWebFrame:(id)arg1 ;
-(id)threadSafeDelegate;
-(id)applicationAccessibilityEnabled;
-(id)applicationLocalStorage;
-(id)_className;
-(id)globalRootObject;
-(id)loggingEnabled;
-(id)requestInfo;
-(id)previewOverlay;
-(id)screenReaderRunning;
-(void)setGlobalRootObject:(id)arg1 ;
-(void)setLoggingEnabled:(id)arg1 ;
-(id)purchaseManager;
-(void)_getSoftwareApplicationWithCompletionFunction:(id)arg1 lookupBlock:(/*^block*/ id)arg2 ;
-(id)installedSoftwareApplications;
-(id)systemItemAction;
-(id)systemItemAdd;
-(id)systemItemBookmarks;
-(id)systemItemCamera;
-(id)systemItemCancel;
-(id)systemItemCompose;
-(id)systemItemDone;
-(id)systemItemEdit;
-(id)systemItemFastForward;
-(id)systemItemFixedSpace;
-(id)systemItemFlexibleSpace;
-(id)systemItemOrganize;
-(id)systemItemPageCurl;
-(id)systemItemPause;
-(id)systemItemPlay;
-(id)systemItemRedo;
-(id)systemItemRefresh;
-(id)systemItemReplay;
-(id)systemItemRewind;
-(id)systemItemSearch;
-(id)systemItemStop;
-(id)systemItemTrash;
-(id)systemItemUndo;
-(id)primaryAccount;
-(id)primaryLockerAccount;
-(void)setAccounts:(id)arg1 ;
-(void)setPrimaryAccount:(id)arg1 ;
-(void)setPrimaryLockerAccount:(id)arg1 ;
-(id)sectionsController;
-(void)addExternalDownloads:(id)arg1 ;
-(void)addPurchaseWithInfo:(id)arg1 ;
-(id)application;
-(id)actionTypeReturnToLibrary;
-(id)actionTypeDismissWindows;
-(id)actionTypeDismissSheet;
-(id)activeAudioPlayers;
-(id)appleAccountStore;
-(id)accountCreationSecureContext;
@end
