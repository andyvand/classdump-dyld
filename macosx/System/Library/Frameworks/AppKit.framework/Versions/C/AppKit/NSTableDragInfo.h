/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSIndexSet;

@interface NSTableDragInfo : NSObject {

	unsigned long long _dragOperation;
	long long _dropCandidateRow;
	unsigned long long _tableViewDropOperation;
	NSIndexSet* _draggedRowIndexes;
	long long _lastDropHoverRow;
	unsigned long long _lastDropHoverSourceMask;
	CGRect _lastOffscreenDropIndicatorFrame;
	id _dropCandidateItem;
	long long _dropCandidateChildIndex;
	long long _dropCandidateParentRow;

}

@property (assign,nonatomic) unsigned long long dragOperation;                        //@synthesize dragOperation=_dragOperation - In the implementation block
@property (assign,nonatomic) long long dropCandidateRow;                              //@synthesize dropCandidateRow=_dropCandidateRow - In the implementation block
@property (assign,nonatomic) unsigned long long tableViewDropOperation;               //@synthesize tableViewDropOperation=_tableViewDropOperation - In the implementation block
@property (nonatomic,retain) NSIndexSet * draggedRowIndexes;                          //@synthesize draggedRowIndexes=_draggedRowIndexes - In the implementation block
@property (assign,nonatomic) long long lastDropHoverRow;                              //@synthesize lastDropHoverRow=_lastDropHoverRow - In the implementation block
@property (assign,nonatomic) unsigned long long lastDropHoverSourceMask;              //@synthesize lastDropHoverSourceMask=_lastDropHoverSourceMask - In the implementation block
@property (assign,nonatomic) CGRect lastOffscreenDropIndicatorFrame;                  //@synthesize lastOffscreenDropIndicatorFrame=_lastOffscreenDropIndicatorFrame - In the implementation block
@property (assign,nonatomic) id dropCandidateItem;                                    //@synthesize dropCandidateItem=_dropCandidateItem - In the implementation block
@property (assign,nonatomic) long long dropCandidateChildIndex;                       //@synthesize dropCandidateChildIndex=_dropCandidateChildIndex - In the implementation block
@property (assign,nonatomic) long long dropCandidateParentRow;                        //@synthesize dropCandidateParentRow=_dropCandidateParentRow - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)dragOperation;
-(void)setDropCandidateItem:(id)arg1 ;
-(void)setDropCandidateChildIndex:(long long)arg1 ;
-(void)setDragOperation:(unsigned long long)arg1 ;
-(void)setDropCandidateRow:(long long)arg1 ;
-(id)dropCandidateItem;
-(long long)dropCandidateChildIndex;
-(long long)dropCandidateRow;
-(unsigned long long)tableViewDropOperation;
-(long long)dropCandidateParentRow;
-(void)setTableViewDropOperation:(unsigned long long)arg1 ;
-(void)setDropCandidateParentRow:(long long)arg1 ;
-(NSIndexSet *)draggedRowIndexes;
-(void)setLastDropHoverRow:(long long)arg1 ;
-(void)setDraggedRowIndexes:(NSIndexSet *)arg1 ;
-(long long)lastDropHoverRow;
-(unsigned long long)lastDropHoverSourceMask;
-(void)setLastDropHoverSourceMask:(unsigned long long)arg1 ;
-(CGRect)lastOffscreenDropIndicatorFrame;
-(void)setLastOffscreenDropIndicatorFrame:(CGRect)arg1 ;
@end

