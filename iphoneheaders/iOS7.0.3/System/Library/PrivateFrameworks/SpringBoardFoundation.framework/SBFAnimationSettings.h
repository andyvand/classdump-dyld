/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFAnimationCurveSettings.h>

@interface SBFAnimationSettings : SBFAnimationCurveSettings {

	int _animationType;
	float _mass;
	float _stiffness;
	float _damping;
	float _epsilon;
	double _delay;
	double _duration;
	double _calculatedDuration;

}

@property (assign,nonatomic) int animationType;                      //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) double delay;                           //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float mass;                             //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) float stiffness;                        //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) float damping;                          //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) float epsilon;                          //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) double calculatedDuration;              //@synthesize calculatedDuration=_calculatedDuration - In the implementation block
+(id)settingsControllerModule;
+(id)_moduleWithSectionTitle:(id)arg1 ;
+(id)_moduleWithSectionTitle:(id)arg1 delay:(BOOL)arg2 ;
-(int)animationType;
-(float)stiffness;
-(void)setStiffness:(float)arg1 ;
-(void)setDamping:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(double)delay;
-(float)damping;
-(void)setDefaultValues;
-(float)mass;
-(float)epsilon;
-(void)setAnimationType:(int)arg1 ;
-(void)setCalculatedDuration:(double)arg1 ;
-(void)setEpsilon:(float)arg1 ;
-(double)calculatedDuration;
@end
