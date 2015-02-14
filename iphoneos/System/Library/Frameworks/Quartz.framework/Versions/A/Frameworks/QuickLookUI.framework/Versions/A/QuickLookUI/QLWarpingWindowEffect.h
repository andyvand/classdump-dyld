/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QLAnimationWindowEffect.h>

@interface QLWarpingWindowEffect : QLAnimationWindowEffect {

	/*^block*/id _setupBlock;
	/*^block*/id _pointBlock;

}

@property (copy) id setupBlock; 
@property (copy) id pointBlock; 
+(id)warpingEffectForWindow:(id)arg1 duration:(double)arg2 ;
-(void)setSetupBlock:(id)arg1 ;
-(id)setupBlock;
-(void)setPointBlock:(id)arg1 ;
-(id)pointBlock;
-(void)finalize;
-(void)dealloc;
-(id)prepare;
-(float)animation:(id)arg1 valueForProgress:(float)arg2 ;
-(void)setValue:(float)arg1 ;
@end

