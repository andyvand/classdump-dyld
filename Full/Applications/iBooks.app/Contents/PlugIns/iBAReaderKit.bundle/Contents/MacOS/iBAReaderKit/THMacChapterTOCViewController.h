/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <iBAReaderKit/THPageViewProviderDelegate.h>
#import <iBAReaderKit/THMacKeyDownEventHandler.h>
#import <iBAReaderKit/THWPagedCanvasControllerDelegate.h>
#import <iBAReaderKit/THThumbTOCViewControllerDelegate.h>
#import <iBAReaderKit/TSDLayoutGeometryProvider.h>
#import <iBAReaderKit/TSDGestureTarget.h>
#import <iBAReaderKit/THMacCanvasLiveResizeControllerDelegate.h>
#import <iBAReaderKit/THMacPageAffordanceControllerDelegate.h>
#import <iBAReaderKit/THMacIntroMediaViewControllerDelegate.h>
#import <iBAReaderKit/THMacCurrentViewController.h>

@protocol THMacChapterTOCViewControllerDelegate, THBookNavigation;
@class NSView, THThumbTOCViewController, THWPagedCanvasController, THMacIntroMediaViewController, THDocumentRoot, THDocumentNavigator, THMacCanvasLiveResizeController, THMacPageAffordanceController, NSArray, THPageViewProvider, THPageViewDisplacement, NSString;

@interface THMacChapterTOCViewController : NSViewController <THPageViewProviderDelegate, THMacKeyDownEventHandler, THWPagedCanvasControllerDelegate, THThumbTOCViewControllerDelegate, TSDLayoutGeometryProvider, TSDGestureTarget, THMacCanvasLiveResizeControllerDelegate, THMacPageAffordanceControllerDelegate, THMacIntroMediaViewControllerDelegate, THMacCurrentViewController> {

	char _showIntroMediaOnNextShow;
	char _showIntroMediaOnBookOpen;
	char _introMediaVisible;
	char _animating;
	char _showing;
	char _transitionAnimationInProgress;
	char _preparingToShow;
	char _disableAnimateTOCThumbs;
	char _updatingFrameForLiveResize;
	char _introMediaIsStarted;
	char _isSwipeTracking;
	id<THMacChapterTOCViewControllerDelegate> _delegate;
	long long _currentAbsolutePageIndex;
	THThumbTOCViewController* _thumbTOCViewController;
	THWPagedCanvasController* _pagedCanvasController;
	THMacIntroMediaViewController* _introMediaViewController;
	THDocumentRoot* _documentRoot;
	id<THBookNavigation> _bookNavigator;
	THDocumentNavigator* _documentNavigator;
	THMacCanvasLiveResizeController* _liveResizeController;
	THMacPageAffordanceController* _pageAffordanceController;
	NSArray* _tocPageNumbers;
	NSArray* _tocPageInfos;
	unsigned long long _firstPageChapterIndex;
	unsigned long long _chapterPageIndex;
	unsigned long long _chapterIndexCurrentlyVisibleInDocument;
	unsigned long long _pageIndexCurrentlyVisibleInDocument;
	THPageViewProvider* _pageViewProvider;
	THPageViewDisplacement* _pageViewDisplacement;

}

