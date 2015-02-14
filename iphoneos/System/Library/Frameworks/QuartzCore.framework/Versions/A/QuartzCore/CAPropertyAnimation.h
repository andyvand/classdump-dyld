/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString * keyPath; 
@property (getter=isAdditive) char additive; 
@property (getter=isCumulative) char cumulative; 
@property (retain) CAValueFunction * valueFunction; 
+(id)animationWithKeyPath:(id)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(char)isCumulative;
-(char)additive;
-(char)cumulative;
-(CAValueFunction *)valueFunction;
-(void)setValueFunction:(CAValueFunction *)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSString *)keyPath;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setAdditive:(char)arg1 ;
-(char)isAdditive;
-(void)setCumulative:(char)arg1 ;
@end

