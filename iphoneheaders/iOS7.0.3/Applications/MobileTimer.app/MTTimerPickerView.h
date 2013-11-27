/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, UIDatePicker, TimerTimeView;

@interface MTTimerPickerView : UITableViewCell {

	UIView* _keylineView;
	UIView* _pickerBackgroundView;
	UIDatePicker* _picker;
	TimerTimeView* _timeView;
	int _state;

}

@property (nonatomic,readonly) UIDatePicker * picker;                 //@synthesize picker=_picker - In the implementation block
@property (nonatomic,readonly) TimerTimeView * timeView;              //@synthesize timeView=_timeView - In the implementation block
@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
-(id)timeView;
-(void)internalSetBackgroundColor:(id)arg1 ;
-(id)initWithPicker:(id)arg1 timeView:(id)arg2 reuseIdentifier:(id)arg3 ;
-(void)setState:(int)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)picker;
@end
