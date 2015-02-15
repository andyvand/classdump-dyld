/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSView.h>
#import <CalendarUI/CUIKSingleDayTimelineGeometryDelegate.h>
#import <CalendarUI/CUIKSingleDayTimelineLayoutScreenUtils.h>
#import <CalendarUI/CalUIBoxOccurrenceContentDelegate.h>

@protocol CalUIDayViewGadgetDataSource, CalUIDayViewGadgetAppearanceDelegate;
@class NSDate, CalUIDayViewGadgetController, NSArray, NSDateFormatter, NSColor, NSTimer, NSView, HourLabel, NSTextField, NSString;

@interface CalUIDayViewGadget : NSView <CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils, CalUIBoxOccurrenceContentDelegate> {

	id<CalUIDayViewGadgetDataSource> _dataSource;
	id<CalUIDayViewGadgetAppearanceDelegate> _appearanceDelegate;
	NSDate* _displayEnd;
	CalUIDayViewGadgetController* _controller;
	NSArray* _dayViewOccurrences;
	NSArray* _dayViewGridLines;
	NSArray* _dayViewGridLabels;
	NSDate* _nextRefreshDate;
	NSDate* _displayStart;
	NSDateFormatter* _dateFormatter;
	NSColor* _transparentColor;
	NSTimer* _refreshTimer;
	NSTimer* _nowLineTimer;
	NSView* _nowLine;
	NSView* _nowCircle;
	HourLabel* _nowLabel;
	NSTextField* _noEventsLabel;
	double _viewHeightInPixels;
	CGRect _displayedRect;

}

