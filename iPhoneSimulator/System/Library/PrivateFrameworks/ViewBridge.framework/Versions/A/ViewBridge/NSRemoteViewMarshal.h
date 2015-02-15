/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <ViewBridge/NSRemoteViewMarshal.h>

@protocol NSRemoteViewMarshal
@required
-(void)associateMouseAndMouseCursorPosition:(char)arg1 completion:(/*^block*/id)arg2;
-(void)retreatToConfigPhase;
-(void)forgetAccessoryView;
-(void)waitForHostKeysToRegister:(/*^block*/id)arg1;
-(void)beginPrivateEventLoop:(id)arg1;
-(void)endPrivateEventLoop:(id)arg1;
-(void)addChildWindow:(id)arg1 windowBase:(unsigned char)arg2 ordered:(long long)arg3 frame:(CGRect)arg4 reply:(/*^block*/id)arg5;
-(void)dragWindowRelativeToMouseDown:(CGPoint)arg1;
-(void)suspendInFavorOfEndpoint:(id)arg1 serviceName:(id)arg2 serviceSubclassName:(id)arg3 serviceWindowIsKey:(char)arg4 initialBridge:(id)arg5 completion:(/*^block*/id)arg6;
-(void)hasValidKeyViewInDirection:(unsigned long long)arg1 withReply:(/*^block*/id)arg2;
-(void)sendKeyEventFromServiceAccessoryViewToRemoteAccessoryView:(id)arg1 eventOwner:(unsigned)arg2 withReply:(/*^block*/id)arg3;
-(void)orderWindow:(unsigned)arg1 mode:(long long)arg2 relativeTo:(unsigned)arg3 withReply:(/*^block*/id)arg4;
-(void)beginModalSession:(id)arg1 title:(id)arg2 size:(CGSize)arg3 serviceTrustsRemoteKeyEvents:(char)arg4 withReply:(/*^block*/id)arg5;
-(void)handleEventFromService:(id)arg1 eventOwner:(unsigned)arg2 withReply:(/*^block*/id)arg3;
-(void)sendEventUpResponderChain:(id)arg1 eventOwner:(unsigned)arg2;
-(void)beginSheet:(id)arg1 modalForWindow:(id)arg2 size:(CGSize)arg3 isCritical:(char)arg4 withReply:(/*^block*/id)arg5;
-(void)registerBridgeKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3 withReply:(/*^block*/id)arg4;
-(void)setRemoteObject:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)serviceHasFirstResponder:(int)arg1 inDirection:(unsigned long long)arg2 withReply:(/*^block*/id)arg3;
-(void)serviceRequestsResize:(CGSize)arg1 animate:(char)arg2 transaction:(id)arg3 completion:(/*^block*/id)arg4;
-(void)serviceWindowDidBecomeKey;
-(void)serviceWindowDidResignKey;
-(void)setServiceWindowStyleMask:(unsigned long long)arg1;
-(void)setServiceContextID:(unsigned)arg1;
-(void)setAccessoryViewOrigin:(CGPoint)arg1;
-(void)serviceAccessoryViewBecameFirstResponder:(unsigned long long)arg1;
-(void)serviceAccessoryViewResignedFirstResponder;
-(void)lastCallImpliedByAdvancingToPhase:(unsigned char)arg1;
-(void)updateAccessibilityChildren:(id)arg1;
-(void)updateContentMinSize:(CGSize)arg1;
-(void)discloseAccessoryView:(char)arg1 withOffset:(CGPoint)arg2 andAnimationState:(int)arg3 andDuration:(double)arg4;
-(void)serviceWindowWouldActivate;
-(void)serviceViewReceivedLeftMouseDown;
-(void)serviceWindowReceivedScrollWheel:(id)arg1 eventOwner:(unsigned)arg2;
-(void)remoteViewControllerProxy:(/*^block*/id)arg1;
-(void)setServiceWindowEventMask:(unsigned long long)arg1;
-(void)serviceHasService:(int)arg1;
-(void)endModalSession:(id)arg1;

@end


@class NSViewRemoteBridge, NSRemoteViewBase, NSViewBridge;

