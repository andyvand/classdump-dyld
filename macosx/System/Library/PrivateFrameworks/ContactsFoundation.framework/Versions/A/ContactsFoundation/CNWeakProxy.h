/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class CNWeakReference;

@interface CNWeakProxy : NSProxy {

	Class _targetClass;
	CNWeakReference* _weakReference;

}
+(id)weakProxyWithObject:(id)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(Class)class;
-(char)isKindOfClass:(Class)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end
