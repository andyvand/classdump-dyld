/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <Safari/SidebarContentViewController.h>

@class ReadingListTableViewController, BrowserWindowControllerMac, NSString;

@interface ReadingListSidebarViewControllerBase : NSViewController <SidebarContentViewController> {

	ReadingListTableViewController* _tableViewController;
	BrowserWindowControllerMac* _windowController;

}

@property (nonatomic,retain) ReadingListTableViewController * tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
@property (assign,nonatomic,__weak) BrowserWindowControllerMac * windowController;              //@synthesize windowController=_windowController - In the implementation block
@property (nonatomic,readonly) char canSelectAnyReadingListItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableViewController:(ReadingListTableViewController *)arg1 ;
-(ReadingListTableViewController *)tableViewController;
-(void)selectCurrentlyLoadedReadingListItem;
-(void)wasInstalledBySidebarViewController:(id)arg1 ;
-(char)canSelectAnyReadingListItem;
-(void)selectNextReadingListItem;
-(void)selectPreviousReadingListItem;
-(id)_readingListTableView;
-(void)_selectReadingListItemWithRowIndexFromBlock:(/*^block*/id)arg1 ;
-(BrowserWindowControllerMac *)windowController;
-(void)setWindowController:(BrowserWindowControllerMac *)arg1 ;
@end

