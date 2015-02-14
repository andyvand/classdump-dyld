/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTableRowView.h>

@class SeparatorView;

@interface SidebarTableRowView : NSTableRowView {

	SeparatorView* _separatorView;
	char _shouldDrawRowSeparator;
	char _shouldDrawSelectionOnlyWhenEmphasized;
	char _highlighted;

}

@property (assign,nonatomic) char shouldDrawRowSeparator;                             //@synthesize shouldDrawRowSeparator=_shouldDrawRowSeparator - In the implementation block
@property (assign,nonatomic) char shouldDrawSelectionOnlyWhenEmphasized;              //@synthesize shouldDrawSelectionOnlyWhenEmphasized=_shouldDrawSelectionOnlyWhenEmphasized - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted;                   //@synthesize highlighted=_highlighted - In the implementation block
-(void)setShouldDrawRowSeparator:(char)arg1 ;
-(void)setShouldDrawSelectionOnlyWhenEmphasized:(char)arg1 ;
-(void)_redrawRow;
-(void)_redrawPreviousRow;
-(void)_drawSelectionHighlightInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(char)_isNextRowHighlighted;
-(id)_nextRow;
-(char)_shouldDrawSelectionBackground;
-(char)_isLastRow;
-(char)_nextRowIsGroupRow;
-(char)shouldDrawRowSeparator;
-(char)shouldDrawSelectionOnlyWhenEmphasized;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateLayer;
-(char)isFlipped;
-(char)wantsUpdateLayer;
-(char)allowsVibrancy;
-(char)isHighlighted;
-(void)setHighlighted:(char)arg1 ;
-(long long)interiorBackgroundStyle;
-(id)makeBackingLayer;
-(void)setEmphasized:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)_updateSelectedBackgroundView;
-(void)_updateSeparatorBackgroundLayer;
@end

