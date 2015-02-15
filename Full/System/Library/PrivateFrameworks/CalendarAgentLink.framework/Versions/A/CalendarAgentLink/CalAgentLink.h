/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSString;

@interface CalAgentLink : NSObject {

	NSXPCConnection* _connection;
	NSString* _machServiceName;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSString * machServiceName;                //@synthesize machServiceName=_machServiceName - In the implementation block
+(id)store;
+(id)sharedInstances;
+(void)broadcastToOtherClients:(SEL)arg1 ;
+(void)broadcastToOtherClients:(SEL)arg1 withObject:(id)arg2 ;
+(void)_removeAgentLink:(id)arg1 ;
+(id)_registerLightweightClientWithMachServiceName:(id)arg1 ;
+(id)remoteObjectForMachServiceName:(id)arg1 errorBlock:(/*^block*/id)arg2 ;
+(void)_broadcastToOtherClients:(SEL)arg1 objects:(id)arg2 ;
+(id)storeWithErrorBlock:(/*^block*/id)arg1 ;
+(id)remoteObjectForMachServiceName:(id)arg1 ;
+(void)_tearDownAgentLink:(id)arg1 ;
+(void)initialize;
+(id)agent;
+(id)startWithMachServiceName:(id)arg1 exportedObject:(id)arg2 ;
+(id)agentWithErrorBlock:(/*^block*/id)arg1 ;
+(id)sharedInstanceWithMachServiceName:(id)arg1 ;
+(void)broadcastToOtherClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(void)setExportedObject:(id)arg1 ;
-(NSString *)machServiceName;
-(id)_remoteObject;
-(void)setMachServiceName:(NSString *)arg1 ;
-(id)initWithMachServiceName:(id)arg1 exportedObject:(id)arg2 ;
-(id)_remoteObjectWithErrorBlock:(/*^block*/id)arg1 ;
-(void)_handleCalAgentAliveNotification;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id)init;
-(void)dealloc;
@end

