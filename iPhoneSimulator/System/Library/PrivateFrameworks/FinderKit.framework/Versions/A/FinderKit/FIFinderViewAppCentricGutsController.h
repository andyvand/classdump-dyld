/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FIFinderViewGutsController.h>

@class NSView, NSVisualEffectView, NSBox, NSSegmentedControl, NSLayoutConstraint, FI_TView;

@interface FIFinderViewAppCentricGutsController : FIFinderViewGutsController {

	NSView* _topBarContainerView;
	NSVisualEffectView* _visualEffectView;
	TNSRef<FIScrollViewMirrorView *> _browserViewMirrorView;
	TNSRef<FIScrollViewMirrorView *> _sidebarMirrorView;
	vector<TNSRef<FIScrollViewMirrorView *>, std::__1::allocator<TNSRef<FIScrollViewMirrorView *> > >* _columnViewMirrorViews;
	TNSRef<FIMouseDownCanMoveWindowClipView *> _columnViewMirrorViewClipView;
	TNotificationCenterObserver* _columnViewBoundsChangeObserver;
	TNotificationCenterObserver* _columnViewDidAddColumnObserver;
	TNotificationCenterObserver* _columnViewDidSetLastColumnObserver;
	TNSRef<NSLayoutConstraint *> _sidebarMirrorViewEqualWidthConstraint;
	TNSRef<NSLayoutConstraint *> _browserViewMirrorViewEqualWidthConstraint;
	NSBox* _bottomLine;
	NSSegmentedControl* _toggleSidebarButton;
	NSSegmentedControl* _topBarEditTagsButton;
	NSSegmentedControl* _topBarSharingButton;
	NSLayoutConstraint* _backForwardWidthConstraint;
	NSLayoutConstraint* _backForwardLeadingConstraint;
	double _backForwardWidthConstant;
	double _backForwardLeadingConstant;
	NSSegmentedControl* _bottomBarViewSwitcher;
	BOOL _showBackForward;
	BOOL _showingAllTopBarItems;
	FI_TView* _popoverView;

}
-(void)viewLoaded;
-(void)setTargetPath:(const TFENodeVector*)arg1 withViewStyle:(id)arg2 ;
-(void)aboutToDestroyBrowserView;
-(TFENode*)_initialTargetNode;
-(void)moreInitialization;
-(BOOL)shouldShowAllMyFiles;
-(void)bindViewSwitcher;
-(void)unbindViewSwitcher;
-(void)prepareToShow;
-(void)prepareToHide;
-(void)didChangeSelection;
-(Class)browserContainerClass;
-(void)adjustTopBar;
-(void)adjustBackForwardSegments;
-(void)configureWindowForContentChange;
-(void)containerTargetDidChange:(id)arg1 ;
-(void)containerContentChanged:(id)arg1 ;
-(BOOL)sidebarInitiallyVisible;
-(void)setIsSavePanel:(BOOL)arg1 ;
-(void)cacheShareButton:(id)arg1 ;
-(void)cacheTagsButton:(id)arg1 ;
-(id)sidebarSplitView;
-(void)configureViewSwitcher;
-(void)iCloudModeChanged;
-(void)_tearDownMirrorViews;
-(void)_configureMirrorViews;
-(void)_configureMirrorViewForBrowserColumnView:(id)arg1 ;
-(void)registerForUbiquityStatus;
-(void)unregisterForUbiquityStatus;
-(void)updateUbiquityStatus;
-(void)_configureSidebarMirrorViewWidthConstraint:(id)arg1 ;
-(BOOL)adjustTopBarViewSwitcher;
-(void)updateICloudButtonImage;
-(void)refreshSearchScopeButtons;
-(void)columnViewContentViewBoundsChanged;
-(void)didAddColumn;
-(void)didSetLastColumn;
-(TString*)clientAppName;
-(TMDQueryAliasNode*)userSearchTarget;
-(BOOL)hasUbiquityError;
-(void)showUbiquityStatus;
-(void)dealloc;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(id)initWithView:(id)arg1 ;
-(id)nibName;
-(BOOL)shouldEnableShareButton;
-(BOOL)shouldShowViewSwitcher;
-(void)cacheViewSwitcher:(id)arg1 ;
-(id)viewStyle;
-(void)finderLocationPopUp:(id)arg1 didChangeToDirectoryURL:(id)arg2 ;
-(id)finderLocationPopUpRequestRecentPlaces:(id)arg1 ;
@end

