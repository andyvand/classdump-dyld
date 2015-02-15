/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSOutlineView.h>

@class NSCell;

@interface NSNavOutlineView : NSOutlineView {

	long long _fauxHighlightedCellRow;
	long long _fauxHighlightedCellCol;
	NSCell* _fauxHighlightedCell;
	int _displayStateForDrawingRow;
	unsigned _delegate_displayStateForItem : 1;
	unsigned _delegate_labelColorForItem : 1;
	unsigned _reserved2 : 30;

}

@property (readonly) int displayStateForDrawingRow;              //@synthesize displayStateForDrawingRow=_displayStateForDrawingRow - In the implementation block
+(unsigned long long)defaultFocusRingType;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)delegate;
-(char)performKeyEquivalent:(id)arg1 ;
-(char)needsPanelToBecomeKey;
-(void)mouseDown:(id)arg1 ;
-(id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2 ;
-(int)displayStateForDrawingRow;
-(CGRect)frameOfOutlineCellAtRow:(long long)arg1 ;
-(void)drawRow:(long long)arg1 clipRect:(CGRect)arg2 ;
-(void)sendMouseUpActionForDisabledCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(void)setFauxHighlightedCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
-(id)cellAtRow:(long long)arg1 column:(long long)arg2 loaded:(char)arg3 ;
-(char)_canUseReorderResizeImageCacheForColumn:(long long)arg1 ;
-(char)_shouldContinueExpandAtLevel:(long long)arg1 beganAtLevel:(long long)arg2 ;
-(char)showsOutlineCell;
-(char)_canUseWhiteDisclosureTriangles;
-(char)_shouldSetObjectValueOnCellsForAnimations;
-(double)_sizeToFitWidthOfColumn:(long long)arg1 row:(long long)arg2 ;
-(char)_supportsTrackingAreasForCells;
-(char)_shouldAnimateChanges;
@end
