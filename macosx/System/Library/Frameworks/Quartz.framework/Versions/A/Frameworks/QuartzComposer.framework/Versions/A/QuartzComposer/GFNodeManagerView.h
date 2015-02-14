/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class NSView, NSString, NSMutableArray, NSTableView, NSTextView, NSCell;

@interface GFNodeManagerView : NSView {

	NSView* _insideView;
	NSString* _namespace;
	NSString* _filterString;
	NSMutableArray* _nodeNames;
	NSTableView* _tableView;
	NSTextView* _textView;
	NSCell* _defaultDataCell;
	void** _unused[4];

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2 ;
-(void)setFilterString:(id)arg1 ;
-(char)tableView:(id)arg1 writeRows:(id)arg2 toPasteboard:(id)arg3 ;
-(void)_finishInitialization;
-(id)nodeNamespace;
-(void)_removeAllColumns;
-(void)_addColumnWithIdentifier:(id)arg1 title:(id)arg2 dataCell:(id)arg3 sortable:(char)arg4 ;
-(void)_refreshList:(id)arg1 ;
-(void)_sortByIdentifiers:(id)arg1 ;
-(void)_selectRow:(unsigned long long)arg1 ;
-(void)setNodeNamespace:(id)arg1 ;
-(id)filterString;
-(void)_tableViewDoubleClick;
-(id)_filterStringsForNode:(id)arg1 ;
-(id)_descriptionForNode:(id)arg1 ;
-(id)_cellContentForNode:(id)arg1 columnIdentifier:(id)arg2 ;
-(long long)_compareNode:(id)arg1 withNode:(id)arg2 usingColumnIdentifier:(id)arg3 ascending:(char)arg4 ;
-(void)_removeColumnWithIdentifier:(id)arg1 ;
-(id)_columns;
@end

