/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObjectNSRemoteServiceConnectionDelegate;
#import <RemoteViewServices/RemoteViewServices-Structs.h>
@class NSArray, NSString, RVSLogger, NSRemoteServiceEndpoint;

@interface NSRemoteServiceConnection : NSObject {

	unsigned char _errorsAreFatal;
	xpc_connection_sRef _connection;
	dispatch_queue_sRef _serviceQueue;
	dispatch_queue_sRef _internalQueue;
	id<NSObject><NSRemoteServiceConnectionDelegate> _delegate;
	dispatch_queue_sRef _delegateQueue;
	NSArray* _delegateStackTrace;
	NSString* _connectionName;
	RVSLogger* _logger;
	NSRemoteServiceEndpoint* _endpoint;

}

@property (assign) id delegate; 
@property (assign) dispatch_queue_sRef delegateQueue; 
@property (assign) unsigned char errorsAreFatal;                   //@synthesize errorsAreFatal=_errorsAreFatal - In the implementation block
@property (readonly) RVSLogger * logger;                           //@synthesize logger=_logger - In the implementation block
-(id)initWithServiceConnection:(xpc_connection_sRef)arg1 endpoint:(id)arg2 ;
-(void)sendRequest:(id)arg1 replyQueue:(dispatch_queue_sRef)arg2 ;
-(id)_sendSynchronousRequest:(id)arg1 withTimeout:(unsigned long long)arg2 ;
-(RVSLogger *)logger;
-(id)initWithServiceConnection:(xpc_connection_sRef)arg1 ;
-(id)sendSynchronousRequest:(id)arg1 ;
-(id)sendSynchronousRequest:(id)arg1 withTimeout:(double)arg2 ;
-(void)sendReply:(id)arg1 ;
-(unsigned)euid;
-(unsigned)egid;
-(int)asid;
-(void)auditToken:(SCD_Struct_NS2*)arg1 ;
-(unsigned char)errorsAreFatal;
-(void)setErrorsAreFatal:(unsigned char)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(int)pid;
-(void)setDelegateQueue:(dispatch_queue_sRef)arg1 ;
-(char)_setupConnection;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)resume;
-(void)suspend;
-(dispatch_queue_sRef)delegateQueue;
-(void)cleanup;
@end

