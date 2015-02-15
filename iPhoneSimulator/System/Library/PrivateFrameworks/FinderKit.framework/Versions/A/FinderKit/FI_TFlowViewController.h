/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TListViewController.h>
#import <FinderKit/TFlowViewDelegate.h>
#import <FinderKit/NSSplitViewDelegate.h>

@class FI_TFlowView, NSView, NSString;

@interface FI_TFlowViewController : FI_TListViewController <TFlowViewDelegate, NSSplitViewDelegate> {

	FI_TFlowView* _flowView;
	NSView* _listContainerView;
	BOOL _disableSelectionSync;
	BOOL _flowViewChangingSelection;
	BOOL _listViewChangingSelection;
	BOOL _autoSelectMode;
	BOOL _isAutoSelecting;
	unsigned long long _autoSelectIndex;
	TFlowViewQTEjectHelper* _ejectHelper;
	TNotificationCenterObserver* _timeMachineWillStartObserver;

}

@property (readonly) FI_TFlowView * flowView;                        //@synthesize flowView=_flowView - In the implementation block
@property (readonly) NSView * listContainerView;                     //@synthesize listContainerView=_listContainerView - In the implementation block
@property (assign,nonatomic) BOOL disableSelectionSync;              //@synthesize disableSelectionSync=_disableSelectionSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewLoaded;
-(void)deselectAllNodes;
-(CGRect)globalZoomRectForNode:(const TFENode*)arg1 ;
-(id)zoomImageForNode:(const TFENode*)arg1 contentRect:(CGRect*)arg2 ;
-(id)quickLookSharedPreviewViewForPreviewNode:(const TFENode*)arg1 ;
-(void)aboutToTearDown;
-(id)initWithDataSource:(id)arg1 andViewSettings:(id)arg2 targetPath:(const TFENodeVector*)arg3 containerController:(id)arg4 ;
-(void)setSelectionChangedAnimationsEnabled:(BOOL)arg1 ;
-(void)sidebarDidChangeVisibility:(BOOL)arg1 ;
-(CGSize)idealViewSize;
-(BOOL)addItems:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 withOperation:(id)arg3 ;
-(BOOL)removeItems:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 ;
-(void)reloadDataForContainerNode:(const TFENode*)arg1 ;
-(int)updateNeededForNode:(const TFENode*)arg1 property:(unsigned long long)arg2 ;
-(void)reloadNodes:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 ;
-(void)didPerformFirstReload;
-(BOOL)handleKeyDown:(id)arg1 currentKey:(unsigned short*)arg2 ;
-(void)ensureCGSurfaceUpdateOnDraw:(BOOL)arg1 ;
-(NSView *)listContainerView;
-(void)flowViewDidReloadData:(id)arg1 ;
-(unsigned long long)flowIndexForNode:(const TFENode*)arg1 ;
-(id)flowIndexSetForNodes:(const TFENodeVector*)arg1 ;
-(TFENode*)flowNodeAtIndex:(unsigned long long)arg1 ;
-(CGRect)zoomRectForNode:(const TFENode*)arg1 ;
-(void)setDisableSelectionSync:(BOOL)arg1 ;
-(BOOL)disableSelectionSync;
-(unsigned long long)getSelectedNodesForQuickLook:(TFENodeVector*)arg1 includeTarget:(BOOL)arg2 upTo:(unsigned long long)arg3 ;
-(double)splitterPosition;
-(id)imageFlow:(id)arg1 itemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsInImageFlow:(id)arg1 ;
-(void)imageFlowDidStabilize:(id)arg1 ;
-(void)imageFlow:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)imageFlow:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(void)imageFlow:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2 ;
-(void)imageFlowWillStabilize:(id)arg1 ;
-(FI_TFlowView *)flowView;
-(id)imageFlow:(id)arg1 accessibilityItemAtIndex:(unsigned long long)arg2 parentItem:(id)arg3 ;
-(id)firstResponder;
-(void)reloadData;
-(void)selectAll:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)awakeFromNib;
-(id)nibName;
-(id)splitView;
-(double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(void)splitViewDidResizeSubviews:(id)arg1 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(void)outlineViewItemDidExpand:(id)arg1 ;
-(void)outlineViewItemDidCollapse:(id)arg1 ;
-(CGSize)minimumViewSize;
-(void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2 ;
-(unsigned)viewStyle;
@end

