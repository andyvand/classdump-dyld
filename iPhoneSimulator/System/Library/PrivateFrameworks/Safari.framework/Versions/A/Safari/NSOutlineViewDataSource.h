/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:10 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSOutlineViewDataSource <NSObject>
@optional
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
-(void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
-(id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2;
-(id)outlineView:(id)arg1 persistentObjectForItem:(id)arg2;
-(void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
-(id)outlineView:(id)arg1 pasteboardWriterForItem:(id)arg2;
-(void)outlineView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(CGPoint)arg3 forItems:(id)arg4;
-(void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 operation:(unsigned long long)arg4;
-(char)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
-(void)outlineView:(id)arg1 updateDraggingItemsForDrag:(id)arg2;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
-(id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3;

@end

