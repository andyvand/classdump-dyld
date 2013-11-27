/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SIMToolkitUI/STKBaseAlertViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray;

@interface STKListDisplayAlertViewController : STKBaseAlertViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	NSArray* _items;

}
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)newTopBar;
-(void)rightNavigationButtonPressed;
-(void)leftNavigationButtonPressed;
-(id)_simToolkitListItems;
-(void)_selectListItem:(unsigned long)arg1 ;
@end
