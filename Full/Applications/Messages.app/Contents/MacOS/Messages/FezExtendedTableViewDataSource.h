/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FezExtendedTableViewDataSource
@optional
-(char)tableView:(id)arg1 canDeleteRows:(id)arg2;
-(char)tableView:(id)arg1 deleteRows:(id)arg2;
-(void)tableView:(id)arg1 draggingEntered:(id)arg2;
-(void)tableView:(id)arg1 draggingEnded:(id)arg2;
-(void)fezExtendedTableView:(id)arg1 draggingSession:(id)arg2 movedToPoint:(CGPoint)arg3;
-(id)fezExtendedTableView:(id)arg1 dragImage:(id)arg2 forRowsWithIndexes:(id)arg3 tableColumns:(id)arg4 event:(id)arg5 offset:(CGPoint*)arg6;
-(char)tableView:(id)arg1 canPasteFromPasteboard:(id)arg2;
-(char)tableView:(id)arg1 pasteFromPasteboard:(id)arg2;
-(unsigned long long)tableView:(id)arg1 groupRowGreaterThanIndex:(unsigned long long)arg2;
-(id)tableView:(id)arg1 cellTipForRow:(long long)arg2;
-(char)tableView:(id)arg1 groupRowAtIndex:(long long)arg2;
-(id)tableView:(id)arg1 titleForGroupRow:(long long)arg2;
-(id)tableView:(id)arg1 numberStringForGroupRow:(long long)arg2 ignoreCollapsed:(char)arg3;
-(void)tableView:(id)arg1 groupRowClicked:(long long)arg2;
-(void)tableView:(id)arg1 willReturnMenu:(id)arg2 forRow:(long long)arg3;
-(id)tableView:(id)arg1 menuForGroupRow:(long long)arg2;
-(char)tableView:(id)arg1 shouldShowTooltipForRow:(long long)arg2;
-(id)tableView:(id)arg1 tooltipForRow:(long long)arg2;
-(void)tableView:(id)arg1 performDragOperation:(unsigned long long)arg2 withPasteboard:(id)arg3;
-(id)tableView:(id)arg1 numberStringForPeopleListGroup:(id)arg2 ignoreCollapsed:(char)arg3;

@end
