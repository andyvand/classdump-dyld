/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface QCSCN_Transaction : NSObject
+(void)begin;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)commit;
+(void)flush;
+(void)setDisableActions:(char)arg1 ;
+(id)valueForKey:(id)arg1 ;
+(void)lock;
+(void)unlock;
+(char)disableActions;
+(double)animationDuration;
+(void)setAnimationDuration:(double)arg1 ;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(unsigned)currentState;
+(id)animationTimingFunction;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(/*^block*/id)completionBlock;
+(void)postCommandWithContext:(void*)arg1 object:(id)arg2 commandID:(unsigned long long)arg3 arguments:(void*)arg4 keyPath:(id)arg5 canCollapse:(char)arg6 applyFunction:(/*function pointer*/void*)arg7 ;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)propertyKeys;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(Class)typeForProperty:(id)arg1 ;
+(int)_baseTypeForProperty:(id)arg1 ;
+(void)enableImmediateMode:(char)arg1 ;
+(id)jsInstance;
-(void)begin;
-(void)commit;
-(void)flush;
-(void)setDisableActions:(char)arg1 ;
-(void)lock;
-(void)unlock;
-(char)disableActions;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(id)animationTimingFunction;
-(void)setAnimationTimingFunction:(id)arg1 ;
-(id)propertyKeys;
@end

