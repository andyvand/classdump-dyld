/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKAssetEpub/BKAssetEpub-Structs.h>
#import <BKAssetEpub/BKScrollingPageLayoutController.h>
#import <BKAssetEpub/BKReflowableLiveResizeHandlerDelegate.h>
#import <BKAssetEpub/BKPlatformScrollSwipingControllerDelegate.h>

@class BKEpubDocumentView, BKEPubSectionLayoutInfo, NSMutableArray, BKReflowableLiveResizeHandler, BKEpubCFILocation, NSString;

@interface BKScrollingHorizontalPageLayoutController : BKScrollingPageLayoutController <BKReflowableLiveResizeHandlerDelegate, BKPlatformScrollSwipingControllerDelegate> {

	char _isInLiveResize;
	char _sectionViewsArePaginatedAndLaidOut;
	char _commandClick;
	BKEpubDocumentView* _mostRecentMouseDownedDocumentView;
	double _leftSidePadding;
	double _rightSidePadding;
	unsigned long long _intermediateTotalPageCount;
	BKEPubSectionLayoutInfo* _singlePageLayout;
	BKEPubSectionLayoutInfo* _twoPageLayout;
	NSMutableArray* _sectionViewsToBeLaidOut;
	BKReflowableLiveResizeHandler* _liveResizeHandler;
	BKEpubCFILocation* _lastTargetPageCFI;
	double _baseSwipingOffset;
	double _additionalSwipingOffset;

}

