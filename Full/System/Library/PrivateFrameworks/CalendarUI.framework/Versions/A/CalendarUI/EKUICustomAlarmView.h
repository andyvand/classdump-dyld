/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSView.h>
#import <CalendarUI/NSTextFieldDelegate.h>
#import <CalendarUI/IIDatePickerWithMiniCalDelegate.h>

@class EKUIAlarmGadget, EKAlarm, NSPopUpButton, IIDatePickerWithMiniCal, EKUICountField, NSTextField, NSView, CalUIIntegerFormatter, NSString;

@interface EKUICustomAlarmView : NSView <NSTextFieldDelegate, IIDatePickerWithMiniCalDelegate> {

	int _currentAlarmType;
	EKUIAlarmGadget* _gadget;
	EKAlarm* _alarm;
	NSPopUpButton* _alarmTypeButton;
	NSPopUpButton* _auxButton;
	NSPopUpButton* _timingButton;
	IIDatePickerWithMiniCal* _datePicker;
	EKUICountField* _countField;
	NSTextField* _atField;
	NSView* _dateBox;
	NSView* _timeBox;
	NSView* _lastKeyView;
	CalUIIntegerFormatter* _countFormatter;

}

@property (retain) EKUIAlarmGadget * gadget;                            //@synthesize gadget=_gadget - In the implementation block
@property (retain) EKAlarm * alarm;                                     //@synthesize alarm=_alarm - In the implementation block
@property (retain) NSPopUpButton * alarmTypeButton;                     //@synthesize alarmTypeButton=_alarmTypeButton - In the implementation block
@property (retain) NSPopUpButton * auxButton;                           //@synthesize auxButton=_auxButton - In the implementation block
@property (retain) NSPopUpButton * timingButton;                        //@synthesize timingButton=_timingButton - In the implementation block
@property (retain) IIDatePickerWithMiniCal * datePicker;                //@synthesize datePicker=_datePicker - In the implementation block
@property (retain) EKUICountField * countField;                         //@synthesize countField=_countField - In the implementation block
@property (retain) NSTextField * atField;                               //@synthesize atField=_atField - In the implementation block
@property (retain) NSView * dateBox;                                    //@synthesize dateBox=_dateBox - In the implementation block
@property (retain) NSView * timeBox;                                    //@synthesize timeBox=_timeBox - In the implementation block
@property (__weak) NSView * lastKeyView;                                //@synthesize lastKeyView=_lastKeyView - In the implementation block
@property (retain) CalUIIntegerFormatter * countFormatter;              //@synthesize countFormatter=_countFormatter - In the implementation block
@property (assign) int currentAlarmType;                                //@synthesize currentAlarmType=_currentAlarmType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLastKeyView:(NSView *)arg1 ;
-(NSView *)lastKeyView;
-(void)setGadget:(EKUIAlarmGadget *)arg1 ;
-(EKUIAlarmGadget *)gadget;
-(void)setDatePicker:(IIDatePickerWithMiniCal *)arg1 ;
-(IIDatePickerWithMiniCal *)datePicker;
-(char)datePickerShouldDisplayMiniCal:(id)arg1 ;
-(char)datePickerShouldDisplayTimeSuggestions:(id)arg1 ;
-(void)datePickerWithMiniCalChanged:(id)arg1 ;
-(void)datePickerDidResignFirstResponder:(id)arg1 ;
-(double)additionalVerticalOffsetForPickerPopover;
-(NSPopUpButton *)alarmTypeButton;
-(void)addMenuItemForAlarmType:(int)arg1 withTitle:(id)arg2 ;
-(void)setAuxButton:(NSPopUpButton *)arg1 ;
-(NSPopUpButton *)auxButton;
-(void)setTimeBox:(NSView *)arg1 ;
-(NSView *)timeBox;
-(void)setTimingButton:(NSPopUpButton *)arg1 ;
-(NSPopUpButton *)timingButton;
-(void)setCountField:(EKUICountField *)arg1 ;
-(EKUICountField *)countField;
-(void)setCountFormatter:(CalUIIntegerFormatter *)arg1 ;
-(CalUIIntegerFormatter *)countFormatter;
-(void)countChanged;
-(void)setDateBox:(NSView *)arg1 ;
-(NSView *)dateBox;
-(void)setAtField:(NSTextField *)arg1 ;
-(NSTextField *)atField;
-(void)chooseTiming:(id)arg1 ;
-(void)chooseAlarmType:(id)arg1 ;
-(void)fillAuxMenuWithSounds;
-(void)chooseSound:(id)arg1 ;
-(void)fillAuxMenuWithEmailAddresses;
-(void)fillAuxMenuWithFilesWithNewFileItem:(id)arg1 ;
-(void)fillTimingMenu;
-(void)addMenuItemForTimingType:(long long)arg1 withTitle:(id)arg2 ;
-(void)chooseEmail:(id)arg1 ;
-(id)_iCalURL;
-(void)chooseFile:(id)arg1 ;
-(void)chooseICal:(id)arg1 ;
-(void)chooseNewFile:(id)arg1 ;
-(char)_isAddingEmailAlarmValid;
-(int)currentAlarmType;
-(void)setAlarmFileURL:(id)arg1 ;
-(void)displayOpenPanelForDirectory:(id)arg1 scriptsOnly:(char)arg2 ;
-(id)initWithGadget:(id)arg1 ;
-(void)setAlarmTypeButton:(NSPopUpButton *)arg1 ;
-(void)setCurrentAlarmType:(int)arg1 ;
-(void)updateConstraints;
-(CGSize)intrinsicContentSize;
-(void)update;
-(void)setAlarm:(EKAlarm *)arg1 ;
-(EKAlarm *)alarm;
@end
