/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/nesessionmanager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nesessionmanager/nesessionmanager-Structs.h>
#import <nesessionmanager/NESMSession.h>
#import <nesessionmanager/NEVPNPluginDelegate.h>
#import <nesessionmanager/NEVPNAuthenticationPluginDelegate.h>
#import <nesessionmanager/NEVPNTunnelPluginDelegate.h>

@protocol OS_xpc_object, OS_dispatch_source;
@class NESMVPNSessionState, NSMutableDictionary, NEVPNAuthenticationPlugin, NEVPNTunnelPlugin, NEVPNProtocol, NEPluginPreferences, NSObject, NSDictionary, NESMAlwaysOnSession, NSString, NSData, NEUserNotification;

@interface NESMVPNSession : NESMSession <NEVPNPluginDelegate, NEVPNAuthenticationPluginDelegate, NEVPNTunnelPluginDelegate> {

	char _isSecondaryConnection;
	char _sleepOnDisconnect;
	char _isSecondaryInterface;
	char _isScopedToInterface;
	char _pluginSetDelegateInterface;
	char _managerSetDelegateInterface;
	char _didAlertOnDemandPluginDisabled;
	int _sessionType;
	unsigned _flowDivertControlUnit;
	long long _state;
	NESMVPNSessionState* _stateHandler;
	long long _lastPluginDisconnectError;
	NSMutableDictionary* _connectParameters;
	NEVirtualInterface_sRef _virtualInterface;
	NEVPNAuthenticationPlugin* _authenticationPlugin;
	NEVPNTunnelPlugin* _primaryTunnelPlugin;
	NEVPNTunnelPlugin* _auxiliaryTunnelPlugin;
	NEVPNProtocol* _protocol;
	NSMutableDictionary* _cachedStateHandlers;
	NEPluginPreferences* _preferences;
	NSObject*<OS_xpc_object> _establishIPCMessage;
	NSDictionary* _pluginConfigurationEntities;
	NESMAlwaysOnSession* _alwaysOnParent;
	NSString* _interfaceName;
	NSString* _delegateInterface;
	NSString* _delegateInterfaceAddress;
	NSObject*<OS_dispatch_source> _routeTimerSource;
	NSObject*<OS_dispatch_source> _routeSocketSource;
	NEVirtualInterface_sRef _flowDivertDNSVirtualInterface;
	NSData* _flowDivertTokenHMACKey;
	NEUserNotification* _notification;

}

