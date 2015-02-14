/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommonUtilities/CommonUtilities-Structs.h>
#import <CommonUtilities/CUTPowerMonitorDelegate.h>

@class NSMutableSet, NSRecursiveLock, NSHashTable, NSDictionary, NSThread, NSRunLoop, NSNumber, NSString;

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate> {

	char _shouldAutoAssociateAsForeground;
	char _isHostingHotSpot;
	char _isWifiEnabled;
	char _isWakeOnWiFiEnabled;
	char _isWakeOnWiFiSupported;
	int _linkToken;
	NSMutableSet* _wiFiAutoAssociationTokens;
	NSRecursiveLock* _lock;
	NSHashTable* _delegateMap;
	NSHashTable* _wowClients;
	void* _currentNetwork;
	void* _wifiManager;
	void* _wifiDevice;
	void* _dynamicStore;
	NSDictionary* _lastWiFiPowerInfo;
	NSThread* _wifiThread;
	CFRunLoopSourceRef _runLoopSource;
	NSRunLoop* _wifiRunLoop;

}

@property (nonatomic,readonly) char isWiFiEnabled;                                  //@synthesize isWifiEnabled=_isWifiEnabled - In the implementation block
@property (nonatomic,readonly) char isWiFiAssociated; 
@property (nonatomic,readonly) char isWiFiCaptive; 
@property (nonatomic,readonly) char isHostingWiFiHotSpot;                           //@synthesize isHostingHotSpot=_isHostingHotSpot - In the implementation block
@property (nonatomic,readonly) char isWoWSupported;                                 //@synthesize isWakeOnWiFiSupported=_isWakeOnWiFiSupported - In the implementation block
@property (nonatomic,readonly) char isWoWEnabled;                                   //@synthesize isWakeOnWiFiEnabled=_isWakeOnWiFiEnabled - In the implementation block
@property (nonatomic,readonly) char willTryToSearchForWiFiNetwork; 
@property (nonatomic,readonly) char willTryToAutoAssociateWiFiNetwork; 
@property (nonatomic,retain,readonly) NSNumber * wiFiSignalStrength; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRSSI; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRate; 
@property (nonatomic,retain,readonly) NSString * currentSSID; 
@property (assign,nonatomic) char autoAssociateWiFiAsForegroundClient;              //@synthesize shouldAutoAssociateAsForeground=_shouldAutoAssociateAsForeground - In the implementation block
@property (nonatomic,readonly) char autoAssociateWiFi; 
@property (nonatomic,retain) NSRecursiveLock * lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSThread * wifiThread;                                 //@synthesize wifiThread=_wifiThread - In the implementation block
@property (nonatomic,retain) NSRunLoop * wifiRunLoop;                               //@synthesize wifiRunLoop=_wifiRunLoop - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSource;                      //@synthesize runLoopSource=_runLoopSource - In the implementation block
@property (assign,nonatomic) void* wifiManager;                                     //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) void* wifiDevice;                                      //@synthesize wifiDevice=_wifiDevice - In the implementation block
@property (assign,nonatomic) void* currentNetwork;                                  //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign,nonatomic) void* dynamicStore;                                    //@synthesize dynamicStore=_dynamicStore - In the implementation block
@property (assign,nonatomic) int linkToken;                                         //@synthesize linkToken=_linkToken - In the implementation block
@property (nonatomic,retain) NSHashTable * delegateMap;                             //@synthesize delegateMap=_delegateMap - In the implementation block
@property (nonatomic,retain) NSHashTable * wowClients;                              //@synthesize wowClients=_wowClients - In the implementation block
@property (nonatomic,copy) NSDictionary * lastWiFiPowerInfo;                        //@synthesize lastWiFiPowerInfo=_lastWiFiPowerInfo - In the implementation block
@property (nonatomic,retain) NSMutableSet * wiFiAutoAssociationTokens;              //@synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)removeDelegate:(id)arg1 ;
-(char)isWiFiEnabled;
-(void)addDelegate:(id)arg1 ;
-(NSString *)currentSSID;
-(void)_adjustWiFiAutoAssociation;
-(void)_adjustWoWState;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)addWoWClient:(id)arg1 ;
-(void)removeWoWClient:(id)arg1 ;
-(char)hasWoWClient:(id)arg1 ;
-(void)_createWiFiManager;
-(void)_createDynamicStore;
-(char)isHostingWiFiHotSpot;
-(char)willTryToAutoAssociateWiFiNetwork;
-(char)willTryToSearchForWiFiNetwork;
-(NSNumber *)wiFiSignalStrength;
-(NSNumber *)wiFiScaledRSSI;
-(NSNumber *)wiFiScaledRate;
-(char)isWiFiAssociated;
-(void)_updateIsWiFiAssociatedAsync:(char)arg1 ;
-(void)_updateIsWiFiEnabled;
-(double)_wifiMeasurementErrorForInterval:(double)arg1 ;
-(void)currentWiFiNetworkPowerUsageWithCompletion:(/*^block*/id)arg1 ;
-(char)_isPrimaryCellular;
-(char)isWiFiCaptive;
-(char)autoAssociateWiFi;
-(char)hasWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)addWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)removeWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)showNetworkOptions;
-(char)isWoWEnabled;
-(char)autoAssociateWiFiAsForegroundClient;
-(void)setAutoAssociateWiFiAsForegroundClient:(char)arg1 ;
-(char)isWoWSupported;
-(NSMutableSet *)wiFiAutoAssociationTokens;
-(void)setWiFiAutoAssociationTokens:(NSMutableSet *)arg1 ;
-(NSHashTable *)delegateMap;
-(void)setDelegateMap:(NSHashTable *)arg1 ;
-(NSHashTable *)wowClients;
-(void)setWowClients:(NSHashTable *)arg1 ;
-(void*)currentNetwork;
-(void)setCurrentNetwork:(void*)arg1 ;
-(int)linkToken;
-(void)setLinkToken:(int)arg1 ;
-(void*)wifiManager;
-(void)setWifiManager:(void*)arg1 ;
-(void*)wifiDevice;
-(void)setWifiDevice:(void*)arg1 ;
-(void*)dynamicStore;
-(void)setDynamicStore:(void*)arg1 ;
-(NSDictionary *)lastWiFiPowerInfo;
-(void)setLastWiFiPowerInfo:(NSDictionary *)arg1 ;
-(NSThread *)wifiThread;
-(void)setWifiThread:(NSThread *)arg1 ;
-(CFRunLoopSourceRef)runLoopSource;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(NSRunLoop *)wifiRunLoop;
-(void)setWifiRunLoop:(NSRunLoop *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSRecursiveLock *)lock;
-(void)setLock:(NSRecursiveLock *)arg1 ;
@end

