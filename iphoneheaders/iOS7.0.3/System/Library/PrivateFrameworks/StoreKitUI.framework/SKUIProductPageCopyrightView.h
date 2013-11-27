/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, SKUIColorScheme, NSString;

@interface SKUIProductPageCopyrightView : UIView {

	UILabel* _copyrightLabel;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,retain) NSString * copyrightString; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(void).cxx_destruct;
-(id)copyrightString;
-(void)setCopyrightString:(id)arg1 ;
@end
