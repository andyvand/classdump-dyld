/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QLScaleWindowEffect.h>

@class QLScaleWindowEffect;

@interface PKScaleWindowEffect : QLScaleWindowEffect {

	/*function pointer*/void* _function;
	QLScaleWindowEffect* _nextEffect;
	double _nextEffectDelay;

}

@property (retain) QLScaleWindowEffect * nextEffect;              //@synthesize nextEffect=_nextEffect - In the implementation block
@property (assign) double nextEffectDelay;                        //@synthesize nextEffectDelay=_nextEffectDelay - In the implementation block
-(void)setEaseFunction:(/*function pointer*/void*)arg1 ;
-(void)setNextEffectDelay:(double)arg1 ;
-(void)setNextEffect:(QLScaleWindowEffect *)arg1 ;
-(QLScaleWindowEffect *)nextEffect;
-(double)nextEffectDelay;
-(void)done;
-(float)animation:(id)arg1 valueForProgress:(float)arg2 ;
-(void)setValue:(float)arg1 ;
@end

