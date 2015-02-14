/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUIDateTimeGadget.h>
#import <CalendarUI/NSTextFieldDelegate.h>

@class NSView, EKUIPopUpButton, CalUIResizingTextField, NSTextField, NSArray, NSNumber, NSString;

@interface EKUIEndRepeatGadget : EKUIDateTimeGadget <NSTextFieldDelegate> {

	NSView* _endRepeatContainerView;
	EKUIPopUpButton* _endRepeatTypePicker;
	CalUIResizingTextField* _numberOfTimesField;
	NSTextField* _numberOfTimesLabel;
	NSArray* _endConstraints;
	NSNumber* _selectedWidth;

}

@property (retain) NSView * endRepeatContainerView;                          //@synthesize endRepeatContainerView=_endRepeatContainerView - In the implementation block
@property (retain) EKUIPopUpButton * endRepeatTypePicker;                    //@synthesize endRepeatTypePicker=_endRepeatTypePicker - In the implementation block
@property (retain) CalUIResizingTextField * numberOfTimesField;              //@synthesize numberOfTimesField=_numberOfTimesField - In the implementation block
@property (retain) NSTextField * numberOfTimesLabel;                         //@synthesize numberOfTimesLabel=_numberOfTimesLabel - In the implementation block
@property (retain) NSArray * endConstraints;                                 //@synthesize endConstraints=_endConstraints - In the implementation block
@property (retain) NSNumber * selectedWidth;                                 //@synthesize selectedWidth=_selectedWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(id)control;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(void)updateWithChanges:(id)arg1 ;
-(id)labelString;
-(double)pixelsBetweenLabelAndControl;
-(char)shouldDisplayWhenNotEditable;
-(void)datePickerChangedToDate:(id)arg1 ;
-(void)setEndRepeatContainerView:(NSView *)arg1 ;
-(void)setEndRepeatTypePicker:(EKUIPopUpButton *)arg1 ;
-(EKUIPopUpButton *)endRepeatTypePicker;
-(void)addNewMenuItemForEndType:(unsigned long long)arg1 withTitle:(id)arg2 ;
-(NSView *)endRepeatContainerView;
-(void)setNumberOfTimesField:(CalUIResizingTextField *)arg1 ;
-(CalUIResizingTextField *)numberOfTimesField;
-(void)setNumberOfTimesLabel:(NSTextField *)arg1 ;
-(NSTextField *)numberOfTimesLabel;
-(void)setEndConstraints:(NSArray *)arg1 ;
-(NSArray *)endConstraints;
-(void)endTypeChanged:(id)arg1 ;
-(void)removeRecurrenceEnd;
-(void)updateRecurrenceEndWithDate:(id)arg1 ;
-(void)updateRecurrenceEndForAfterNumberOfOccurrences:(unsigned long long)arg1 ;
-(id)viewForBaselineAlignment;
-(NSNumber *)selectedWidth;
-(void)setSelectedWidth:(NSNumber *)arg1 ;
-(void)updateConstraints;
-(char)isEditable;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(double)baselineOffset;
@end

