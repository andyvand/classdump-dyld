/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/airportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <airportd/airportd-Structs.h>
@class NSObject, CWXPCSubsystem, NSString, CWScanCache, NSDate, CWNetwork, CWTetherDevice, CWJoinConfiguration, NSMutableDictionary, CWRoamingProfileConfiguration, CWIPMonitor, NSMutableArray;

@interface CWXPCInterfaceContext : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	CWXPCSubsystem* _xpcSubsystem;
	NSString* _interfaceName;
	CWScanCache* _scanCache;
	char* _isScanning2GHz;
	char* _isJoining2GHz;
	NSString* _preferredNetworkID;
	NSDate* _autoJoinTimestamp;
	CWNetwork* _associatedNetwork;
	CWTetherDevice* _lastTetherDevice;
	NSObject*<OS_dispatch_source> _bestConnectedTimer;
	NSObject*<OS_dispatch_source> _backgroundScanTimer;
	char _backgroundScanDeferred;
	NSObject*<OS_dispatch_source> _scanCacheUpdateCoalesceTimer;
	char _backgroundScanCancelled;
	CWJoinConfiguration* _joinConfiguration;
	NSMutableDictionary* _joinConfigurationMap;
	CWRoamingProfileConfiguration* _roamingProfileConfiguration;
	char _airPlayInProgress;
	long long _awdlSuspendCounter;
	char _waitingForIP;
	long long _assocCounter;
	CWIPMonitor* _ipMonitor;
	NSMutableArray* _awdlActiveSessionList;
	double _awdlActiveSessionStartTimestamp;
	double _wifiOnTimestamp;
	double _wifiOnDuration;
	apple80211_awdl_statistics _awdlStatistics;

}
+(long long)supportedRoamingProfileType:(long long)arg1 ;
+(id)__scanCacheResultsForInterface:(id)arg1 ;
-(id)initWithXPCSubsystem:(id)arg1 interfaceName:(id)arg2 ;
-(void)setAssociatedNetwork:(id)arg1 ;
-(void)setPreferredNetworkID:(id)arg1 ;
-(void)setLastTetherDevice:(id)arg1 ;
-(void)updateDynamicStoreWithEntries:(id)arg1 removeKeys:(id)arg2 ;
-(id)scanCache;
-(char)airPlayInProgress;
-(void)setJoinConfiguration:(id)arg1 ;
-(void)scheduleBackgroundScan;
-(void)cancelBackgroundScan;
-(void)scheduleBestConnectedScan;
-(void)cancelBestConnectedScan;
-(void)resetAWDL;
-(void)updateLastTetherDevice:(id)arg1 ;
-(void)setAutoJoinTimestamp:(id)arg1 ;
-(id)autoJoinTimestamp;
-(void)suspendAWDL;
-(void)setIsScanning2GHz:(char)arg1 ;
-(void)resumeAWDL;
-(long long)suspendAWDLForAssociation;
-(void)setIsJoining2GHz:(char)arg1 ;
-(char)checkIPStatusAndResumeAWDL;
-(void)resumeAWDLForAssociationWithToken:(long long)arg1 ;
-(void)updateCollocatedGroupsWithScanCacheResults;
-(void)updateCurrentPreferredNetworkChannelHistory;
-(id)associatedNetwork;
-(void)setAirPlayInProgress:(char)arg1 ;
-(void)wifiTurnedOn;
-(void)wifiTurnedOff;
-(void)awdlStarted;
-(void)awdlEnded;
-(void)__resumeAWDL;
-(void)handleIPStatusNotification:(id)arg1 ;
-(void)handleReachabilityNotification:(id)arg1 ;
-(void)__submitAWDLSummaryMTLog;
-(void)__synchronizeWithDynamicStore;
-(void)__updateRoamingProfileConfigurationWithInterface:(id)arg1 ;
-(id)__awdlInterfaceForParentInterface:(id)arg1 ;
-(char)__setAWDLOperatingMode:(int)arg1 interface:(id)arg2 error:(out id*)arg3 ;
-(void)__suspendAWDLForInterface:(id)arg1 ;
-(void)__suspendAWDL;
-(void)__resumeAWDLForInterface:(id)arg1 ;
-(void)__performScanWithChannelSubset:(id)arg1 ssidList:(id)arg2 legacySSID:(id)arg3 maxAge:(long long)arg4 maxWakeCount:(long long)arg5 waitForBluetooth:(char)arg6 reply:(/*^block*/id)arg7 ;
-(id)__performScanWithChannelSubset:(id)arg1 ssidList:(id)arg2 legacySSID:(id)arg3 maxAge:(long long)arg4 maxWakeCount:(long long)arg5 waitForBluetooth:(char)arg6 error:(id*)arg7 ;
-(void)__updateCurrentPreferredNetworkChannelHistory;
-(void)__updateCollocatedGroupsWithScanCacheResults;
-(void)__updateDynamicStoreWithEntries:(id)arg1 removeKeys:(id)arg2 ;
-(void)__scheduleBestConnectedScanWithInterval:(double)arg1 ;
-(void)__scheduleBackgroundScan;
-(void)__performScanWithSSIDList:(id)arg1 legacySSID:(id)arg2 maxAge:(long long)arg3 maxWakeCount:(long long)arg4 interface:(id)arg5 ;
-(void)__updateRoamingProfileTypeWithInterface:(id)arg1 ;
-(void)__triggerRoamWithInterface:(id)arg1 ;
-(void)__scheduleMultiSSIDBackgroundScanWithSSIDList:(id)arg1 interval:(double)arg2 ;
-(void)__scheduleLegacyBackgroundScanWithSSIDList:(id)arg1 broadcastScanCompleted:(char)arg2 interval:(double)arg3 ;
-(id)__hiddenSSIDList;
-(char)isScanning2GHz;
-(char)isJoining2GHz;
-(id)lastTetherDevice;
-(id)preferredNetworkID;
-(id)joinConfiguration;
-(id)joinConfigurationWithUUID:(id)arg1 ;
-(void)setJoinConfiguration:(id)arg1 uuid:(id)arg2 ;
-(char)__isProvisionedForPasspoint;
-(void)__matchPasspointANQPElementsWithNetwork:(id)arg1 anqpElements:(id)arg2 domainName:(out id*)arg3 realm:(out id*)arg4 roamingConsortium:(out id*)arg5 ;
-(void)synchronizeWithDynamicStore;
-(char)autoJoinCompletedSinceWake;
-(id)interfaceName;
-(void)dealloc;
@end
