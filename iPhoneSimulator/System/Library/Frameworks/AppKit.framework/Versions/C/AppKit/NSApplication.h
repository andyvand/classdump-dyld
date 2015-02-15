/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:25 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSResponder.h>
#import <AppKit/NSUserInterfaceValidations.h>
#import <AppKit/NSAccessibilityElement.h>
#import <AppKit/NSAccessibility.h>

@class NSURL, NSString, NSArray, NSEvent, NSMenu, NSGraphicsContext, NSWindow, NSImage, NSDockTile;

@interface NSApplication : NSResponder <NSUserInterfaceValidations, NSAccessibilityElement, NSAccessibility> {

	NSEvent* _currentEvent;
	id _windowList;
	id _keyWindow;
	id _mainWindow;
	id _delegate;
	id* _hiddenList;
	int _hiddenCount;
	long long _context;
	void* _appleEventSuspensionID;
	id _previousKeyWindow;
	short _unusedApp;
	short _running;
	struct {
		unsigned _hidden : 1;
		unsigned _appleEventActivationInProgress : 1;
		unsigned _active : 1;
		unsigned _hasBeenRun : 1;
		unsigned _doingUnhide : 1;
		unsigned _delegateReturnsValidRequestor : 1;
		unsigned _deactPending : 1;
		unsigned _invalidState : 1;
		unsigned _invalidEvent : 1;
		unsigned _postedWindowsNeedUpdateNote : 1;
		unsigned _wantsToActivate : 1;
		unsigned _doingHide : 1;
		unsigned _dontSendShouldTerminate : 1;
		unsigned _ignoresFullScreen : 1;
		unsigned _finishedLaunching : 1;
		unsigned _hasEventDelegate : 1;
		unsigned _appDying : 1;
		unsigned _didNSOpenOrPrint : 1;
		unsigned _inDealloc : 1;
		unsigned _pendingDidFinish : 1;
		unsigned _hasKeyFocus : 1;
		unsigned _panelsNonactivating : 1;
		unsigned _hiddenOnLaunch : 1;
		unsigned _openStatus : 2;
		unsigned _batchOrdering : 1;
		unsigned _waitingForTerminationReply : 1;
		unsigned _windowMoveDisabled : 1;
		unsigned _enumeratingMemoryPressureHandlers : 1;
		unsigned _didTryRestoringPersistentState : 1;
		unsigned _reservedN : 1;
		unsigned _mightBeSwitching : 1;
	}  _appFlags;
	id _mainMenu;
	id _appIcon;
	void* _unused;
	id _eventDelegate;
	NSThreadPrivate* _threadingSupport;

}

