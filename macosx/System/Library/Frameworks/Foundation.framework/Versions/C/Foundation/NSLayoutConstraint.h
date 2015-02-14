/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSISConstraint.h>

@class NSString;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {

	id _container;
	id _firstItem;
	id _secondItem;
	double _constant;
	double _loweredConstant;
	id _markerAndPositiveExtraVar;
	id _negativeExtraVar;
	unsigned long long _layoutConstraintFlags;
	float _coefficient;
	float _priority;

}

@property (assign) float priority; 
@property (assign) char shouldBeArchived; 
@property (assign) id firstItem;                                                                                                                     //@synthesize firstItem=_firstItem - In the implementation block
@property (assign) long long firstAttribute; 
@property (assign) long long relation; 
@property (assign) id secondItem;                                                                                                                    //@synthesize secondItem=_secondItem - In the implementation block
@property (assign) long long secondAttribute; 
@property (assign) double multiplier; 
@property (assign) double constant; 
@property (getter=isActive) char active; 
@property (copy) NSString * identifier; 
@property (readonly) char hasBeenLowered; 
@property (assign) id container; 
@property (copy) NSString * symbolicConstant; 
@property (assign,setter=_setLoweredConstantNeedsUpdate:,getter=_loweredConstantNeedsUpdate,nonatomic) char loweredConstantNeedsUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8 ;
+(id)safari_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 ;
+(id)safari_constraintMatchingAttribute:(long long)arg1 ofView:(id)arg2 andView:(id)arg3 constant:(double)arg4 ;
+(id)safari_constraintMatchingAttribute:(long long)arg1 ofView:(id)arg2 andView:(id)arg3 ;
+(id)safari_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 edgeInsets:(NSEdgeInsets)arg3 ;
+(id)safari_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8 ;
+(id)safari_constraintMatchingAttribute:(long long)arg1 ofView:(id)arg2 andView:(id)arg3 multiplier:(double)arg4 constant:(double)arg5 priority:(float)arg6 ;
+(id)safari_minimizingConstraintWithItem:(id)arg1 attribute:(long long)arg2 ;
+(id)safari_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 edgeInsets:(NSEdgeInsets)arg3 priority:(float)arg4 ;
+(id)defaultAnimationForKey:(id)arg1 ;
+(void)activateConstraints:(id)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 ;
+(id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2 ;
+(void)_addOrRemoveConstraints:(id)arg1 activate:(char)arg2 ;
+(void)_setLegacyDecodingOnly:(char)arg1 ;
+(void)deactivateConstraints:(id)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 ;
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6 ;
-(void)safari_setConstant:(double)arg1 animated:(char)arg2 ;
-(void)tk_removeFromContainer;
-(char)_isPrototypingConstraint;
-(id)animationForKey:(id)arg1 ;
-(id)animator;
-(int)_orientation;
-(CGPoint)_visualCenterInWindowSpace;
-(long long)_geometricCompare:(id)arg1 ;
-(char)defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3 ;
-(id)_identifier;
-(double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1 ;
-(char)hasBeenLowered;
-(id)_constantDescriptionForDTrace;
-(double)_allowedMagnitudeForIntegralizationAdjustment;
-(CGSize)_engineToContainerScalingCoefficients;
-(void)setHasBeenLowered:(char)arg1 ;
-(char)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(char*)arg2 ;
-(char)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(double)arg3 lastLoweredConstantWasRounded:(char)arg4 mutuallyExclusiveConstraints:(id*)arg5 ;
-(double)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(double*)arg1 ;
-(id)_symbolicConstant;
-(void)_ensureValueMaintainsArbitraryLimit:(double*)arg1 ;
-(void)_setSymbolicConstant:(id)arg1 ;
-(char)_tryToChangeContainerGeometryWithUndoHandler:(/*^block*/id)arg1 ;
-(char)_effectiveConstant:(double*)arg1 error:(id*)arg2 ;
-(void)_setSymbolicConstant:(id)arg1 constant:(double)arg2 ;
-(id)_descriptionforSymbolicConstant;
-(id)descriptionAccessory;
-(id)asciiArtDescription;
-(id)equationDescription;
-(id)_priorityDescription;
-(double)priorityForVariable:(id)arg1 ;
-(void)_makeExtraVars;
-(char)_nsib_isRedundantInEngine:(id)arg1 ;
-(void)_setFirstItem:(id)arg1 ;
-(void)_setFirstAttribute:(long long)arg1 ;
-(void)_setRelation:(long long)arg1 ;
-(void)_setMultiplier:(double)arg1 ;
-(void)_setSecondItem:(id)arg1 ;
-(void)_setSecondAttribute:(long long)arg1 ;
-(void)setSymbolicConstant:(NSString *)arg1 ;
-(void)_setLoweredConstantNeedsUpdate:(char)arg1 ;
-(char)_loweredConstantNeedsUpdate;
-(char)_isIBPrototypingLayoutConstraint;
-(char)_isFudgeable;
-(double)_fudgeIncrement;
-(void)_setMarkerAndPositiveErrorVar:(id)arg1 ;
-(id)_negativeExtraVar;
-(void)_setNegativeExtraVar:(id)arg1 ;
-(char)_deferDTraceLogging;
-(void)_setDeferDTraceLogging:(char)arg1 ;
-(int)_primitiveConstraintType;
-(void)_setPrimitiveConstraintType:(int)arg1 ;
-(NSString *)symbolicConstant;
-(id)_constraintByReplacingView:(id)arg1 withView:(id)arg2 ;
-(char)_describesSameRestrictionAsConstraint:(id)arg1 ;
-(id)_loweredExpression;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isActive;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPriority:(float)arg1 ;
-(id)animations;
-(void)setShouldBeArchived:(char)arg1 ;
-(id)_layoutEngine;
-(void)setConstant:(double)arg1 ;
-(void)setActive:(char)arg1 ;
-(double)constant;
-(id)firstItem;
-(long long)firstAttribute;
-(id)secondItem;
-(long long)secondAttribute;
-(long long)relation;
-(float)priority;
-(void)setAnimations:(id)arg1 ;
-(void)_setIdentifier:(id)arg1 ;
-(void)_addToEngine:(id)arg1 ;
-(char)shouldBeArchived;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(char)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(char)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(void)_containerGeometryDidChange;
-(void)_clearWeakContainerReference;
-(int)_constraintType;
-(id)container;
-(id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2 ;
-(void)_removeFromEngine:(id)arg1 ;
-(void)setContainer:(id)arg1 ;
-(char)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3 ;
-(char)_loweredConstantIsRounded;
-(id)_markerAndPositiveExtraVar;
-(char)_nsib_isRedundant;
-(double)multiplier;
@end

