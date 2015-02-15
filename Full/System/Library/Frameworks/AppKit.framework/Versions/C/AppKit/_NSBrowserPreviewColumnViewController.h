/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBrowserColumnViewController.h>

@class NSViewController;

@interface _NSBrowserPreviewColumnViewController : NSBrowserColumnViewController {

	NSViewController* _previewViewController;

}

@property (nonatomic,retain) NSViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setMenu:(id)arg1 ;
-(id)selectionIndexes;
-(void)setSelectionIndexes:(id)arg1 ;
-(void)setAllowsTypeSelect:(char)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(void)setAllowsEmptySelection:(char)arg1 ;
-(char)allowsTypeSelect;
-(void)setDrawsBackground:(char)arg1 ;
-(void)setNeedsDisplayInRow:(long long)arg1 ;
-(id)preparedCellAtRow:(long long)arg1 ;
-(id)titleOfSelectedRow;
-(unsigned long long)numberOfRows;
-(void)scrollRowToCenter:(long long)arg1 ;
-(void)reloadData;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setPreviewViewController:(NSViewController *)arg1 ;
-(long long)firstValidRowIndex;
-(long long)nextValidRowIndexAfterIndex:(long long)arg1 ;
-(void)setRowHeight:(double)arg1 ;
-(double)widthThatFits;
-(id)dragImageForRowsWithIndexes:(id)arg1 withEvent:(id)arg2 offset:(CGPoint*)arg3 ;
-(void)editRow:(long long)arg1 withEvent:(id)arg2 select:(char)arg3 ;
-(char)allowsMultipleSelection;
-(char)allowsEmptySelection;
-(double)rowHeight;
-(char)drawsBackground;
-(void)loadView;
-(NSViewController *)previewViewController;
@end

