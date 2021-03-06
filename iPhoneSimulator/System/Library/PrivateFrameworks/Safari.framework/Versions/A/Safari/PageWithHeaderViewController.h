/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <Safari/PageWithHeaderViewDelegate.h>
#import <Safari/ReaderInstallationTarget.h>

@class NSMutableArray, ContinuousReadingBannerLayer, FlippedView, NSTimer, BrowserWKView, NSImage, NSString, NSAttributedString, ReaderContainerView, SearchableWKView;

@interface PageWithHeaderViewController : NSViewController <PageWithHeaderViewDelegate, ReaderInstallationTarget> {

	char _isSocial;
	NSMutableArray* _historyOperations;
	ContinuousReadingBannerLayer* _headerBannerLayer;
	FlippedView* _headerBannerView;
	NSTimer* _removeHeaderBannerViewTimer;
	NSTimer* _createSnapshotForRubberBandingAreaTimer;
	char _canTakeSnapshotForRubberBandingArea;
	char _didStopLoadingPage;
	char _canUseCredentialStorage;
	char _hasDefaultSiteIcon;
	char _isRepostedByAuthenticatedUser;
	char _forTwitterItem;
	char _hasFooterBanner;
	char _footerBannerHasDefaultSiteIcon;
	char _footerBannerIsRepostedByAuthenticatedUser;
	char _footerBannerIsSocial;
	char _footerBannerForTwitterItem;
	char _suppressBannerUpdatesOnPropertyChanges;
	BrowserWKView* _browserWKView;
	Image* _snapshotForRubberBandingArea;
	NSImage* _icon;
	NSImage* _secondaryIcon;
	NSString* _urlString;
	NSAttributedString* _itemTitle;
	NSString* _itemDescription;
	NSString* _screenName;
	NSString* _reposterDisplayName;
	NSString* _reposterScreenName;
	NSImage* _footerBannerIcon;
	NSImage* _footerBannerSecondaryIcon;
	NSAttributedString* _footerBannerItemTitle;
	NSString* _footerBannerItemDescription;
	NSString* _footerBannerScreenName;
	NSString* _footerBannerReposterDisplayName;
	NSString* _footerBannerReposterScreenName;

}

