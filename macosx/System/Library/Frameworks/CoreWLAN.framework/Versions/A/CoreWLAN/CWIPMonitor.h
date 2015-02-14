/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreWLAN/CoreWLAN-Structs.h>
@class NSString, NSDictionary, NSArray;

@interface CWIPMonitor : NSObject {

	NSString* _interfaceName;
	NSString* _wifiServiceID;
	NSString* _ipv4WiFiStateKey;
	NSDictionary* _ipv4WiFiStateConfig;
	NSString* _ipv4WiFiSetupKey;
	NSDictionary* _ipv4WiFiSetupConfig;
	NSString* _ipv6WiFiStateKey;
	NSDictionary* _ipv6WiFiStateConfig;
	NSString* _ipv6WiFiSetupKey;
	NSDictionary* _ipv6WiFiSetupConfig;
	NSString* _ipv4GlobalStateKey;
	NSDictionary* _ipv4GlobalStateConfig;
	NSString* _ipv4GlobalSetupKey;
	NSDictionary* _ipv4GlobalSetupConfig;
	NSString* _ipv6GlobalStateKey;
	NSDictionary* _ipv6GlobalStateConfig;
	NSString* _ipv6GlobalSetupKey;
	NSDictionary* _ipv6GlobalSetupConfig;
	unsigned _reachabilityFlags;
	dispatch_queue_sRef _internalQueue;
	void* _globalStore;
	void* _networkServiceStore;
	void* _ipStore;
	void* _reachabilityRef;

}

