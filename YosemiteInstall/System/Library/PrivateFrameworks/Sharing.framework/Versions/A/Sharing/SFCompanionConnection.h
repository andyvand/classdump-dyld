/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <Sharing/SFCompanionConnectionManagerClient.h>
#import <Sharing/SFCompanionXPCManagerObserver.h>

@protocol SFCompanionConnectionDelegate, SFCompanionConnectionManagerProtocol;
@class SFCompanionService, SFCompanionInterface, SFCompanionDevice, NSString, NSXPCConnection;

@interface SFCompanionConnection : NSObject <SFCompanionConnectionManagerClient, SFCompanionXPCManagerObserver> {

	char _waitForAccept;
	char _invalid;
	id<SFCompanionConnectionDelegate> _delegate;
	unsigned long long _status;
	SFCompanionService* _service;
	SFCompanionInterface* _exportedInterface;
	id _exportedObject;
	SFCompanionInterface* _remoteObjectInterface;
	SFCompanionDevice* _connectedDevice;
	NSString* _connectionID;
	dispatch_queue_sRef _workQueue;
	NSXPCConnection* _userConnection;
	id<SFCompanionConnectionManagerProtocol> _connectionProxy;

}

@property (assign) id<SFCompanionConnectionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long status;                                             //@synthesize status=_status - In the implementation block
@property (retain) SFCompanionService * service;                                          //@synthesize service=_service - In the implementation block
@property (retain) SFCompanionInterface * exportedInterface;                              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (retain) id exportedObject;                                                     //@synthesize exportedObject=_exportedObject - In the implementation block
@property (retain) SFCompanionInterface * remoteObjectInterface;                          //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (nonatomic,retain) SFCompanionDevice * connectedDevice;                         //@synthesize connectedDevice=_connectedDevice - In the implementation block
@property (assign) char waitForAccept;                                                    //@synthesize waitForAccept=_waitForAccept - In the implementation block
@property (nonatomic,copy,readonly) NSString * connectionID;                              //@synthesize connectionID=_connectionID - In the implementation block
@property (assign) dispatch_queue_sRef workQueue;                                         //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) char invalid;                                                          //@synthesize invalid=_invalid - In the implementation block
@property (retain) NSXPCConnection * userConnection;                                      //@synthesize userConnection=_userConnection - In the implementation block
@property (retain) id<SFCompanionConnectionManagerProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)remoteObjectProxy;
-(void)setRemoteObjectInterface:(SFCompanionInterface *)arg1 ;
-(void)setExportedInterface:(SFCompanionInterface *)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)xpcManagerConnectionInterrupted;
-(void)setConnectionProxy:(id<SFCompanionConnectionManagerProtocol>)arg1 ;
-(id<SFCompanionConnectionManagerProtocol>)connectionProxy;
-(void)setupWorkQueue;
-(void)onqueue_resume;
-(char)waitForAccept;
-(void)onqueue_proxyHandler:(id)arg1 ;
-(void)onqueue_invalidate;
-(void)onqueue_setupUserConnection:(id)arg1 ;
-(void)invalidationCallback;
-(void)onqueue_openXPCConnection;
-(void)onqueue_userInvalidated;
-(void)connectionResumed;
-(id)initWithConnectionID:(id)arg1 ;
-(id)initWithDevice:(id)arg1 serviceType:(id)arg2 delegate:(id)arg3 ;
-(id)initWithDevice:(id)arg1 connectionID:(id)arg2 serviceType:(id)arg3 delegate:(id)arg4 ;
-(char)sendData:(id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(void)sendData:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(SFCompanionDevice *)connectedDevice;
-(void)setConnectedDevice:(SFCompanionDevice *)arg1 ;
-(void)setWaitForAccept:(char)arg1 ;
-(NSXPCConnection *)userConnection;
-(void)setUserConnection:(NSXPCConnection *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(SFCompanionService *)service;
-(dispatch_queue_sRef)workQueue;
-(void)setService:(SFCompanionService *)arg1 ;
-(void)connect;
-(SFCompanionInterface *)remoteObjectInterface;
-(void)setDelegate:(id<SFCompanionConnectionDelegate>)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id<SFCompanionConnectionDelegate>)delegate;
-(void)resume;
-(void)suspend;
-(unsigned long long)status;
-(NSString *)connectionID;
-(char)invalid;
-(SFCompanionInterface *)exportedInterface;
-(id)exportedObject;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setWorkQueue:(dispatch_queue_sRef)arg1 ;
-(void)setInvalid:(char)arg1 ;
@end

