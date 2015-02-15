/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCIndexPort, QCInterpolationPort;

@interface QCInterpolation : QCPatch {

	QCNumberPort* inputValue1;
	QCNumberPort* inputValue2;
	QCNumberPort* inputDuration;
	QCNumberPort* inputTension;
	QCIndexPort* inputRepeat;
	QCNumberPort* outputValue;
	char _compatibilityMode;
	QCInterpolationPort* _interpolationPort;
	unsigned long long _pointCount;
	unsigned long long _pointMax;
	double* _pointTimeBuffer;
	double* _pointValueBuffer;
	_Spline* _splineRef;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(id)serializedStateKeysWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)timeModeWithIdentifier:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)_finalize_QCInterpolation;
-(void)_updateSpline;
-(void)setCustomInterpolation:(char)arg1 ;
-(char)setControlPoint:(unsigned long long)arg1 time:(double)arg2 value:(double)arg3 ;
-(unsigned long long)addControlPointAtTime:(double)arg1 withValue:(double)arg2 ;
-(double)valueAtTime:(double)arg1 ;
-(char)customInterpolation;
-(unsigned long long)controlPointsCount;
-(double)timeForControlPoint:(unsigned long long)arg1 ;
-(double)valueForControlPoint:(unsigned long long)arg1 ;
-(void)removeControlPoint:(unsigned long long)arg1 ;
-(long long)nearestControlPointAtTime:(double)arg1 andValue:(double)arg2 withTolerance:(double)arg3 ;
@end

