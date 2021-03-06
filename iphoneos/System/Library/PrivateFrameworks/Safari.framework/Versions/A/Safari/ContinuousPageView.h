/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <Safari/SafariDelegatingView.h>

@protocol SafariViewDelegate, ContinuousPageViewDelegate;
@class NSView, NSString;

@interface ContinuousPageView : NSView <SafariDelegatingView> {

	char _inMiddleOfGesture;
	char _swipingToThePreviousPage;
	CGRect _currentPageViewFrameBeforeSwipe;
	char _didDeferNoteItemsChanged;
	char _handlingPageTransition;
	id<SafariViewDelegate> _safariViewDelegate;
	id<ContinuousPageViewDelegate> _delegate;
	id _currentPageItem;
	id _nextPageItem;
	NSView* _currentPageView;
	NSView* _nextPageView;
	NSView* _previousPageView;
	id _previousPageItem;

}

@property (nonatomic,__weak,readonly) id<ContinuousPageViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id currentPageItem;                                                       //@synthesize currentPageItem=_currentPageItem - In the implementation block
@property (nonatomic,retain) id nextPageItem;                                                          //@synthesize nextPageItem=_nextPageItem - In the implementation block
@property (nonatomic,retain) NSView * currentPageView;                                                 //@synthesize currentPageView=_currentPageView - In the implementation block
@property (nonatomic,retain) NSView * nextPageView;                                                    //@synthesize nextPageView=_nextPageView - In the implementation block
@property (nonatomic,retain) NSView * previousPageView;                                                //@synthesize previousPageView=_previousPageView - In the implementation block
@property (assign,getter=isHandlingPageTransition,nonatomic) char handlingPageTransition;              //@synthesize handlingPageTransition=_handlingPageTransition - In the implementation block
@property (nonatomic,retain) id previousPageItem;                                                      //@synthesize previousPageItem=_previousPageItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SafariViewDelegate> safariViewDelegate;                         //@synthesize safariViewDelegate=_safariViewDelegate - In the implementation block
+(id)backgroundColor;
-(void)webKitDidNotHandleScrollEvent:(id)arg1 ;
-(char)isHandlingPageTransition;
-(char)handleScrollEvent:(id)arg1 ;
-(id<SafariViewDelegate>)safariViewDelegate;
-(void)setSafariViewDelegate:(id<SafariViewDelegate>)arg1 ;
-(void)loadItem:(id)arg1 ;
-(id)nextPageItem;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)setCurrentPageItem:(id)arg1 ;
-(void)setPreviousPageItem:(id)arg1 ;
-(void)setNextPageItem:(id)arg1 ;
-(void)setCurrentPageView:(NSView *)arg1 ;
-(void)setPreviousPageView:(NSView *)arg1 ;
-(void)setNextPageView:(NSView *)arg1 ;
-(void)_willTransitionToPageView:(id)arg1 pageItem:(id)arg2 ;
-(void)noteItemsChanged;
-(id)currentPageItem;
-(void)_updateNextPageItem;
-(void)_updatePreviousPageItem;
-(void)updatePageViewsLayout;
-(id)previousPageItem;
-(void)_startSwipeGestureWithScrollEvent:(id)arg1 ;
-(CGRect)_previousViewFrame;
-(CGRect)_nextViewFrame;
-(NSView *)nextPageView;
-(NSView *)currentPageView;
-(NSView *)previousPageView;
-(void)setHandlingPageTransition:(char)arg1 ;
-(void)_layOutViewsAtSwipeProgress:(double)arg1 bannerIsVisibleInBothPages:(char)arg2 ;
-(void)_didTransitionToPreviousPage;
-(void)_didTransitionToNextPage;
-(void)_transitionToPageViewWasCanceled:(id)arg1 pageItem:(id)arg2 ;
-(id<ContinuousPageViewDelegate>)delegate;
-(void)viewDidMoveToWindow;
@end

