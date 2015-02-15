/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class IAAccount, NSMutableArray, NSArray, NSScrollView, NSTableView, NSDictionary;

@interface IAAppTableController : NSViewController {

	IAAccount* _account;
	NSMutableArray* _apps;
	NSMutableArray* _pairedServices;
	id _delegate;
	char _spinOnSelection;
	char _enabled;
	NSArray* _topLevelObjects2;
	NSScrollView* _scrollView;
	NSTableView* _appTable;
	NSDictionary* _pluginProperties;

}

@property (nonatomic,retain) IAAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (retain) NSMutableArray * apps;                                          //@synthesize apps=_apps - In the implementation block
@property (retain) NSMutableArray * pairedServices;                                //@synthesize pairedServices=_pairedServices - In the implementation block
@property (retain) id<IAAppTableControllerDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char spinOnSelection;                                           //@synthesize spinOnSelection=_spinOnSelection - In the implementation block
-(id)selectedApps;
-(void)setSpinOnSelection:(char)arg1 ;
-(void)configureForProvider:(id)arg1 ;
-(NSMutableArray *)apps;
-(void)_applyExceptions:(id)arg1 ;
-(void)setApps:(NSMutableArray *)arg1 ;
-(void)setPairedServices:(NSMutableArray *)arg1 ;
-(void)_sortApps;
-(char)spinOnSelection;
-(void)selectApp:(id)arg1 ;
-(void)deselectApp:(id)arg1 ;
-(id)rowViewForApp:(id)arg1 ;
-(void)stopProgressForApp:(id)arg1 ;
-(void)selectAllApps;
-(void)selectAppIDs:(id)arg1 ;
-(void)forceAppIDsEnabled:(id)arg1 ;
-(void)updateTable;
-(id)appsTable;
-(id)appAtRow:(long long)arg1 ;
-(id)appsWithBundleIDs:(id)arg1 ;
-(void)startProgressForApp:(id)arg1 ;
-(void)deselectAppID:(id)arg1 ;
-(void)stopProgressForAllApps;
-(void)checkbox:(id)arg1 clickedForApp:(id)arg2 ;
-(NSMutableArray *)pairedServices;
-(char)enabled;
-(id)initWithAccount:(id)arg1 ;
-(void)setServices:(id)arg1 ;
-(void)setDelegate:(id<IAAppTableControllerDelegateProtocol>)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)view;
-(id<IAAppTableControllerDelegateProtocol>)delegate;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(IAAccount *)account;
-(void)setAccount:(IAAccount *)arg1 ;
@end

