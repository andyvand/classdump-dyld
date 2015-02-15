/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SyncManagerProtocol <NSObject>
@required
-(id)fetchObjectsWithLimits:(id)arg1;
-(void)insertWithoutTransaction:(id)arg1;
-(void)updateAllObjects:(id)arg1;
-(void)updateObjects:(id)arg1;
-(void)deleteObjectsWithUniqueIds:(id)arg1;
-(void)deleteObjectsWithLimits:(id)arg1;
-(double)timerIncoming;
-(double)timerOutgoing;
-(double)timerLifetime;
-(void)resetTimers;
-(id)fetchObjectWithUniqueId:(id)arg1;
-(void)deleteObjectWithUniqueId:(id)arg1;
-(void)deleteAllObjects;
-(id)fetchAllObjects;
-(void)insert:(id)arg1;

@end
