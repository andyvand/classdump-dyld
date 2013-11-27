/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNTransitionAnimator.h>
#import <iWorkImport/KNFrameAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper;

@interface KNTransitionScale : KNAnimationEffect <KNTransitionAnimator, KNFrameAnimator, KNAnimationPluginArchiving> {

	KNAnimParameterGroup* mParameterGroup;
	KNMotionBlurAnimationPluginWrapper* _motionBlurWrapper;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(id)defaultAttributes;
+(id)animationName;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(id)animationsWithContext:(id)arg1 ;
-(void)dealloc;
@end
