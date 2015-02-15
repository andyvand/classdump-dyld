/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUIRepeatGadget.h>

@class EKUIPopUpButton;

@interface EKUIRepeatPickerGadget : EKUIRepeatGadget {

	EKUIPopUpButton* _repeatPicker;

}

@property (retain) EKUIPopUpButton * repeatPicker;              //@synthesize repeatPicker=_repeatPicker - In the implementation block
-(id)control;
-(id)initWithEventViewController:(id)arg1 ;
-(void)updateWithChanges:(id)arg1 ;
-(id)labelString;
-(void)setRepeatPicker:(EKUIPopUpButton *)arg1 ;
-(EKUIPopUpButton *)repeatPicker;
-(id)addMenuItemForRecurrenceFrequency:(long long)arg1 withTitle:(id)arg2 ;
-(void)repeatChanged:(id)arg1 ;
-(double)baselineOffset;
@end
