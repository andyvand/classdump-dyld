/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSResponder.h>
#import <AddressBook/ABPersonListControllerProtocol.h>
#import <AddressBook/NSOutlineViewDelegate.h>
#import <AddressBook/NSOutlineViewDataSource.h>
#import <AddressBook/ABBookStateSaving.h>

@protocol ABPersonListDelegate;
@class NSString, ABMainListOutlineView, ABAccount, ABGroup, ABAddressBook, ABPersonEntriesList, NSMutableIndexSet, ABPersonListDragExportHelper, ABPersonListMenuHelper, NSMutableArray, NSUndoManager, ABActionAutovalidator, ABKeystrokeForwarder, NSArray, ABCommandExecutor, NSOutlineView;

@interface ABPersonListController : NSResponder <ABPersonListControllerProtocol, NSOutlineViewDelegate, NSOutlineViewDataSource, ABBookStateSaving> {

	ABMainListOutlineView* _outlineView;
	ABAccount* _account;
	id<ABPersonListDelegate> _delegate;
	ABGroup* _displayedGroup;
	ABAddressBook* _addressBook;
	char _shouldUnifyPeople;
	ABPersonEntriesList* _personEntriesList;
	NSMutableIndexSet* _indexesMarkedForDeselection;
	ABPersonListDragExportHelper* _dragExportHelper;
	ABPersonListMenuHelper* _menuHelper;
	NSMutableArray* _selectedUIDs;
	NSMutableArray* _selectedObjects;
	NSUndoManager* _undoManager;
	NSString* _identifier;
	NSString* _autosaveName;
	ABActionAutovalidator* _autovalidator;
	ABKeystrokeForwarder* _keystrokeForwarder;
	char _didAwakeFromNib;
	char _ignoreOutlineSelectionChanges;
	unsigned long long _suspendNotifyingDelegateCount;
	NSArray* _pendingNewSelectionIdentifiers;
	NSArray* _lastRecordIdentifiers;
	ABCommandExecutor* _commandExecutor;
	unsigned long long _preserveSelectionCallDepth;
	long long _fallbackIndex;

}

