/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSIndexSet;

@interface TSTCellRegion : NSObject <NSCopying> {

	unsigned mCellRangesCount;
	SCD_Struct_TS497* mCellRanges;
	SCD_Struct_TS496 mBoundingCellRange;
	unsigned mCellCount;
	NSIndexSet* mIntersectingColumnsIndexSet;
	NSIndexSet* mIntersectingRowsIndexSet;
	SCD_Struct_TS266 mUpperLeftCellID;
	SCD_Struct_TS266 mBottomRightCellID;

}

@property (nonatomic,readonly) SCD_Struct_TS497 boundingCellRange; 
@property (nonatomic,readonly) unsigned cellCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL isRectangle; 
@property (nonatomic,readonly) SCD_Struct_TS266 upperLeftCellID; 
@property (nonatomic,readonly) SCD_Struct_TS266 bottomRightCellID; 
@property (nonatomic,readonly) unsigned short numberOfIntersectingColumns; 
@property (nonatomic,readonly) unsigned short numberOfIntersectingRows; 
+(id)regionFromRange:(SCD_Struct_TS497)arg1 ;
+(id)invalidRegion;
+(id)region:(id)arg1 addingRange:(SCD_Struct_TS497)arg2 ;
+(id)region:(id)arg1 subtractingRange:(SCD_Struct_TS497)arg2 ;
+(id)regionFromCellMap:(id)arg1 ;
+(id)region:(id)arg1 intersectingRange:(SCD_Struct_TS497)arg2 ;
+(id)unionEveryRangeInRegion:(id)arg1 withRange:(SCD_Struct_TS497)arg2 ;
+(id)region:(id)arg1 addingRegion:(id)arg2 ;
+(id)region:(id)arg1 subtractingRegion:(id)arg2 ;
+(id)regionFillingColumnsFromRegion:(id)arg1 ;
+(id)regionFillingRowsFromRegion:(id)arg1 ;
+(id)regionFromRowIndices:(id)arg1 ;
+(id)regionFromColumnIndices:(id)arg1 ;
-(void)enumerateRowsUsingBlock:(/*^block*/ id)arg1 ;
-(void)saveToMessage:(CellRegion*)arg1 ;
-(id)initFromMessage:(const CellRegion*)arg1 ;
-(id)regionOffsetBy:(SCD_Struct_GQ13)arg1 ;
-(SCD_Struct_TS266)suitableAnchor;
-(SCD_Struct_TS266)suitableCursor;
-(id)regionByAddingRange:(SCD_Struct_TS497)arg1 ;
-(SCD_Struct_TS266)upperLeftCellID;
-(SCD_Struct_TS266)bottomRightCellID;
-(void)enumerateCellRangesUsingBlock:(/*^block*/ id)arg1 ;
-(BOOL)equalsCellRange:(SCD_Struct_TS497)arg1 ;
-(BOOL)containsCellID:(SCD_Struct_TS266)arg1 ;
-(id)regionBySubtractingRange:(SCD_Struct_TS497)arg1 ;
-(SCD_Struct_TS497)boundingCellRange;
-(BOOL)equalsCellRegion:(id)arg1 ;
-(BOOL)containsCellRegion:(id)arg1 ;
-(NSObject*)iterator;
-(BOOL)intersectsCellRange:(SCD_Struct_TS497)arg1 ;
-(BOOL)containsCellRange:(SCD_Struct_TS497)arg1 ;
-(BOOL)isRectangle;
-(NSObject*)rightToLeftIterator;
-(BOOL)partiallyIntersectsCellRange:(SCD_Struct_TS497)arg1 ;
-(id)regionByUnioningEveryRangeInRegionWithRange:(SCD_Struct_TS497)arg1 ;
-(id)regionByAddingRegion:(id)arg1 ;
-(id)regionByIntersectingRange:(SCD_Struct_TS497)arg1 ;
-(id)regionBySubtractingRegion:(id)arg1 ;
-(void)enumerateColumnRangesUsingBlock:(/*^block*/ id)arg1 ;
-(void)enumerateColumnsUsingBlock:(/*^block*/ id)arg1 ;
-(unsigned short)numberOfIntersectingRows;
-(unsigned short)numberOfIntersectingColumns;
-(void)p_calculateAncillaryInformation;
-(void)p_insertRangeIntoRegion:(SCD_Struct_TS497)arg1 ;
-(void)p_calculateIntersectingColumns;
-(void)p_calculateIntersectingRows;
-(void)p_calculateUpperLeftAndBottomRightCellID;
-(id)regionByRemovingRows:(id)arg1 ;
-(id)regionByRemovingColumns:(id)arg1 ;
-(id)regionByIntersectingRowIndices:(id)arg1 ;
-(id)regionByIntersectingColumnIndices:(id)arg1 ;
-(id)regionByAddingRows:(id)arg1 ;
-(id)regionByAddingColumns:(id)arg1 ;
-(id)regionByApplyingRowMapping:(id)arg1 ;
-(BOOL)intersectsColumn:(unsigned char)arg1 ;
-(BOOL)intersectsRow:(unsigned short)arg1 ;
-(id)intersectingColumnsIndexSet;
-(id)intersectingRowsIndexSet;
-(NSObject*)topToBottomIterator;
-(void)enumerateCellIDsUsingBlock:(/*^block*/ id)arg1 ;
-(void)enumerateInDirection:(int)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)enumerateRowRangesUsingBlock:(/*^block*/ id)arg1 ;
-(void)fillCellRangeRowMajorSet:(set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUColumnRowRect> >*)arg1 leftToRight:(BOOL)arg2 ;
-(void)fillCellRangeColMajorSet:(set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> >*)arg1 leftToRight:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isEmpty;
-(id).cxx_construct;
-(unsigned)cellCount;
@end
