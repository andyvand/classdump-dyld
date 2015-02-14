/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSTableHeaderView, NSMutableArray;

@interface NSTableHeaderData : NSObject {

	NSTableHeaderView* _headerView;
	NSMutableArray* _views;

}

@property (assign,nonatomic) NSTableHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
-(void)dealloc;
-(void)setHeaderView:(NSTableHeaderView *)arg1 ;
-(NSTableHeaderView *)headerView;
-(void)removeColumn:(long long)arg1 ;
-(void)addTableColumn:(id)arg1 atIndex:(long long)arg2 ;
-(void)beginDraggingColumn:(long long)arg1 ;
-(void)tableHeaderViewDraggedDistanceChanged;
-(void)removeAllKnownSubviews;
-(id)initWithHeaderView:(id)arg1 ;
-(void)updateViews;
-(void)didMoveFromColumn:(long long)arg1 toColumn:(long long)arg2 animated:(char)arg3 ;
-(void)endDraggingColumn:(long long)arg1 animated:(char)arg2 ;
-(void)updateColumnViewWidthsAnimated:(char)arg1 ;
-(void)_addViewForTableColumn:(id)arg1 column:(long long)arg2 ;
-(void)_updateFramesAnimated:(char)arg1 ;
-(id)headerCellViewAtColumn:(long long)arg1 ;
-(CGRect)_draggedColumnHeaderViewFrameForColumn:(long long)arg1 ;
@end

