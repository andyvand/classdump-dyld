/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCProxyCreating.h>
#import <Foundation/NSSecureCoding.h>

@class NSXPCConnection, NSXPCInterface;

@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding> {

	NSXPCConnection* _connection;
	NSXPCInterface* _remoteInterface;
	CFDictionaryRef _knownSelectors;
	int _selectorLock;
	unsigned long long _proxyNumber;
	char _exported;

}

@property (assign) unsigned long long _proxyNumber;                //@synthesize proxyNumber=_proxyNumber - In the implementation block
@property (retain) NSXPCConnection * _connection;                  //@synthesize connection=_connection - In the implementation block
@property (retain) NSXPCInterface * _remoteInterface;              //@synthesize remoteInterface=_remoteInterface - In the implementation block
@property (assign) char _exported;                                 //@synthesize exported=_exported - In the implementation block
+(char)supportsSecureCoding;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)_connection;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3 ;
-(id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 interface:(id)arg3 ;
-(id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)set_remoteInterface:(NSXPCInterface *)arg1 ;
-(unsigned long long)_proxyNumber;
-(void)set_proxyNumber:(unsigned long long)arg1 ;
-(NSXPCInterface *)_remoteInterface;
-(char)_exported;
-(void)set_exported:(char)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

