/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSWindowController.h>
#import <AddressBook/ABPersonSearchControllerDelegate.h>
#import <AddressBook/NSWindowRestoration.h>
#import <AddressBook/ABPeoplePickerTableViewDelegate.h>
#import <AddressBook/ABPeoplePickerTableViewDataSource.h>
#import <AddressBook/ABPersonListControllerProtocol.h>
#import <AddressBook/ABPersonListDelegate.h>

@class ABAccount, ABAddressBook, ABGroup, NSArray, ABPeoplePickerGroupListController, NSSegmentedControl, NSSearchField, ABPersonListController, ABPersonListSearchController, NSString, NSMutableDictionary, NSMenu, NSView, NSWindow, NSArrayController, NSSplitView, ABPeoplePickerTableView, NSTextField, ABGroupEntriesList, ABPeoplePickerGroupEntriesFactory, ABPeoplePickerGroupHelperFactory, ABPeoplePickerScope, ABPeoplePickerExternalNotificationWatcher, ABPeoplePickerLocalNotificationWatcher, NSDictionary, ABPersonEntriesList;

@interface ABPeoplePickerController : NSWindowController <ABPersonSearchControllerDelegate, NSWindowRestoration, ABPeoplePickerTableViewDelegate, ABPeoplePickerTableViewDataSource, ABPersonListControllerProtocol, ABPersonListDelegate> {

	ABPeoplePickerGroupListController* _groupListController;
	NSSegmentedControl* mNavigationControl;
	NSSearchField* mSearchField;
	ABPersonListController* _personListController;
	ABPersonListSearchController* _searchController;
	NSString* targetedPath;
	NSArray* _allSections;
	NSMutableDictionary* _entryForRecordReverseMap;
	NSMenu* newSourceOrGroupMenu;
	char _singleCard;
	char _shouldAutomaticallyEditInsertedGroupNames;
	char _inDistributionListEditor;
	NSView* pickerView;
	NSWindow* testWindow;
	NSView* accessoryViewContainer;
	NSArrayController* propertyController;
	NSSplitView* peoplePickerSplitView;
	ABPeoplePickerTableView* mPickerTableView;
	NSTextField* mStatusTextField;
	ABGroupEntriesList* _groupEntriesList;
	ABPeoplePickerGroupEntriesFactory* _groupEntriesFactory;
	ABPeoplePickerGroupHelperFactory* _helperFactory;
	ABPeoplePickerScope* _pickerScope;
	ABPeoplePickerExternalNotificationWatcher* _externalNotificationWatcher;
	ABPeoplePickerLocalNotificationWatcher* _localNotificationWatcher;
	NSArray* peopleSortDescriptors;
	NSDictionary* _savedSelection;
	NSMutableDictionary* _columnFilters;
	ABPersonEntriesList* _personEntriesList;
	NSArray* propertyDescriptions;
	NSArray* availableProperties;
	char allowsGroupSelection;
	NSString* autosaveName;
	ABAccount* _account;
	ABAddressBook* _addressBook;
	ABGroup* _displayedGroup;
	char _shouldUnifyPeople;

}

