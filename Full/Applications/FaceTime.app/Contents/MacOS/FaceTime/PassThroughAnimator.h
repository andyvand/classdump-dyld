/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:31:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSSet;

@interface PassThroughAnimator : NSProxy {

	id _animationTarget;
	id _defaultAnimator;
	id _currentTarget;
	NSSet* _passThroughSelectorStrings;
	unsigned long long _animatingRefCount;

}
-(id)initWithAnimationTarget:(id)arg1 defaultAnimator:(id)arg2 passThroughSelectors:(SEL)arg3 ;
-(id)initWithAnimationTarget:(id)arg1 defaultAnimator:(id)arg2 passThroughSelectorStrings:(id)arg3 ;
-(char)isAnimating;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end
