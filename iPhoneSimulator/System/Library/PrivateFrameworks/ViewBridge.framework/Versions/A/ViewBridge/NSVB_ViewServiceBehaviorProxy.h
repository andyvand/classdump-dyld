/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/NSVB_TargetedProxy.h>
#import <ViewBridge/_UIViewServiceUIBehaviorInterface.h>

@class NSVB_ViewServiceFencingControlProxy, NSString;

@interface NSVB_ViewServiceBehaviorProxy : NSVB_TargetedProxy <_UIViewServiceUIBehaviorInterface> {

	int _remotePID;
	NSVB_ViewServiceFencingControlProxy* _fencingControlProxy;
	int __automatic_invalidation_retainCount;
	char __automatic_invalidation_invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3 ;
+(id)activeFencePort;
-(int)__automatic_invalidation_logic;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
@end

