/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <AppKit/NSViewController.h>
#import <Calendar/CalUILayerDelegate.h>
#import <Calendar/NSAnimationDelegate.h>
#import <Calendar/InfiniteSwipeControllerDelegate.h>

@protocol CalUIDayCanvasControllerDelegate, OS_dispatch_source;
@class NSDate, NSEvent, NSMutableDictionary, CalUIViewController, CalUIAllDayAreaViewController, NSLayoutConstraint, NSTextField, CalUITimeLineScrollView, CalUITimeLineView, NSView, InfiniteSwipeController, NSObject, CALayer, NSArray, CalUIDateBannerStringController, EKEvent, NSString;

@interface CalUIDayCanvasController : NSViewController <CalUILayerDelegate, NSAnimationDelegate, InfiniteSwipeControllerDelegate> {

	double _hourRowHeight;
	long long _daysPerWeek;
	long long _hoursToDisplay;
	long long _workDayStartMinute;
	long long _workDayEndMinute;
	long long _scrollByWeeks;
	long long _firstDayOfWeek;
	char _ignoreIndexRebuild;
	NSDate* _dateDragEnteredAutoscrollZone;
	NSEvent* _eventToPostFollowingAutoscroll;
	char _showDraftsBorder;
	char _showTimeZoneTransitions;
	char _hasLocallyModifiedOccurrences;
	NSMutableDictionary* _currentAnimations;
	char _isResizing;
	char _isSwiping;
	char _isSwipingAlongInfiniteAxis;
	char _isThisWeek;
	char _fontSizeInitialized;
	char _timeChangedDuringScroll;
	char _timeIndicatorTimerSuspended;
	char _infiniteControllerIsAligned;
	char _dragWasCancelled;
	id<CalUIDayCanvasControllerDelegate> _delegate;
	CalUIViewController* _viewController;
	CalUIAllDayAreaViewController* _allDayController;
	double _firstVisibleMinute;
	double _canvasInset;
	NSDate* _startDateRequestedDuringSwipe;
	NSLayoutConstraint* _hoursToDisplayTimelineConstraint;
	NSLayoutConstraint* _hoursToDisplayCanvasConstraint;
	NSLayoutConstraint* _topGridLineConstraint;
	NSLayoutConstraint* _bottomGridLineConstraint;
	NSLayoutConstraint* _alldayLabelConstraint;
	NSTextField* _allDayLabel;
	CalUITimeLineScrollView* _timelineScrollView;
	CalUITimeLineView* _timelineView;
	NSView* _borderView;
	InfiniteSwipeController* _infiniteController;
	long long _timeIndicatorSecond;
	NSObject*<OS_dispatch_source> _timeIndicatorTimer;
	CALayer* _timeIndicatorDot;
	NSView* _timeIndicatorAlignmentView;
	CALayer* _timeIndicatorContainer;
	NSArray* _dayExtenders;
	CalUIDateBannerStringController* _dateBannerStringController;
	NSDate* _mouseDownDate;
	EKEvent* _dragNewEvent;
	CGPoint _presentationOrigin;
	CGPoint _mouseDownPoint;

}

