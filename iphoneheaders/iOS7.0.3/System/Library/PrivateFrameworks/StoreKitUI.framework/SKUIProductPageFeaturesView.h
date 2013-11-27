/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, SKUIClientContext, SKUIColorScheme, NSMutableArray, UILabel, NSString;

@interface SKUIProductPageFeaturesView : UIView {

	UIView* _bottomBorderView;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	int _features;
	NSMutableArray* _featureViews;
	UILabel* _titleLabel;
	UIView* _topBorderView;

}

@property (assign,nonatomic) int features;                                   //@synthesize features=_features - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                  //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(int)features;
-(void)setFeatures:(int)arg1 ;
-(id)clientContext;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end