@property (copy) NSString * interfaceName;                              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (readonly) char ipv4Available; 
@property (readonly) char ipv6Available; 
@property (readonly) char ipv4Routable; 
@property (readonly) char ipv6Routable; 
@property (readonly) char ipv4PrimaryInterface; 
@property (readonly) char ipv6PrimaryInterface; 
@property (readonly) NSString * ipv4PrimaryServiceID; 
@property (readonly) NSString * ipv6PrimaryServiceID; 
@property (readonly) char internetReachable; 
@property (readonly) NSArray * ipv4Addresses; 
@property (readonly) NSArray * ipv6Addresses; 
@property (readonly) NSString * ipv4Router; 
@property (readonly) NSString * ipv6Router; 
@property (readonly) NSDictionary * ipv4StateConfig; 
@property (readonly) NSDictionary * ipv6StateConfig; 
@property (readonly) NSDictionary * ipv4GlobalStateConfig; 
@property (readonly) NSDictionary * ipv6GlobalStateConfig; 
@property (readonly) NSDictionary * ipv4SetupConfig; 
@property (readonly) NSDictionary * ipv6SetupConfig; 
@property (readonly) NSDictionary * ipv4GlobalSetupConfig; 
@property (readonly) NSDictionary * ipv6GlobalSetupConfig; 
@property (copy) NSString * wifiServiceID;                              //@synthesize wifiServiceID=_wifiServiceID - In the implementation block
@property (copy) NSString * ipv4WiFiStateKey;                           //@synthesize ipv4WiFiStateKey=_ipv4WiFiStateKey - In the implementation block
@property (copy) NSDictionary * ipv4WiFiStateConfig;                    //@synthesize ipv4WiFiStateConfig=_ipv4WiFiStateConfig - In the implementation block
@property (copy) NSString * ipv4WiFiSetupKey;                           //@synthesize ipv4WiFiSetupKey=_ipv4WiFiSetupKey - In the implementation block
@property (copy) NSDictionary * ipv4WiFiSetupConfig;                    //@synthesize ipv4WiFiSetupConfig=_ipv4WiFiSetupConfig - In the implementation block
@property (copy) NSString * ipv4GlobalStateKey;                         //@synthesize ipv4GlobalStateKey=_ipv4GlobalStateKey - In the implementation block
@property (copy) NSDictionary * ipv4WiFiGlobalStateConfig;              //@synthesize ipv4GlobalStateConfig=_ipv4GlobalStateConfig - In the implementation block
@property (copy) NSString * ipv4GlobalSetupKey;                         //@synthesize ipv4GlobalSetupKey=_ipv4GlobalSetupKey - In the implementation block
@property (copy) NSDictionary * ipv4WiFiGlobalSetupConfig;              //@synthesize ipv4GlobalSetupConfig=_ipv4GlobalSetupConfig - In the implementation block
@property (copy) NSString * ipv6WiFiStateKey;                           //@synthesize ipv6WiFiStateKey=_ipv6WiFiStateKey - In the implementation block
@property (copy) NSDictionary * ipv6WiFiStateConfig;                    //@synthesize ipv6WiFiStateConfig=_ipv6WiFiStateConfig - In the implementation block
@property (copy) NSString * ipv6WiFiSetupKey;                           //@synthesize ipv6WiFiSetupKey=_ipv6WiFiSetupKey - In the implementation block
@property (copy) NSDictionary * ipv6WiFiSetupConfig;                    //@synthesize ipv6WiFiSetupConfig=_ipv6WiFiSetupConfig - In the implementation block
@property (copy) NSString * ipv6GlobalStateKey;                         //@synthesize ipv6GlobalStateKey=_ipv6GlobalStateKey - In the implementation block
@property (copy) NSDictionary * ipv6WiFiGlobalStateConfig;              //@synthesize ipv6GlobalStateConfig=_ipv6GlobalStateConfig - In the implementation block
@property (copy) NSString * ipv6GlobalSetupKey;                         //@synthesize ipv6GlobalSetupKey=_ipv6GlobalSetupKey - In the implementation block
@property (copy) NSDictionary * ipv6WiFiGlobalSetupConfig;              //@synthesize ipv6GlobalSetupConfig=_ipv6GlobalSetupConfig - In the implementation block
@property (assign) unsigned reachabilityFlags;                          //@synthesize reachabilityFlags=_reachabilityFlags - In the implementation block
+(id)ipMonitorForInterfaceWithName:(id)arg1 ;
-(id)initForInterfaceWithName:(id)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)queryGlobalIPv4StateConfig;
-(id)queryGlobalIPv4SetupConfig;
-(id)queryGlobalIPv6StateConfig;
-(id)queryGlobalIPv6SetupConfig;
-(unsigned)queryNetworkReachabilityFlags;
-(id)queryWiFiNetworkServiceID;
-(void)monitorNetworkServiceID:(id)arg1 ;
-(id)queryWiFiIPv4StateConfig;
-(id)queryWiFiIPv4SetupConfig;
-(id)queryWiFiIPv6StateConfig;
-(id)queryWiFiIPv6SetupConfig;
-(NSString *)wifiServiceID;
-(NSDictionary *)ipv4WiFiStateConfig;
-(NSDictionary *)ipv4WiFiSetupConfig;
-(NSDictionary *)ipv6WiFiStateConfig;
-(NSDictionary *)ipv6WiFiSetupConfig;
-(NSDictionary *)ipv4WiFiGlobalStateConfig;
-(NSDictionary *)ipv6WiFiGlobalStateConfig;
-(NSDictionary *)ipv4WiFiGlobalSetupConfig;
-(NSDictionary *)ipv6WiFiGlobalSetupConfig;
-(char)internetReachable;
-(NSArray *)ipv4Addresses;
-(NSArray *)ipv6Addresses;
-(NSString *)ipv4Router;
-(NSString *)ipv6Router;
-(char)ipv4PrimaryInterface;
-(NSString *)ipv4PrimaryServiceID;
-(char)ipv4Available;
-(char)ipv6Available;
-(char)ipv4Routable;
-(char)ipv6PrimaryInterface;
-(NSString *)ipv6PrimaryServiceID;
-(char)ipv6Routable;
-(NSDictionary *)ipv4GlobalSetupConfig;
-(NSDictionary *)ipv4GlobalStateConfig;
-(NSDictionary *)ipv4SetupConfig;
-(NSDictionary *)ipv4StateConfig;
-(NSDictionary *)ipv6GlobalSetupConfig;
-(NSDictionary *)ipv6GlobalStateConfig;
-(NSDictionary *)ipv6SetupConfig;
-(NSDictionary *)ipv6StateConfig;
-(void)setWifiServiceID:(NSString *)arg1 ;
-(NSString *)ipv4WiFiStateKey;
-(void)setIpv4WiFiStateKey:(NSString *)arg1 ;
-(void)setIpv4WiFiStateConfig:(NSDictionary *)arg1 ;
-(NSString *)ipv4WiFiSetupKey;
-(void)setIpv4WiFiSetupKey:(NSString *)arg1 ;
-(void)setIpv4WiFiSetupConfig:(NSDictionary *)arg1 ;
-(NSString *)ipv6WiFiStateKey;
-(void)setIpv6WiFiStateKey:(NSString *)arg1 ;
-(void)setIpv6WiFiStateConfig:(NSDictionary *)arg1 ;
-(NSString *)ipv6WiFiSetupKey;
-(void)setIpv6WiFiSetupKey:(NSString *)arg1 ;
-(void)setIpv6WiFiSetupConfig:(NSDictionary *)arg1 ;
-(NSString *)ipv4GlobalStateKey;
-(void)setIpv4GlobalStateKey:(NSString *)arg1 ;
-(void)setIpv4WiFiGlobalStateConfig:(NSDictionary *)arg1 ;
-(NSString *)ipv4GlobalSetupKey;
-(void)setIpv4GlobalSetupKey:(NSString *)arg1 ;
-(void)setIpv4WiFiGlobalSetupConfig:(NSDictionary *)arg1 ;
-(NSString *)ipv6GlobalStateKey;
-(void)setIpv6GlobalStateKey:(NSString *)arg1 ;
-(void)setIpv6WiFiGlobalStateConfig:(NSDictionary *)arg1 ;
-(NSString *)ipv6GlobalSetupKey;
-(void)setIpv6GlobalSetupKey:(NSString *)arg1 ;
-(void)setIpv6WiFiGlobalSetupConfig:(NSDictionary *)arg1 ;
-(unsigned)reachabilityFlags;
-(void)setReachabilityFlags:(unsigned)arg1 ;
-(NSString *)interfaceName;
-(void)finalize;
-(void)dealloc;
-(id)description;
@end

