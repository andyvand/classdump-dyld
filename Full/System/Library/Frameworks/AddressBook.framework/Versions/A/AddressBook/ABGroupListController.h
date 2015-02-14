/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <AddressBook/NSOutlineViewDataSource.h>
#import <AddressBook/NSOutlineViewDelegate.h>
#import <AddressBook/NSTextFieldDelegate.h>
#import <AddressBook/NSMenuDelegate.h>
#import <AddressBook/ABBookStateSaving.h>

@protocol ABGroupHelperFactory, ABGroupDragHelper, ABAccessoryViewProvider, ABGroupListStyleProvider;
@class ABGroupListView, ABGroupEntriesList, NSString, ABActionAutovalidator, ABKeystrokeForwarder, NSArray;

@interface ABGroupListController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, NSTextFieldDelegate, NSMenuDelegate, ABBookStateSaving> {

	ABGroupListView* _outlineView;
	id<ABGroupHelperFactory> _helperFactory;
	char _didAwakeFromNib;
	ABGroupEntriesList* _groupEntriesList;
	NSString* _selectedGroupEntryIdentifier;
	NSString* _selectedGroupName;
	ABActionAutovalidator* _autovalidator;
	ABKeystrokeForwarder* _keystrokeForwarder;
	SEL _entryTextDidChangeMethod;
	/*^block*/id _editCompletionHandler;
	id<ABGroupDragHelper> _dragHelper;
	NSString* _identifier;
	NSString* _autosaveName;
	NSArray* _peopleForHighlightedMembership;
	id<ABAccessoryViewProvider> _accessoryViewProvider;
	id<ABGroupListStyleProvider> _styleProvider;
	long long _disableSelectionNotificationsCount;

}

@property (assign) ABGroupListView * outlineView;                                            //@synthesize outlineView=_outlineView - In the implementation block
@property (assign) id<ABGroupHelperFactory> helperFactory;                                   //@synthesize helperFactory=_helperFactory - In the implementation block
@property (nonatomic,retain) ABGroupEntriesList * groupEntriesList;                          //@synthesize groupEntriesList=_groupEntriesList - In the implementation block
@property (copy) NSString * selectedGroupEntryIdentifier;                                    //@synthesize selectedGroupEntryIdentifier=_selectedGroupEntryIdentifier - In the implementation block
@property (copy) NSString * selectedGroupName;                                               //@synthesize selectedGroupName=_selectedGroupName - In the implementation block
@property (copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * autosaveName;                                                    //@synthesize autosaveName=_autosaveName - In the implementation block
@property (nonatomic,retain) id<ABAccessoryViewProvider> accessoryViewProvider;              //@synthesize accessoryViewProvider=_accessoryViewProvider - In the implementation block
@property (retain) id<ABGroupDragHelper> dragHelper;                                         //@synthesize dragHelper=_dragHelper - In the implementation block
@property (copy) id editCompletionHandler;                                                   //@synthesize editCompletionHandler=_editCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canCut;
-(char)canPaste;
-(id)entryForCreatingGroups;
-(id)selectedGroupEntry;
-(ABGroupEntriesList *)groupEntriesList;
-(void)setGroupEntriesList:(ABGroupEntriesList *)arg1 ;
-(void)setHelperFactory:(id<ABGroupHelperFactory>)arg1 ;
-(id)selectedGroups;
-(void)printDescription:(id)arg1 ;
-(char)handleDeleteKey:(id)arg1 ;
-(void)saveState;
-(char)canDragEntries:(id)arg1 ;
-(void)restoreState;
-(id)groupEntries;
-(void)callRenameDelegate:(id)arg1 ;
-(char)canDeleteWithMenuItem:(id)arg1 ;
-(char)canCopy;
-(id)entryToValidate;
-(char)canEditSmartGroup;
-(id)entryForAction:(id)arg1 ;
-(void)_updateGroupHighlightStateForTableRowView:(id)arg1 row:(long long)arg2 ;
-(void)_updateGroupHighlightState;
-(void)selectGroupEntry:(id)arg1 ;
-(char)canDropOnEntry:(id)arg1 ;
-(id)dropHelperWithDraggingInfo:(id)arg1 droppedEntry:(id)arg2 childIndex:(long long)arg3 ;
-(void)setDragHelper:(id<ABGroupDragHelper>)arg1 ;
-(id<ABGroupDragHelper>)dragHelper;
-(void)groupEntriesDidChange:(id)arg1 ;
-(void)groupEntriesListWillDeleteGroups:(id)arg1 ;
-(void)commitEditingByChangingFirstResponder;
-(void)reloadAndRestoreSelection;
-(void)setEditCompletionHandler:(id)arg1 ;
-(void)callEditCompletionHandler:(id)arg1 ;
-(NSString *)selectedGroupEntryIdentifier;
-(void)selectGroupEntryWithIdentifier:(id)arg1 ;
-(long long)selectableRowForPreviouslySelectedRow:(long long)arg1 ;
-(void)runWithSelectionNotificationsDisabled:(/*^block*/id)arg1 ;
-(id)selectedGroup;
-(void)setSelectedGroup:(id)arg1 ;
-(id)childrenForEntry:(id)arg1 ;
-(id)accessoryViewForEntry:(id)arg1 ;
-(id<ABAccessoryViewProvider>)accessoryViewProvider;
-(void)configureCellView:(id)arg1 forEntry:(id)arg2 ;
-(void)disableSelectionNotifications;
-(void)enableSelectionNotifications;
-(char)selectionNotificationsDisabled;
-(void)performSelectAction;
-(void)setSelectedGroupEntryIdentifier:(NSString *)arg1 ;
-(void)setSelectedGroupName:(NSString *)arg1 ;
-(void)updateSelectionAppearance;
-(void)saveSelectedGroupEntryToState:(id)arg1 ;
-(void)restoreSelectedGroupEntryFromState:(id)arg1 ;
-(char)canSelectEntryAtRow:(long long)arg1 ;
-(void)editSmartGroup:(id)arg1 ;
-(char)canSendEmailToGroup;
-(void)sendEmailToGroup:(id)arg1 ;
-(void)createGroupInSection:(id)arg1 ;
-(char)canRenameGroupWithMenuItem:(id)arg1 ;
-(void)renameGroup:(id)arg1 ;
-(void)highlightGroupsWithMembers:(id)arg1 ;
-(void)importFiles:(id)arg1 showImportConfirmation:(char)arg2 ;
-(void)editGroupEntry:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setSelectedGroups:(id)arg1 ;
-(void)entryTextDidChange:(id)arg1 ;
-(void)reloadAccessoryViewsForEntries:(id)arg1 ;
-(NSString *)selectedGroupName;
-(id<ABGroupHelperFactory>)helperFactory;
-(id)editCompletionHandler;
-(void)setAccessoryViewProvider:(id<ABAccessoryViewProvider>)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(char)control:(id)arg1 textShouldEndEditing:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)awakeFromNib;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)setAutosaveName:(NSString *)arg1 ;
-(NSString *)autosaveName;
-(void)delete:(id)arg1 ;
-(ABGroupListView *)outlineView;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(id)outlineView:(id)arg1 rowViewForItem:(id)arg2 ;
-(void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(char)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 ;
-(id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3 ;
-(void)setOutlineView:(ABGroupListView *)arg1 ;
-(void)pasteboardChangedOwner:(id)arg1 ;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
@end

