/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSString;

@interface IMRemoteObject : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * portName; 
@property (assign,nonatomic) int pid; 
@property (nonatomic,readonly) xpc_connection_sRef connection; 
@property (nonatomic,readonly) char isValid; 
+(void)_registerIMRemoteObject:(id)arg1 ;
+(void)_unregisterIMRemoteObject:(id)arg1 ;
+(id)_remoteObjects;
+(void)initialize;
-(dispatch_queue_sRef)_queue;
-(int)pid;
-(id)initWithConnection:(xpc_connection_sRef)arg1 protocol:(id)arg2 alreadyConfigured:(char)arg3 ;
-(void)_portDidBecomeInvalid;
-(NSString *)portName;
-(void)_systemShutdown:(id)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(id)_initWithConnection:(xpc_connection_sRef)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(char)arg4 ;
-(void)_cleanupMachBitsCanPost:(char)arg1 ;
-(unsigned long long)forwardXPCObject:(void*)arg1 messageContext:(id)arg2 ;
-(id)initWithConnection:(xpc_connection_sRef)arg1 protocol:(id)arg2 ;
-(id)initWithPortName:(id)arg1 protocol:(id)arg2 ;
-(void)setPid:(int)arg1 ;
-(xpc_connection_sRef)connection;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(char)isValid;
@end

