/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSRunLoop : NSObject {

	id _rl;
	id _dperf;
	id _perft;
	id _info;
	id _ports;
	void** _reserved[6];

}
+(id)_mapkit_networkIORunLoop;
+(void)set_mapkit_networkIORunLoop:(id)arg1 ;
+(char)_flushQueuedEventsAddingSource:(char)arg1 ;
+(void)flushQueuedEvents;
+(id)_new:(id)arg1 ;
+(id)mainRunLoop;
+(id)currentRunLoop;
-(void)_runUntilCondition:(/*^block*/id)arg1 ;
-(void)_runUntilCondition:(/*^block*/id)arg1 periodicAction:(/*^block*/id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)cancelPerformSelectorsWithTarget:(id)arg1 ;
-(void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned long long)arg4 modes:(id)arg5 ;
-(void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 ;
-(id)limitDateForMode:(id)arg1 ;
-(void)_portInvalidated:(id)arg1 ;
-(char)containsPort:(id)arg1 forMode:(id)arg2 ;
-(void)_enumerateInfoPairsWithBlock:(/*^block*/id)arg1 ;
-(char)_containsPort:(id)arg1 forMode:(id)arg2 ;
-(void)_addPort:(id)arg1 forMode:(id)arg2 ;
-(void)_removePort:(id)arg1 forMode:(id)arg2 ;
-(id)portsForMode:(id)arg1 ;
-(void)removeTimer:(id)arg1 forMode:(id)arg2 ;
-(id)timersForMode:(id)arg1 ;
-(char)containsTimer:(id)arg1 forMode:(id)arg2 ;
-(id)allModes;
-(void)_invalidateTimers;
-(void)_wakeup;
-(void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2 ;
-(char)runMode:(id)arg1 untilDate:(id)arg2 ;
-(char)runBeforeDate:(id)arg1 ;
-(void)configureAsServer;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)addTimer:(id)arg1 forMode:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)runMode:(id)arg1 beforeDate:(id)arg2 ;
-(CFRunLoopRef)getCFRunLoop;
-(id)currentMode;
-(void)run;
-(void)runUntilDate:(id)arg1 ;
-(void)addPort:(id)arg1 forMode:(id)arg2 ;
-(void)removePort:(id)arg1 forMode:(id)arg2 ;
@end

