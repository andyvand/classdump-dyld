/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSAnimation.h>

@class CASpringAnimation, CAMediaTimingFunction;

@interface NSSpringAnimation : NSAnimation {

	CASpringAnimation* _animation;

}

@property (assign) double mass; 
@property (assign) double stiffness; 
@property (assign) double damping; 
@property (assign) double velocity; 
@property (retain) CAMediaTimingFunction * timingFunction; 
-(void)dealloc;
-(void)startAnimation;
-(id)initWithDuration:(double)arg1 animationCurve:(unsigned long long)arg2 ;
-(float)currentValue;
-(double)velocity;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(double)mass;
-(double)stiffness;
-(double)damping;
-(void)setVelocity:(double)arg1 ;
-(double)durationForEpsilon:(double)arg1 ;
-(id)initWithDuration:(double)arg1 ;
@end