@property (assign,nonatomic) long long state;                                          //@synthesize state=_state - In the implementation block
@property (retain) NESMVPNSessionState * stateHandler;                                 //@synthesize stateHandler=_stateHandler - In the implementation block
@property (assign) long long lastPluginDisconnectError;                                //@synthesize lastPluginDisconnectError=_lastPluginDisconnectError - In the implementation block
@property (retain) NSMutableDictionary * connectParameters;                            //@synthesize connectParameters=_connectParameters - In the implementation block
@property (assign) char sleepOnDisconnect;                                             //@synthesize sleepOnDisconnect=_sleepOnDisconnect - In the implementation block
@property (assign) NEVirtualInterface_sRef virtualInterface;                           //@synthesize virtualInterface=_virtualInterface - In the implementation block
@property (retain) NEVPNAuthenticationPlugin * authenticationPlugin;                   //@synthesize authenticationPlugin=_authenticationPlugin - In the implementation block
@property (retain) NEVPNTunnelPlugin * primaryTunnelPlugin;                            //@synthesize primaryTunnelPlugin=_primaryTunnelPlugin - In the implementation block
@property (retain) NEVPNTunnelPlugin * auxiliaryTunnelPlugin;                          //@synthesize auxiliaryTunnelPlugin=_auxiliaryTunnelPlugin - In the implementation block
@property (retain) NEVPNProtocol * protocol;                                           //@synthesize protocol=_protocol - In the implementation block
@property (readonly) NSString * pluginType; 
@property (retain) NSMutableDictionary * cachedStateHandlers;                          //@synthesize cachedStateHandlers=_cachedStateHandlers - In the implementation block
@property (readonly) NEPluginPreferences * preferences;                                //@synthesize preferences=_preferences - In the implementation block
@property (retain) NSObject*<OS_xpc_object> establishIPCMessage;                       //@synthesize establishIPCMessage=_establishIPCMessage - In the implementation block
@property (retain) NSDictionary * pluginConfigurationEntities;                         //@synthesize pluginConfigurationEntities=_pluginConfigurationEntities - In the implementation block
@property (retain) NESMAlwaysOnSession * alwaysOnParent;                               //@synthesize alwaysOnParent=_alwaysOnParent - In the implementation block
@property (assign) char isSecondaryConnection; 
@property (assign) char isSecondaryInterface;                                          //@synthesize isSecondaryInterface=_isSecondaryInterface - In the implementation block
@property (retain) NSString * interfaceName;                                           //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) char isScopedToInterface;                                           //@synthesize isScopedToInterface=_isScopedToInterface - In the implementation block
@property (readonly) long long lastPluginDisconnectReason; 
@property (assign) int sessionType;                                                    //@synthesize sessionType=_sessionType - In the implementation block
@property (copy) NSString * delegateInterface;                                         //@synthesize delegateInterface=_delegateInterface - In the implementation block
@property (retain) NSString * delegateInterfaceAddress;                                //@synthesize delegateInterfaceAddress=_delegateInterfaceAddress - In the implementation block
@property (assign) char pluginSetDelegateInterface;                                    //@synthesize pluginSetDelegateInterface=_pluginSetDelegateInterface - In the implementation block
@property (assign) char managerSetDelegateInterface;                                   //@synthesize managerSetDelegateInterface=_managerSetDelegateInterface - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> routeTimerSource;                     //@synthesize routeTimerSource=_routeTimerSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> routeSocketSource;                    //@synthesize routeSocketSource=_routeSocketSource - In the implementation block
@property (assign) unsigned flowDivertControlUnit;                                     //@synthesize flowDivertControlUnit=_flowDivertControlUnit - In the implementation block
@property (assign) NEVirtualInterface_sRef flowDivertDNSVirtualInterface;              //@synthesize flowDivertDNSVirtualInterface=_flowDivertDNSVirtualInterface - In the implementation block
@property (retain) NSData * flowDivertTokenHMACKey;                                    //@synthesize flowDivertTokenHMACKey=_flowDivertTokenHMACKey - In the implementation block
@property (retain) NEUserNotification * notification;                                  //@synthesize notification=_notification - In the implementation block
@property (assign) char didAlertOnDemandPluginDisabled;                                //@synthesize didAlertOnDemandPluginDisabled=_didAlertOnDemandPluginDisabled - In the implementation block
-(NSString *)delegateInterface;
-(NEVirtualInterface_sRef)virtualInterface;
-(void)setVirtualInterface:(NEVirtualInterface_sRef)arg1 ;
-(void)setAlwaysOnParent:(NESMAlwaysOnSession *)arg1 ;
-(void)setIsSecondaryInterface:(char)arg1 ;
-(void)setIsSecondaryConnection:(char)arg1 ;
-(void)handleInitializeState;
-(void)handleStartMessage:(id)arg1 ;
-(void)handleStopMessageWithReason:(int)arg1 ;
-(NESMVPNSessionState *)stateHandler;
-(void)handleWakeup;
-(char)handleUpdateConfiguration:(id)arg1 ;
-(id)copyStatistics;
-(id)copyExtendedStatus;
-(NSDictionary *)pluginConfigurationEntities;
-(char)isSecondaryInterface;
-(void)handleNetworkPrepareResult:(id)arg1 ;
-(char)isSecondaryConnection;
-(unsigned char)isInterfaceIPAvailable:(const char*)arg1 ;
-(void)handleGetInfoMessage:(id)arg1 withType:(int)arg2 ;
-(void)handleChangeEventForInterface:(id)arg1 newFlags:(unsigned long long)arg2 ;
-(void)plugin:(id)arg1 didStartWithPID:(int)arg2 ;
-(void)pluginDidDispose:(id)arg1 ;
-(NEVirtualInterface_sRef)plugin:(id)arg1 didRequestVirtualInterfaceOfType:(long long)arg2 ;
-(char)plugin:(id)arg1 didSetPersistentData:(CFDictionaryRef)arg2 ofType:(long long)arg3 ;
-(void)plugin:(id)arg1 didFinishAuthenticationWithResults:(id)arg2 status:(int)arg3 andError:(id)arg4 ;
-(void)plugin:(id)arg1 didSetStatus:(long long)arg2 andError:(long long)arg3 ;
-(void)pluginDidAcknowledgeSleep:(id)arg1 ;
-(void)pluginDidDetachIPC:(id)arg1 ;
-(void)plugin:(id)arg1 didSetConfiguration:(CFDictionaryRef)arg2 ;
-(void)pluginDidClearConfiguration:(id)arg1 ;
-(void)plugin:(id)arg1 didSetDelegateInterfaceName:(id)arg2 andAddress:(id)arg3 ;
-(int)pluginDidRequestFlowDivertControlSocket:(id)arg1 ;
-(int)plugin:(id)arg1 didRequestDNSInterfaceOperationWithDelegateInterfaceIndex:(int)arg2 outServerAddress:(sockaddr_storage*)arg3 ;
-(int)sessionType;
-(NSMutableDictionary *)cachedStateHandlers;
-(void)setCachedStateHandlers:(NSMutableDictionary *)arg1 ;
-(void)postPluginDisabledAlert;
-(char)didAlertOnDemandPluginDisabled;
-(void)setDidAlertOnDemandPluginDisabled:(char)arg1 ;
-(NEVPNTunnelPlugin *)primaryTunnelPlugin;
-(void)setPrimaryTunnelPlugin:(NEVPNTunnelPlugin *)arg1 ;
-(void)setAuxiliaryTunnelPlugin:(NEVPNTunnelPlugin *)arg1 ;
-(void)setAuthenticationPlugin:(NEVPNAuthenticationPlugin *)arg1 ;
-(NEVPNAuthenticationPlugin *)authenticationPlugin;
-(NEVPNTunnelPlugin *)auxiliaryTunnelPlugin;
-(void)setConnectParameters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)connectParameters;
-(void)handleEstablishIPCMessage:(id)arg1 ;
-(id)copyFlowDivertTokenParameters;
-(NESMAlwaysOnSession *)alwaysOnParent;
-(char)handleSleep;
-(void)handleUserLogout;
-(void)handleUserSwitch;
-(void)resetPluginPolicies;
-(NSString *)delegateInterfaceAddress;
-(char)interface:(id)arg1 hasIPAddress:(id)arg2 currentFlags:(unsigned long long)arg3 ;
-(void)setPluginConfigurationEntities:(NSDictionary *)arg1 ;
-(void)setDelegateInterfaceName:(id)arg1 ;
-(char)managerSetDelegateInterface;
-(void)setDelegateInterface:(NSString *)arg1 ;
-(void)setDelegateInterfaceAddress:(NSString *)arg1 ;
-(void)setPluginSetDelegateInterface:(char)arg1 ;
-(void)setManagerSetDelegateInterface:(char)arg1 ;
-(id)copyInterfaceNameAndAddress:(id*)arg1 forDestination:(CFStringRef)arg2 ;
-(NSObject*<OS_dispatch_source>)routeTimerSource;
-(void)setRouteTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)routeSocketSource;
-(void)setRouteSocketSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)copyInterfaceNameAndAddressForTunnelRemoteAddress:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestInstall;
-(void)setConfigurationResetFirst:(char)arg1 ;
-(void)handleSetConfigurationResult:(char)arg1 ;
-(unsigned)flowDivertControlUnit;
-(char)setFlowDivertDNSServiceInstalled:(char)arg1 ;
-(char)isScopedToInterface;
-(char)pluginSetDelegateInterface;
-(char)addRoutes:(CFArrayRef)arg1 excluded:(char)arg2 ;
-(void)prepareNetwork;
-(void)setFlowDivertControlUnit:(unsigned)arg1 ;
-(void)setFlowDivertTokenHMACKey:(NSData *)arg1 ;
-(NEVirtualInterface_sRef)flowDivertDNSVirtualInterface;
-(void)setFlowDivertDNSVirtualInterface:(NEVirtualInterface_sRef)arg1 ;
-(NSData *)flowDivertTokenHMACKey;
-(void)plugin:(id)arg1 didFailToStartTunnelWithError:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andPluginType:(id)arg4 andSessionType:(int)arg5 ;
-(char)initializePluginsAlertWhenDisabled:(char)arg1 ;
-(void)createConnectParametersWithStartMessage:(id)arg1 ;
-(void)handleSleepTime:(double)arg1 ;
-(void)installPended;
-(int)getReassertTimeout;
-(void)flowDivertCleanup;
-(char)isFlowDivertActive;
-(long long)lastPluginDisconnectReason;
-(void)setStateHandler:(NESMVPNSessionState *)arg1 ;
-(long long)lastPluginDisconnectError;
-(void)setLastPluginDisconnectError:(long long)arg1 ;
-(char)sleepOnDisconnect;
-(void)setSleepOnDisconnect:(char)arg1 ;
-(NSObject*<OS_xpc_object>)establishIPCMessage;
-(void)setEstablishIPCMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setIsScopedToInterface:(char)arg1 ;
-(void)setSessionType:(int)arg1 ;
-(NEVPNProtocol *)protocol;
-(NSString *)pluginType;
-(void)setNotification:(NEUserNotification *)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(void)setProtocol:(NEVPNProtocol *)arg1 ;
-(void)install;
-(void)dealloc;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(int)type;
-(void)uninstall;
-(void)setStatus:(int)arg1 ;
-(NEUserNotification *)notification;
-(NEPluginPreferences *)preferences;
@end
