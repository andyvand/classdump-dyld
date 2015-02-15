/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSArray, NSMutableIndexSet, IKImageBrowserLayoutManager;

@interface IKImageBrowserSubsetLayoutManager : NSObject {

	NSRange _range;
	SCD_Struct_IK11 _frame;
	CGSize _contentSize;
	_IKImageBrowserLayoutParameter* _layoutParameters;
	NSArray* _groups;
	NSMutableIndexSet* _ghostIndexes;
	int _collapsedCellCount;
	id _parentGroup;
	int _headerHeight;
	char _visuallyCollapsed;
	IKImageBrowserLayoutManager* _parent;

}

@property (assign) char visuallyCollapsed;              //@synthesize visuallyCollapsed=_visuallyCollapsed - In the implementation block
-(id)groups;
-(id)cellIndexesInRect:(SCD_Struct_IK11)arg1 ;
-(char)isGridBased;
-(double)tailOffset;
-(double)headerOffset;
-(void)prepareRenderingOrderingWithIndexes:(id)arg1 ;
-(unsigned long long)indexToRenderForNonOrderedIndex:(unsigned long long)arg1 ;
-(SCD_Struct_IK11)cellFrameAtIndex:(unsigned long long)arg1 ;
-(id)initWithParameters:(_IKImageBrowserLayoutParameter*)arg1 parent:(id)arg2 ;
-(void)computeRowsCount;
-(int)additionalHeightAtRow:(int)arg1 ;
-(CGSize)adjustedMargin;
-(int)columnAtIndex:(int)arg1 ;
-(id)parentGroup;
-(int)clientIndexToGridIndex:(int)arg1 ;
-(long long)groupIndexForGridIndex:(int)arg1 ;
-(id)gridIndexesToClientIndexes:(id)arg1 ;
-(int)gridIndexToClientIndex:(int)arg1 ;
-(void)collapsedStateChanged:(id)arg1 ;
-(void)spaceOutSubmanagerCellsForDropAtIndex:(unsigned long long)arg1 nearestCell:(unsigned long long)arg2 isMoreThanHalfwayAcrossCell:(char)arg3 ;
-(void)invalidateCacheAtIndexes:(id)arg1 ;
-(CGSize)computeContentSize;
-(id)cellIndexesAtLocation:(CGSize)arg1 ;
-(int)cellIndexAtColumn:(int)arg1 andRow:(int)arg2 ;
-(long long)nearestCellOfPosition:(CGSize)arg1 ;
-(id)parentLayoutManager;
-(void)adjustHorizontalOffsetIfNeeded;
-(void)resetHorizontalOffset;
-(void)scrollWheel:(id)arg1 gesture:(char)arg2 ;
-(void)endGesture:(id)arg1 ;
-(int)screenColumnAtIndex:(unsigned long long)arg1 ;
-(int)indexOfHeaderMasterCell;
-(void)setGroups:(id)arg1 ;
-(CGSize)contentOrigin;
-(void)zSortWithZValues:(double*)arg1 ;
-(CGPoint)topLeftItemPosition;
-(double)zAtIndex:(unsigned long long)arg1 ;
-(int)headerHeight;
-(void)parentWillDie;
-(void)setHeaderHeight:(int)arg1 ;
-(void)setParentGroup:(id)arg1 ;
-(char)visuallyCollapsed;
-(void)setGridOrigin:(CGSize)arg1 ;
-(SCD_Struct_IK11)gridFrame;
-(void)setVisuallyCollapsed:(char)arg1 ;
-(void)_updateFrameSize;
-(void)computeGroupIndexTransformations;
-(long long)groupIndexForClientIndex:(int)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setContentSize:(CGSize)arg1 ;
-(NSRange)range;
-(id)cellAtIndex:(int)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(char)updateLayout;
-(CGSize)gridSize;
@end

