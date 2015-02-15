/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString, NSMutableArray, CoreWiFiWakeOnWireless, CoreWiFiChannel;

@interface CoreWiFiInterface : NSObject {

	NSData* ifMAC;
	NSString* ifName;
	NSString* ifRole;
	NSString* ifParent;
	unsigned long long numSpatialStreams;
	char supports80211a;
	char supports80211ac;
	char supports80211b;
	char supports80211g;
	char supports80211n;
	char supportsWEP;
	char supportsTKIP;
	char supportsAES;
	char supportsAESCCM;
	char supportsCKIP;
	char supportsIBSS;
	char supportsPowerManagement;
	char supportsAccessPoint;
	char supportsTxPowerManagement;
	char supportsShortSlotTime;
	char supportsShortPreamble;
	char supportsMonitorMode;
	char supportsTKIPMIC;
	char supportsWPA1;
	char supportsWPA2;
	char supportsWPA;
	char supportsFrameBursting;
	char supportsWME;
	char supportsShortGI40MHz;
	char supportsShortGI20MHz;
	char supportsWakeOnWireless;
	char supportsTSN;
	char supportsMultiSSIDScan;
	char supportsBluetoothCoexistence;
	char supportsActionFrames;
	char supportsAppleP2P;
	char supportsOpportunisticRoam;
	char supportsAqm;
	char supportsRxPolling;
	char supportsDualBand;
	char supportsApMode;
	char supportsEnhancedBgScan;
	char supportsAwdl;
	char supportsFtVe;
	char supportsOffloadScanning;
	char supportsOffloadBeaconProcessing;
	char supportsOffloadChannelSwitch;
	char supportsOffloadKeepaliveL2;
	char supportsOffloadRsn;
	char supportsOffloadGtk;
	char supportsOffloadArpNdp;
	char supportsOffloadTcpChecksum;
	char supportsPerChainAck;
	char supportsShortGI80MHz;
	char supportsShortGI160MHz;
	NSMutableArray* spatialStreams;
	NSMutableArray* availableChannels;
	CoreWiFiWakeOnWireless* wow;
	NSData* currentBSSID;
	NSData* currentCountryCode;
	CoreWiFiChannel* currentChannel;
	NSData* currentSSID;
	long long currentSupportedPhyModes;
	long long currentActivePhyMode;
	long long unitOfRssi;
	long long aggregateControlRssi;
	long long aggregateExtensionRssi;
	long long unitOfNoise;
	long long aggregateControlNoise;
	long long aggregateExtensionNoise;

}

