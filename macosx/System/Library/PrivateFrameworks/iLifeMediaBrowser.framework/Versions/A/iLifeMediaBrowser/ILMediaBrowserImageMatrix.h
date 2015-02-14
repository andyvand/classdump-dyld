/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <AppKit/NSMatrix.h>

@class NSMutableArray, NSString;

@interface ILMediaBrowserImageMatrix : NSMatrix {

	NSMutableArray* selectedCells;
	CGRect selectionRect;
	char mAllowMultipleSelection;
	char mDisplaysToolTips;
	char mDrawTitles;
	CGSize mImageCellSize;
	NSMutableArray* _contents;
	NSMutableArray* _contentImages;
	NSMutableArray* _contentTitles;
	id _observedObjectForContent;
	NSString* _observedKeyPathForContent;
	id _observedObjectForContentImages;
	NSString* _observedKeyPathForContentImages;
	id _observedObjectForContentTitles;
	NSString* _observedKeyPathForContentTitles;

}
+(void)initialize;
-(void)setDisplaysToolTips:(char)arg1 ;
-(void)setImageCellSize:(CGSize)arg1 ;
-(char)wantsMouseMovedEventsForSkimming;
-(char)wantsFlagsChangedEventsForSkimming;
-(char)displaysToolTips;
-(CGSize)imageCellSize;
-(void)_dragSelectionWithEvent:(id)arg1 ;
-(void)updateLayoutUsingMaxWidth:(long long)arg1 ;
-(void)setDrawsTitles:(char)arg1 ;
-(id)realCells;
-(void)refreshCellsToContent;
-(void)viewBoundsDidChange:(id)arg1 ;
-(long long)indexOfCell:(id)arg1 ;
-(void)_selectCell:(id)arg1 ;
-(id)cellsInRect:(CGRect)arg1 ;
-(id)_sortedSelectedCells;
-(id)_dragImageForCell:(id)arg1 withBadgeCount:(long long)arg2 ;
-(long long)numberOfColumnsForCurrentBounds;
-(char)drawsTitles;
-(void)selectNone:(id)arg1 ;
-(long long)clickedIndex;
-(void)setCellsHaveTitle:(char)arg1 ;
-(void)dealloc;
-(void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)unbind:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(id)selectionIndexes;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(void)reloadData;
-(id)selectedCell;
-(id)selectedCells;
-(void)selectCellAtRow:(long long)arg1 column:(long long)arg2 ;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(void)selectCell:(id)arg1 ;
-(char)allowsMultipleSelection;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(char)needsPanelToBecomeKey;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)viewDidMoveToWindow;
-(void)resetCursorRects;
-(void)deselectAllCells;
-(void)mouseDown:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)deselectAll:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(id)exposedBindings;
-(id)initWithFrame:(CGRect)arg1 mode:(long long)arg2 cellClass:(Class)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5 ;
-(void)deselectCell:(id)arg1 ;
@end

