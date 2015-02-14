/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <Safari/SidebarSearchFieldDelegate.h>
#import <Safari/SidebarScrollViewAccessibilityDelegate.h>
#import <Safari/SidebarContentViewController.h>
#import <Safari/NSMenuDelegate.h>
#import <Safari/NSOutlineViewDataSource.h>
#import <Safari/BookmarksOutlineViewDelegate.h>
#import <Safari/BookmarksSidebarTableCellViewDelegate.h>
#import <Safari/CustomKeyViewLoop.h>
#import <Safari/SidebarContentFilterDelegate.h>
#import <Safari/SidebarContentFiltering.h>
#import <Safari/SidebarSearchFieldViewDelegate.h>

@class SidebarScrollView, NSButton, BookmarksSearcher, NSMenu, BookmarksOutlineView, NSArray, NSString, NSSearchField;

@interface BookmarksSidebarViewController : NSViewController <SidebarSearchFieldDelegate, SidebarScrollViewAccessibilityDelegate, SidebarContentViewController, NSMenuDelegate, NSOutlineViewDataSource, BookmarksOutlineViewDelegate, BookmarksSidebarTableCellViewDelegate, CustomKeyViewLoop, SidebarContentFilterDelegate, SidebarContentFiltering, SidebarSearchFieldViewDelegate> {

	SidebarScrollView* _scrollView;
	NSButton* _editButton;
	BookmarksSearcher* _searcher;
	NSMenu* _contextMenu;
	char _deselectAfterRowClickIsPending;
	BookmarksOutlineView* _outlineView;
	NSArray* _draggedBookmarks;

}

@property (assign,nonatomic,__weak) BookmarksOutlineView * outlineView;              //@synthesize outlineView=_outlineView - In the implementation block
@property (nonatomic,retain) NSArray * draggedBookmarks;                             //@synthesize draggedBookmarks=_draggedBookmarks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSearchField * searchField; 
@property (nonatomic,readonly) NSArray * allFilteringControls; 
-(NSSearchField *)searchField;
-(void)sidebarContentFilterDidCompleteFilterOperation:(id)arg1 ;
-(id)sideBarScrollViewAccessibilityChildren:(id)arg1 ;
-(id)safari_keyViews;
-(NSArray *)allFilteringControls;
-(void)sidebarSearchFieldViewSearchStringDidChange:(id)arg1 ;
-(void)_bookmarksWereRemoved:(id)arg1 ;
-(void)outlineView:(id)arg1 didPressAndHoldToEditRowAtIndex:(long long)arg2 ;
-(void)didPressRemoveButtonForTableCellView:(id)arg1 ;
-(void)didPressTableCellView:(id)arg1 ;
-(void)iconChanged:(id)arg1 ;
-(void)removedAllIcons:(id)arg1 ;
-(void)_bookmarksWereAdded:(id)arg1 ;
-(void)_bookmarksDidChange:(id)arg1 ;
-(void)_bookmarksWereReloaded:(id)arg1 ;
-(void)_doubleClickAction:(id)arg1 ;
-(void)sidebarWillClose:(id)arg1 ;
-(void)cancelDeselectAfterRowClicked;
-(void)activateItem:(id)arg1 ;
-(void)deselectAfterRowClicked;
-(void)_openBookmarkAndGiveFocusToWebContent:(id)arg1 ;
-(char)_shouldDisplaySearchResults;
-(id)_bookmarkAtIndex:(unsigned long long)arg1 forParentBookmark:(id)arg2 ;
-(id)_topLevelBookmark;
-(unsigned long long)_numberOfChildrenForBookmark:(id)arg1 ;
-(long long)_rowForBookmark:(id)arg1 ;
-(NSArray *)draggedBookmarks;
-(unsigned long long)_indexInParent:(id)arg1 forDisplayedBookmarkAtIndex:(unsigned long long)arg2 ;
-(char)_canEditBookmark:(id)arg1 ;
-(void)setDraggedBookmarks:(NSArray *)arg1 ;
-(id)_contextMenuBuilderForRow:(long long)arg1 ;
-(char)_canCutSelectedBookmarks;
-(char)_canCopySelectedBookmarks;
-(char)_canDeleteSelectedBookmarks;
-(char)_canPasteBookmarks;
-(void)_copySelectedBookmarks;
-(void)_pasteBookmarks;
-(void)_deleteSelectedBookmarks;
-(id)_selectedBookmarks;
-(char)_canDeleteBookmark:(id)arg1 ;
-(void)_copyBookmarks:(id)arg1 ;
-(char)_canCopyBookmark:(id)arg1 ;
-(void)_reloadOutlineViewAndSearchResultsIfNecessary;
-(char)_shouldDisplayBookmarkInSidebar:(id)arg1 ;
-(void)_deleteBookmarks:(id)arg1 ;
-(void)_openSelectedLeafBookmarksUsingWindowPolicy;
-(char)_canShowMenuForRow:(long long)arg1 ;
-(void)_editTitleOfBookmark:(id)arg1 ;
-(void)_editAddressOfBookmark:(id)arg1 ;
-(void)_addBookmarkFolderInBookmark:(id)arg1 ;
-(void)sidebarSearchFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)wasInstalledBySidebarViewController:(id)arg1 ;
-(char)outlineView:(id)arg1 shouldEditOnDoubleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(char)outlineView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(char)outlineView:(id)arg1 keyDown:(id)arg2 ;
-(id)outlineView:(id)arg1 menuForEvent:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(void)rowClicked:(id)arg1 ;
-(void)addBookmarkFolder:(id)arg1 ;
-(void)dealloc;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)loadView;
-(char)control:(id)arg1 textShouldEndEditing:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)deleteForward:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)delete:(id)arg1 ;
-(BookmarksOutlineView *)outlineView;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(id)outlineView:(id)arg1 rowViewForItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2 ;
-(id)outlineView:(id)arg1 persistentObjectForItem:(id)arg2 ;
-(void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 operation:(unsigned long long)arg4 ;
-(char)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 ;
-(id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3 ;
-(void)setOutlineView:(BookmarksOutlineView *)arg1 ;
-(void)deleteBackward:(id)arg1 ;
@end

