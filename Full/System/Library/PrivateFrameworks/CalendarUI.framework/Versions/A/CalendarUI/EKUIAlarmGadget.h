/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUILabeledGadget.h>

@class EKAlarm, NSView, EKUIPopUpButton, EKUIAlarmButton, EKUIAlarmCompositeGadget, NSArray;

@interface EKUIAlarmGadget : EKUILabeledGadget {

	char _addButtonAvailible;
	EKAlarm* _alarm;
	NSView* _container;
	EKUIPopUpButton* _alarmPicker;
	EKUIAlarmButton* _addButton;
	unsigned long long _currentTrigger;
	EKUIAlarmCompositeGadget* _alarmsContainer;
	NSArray* _alarmConstraints;

}

@property (retain) EKAlarm * alarm;                                         //@synthesize alarm=_alarm - In the implementation block
@property (assign) char addButtonAvailible;                                 //@synthesize addButtonAvailible=_addButtonAvailible - In the implementation block
@property (retain) NSView * container;                                      //@synthesize container=_container - In the implementation block
@property (retain) EKUIPopUpButton * alarmPicker;                           //@synthesize alarmPicker=_alarmPicker - In the implementation block
@property (retain) EKUIAlarmButton * addButton;                             //@synthesize addButton=_addButton - In the implementation block
@property (assign) unsigned long long currentTrigger;                       //@synthesize currentTrigger=_currentTrigger - In the implementation block
@property (__weak) EKUIAlarmCompositeGadget * alarmsContainer;              //@synthesize alarmsContainer=_alarmsContainer - In the implementation block
@property (retain) NSArray * alarmConstraints;                              //@synthesize alarmConstraints=_alarmConstraints - In the implementation block
-(EKUIAlarmButton *)addButton;
-(void)setAddButton:(EKUIAlarmButton *)arg1 ;
-(id)control;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)labelString;
-(double)pixelsBetweenLabelAndControl;
-(void)mouseEnteredGadgetView;
-(void)mouseExitedGadgetView;
-(id)viewForBaselineAlignment;
-(void)updateWithAlarm:(id)arg1 ;
-(char)addButtonAvailible;
-(void)setAlarmsContainer:(EKUIAlarmCompositeGadget *)arg1 ;
-(void)setAlarmConstraints:(NSArray *)arg1 ;
-(void)setAddButtonAvailible:(char)arg1 ;
-(void)setAlarmPicker:(EKUIPopUpButton *)arg1 ;
-(EKUIPopUpButton *)alarmPicker;
-(void)addMenuItemForTrigger:(unsigned long long)arg1 withTitle:(id)arg2 abbreviatedTitle:(id)arg3 ;
-(void)alarmTriggerSelected;
-(void)setMenuItem:(id)arg1 title:(id)arg2 withAbbreviatedTitle:(id)arg3 ;
-(unsigned long long)currentTrigger;
-(void)updateAlarmWithTrigger:(unsigned long long)arg1 ;
-(void)setCurrentTrigger:(unsigned long long)arg1 ;
-(double)relativeOffsetForTrigger:(unsigned long long)arg1 ;
-(EKUIAlarmCompositeGadget *)alarmsContainer;
-(NSArray *)alarmConstraints;
-(id)defaultAlarmDescriptionWithAbbreviation:(char)arg1 ;
-(id)alarmDescriptionWithAbbreviation:(char)arg1 ;
-(unsigned long long)triggerForRelativeOffset:(double)arg1 ;
-(id)initWithCompositeGadget:(id)arg1 ;
-(void)updateConstraints;
-(char)isEditable;
-(NSView *)container;
-(void)setContainer:(NSView *)arg1 ;
-(void)setAlarm:(EKAlarm *)arg1 ;
-(EKAlarm *)alarm;
-(double)baselineOffset;
@end

