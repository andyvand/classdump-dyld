/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <Safari/ReaderInstallationTarget.h>

@class ResizableContentContainer, BookmarksView, NSView, ReaderWKView, NSClipView, NSMutableArray, BrowserWKView, ContinuousPageView, AutoLayoutCompatibleView, NSHashTable, NSString;

@interface TabContentView : NSView <ReaderInstallationTarget> {

	ResizableContentContainer* _resizableContentContainer;
	BookmarksView* _bookmarksView;
	NSView* _readerContainerView;
	ReaderWKView* _readerWKView;
	NSClipView* _startPageClipView;
	NSMutableArray* _sortedBannerViews;
	BrowserWKView* _browserWKView;
	char _isClosed;
	ContinuousPageView* _continuousBrowserPageView;
	BrowserWKView* _browserWKViewCachedInContinuousMode;
	AutoLayoutCompatibleView* _opaqueViewBehindTitlebar;
	NSHashTable* _nativeContentViewsThatWereShownInWindow;
	NSView* _topSitesView;
	double _topContentInset;

}

@property (readonly) ResizableContentContainer * resizableContentContainer;                          //@synthesize resizableContentContainer=_resizableContentContainer - In the implementation block
@property (readonly) BrowserWKView * browserWKView;                                                  //@synthesize browserWKView=_browserWKView - In the implementation block
@property (readonly) ReaderWKView * readerWKView;                                                    //@synthesize readerWKView=_readerWKView - In the implementation block
@property (nonatomic,readonly) NSView * topSitesView;                                                //@synthesize topSitesView=_topSitesView - In the implementation block
@property (nonatomic,readonly) BookmarksView * bookmarksView;                                        //@synthesize bookmarksView=_bookmarksView - In the implementation block
@property (nonatomic,readonly) CGRect contentLayoutFrame; 
@property (nonatomic,retain) BrowserWKView * browserWKViewCachedInContinuousMode;                    //@synthesize browserWKViewCachedInContinuousMode=_browserWKViewCachedInContinuousMode - In the implementation block
@property (assign,nonatomic) double topContentInset;                                                 //@synthesize topContentInset=_topContentInset - In the implementation block
@property (nonatomic,readonly) char shouldDisableTitlebarBlurringForCurrentContentView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isInContinuousMode;
-(double)topContentInset;
-(void)bannerDidInstallWithView:(id)arg1 ;
-(void)bannerDidUninstallWithView:(id)arg1 ;
-(void)installBookmarksView:(id)arg1 ;
-(void)uninstallBookmarksView;
-(void)installTopSitesView:(id)arg1 ;
-(NSView *)topSitesView;
-(void)uninstallTopSitesView;
-(void)updateCustomSwipeViews;
-(BrowserWKView *)browserWKView;
-(BrowserWKView *)browserWKViewCachedInContinuousMode;
-(char)_isInFullScreenMode;
-(ResizableContentContainer *)resizableContentContainer;
-(CGRect)contentLayoutFrame;
-(void)replaceBrowserWKViewWithWKView:(id)arg1 replaceSubview:(char)arg2 ;
-(id)currentContentView;
-(void)windowDidSetTitlebarBlurringDisabled:(char)arg1 ;
-(char)shouldDisableTitlebarBlurringForCurrentContentView;
-(id)initWithFrame:(CGRect)arg1 andBrowserWKView:(id)arg2 ;
-(void)beginDeferringWKViewInWindowChanges;
-(void)endDeferringWKViewInWindowChanges;
-(void)setTopContentInset:(double)arg1 ;
-(char)handleScrollEvent:(id)arg1 ;
-(void)uninstallContinuousBrowserPageView;
-(void)didTransitionToBrowserWKView:(id)arg1 inContinuousBrowserPageView:(id)arg2 ;
-(void)installContinuousBrowserPageView:(id)arg1 ;
-(ReaderWKView *)readerWKView;
-(void)installReaderView:(id)arg1 ;
-(void)uninstallReaderView:(id)arg1 closedByUser:(char)arg2 ;
-(void)_layOutOpaqueViewBehindTitlebar;
-(void)_wkViewDidSwipeSnapshotToRect:(CGRect)arg1 ;
-(void)_currentContentViewDidChange;
-(char)readerIsInstalled;
-(void)setBrowserWKViewCachedInContinuousMode:(BrowserWKView *)arg1 ;
-(void)_adjustSubviewsForTopContentInset;
-(char)visualTabPickerThumbnailContentViewWasShownInWindow;
-(long long)visualTabPickerThumbnailContentViewType;
-(id)visualTabPickerThumbnailContentView;
-(CGRect)visualTabPickerThumbnailContentViewVisibleBounds;
-(BookmarksView *)bookmarksView;
-(void)dealloc;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)close;
-(char)isOpaque;
-(void)scrollWheel:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)adjustSubviews;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
@end

