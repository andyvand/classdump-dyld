/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface CoreWiFiBSSConfig : NSObject {

	char allowAuthenticationOpen;
	char allowAuthenticationSharedKey;
	char allowAuthenticationLEAP;
	char allowSecurityOpen;
	char allowSecurityWEP;
	char allowSecurityWPA;
	char allowSecurityWPA2;
	char allowSecurityWPS;
	char allowUnicastCipherTKIP;
	char allowUnicastCipherCCMP;
	char allowUnicastCipherUseGroup;
	char allowMulticastCipherWEP40;
	char allowMulticastCipherWEP104;
	char allowMulticastCipherTKIP;
	char allowMulticastCipherCCMP;
	char allowKeyManagementPSK;
	char allowKeyManagement8021X;
	char allowPhy80211b;
	char allowPhy80211g;
	char allowPhy80211a;
	char allowPhy80211n;
	char allowPhy80211ac;
	NSData* ssid;
	NSData* passphrase;
	long long channel;
	long long channelWidth;
	long long eapolRetryCount;
	long long eapolRetryInterval;
	long long eapolGTKRotation;
	NSString* country;
	char useAppleSWAPIE;
	char allowPIN;
	char allowPushbutton;
	NSString* wpsDeviceName;
	NSString* wpsManufacturerName;
	NSString* wpsModelName;
	NSString* wpsModelNumber;
	long long wpsPIN;
	NSString* wpsSerialNumber;

}

