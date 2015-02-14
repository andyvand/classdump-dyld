/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@interface _MKUIViewController : NSViewController {

	unsigned long long _countOfAppearanceTransitionInvocations;
	long long _appearanceAnimation;
	long long _parentTransitioning;

}
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)isMovingFromParentViewController;
-(void)beginAppearanceTransition:(char)arg1 animated:(char)arg2 ;
-(char)isMovingToParentViewController;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(char)_isAnimating;
-(void)loadView;
-(void)removeFromParentViewController;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)beginAppearanceTransition:(char)arg1 ;
-(void)endAppearanceTransition;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)addChildViewController:(id)arg1 ;
@end

