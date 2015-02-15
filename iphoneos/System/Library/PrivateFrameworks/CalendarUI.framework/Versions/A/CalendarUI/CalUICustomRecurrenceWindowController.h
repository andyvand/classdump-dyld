/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSWindowController.h>

@class NSView, CalUIPopupWindowState, EKCalendarItem, NSWindow, NSPopUpButton, NSTabView, NSTextField, NSMatrix, NSButton, NSMutableArray;

@interface CalUICustomRecurrenceWindowController : NSWindowController {

	NSView* _parentView;
	NSView* _containerView;
	int _currentWkStart;
	CalUIPopupWindowState* _windowState;
	EKCalendarItem* _calendarItem;
	NSWindow* _customRepeatPanel;
	NSPopUpButton* _recurrenceFrequency;
	NSTabView* _recurrenceTabView;
	NSTextField* _dailyRecurrenceInterval;
	NSTextField* _weeklyRecurrenceInterval;
	NSMatrix* _weeklyDaySelectionMatrix;
	NSTextField* _monthlyRecurrenceInterval;
	NSMatrix* _monthlyRuleMatrix;
	NSMatrix* _monthlyDayMatrix;
	NSPopUpButton* _monthlyWeekNumber;
	NSPopUpButton* _monthlyDayNumber;
	NSTextField* _yearlyRecurrenceInterval;
	NSMatrix* _yearlyMonthMatrix;
	NSButton* _yearlyByDaySwitch;
	NSPopUpButton* _yearlyWeekNumber;
	NSPopUpButton* _yearlyDayNumber;
	NSMutableArray* _tabHeights;
	NSMutableArray* _weekDaysNames;

}

