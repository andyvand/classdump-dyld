/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <iLifeMediaBrowser/NSOutlineViewDataSource.h>
#import <iLifeMediaBrowser/NSOutlineViewDelegate.h>
#import <iLifeMediaBrowser/NSTableViewDataSource.h>
#import <iLifeMediaBrowser/NSTableViewDelegate.h>
#import <iLifeMediaBrowser/NSMatrixDelegate.h>

@class ILMediaGroupsTreeController, ILMediaObjectsArrayController, NSScrollView, NSOutlineView, NSPopUpButton, NSTableView, ILMediaBrowserImageView, NSView, NSTextField, ILMediaBrowserStarRatingControl, ILMediaBrowserDividerView, NSArray, NSMutableDictionary, NSValueTransformer, ILMediaGroup, NSMenu, ILMediaBrowserPreviewView, NSColor, NSFont, NSImage, ILMediaBrowserObjectSearchAndSelectionState, NSString;

@interface ILMediaObjectsViewController : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate, NSTableViewDataSource, NSTableViewDelegate, NSMatrixDelegate> {

	ILMediaGroupsTreeController* _mediaGroupsTreeController;
	ILMediaObjectsArrayController* _mediaObjectsArrayController;
	NSScrollView* _mediaGroupsScrollView;
	NSOutlineView* _mediaGroupsOutlineView;
	NSPopUpButton* _mediaGroupsPopUpButton;
	NSScrollView* _mediaObjectsScrollView;
	NSTableView* _mediaObjectsTableView;
	ILMediaBrowserImageView* _mediaObjectsImageView;
	NSTableView* _playlistsTableView;
	NSTableView* _photoAlbumsTableView;
	NSView* _photoEventsView;
	NSView* _facesView;
	NSTextField* _messageTextField;
	ILMediaBrowserStarRatingControl* _ratingControl;
	ILMediaBrowserDividerView* _dividerView;
	NSView* _clipboardView;
	NSArray* _currentColumnDicts;
	NSMutableDictionary* _columnVisibilityDict;
	NSValueTransformer* _groupObjectCountTransformer;
	char _usingIK;
	char _inFrameChange;
	char _iMovieProjectsIconMode;
	char _showGroupsListInPopUpMode;
	char _allowsUserAddedCustomFolders;
	char _singleWindowMode;
	id _clickedItem;
	ILMediaGroup* _collectionViewDisplayedGroup;
	long long _selectedCollectionViewGroupIndex;
	id _lastSelection;
	NSMenu* _audioSearchMenu;
	NSMenu* _imageSearchMenu;
	NSMenu* _movieSearchMenu;
	ILMediaBrowserPreviewView* _previewView;
	NSColor* _backgroundColor;
	NSColor* _itemCountTextColor;
	NSFont* _tableTextFont;
	NSColor* _tableTextColor;
	NSColor* _tableGridColor;
	NSColor* _tableSelectionColor;
	NSArray* _tableAlternatingRowsColors;
	NSColor* _outlineTriangleColor;
	NSImage* _playButtonImage;
	NSImage* _playButtonHighlightedImage;
	NSImage* _stopButtonImage;
	NSImage* _stopButtonHighlightedImage;
	NSImage* _audioPlayingImage;
	id _delegate;
	char _isShowingClipboard;
	unsigned long long _clipboardSavedBrowserType;
	ILMediaBrowserObjectSearchAndSelectionState* _searchAndSelectionState;
	unsigned long long _audioMediaDisplayMode;
	unsigned long long _imageMediaDisplayMode;
	unsigned long long _videoMediaDisplayMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)selectMediaObjectIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(id)mediaGroupsTreeController;
