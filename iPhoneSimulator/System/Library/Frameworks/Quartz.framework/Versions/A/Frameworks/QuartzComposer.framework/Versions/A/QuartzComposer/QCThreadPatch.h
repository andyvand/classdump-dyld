/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@interface QCThreadPatch : QCPatch {

	opaque_pthread_mutex_t _parameterMutex;
	id _result;
	id _argument;
	SEL _threadSelector;
	opaque_pthread_mutex_t _threadMutex;
	opaque_pthread_cond_t _threadCondition;
	char _threadRunning;
	void** _unused4[4];

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_finalize_QCThreadPatch;
-(void)_thread:(id)arg1 ;
-(char)runThreadWithSelector:(SEL)arg1 argument:(id)arg2 ;
-(char)isThreadRunning;
-(void)waitUntilThreadDone;
-(void)setThreadResult:(id)arg1 ;
-(id)getThreadResult;
-(void)setThreadArgument:(id)arg1 ;
-(id)getThreadArgument;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end

