/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <Safari/VisualTabPickerNewTabViewDelegate.h>
#import <Safari/VisualTabPickerThumbnailDataSource.h>
#import <Safari/VisualTabPickerThumbnailDelegate.h>

@protocol VisualTabPickerTileContainerDataSource, VisualTabPickerTileContainerDelegate;
@class NSMutableArray, NSView, NSTextField, VisualTabPickerGridView, NSString;

@interface VisualTabPickerTileContainerView : NSView <VisualTabPickerNewTabViewDelegate, VisualTabPickerThumbnailDataSource, VisualTabPickerThumbnailDelegate> {

	NSMutableArray* _thumbnailViews;
	NSView* _3DContainerView;
	NSTextField* _title;
	char _didSetTileConstraints;
	id<VisualTabPickerTileContainerDataSource> _dataSource;
	id<VisualTabPickerTileContainerDelegate> _delegate;
	VisualTabPickerGridView* _visualTabPickerGridView;
	long long _tileContainerType;

}

@property (assign,nonatomic,__weak) id<VisualTabPickerTileContainerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VisualTabPickerTileContainerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) VisualTabPickerGridView * visualTabPickerGridView;                  //@synthesize visualTabPickerGridView=_visualTabPickerGridView - In the implementation block
@property (assign,nonatomic) long long tileContainerType;                                               //@synthesize tileContainerType=_tileContainerType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)thumbnailYOffset;
+(double)yOffsetBetweenStackedThumbnails;
-(void)hideCloseButtons;
-(void)removeTileAtIndex:(unsigned long long)arg1 ;
-(void)resetScaleFactorForThumbnailAtIndex:(unsigned long long)arg1 ;
-(CGRect)thumbnailContainerFrameForThumbnailAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfTilesInContainer;
-(void)animateSidebarForThumbnailAtIndex:(unsigned long long)arg1 image:(id)arg2 width:(double)arg3 gridAnimation:(long long)arg4 ;
-(void)animateToolbarForThumbnailAtIndex:(unsigned long long)arg1 image:(id)arg2 height:(double)arg3 gridAnimation:(long long)arg4 ;
-(void)startTiltAnimation:(long long)arg1 animationDuration:(double)arg2 indexOfSelectedTile:(unsigned long long)arg3 ;
-(long long)tileContainerType;
-(void)entryAnimationHasFinished;
-(void)willStartExitAnimation;
-(id)initWithFrame:(CGRect)arg1 visualTabPickerGridView:(id)arg2 containerType:(long long)arg3 ;
-(void)didRequestNewTabForVisualTabPickerNewTabView:(id)arg1 ;
-(void)didSelectVisualTabPickerThumbnailView:(id)arg1 ;
-(id)_createTitleTextField;
-(id)titleForVisualTabPickerThumbnailView:(id)arg1 ;
-(id)viewForVisualTabPickerTileThumbnailView:(id)arg1 ;
-(CGRect)visibleBoundsForVisualTabPickerTileThumbnailView:(id)arg1 ;
-(void)didCloseVisualTabPickerThumbnailView:(id)arg1 ;
-(void)_setUp3DContainerForTiles;
-(void)_setUpTitleView;
-(void)_createNewTabContainerView;
-(void)_updateTilesLayout;
-(void)_setUpTiles;
-(void)_createTileAtIndex:(unsigned long long)arg1 ;
-(CGRect)_containerTileFrame;
-(CATransform3D)_tile3DTransform;
-(void)_showCloseButtonIfNeededWithMouseLocation:(CGPoint)arg1 ;
-(void)_startStackFoldingAnimation:(long long)arg1 animationDuration:(double)arg2 indexOfSelectedTile:(unsigned long long)arg3 ;
-(CGRect)_tileFrameForTileWithIndex:(unsigned long long)arg1 ;
-(void)addTileAtIndex:(unsigned long long)arg1 ;
-(VisualTabPickerGridView *)visualTabPickerGridView;
-(void)setVisualTabPickerGridView:(VisualTabPickerGridView *)arg1 ;
-(void)setTileContainerType:(long long)arg1 ;
-(void)setDelegate:(id<VisualTabPickerTileContainerDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)layout;
-(id<VisualTabPickerTileContainerDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 ;
-(void)setDataSource:(id<VisualTabPickerTileContainerDataSource>)arg1 ;
-(id)makeBackingLayer;
-(id<VisualTabPickerTileContainerDataSource>)dataSource;
-(void)mouseMoved:(id)arg1 ;
@end

