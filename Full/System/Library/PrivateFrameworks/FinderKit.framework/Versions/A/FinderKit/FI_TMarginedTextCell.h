/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TTextCell.h>

@interface FI_TMarginedTextCell : FI_TTextCell {

	double _leftMargin;
	double _rightMargin;
	BOOL _subpixelAntialiasing;

}

@property (assign,nonatomic) double leftMargin;                      //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) double rightMargin;                     //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) BOOL subpixelAntialiasing;              //@synthesize subpixelAntialiasing=_subpixelAntialiasing - In the implementation block
-(void)initCommon;
-(BOOL)subpixelAntialiasing;
-(void)setSubpixelAntialiasing:(BOOL)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(double)leftMargin;
-(double)rightMargin;
-(void)setLeftMargin:(double)arg1 ;
-(void)setRightMargin:(double)arg1 ;
@end
