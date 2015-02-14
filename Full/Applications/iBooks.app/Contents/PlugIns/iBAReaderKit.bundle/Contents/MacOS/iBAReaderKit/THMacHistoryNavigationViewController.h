/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <iBAReaderKit/THNavigationHistoryStepperChrome.h>

@protocol THMacHistoryNavigationViewControllerDelegate;
@class NSView, THMacHistoryNavigationButton, THNavigationHistoryStepperController, NSTrackingArea, NSString;

@interface THMacHistoryNavigationViewController : NSViewController <THNavigationHistoryStepperChrome> {

	char _prevItemEnabled;
	char _nextItemEnabled;
	char _prevButtonVisible;
	char _nextButtonVisible;
	char _tornDown;
	char _buttonTrackingAreaNeedsUpdate;
	char _isViewLoaded;
	id<THMacHistoryNavigationViewControllerDelegate> _delegate;
	NSView* _targetView;
	NSView* _histNavView;
	THMacHistoryNavigationButton* _prevButton;
	THMacHistoryNavigationButton* _nextButton;
	THNavigationHistoryStepperController* _navStepperController;
	NSTrackingArea* _trackingArea;
	NSTrackingArea* _buttonTrackingArea;
	NSString* _prevItemTitle;
	NSString* _nextItemTitle;
	unsigned long long _animationDepth;

}

@property (assign,nonatomic) id<THMacHistoryNavigationViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isHidden; 
@property (nonatomic,readonly) CGRect buttonFrame; 
@property (nonatomic,retain) NSView * targetView;                                                      //@synthesize targetView=_targetView - In the implementation block
@property (nonatomic,retain) NSView * histNavView;                                                     //@synthesize histNavView=_histNavView - In the implementation block
@property (nonatomic,retain) THMacHistoryNavigationButton * prevButton;                                //@synthesize prevButton=_prevButton - In the implementation block
@property (nonatomic,retain) THMacHistoryNavigationButton * nextButton;                                //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) THNavigationHistoryStepperController * navStepperController;              //@synthesize navStepperController=_navStepperController - In the implementation block
@property (nonatomic,retain) NSTrackingArea * trackingArea;                                            //@synthesize trackingArea=_trackingArea - In the implementation block
@property (nonatomic,retain) NSTrackingArea * buttonTrackingArea;                                      //@synthesize buttonTrackingArea=_buttonTrackingArea - In the implementation block
@property (nonatomic,copy) NSString * prevItemTitle;                                                   //@synthesize prevItemTitle=_prevItemTitle - In the implementation block
@property (nonatomic,copy) NSString * nextItemTitle;                                                   //@synthesize nextItemTitle=_nextItemTitle - In the implementation block
@property (assign,nonatomic) char prevItemEnabled;                                                     //@synthesize prevItemEnabled=_prevItemEnabled - In the implementation block
@property (assign,nonatomic) char nextItemEnabled;                                                     //@synthesize nextItemEnabled=_nextItemEnabled - In the implementation block
@property (assign,nonatomic) char prevButtonVisible;                                                   //@synthesize prevButtonVisible=_prevButtonVisible - In the implementation block
@property (assign,nonatomic) char nextButtonVisible;                                                   //@synthesize nextButtonVisible=_nextButtonVisible - In the implementation block
@property (assign,nonatomic) char tornDown;                                                            //@synthesize tornDown=_tornDown - In the implementation block
@property (assign,nonatomic) char buttonTrackingAreaNeedsUpdate;                                       //@synthesize buttonTrackingAreaNeedsUpdate=_buttonTrackingAreaNeedsUpdate - In the implementation block
@property (assign,nonatomic) char isViewLoaded;                                                        //@synthesize isViewLoaded=_isViewLoaded - In the implementation block
@property (assign,nonatomic) unsigned long long animationDepth;                                        //@synthesize animationDepth=_animationDepth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTargetView:(NSView *)arg1 ;
-(THMacHistoryNavigationButton *)prevButton;
-(void)setPrevButton:(THMacHistoryNavigationButton *)arg1 ;
-(void)p_updateButtonTrackingArea;
-(void)setNextItemTitle:(NSString *)arg1 ;
-(void)setPrevButtonTitle:(id)arg1 andEnable:(char)arg2 ;
-(void)setHistNavView:(NSView *)arg1 ;
-(unsigned long long)animationDepth;
-(NSString *)nextItemTitle;
-(char)prevButtonVisible;
-(void)setButtonTrackingAreaNeedsUpdate:(char)arg1 ;
-(NSString *)prevItemTitle;
-(void)setPrevItemEnabled:(char)arg1 ;
-(void)setPrevItemTitle:(NSString *)arg1 ;
-(THNavigationHistoryStepperController *)navStepperController;
-(void)p_showNavigationAnimated:(char)arg1 ;
-(char)nextButtonVisible;
-(NSView *)histNavView;
-(void)setNextButtonTitle:(id)arg1 andEnable:(char)arg2 ;
-(void)hideNavigationAnimated:(char)arg1 ;
-(void)p_hideNavigationAnimated:(char)arg1 ;
-(NSTrackingArea *)buttonTrackingArea;
-(void)setPrevButtonVisible:(char)arg1 ;
-(void)setNextButtonVisible:(char)arg1 ;
-(void)setNavStepperController:(THNavigationHistoryStepperController *)arg1 ;
-(void)p_updatePosition;
-(char)prevItemEnabled;
-(void)jumpToPrev:(id)arg1 ;
-(char)tornDown;
-(void)p_hideAnimated;
-(CGRect)p_trackingFrame;
-(char)p_shouldAnimate;
-(char)nextItemEnabled;
-(void)setTornDown:(char)arg1 ;
-(void)setIsViewLoaded:(char)arg1 ;
-(char)p_isEvent:(id)arg1 inTrackingArea:(id)arg2 ;
-(void)setNextItemEnabled:(char)arg1 ;
-(void)updateNavigationRegion;
-(void)p_logHistoryJumpToMessageTracer;
-(void)showAndHideWithDelay:(double)arg1 ;
-(void)p_cleanupButtonTrackingArea;
-(void)p_updateTrackingArea;
-(void)p_cleanupTrackingArea;
-(char)buttonTrackingAreaNeedsUpdate;
-(void)setButtonTrackingArea:(NSTrackingArea *)arg1 ;
-(void)setAnimationDepth:(unsigned long long)arg1 ;
-(void)jumpToNext:(id)arg1 ;
-(CGRect)buttonFrame;
-(id)initWithView:(id)arg1 pageFormatter:(id)arg2 bookspotHistorySlave:(id)arg3 ;
-(void)setPrevButtonTitle:(id)arg1 andPrevButtonEnable:(char)arg2 nextButtonTitle:(id)arg3 andNextButtonEnabled:(char)arg4 ;
-(void)p_setPrevButtonVisible:(char)arg1 nextButtonVisible:(char)arg2 animated:(char)arg3 ;
-(void)setNextButton:(THMacHistoryNavigationButton *)arg1 ;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(void)teardown;
-(THMacHistoryNavigationButton *)nextButton;
-(void)setDelegate:(id<THMacHistoryNavigationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(char)isHidden;
-(id<THMacHistoryNavigationViewControllerDelegate>)delegate;
-(NSTrackingArea *)trackingArea;
-(void)loadView;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)isViewLoaded;
-(NSView *)targetView;
@end

