/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSAnimationDelegate.h>

@class NSView, NSAnimation, NSArray, BarBackground, NSString;

@interface Banner : NSObject <NSAnimationDelegate> {

	NSView* bannerContents;
	NSView* firstKeySubview;
	NSView* lastKeySubview;
	SearchableWebContentViewController* _contentViewController;
	NSView* _viewBelowBanner;
	NSAnimation* _animation;
	char _animatingIntoPlace;
	CGRect _animationEnclosingRect;
	double _animationDuration;
	NSArray* _topLevelNibObjects;
	BarBackground* _bannerView;

}

@property (nonatomic,readonly) SearchableWebContentViewController* contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (getter=isInstalled,nonatomic,readonly) char installed; 
@property (nonatomic,retain,readonly) BarBackground * bannerView;                                      //@synthesize bannerView=_bannerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)bannerSortOrder;
+(char)bannerHasBottomBorder;
+(id)bannerBackgroundImage;
+(double)animationDuration;
-(id)_createBannerView;
-(void)didUninstallBannerView;
-(void)willInstallBannerView;
-(void)_insertBannerViewBehindOtherBannerViews;
-(void)didInstallBannerView;
-(void)_moveBannerIntoPlace:(char)arg1 withAnimation:(char)arg2 ;
-(char)isInstalled;
-(void)willUninstallBannerView;
-(BarBackground *)bannerView;
-(void)_populateBannerViewFromNib:(id)arg1 ;
-(CGRect)_computeAnimationEnclosingRect;
-(void)_advanceAnimationWithProgress:(float)arg1 ;
-(id)bannerNibName;
-(id)initWithContentViewController:(SearchableWebContentViewController*)arg1 ;
-(long long)compareBanners:(id)arg1 ;
-(void)detachContentViewController;
-(void)installWithAnimation:(char)arg1 ;
-(void)uninstall:(id)arg1 ;
-(void)uninstallWithAnimation:(char)arg1 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 ;
-(void)animationDidEnd:(id)arg1 ;
-(SearchableWebContentViewController*)contentViewController;
@end

