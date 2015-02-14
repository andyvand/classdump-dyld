/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class _IDSIDQueryController;

@interface IDSIDQueryController : NSObject {

	_IDSIDQueryController* _internal;

}
+(id)sharedInstance;
-(void)__imQueryIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)__imBlockingCurrrentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 ;
-(void)__imQueryKnownIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)__imQueryIDStatusForHandles:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)__imQueryIDStatusForPerson:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)__imQueryKnownIDStatusForHandles:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)__imQueryKnownIDStatusForPerson:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addListenerID:(id)arg1 forService:(id)arg2 ;
-(char)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3 ;
-(long long)_refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(id)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(long long)_currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(char)requestIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)requestIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 ;
-(void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 ;
-(char)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)_warmupQueryCacheForService:(id)arg1 ;
-(char)_flushQueryCacheForService:(id)arg1 ;
-(char)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(char)_hasCacheForService:(id)arg1 ;
-(long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(char)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)init;
-(void)dealloc;
@end

