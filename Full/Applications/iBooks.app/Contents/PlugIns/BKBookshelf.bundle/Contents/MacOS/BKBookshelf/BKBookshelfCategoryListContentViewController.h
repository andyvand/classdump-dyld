/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKBookshelf/BKBookshelf-Structs.h>
#import <BKBookshelf/BKBookshelfCategoryContentViewController.h>
#import <BKBookshelf/IMFetchedResultsControllerDelegate.h>
#import <BKBookshelf/IMTableViewDataSource.h>
#import <BKBookshelf/NSTextStorageDelegate.h>
#import <BKBookshelf/NSTextViewDelegate.h>
#import <BKBookshelf/BKTableCellEditingDelegate.h>
#import <BKBookshelf/BKBookshelfReloadingCategoryContentController.h>
#import <BKBookshelf/BKDropViewDelegate.h>
#import <BKBookshelf/IMTableViewDelegate.h>

@class NSDateFormatter, IMTableView, BKDropView, IMFetchedResultsController, NSDictionary, NSTableCellView, NSUndoManager, NSString, BKBookshelfCategory;

@interface BKBookshelfCategoryListContentViewController : BKBookshelfCategoryContentViewController <IMFetchedResultsControllerDelegate, IMTableViewDataSource, NSTextStorageDelegate, NSTextViewDelegate, BKTableCellEditingDelegate, BKBookshelfReloadingCategoryContentController, BKDropViewDelegate, IMTableViewDelegate> {

	char _updatingDataSource;
	char _awokeFromNib;
	NSDateFormatter* _dateFormatter;
	IMTableView* _tableView;
	BKDropView* _dropView;
	IMFetchedResultsController* _frc;
	IMFetchedResultsController* _collectionFRC;
	NSDictionary* _collectionCache;
	NSTableCellView* _editingCellView;
	NSUndoManager* _undoManager;

}

@property (__weak) IMTableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (__weak) BKDropView * dropView;                                             //@synthesize dropView=_dropView - In the implementation block
@property (nonatomic,retain) IMFetchedResultsController * frc;                        //@synthesize frc=_frc - In the implementation block
@property (nonatomic,retain) IMFetchedResultsController * collectionFRC;              //@synthesize collectionFRC=_collectionFRC - In the implementation block
@property (nonatomic,retain) NSDictionary * collectionCache;                          //@synthesize collectionCache=_collectionCache - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * dateFormatter;                       //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (assign,nonatomic) char updatingDataSource;                                 //@synthesize updatingDataSource=_updatingDataSource - In the implementation block
@property (retain) NSTableCellView * editingCellView;                                 //@synthesize editingCellView=_editingCellView - In the implementation block
@property (assign,nonatomic,__weak) NSUndoManager * undoManager;                      //@synthesize undoManager=_undoManager - In the implementation block
@property (assign,nonatomic) char awokeFromNib;                                       //@synthesize awokeFromNib=_awokeFromNib - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BKBookshelfCategory * category; 
+(id)editableTableColumnIdentifiers;
+(id)categoryDictionaryAvailableToDisplay;
-(void)deleteSelectionFromTableView:(id)arg1 ;
-(void)handleOpenSelectionFromTableView:(id)arg1 ;
-(id)tableView:(id)arg1 contextMenuForSelectedIndexes:(id)arg2 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)dropView:(id)arg1 dropRectsForURLs:(id)arg2 ;
-(void)autoSizeColumns:(id)arg1 ;
-(void)libraryWillImport:(id)arg1 ;
-(void)revealLibraryAsset:(id)arg1 select:(char)arg2 ;
-(id)collectionIDForTitle:(id)arg1 ;
-(id)titleForCollectionID:(id)arg1 ;
-(void)libraryDidImport:(id)arg1 ;
-(void)setCollectionFRC:(IMFetchedResultsController *)arg1 ;
-(char)updatingDataSource;
-(char)hasDuplicatePDFTitle:(id)arg1 ;
-(long long)pRowForLibraryAsset:(id)arg1 ;
-(void)reloadLibraryAsset:(id)arg1 ;
-(void)setCollectionCache:(NSDictionary *)arg1 ;
-(void)someWindowDidBecomeKey:(id)arg1 ;
-(id)libraryAssetForRow:(long long)arg1 ;
-(char)awokeFromNib;
-(void)showHideColumn:(id)arg1 ;
-(void)setFrc:(IMFetchedResultsController *)arg1 ;
-(NSTableCellView *)editingCellView;
-(NSDictionary *)collectionCache;
-(IMFetchedResultsController *)collectionFRC;
-(void)someWindowDidResignKey:(id)arg1 ;
-(void)setUpdatingDataSource:(char)arg1 ;
-(id)selectedAssets;
-(BKDropView *)dropView;
-(IMFetchedResultsController *)frc;
-(char)dropView:(id)arg1 urlsSupported:(id)arg2 dragTypeIsImage:(char*)arg3 ;
-(id)completionsForTableColumnIdentifier:(id)arg1 ;
-(void)didBeginEditingWithCellView:(id)arg1 columnIdentifier:(id)arg2 ;
-(void)cellView:(id)arg1 columnIdentifier:(id)arg2 didEndEditingWithValue:(id)arg3 ;
-(void)didCancelEditingWithCellView:(id)arg1 columnIdentifier:(id)arg2 ;
-(long long)didTabWithCellView:(id)arg1 columnIdentifier:(id)arg2 row:(long long)arg3 forward:(char)arg4 ;
-(void)updateTextColorForRow:(id)arg1 isSelected:(char)arg2 ;
-(void)updateTableViewSelectionColorsWithRedisplay:(char)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 forRowIndexes:(id)arg2 columnIndexes:(id)arg3 rowsToSelect:(id)arg4 rowToEdit:(long long)arg5 columnToEdit:(long long)arg6 ;
-(id)valueForTableColumnIdentifier:(id)arg1 row:(long long)arg2 ;
-(char)p_tableColumnEditableForIdentifier:(id)arg1 row:(unsigned long long)arg2 ;
-(void)p_didEndEditingWithUndoableData:(id)arg1 ;
-(void)setDropView:(BKDropView *)arg1 ;
-(id)pRowsForLibraryAssets:(id)arg1 ;
-(CGRect)dropView:(id)arg1 convertRectToDropView:(CGRect)arg2 ;
-(void)updateFetchRequest;
-(void)setEditingCellView:(NSTableCellView *)arg1 ;
-(void)setAwokeFromNib:(char)arg1 ;
-(char)dropView:(id)arg1 urlsDropped:(id)arg2 assetID:(id)arg3 ;
-(id)libraryAssetsForRows:(id)arg1 ;
-(void)cloudButtonPressed:(id)arg1 ;
-(char)pCanEditAssetInRow:(unsigned long long)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(id)fetchRequest;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IMTableView *)tableView;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(char)tableView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)tableViewSelectionIsChanging:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2 ;
-(NSUndoManager *)undoManager;
-(id)initialFirstResponder;
-(void)awakeFromNib;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)setTableView:(IMTableView *)arg1 ;
-(void)doubleClick:(id)arg1 ;
@end

