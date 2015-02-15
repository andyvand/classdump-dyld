/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:33 PM Central European Standard Time
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

@class NSString, CAStateControllerTransition, CAMediaTimingFunction;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {

	void* _attr;
	unsigned _flags;

}

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
