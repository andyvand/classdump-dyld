/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, RMTable;

@interface RMTableCell : NSObject {

	NSString* _contents;
	RMTableCell* _nextCellInColumn;
	RMTableCell* _nextCellInRow;
	RMTable* _table;
	CGPDFNodeRef _tableCellNode;

}

@property (readonly) CGPDFPageRef page; 
@property (retain) RMTableCell * nextCellInColumn;              //@synthesize nextCellInColumn=_nextCellInColumn - In the implementation block
@property (retain) RMTableCell * nextCellInRow;                 //@synthesize nextCellInRow=_nextCellInRow - In the implementation block
@property (assign) RMTable * table;                             //@synthesize table=_table - In the implementation block
@property (assign) CGPDFNodeRef tableCellNode;                  //@synthesize tableCellNode=_tableCellNode - In the implementation block
-(RMTableCell *)nextCellInColumn;
-(void)setNextCellInColumn:(RMTableCell *)arg1 ;
-(RMTableCell *)nextCellInRow;
-(void)setNextCellInRow:(RMTableCell *)arg1 ;
-(void)setTableCellNode:(CGPDFNodeRef)arg1 ;
-(void)setTable:(RMTable *)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)contents;
-(unsigned long long)row;
-(unsigned long long)column;
-(CGColorRef)backgroundColor;
-(CGPDFPageRef)page;
-(RMTable *)table;
-(CGPDFNodeRef)tableCellNode;
@end

