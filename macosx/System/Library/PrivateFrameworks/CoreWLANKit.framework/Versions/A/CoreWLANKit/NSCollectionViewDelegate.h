/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSCollectionViewDelegate <NSObject>
@optional
-(id)collectionView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItemsAtIndexes:(id)arg3;
-(char)collectionView:(id)arg1 canDragItemsAtIndexes:(id)arg2 withEvent:(id)arg3;
-(char)collectionView:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
-(id)collectionView:(id)arg1 draggingImageForItemsAtIndexes:(id)arg2 withEvent:(id)arg3 offset:(CGPoint*)arg4;
-(id)collectionView:(id)arg1 pasteboardWriterForItemAtIndex:(unsigned long long)arg2;
-(void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(CGPoint)arg3 forItemsAtIndexes:(id)arg4;
-(void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 dragOperation:(unsigned long long)arg4;
-(unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndex:(long long*)arg3 dropOperation:(long long*)arg4;
-(void)collectionView:(id)arg1 updateDraggingItemsForDrag:(id)arg2;
-(char)collectionView:(id)arg1 acceptDrop:(id)arg2 index:(long long)arg3 dropOperation:(long long)arg4;

@end

