/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>
#import <Safari/NSWindowDelegate.h>

@class NSTableView, NSButton, NSString;

@interface SheetWithTableController : NSWindowController <NSWindowDelegate> {

	NSTableView* tableView;
	NSButton* removeButton;
	NSButton* removeAllButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showSheetInWindow:(id)arg1 ;
-(void)hideSheet:(id)arg1 ;
-(void)reloadTableData;
-(void)removeAllItems:(id)arg1 ;
-(void)removeSelectedItems:(id)arg1 ;
-(char)outlineView:(id)arg1 keyDown:(id)arg2 ;
-(char)tableView:(id)arg1 keyDown:(id)arg2 ;
-(void)updateRemoveButtons;
-(char)canRemoveSelectedItems;
-(char)canRemoveAllItems;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)windowDidLoad;
-(void)delete:(id)arg1 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
@end

