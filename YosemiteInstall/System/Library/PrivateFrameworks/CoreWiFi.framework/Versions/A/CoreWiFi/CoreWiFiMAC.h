/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString, NSMutableData, NSMutableArray, CoreWiFiRSNIE, CoreWiFiCountryIE, CoreWiFiAppleiOSIE, CoreWiFiAppleGeneralIE, CoreWiFiAppleDeviceIE, CoreWiFiDWDSIE, CoreWiFiWPSIE, CoreWiFiHTCapabilitiesIE, CoreWiFiHTOperationIE, CoreWiFiVHTCapabilitiesIE, CoreWiFiVHTOperationIE, NSNumber, CoreWiFiChannel;

@interface CoreWiFiMAC : NSObject {

	NSData* mac;
	NSString* ifName;
	unsigned long long lastUpdated;
	unsigned long long firstAdded;
	long long noise;
	long long RSSI;
	long long beaconInterval;
	unsigned short capabilities;
	char isESS;
	char isIBSS;
	char isCFPollable;
	char isCFPollRequest;
	char isPrivacy;
	char isShortPreamble;
	char isPBCC;
	char isChannelAgility;
	char isSpectrumManagement;
	char isQoS;
	char isShortSlotTime;
	char isAPSD;
	char isDSSSOFDM;
	char isDelayedBlockAck;
	char isImmediateBlockAck;
	NSMutableData* ieBuffer;
	NSMutableArray* IEs;
	NSMutableData* invalidIEs;
	NSData* SSID;
	NSMutableArray* supportedRates;
	CoreWiFiRSNIE* rsnIE;
	CoreWiFiRSNIE* wpaIE;
	CoreWiFiCountryIE* countryIE;
	CoreWiFiAppleiOSIE* iOSIE;
	CoreWiFiAppleGeneralIE* appleGeneralIE;
	CoreWiFiAppleDeviceIE* appleDeviceIE;
	CoreWiFiDWDSIE* dwdsIE;
	CoreWiFiWPSIE* wpsIE;
	CoreWiFiHTCapabilitiesIE* htCapsIE;
	CoreWiFiHTOperationIE* htOperationIE;
	CoreWiFiVHTCapabilitiesIE* vhtCapsIE;
	CoreWiFiVHTOperationIE* vhtOperationIE;
	NSNumber* maxPHYRate;
	NSNumber* maxClientRate;
	CoreWiFiChannel* channelInfo;
	NSString* securityFriendlyName;
	NSMutableArray* linkQualityHistory;

}

