/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/Versions/A/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AOSKit/AOSKit-Structs.h>
@interface AOSAgentConnection : NSObject {

	char _isDisconnected;
	xpc_connection_sRef _connection;

}

@property (assign,nonatomic) xpc_connection_sRef connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) char isDisconnected;                         //@synthesize isDisconnected=_isDisconnected - In the implementation block
+(id)resultFromMessage:(void*)arg1 ;
+(id)errorStringFromMessage:(void*)arg1 ;
+(id)errorFromMessage:(void*)arg1 ;
+(void)initialize;
-(void)sendMessageWithPayload:(id)arg1 replyHandler:(/*^block*/id)arg2 isAsync:(char)arg3 ;
-(void)setIsDisconnected:(char)arg1 ;
-(void)disconnect;
-(char)isDisconnected;
-(char)connect;
-(void)setConnection:(xpc_connection_sRef)arg1 ;
-(xpc_connection_sRef)connection;
-(id)init;
-(void)dealloc;
-(char)isConnected;
@end
