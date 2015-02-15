/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABehavior.h>

@class NSArray;

@interface CADynamicsBehavior : CABehavior

@property (copy) NSArray * springs; 
@property (copy) NSArray * forceFields; 
@property (assign) double timeStep; 
@property (assign) double minimumTimeStep; 
@property (assign) double stoppedVelocity; 
@property (assign) double stoppedAngularVelocity; 
@property (assign) double springScale; 
@property (assign) double drag; 
@property (assign) double angularDrag; 
@property (assign) char reactsToCollisions; 
@property (assign) double collisionInterval; 
+(id)CA_attributes;
+(id)defaultValueForKey:(id)arg1 ;
-(NSArray *)springs;
-(NSArray *)forceFields;
-(double)timeStep;
-(double)minimumTimeStep;
-(double)stoppedVelocity;
-(double)stoppedAngularVelocity;
-(double)collisionInterval;
-(double)springScale;
-(double)drag;
-(double)angularDrag;
-(char)reactsToCollisions;
-(void)setSprings:(NSArray *)arg1 ;
-(void)setForceFields:(NSArray *)arg1 ;
-(void)setTimeStep:(double)arg1 ;
-(void)setMinimumTimeStep:(double)arg1 ;
-(void)setStoppedVelocity:(double)arg1 ;
-(void)setStoppedAngularVelocity:(double)arg1 ;
-(void)setCollisionInterval:(double)arg1 ;
-(void)setSpringScale:(double)arg1 ;
-(void)setDrag:(double)arg1 ;
-(void)setAngularDrag:(double)arg1 ;
-(void)setReactsToCollisions:(char)arg1 ;
-(Object*)CA_copyRenderValue;
@end