@property (assign) char showsDirectories; 
@property (assign) char inDistributionListEditor;                                //@synthesize inDistributionListEditor=_inDistributionListEditor - In the implementation block
@property (nonatomic,readonly) NSView * pickerView; 
@property (nonatomic,readonly) NSWindow * testWindow; 
@property (assign,nonatomic) int valueSelectionBehavior; 
@property (nonatomic,retain) NSArray * propertyDescriptions; 
@property (nonatomic,retain) NSView * accessoryView; 
@property (assign,nonatomic) char allowsGroupSelection; 
@property (assign,nonatomic) char allowsMultipleSelection; 
@property (nonatomic,retain) NSString * autosaveName; 
@property (assign,nonatomic) id target; 
@property (assign,nonatomic) SEL groupDoubleAction; 
@property (assign,nonatomic) SEL nameDoubleAction; 
@property (nonatomic,retain) NSArray * peopleSortDescriptors; 
@property (readonly) NSArray * properties; 
@property (readonly) NSArray * availableProperties; 
@property (nonatomic,retain) NSString * displayedProperty; 
@property (retain) ABPersonEntriesList * personEntriesList;                      //@synthesize personEntriesList=_personEntriesList - In the implementation block
@property (retain) ABAccount * account;                                          //@synthesize account=_account - In the implementation block
@property (retain) ABAddressBook * addressBook;                                  //@synthesize addressBook=_addressBook - In the implementation block
@property (retain) ABGroup * displayedGroup;                                     //@synthesize displayedGroup=_displayedGroup - In the implementation block
@property (assign) char shouldUnifyPeople;                                       //@synthesize shouldUnifyPeople=_shouldUnifyPeople - In the implementation block
@property (copy) NSString * filterTerms; 
@property (readonly) NSArray * entries; 
@property (copy) NSArray * selectedEntries; 
@property (retain) id<ABPersonListHeadlining> headliner; 
@property (assign) ABPersonListSearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * personEntries; 
@property (readonly) char shouldIncludeGroups; 
+(char)shouldRegisterForUndoNotifications;
+(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(ABAddressBook *)addressBook;
-(void)setAccounts:(id)arg1 ;
-(void)setPropertyDescriptions:(NSArray *)arg1 ;
-(ABPersonEntriesList *)personEntriesList;
-(void)tweakSearchField;
-(void)personEntriesDidChange:(id)arg1 ;
-(void)setPeopleSortDescriptors:(NSArray *)arg1 ;
-(void)setPersonEntriesList:(ABPersonEntriesList *)arg1 ;
-(void)selectColumnIdentifier:(id)arg1 ;
-(char)allowsGroupSelection;
-(NSString *)filterTerms;
-(void)setFilterTerms:(NSString *)arg1 ;
-(void)notifyTableViewOfChanges;
-(id)selectedRecords;
-(id)selectedIdentifiersForPerson:(id)arg1 ;
-(void)selectIdentifier:(id)arg1 forPerson:(id)arg2 byExtendingSelection:(char)arg3 ;
-(NSArray *)propertyDescriptions;
-(id)_defaultTitleForProperty:(id)arg1 ;
-(void)_removeProperty:(id)arg1 key:(id)arg2 ;
-(void)_generateResultsForSelection;
-(id)_peoplePickerPropertyForProperty:(id)arg1 ;
-(void)setDisplayedProperty:(NSString *)arg1 ;
-(void)saveSelection;
-(void)fetchContacts;
-(void)restoreSelection;
-(void)updateCardStatusText;
-(void)_postSelectionChangedNotification;
-(char)shouldIncludeGroups;
-(char)shouldIncludeLinkedPeople;
-(char)shouldUnifyPeople;
-(NSString *)displayedProperty;
-(ABGroup *)displayedGroup;
-(void)generateResultsForProperty:(id)arg1 ;
-(NSArray *)selectedEntries;
-(int)valueSelectionBehavior;
-(id)selectedIdentifiersForEntry:(id)arg1 ;
-(id)selectedValuesForEntry:(id)arg1 ;
-(void)selectGroup:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)deselectGroup:(id)arg1 ;
-(void)deselectIdentifier:(id)arg1 forPerson:(id)arg2 ;
-(char)sourceListHasFocus;
-(id)selectedGroups;
-(id)recordsForGroups:(id)arg1 ;
-(void)saveAutosaveValues;
-(long long)numberOfSubrowsInTableView:(id)arg1 forRow:(long long)arg2 ;
-(double)tableView:(id)arg1 heightOfSubrow:(long long)arg2 ofRow:(long long)arg3 ;
-(id)_subrowObjectsAtIndex:(unsigned long long)arg1 ;
-(id)peopleUIDsForRowIndexes:(id)arg1 ;
-(void)writePeopleUIDs:(id)arg1 groupUIDs:(id)arg2 toPasteboard:(id)arg3 ;
-(id)peopleForRowIndexes:(id)arg1 ;
-(id)autosaveDefaultsKey;
-(void)loadAutosaveValues;
-(void)searchControllerWillBeginSearching:(id)arg1 ;
-(void)searchControllerDidUpdateSearch:(id)arg1 ;
-(void)searchControllerDidBeginSearching:(id)arg1 ;
-(void)searchControllerDidFinishSearching:(id)arg1 ;
-(void)searchControllerDidCancelSearching:(id)arg1 ;
-(void)tableView:(id)arg1 userClickedSubrow:(long long)arg2 ofRow:(long long)arg3 ;
-(void)setShouldUnifyPeople:(char)arg1 ;
-(void)setHeadliner:(id<ABPersonListHeadlining>)arg1 ;
-(void)setSelectedEntries:(NSArray *)arg1 ;
-(void)clearExtraUniqueIdsInSearchResults;
-(void)reflectChangesInUIForNotificationUserInfo:(id)arg1 ;
-(void)scrollVisibleToSelectedRow;
-(void)setDisplayedGroup:(ABGroup *)arg1 ;
-(NSArray *)personEntries;
-(void)personList:(id)arg1 didSelectEntries:(id)arg2 ;
-(void)personListDidDoubleClick:(id)arg1 ;
-(unsigned long long)personList:(id)arg1 validateFilenamesDrop:(id)arg2 ;
-(unsigned long long)personList:(id)arg1 validateGroupsDrop:(id)arg2 ;
-(char)personList:(id)arg1 acceptFilenamesDrop:(id)arg2 ;
-(char)personList:(id)arg1 acceptGroupsDrop:(id)arg2 ;
-(void)toggleCardEditingMode:(id)arg1 ;
-(void)setCardEditingMode:(char)arg1 ;
-(char)shouldDrawHorizontalSeparators;
-(id<ABPersonListHeadlining>)headliner;
-(void)addProperty:(id)arg1 ;
-(void)addInstantMessageService:(id)arg1 ;
-(void)removeInstantMessageService:(id)arg1 ;
-(void)addFilter:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
-(void)setColumnTitle:(id)arg1 forProperty:(id)arg2 ;
-(void)setTypes:(id)arg1 forProperty:(id)arg2 ;
-(id)columnTitleForProperty:(id)arg1 ;
-(void)updateFilterPredicate;
-(void)updateCanEditSelectedContacts;
-(id)selectedValues;
-(void)selectRecord:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)deselectRecord:(id)arg1 ;
-(id)peopleInFocusedSelection;
-(void)clearSearchField:(id)arg1 ;
-(char)showsDirectories;
-(void)setShowsDirectories:(char)arg1 ;
-(void)deleteKey:(id)arg1 ;
-(id)_selectedSubrowObjectsAtIndex:(unsigned long long)arg1 ;
-(void)writeSplitViewColumnWidthsToPrefs:(char)arg1 ;
-(SEL)groupDoubleAction;
-(void)setGroupDoubleAction:(SEL)arg1 ;
-(SEL)nameDoubleAction;
-(void)setNameDoubleAction:(SEL)arg1 ;
-(char)hasTableBorder;
-(void)setHasTableBorder:(char)arg1 ;
-(void)setValueSelectionBehavior:(int)arg1 ;
-(NSArray *)availableProperties;
-(NSWindow *)testWindow;
-(void)setAllowsGroupSelection:(char)arg1 ;
-(NSArray *)peopleSortDescriptors;
-(char)inDistributionListEditor;
-(void)setInDistributionListEditor:(char)arg1 ;
-(NSArray *)entries;
-(void)removeProperty:(id)arg1 ;
-(id)affectedStores;
-(id)_addProperty:(id)arg1 ;
-(NSView *)pickerView;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setAccessoryView:(NSView *)arg1 ;
-(NSView *)accessoryView;
-(void)rearrangeObjects;
-(void)selectNext:(id)arg1 ;
-(void)selectPrevious:(id)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)tableViewColumnDidResize:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3 ;
-(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)awakeFromNib;
-(void)deselectAll:(id)arg1 ;
-(void)setAutosaveName:(NSString *)arg1 ;
-(NSString *)autosaveName;
-(NSArray *)properties;
-(void)window:(id)arg1 willEncodeRestorableState:(id)arg2 ;
-(id)_searchField;
-(double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(void)splitView:(id)arg1 resizeSubviewsWithOldSize:(CGSize)arg2 ;
-(id)fetchPredicate;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
-(void)swipeWithEvent:(id)arg1 ;
-(ABPersonListSearchController *)searchController;
-(void)setSearchController:(ABPersonListSearchController *)arg1 ;
-(ABAccount *)account;
-(void)setAccount:(ABAccount *)arg1 ;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
-(void)searchOperation:(id)arg1 foundRecords:(id)arg2 ;
@end