@property (assign) long long scrollByWeeks;                                                   //@synthesize scrollByWeeks=_scrollByWeeks - In the implementation block
@property (assign) long long daysPerWeek;                                                     //@synthesize daysPerWeek=_daysPerWeek - In the implementation block
@property (assign) char showDraftsBorder;                                                     //@synthesize showDraftsBorder=_showDraftsBorder - In the implementation block
@property (assign) char showTimeZoneTransitions;                                              //@synthesize showTimeZoneTransitions=_showTimeZoneTransitions - In the implementation block
@property (assign,nonatomic,__weak) CalUIViewController * viewController;                     //@synthesize viewController=_viewController - In the implementation block
@property (__weak) id<CalUIDayCanvasControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (retain) CalUIAllDayAreaViewController * allDayController;                          //@synthesize allDayController=_allDayController - In the implementation block
@property (assign) char hasLocallyModifiedOccurrences;                                        //@synthesize hasLocallyModifiedOccurrences=_hasLocallyModifiedOccurrences - In the implementation block
@property (assign) char isResizing;                                                           //@synthesize isResizing=_isResizing - In the implementation block
@property (assign) double firstVisibleMinute;                                                 //@synthesize firstVisibleMinute=_firstVisibleMinute - In the implementation block
@property (assign) long long workDayStartMinute;                                              //@synthesize workDayStartMinute=_workDayStartMinute - In the implementation block
@property (assign) long long workDayEndMinute;                                                //@synthesize workDayEndMinute=_workDayEndMinute - In the implementation block
@property (assign,nonatomic) double hourRowHeight;                                            //@synthesize hourRowHeight=_hourRowHeight - In the implementation block
@property (retain) NSDate * dateDragEnteredAutoscrollZone;                                    //@synthesize dateDragEnteredAutoscrollZone=_dateDragEnteredAutoscrollZone - In the implementation block
@property (retain) NSEvent * eventToPostFollowingAutoscroll;                                  //@synthesize eventToPostFollowingAutoscroll=_eventToPostFollowingAutoscroll - In the implementation block
@property (assign) long long _hoursToDisplay;                                                 //@synthesize hoursToDisplay=_hoursToDisplay - In the implementation block
@property (assign) long long firstDayOfWeek;                                                  //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (assign) double canvasInset;                                                        //@synthesize canvasInset=_canvasInset - In the implementation block
@property (assign) char isSwiping;                                                            //@synthesize isSwiping=_isSwiping - In the implementation block
@property (assign) char isSwipingAlongInfiniteAxis;                                           //@synthesize isSwipingAlongInfiniteAxis=_isSwipingAlongInfiniteAxis - In the implementation block
@property (assign) char isThisWeek;                                                           //@synthesize isThisWeek=_isThisWeek - In the implementation block
@property (retain) NSDate * startDateRequestedDuringSwipe;                                    //@synthesize startDateRequestedDuringSwipe=_startDateRequestedDuringSwipe - In the implementation block
@property (assign) char fontSizeInitialized;                                                  //@synthesize fontSizeInitialized=_fontSizeInitialized - In the implementation block
@property (assign) char timeChangedDuringScroll;                                              //@synthesize timeChangedDuringScroll=_timeChangedDuringScroll - In the implementation block
@property (retain) NSLayoutConstraint * hoursToDisplayTimelineConstraint;                     //@synthesize hoursToDisplayTimelineConstraint=_hoursToDisplayTimelineConstraint - In the implementation block
@property (retain) NSLayoutConstraint * hoursToDisplayCanvasConstraint;                       //@synthesize hoursToDisplayCanvasConstraint=_hoursToDisplayCanvasConstraint - In the implementation block
@property (retain) NSLayoutConstraint * topGridLineConstraint;                                //@synthesize topGridLineConstraint=_topGridLineConstraint - In the implementation block
@property (retain) NSLayoutConstraint * bottomGridLineConstraint;                             //@synthesize bottomGridLineConstraint=_bottomGridLineConstraint - In the implementation block
@property (retain) NSLayoutConstraint * alldayLabelConstraint;                                //@synthesize alldayLabelConstraint=_alldayLabelConstraint - In the implementation block
@property (retain) NSTextField * allDayLabel;                                                 //@synthesize allDayLabel=_allDayLabel - In the implementation block
@property (retain) CalUITimeLineScrollView * timelineScrollView;                              //@synthesize timelineScrollView=_timelineScrollView - In the implementation block
@property (retain) CalUITimeLineView * timelineView;                                          //@synthesize timelineView=_timelineView - In the implementation block
@property (retain) NSView * borderView;                                                       //@synthesize borderView=_borderView - In the implementation block
@property (retain) InfiniteSwipeController * infiniteController;                              //@synthesize infiniteController=_infiniteController - In the implementation block
@property (assign) long long timeIndicatorSecond;                                             //@synthesize timeIndicatorSecond=_timeIndicatorSecond - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> timeIndicatorTimer;                          //@synthesize timeIndicatorTimer=_timeIndicatorTimer - In the implementation block
@property (assign) char timeIndicatorTimerSuspended;                                          //@synthesize timeIndicatorTimerSuspended=_timeIndicatorTimerSuspended - In the implementation block
@property (assign) CGPoint presentationOrigin;                                                //@synthesize presentationOrigin=_presentationOrigin - In the implementation block
@property (retain) CALayer * timeIndicatorDot;                                                //@synthesize timeIndicatorDot=_timeIndicatorDot - In the implementation block
@property (retain) NSView * timeIndicatorAlignmentView;                                       //@synthesize timeIndicatorAlignmentView=_timeIndicatorAlignmentView - In the implementation block
@property (retain) CALayer * timeIndicatorContainer;                                          //@synthesize timeIndicatorContainer=_timeIndicatorContainer - In the implementation block
@property (assign) char infiniteControllerIsAligned;                                          //@synthesize infiniteControllerIsAligned=_infiniteControllerIsAligned - In the implementation block
@property (retain) NSArray * dayExtenders;                                                    //@synthesize dayExtenders=_dayExtenders - In the implementation block
@property (retain) CalUIDateBannerStringController * dateBannerStringController;              //@synthesize dateBannerStringController=_dateBannerStringController - In the implementation block
@property (assign) CGPoint mouseDownPoint;                                                    //@synthesize mouseDownPoint=_mouseDownPoint - In the implementation block
@property (retain) NSDate * mouseDownDate;                                                    //@synthesize mouseDownDate=_mouseDownDate - In the implementation block
@property (assign) char dragWasCancelled;                                                     //@synthesize dragWasCancelled=_dragWasCancelled - In the implementation block
@property (retain) EKEvent * dragNewEvent;                                                    //@synthesize dragNewEvent=_dragNewEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)yValueForHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 dayHeight:(double)arg4 inWindow:(id)arg5 ;
+(char)disableStickyOccurrences;
+(id)headerDateTextStyle;
+(id)headerDateTextStyleForLunarWeekend;
+(id)_timeIndicatorDotImage;
+(id)_headerDateFont;
+(id)_textAttriburesWithFont:(id)arg1 color:(id)arg2 ;
+(id)headerTextColorForToday;
+(id)headerTextColorForWeekend;
+(id)_headerLunarDateFont;
+(id)_headerWeekNumberFont;
+(char)_isToday:(id)arg1 ;
+(id)headerDateTextStyleForToday;
+(id)headerDateTextStyleForWeekend;
+(id)headerWeekNumberTextStyleForToday;
+(id)headerWeekNumberTextStyle;
+(double)allDaySeparatorHeight;
+(id)_headerWeekdayNameColor;
+(id)headerDateTextStyleForLunarDate:(id)arg1 ;
+(id)allDayHeaderTextStyle;
+(id)headerDateTextStyleForDate:(id)arg1 ;
+(id)headerWeekNumberTextStyleForDate:(id)arg1 ;
+(char)preLoadAdjacentWeeks;
+(id)interestedDragTypes;
+(id)headerTextColor;
-(void)contentAreaWillBeginResizeLive:(char)arg1 ;
-(void)contentAreaDidEndResizeLive:(char)arg1 ;
-(id)mainController;
-(void)eventsChanged:(id)arg1 ;
-(id)selectionManager;
-(void)dateTimeFormatChanged;
-(id)uiOccForEventOccurrenceID:(id)arg1 ;
-(void)willShowWindow;
-(void)overlayCalendarDidChange;
-(void)setPresentationOrigin:(CGPoint)arg1 ;
-(CGPoint)presentationOrigin;
-(void)layer:(id)arg1 boundsDidChange:(CGRect)arg2 ;
-(double)dateBannerHeight;
-(long long)daysPerWeek;
-(void)calendarColorDidChange:(id)arg1 ;
-(void)fontSizeChanged;
-(id)viewsController;
-(char)hideWeekends;
-(id)canvasSwipeController;
-(void)searchUpdated;
-(void)realDateDidChange;
-(void)datesChanged;
-(void)selectionStateChangedForEventOccurrenceIDs:(id)arg1 ;
-(id)ephemeralUIOccurrenceForEventOccID:(id)arg1 ;
-(void)hideAllDayEventsValueDidChange;
-(void)hideTravelTimeValueDidChange;
-(void)rebuildEventStrings;
-(void)relayoutEventOccurrences;
-(void)showWeekNumbersDidChange;
-(id)canvasView;
-(id)allDayLabelView;
-(char)tabIntoAllDayArea:(char)arg1 ;
-(char)tabIntoCanvas:(char)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 inContainer:(id)arg2 ;
-(unsigned long long)draggingUpdated:(id)arg1 inContainer:(id)arg2 ;
-(void)draggingExited:(id)arg1 inContainer:(id)arg2 ;
-(void)draggingEnded:(id)arg1 inContainer:(id)arg2 ;
-(char)prepareForDragOperation:(id)arg1 inContainer:(id)arg2 ;
-(char)performDragOperation:(id)arg1 inContainer:(id)arg2 ;
-(char)handleMouseDownOnOccurrence:(id)arg1 forMouseEvent:(id)arg2 ;
-(id)canvasContainerKey;
-(id)allOccurrenceContainerViews;
-(id)allOccurrenceContainerControllers;
-(long long)scrollByWeeks;
-(void)showCanvasVisualizer;
-(char)dateIsVisible:(id)arg1 ;
-(id)_debugPrefixForDragInfo:(id)arg1 inContainer:(id)arg2 ;
-(id)dateAtPointInWindow:(CGPoint)arg1 ;
-(char)infiniteSwipeControllerDidFinishInitialLaunch:(id)arg1 ;
-(char)handleOccurrenceModificationForMouseEvent:(id)arg1 ;
-(char)isDraggingOccurrences;
-(char)hideAllDayEvents;
-(char)isResizing;
-(void)setIsResizing:(char)arg1 ;
-(long long)numberOfDays;
-(id)lastDate;
-(CGPoint)mouseDownPoint;
-(NSDate *)dateDragEnteredAutoscrollZone;
-(void)setDateDragEnteredAutoscrollZone:(NSDate *)arg1 ;
-(void)_clearDragState;
-(void)setMouseDownPoint:(CGPoint)arg1 ;
-(void)viewController:(id)arg1 finishedDisplay:(char)arg2 ;
-(id)infiniteSwipeController:(id)arg1 objectRelativeToObject:(id)arg2 byOffset:(long long)arg3 ;
-(id)viewControllerForInfiniteSwipeController:(id)arg1 containerKey:(id)arg2 ;
-(void)infiniteSwipeController:(id)arg1 firstVisibleObjectDidChange:(id)arg2 ;
-(void)infiniteSwipeController:(id)arg1 didSwipeAlongInfiniteAxisToPoint:(double)arg2 ;
-(void)infiniteSwipeController:(id)arg1 didSwipeAlongFiniteAxisToPoint:(double)arg2 inContainerWithKey:(id)arg3 ;
-(void)infiniteSwipeControllerDidBeginScrolling:(id)arg1 ;
-(void)infiniteSwipeControllerDidEndScrolling:(id)arg1 withMTSwipeData:(id)arg2 ;
-(void)infiniteSwipeController:(id)arg1 didChangePresentationOrigin:(CGPoint)arg2 active:(char)arg3 inContainerWithKey:(id)arg4 ;
-(long long)infiniteSwipeController:(id)arg1 distanceBetweenObjectA:(id)arg2 objectB:(id)arg3 ;
-(char)infiniteSwipeController:(id)arg1 objectA:(id)arg2 isEqualTo:(id)arg3 ;
-(char)infiniteSwipeController:(id)arg1 isObjectMajorBoundary:(id)arg2 ;
-(void)invalidateAccessibilityObjectsForInfiniteSwipeController:(id)arg1 ;
-(void)setTimeIndicatorHidden:(char)arg1 ;
-(void)setWorkDayStartMinute:(long long)arg1 ;
-(long long)workDayStartMinute;
-(char)shouldUseSpecialColoringForToday;
-(void)handleMouseDownOnDay:(id)arg1 forMouseEvent:(id)arg2 clearSelection:(char)arg3 ;
-(void)handleMouseDraggedOnDay:(id)arg1 forMouseEvent:(id)arg2 ;
-(void)handleMouseUpOnDay:(id)arg1 forMouseEvent:(id)arg2 ;
-(id)visibleDateRangeInCanvas;
-(id)nextOccurrenceInGroup:(id)arg1 fromSelectedOccurrence:(id)arg2 forward:(char)arg3 ;
-(id)nextVisibleLayerAfterLayer:(id)arg1 inDirectionForward:(char)arg2 ;
-(char)shouldPulseDuringKeyboardNavigation;
-(id)visibleLayerForDate:(id)arg1 ;
-(double)yValueForDate:(id)arg1 ;
-(double)yValueForHour:(long long)arg1 minute:(long long)arg2 ;
-(double)minimumOccurrenceHeight;
-(void)updateOffscreenOccurrences;
-(double)yValueForHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ;
-(char)shouldAutoScrollForDragPoint:(CGPoint)arg1 ;
-(char)updateForDraggedEvent:(id)arg1 originDayController:(id)arg2 destinationPoint:(CGPoint)arg3 withStartDate:(id)arg4 endDate:(id)arg5 ;
-(void)cleanupEventDrag:(id)arg1 ;
-(void)scrollOccurrenceToVisible:(id)arg1 shouldAnimate:(char)arg2 ;
-(id)backgroundColorForDate:(id)arg1 ;
-(void)setIsThisWeek:(char)arg1 ;
-(char)isThisWeek;
-(id)alldayUIOccurrencesForDate:(id)arg1 ;
-(void)setWorkDayEndMinute:(long long)arg1 ;
-(void)setEventToPostFollowingAutoscroll:(NSEvent *)arg1 ;
-(NSObject*<OS_dispatch_source>)timeIndicatorTimer;
-(void)_updateTimeIndicator;
-(void)setTimeIndicatorTimerSuspended:(char)arg1 ;
-(id)_boundPreferences;
-(InfiniteSwipeController *)infiniteController;
-(NSView *)timeIndicatorAlignmentView;
-(void)setInfiniteControllerIsAligned:(char)arg1 ;
-(void)setDateBannerStringController:(CalUIDateBannerStringController *)arg1 ;
-(void)setAllDayLabel:(NSTextField *)arg1 ;
-(void)setTimelineScrollView:(CalUITimeLineScrollView *)arg1 ;
-(void)setInfiniteController:(InfiniteSwipeController *)arg1 ;
-(void)setAllDayController:(CalUIAllDayAreaViewController *)arg1 ;
-(void)setTimeIndicatorDot:(CALayer *)arg1 ;
-(void)setTimeIndicatorAlignmentView:(NSView *)arg1 ;
-(void)_addTimeIndicatorAlignmentView;
-(void)setBorderView:(NSView *)arg1 ;
-(void)setDayExtenders:(NSArray *)arg1 ;
-(void)setAlldayLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)alldayLabelConstraint;
-(void)setTopGridLineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topGridLineConstraint;
-(void)setBottomGridLineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomGridLineConstraint;
-(void)_updateHoursToDisplayConstraints;
-(void)setTimeIndicatorContainer:(CALayer *)arg1 ;
-(void)_updateTimeIndicatorContainerConstraints;
-(CALayer *)timeIndicatorContainer;
-(void)debugToggleDisableStickyOccurrences:(id)arg1 ;
-(void)_debugToggleDisableAdjacentWeekPreLoading:(id)arg1 ;
-(void)_canvasDidResize:(id)arg1 ;
-(void)_timeIndicatorAlignmentViewFrameDidChange;
-(void)_queueDidChange:(id)arg1 ;
-(void)setFirstVisibleMinute:(double)arg1 ;
-(void)_viewSizeChanged;
-(char)timeIndicatorTimerSuspended;
-(NSTextField *)allDayLabel;
-(CalUIAllDayAreaViewController *)allDayController;
-(NSArray *)dayExtenders;
-(CALayer *)timeIndicatorDot;
-(void)_updateDayExtenders;
-(void)_resumeTimeIndicatorTimer;
-(void)_suspendTimeIndicatorTimer;
-(void)resetTimeIndicatorAlignmentView;
-(void)_removeTimeIndicatorAlignmentView;
-(char)isSwiping;
-(void)setStartDateRequestedDuringSwipe:(NSDate *)arg1 ;
-(void)_updateLocallyModifiedOccurrences;
-(void)setCanvasInset:(double)arg1 ;
-(char)fontSizeInitialized;
-(void)_calculateFirstVisibleMinute;
-(void)setFontSizeInitialized:(char)arg1 ;
-(id)validEventFromOccurrence:(id)arg1 ;
-(void)tryToSelectVisibleOccurrence;
-(double)hourRowHeight;
-(CalUITimeLineScrollView *)timelineScrollView;
-(long long)_hoursToDisplay;
-(double)minimumAllDayOccurrenceHeight;
-(double)defaultHeaderHeight;
-(double)minutesByPixel;
-(void)updateOccurrencePosition:(id)arg1 forMouseDownPoint:(CGPoint)arg2 dragPoint:(CGPoint)arg3 ;
-(id)_dayControllerForPointInWindowCoordinates:(CGPoint)arg1 ;
-(EKEvent *)dragNewEvent;
-(void)setDragNewEvent:(EKEvent *)arg1 ;
-(void)setDragWasCancelled:(char)arg1 ;
-(void)setMouseDownDate:(NSDate *)arg1 ;
-(char)dragWasCancelled;
-(NSDate *)mouseDownDate;
-(void)_cancelCurrentEventDrag;
-(void)_updateNowDotPositionForNewPresentationOrigin:(CGPoint)arg1 ;
-(char)infiniteControllerIsAligned;
-(void)_updateTimeIndicatorHidden;
-(double)_minuteFromYValue:(double)arg1 ;
-(double)firstVisibleMinute;
-(double)_yValueFromMinute:(double)arg1 ;
-(void)_scrollToFirstVisibleMinute;
-(void)positionTimeIndicator;
-(NSLayoutConstraint *)hoursToDisplayTimelineConstraint;
-(long long)hoursToDisplay;
-(double)canvasInset;
-(void)setHoursToDisplayTimelineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)hoursToDisplayCanvasConstraint;
-(void)setHoursToDisplayCanvasConstraint:(NSLayoutConstraint *)arg1 ;
-(char)isSwipingAlongInfiniteAxis;
-(long long)workDayEndMinute;
-(void)setTimeIndicatorSecond:(long long)arg1 ;
-(long long)timeIndicatorSecond;
-(double)_timeIndicatorPosition;
-(void)setTimeChangedDuringScroll:(char)arg1 ;
-(char)hasLocallyModifiedOccurrences;
-(void)setHasLocallyModifiedOccurrences:(char)arg1 ;
-(CalUIDateBannerStringController *)dateBannerStringController;
-(void)_canvasDidScroll;
-(void)setIsSwipingAlongInfiniteAxis:(char)arg1 ;
-(long long)deltaFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)setIsSwiping:(char)arg1 ;
-(NSDate *)startDateRequestedDuringSwipe;
-(char)timeChangedDuringScroll;
-(Class)allDayOccurrenceClass;
-(char)showAllDayInBanner;
-(double)pixelsByMinute;
-(double)defaultAllDayHeight;
-(void)handleMouseDownOnAllDay:(id)arg1 ;
-(void)handleMouseDraggedOnAllDay:(id)arg1 ;
-(void)handleMouseUpOnAllDay:(id)arg1 ;
-(void)setHourRowHeight:(double)arg1 ;
-(NSEvent *)eventToPostFollowingAutoscroll;
-(void)set_hoursToDisplay:(long long)arg1 ;
-(void)setDaysPerWeek:(long long)arg1 ;
-(void)setScrollByWeeks:(long long)arg1 ;
-(char)showDraftsBorder;
-(void)setShowDraftsBorder:(char)arg1 ;
-(char)showTimeZoneTransitions;
-(void)setShowTimeZoneTransitions:(char)arg1 ;
-(void)setTimeIndicatorTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setStartDate:(id)arg1 ;
-(id)startDate;
-(NSView *)borderView;
-(char)hideTravelTime;
-(long long)hoursInDay;
-(void)selectDate:(id)arg1 ;
-(long long)firstDayOfWeek;
-(id)activeDate;
-(void)setFirstDayOfWeek:(long long)arg1 ;
-(void)_contextDidSave:(id)arg1 ;
-(CalUITimeLineView *)timelineView;
-(void)setTimelineView:(CalUITimeLineView *)arg1 ;
-(void)redisplay;
-(void)selectAll;
-(id)init;
-(void)setDelegate:(id<CalUIDayCanvasControllerDelegate>)arg1 ;
-(void)dealloc;
-(char)isActive;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<CalUIDayCanvasControllerDelegate>)delegate;
-(char)isAnimating;
-(void)activate;
-(void)deactivate;
-(void)loadView;
-(void)setViewController:(CalUIViewController *)arg1 ;
-(id)initialFirstResponder;
-(id)calendar;
-(CalUIViewController *)viewController;
-(void)refresh;
@end
