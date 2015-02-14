/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ContinuousBrowserPageViewController.h>
#import <Safari/ReaderInstallationTarget.h>

@class NSMutableDictionary, ContinuousReadingListDataSource, ContinuousAutomaticReadingListDataSource, NSArray, NSString;

@interface ContinuousReadingListViewController : ContinuousBrowserPageViewController <ReaderInstallationTarget> {

	NSMutableDictionary* _continuousReadingListPageItemsToPageViewControllers;
	char _inReaderMode;
	id _currentItemBeforeLoadingNewContinuousReadingListItem;
	ContinuousReadingListDataSource* _readingListDataSource;
	ContinuousAutomaticReadingListDataSource* _automaticReadingListDataSource;

}

@property (nonatomic,copy,readonly) NSArray * allWKViews; 
@property (assign,getter=isInReaderMode,nonatomic) char inReaderMode;                                                //@synthesize inReaderMode=_inReaderMode - In the implementation block
@property (nonatomic,retain) id currentItemBeforeLoadingNewContinuousReadingListItem;                                //@synthesize currentItemBeforeLoadingNewContinuousReadingListItem=_currentItemBeforeLoadingNewContinuousReadingListItem - In the implementation block
@property (nonatomic,retain) ContinuousReadingListDataSource * readingListDataSource;                                //@synthesize readingListDataSource=_readingListDataSource - In the implementation block
@property (nonatomic,retain) ContinuousAutomaticReadingListDataSource * automaticReadingListDataSource;              //@synthesize automaticReadingListDataSource=_automaticReadingListDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)didRemoveBackForwardList:(const BackForwardList*)arg1 ;
+(id)lastShownReadingListPageItemForBackForwardListItem:(const BackForwardListItem*)arg1 ;
+(void)setLastShownReadingListPageItem:(id)arg1 forBackForwardListItem:(const BackForwardListItem*)arg2 ;
+(void)didRemoveBackForwardListItems:(const Array*)arg1 ;
+(id)continuousReadingListPageItemForReadingListItem:(id)arg1 ;
+(Class)_dataSourceClassForReadingListItem:(id)arg1 ;
-(id)currentContinuousReadingListPageItem;
-(char)isCurrentContinuousReadingListPage:(Page*)arg1 ;
-(void)stopLoadingPage:(Page*)arg1 ;
-(void)didCreateSnapshotForRubberBandingArea:(const Image*)arg1 forPage:(Page*)arg2 ;
-(void)removeTemporaryHeaderBannerViewForBrowserWKView:(id)arg1 ;
-(void)didPressRetweetButtonForPage:(Page*)arg1 bannerLocation:(unsigned long long)arg2 ;
-(void)didPressSocialProfileButtonForPage:(Page*)arg1 bannerLocation:(unsigned long long)arg2 ;
-(void)willReloadContinuousReadingViewPage:(Page*)arg1 ;
-(void)loadContinuousReadingListPageItem:(id)arg1 ;
-(char)isInReaderMode;
-(char)pageHasHeaderBanner:(Page*)arg1 ;
-(void)addHistoryOperation:(id)arg1 forPage:(Page*)arg2 ;
-(char)shouldIgnoreHistoryForAboutBlankForPage:(Page*)arg1 ;
-(void)didFinishLoadForMainFrameForPage:(Page*)arg1 committedURL:(id)arg2 ;
-(NSArray *)allWKViews;
-(id)initWithBrowserTabViewItem:(id)arg1 ;
-(void)updateTopContentInsetOfAllWKViews;
-(void)delegatingViewDidMoveToWindow:(id)arg1 ;
-(void)resetAllPageWithHeaderViewControllers;
-(id)pageWithHeaderViewControllerForItem:(id)arg1 ;
-(id)continuousPageView:(id)arg1 itemBefore:(id)arg2 ;
-(id)continuousPageView:(id)arg1 itemAfter:(id)arg2 ;
-(void)continuousPageView:(id)arg1 willTransitionToPageView:(id)arg2 pageItem:(id)arg3 ;
-(void)continuousPageView:(id)arg1 didTransitionToPageView:(id)arg2 pageItem:(id)arg3 fromPageItem:(id)arg4 previousPageItem:(id)arg5 nextPageItem:(id)arg6 ;
-(void)continuousPageView:(id)arg1 pageViewWillParticipateInTransition:(id)arg2 pageItem:(id)arg3 role:(int)arg4 ;
-(void)continuousPageView:(id)arg1 pageViewDidParticipateInTransition:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 canScrollUpPageView:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 canScrollDownPageView:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 pageViewHasHeaderBanner:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 pageViewHasFooterBanner:(id)arg2 pageItem:(id)arg3 ;
-(void)_displayedContentDidChange:(id)arg1 ;
-(void)setCurrentItemBeforeLoadingNewContinuousReadingListItem:(id)arg1 ;
-(id)_pageWithHeaderViewControllerForPage:(const Page*)arg1 ;
-(void)_setOverhangImagesForPageWithHeaderViewController:(id)arg1 ;
-(id)_pageWithHeaderViewControllerForPreviousItem;
-(id)_pageWithHeaderViewControllerForNextItem;
-(void)_goBackFromAboutBlankIfNecessaryForPage:(Page*)arg1 ;
-(id)_dataSourceForContinuousReadingListPageItem:(id)arg1 ;
-(void)_updateRubberBandingAttributesForPageItem:(id)arg1 headerViewController:(id)arg2 ;
-(id)_continuousReadingListPageItemPrecedingPageItem:(id)arg1 ;
-(id)_continuousReadingListPageItemFollowingPageItem:(id)arg1 ;
-(id)currentItemBeforeLoadingNewContinuousReadingListItem;
-(void)_clearTopOverhangImageForPageWithHeaderViewController:(id)arg1 ;
-(void)_clearBottomOverhangImageForPageWithHeaderViewController:(id)arg1 ;
-(void)setInReaderMode:(char)arg1 ;
-(id)_pageWithHeaderViewControllerForReaderContainerView:(id)arg1 ;
-(void)installReaderView:(id)arg1 ;
-(void)uninstallReaderView:(id)arg1 closedByUser:(char)arg2 ;
-(ContinuousReadingListDataSource *)readingListDataSource;
-(ContinuousAutomaticReadingListDataSource *)automaticReadingListDataSource;
-(id)_dataSourceForReadingListItem:(id)arg1 ;
-(void)setReadingListDataSource:(ContinuousReadingListDataSource *)arg1 ;
-(void)setAutomaticReadingListDataSource:(ContinuousAutomaticReadingListDataSource *)arg1 ;
-(id)_pageWithHeaderViewControllerForFrame:(const Frame*)arg1 ;
-(void)dealloc;
-(void)close;
@end

