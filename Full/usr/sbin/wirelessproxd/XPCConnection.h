/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/wirelessproxd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, NSObjectXPCConnectionDelegate;
@class NSObject;

@interface XPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	id actingObject;
	long long _clientPID;
	id<NSObject><XPCConnectionDelegate> _delegate;

}

@property (assign) long long clientPID;                                                        //@synthesize clientPID=_clientPID - In the implementation block
@property (assign,nonatomic,__weak) id<NSObject><XPCConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)postMessageVerbose:(id)arg1 ;
-(long long)clientPID;
-(void)setClientPID:(long long)arg1 ;
-(char)isEntitled:(id)arg1 ;
-(void)handleMessageEvent:(id)arg1 ;
-(void)postMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setDelegate:(id<NSObject><XPCConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<NSObject><XPCConnectionDelegate>)delegate;
-(void)handleEvent:(id)arg1 ;
@end
