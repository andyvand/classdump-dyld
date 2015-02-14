/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CATransaction : NSObject
+(double)commitTime;
+(void)setCommitTime:(double)arg1 ;
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(void)pushAnimator:(/*^block*/id)arg1 ;
+(void)popAnimator;
+(char)animatesFromModelValues;
+(void)setAnimatesFromModelValues:(char)arg1 ;
+(void)begin;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)commit;
+(void)activateBackground:(char)arg1 ;
+(void)flush;
+(void)setDisableActions:(char)arg1 ;
+(void)synchronize;
+(id)valueForKey:(id)arg1 ;
+(void)lock;
+(void)unlock;
+(void)activate;
+(char)disableActions;
+(/*^block*/id)animator;
+(double)animationDuration;
+(void)setAnimationDuration:(double)arg1 ;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(unsigned)currentState;
+(unsigned)generateSeed;
+(id)animationTimingFunction;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(/*^block*/id)completionBlock;
+(void)assertInactive;
@end

