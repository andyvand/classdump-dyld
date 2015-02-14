/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTableHeaderView, NSCell;

@interface NSTableHeaderCellView : NSView {

	NSTableHeaderView* _tableHeaderView;
	NSCell* _cell;
	char _selected;

}

@property (retain) NSCell * cell;                                    //@synthesize cell=_cell - In the implementation block
@property (getter=isSelected) char selected;                         //@synthesize selected=_selected - In the implementation block
@property (assign) NSTableHeaderView * tableHeaderView;              //@synthesize tableHeaderView=_tableHeaderView - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSCell *)cell;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setCell:(NSCell *)arg1 ;
-(void)_commonInit;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(void)setTableHeaderView:(NSTableHeaderView *)arg1 ;
-(NSTableHeaderView *)tableHeaderView;
@end

