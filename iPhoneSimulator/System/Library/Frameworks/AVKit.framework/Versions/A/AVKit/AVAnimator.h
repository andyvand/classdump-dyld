/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSSet;

@interface AVAnimator : NSProxy {

	id _animationTarget;
	id _defaultAnimator;
	id _currentTarget;
	NSSet* _passThroughSelectorStrings;
	unsigned long long _animatingRefCount;

}

@property (getter=isAnimating,readonly) char animating; 
-(id)initWithAnimationTarget:(id)arg1 defaultAnimator:(id)arg2 passThroughSelectors:(SEL)arg3 ;
-(id)initWithAnimationTarget:(id)arg1 defaultAnimator:(id)arg2 passThroughSelectorStrings:(id)arg3 ;
-(char)isAnimating;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

