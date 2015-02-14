/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKAssetEpub/BKAssetEpub-Structs.h>
#import <BKAssetEpub/BKPageLayoutController.h>
#import <BKAssetEpub/BKPlatformScrollSwipingControllerDelegate.h>

@class BKEPubSectionLayoutInfo, BKPlatformScrollSwipingController, BKEpubDocumentView, BKDocumentThumbnailGenerator, NSMutableArray, NSSet, BKAssetEpubEventHandlerView, NSString;

@interface BKFixedPageLayoutController : BKPageLayoutController <BKPlatformScrollSwipingControllerDelegate> {

	char _reconciledBasePageIndiceesForLocationAnchors;
	unsigned long long _totalPageCount;
	unsigned long long _intermediateTotalPageCount;
	double _maxHeight;
	BKEPubSectionLayoutInfo* _singlePageLayout;
	BKEPubSectionLayoutInfo* _twoPageLayout;
	BKPlatformScrollSwipingController* _swipingController;
	char _isInLiveResize;
	char _torndown;
	BKEpubDocumentView* _sectionViewWithSelectedText;
	BKDocumentThumbnailGenerator* _thumbnailGenerator;
	NSMutableArray* _orderedSectionViews;
	NSSet* _nearbySectionViews;
	double _leftSidePadding;
	double _rightSidePadding;
	BKAssetEpubEventHandlerView* _leftBlankPage;
	BKAssetEpubEventHandlerView* _rightBlankPage;
	NSRange _startSwipeVisiblePageRange;

}

