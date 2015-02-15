/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABSyncAgent;
#import <AddressBook/AddressBook-Structs.h>
@interface ABSourceSyncPeriodicTaskScheduler : NSObject {

	id<ABSyncAgent> _syncAgent;

}

@property (retain) id<ABSyncAgent> syncAgent;              //@synthesize syncAgent=_syncAgent - In the implementation block
-(id)machServiceName;
-(void)handleState:(long long)arg1 activity:(xpc_activity_sRef)arg2 ;
-(void)runWithActivity:(xpc_activity_sRef)arg1 ;
-(id<ABSyncAgent>)syncAgent;
-(void)checkInWithCentralizedTaskScheduling;
-(void)setSyncAgent:(id<ABSyncAgent>)arg1 ;
-(void)dealloc;
@end
