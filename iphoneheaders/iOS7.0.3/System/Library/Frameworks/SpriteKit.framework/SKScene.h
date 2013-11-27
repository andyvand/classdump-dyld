/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKEffectNode.h>

@class NSMutableDictionary, SKPhysicsWorld, PKPhysicsWorld, UIColor, SKView;

@interface SKScene : SKEffectNode {

	double _lastUpdate;
	double _pausedTime;
	CGRect _visibleRect;
	int _scaleMode;
	NSMutableDictionary* _touchMap;
	CGRect _bounds;
	BOOL _isSetup;
	BOOL _usesExplicitUpdate;
	BOOL _usesExplicitRender;
	id _view;
	BOOL __needsUpdate;
	BOOL __needsRender;
	SKPhysicsWorld* _physicsWorld;
	PKPhysicsWorld* __pkPhysicsWorld;

}

@property (assign) BOOL _usesExplicitUpdate; 
@property (assign) BOOL _usesExplicitRender; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) int scaleMode;                                 //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (nonatomic,readonly) SKPhysicsWorld * physicsWorld;               //@synthesize physicsWorld=_physicsWorld - In the implementation block
@property (nonatomic,readonly) SKView * view; 
@property (assign) BOOL _needsUpdate;                                       //@synthesize _needsUpdate=__needsUpdate - In the implementation block
@property (assign) BOOL _needsRender;                                       //@synthesize _needsRender=__needsRender - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                            //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) CGSize visibleRectSize; 
@property (assign,nonatomic) CGPoint visibleRectCenter; 
@property (nonatomic,retain) PKPhysicsWorld * _pkPhysicsWorld;              //@synthesize _pkPhysicsWorld=__pkPhysicsWorld - In the implementation block
+(id)sceneWithContentsOfFile:(id)arg1 ;
+(id)sceneWithSize:(CGSize)arg1 ;
+(id)sceneWithContentsOfFile:(id)arg1 size:(CGSize)arg2 ;
-(int)scaleMode;
-(void)setScaleMode:(int)arg1 ;
-(id)physicsWorld;
-(void)set_pkPhysicsWorld:(id)arg1 ;
-(void)set_usesExplicitRender:(BOOL)arg1 ;
-(void)set_usesExplicitUpdate:(BOOL)arg1 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)didEvaluateActions;
-(void)didSimulatePhysics;
-(float)zRotation;
-(void)setZRotation:(float)arg1 ;
-(CGPoint)convertPointFromView:(CGPoint)arg1 ;
-(CGPoint)convertPointToView:(CGPoint)arg1 ;
-(void)setVisibleRectSize:(CGSize)arg1 ;
-(CGSize)visibleRectSize;
-(void)setVisibleRectCenter:(CGPoint)arg1 ;
-(CGPoint)visibleRectCenter;
-(void)_didMoveToView:(id)arg1 ;
-(void)willMoveFromView:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)set_needsUpdate:(BOOL)arg1 ;
-(BOOL)_needsRender;
-(void)set_needsRender:(BOOL)arg1 ;
-(id)_pkPhysicsWorld;
-(BOOL)_usesExplicitUpdate;
-(BOOL)_usesExplicitRender;
-(void)didContinueContact:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)_setNeedsRender;
-(CGSize)size;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)view;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(id)initWithSize:(CGSize)arg1 ;
-(CGPoint)anchorPoint;
-(void)setScale:(float)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGRect)visibleRect;
-(void)update:(double)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id).cxx_construct;
-(void)setZPosition:(float)arg1 ;
-(void)_update:(double)arg1 ;
-(void)setXScale:(float)arg1 ;
-(float)xScale;
-(float)yScale;
-(void)setYScale:(float)arg1 ;
-(void).cxx_destruct;
-(float)zPosition;
@end
