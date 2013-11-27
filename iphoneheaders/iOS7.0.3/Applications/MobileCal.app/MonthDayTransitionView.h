/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class PaletteView, UIView, MonthDayNavigationTransitionView, DayTwoPartLabel;

@interface MonthDayTransitionView : UIView {

	BOOL _animating;
	PaletteView* _paletteView;
	UIView* _allDayView;
	CGPoint _dayViewDayLocation;
	CGPoint _dayViewMonthLocation;
	UIView* _topView;
	UIView* _bottomView;
	MonthDayNavigationTransitionView* _scrubber;
	DayTwoPartLabel* _weekDayLabel;
	UIView* _topSlidingView;
	UIView* _bottomSlidingView;
	/*^block*/ id _completion;
	CGSize _dayCellSize;
	CGRect _dayScrubberFrame;
	CGRect _monthScrubberFrame;

}

@property (nonatomic,readonly) BOOL animating; 
@property (nonatomic,retain) UIView * topView;                                         //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                      //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,retain) MonthDayNavigationTransitionView * scrubber;              //@synthesize scrubber=_scrubber - In the implementation block
@property (assign,nonatomic) CGRect dayScrubberFrame;                                  //@synthesize dayScrubberFrame=_dayScrubberFrame - In the implementation block
@property (assign,nonatomic) CGSize dayCellSize;                                       //@synthesize dayCellSize=_dayCellSize - In the implementation block
@property (assign,nonatomic) CGRect monthScrubberFrame;                                //@synthesize monthScrubberFrame=_monthScrubberFrame - In the implementation block
@property (nonatomic,retain) DayTwoPartLabel * weekDayLabel;                           //@synthesize weekDayLabel=_weekDayLabel - In the implementation block
@property (nonatomic,retain) UIView * topSlidingView;                                  //@synthesize topSlidingView=_topSlidingView - In the implementation block
@property (nonatomic,retain) UIView * bottomSlidingView;                               //@synthesize bottomSlidingView=_bottomSlidingView - In the implementation block
@property (nonatomic,copy) id completion;                                              //@synthesize completion=_completion - In the implementation block
-(void)_createViews;
-(void)setScrubber:(id)arg1 ;
-(id)scrubber;
-(void)setWeekDayLabel:(id)arg1 ;
-(id)weekDayLabel;
-(void)setDayScrubberFrame:(CGRect)arg1 ;
-(void)setMonthScrubberFrame:(CGRect)arg1 ;
-(void)setDayCellSize:(CGSize)arg1 ;
-(void)_updateWeekDayLabel;
-(CGRect)monthScrubberFrame;
-(void)_haltAnimations;
-(void)_cleanUpSlidingViews;
-(float)_topExtensionHeight;
-(id)_createImageFromTopViewWithFrame:(CGRect)arg1 ;
-(void)setTopSlidingView:(id)arg1 ;
-(id)topSlidingView;
-(void)setBottomSlidingView:(id)arg1 ;
-(id)bottomSlidingView;
-(CGSize)dayCellSize;
-(CGRect)dayScrubberFrame;
-(void)_animateView:(id)arg1 toPosition:(CGPoint)arg2 ;
-(id)_animateView:(id)arg1 toPosition:(CGPoint)arg2 setDelegate:(BOOL)arg3 ;
-(void)_animateView:(id)arg1 toAlpha:(float)arg2 delay:(double)arg3 ;
-(void)prepareTransitionWithTopView:(id)arg1 bottomView:(id)arg2 allDayView:(id)arg3 ;
-(void)prepareTransitionScrubberWithSelectedDate:(id)arg1 todayDate:(id)arg2 dayFirstItemInset:(float)arg3 dayCellSize:(CGSize)arg4 dayFrame:(CGRect)arg5 monthCellWidths:(id)arg6 monthFrame:(CGRect)arg7 scrubberFirstDayOffset:(int)arg8 paletteView:(id)arg9 monthViewController:(id)arg10 ;
-(void)animateToDayWithCompletion:(/*^block*/ id)arg1 ;
-(void)animateToMonthWithCompletion:(/*^block*/ id)arg1 ;
-(void)_basicAnimateView:(id)arg1 toAlpha:(float)arg2 duration:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(/*^block*/ id)completion;
-(void)setCompletion:(/*^block*/ id)arg1 ;
-(double)animationDuration;
-(BOOL)animating;
-(id)topView;
-(id)bottomView;
-(void)setTopView:(id)arg1 ;
-(void)setBottomView:(id)arg1 ;
-(void).cxx_destruct;
@end
