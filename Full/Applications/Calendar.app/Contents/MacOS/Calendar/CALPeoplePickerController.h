/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <AppKit/NSWindowController.h>
#import <Calendar/CalAutoCompleteDelegate.h>
#import <Calendar/NSSplitViewDelegate.h>
#import <Calendar/NSTableViewDataSource.h>
#import <Calendar/NSTableViewDelegate.h>
#import <Calendar/NSWindowDelegate.h>

@class ABPeoplePickerView, NSArray, NSBox, NSTableView, NSSearchField, NSSplitView, NSProgressIndicator, NSTextField, NSView, CalAutoCompleteOperation, NSMutableArray, NSString;

@interface CALPeoplePickerController : NSWindowController <CalAutoCompleteDelegate, NSSplitViewDelegate, NSTableViewDataSource, NSTableViewDelegate, NSWindowDelegate> {

	ABPeoplePickerView* _abPickerView;
	NSArray* _typeIdentifiers;
	NSBox* _topLine;
	NSBox* _bottomLine;
	NSTableView* _odAddressTableView;
	NSTableView* _odTypeTableView;
	NSSearchField* _odSearchField;
	NSSplitView* _odSplitView;
	NSProgressIndicator* _odProgressView;
	NSTextField* _odCountView;
	NSTextField* _searchTitleView;
	NSBox* _odBoxView;
	NSView* _peoplePickerPlaceholderView;
	char _windowOpen;
	CalAutoCompleteOperation* _acOp;
	NSMutableArray* _sortedEntries;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPicker;
-(id)mainController;
-(void)typeSelectionDidChange:(id)arg1 ;
-(void)nodeSelectionDidChange:(id)arg1 ;
-(void)setHiddenOpenDirectory:(char)arg1 ;
-(void)setHiddenAddressBook:(char)arg1 ;
-(void)kickOffSearch;
-(void)switchToOpenDirectoryPicker;
-(void)switchToAddressBookPicker;
-(void)hideWindow:(id)arg1 ;
-(long long)selectedODType;
-(void)updateSpinner;
-(id)abPersonFromWrapper:(id)arg1 ;
-(id)attendeeRepresentationForResource:(id)arg1 ;
-(char)windowOpened;
-(void)toggleWindowVisibility;
-(void)searchFieldChanged:(id)arg1 ;
-(void)openInAddressBook:(id)arg1 ;
-(void)dealloc;
-(void)showWindow:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(CGRect*)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(CGPoint)arg6 ;
-(char)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(void)awakeFromNib;
-(void)windowWillClose:(id)arg1 ;
-(id)windowNibName;
-(id)initWithWindowNibName:(id)arg1 owner:(id)arg2 ;
-(void)windowDidBecomeMain:(id)arg1 ;
-(char)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2 ;
-(void)startedAutoComplete:(id)arg1 ;
-(void)finishedAutoComplete:(id)arg1 ;
@end