@property (retain) CalUIPopupWindowState * windowState;                  //@synthesize windowState=_windowState - In the implementation block
@property (__weak) EKCalendarItem * calendarItem;                        //@synthesize calendarItem=_calendarItem - In the implementation block
@property (retain) NSWindow * customRepeatPanel;                         //@synthesize customRepeatPanel=_customRepeatPanel - In the implementation block
@property (__weak) NSPopUpButton * recurrenceFrequency;                  //@synthesize recurrenceFrequency=_recurrenceFrequency - In the implementation block
@property (__weak) NSTabView * recurrenceTabView;                        //@synthesize recurrenceTabView=_recurrenceTabView - In the implementation block
@property (__weak) NSTextField * dailyRecurrenceInterval;                //@synthesize dailyRecurrenceInterval=_dailyRecurrenceInterval - In the implementation block
@property (__weak) NSTextField * weeklyRecurrenceInterval;               //@synthesize weeklyRecurrenceInterval=_weeklyRecurrenceInterval - In the implementation block
@property (__weak) NSMatrix * weeklyDaySelectionMatrix;                  //@synthesize weeklyDaySelectionMatrix=_weeklyDaySelectionMatrix - In the implementation block
@property (__weak) NSTextField * monthlyRecurrenceInterval;              //@synthesize monthlyRecurrenceInterval=_monthlyRecurrenceInterval - In the implementation block
@property (__weak) NSMatrix * monthlyRuleMatrix;                         //@synthesize monthlyRuleMatrix=_monthlyRuleMatrix - In the implementation block
@property (__weak) NSMatrix * monthlyDayMatrix;                          //@synthesize monthlyDayMatrix=_monthlyDayMatrix - In the implementation block
@property (__weak) NSPopUpButton * monthlyWeekNumber;                    //@synthesize monthlyWeekNumber=_monthlyWeekNumber - In the implementation block
@property (__weak) NSPopUpButton * monthlyDayNumber;                     //@synthesize monthlyDayNumber=_monthlyDayNumber - In the implementation block
@property (__weak) NSTextField * yearlyRecurrenceInterval;               //@synthesize yearlyRecurrenceInterval=_yearlyRecurrenceInterval - In the implementation block
@property (__weak) NSMatrix * yearlyMonthMatrix;                         //@synthesize yearlyMonthMatrix=_yearlyMonthMatrix - In the implementation block
@property (__weak) NSButton * yearlyByDaySwitch;                         //@synthesize yearlyByDaySwitch=_yearlyByDaySwitch - In the implementation block
@property (__weak) NSPopUpButton * yearlyWeekNumber;                     //@synthesize yearlyWeekNumber=_yearlyWeekNumber - In the implementation block
@property (__weak) NSPopUpButton * yearlyDayNumber;                      //@synthesize yearlyDayNumber=_yearlyDayNumber - In the implementation block
@property (retain) NSMutableArray * tabHeights;                          //@synthesize tabHeights=_tabHeights - In the implementation block
@property (assign) int currentWkStart;                                   //@synthesize currentWkStart=_currentWkStart - In the implementation block
@property (retain) NSMutableArray * weekDaysNames;                       //@synthesize weekDaysNames=_weekDaysNames - In the implementation block
+(id)sharedInstance;
-(void)cancelClicked:(id)arg1 ;
-(void)okClicked:(id)arg1 ;
-(void)prepareToPopupOnView:(id)arg1 ;
-(void)updateWithCalendarItem:(id)arg1 ;
-(id)recurrenceRuleFromShowingPopup;
-(void)_initializeControls;
-(void)setWindowState:(CalUIPopupWindowState *)arg1 ;
-(void)updateStateWithCalendarItem:(id)arg1 ;
-(CalUIPopupWindowState *)windowState;
-(void)updateWindowWithState:(id)arg1 ;
-(void)setCalendarItem:(EKCalendarItem *)arg1 ;
-(void)updateStateWithRecurrenceRule:(id)arg1 startDate:(id)arg2 timeZone:(id)arg3 supportsMultipleDaysAndMonths:(char)arg4 supportsYearlyIntervalChange:(char)arg5 ;
-(void)setYearlyByDaySwitch:(NSButton *)arg1 ;
-(void)resetWindow;
-(void)updateDailyPaneWithWindowState:(id)arg1 ;
-(void)updateWeeklyPaneWithWindowState:(id)arg1 ;
-(void)updateMonthlyPaneWithWindowState:(id)arg1 ;
-(void)updateYearlyPaneWithWindowState:(id)arg1 ;
-(NSPopUpButton *)recurrenceFrequency;
-(void)switchToPaneAtIndex:(long long)arg1 ;
-(NSTextField *)dailyRecurrenceInterval;
-(NSTextField *)weeklyRecurrenceInterval;
-(NSTextField *)monthlyRecurrenceInterval;
-(NSTextField *)yearlyRecurrenceInterval;
-(NSMatrix *)weeklyDaySelectionMatrix;
-(NSMatrix *)monthlyDayMatrix;
-(NSMatrix *)monthlyRuleMatrix;
-(NSPopUpButton *)monthlyWeekNumber;
-(NSPopUpButton *)monthlyDayNumber;
-(NSMatrix *)yearlyMonthMatrix;
-(NSButton *)yearlyByDaySwitch;
-(NSPopUpButton *)yearlyWeekNumber;
-(NSPopUpButton *)yearlyDayNumber;
-(int)_recurrenceFrequencyWithState:(id)arg1 ;
-(id)_selectedDaysOfTheWeekWithState:(id)arg1 ;
-(id)_selectedDaysOfTheMonthWithState:(id)arg1 ;
-(id)_selectedMonthsOfTheYearWithState:(id)arg1 ;
-(id)_setPositionsWithState:(id)arg1 ;
-(long long)_intervalValueWithState:(id)arg1 ;
-(EKCalendarItem *)calendarItem;
-(long long)_runAndAttach;
-(void)updateStateFromWindow;
-(id)recurrenceRuleWithWindowState:(id)arg1 ;
-(int)currentWkStart;
-(void)setCurrentWkStart:(int)arg1 ;
-(id)_attach;
-(void)_openWithAnimation:(char)arg1 ;
-(void)_resetFrameFromViews;
-(CGRect)_frameForDeltaHeight:(double)arg1 ;
-(int)_weekNumberFromSelectedIndex:(int)arg1 ;
-(NSTabView *)recurrenceTabView;
-(void)setTabHeights:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tabHeights;
-(void)setWeekDaysNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)weekDaysNames;
-(NSWindow *)customRepeatPanel;
-(id)_byDayArray:(int)arg1 weekItemSelected:(int)arg2 ;
-(char)_cell:(id)arg1 isLastSelectedInMatrix:(id)arg2 ;
-(void)setOptionsEnabling;
-(char)isCustomRecurrenceValid;
-(void)updateStateWithRecurrenceRule:(id)arg1 ;
-(void)setWeekStartTo:(long long)arg1 ;
-(void)frequencyChanged:(id)arg1 ;
-(void)weeklyMatrixClicked:(id)arg1 ;
-(void)monthlyRuleChanged:(id)arg1 ;
-(void)monthlyMatrixClicked:(id)arg1 ;
-(void)yearlyByDayChanged:(id)arg1 ;
-(void)yearlyMatrixClicked:(id)arg1 ;
-(void)setCustomRepeatPanel:(NSWindow *)arg1 ;
-(void)setRecurrenceFrequency:(NSPopUpButton *)arg1 ;
-(void)setRecurrenceTabView:(NSTabView *)arg1 ;
-(void)setDailyRecurrenceInterval:(NSTextField *)arg1 ;
-(void)setWeeklyRecurrenceInterval:(NSTextField *)arg1 ;
-(void)setWeeklyDaySelectionMatrix:(NSMatrix *)arg1 ;
-(void)setMonthlyRecurrenceInterval:(NSTextField *)arg1 ;
-(void)setMonthlyRuleMatrix:(NSMatrix *)arg1 ;
-(void)setMonthlyDayMatrix:(NSMatrix *)arg1 ;
-(void)setMonthlyWeekNumber:(NSPopUpButton *)arg1 ;
-(void)setMonthlyDayNumber:(NSPopUpButton *)arg1 ;
-(void)setYearlyRecurrenceInterval:(NSTextField *)arg1 ;
-(void)setYearlyMonthMatrix:(NSMatrix *)arg1 ;
-(void)setYearlyWeekNumber:(NSPopUpButton *)arg1 ;
-(void)setYearlyDayNumber:(NSPopUpButton *)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(char)showPopup;
@end
