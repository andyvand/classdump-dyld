/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBSizeObservingViewDelegate.h>
#import <UIKit/_UISettingsKeyPathObserver.h>

@protocol SBBulletinActionHandler;
@class , SBBulletinObserverViewController, UIScrollView, UIView, SBModeControlManager, UISwipeGestureRecognizer, SBNotificationCenterSeparatorView, UIViewController, NSArray;

@interface SBModeViewController : UIViewController <SBSizeObservingViewDelegate, _UISettingsKeyPathObserver> {

	<SBBulletinActionHandler>* _delegate;
	SBBulletinObserverViewController* _selectedViewController;
	UIScrollView* _contentView;
	UIView* _headerView;
	SBModeControlManager* _modeControl;
	UISwipeGestureRecognizer* _leftSwipeGestureRecognizer;
	UISwipeGestureRecognizer* _rightSwipeGestureRecognizer;
	SBNotificationCenterSeparatorView* _separator;
	struct {
		unsigned isContentLayoutValid : 1;
		unsigned isSegmentLayoutValid : 1;
		unsigned isRequestHandlingEnabled : 1;
		unsigned shouldLoadAllChildViews : 1;
	}  _modeViewControllerFlags;

}

@property (assign,nonatomic) <SBBulletinActionHandler> * delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIViewController * selectedViewController; 
@property (nonatomic,retain) NSArray * viewControllers; 
@property (assign,getter=isRequestHandlingEnabled,nonatomic) BOOL requestHandlingEnabled; 
+(float)_minScreenDimension;
+(id)_buttonTitleFont;
-(void)removeViewController:(id)arg1 ;
-(CGSize)_modeControlSizeForMode:(int)arg1 ;
-(int)_layoutMode;
-(void)handleModeChange:(id)arg1 ;
-(float)_headerViewHeightForMode:(int)arg1 ;
-(CGRect)_modeControlFrameWithHeaderBounds:(CGRect)arg1 forMode:(int)arg2 ;
-(id)_newSwipeGestureRecognizerWithDirection:(unsigned)arg1 ;
-(void)_loadHeaderView;
-(void)_loadContentView;
-(void)_invalidateContentLayout;
-(void)_setSelectedBulletinObserverViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_layoutHeaderViewIfNecessary;
-(void)_layoutSegmentsIfNecessary;
-(void)_layoutContentIfNecessary;
-(id)_viewIfLoaded;
-(void)_invalidateSegmentLayout;
-(BOOL)_addBulletinObserverViewController:(id)arg1 ;
-(BOOL)_contentOffset:(CGPoint*)arg1 forChildViewController:(id)arg2 ;
-(void)_setSelectedSegmentIndex:(int)arg1 ;
-(void)_setContentViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setSelectedViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)addViewController:(id)arg1 ;
-(BOOL)_isRequestHandlingEnabled;
-(void)setRequestHandlingEnabled:(BOOL)arg1 ;
-(BOOL)handleActionForBulletin:(id)arg1 ;
-(id)widgetDelegate;
-(void)setWidgetDelegate:(id)arg1 ;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(BOOL)isRequestHandlingEnabled;
-(CGRect)rectForBulletin:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(id)viewControllers;
-(void)setViewControllers:(id)arg1 ;
-(id)selectedViewController;
-(void)setSelectedViewController:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
@end
