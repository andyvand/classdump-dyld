/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol OS_dispatch_source;
@class IMAPClientDoneOperation, IMAPClientSelectOperation, IMAPClientSuspendOperation, NSRecursiveLock, NSObject, IMAPGateway, NSString, MCActivityMonitor;

@interface IMAPClientOperationQueue : NSOperationQueue {

	IMAPClientDoneOperation* _doneOperation;
	IMAPClientSelectOperation* _selectOperation;
	IMAPClientSuspendOperation* _suspendOperation;
	NSRecursiveLock* _activityMonitorLock;
	NSObject*<OS_dispatch_source> _activityFinishTimer;
	char _activityMonitorIsActive;
	NSRecursiveLock* _addOperationLock;
	IMAPGateway* _gateway;
	NSString* _activityName;
	MCActivityMonitor* _activityMonitor;

}

@property (retain) IMAPClientDoneOperation * doneOperation; 
@property (retain) IMAPClientSelectOperation * selectOperation; 
@property (retain) IMAPClientSuspendOperation * suspendOperation; 
@property (nonatomic,retain) NSRecursiveLock * addOperationLock;               //@synthesize addOperationLock=_addOperationLock - In the implementation block
@property (copy) NSString * activityName;                                      //@synthesize activityName=_activityName - In the implementation block
@property (readonly) MCActivityMonitor * activityMonitor;                      //@synthesize activityMonitor=_activityMonitor - In the implementation block
@property (retain) IMAPGateway * gateway;                                      //@synthesize gateway=_gateway - In the implementation block
-(char)isIdle;
-(IMAPGateway *)gateway;
-(void)setGateway:(IMAPGateway *)arg1 ;
-(MCActivityMonitor *)activityMonitor;
-(void)refreshIdle;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setAddOperationLock:(NSRecursiveLock *)arg1 ;
-(NSString *)activityName;
-(void)_clearActivityFinishTimer;
-(void)_postDelayedActivityFinished;
-(IMAPClientSelectOperation *)selectOperation;
-(void)changeSelectDependenciesTo:(id)arg1 ;
-(IMAPClientDoneOperation *)doneOperation;
-(void)setDoneOperation:(IMAPClientDoneOperation *)arg1 ;
-(IMAPClientSuspendOperation *)suspendOperation;
-(void)setSuspendOperation:(IMAPClientSuspendOperation *)arg1 ;
-(void)setSelectOperation:(IMAPClientSelectOperation *)arg1 ;
-(char)addClientOperation:(id)arg1 outUpdatedOperation:(id*)arg2 ;
-(void)_setupDependeciesOnDone;
-(char)waitUntilOperationIsFinished:(id)arg1 ;
-(id)selectedMailboxName;
-(void)activityDidStart:(id)arg1 ;
-(void)activityDidFinish:(id)arg1 ;
-(id)newSelectOperationForResumingIfNeeded;
-(void)setDoneToReady;
-(char)refreshDoneWithGateway:(id)arg1 operation:(id)arg2 ;
-(void)clearDoneWithOperation:(id)arg1 ;
-(char)shouldAllowIdleToExecute:(id)arg1 ;
-(char)setupDependenciesOnSuspendCreatingIfNeeded;
-(void)suspendIfNeededAndClear:(char)arg1 ;
-(void)finishIdling;
-(NSRecursiveLock *)addOperationLock;
-(void)setActivityName:(NSString *)arg1 ;
@end
