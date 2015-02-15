/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSView.h>
#import <CalendarUI/NSDatePickerCellDelegate.h>
#import <CalendarUI/IIDatePickerDelegate.h>
#import <CalendarUI/IIDatePickerPanelDelegate.h>
#import <CalendarUI/NSTableViewDelegate.h>
#import <CalendarUI/NSTableViewDataSource.h>

@protocol IIDatePickerWithMiniCalDelegate;
@class IIDatePicker, IIClosableDatePicker, IIDatePickerPanel, NSPanel, NSTableView, NSArray, NSDate, EKEvent, EKEventViewController, IIDatePickerPanelContentView, NSView, NSDatePicker, NSString;

@interface IIDatePickerWithMiniCal : NSView <NSDatePickerCellDelegate, IIDatePickerDelegate, IIDatePickerPanelDelegate, NSTableViewDelegate, NSTableViewDataSource> {

	IIDatePicker* _textDatePicker;
	IIDatePicker* _textDatePickerForPanel;
	IIDatePicker* _textTimePicker;
	IIClosableDatePicker* _calDatePicker;
	IIDatePickerPanel* _calPanel;
	NSPanel* _timeSuggestionPanel;
	NSTableView* _timeSuggestionTable;
	NSArray* _timeDescriptions;
	NSDate* _sourceDate;
	char _calendarDatePickerShown;
	char _userDismissedCalendarPicker;
	char _openingCalendarPicker;
	id<IIDatePickerWithMiniCalDelegate> _delegate;
	EKEvent* _event;
	EKEventViewController* _eventViewController;
	IIDatePickerPanelContentView* _calPanelContentView;
	NSView* _nextGadget;
	long long _indexOfSelectedTimeSuggestion;

}

