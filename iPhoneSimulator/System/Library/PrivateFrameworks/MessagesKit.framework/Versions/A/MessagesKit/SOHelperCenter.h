/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MessagesKit.framework/Versions/A/MessagesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSTimer, NSMapTable;

@interface SOHelperCenter : NSObject {

	NSXPCConnection* _connection;
	NSTimer* _reconnectionTimer;
	NSMapTable* _nameToWeakControllerMap;

}

@property (retain) NSXPCConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (retain) NSTimer * reconnectionTimer;                       //@synthesize reconnectionTimer=_reconnectionTimer - In the implementation block
@property (retain) NSMapTable * nameToWeakControllerMap;              //@synthesize nameToWeakControllerMap=_nameToWeakControllerMap - In the implementation block
+(void)lastPlugInUnloaded;
+(id)sharedInstance;
-(void)_initializeConnection;
-(void)setNameToWeakControllerMap:(NSMapTable *)arg1 ;
-(void)_accountConfigurationChanged:(id)arg1 ;
-(NSMapTable *)nameToWeakControllerMap;
-(void)setReconnectionTimer:(NSTimer *)arg1 ;
-(NSTimer *)reconnectionTimer;
-(void)_reconnectNow:(id)arg1 ;
-(void)loadPlugIn:(id)arg1 forController:(id)arg2 ;
-(void)unloadPlugIn:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id)init;
-(void)dealloc;
-(void)_reconnect;
@end

