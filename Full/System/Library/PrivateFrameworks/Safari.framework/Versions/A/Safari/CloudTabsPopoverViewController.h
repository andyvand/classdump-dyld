/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <Safari/NSTableViewDataSource.h>
#import <Safari/NSTableViewDelegate.h>
#import <Safari/NSPopoverDelegate.h>
#import <Safari/CloudTabsPopoverTableViewDelegate.h>
#import <Safari/AccessibleRolloverActionButtonTableCellViewDelegate.h>
#import <Safari/RolloverActionButtonTableCellViewDelegate.h>

@class NSTextField, NSImageView, NSScrollView, NSTableView, NSPopover, BrowserWindowControllerMac, NSArray, NSString;

@interface CloudTabsPopoverViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSPopoverDelegate, CloudTabsPopoverTableViewDelegate, AccessibleRolloverActionButtonTableCellViewDelegate, RolloverActionButtonTableCellViewDelegate> {

	NSTextField* _titleLabel;
	NSImageView* _iCloudImageView;
	NSTextField* _emptyTabsLabel;
	NSScrollView* _scrollView;
	NSTableView* _tableView;
	NSPopover* _popover;
	BrowserWindowControllerMac* _controller;
	NSArray* _cloudTabDevices;
	double _deviceRowHeight;
	double _tabRowHeight;
	char _shouldReloadCloudTabDevicesAndTable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accessibilityGetDescriptionForAccessibleRolloverActionButtonTableCellView:(id)arg1 ;
-(void)accessibilityPerformPressActionForAccessibleRolloverActionButtonTableCellView:(id)arg1 ;
-(void)_iconDidChange:(id)arg1 ;
-(void)_didRemoveAllIcons:(id)arg1 ;
-(id)initWithPopover:(id)arg1 ;
-(char)cloudTabsPopoverTableView:(id)arg1 handleKeyDown:(id)arg2 ;
-(void)_loadCloudTabDevices;
-(void)_syncedCloudTabDevicesDidChange:(id)arg1 ;
-(void)_updatePopoverViewsVisibility;
-(double)_maxHeightForPopover;
-(void)_reloadCloudTabDevicesAndTable;
-(CGSize)_bestSizeForPopover;
-(void)_reloadCloudTabDevicesAndTableSoon;
-(id)_cloudTabOrDeviceForIndex:(unsigned long long)arg1 owningDevice:(id*)arg2 ;
-(id)_cloudTabOrDeviceForIndex:(unsigned long long)arg1 ;
-(char)goToCloudTabAtRow:(long long)arg1 ;
-(char)_shouldDrawBackgroundForRow:(long long)arg1 ;
-(char)_shouldDrawSeparatorForRow:(long long)arg1 ;
-(id)_imageForCloudTab:(id)arg1 ;
-(void)actionButtonClickedInTableCellView:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)setController:(id)arg1 ;
-(void)awakeFromNib;
-(void)tableViewAction:(id)arg1 ;
-(void)popoverWillShow:(id)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
@end

