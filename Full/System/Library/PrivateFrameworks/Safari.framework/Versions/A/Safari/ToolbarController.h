/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/RolloverTrackingButtonDelegate.h>
#import <Safari/NSToolbarDelegate.h>

@class BrowserWindowControllerMac, NSWindow, NSSegmentedControl, ButtonPlus, TopSitesButton, UnifiedField, NSView, ReaderButton, ToolbarDownloadsButton, OneStepBookmarkingButton, VisualTabPickerToolbarButton, BrowserToolbarItem, NSToolbarItem, NSString;

@interface ToolbarController : NSObject <RolloverTrackingButtonDelegate, NSToolbarDelegate> {

	BrowserWindowControllerMac* _browserWindowController;
	NSWindow* _toolbarWindow;
	NSWindow* nibWindow;
	NSSegmentedControl* backForwardSegmentedControl;
	NSSegmentedControl* backForwardCustomizeSegmentedControl;
	NSSegmentedControl* textSizeSegmentedControl;
	NSSegmentedControl* textSizeCustomizeSegmentedControl;
	ButtonPlus* openInDashboardButton;
	ButtonPlus* addBookmarkButton;
	ButtonPlus* addBookmarkCustomizeButton;
	ButtonPlus* autoFillButton;
	ButtonPlus* homeButton;
	TopSitesButton* topSitesButton;
	UnifiedField* unifiedField;
	NSView* unifiedFieldContainer;
	ButtonPlus* printButton;
	UnifiedField* unifiedCustomizeField;
	NSView* unifiedFieldCustomizeContainer;
	ReaderButton* readerCustomizeButton;
	ButtonPlus* bookmarksButton;
	ButtonPlus* historyButton;
	ButtonPlus* mailPageButton;
	ToolbarDownloadsButton* showDownloadsButton;
	ButtonPlus* showWebInspectorButton;
	ButtonPlus* bookmarksBarButton;
	ButtonPlus* newTabButton;
	ReaderButton* readerButton;
	ButtonPlus* cloudTabsButton;
	ButtonPlus* shareButton;
	OneStepBookmarkingButton* oneStepBookmarkButton;
	VisualTabPickerToolbarButton* tabPickerButton;
	BrowserToolbarItem* _backForwardItem;
	BrowserToolbarItem* _createWebClipItem;
	BrowserToolbarItem* _autoFillItem;
	BrowserToolbarItem* _topSitesItem;
	BrowserToolbarItem* _homeItem;
	BrowserToolbarItem* _unifiedFieldContainerItem;
	BrowserToolbarItem* _textSizeItem;
	BrowserToolbarItem* _printItem;
	BrowserToolbarItem* _sidebarItem;
	BrowserToolbarItem* _historyItem;
	BrowserToolbarItem* _mailPageItem;
	BrowserToolbarItem* _showDownloadsItem;
	BrowserToolbarItem* _showWebInspectorItem;
	BrowserToolbarItem* _bookmarksBarItem;
	BrowserToolbarItem* _cloudTabsItem;
	BrowserToolbarItem* _shareItem;
	BrowserToolbarItem* _backForwardCustomizeItem;
	BrowserToolbarItem* _unifiedFieldContainerCustomizeItem;
	BrowserToolbarItem* _textSizeCustomizeItem;
	char _validatingExtensionToolbarItemsSoon;
	char _windowDidClose;
	char _addCloudTabsButtonIfAppropriateHasBeenCalled;
	NSToolbarItem* _tabPickerItem;

}

@property (nonatomic,readonly) NSToolbarItem * tabPickerItem;                                            //@synthesize tabPickerItem=_tabPickerItem - In the implementation block
@property (nonatomic,__weak,readonly) ButtonPlus * tabPickerButton; 
@property (getter=isTabPickerButtonVisible,nonatomic,readonly) char tabPickerButtonVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)insertShareButtonIfNeeded;
+(void)insertTabPickerButtonIfNeeded;
+(void)removeDuplicateShareButtonsIfNeeded;
+(char)isToolbarBlurringEnabled;
-(void)_parentalControlsDidChange;
-(id)initWithBrowserWindowController:(id)arg1 ;
-(id)shareButton;
-(void)validateExtensionToolbarItemsSoon;
-(id)unifiedField;
-(char)isBackForwardVisible;
-(id)backForwardSegmentedControl;
-(id)cloudTabsButton;
-(void)_extensionWasDisabled:(id)arg1 ;
-(void)_extensionWasEnabled:(id)arg1 ;
-(void)windowWillClose;
-(id)showDownloadsButton;
-(char)toolbarContainsUnifiedField;
-(id)sidebarButton;
-(void)disconnectFromBrowserWindowController;
-(id)toolbarWindow;
-(char)isSidebarButtonVisible;
-(ButtonPlus *)tabPickerButton;
-(void)_downloadsDidChange:(id)arg1 ;
-(void)rolloverTrackingButton:(id)arg1 didMouseDown:(id)arg2 ;
-(void)rolloverTrackingButton:(id)arg1 mouseDidEnterOrExit:(char)arg2 ;
-(void)_migrateOldSafariToolbarConfiguration;
-(void)_updateToolbarSettings;
-(void)_downloadDidStart:(id)arg1 ;
-(void)_downloadsTotalProgressDidChange:(id)arg1 ;
-(void)_zoomTextOnlyDidChange:(id)arg1 ;
-(void)_removeTemporaryDownloadsButtonIfAppropriate;
-(void)validateExtensionToolbarItems;
-(id)_toolbarItemForShare:(char)arg1 ;
-(id)_toolbarItemForSidebar:(char)arg1 ;
-(id)_toolbarItemForBackForward:(char)arg1 ;
-(char)_cloudTabsButtonIsInToolbarConfiguration;
-(id)_toolbarItemForCloudTabs:(char)arg1 ;
-(long long)_bestIndexForCloudTabsButton;
-(char)_canShowToolbarItemForCloudTabs;
-(void)_removeCloudTabsButtonIfAppropriate;
-(void)_addTemporaryDownloadsButtonIfAppropriate;
-(id)_toolbarItemForShowDownloadsWindow:(char)arg1 ;
-(id)_toolbarItemForTopSites:(char)arg1 ;
-(id)_toolbarItemForHome:(char)arg1 ;
-(id)_toolbarItemForAutoFill:(char)arg1 ;
-(id)_toolbarItemForTextSize:(char)arg1 ;
-(id)_toolbarItemForUnifiedFieldContainer:(char)arg1 ;
-(id)_toolbarItemForPrint:(char)arg1 ;
-(id)_toolbarItemForWebClip:(char)arg1 ;
-(id)_toolbarItemForHistory:(char)arg1 ;
-(id)_toolbarItemForMailWebPage:(char)arg1 ;
-(id)_toolbarItemForShowWebInspector:(char)arg1 ;
-(id)_toolbarItemForBookmarksBar:(char)arg1 ;
-(id)_toolbarItemForTabPicker:(char)arg1 ;
-(void)_prepareBackForwardSegmentedControl:(id)arg1 ;
-(void)_prepareTextSizeSegmentedControl:(id)arg1 ;
-(void)_updateZoomTextLabel;
-(id)_zoomTextLabel;
-(char)isTabPickerButtonVisible;
-(void)_addCloudTabsButtonIfAppropriate;
-(id)readerButton;
-(id)oneStepAddBookmarkButton;
-(NSToolbarItem *)tabPickerItem;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(void)toolbarDidRemoveItem:(id)arg1 ;
-(void)toolbarDidReorderItem:(id)arg1 ;
@end

