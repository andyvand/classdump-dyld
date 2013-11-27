/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBIconScrollViewDelegate.h>
#import <SpringBoard/SBIconListPageControlDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SBFolderViewDelegate;
@class NSMutableArray, SBIconListView, SBIconViewMap, SBIconListPageControl, SBIconScrollView, SBFolderTitleTextField, UIView, , SBFolder, _UILegibilitySettings, NSArray;

@interface SBFolderView : UIView <SBIconScrollViewDelegate, SBIconListPageControlDelegate, UITextFieldDelegate> {

	NSMutableArray* _iconListViews;
	SBIconListView* _rotatingIconList;
	int _minVisibleListViewIndex;
	int _maxVisibleListViewIndex;
	int _minAnimatingListViewIndex;
	int _maxAnimatingListViewIndex;
	int _disableUpdatingCurrentIconListCount;
	int _firstDisplayedColumnOnCurrentList;
	BOOL _animatedScrolling;
	BOOL _scalingViewIsBorrowed;
	SBIconViewMap* _viewMap;
	NSMutableArray* _scrollFrames;
	unsigned _scrollFrameCount;
	BOOL _isN90;
	SBIconListPageControl* _pageControl;
	SBIconScrollView* _scrollView;
	SBFolderTitleTextField* _titleTextField;
	UIView* _scalingView;
	BOOL _isEditing;
	BOOL _isScrolling;
	int _currentPageIndex;
	float _statusBarHeight;
	<SBFolderViewDelegate>* _delegate;
	SBFolder* _folder;
	int _orientation;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) <SBFolderViewDelegate> * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBFolder * folder;                                       //@synthesize folder=_folder - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                         //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,getter=isScrolling,nonatomic) BOOL scrolling;                       //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic) int orientation;                                         //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) int currentPageIndex;                                  //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,readonly) NSArray * iconListViews;                               //@synthesize iconListViews=_iconListViews - In the implementation block
@property (nonatomic,readonly) SBIconViewMap * viewMap; 
@property (assign,nonatomic) float statusBarHeight;                                   //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(BOOL)_showsTitle;
-(id)viewMap;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 ;
-(id)iconListViewAtIndex:(unsigned)arg1 ;
-(void)layoutIconLists:(double)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3 ;
-(id)iconListViews;
-(id)currentIconListView;
-(void)noteUserIsInteractingWithIcons;
-(id)borrowScalingView;
-(void)returnScalingView;
-(void)fadeContentForMagnificationFraction:(float)arg1 ;
-(void)pageControl:(id)arg1 didRecieveTouchInDirection:(int)arg2 ;
-(float)_titleFontSize;
-(void)willAnimate;
-(void)didAnimate;
-(BOOL)doesPageContainIconListView:(int)arg1 ;
-(void)resetIconListViews;
-(float)_offsetToCenterPageControlInSpaceForPageControl;
-(CGRect)_frameForScalingView;
-(BOOL)locationCountsAsInsideFolder:(CGPoint)arg1 ;
-(void)fadeContentForMinificationFraction:(float)arg1 ;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)tearDownListViews;
-(void)_purgeListViews;
-(BOOL)_scrollViewThinksItsScrolling;
-(void)_setAnimatedScrolling:(BOOL)arg1 ;
-(void)updateIconListIndexAndVisibility;
-(void)_setCurrentPageIndex:(int)arg1 deferringPageControlUpdate:(BOOL)arg2 ;
-(BOOL)_isValidPageIndex:(int)arg1 ;
-(float)_scrollOffsetForPageAtIndex:(int)arg1 ;
-(void)_setCurrentPageIndex:(int)arg1 ;
-(void)_updateIconListFrames;
-(unsigned)_minusPageCount;
-(float)_pageWidth;
-(float)_scrollOffsetForFirstListView;
-(id)_iconListViewAtIndex:(unsigned)arg1 ;
-(id)_createIconListViewForList:(id)arg1 ;
-(void)_addIconListView:(id)arg1 ;
-(void)updateIconListIndexAndVisibility:(BOOL)arg1 ;
-(void)_addIconListViewsForModels:(id)arg1 ;
-(id)_iconListViewForList:(id)arg1 ;
-(void)_resetIconListViews;
-(void)_updateIconListViews;
-(BOOL)_shouldDisableUpdatingCurrentIconList;
-(int)_pageIndexForOffset:(float)arg1 ;
-(int)lowestVisibleIconListIndexAndColumn:(int*)arg1 columnsOnScreen:(int*)arg2 totalLists:(unsigned)arg3 columnsPerList:(unsigned)arg4 ;
-(void)_pushDisableUpdateCurrentIconListCount;
-(id)_currentIconListView;
-(void)_popDisableUpdateCurrentIconListCount;
-(void)_setFolderName:(id)arg1 ;
-(void)iconScrollViewWillCancelTouchTracking:(id)arg1 ;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg1 ;
-(void)iconScrollView:(id)arg1 willSetContentOffset:(inout CGPoint*)arg2 ;
-(CGRect)scalingViewFrame;
-(BOOL)_hasMinusPages;
-(void)_removeIconListView:(id)arg1 ;
-(void)updateIconListViews;
-(void)noteUserHasGrabbedIcon:(BOOL)arg1 ;
-(void)prepareToOpen;
-(void)cleanupAfterClosing;
-(BOOL)setCurrentPageIndex:(int)arg1 animated:(BOOL)arg2 ;
-(id)iconListViewForTouch:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)delegate;
-(int)orientation;
-(float)statusBarHeight;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(id)scrollView;
-(BOOL)isScrolling;
-(int)currentPageIndex;
-(void)setStatusBarHeight:(float)arg1 ;
-(void)setFolder:(id)arg1 ;
-(id)folder;
-(id)legibilitySettings;
-(void)_layoutSubviews;
-(void)_updateEditingStateAnimated:(BOOL)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setScrolling:(BOOL)arg1 ;
@end
