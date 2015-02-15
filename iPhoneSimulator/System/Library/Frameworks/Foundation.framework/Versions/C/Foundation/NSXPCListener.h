/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSXPCListenerDelegate;
#import <Foundation/Foundation-Structs.h>
@class NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	void* _xconnection;
	dispatch_queue_sRef _userQueue;
	void* reserved0;
	id<NSXPCListenerDelegate> _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	id _reserved1;
	id _reserved2;

}

@property (assign) id<NSXPCListenerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)anonymousListener;
+(void)enableTransactions;
+(id)_UUID;
+(id)serviceListener;
-(id)initWithServiceName:(id)arg1 ;
-(dispatch_queue_sRef)_queue;
-(id)serviceName;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)_setQueue:(dispatch_queue_sRef)arg1 ;
-(xpc_connection_sRef)_xpcConnection;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)stop;
-(id)description;
-(void)invalidate;
-(id<NSXPCListenerDelegate>)delegate;
-(void)resume;
-(void)suspend;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)_initShared;
@end

