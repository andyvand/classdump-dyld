/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSTLayoutDynamicResizeInfoProtocol.h>

@class TSTCellRegion;

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol> {

	BOOL mValid;
	int mTableRowsBehavior;
	TSTCellRegion* mRowRegion;
	unsigned short mStartRowIndex;
	unsigned short mNumberOfRows;
	unsigned short mNumberOfResizableRows;
	float* mCapturedRowHeights;
	float* mCurrentRowHeights;
	float* mMinimumRowHeights;
	float mCapturedRowHeightTotal;
	TSTCellRegion* mColumnRegion;
	unsigned char mStartColumnIndex;
	unsigned short mNumberOfColumns;
	unsigned short mNumberOfResizableColumns;
	float* mCapturedColumnWidths;
	float* mCurrentColumnWidths;
	float* mMinimumColumnWidths;
	float mCapturedColumnWidthTotal;

}
-(id)rowHeights;
-(id)initWithMasterLayout:(id)arg1 ;
-(BOOL)hasWidthForColumn:(unsigned char)arg1 ;
-(float)getColumnWidth:(unsigned char)arg1 ;
-(BOOL)hasHeightForRow:(unsigned short)arg1 ;
-(float)getRowHeight:(unsigned short)arg1 ;
-(float)applyResizeWidthFactor:(float)arg1 ;
-(void)captureNewMinimumRowHeights:(id)arg1 ;
-(float)applyResizeHeightFactor:(float)arg1 ;
-(void)p_captureRowColumnInformation:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3 ;
-(void)enumerateRowHeightsUsingBlock:(/*^block*/ id)arg1 ;
-(void)enumerateColumnWidthsUsingBlock:(/*^block*/ id)arg1 ;
-(id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2 ;
-(id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2 ;
-(id)initWithDynamicResizeInfo:(id)arg1 ;
-(float)getRowInitialHeight:(unsigned short)arg1 ;
-(float)getColumnInitialWidth:(unsigned char)arg1 ;
-(float)getRowHeightResize:(unsigned short)arg1 ;
-(float)getColumnWidthResize:(unsigned char)arg1 ;
-(float)applyRowTotalHeight:(float)arg1 ;
-(float)applyColumnTotalWidth:(float)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)valid;
-(id)columnWidths;
@end