@interface NSRemoteViewMarshal : NSObject <NSRemoteViewMarshal> {

	NSViewRemoteBridge* _bridge;
	NSRemoteViewBase* _view;
	unsigned _invalid : 1;

}

@property (readonly) NSViewBridge * bridge;                //@synthesize bridge=_bridge - In the implementation block
@property (readonly) NSRemoteViewBase * view;              //@synthesize view=_view - In the implementation block
+(id)eventsInProgress;
-(void)associateMouseAndMouseCursorPosition:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)retreatToConfigPhase;
-(void)forgetAccessoryView;
-(void)waitForHostKeysToRegister:(/*^block*/id)arg1 ;
-(void)beginPrivateEventLoop:(id)arg1 ;
-(void)endPrivateEventLoop:(id)arg1 ;
-(void)addChildWindow:(id)arg1 windowBase:(unsigned char)arg2 ordered:(long long)arg3 frame:(CGRect)arg4 reply:(/*^block*/id)arg5 ;
-(void)dragWindowRelativeToMouseDown:(CGPoint)arg1 ;
-(void)suspendInFavorOfEndpoint:(id)arg1 serviceName:(id)arg2 serviceSubclassName:(id)arg3 serviceWindowIsKey:(char)arg4 initialBridge:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)hasValidKeyViewInDirection:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)sendKeyEventFromServiceAccessoryViewToRemoteAccessoryView:(id)arg1 eventOwner:(unsigned)arg2 withReply:(/*^block*/id)arg3 ;
-(void)orderWindow:(unsigned)arg1 mode:(long long)arg2 relativeTo:(unsigned)arg3 withReply:(/*^block*/id)arg4 ;
-(void)beginModalSession:(id)arg1 title:(id)arg2 size:(CGSize)arg3 serviceTrustsRemoteKeyEvents:(char)arg4 withReply:(/*^block*/id)arg5 ;
-(void)handleEventFromService:(id)arg1 eventOwner:(unsigned)arg2 withReply:(/*^block*/id)arg3 ;
-(void)sendEventUpResponderChain:(id)arg1 eventOwner:(unsigned)arg2 ;
-(void)beginSheet:(id)arg1 modalForWindow:(id)arg2 size:(CGSize)arg3 isCritical:(char)arg4 withReply:(/*^block*/id)arg5 ;
-(void)registerBridgeKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3 withReply:(/*^block*/id)arg4 ;
-(void)setRemoteObject:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)serviceHasFirstResponder:(int)arg1 inDirection:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)serviceRequestsResize:(CGSize)arg1 animate:(char)arg2 transaction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)serviceWindowDidBecomeKey;
-(void)serviceWindowDidResignKey;
-(void)setServiceWindowStyleMask:(unsigned long long)arg1 ;
-(void)setServiceContextID:(unsigned)arg1 ;
-(void)setAccessoryViewOrigin:(CGPoint)arg1 ;
-(void)serviceAccessoryViewBecameFirstResponder:(unsigned long long)arg1 ;
-(void)serviceAccessoryViewResignedFirstResponder;
-(void)lastCallImpliedByAdvancingToPhase:(unsigned char)arg1 ;
-(void)updateAccessibilityChildren:(id)arg1 ;
-(void)updateContentMinSize:(CGSize)arg1 ;
-(void)discloseAccessoryView:(char)arg1 withOffset:(CGPoint)arg2 andAnimationState:(int)arg3 andDuration:(double)arg4 ;
-(void)serviceWindowWouldActivate;
-(void)serviceViewReceivedLeftMouseDown;
-(void)serviceWindowReceivedScrollWheel:(id)arg1 eventOwner:(unsigned)arg2 ;
-(void)remoteViewControllerProxy:(/*^block*/id)arg1 ;
-(void)setServiceWindowEventMask:(unsigned long long)arg1 ;
-(void)serviceHasService:(int)arg1 ;
-(void)exceptionSafeSetRemoteObject:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(char)shouldSendEventToApplicationBypassingSubclasses;
-(void)dealloc;
-(NSRemoteViewBase *)view;
-(void)endModalSession:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(NSViewBridge *)bridge;
@end

