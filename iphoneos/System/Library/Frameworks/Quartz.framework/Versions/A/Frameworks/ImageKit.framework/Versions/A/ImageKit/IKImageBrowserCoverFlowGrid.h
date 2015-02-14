/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageBrowserFloatingGroupGrid.h>

@class NSEvent;

@interface IKImageBrowserCoverFlowGrid : IKImageBrowserFloatingGroupGrid {

	NSEvent* _lastScrollEvent;
	double _scrollVelocity;
	float _scrollPosition;
	float _scrollOffset;
	id _reserved;
	id _currentAnimation;
	CFDictionaryRef _indexToOrderedIndex;
	CFDictionaryRef _indexToVisibleIndex;
	double _cachedOffset;
	unsigned _cachedOffsetValid : 1;

}

@property (assign) double scrollPosition; 
@property (assign) double scrollOffset; 
-(CGSize)margin;
-(double)offset;
-(void)scrollTo:(int)arg1 ;
-(id)collapsedIndexesWithColumnCount:(unsigned long long)arg1 ;
-(double)scrollOffset;
-(void)animationFinished:(id)arg1 ;
-(void)setScrollOffset:(double)arg1 ;
-(double)snapPositionForPosition:(double)arg1 ;
-(char)isInOverflow;
-(void)setScrollPosition:(double)arg1 ;
-(void)prepareRenderingOrderingWithIndexes:(id)arg1 ;
-(unsigned long long)indexToRenderForNonOrderedIndex:(unsigned long long)arg1 ;
-(CGSize)adjustedMargin;
-(double)xAtColumn:(int)arg1 ;
-(int)columnAtX:(double)arg1 ;
-(id)_cellIndexesInRect:(SCD_Struct_IK11)arg1 ;
-(int)cellIndexAtColumn:(int)arg1 andRow:(int)arg2 ;
-(void)removeAnimationIfAny;
-(double)_offsetForIndex:(int)arg1 ;
-(double)scrollPositionWithOverflow;
-(id)clientIndexes;
-(void)_scrollTo:(int)arg1 snapMode:(char)arg2 initialVelocity:(double)arg3 ;
-(double)scrollPosition;
-(int)offsetIndex;
-(char)coverflowMode;
-(double)translationInColumnAtX:(double)arg1 ;
-(float)rotationAtX:(double)arg1 ;
-(void)prepareCoverflowLayout:(id)arg1 ;
-(double)sideCellsWidth;
-(double)sideCellsMargin;
-(void)flushAnimations;
-(NSRange)dataSourceRange;
-(void)adjustHorizontalOffsetIfNeeded;
-(void)resetHorizontalOffset;
-(NSRange)facingRange;
-(void)scrollIndexToVisible:(long long)arg1 ;
-(void)scrollWheel:(id)arg1 gesture:(char)arg2 ;
-(void)endGesture:(id)arg1 ;
-(int)screenColumnAtIndex:(unsigned long long)arg1 ;
-(int)indexOfHeaderMasterCell;
-(void)dealloc;
-(void)invalidate;
-(int)columnCount;
@end

