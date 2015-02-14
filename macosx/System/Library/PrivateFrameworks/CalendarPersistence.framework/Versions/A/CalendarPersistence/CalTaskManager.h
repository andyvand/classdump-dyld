/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalExecutableTask;
@class NSMutableSet, NSMutableArray, NSRunLoop;

@interface CalTaskManager : NSObject {

	NSMutableSet* _independentTasks;
	NSMutableSet* _heldIndependentTasks;
	NSMutableSet* _modalHeldIndependentTasks;
	NSMutableArray* _queuedTasks;
	id<CalExecutableTask> _activeQueuedTask;
	id<CalExecutableTask> _modalHeldActiveQueuedTask;
	NSMutableArray* _queuedModalTasks;
	id<CalExecutableTask> _activeModalTask;
	int _state;
	NSRunLoop* _workRunLoop;

}

@property (retain) NSRunLoop * workRunLoop;              //@synthesize workRunLoop=_workRunLoop - In the implementation block
-(id)init;
-(void)dealloc;
-(void)shutdown;
-(void)setWorkRunLoop:(NSRunLoop *)arg1 ;
-(id)stateString;
-(void)_schedulePerformTask:(id)arg1 ;
-(void)submitQueuedTask:(id)arg1 toFrontOfQueue:(char)arg2 ;
-(id)allTasks;
-(void)_reactivateHeldTasks;
-(void)_scheduleStartModal:(id)arg1 ;
-(void)_makeStateTransition;
-(void)_performTask:(id)arg1 ;
-(void)_startModal:(id)arg1 ;
-(void)submitIndependentTask:(id)arg1 ;
-(void)submitQueuedTask:(id)arg1 ;
-(void)taskDidFinish:(id)arg1 ;
-(void)taskRequestModal:(id)arg1 ;
-(void)taskEndModal:(id)arg1 ;
-(NSRunLoop *)workRunLoop;
@end

