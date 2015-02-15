/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSCountedSet, NSManagedObjectID;

@interface CalDAVOperationQueue : NSObject {

	char _stopped;
	char _needsAccountPropertyRefresh;
	NSMutableArray* _operations;
	NSMutableArray* _failedOperations;
	NSCountedSet* _entityCountedSet;
	NSManagedObjectID* _sessionID;

}
-(char)isBusy;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)description;
-(void)removeAllOperations;
-(id)initWithSessionID:(id)arg1 ;
-(id)peek;
-(id)nextOperationNotCurrentlyRunning;
-(char)isStalled;
-(char)isStopped;
-(void)insertOperation:(id)arg1 ;
-(void)enqueueOperation:(id)arg1 ;
-(id)allOperations;
-(void)kick;
-(char)isPendingRetry;
-(id)operations;
-(id)failedOperations;
-(void)removeOperation:(id)arg1 ;
-(void)beginNextOperation;
-(void)_addBackFailedOperations;
-(void)_addOperationToCountedSet:(id)arg1 ;
-(void)flattenOperationDependencies;
-(id)threadSafeQueueDescription;
-(id)_operationAtIndex:(unsigned long long)arg1 ;
-(void)_removeOperationToCountedSet:(id)arg1 ;
-(void)removeOperation:(id)arg1 removeEntities:(char)arg2 ;
-(void)dequeueOperation:(id)arg1 ;
-(void)detectSyncMalfunctions;
-(void)removeDependentOperationsFromQueue:(id)arg1 ;
-(void)removeFromQueue:(id)arg1 ;
-(void)setNeedsAccountPropertyRefresh:(char)arg1 ;
-(void)reorderFailedOperation:(id)arg1 ;
-(void)completeOperation:(id)arg1 ;
-(void)tryOperationAgain:(id)arg1 ;
-(void)removeAndRevertOperation:(id)arg1 ;
-(void)removeOperationAndRefresh:(id)arg1 ;
-(char)needsAccountPropertyRefresh;
-(void)transferDependencyGraphOfOperation:(id)arg1 toOperation:(id)arg2 ;
-(char)hasPendingOperationFor:(id)arg1 ;
@end

