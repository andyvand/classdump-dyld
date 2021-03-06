/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAEmitterLayer : CALayer

@property (assign) CGPathRef emitterPath; 
@property (assign) float emitterDuration; 
@property (assign) float spinBias; 
@property (copy) NSArray * emitterBehaviors; 
@property (assign) CGRect cullRect; 
@property (assign) double cullMinZ; 
@property (assign) double cullMaxZ; 
@property (copy) NSArray * emitterCells; 
@property (assign) float birthRate; 
@property (assign) float lifetime; 
@property (assign) CGPoint emitterPosition; 
@property (assign) double emitterZPosition; 
@property (assign) CGSize emitterSize; 
@property (assign) double emitterDepth; 
@property (copy) NSString * emitterShape; 
@property (copy) NSString * emitterMode; 
@property (copy) NSString * renderMode; 
@property (assign) char preservesDepth; 
@property (assign) float velocity; 
@property (assign) float scale; 
@property (assign) float spin; 
@property (assign) unsigned seed; 
+(id)CA_attributes;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
+(char)_shouldFinalizeOnMainThread;
+(id)defaultValueForKey:(id)arg1 ;
-(NSString *)renderMode;
-(void)setRenderMode:(NSString *)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(float)birthRate;
-(float)lifetime;
-(float)spin;
-(NSArray *)emitterCells;
-(NSArray *)emitterBehaviors;
-(void)setBirthRate:(float)arg1 ;
-(void)setLifetime:(float)arg1 ;
-(void)setSpin:(float)arg1 ;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(void)setEmitterBehaviors:(NSArray *)arg1 ;
-(float)emitterDuration;
-(CGPoint)emitterPosition;
-(double)emitterZPosition;
-(CGSize)emitterSize;
-(double)emitterDepth;
-(float)spinBias;
-(CGRect)cullRect;
-(double)cullMinZ;
-(double)cullMaxZ;
-(CGPathRef)emitterPath;
-(NSString *)emitterShape;
-(NSString *)emitterMode;
-(char)preservesDepth;
-(unsigned)seed;
-(void)setEmitterShape:(NSString *)arg1 ;
-(void)setEmitterMode:(NSString *)arg1 ;
-(void)setEmitterPosition:(CGPoint)arg1 ;
-(void)setEmitterZPosition:(double)arg1 ;
-(void)setEmitterSize:(CGSize)arg1 ;
-(void)setEmitterDepth:(double)arg1 ;
-(void)setPreservesDepth:(char)arg1 ;
-(void)setSeed:(unsigned)arg1 ;
-(void)setEmitterPath:(CGPathRef)arg1 ;
-(void)setEmitterDuration:(float)arg1 ;
-(void)setSpinBias:(float)arg1 ;
-(void)setCullRect:(CGRect)arg1 ;
-(void)setCullMinZ:(double)arg1 ;
-(void)setCullMaxZ:(double)arg1 ;
-(float)scale;
-(void)didChangeValueForKey:(id)arg1 ;
-(float)velocity;
-(void)reloadValueForKeyPath:(id)arg1 ;
-(void)setScale:(float)arg1 ;
-(void)setVelocity:(float)arg1 ;
@end

