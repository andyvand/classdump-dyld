/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
@class NSString;

@interface SUReachabilityMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	dispatch_queue_sRef _notifyQueue;
	NSString* _hostName;
	NSString* _directHostName;
	char _observing;
	/*^block*/id _notifyBlock;

}
+(char)waitForNetworkAvailabilityWithTimeout:(long long)arg1 forHost:(id)arg2 ;
+(id)_directHostToCheckConsideringProxy:(id)arg1 ;
+(char)_isHostReachableWithFlags:(unsigned)arg1 ;
+(char)isHostReachable:(id)arg1 ;
-(id)initWithHostName:(id)arg1 notifyQueue:(dispatch_queue_sRef)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)isHostReachable;
-(char)_startListeningForReachabilityChanges;
-(void)_stopListeningForReachabilityChanges;
-(void)_handleChangeInReachability:(unsigned)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)stop;
-(void)start;
@end

