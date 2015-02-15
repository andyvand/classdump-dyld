/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSApplication.h>
#import <Mail/IMAPUserAgent.h>
#import <Mail/MCUserAgent.h>
#import <Mail/MFUserAgent.h>
#import <Mail/MCActivityTarget.h>
#import <Mail/MVTerminationHandler.h>
#import <Mail/NSApplicationDelegate.h>
#import <Mail/NSMenuDelegate.h>

@protocol MVSelectionOwner;
@class NSMenu, NSMutableArray, DeliveryQueue, NSTimer, NSMutableSet, MailboxesController, FlagsMenuItemView, NSWindow, DynamicErrorWindowController, ActivityViewer, DockCountController, UserActivityHandler, NSString;

@interface MailApp : NSApplication <IMAPUserAgent, MCUserAgent, MFUserAgent, MCActivityTarget, MVTerminationHandler, NSApplicationDelegate, NSMenuDelegate> {

	NSMenu* _mailboxesContextMenu;
	NSMenu* _addButtonMenu;
	NSMenu* _messageViewerContextMenu;
	NSMenu* _viewAttachmentContextMenu;
	NSMenu* _composeAttachmentContextMenu;
	NSMutableArray* _stationeryBundlesToInstall;
	DeliveryQueue* _deliveryQueue;
	id _terminationHandlersLock;
	NSMutableArray* _terminationHandlers;
	NSMutableArray* _currentTerminationHandlers;
	unsigned long long _terminateReply;
	NSTimer* _terminationTimer;
	char _groupingByThreadDefaultsToOn;
	NSMutableSet* _accountsCurrentlySynchronizing;
	NSMutableArray* _appleEventDescriptorQueue;
	NSMutableArray* _accountsEmptyingTrash;
	char _paused;
	char _isTerminating;
	char _isExitingFullscreen;
	char _hasPerformedDelayedInitialization;
	char _accountsHaveBeenConfigured;
	char _autoLaunchHidden;
	char _appHasFinishedLaunching;
	char _synchronizingAllAccounts;
	char _shouldUpdateEmailAliasesOnNextActivation;
	char _accountsAreNew;
	char _runningEmptyTrashSheet;
	MailboxesController* _mailboxesController;
	FlagsMenuItemView* _flagsMenuItemView;
	NSWindow* _errorDiagnosisWindow;
	DynamicErrorWindowController* _errorDiagnosisWindowController;
	long long* _errorDiagnosisResult;
	id<MVSelectionOwner> _selectionOwner;
	ActivityViewer* _activityViewer;
	DockCountController* _dockCountController;
	double _appDidFinishLaunchingTime;
	UserActivityHandler* _userActivityHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MailboxesController * mailboxesController;                                  //@synthesize mailboxesController=_mailboxesController - In the implementation block
@property (nonatomic,retain) NSMenu * mailboxesContextMenu; 
@property (nonatomic,retain) NSMenu * addButtonMenu; 
@property (nonatomic,retain) NSMenu * messageViewerContextMenu; 
@property (nonatomic,retain) NSMenu * composeAttachmentContextMenu; 
@property (nonatomic,retain) NSMenu * viewAttachmentContextMenu; 
@property (nonatomic,retain) FlagsMenuItemView * flagsMenuItemView;                                      //@synthesize flagsMenuItemView=_flagsMenuItemView - In the implementation block
@property (nonatomic,retain) NSWindow * errorDiagnosisWindow;                                            //@synthesize errorDiagnosisWindow=_errorDiagnosisWindow - In the implementation block
@property (nonatomic,retain) DynamicErrorWindowController * errorDiagnosisWindowController;              //@synthesize errorDiagnosisWindowController=_errorDiagnosisWindowController - In the implementation block
@property (assign,nonatomic) long long* errorDiagnosisResult;                                            //@synthesize errorDiagnosisResult=_errorDiagnosisResult - In the implementation block
@property (assign,nonatomic) char paused;                                                                //@synthesize paused=_paused - In the implementation block
@property (assign) char isExitingFullscreen;                                                             //@synthesize isExitingFullscreen=_isExitingFullscreen - In the implementation block
@property (assign) char hasPerformedDelayedInitialization;                                               //@synthesize hasPerformedDelayedInitialization=_hasPerformedDelayedInitialization - In the implementation block
@property (assign) char isCurrentlyTerminating;                                                          //@synthesize isTerminating=_isTerminating - In the implementation block
@property (assign,nonatomic,__weak) id<MVSelectionOwner> selectionOwner;                                 //@synthesize selectionOwner=_selectionOwner - In the implementation block
@property (nonatomic,readonly) ActivityViewer * activityViewer;                                          //@synthesize activityViewer=_activityViewer - In the implementation block
@property (assign,nonatomic) char groupingByThreadDefaultsToOn; 
@property (assign,nonatomic) char accountsAreNew;                                                        //@synthesize accountsAreNew=_accountsAreNew - In the implementation block
@property (assign) char accountsHaveBeenConfigured;                                                      //@synthesize accountsHaveBeenConfigured=_accountsHaveBeenConfigured - In the implementation block
@property (assign,nonatomic,__weak) DockCountController * dockCountController;                           //@synthesize dockCountController=_dockCountController - In the implementation block
@property (assign,nonatomic) double appDidFinishLaunchingTime;                                           //@synthesize appDidFinishLaunchingTime=_appDidFinishLaunchingTime - In the implementation block
@property (assign,nonatomic) char autoLaunchHidden;                                                      //@synthesize autoLaunchHidden=_autoLaunchHidden - In the implementation block
@property (assign,nonatomic) char appHasFinishedLaunching;                                               //@synthesize appHasFinishedLaunching=_appHasFinishedLaunching - In the implementation block
@property (assign) char synchronizingAllAccounts;                                                        //@synthesize synchronizingAllAccounts=_synchronizingAllAccounts - In the implementation block
@property (assign,nonatomic) char shouldUpdateEmailAliasesOnNextActivation;                              //@synthesize shouldUpdateEmailAliasesOnNextActivation=_shouldUpdateEmailAliasesOnNextActivation - In the implementation block
@property (assign,nonatomic) char runningEmptyTrashSheet;                                                //@synthesize runningEmptyTrashSheet=_runningEmptyTrashSheet - In the implementation block
@property (nonatomic,readonly) UserActivityHandler * userActivityHandler;                                //@synthesize userActivityHandler=_userActivityHandler - In the implementation block
+(void)_testMachPorts;
-(id)deliveryQueue;
-(id)soundPathForNewMail;
-(char)playOtherMailSounds;
-(id)soundPathForNoNewMail;
-(void)_insertInAccounts:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertInAccounts:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(MailboxesController *)mailboxesController;
-(void)insertInAccounts:(id)arg1 ;
-(void)insertInAosImapAccounts:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertInAosImapAccounts:(id)arg1 ;
-(void)insertInImapAccounts:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertInImapAccounts:(id)arg1 ;
-(void)insertInPopAccounts:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertInPopAccounts:(id)arg1 ;
-(void)removeFromAccountsAtIndex:(unsigned long long)arg1 ;
-(void)showPreferencesPanel:(id)arg1 ;
-(void)editAccount:(id)arg1 ;
-(void)addTerminationHandler:(id)arg1 ;
-(void)openSystemAccountPreferences:(id)arg1 ;
-(void)handler:(id)arg1 approvedQuit:(char)arg2 ;
-(void)updateEmailAliasesOnNextActivation;
-(void)showConnectionDoctor:(id)arg1 ;
-(void)nowWouldBeAGoodTimeToTerminate:(id)arg1 ;
-(void)_accountInfoDidChange:(id)arg1 ;
-(ActivityViewer *)activityViewer;
-(long long)backgroundThreadCount;
-(char)applicationIsInBackgroundMode;
-(NSMenu *)viewAttachmentContextMenu;
-(void)removeTerminationHandler:(id)arg1 ;
-(char)downloadHTMLAttachments;
-(char)includeOriginalMessage;
-(id)preferredReplyAddressBasedOnCurrentSelection;
-(long long)spellCheckingBehavior;
-(void)setSpellCheckingBehavior:(long long)arg1 ;
-(char)autosaveComposeWindows;
-(void)setAutosaveComposeWindows:(char)arg1 ;
-(char)checkGrammarWithSpelling;
-(void)setCheckGrammarWithSpelling:(char)arg1 ;
-(char)replyInSameFormat;
-(void)setReplyInSameFormat:(char)arg1 ;
-(char)alwaysCCMyself;
-(void)setAlwaysCCMyself:(char)arg1 ;
-(char)alwaysBCCMyself;
-(void)setAlwaysBCCMyself:(char)arg1 ;
-(void)setIncludeOriginalMessage:(char)arg1 ;
-(char)includeAllOfOriginalMessage;
-(void)setIncludeAllOfOriginalMessage:(char)arg1 ;
-(char)signOutgoingMessages;
-(void)setSignOutgoingMessages:(char)arg1 ;
-(char)encryptOutgoingMessages;
-(void)setEncryptOutgoingMessages:(char)arg1 ;
-(char)inlineSpellCheckingEnabled;
-(void)setInlineSpellCheckingEnabled:(char)arg1 ;
-(void)setShouldCheckIntranetDomains:(char)arg1 withString:(id)arg2 ;
-(id<MVSelectionOwner>)selectionOwner;
-(void)_networkConfigurationChanged:(id)arg1 ;
-(void)alwaysSendWindowsFriendlyAttachments:(id)arg1 ;
-(void)attachFilesAtEnd:(id)arg1 ;
-(void)insertOriginalAttachments:(id)arg1 ;
-(void)sendWindowsFriendlyAttachments:(id)arg1 ;
-(void)alwaysAttachFilesAtEnd:(id)arg1 ;
-(char)isExitingFullscreen;
-(void)fontsAndColorsPreferencesDidChange:(char)arg1 ;
-(void)fontsAndColorsPreferencesDidChange;
-(void)setMessageFont:(id)arg1 size:(double)arg2 ;
-(void)setFixedPitchFont:(id)arg1 size:(double)arg2 ;
-(int)quotingColorValue:(id)arg1 ;
-(int)quotingColorForLevel:(unsigned long long)arg1 ;
-(void)setQuotingColor:(int)arg1 forLevel:(unsigned long long)arg2 ;
-(void)setSoundPathForNewMail:(id)arg1 ;
-(void)setPlayOtherMailSounds:(char)arg1 ;
-(id)mailSoundForNewMail;
-(void)setMailSoundForNewMail:(id)arg1 ;
-(id)downloadFolderURL;
-(void)setDownloadFolderURL:(id)arg1 ;
-(char)indexDecryptedMessages;
-(void)setIndexDecryptedMessages:(char)arg1 ;
-(void)showToolbarItemForJunkMail:(char)arg1 ;
-(void)quitNoMatterWhat;
-(char)accountsAreNew;
-(void)showReleaseNotes:(id)arg1 ;
-(void)_registerAppleEventQueue;
-(void)_addressManagerLoaded:(id)arg1 ;
-(void)_timeMachineSendEvent:(id)arg1 ;
-(DockCountController *)dockCountController;
-(void)_removeAllItemsInAccountMenuWithTag:(long long)arg1 ;
-(void)_removeExtraSeparatorsInMailboxMenu;
-(char)_showViewerWindow:(id)arg1 ;
-(double)appDidFinishLaunchingTime;
-(void)_performDelayedInitialization;
-(void)_tryToPerformDelayedInitialization;
-(void)setDockCountController:(DockCountController *)arg1 ;
-(void)_cleanOldDatabases:(id)arg1 ;
-(void)_delayedUpgradeSteps;
-(void)_setSourceOnGmailLabels;
-(void)_performBackgroundDelayedInitialization;
-(void)setHasPerformedDelayedInitialization:(char)arg1 ;
-(char)applicationWillBeRestoredByTAL;
-(void)transformToBackground;
-(void)_showUnresolvedFolderAlert:(id)arg1 ;
-(void)_showReadOnlyFolderAlert:(id)arg1 ;
-(void)_showDatabaseAlert:(char)arg1 databaseFile:(id)arg2 ;
-(void)_delayOnStartup;
-(void)performPrePersistenceUpgrades;
-(char)_needToCreateLibraryUpgradingIfNecessary;
-(void)_exitIfInUpgradeOnlyMode;
-(void)_loadBundles;
-(void)_setupCheckSpellingSubMenu;
-(void)setAccountsAreNew:(char)arg1 ;
-(void)setAccountsHaveBeenConfigured:(char)arg1 ;
-(void)relaunchAndQuitWithAdditionalArguments:(id)arg1 ;
-(void)_setupAccountMenuItems;
-(void)setAutoLaunchHidden:(char)arg1 ;
-(void)performPostPersistenceUpgrades;
-(void)_setupInitialState;
-(void)_registerAppleEventHandlers;
-(void)setAppHasFinishedLaunching:(char)arg1 ;
-(void)_setupQuitMenu;
-(void)setAppDidFinishLaunchingTime:(double)arg1 ;
-(void)_restoreMessagesFromDefaults;
-(void)_emailAddressesApproved:(id)arg1 ;
-(void)_emailsRejected:(id)arg1 ;
-(void)_rulesChanged:(id)arg1 ;
-(void)_handleSyncNotification:(id)arg1 ;
-(void)_loadBundlesFromPath:(id)arg1 failedBundleInfos:(id)arg2 ;
-(id)_failureInfoForBundle:(id)arg1 path:(id)arg2 ;
-(id)_mailboxBeingViewed;
-(void)connectAllAccounts:(id)arg1 ;
-(void)disconnectAllAccounts:(id)arg1 ;
-(void)newViewerWindow:(id)arg1 ;
-(void)showComposeWindow:(id)arg1 ;
-(char)accountsHaveBeenConfigured;
-(void)toggleAccountOnlineStatus:(id)arg1 ;
-(void)disconnectThisAccount:(id)arg1 ;
-(void)connectThisAccount:(id)arg1 ;
-(id)_accountBeingViewed;
-(char)synchronizingAllAccounts;
-(char)_isAccountCurrentlySynchronizing:(id)arg1 ;
-(void)disconnectThisAccountFromContextMenu:(id)arg1 ;
-(void)connectThisAccountFromContextMenu:(id)arg1 ;
-(void)disconnectAllAccountsFromContextMenu:(id)arg1 ;
-(void)connectAllAccountsFromContextMenu:(id)arg1 ;
-(char)_moreThanOneAccountCanGoOffline;
-(void)checkNewMailInSelectedAccounts:(id)arg1 ;
-(void)bringUpGetNewMailMenu:(id)arg1 ;
-(void)_synchronizeAccountListMenuWithTagIfNeeded:(long long)arg1 ;
-(void)bringUpOnlineOfflineMenu:(id)arg1 ;
-(void)checkNewMail:(id)arg1 ;
-(void)importMailboxes:(id)arg1 ;
-(void)bringUpSynchronizeAccountMenu:(id)arg1 ;
-(void)bringUpEmptyTrashMenu:(id)arg1 ;
-(void)compactSelectedMailboxes:(id)arg1 ;
-(char)runningEmptyTrashSheet;
-(void)emptyTrashInAccount:(id)arg1 ;
-(void)synchronizeAccount:(id)arg1 ;
-(void)eraseJunkMail:(id)arg1 ;
-(void)toggleThreadedMode:(id)arg1 ;
-(void)showActivityViewer:(id)arg1 ;
-(void)showAddressHistoryPanel:(id)arg1 ;
-(void)showViewerWindow:(id)arg1 ;
-(void)setSynchronizingAllAccounts:(char)arg1 ;
-(void)_addToAccountsCurrentlySynchronizing:(id)arg1 ;
-(void)performSynchronizationForAccounts:(id)arg1 ;
-(void)_clearAccountsCurrentlySynchronizing;
-(void)_removeFromAccountsCurrentlySynchronizing:(id)arg1 ;
-(void)_handleNetworkConfigurationChange;
-(id)_messageEditorWithSettings:(id)arg1 ;
-(id)_getMenuItemInMessageMenuWithTag:(long long)arg1 ;
-(id)_mailboxMenu;
-(void)_getActiveAccountsThatCanGoOffline:(id)arg1 fetch:(id)arg2 sync:(id)arg3 deleteToTrash:(id)arg4 doesNotDeleteToTrash:(id)arg5 ;
-(void)_resetMenuItemWithTag:(long long)arg1 ;
-(void)setRunningEmptyTrashSheet:(char)arg1 ;
-(void)_emptyTrashInAccounts:(id)arg1 storeToCompact:(id)arg2 ;
-(id)_accountsToEmptyTrashIn:(id)arg1 ;
-(void)_emptyTrashPromptingUserInAccounts:(id)arg1 storeToCompact:(id)arg2 ;
-(void)_checkNewMailInAccountRepresentedByMailbox:(id)arg1 ;
-(char)handleMailToURL:(id)arg1 ;
-(char)handleMessageURL:(id)arg1 ;
-(char)_handleOpenMessage:(id)arg1 ;
-(id)openStoreWithMailbox:(id)arg1 ;
-(void)handleStationeryBundles;
-(void)_mailDocuments:(id)arg1 ;
-(char)autoLaunchHidden;
-(void)setShouldUpdateEmailAliasesOnNextActivation:(char)arg1 ;
-(char)shouldUpdateEmailAliasesOnNextActivation;
-(void)_updateEmailAliases;
-(UserActivityHandler *)userActivityHandler;
-(id)openStoreWithMailbox:(id)arg1 andMakeKey:(char)arg2 ;
-(NSMenu *)addButtonMenu;
-(NSMenu *)mailboxesContextMenu;
-(void)loadMailboxesContextMenuNib;
-(FlagsMenuItemView *)flagsMenuItemView;
-(id)openMessageEditorWithParsedMessage:(id)arg1 headers:(id)arg2 activatingApp:(char)arg3 ;
-(void)setSelectionOwner:(id<MVSelectionOwner>)arg1 ;
-(id)selectionExpandingThreadsAndHiddenCopies:(char)arg1 ;
-(id)preferredAccountBasedOnSelection;
-(void)transformToForeground;
-(void)timeMachineDismiss:(id)arg1 ;
-(void)_terminateNoConfirm;
-(void)setIsCurrentlyTerminating:(char)arg1 ;
-(void)_approveQuitIfFinished:(id)arg1 ;
-(void)_cleanupFinishedForAccount:(id)arg1 ;
-(id)_currentTerminationHandler;
-(void)_nowWouldBeAGoodTimeForHandler:(id)arg1 toTerminateFromSelector:(SEL)arg2 ;
-(void)_terminationTimerFired:(id)arg1 ;
-(void)setIsInTimeMachineMode:(char)arg1 ;
-(void)_unregisterAppleEventHandlers;
-(void)_cleanUpAccount:(id)arg1 ;
-(char)isCurrentlyTerminating;
-(char)_isMailboxBeingViewedSpecial;
-(void)showMediaBrowser:(id)arg1 ;
-(void)showAccountInfo:(id)arg1 ;
-(char)groupingByThreadDefaultsToOn;
-(void)setGroupingByThreadDefaultsToOn:(char)arg1 ;
-(void)setAddButtonMenu:(NSMenu *)arg1 ;
-(void)setMailboxesContextMenu:(NSMenu *)arg1 ;
-(NSMenu *)messageViewerContextMenu;
-(void)setMessageViewerContextMenu:(NSMenu *)arg1 ;
-(void)setViewAttachmentContextMenu:(NSMenu *)arg1 ;
-(NSMenu *)composeAttachmentContextMenu;
-(void)setComposeAttachmentContextMenu:(NSMenu *)arg1 ;
-(id)toolbarItemMoveMenu;
-(id)toolbarItemCopyMenu;
-(void)willPresentContextualMenu:(id)arg1 ;
-(char)handleClickOnURL:(id)arg1 visibleText:(id)arg2 window:(id)arg3 dontSwitch:(char)arg4 ;
-(id)messageEditor;
-(void)mailSelection:(id)arg1 userData:(id)arg2 error:(id*)arg3 ;
-(void)mailTo:(id)arg1 userData:(id)arg2 error:(id*)arg3 ;
-(void)setSelectionFrom:(id)arg1 ;
-(void)resignSelectionFor:(id)arg1 ;
-(void)_fixAttachmentCache;
-(void)_backfillDateLastViewedAttribute;
-(void)setMailboxesController:(MailboxesController *)arg1 ;
-(void)setFlagsMenuItemView:(FlagsMenuItemView *)arg1 ;
-(NSWindow *)errorDiagnosisWindow;
-(void)setErrorDiagnosisWindow:(NSWindow *)arg1 ;
-(DynamicErrorWindowController *)errorDiagnosisWindowController;
-(void)setErrorDiagnosisWindowController:(DynamicErrorWindowController *)arg1 ;
-(long long*)errorDiagnosisResult;
-(void)setErrorDiagnosisResult:(long long*)arg1 ;
-(char)paused;
-(void)setIsExitingFullscreen:(char)arg1 ;
-(char)hasPerformedDelayedInitialization;
-(void)queueAppleEvent:(id)arg1 replyEvent:(id)arg2 ;
-(void)handleGURLAppleEvent:(id)arg1 replyEvent:(id)arg2 ;
-(void)handleMailWebPageEvent:(id)arg1 replyEvent:(id)arg2 ;
-(void)handleMailWebLinkEvent:(id)arg1 replyEvent:(id)arg2 ;
-(void)shareInMailEvent:(id)arg1 replyEvent:(id)arg2 ;
-(void)handleSafariPageArchiveEvent:(id)arg1 replyEvent:(id)arg2 ;
-(void)handleSafariReaderArchiveEvent:(id)arg1 replyEvent:(id)arg2 ;
-(void)handleSafariPDFEvent:(id)arg1 replyEvent:(id)arg2 ;
-(void)handleShowAccountPreferencesEvent:(id)arg1 replyEvent:(id)arg2 ;
-(id)_accountsOfClass:(Class)arg1 ;
-(void)insertInDeliveryAccounts:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertInMessageViewers:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)composeMessages;
-(void)insertInComposeMessages:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)applescriptSelection;
-(id)aosImapAccounts;
-(void)insertInDeliveryAccounts:(id)arg1 ;
-(void)removeFromDeliveryAccountsAtIndex:(unsigned long long)arg1 ;
-(id)valueInMessageViewersWithUniqueID:(id)arg1 ;
-(void)insertInMessageViewers:(id)arg1 ;
-(void)removeFromMessageViewersAtIndex:(unsigned long long)arg1 ;
-(id)messageEditors;
-(void)insertInMessageEditors:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertInMessageEditors:(id)arg1 ;
-(void)removeFromMessageEditorsAtIndex:(unsigned long long)arg1 ;
-(void)insertInComposeMessages:(id)arg1 ;
-(void)removeFromComposeMessagesAtIndex:(unsigned long long)arg1 ;
-(id)valueInComposeMessagesWithUniqueID:(id)arg1 ;
-(id)_objectSpecifierForObject:(id)arg1 inArray:(id)arg2 withKey:(id)arg3 ;
-(id)handleCheckMailCommand:(id)arg1 ;
-(id)handleSynchronizeAccountCommand:(id)arg1 ;
-(id)handleImportMboxCommand:(id)arg1 ;
-(void)openHelpTopic:(id)arg1 ;
-(void)_turnOnConversationView;
-(void)_upgradeFlagToolbarItems;
-(void)_switchToolbarsToIconOnly;
-(void)_preserveSignatureAboveQuotedTextPreference;
-(void)_adoptNewToolbarDefaultConfigurations;
-(void)_upgradeExpandedMailboxesPreference;
-(void)_removeViewRelatedMessagesToolbarButtonByDefault;
-(void)_migrateDefaultsToSharedDomain;
-(void)_migrateRecentsToCoreRecents;
-(void)_setAutoFetchFrequencyToAutomatic;
-(void)_upgradeComposeWindowReplyOrForwardToolbar;
-(void)_upgradeDebuggingDefaults;
-(void)_migrateDisableRemoteContentToSharedDomain;
-(id)_convertSnowLeopardToLionKey:(id)arg1 ;
-(void)_runAlertPanelInMainThreadWithInfo:(id)arg1 ;
-(void)_informUserOfDatabaseError:(id)arg1 ;
-(void)_downloadBigMessage:(id)arg1 ;
-(id)sharedAttachmentContextMenu;
-(char)shouldHighlightThreads;
-(void)insertInRules:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertInRules:(id)arg1 ;
-(void)removeFromRulesAtIndex:(unsigned long long)arg1 ;
-(void)insertInSignatures:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertInSignatures:(id)arg1 ;
-(void)removeFromSignaturesAtIndex:(unsigned long long)arg1 ;
-(char)shouldShowUnreadMessagesInBold;
-(void)setDownloadHTMLAttachments:(char)arg1 ;
-(void)setShouldHighlightThreads:(char)arg1 ;
-(void)setShouldShowUnreadMessagesInBold:(char)arg1 ;
-(id)popAccounts;
-(id)imapAccounts;
-(id)messageViewers;
-(id)signatures;
-(char)chooseSignatureWhenComposing;
-(void)setChooseSignatureWhenComposing:(char)arg1 ;
-(char)colorQuotedText;
-(void)setColorQuotedText:(char)arg1 ;
-(unsigned)defaultMessageFormat;
-(void)setDefaultMessageFormat:(unsigned)arg1 ;
-(char)expandGroupAddresses;
-(void)setExpandGroupAddresses:(char)arg1 ;
-(id)fixedWidthFont;
-(void)setFixedWidthFont:(id)arg1 ;
-(double)fixedWidthFontSize;
-(void)setFixedWidthFontSize:(double)arg1 ;
-(unsigned)headerDetail;
-(void)setHeaderDetail:(unsigned)arg1 ;
-(id)inbox;
-(int)levelOneQuotingColor;
-(void)setLevelOneQuotingColor:(int)arg1 ;
-(int)levelTwoQuotingColor;
-(void)setLevelTwoQuotingColor:(int)arg1 ;
-(int)levelThreeQuotingColor;
-(void)setLevelThreeQuotingColor:(int)arg1 ;
-(id)messageFont;
-(void)setMessageFont:(id)arg1 ;
-(double)messageFontSize;
-(void)setMessageFontSize:(double)arg1 ;
-(id)messageListFont;
-(void)setMessageListFont:(id)arg1 ;
-(double)messageListFontSize;
-(void)setMessageListFontSize:(double)arg1 ;
-(id)outbox;
-(id)selectedSignature;
-(void)setSelectedSignature:(id)arg1 ;
-(id)sentMailbox;
-(char)useAddressCompletion;
-(void)setUseAddressCompletion:(char)arg1 ;
-(char)useFixedWidthFont;
-(void)setUseFixedWidthFont:(char)arg1 ;
-(char)logAllSocketActivity;
-(void)setLogAllSocketActivity:(char)arg1 ;
-(id)logMessages;
-(char)useKeychain;
-(void)setUseKeychain:(char)arg1 ;
-(void)applicationWillFinishLaunching:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationDidUnhide:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(char)isTerminating;
-(id)accounts;
-(void)_accountsChanged:(id)arg1 ;
-(id)rules;
-(void)addAccount:(id)arg1 ;
-(id)logActivityOnPorts;
-(void)setLogActivityOnPorts:(id)arg1 ;
-(id)logActivityOnHosts;
-(void)setLogActivityOnHosts:(id)arg1 ;
-(id)localAttachmentFilesDirectory;
-(char)promptForPassword:(id)arg1 ;
-(id)deliveryAccounts;
-(void)resetSuppressedAccount:(id)arg1 ;
-(void)informUserOfBusyDatabaseWithRecoverer:(id)arg1 diagnosis:(long long*)arg2 ;
-(void)relaunchAndQuit;
-(id)junkMailbox;
-(long long)junkMailBehavior;
-(id)draftsMailbox;
-(void)informUserOfError:(id)arg1 ;
-(id)frameworkVersion;
-(id)junkStringFromHTMLData:(id)arg1 textEncodingName:(id)arg2 context:(id)arg3 ;
-(void)selectMailbox:(id)arg1 ;
-(char)queryUserWithMessageText:(id)arg1 informativeText:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 ;
-(void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(char)isInTimeMachineMode;
-(void)informUserOfIOErrorWithStateIn:(long long*)arg1 ;
-(id)mailboxes;
-(void)replaceInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertInMailboxes:(id)arg1 ;
-(void)removeFromMailboxesAtIndex:(unsigned long long)arg1 ;
-(long long)runAlertPanelWithTitle:(id)arg1 firstButtonTitle:(id)arg2 secondButtonTitle:(id)arg3 thirdButtonTitle:(id)arg4 message:(id)arg5 ;
-(id)trashMailbox;
-(id)valueInMailboxesWithName:(id)arg1 ;
-(char)appHasFinishedLaunching;
-(id)headersRequiredForRouting;
-(char)addInvitationsToCalendarAutomatically;
-(void)addInvitationsToCalendarFromMessages:(id)arg1 ;
-(char)openTemporaryAttachments:(id)arg1 applicationBundle:(id)arg2 ;
-(void)storeBeingInvalidated:(id)arg1 ;
-(id)headersRequiredForParentalControl;
-(long long)queryUserForBigMessageAction:(id)arg1 ;
-(id)indicesOfObjectsByEvaluatingObjectSpecifier:(id)arg1 ;
-(id)applicationVersion;
-(id)init;
-(void)dealloc;
-(void)sendEvent:(id)arg1 ;
-(void)application:(id)arg1 openFiles:(id)arg2 ;
-(char)application:(id)arg1 openFile:(id)arg2 ;
-(char)applicationOpenUntitledFile:(id)arg1 ;
-(unsigned long long)applicationShouldTerminate:(id)arg1 ;
-(void)replyToApplicationShouldTerminate:(char)arg1 ;
-(char)shouldRestoreStateOnNextLaunch;
-(void)closeAll:(id)arg1 ;
-(void)runPageLayout:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(char)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(char)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)menuWillOpen:(id)arg1 ;
-(void)addFontTrait:(id)arg1 ;
-(void)orderFrontStylesPanel:(id)arg1 ;
-(id)selection;
-(void)showInfoPanel:(id)arg1 ;
-(char)validateToolbarItem:(id)arg1 ;
-(void)setPaused:(char)arg1 ;
-(void)_preferencesChanged:(id)arg1 ;
-(char)doParentalControlProcessingForMessage:(id)arg1 ;
@end
