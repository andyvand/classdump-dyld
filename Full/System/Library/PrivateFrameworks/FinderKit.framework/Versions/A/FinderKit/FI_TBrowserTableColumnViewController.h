/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/_NSBrowserTableColumnViewController.h>

@interface FI_TBrowserTableColumnViewController : _NSBrowserTableColumnViewController {

	TNSRef<FI_TColumnViewController *> _columnViewController;

}
-(id)columnViewController;
-(id)browserTableView;
-(BOOL)selectionShouldChangeInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(char)tableView:(id)arg1 isGroupRow:(long long)arg2 ;
@end

