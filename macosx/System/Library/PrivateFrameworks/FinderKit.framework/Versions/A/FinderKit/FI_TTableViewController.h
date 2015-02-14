/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_IBaseTableViewController.h>
#import <FinderKit/NSTableViewDelegate.h>

@class FI_TTableViewDataSource, NSString;

@interface FI_TTableViewController : FI_IBaseTableViewController <NSTableViewDelegate>

@property (retain,readonly) FI_TTableViewDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewLoaded;
-(Class)dataSourceClass;
-(id)tableViewNoLoad;
-(void)finalize;
-(void)dealloc;
-(id)tableView;
-(void)setView:(id)arg1 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(FI_TTableViewDataSource *)dataSource;
@end

