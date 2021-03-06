/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <Messages/FezPeopleList.h>
#import <Messages/IMDirectlyObservableObjectObserver.h>
#import <Messages/NSTableViewDelegate.h>
#import <Messages/NSTableViewDataSource.h>
#import <Messages/FezExtendedTableViewDelegate.h>
#import <Messages/FezExtendedTableViewDataSource.h>

@protocol PeopleListDelegate;
@class NSMutableDictionary, NSMenuItem, PresenceTooltip, NSTableColumn, NSMutableArray, NSTimer, NSString, NSMutableSet, NSMenu, AnimatingTableView;

@interface PeopleList : FezPeopleList <IMDirectlyObservableObjectObserver, NSTableViewDelegate, NSTableViewDataSource, FezExtendedTableViewDelegate, FezExtendedTableViewDataSource> {

	NSMutableDictionary* _buddyPictureIndexLookup;
	NSMenuItem* _showProfileMenuItem;
	PresenceTooltip* _tooltip;
	char _awokenFromNib;
	NSTableColumn* _statusColumn;
	NSTableColumn* _nameColumn;
	NSTableColumn* _pictureColumn;
	unsigned long long _viewOptions;
	NSMutableArray* _savedSelection;
	NSTimer* _statusTransitionTimer;
	NSMutableArray* _itemsInTransition;
	long long _primarySort;
	long long _secondarySort;
	char _sortManually;
	NSString* _sortDefaultKey;
	char _suppressingAnimation;
	NSMutableSet* _statusChangeQueue;
	NSMutableSet* _groupChangeQueue;
	char _willForceChangeProcessing;
	char _dontAnimateStatusQueue;
	char _animateWhenEnded;
	char _allowsReorderingOfGroups;
	NSMenu* _contextMenu;
	AnimatingTableView* _table;
	id<PeopleListDelegate> _delegate;

}

