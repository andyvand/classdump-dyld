/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface BU_TMFloatParameterController : NSObject {

	double _initialValue;
	double _targetValue;
	CAMediaTimingFunction* _mediaTimingFunction;
	double _startTime;
	double _targetTime;

}
+(id)parameterControllerWithInitialValue:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(double)duration;
-(double)initialValue;
-(double)interpolatedValueAtTime:(double)arg1 ;
-(void)setTargetValue:(double)arg1 atTime:(double)arg2 withDuration:(double)arg3 ;
-(void)_setInitialValue:(double)arg1 ;
-(double)targetValue;
@end

