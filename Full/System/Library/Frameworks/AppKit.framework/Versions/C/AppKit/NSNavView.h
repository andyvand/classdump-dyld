/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <AppKit/NSPathControlDelegate.h>
#import <AppKit/NSTextFieldDelegate.h>
#import <AppKit/NSNavFileBrowser.h>

@protocol NSNavFileBrowserDelegate;
@class NSURL, NSArray, NSNavDataSource, NSSavePanel, NSView, NSBrowser, NSOutlineView, NSIconView, NSNavSidebarController, NSSegmentedControl, NSControl, NSNavNodePopUpButton, NSNavSplitViewController, NSMenu, NSSearchField, NSTextField, NSProgressIndicator, NSNavScopeView, NSPathControl, NSRuleEditor, NSNavAdvancedSearchController, NSSegmentedCell, NSNavVirtualNode, ILMediaBrowserView, NSNavViewController, NSNavSharedServerController, NSNavBannerView, NSNavNode, NSString, NSNavNewFolderController, NSNavFilepathInputController;

@interface NSNavView : NSView <NSPathControlDelegate, NSTextFieldDelegate, NSNavFileBrowser> {

	NSNavDataSource* _dataSource;
	NSSavePanel* _savePanel;
	NSView* _fileListViewContainer;
	NSBrowser* _browser;
	NSOutlineView* _outline;
	NSIconView* _iconView;
	NSOutlineView* _sidebarOutlineView;
	NSNavSidebarController* _sidebarController;
	NSSegmentedControl* _fileListModeControl;
	NSControl* _historyControl;
	NSNavNodePopUpButton* _pathComponentPicker;
	NSNavSplitViewController* _splitViewController;
	NSMenu* _iconViewMenu;
	NSSearchField* _searchField;
	NSTextField* _searchResultsCountField;
	NSProgressIndicator* _searchProgressIndicator;
	NSNavScopeView* _searchScopeView;
	NSPathControl* _pathLocationControl;
	NSRuleEditor* _sliceRuleEditor;
	NSView* _currentModeView;
	NSNavAdvancedSearchController* _advSearchController;
	NSSegmentedCell* _unused;
	NSNavVirtualNode* _mediaBrowserNode;
	ILMediaBrowserView* _mediaBrowserView;
	unsigned _isSaveMode : 1;
	unsigned _sidebarLoaded : 1;
	unsigned _userChangedDirectory : 1;
	unsigned _inConfigureForDirectory : 1;
	unsigned _resolvingNodeFromPath : 1;
	unsigned _restoredSavedSettings : 1;
	unsigned _showingSearchParts : 1;
	unsigned _fileListModeControlSetup : 1;
	unsigned _reserved : 24;
	NSNavViewController* _navViewController;
	NSNavSharedServerController* _sharedServerBannerController;
	NSNavBannerView* _sharedFolderBannerView;
	NSNavNode* _sharedFolderNode;
	NSString* _filenameToSelectWhenDoneResolving;
	id<NSNavFileBrowserDelegate> _delegate;
	NSNavNewFolderController* _newFolderController;
	NSNavFilepathInputController* _filepathInputController;
	unsigned long long _mediaBrowserShownTypes;

}

