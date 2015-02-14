/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <Safari/SidebarSearchFieldDelegate.h>
#import <Safari/SidebarTableCellViewDelegate.h>
#import <Safari/ReadingListTableViewLiveResizeDelegate.h>
#import <Safari/SafariViewDelegate.h>
#import <Safari/TableViewPlusDelegate.h>
#import <Safari/TableViewPlusDataSource.h>

@protocol ReadingListTableViewControllerDelegate, ReadingListTableViewContentProvider;
@class ReadingListTableView, NSMutableArray, NSMenu, NSString;

@interface ReadingListTableViewController : NSViewController <SidebarSearchFieldDelegate, SidebarTableCellViewDelegate, ReadingListTableViewLiveResizeDelegate, SafariViewDelegate, TableViewPlusDelegate, TableViewPlusDataSource> {

	ReadingListTableView* _tableView;
	NSMutableArray* _displayedItems;
	NSMenu* _contextMenu;
	char _showsSearchFieldWrapperView;
	id<ReadingListTableViewControllerDelegate> _delegate;
	id<ReadingListTableViewContentProvider> _contentProvider;

}

@property (assign,nonatomic) char showsSearchFieldWrapperView;                                            //@synthesize showsSearchFieldWrapperView=_showsSearchFieldWrapperView - In the implementation block
@property (assign,nonatomic,__weak) id<ReadingListTableViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<ReadingListTableViewContentProvider> contentProvider;              //@synthesize contentProvider=_contentProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long displayedItemsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ReadingListTableViewContentProvider>)contentProvider;
-(id)initWithContentProvider:(id)arg1 ;
-(void)setContentProvider:(id<ReadingListTableViewContentProvider>)arg1 ;
-(void)didPressTableCellView:(id)arg1 ;
-(void)sidebarWillClose:(id)arg1 ;
-(void)sidebarSearchFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)actionButtonClickedInTableCellView:(id)arg1 ;
-(void)delegatingViewDidMoveToWindow:(id)arg1 ;
-(char)tableView:(id)arg1 shouldEditOnDoubleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(char)tableView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(id)tableView:(id)arg1 menuForEvent:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(void)setShowsSearchFieldWrapperView:(char)arg1 ;
-(void)highlightRowByURLString:(id)arg1 ;
-(void)reloadRowForItem:(id)arg1 ;
-(void)highlightRowByItem:(id)arg1 ;
-(void)scrollToBeginningOfContent;
-(void)activateItemAtIndex:(long long)arg1 ;
-(void)tableViewDidEndLiveResize:(id)arg1 ;
-(void)_rowClicked:(id)arg1 ;
-(void)tableViewFrameDidChange:(id)arg1 ;
-(void)_itemsInDataSourceDidChange:(id)arg1 ;
-(char)_isValidRowIndex:(long long)arg1 ;
-(unsigned long long)_indexOfItemForURLString:(id)arg1 ;
-(void)_highlightRowByIndex:(long long)arg1 ;
-(long long)_rowIndexOfItem:(id)arg1 ;
-(id)_makeTableCellViewOfClass:(Class)arg1 ;
-(id)_contextMenuBuilderForRow:(long long)arg1 item:(id*)arg2 ;
-(void)_invalidateRowHeightsAtIndexes:(id)arg1 ;
-(id)_itemForRow:(long long)arg1 ;
-(void)openInNewTab:(id)arg1 ;
-(void)openInNewWindow:(id)arg1 ;
-(id)_performDiffWithOldItems:(id)arg1 newItems:(id)arg2 ;
-(void)_updateTableView:(id)arg1 withNewDisplayedItems:(id)arg2 ;
-(id)_adjustedIndexSetAccountingForDummyRow:(id)arg1 ;
-(id)accessibilityDescriptionForTableCellView:(id)arg1 ;
-(unsigned long long)displayedItemsCount;
-(char)showsSearchFieldWrapperView;
-(void)setDelegate:(id<ReadingListTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ReadingListTableViewControllerDelegate>)delegate;
-(void)loadView;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(char)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
@end

