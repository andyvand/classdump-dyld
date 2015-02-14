/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPObject.h>

@interface CPChunk : CPObject {

	CGRect bounds;
	char shrinksWithChildren;
	char dirtyBounds;
	unsigned position;
	long long insertionOrder;

}
+(float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2 ;
-(long long)compareTopDescending:(id)arg1 ;
-(id)copyAndSplitChildrenAtIndex:(unsigned)arg1 ;
-(void)resizeWith:(id)arg1 ;
-(void)add:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addChildrenOf:(id)arg1 ;
-(void)fitBoundsToChildren;
-(id)newTakeChildren;
-(id)newTakeChildrenAmong:(id)arg1 ;
-(CGRect)renderedBounds;
-(float)absoluteGapTo:(id)arg1 ;
-(float)advanceDeltaAfterSpace;
-(long long)insertionOrder;
-(unsigned)chunkPosition;
-(float)opticalLeading;
-(CGRect)adjustToPointBoundary:(CGRect)arg1 ;
-(id)describeBounds;
-(float)clusterGapTo:(id)arg1 ;
-(float)referenceAdvanceWidth;
-(void)setInsertionOrder:(long long)arg1 ;
-(long long)compareAnchorY:(id)arg1 ;
-(long long)compareAnchorX:(id)arg1 ;
-(long long)compareAnchorYDescending:(id)arg1 ;
-(long long)compareX:(id)arg1 ;
-(long long)compareInsertionOrder:(id)arg1 ;
-(long long)compareZ:(id)arg1 ;
-(long long)compareZDescending:(id)arg1 ;
-(long long)compareXBounds:(id)arg1 ;
-(long long)compareLinearBounds:(id)arg1 ;
-(long long)compareY:(id)arg1 ;
-(long long)compareYBounds:(id)arg1 ;
-(long long)compareYDescending:(id)arg1 ;
-(long long)compareYDescendingX:(id)arg1 ;
-(long long)compareChunkPosition:(id)arg1 ;
-(int)clusterLevelHint;
-(void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2 ;
-(char)overlapsHorizontallyWith:(id)arg1 ;
-(char)overlapsVerticallyWith:(id)arg1 ;
-(char)geometricallyContains:(id)arg1 ;
-(char)boundsEqualsRect:(CGRect)arg1 accuracy:(double)arg2 ;
-(char)shrinksWithChildren;
-(void)setShrinksWithChildren:(char)arg1 ;
-(char)intersectsChild:(CGRect)arg1 ;
-(void)translateObjectYBy:(double)arg1 ;
-(void)setChunkPosition:(unsigned)arg1 ;
-(CGSize)advance;
-(void)accept:(id)arg1 ;
-(double)bottom;
-(double)left;
-(double)right;
-(double)top;
-(double)rotationAngle;
-(id)init;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)center;
-(void)add:(id)arg1 ;
-(void)remove:(id)arg1 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(void)setChildren:(id)arg1 ;
-(void)removeAll;
-(float)fontSize;
-(CGPoint)anchor;
-(void)setAnchor:(CGPoint)arg1 ;
@end

