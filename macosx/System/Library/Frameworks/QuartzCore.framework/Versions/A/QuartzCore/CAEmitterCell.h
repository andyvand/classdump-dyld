/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCopying.h>
#import <QuartzCore/CAPropertyInfo.h>
#import <QuartzCore/NSCoding.h>
#import <QuartzCore/CAMediaTiming.h>

@class NSString, NSArray, NSDictionary;

@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSCoding, CAMediaTiming> {

	void** _attr[2];
	void* _state;
	unsigned _flags;

}

@property (copy) NSString * particleType; 
@property (assign) double orientationLatitude; 
@property (assign) double orientationLongitude; 
@property (assign) double orientationRange; 
@property (assign) double rotation; 
@property (assign) double rotationRange; 
@property (assign) float mass; 
@property (assign) float massRange; 
@property (assign) double contentsScale; 
@property (copy) NSString * contentsFrameMode; 
@property (assign) unsigned contentsFrameCount; 
@property (assign) unsigned contentsFramesPerRow; 
@property (assign) float contentsFramesPerSecond; 
@property (copy) NSArray * emitterBehaviors; 
@property (copy) NSString * name; 
@property (getter=isEnabled) char enabled; 
@property (assign) float birthRate; 
@property (assign) float lifetime; 
@property (assign) float lifetimeRange; 
@property (assign) double emissionLatitude; 
@property (assign) double emissionLongitude; 
@property (assign) double emissionRange; 
@property (assign) double velocity; 
@property (assign) double velocityRange; 
@property (assign) double xAcceleration; 
@property (assign) double yAcceleration; 
@property (assign) double zAcceleration; 
@property (assign) double scale; 
@property (assign) double scaleRange; 
@property (assign) double scaleSpeed; 
@property (assign) double spin; 
@property (assign) double spinRange; 
@property (assign) CGColorRef color; 
@property (assign) float redRange; 
@property (assign) float greenRange; 
@property (assign) float blueRange; 
@property (assign) float alphaRange; 
@property (assign) float redSpeed; 
@property (assign) float greenSpeed; 
@property (assign) float blueSpeed; 
@property (assign) float alphaSpeed; 
@property (retain) id contents; 
@property (assign) CGRect contentsRect; 
@property (copy) NSString * minificationFilter; 
@property (copy) NSString * magnificationFilter; 
@property (assign) float minificationFilterBias; 
@property (copy) NSArray * emitterCells; 
@property (copy) NSDictionary * style; 
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
+(id)attributesForKey:(id)arg1 ;
+(id)emitterCell;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)properties;
+(id)defaultValueForKey:(id)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setMinificationFilterBias:(float)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)setRepeatDuration:(double)arg1 ;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(id)attributesForKeyPath:(id)arg1 ;
-(NSString *)particleType;
-(float)birthRate;
-(float)lifetime;
-(float)lifetimeRange;
-(double)emissionLatitude;
-(double)emissionLongitude;
-(double)emissionRange;
-(double)velocityRange;
-(double)xAcceleration;
-(double)yAcceleration;
-(double)zAcceleration;
-(float)massRange;
-(double)scaleRange;
-(double)scaleSpeed;
-(double)orientationLatitude;
-(double)orientationLongitude;
-(double)orientationRange;
-(double)rotationRange;
-(double)spin;
-(double)spinRange;
-(float)redRange;
-(float)greenRange;
-(float)blueRange;
-(float)alphaRange;
-(float)redSpeed;
-(float)greenSpeed;
-(float)blueSpeed;
-(float)alphaSpeed;
-(float)minificationFilterBias;
-(unsigned)contentsFrameCount;
-(unsigned)contentsFramesPerRow;
-(float)contentsFramesPerSecond;
-(NSString *)contentsFrameMode;
-(NSArray *)emitterCells;
-(NSArray *)emitterBehaviors;
-(void)setBirthRate:(float)arg1 ;
-(void)setLifetime:(float)arg1 ;
-(void)setLifetimeRange:(float)arg1 ;
-(void)setEmissionLatitude:(double)arg1 ;
-(void)setEmissionLongitude:(double)arg1 ;
-(void)setEmissionRange:(double)arg1 ;
-(void)setVelocityRange:(double)arg1 ;
-(void)setXAcceleration:(double)arg1 ;
-(void)setYAcceleration:(double)arg1 ;
-(void)setZAcceleration:(double)arg1 ;
-(void)setScaleRange:(double)arg1 ;
-(void)setScaleSpeed:(double)arg1 ;
-(void)setOrientationLatitude:(double)arg1 ;
-(void)setOrientationLongitude:(double)arg1 ;
-(void)setOrientationRange:(double)arg1 ;
-(void)setRotationRange:(double)arg1 ;
-(void)setSpin:(double)arg1 ;
-(void)setSpinRange:(double)arg1 ;
-(void)setRedRange:(float)arg1 ;
-(void)setRedSpeed:(float)arg1 ;
-(void)setGreenRange:(float)arg1 ;
-(void)setGreenSpeed:(float)arg1 ;
-(void)setBlueRange:(float)arg1 ;
-(void)setBlueSpeed:(float)arg1 ;
-(void)setAlphaRange:(float)arg1 ;
-(void)setAlphaSpeed:(float)arg1 ;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(void)setParticleType:(NSString *)arg1 ;
-(void)setMassRange:(float)arg1 ;
-(void)setEmitterBehaviors:(NSArray *)arg1 ;
-(void)setContentsFrameMode:(NSString *)arg1 ;
-(void)setContentsFrameCount:(unsigned)arg1 ;
-(void)setContentsFramesPerRow:(unsigned)arg1 ;
-(void)setContentsFramesPerSecond:(float)arg1 ;
-(double)scale;
-(CGRect)contentsRect;
-(void)setContentsScale:(double)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(double)contentsScale;
-(void)setSpeed:(float)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(float)speed;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(void)setFillMode:(NSString *)arg1 ;
-(id)contents;
-(double)timeOffset;
-(id)valueForKey:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSDictionary *)style;
-(NSString *)name;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)repeatDuration;
-(float)repeatCount;
-(double)beginTime;
-(char)autoreverses;
-(void)didChangeValueForKey:(id)arg1 ;
-(double)velocity;
-(void)setColor:(CGColorRef)arg1 ;
-(CGColorRef)color;
-(double)rotation;
-(Object*)CA_copyRenderValue;
-(void)setStyle:(NSDictionary *)arg1 ;
-(void)setRotation:(double)arg1 ;
-(void)setMass:(float)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)fillMode;
-(float)mass;
-(void)setVelocity:(double)arg1 ;
-(NSString *)minificationFilter;
-(void)setMinificationFilter:(NSString *)arg1 ;
-(NSString *)magnificationFilter;
-(void)setMagnificationFilter:(NSString *)arg1 ;
-(void)CA_prepareRenderValue;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(char)arg1 ;
@end

