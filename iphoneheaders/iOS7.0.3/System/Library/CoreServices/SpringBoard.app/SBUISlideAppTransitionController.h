/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <SpringBoard/SBUIFullscreenAnimationViewDelegate.h>

@class SBUISlideAppTransitionView;

@interface SBUISlideAppTransitionController : SBUIMainScreenAnimationController <SBUIFullscreenAnimationViewDelegate> {

	SBUISlideAppTransitionView* _transitionView;
	double _animationDelay;
	double _animationDuration;
	double _initiationTime;

}
-(void)_prepareAnimation;
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)_cleanupAnimation;
-(BOOL)_animationShouldStart;
-(id)_animationProgressDependency;
-(void)appTransitionView:(id)arg1 animationWillStartWithDuration:(double)arg2 afterDelay:(double)arg3 ;
-(void)appTransitionViewAnimationDidStop:(id)arg1 ;
-(void)dealloc;
-(void)_startAnimation;
@end
