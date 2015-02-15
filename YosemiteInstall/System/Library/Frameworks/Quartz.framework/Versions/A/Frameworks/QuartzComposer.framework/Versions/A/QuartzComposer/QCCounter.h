/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCBooleanPort, QCIndexPort, QCArray;

@interface QCCounter : QCPatch {

	QCBooleanPort* inputSignal;
	QCBooleanPort* inputSignalDown;
	QCBooleanPort* inputSignalReset;
	QCIndexPort* outputCount;
	QCArray* _lastSignal;
	QCArray* _lastSignalDown;
	QCArray* _lastSignalReset;
	QCArray* _value;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)timeModeWithIdentifier:(id)arg1 ;
+(id)stateArrays;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(void)enable:(id)arg1 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end
