/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FTDeviceSupport : NSObject {

	NSString* _number;
	char _blockPost;
	char _supportsFrontCamera;
	char _supportsBackCamera;
	char _supportsiMessage;
	char _supportsSMS;
	char _supportsMMS;
	char _mmsConfigured;
	char _supportsHandoff;
	char _supportsTethering;
	char _supportsFT;
	char _supportsFTA;
	char _supportsWiFi;
	char _supportsWLAN;
	char _supportsNonWiFiFaceTime;
	char _supportsCellularData;
	char _shouldUseSIMState;
	char _commCenterDead;
	char _simBecameNotReady;
	char _simInserted;
	int _carrierBundleSupported;
	int _iMessageAllowedToken;
	char _faceTimeBlocked;
	char _iMessageBlocked;
	char _accountModificationRestricted;
	long long _performanceClass;

}

@property (nonatomic,readonly) char isTelephonyDevice; 
@property (nonatomic,readonly) char faceTimeAvailable; 
@property (nonatomic,readonly) char faceTimeBlocked; 
@property (nonatomic,readonly) char faceTimeSupported; 
@property (nonatomic,readonly) char callingAvailable; 
@property (nonatomic,readonly) char callingBlocked; 
@property (nonatomic,readonly) char callingSupported; 
@property (nonatomic,readonly) char nonWifiFaceTimeAvailable; 
@property (nonatomic,readonly) char nonWifiCallingAvailable; 
@property (nonatomic,readonly) char iMessageAvailable; 
@property (nonatomic,readonly) char iMessageBlocked; 
@property (nonatomic,readonly) char iMessageSupported; 
@property (nonatomic,readonly) char identityServicesSupported; 
@property (nonatomic,readonly) char madridAvailable; 
@property (nonatomic,readonly) char madridBlocked; 
@property (nonatomic,readonly) char madridSupported; 
@property (nonatomic,readonly) char conferencingEnabled; 
@property (nonatomic,readonly) char conferencingBlocked; 
@property (nonatomic,readonly) char conferencingAllowed; 
@property (nonatomic,readonly) char registrationSupported; 
@property (nonatomic,readonly) char commCenterDead; 
@property (nonatomic,readonly) char accountModificationRestricted; 
@property (nonatomic,readonly) char wantsBreakBeforeMake; 
@property (nonatomic,readonly) char SIMInserted; 
@property (nonatomic,readonly) char isC2KEquipment; 
@property (nonatomic,readonly) char supportsSimultaneousVoiceAndDataRightNow; 
@property (nonatomic,readonly) char supportsSMSIdentification; 
@property (nonatomic,readonly) char supportsAppleIDIdentification; 
@property (nonatomic,readonly) char supportsHandoff;                                       //@synthesize supportsHandoff=_supportsHandoff - In the implementation block
@property (nonatomic,readonly) char supportsTethering;                                     //@synthesize supportsTethering=_supportsTethering - In the implementation block
@property (nonatomic,readonly) char supportsSMS;                                           //@synthesize supportsSMS=_supportsSMS - In the implementation block
@property (nonatomic,readonly) char supportsMMS;                                           //@synthesize supportsMMS=_supportsMMS - In the implementation block
@property (nonatomic,readonly) char mmsConfigured;                                         //@synthesize mmsConfigured=_mmsConfigured - In the implementation block
@property (nonatomic,readonly) char supportsWiFi;                                          //@synthesize supportsWiFi=_supportsWiFi - In the implementation block
@property (nonatomic,readonly) char supportsCellularData;                                  //@synthesize supportsCellularData=_supportsCellularData - In the implementation block
@property (nonatomic,readonly) char supportsWLAN;                                          //@synthesize supportsWLAN=_supportsWLAN - In the implementation block
@property (nonatomic,readonly) char supportsNonWiFiFaceTime;                               //@synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime - In the implementation block
@property (nonatomic,readonly) char supportsNonWiFiCalling; 
@property (nonatomic,readonly) char supportsFrontFacingCamera;                             //@synthesize supportsFrontCamera=_supportsFrontCamera - In the implementation block
@property (nonatomic,readonly) char supportsBackFacingCamera;                              //@synthesize supportsBackCamera=_supportsBackCamera - In the implementation block
@property (nonatomic,readonly) NSDictionary * CTNetworkInformation; 
@property (nonatomic,readonly) NSDictionary * telephonyCapabilities; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) NSString * deviceIDPrefix; 
@property (nonatomic,readonly) NSString * deviceTypeIDPrefix; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
@property (nonatomic,readonly) NSString * telephoneNumber; 
@property (nonatomic,readonly) long long performanceClass; 
@property (nonatomic,readonly) long long deviceType; 
+(id)sharedInstance;
-(NSString *)productName;
-(NSString *)productVersion;
-(NSString *)userAgentString;
-(NSString *)deviceColor;
-(NSString *)enclosureColor;
-(char)supportsTethering;
-(char)supportsHandoff;
-(NSString *)model;
-(char)supportsWLAN;
-(char)supportsNonWiFiCalling;
-(char)supportsNonWiFiFaceTime;
-(char)callingSupported;
-(char)faceTimeSupported;
-(char)supportsSimultaneousVoiceAndDataRightNow;
-(char)isTelephonyDevice;
-(NSString *)telephoneNumber;
-(char)supportsSMS;
-(char)supportsMMS;
-(char)mmsConfigured;
-(NSString *)productBuildVersion;
-(NSString *)deviceInformationString;
-(id)init;
-(void)dealloc;
-(long long)deviceType;
-(NSString *)deviceName;
-(char)isC2KEquipment;
-(void)_watchNotifyTokens;
-(void)_updateCapabilities;
-(void)_updateManagedConfigurationSettings;
-(void)_registerForCarrierNotifications;
-(void)_registerForCapabilityNotifications;
-(void)_registerForCoreTelephonyNotifications;
-(void)_registerForLockdownNotifications;
-(void)_registerForManagedConfigurationNotifications;
-(void)_unregisterForManagedConfigurationNotifications;
-(void)_unregisterForCoreTelephonyNotifications;
-(void)_unregisterForCarrierNotifications;
-(void)_unregisterForCommCenterReadyNotifications;
-(char)madridSupported;
-(char)madridBlocked;
-(char)callingBlocked;
-(char)faceTimeBlocked;
-(char)madridAvailable;
-(char)conferencingEnabled;
-(char)conferencingBlocked;
-(char)conferencingAllowed;
-(char)iMessageSupported;
-(char)supportsAppleIDIdentification;
-(void)_lockdownStateChanged:(id)arg1 ;
-(char)nonWifiFaceTimeAvailable;
-(void)carrierSettingsChanged:(id)arg1 ;
-(void)_registerForCommCenterReadyNotifications;
-(void)_operatorChanged;
-(void)_carrierChanged;
-(void)_registerForInternalCoreTelephonyNotifications;
-(char)commCenterDead;
-(char)callingAvailable;
-(char)iMessageAvailable;
-(char)iMessageBlocked;
-(char)faceTimeAvailable;
-(char)identityServicesSupported;
-(char)registrationSupported;
-(char)accountModificationRestricted;
-(NSString *)deviceIDPrefix;
-(NSString *)deviceTypeIDPrefix;
-(NSDictionary *)telephonyCapabilities;
-(char)SIMInserted;
-(char)wantsBreakBeforeMake;
-(void)_simStatusChanged:(id)arg1 ;
-(void)_handleTechnologyChange:(id)arg1 ;
-(void)_handlePhoneNumberRegistrationStateChanged:(id)arg1 ;
-(NSDictionary *)CTNetworkInformation;
-(char)supportsSMSIdentification;
-(long long)performanceClass;
-(char)nonWifiCallingAvailable;
-(char)supportsFrontFacingCamera;
-(char)supportsBackFacingCamera;
-(char)supportsWiFi;
-(char)supportsCellularData;
@end

