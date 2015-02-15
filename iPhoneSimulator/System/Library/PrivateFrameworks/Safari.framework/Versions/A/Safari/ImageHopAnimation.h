/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSAnimation.h>

@class ImageHopAnimationController;

@interface ImageHopAnimation : NSAnimation {

	ImageHopAnimationController* _animationController;

}

@property (__weak) ImageHopAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
-(void)setAnimationController:(ImageHopAnimationController *)arg1 ;
-(ImageHopAnimationController *)animationController;
-(CGPoint)_centerPointForProgress:(double)arg1 ;
-(void)setCurrentProgress:(float)arg1 ;
@end