-(id)mediaObjectsArrayController;
-(id)mediaGroupsScrollView;
-(id)mediaGroupsPopUpButton;
-(id)mediaObjectsScrollView;
-(char)isPreviewing;
-(id)clickedItem;
-(void)selectMediaGroup:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)selectMediaGroupIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(char)currentMediaObjectViewDisplaysCollections;
-(id)currentMediaObjectCollectionView;
-(id)collectionViewDisplayedGroup;
-(void)selectMediaObject:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)setMediaDisplayMode:(unsigned long long)arg1 forBrowserType:(unsigned long long)arg2 ;
-(unsigned long long)mediaDisplayModeForBrowserType:(unsigned long long)arg1 ;
-(id)mediaGroupsOutlineView;
-(id)mediaObjectsImageView;
-(id)photoEventsView;
-(void)setAllowsUserAddedCustomFolders:(char)arg1 ;
-(char)allowsUserAddedCustomFolders;
-(void)setSingleWindowModeEnabled:(char)arg1 ;
-(char)isSingleWindowModeEnabled;
-(char)isShowingPreviewView;
-(id)itemCountTextColor;
-(id)playButtonImage;
-(id)playButtonHighlightedImage;
-(id)previewableObjects;
-(id)stopButtonImage;
-(id)stopButtonHighlightedImage;
-(id)currentSearchMenu;
-(void)limitSearch:(id)arg1 ;
-(id)ratingControl;
-(void)addAppDefinedFolder:(id)arg1 forBrowser:(unsigned long long)arg2 ;
-(void)setTableTextFont:(id)arg1 ;
-(id)tableTextFont;
-(void)setTableTextColor:(id)arg1 ;
-(id)tableTextColor;
-(void)setTableGridColor:(id)arg1 ;
-(id)tableGridColor;
-(void)setTableAlternatingRowColors:(id)arg1 ;
-(id)tableAlternatingRowsColors;
-(void)setTableSelectionColor:(id)arg1 ;
-(id)tableSelectionColor;
-(void)setOutlineTriangleColor:(id)arg1 ;
-(id)outlineTriangleColor;
-(void)setItemCountTextColor:(id)arg1 ;
-(void)setPlayButtonImage:(id)arg1 ;
-(void)setPlayButtonHighlightedImage:(id)arg1 ;
-(void)setStopButtonImage:(id)arg1 ;
-(void)setStopButtonHighlightedImage:(id)arg1 ;
-(void)setAudioPlayingImage:(id)arg1 ;
-(id)audioPlayingImage;
-(char)outlineView:(id)arg1 removeItems:(id)arg2 ;
-(void)outlineViewDidBecomeFirstResponder:(id)arg1 ;
-(id)contextMenuForMediaGroup:(id)arg1 ;
-(id)outlineView:(id)arg1 uniqueValueForObservedObject:(id)arg2 ;
-(id)contextMenuForMediaObject:(id)arg1 ;
-(id)_truncateString:(id)arg1 toWidth:(double)arg2 ;
-(char)writeMediaObjects:(id)arg1 toPasteboard:(id)arg2 ;
-(void)contentFrameChanged:(id)arg1 ;
-(void)refreshLoadingDisplay:(id)arg1 ;
-(void)itemDoubleClicked:(id)arg1 ;
-(id)mediaObjectsTableView;
-(void)configureCollectionView:(id)arg1 ;
-(void)updateMediaObjectsViewToSelectedGroups:(id)arg1 ;
-(void)storeCollectionViewDisplayedGroup;
-(void)displayMediaSourcesForBrowserType:(unsigned long long)arg1 ;
-(void)storeSortDescriptors:(id)arg1 forTableAutosaveName:(id)arg2 ;
-(void)syncTreeNodeSelections;
-(void)groupSelectionChanged:(id)arg1 ;
-(void)_updateGroupsPopUp;
-(void)_popUpSelectionChanged:(id)arg1 ;
-(char)isInClipboardMode;
-(void)hideClipboard;
-(void)hidePreviewWindow;
-(void)loadSavedCustomFolderPathsForBrowser:(unsigned long long)arg1 ;
-(char)showDisplayMessageForSelectedGroupNodes:(id)arg1 ;
-(id)findLastCollectionViewDisplayedGroupInGroup:(id)arg1 ;
-(id)collectionViewRepresentedObjects;
-(void)updateItemCountString;
-(void)setupMediaObjectsTableView;
-(id)facesView;
-(char)selectedGroupsContainPodcasts;
-(char)selectedGroupsContainRatings;
-(id)_tableColumnFromDictionary:(id)arg1 ;
-(void)loadSavedSortDescriptorsForTableAutosaveName:(id)arg1 ;
-(void)clearLastCollectionViewDisplayedGroup;
-(void)showPreviewWindow;
-(void)previewMediaObject:(id)arg1 ;
-(void)_showAlertForMissingAudioFile:(id)arg1 ;
-(void)_showAlertForGarageBandProject:(id)arg1 ;
-(id)recursiveAllChildNodesForNode:(id)arg1 ;
-(void)_addGroupToPopUp:(id)arg1 indentationLevel:(long long)arg2 ;
-(id)groupsWithUnfilteredObjectsInArray:(id)arg1 ;
-(id)_unicodeStringToAppleScript:(id)arg1 ;
-(void)showClipboard;
-(void)extendContextMenu:(id)arg1 forMediaObject:(id)arg2 ;
-(void)contextMenuChangeView:(id)arg1 ;
-(void)contextMenuToggleColumn:(id)arg1 ;
-(id)mediaBrowserViewDelegateRespondingToSelector:(SEL)arg1 ;
-(void)contextMenuOpen:(id)arg1 ;
-(void)contextMenuRemoveCustomFolder:(id)arg1 ;
-(void)addCustomFolderPaths:(id)arg1 forBrowser:(unsigned long long)arg2 ;
-(void)removeCustomFolderPaths:(id)arg1 forBrowser:(unsigned long long)arg2 ;
-(void)ratingSearch:(id)arg1 ;
-(id)usageCountBadgeInfoForMediaObject:(id)arg1 thumbnailRect:(CGRect)arg2 ;
-(id)playlistsTableView;
-(id)photoAlbumsTableView;
-(void)displayMessage:(id)arg1 ;
-(void)displayAttributedMessage:(id)arg1 ;
-(void)storeObjectSearchAndSelectionState;
-(void)restoreObjectSearchAndSelectionState;
-(void)togglePreview;
-(char)canPreview;
-(void)notifyCoalescedWithName:(id)arg1 object:(id)arg2 ;
-(void)toggleClipboard;
-(void)contextMenuReveal:(id)arg1 ;
-(void)contextMenuAddFolders:(id)arg1 ;
-(void)previewEnterKeyAction:(id)arg1 ;
-(id)updateBadgeInfo:(id)arg1 forMediaObject:(id)arg2 thumbnailRect:(CGRect)arg3 ;
-(char)isCustomFolder:(id)arg1 forBrowser:(unsigned long long)arg2 ;
-(void)matrixSelectionDidChange:(id)arg1 ;
-(char)matrix:(id)arg1 writeCells:(id)arg2 toPasteboard:(id)arg3 ;
-(id)matrix:(id)arg1 toolTipForCell:(id)arg2 ;
-(char)writeMediaGroups:(id)arg1 toPasteboard:(id)arg2 ;
-(char)imageBrowser:(id)arg1 shouldSelectCellAtIndex:(unsigned long long)arg2 ;
-(id)imageBrowser:(id)arg1 attributedStringValueForMediaObject:(id)arg2 ;
-(void)imageBrowser:(id)arg1 enterKeyAction:(id)arg2 ;
-(id)tempMediaGroupForGroupNode:(id)arg1 ;
-(id)dividerView;
-(void)startPreview;
-(void)stopPreview;
-(id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsInImageBrowser:(id)arg1 ;
-(unsigned long long)imageBrowser:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2 ;
-(void)imageBrowserSelectionDidChange:(id)arg1 ;
-(void)imageBrowser:(id)arg1 removeItemsAtIndexes:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)delegate;
-(char)validateMenuItem:(id)arg1 ;
-(id)backgroundColor;
-(void)setVerticalMotionCanBeginDrag:(char)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(CGRect*)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(CGPoint)arg6 ;
-(char)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)windowWillClose:(id)arg1 ;
-(void)windowWillMiniaturize:(id)arg1 ;
-(void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4 ;
-(char)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(void)outlineViewItemDidExpand:(id)arg1 ;
-(void)outlineViewItemDidCollapse:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4 ;
-(char)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 ;
-(void)setFilterString:(id)arg1 ;
-(char)tableView:(id)arg1 writeRows:(id)arg2 toPasteboard:(id)arg3 ;
-(void)refresh;
-(id)messageView:(id)arg1 ;
@end

