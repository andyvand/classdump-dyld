/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface StarkMissingContentOverlayView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * subtitleText; 
-(CGRect)_centeringBounds;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitleText:(id)arg1 ;
-(void)setSubtitleText:(id)arg1 ;
-(id)subtitleText;
-(id)titleText;
@end
