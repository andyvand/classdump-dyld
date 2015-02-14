/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTableRowView.h>

@class FI_TListView, FI_TListViewController;

@interface FI_TListHeaderRowView : NSTableRowView {

	TNSRef<NSVisualEffectView *> _blurBackgroundView;
	FI_TListView* _listView;
	FI_TListViewController* _listViewController;
	TFENode* _node;
	double _previousDraggedDelta;
	long long _columnBeingDragged;
	TNSRef<FI_TListHeaderCellView *> _cellViewForDrag;
	TNSRef<FI_TUpdateLayerView *> _topHorizontalLineView;
	TNSRef<NSMutableArray *> _cellViews;
	TNSRef<NSTrackingArea *> _headerTrackingArea;
	BOOL _isCursorOverDivider;

}

@property (nonatomic,readonly) FI_TListViewController * listViewController;              //@synthesize listViewController=_listViewController - In the implementation block
@property (nonatomic,readonly) FI_TListView * listView;                                  //@synthesize listView=_listView - In the implementation block
-(FI_TListViewController *)listViewController;
-(FI_TListView *)listView;
-(id)initWithFrame:(CGRect)arg1 controller:(id)arg2 ;
-(id)initAsGroupHeader:(CGRect)arg1 controller:(id)arg2 node:(const TFENode*)arg3 ;
-(void)setNeedsDisplayForColumn:(long long)arg1 draggedDelta:(double)arg2 ;
-(void)updateCellViews;
-(void)updateNextFloatingHeader;
-(void)performLayout;
-(BOOL)isGroupHeader;
-(void)performUpdateLayer;
-(long long)mouseInDivider:(id)arg1 ;
-(id)resizeColumnForDivider:(long long)arg1 ;
-(void)updateCursor:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layout;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)updateLayer;
-(void)rightMouseDown:(id)arg1 ;
-(void)_windowChangedKeyState;
-(void)mouseDown:(id)arg1 ;
-(long long)interiorBackgroundStyle;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)handleMouseDown:(id)arg1 ;
-(void)setFloating:(char)arg1 ;
-(void)setNode:(const TFENode*)arg1 ;
@end

