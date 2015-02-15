/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSBrowserDelegate <NSObject>
@optional
-(id)browser:(id)arg1 titleOfColumn:(long long)arg2;
-(char)browser:(id)arg1 selectCellWithString:(id)arg2 inColumn:(long long)arg3;
-(char)browser:(id)arg1 selectRow:(long long)arg2 inColumn:(long long)arg3;
-(char)browser:(id)arg1 isColumnValid:(long long)arg2;
-(void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4;
-(long long)browser:(id)arg1 numberOfRowsInColumn:(long long)arg2;
-(double)browser:(id)arg1 shouldSizeColumn:(long long)arg2 forUserResize:(char)arg3 toWidth:(double)arg4;
-(double)browser:(id)arg1 sizeToFitWidthOfColumn:(long long)arg2;
-(long long)browser:(id)arg1 numberOfChildrenOfItem:(id)arg2;
-(id)browser:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
-(char)browser:(id)arg1 isLeafItem:(id)arg2;
-(id)browser:(id)arg1 objectValueForItem:(id)arg2;
-(void)browser:(id)arg1 didChangeLastColumn:(long long)arg2 toColumn:(long long)arg3;
-(id)rootItemForBrowser:(id)arg1;
-(void)browser:(id)arg1 createRowsForColumn:(long long)arg2 inMatrix:(id)arg3;
-(id)browser:(id)arg1 previewViewControllerForLeafItem:(id)arg2;
-(id)browser:(id)arg1 headerViewControllerForItem:(id)arg2;
-(char)browser:(id)arg1 shouldShowCellExpansionForRow:(long long)arg2 column:(long long)arg3;
-(void)browserWillScroll:(id)arg1;
-(void)browserDidScroll:(id)arg1;
-(id)browser:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 inColumn:(long long)arg3;
-(char)browser:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
-(id)browser:(id)arg1 typeSelectStringForRow:(long long)arg2 inColumn:(long long)arg3;
-(long long)browser:(id)arg1 nextTypeSelectMatchFromRow:(long long)arg2 toRow:(long long)arg3 inColumn:(long long)arg4 forString:(id)arg5;
-(char)browser:(id)arg1 writeRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 toPasteboard:(id)arg4;
-(id)browser:(id)arg1 draggingImageForRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 withEvent:(id)arg4 offset:(CGPoint*)arg5;
-(char)browser:(id)arg1 canDragRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 withEvent:(id)arg4;
-(unsigned long long)browser:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long*)arg3 column:(long long*)arg4 dropOperation:(unsigned long long*)arg5;
-(char)browser:(id)arg1 acceptDrop:(id)arg2 atRow:(long long)arg3 column:(long long)arg4 dropOperation:(unsigned long long)arg5;
-(id)browser:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3 inColumn:(long long)arg4;
-(void)browser:(id)arg1 setObjectValue:(id)arg2 forItem:(id)arg3;
-(char)browser:(id)arg1 shouldEditItem:(id)arg2;
-(double)browser:(id)arg1 heightOfRow:(long long)arg2 inColumn:(long long)arg3;
-(void)browserColumnConfigurationDidChange:(id)arg1;

@end
