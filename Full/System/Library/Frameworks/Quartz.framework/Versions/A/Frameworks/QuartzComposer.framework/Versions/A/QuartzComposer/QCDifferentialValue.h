/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCBooleanPort;

@interface QCDifferentialValue : QCPatch {

	QCNumberPort* inputValue;
	QCBooleanPort* inputResetSignal;
	QCNumberPort* outputValue;
	char _lastResetSignal;
	char _integrate;
	double _lastTime;
	double _lastValue;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)timeModeWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end

