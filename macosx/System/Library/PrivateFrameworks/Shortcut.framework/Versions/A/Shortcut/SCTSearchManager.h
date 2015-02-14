/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <AppKit/NSResponder.h>
#import <Shortcut/NSTextFieldDelegate.h>
#import <Shortcut/NSTableViewDelegate.h>
#import <Shortcut/NSTableViewDataSource.h>

@class SCTMenuView, SCTBackgroundView, NSTextField, NSSearchField, SCTTableView, NSStatusItem, NSButton, SCTGRLIndex, NSMutableArray, NSMutableDictionary, SCTGRL, NSWindow, NSTimer, NSConditionLock, NSString, SCTMenuBarVisibilityManager;

@interface SCTSearchManager : NSResponder <NSTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource> {

	SCTMenuView* mSearchView;
	SCTBackgroundView* mBackgroundView;
	NSTextField* mSearchTitle;
	NSSearchField* mSearchField;
	SCTTableView* mResultsTable;
	NSStatusItem* mStatusItem;
	NSButton* mSCTIconView;
	SCTGRLIndex* mGRLIndex;
	NSMutableArray* mSearchHandlers;
	NSMutableDictionary* mRawSearchResults;
	NSMutableDictionary* mCollatedResults;
	NSMutableArray* mResultCategories;
	NSMutableArray* mViewRowTable;
	long long mSelectedResult;
	char mSelectionInProgress;
	char mIgnoreMenuClosedEvents;
	char mHelpMenuIsInSearchMode;
	char mHasNoResultsFound;
	SCTGRL* mGRLToBeShown;
	SCTGRL* mShownGRL;
	SCTGRL* mPrevShownGRL;
	SCTGRL* mSpaceGRL;
	NSWindow* mSavedKeyWindow;
	NSTimer* mClearSearchTimer;
	unsigned mLastNavigationDirection;
	OpaqueEventHandlerRefRef mCloseMenuHandler;
	char mDebugMode;
	int mThreadCount;
	NSConditionLock* mSearchThreadLock;
	char mResetSearch;
	NSString* mSearchString;
	char mTerminateSearchThread;
	unsigned long long mResultSequenceNumber;
	unsigned long long mQuerySequenceNumber;
	unsigned long long mCustomQuerySequenceNumber;
	double mSearchTimeInterval;
	char mMenuBarIndexIsStale;
	SEL mMoveUpSelector;
	SEL mMoveDownSelector;
	SEL mMoveLeftSelector;
	SEL mMoveRightSelector;
	SEL mCarriageReturnSelector;
	SEL mNewLineSelector;
	SEL mEnterSelector;
	OpaqueMenuRefRef mPreviousHelpMenu;
	SCTMenuBarVisibilityManager* mMenuBarVisibilityManager;
	OpaqueEventHandlerRefRef mInstallWhenTrackingHandlerRef;

}

@property (readonly) NSMutableArray * searchHandlers; 
@property (readonly) SCTMenuBarVisibilityManager * mMenuBarVisibilityManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initShortCut;
+(id)sharedSearchManager;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)performSearch;
-(void)setSelectedResult:(long long)arg1 ;
-(SCTMenuBarVisibilityManager *)mMenuBarVisibilityManager;
-(void)handleMenuClosed:(id)arg1 ;
-(char)updateSearchViewWithWidth:(double*)arg1 ;
-(char)shortcutIsVisible;
-(void)clearSearch;
-(void)analyzeAndIndexApp:(id)arg1 ;
-(void)toggleInspectorWindow;
-(void)installCarbonEventHandler;
-(void)timerClearSearch:(id)arg1 ;
-(void)finishAwakeFromNib:(id)arg1 ;
-(void)toggleSearchMenu:(id)arg1 ;
-(void)stopDelayedShowcase;
-(void)resetSearchResults;
-(void)updateSearchView;
-(void)stopShowcase:(id)arg1 ;
-(void)stopClearSearchTimer;
-(void)updateGRLIndex;
-(void)cleanupNotifications;
-(void)makeSearchFieldKey;
-(void)helpMenuOpening;
-(int)installShortcutView;
-(void)setupSearchResults;
-(void)helpMenuClosed;
-(void)selectRowAfterTargetingItem:(unsigned short)arg1 withMenu:(OpaqueMenuRefRef)arg2 ;
-(void)setLastNavigationDirection:(unsigned)arg1 ;
-(void)setupSearchView;
-(id)showAllResultsHandler;
-(void)collateSearchResults;
-(long long)searchResultCount;
-(void)setupEditFieldKeyBindings;
-(void)selectSearchResult:(id)arg1 ;
-(void)handleWindowDidBecomeKey:(id)arg1 ;
-(void)startClearSearchTimer;
-(id)selectedGRL;
-(char)shouldTakeFocus;
-(char)hasNoResults;
-(char)isSpaceRow:(long long)arg1 ;
-(char)searchIsInProgress;
-(id)searchResultAtIndex:(long long)arg1 ;
-(id)searchTypeLabelAtIndex:(long long)arg1 ;
-(void)showcaseSelectedResult:(id)arg1 ;
-(char)selectUp;
-(char)selectDown;
-(void)hideSearchWindow;
-(void)doPerformResource:(id)arg1 ;
-(id)prevShownGRL;
-(char)shouldShopShowcaseForTransitionToGRL:(id)arg1 ;
-(void)doShowResource:(id)arg1 ;
-(void)setPrevShownGRL:(id)arg1 ;
-(void)sendAppleEventCompleted;
-(id)localizedHelpTopicsName;
-(id)localizedTitlesForShowAllHelpTopics;
-(void)continueWithMenuVisible;
-(void)convertIndex:(long long)arg1 toResults:(id*)arg2 andOffset:(long long*)arg3 ;
-(void)doSendAppleEventOfKind:(unsigned)arg1 ;
-(void)sendAppleEventSetup:(id)arg1 ;
-(int)installShortcutMenuHandlers:(OpaqueMenuRefRef)arg1 ;
-(void)processSearchResults:(id)arg1 ;
-(CGRect)searchFrameInScreenCoordinates;
-(void)setIgnoreMenuClosedEvents:(char)arg1 ;
-(void)selectResult:(long long)arg1 ;
-(id)resultsTable;
-(char)selectionInProgress;
-(char)handleKeyEventWhileInOtherUI:(unsigned)arg1 ;
-(void)analyzeAndIndexAppDidComplete:(id)arg1 ;
-(id)grlIndex;
-(void)registerSearchHandler:(id)arg1 ;
-(void)unregisterSearchHandler:(id)arg1 ;
-(char)defaultHelpSearchEnabled;
-(void)restoreKeyboardFocus:(id)arg1 ;
-(NSMutableArray *)searchHandlers;
-(void)cleanupAppNotifications:(id)arg1 ;
-(id)searchTerm;
-(void)clearSelection;
-(id)init;
-(void)dealloc;
-(void)keyDown:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(NSRange)arg4 indexOfSelectedItem:(long long*)arg5 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(id)searchString;
-(void)loadNib;
-(char)debugMode;
-(void)setDebugMode:(char)arg1 ;
@end