@property (nonatomic,readonly) NSData * mac; 
@property (nonatomic,readonly) NSString * ifName; 
@property (nonatomic,readonly) unsigned long long lastUpdated; 
@property (nonatomic,readonly) unsigned long long firstAdded; 
@property (nonatomic,readonly) long long noise; 
@property (nonatomic,readonly) long long RSSI; 
@property (nonatomic,readonly) long long beaconInterval; 
@property (nonatomic,readonly) unsigned short capabilities; 
@property (nonatomic,readonly) char isESS; 
@property (nonatomic,readonly) char isIBSS; 
@property (nonatomic,readonly) char isCFPollable; 
@property (nonatomic,readonly) char isCFPollRequest; 
@property (nonatomic,readonly) char isPrivacy; 
@property (nonatomic,readonly) char isShortPreamble; 
@property (nonatomic,readonly) char isPBCC; 
@property (nonatomic,readonly) char isChannelAgility; 
@property (nonatomic,readonly) char isSpectrumManagement; 
@property (nonatomic,readonly) char isQoS; 
@property (nonatomic,readonly) char isShortSlotTime; 
@property (nonatomic,readonly) char isAPSD; 
@property (nonatomic,readonly) char isDSSSOFDM; 
@property (nonatomic,readonly) char isDelayedBlockAck; 
@property (nonatomic,readonly) char isImmediateBlockAck; 
@property (nonatomic,readonly) NSMutableData * ieBuffer; 
@property (nonatomic,readonly) NSMutableArray * IEs; 
@property (nonatomic,readonly) NSMutableData * invalidIEs; 
@property (nonatomic,readonly) NSData * SSID; 
@property (nonatomic,readonly) NSMutableArray * supportedRates; 
@property (nonatomic,readonly) CoreWiFiRSNIE * rsnIE; 
@property (nonatomic,readonly) CoreWiFiRSNIE * wpaIE; 
@property (nonatomic,readonly) CoreWiFiCountryIE * countryIE; 
@property (nonatomic,readonly) CoreWiFiAppleDeviceIE * appleDeviceIE; 
@property (nonatomic,readonly) CoreWiFiAppleGeneralIE * appleGeneralIE; 
@property (nonatomic,readonly) CoreWiFiAppleiOSIE * iOSIE; 
@property (nonatomic,readonly) CoreWiFiDWDSIE * dwdsIE; 
@property (nonatomic,readonly) CoreWiFiWPSIE * wpsIE; 
@property (nonatomic,readonly) CoreWiFiHTCapabilitiesIE * htCapsIE; 
@property (nonatomic,readonly) CoreWiFiHTOperationIE * htOperationIE; 
@property (nonatomic,readonly) CoreWiFiVHTCapabilitiesIE * vhtCapsIE; 
@property (nonatomic,readonly) CoreWiFiVHTOperationIE * vhtOperationIE; 
@property (nonatomic,readonly) NSNumber * maxPHYRate; 
@property (nonatomic,readonly) NSNumber * maxClientRate; 
@property (nonatomic,readonly) CoreWiFiChannel * channelInfo; 
@property (nonatomic,readonly) NSString * securityFriendlyName; 
@property (nonatomic,readonly) NSMutableArray * linkQualityHistory; 
@property (readonly) long long channel; 
@property (readonly) long long channelWidth; 
-(long long)channel;
-(void)parseCapabilityField;
-(void)parseInformationElements;
-(id)initWithSkeleton:(id)arg1 ;
-(void)cleanupIEs;
-(long long)channelWidth;
-(NSData *)mac;
-(NSMutableData *)ieBuffer;
-(NSString *)ifName;
-(CoreWiFiChannel *)channelInfo;
-(long long)noise;
-(long long)beaconInterval;
-(NSData *)SSID;
-(id)initWithMAC:(id)arg1 interfaceName:(id)arg2 channel:(long long)arg3 channelFlags:(unsigned)arg4 rssi:(long long)arg5 noise:(long long)arg6 beaconInterval:(long long)arg7 capabilites:(unsigned short)arg8 ies:(id)arg9 ;
-(void)mergeEntries:(id)arg1 ;
-(char)doesSupportSecurityOpen;
-(char)doesSupportSecurityWEP;
-(char)doesSupportSecurityWPAPersonal;
-(char)doesSupportSecurityWPAEnterprise;
-(char)doesSupportSecurityWPS;
-(void)updateLinkQuality:(id)arg1 withTxRate:(id)arg2 ;
-(void)determineMaximumClientRate:(id)arg1 ;
-(unsigned long long)firstAdded;
-(char)isESS;
-(char)isIBSS;
-(char)isCFPollable;
-(char)isCFPollRequest;
-(char)isPrivacy;
-(char)isShortPreamble;
-(char)isPBCC;
-(char)isChannelAgility;
-(char)isSpectrumManagement;
-(char)isQoS;
-(char)isShortSlotTime;
-(char)isAPSD;
-(char)isDSSSOFDM;
-(char)isDelayedBlockAck;
-(char)isImmediateBlockAck;
-(NSMutableArray *)IEs;
-(NSMutableData *)invalidIEs;
-(NSMutableArray *)supportedRates;
-(CoreWiFiRSNIE *)rsnIE;
-(CoreWiFiRSNIE *)wpaIE;
-(CoreWiFiCountryIE *)countryIE;
-(CoreWiFiAppleGeneralIE *)appleGeneralIE;
-(CoreWiFiAppleDeviceIE *)appleDeviceIE;
-(CoreWiFiAppleiOSIE *)iOSIE;
-(CoreWiFiDWDSIE *)dwdsIE;
-(CoreWiFiWPSIE *)wpsIE;
-(CoreWiFiHTCapabilitiesIE *)htCapsIE;
-(CoreWiFiHTOperationIE *)htOperationIE;
-(NSNumber *)maxPHYRate;
-(NSNumber *)maxClientRate;
-(NSString *)securityFriendlyName;
-(NSMutableArray *)linkQualityHistory;
-(CoreWiFiVHTCapabilitiesIE *)vhtCapsIE;
-(CoreWiFiVHTOperationIE *)vhtOperationIE;
-(void)separateIEs;
-(void)parseInformationElement:(id)arg1 ;
-(void)determineMaxPhyRate;
-(void)parseInformationElementSSID:(id)arg1 ;
-(void)parseInformationElementSupportedRates:(id)arg1 withMaximumLength:(unsigned long long)arg2 ;
-(void)parseInformationElementVendorSpecific:(id)arg1 ;
-(unsigned long long)lastUpdated;
-(long long)RSSI;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(id)debugDescription;
-(unsigned short)capabilities;
-(id)skeleton;
@end
