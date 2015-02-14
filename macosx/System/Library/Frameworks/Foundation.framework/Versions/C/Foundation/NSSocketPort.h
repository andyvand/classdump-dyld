/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPort.h>

@class NSData;

@interface NSSocketPort : NSPort {

	void* _receiver;
	id _connectors;
	void* _loops;
	void* _data;
	id _signature;
	id _delegate;
	id _lock;
	unsigned long long _maxSize;
	unsigned long long _useCount;
	unsigned long long _reserved;

}

@property (readonly) int protocolFamily; 
@property (readonly) int socketType; 
@property (readonly) int protocol; 
@property (copy,readonly) NSData * address; 
@property (readonly) int socket; 
+(char)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned)arg6 reserved:(unsigned long long)arg7 ;
+(void)_fixNSSocketPortLeak;
+(void)initialize;
-(int)protocol;
-(void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3 ;
-(char)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
-(char)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(char)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
-(id)initRemoteWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4 ;
-(int)protocolFamily;
-(id)initWithTCPPort:(unsigned short)arg1 ;
-(id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4 ;
-(void)_incrementUseCount;
-(void)handleConnDeath:(id)arg1 ;
-(id)_initRemoteWithSignature:(id)arg1 ;
-(id)_initWithRetainedCFSocket:(CFSocketRef)arg1 protocolFamily:(int)arg2 socketType:(int)arg3 protocol:(int)arg4 ;
-(CFSocketRef)_sendingSocketForPort:(id)arg1 beforeTime:(double)arg2 ;
-(int)socketType;
-(int)socket;
-(id)initRemoteWithTCPPort:(unsigned short)arg1 host:(id)arg2 ;
-(id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 socket:(int)arg4 ;
-(void)_handleMessage:(CFDataRef)arg1 from:(CFDataRef)arg2 socket:(CFSocketRef)arg3 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(unsigned long long)retainCount;
-(id)delegate;
-(char)isValid;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)signature;
-(void)handlePortMessage:(id)arg1 ;
-(NSData *)address;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
@end

