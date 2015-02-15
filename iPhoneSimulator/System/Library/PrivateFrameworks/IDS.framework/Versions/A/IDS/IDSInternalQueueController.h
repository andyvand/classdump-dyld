/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@interface IDSInternalQueueController : NSObject {

	dispatch_queue_sRef _queue;

}
+(id)sharedInstance;
-(void)assertQueueIsCurrent;
-(void)assertQueueIsNotCurrent;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(dispatch_queue_sRef)queue;
@end