@property (retain) IIDatePicker * textDatePicker;                                   //@synthesize textDatePicker=_textDatePicker - In the implementation block
@property (retain) NSDatePicker * textTimePicker;                                   //@synthesize textTimePicker=_textTimePicker - In the implementation block
@property (__weak) id<IIDatePickerWithMiniCalDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign) char calendarDatePickerShown;                                    //@synthesize calendarDatePickerShown=_calendarDatePickerShown - In the implementation block
@property (retain) NSPanel * timeSuggestionPanel;                                   //@synthesize timeSuggestionPanel=_timeSuggestionPanel - In the implementation block
@property (retain) NSTableView * timeSuggestionTable;                               //@synthesize timeSuggestionTable=_timeSuggestionTable - In the implementation block
@property (retain) NSArray * timeDescriptions;                                      //@synthesize timeDescriptions=_timeDescriptions - In the implementation block
@property (retain) NSDate * sourceDate;                                             //@synthesize sourceDate=_sourceDate - In the implementation block
@property (__weak) EKEvent * event;                                                 //@synthesize event=_event - In the implementation block
@property (__weak) EKEventViewController * eventViewController;                     //@synthesize eventViewController=_eventViewController - In the implementation block
@property (retain) IIClosableDatePicker * calDatePicker;                            //@synthesize calDatePicker=_calDatePicker - In the implementation block
@property (retain) IIDatePicker * textDatePickerForPanel;                           //@synthesize textDatePickerForPanel=_textDatePickerForPanel - In the implementation block
@property (retain) IIDatePickerPanel * calPanel;                                    //@synthesize calPanel=_calPanel - In the implementation block
@property (retain) IIDatePickerPanelContentView * calPanelContentView;              //@synthesize calPanelContentView=_calPanelContentView - In the implementation block
@property (__weak) NSView * nextGadget;                                             //@synthesize nextGadget=_nextGadget - In the implementation block
@property (assign) char userDismissedCalendarPicker;                                //@synthesize userDismissedCalendarPicker=_userDismissedCalendarPicker - In the implementation block
@property (assign) long long indexOfSelectedTimeSuggestion;                         //@synthesize indexOfSelectedTimeSuggestion=_indexOfSelectedTimeSuggestion - In the implementation block
@property (assign) char openingCalendarPicker;                                      //@synthesize openingCalendarPicker=_openingCalendarPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_durationDescriptions;
+(double)_maximumWidthFromAttributedStringArray:(id)arg1 ;
+(id)_timeDescriptionsForDate:(id)arg1 inTimeZone:(id)arg2 ;
+(id)_selectedDurationDescriptions;
-(EKEventViewController *)eventViewController;
-(id)initWithEventViewController:(id)arg1 ;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
-(IIDatePicker *)textDatePicker;
-(NSDatePicker *)textTimePicker;
-(void)showElements:(long long)arg1 ;
-(void)clearDelegates;
-(void)setTextDatePicker:(IIDatePicker *)arg1 ;
-(void)setTextDatePickerForPanel:(IIDatePicker *)arg1 ;
-(IIDatePicker *)textDatePickerForPanel;
-(void)setTextTimePicker:(NSDatePicker *)arg1 ;
-(void)_textDatePickerChanged:(id)arg1 ;
-(void)_textDatePickerForPanelChanged:(id)arg1 ;
-(void)_textTimePickerChanged:(id)arg1 ;
-(void)setCalDatePicker:(IIClosableDatePicker *)arg1 ;
-(IIClosableDatePicker *)calDatePicker;
-(void)_calPickerChanged:(id)arg1 ;
-(void)setCalPanelContentView:(IIDatePickerPanelContentView *)arg1 ;
-(IIDatePickerPanelContentView *)calPanelContentView;
-(void)setCalPanel:(IIDatePickerPanel *)arg1 ;
-(IIDatePickerPanel *)calPanel;
-(void)setTimeSuggestionTable:(NSTableView *)arg1 ;
-(NSTableView *)timeSuggestionTable;
-(void)_timeSuggestionPicked:(id)arg1 ;
-(void)setTimeSuggestionPanel:(NSPanel *)arg1 ;
-(NSPanel *)timeSuggestionPanel;
-(void)_updateSuggestionPanelSize;
-(void)setCalendarDatePickerShown:(char)arg1 ;
-(void)setUserDismissedCalendarPicker:(char)arg1 ;
-(void)setIndexOfSelectedTimeSuggestion:(long long)arg1 ;
-(void)_updateAllPickersWithDate:(id)arg1 ;
-(char)openingCalendarPicker;
-(void)setOpeningCalendarPicker:(char)arg1 ;
-(void)setNextGadget:(NSView *)arg1 ;
-(void)_inspectorWasScrolled:(id)arg1 ;
-(NSView *)nextGadget;
-(void)_hideCalendarPicker;
-(void)_updateSelectedTimeSuggestionCheckbox;
-(char)calendarDatePickerShown;
-(char)userDismissedCalendarPicker;
-(void)_displayCalendarPicker;
-(void)_displayTimeSuggestions;
-(void)_hideTimeSuggestions;
-(void)_setTimeToSuggestionAtIndex:(long long)arg1 ;
-(void)_hideCalendarPickerAndSelectDatePicker;
-(NSDate *)sourceDate;
-(void)setTimeDescriptions:(NSArray *)arg1 ;
-(NSArray *)timeDescriptions;
-(void)setSourceDate:(NSDate *)arg1 ;
-(long long)indexOfSelectedTimeSuggestion;
-(void)_datePickerCellDidBecomeFirstResponder:(id)arg1 ;
-(void)_datePickerCellDidResignFirstResponder:(id)arg1 ;
-(char)_datePickerCell:(id)arg1 receivedMouseDown:(id)arg2 ;
-(char)_datePickerCell:(id)arg1 receivedKeyDown:(id)arg2 ;
-(void)datePickerPanelDidResignKeyWindow:(id)arg1 ;
-(void)selectNextKeyViewHidingPanel:(id)arg1 ;
-(void)selectPreviousKeyViewHidingPanel:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<IIDatePickerWithMiniCalDelegate>)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)cell;
-(void)setEnabled:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setFont:(id)arg1 ;
-(void)setNextKeyView:(id)arg1 ;
-(id<IIDatePickerWithMiniCalDelegate>)delegate;
-(void)sizeToFit;
-(void)setTextColor:(id)arg1 ;
-(char)allowsVibrancy;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(double)baselineOffsetFromBottom;
-(void)awakeFromNib;
-(void)setTimeZone:(id)arg1 ;
-(id)dateValue;
-(void)setDateValue:(id)arg1 ;
-(void)setMinDate:(id)arg1 ;
-(void)datePickerCell:(id)arg1 validateProposedDateValue:(id*)arg2 timeInterval:(double*)arg3 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(id)_calendar;
-(void)setup;
@end

