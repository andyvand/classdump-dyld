/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/InstantMessage.framework/Versions/A/InstantMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <InstantMessage/InstantMessage-Structs.h>
@interface iChatTheaterXPC : NSObject {

	unsigned long long _connectionCount;
	xpc_connection_sRef _connection;
	xpc_connection_sRef _currentPeer;

}
+(id)sharedInstance;
-(void)addConnection;
-(void)connectionUpdated:(xpc_connection_sRef)arg1 forName:(id)arg2 ;
-(void)requestConnectionForName:(id)arg1 ;
-(void)removeConnection;
-(xpc_connection_sRef)currentPeerConnection;
-(void)_processMessage:(void*)arg1 ;
-(void)_disconnect;
-(void)dealloc;
-(void)_processResponse:(void*)arg1 ;
@end

