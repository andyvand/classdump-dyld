/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class NSMapTable, NSArray;

@interface UIDynamicItemBehavior : UIDynamicBehavior {

	BOOL _useDefaultViewPropertiesApplier;
	BOOL _useCircularBoundingBox;
	struct {
		unsigned elasticityChanged : 1;
		unsigned frictionChanged : 1;
		unsigned densityChanged : 1;
		unsigned resistanceChanged : 1;
		unsigned angularResistanceChanged : 1;
		unsigned rotationEnabledChanged : 1;
		unsigned useDefaultViewPropertiesApplierChanged : 1;
	}  _stateFlags;
	NSMapTable* _cachedAngularVelocities;
	NSMapTable* _cachedLinearVelocities;
	BOOL _allowsRotation;
	float _elasticity;
	float _friction;
	float _density;
	float _resistance;
	float _angularResistance;

}

@property (nonatomic,readonly) NSArray * items; 
@property (assign,nonatomic) float elasticity;                     //@synthesize elasticity=_elasticity - In the implementation block
@property (assign,nonatomic) float friction;                       //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) float density;                        //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) float resistance;                     //@synthesize resistance=_resistance - In the implementation block
@property (assign,nonatomic) float angularResistance;              //@synthesize angularResistance=_angularResistance - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                  //@synthesize allowsRotation=_allowsRotation - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)_commonInit;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(float)elasticity;
-(float)friction;
-(void)setFriction:(float)arg1 ;
-(float)density;
-(float)resistance;
-(float)angularResistance;
-(BOOL)allowsRotation;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(void)_configureBody:(id)arg1 forView:(id)arg2 ;
-(void)_reevaluate:(unsigned)arg1 ;
-(BOOL)_useCircularBoundingBox;
-(void)_setUseCircularBoundingBox:(BOOL)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)setElasticity:(float)arg1 ;
-(void)setDensity:(float)arg1 ;
-(void)setResistance:(float)arg1 ;
-(void)setAngularResistance:(float)arg1 ;
-(void)addLinearVelocity:(CGPoint)arg1 forItem:(id)arg2 ;
-(CGPoint)linearVelocityForItem:(id)arg1 ;
-(void)_setPosition:(CGPoint)arg1 forItem:(id)arg2 ;
-(CGPoint)_positionForItem:(id)arg1 ;
-(void)_setAngle:(float)arg1 forItem:(id)arg2 ;
-(float)_angleForItem:(id)arg1 ;
-(void)addAngularVelocity:(float)arg1 forItem:(id)arg2 ;
-(float)angularVelocityForItem:(id)arg1 ;
-(float)_elasticityForItem:(id)arg1 ;
-(float)_frictionForItem:(id)arg1 ;
-(float)_densityForItem:(id)arg1 ;
-(float)_resistanceForItem:(id)arg1 ;
-(float)_angularResistanceForItem:(id)arg1 ;
-(float)_massForItem:(id)arg1 ;
-(BOOL)_rotationEnabledForItem:(id)arg1 ;
-(void)applyImpulse:(CGPoint)arg1 toItem:(id)arg2 ;
-(BOOL)useDefaultViewPropertiesApplier;
-(void)setUseDefaultViewPropertiesApplier:(BOOL)arg1 ;
@end
