/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/ParentalControls.prefPane/Contents/MacOS/ParentalControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ParentalControls/ParentalControls-Structs.h>
#import <ParentalControls/FamilyPrefTabController.h>

@class FamilyPrefLogOutlineView, NSTableView, NSButton, FamilyPrefSystemTabController, FamilyPrefFilteringTabController, FamilyPrefEmailChatTabController, NSWindow, NSTextField, NSPopUpButton, NSMenu, NSMutableArray, NSMutableDictionary, FCUserEventsManager, NSString, NSArray, NSMutableSet;

@interface FamilyPrefLogTabController : FamilyPrefTabController {

	FamilyPrefLogOutlineView* _logView;
	NSTableView* _collectionTable;
	NSButton* _timeSpanPopupButton;
	FamilyPrefSystemTabController* _systemTabController;
	FamilyPrefFilteringTabController* _filteringTabController;
	FamilyPrefEmailChatTabController* _emailChatTabController;
	NSButton* _openButton;
	NSButton* _restrictButton;
	NSWindow* _restrictSheet;
	NSTextField* _restrictSheetTitle;
	NSTextField* _restrictSheetDescription;
	NSButton* _showDatesCheckbox;
	NSPopUpButton* _groupByPopupButton;
	NSMenu* _clearLogsMenu;
	NSWindow* _logsSheet;
	NSTextField* _longestCategoryTextField;
	long long _span;
	char _enabled;
	char _showDates;
	char _userSelected;
	char _mocLoaded;
	NSMutableArray* _collections;
	NSMutableArray* _dateArray;
	NSMutableDictionary* _dateArrayCache;
	NSMutableDictionary* _logContainerArraysByDateRangeCache;
	FCUserEventsManager* _userEventsManager;
	NSString* _currentLogType;
	NSArray* _currentObjectArray;
	NSMutableSet* _otherControllersThatNeedSaving;
	NSMutableDictionary* _allowedAppStateCache;
	NSString* _currentScope;

}

@property (assign) NSString * currentScope;              //@synthesize currentScope=_currentScope - In the implementation block
-(char)applicationShouldTerminate;
-(void)iconLoadingDidFinish;
-(void)selectUser:(id)arg1 force:(char)arg2 ;
-(void)setCurrentScope:(NSString *)arg1 ;
-(void)checkButtonStates;
-(char)itemIsWhitelistable:(id)arg1 ;
-(void)asyncDateArrayWithCompletionBlock:(/*^block*/id)arg1 results:(id*)arg2 ;
-(void)clearLogsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)delayedSelectUser;
-(void)setCurrentLogType:(id)arg1 ;
-(void)_createEventsMOCForUser:(id)arg1 ;
-(id)_objectsForDateStarting:(id)arg1 ending:(id)arg2 logType:(id)arg3 ;
-(id)fetchObjectsAsyncForStartDate:(id)arg1 endDate:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_dateArrayForLogType:(id)arg1 ;
-(id)_chatsForDateStarting:(id)arg1 ending:(id)arg2 ;
-(id)_appsForDateStarting:(id)arg1 ending:(id)arg2 ;
-(id)_sitesForDateStarting:(id)arg1 ending:(id)arg2 logType:(id)arg3 ;
-(id)_fetchRequestForEntityName:(id)arg1 ;
-(id)_resultsForRequest:(id)arg1 entityName:(id)arg2 ;
-(id)fetchObjectsAsyncForDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_attrStringForWebDict:(id)arg1 ;
-(void)clearLogHistory:(id)arg1 ;
-(id)chatDirectoryPath;
-(void)groupByPopupChanged:(id)arg1 ;
-(void)removeFromWhiteList:(id)arg1 ;
-(void)intervalPopupChanged:(id)arg1 ;
-(id)logView;
-(id)currentLogType;
-(void)showLogs:(id)arg1 ;
-(void)logSheetDone:(id)arg1 ;
-(int)_spanDays;
-(char)outlineViewItemIsContainer:(id)arg1 ;
-(char)itemIsOpenable:(id)arg1 ;
-(void)openLog:(id)arg1 ;
-(NSString *)currentScope;
-(char)itemIsAllowed:(id)arg1 ;
-(char)_appIsAllowed:(id)arg1 ;
-(void)willSelect;
-(void)setEnabled:(char)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)awakeFromNib;
-(void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(CGRect*)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(CGPoint)arg6 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(void)save;
@end
