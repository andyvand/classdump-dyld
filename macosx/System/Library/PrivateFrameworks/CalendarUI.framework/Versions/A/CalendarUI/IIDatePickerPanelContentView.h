/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSView.h>

@class IIDatePicker, NSDatePicker;

@interface IIDatePickerPanelContentView : NSView {

	IIDatePicker* __textDatePicker;
	NSDatePicker* __calendarDatePicker;

}

@property (retain) IIDatePicker * _textDatePicker;                  //@synthesize _textDatePicker=__textDatePicker - In the implementation block
@property (retain) NSDatePicker * _calendarDatePicker;              //@synthesize _calendarDatePicker=__calendarDatePicker - In the implementation block
-(void)setTextDatePicker:(id)arg1 ;
-(void)setCalendarDatePicker:(id)arg1 ;
-(void)sizeToFitAndArrange;
-(IIDatePicker *)_textDatePicker;
-(void)set_textDatePicker:(IIDatePicker *)arg1 ;
-(NSDatePicker *)_calendarDatePicker;
-(void)set_calendarDatePicker:(NSDatePicker *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

