/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/NSApplicationDelegate.h>
#import <Calendar/CalUIWindowDelegate.h>
#import <Calendar/ICSLoggingDelegate.h>
#import <Calendar/EKCommitDelegate.h>

@class CALMigrationController, NSMenu, NSMenuItem, CalWindowController, CALWindow, NSMutableArray, NSMutableDictionary, CALAutoSave, CalMemorySensor, EKUndoManager, CalUIInspectorManager, CalUIMigrationController, NSArray, NSString;

@interface CALApplicationController : NSObject <NSApplicationDelegate, CalUIWindowDelegate, ICSLoggingDelegate, EKCommitDelegate> {

	CALMigrationController* _migrationController;
	NSMenu* _fileMenu;
	NSMenu* _editMenu;
	NSMenu* _newCalendarSubmenu;
	NSMenu* _windowMenu;
	NSMenuItem* _newCalendarMenuItem;
	NSMenuItem* _newCalendarSubmenuMenuItem;
	NSMenuItem* _newCalendarGroupMenuItem;
	NSMenuItem* _viewByDayMenuItem;
	NSMenuItem* _viewByWeekMenuItem;
	NSMenuItem* _viewByMonthMenuItem;
	NSMenuItem* _viewByListMenuItem;
	NSMenuItem* _viewByYearMenuItem;
	NSMenuItem* _iCalMenuItem;
	NSMenuItem* _publishMenuItem;
	NSMenuItem* _unpublishMenuItem;
	NSMenuItem* _sendPublishEmailMenuItem;
	NSMenuItem* _shareMenuItem;
	NSMenuItem* _unshareMenuItem;
	NSMenuItem* _resendInvitationsMenuItem;
	NSMenuItem* _showEventMenuItem;
	NSMenuItem* _editEventMenuItem;
	NSMenuItem* _getInfoMenuItem;
	NSMenuItem* _showInspectorMenuItem;
	char _didSetup;
	CalWindowController* _mainWindowController;
	CALWindow* _frontMostCalWindow;
	NSMutableArray* _sharedEntities;
	NSMutableDictionary* _openStandaloneInspectors;
	char _allowInspectorStacking;
	char _migrationInProgress;
	char _shouldMigrateToVersionFiveOrHigher;
	char _shouldMigrateToVersionSixOrHigher;
	char _shouldMigrateToVersionEightOrHigher;
	char _accountSetupInProgress;
	CALAutoSave* _autoSave;
	NSMutableArray* _mutableWindowControllers;
	CalMemorySensor* _memorySensor;
	char _isFinishedLaunching;
	char _openingInspectors;
	char _restoringSelection;
	EKUndoManager* _undoManager;
	CalUIInspectorManager* _inspectorManager;
	CalUIMigrationController* _uiMigrationController;

}

