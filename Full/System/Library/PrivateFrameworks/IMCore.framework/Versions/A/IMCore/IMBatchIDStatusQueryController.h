/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSTimer, NSDate;

@interface IMBatchIDStatusQueryController : NSObject {

	NSMutableArray* _imHandles;
	NSMutableArray* _imHandlesQueried;
	NSTimer* _nextQueryTimer;
	NSDate* _timeOfDeath;
	int _numberOfQueriesDone;
	char _isDead;

}
-(void)_invalidateNextQueryTimer;
-(void)_nextQuery:(id)arg1 ;
-(void)_scheduleNextQuery:(double)arg1 ;
-(void)setIMHandles:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end

