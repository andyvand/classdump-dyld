/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QLWindowEffect.h>
#import <QuickLookUI/NSAnimationDelegate.h>

@class QLWindowAnimation, NSArray, NSString;

@interface QLAnimationWindowEffect : QLWindowEffect <NSAnimationDelegate> {

	unsigned _windowID;
	unsigned _cid;
	QLWindowAnimation* _animation;
	NSArray* _subEffects;
	char _mainEffect;
	char _inverted;

}

@property (readonly) double additionalDuration; 
@property (assign) float progress; 
@property (assign) char inverted; 
@property (retain) NSArray * subEffects;                            //@synthesize subEffects=_subEffects - In the implementation block
@property (retain) QLWindowAnimation * animation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAnimation:(QLWindowAnimation *)arg1 ;
-(void)abort;
-(void)setSubEffects:(NSArray *)arg1 ;
-(void)setInverted:(char)arg1 ;
-(char)inverted;
-(void)invertWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSArray *)subEffects;
-(id)subEffectWithID:(unsigned)arg1 ;
-(id)initWithWindow:(id)arg1 animation:(id)arg2 ;
-(double)additionalDuration;
-(void)_setProgress:(float)arg1 ;
-(void)done;
-(void)dealloc;
-(char)stop;
-(id)prepare;
-(void)animationDidEnd:(id)arg1 ;
-(void)invoke;
-(void)setValue:(float)arg1 ;
-(QLWindowAnimation *)animation;
-(void)setWindow:(id)arg1 ;
-(float)progress;
-(void)setProgress:(float)arg1 ;
@end