@property (assign,nonatomic,__weak) BKEpubDocumentView * mostRecentMouseDownedDocumentView;              //@synthesize mostRecentMouseDownedDocumentView=_mostRecentMouseDownedDocumentView - In the implementation block
@property (assign,nonatomic) double leftSidePadding;                                                     //@synthesize leftSidePadding=_leftSidePadding - In the implementation block
@property (assign,nonatomic) double rightSidePadding;                                                    //@synthesize rightSidePadding=_rightSidePadding - In the implementation block
@property (assign,nonatomic) unsigned long long intermediateTotalPageCount;                              //@synthesize intermediateTotalPageCount=_intermediateTotalPageCount - In the implementation block
@property (nonatomic,retain) BKEPubSectionLayoutInfo * singlePageLayout;                                 //@synthesize singlePageLayout=_singlePageLayout - In the implementation block
@property (nonatomic,retain) BKEPubSectionLayoutInfo * twoPageLayout;                                    //@synthesize twoPageLayout=_twoPageLayout - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionViewsToBeLaidOut;                                   //@synthesize sectionViewsToBeLaidOut=_sectionViewsToBeLaidOut - In the implementation block
@property (assign,nonatomic) char sectionViewsArePaginatedAndLaidOut;                                    //@synthesize sectionViewsArePaginatedAndLaidOut=_sectionViewsArePaginatedAndLaidOut - In the implementation block
@property (nonatomic,retain) BKReflowableLiveResizeHandler * liveResizeHandler;                          //@synthesize liveResizeHandler=_liveResizeHandler - In the implementation block
@property (assign,nonatomic) char commandClick;                                                          //@synthesize commandClick=_commandClick - In the implementation block
@property (nonatomic,retain) BKEpubCFILocation * lastTargetPageCFI;                                      //@synthesize lastTargetPageCFI=_lastTargetPageCFI - In the implementation block
@property (assign,nonatomic) double baseSwipingOffset;                                                   //@synthesize baseSwipingOffset=_baseSwipingOffset - In the implementation block
@property (assign,nonatomic) double additionalSwipingOffset;                                             //@synthesize additionalSwipingOffset=_additionalSwipingOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)scrollSwipingBaseOffset:(id)arg1 ;
-(void)scrollSwipingWillBegin:(id)arg1 ;
-(double)scrollSwipingMinOffset:(id)arg1 withOverscroll:(char)arg2 ;
-(double)scrollSwipingMaxOffset:(id)arg1 withOverscroll:(char)arg2 ;
-(void)scrollSwiping:(id)arg1 updateWithProgress:(double)arg2 ;
-(void)scrollSwiping:(id)arg1 didEndWithProgress:(double)arg2 ;
-(char)isInLiveResize;
-(void)setIsInLiveResize:(char)arg1 ;
-(void)displayPageAtIndex:(unsigned long long)arg1 reason:(int)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)configure;
-(void)setIntermediateTotalPageCount:(unsigned long long)arg1 ;
-(CGSize)liveResizeMinPageSize;
-(char)liveResizeShouldUseTwoPageSpread;
-(void)setSinglePageLayout:(BKEPubSectionLayoutInfo *)arg1 ;
-(unsigned long long)intermediateTotalPageCount;
-(id)locationAnchorForPageIndex:(unsigned long long)arg1 ;
-(void)mouseDownInView:(id)arg1 event:(id)arg2 ;
-(void)_endLiveResize:(id)arg1 ;
-(char)commandClick;
-(id)selectedContext;
-(void)p_updateDocumentViewsForPaginationResult:(id)arg1 ;
-(void)_endPageLayoutContainerLiveResize:(id)arg1 ;
-(double)p_minimumWindowContentWidthForTwoPageSpread;
-(id)liveResizePrimaryFirstPageLocation;
-(id)liveResizeSecondaryFirstPageLocation;
-(void)p_clearDocumentViewsForAnimation;
-(void)setSectionViewsArePaginatedAndLaidOut:(char)arg1 ;
-(void)_configurePaginationInfoPageSize;
-(void)revealLocation:(id)arg1 withHighlight:(char)arg2 reason:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)highlightCurrentSelectionWithAnnotationStyle:(int)arg1 method:(int)arg2 ;
-(void)addNoteWithMethod:(int)arg1 highlightMethod:(int)arg2 ;
-(void)p_performBlock:(/*^block*/id)arg1 ;
-(char)sectionViewsArePaginatedAndLaidOut;
-(void)paginationController:(id)arg1 paginationResultChanged:(id)arg2 ;
-(BKEpubDocumentView *)mostRecentMouseDownedDocumentView;
-(void)setMostRecentMouseDownedDocumentView:(BKEpubDocumentView *)arg1 ;
-(id)layoutInfo;
-(id)allSectionViews;
-(id)initWithBook:(id)arg1 loaderPool:(id)arg2 initialLocation:(id)arg3 delegate:(id)arg4 ;
-(id)p_nearbyViews;
-(char)view:(id)arg1 wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg2 ;
-(void)prepareForFullscreenTransitionSnapshot;
-(id)singlePageLayoutInfo;
-(double)idealWidthOfContentForHeight:(double)arg1 twoUp:(char)arg2 prioritizeAspectRatio:(char)arg3 ;
-(BKEPubSectionLayoutInfo *)twoPageLayout;
-(double)leftSidePadding;
-(id)stickyContainerForLocation:(id)arg1 ;
-(void)setupPageIndiciesForChapters:(id)arg1 ;
-(void)synchronizedContainerViewFrameDidChange:(id)arg1 ;
-(id)liveResizePrimarySecondPageLocation;
-(id)liveResizeSecondarySecondPageLocation;
-(id)liveResizeCurrentTheme;
-(void)liveResizeHandler:(id)arg1 addSubview:(id)arg2 ;
-(void)liveResizeDidPresent;
-(void)reconcileBasePageIndiceesForLocationAnchors;
-(char)canHideNotesInMargin;
-(char)isShowingNotesInMargin;
-(id)liveResizeContentView;
-(void)liveResizeWillDismiss;
-(void)liveResizeDidDismiss;
-(void)contentScroller:(id)arg1 scrollPosition:(double)arg2 ;
-(void)contentScrollerDidFinishScrolling:(id)arg1 ;
-(double)rightSidePadding;
-(CGRect)liveResizePageAreaFrameForPageSize:(CGSize)arg1 ;
-(void)liveResizeHandler:(id)arg1 didSetFrame:(CGRect)arg2 ;
-(char)liveResizeIsRightToLeft;
-(char)liveResizePrimaryDocumentIsLastDocument;
-(void)appendSectionView:(id)arg1 ;
-(char)view:(id)arg1 mouseUp:(id)arg2 wasDragging:(char)arg3 ;
-(void)p_setupLiveResizeHandler:(/*^block*/id)arg1 ;
-(void)performCopyForView:(id)arg1 sender:(id)arg2 ;
-(void)didDoubleClickOnView:(id)arg1 ;
-(BKEPubSectionLayoutInfo *)singlePageLayout;
-(void)endAnimatedResize;
-(id)sectionViewForPageIndex:(unsigned long long)arg1 ;
-(double)totalWidthPadding;
-(void)setLastTargetPageCFI:(BKEpubCFILocation *)arg1 ;
-(void)waitUntilFirstDocumentLoaded;
-(void)setLiveResizeHandler:(BKReflowableLiveResizeHandler *)arg1 ;
-(id)liveResizeHostView;
-(void)hideNotesInMargin;
-(id)locationAnchorForDocument:(id)arg1 ;
-(void)_setupSectionViews;
-(void)updateForNewPaginationProgress:(char)arg1 ;
-(CGSize)liveResizePageSizeForSize:(CGSize)arg1 ;
-(void)_prepareForLiveResize:(id)arg1 ;
-(void)setAdditionalSwipingOffset:(double)arg1 ;
-(double)baseSwipingOffset;
-(CGRect)p_spreadRectForBeginningOfDocument:(id)arg1 ;
-(void)setRightSidePadding:(double)arg1 ;
-(void)setBaseSwipingOffset:(double)arg1 ;
-(void)setCommandClick:(char)arg1 ;
-(void)_updateDocumentViewFrame;
-(double)additionalSwipingOffset;
-(void)setLeftSidePadding:(double)arg1 ;
-(void)setSynchronizedScrollView:(id)arg1 ;
-(BKEpubCFILocation *)lastTargetPageCFI;
-(void)setSectionViewsToBeLaidOut:(NSMutableArray *)arg1 ;
-(void)willBeginAnimatedFrameChange:(/*^block*/id)arg1 ;
-(id)twoPagelayoutInfo;
-(id)liveResizeSecondaryDocumentView;
-(CGRect)pageAreaFrameForPageSize:(CGSize)arg1 ;
-(void)p_adjustLayoutInfosForFontSizes;
-(char)_primaryDocumentIsLastDocument;
-(void)showNotesInMargin;
-(id)p_sortedDocumentViewsFromArray:(id)arg1 ;
-(void)resetChapterContainer;
-(char)hasCurrentSelection;
-(id)liveResizePrimaryDocumentView;
-(BKReflowableLiveResizeHandler *)liveResizeHandler;
-(NSMutableArray *)sectionViewsToBeLaidOut;
-(void)setTwoPageLayout:(BKEPubSectionLayoutInfo *)arg1 ;
-(void)teardown;
-(void)dealloc;
-(void)layout;
@end

