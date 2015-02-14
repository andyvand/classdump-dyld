/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TMarginedTextCell.h>

@interface FI_TIconAndTextCell : FI_TMarginedTextCell {

	TIconRef* _icon;
	CGSize _iconSize;
	double _iconToTextSpacing;
	BOOL _showIcon;

}

@property (assign) CGSize iconSize;                                 //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) double iconToTextSpacing;              //@synthesize iconToTextSpacing=_iconToTextSpacing - In the implementation block
@property (assign) BOOL showIcon;                                   //@synthesize showIcon=_showIcon - In the implementation block
-(void)initCommon;
-(void)drawIconWithFrame:(CGRect)arg1 ;
-(double)iconToTextSpacing;
-(void)setIconToTextSpacing:(double)arg1 ;
-(BOOL)showIcon;
-(void)setShowIcon:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(void)setIcon:(const TIconRef*)arg1 ;
-(const TIconRef*)icon;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(id)highlightColorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawWithExpansionFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
@end

