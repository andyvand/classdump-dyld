/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <CalendarUI/CalUIDayViewGadgetDataSource.h>

@protocol CalUIDayViewGadgetAppearanceDelegate;
@class CalUIDayViewGadget, EKEventStore, NSDate, NSSet, NSArray, NSString;

@interface CalUIDayViewGadgetController : NSViewController <CalUIDayViewGadgetDataSource> {

	CalUIDayViewGadget* _view;
	EKEventStore* _eventStore;
	NSDate* _dayOfInterest;
	NSDate* _lastRefresh;
	NSSet* _disabledCalendars;
	NSDate* _startOfDay;
	NSDate* _endOfDay;
	NSArray* _events;
	id<CalUIDayViewGadgetAppearanceDelegate> _appearanceDelegate;

}

@property (nonatomic,retain) NSDate * dayOfInterest;                                                            //@synthesize dayOfInterest=_dayOfInterest - In the implementation block
@property (retain) NSDate * lastRefresh;                                                                        //@synthesize lastRefresh=_lastRefresh - In the implementation block
@property (readonly) char eventStoreAccessGranted; 
@property (readonly) NSObject*<OS_dispatch_group> eventStoreReadyGroup; 
@property (retain) NSSet * disabledCalendars;                                                                   //@synthesize disabledCalendars=_disabledCalendars - In the implementation block
@property (nonatomic,readonly) NSDate * startOfDay;                                                             //@synthesize startOfDay=_startOfDay - In the implementation block
@property (nonatomic,readonly) NSDate * endOfDay;                                                               //@synthesize endOfDay=_endOfDay - In the implementation block
@property (nonatomic,readonly) NSArray * events;                                                                //@synthesize events=_events - In the implementation block
@property (retain) EKEventStore * eventStore;                                                                   //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,__weak,readonly) id<CalUIDayViewGadgetAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)localeChanged:(id)arg1 ;
-(id<CalUIDayViewGadgetAppearanceDelegate>)appearanceDelegate;
-(NSDate *)startOfDay;
-(NSDate *)endOfDay;
-(void)sizeChanged;
-(EKEventStore *)eventStore;
-(void)setDisabledCalendars:(NSSet *)arg1 ;
-(void)loadEvents;
-(void)setLastRefresh:(NSDate *)arg1 ;
-(void)refreshShouldForceDisplay:(char)arg1 ;
-(void)refreshAsync;
-(NSSet *)disabledCalendars;
-(void)setDayOfInterest:(NSDate *)arg1 ;
-(void)calendarChanged:(id)arg1 userInfo:(id)arg2 ;
-(void)disabledCalendarsChanged:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)eventStoreReadyGroup;
-(char)eventStoreAccessGranted;
-(void)calendarChanged:(id)arg1 ;
-(void)calendarsChangedNotification;
-(void)setupWithAppearanceDelegate:(id)arg1 ;
-(NSDate *)dayOfInterest;
-(NSDate *)lastRefresh;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)dealloc;
-(id)view;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSArray *)events;
@end

