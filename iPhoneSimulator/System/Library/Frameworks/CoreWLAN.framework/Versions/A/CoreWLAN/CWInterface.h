/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreWLAN/CoreWLAN-Structs.h>
@class NSString, NSArray, NSXPCConnection, CWIPMonitor, CWEAPOLClient, NSSet;

@interface CWInterface : NSObject {

	void* _device;
	NSString* _interfaceName;
	NSArray* _capabilities;
	IONotificationPortRef _interfaceRemovedNotificationPort;
	unsigned _interfaceRemovedNotification;
	char _deviceAttached;
	id _eapolClient;
	id _ipMonitor;
	dispatch_queue_sRef _internalQueue;
	void* _serviceStore;
	void* _interfaceStore;
	char _lastPowerState;
	NSXPCConnection* _xpcConnection;

}

@property (readonly) void* device; 
@property (copy,readonly) NSArray * capabilities; 
@property (retain,readonly) CWIPMonitor * ipMonitor; 
@property (retain,readonly) CWEAPOLClient * eapolClient; 
@property (readonly) char deviceAttached; 
@property (readonly) unsigned long long interfaceCapabilities; 
@property (readonly) char powerSaveModeEnabled; 
@property (readonly) long long aggregateRSSI; 
@property (readonly) long long aggregateNoise; 
@property (readonly) NSSet * supportedISMChannels; 
@property (copy) NSString * interfaceName;                                  //@synthesize interfaceName=_interfaceName - In the implementation block
@property (copy) NSArray * capabilities;                                    //@synthesize capabilities=_capabilities - In the implementation block
@property (assign) void* device;                                            //@synthesize device=_device - In the implementation block
@property (assign) char lastPowerState;                                     //@synthesize lastPowerState=_lastPowerState - In the implementation block
@property (assign) char deviceAttached;                                     //@synthesize deviceAttached=_deviceAttached - In the implementation block
+(id)interfaceNames;
+(id)interfaceWithName:(id)arg1 ;
+(id)supportedInterfaces;
+(id)interface;
-(id)configuration;
-(id)channel;
-(void)relinquishBluetoothPagingLockAndReply:(/*^block*/id)arg1 ;
-(void)acquireBluetoothPagingLockAndReply:(/*^block*/id)arg1 ;
-(long long)security;
-(unsigned long long)supportedPhysicalLayerModes;
-(id)securityMode;
-(id)wlanChannel;
-(id)networkServiceIDs;
-(void)disassociate;
-(id)queryScanCacheWithChannels:(id)arg1 ssidList:(id)arg2 maxAge:(double)arg3 maxMissCount:(long long)arg4 maxWakeCount:(long long)arg5 maxAutoJoinCount:(long long)arg6 error:(out id*)arg7 ;
-(id)scanForNetworksWithChannels:(id)arg1 ssidList:(id)arg2 legacyScanSSID:(id)arg3 includeHiddenNetworks:(char)arg4 mergedScanResults:(char)arg5 maxAge:(double)arg6 maxMissCount:(long long)arg7 maxWakeCount:(long long)arg8 maxAutoJoinCount:(long long)arg9 waitForWiFi:(char)arg10 waitForBluetooth:(char)arg11 priority:(long long)arg12 error:(out id*)arg13 ;
-(unsigned long long)physicalLayerMode;
-(long long)noiseMeasurement;
-(id)bssidData;
-(id)initWithInterfaceName:(id)arg1 xpcConnection:(id)arg2 legacyEventMonitoring:(char)arg3 ;
-(char)deviceAttached;
-(id)initWithInterfaceName:(id)arg1 ;
-(char)associateToEnterpriseNetwork:(id)arg1 identity:(OpaqueSecIdentityRefRef)arg2 username:(id)arg3 password:(id)arg4 forceBSSID:(char)arg5 remember:(char)arg6 error:(out id*)arg7 ;
-(id)__supportedWLANChannelForChannelNumber:(unsigned long long)arg1 ;
-(id)__familyScanCacheResults;
-(char)__startEventMonitoring;
-(char)setWLANChannel:(id)arg1 error:(out id*)arg2 ;
-(char)setPairwiseMasterKey:(id)arg1 error:(out id*)arg2 ;
-(char)setWEPKey:(id)arg1 flags:(unsigned long long)arg2 index:(long long)arg3 error:(out id*)arg4 ;
-(id)scanForNetworksWithSSID:(id)arg1 error:(out id*)arg2 ;
-(id)scanForNetworksWithName:(id)arg1 error:(out id*)arg2 ;
-(char)associateToEnterpriseNetwork:(id)arg1 identity:(OpaqueSecIdentityRefRef)arg2 username:(id)arg3 password:(id)arg4 error:(out id*)arg5 ;
-(char)startIBSSModeWithSSID:(id)arg1 security:(long long)arg2 channel:(unsigned long long)arg3 password:(id)arg4 error:(out id*)arg5 ;
-(long long)activePHYMode;
-(long long)interfaceMode;
-(double)transmitRate;
-(long long)transmitPower;
-(id)cachedScanResults;
-(id)hardwareAddress;
-(char)serviceActive;
-(char)commitConfiguration:(id)arg1 authorization:(id)arg2 error:(out id*)arg3 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(char)lastPowerState;
-(void)setLastPowerState:(char)arg1 ;
-(void)setDeviceAttached:(char)arg1 ;
-(long long)interfaceControlState;
-(CWEAPOLClient *)eapolClient;
-(id)__scanForLoginWindowModeEnterpriseNetworkWithEAPProfile:(EAPOLClientProfileRef)arg1 error:(out id*)arg2 ;
-(char)associateToEnterpriseNetwork:(id)arg1 clientItemID:(EAPOLClientItemIDRef)arg2 username:(id)arg3 password:(id)arg4 identity:(OpaqueSecIdentityRefRef)arg5 forceBSSID:(char)arg6 remember:(char)arg7 error:(out id*)arg8 ;
-(id)scanForNetworksWithChannels:(id)arg1 ssid:(id)arg2 bssid:(id)arg3 restTime:(unsigned long long)arg4 dwellTime:(unsigned long long)arg5 ssidList:(id)arg6 error:(out id*)arg7 ;
-(id)virtualInterfaceRole;
-(CWIPMonitor *)ipMonitor;
-(char)monitorMode;
-(unsigned long long)maximumLinkSpeed;
-(unsigned long long)mcsIndex;
-(char)networkInterfaceAvailable;
-(char)wakeOnWirelessEnabled;
-(char)setWakeOnWirelessEnabled:(char)arg1 error:(out id*)arg2 ;
-(char)startHostAPModeWithSSID:(id)arg1 securityType:(unsigned long long)arg2 channel:(id)arg3 password:(id)arg4 error:(out id*)arg5 ;
-(char)startHostAPMode:(out id*)arg1 ;
-(void)stopHostAPMode;
-(char)associateToLoginWindowModeEnterpriseNetworkWithEAPProfile:(EAPOLClientProfileRef)arg1 username:(id)arg2 password:(id)arg3 error:(out id*)arg4 ;
-(char)associateToSystemModeEnterpriseNetwork:(id)arg1 error:(out id*)arg2 ;
-(char)associateToPasspointNetwork:(id)arg1 usingDomainName:(id)arg2 error:(out id*)arg3 ;
-(char)associateToEnterpriseNetwork:(id)arg1 clientItemID:(EAPOLClientItemIDRef)arg2 username:(id)arg3 password:(id)arg4 identity:(OpaqueSecIdentityRefRef)arg5 error:(out id*)arg6 ;
-(void)stopIBSSMode;
-(unsigned long long)interfaceCapabilities;
-(char)startWPSForNetwork:(id)arg1 pin:(id)arg2 remember:(char)arg3 error:(out id*)arg4 ;
-(void)clearScanCache;
-(char)busy;
-(char)isAirPlayInProgress;
-(id)lastPreferredNetworkJoined;
-(char)causedLastWake;
-(id)queryANQPElements:(unsigned long long)arg1 network:(id)arg2 maxAge:(double)arg3 waitForWiFi:(char)arg4 waitForBluetooth:(char)arg5 priority:(long long)arg6 error:(out id*)arg7 ;
-(id)queryANQPCacheWithElements:(unsigned long long)arg1 network:(id)arg2 maxAge:(double)arg3 ;
-(void)clearANQPCacheForNetwork:(id)arg1 ;
-(void)saveJoinConfigurationAndReply:(/*^block*/id)arg1 ;
-(void)restoreJoinConfigurationWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)lastTetherDeviceJoined;
-(char)connectToTetherDevice:(id)arg1 remember:(char)arg2 error:(id*)arg3 ;
-(id)parentInterfaceName;
-(id)awdlOperatingMode;
-(void)enableHostAPMode;
-(void)disableHostAPMode;
-(id)scanForNetworksWithParameters:(id)arg1 error:(out id*)arg2 ;
-(id)interfaceState;
-(char)power;
-(id)opMode;
-(char)powerSaveModeEnabled;
-(long long)aggregateRSSI;
-(long long)aggregateNoise;
-(NSSet *)supportedISMChannels;
-(id)phyMode;
-(char)associateToNetwork:(id)arg1 parameters:(id)arg2 error:(out id*)arg3 ;
-(char)enableIBSSWithParameters:(id)arg1 error:(out id*)arg2 ;
-(NSString *)interfaceName;
-(id)noise;
-(id)rssi;
-(id)txRate;
-(char)supportsShortGI40MHz;
-(id)countryCode;
-(char)setPower:(char)arg1 error:(out id*)arg2 ;
-(char)powerOn;
-(id)supportedWLANChannels;
-(id)scanForNetworksWithChannels:(id)arg1 ssid:(id)arg2 bssid:(id)arg3 error:(out id*)arg4 ;
-(id)bssid;
-(id)ssid;
-(long long)rssiValue;
-(id)ssidData;
-(id)lastNetworkJoined;
-(unsigned long long)securityType;
-(char)associateToNetwork:(id)arg1 password:(id)arg2 error:(out id*)arg3 ;
-(char)associateToNetwork:(id)arg1 password:(id)arg2 forceBSSID:(char)arg3 remember:(char)arg4 error:(out id*)arg5 ;
-(void)setCapabilities:(NSArray *)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)conformsToProtocol:(id)arg1 ;
-(id)name;
-(void*)device;
-(NSArray *)capabilities;
-(void)setDevice:(void*)arg1 ;
@end

