/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:36:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface BuddyFinishedView : UIView {

	UILabel* _titleLabel;
	UIButton* _doneButton;

}

@property (nonatomic,retain) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
-(void)setTitle:(id)arg1 buttonText:(id)arg2 ;
-(void)setDoneButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)titleLabel;
-(void)setTitleLabel:(id)arg1 ;
-(id)doneButton;
@end
