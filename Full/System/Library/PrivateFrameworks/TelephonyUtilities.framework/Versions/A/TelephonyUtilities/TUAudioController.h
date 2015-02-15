/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_group;
@class NSObject;

@interface TUAudioController : NSObject {

	NSObject*<OS_dispatch_semaphore> _modifyingStateLock;
	NSObject*<OS_dispatch_group> _outstandingRequestsGroup;

}
-(void)_acquireLock;
-(void)_requestUpdatedValueWithBlock:(/*^block*/id)arg1 object:(id*)arg2 isRequestingPointer:(char*)arg3 forceNewRequest:(char)arg4 scheduleTimePointer:(unsigned long long*)arg5 notificationString:(id)arg6 queue:(id)arg7 ;
-(void)_releaseLock;
-(void)blockUntilOutstandingRequestsComplete;
-(void)_enterOutstandingRequestsGroup;
-(void)_leaveOutstandingRequestsGroup;
-(id)init;
-(void)dealloc;
@end

