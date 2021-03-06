/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSTableViewDataSource.h>
#import <Safari/NSTableViewDelegate.h>

@class NSMutableSet, NSString;

@interface CompletionControllerObjCAdapter : NSObject <NSTableViewDataSource, NSTableViewDelegate> {

	CompletionController* _completionController;
	NSMutableSet* _completionAbortingNotificationNames;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReloadOfCompletionList;
-(id)initWithCompletionController:(CompletionController*)arg1 ;
-(void)completionListDidHide;
-(void)completionListDidShow;
-(void)_unregisterForCompletionAbortingNotifications;
-(void)_registerForCompletionAbortingNotifications;
-(void)_registerForCompletionAbortingNotificationNamed:(id)arg1 object:(id)arg2 ;
-(void)_abortCompletionFromNotification:(id)arg1 ;
-(char)completionListTableView:(id)arg1 rowIsSeparator:(long long)arg2 ;
-(char)completionListTableView:(id)arg1 rowIsChecked:(long long)arg2 ;
-(char)completionListTableView:(id)arg1 rowSpansAllColumns:(long long)arg2 ;
-(long long)completionListTableViewUserInterfaceLayoutDirection:(id)arg1 ;
-(void)completionListTableView:(id)arg1 mouseUpInRow:(long long)arg2 ;
-(CompletionController*)completionController;
-(void)invalidate;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)tableViewSelectionIsChanging:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
@end

