/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSProxy.h>
#import <Foundation/NSCoding.h>

@class NSConnection;

@interface NSDistantObject : NSProxy <NSCoding> {

	id _knownSelectors;
	unsigned long long _wireCount;
	unsigned long long _refCount;
	id _proto;
	unsigned short ___2;
	unsigned char ___1;
	unsigned char _wireType;
	id _remoteClass;

}

@property (retain,readonly) NSConnection * connectionForProxy; 
+(void)_enableLogging:(char)arg1 ;
+(id)proxyWithTarget:(id)arg1 connection:(id)arg2 ;
+(id)proxyWithLocal:(id)arg1 connection:(id)arg2 ;
+(id)newDistantObjectWithCoder:(id)arg1 ;
+(void)initialize;
-(void)_releaseWireCount:(unsigned long long)arg1 ;
-(void)retainWireCount;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 ;
-(id)initWithLocal:(id)arg1 connection:(id)arg2 ;
-(id)protocolForProxy;
-(oneway void)release;
-(id)retain;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(Class)class;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopy;
-(char)isEqual:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned long long)retainCount;
-(NSZone*)zone;
-(unsigned long long)hash;
-(void)appendFormat:(id)arg1 ;
-(id)stringByAppendingFormat:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)setProtocolForProxy:(id)arg1 ;
-(NSConnection *)connectionForProxy;
@end
