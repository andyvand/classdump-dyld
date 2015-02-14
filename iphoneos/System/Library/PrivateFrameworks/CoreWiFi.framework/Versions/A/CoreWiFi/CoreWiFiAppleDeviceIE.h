/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFiIE.h>

@class NSString, NSData;

@interface CoreWiFiAppleDeviceIE : CoreWiFiIE {

	char supportsAirPlay;
	char isUnconfigured;
	char supportsMFiConfigurationV1;
	char supportsWow;
	char hasInterferenceRobustness;
	char hasRemotePppoeServer;
	char supportsWps;
	char isWpsActive;
	char supportsAirPrint;
	char supportsACP;
	char supports24GHzWiFiNetworks;
	char supports5GHzWiFiNetworks;
	NSString* friendlyName;
	NSString* manufacturerName;
	NSString* modelName;
	NSData* deviceOUI;
	char isDwdsMaster;
	char isDwdsRelay;
	char isDwdsRemote;
	char supportsDwdsAmpduNotSupported;
	char supportsDwdsAmpduWorkaround;
	char supportsDwdsAmpduFullSupport;
	char isDwdsClosedNetwork;
	NSData* bluetoothMac;
	NSData* deviceID;

}

@property (assign,nonatomic) char supportsAirPlay; 
@property (assign,nonatomic) char isUnconfigured; 
@property (assign,nonatomic) char supportsMFiConfigurationV1; 
@property (assign,nonatomic) char supportsWow; 
@property (assign,nonatomic) char hasInterferenceRobustness; 
@property (assign,nonatomic) char hasRemotePppoeServer; 
@property (assign,nonatomic) char supportsWps; 
@property (assign,nonatomic) char isWpsActive; 
@property (assign,nonatomic) char supportsAirPrint; 
@property (assign,nonatomic) char supportsACP; 
@property (assign,nonatomic) char supports24GHzWiFiNetworks; 
@property (assign,nonatomic) char supports5GHzWiFiNetworks; 
@property (nonatomic,retain) NSString * friendlyName; 
@property (nonatomic,retain) NSString * manufacturerName; 
@property (nonatomic,retain) NSString * modelName; 
@property (nonatomic,retain) NSData * deviceOUI; 
@property (assign,nonatomic) char isDwdsMaster; 
@property (assign,nonatomic) char isDwdsRelay; 
@property (assign,nonatomic) char isDwdsRemote; 
@property (assign,nonatomic) char supportsDwdsAmpduNotSupported; 
@property (assign,nonatomic) char supportsDwdsAmpduWorkaround; 
@property (assign,nonatomic) char supportsDwdsAmpduFullSupport; 
@property (assign,nonatomic) char isDwdsClosedNetwork; 
@property (nonatomic,retain) NSData * bluetoothMac; 
@property (nonatomic,retain) NSData * deviceID; 
-(NSString *)manufacturerName;
-(void)setManufacturerName:(NSString *)arg1 ;
-(NSString *)modelName;
-(id)initWithIE:(id)arg1 ;
-(char)parseIE:(id*)arg1 ;
-(void)setModelName:(NSString *)arg1 ;
-(char)isDwdsMaster;
-(void)setIsDwdsMaster:(char)arg1 ;
-(char)isDwdsRelay;
-(void)setIsDwdsRelay:(char)arg1 ;
-(char)isDwdsRemote;
-(void)setIsDwdsRemote:(char)arg1 ;
-(NSString *)friendlyName;
-(void)setFriendlyName:(NSString *)arg1 ;
-(char)generateIE:(id*)arg1 ;
-(char)hasInterferenceRobustness;
-(void)setHasInterferenceRobustness:(char)arg1 ;
-(char)isUnconfigured;
-(void)setIsUnconfigured:(char)arg1 ;
-(char)supportsMFiConfigurationV1;
-(char)supportsAirPlay;
-(void)setSupportsAirPlay:(char)arg1 ;
-(void)setSupportsMFiConfigurationV1:(char)arg1 ;
-(char)supportsWow;
-(void)setSupportsWow:(char)arg1 ;
-(char)hasRemotePppoeServer;
-(void)setHasRemotePppoeServer:(char)arg1 ;
-(char)supportsWps;
-(void)setSupportsWps:(char)arg1 ;
-(char)supportsAirPrint;
-(void)setSupportsAirPrint:(char)arg1 ;
-(char)supportsACP;
-(void)setSupportsACP:(char)arg1 ;
-(char)supports24GHzWiFiNetworks;
-(void)setSupports24GHzWiFiNetworks:(char)arg1 ;
-(char)supports5GHzWiFiNetworks;
-(void)setSupports5GHzWiFiNetworks:(char)arg1 ;
-(char)isWpsActive;
-(void)setIsWpsActive:(char)arg1 ;
-(NSData *)deviceOUI;
-(void)setDeviceOUI:(NSData *)arg1 ;
-(char)supportsDwdsAmpduNotSupported;
-(void)setSupportsDwdsAmpduNotSupported:(char)arg1 ;
-(char)supportsDwdsAmpduWorkaround;
-(void)setSupportsDwdsAmpduWorkaround:(char)arg1 ;
-(char)supportsDwdsAmpduFullSupport;
-(void)setSupportsDwdsAmpduFullSupport:(char)arg1 ;
-(char)isDwdsClosedNetwork;
-(void)setIsDwdsClosedNetwork:(char)arg1 ;
-(NSData *)bluetoothMac;
-(void)setBluetoothMac:(NSData *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSData *)deviceID;
-(void)setDeviceID:(NSData *)arg1 ;
@end

