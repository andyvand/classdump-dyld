/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUISingleViewGadget.h>

@class EKUIButton, NSView, NSArray;

@interface EKUIThreeButtonGadget : EKUISingleViewGadget {

	EKUIButton* _firstButton;
	EKUIButton* _secondButton;
	EKUIButton* _thirdButton;
	NSView* _control;
	NSArray* _buttonConstraints;

}

@property (retain) EKUIButton * firstButton;                 //@synthesize firstButton=_firstButton - In the implementation block
@property (retain) EKUIButton * secondButton;                //@synthesize secondButton=_secondButton - In the implementation block
@property (retain) EKUIButton * thirdButton;                 //@synthesize thirdButton=_thirdButton - In the implementation block
@property (retain) NSView * control;                         //@synthesize control=_control - In the implementation block
@property (retain) NSArray * buttonConstraints;              //@synthesize buttonConstraints=_buttonConstraints - In the implementation block
-(void)setControl:(NSView *)arg1 ;
-(NSView *)control;
-(id)initWithEventViewController:(id)arg1 ;
-(char)needsExpansion;
-(void)updateWithChanges:(id)arg1 ;
-(id)firstButtonTitle;
-(id)secondButtonTitle;
-(id)thirdButtonTitle;
-(void)firstButtonClicked:(id)arg1 ;
-(void)secondButtonClicked:(id)arg1 ;
-(void)thirdButtonClicked:(id)arg1 ;
-(void)updateButtons;
-(void)setButtonConstraints:(NSArray *)arg1 ;
-(id)_buttonWithTitle:(id)arg1 ;
-(void)setFirstButton:(EKUIButton *)arg1 ;
-(EKUIButton *)firstButton;
-(void)setSecondButton:(EKUIButton *)arg1 ;
-(EKUIButton *)secondButton;
-(void)setThirdButton:(EKUIButton *)arg1 ;
-(EKUIButton *)thirdButton;
-(NSArray *)buttonConstraints;
-(void)updateConstraints;
@end

