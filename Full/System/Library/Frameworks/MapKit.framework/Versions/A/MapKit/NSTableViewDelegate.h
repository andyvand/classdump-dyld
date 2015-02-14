/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSTableViewDelegate <NSControlTextEditingDelegate>
@optional
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
-(void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
-(void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
-(char)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
-(id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(CGRect*)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(CGPoint)arg6;
-(char)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
-(char)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
-(id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
-(char)selectionShouldChangeInTableView:(id)arg1;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
-(char)tableView:(id)arg1 shouldSelectTableColumn:(id)arg2;
-(void)tableView:(id)arg1 mouseDownInHeaderOfTableColumn:(id)arg2;
-(void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
-(void)tableView:(id)arg1 didDragTableColumn:(id)arg2;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2;
-(id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
-(long long)tableView:(id)arg1 nextTypeSelectMatchFromRow:(long long)arg2 toRow:(long long)arg3 forString:(id)arg4;
-(char)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
-(char)tableView:(id)arg1 isGroupRow:(long long)arg2;
-(double)tableView:(id)arg1 sizeToFitWidthOfColumn:(long long)arg2;
-(char)tableView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
-(void)tableViewSelectionDidChange:(id)arg1;
-(void)tableViewColumnDidMove:(id)arg1;
-(void)tableViewColumnDidResize:(id)arg1;
-(void)tableViewSelectionIsChanging:(id)arg1;

@end

