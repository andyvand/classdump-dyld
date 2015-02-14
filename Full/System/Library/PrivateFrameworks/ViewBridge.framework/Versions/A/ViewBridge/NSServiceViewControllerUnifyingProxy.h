/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol NSXPCProxyCreating;
@class NSProxy;

@interface NSServiceViewControllerUnifyingProxy : NSProxy {

	NSProxy*<NSXPCProxyCreating> _clientProxy;
	NSProxy*<NSXPCProxyCreating> _animationSyncProxy;

}
-(id)initWithClientProxy:(id)arg1 andAnimationSyncProxy:(id)arg2 withErrorHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

