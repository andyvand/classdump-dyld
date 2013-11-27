/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:41:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <apsd/APSCourierDelegate.h>

@protocol OS_dispatch_source, OS_xpc_object;
@class NSMutableDictionary, PCSimpleTimer, NSTimer, NSObject, NSDate;

@interface APSDaemon : NSObject <APSCourierDelegate> {

	NSMutableDictionary* _environmentsToCouriers;
	PCSimpleTimer* _courierConnectTimer;
	void* _courierConnectTimerPowerAssertion;
	NSTimer* _inactivityTerminationTimer;
	NSObject<OS_dispatch_source>* _sigTERMSource;
	NSObject<OS_dispatch_source>* _sigUSR1Source;
	int _isConnectedToken;
	int _systemReadyToken;
	BOOL _systemReady;
	NSDate* _lastClientConnection;
	BOOL _hasEnabledCouriers;
	BOOL _systemIsShuttingDown;
	NSObject<OS_xpc_object>* _connection;

}
+(void)setLaunchdLaunchSemaphoreEnabled:(BOOL)arg1 ;
-(void)courierHasNoConnections:(id)arg1 ;
-(void)courierConnectionStatusDidChange:(id)arg1 ;
-(void)shouldRunDidChange:(id)arg1 ;
-(id)_connectionsDebuggingState;
-(void)_schedulePeriodicSignal;
-(void)_setupNotifyToken;
-(void)_loadConnections;
-(void)_clearCourierConnectTimerAndPowerAssertion;
-(id)courierForEnvironment:(id)arg1 ;
-(void)_performPeriodicSignal;
-(void)updateSafeToSendFilterForce:(BOOL)arg1 ;
-(BOOL)_systemIsReady;
-(void)_enableAllCouriers;
-(void)_updateCourierConnectTimerAndPowerAssertion;
-(void)_connectCouriersTimerFired;
-(void)_clearInactivityTerminationTimer;
-(void)_inactivityTerminationTimerFired:(id)arg1 ;
-(void)_setCourier:(id)arg1 forEnvironment:(id)arg2 ;
-(void)_startInactivityTerminationTimerIfNecessary;
-(void)_updateNetworkGuidance;
-(void)_removeCourierForEnvironment:(id)arg1 ;
-(void)_receivedShutdownNotification;
-(void)receivedClientConnection;
-(id)courierForEnvironmentName:(id)arg1 ;
-(void)requestCourierConnections;
-(id)getConnectionServerForEnvironment:(id)arg1 connectionPortName:(id)arg2 peerConnection:(id)arg3 ;
-(double)keepAliveIntervalForEnvironment:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidateDeviceIdentity;
@end
