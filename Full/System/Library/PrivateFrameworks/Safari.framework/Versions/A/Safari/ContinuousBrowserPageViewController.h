/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/ContinuousPageViewDelegate.h>
#import <Safari/SafariViewDelegate.h>

@class BrowserTabViewItem, ContinuousPageView, NSString;

@interface ContinuousBrowserPageViewController : NSObject <ContinuousPageViewDelegate, SafariViewDelegate> {

	BrowserTabViewItem* _browserTabViewItem;
	ContinuousPageView* _continuousPageView;
	id _currentItem;

}

@property (nonatomic,__weak,readonly) BrowserTabViewItem * browserTabViewItem;              //@synthesize browserTabViewItem=_browserTabViewItem - In the implementation block
@property (nonatomic,retain,readonly) ContinuousPageView * continuousPageView;              //@synthesize continuousPageView=_continuousPageView - In the implementation block
@property (nonatomic,retain) id currentItem;                                                //@synthesize currentItem=_currentItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)exitContinuousMode;
-(ContinuousPageView *)continuousPageView;
-(id)initWithBrowserTabViewItem:(id)arg1 ;
-(void)setCurrentItem:(id)arg1 ;
-(void)_installContinuousPageViewIfNeeded;
-(void)loadItem:(id)arg1 ;
-(id)_tabContentView;
-(void)_didUpdateBrowserWKViewInTabContentView:(id)arg1 ;
-(void)resetAllPageWithHeaderViewControllers;
-(id)pageWithHeaderViewControllerForItem:(id)arg1 ;
-(id)continuousPageView:(id)arg1 itemBefore:(id)arg2 ;
-(id)continuousPageView:(id)arg1 itemAfter:(id)arg2 ;
-(id)continuousPageView:(id)arg1 pageViewForItem:(id)arg2 ;
-(void)continuousPageView:(id)arg1 willTransitionToPageView:(id)arg2 pageItem:(id)arg3 ;
-(void)continuousPageView:(id)arg1 transitionToPageViewWasCanceled:(id)arg2 pageItem:(id)arg3 ;
-(void)continuousPageView:(id)arg1 didTransitionToPageView:(id)arg2 pageItem:(id)arg3 fromPageItem:(id)arg4 previousPageItem:(id)arg5 nextPageItem:(id)arg6 ;
-(void)continuousPageView:(id)arg1 pageViewWillParticipateInTransition:(id)arg2 pageItem:(id)arg3 role:(int)arg4 ;
-(void)continuousPageView:(id)arg1 pageViewDidParticipateInTransition:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 canScrollUpPageView:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 canScrollDownPageView:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 pageViewHasHeaderBanner:(id)arg2 pageItem:(id)arg3 ;
-(char)continuousPageView:(id)arg1 pageViewHasFooterBanner:(id)arg2 pageItem:(id)arg3 ;
-(double)topContentInsetForContinuousPageView:(id)arg1 ;
-(BrowserTabViewItem *)browserTabViewItem;
-(id)currentItem;
-(void)dealloc;
@end

