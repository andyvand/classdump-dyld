/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSMutableCopying.h>
#import <QuartzCore/CAPropertyInfo.h>
#import <QuartzCore/NSCoding.h>
#import <QuartzCore/NSCopying.h>
#import <QuartzCore/CAMediaTiming.h>
#import <QuartzCore/CAAction.h>

@class NSString, CALayer, CAStateControllerTransition, CAMediaTimingFunction;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {

	void* _attr;
	unsigned _flags;

}

@property (nonatomic,copy) id safari_animationDidStartHandler; 
@property (nonatomic,copy) id safari_animationDidStopHandler; 
@property (__weak) CALayer * SHK_targetLayer; 
@property (copy) id SHK_preparationBlock; 
@property (copy) id SHK_completionBlock; 
@property (assign) long long _mapkit_ID; 
@property (assign) char usesSceneTimeBase; 
@property (setter=NS_setTargetKeyPath:,getter=NS_targetKeyPath,copy) id NS_targetKeyPath; 
@property (setter=NS_setTargetValue:,getter=NS_targetValue,retain) id NS_targetValue; 
@property (setter=NS_setTargetObject:,getter=NS_targetObject,retain) id NS_targetObject; 
@property (setter=NS_setCompletionHandlerSuspension:,getter=NS_completionHandlerSuspension,retain) id NS_completionHandlerSuspension; 
@property (setter=NS_setActive:,getter=NS_isActive) char NS_active; 
@property (setter=NSAnimationContext_setHandler:,getter=NSAnimationContext_handler,copy) id NSAnimationContext_handler; 
@property (__weak) CAStateControllerTransition * CAStateControllerTransition; 
@property (getter=isEnabled) char enabled; 
@property (copy) NSString * beginTimeMode; 
@property (assign) double frameInterval; 
@property (retain) CAMediaTimingFunction * timingFunction; 
@property (retain) id delegate; 
@property (getter=isRemovedOnCompletion) char removedOnCompletion; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) char autoreverses; 
@property (copy) NSString * fillMode; 
+(id)SHK_viewFrameAnimationFromRect:(CGRect)arg1 toRect:(CGRect)arg2 ;
+(id)SHK_appearanceAnimationStartingWithAnimation:(id)arg1 ;
+(id)SHK_viewFrameAnimationFromRect:(CGRect)arg1 toRect:(CGRect)arg2 deltaY:(float)arg3 ;
+(id)SHK_fadeAnimationFromValue:(id)arg1 toValue:(id)arg2 ;
+(id)SHK_disappearanceAnimation;
+(id)SHK_appearanceAnimation;
+(id)SHK_firstSubViewBoundsAnimationForView:(id)arg1 fromBounds:(CGRect)arg2 toBounds:(CGRect)arg3 ;
+(id)SHK_viewFrameAnimationFromRect:(CGRect)arg1 toRect:(CGRect)arg2 deltaY:(float)arg3 delegate:(id)arg4 ;
+(id)SHK_viewFrameAnimationFromRect:(CGRect)arg1 toRect:(CGRect)arg2 delegate:(id)arg3 ;
+(id)SHK_boundsAnimationFromRect:(CGRect)arg1 toRect:(CGRect)arg2 ;
+(id)SHK_positionAnimationFromRect:(CGRect)arg1 toRect:(CGRect)arg2 ;
+(id)SHK_keyFramAnimationFromRect:(CGRect)arg1 toRect:(CGRect)arg2 deltaY:(float)arg3 ;
+(id)SHK_fadeAnimationToValue:(id)arg1 ;
+(id)flipAnimationWithDuration:(double)arg1 forLayerBeginningOnTop:(char)arg2 scaleFactor:(double)arg3 ;
+(id)flipShadowAnimationWithDuration:(double)arg1 ;
+(id)CA_attributes;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(char)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
+(id)attributesForKey:(id)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)animation;
+(id)properties;
+(id)defaultValueForKey:(id)arg1 ;
+(char)resolveInstanceMethod:(SEL)arg1 ;
-(void)setSafari_animationDidStopHandler:(id)arg1 ;
-(void)_safari_ensureDelegateIsSafariCAAnimationDelegate;
-(void)setSafari_animationDidStartHandler:(id)arg1 ;
-(id)safari_animationDidStartHandler;
-(id)safari_animationDidStopHandler;
-(void)setSHK_targetLayer:(CALayer *)arg1 ;
-(void)setSHK_completionBlock:(id)arg1 ;
-(void)setSHK_preparationBlock:(id)arg1 ;
-(CALayer *)SHK_targetLayer;
-(void)SHK_animate;
-(void)SHK_setInternalDelegate;
-(id)SHK_preparationBlock;
-(id)SHK_completionBlock;
-(void)SHK_startAfter:(id)arg1 ;
-(void)SHK_startWith:(id)arg1 ;
-(void)SHK_setSubEffects:(id)arg1 ;
-(void)SHK_synchronizeSubEffects;
-(id)SHK_parentNode;
-(id)SHK_constrainedToStartWithNode;
-(id)SHK_constrainedToSubEffectNode;
-(id)SHK_startWithList;
-(id)SHK_subEffectList;
-(id)SHK_startAfterList;
-(void)setSHK_constrainedToStartWithNode:(id)arg1 ;
-(void)setSHK_constrainedToSubEffectNode:(id)arg1 ;
-(void)setSHK_parentNode:(id)arg1 ;
-(void)_SHK_assertConstrainedToAMaxOf1Node;
-(id)SHK_allSiblingsWithMarkedSet:(id)arg1 ;
-(id)SHK_allSiblings;
-(void)_SHK_setParentNodes;
-(void)_SHK_assertPostParentSetNodeCorrectness;
-(void)_SHK_synchronizeSubEffects;
-(void)SHK_constrainAnimation:(id)arg1 toConstraintList:(id)arg2 ;
-(id)SHK_listForKey:(id)arg1 ;
-(void)setSHK_startWithList:(id)arg1 ;
-(void)setSHK_startAfterList:(id)arg1 ;
-(void)setSHK_subEffectList:(id)arg1 ;
-(void)SHK_cleanup;
-(long long)_mapkit_ID;
-(void)set_mapkit_ID:(long long)arg1 ;
-(void)setUsesSceneTimeBase:(char)arg1 ;
-(char)usesSceneTimeBase;
-(double)fadeInDuration;
-(void)setFadeInDuration:(double)arg1 ;
-(double)fadeOutDuration;
-(void)setFadeOutDuration:(double)arg1 ;
-(char)commitOnCompletion;
-(void)setCommitOnCompletion:(char)arg1 ;
-(void)NS_renameKeyPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)NS_addAffectedKeyPaths:(id)arg1 ;
-(double)NS_endTime;
-(void)NS_takeImpliedValuesFromPresentationObject:(id)arg1 modelObject:(id)arg2 ;
-(void)NS_transformValuesAtKeyPath:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)NS_renameKeyPath:(id)arg1 toKeyPath:(id)arg2 ;
-(id)NS_affectedKeyPaths;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)setRepeatDuration:(double)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(char)removedOnCompletion;
-(id)attributesForKeyPath:(id)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
-(double)frameInterval;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setSpeed:(float)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(float)speed;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(void)setFillMode:(NSString *)arg1 ;
-(double)timeOffset;
-(id)valueForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)delegate;
-(double)repeatDuration;
-(float)repeatCount;
-(double)beginTime;
-(char)autoreverses;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)setRemovedOnCompletion:(char)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(CAMediaTimingFunction *)timingFunction;
-(NSString *)beginTimeMode;
-(void)setBeginTimeMode:(NSString *)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(char)isRemovedOnCompletion;
-(NSString *)fillMode;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(char)arg1 ;
@end
