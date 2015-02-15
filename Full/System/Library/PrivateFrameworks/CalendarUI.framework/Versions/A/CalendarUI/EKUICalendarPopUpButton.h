/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPopUpButton.h>

@class EKEvent, EKUIGadget, NSMutableArray, NSEvent, EKEventViewController, EKCalendar;

@interface EKUICalendarPopUpButton : NSPopUpButton {

	char _showCalendarName;
	char _isReadOnly;
	char _populated;
	char _populating;
	char _repopulate;
	EKEvent* _event;
	EKUIGadget* _gadget;
	NSMutableArray* _allowedItemCache;
	long long _sourceCount;
	NSEvent* _delayedEvent;
	EKEventViewController* _eventViewController;

}

@property (assign,nonatomic,__weak) EKEvent * event;                         //@synthesize event=_event - In the implementation block
@property (assign) char showCalendarName;                                    //@synthesize showCalendarName=_showCalendarName - In the implementation block
@property (assign) char isReadOnly;                                          //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (readonly) EKCalendar * selectedCalendar; 
@property (__weak) EKUIGadget * gadget;                                      //@synthesize gadget=_gadget - In the implementation block
@property (assign) char populated;                                           //@synthesize populated=_populated - In the implementation block
@property (retain) NSMutableArray * allowedItemCache;                        //@synthesize allowedItemCache=_allowedItemCache - In the implementation block
@property (assign) long long sourceCount;                                    //@synthesize sourceCount=_sourceCount - In the implementation block
@property (assign) char populating;                                          //@synthesize populating=_populating - In the implementation block
@property (assign) char repopulate;                                          //@synthesize repopulate=_repopulate - In the implementation block
@property (retain) NSEvent * delayedEvent;                                   //@synthesize delayedEvent=_delayedEvent - In the implementation block
@property (__weak) EKEventViewController * eventViewController;              //@synthesize eventViewController=_eventViewController - In the implementation block
+(Class)cellClass;
-(char)isReadOnly;
-(EKEventViewController *)eventViewController;
-(id)initWithEventViewController:(id)arg1 ;
-(void)setGadget:(EKUIGadget *)arg1 ;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
-(EKUIGadget *)gadget;
-(void)setAllowedItemCache:(NSMutableArray *)arg1 ;
-(void)calendarsChanged;
-(EKCalendar *)selectedCalendar;
-(void)_populatePopUp;
-(NSMutableArray *)allowedItemCache;
-(long long)sourceCount;
-(void)setSourceCount:(long long)arg1 ;
-(id)_calendars;
-(void)_cacheSource:(id)arg1 withCalendars:(id)arg2 ;
-(void)_cacheCalendar:(id)arg1 ;
-(void)setPopulating:(char)arg1 ;
-(char)repopulate;
-(void)setRepopulate:(char)arg1 ;
-(void)_populatePopUpFromCache;
-(NSEvent *)delayedEvent;
-(void)setDelayedEvent:(NSEvent *)arg1 ;
-(char)populating;
-(char)showCalendarName;
-(id)_colorSwatchForCalendarColor:(id)arg1 useLargeIcon:(char)arg2 ;
-(void)_cacheValidCalendars;
-(void)setShowCalendarName:(char)arg1 ;
-(char)populated;
-(void)setPopulated:(char)arg1 ;
-(void)setIsReadOnly:(char)arg1 ;
-(void)dealloc;
-(void)mouseDown:(id)arg1 ;
-(char)canBecomeKeyView;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
@end