@property (assign) ABMainListOutlineView * outlineView;                  //@synthesize outlineView=_outlineView - In the implementation block
@property (retain) id<ABPersonListDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (retain) ABAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (readonly) NSOutlineView * contactTableView; 
@property (retain) ABAddressBook * addressBook;                          //@synthesize addressBook=_addressBook - In the implementation block
@property (retain) ABGroup * displayedGroup; 
@property (copy) NSString * filterTerms; 
@property (assign) char shouldUnifyPeople;                               //@synthesize shouldUnifyPeople=_shouldUnifyPeople - In the implementation block
@property (retain) NSUndoManager * undoManager;                          //@synthesize undoManager=_undoManager - In the implementation block
@property (retain) id<ABPersonListHeadlining> headliner; 
@property (readonly) NSArray * entries; 
@property (readonly) NSArray * personEntries; 
@property (copy) NSArray * selectedEntries; 
@property (readonly) NSArray * clickedOrSelectedEntries; 
@property (readonly) NSArray * selectedRecords; 
@property (readonly) NSArray * allRecords; 
@property (readonly) NSArray * selectedLinkedRecords; 
@property (readonly) long long selectionIndex; 
@property (copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * autosaveName;                                //@synthesize autosaveName=_autosaveName - In the implementation block
@property (assign) char suspendSorting; 
@property (readonly) char suspendNotifyingDelegate; 
@property (assign) char ignoreOutlineSelectionChanges;                   //@synthesize ignoreOutlineSelectionChanges=_ignoreOutlineSelectionChanges - In the implementation block
@property (retain) ABCommandExecutor * commandExecutor;                  //@synthesize commandExecutor=_commandExecutor - In the implementation block
@property (retain) ABPersonEntriesList * personEntriesList;              //@synthesize personEntriesList=_personEntriesList - In the implementation block
@property (assign) NSArray * selectedObjects; 
@property (copy,readonly) NSArray * affectedStores; 
@property (copy) NSArray * lastRecordIdentifiers;                        //@synthesize lastRecordIdentifiers=_lastRecordIdentifiers - In the implementation block
@property (copy) NSArray * pendingNewSelectionIdentifiers;               //@synthesize pendingNewSelectionIdentifiers=_pendingNewSelectionIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char shouldIncludeGroups; 
-(void)removeEntry:(id)arg1 ;
-(ABAddressBook *)addressBook;
-(ABPersonEntriesList *)personEntriesList;
-(void)personEntriesDidChange:(id)arg1 ;
-(void)setPersonEntriesList:(ABPersonEntriesList *)arg1 ;
-(NSString *)filterTerms;
-(void)setFilterTerms:(NSString *)arg1 ;
-(NSArray *)selectedRecords;
-(void)fetchContacts;
-(char)shouldIncludeGroups;
-(char)shouldIncludeLinkedPeople;
-(char)shouldUnifyPeople;
-(ABGroup *)displayedGroup;
-(NSArray *)selectedEntries;
-(id)entryForUID:(id)arg1 ;
-(NSArray *)allRecords;
-(id)selectedEntryUIDs;
-(unsigned long long)countOfEntries;
-(void)selectEntryIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)setShouldUnifyPeople:(char)arg1 ;
-(void)setHeadliner:(id<ABPersonListHeadlining>)arg1 ;
-(void)setSelectedEntries:(NSArray *)arg1 ;
-(void)clearExtraUniqueIdsInSearchResults;
-(void)reflectChangesInUIForNotificationUserInfo:(id)arg1 ;
-(void)scrollVisibleToSelectedRow;
-(void)setDisplayedGroup:(ABGroup *)arg1 ;
-(NSArray *)personEntries;
-(id<ABPersonListHeadlining>)headliner;
-(void)printDescription:(id)arg1 ;
-(void)handleTableDoubleAction:(id)arg1 ;
-(char)handleDeleteKey:(id)arg1 ;
-(NSArray *)lastRecordIdentifiers;
-(void)setLastRecordIdentifiers:(NSArray *)arg1 ;
-(char)suspendNotifyingDelegate;
-(void)setPendingNewSelectionIdentifiers:(NSArray *)arg1 ;
-(void)saveState;
-(void)_notifyDelegateOfNewSelection;
-(id)entriesForActionSender:(id)arg1 ;
-(id)linkedRecordsFromEntries:(id)arg1 ;
-(id)selectedEntryIndexes;
-(id)entriesForUIDs:(id)arg1 ;
-(NSArray *)selectedLinkedRecords;
-(id)makeMergeAndLinkPeopleCommandForCurrentSelection;
-(ABCommandExecutor *)commandExecutor;
-(void)appendExtraUniqueIdToSearchResults:(id)arg1 ;
-(char)suspendSorting;
-(void)preserveSelectionWhilePerformingBlock:(/*^block*/id)arg1 ;
-(void)updateSelectedUIDsFromUI;
-(void)setSuspendSorting:(char)arg1 ;
-(void)disableNotifyingDelegateOfSelectionChange;
-(char)selectEntriesWithUIDs:(id)arg1 ;
-(void)enableNotifyingDelegateOfSelectionChange;
-(NSArray *)clickedOrSelectedEntries;
-(id)entriesForAction:(id)arg1 ;
-(NSArray *)pendingNewSelectionIdentifiers;
-(void)entriesDidChange:(id)arg1 ;
-(void)updateObjectValueForEntry:(id)arg1 indexesToReload:(id)arg2 ;
-(void)setIgnoreOutlineSelectionChanges:(char)arg1 ;
-(char)ignoreOutlineSelectionChanges;
-(char)canDragEntries:(id)arg1 ;
-(id)vCardDisplayNameForEntries:(id)arg1 ;
-(unsigned long long)_validateFilenamesDrop:(id)arg1 outlineView:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(unsigned long long)_validateGroupsDrop:(id)arg1 outlineView:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(void)findInSpotlight:(id)arg1 ;
-(id)spotlightMenuItemName;
-(char)canFindEntriesInSpotlight:(id)arg1 ;
-(void)insertEntry:(id)arg1 inEntriesAtIndex:(unsigned long long)arg2 ;
-(void)addEntriesFromArray:(id)arg1 ;
-(void)restoreState;
-(id)linkedRecordsForActionSender:(id)arg1 inAccount:(id)arg2 ;
-(char)canMergeSelectedContactsWithMenuItem:(id)arg1 ;
-(void)mergeSelectedContacts:(id)arg1 ;
-(void)deselectEntries:(id)arg1 ;
-(char)selectionNeighborsCountEntry;
-(void)revealCountEntry;
-(char)canDeleteEntries:(id)arg1 ;
-(char)canEditEntry;
-(void)editEntry:(id)arg1 ;
-(void)reloadEntriesWithUids:(id)arg1 ;
-(char)outlineViewNeedsIndentation:(id)arg1 ;
-(char)mainListOutlineView:(id)arg1 shouldShowExpansionTriangleForItemAtRow:(unsigned long long)arg2 ;
-(NSOutlineView *)contactTableView;
-(void)purgeContacts;
-(void)setTableViewNeedsDisplay;
-(id)observableForCountOfEntries;
-(void)_forciblyRemoveEntriesInArray:(id)arg1 ;
-(void)setCommandExecutor:(ABCommandExecutor *)arg1 ;
-(NSArray *)entries;
-(NSArray *)affectedStores;
-(id)init;
-(void)setDelegate:(id<ABPersonListDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id<ABPersonListDelegate>)delegate;
-(char)validateMenuItem:(id)arg1 ;
-(void)rearrangeObjects;
-(NSArray *)selectedObjects;
-(void)selectNext:(id)arg1 ;
-(void)selectPrevious:(id)arg1 ;
-(long long)selectionIndex;
-(void)setSelectedObjects:(NSArray *)arg1 ;
-(void)reloadData;
-(void)selectAll:(id)arg1 ;
-(NSUndoManager *)undoManager;
-(void)awakeFromNib;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)setAutosaveName:(NSString *)arg1 ;
-(NSString *)autosaveName;
-(ABMainListOutlineView *)outlineView;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(id)outlineView:(id)arg1 rowViewForItem:(id)arg2 ;
-(void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldCollapseItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 operation:(unsigned long long)arg4 ;
-(char)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 ;
-(id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3 ;
-(id)fetchPredicate;
-(void)setOutlineView:(ABMainListOutlineView *)arg1 ;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
-(ABAccount *)account;
-(void)setAccount:(ABAccount *)arg1 ;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
@end

