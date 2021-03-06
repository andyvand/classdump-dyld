/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TIconAndTextCell.h>

@class FI_IActionButtonCell;

@interface FI_TIconAndTextWithActionCell : FI_TIconAndTextCell {

	TNSRef<FI_IActionButtonCell *> _actionButtonCell;
	double _textToActionBtnSpacing;

}

@property (nonatomic,retain) FI_IActionButtonCell * actionButtonCell; 
@property (assign,nonatomic) double textToActionBtnSpacing;                        //@synthesize textToActionBtnSpacing=_textToActionBtnSpacing - In the implementation block
-(void)initCommon;
-(CGRect)cellFrameFromMouseEvent:(id)arg1 ;
-(CGRect)actionButtonFrameForBounds:(CGRect)arg1 ;
-(BOOL)isMouseInActionButton:(id)arg1 ;
-(FI_IActionButtonCell *)actionButtonCell;
-(void)setActionButtonCell:(FI_IActionButtonCell *)arg1 ;
-(void)setActionBtnTarget:(id)arg1 ;
-(void)setActionBtnAction:(SEL)arg1 ;
-(double)textToActionBtnSpacing;
-(void)setTextToActionBtnSpacing:(double)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setControlView:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(void)setHighlighted:(char)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(void)addTrackingAreasForView:(id)arg1 inFrame:(CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(CGPoint)arg4 ;
@end

