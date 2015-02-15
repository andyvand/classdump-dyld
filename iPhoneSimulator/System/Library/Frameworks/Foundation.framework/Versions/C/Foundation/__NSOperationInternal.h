/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSOperation, NSOperationQueue;

@interface __NSOperationInternal : NSObject {

	unsigned char __pad1[8];
	NSOperation* __outerOp;
	NSOperation* __prevOp;
	NSOperation* __nextOp;
	NSOperation* __nextPriOp;
	NSOperationQueue* __queue;
	id __dependencies;
	id __down_dependencies;
	long long __unfinished_deps;
	/*^block*/id __completion;
	void* __obsInfo;
	void* __implicitObsInfo;
	long long __seqno;
	double __thread_prio;
	id __children;
	int __RC;
	int __state;
	char __prio;
	unsigned char __cached_isReady;
	unsigned char __isCancelled;
	unsigned char __isBarrier;
	int __qoses;
	opaque_pthread_mutex_t __wait_mutex;
	opaque_pthread_cond_t __wait_cond;
	opaque_pthread_t* __pthread;
	char* __nameBuffer;
	id __activity;
	pthread_override_sRef __ov;
	unsigned char __pad3[0];

}
+(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7 ;
-(void)_cancel:(id)arg1 ;
-(id)_activity;
-(long long)_queuePriority;
-(id)init:(id)arg1 ;
-(char)_isCancelled;
-(char)_isExecuting;
-(char)_isFinished;
-(char)_isReady;
-(void)_setQueuePriority:(long long)arg1 outer:(id)arg2 ;
-(double)_threadPriority;
-(void)_setThreadPriority:(double)arg1 outer:(id)arg2 ;
-(/*^block*/id)_completionBlock;
-(void)_setCompletionBlock:(/*^block*/id)arg1 outer:(id)arg2 ;
-(void)_setName:(id)arg1 outer:(id)arg2 ;
-(void)_waitUntilFinished:(id)arg1 ;
-(void)_waitUntilFinishedOrTimeout:(double)arg1 outer:(id)arg2 ;
-(void)_addDependency:(id)arg1 outer:(id)arg2 ;
-(void)_removeDependency:(id)arg1 outer:(id)arg2 ;
-(id)_dependencies;
-(void)_start:(id)arg1 ;
-(id)__;
-(void)finalize;
-(void)dealloc;
-(id)_name;
-(void)_invalidate;
@end