@property (retain) EKUndoManager * undoManager;                                   //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,retain) NSArray * sharedEntities;                            //@synthesize sharedEntities=_sharedEntities - In the implementation block
@property (nonatomic,readonly) char migrationInProgress;                          //@synthesize migrationInProgress=_migrationInProgress - In the implementation block
@property (assign) char isFinishedLaunching;                                      //@synthesize isFinishedLaunching=_isFinishedLaunching - In the implementation block
@property (nonatomic,readonly) NSArray * windowControllers; 
@property (retain) CalUIInspectorManager * inspectorManager;                      //@synthesize inspectorManager=_inspectorManager - In the implementation block
@property (assign) char openingInspectors;                                        //@synthesize openingInspectors=_openingInspectors - In the implementation block
@property (assign) char restoringSelection;                                       //@synthesize restoringSelection=_restoringSelection - In the implementation block
@property (retain) CalUIMigrationController * uiMigrationController;              //@synthesize uiMigrationController=_uiMigrationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultController;
-(char)isDebugMenuEnabled;
-(void)scheduleAutoSaveNow;
-(id)mainController;
-(id)startupGroup;
-(void)deferredSetup;
-(void)windowWillCloseNotification:(id)arg1 ;
-(void)calendarStoreResetExternallyNotificationHandler:(id)arg1 ;
-(id)mainWindowController;
-(void)clearFrontmostCalWindow;
-(void)setFrontmostCalWindow:(id)arg1 ;
-(CalUIInspectorManager *)inspectorManager;
-(void)saveAllWindowsAndInspectors;
-(void)openAddressBook:(id)arg1 ;
-(id)newCalendarMenuItem;
-(id)newCalendarSubmenuMenuItem;
-(id)newCalendarGroupMenuItem;
-(id)viewByDayMenuItem;
-(id)viewByWeekMenuItem;
-(id)viewByMonthMenuItem;
-(id)viewByYearMenuItem;
-(void)startLocalCalendarsToRemoteAccountMigrations;
-(void)openDelegateInNewWindow:(id)arg1 andExposeLegacyOccurrenceID:(id)arg2 ;
-(id)frontmostCalWindow;
-(void)contextObjectsDidChange:(id)arg1 ;
-(void)addAccountWithWindow:(id)arg1 ;
-(void)clearCTagsAndSyncTokens:(id)arg1 ;
-(void)setSharedEntities:(NSArray *)arg1 ;
-(void)setInspectorManager:(CalUIInspectorManager *)arg1 ;
-(void)editMenuNeedsUpdate:(id)arg1 ;
-(void)windowMenuNeedsUpdate:(id)arg1 ;
-(void)refreshAll:(id)arg1 ;
-(void)clearEtagCache:(id)arg1 ;
-(void)loadWindowAndInspectorsForUID:(id)arg1 ;
-(void)windowDidCloseWithUID:(id)arg1 ;
-(id)_windowControllerForDelegateWithUID:(id)arg1 ;
-(void)openDelegateInNewWindow:(id)arg1 andInspectors:(char)arg2 ;
-(id)controllerForDelegateWithUID:(id)arg1 ;
-(id)windowControllerWithDelegateUID:(id)arg1 ;
-(void)saveWindowAndInspectorsForUID:(id)arg1 ;
-(void)openInspectors:(id)arg1 forWindow:(id)arg2 ;
-(void)resetWindowMenu;
-(void)processDelegateChangesOnMainThread:(id)arg1 ;
-(void)toggleDrawFrameRectsInPrinting:(id)arg1 ;
-(void)showMasterEvent:(id)arg1 ;
-(void)clearAttendeeCache:(id)arg1 ;
-(void)synchronizeDefaults:(id)arg1 ;
-(void)linkToSelectedOccurrences:(id)arg1 ;
-(void)toggleShowDraftsBorder:(id)arg1 ;
-(void)toggleShowActiveDate:(id)arg1 ;
-(void)toggleShowTimeZoneTransitions:(id)arg1 ;
-(void)toggleUseSystemHighlightColorForToday:(id)arg1 ;
-(void)toggleAlwaysAllowLocalCalendarCreation:(id)arg1 ;
-(void)toggleShowLocallyModifiedEvents:(id)arg1 ;
-(void)toggleDisableAdjacentWeekPreLoading:(id)arg1 ;
-(void)toggleCoreDataXPC:(id)arg1 ;
-(void)toggleDisableStickyOccurrences:(id)arg1 ;
-(void)toggleUseStaticDataCache:(id)arg1 ;
-(void)toggleFadeNewOccurrencesIn:(id)arg1 ;
-(void)toggleISCRemoveUnusedPages:(id)arg1 ;
-(void)toggleFreezeISC:(id)arg1 ;
-(void)toggleExportAnonymized:(id)arg1 ;
-(void)toggleCopyRecurrenceRuleForSuggestions:(id)arg1 ;
-(void)printSelectedEventsSummary:(id)arg1 ;
-(void)calDAVLogHTTPActivity:(id)arg1 ;
-(void)calDAVLogiTIPDetails:(id)arg1 ;
-(void)canvasOverrideDaysInWeekView:(id)arg1 ;
-(void)debugSetDayViewBeforeStartDateBuffer:(id)arg1 ;
-(void)debugSetDayViewAfterStartDateBuffer:(id)arg1 ;
-(void)openSwipingPrefs:(id)arg1 ;
-(void)openWeekViewVisualizer:(id)arg1 ;
-(void)_setStateForMenuFromCheckedItem:(id)arg1 ;
-(void)insertDebugMenu;
-(void)setUiMigrationController:(CalUIMigrationController *)arg1 ;
-(void)cacheWeatherForEventsInNearFuture;
-(void)saveWindowsIfNeeded:(id)arg1 ;
-(id)calendarUserAddressWithOutMailto:(id)arg1 ;
-(void)openDelegateInNewWindowWithSender:(id)arg1 ;
-(char)openingInspectors;
-(id)saveInspectorsForWindow:(id)arg1 ;
-(char)restoringSelection;
-(void)setRestoringSelection:(char)arg1 ;
-(void)setOpeningInspectors:(char)arg1 ;
-(void)_upgradeToNewColors;
-(void)loadAllWindows;
-(void)autopopulateWithAccountsAndCalendarsIfNeeded;
-(void)migrateSubscriptionCalendarKeychainEntries;
-(void)setupAutoSave;
-(void)setupErrorNotificationListeners;
-(void)reloadErrorsAndNotifyOnlyIfErrorsFound;
-(void)setIsFinishedLaunching:(char)arg1 ;
-(id)managedObjectIDsFromStrings:(id)arg1 withCoordinator:(id)arg2 ;
-(char)calendarsExist;
-(void)unsetupAutoSave;
-(void)sendNotificationIfMigrationInProgress;
-(void)principalErrorNotification:(id)arg1 ;
-(void)reloadPublicationCalendarErrors;
-(void)reloadSubscriptionCalendarErrors;
-(void)reloadPublicationCalendarErrorsAndUpdateEvenIfNoError:(char)arg1 ;
-(void)reloadSubscriptionCalendarErrorsAndUpdateEvenIfNoError:(char)arg1 ;
-(void)_handleErrorNotification:(id)arg1 forEntityNames:(id)arg2 withEnumerationBlock:(/*^block*/id)arg3 ;
-(void)_reloadErrorsForLastErrorEntityName:(id)arg1 updateEvenIfNoError:(char)arg2 handler:(/*^block*/id)arg3 ;
-(void)prepareToQuit;
-(id)showEventMenuItem;
-(id)editEventMenuItem;
-(id)getInfoMenuItem;
-(id)showInspectorMenuItem;
-(id)viewByListMenuItem;
-(void)showKeyboardShortcuts:(id)arg1 ;
-(void)showNewPreferences:(id)arg1 ;
-(void)openAccountsPrefPane:(id)arg1 ;
-(void)backup:(id)arg1 ;
-(void)restore:(id)arg1 ;
-(void)goToCatalog:(id)arg1 ;
-(void)showCalendarsWindow:(id)arg1 ;
-(void)showHidePeoplePicker:(id)arg1 ;
-(void)showHideAvailability:(id)arg1 ;
-(void)showHideDeclinedEvents:(id)arg1 ;
-(void)showHideAllDayEvents:(id)arg1 ;
-(void)showHideTravelTime:(id)arg1 ;
-(void)cycleThroughWindows:(id)arg1 ;
-(void)enableAutoSave;
-(void)disableAutoSave;
-(char)isAutoSaveDisabled;
-(void)processPendingAutoSave;
-(char)currentlyWantsTimeDetectionForSuggestions;
-(void)saveAllEventSelection;
-(void)inspectorDidClose:(id)arg1 forWindow:(id)arg2 ;
-(id)openStandaloneInspectors;
-(char)allowInspectorStacking;
-(void)setAllowInspectorStacking:(char)arg1 ;
-(NSArray *)sharedEntities;
-(char)migrationInProgress;
-(CalUIMigrationController *)uiMigrationController;
-(void)applicationWillBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)restoreSelection;
-(void)subscribe:(id)arg1 ;
-(id)autoSave;
-(void)logICSMessage:(id)arg1 atLevel:(long long)arg2 ;
-(void)groupsChangedExternally:(id)arg1 ;
-(void)commitDeferredForObjects:(id)arg1 ;
-(char)contextShouldStayOpenWhenCommitIsDeferred;
-(char)contextShouldStayOpenWhenCommitIsCanceled;
-(char)contextShouldStayOpenWhenCommitIsReverted;
-(void)addAccount:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)mainWindow;
-(char)application:(id)arg1 openFile:(id)arg2 ;
-(unsigned long long)applicationShouldTerminate:(id)arg1 ;
-(id)applicationDockMenu:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(char)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(char)arg2 ;
-(NSArray *)windowControllers;
-(EKUndoManager *)undoManager;
-(void)awakeFromNib;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)setUndoManager:(EKUndoManager *)arg1 ;
-(void)addWindowController:(id)arg1 ;
-(void)removeWindowController:(id)arg1 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)save:(id)arg1 ;
-(char)isFinishedLaunching;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)saveAll;
-(void)calendarPersistence:(id)arg1 presentError:(id)arg2 ;
-(void)managedObjectsChangedFromRemoteContext:(id)arg1 ;
-(id)nodes;
@end