@property (nonatomic,retain,readonly) NSData * ifMAC; 
@property (nonatomic,retain,readonly) NSString * ifName; 
@property (nonatomic,retain,readonly) NSString * ifRole; 
@property (nonatomic,retain,readonly) NSString * ifParent; 
@property (nonatomic,readonly) unsigned long long numSpatialStreams; 
@property (nonatomic,readonly) char supports80211a; 
@property (nonatomic,readonly) char supports80211ac; 
@property (nonatomic,readonly) char supports80211b; 
@property (nonatomic,readonly) char supports80211g; 
@property (nonatomic,readonly) char supports80211n; 
@property (nonatomic,readonly) char supportsWEP; 
@property (nonatomic,readonly) char supportsTKIP; 
@property (nonatomic,readonly) char supportsAES; 
@property (nonatomic,readonly) char supportsAESCCM; 
@property (nonatomic,readonly) char supportsCKIP; 
@property (nonatomic,readonly) char supportsIBSS; 
@property (nonatomic,readonly) char supportsPowerManagement; 
@property (nonatomic,readonly) char supportsAccessPoint; 
@property (nonatomic,readonly) char supportsTxPowerManagement; 
@property (nonatomic,readonly) char supportsShortSlotTime; 
@property (nonatomic,readonly) char supportsShortPreamble; 
@property (nonatomic,readonly) char supportsMonitorMode; 
@property (nonatomic,readonly) char supportsTKIPMIC; 
@property (nonatomic,readonly) char supportsWPA1; 
@property (nonatomic,readonly) char supportsWPA2; 
@property (nonatomic,readonly) char supportsWPA; 
@property (nonatomic,readonly) char supportsFrameBursting; 
@property (nonatomic,readonly) char supportsWME; 
@property (nonatomic,readonly) char supportsShortGI40MHz; 
@property (nonatomic,readonly) char supportsShortGI20MHz; 
@property (nonatomic,readonly) char supportsWakeOnWireless; 
@property (nonatomic,readonly) char supportsTSN; 
@property (nonatomic,readonly) char supportsMultiSSIDScan; 
@property (nonatomic,readonly) char supportsBluetoothCoexistence; 
@property (nonatomic,readonly) char supportsActionFrames; 
@property (nonatomic,readonly) char supportsAppleP2P; 
@property (nonatomic,readonly) char supportsOpportunisticRoam; 
@property (nonatomic,readonly) char supportsAqm; 
@property (nonatomic,readonly) char supportsRxPolling; 
@property (nonatomic,readonly) char supportsDualBand; 
@property (nonatomic,readonly) char supportsApMode; 
@property (nonatomic,readonly) char supportsEnhancedBgScan; 
@property (nonatomic,readonly) char supportsAwdl; 
@property (nonatomic,readonly) char supportsFtVe; 
@property (nonatomic,readonly) char supportsOffloadScanning; 
@property (nonatomic,readonly) char supportsOffloadBeaconProcessing; 
@property (nonatomic,readonly) char supportsOffloadChannelSwitch; 
@property (nonatomic,readonly) char supportsOffloadKeepaliveL2; 
@property (nonatomic,readonly) char supportsOffloadRsn; 
@property (nonatomic,readonly) char supportsOffloadGtk; 
@property (nonatomic,readonly) char supportsOffloadArpNdp; 
@property (nonatomic,readonly) char supportsOffloadTcpChecksum; 
@property (nonatomic,readonly) char supportsPerChainAck; 
@property (nonatomic,readonly) char supportsShortGI80MHz; 
@property (nonatomic,readonly) char supportsShortGI160MHz; 
@property (nonatomic,retain,readonly) NSMutableArray * availableChannels; 
@property (nonatomic,retain,readonly) NSMutableArray * spatialStreams; 
@property (nonatomic,retain,readonly) CoreWiFiWakeOnWireless * wow; 
@property (nonatomic,retain,readonly) NSData * currentBSSID; 
@property (nonatomic,retain,readonly) NSData * currentCountryCode; 
@property (nonatomic,retain,readonly) CoreWiFiChannel * currentChannel; 
@property (nonatomic,retain,readonly) NSData * currentSSID; 
@property (nonatomic,readonly) long long currentSupportedPhyModes; 
@property (nonatomic,readonly) long long currentActivePhyMode; 
@property (nonatomic,readonly) long long unitOfRssi; 
@property (nonatomic,readonly) long long aggregateControlRssi; 
@property (nonatomic,readonly) long long aggregateExtensionRssi; 
@property (nonatomic,readonly) long long unitOfNoise; 
@property (nonatomic,readonly) long long aggregateControlNoise; 
@property (nonatomic,readonly) long long aggregateExtensionNoise; 
@property (readonly) char isPhysical; 
@property (readonly) char isVirtual; 
+(id)interfaceWithName:(id)arg1 error:(id*)arg2 ;
+(id)queryList:(id*)arg1 ;
+(id)queryPhysicalInterfaceList:(id*)arg1 ;
-(id)initWithSkeleton:(id)arg1 ;
-(NSString *)ifName;
-(id)initWithMAC:(id)arg1 withBSDName:(id)arg2 ;
-(char)isPhysical;
-(NSData *)ifMAC;
-(NSString *)ifRole;
-(NSString *)ifParent;
-(unsigned long long)numSpatialStreams;
-(char)supports80211a;
-(char)supports80211ac;
-(char)supports80211b;
-(char)supports80211g;
-(char)supports80211n;
-(char)supportsWEP;
-(char)supportsTKIP;
-(char)supportsAES;
-(char)supportsAESCCM;
-(char)supportsCKIP;
-(char)supportsIBSS;
-(char)supportsPowerManagement;
-(char)supportsAccessPoint;
-(char)supportsTxPowerManagement;
-(char)supportsShortSlotTime;
-(char)supportsShortPreamble;
-(char)supportsMonitorMode;
-(char)supportsTKIPMIC;
-(char)supportsWPA1;
-(char)supportsWPA2;
-(char)supportsWPA;
-(char)supportsFrameBursting;
-(char)supportsWME;
-(char)supportsShortGI40MHz;
-(char)supportsShortGI20MHz;
-(char)supportsWakeOnWireless;
-(char)supportsTSN;
-(char)supportsMultiSSIDScan;
-(char)supportsBluetoothCoexistence;
-(char)supportsActionFrames;
-(char)supportsAppleP2P;
-(char)supportsOpportunisticRoam;
-(char)supportsAqm;
-(char)supportsRxPolling;
-(char)supportsDualBand;
-(char)supportsApMode;
-(char)supportsEnhancedBgScan;
-(char)supportsAwdl;
-(char)supportsFtVe;
-(char)supportsOffloadScanning;
-(char)supportsOffloadBeaconProcessing;
-(char)supportsOffloadChannelSwitch;
-(char)supportsOffloadKeepaliveL2;
-(char)supportsOffloadRsn;
-(char)supportsOffloadGtk;
-(char)supportsOffloadArpNdp;
-(char)supportsOffloadTcpChecksum;
-(char)supportsPerChainAck;
-(char)supportsShortGI80MHz;
-(char)supportsShortGI160MHz;
-(NSMutableArray *)availableChannels;
-(NSMutableArray *)spatialStreams;
-(CoreWiFiWakeOnWireless *)wow;
-(NSData *)currentBSSID;
-(NSData *)currentCountryCode;
-(CoreWiFiChannel *)currentChannel;
-(NSData *)currentSSID;
-(long long)currentSupportedPhyModes;
-(long long)currentActivePhyMode;
-(long long)unitOfRssi;
-(long long)aggregateControlRssi;
-(long long)aggregateExtensionRssi;
-(long long)unitOfNoise;
-(long long)aggregateControlNoise;
-(long long)aggregateExtensionNoise;
-(char)enableInterface:(id*)arg1 ;
-(char)disableInterface:(id*)arg1 ;
-(char)changeInterfaceRole:(id)arg1 error:(id*)arg2 ;
-(char)addInformationElement:(id)arg1 error:(id*)arg2 ;
-(char)removeInformationElement:(id)arg1 error:(id*)arg2 ;
-(id)queryInformationElementList:(id*)arg1 ;
-(id)queryChannelList:(id*)arg1 ;
-(id)createInterfaceAP:(id)arg1 error:(id*)arg2 ;
-(id)createInterfaceP2pClient:(id*)arg1 ;
-(id)createInterfaceP2pDevice:(id*)arg1 ;
-(id)createInterfaceP2pGO:(id*)arg1 ;
-(id)createInterfaceWDS:(id)arg1 error:(id*)arg2 ;
-(char)deleteVirtualInterface:(id*)arg1 ;
-(id)queryVirtualInterfaceList:(id*)arg1 ;
-(char)joinBSS:(id)arg1 passphrase:(id)arg2 bssid:(id)arg3 error:(id*)arg4 ;
-(char)setPMK:(id)arg1 forBSSID:(id)arg2 error:(id*)arg3 ;
-(char)joinBSS:(id)arg1 error:(id*)arg2 ;
-(char)leaveBSS:(id*)arg1 ;
-(char)setWEPKey:(id)arg1 keyIndex:(unsigned long long)arg2 isTX:(id)arg3 isRX:(id)arg4 isUnicast:(id)arg5 isMulticast:(id)arg6 error:(id*)arg7 ;
-(char)setPMK:(id)arg1 error:(id*)arg2 ;
-(char)bssStart:(id*)arg1 ;
-(char)bssStop:(id*)arg1 ;
-(id)queryClientList:(id*)arg1 ;
-(char)isVirtual;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)skeleton;
@end

