/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface ABLabelViewWithVariablePositioning : UIView {

	UILabel* _label;
	float _topPadding;
	float _bottomPadding;
	float _horizontalPadding;

}

@property (assign,nonatomic) float topPadding;                     //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) float bottomPadding;                  //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) float horizontalPadding;              //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
-(float)bottomPadding;
-(float)horizontalPadding;
-(void)setLabelFont:(id)arg1 ;
-(void)setLabelTextColor:(id)arg1 ;
-(void)setLabelShadowColor:(id)arg1 ;
-(void)setLabelShadowOffset:(CGSize)arg1 ;
-(void)setBottomPadding:(float)arg1 ;
-(void)setHorizontalPadding:(float)arg1 ;
-(void)setTopPadding:(float)arg1 ;
-(float)topPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLabelText:(id)arg1 ;
@end