@property (nonatomic,readonly) BrowserWKView * browserWKView;                                                    //@synthesize browserWKView=_browserWKView - In the implementation block
@property (nonatomic,readonly) ReaderContainerView * readerContainerView; 
@property (nonatomic,readonly) SearchableWKView * activeWKView; 
@property (assign,nonatomic) char canTakeSnapshotForRubberBandingArea;                                           //@synthesize canTakeSnapshotForRubberBandingArea=_canTakeSnapshotForRubberBandingArea - In the implementation block
@property (assign,nonatomic) Image* snapshotForRubberBandingArea;                                                //@synthesize snapshotForRubberBandingArea=_snapshotForRubberBandingArea - In the implementation block
@property (assign,nonatomic) char didStopLoadingPage;                                                            //@synthesize didStopLoadingPage=_didStopLoadingPage - In the implementation block
@property (assign,nonatomic) char canUseCredentialStorage;                                                       //@synthesize canUseCredentialStorage=_canUseCredentialStorage - In the implementation block
@property (nonatomic,readonly) char hasHeaderBanner; 
@property (nonatomic,readonly) NSImage * icon;                                                                   //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSImage * secondaryIcon;                                                          //@synthesize secondaryIcon=_secondaryIcon - In the implementation block
@property (nonatomic,readonly) char hasDefaultSiteIcon;                                                          //@synthesize hasDefaultSiteIcon=_hasDefaultSiteIcon - In the implementation block
@property (nonatomic,readonly) NSString * urlString;                                                             //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSAttributedString * itemTitle;                                                   //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,readonly) NSString * itemDescription;                                                       //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,readonly) NSString * screenName;                                                            //@synthesize screenName=_screenName - In the implementation block
@property (nonatomic,readonly) NSString * reposterDisplayName;                                                   //@synthesize reposterDisplayName=_reposterDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * reposterScreenName;                                                    //@synthesize reposterScreenName=_reposterScreenName - In the implementation block
@property (nonatomic,readonly) char isRepostedByAuthenticatedUser;                                               //@synthesize isRepostedByAuthenticatedUser=_isRepostedByAuthenticatedUser - In the implementation block
@property (getter=isSocial,nonatomic,readonly) char social; 
@property (getter=isForTwitterItem,nonatomic,readonly) char forTwitterItem;                                      //@synthesize forTwitterItem=_forTwitterItem - In the implementation block
@property (assign,nonatomic) char hasFooterBanner;                                                               //@synthesize hasFooterBanner=_hasFooterBanner - In the implementation block
@property (nonatomic,readonly) NSImage * footerBannerIcon;                                                       //@synthesize footerBannerIcon=_footerBannerIcon - In the implementation block
@property (nonatomic,readonly) NSImage * footerBannerSecondaryIcon;                                              //@synthesize footerBannerSecondaryIcon=_footerBannerSecondaryIcon - In the implementation block
@property (nonatomic,readonly) char footerBannerHasDefaultSiteIcon;                                              //@synthesize footerBannerHasDefaultSiteIcon=_footerBannerHasDefaultSiteIcon - In the implementation block
@property (nonatomic,readonly) NSAttributedString * footerBannerItemTitle;                                       //@synthesize footerBannerItemTitle=_footerBannerItemTitle - In the implementation block
@property (nonatomic,readonly) NSString * footerBannerItemDescription;                                           //@synthesize footerBannerItemDescription=_footerBannerItemDescription - In the implementation block
@property (nonatomic,readonly) NSString * footerBannerScreenName;                                                //@synthesize footerBannerScreenName=_footerBannerScreenName - In the implementation block
@property (nonatomic,readonly) NSString * footerBannerReposterDisplayName;                                       //@synthesize footerBannerReposterDisplayName=_footerBannerReposterDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * footerBannerReposterScreenName;                                        //@synthesize footerBannerReposterScreenName=_footerBannerReposterScreenName - In the implementation block
@property (nonatomic,readonly) char footerBannerIsRepostedByAuthenticatedUser;                                   //@synthesize footerBannerIsRepostedByAuthenticatedUser=_footerBannerIsRepostedByAuthenticatedUser - In the implementation block
@property (nonatomic,readonly) char footerBannerIsSocial;                                                        //@synthesize footerBannerIsSocial=_footerBannerIsSocial - In the implementation block
@property (getter=isFooterBannerForTwitterItem,nonatomic,readonly) char footerBannerForTwitterItem;              //@synthesize footerBannerForTwitterItem=_footerBannerForTwitterItem - In the implementation block
@property (assign,nonatomic) char suppressBannerUpdatesOnPropertyChanges;                                        //@synthesize suppressBannerUpdatesOnPropertyChanges=_suppressBannerUpdatesOnPropertyChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isRepostedByAuthenticatedUser;
-(NSString *)urlString;
-(BrowserWKView *)browserWKView;
-(NSString *)reposterDisplayName;
-(NSString *)reposterScreenName;
-(NSString *)itemDescription;
-(NSImage *)secondaryIcon;
-(char)hasDefaultSiteIcon;
-(char)isSocial;
-(NSString *)screenName;
-(void)attachWebView;
-(void)detachWebView;
-(void)setViewControllerForFooterBanner:(id)arg1 ;
-(NSAttributedString *)itemTitle;
-(void)setSecondaryIcon:(NSImage *)arg1 ;
-(void)setItemTitle:(NSAttributedString *)arg1 ;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setScreenName:(NSString *)arg1 ;
-(void)stopLoadingWebView;
-(char)hasHeaderBanner;
-(char)didStopLoadingPage;
-(void)addHistoryOperation:(id)arg1 ;
-(void)setCanTakeSnapshotForRubberBandingArea:(char)arg1 ;
-(void)createSnapshotForRubberBandingAreaSoon;
-(void)setSnapshotForRubberBandingArea:(Image*)arg1 ;
-(void)willReloadWebView;
-(void)removeTemporaryHeaderBannerViewSoon;
-(id)initWithContinuousReadingListPageItem:(id)arg1 browserDocument:(id)arg2 ;
-(void)setCanUseCredentialStorage:(char)arg1 ;
-(void)loadWebView;
-(ReaderContainerView *)readerContainerView;
-(SearchableWKView *)activeWKView;
-(void)didEnterForeground;
-(void)commitHistoryOperations;
-(Image*)snapshotForRubberBandingArea;
-(void)navigateToAboutBlankIfNecessary;
-(char)hasFooterBanner;
-(void)activateReaderIfAvailable;
-(void)installReaderView:(id)arg1 ;
-(void)deactivateReaderIfActive;
-(void)uninstallReaderView:(id)arg1 closedByUser:(char)arg2 ;
-(char)goBackFromAboutBlankIfNecessary;
-(void)pageWithHeaderViewFrameSizeDidChange:(id)arg1 ;
-(void)setSocial:(char)arg1 ;
-(void)_cancelRemoveHeaderBannerViewTimer;
-(void)_cancelCreateSnapshotForRubberBandingAreaTimer;
-(id)_pageWithHeaderView;
-(void)setSuppressBannerUpdatesOnPropertyChanges:(char)arg1 ;
-(Page*)_browserPage;
-(void)_removeFooterBanner;
-(char)_isWebViewClosed;
-(void)setDidStopLoadingPage:(char)arg1 ;
-(void)_installHeaderBannerView;
-(void)_clearHistoryOperations;
-(void)removeTemporaryHeaderBannerView;
-(Page*)_readerPage;
-(void)setHasFooterBanner:(char)arg1 ;
-(void)_updateFooterBannerPropertiesForPage:(const Page*)arg1 ;
-(char)canTakeSnapshotForRubberBandingArea;
-(void)_createSnapshotForRubberBandingArea;
-(char)suppressBannerUpdatesOnPropertyChanges;
-(void)_updateHeaderBannerTypeForPage:(const Page*)arg1 ;
-(void)_updateHeaderBannerIconForPage:(const Page*)arg1 ;
-(void)_updateHeaderBannerSecondaryIconForPage:(const Page*)arg1 ;
-(void)_updateHeaderBannerIconDrawsDropShadowAndMaskForPage:(const Page*)arg1 ;
-(void)_updateHeaderBannerItemTitleForPage:(const Page*)arg1 ;
-(void)_updateHeaderBannerItemDescriptionForPage:(const Page*)arg1 ;
-(void)_updateHeaderBannerScreenNameForPage:(const Page*)arg1 ;
-(void)_updateHeaderBannerRepostedInfoForPage:(const Page*)arg1 ;
-(void)_updateHeaderBannerRetweetButtonVisibleForPage:(const Page*)arg1 ;
-(void)_updateFooterBannerTypeForPage:(const Page*)arg1 ;
-(void)_updateFooterBannerIconForPage:(const Page*)arg1 ;
-(void)_updateFooterBannerSecondaryIconForPage:(const Page*)arg1 ;
-(void)_updateFooterBannerIconDrawsDropShadowAndMaskForPage:(const Page*)arg1 ;
-(void)_updateFooterBannerItemTitleForPage:(const Page*)arg1 ;
-(void)_updateFooterBannerItemDescriptionForPage:(const Page*)arg1 ;
-(void)_updateFooterBannerScreenNameForPage:(const Page*)arg1 ;
-(void)_updateFooterBannerRepostedInfoForPage:(const Page*)arg1 ;
-(void)_updateFooterBannerRetweetButtonVisibleForPage:(const Page*)arg1 ;
-(void)_updateHeaderBannerPropertiesForPage:(const Page*)arg1 ;
-(id)_newHeaderBannerView;
-(char)isForTwitterItem;
-(char)footerBannerIsSocial;
-(NSAttributedString *)footerBannerItemTitle;
-(NSString *)footerBannerItemDescription;
-(NSString *)footerBannerScreenName;
-(char)footerBannerIsRepostedByAuthenticatedUser;
-(NSString *)footerBannerReposterDisplayName;
-(NSString *)footerBannerReposterScreenName;
-(NSImage *)footerBannerIcon;
-(char)footerBannerHasDefaultSiteIcon;
-(NSImage *)footerBannerSecondaryIcon;
-(char)isFooterBannerForTwitterItem;
-(void)setHasDefaultSiteIcon:(char)arg1 ;
-(void)setIsRepostedByAuthenticatedUser:(char)arg1 ;
-(void)setReposterDisplayName:(NSString *)arg1 ;
-(void)setReposterScreenName:(NSString *)arg1 ;
-(void)setFooterBannerIsSocial:(char)arg1 ;
-(void)setFooterBannerIcon:(NSImage *)arg1 ;
-(void)setFooterBannerSecondaryIcon:(NSImage *)arg1 ;
-(void)setFooterBannerHasDefaultSiteIcon:(char)arg1 ;
-(void)setFooterBannerItemTitle:(NSAttributedString *)arg1 ;
-(void)setFooterBannerItemDescription:(NSString *)arg1 ;
-(void)setFooterBannerScreenName:(NSString *)arg1 ;
-(void)setFooterBannerIsRepostedByAuthenticatedUser:(char)arg1 ;
-(void)setFooterBannerReposterDisplayName:(NSString *)arg1 ;
-(void)setFooterBannerReposterScreenName:(NSString *)arg1 ;
-(char)canUseCredentialStorage;
-(void)didEnterBackground;
-(void)dealloc;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(void)close;
-(void)loadView;
-(id)_url;
@end

