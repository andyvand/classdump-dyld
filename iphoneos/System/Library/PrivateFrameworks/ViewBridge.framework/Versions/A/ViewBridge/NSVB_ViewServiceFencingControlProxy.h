/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/NSVB_QueueingProxy.h>

@class NSVB_ViewServiceFencingController;

@interface NSVB_ViewServiceFencingControlProxy : NSVB_QueueingProxy {

	NSVB_ViewServiceFencingController* _fencingController;

}
+(id)proxyWithTarget:(id)arg1 fencingController:(id)arg2 exportedProtocol:(id)arg3 ;
-(void)__beginFencingMessagesWithSendRight:(id)arg1 connectionCount:(unsigned long long)arg2 ;
-(void)__endFencingMessagesForSendRight:(id)arg1 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
@end

