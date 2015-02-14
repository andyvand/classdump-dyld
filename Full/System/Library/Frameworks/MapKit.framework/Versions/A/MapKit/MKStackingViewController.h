/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/_MKUIViewController.h>

@protocol MKStackingViewControllerDelegate;
@class _MKStackView, _MKStackingPlaceholderView, _MKStackingContentView, NSLayoutConstraint, NSScrollView, _MKInsettableDocumentView, NSArray, NSMutableSet, NSMapTable, NSView, _MKUIViewController;

@interface MKStackingViewController : _MKUIViewController {

	_MKStackView* _stackView;
	_MKStackingPlaceholderView* _headerPlaceholderView;
	_MKStackingPlaceholderView* _selectorPlaceholderView;
	_MKStackingContentView* _contentView;
	NSLayoutConstraint* _heightCompressionResistanceConstraint;
	NSLayoutConstraint* _heightHuggingConstraint;
	NSLayoutConstraint* _widthConstraint;
	char _isScrollingProgrammaticallyToViewController;
	unsigned long long _countOfCurrentLayoutInvocations;
	NSScrollView* _scrollView;
	_MKInsettableDocumentView* _documentView;
	char _hasRegisteredForPreferredScrollerStyleNotifications;
	NSArray* _titleViewConstraints;
	NSMutableSet* _viewControllersWithObservedTitles;
	NSMapTable* _titleHeaderViewsByViewController;
	char _willRelayoutForPreferredContentSizeChange;
	char _isComputingInitialViewControllerPreferredHeight;
	NSView* _titleView;
	NSView* _headerView;
	NSView* _selectorView;
	NSArray* _viewControllers;
	_MKUIViewController* _selectedViewController;
	id<MKStackingViewControllerDelegate> _stackingDelegate;

}

@property (nonatomic,retain) NSView * titleView;                                                        //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSView * headerView;                                                       //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSView * selectorView;                                                     //@synthesize selectorView=_selectorView - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                                                   //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic,__weak) _MKUIViewController * selectedViewController;                       //@synthesize selectedViewController=_selectedViewController - In the implementation block
@property (assign,nonatomic,__weak) id<MKStackingViewControllerDelegate> stackingDelegate;              //@synthesize stackingDelegate=_stackingDelegate - In the implementation block
@property (nonatomic,readonly) double verticalScrollerInset; 
-(void)scrollToTop;
-(NSView *)titleView;
-(void)setStackingDelegate:(id<MKStackingViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setSelectorViewNeedsUpdate;
-(void)setTitleView:(NSView *)arg1 ;
-(void)performUserSelectionForViewControllerAtIndex:(unsigned long long)arg1 ;
-(double)_headerHeight;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)_didScroll;
-(void)_scrollViewWillStartScroll:(id)arg1 ;
-(void)_scrollViewDidEndScroll:(id)arg1 ;
-(void)_updateScrollerInsetFromFrameChange;
-(void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2 ;
-(void)_addTitleViewToHierarchyIfPossible;
-(double)_titleHeight;
-(id<MKStackingViewControllerDelegate>)stackingDelegate;
-(double)_fittingHeightForView:(id)arg1 ;
-(NSView *)selectorView;
-(double)_selectorHeight;
-(void)_setUpEnteringViewController:(id)arg1 ;
-(void)_tearDownExitingViewController:(id)arg1 ;
-(void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1 ;
-(void)_removePreferredHeightConstraintFromViewController:(id)arg1 ;
-(void)_updateScrollerInsetWithPhase:(long long)arg1 ;
-(void)_repositionNonstackedSubviews;
-(void)_updateSelectedViewControllerAfterPositionChange;
-(void)_updateSelectorView;
-(void)_setSelectedViewController:(id)arg1 animated:(char)arg2 ;
-(void)_scrollToViewControllerAtIndex:(unsigned long long)arg1 animated:(char)arg2 ;
-(void)_preferredScrollerStyleDidChange;
-(void)setSelectorView:(NSView *)arg1 ;
-(double)_topLayoutGuide;
-(double)verticalScrollerInset;
-(void)setSelectedViewController:(id)arg1 animated:(char)arg2 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(NSArray *)viewControllers;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setHeaderView:(NSView *)arg1 ;
-(void)loadView;
-(NSView *)headerView;
-(void)updateViewConstraints;
-(_MKUIViewController *)selectedViewController;
-(void)setSelectedViewController:(_MKUIViewController *)arg1 ;
@end

