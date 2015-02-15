/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewController.h>

@class NSBrowser, NSView, NSViewController, NSMenu, NSIndexSet, NSArray;

@interface NSBrowserColumnViewController : NSViewController {

	NSBrowser* _browser;
	NSView* _columnView;
	NSViewController* _headerViewController;
	long long _columnIndex;

}

@property (assign,nonatomic) NSBrowser * browser;                                  //@synthesize browser=_browser - In the implementation block
@property (nonatomic,retain) NSViewController * headerViewController;              //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,retain) NSView * columnView;                                  //@synthesize columnView=_columnView - In the implementation block
@property (nonatomic,retain) NSMenu * menu; 
@property (assign,nonatomic) long long columnIndex;                                //@synthesize columnIndex=_columnIndex - In the implementation block
@property (assign,nonatomic) char allowsMultipleSelection; 
@property (assign,nonatomic) char allowsEmptySelection; 
@property (assign,nonatomic) char drawsBackground; 
@property (assign,nonatomic) char allowsTypeSelect; 
@property (nonatomic,readonly) unsigned long long numberOfRows; 
@property (nonatomic,readonly) long long firstValidRowIndex; 
@property (nonatomic,retain) NSIndexSet * selectionIndexes; 
@property (nonatomic,readonly) long long selectedRow; 
@property (readonly) NSArray * selectedItems; 
-(void)dealloc;
-(id)description;
-(void)setBackgroundColor:(id)arg1 ;
-(NSMenu *)menu;
-(void)setMenu:(NSMenu *)arg1 ;
-(NSIndexSet *)selectionIndexes;
-(void)setSelectionIndexes:(NSIndexSet *)arg1 ;
-(void)setAllowsTypeSelect:(char)arg1 ;
-(void)setBrowser:(NSBrowser *)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(void)setAllowsEmptySelection:(char)arg1 ;
-(char)allowsTypeSelect;
-(void)setDrawsBackground:(char)arg1 ;
-(long long)selectedRow;
-(char)isLeafItem:(id)arg1 ;
-(void)setNeedsDisplayInRow:(long long)arg1 ;
-(void)reloadDataForRowIndexes:(id)arg1 ;
-(NSArray *)selectedItems;
-(id)preparedCellAtRow:(long long)arg1 ;
-(id)titleOfSelectedRow;
-(unsigned long long)numberOfRows;
-(void)scrollRowToCenter:(long long)arg1 ;
-(char)isExpandableRow:(long long)arg1 ;
-(char)isLeafRow:(long long)arg1 ;
-(void)reloadData;
-(id)childItemAtIndex:(long long)arg1 ;
-(void)setColumnIndex:(long long)arg1 ;
-(void)setView:(id)arg1 ;
-(void)setHeaderViewController:(NSViewController *)arg1 ;
-(CGRect)frameOfRow:(long long)arg1 ;
-(long long)rowAtPoint:(CGPoint)arg1 ;
-(long long)firstValidRowIndex;
-(long long)nextValidRowIndexAfterIndex:(long long)arg1 ;
-(id)currentTypeSelectSearchString;
-(void)sizeToFitWidth:(double)arg1 ;
-(void)setRowHeight:(double)arg1 ;
-(void)noteHeightOfRowsWithIndexesChanged:(id)arg1 ;
-(void)didChangeColumnSize;
-(void)willBeginResizingColumn:(long long)arg1 ;
-(void)didEndResizingColumn:(long long)arg1 ;
-(double)widthThatFits;
-(id)dragImageForRowsWithIndexes:(id)arg1 withEvent:(id)arg2 offset:(CGPoint*)arg3 ;
-(void)editRow:(long long)arg1 withEvent:(id)arg2 select:(char)arg3 ;
-(char)allowsMultipleSelection;
-(char)allowsEmptySelection;
-(double)rowHeight;
-(char)drawsBackground;
-(void)setColumnView:(NSView *)arg1 ;
-(NSBrowser *)browser;
-(NSViewController *)headerViewController;
-(long long)columnIndex;
-(NSView *)columnView;
-(void)setColumnView:(id)arg1 forcingFlippedBehavior:(char)arg2 ;
-(long long)numberOfChildItems;
-(id)objectValueForItem:(id)arg1 ;
@end

