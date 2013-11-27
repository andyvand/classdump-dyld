/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface UIDatePickerContentView : UIView {

	struct {
		unsigned isAmPm : 1;
	}  _datePickerContentViewFlags;
	BOOL _isModern;
	UILabel* _titleLabel;
	float _titleLabelMaxX;
	int _titleAlignment;

}

@property (nonatomic,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) float titleLabelMaxX;                //@synthesize titleLabelMaxX=_titleLabelMaxX - In the implementation block
@property (assign,nonatomic) BOOL isAmPm; 
@property (assign,nonatomic) int titleAlignment;                  //@synthesize titleAlignment=_titleAlignment - In the implementation block
@property (assign,nonatomic) BOOL isModern;                       //@synthesize isModern=_isModern - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)_canBeReusedInPickerView;
-(id)titleLabel;
-(BOOL)isAmPm;
-(void)setIsAmPm:(BOOL)arg1 ;
-(void)setTitleLabelMaxX:(float)arg1 ;
-(void)setTitleAlignment:(int)arg1 ;
-(float)titleLabelMaxX;
-(int)titleAlignment;
-(BOOL)isModern;
-(void)setIsModern:(BOOL)arg1 ;
@end
