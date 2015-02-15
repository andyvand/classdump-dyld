/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>

@class NSView, ReaderWKView;

@interface ReaderContainerViewController : NSViewController {

	NSView* _backgroundView;
	ReaderWKView* _readerWKView;
	double _amountOfContinuousReadingViewBannerThatIsVisible;
	/*^block*/id _deactivationAnimationDidFinishBlock;
	char _shouldCoordinateAnimationsWithContinuousReadingBanners;

}

@property (getter=isAnimatingActivation,readonly) char animatingActivation; 
@property (getter=isAnimatingDeactivation,readonly) char animatingDeactivation; 
@property (assign,nonatomic,__weak) ReaderWKView * readerWKView;                                       //@synthesize readerWKView=_readerWKView - In the implementation block
@property (assign,nonatomic) char shouldCoordinateAnimationsWithContinuousReadingBanners;              //@synthesize shouldCoordinateAnimationsWithContinuousReadingBanners=_shouldCoordinateAnimationsWithContinuousReadingBanners - In the implementation block
@property (copy) id deactivationAnimationDidFinishBlock;                                               //@synthesize deactivationAnimationDidFinishBlock=_deactivationAnimationDidFinishBlock - In the implementation block
+(id)_fadeAnimationWithStartingOpacity:(double)arg1 endingOpacity:(double)arg2 ;
+(id)_moveAnimationWithStartingRect:(CGRect)arg1 endingRect:(CGRect)arg2 ;
+(id)_animationWithKeyPath:(id)arg1 ;
-(void)setShouldCoordinateAnimationsWithContinuousReadingBanners:(char)arg1 ;
-(ReaderWKView *)readerWKView;
-(void)setReaderWKView:(ReaderWKView *)arg1 ;
-(void)_cancelAllAnimations;
-(void)_maskLayersOccludingContinuousReadingViewBanner;
-(CGRect)_frameBelowTheViewFrame;
-(void)_unmaskLayersOccludingContinuousReadingViewBanner;
-(void)setDeactivationAnimationDidFinishBlock:(id)arg1 ;
-(void)finishAsynchronousDeactivation;
-(id)deactivationAnimationDidFinishBlock;
-(id)_maskLayerForContinuousReadingViewBannerOfHeight:(long long)arg1 ;
-(id)initWithReaderWKView:(id)arg1 ;
-(void)activateWithAnimation:(char)arg1 verticalScrollOffsetOfOfBrowserPage:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)finishAsynchronousActivation;
-(char)isAnimatingActivation;
-(char)isAnimatingDeactivation;
-(void)deactivateWithAnimation:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)shouldCoordinateAnimationsWithContinuousReadingBanners;
-(id)init;
@end

