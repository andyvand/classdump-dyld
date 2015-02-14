/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSLock;

@interface CKClientDispatch : NSObject {

	NSObject*<OS_xpc_object> serviceXPCConnection;
	NSLock* serviceConnectionLock;
	NSObject*<OS_xpc_object> agentXPCConnection;
	NSLock* agentConnectionLock;
	NSObject*<OS_dispatch_queue> mQueue;

}
+(id)sharedInstance;
-(void)_sendMessage:(id)arg1 replyQueue:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(id)_sendMessage:(id)arg1 callbackQueue:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)invokeSelector:(id)arg1 ofClass:(id)arg2 ;
-(void)invokeSelector:(id)arg1 ofClass:(id)arg2 withObject:(id)arg3 ;
-(void)invokeSelector:(id)arg1 ofClass:(id)arg2 replyQueue:(id)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)invokeSelector:(id)arg1 ofClass:(id)arg2 withObject:(id)arg3 replyQueue:(id)arg4 replyBlock:(/*^block*/id)arg5 ;
-(id)invokeSelector:(id)arg1 ofClass:(id)arg2 withObject:(id)arg3 callbackQueue:(id)arg4 callbackBlock:(/*^block*/id)arg5 ;
-(id)_syncInvokeSelector:(id)arg1 ofClass:(id)arg2 withObject:(id)arg3 ;
-(void)cancelCallback:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