@property (assign) NSRange startSwipeVisiblePageRange;                                             //@synthesize startSwipeVisiblePageRange=_startSwipeVisiblePageRange - In the implementation block
@property (assign,nonatomic,__weak) BKEpubDocumentView * sectionViewWithSelectedText;              //@synthesize sectionViewWithSelectedText=_sectionViewWithSelectedText - In the implementation block
@property (nonatomic,retain) BKDocumentThumbnailGenerator * thumbnailGenerator;                    //@synthesize thumbnailGenerator=_thumbnailGenerator - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedSectionViews;                                 //@synthesize orderedSectionViews=_orderedSectionViews - In the implementation block
@property (nonatomic,retain) NSSet * nearbySectionViews;                                           //@synthesize nearbySectionViews=_nearbySectionViews - In the implementation block
@property (assign,nonatomic) char torndown;                                                        //@synthesize torndown=_torndown - In the implementation block
@property (assign,nonatomic) double leftSidePadding;                                               //@synthesize leftSidePadding=_leftSidePadding - In the implementation block
@property (assign,nonatomic) double rightSidePadding;                                              //@synthesize rightSidePadding=_rightSidePadding - In the implementation block
@property (nonatomic,retain) BKAssetEpubEventHandlerView * leftBlankPage;                          //@synthesize leftBlankPage=_leftBlankPage - In the implementation block
@property (nonatomic,retain) BKAssetEpubEventHandlerView * rightBlankPage;                         //@synthesize rightBlankPage=_rightBlankPage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_forwardedEventsFromPageViews;
-(CGSize)scrollSwipingBoundsSize:(id)arg1 ;
-(double)scrollSwipingBaseOffset:(id)arg1 ;
-(void)scrollSwipingWillBegin:(id)arg1 ;
-(double)scrollSwipingMinOffset:(id)arg1 withOverscroll:(char)arg2 ;
-(double)scrollSwipingMaxOffset:(id)arg1 withOverscroll:(char)arg2 ;
-(void)scrollSwiping:(id)arg1 updateWithProgress:(double)arg2 ;
-(char)scrollSwipingAllowRubberbandOnMin:(id)arg1 ;
-(char)scrollSwipingAllowRubberbandOnMax:(id)arg1 ;
-(void)scrollSwiping:(id)arg1 didEndWithProgress:(double)arg2 ;
-(unsigned long long)totalPageCount;
-(char)isInLiveResize;
-(void)setIsInLiveResize:(char)arg1 ;
-(unsigned long long)pageIndexForPoint:(CGPoint)arg1 ;
-(void)displayPageAtIndex:(unsigned long long)arg1 reason:(int)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)p_freshenNearbyViews;
-(id)locationAnchorForPageIndex:(unsigned long long)arg1 ;
-(char)scrollView:(id)arg1 scrollWheel:(id)arg2 ;
-(id)viewEventProcessor;
-(void)mouseDownInView:(id)arg1 event:(id)arg2 ;
-(double)spreadWidth;
-(void)_endLiveResize:(id)arg1 ;
-(double)pageSpreadWidth;
-(double)singlePageWidth;
-(void)setTorndown:(char)arg1 ;
-(char)shouldUseTwoPageSpread;
-(void)_layoutBookContent;
-(id)paginationInfo;
-(id)selectedContext;
-(char)torndown;
-(CGRect)pageRectForLocation:(id)arg1 ;
-(void)displayHref:(id)arg1 reason:(int)arg2 animated:(char)arg3 recordHistoryNavigation:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)revealLocation:(id)arg1 withHighlight:(char)arg2 reason:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)highlightCurrentSelectionWithAnnotationStyle:(int)arg1 method:(int)arg2 ;
-(void)addNoteWithMethod:(int)arg1 highlightMethod:(int)arg2 ;
-(id)layoutInfo;
-(char)view:(id)arg1 wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg2 ;
-(void)prepareForFullscreenTransitionSnapshot;
-(id)initWithLayoutInfo:(id)arg1 book:(id)arg2 loaderPool:(id)arg3 delegate:(id)arg4 ;
-(void)applyConfigurationAnimated:(char)arg1 loadCache:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)singlePageLayoutInfo;
-(double)totalHeightPadding;
-(double)idealWidthOfContentForHeight:(double)arg1 twoUp:(char)arg2 prioritizeAspectRatio:(char)arg3 ;
-(id)hack_14897579_currentBKPageLocationOrdinal;
-(char)p_isUpsellView:(id)arg1 ;
-(BKAssetEpubEventHandlerView *)rightBlankPage;
-(BKAssetEpubEventHandlerView *)leftBlankPage;
-(CGSize)minimumPageSize;
-(void)p_addDocuments:(id)arg1 ;
-(double)leftSidePadding;
-(id)stickyContainerForLocation:(id)arg1 ;
-(void)synchronizedViewContentBoundsDidChange:(id)arg1 ;
-(void)synchronizedContainerViewFrameDidChange:(id)arg1 ;
-(void)reconcileBasePageIndiceesForLocationAnchors;
-(void)_updateTotalPageCount;
-(void)addPageLocationAchors:(id)arg1 forDocument:(id)arg2 ;
-(void)generatePageLocationAnchors;
-(CGRect)_spreadRectForPageIndex:(unsigned long long)arg1 ;
-(NSRange)_spreadPageRangeForPageIndex:(unsigned long long)arg1 ;
-(id)_sectionViewsForPageRange:(NSRange)arg1 ;
-(void)p_freshenSectionViews:(id)arg1 forceWebLoad:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSectionViewWithSelectedText:(BKEpubDocumentView *)arg1 ;
-(BKEpubDocumentView *)sectionViewWithSelectedText;
-(id)p_visibleSectionViews;
-(void)p_freshenSectionView:(id)arg1 forceWebLoad:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)p_nearbySectionViews;
-(id)_primarySectionView;
-(id)_secondarySectionView;
-(BKDocumentThumbnailGenerator *)thumbnailGenerator;
-(id)p_sectionViewsVisibleInRect:(CGRect)arg1 ;
-(int)p_pageChangeReasonFromSender:(id)arg1 ;
-(void)addUpsellDocument;
-(char)canHideNotesInMargin;
-(char)isShowingNotesInMargin;
-(void)clearSectionViewsForScroll;
-(CGSize)fixedLayoutAspectRatio;
-(void)freshenSectionViews:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)freshenSectionView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setThumbnailGenerator:(BKDocumentThumbnailGenerator *)arg1 ;
-(void)setOrderedSectionViews:(NSMutableArray *)arg1 ;
-(void)setNearbySectionViews:(NSSet *)arg1 ;
-(NSSet *)nearbySectionViews;
-(void)p_dumpSectionView:(id)arg1 ;
-(NSMutableArray *)orderedSectionViews;
-(void)setLeftBlankPage:(BKAssetEpubEventHandlerView *)arg1 ;
-(void)setRightBlankPage:(BKAssetEpubEventHandlerView *)arg1 ;
-(void)_layoutSectionViews;
-(void)_waitForWebViewRedrawWithTimeout:(double)arg1 ;
-(void)p_displayPageAtIndexNoHistory:(unsigned long long)arg1 waitUntilReady:(char)arg2 forceWebLoad:(char)arg3 reason:(int)arg4 animated:(char)arg5 sender:(id)arg6 completion:(/*^block*/id)arg7 ;
-(double)rightSidePadding;
-(void)performActionWhenVisiblePagesFinishLoading:(/*^block*/id)arg1 ;
-(char)locationIsVisible:(id)arg1 ;
-(void)appendSectionView:(id)arg1 ;
-(char)view:(id)arg1 mouseUp:(id)arg2 wasDragging:(char)arg3 ;
-(void)performCopyForView:(id)arg1 sender:(id)arg2 ;
-(void)didDoubleClickOnView:(id)arg1 ;
-(id)sectionViewForPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageIndexForLocation:(id)arg1 ;
-(double)totalWidthPadding;
-(NSRange)visiblePageRange;
-(void)hideNotesInMargin;
-(id)locationAnchorForDocument:(id)arg1 ;
-(void)_prepareForLiveResize:(id)arg1 ;
-(void)setRightSidePadding:(double)arg1 ;
-(void)documentPaginationCompleted;
-(CGRect)rectForPageIndex:(unsigned long long)arg1 ;
-(void)setLeftSidePadding:(double)arg1 ;
-(void)setSynchronizedScrollView:(id)arg1 ;
-(id)twoPagelayoutInfo;
-(void)showNotesInMargin;
-(void)resetChapterContainer;
-(char)hasCurrentSelection;
-(NSRange)startSwipeVisiblePageRange;
-(void)setStartSwipeVisiblePageRange:(NSRange)arg1 ;
-(void)contentDidChange;
-(id)currentLocation;
-(void)teardown;
-(void)nextPage:(id)arg1 ;
-(void)dealloc;
-(NSEdgeInsets)edgeInsets;
-(CGSize)_fixedLayoutSize;
-(void)previousPage:(id)arg1 ;
@end