@property (assign,nonatomic,__weak) id<CalUIDayViewGadgetDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CalUIDayViewGadgetAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (retain) NSDate * displayEnd;                                                                       //@synthesize displayEnd=_displayEnd - In the implementation block
@property (assign,nonatomic,__weak) CalUIDayViewGadgetController * controller;                                //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSArray * dayViewOccurrences;                                                    //@synthesize dayViewOccurrences=_dayViewOccurrences - In the implementation block
@property (nonatomic,retain) NSArray * dayViewGridLines;                                                      //@synthesize dayViewGridLines=_dayViewGridLines - In the implementation block
@property (nonatomic,retain) NSArray * dayViewGridLabels;                                                     //@synthesize dayViewGridLabels=_dayViewGridLabels - In the implementation block
@property (nonatomic,retain) NSDate * nextRefreshDate;                                                        //@synthesize nextRefreshDate=_nextRefreshDate - In the implementation block
@property (nonatomic,retain) NSDate * displayStart;                                                           //@synthesize displayStart=_displayStart - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * dateFormatter;                                               //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,readonly) NSColor * transparentColor;                                                    //@synthesize transparentColor=_transparentColor - In the implementation block
@property (nonatomic,retain) NSTimer * refreshTimer;                                                          //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (nonatomic,retain) NSTimer * nowLineTimer;                                                          //@synthesize nowLineTimer=_nowLineTimer - In the implementation block
@property (assign,nonatomic) CGRect displayedRect;                                                            //@synthesize displayedRect=_displayedRect - In the implementation block
@property (nonatomic,retain) NSView * nowLine;                                                                //@synthesize nowLine=_nowLine - In the implementation block
@property (nonatomic,retain) NSView * nowCircle;                                                              //@synthesize nowCircle=_nowCircle - In the implementation block
@property (nonatomic,retain) HourLabel * nowLabel;                                                            //@synthesize nowLabel=_nowLabel - In the implementation block
@property (nonatomic,retain) NSTextField * noEventsLabel;                                                     //@synthesize noEventsLabel=_noEventsLabel - In the implementation block
@property (nonatomic,readonly) char hasEventsToShow; 
@property (nonatomic,readonly) double viewHeightInSeconds; 
@property (nonatomic,readonly) double viewHeightInPixels;                                                     //@synthesize viewHeightInPixels=_viewHeightInPixels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) char originIsUpperLeft; 
-(NSDateFormatter *)dateFormatter;
-(id<CalUIDayViewGadgetAppearanceDelegate>)appearanceDelegate;
-(double)hourHeight;
-(NSDate *)displayEnd;
-(NSDate *)displayStart;
-(NSArray *)dayViewOccurrences;
-(id)startOfDay;
-(id)endOfDay;
-(NSArray *)dayViewGridLines;
-(double)_hourLinesXPos;
-(NSArray *)dayViewGridLabels;
-(char)_isHourTooCloseToNow:(id)arg1 ;
-(CGPoint)_pointForHourLabel:(id)arg1 ;
-(CGPoint)pointForDate:(double)arg1 ;
-(char)_liesOnHour:(id)arg1 ;
-(double)RoundToScreenScale:(double)arg1 ;
-(void)_updateNowIndicator;
-(void)_updateNoEventsLabel;
-(void)_calculateDisplayBounds;
-(NSDate *)nextRefreshDate;
-(void)_scheduleRefreshAfterDate:(id)arg1 ;
-(void)_scheduleNowIndicatorUpdate;
-(NSView *)nowLine;
-(NSView *)nowCircle;
-(HourLabel *)nowLabel;
-(char)hasEventsToShow;
-(void)_hideNowIndicator:(char)arg1 ;
-(void)setDayViewGridLines:(NSArray *)arg1 ;
-(void)setDayViewOccurrences:(NSArray *)arg1 ;
-(void)setDayViewGridLabels:(NSArray *)arg1 ;
-(CGRect)displayedRect;
-(void)setDisplayedRect:(CGRect)arg1 ;
-(double)viewHeightInSeconds;
-(NSTextField *)noEventsLabel;
-(double)_hourLineWidth;
-(void)_updateDateFormatterWithFormat:(id)arg1 ;
-(void)setNextRefreshDate:(NSDate *)arg1 ;
-(void)setDisplayStart:(NSDate *)arg1 ;
-(void)setDisplayEnd:(NSDate *)arg1 ;
-(id)_addMarginToDate:(id)arg1 shouldSearchBackward:(char)arg2 ;
-(void)setRefreshTimer:(NSTimer *)arg1 ;
-(NSTimer *)nowLineTimer;
-(void)setNowLineTimer:(NSTimer *)arg1 ;
-(double)viewHeightInPoints;
-(double)RoundToScreenScaleForFloat:(double)arg1 ;
-(id)fontForEventOccurrencesWithWeight:(int)arg1 ;
-(char)shouldShowTime;
-(id)locationFont;
-(double)dateForPoint:(CGPoint)arg1 ;
-(double)topPadding;
-(double)timeWidth;
-(char)originIsUpperLeft;
-(CGRect)RoundRectToScreenScaleForRect:(CGRect)arg1 ;
-(double)yValueInDayGridForDate:(id)arg1 ;
-(id)dayGridView;
-(char)shouldOccurrenceShowTravelTime:(id)arg1 ;
-(void)dataChanged;
-(double)_heightWithMargins;
-(double)barToBarHorizontalDistanceIncludingBarWidth;
-(void)setAppearanceDelegate:(id<CalUIDayViewGadgetAppearanceDelegate>)arg1 ;
-(NSColor *)transparentColor;
-(void)setNowLine:(NSView *)arg1 ;
-(void)setNowCircle:(NSView *)arg1 ;
-(void)setNowLabel:(HourLabel *)arg1 ;
-(void)setNoEventsLabel:(NSTextField *)arg1 ;
-(double)viewHeightInPixels;
-(NSTimer *)refreshTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(CalUIDayViewGadgetController *)controller;
-(void)layout;
-(char)wantsLayer;
-(char)isFlipped;
-(id)titleFont;
-(void)setDataSource:(id<CalUIDayViewGadgetDataSource>)arg1 ;
-(long long)backgroundStyle;
-(void)setController:(CalUIDayViewGadgetController *)arg1 ;
-(id<CalUIDayViewGadgetDataSource>)dataSource;
@end