@property (assign,nonatomic) id<THMacChapterTOCViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long currentAbsolutePageIndex;                                      //@synthesize currentAbsolutePageIndex=_currentAbsolutePageIndex - In the implementation block
@property (nonatomic,retain) THThumbTOCViewController * thumbTOCViewController;                       //@synthesize thumbTOCViewController=_thumbTOCViewController - In the implementation block
@property (assign,nonatomic) char showIntroMediaOnNextShow;                                           //@synthesize showIntroMediaOnNextShow=_showIntroMediaOnNextShow - In the implementation block
@property (assign,nonatomic) char showIntroMediaOnBookOpen;                                           //@synthesize showIntroMediaOnBookOpen=_showIntroMediaOnBookOpen - In the implementation block
@property (assign,nonatomic) char introMediaVisible;                                                  //@synthesize introMediaVisible=_introMediaVisible - In the implementation block
@property (assign,nonatomic) char animating;                                                          //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) char showing;                                                            //@synthesize showing=_showing - In the implementation block
@property (assign,nonatomic) char transitionAnimationInProgress;                                      //@synthesize transitionAnimationInProgress=_transitionAnimationInProgress - In the implementation block
@property (nonatomic,readonly) THWPagedCanvasController * pagedCanvasController;                      //@synthesize pagedCanvasController=_pagedCanvasController - In the implementation block
@property (nonatomic,readonly) THMacIntroMediaViewController * introMediaViewController;              //@synthesize introMediaViewController=_introMediaViewController - In the implementation block
@property (nonatomic,readonly) THDocumentRoot * documentRoot;                                         //@synthesize documentRoot=_documentRoot - In the implementation block
@property (assign,nonatomic) id<THBookNavigation> bookNavigator;                                      //@synthesize bookNavigator=_bookNavigator - In the implementation block
@property (nonatomic,retain) THDocumentNavigator * documentNavigator;                                 //@synthesize documentNavigator=_documentNavigator - In the implementation block
@property (nonatomic,retain) THMacCanvasLiveResizeController * liveResizeController;                  //@synthesize liveResizeController=_liveResizeController - In the implementation block
@property (nonatomic,retain) THMacPageAffordanceController * pageAffordanceController;                //@synthesize pageAffordanceController=_pageAffordanceController - In the implementation block
@property (nonatomic,retain) NSArray * tocPageNumbers;                                                //@synthesize tocPageNumbers=_tocPageNumbers - In the implementation block
@property (nonatomic,retain) NSArray * tocPageInfos;                                                  //@synthesize tocPageInfos=_tocPageInfos - In the implementation block
@property (assign,nonatomic) unsigned long long firstPageChapterIndex;                                //@synthesize firstPageChapterIndex=_firstPageChapterIndex - In the implementation block
@property (assign,nonatomic) unsigned long long chapterPageIndex;                                     //@synthesize chapterPageIndex=_chapterPageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long chapterIndexCurrentlyVisibleInDocument;               //@synthesize chapterIndexCurrentlyVisibleInDocument=_chapterIndexCurrentlyVisibleInDocument - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndexCurrentlyVisibleInDocument;                  //@synthesize pageIndexCurrentlyVisibleInDocument=_pageIndexCurrentlyVisibleInDocument - In the implementation block
@property (assign,nonatomic) char preparingToShow;                                                    //@synthesize preparingToShow=_preparingToShow - In the implementation block
@property (assign,nonatomic) char disableAnimateTOCThumbs;                                            //@synthesize disableAnimateTOCThumbs=_disableAnimateTOCThumbs - In the implementation block
@property (assign,nonatomic) char updatingFrameForLiveResize;                                         //@synthesize updatingFrameForLiveResize=_updatingFrameForLiveResize - In the implementation block
@property (assign,nonatomic) char introMediaIsStarted;                                                //@synthesize introMediaIsStarted=_introMediaIsStarted - In the implementation block
@property (assign,nonatomic) char isSwipeTracking;                                                    //@synthesize isSwipeTracking=_isSwipeTracking - In the implementation block
@property (nonatomic,retain) THPageViewProvider * pageViewProvider;                                   //@synthesize pageViewProvider=_pageViewProvider - In the implementation block
@property (nonatomic,retain) THPageViewDisplacement * pageViewDisplacement;                           //@synthesize pageViewDisplacement=_pageViewDisplacement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSView * rootSuperview; 
-(id)handleKeyDownEvent:(id)arg1 ;
-(void)bookmarksUpdated;
-(CGSize)pageSize;
-(THPageViewProvider *)pageViewProvider;
-(void)setPageViewProvider:(THPageViewProvider *)arg1 ;
-(THPageViewDisplacement *)pageViewDisplacement;
-(void)setPageViewDisplacement:(THPageViewDisplacement *)arg1 ;
-(void)setLiveResizeController:(THMacCanvasLiveResizeController *)arg1 ;
-(void)setDocumentNavigator:(THDocumentNavigator *)arg1 ;
-(void)setThumbTOCViewController:(THThumbTOCViewController *)arg1 ;
-(void)navigateToIntroMedia;
-(void)p_updatedMessageTracer;
-(void)setTocPageNumbers:(NSArray *)arg1 ;
-(CGRect)pCanvasFrameOffScreen:(char)arg1 ;
-(char)preparingToShow;
-(char)introMediaIsStarted;
-(void)setIntroMediaIsStarted:(char)arg1 ;
-(unsigned long long)firstPageChapterIndex;
-(void)pSetupModelWithNode:(id)arg1 ;
-(char)showIntroMediaOnNextShow;
-(void)setPreparingToShow:(char)arg1 ;
-(void)setTocPageInfos:(NSArray *)arg1 ;
-(void)showChapterTOCThumbsAnimated;
-(void)pTeardownIntroMedia;
-(void)cancelIntroMediaSwipe;
-(void)setDisableAnimateTOCThumbs:(char)arg1 ;
-(void)setIntroMediaVisible:(char)arg1 ;
-(char)disableAnimateTOCThumbs;
-(void)setShowIntroMediaOnNextShow:(char)arg1 ;
-(THThumbTOCViewController *)thumbTOCViewController;
-(id)tableOfContentsTitle;
-(void)windowDidExitFullScreen;
-(char)transitionAnimationInProgress;
-(CGSize)resizeControllerPageSize;
-(CGRect)pIntroMediaFrameOffScreen:(char)arg1 ;
-(THMacPageAffordanceController *)pageAffordanceController;
-(CGRect)pThumbsFrameOffScreen:(char)arg1 ;
-(void)windowWillEnterFullScreen;
-(void)setIsSwipeTracking:(char)arg1 ;
-(void)beginIntroMediaSwipe;
-(void)completeIntroMediaSwipe;
-(void)setChapterPageIndex:(unsigned long long)arg1 ;
-(char)canHandleGesture:(id)arg1 ;
-(void)pageViewProviderViewsAdded:(id)arg1 ;
-(void)setUpdatingFrameForLiveResize:(char)arg1 ;
-(void)setFirstPageChapterIndex:(unsigned long long)arg1 ;
-(unsigned long long)nodeIndexForAbsolutePageIndex:(unsigned long long)arg1 ;
-(id)layoutGeometryForLayout:(id)arg1 ;
-(void)windowDidEnterFullScreen;
-(void)setShowIntroMediaOnBookOpen:(char)arg1 ;
-(char)updatingFrameForLiveResize;
-(unsigned long long)chapterPageIndex;
-(NSArray *)tocPageNumbers;
-(NSArray *)tocPageInfos;
-(void)navigateToCurrentChapter;
-(void)setShowing:(char)arg1 ;
-(id)firstResponderWhenShown;
-(void)setBookNavigator:(id<THBookNavigation>)arg1 ;
-(void)setCurrentAbsolutePageIndex:(long long)arg1 ;
-(void)pPageRight;
-(void)pPageLeft;
-(THMacIntroMediaViewController *)introMediaViewController;
-(void)hideIntroMediaAnimated:(char)arg1 ;
-(THDocumentNavigator *)documentNavigator;
-(CGRect)i_chapterFrameForFrame:(CGRect)arg1 ;
-(void)hideChapterTOCThumbsAnimated;
-(THWPagedCanvasController *)pagedCanvasController;
-(void)windowWillExitFullScreen;
-(void)showIntroMediaAnimated:(char)arg1 ;
-(THMacCanvasLiveResizeController *)liveResizeController;
-(char)showIntroMediaOnBookOpen;
-(void)pagedCanvasControllerDidScroll:(id)arg1 ;
-(void)setPageAffordanceController:(THMacPageAffordanceController *)arg1 ;
-(void)p_updateLayersForClipping;
-(void)pagedCanvasControllerDidLayout:(id)arg1 ;
-(char)introMediaVisible;
-(char)isSwipeTracking;
-(NSView *)rootSuperview;
-(long long)currentAbsolutePageIndex;
-(void)hideChapterTOCWithPageViewController:(id)arg1 replacingView:(id)arg2 parentView:(id)arg3 containerView:(id)arg4 backgroundView:(id)arg5 notesPanelView:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)initWithDocumentRoot:(id)arg1 bookNavigator:(id)arg2 documentNavigator:(id)arg3 rootNode:(id)arg4 introMediaViewController:(id)arg5 ;
-(void)showChapterTOCWithPageViewController:(id)arg1 replacingView:(id)arg2 parentView:(id)arg3 containerView:(id)arg4 backgroundView:(id)arg5 notesPanelView:(id)arg6 isAnimated:(char)arg7 completionBlock:(/*^block*/id)arg8 ;
-(char)keepMoviePlayingWhenBecomingCurrent;
-(id<THBookNavigation>)bookNavigator;
-(void)p_updatePageViewsForScrollingAnimated:(char)arg1 restoreOrigin:(char)arg2 ;
-(void)setTransitionAnimationInProgress:(char)arg1 ;
-(void)pSetViewFramesShowingIntroMedia:(char)arg1 ;
-(void)pSetBackgroundViewAllowMouseEventsToPassThrough:(char)arg1 ;
-(void)pShowIntroMediaWithPageViewController:(id)arg1 replacingView:(id)arg2 parentView:(id)arg3 isAnimated:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)pAutomaticThumbTransitionWithDestinationThumbsShown:(char)arg1 ;
-(void)pAutomaticIntroMediaTransitionWithDestinationIntroMedia:(char)arg1 isAnimated:(char)arg2 ;
-(void)pInitializeTransitionWithDestinationIntroMedia:(char)arg1 ;
-(void)pResetTransitionShowingIntroMedia:(char)arg1 ;
-(void)pFinalizeTransitionWithDestinationIntroMedia:(char)arg1 ;
-(void)introMediaViewControllerDidFinishPlayingIntroMedia:(id)arg1 ;
-(void)thumbTocNavigateToAbsolutePageIndex:(long long)arg1 ;
-(THDocumentRoot *)documentRoot;
-(void)thumbTocNavigateToAbsoluteChapterIndex:(long long)arg1 ;
-(void)setPageIndexCurrentlyVisibleInDocument:(unsigned long long)arg1 ;
-(unsigned long long)pageIndexCurrentlyVisibleInDocument;
-(void)setChapterIndexCurrentlyVisibleInDocument:(unsigned long long)arg1 ;
-(unsigned long long)chapterIndexCurrentlyVisibleInDocument;
-(void)pagedCanvasController:(id)arg1 mostVisiblePageChangedToPageIndex:(unsigned long long)arg2 ;
-(void)continueIntroMediaSwipeWithPosition:(double)arg1 ;
-(unsigned long long)pageViewProvider:(id)arg1 absolutePageIndexForPageInfo:(id)arg2 ;
-(char)resizeControllerShouldSizeToFitWidth;
-(char)resizeControllerWantsDirectCanvasSizing;
-(CGRect)resizeControllerDesiredResizeViewFrameInFrame:(CGRect)arg1 ;
-(void)resizeControllerViewFrameDidChange:(id)arg1 newResizeViewFrame:(CGRect)arg2 ;
-(void)resizeControllerWindowWillStartLiveResize;
-(void)resizeControllerWindowDidEndLiveResize;
-(double)pageAffordanceControllerCanvasViewScale:(id)arg1 ;
-(char)pageAffordanceControllerShouldPageLeftOnMarginTap:(id)arg1 ;
-(char)pageAffordanceControllerShouldPageRightOnMarginTap:(id)arg1 ;
-(char)pageAffordanceControllerShouldAnimate:(id)arg1 ;
-(CGRect)pageAffordanceControllerScrollViewFrame:(id)arg1 ;
-(CGRect)pageAffordanceControllerAvailableRectForPageView:(id)arg1 ;
-(void)pageAffordanceControllerPerformActionForMouseDownInLeftOverlay:(id)arg1 ;
-(void)pageAffordanceControllerPerformActionForMouseDownInRightOverlay:(id)arg1 ;
-(char)pageAffordanceController:(id)arg1 gestureIsInLeftOverlay:(id)arg2 ;
-(char)pageAffordanceController:(id)arg1 gestureIsInRightOverlay:(id)arg2 ;
-(unsigned long long)pageCountForPagedCanvasController:(id)arg1 ;
-(void)pagedCanvasController:(id)arg1 didScrollToPageIndex:(unsigned long long)arg2 ;
-(id)bookNavigationForPagedCanvasController:(id)arg1 ;
-(id)documentNavigatorForPagedCanvasController:(id)arg1 ;
-(char)pagedCanvasControllerDeferViewCreation:(id)arg1 ;
-(char)pagedCanvasController:(id)arg1 shouldDisableScrollingAtContentEdgesForScrollView:(id)arg2 ;
-(double)pagedCanvasControllerContentsScale:(id)arg1 ;
-(double)pagedCanvasController:(id)arg1 adjustScale:(double)arg2 andFrame:(CGRect*)arg3 ;
-(id)pagedCanvasController:(id)arg1 infosToDisplayForPageRange:(NSRange)arg2 ;
-(void)pagedCanvasController:(id)arg1 willUpdateWithInfosToDisplay:(id)arg2 ;
-(id)pagedCanvasController:(id)arg1 renderedPageIndexSetFromReps:(id)arg2 ;
-(char)pagedCanvasControllerRestrictVisibleToRenderedContent:(id)arg1 ;
-(void)pagedCanvasControllerDidStopScrolling:(id)arg1 ;
-(id)pagedCanvasController:(id)arg1 geometryProviderForLayout:(id)arg2 ;
-(id)pagedCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3 ;
-(void)pagedCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)arg1 ;
-(id)pagedCanvasController:(id)arg1 primaryTargetForGesture:(id)arg2 ;
-(char)pagedCanvasController:(id)arg1 allowsEditMenuForRep:(id)arg2 ;
-(char)pagedCanvasController:(id)arg1 allowsHyperlinkWithGesture:(id)arg2 forRep:(id)arg3 ;
-(char)allowSelectionPopoverForPagedCanvasController:(id)arg1 ;
-(char)pagedCanvasController:(id)arg1 shouldBeginEditingTHWPRep:(id)arg2 withGesture:(id)arg3 ;
-(unsigned long long)pageViewProviderStartAbsolutePageIndex:(id)arg1 ;
-(CGRect)pageViewProviderUnclippedVisibleBounds:(id)arg1 ;
-(char)handleGesture:(id)arg1 ;
-(char)showing;
-(void)didShow;
-(void)willHide;
-(void)setAnimating:(char)arg1 ;
-(char)animating;
-(void)setDelegate:(id<THMacChapterTOCViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<THMacChapterTOCViewControllerDelegate>)delegate;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)loadView;
-(void)mouseUp:(id)arg1 ;
-(void)willShow;
-(void)didHide;
@end

