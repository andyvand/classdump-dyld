/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class CALayer, NSString, NSArray;

@interface CAMatchMoveAnimation : CAAnimation

@property (retain) CALayer * sourceLayer; 
@property (copy) NSString * keyPath; 
@property (assign) char targetsSuperlayer; 
@property (copy) NSArray * sourcePoints; 
@property (assign) char appliesX; 
@property (assign) char appliesY; 
@property (assign) char appliesScale; 
@property (assign) char appliesRotation; 
@property (getter=isAdditive) char additive; 
+(id)CA_attributes;
+(id)defaultValueForKey:(id)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(char)targetsSuperlayer;
-(char)appliesScale;
-(char)appliesRotation;
-(char)appliesX;
-(char)appliesY;
-(void)setTargetsSuperlayer:(char)arg1 ;
-(void)setAppliesX:(char)arg1 ;
-(void)setAppliesY:(char)arg1 ;
-(void)setAppliesScale:(char)arg1 ;
-(void)setAppliesRotation:(char)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSString *)keyPath;
-(CALayer *)sourceLayer;
-(NSArray *)sourcePoints;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(void)setSourcePoints:(NSArray *)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setAdditive:(char)arg1 ;
-(char)isAdditive;
@end