@property (assign,nonatomic) char allowAuthenticationOpen; 
@property (assign,nonatomic) char allowAuthenticationSharedKey; 
@property (assign,nonatomic) char allowAuthenticationLEAP; 
@property (assign,nonatomic) char allowSecurityOpen; 
@property (assign,nonatomic) char allowSecurityWEP; 
@property (assign,nonatomic) char allowSecurityWPA; 
@property (assign,nonatomic) char allowSecurityWPA2; 
@property (assign,nonatomic) char allowSecurityWPS; 
@property (assign,nonatomic) char allowUnicastCipherTKIP; 
@property (assign,nonatomic) char allowUnicastCipherCCMP; 
@property (assign,nonatomic) char allowUnicastCipherUseGroup; 
@property (assign,nonatomic) char allowMulticastCipherWEP40; 
@property (assign,nonatomic) char allowMulticastCipherWEP104; 
@property (assign,nonatomic) char allowMulticastCipherTKIP; 
@property (assign,nonatomic) char allowMulticastCipherCCMP; 
@property (assign,nonatomic) char allowKeyManagementPSK; 
@property (assign,nonatomic) char allowKeyManagement8021X; 
@property (assign,nonatomic) char allowPhy80211b; 
@property (assign,nonatomic) char allowPhy80211g; 
@property (assign,nonatomic) char allowPhy80211a; 
@property (assign,nonatomic) char allowPhy80211n; 
@property (assign,nonatomic) char allowPhy80211ac; 
@property (nonatomic,retain) NSData * ssid; 
@property (nonatomic,retain) NSData * passphrase; 
@property (assign,nonatomic) long long channel; 
@property (assign,nonatomic) long long channelWidth; 
@property (assign,nonatomic) long long eapolRetryCount; 
@property (assign,nonatomic) long long eapolRetryInterval; 
@property (assign,nonatomic) long long eapolGTKRotation; 
@property (nonatomic,retain,readonly) NSString * country; 
@property (assign,nonatomic) char useAppleSWAPIE; 
@property (assign,nonatomic) char allowPIN; 
@property (assign,nonatomic) char allowPushbutton; 
@property (nonatomic,retain) NSString * wpsDeviceName; 
@property (nonatomic,retain) NSString * wpsManufacturerName; 
@property (nonatomic,retain) NSString * wpsModelName; 
@property (nonatomic,retain) NSString * wpsModelNumber; 
@property (assign,nonatomic) long long wpsPIN; 
@property (nonatomic,retain) NSString * wpsSerialNumber; 
+(id)configWithScanResult:(id)arg1 ;
+(id)queryList:(id)arg1 error:(id*)arg2 ;
-(long long)channel;
-(void)setChannel:(long long)arg1 ;
-(id)initWithSkeleton:(id)arg1 ;
-(long long)channelWidth;
-(char)allowKeyManagementPSK;
-(char)allowKeyManagement8021X;
-(void)setChannelWidth:(long long)arg1 ;
-(char)allowUnicastCipherTKIP;
-(void)setAllowUnicastCipherTKIP:(char)arg1 ;
-(char)allowUnicastCipherCCMP;
-(void)setAllowUnicastCipherCCMP:(char)arg1 ;
-(char)allowUnicastCipherUseGroup;
-(void)setAllowUnicastCipherUseGroup:(char)arg1 ;
-(char)allowMulticastCipherWEP40;
-(void)setAllowMulticastCipherWEP40:(char)arg1 ;
-(char)allowMulticastCipherWEP104;
-(void)setAllowMulticastCipherWEP104:(char)arg1 ;
-(char)allowMulticastCipherTKIP;
-(void)setAllowMulticastCipherTKIP:(char)arg1 ;
-(char)allowMulticastCipherCCMP;
-(void)setAllowMulticastCipherCCMP:(char)arg1 ;
-(void)setAllowKeyManagementPSK:(char)arg1 ;
-(void)setAllowKeyManagement8021X:(char)arg1 ;
-(void)setSsid:(NSData *)arg1 ;
-(void)setAllowSecurityWPA2:(char)arg1 ;
-(void)setAllowSecurityWPA:(char)arg1 ;
-(void)setAllowSecurityOpen:(char)arg1 ;
-(void)setAllowSecurityWEP:(char)arg1 ;
-(void)setAllowAuthenticationSharedKey:(char)arg1 ;
-(void)setAllowAuthenticationLEAP:(char)arg1 ;
-(char)allowAuthenticationOpen;
-(char)allowAuthenticationSharedKey;
-(char)allowAuthenticationLEAP;
-(char)allowSecurityOpen;
-(char)allowSecurityWEP;
-(char)allowSecurityWPA;
-(char)allowSecurityWPA2;
-(char)allowSecurityWPS;
-(char)allowPhy80211b;
-(char)allowPhy80211g;
-(char)allowPhy80211a;
-(char)allowPhy80211n;
-(char)allowPhy80211ac;
-(NSData *)passphrase;
-(long long)eapolRetryCount;
-(long long)eapolRetryInterval;
-(long long)eapolGTKRotation;
-(char)allowPIN;
-(char)allowPushbutton;
-(NSString *)wpsDeviceName;
-(NSString *)wpsManufacturerName;
-(NSString *)wpsModelName;
-(NSString *)wpsModelNumber;
-(long long)wpsPIN;
-(NSString *)wpsSerialNumber;
-(char)updateConfig:(id)arg1 ;
-(unsigned long long)wifiSecurity;
-(char)setSSID:(id)arg1 error:(id*)arg2 ;
-(char)setSSIDFromHexString:(id)arg1 error:(id*)arg2 ;
-(char)setWirelessPassphrase:(id)arg1 error:(id*)arg2 ;
-(char)setWirelessPassphraseFromHexString:(id)arg1 error:(id*)arg2 ;
-(char)setAuthenticationWithOptionString:(id)arg1 error:(id*)arg2 ;
-(char)setSecurityWithOptionString:(id)arg1 error:(id*)arg2 ;
-(char)setUnicastCipherWithOptionString:(id)arg1 error:(id*)arg2 ;
-(char)setMulticastCipherWithOptionString:(id)arg1 error:(id*)arg2 ;
-(char)setKeyManagementWithOptionString:(id)arg1 error:(id*)arg2 ;
-(char)setPhyModeWithOptionString:(id)arg1 error:(id*)arg2 ;
-(char)setWPSConfigurationMethodsString:(id)arg1 error:(id*)arg2 ;
-(char)setCountry:(id)arg1 error:(id*)arg2 ;
-(void)setAllowAuthenticationOpen:(char)arg1 ;
-(void)setAllowSecurityWPS:(char)arg1 ;
-(void)setAllowPhy80211b:(char)arg1 ;
-(void)setAllowPhy80211g:(char)arg1 ;
-(void)setAllowPhy80211a:(char)arg1 ;
-(void)setAllowPhy80211n:(char)arg1 ;
-(void)setAllowPhy80211ac:(char)arg1 ;
-(void)setPassphrase:(NSData *)arg1 ;
-(void)setEapolRetryCount:(long long)arg1 ;
-(void)setEapolRetryInterval:(long long)arg1 ;
-(void)setEapolGTKRotation:(long long)arg1 ;
-(char)useAppleSWAPIE;
-(void)setUseAppleSWAPIE:(char)arg1 ;
-(void)setAllowPIN:(char)arg1 ;
-(void)setAllowPushbutton:(char)arg1 ;
-(void)setWpsDeviceName:(NSString *)arg1 ;
-(void)setWpsManufacturerName:(NSString *)arg1 ;
-(void)setWpsModelName:(NSString *)arg1 ;
-(void)setWpsModelNumber:(NSString *)arg1 ;
-(void)setWpsPIN:(long long)arg1 ;
-(void)setWpsSerialNumber:(NSString *)arg1 ;
-(char)addToInterface:(id)arg1 error:(id*)arg2 ;
-(char)removeFromInterface:(id)arg1 error:(id*)arg2 ;
-(NSData *)ssid;
-(NSString *)country;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)defaults;
-(id)skeleton;
@end

