/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCNumberPort;

@interface QCRandom : QCPatch {

	QCNumberPort* inputMin;
	QCNumberPort* inputMax;
	QCNumberPort* outputValue;
	double _variability;
	char _usePerlinNoise;
	double _lastTime;
	double _lastSampleTime;
	char* _perm;
	double* _grad;
	long long _seed;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)timeModeWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(double)_noise2d:(double)arg1 y:(double)arg2 min:(double)arg3 max:(double)arg4 ;
@end

