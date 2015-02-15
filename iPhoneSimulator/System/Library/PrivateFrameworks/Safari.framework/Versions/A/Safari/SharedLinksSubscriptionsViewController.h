/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <Safari/NSTableViewDataSource.h>
#import <Safari/NSTableViewDelegate.h>

@class TableViewPlus, SharedLinksAddFeedController, NSMutableArray, NSArray, NSString;

@interface SharedLinksSubscriptionsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate> {

	TableViewPlus* _subscriptionsTableView;
	SharedLinksAddFeedController* _addFeedController;
	NSMutableArray* _tableContent;
	NSArray* _subscribedFeeds;
	NSArray* _socialAccounts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_socialAccountsDidChange:(id)arg1 ;
-(void)_rowClicked:(id)arg1 ;
-(void)_iconsChanged:(id)arg1 ;
-(void)_feedSubscriptionsDidChange:(id)arg1 ;
-(void)_collectData;
-(id)_headerCellWithText:(id)arg1 inTableView:(id)arg2 ;
-(id)_socialCellWithAccount:(id)arg1 inTableView:(id)arg2 ;
-(id)_subscriptionCellWithFeedSource:(id)arg1 inTableView:(id)arg2 ;
-(id)_addFeedCellinTableView:(id)arg1 ;
-(id)_addAccountCellInTableView:(id)arg1 ;
-(id)_textAttributesForFont:(id)arg1 ;
-(id)_headerTextAttributes;
-(id)_socialSourceForAccount:(id)arg1 ;
-(void)_socialAccountCheckboxClicked:(id)arg1 ;
-(void)_removeButtonClicked:(id)arg1 ;
-(void)_addFeedButtonClicked:(id)arg1 ;
-(void)_addAccountButtonClicked:(id)arg1 ;
-(void)_dataChanged;
-(void)_collectSocialAccounts;
-(void)_collectSubscribedFeeds;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(char)selectionShouldChangeInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)_textAttributes;
-(void)awakeFromNib;
-(id)nibName;
@end

