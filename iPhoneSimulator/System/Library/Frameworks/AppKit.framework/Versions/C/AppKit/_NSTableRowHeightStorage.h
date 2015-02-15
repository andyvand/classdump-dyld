/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:30 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCopying.h>

@class NSTableView;

@interface _NSTableRowHeightStorage : NSObject <NSCopying> {

	NSTableView* _tableView;
	double* _rowHeights;
	long long _heightsSize;
	long long _numberOfRows;
	long long _gapRow;
	double _gapRowHeight;
	unsigned _rowHeightsAreValid : 1;
	unsigned _numberOfRowsIsValid : 1;
	unsigned _supportsVariableRowHeights : 1;
	unsigned _updatingRowHeights : 1;

}

@property (readonly) long long numberOfRows; 
@property (getter=isValid,readonly) char valid; 
@property (assign) double gapRowHeight;                      //@synthesize gapRowHeight=_gapRowHeight - In the implementation block
@property (assign) long long gapRow; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numberOfRows;
-(char)noteHeightOfRowsWithIndexesChanged:(id)arg1 ;
-(char)isValid;
-(void)invalidateCacheAndStorage;
-(void)insertRowCount:(long long)arg1 atIndex:(long long)arg2 ;
-(void)deleteRowCount:(long long)arg1 atIndex:(long long)arg2 ;
-(void)invalidateNumberOfRowsCache;
-(long long)gapRow;
-(double)_uncachedRectHeightOfRow:(long long)arg1 ;
-(CGRect)computeRectOfRow:(long long)arg1 assumingExists:(char)arg2 ;
-(double)computeTableHeightForNumberOfRows:(long long)arg1 ;
-(long long)computeRowAtPoint:(CGPoint)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(CGRect)backgroundFillerRect;
-(void)_cacheRowHeights;
-(void)_createRowHeightsArray;
-(CGRect)_variableComputeRectOfRow:(long long)arg1 ;
-(double)_standardFullRowHeight;
-(void)_ensureRowHeights;
-(CGRect)_normalComputeRectOfRow:(long long)arg1 assumingExists:(char)arg2 ;
-(long long)_adjustRowForGapRow:(long long)arg1 ;
-(long long)_variableComputeRowAtPoint:(CGPoint)arg1 ;
-(long long)_normalComputeRowAtPoint:(CGPoint)arg1 ;
-(void)_ensureRowHeightsIsAtLeastThisSize:(long long)arg1 ;
-(double)_internalChangeForInsertRows:(long long)arg1 atIndex:(long long)arg2 ;
-(double)_internalChangeForDeleteRows:(long long)arg1 atIndex:(long long)arg2 withPriorChange:(double)arg3 ;
-(void)_internalDeleteRows:(long long)arg1 atIndex:(long long)arg2 ;
-(void)_internalInsertRows:(long long)arg1 atIndex:(long long)arg2 ;
-(void)_variableApplyRowDeletions:(id)arg1 insertions:(id)arg2 ;
-(void)_normalApplyRowDeletions:(id)arg1 insertions:(id)arg2 ;
-(void)_internalChangeForZeroHeightInsertOfRows:(long long)arg1 atIndex:(long long)arg2 ;
-(void)_variableAddInsertionHolesAtRange:(NSRange)arg1 ;
-(void)_normalAddInsertionHoleAtRange:(NSRange)arg1 ;
-(void)_variableDeleteRowsWithRange:(NSRange)arg1 ;
-(void)_normalDeleteRowsWithRange:(NSRange)arg1 ;
-(CGRect)computeRectOfRow:(long long)arg1 ;
-(id)_debugRowHeights;
-(void)setGapRow:(long long)arg1 ;
-(void)applyRowDeletions:(id)arg1 insertions:(id)arg2 ;
-(void)addInsertionHoleForRange:(NSRange)arg1 ;
-(void)deleteRowsInRange:(NSRange)arg1 ;
-(double)gapRowHeight;
-(void)setGapRowHeight:(double)arg1 ;
@end