@property (readonly) unsigned long long enabledRemoteNotificationTypes; 
@property (copy,readonly) NSArray * orderedDocuments; 
@property (copy,readonly) NSArray * orderedWindows; 
@property (retain) id servicesProvider; 
@property (retain) NSMenu * windowsMenu; 
@property (assign) id<NSApplicationDelegate> delegate; 
@property (readonly) NSGraphicsContext * context; 
@property (readonly) NSWindow * mainWindow; 
@property (readonly) NSWindow * keyWindow; 
@property (getter=isActive,readonly) char active; 
@property (getter=isHidden,readonly) char hidden; 
@property (getter=isRunning,readonly) char running; 
@property (readonly) NSWindow * modalWindow; 
@property (readonly) NSEvent * currentEvent; 
@property (copy,readonly) NSArray * windows; 
@property (retain) NSMenu * mainMenu; 
@property (retain) NSMenu * helpMenu; 
@property (retain) NSImage * applicationIconImage; 
@property (readonly) NSDockTile * dockTile; 
@property (assign) unsigned long long presentationOptions; 
@property (readonly) unsigned long long currentSystemPresentationOptions; 
@property (readonly) unsigned long long occlusionState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAccessibilityElement) char accessibilityElement; 
@property (assign) CGRect accessibilityFrame; 
@property (getter=isAccessibilityFocused) char accessibilityFocused; 
@property (assign) CGPoint accessibilityActivationPoint; 
@property (__weak) id accessibilityTopLevelUIElement; 
@property (copy) NSURL * accessibilityURL; 
@property (retain) id accessibilityValue; 
@property (copy) NSString * accessibilityValueDescription; 
@property (copy) NSArray * accessibilityVisibleChildren; 
@property (copy) NSString * accessibilitySubrole; 
@property (copy) NSString * accessibilityTitle; 
@property (__weak) id accessibilityTitleUIElement; 
@property (copy) NSArray * accessibilityNextContents; 
@property (assign) long long accessibilityOrientation; 
@property (retain) id accessibilityOverflowButton; 
@property (__weak) id accessibilityParent; 
@property (copy) NSString * accessibilityPlaceholderValue; 
@property (copy) NSArray * accessibilityPreviousContents; 
@property (copy) NSString * accessibilityRole; 
@property (copy) NSString * accessibilityRoleDescription; 
@property (retain) id accessibilitySearchButton; 
@property (retain) id accessibilitySearchMenu; 
@property (getter=isAccessibilitySelected) char accessibilitySelected; 
@property (copy) NSArray * accessibilitySelectedChildren; 
@property (copy) NSArray * accessibilityServesAsTitleForUIElements; 
@property (retain) id accessibilityShownMenu; 
@property (retain) id accessibilityMinValue; 
@property (retain) id accessibilityMaxValue; 
@property (copy) NSArray * accessibilityLinkedUIElements; 
@property (__weak) id accessibilityWindow; 
@property (copy) NSString * accessibilityIdentifier; 
@property (copy) NSString * accessibilityHelp; 
@property (copy) NSString * accessibilityFilename; 
@property (getter=isAccessibilityExpanded) char accessibilityExpanded; 
@property (getter=isAccessibilityEdited) char accessibilityEdited; 
@property (getter=isAccessibilityEnabled) char accessibilityEnabled; 
@property (copy) NSArray * accessibilityChildren; 
@property (retain) id accessibilityClearButton; 
@property (retain) id accessibilityCancelButton; 
@property (getter=isAccessibilityProtectedContent) char accessibilityProtectedContent; 
@property (copy) NSArray * accessibilityContents; 
@property (copy) NSString * accessibilityLabel; 
@property (getter=isAccessibilityAlternateUIVisible) char accessibilityAlternateUIVisible; 
@property (copy) NSArray * accessibilitySharedFocusElements; 
@property (retain) id accessibilityApplicationFocusedUIElement; 
@property (retain) id accessibilityMainWindow; 
@property (getter=isAccessibilityHidden) char accessibilityHidden; 
@property (getter=isAccessibilityFrontmost) char accessibilityFrontmost; 
@property (retain) id accessibilityFocusedWindow; 
@property (copy) NSArray * accessibilityWindows; 
@property (__weak) id accessibilityExtrasMenuBar; 
@property (__weak) id accessibilityMenuBar; 
@property (copy) NSArray * accessibilityColumnTitles; 
@property (getter=isAccessibilityOrderedByRow) char accessibilityOrderedByRow; 
@property (assign) long long accessibilityHorizontalUnits; 
@property (assign) long long accessibilityVerticalUnits; 
@property (copy) NSString * accessibilityHorizontalUnitDescription; 
@property (copy) NSString * accessibilityVerticalUnitDescription; 
@property (copy) NSArray * accessibilityHandles; 
@property (retain) id accessibilityWarningValue; 
@property (retain) id accessibilityCriticalValue; 
@property (getter=isAccessibilityDisclosed) char accessibilityDisclosed; 
@property (__weak) id accessibilityDisclosedByRow; 
@property (retain) id accessibilityDisclosedRows; 
@property (assign) long long accessibilityDisclosureLevel; 
@property (copy) NSArray * accessibilityMarkerUIElements; 
@property (retain) id accessibilityMarkerValues; 
@property (retain) id accessibilityMarkerGroupUIElement; 
@property (assign) long long accessibilityUnits; 
@property (copy) NSString * accessibilityUnitDescription; 
@property (assign) long long accessibilityRulerMarkerType; 
@property (copy) NSString * accessibilityMarkerTypeDescription; 
@property (retain) id accessibilityHorizontalScrollBar; 
@property (retain) id accessibilityVerticalScrollBar; 
@property (copy) NSArray * accessibilityAllowedValues; 
@property (copy) NSArray * accessibilityLabelUIElements; 
@property (assign) float accessibilityLabelValue; 
@property (copy) NSArray * accessibilitySplitters; 
@property (retain) id accessibilityDecrementButton; 
@property (retain) id accessibilityIncrementButton; 
@property (copy) NSArray * accessibilityTabs; 
@property (retain) id accessibilityHeader; 
@property (assign) long long accessibilityColumnCount; 
@property (assign) long long accessibilityRowCount; 
@property (assign) long long accessibilityIndex; 
@property (copy) NSArray * accessibilityColumns; 
@property (copy) NSArray * accessibilityRows; 
@property (copy) NSArray * accessibilityVisibleRows; 
@property (copy) NSArray * accessibilitySelectedRows; 
@property (copy) NSArray * accessibilityVisibleColumns; 
@property (copy) NSArray * accessibilitySelectedColumns; 
@property (assign) long long accessibilitySortDirection; 
@property (copy) NSArray * accessibilityRowHeaderUIElements; 
@property (copy) NSArray * accessibilitySelectedCells; 
@property (copy) NSArray * accessibilityVisibleCells; 
@property (copy) NSArray * accessibilityColumnHeaderUIElements; 
@property (assign) NSRange accessibilityRowIndexRange; 
@property (assign) NSRange accessibilityColumnIndexRange; 
@property (assign) long long accessibilityInsertionPointLineNumber; 
@property (assign) NSRange accessibilitySharedCharacterRange; 
@property (copy) NSArray * accessibilitySharedTextUIElements; 
@property (assign) NSRange accessibilityVisibleCharacterRange; 
@property (assign) long long accessibilityNumberOfCharacters; 
@property (copy) NSString * accessibilitySelectedText; 
@property (assign) NSRange accessibilitySelectedTextRange; 
@property (copy) NSArray * accessibilitySelectedTextRanges; 
@property (retain) id accessibilityToolbarButton; 
@property (getter=isAccessibilityModal) char accessibilityModal; 
@property (retain) id accessibilityProxy; 
@property (getter=isAccessibilityMain) char accessibilityMain; 
@property (retain) id accessibilityFullScreenButton; 
@property (retain) id accessibilityGrowArea; 
@property (copy) NSString * accessibilityDocument; 
@property (retain) id accessibilityDefaultButton; 
@property (retain) id accessibilityCloseButton; 
@property (retain) id accessibilityZoomButton; 
@property (retain) id accessibilityMinimizeButton; 
@property (getter=isAccessibilityMinimized) char accessibilityMinimized; 
+(char)isModifierKeyDown:(unsigned long long)arg1 ;
+(void)initialize;
+(void)_taskNowMultiThreaded:(id)arg1 ;
+(void)_initializeRegisteredDefaults;
+(void)_initializeArchiverMappings;
+(id)sharedApplication;
+(void)_startDrawingThread:(id)arg1 ;
+(void)load;
+(void)_userLoggedOut;
+(void)_initializeSharedApplicationForCarbonAppIfNecessary;
+(void)detachDrawingThread:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_urlsWithWithPathOrPaths:(id)arg1 itWasPaths:(char*)arg2 ;
+(id)_urlsWithDescriptor:(id)arg1 ;
+(char)willRestoreState;
-(long long)safari_runModalSheet:(id)arg1 ;
-(void)safari_setFullScreenMenuHidingMode:(long long)arg1 ;
-(void)_setPresentationOptionsThatAutoHideMenuBar;
-(void)_setPresentationOptionsThatHideMenuBar;
-(long long)safari_runModalSheet:(id)arg1 presentingWindow:(id)arg2 ;
-(unsigned long long)_presentationOptionsByValidatingOptions:(unsigned long long)arg1 ;
-(char)isMCCPrefPane;
-(id)_windowForModalSession:(NSModalSession*)arg1 ;
-(NSModalSession*)_previousModalSession:(NSModalSession*)arg1 ;
-(id)init;
-(void)setDelegate:(id<NSApplicationDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(char)isHidden;
-(NSGraphicsContext *)context;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(void)_setLaunchTaskMaskBits:(unsigned long long)arg1 ;
-(char)_disableSuddenTermination;
-(char)_appleEventActivationInProgress;
-(char)isActive;
-(void)_afterBatchOrderingFinishesDo:(/*^block*/id)arg1 ;
-(void)_setAppleEventActivationInProgress:(char)arg1 ;
-(void)setWindowsNeedUpdate:(char)arg1 ;
-(void)_enableSuddenTermination;
-(char)_isFinishLaunchingFromEventHandlersSuppressed;
-(void)_sendFinishLaunchingNotification;
-(id)windowWithWindowNumber:(long long)arg1 ;
-(id)_windowWithContextID:(long long)arg1 ;
-(void)_doHide;
-(void)_doUnhideWithoutActivation;
-(id)nextEventMatchingMask:(unsigned long long)arg1 untilDate:(id)arg2 inMode:(id)arg3 dequeue:(char)arg4 ;
-(void)postEvent:(id)arg1 atStart:(char)arg2 ;
-(unsigned)contextID;
-(id)_findWindowUsingCache:(long long)arg1 ;
-(void)accessibilitySetMayContainProtectedContent:(char)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)_accessibilityValueForAttribute:(id)arg1 clientError:(int*)arg2 ;
-(id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_accessibilityUIElementSpecifier;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityMayContainProtectedContent;
-(void)_setCurrentEvent:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(NSMenu *)mainMenu;
-(char)accessibilityShouldUseUniqueId;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsRoleAttributeSettable;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsRoleDescriptionAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)_accessibilityUIElementSpecifierRegisterIfNeeded:(char)arg1 ;
-(NSEvent *)currentEvent;
-(id)accessibilityChildrenAttribute;
-(long long)runModalForWindow:(id)arg1 ;
-(void)beginSheet:(id)arg1 modalForWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)endSheet:(id)arg1 returnCode:(long long)arg2 ;
-(void)stopModalWithCode:(long long)arg1 ;
-(void)speakString:(id)arg1 ;
-(long long)userInterfaceLayoutDirection;
-(id<NSApplicationDelegate>)delegate;
-(long long)runModalForWindow:(id)arg1 relativeToWindow:(id)arg2 ;
-(void)_scheduleWindow:(long long)arg1 forBatchOrdering:(long long)arg2 relativeTo:(long long)arg3 ;
-(void)_terminateOnMemoryPressure:(id)arg1 ;
-(id)_copyWindows;
-(id)makeWindowsPerform:(SEL)arg1 inOrder:(char)arg2 ;
-(void)_setNeedsUpdateToReflectAutomaticTerminationState;
-(char)_appHasOpenNSWindowOrPanel;
-(char)_isCurrentlyLightLaunched;
-(void)_setIsCurrentlyLightLaunched:(char)arg1 ;
-(void)_reopenWindowsAsNecessaryIncludingRestorableState:(char)arg1 registeringAsReady:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)finishLaunching;
-(void)_setShouldRestoreStateOnNextLaunch:(char)arg1 ;
-(void)terminate:(id)arg1 ;
-(char)_canQuitQuietlyAndSafelyWithOptionalExplanation:(id)arg1 ;
-(void)hide:(id)arg1 ;
-(char)_tryTransformingToBackgroundTypeForAutoQuit;
-(void)sendEvent:(id)arg1 ;
-(void)_makeSureAutomaticTerminationIsNotInterferingWithLanguagePrefs:(id)arg1 ;
-(void)_setSpacesSwitchOnActivation;
-(void)_setDoubleClickBehavior;
-(void)_disableRelaunchOnLoginIfNotLaunchedByLaunchServicesOrBlacklisted;
-(void)_aquaColorVariantChanged;
-(void)_axContrastChanged:(id)arg1 ;
-(void)_eventBlockingTransitionWillBegin;
-(void)_eventBlockingTransitionDidEnd;
-(void)_behaviorOnDoubleClickChanged;
-(void)_reactToChangeInQuitAlwaysKeepsWindows:(id)arg1 ;
-(void)_spacesSwitchOnActivationChanged:(id)arg1 ;
-(void)_registerWithDock;
-(char)_isActiveApp;
-(void)setIsActive:(char)arg1 ;
-(void)_setIsHidden:(char)arg1 ;
-(unsigned long long)gestureEventMask;
-(void)setGestureEventMask:(unsigned long long)arg1 ;
-(void)_startPrefetchingUbiquityContainerURL;
-(void)_registerForDisplayChangedNotification;
-(NSArray *)windows;
-(void)_cancelAllUserAttentionRequests;
-(void)setApplicationIconImage:(NSImage *)arg1 ;
-(void)_removeSystemUIModeHandler;
-(int)_startBatchWindowAccumulation:(long long)arg1 ;
-(void)_performBatchWindowOrdering:(int)arg1 release:(char)arg2 ;
-(void)_deallocHardCore:(char)arg1 ;
-(id)validRequestorForSendType:(id)arg1 returnType:(id)arg2 ;
-(char)_isRunningAppModal;
-(char)_isFakeHidden;
-(char)_anyOfMyFullScreenSpacesAreVisible;
-(void)_setFakeHidden:(char)arg1 ;
-(void)_makeHODWindowsPerform:(SEL)arg1 ;
-(void)_doHideMaybeFakingIt:(char)arg1 ;
-(void)_doUnhideWithoutActivationMaybeFakingIt:(char)arg1 ;
-(/*^block*/id)_copyBatchWindowOrderingPerformerForToken:(int)arg1 release:(char)arg2 ;
-(void)activateIgnoringOtherApps:(char)arg1 ;
-(void)unhideWithoutActivation;
-(char)_wasLaunchedFromLoginwindow;
-(NSWindow *)keyWindow;
-(NSWindow *)mainWindow;
-(id)_keyWindow;
-(id)_mainWindow;
-(int)_pendingActivationOriginatingDisplayHint;
-(id)_copyFullScreenInstances;
-(char)_findKeyWindowConsideringSpacesWithOriginatingDisplayHint:(int)arg1 isAppleEventPending:(char)arg2 makeKey:(char)arg3 ;
-(void)_loadUIAfterLightLaunch;
-(id)_findWindowUsingRealWindowNumber:(long long)arg1 ;
-(id)_findWindowUsingContextID:(long long)arg1 ;
-(id)mainStoryboard;
-(void)_setPreviousKeyWindow:(id)arg1 ;
-(void)_doOpenFile:(id)arg1 ok:(long long*)arg2 tryTemp:(char)arg3 ;
-(id)_appCentricOpenPanel;
-(unsigned long long)currentSystemPresentationOptions;
-(void)updateWindows;
-(unsigned long long)_launchTaskMask;
-(NSWindow *)modalWindow;
-(void)_reopenWindowsIfNecessaryWithAppleEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_postDidFinishNotification;
-(id)_bestKeyWindowCandidateOnScreen:(id)arg1 ;
-(void)_enableAutomaticTerminationIfWhitelisted;
-(void)_initializeAutomaticTermination;
-(void)_registerRequiredAEHandlers;
-(char)_shouldDelayDocumentReopeningUntilAfterFinishLaunching;
-(void)_delayReopening;
-(void)_continueReopening;
-(char)canEnterFullScreenMode;
-(void)_addFullScreenMenuItemIfNeeded;
-(void)_addFeedbackMenuItemIfNeeded;
-(short)_handleAEPrintDocumentsForURLs:(id)arg1 withSettings:(id)arg2 showPrintPanels:(char)arg3 ;
-(char)_checkForAutomaticTerminationSupportPossiblyEnablingIt;
-(void)_installMemoryStatusDispatchSources;
-(void)_installMemoryPressureDispatchSources;
-(long long)unhide;
-(long long)_pendingActCount;
-(void)_modalSession:(NSModalSession*)arg1 sendEvent:(id)arg2 ;
-(void)_realDoModalLoop:(NSModalSession*)arg1 peek:(char)arg2 ;
-(void)_doModalLoopForSecondaryThread:(id)arg1 ;
-(NSModalSession*)beginModalSessionForWindow:(id)arg1 ;
-(void)_doModalLoop:(NSModalSession*)arg1 peek:(char)arg2 ;
-(void)endModalSession:(NSModalSession*)arg1 ;
-(NSModalSession*)beginModalSessionForWindow:(id)arg1 relativeToWindow:(id)arg2 ;
-(NSModalSession*)_commonBeginModalSessionForWindow:(id)arg1 relativeToWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(char)_hiddenOnLaunch;
-(char)_wantsToActivate;
-(id)_orderFrontModalWindow:(id)arg1 relativeToWindow:(id)arg2 ;
-(long long)requestUserAttention:(unsigned long long)arg1 ;
-(void)_setMouseActivationInProgress:(char)arg1 ;
-(void)_makeModalWindowsPerform:(SEL)arg1 ;
-(char)_isModalUsingCache:(id)arg1 ;
-(char)_hasActiveRequest;
-(void)_cancelRequest:(id)arg1 ;
-(void)cancelUserAttentionRequest:(long long)arg1 ;
-(char)_isRunningDocModal;
-(void)_docController:(id)arg1 shouldTerminate:(char)arg2 ;
-(void)_setWaitingForTerminationReply:(char)arg1 ;
-(void)_setWantsToActivate:(char)arg1 ;
-(void)replyToApplicationShouldTerminate:(char)arg1 ;
-(id)_hiddenWindows;
-(id)_persistenceOrderedWindowNumbers;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(unsigned)_persistentUIWindowID;
-(CFArrayRef)_createDockMenu:(char)arg1 ;
-(void)_setDockMenuForPersistentState:(id)arg1 ;
-(void)_terminateFromSender:(id)arg1 askIfShouldTerminate:(char)arg2 saveWindows:(char)arg3 ;
-(void)_unsetShouldRestoreStateOnNextLaunch;
-(char)_quitMenuItemShouldKeepWindows:(id)arg1 ;
-(char)shouldRestoreStateOnNextLaunch;
-(char)_allowAutomaticTerminationInsteadOfTermination;
-(void)_setAllowAutomaticTerminationInsteadOfTermination:(char)arg1 ;
-(void)_pushPersistentStateTerminationGeneration;
-(char)_shouldTerminate;
-(void)_popPersistentStateTerminationGeneration;
-(char)_hasKeyFocus;
-(void)_saveWindowForGestureEvent:(id)arg1 ;
-(void)onFirstEvent;
-(id)menu;
-(char)_handleKeyEquivalent:(id)arg1 ;
-(char)_startHandlingDisplayReconfig;
-(void)_finishHandlingDisplayReconfig;
-(void)_reactToScreenInvalidationImmediately:(char)arg1 ;
-(void)_reactToScreenInvalidation:(char)arg1 ;
-(id)_findWindowInOrder:(char)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)_setKeyWindow:(id)arg1 ;
-(id)_setMainWindow:(id)arg1 ;
-(id)_bestMainWindowCandidateOnScreen:(id)arg1 ;
-(char)_spacesSwitchOnActivation;
-(char)_handleTouchEvent:(id)arg1 ;
-(long long)activationPolicy;
-(void)_updateFullScreenPresentationOptionsForInstance:(OpaqueHIPresentationInstanceRefRef)arg1 ;
-(unsigned long long)presentationOptions;
-(id)_copyVisibleFullScreenInstances;
-(void)_setPresentationOptions:(unsigned long long)arg1 instance:(OpaqueHIPresentationInstanceRefRef)arg2 flags:(unsigned long long)arg3 ;
-(void)_updateActiveWindowForSpaceChange;
-(char)_isDying;
-(void)_updateFullScreenPresentationOptions;
-(void)activeSpaceChanged:(id)arg1 ;
-(void)_activeDisplayChanged:(id)arg1 ;
-(void)_setAmbientOriginatingDisplayHint:(int)arg1 ;
-(char)_isDeactPending;
-(char)_shouldClearModalWindowLevelWhenInactive;
-(void)_clearModalWindowLevels;
-(void)_updateDisplaysIfNeeded;
-(char)_mouseActivationInProgress;
-(char)_handleSpecialAlternateKeyEquivalent:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)quickLookPreviewItems:(id)arg1 ;
-(void)_resignKeyFocus;
-(void)_obtainKeyFocus;
-(char)_handleGestureEvent:(id)arg1 ;
-(char)shouldBeTreatedAsInkEvent:(id)arg1 ;
-(id)_getLockedWindowListForCycle;
-(void)_unlockWindowListForCycle;
-(NSDockTile *)dockTile;
-(void)_setApplicationIconImage:(id)arg1 setDockImage:(char)arg2 ;
-(id)_iconImage;
-(void)_updateWindowsUsingCache;
-(char)tryToPerform:(SEL)arg1 with:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(char)_isAlternateQuitMenuItem:(id)arg1 ;
-(NSMenu *)windowsMenu;
-(void)_addUpdaterForDocumentMenuItem:(id)arg1 ;
-(void)closeAll:(id)arg1 ;
-(void)_forceAutoQuit:(id)arg1 ;
-(void)setMainMenu:(NSMenu *)arg1 ;
-(int)_sendDockMenuCommand:(unsigned)arg1 withTag:(unsigned long long)arg2 modifierFlags:(unsigned long long)arg3 ;
-(CFArrayRef)_flattenMenu:(id)arg1 flatList:(id)arg2 ;
-(CFDictionaryRef)_flattenMenuItem:(id)arg1 flatList:(id)arg2 ;
-(void)_addWindowsMenu:(CFArrayRef)arg1 enabled:(char)arg2 ;
-(char)isRunning;
-(long long)_indexOfWindow:(id)arg1 ;
-(void)_removeWindowFromCache:(id)arg1 ;
-(char)areCursorRectsEnabled;
-(void)_setCursorForCurrentMouseLocation;
-(id)_cursorRectCursor;
-(void)_crashOnException:(id)arg1 ;
-(char)_canShowExceptions;
-(void)_showException:(id)arg1 ;
-(void)stopSpeaking:(id)arg1 ;
-(char)isSpeaking;
-(void)runPageLayout:(id)arg1 ;
-(char)_isNSDocumentBased;
-(void)startDictation:(id)arg1 ;
-(void)stopDictation:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)arrangeInFront:(id)arg1 ;
-(void)alternateArrangeInFront:(id)arg1 ;
-(char)_appHasVisibleWindowOrPanel;
-(void)miniaturizeAll:(id)arg1 ;
-(char)_anyOfMyWindowsAreOnAVisibleNonFullScreenSpace;
-(void)zoomAll:(id)arg1 ;
-(void)unhideAllApplications:(id)arg1 ;
-(void)hideOtherApplications:(id)arg1 ;
-(void)orderFrontColorPanel:(id)arg1 ;
-(void)showGuessPanel:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(id)_kitBundle;
-(void)doCommandBySelector:(SEL)arg1 ;
-(void)_setGestureEventMask:(unsigned long long)arg1 ;
-(void)_setPresentationOptions:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(id)_visibleFullScreenInstanceOnScreen:(id)arg1 ;
-(id)_fullScreenInstanceEnteringFullScreen;
-(void)_reactToPresentationChanged;
-(void)enterFullScreenMode:(id)arg1 ;
-(void)_exitFullScreenModeOnSpace:(unsigned long long)arg1 ;
-(void)_doCopyMemoryPressureArrayOnWriteIfNecessary;
-(void)_callMemoryPressureHandlers;
-(void)_fakeMemoryPressureHandler:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityParent;
-(void)_copyWindowsSnapShotInThreadData;
-(char)_inSafariInstallEnvironment;
-(void)_cleanUpForCarbonAppTermination;
-(void)_installAutoreleasePoolsOnCurrentThreadIfNecessary;
-(void)_updateButtonsForSystemUIModeChanged;
-(char)_fullScreenSpaces;
-(char)_applicationLaunchIsPastSplashScreens;
-(void)_freezeAutomaticTerminationState;
-(void)_unfreezeAutomaticTerminationState;
-(void)_awakenIfSleepingInAutoQuitAndContinueTermination:(char)arg1 ;
-(char)_sleepInAutomaticTermination;
-(unsigned long long)occlusionState;
-(void)_setEventDelegate:(id)arg1 ;
-(id)_eventDelegate;
-(void)_addHiddenWindow:(id)arg1 ;
-(id)_removeHiddenWindow:(id)arg1 ;
-(void)_doFakeUnhide;
-(void)_unscheduleWindowForBatchOrdering:(long long)arg1 ;
-(long long)_lowestWindowOfAtLeastNormalWindowLevelAfterScheduledBatchOrdering;
-(void)unhide:(id)arg1 ;
-(char)_batchOrdering;
-(void)_windowNumber:(long long)arg1 changedTo:(long long)arg2 ;
-(id)_windowWithRealWindowNumber:(long long)arg1 ;
-(id)_previousKeyWindow;
-(id)_keyWindowForHeartBeat;
-(char)_isDoingOpenFile;
-(long long)openFile:(id)arg1 ok:(long long*)arg2 ;
-(long long)openTempFile:(id)arg1 ok:(long long*)arg2 ;
-(char)_openFileWithoutUI:(id)arg1 ;
-(void)replyToOpenOrPrint:(unsigned long long)arg1 ;
-(char)_hasOpenMenuItem;
-(char)_doOpenUntitled;
-(char)_isDoingUnhide;
-(char)_isDoingHide;
-(char)_isRunningModal;
-(void)deactivate;
-(int)_ambientOriginatingDisplayHint;
-(void)_withAmbientOriginatingDisplayHint:(int)arg1 perform:(/*^block*/id)arg2 ;
-(void)_setPendingActivationOriginatingDisplayHint:(int)arg1 ;
-(void)_adjustKeyWindowFromOriginatingDisplayHint:(int)arg1 ;
-(void)_deactivateWindows;
-(void)_activateWindows;
-(void)_suppressFinishLaunchingFromEventHandlersWhilePerformingBlock:(/*^block*/id)arg1 ;
-(char)_replyToLaunch;
-(id)_replyToOpen:(long long)arg1 ;
-(char)_didNSOpenOrPrint;
-(void)_startRunMethod;
-(void)_endRunMethod;
-(void)_preEventHandling;
-(void)_postEventHandling;
-(void)run;
-(char)_wantsDeviceDependentEventModifierFlags;
-(void)stop:(id)arg1 ;
-(void)stopModal;
-(void)endSheet:(id)arg1 ;
-(void)abortModal;
-(long long)runModalSession:(NSModalSession*)arg1 ;
-(void)_setAppCentricOpenPanel:(id)arg1 ;
-(char)_waitingForTerminationReply;
-(unsigned)_persistentStateTerminationGeneration;
-(id)_copyPublicPersistentUIInfo;
-(id)delayWindowOrdering;
-(void)preventWindowOrdering;
-(void)discardEventsMatchingMask:(unsigned long long)arg1 beforeEvent:(id)arg2 ;
-(unsigned long long)_lastEventRecordTime;
-(char)_sendScreenNotificationWhenDockSizeChanges;
-(char)_isHandlingDisplayReconfig;
-(void)_reactToDisplayChangedNotification;
-(void)_reactToAcceleratorChangedNotification;
-(void)_reactToDisplayChangedEvent;
-(void)_reactToDockChanged;
-(void)_addKeyOverrideWindow:(id)arg1 ;
-(void)_removeKeyOverrideWindow:(id)arg1 ;
-(id)_visibleFullScreenInstanceOnSpace:(unsigned long long)arg1 ;
-(void)event:(id)arg1 wouldActivateWindow:(id)arg2 ;
-(void)quickLookPreviewItemsAtWindowLocation:(CGPoint)arg1 ;
-(void)_setHasKeyFocus:(char)arg1 ;
-(int)_stealKeyFocusWithOptions:(unsigned)arg1 ;
-(int)_releaseKeyFocus;
-(void)_setAllPanelsNonactivating:(char)arg1 ;
-(char)_areAllPanelsNonactivating;
-(id)frontWindow;
-(void)_enumerateOnScreenWindowsUsingBlock:(/*^block*/id)arg1 ;
-(void)_makeWindowsPerform:(SEL)arg1 forEvent:(id)arg2 inWindow:(id)arg3 standardWindowButton:(unsigned long long)arg4 ;
-(void)_cycleWindowsReversed:(char)arg1 ;
-(void)_cycleUtilityWindowsReversed:(char)arg1 ;
-(void)_dockDied;
-(NSImage *)applicationIconImage;
-(void)_dockRestarted;
-(id)_appIcon;
-(char)setActivationPolicy:(long long)arg1 ;
-(id)targetForAction:(SEL)arg1 ;
-(char)sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 ;
-(void)_setMainMenu:(id)arg1 ;
-(void)setMenu:(id)arg1 ;
-(void)setHelpMenu:(NSMenu *)arg1 ;
-(NSMenu *)helpMenu;
-(void)setDockMenu:(id)arg1 ;
-(CFDictionaryRef)_flattenMenuItem:(id)arg1 ;
-(CFArrayRef)_flattenMenu:(id)arg1 ;
-(void)_setWindowMoveDisabled:(char)arg1 ;
-(char)_windowMoveDisabled;
-(id)_removeWindow:(id)arg1 ;
-(id)_addWindow:(id)arg1 ;
-(void)_handleCursorUpdate:(id)arg1 ;
-(id)_restoreCursor;
-(void)disableCursorRects;
-(void)enableCursorRects;
-(long long)_currentActivation;
-(id)_setCurrentActivation:(long long)arg1 ;
-(void)reportException:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(char)arg2 ;
-(void)_whenReopeningIsAllowedDo:(/*^block*/id)arg1 ;
-(void)orderFrontCharacterPalette:(id)arg1 ;
-(char)isFullKeyboardAccessEnabled;
-(char)_processSwitchesEnabled;
-(unsigned long long)_gestureEventMask;
-(void)_setSupressGestureSubMaskChangesEnabled:(char)arg1 ;
-(void)setPresentationOptions:(unsigned long long)arg1 ;
-(void)exitFullScreenMode:(id)arg1 ;
-(void)setCanEnterFullScreenMode:(char)arg1 ;
-(void)_addFullScreenInstance:(id)arg1 ;
-(void)_removeFullScreenInstance:(id)arg1 ;
-(void)abortAllToolTips;
-(char)_someFullScreenInstanceHasSuppressedImplicitFullScreen;
-(id)addMemoryPressureMonitorUsingHandler:(/*^block*/id)arg1 ;
-(void)removeMemoryPressureMonitor:(id)arg1 ;
-(id)addIdleMonitorUsingHandler:(/*^block*/id)arg1 ;
-(void)removeIdleMonitor:(id)arg1 ;
-(long long)memoryStatus;
-(char)_shouldLoadMainNibNamed:(id)arg1 ;
-(char)presentError:(id)arg1 ;
-(id)willPresentError:(id)arg1 ;
-(id)_validateError:(id)arg1 forPresentationMethod:(SEL)arg2 ;
-(void)_something:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(/*^block*/id)arg3 ;
-(void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)disableAutomaticTermination;
-(void)enableAutomaticTermination;
-(void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)registerForRemoteNotificationTypes:(unsigned long long)arg1 ;
-(void)unregisterForRemoteNotifications;
-(unsigned long long)enabledRemoteNotificationTypes;
-(id)_userNotificationCenter:(id)arg1 willActivateForNotification:(id)arg2 additionalUserInfo:(id)arg3 ;
-(void)_userNotificationCenter:(id)arg1 didActivateWithToken:(id)arg2 ;
-(void)_asynchronouslyPrefetchUbiqityContainerURL;
-(void)_ubiquityIdentityDidChange:(id)arg1 ;
-(void)_cancelGestureRecognizers:(id)arg1 ;
-(char)_appHasNonMiniaturizedWindow;
-(void)disableRelaunchOnLogin;
-(void)enableRelaunchOnLogin;
-(void)showHelp:(id)arg1 ;
-(id)accessibilityExtrasMenuBarAttribute;
-(id)accessibilityMenuBarAttribute;
-(id)accessibilityWindowsAttribute;
-(id)_accessibilityPopovers;
-(id)_accessibilityViewBridgeHitTest:(CGPoint)arg1 ;
-(void)accessibilityWorkaroundAddExtraWindow:(id)arg1 ;
-(void)accessibilityWorkaroundRemoveExtraWindow:(id)arg1 ;
-(id)accessibilityTitleAttribute;
-(char)accessibilityIsTitleAttributeSettable;
-(char)accessibilityIsMenuBarAttributeSettable;
-(char)accessibilityIsWindowsAttributeSettable;
-(char)accessibilityIsChildrenAttributeSettable;
-(id)accessibilityFrontmostAttribute;
-(char)accessibilityIsFrontmostAttributeSettable;
-(void)accessibilitySetFrontmostAttribute:(id)arg1 ;
-(id)accessibilityHiddenAttribute;
-(char)accessibilityIsHiddenAttributeSettable;
-(void)accessibilitySetHiddenAttribute:(id)arg1 ;
-(id)accessibilityMainWindowAttribute;
-(char)accessibilityIsMainWindowAttributeSettable;
-(id)accessibilityFocusedWindowAttribute;
-(char)accessibilityIsFocusedWindowAttributeSettable;
-(id)accessibilityFocusedUIElementAttribute;
-(char)accessibilityIsFocusedUIElementAttributeSettable;
-(id)accessibilityEnhancedUserInterfaceAttribute;
-(char)accessibilityIsEnhancedUserInterfaceAttributeSettable;
-(void)accessibilitySetEnhancedUserInterfaceAttribute:(id)arg1 ;
-(id)accessibilityHitTest;
-(id)_accessibilityCompatibilityHitTest:(CGPoint)arg1 ;
-(id)_orderedWindowsWithPanels:(char)arg1 ;
-(char)_delegate:(id)arg1 handlesKey:(id)arg2 ;
-(id)copyScriptingValue:(id)arg1 forKey:(id)arg2 withProperties:(id)arg3 ;
-(id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4 ;
-(NSArray *)orderedDocuments;
-(NSArray *)orderedWindows;
-(id)valueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 ;
-(id)valueWithName:(id)arg1 inPropertyWithKey:(id)arg2 ;
-(id)valueWithUniqueID:(id)arg1 inPropertyWithKey:(id)arg2 ;
-(void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2 inPropertyWithKey:(id)arg3 ;
-(void)insertValue:(id)arg1 inPropertyWithKey:(id)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 withValue:(id)arg3 ;
-(long long)_supportsGetValueWithNameForKey:(id)arg1 perhapsByOverridingClass:(Class)arg2 ;
-(long long)_supportsGetValueWithUniqueIDForKey:(id)arg1 perhapsByOverridingClass:(Class)arg2 ;
-(short)_handleAEOpenDocumentsForURLs:(id)arg1 ;
-(short)_handleAEQuit;
-(id)valueInOrderedWindowsWithUniqueID:(long long)arg1 ;
-(unsigned long long)_scriptingCount;
-(id)handleOpenScriptCommand:(id)arg1 ;
-(void)handlePrintScriptCommand:(id)arg1 ;
-(void)handleQuitScriptCommand:(id)arg1 ;
-(char)_requiresOpeningUntitledWindowAtLaunch;
-(char)_appHasOpenNSWindow;
-(int)_extractOriginatingDisplayHintFromAppleEvent:(id)arg1 ;
-(void)_restoreMiniaturizedWindow;
-(void)_forAEOpenDocumentsEvent:(id)arg1 populateReplyEvent:(id)arg2 withURLs:(id)arg3 documents:(id)arg4 ;
-(void)_openDocumentURLs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_resumeAppleEventWithSuspensionIDValue:(id)arg1 ;
-(int)_handleSelfTestEvent:(id)arg1 ;
-(void)_handleAEOpenEvent:(id)arg1 ;
-(void)_handleAEReopen:(id)arg1 ;
-(short)_handleAEOpenContentsEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(short)_handleAEContinueUserActivityEvent:(id)arg1 ;
-(void)_handleCoreEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(void)_handleTestEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(void)_realDoModalLoopForCarbonWindow:(NSModalSession*)arg1 peek:(char)arg2 ;
-(long long)runModalForCarbonWindow:(id)arg1 ;
-(void)_setVisibleInCache:(char)arg1 forWindow:(id)arg2 ;
-(void)addWindowsItem:(id)arg1 title:(id)arg2 filename:(char)arg3 ;
-(char)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)orderFrontFontPanel:(id)arg1 ;
-(void)activateContextHelpMode:(id)arg1 ;
-(void)setServicesMenu:(id)arg1 ;
-(void)setWindowsMenu:(NSMenu *)arg1 ;
-(void)setAppleMenu:(id)arg1 ;
-(id)servicesProvider;
-(void)setServicesProvider:(id)arg1 ;
-(void)registerServiceProvider:(id)arg1 withName:(id)arg2 ;
-(void)unregisterServiceProviderNamed:(id)arg1 ;
-(char)_fillSpellCheckerPopupButton:(id)arg1 ;
-(char)_launchSpellChecker:(long long)arg1 error:(id*)arg2 ;
-(void)orderFrontStandardAboutPanelWithOptions:(id)arg1 ;
-(void)orderFrontStandardAboutPanel:(id)arg1 ;
-(void)registerServicesMenuSendTypes:(id)arg1 returnTypes:(id)arg2 ;
-(void)_setHasInvalidRestorableState:(char)arg1 ;
-(char)_hasInvalidRestorableState;
-(void)removeWindowsItem:(id)arg1 ;
-(void)_setCacheWindowNum:(long long)arg1 forWindow:(id)arg2 ;
-(void)changeWindowsItem:(id)arg1 title:(id)arg2 filename:(char)arg3 ;
-(void)updateWindowsItem:(id)arg1 ;
-(void)_setHidesOnDeactivateInCache:(char)arg1 forWindow:(id)arg2 ;
-(void)_setModalInCache:(char)arg1 forWindow:(id)arg2 ;
-(id)_responsibleDelegateForSelector:(SEL)arg1 ;
-(char)_lockOrUnlockWindowCycleList:(char)arg1 ;
-(id)_getWindowData:(id)arg1 add:(char)arg2 ;
-(void)_checkForTerminateAfterLastWindowClosed:(id)arg1 saveWindows:(char)arg2 ;
-(void)_invalidateWindowListForCycleIfNeededForWindow:(id)arg1 ;
-(void)_scheduleCheckForTerminateAfterLastWindowClosed;
-(char)_isVisibleUsingCache:(id)arg1 ;
-(id)servicesMenu;
-(void)_rebuildOrUpdateServicesMenu:(char)arg1 ;
-(char)_launchSpellChecker:(long long)arg1 ;
-(void)_displayStatusNotification:(id)arg1 title:(id)arg2 options:(id)arg3 ;
-(void)_displayProgressNotification:(float)arg1 isIndeterminate:(char)arg2 ;
-(void)registerUserInterfaceItemSearchHandler:(id)arg1 ;
-(void)unregisterUserInterfaceItemSearchHandler:(id)arg1 ;
-(char)searchString:(id)arg1 inUserInterfaceItemString:(id)arg2 searchRange:(NSRange)arg3 foundRange:(NSRange*)arg4 ;
-(char)isDefaultHelpBookSearchEnabled;
-(void)setDefaultHelpBookSearchEnabled:(char)arg1 ;
-(id)_feedbackURL;
-(id)_feedbackMenuAppName;
-(char)_shouldShowFeedbackMenuItem;
-(void)_openFeedbackAssistant:(id)arg1 ;
-(id)_feedbackMenuTitle;
-(void)_updateCanQuitQuietlyAndSafely;
-(char)_contentsHaveInvalidRestorableState;
-(void)_setContentsHaveInvalidRestorableState:(char)arg1 ;
-(char)_shouldRecordPersistentState;
-(void)_invalidateRestorableStateOfContents;
-(id)_persistentUIWindow;
-(id)_persistentUIIdentifier;
-(void)extendStateRestoration;
-(void)completeStateRestoration;
-(long long)_stateRestorationExtensionCounter;
-(void)_disableRestorableStateWriting;
-(void)_enableRestorableStateWriting;
-(void)_restoreGlobalStateWithRestoration:(id)arg1 ;
-(void)_restoreWindowWithRestoration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_tryRestorationHeuristicsForWindowWithIdentifier:(id)arg1 state:(id)arg2 ;
-(char)_globalCanQuietAndSafeQuit;
-(id)_debugCanQuietSafeQuit;
@end

