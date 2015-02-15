/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSView.h>
#import <CalendarUI/CalUIAXMiniMonthProxyDelegate.h>

@protocol CalUIMiniMonthViewDelegate;
@class NSDate, NSTrackingArea, CalUIMiniMonthViewFormatter, CalUIAXMiniMonthProxy, NSMutableArray, NSTextField, NSButton, NSCalendar, NSArray, NSString;

@interface CalUIDayMiniMonthView : NSView <CalUIAXMiniMonthProxyDelegate> {

	NSDate* _date;
	NSDate* _month;
	NSTrackingArea* _trackingArea;
	char _supportsScrubbing;
	char _supportsHovering;
	id<CalUIMiniMonthViewDelegate> _delegate;
	CalUIMiniMonthViewFormatter* _formatter;
	CalUIAXMiniMonthProxy* _axMiniMonthProxy;
	NSMutableArray* _thisMonthsDayCells;
	NSMutableArray* _allDayCells;
	NSDate* _nextMonth;
	NSTextField* _monthNameField;
	NSButton* _previousMonthButton;
	NSButton* _nextMonthButton;
	unsigned long long _daysInWeek;
	unsigned long long _firstDayOfWeek;
	NSCalendar* _calendar;
	long long _widthPerDay;
	NSArray* _weekDayTitles;

}

@property (__weak) id<CalUIMiniMonthViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSDate * date; 
@property (retain) CalUIMiniMonthViewFormatter * formatter;               //@synthesize formatter=_formatter - In the implementation block
@property (assign) char supportsScrubbing;                                //@synthesize supportsScrubbing=_supportsScrubbing - In the implementation block
@property (assign) char supportsHovering;                                 //@synthesize supportsHovering=_supportsHovering - In the implementation block
@property (retain) CalUIAXMiniMonthProxy * axMiniMonthProxy;              //@synthesize axMiniMonthProxy=_axMiniMonthProxy - In the implementation block
@property (retain) NSMutableArray * thisMonthsDayCells;                   //@synthesize thisMonthsDayCells=_thisMonthsDayCells - In the implementation block
@property (retain) NSMutableArray * allDayCells;                          //@synthesize allDayCells=_allDayCells - In the implementation block
@property (readonly) NSDate * month;                                      //@synthesize month=_month - In the implementation block
@property (retain) NSDate * nextMonth;                                    //@synthesize nextMonth=_nextMonth - In the implementation block
@property (retain) NSTextField * monthNameField;                          //@synthesize monthNameField=_monthNameField - In the implementation block
@property (retain) NSButton * previousMonthButton;                        //@synthesize previousMonthButton=_previousMonthButton - In the implementation block
@property (retain) NSButton * nextMonthButton;                            //@synthesize nextMonthButton=_nextMonthButton - In the implementation block
@property (assign) unsigned long long daysInWeek;                         //@synthesize daysInWeek=_daysInWeek - In the implementation block
@property (assign) unsigned long long firstDayOfWeek;                     //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (retain) NSCalendar * calendar;                                 //@synthesize calendar=_calendar - In the implementation block
@property (assign) long long widthPerDay;                                 //@synthesize widthPerDay=_widthPerDay - In the implementation block
@property (retain) NSArray * weekDayTitles;                               //@synthesize weekDayTitles=_weekDayTitles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedDragTypes;
-(id)axChildren;
-(id)axSelectedChildren;
-(id)axFirstDate;
-(id)axColumnCount;
-(id)axRowCount;
-(id)initWithFrame:(CGRect)arg1 formatter:(id)arg2 ;
-(void)setThisMonthsDayCells:(NSMutableArray *)arg1 ;
-(void)setAllDayCells:(NSMutableArray *)arg1 ;
-(void)setSupportsScrubbing:(char)arg1 ;
-(void)setSupportsHovering:(char)arg1 ;
-(void)setMonthNameField:(NSTextField *)arg1 ;
-(NSTextField *)monthNameField;
-(void)setPreviousMonthButton:(NSButton *)arg1 ;
-(NSButton *)previousMonthButton;
-(void)backOneMonth;
-(void)setNextMonthButton:(NSButton *)arg1 ;
-(NSButton *)nextMonthButton;
-(void)forwardOneMonth;
-(NSMutableArray *)allDayCells;
-(char)supportsScrubbing;
-(char)supportsHovering;
-(void)forwardOneMonthAndNotify:(char)arg1 ;
-(void)updateWithDate:(id)arg1 ;
-(void)backOneMonthAndNotify:(char)arg1 ;
-(void)updateWithDate:(id)arg1 force:(char)arg2 ;
-(void)configureDayCells;
-(void)_updateGeometry;
-(NSMutableArray *)thisMonthsDayCells;
-(CalUIAXMiniMonthProxy *)axMiniMonthProxy;
-(void)setAxMiniMonthProxy:(CalUIAXMiniMonthProxy *)arg1 ;
-(unsigned long long)firstDayOfWeek;
-(unsigned long long)daysInWeek;
-(id)_miniMonthDayCellForDate:(id)arg1 isActive:(char)arg2 isPrevMonth:(char)arg3 isNextMonth:(char)arg4 ;
-(id)_attributedWeekNumberStringForDate:(id)arg1 ;
-(NSDate *)nextMonth;
-(id)_attributedMonthStringShortened:(char)arg1 ;
-(void)_updateWeekDayTitles;
-(double)_xOffsetForColumn:(long long)arg1 ;
-(CGRect)effectiveFrame;
-(double)_widthForColumn:(long long)arg1 ;
-(NSArray *)weekDayTitles;
-(double)_bottomInsetForTotalRows:(long long)arg1 totalHeight:(double)arg2 ;
-(unsigned long long)_columnForDayCell:(id)arg1 ;
-(double)_heightForRow:(long long)arg1 totalRows:(long long)arg2 totalHeight:(double)arg3 ;
-(double)_yOffsetForRow:(long long)arg1 totalRows:(long long)arg2 totalHeight:(double)arg3 ;
-(void)setNextMonth:(NSDate *)arg1 ;
-(unsigned long long)_weekRowForDayNumber:(long long)arg1 firstWeekdayOfMonth:(long long)arg2 firstDayOfWeek:(long long)arg3 daysInAWeek:(unsigned long long)arg4 ;
-(unsigned long long)minimumNumberOfRowsNeededForInMonthDays;
-(void)_updateConstants;
-(void)setWidthPerDay:(long long)arg1 ;
-(void)setFirstDayOfWeek:(unsigned long long)arg1 ;
-(void)setDaysInWeek:(unsigned long long)arg1 ;
-(void)setWeekDayTitles:(NSArray *)arg1 ;
-(unsigned long long)_weekRowForDayCell:(id)arg1 ;
-(void)_updateAttributesForDayCell:(id)arg1 isPrevNextMonth:(char)arg2 ;
-(void)selectDayCell:(id)arg1 ;
-(long long)widthPerDay;
-(id)axSize;
-(void)setDelegate:(id<CalUIMiniMonthViewDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id<CalUIMiniMonthViewDelegate>)delegate;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)allowsVibrancy;
-(unsigned long long)numberOfRows;
-(char)acceptsFirstMouse:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(NSDate *)date;
-(CalUIMiniMonthViewFormatter *)formatter;
-(void)setFormatter:(CalUIMiniMonthViewFormatter *)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSDate *)month;
-(void)setDate:(NSDate *)arg1 ;
-(void)mouseMoved:(id)arg1 ;
@end

