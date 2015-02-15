/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPort Utility/AirPort Utility-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, NetTopoObjectLayer, NSMutableArray, NetTopoView;

@interface NetTopoLayoutRootLayer : CALayer {

	NSArray* _rows;
	NSArray* _connections;
	NetTopoObjectLayer* _rootLayer;
	CGPoint _topoAnchor;
	NSMutableArray* _heightArray;
	double _columnSpacing;
	double _rowSpacing;
	double _columnWidth;
	double _rowHeight;
	double _minimumLayoutScale;
	double _layoutScale;
	CGRect _topoBoundsRect;
	CGSize _topoContentSize;
	CGRect _layoutVisibleBounds;
	double _layoutHorizontalOffset;
	char _deferLayout;
	NetTopoView* _topoView;

}

@property (nonatomic,retain) NSArray * rows;                                  //@synthesize rows=_rows - In the implementation block
@property (nonatomic,retain) NSArray * connections;                           //@synthesize connections=_connections - In the implementation block
@property (nonatomic,readonly) double columnSpacing;                          //@synthesize columnSpacing=_columnSpacing - In the implementation block
@property (nonatomic,readonly) double minimumLayoutScale;                     //@synthesize minimumLayoutScale=_minimumLayoutScale - In the implementation block
@property (assign,nonatomic) NetTopoView * topoView;                          //@synthesize topoView=_topoView - In the implementation block
@property (assign,nonatomic) double layoutScale; 
@property (assign,nonatomic) char deferLayout;                                //@synthesize deferLayout=_deferLayout - In the implementation block
@property (nonatomic,readonly) CGPoint anchorNodeCenterPosition; 
-(id)getFirstChildDeviceForLayer:(id)arg1 ;
-(id)getLastChildDeviceForLayer:(id)arg1 ;
-(id)getPreviousSiblingForLayer:(id)arg1 ;
-(id)getNextRightContourForLayer:(id)arg1 ;
-(id)getNextLeftContourForLayer:(id)arg1 ;
-(double)determineHorizontalSpacingForUIObject:(id)arg1 toOtherObject:(id)arg2 areSiblings:(char)arg3 ;
-(id)getAncestorForLayer:(id)arg1 neighbor:(id)arg2 defaultAncestor:(id)arg3 ;
-(void)moveSubtree:(id)arg1 currentSubtree:(id)arg2 shiftAmount:(double)arg3 ;
-(double)layoutScale;
-(void)updateHeightsForLayer:(id)arg1 ;
-(void)firstWalkWithUIObject:(id)arg1 siblingIndex:(unsigned long long)arg2 ;
-(id)apportionForUIObject:(id)arg1 withDefaultAncestor:(id)arg2 ;
-(void)executeShiftsForUIObject:(id)arg1 ;
-(void)setLayoutScale:(double)arg1 ;
-(void)setPositionForLayer:(id)arg1 widthOffset:(double)arg2 heightOffset:(double)arg3 ;
-(void)secondWalk:(id)arg1 parentObject:(id)arg2 modifier:(double)arg3 ;
-(id)getNextSiblingForLayer:(id)arg1 ;
-(void)calculateTopoContentMetrics;
-(SCD_Struct_Ne20)getDeviceInfoForRow:(id)arg1 ;
-(void)calculateSiblingMergePointForChildConnectionsOfObject:(id)arg1 withMedium:(unsigned long long)arg2 ;
-(char)deferLayout;
-(void)determineHeights;
-(void)layoutConnectionLayers;
-(CGPoint)anchorNodeCenterPosition;
-(void)performFullLayoutUsingRows:(id)arg1 andConnections:(id)arg2 ;
-(CGRect)calculateContentBoundsRectForLayoutBounds:(CGRect)arg1 ;
-(double)columnSpacing;
-(double)minimumLayoutScale;
-(void)setDeferLayout:(char)arg1 ;
-(NetTopoView *)topoView;
-(void)setTopoView:(NetTopoView *)arg1 ;
-(NSArray *)rows;
-(void)setRows:(NSArray *)arg1 ;
-(id)init;
-(void)layoutSublayers;
-(id)actionForKey:(id)arg1 ;
-(NSArray *)connections;
-(void)setConnections:(NSArray *)arg1 ;
@end