@property (nonatomic,retain) NSMenu * contextMenu;                         //@synthesize contextMenu=_contextMenu - In the implementation block
@property (nonatomic,retain) NSTableColumn * nameColumn;                   //@synthesize nameColumn=_nameColumn - In the implementation block
@property (nonatomic,retain) NSTableColumn * pictureColumn;                //@synthesize pictureColumn=_pictureColumn - In the implementation block
@property (nonatomic,retain) AnimatingTableView * table;                   //@synthesize table=_table - In the implementation block
@property (assign,nonatomic) id<PeopleListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)peoplePasteboardTypes;
+(id)_typeFromPasteboard:(id)arg1 ;
+(char)pasteboardContainsPeople:(id)arg1 ;
+(id)_notificationNames;
+(id)_notificationSelectors;
-(void)_statusIndicatorDidChange:(id)arg1 ;
-(char)tableView:(id)arg1 canDeleteRows:(id)arg2 ;
-(char)tableView:(id)arg1 deleteRows:(id)arg2 ;
-(id)groupForNewIMHandles;
-(void)detachFromTableView;
-(void)suppressAnimation;
-(void)disableAnimation;
-(void)_needsDrawFromAnimate:(id)arg1 ;
-(void)setHides:(unsigned long long)arg1 ;
-(void)setSortDefaultKey:(id)arg1 ;
-(void)setSortOrderFromDefaults;
-(void)setShowsOfflinePeople:(char)arg1 ;
-(long long)nextSuitableRowForHighlightAfterRow:(long long)arg1 ;
-(void)setArrangesByGroup:(char)arg1 ;
-(char)allowsReorderingOfGroups;
-(void)setAllowsReorderingOfGroups:(char)arg1 ;
-(void)requestValidation:(id)arg1 ;
-(void)showInBuddyList:(id)arg1 ;
-(void)refreshTracking;
-(void)pulseIMHandle:(id)arg1 ;
-(void)selectIMHandles:(id)arg1 ;
-(void)repopulateIMHandles:(id)arg1 ;
-(void)removeAllIMHandlesAndGroups:(char)arg1 ;
-(void)pulseIMHandles:(id)arg1 ;
-(id)selectedIMHandles;
-(char)isIMHandleVisible:(id)arg1 ;
-(void)revealIMHandlesInBuddyList:(id)arg1 ;
-(char)hides:(unsigned long long)arg1 ;
-(float)widthToFitContent;
-(void)doDefaultAction:(id)arg1 ;
-(void)inviteToAudioChat:(id)arg1 ;
-(void)inviteToVideoChat:(id)arg1 ;
-(void)setPreferCustomSort:(char)arg1 ;
-(char)preferAvailabilitySort;
-(long long)nameSortOrder;
-(void)saveSortOrderToDefaultsAndNotify:(char)arg1 ;
-(void)setSortOrder:(long long)arg1 secondary:(long long)arg2 ;
-(void)toggleHides:(unsigned long long)arg1 ;
-(void)toggleShowsOfflines:(id)arg1 ;
-(void)toggleArrangesByGroup:(id)arg1 ;
-(void)toggleUsesOfflineGroup:(id)arg1 ;
-(void)startChat:(id)arg1 ;
-(void)cancelARDSession:(id)arg1 ;
-(void)inviteToARDAsClient:(id)arg1 ;
-(void)inviteToARDAsServer:(id)arg1 ;
-(void)createNewGroupWithPeople:(id)arg1 ;
-(void)composeEMail:(id)arg1 ;
-(void)searchInSpotlight:(id)arg1 ;
-(void)block:(id)arg1 ;
-(void)deleteSelectedBuddies:(id)arg1 ;
-(void)showInAddressBook:(id)arg1 ;
-(void)openStatusAsURL:(id)arg1 ;
-(void)showSelectedBuddyInfo:(id)arg1 ;
-(void)showSelectedBuddyProfile:(id)arg1 ;
-(id)imHandlesAtRow:(long long)arg1 ;
-(char)preferCustomSort;
-(char)preferNameSort;
-(void)screenShareWithBuddy:(id)arg1 ;
-(void)tableView:(id)arg1 returnKeyPressedAtRow:(int)arg2 ;
-(char)tableView:(id)arg1 acceptsFirstMouse:(id)arg2 ;
-(char)tableViewShouldDrawBackgroundOverhang:(id)arg1 ;
-(char)tableView:(id)arg1 canPasteFromPasteboard:(id)arg2 ;
-(char)tableView:(id)arg1 pasteFromPasteboard:(id)arg2 ;
-(void)groupClicked:(id)arg1 ;
-(void)setDropGroup:(id)arg1 ;
-(unsigned long long)tableView:(id)arg1 groupRowGreaterThanIndex:(unsigned long long)arg2 ;
-(char)tableView:(id)arg1 groupRowAtIndex:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForGroupRow:(long long)arg2 ;
-(id)tableView:(id)arg1 numberStringForGroupRow:(long long)arg2 ignoreCollapsed:(char)arg3 ;
-(void)tableView:(id)arg1 dragStarted:(id)arg2 originPoint:(CGPoint)arg3 ;
-(void)tableView:(id)arg1 groupRowClicked:(long long)arg2 ;
-(id)tableView:(id)arg1 menuForGroupRow:(long long)arg2 ;
-(char)tableView:(id)arg1 shouldStartDraggingForGroupRow:(int)arg2 ;
-(char)tableView:(id)arg1 shouldShowTooltipForRow:(long long)arg2 ;
-(id)tableView:(id)arg1 tooltipForRow:(long long)arg2 ;
-(char)tableView:(id)arg1 prepareTooltip:(id)arg2 row:(int)arg3 ;
-(char)tableView:(id)arg1 shouldDrawWhenMovingFrom:(CGPoint)arg2 toPoint:(CGPoint)arg3 ;
-(void)tableViewDidFinishScrolling:(id)arg1 ;
-(void)tableView:(id)arg1 performDragOperation:(unsigned long long)arg2 withPasteboard:(id)arg3 ;
-(double)alphaForItem:(id)arg1 throbs:(unsigned long long)arg2 ;
-(id)displayNameForItem:(id)arg1 ;
-(id)displayStatusForItem:(id)arg1 ;
-(void)_localeChangedRefresh;
-(void)_updateLayoutToMatchScrollerStyle;
-(void)_configureTableColumns;
-(void)setupUI;
-(void)_processStatusChangeQueueUnforced;
-(void)_processStatusChangeQueueForced;
-(void)_endAnimationSuppression;
-(void)_setPeopleListItemNeedsDisplay:(id)arg1 ;
-(void)_peopleListItemNeedsSorting:(id)arg1 ;
-(void)_processGroupChangeQueue;
-(void)_animateTransitions:(id)arg1 ;
-(unsigned long long)_visibleIndexOfIMHandle:(id)arg1 startingAtIndex:(int)arg2 ;
-(void)_rebuildItems;
-(void)_pulseIMHandle:(id)arg1 inCollection:(id)arg2 ;
-(void)_stopTransitions;
-(id)_selectedIMHandlesPreferHandleForDefaultAction:(char)arg1 includeAllIMHandlesIfNotUsingPreferred:(char)arg2 ;
-(void)_rememberSelection;
-(void)_restoreSelection;
-(id)sortDefaultKey;
-(void)_processIMHandleForGroupChange:(id)arg1 ;
-(void)_processStatusChangeQueue;
-(id)imHandleAtRow:(long long)arg1 ;
-(id)_propertyListForIMHandles:(id)arg1 inGroup:(id)arg2 ;
-(char)_mouseInButtons:(id)arg1 ;
-(void)_getIMHandles:(id*)arg1 andGroups:(id*)arg2 fromPasteboard:(id)arg3 allowDuplicates:(char)arg4 ;
-(id)_groupsForIMHandle:(id)arg1 inItem:(id)arg2 ;
-(id)_peopleToAddFromABPerson:(id)arg1 isOK:(char*)arg2 ;
-(id)_imHandlePropertyListArrayForRows:(id)arg1 ;
-(id)peopleFromPasteboard:(id)arg1 addToAB:(char)arg2 notAddablePeople:(id*)arg3 ;
-(void)_promptToAddABPeople:(id)arg1 toGroup:(id)arg2 ;
-(CGRect)_vcRectOfRow:(int)arg1 ;
-(void)setHides:(unsigned long long)arg1 to:(char)arg2 ;
-(id)tableView:(id)arg1 numberStringForPeopleListGroup:(id)arg2 ignoreCollapsed:(char)arg3 ;
-(void)_showSelectedInfo:(char)arg1 ;
-(void)_mergeBuddies:(id)arg1 ;
-(void)_peopleListItemNeedsUpdating:(id)arg1 ;
-(void)_peopleListItemSortOrderChangedNotification:(id)arg1 ;
-(void)_peopleListItemNeedsGroupChange:(id)arg1 ;
-(void)_peopleListItemAnimationStateChanged:(id)arg1 ;
-(char)peopleListItem:(id)arg1 canTransitionToStatus:(unsigned long long)arg2 ;
-(void)_customColorChangedForIMHandle:(id)arg1 ;
-(unsigned long long)_visibleIndexOfItem:(id)arg1 startingAtIndex:(int)arg2 ;
-(void)_refreshContents;
-(id)imHandleForObjectValue:(id)arg1 ;
-(SCD_Struct_Pe15)_FezSortParameters;
-(long long)secondarySortOrder;
-(void)setIMHandleNeedsDisplay:(id)arg1 ;
-(id)trackingPeopleListItem;
-(void)showContextMenuForPeopleListItem:(id)arg1 ;
-(void)setContextMenu:(NSMenu *)arg1 ;
-(NSTableColumn *)nameColumn;
-(void)setNameColumn:(NSTableColumn *)arg1 ;
-(NSTableColumn *)pictureColumn;
-(void)setPictureColumn:(NSTableColumn *)arg1 ;
-(void)sendFile:(id)arg1 ;
-(NSMenu *)contextMenu;
-(void)addToAddressBook:(id)arg1 ;
-(id)contextualMenu;
-(void)setTable:(AnimatingTableView *)arg1 ;
-(void)beginChanges;
-(void)endChanges;
-(void)removeIMHandle:(id)arg1 fromGroups:(id)arg2 ;
-(void)sendMessage:(id)arg1 ;
-(void)objectDidPostDirectNotification:(id)arg1 ;
-(void)setSortOrder:(long long)arg1 ;
-(void)setGroups:(id)arg1 ;
-(void)_removeGroup:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<PeopleListDelegate>)arg1 ;
-(void)dealloc;
-(id<PeopleListDelegate>)delegate;
-(char)validateMenuItem:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)awakeFromNib;
-(void)menuNeedsUpdate:(id)arg1 ;
-(char)validateAction:(SEL)arg1 ;
-(AnimatingTableView *)table;
-(id)tableView:(id)arg1 objectValueForRow:(long long)arg2 ;
-(long long)sortOrder;
-(void)_updateLayout;
@end

