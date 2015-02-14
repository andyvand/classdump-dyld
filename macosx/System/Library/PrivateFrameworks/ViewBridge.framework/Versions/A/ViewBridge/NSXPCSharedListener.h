/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ViewBridge/ViewBridge-Structs.h>
@class NSMutableDictionary, NSHashTable;

@interface NSXPCSharedListener : NSObject {

	NSMutableDictionary* _listeners;
	NSHashTable* _delegates;

}

@property (retain) NSMutableDictionary * listeners;              //@synthesize listeners=_listeners - In the implementation block
+(id)sharedServiceListener;
+(id)endpointForListenerNamed:(id)arg1 fromServiceNamed:(id)arg2 ;
+(id)connectionForListenerNamed:(id)arg1 fromServiceNamed:(id)arg2 ;
+(void)connectToService:(id)arg1 listener:(id)arg2 queue:(dispatch_queue_sRef)arg3 completion:(/*^block*/id)arg4 ;
+(id)endpointForReply:(void*)arg1 withListenerName:(void*)arg2 ;
+(id)endpointForListenerWithMessage:(void*)arg1 fromConnection:(xpc_connection_sRef)arg2 withListenerName:(void*)arg3 ;
+(id)endpointForListenerWithXPCName:(void*)arg1 fromConnection:(xpc_connection_sRef)arg2 ;
+(id)endpointForListenerNamed:(id)arg1 fromConnection:(xpc_connection_sRef)arg2 ;
+(void)warmUpClassNamed:(id)arg1 inServiceNamed:(id)arg2 ;
-(void)didAcceptNewConnection:(xpc_connection_sRef)arg1 ;
-(void)addListener:(id)arg1 withName:(id)arg2 ;
-(void)addDelegate:(NSObject*)arg1 ;
-(void)resumeSubService:(id)arg1 ;
-(void)resumeAdditionalService:(id)arg1 ;
-(void)setListeners:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)listeners;
-(char)shouldAcceptNewConnection:(xpc_connection_sRef)arg1 forListenerNamed:(id)arg2 ;
-(void)dealloc;
-(void)resume;
@end

