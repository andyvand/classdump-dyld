/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <Calendar/NSTableViewDataSource.h>
#import <Calendar/NSTableViewDelegate.h>

@protocol CalUIOccurrenceListDelegate;
@class CalUIOccurrenceListView, NSScrollView, NSIndexSet, NSTextField, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;

@interface CalUIOccurrenceListController : NSViewController <NSTableViewDataSource, NSTableViewDelegate> {

	char _showEmptyToday;
	char _isReloadingTable;
	id<CalUIOccurrenceListDelegate> _delegate;
	CalUIOccurrenceListView* _occurrenceList;
	NSScrollView* _scrollView;
	NSIndexSet* _selectedRowIndexes;
	NSTextField* _noEventsLabel;
	NSMutableArray* _listContents;
	NSMutableDictionary* _occurrenceIndexes;
	NSMutableDictionary* _dateIndexes;
	NSMutableIndexSet* _expandedRows;

}

@property (assign,nonatomic,__weak) id<CalUIOccurrenceListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char showEmptyToday;                                                    //@synthesize showEmptyToday=_showEmptyToday - In the implementation block
@property (retain) CalUIOccurrenceListView * occurrenceList;                               //@synthesize occurrenceList=_occurrenceList - In the implementation block
@property (readonly) NSScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (copy) NSIndexSet * selectedRowIndexes;                                          //@synthesize selectedRowIndexes=_selectedRowIndexes - In the implementation block
@property (__weak) NSTextField * noEventsLabel;                                            //@synthesize noEventsLabel=_noEventsLabel - In the implementation block
@property (retain) NSMutableArray * listContents;                                          //@synthesize listContents=_listContents - In the implementation block
@property (retain) NSMutableDictionary * occurrenceIndexes;                                //@synthesize occurrenceIndexes=_occurrenceIndexes - In the implementation block
@property (retain) NSMutableDictionary * dateIndexes;                                      //@synthesize dateIndexes=_dateIndexes - In the implementation block
@property (retain) NSMutableIndexSet * expandedRows;                                       //@synthesize expandedRows=_expandedRows - In the implementation block
@property (assign) char isReloadingTable;                                                  //@synthesize isReloadingTable=_isReloadingTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)selectedEvents;
-(CalUIOccurrenceListView *)occurrenceList;
-(id)dateForFirstVisibleRow;
-(void)setSelectedRowIndexes:(NSIndexSet *)arg1 ;
-(void)setShowEmptyToday:(char)arg1 ;
-(void)tableViewScrolled:(id)arg1 ;
-(long long)rowForOccurrenceID:(id)arg1 date:(id)arg2 ;
-(id)_listObjectAtIndex:(long long)arg1 ;
-(id)dateForRow:(long long)arg1 ;
-(char)showEmptyToday;
-(char)showsDateRows;
-(long long)rowForOccurrenceID:(id)arg1 ;
-(long long)nextNonGroupRowFromRow:(long long)arg1 ;
-(long long)_groupRowForRow:(long long)arg1 ;
-(char)_scrollRowFlushToTop:(long long)arg1 animate:(char)arg2 ;
-(char)tableView:(id)arg1 isDashedRow:(long long)arg2 ;
-(void)showInlineInspectorForSelectedOccurrence;
-(id)lastSelectedOccurrence;
-(void)selectFirstOccurrenceForDate:(id)arg1 ;
-(void)_updateExpandedRowsToRowIndexes:(id)arg1 ;
-(id)initWithSuperView:(id)arg1 ;
-(void)selectOccurrence:(id)arg1 forDate:(id)arg2 ;
-(long long)previousNonGroupRowFromRow:(long long)arg1 ;
-(void)scrollDateToTopOfList:(id)arg1 animate:(char)arg2 ;
-(char)_handleKeyDownEvent:(id)arg1 ;
-(void)_changeSelectedRowExpansion:(int)arg1 ;
-(void)pulseSelectedOccurrence;
-(void)setOccurrenceList:(CalUIOccurrenceListView *)arg1 ;
-(NSMutableArray *)listContents;
-(void)setListContents:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)occurrenceIndexes;
-(void)setOccurrenceIndexes:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dateIndexes;
-(void)setDateIndexes:(NSMutableDictionary *)arg1 ;
-(NSMutableIndexSet *)expandedRows;
-(void)setExpandedRows:(NSMutableIndexSet *)arg1 ;
-(char)isReloadingTable;
-(void)setIsReloadingTable:(char)arg1 ;
-(NSTextField *)noEventsLabel;
-(void)setNoEventsLabel:(NSTextField *)arg1 ;
-(void)selectRow:(long long)arg1 ;
-(void)setDelegate:(id<CalUIOccurrenceListDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CalUIOccurrenceListDelegate>)delegate;
-(void)activate;
-(void)deactivate;
-(long long)numberOfRows;
-(void)reloadData;
-(void)scrollRowToVisible:(long long)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(NSIndexSet *)selectedRowIndexes;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 isGroupRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)_commonInit;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)nibName;
-(id)calendar;
-(NSScrollView *)scrollView;
-(id)occurrenceIndex;
@end