@property (nonatomic,retain) NSNavNode * rootNode; 
@property (nonatomic,retain) NSNavNode * currentDirectoryNode; 
@property (readonly) CGSize minimumViewSize; 
@property (nonatomic,readonly) NSBrowser * browser;                                //@synthesize browser=_browser - In the implementation block
@property (nonatomic,readonly) NSOutlineView * outlineView;                        //@synthesize outline=_outline - In the implementation block
@property (nonatomic,readonly) NSIconView * iconView;                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) ILMediaBrowserView * mediaBrowserView;              //@synthesize mediaBrowserView=_mediaBrowserView - In the implementation block
@property (nonatomic,readonly) NSNavVirtualNode * mediaBrowserNode;                //@synthesize mediaBrowserNode=_mediaBrowserNode - In the implementation block
@property (assign,nonatomic) int lastFileListMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char treatsFilePackagesAsDirectories; 
@property (assign) char showsHiddenFiles; 
@property (assign) char resolvesAliases; 
@property (assign) char canClickDisabledFiles; 
@property (assign) char allowsExpandingMultipleDirectories; 
@property (retain) NSURL * directoryURL; 
@property (retain) NSURL * rootDirectoryURL; 
@property (copy) NSArray * selectedURLs; 
@property (assign) int fileListMode; 
@property (assign) id<NSNavFileBrowserDelegate> delegate; 
@property (assign) char hidesSharedSection; 
@property (assign) char allowsMultipleSelection; 
@property (assign) char showsNewDocumentButton; 
@property (assign) char downloadsUbiquitousContents; 
+(id)navView;
-(void)setDelegate:(id<NSNavFileBrowserDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(NSURL *)directoryURL;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NSNavFileBrowserDelegate>)delegate;
-(char)performKeyEquivalent:(id)arg1 ;
-(char)worksWhenModal;
-(char)preservesContentDuringLiveResize;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(NSBrowser *)browser;
-(char)_saveMode;
-(NSIconView *)iconView;
-(void)awakeFromNib;
-(id)_dataSource;
-(id)savePanel;
-(void)setTreatsFilePackagesAsDirectories:(char)arg1 ;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(NSNavNode *)rootNode;
-(id)selectedNodesIncludingDirectories;
-(NSNavNode *)currentDirectoryNode;
-(void)setCurrentDirectoryNode:(NSNavNode *)arg1 ;
-(void)setRootNode:(NSNavNode *)arg1 ;
-(id)selectedNodes;
-(void)windowOrderedOut;
-(void)reloadDisplayState;
-(id)visualRootNode;
-(char)canGoIntoSelectedDirectory;
-(int)fileListMode;
-(NSOutlineView *)outlineView;
-(void)saveQuery;
-(void)handleRootChangedFromNode:(id)arg1 toNode:(id)arg2 andNotify:(char)arg3 ;
-(Class)navNodeClass;
-(void)_prepareForReloadChildrenForNode:(id)arg1 ;
-(void)handleCurrentDirectoryNodeChanged;
-(void)_handleCurrentBrowsingNodePathChanged;
-(void)showNodeInCurrentDirectoryWithFilename:(id)arg1 selectIfEnabled:(char)arg2 ;
-(void)showNodeInCurrentDirectoryWithDisplayNamePrefix:(id)arg1 selectIfEnabled:(char)arg2 ;
-(void)setLastFileListMode:(int)arg1 ;
-(void)_handleFileListModeChanged;
-(char)canChooseURL:(id)arg1 ;
-(char)showAsPackageForURL:(id)arg1 ;
-(char)isFileListOrderedAscending;
-(id)fileListOrderedByFileProperty;
-(char)isFileListOrderedCaseSensitive;
-(void)reloadRootNode;
-(void)_handleFileListDidReloadChildrenForNode:(id)arg1 ;
-(char)treatsDirectoryAliasesAsDirectories;
-(char)treatsFilePackagesAsDirectories;
-(char)shouldEnableURL:(id)arg1 ;
-(char)canClickDisabledFiles;
-(char)calculatesAllSizes;
-(ILMediaBrowserView *)mediaBrowserView;
-(NSNavVirtualNode *)mediaBrowserNode;
-(void)_handleSelectionChanged;
-(void)_handleSelectionConfirmed;
-(void)_handleFauxDisabledNodeClicked:(id)arg1 ;
-(void)setFileListMode:(int)arg1 ;
-(char)showsHiddenFiles;
-(id)querySearchUTIs;
-(int)lastFileListMode;
-(void)setNavNodeClass:(Class)arg1 ;
-(void)setRootPath:(id)arg1 ;
-(void)setFileListOrderedByFileProperty:(id)arg1 ;
-(void)setIsFileListOrderedAscending:(char)arg1 ;
-(void)setIsFileListOrderedCaseSensitive:(char)arg1 ;
-(char)resolvesAliases;
-(void)setResolvesAliases:(char)arg1 ;
-(void)setShowsHiddenFiles:(char)arg1 ;
-(void)setCanClickDisabledFiles:(char)arg1 ;
-(void)setTreatsDirectoryAliasesAsDirectories:(char)arg1 ;
-(void)setCalculatesAllSizes:(char)arg1 ;
-(char)allowsExpandingMultipleDirectories;
-(void)setAllowsExpandingMultipleDirectories:(char)arg1 ;
-(void)goUpDirectory;
-(char)handleGoIntoSelectedDirectory;
-(char)showOrHidePreviewPanel;
-(char)hidePreviewPanelIfNecessary;
-(id)currentResolvedDirectoryNode;
-(id)sidebarController;
-(void)loadSidebar;
-(void)_directoryPopUpButtonClick:(id)arg1 ;
-(id)lazyGetChildrenForNodeWithIdentifier:(id)arg1 ;
-(void)windowOrderedIn;
-(void)_openSyncPropertyChanged:(id)arg1 ;
-(void)clockPreferencesChanged:(id)arg1 ;
-(void)_setRootNodeAsDocuments;
-(void)_changeHistory:(id)arg1 ;
-(id)_setupSegmentSwitchForControl:(id)arg1 firstImage:(id)arg2 secondImage:(id)arg3 thirdImage:(id)arg4 action:(SEL)arg5 showDropDown:(char)arg6 ;
-(void)_setAccessibilityStringsForNormalFileListModeControl;
-(void)_positionAndResizeSearchParts;
-(void)_searchFieldAction:(id)arg1 ;
-(void)_searchFieldCancelAction:(id)arg1 ;
-(void)_slicePlusButtonClick:(id)arg1 ;
-(void)_saveQueryButtonClick:(id)arg1 ;
-(void)_editQueryButtonClick:(id)arg1 ;
-(char)_iLifeMediaBrowserFrameworkInstalled;
-(char)_ensureMediaBrowserViewLoaded;
-(void)_configurePathComponentPicker;
-(void)_setupHistoryControl;
-(void)_setupNormalFileListModeControl;
-(void)_setupSearchParts;
-(void)_pathLocationControlDoubleClick:(id)arg1 ;
-(id)_templateImageWithName:(id)arg1 ;
-(char)shouldShowMediaBrowser;
-(id)_mediaBrowserIcon;
-(id)_nodeForBrowserType:(unsigned long long)arg1 ;
-(void)_loadMediaBrowserNodeIfRequired;
-(void)_loadSavedLayout;
-(void)_configureForFileListMode:(int)arg1 ;
-(id)_advancedQueryStringPortion;
-(void)tileVertically;
-(id)_activeFileListViewForResizing;
-(void)_loadAdvSearchController;
-(void)_setupRuleEditorForScopeView;
-(char)_isAppSmartFolderNode:(id)arg1 ;
-(id)_queryViewOptions;
-(void)_saveAppSmartFolderQueryNode:(id)arg1 ;
-(id)_duplicateItemReason;
-(char)_isAppSmartFolderNameUsed:(id)arg1 ;
-(id)_topContainerView;
-(id)_bottomContainerView;
-(void)_stopObservingRootNode:(id)arg1 ;
-(void)_setUserHasChangedDirectory:(char)arg1 ;
-(char)_canAsyncChangeRootNode;
-(void)_showNodeWithFilename:(id)arg1 selectIfEnabled:(char)arg2 ;
-(void)_delaySelectFilenameIfNecessary;
-(void)_doneResolvingNode:(id)arg1 setAsRoot:(char)arg2 ;
-(void)disableHistoryAndDoWork:(/*^block*/id)arg1 ;
-(void)_delegateConfigureForGotoWithFilename:(id)arg1 ;
-(char)setRootPath:(id)arg1 logonOK:(char)arg2 ;
-(char)setSelectionFromDroppedNode:(id)arg1 selectionHelper:(id)arg2 ;
-(id)_historyControlCell;
-(void)_setSearchResultsCountTo:(int)arg1 ;
-(void)_updateSearchResultsCount:(char)arg1 ;
-(void)_updatePathLocationControl;
-(void)_showQueryProgress;
-(void)_hideQueryProgress;
-(id)_fileListModeControlCell;
-(void)_configureFileListModeControlForMode:(int)arg1 ;
-(void)_configureSharedServerBannerViewAndTile:(char)arg1 ;
-(void)_configureSearching;
-(char)_isSharingEnabled;
-(void)_changeMediaBrowserTypeTo:(unsigned long long)arg1 ;
-(void)_configureHistoryControl;
-(void)_delegateDidChangeDirectory;
-(void)_startObservingRootNode:(id)arg1 ;
-(void)_commonHandleRootOrCurrentDirectoryChanged;
-(void)_notifyRootChanged;
-(void)_notifyCurrentDirectoryChanged;
-(void)_notifyBothRootAndCurrentDirectoryChanged;
-(void)_delegateFileListModeChanged;
-(void)_setPathLocationEmptyTitle:(id)arg1 ;
-(void)_delegateSelectionDidChange;
-(char)_updatePreviewPanelIfRequired;
-(void)_delegatePerformOpenAction;
-(void)_delegateClickedOnDisabledURL:(id)arg1 ;
-(id)_recentPlacesNode;
-(char)goBackwardInHistoryIfPossible;
-(void)_changeIconViewTextSize:(id)arg1 ;
-(void)_changeIconViewIconSize:(id)arg1 ;
-(void)_changeIconViewTextPosition:(id)arg1 ;
-(void)_updateMenuItem:(id)arg1 ;
-(void)_saveIconViewTextSize:(double)arg1 ;
-(void)_saveIconViewSize:(double)arg1 ;
-(void)_saveIconViewImagePosition:(long long)arg1 ;
-(char)setRootURL:(id)arg1 logonOK:(char)arg2 ;
-(Class)_QLPreviewPanelClass;
-(id)selectedPreviewNodes;
-(char)_logonOK;
-(char)setCurrentDirectoryURL:(id)arg1 logonOK:(char)arg2 ;
-(char)goForwardInHistoryIfPossible;
-(char)setCurrentDirectoryPath:(id)arg1 logonOK:(char)arg2 ;
-(id)_runCreateNewFolderDialog:(id)arg1 ;
-(void)setHidesSharedSection:(char)arg1 ;
-(char)hidesSharedSection;
-(char)_canShowGoto;
-(void)gotoSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)performGotoForPath:(id)arg1 ;
-(void)_handleGotoFinishedWithResult:(long long)arg1 ;
-(char)pathControl:(id)arg1 shouldDragPathComponentCell:(id)arg2 withPasteboard:(id)arg3 ;
-(double)fauxToolbarHeightForWindow:(id)arg1 appCentric:(char)arg2 hasMessageView:(char)arg3 runningAsAService:(char)arg4 verticalSpaceAbove:(double*)arg5 ;
-(void)setSavePanel:(id)arg1 ;
-(void)makeNewFolderForSavePanel:(id)arg1 ;
-(char)canCreateNewFolder;
-(void)refreshContents;
-(char)sidebarContainsURL:(id)arg1 ;
-(void)selectFirstKeyView;
-(id)documentsDirectoryURL;
-(id)selectedSeamlessOpenerPreviewItems;
-(char)showGotoWithInitialFilename:(id)arg1 ;
-(void)setMediaBrowserShownTypes:(unsigned long long)arg1 ;
-(void)configureAndLoadLayout;
-(void)_configureForShowingInPanel;
-(NSURL *)rootDirectoryURL;
-(void)setRootDirectoryURL:(NSURL *)arg1 ;
-(NSArray *)selectedURLs;
-(void)setSelectedURLs:(NSArray *)arg1 ;
-(CGSize)minimumViewSize;
-(char)showsNewDocumentButton;
-(void)setShowsNewDocumentButton:(char)arg1 ;
-(char)downloadsUbiquitousContents;
-(void)setDownloadsUbiquitousContents:(char)arg1 ;
-(id)currentModeView;
-(void)setSaveMode:(char)arg1 ;
-(void)queryStringChangedForSearchController:(id)arg1 ;
-(void)ruleEditorSizeChangedForSearchController:(id)arg1 ;
-(char)searchController:(id)arg1 queryShouldSaveWithName:(id)arg2 forAllApps:(char)arg3 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(id)_iconView;
-(id)_customizedPrefKey:(id)arg1 ;
-(char)setSelectionFromPasteboard:(id)arg1 selectionHelper:(id)arg2 ;
-(char)_dropNode:(id)arg1 ;
-(id)selectedResolvedNodes;
-(void)_changeFileListMode:(id)arg1 ;
-(char)searchField:(id)arg1 shouldChangeCancelButtonVisibility:(char)arg2 ;
-(char)isEnabledNode:(id)arg1 ;
-(char)acceptsPreviewPanelControl:(id)arg1 ;
-(void)beginPreviewPanelControl:(id)arg1 ;
-(void)endPreviewPanelControl:(id)arg1 ;
-(unsigned long long)numberOfPreviewItemsInPreviewPanel:(id)arg1 ;
-(id)previewPanel:(id)arg1 previewItemAtIndex:(unsigned long long)arg2 ;
-(CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2 ;
-(id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(char)previewPanel:(id)arg1 handleEvent:(id)arg2 ;
-(char)previewPanel:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3 ;
-(char)previewPanel:(id)arg1 shouldShowOpenButtonForItem:(id)arg2 ;
@end

