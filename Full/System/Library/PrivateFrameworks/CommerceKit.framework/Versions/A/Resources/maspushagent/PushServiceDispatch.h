/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/maspushagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <maspushagent/NSXPCListenerDelegate.h>
#import <maspushagent/PushServiceProtocol.h>

@class NSString;

@interface PushServiceDispatch : NSObject <NSXPCListenerDelegate, PushServiceProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)getDeviceTokenForEnvironmentNamed:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)addTopic:(id)arg1 forEnvironmentNamed:(id)arg2 fromClient:(id)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)deleteTopic:(id)arg1 forEnvironmentNamed:(id)arg2 fromClient:(id)arg3 replyBlock:(/*^block*/id)arg4 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

