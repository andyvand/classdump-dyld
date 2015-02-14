/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class CLTilesManagerClientInternal;

@interface CLTilesManagerClient : NSObject {

	CLTilesManagerClientInternal* _internal;

}
+(id)sharedClient;
+(void)initialize;
-(void)onNotificationReceived:(void*)arg1 ;
-(void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(char)arg2 ;
-(char)executeAsynchronousQuery:(id)arg1 onQueue:(dispatch_queue_sRef)arg2 responseBlock:(/*^block*/id)arg3 ;
-(char)precacheHint:(id)arg1 onQueue:(dispatch_queue_sRef)arg2 responseBlock:(/*^block*/id)arg3 ;
-(char)registerTo:(id)arg1 onQueue:(dispatch_queue_sRef)arg2 block:(/*^block*/id)arg3 ;
-(char)unregisterFrom:(id)arg1 ;
-(void)reconnect;
-(id)init;
-(void)dealloc;
@end

