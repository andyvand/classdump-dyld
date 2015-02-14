/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDS-Structs.h>
#import <IDS/IDSDaemonListenerProtocol.h>

@class NSMutableDictionary, NSString, NSMapTable;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {

	NSMutableDictionary* _listeners;
	NSMutableDictionary* _idStatusCache;
	NSMutableDictionary* _transactionIDToBlockMap;
	NSString* _rerouteService;
	xpc_connection_sRef _connection;
	dispatch_queue_sRef _connectionQueue;
	dispatch_queue_sRef _queue;
	NSString* _serviceToken;
	NSMapTable* _delegateToInfo;
	NSMutableDictionary* _listenerIDToServicesMap;
	id _delegateContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)daemonDisconnected;
-(void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(char)arg4 error:(id)arg5 ;
-(void)addListenerID:(id)arg1 forService:(id)arg2 ;
-(char)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(id)_cacheForService:(id)arg1 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_purgeIDStatusCache;
-(void)___oldDealloc;
-(void)removeDelegate:(id)arg1 ;
-(void*)__sendMessage:(void*)arg1 queue:(dispatch_queue_sRef)arg2 reply:(/*^block*/id)arg3 failBlock:(/*^block*/id)arg4 waitForReply:(char)arg5 ;
-(void)_disconnectFromQueryService;
-(void)_requestCacheForService:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_purgeIDStatusCacheAfter:(double)arg1 ;
-(id)_reroutedPrototypeService:(id)arg1 ;
-(id)_cachedStatusForDestination:(id)arg1 service:(id)arg2 ;
-(void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2 ;
-(id)_delegateMapForListenerID:(id)arg1 service:(id)arg2 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 delegateMap:(id)arg2 ;
-(void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(char)arg4 queue:(dispatch_queue_sRef)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)initWithDelegateContext:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(char)_isListenerWithID:(id)arg1 listeningToService:(id)arg2 ;
-(void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3 ;
-(void)_connect;
-(void)addDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 ;
-(void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 ;
-(char)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)_warmupQueryCacheForService:(id)arg1 ;
-(char)_flushQueryCacheForService:(id)arg1 ;
-(char)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)_hasCacheForService:(id)arg1 ;
-(long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(char)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)init;
-(void)dealloc;
@end

