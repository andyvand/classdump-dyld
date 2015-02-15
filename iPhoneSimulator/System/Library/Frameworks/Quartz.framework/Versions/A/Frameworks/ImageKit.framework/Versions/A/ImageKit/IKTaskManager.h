/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface IKTaskManager : NSObject {

	NSMutableArray* _orderedTasks;
	NSMutableDictionary* _tasks;
	char _taskListDidChange;
	char _threadLaunched;
	char _taskAborted;
	char _needRestart;
	char _delegateLocked;
	int _currentProcessedTaskIndex;
	opaque_pthread_mutex_t _taskLoopMutex;
	char _taskLoopLocked;
	id _delegate;
	id _retainedObject;
	NSMutableDictionary* _asyncQueues;
	int _asyncCount;
	CFDictionaryRef _countOfOperationsPerQueues;

}
-(void)restartTasks;
-(int)currentTaskIndex;
-(void)startTasks;
-(void)setRetainedObject:(id)arg1 ;
-(void)stopCurrentTask;
-(void)postNotificationNamed:(id)arg1 ;
-(void)lockDelegate;
-(void)unlockDelegate;
-(id)_shouldStartTaskNamed:(id)arg1 ;
-(void)taskLoop;
-(void)abortCurrentTask;
-(id)currentTask;
-(id)operationQueueWithIdentifier:(id)arg1 createsIfNeeded:(char)arg2 ;
-(int)activeOperationCountInQueue:(id)arg1 ;
-(void)_cancelOperations:(id)arg1 ;
-(void)incrOperationCountInQueue:(id)arg1 ;
-(void)registerTaskName:(id)arg1 withTaskDescriptor:(id)arg2 taskOrder:(int)arg3 ;
-(id)objectForTask:(id)arg1 forKey:(id)arg2 ;
-(void)freezeTasks;
-(float)currentTaskProgress;
-(void)unregisterTaskAtIndex:(int)arg1 ;
-(char)isAsynchronousTaskWithIdentifierRunning:(id)arg1 ;
-(void)decrOperationCountInQueue:(id)arg1 ;
-(char)runAsynchronousTasksWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(void)addAsynchronousTaskOnTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 taskIdentifier:(id)arg4 cancelSelector:(SEL)arg5 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)delegate;
@end

