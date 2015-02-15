/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSNumber, NSMutableArray, NSMutableData;

@interface CoreWiFiWPSTLVs : NSObject {

	NSData* rawTLVs;
	char isValid;
	NSNumber* apChannel;
	NSNumber* associationState;
	NSNumber* authenticationType;
	NSNumber* authenticationTypeFlags;
	NSData* authenticator;
	NSNumber* configMethods;
	NSNumber* configurationError;
	NSData* confirmationURL4;
	NSData* confirmationURL6;
	NSNumber* connectionType;
	NSNumber* connectionTypeFlags;
	NSMutableArray* credentials;
	NSData* deviceName;
	NSNumber* devicePasswordID;
	NSData* enrolleeHash1;
	NSData* enrolleeHash2;
	NSData* enrolleeSNonce1;
	NSData* enrolleeSNonce2;
	NSData* encryptedSettings;
	NSMutableData* decryptedSettings;
	NSNumber* encryptionType;
	NSNumber* encryptionTypeFlags;
	NSData* enrolleeNonce;
	NSNumber* featureID;
	NSData* identity;
	NSData* identityProof;
	NSData* keyWrapAuthenticator;
	NSData* keyIdentifier;
	NSData* MACAddress;
	NSData* manufacturer;
	NSNumber* messageType;
	NSData* modelName;
	NSData* modelNumber;
	NSNumber* networkIndex;
	NSData* networkKey;
	NSNumber* networkKeyIndex;
	NSData* updatedDeviceName;
	NSData* updatedPassword;
	NSData* oobDevicePassword;
	NSNumber* osVersion;
	NSNumber* powerLevel;
	NSNumber* pskCurrent;
	NSNumber* pskMax;
	NSData* publicKey;
	NSNumber* radioEnabled;
	NSNumber* rebootRequest;
	NSNumber* registrarCurrent;
	NSNumber* registrarEstablished;
	NSData* registrarList;
	NSNumber* registrarMax;
	NSData* registrarNonce;
	NSNumber* requestType;
	NSNumber* responseType;
	NSNumber* rfBands;
	NSData* registrarHash1;
	NSData* registrarHash2;
	NSData* registrarSNonce1;
	NSData* registrarSNonce2;
	NSNumber* selectedRegistrar;
	NSData* serialNumber;
	NSNumber* wpsSetupState;
	NSData* ssid;
	NSNumber* totalNetworks;
	NSData* enrolleeUUID;
	NSData* registrarUUID;
	NSMutableArray* vendorExtensions;
	NSNumber* version;
	NSData* x509CertificateRequest;
	NSData* x509Certificate;
	NSData* EAPIdentity;
	NSData* messageCounter;
	NSData* publicKeyHash;
	NSData* rekeyKey;
	NSNumber* keyLifetime;
	NSNumber* permittedConfigMethods;
	NSNumber* selectedRegistrarConfigMethods;
	NSMutableArray* primaryDeviceTypes;
	NSMutableArray* secondaryDeviceTypes;
	NSNumber* portableDevice;
	NSNumber* apSetupLocked;
	NSData* applicationExtension;
	NSData* EAPType;
	NSData* initializationVector;
	NSNumber* keyProvidedAutomatically;
	NSNumber* enabled8021X;
	NSData* appSessionKey;
	NSNumber* wepTransmitKey;

}

@property (nonatomic,retain,readonly) NSData * rawTLVs; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,retain) NSNumber * apChannel; 
@property (nonatomic,retain) NSNumber * associationState; 
@property (nonatomic,retain) NSNumber * authenticationType; 
@property (nonatomic,retain) NSNumber * authenticationTypeFlags; 
@property (nonatomic,retain) NSData * authenticator; 
@property (nonatomic,retain) NSNumber * configMethods; 
@property (nonatomic,retain) NSNumber * configurationError; 
@property (nonatomic,retain) NSData * confirmationURL4; 
@property (nonatomic,retain) NSData * confirmationURL6; 
@property (nonatomic,retain) NSNumber * connectionType; 
@property (nonatomic,retain) NSNumber * connectionTypeFlags; 
@property (nonatomic,retain) NSMutableArray * credentials; 
@property (nonatomic,retain) NSData * deviceName; 
@property (nonatomic,retain) NSNumber * devicePasswordID; 
@property (nonatomic,retain) NSData * enrolleeHash1; 
@property (nonatomic,retain) NSData * enrolleeHash2; 
@property (nonatomic,retain) NSData * enrolleeSNonce1; 
@property (nonatomic,retain) NSData * enrolleeSNonce2; 
@property (nonatomic,retain) NSData * encryptedSettings; 
@property (nonatomic,retain) NSMutableData * decryptedSettings; 
@property (nonatomic,retain) NSNumber * encryptionType; 
@property (nonatomic,retain) NSNumber * encryptionTypeFlags; 
@property (nonatomic,retain) NSData * enrolleeNonce; 
@property (nonatomic,retain) NSNumber * featureID; 
@property (nonatomic,retain) NSData * identity; 
@property (nonatomic,retain) NSData * identityProof; 
@property (nonatomic,retain) NSData * keyWrapAuthenticator; 
@property (nonatomic,retain) NSData * keyIdentifier; 
@property (nonatomic,retain) NSData * MACAddress; 
@property (nonatomic,retain) NSData * manufacturer; 
@property (nonatomic,retain) NSNumber * messageType; 
@property (nonatomic,retain) NSData * modelName; 
@property (nonatomic,retain) NSData * modelNumber; 
@property (nonatomic,retain) NSNumber * networkIndex; 
@property (nonatomic,retain) NSData * networkKey; 
@property (nonatomic,retain) NSNumber * networkKeyIndex; 
@property (nonatomic,retain) NSData * updatedDeviceName; 
@property (nonatomic,retain) NSData * updatedPassword; 
@property (nonatomic,retain) NSData * oobDevicePassword; 
@property (nonatomic,retain) NSNumber * osVersion; 
@property (nonatomic,retain) NSNumber * powerLevel; 
@property (nonatomic,retain) NSNumber * pskCurrent; 
@property (nonatomic,retain) NSNumber * pskMax; 
@property (nonatomic,retain) NSData * publicKey; 
@property (nonatomic,retain) NSNumber * radioEnabled; 
@property (nonatomic,retain) NSNumber * rebootRequest; 
@property (nonatomic,retain) NSNumber * registrarCurrent; 
@property (nonatomic,retain) NSNumber * registrarEstablished; 
@property (nonatomic,retain) NSData * registrarList; 
@property (nonatomic,retain) NSNumber * registrarMax; 
@property (nonatomic,retain) NSData * registrarNonce; 
@property (nonatomic,retain) NSNumber * requestType; 
@property (nonatomic,retain) NSNumber * responseType; 
@property (nonatomic,retain) NSNumber * rfBands; 
@property (nonatomic,retain) NSData * registrarHash1; 
@property (nonatomic,retain) NSData * registrarHash2; 
@property (nonatomic,retain) NSData * registrarSNonce1; 
@property (nonatomic,retain) NSData * registrarSNonce2; 
@property (nonatomic,retain) NSNumber * selectedRegistrar; 
@property (nonatomic,retain) NSData * serialNumber; 
@property (nonatomic,retain) NSNumber * wpsSetupState; 
@property (nonatomic,retain) NSData * ssid; 
@property (nonatomic,retain) NSNumber * totalNetworks; 
@property (nonatomic,retain) NSData * enrolleeUUID; 
@property (nonatomic,retain) NSData * registrarUUID; 
@property (nonatomic,retain) NSMutableArray * vendorExtensions; 
@property (nonatomic,retain) NSNumber * version; 
@property (nonatomic,retain) NSData * x509CertificateRequest; 
@property (nonatomic,retain) NSData * x509Certificate; 
@property (nonatomic,retain) NSData * EAPIdentity; 
@property (nonatomic,retain) NSData * messageCounter; 
@property (nonatomic,retain) NSData * publicKeyHash; 
@property (nonatomic,retain) NSData * rekeyKey; 
@property (nonatomic,retain) NSNumber * keyLifetime; 
@property (nonatomic,retain) NSNumber * permittedConfigMethods; 
@property (nonatomic,retain) NSNumber * selectedRegistrarConfigMethods; 
@property (nonatomic,retain) NSMutableArray * primaryDeviceTypes; 
@property (nonatomic,retain) NSMutableArray * secondaryDeviceTypes; 
@property (nonatomic,retain) NSNumber * portableDevice; 
@property (nonatomic,retain) NSNumber * apSetupLocked; 
@property (nonatomic,retain) NSData * applicationExtension; 
@property (nonatomic,retain) NSData * EAPType; 
@property (nonatomic,retain) NSData * initializationVector; 
@property (nonatomic,retain) NSNumber * keyProvidedAutomatically; 
@property (nonatomic,retain) NSNumber * enabled8021X; 
@property (nonatomic,retain) NSData * appSessionKey; 
@property (nonatomic,retain) NSNumber * wepTransmitKey; 
+(id)parseDataElementAuthenticationType:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)parseDataElementEncryptionType:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)parseDataElementMACAddress:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)parseDataElementNetworkIndex:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)parseDataElementNetworkKey:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)parseDataElementNetworkKeyIndex:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)parseDataElementSSID:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)parseDataElementEAPIdentitity:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)parseDataElementEAPType:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)parseDataElementKeyProvidedAutomatically:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)parseDataElement8021XEnabled:(char*)arg1 withLength:(unsigned long long)arg2 ;
+(id)packageTLV:(unsigned long long)arg1 withNumber16:(id)arg2 ;
+(id)packageTLV:(unsigned long long)arg1 withData:(id)arg2 ;
+(id)packageTLV:(unsigned long long)arg1 withNumber8:(id)arg2 ;
+(id)packageTLV:(unsigned long long)arg1 withNumber32:(id)arg2 ;
+(id)packageTLV:(unsigned long long)arg1 withDeviceTypeArray:(id)arg2 ;
+(id)packageTLV:(unsigned long long)arg1 withBytes:(const void*)arg2 withLength:(unsigned long long)arg3 ;
+(id)packageTLV:(unsigned long long)arg1 withString:(id)arg2 ;
-(NSData *)MACAddress;
-(void)setConnectionType:(NSNumber *)arg1 ;
-(NSNumber *)connectionType;
-(void)setSerialNumber:(NSData *)arg1 ;
-(NSData *)serialNumber;
-(NSData *)modelName;
-(void)parseRawData;
-(void)parseBuffer:(id)arg1 ;
-(void)parseDataElementAPChannel:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementAssociationState:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementAuthenticationTypeFlags:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementAuthenticator:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementConfigMethods:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementConfigurationError:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementConfirmationURL4:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementConfirmationURL6:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementConnectionType:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementConnectionTypeFlags:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementCredential:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementDeviceName:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementDevicePasswordID:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementEHash1:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementEHash2:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementESNonce1:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementESNonce2:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementEncryptedSettings:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementEncryptionTypeFlags:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementEnrolleeNonce:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementFeatureID:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementIdentity:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementIdentityProof:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementKeyWrapAuthenticator:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementKeyIdentifier:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementManufacturer:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementMessageType:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementModelName:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementModelNumber:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementNewDeviceName:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementNewPassword:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementOOBDevicePassword:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementOSVersion:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementPowerLevel:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementPSKCurrent:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementPSKMax:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementPublicKey:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRadioEnabled:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementReboot:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRegistrarCurrent:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRegistrarEstablished:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRegistrarList:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRegistrarMax:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRegistrarNonce:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRequestType:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementResponseType:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRFBands:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRHash1:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRHash2:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRSNonce1:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRSNonce2:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementSelectedRegistrar:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementSerialNumber:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementWiFiProtectedSetupState:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementTotalNetworks:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementUUIDE:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementUUIDR:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementVendorExtension:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementVersion:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementX509CertificateRequest:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementX509Certificate:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementMessageCounter:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementPublicKeyHash:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementRekeyKey:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementKeyLifetime:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementPermittedConfigMethods:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementSelectedRegistrarConfigMethods:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementPrimaryDeviceType:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementSecondaryDeviceTypeList:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementPortableDevice:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementAPSetupLocked:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementApplicationExtension:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementInitializationVector:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementAppSessionKey:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDataElementWEPTransmitKey:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(void)parseDecryptedSettings;
-(id)apChannelTLV;
-(id)associationStateTLV;
-(id)authenticationTypeTLV;
-(id)authenticationTypeFlagsTLV;
-(id)authenticatorTLV;
-(id)configMethodsTLV;
-(id)configurationErrorTLV;
-(id)confirmationURL4TLV;
-(id)confirmationURL6TLV;
-(id)connectionTypeTLV;
-(id)connectionTypeFlagsTLV;
-(id)credentialTLV;
-(id)deviceNameTLV;
-(id)devicePasswordIDTLV;
-(id)enrolleeHash1TLV;
-(id)enrolleeHash2TLV;
-(id)enrolleeSNonce1TLV;
-(id)enrolleeSNonce2TLV;
-(id)encryptedSettingsTLV;
-(id)encryptionTypeTLV;
-(id)encryptionTypeFlagsTLV;
-(id)enrolleeNonceTLV;
-(id)featureIDTLV;
-(id)identityTLV;
-(id)identityProofTLV;
-(id)keyWrapAuthenticatorTLV;
-(id)keyIdentifierTLV;
-(id)MACAddressTLV;
-(id)manufacturerTLV;
-(id)messageTypeTLV;
-(id)modelNameTLV;
-(id)modelNumberTLV;
-(id)networkIndexTLV;
-(id)networkKeyTLV;
-(id)networkKeyIndexTLV;
-(id)updatedDeviceNameTLV;
-(id)updatedPasswordTLV;
-(id)oobDevicePasswordTLV;
-(id)osVersionTLV;
-(id)powerLevelTLV;
-(id)pskCurrentTLV;
-(id)pskMaxTLV;
-(id)publicKeyTLV;
-(id)radioEnabledTLV;
-(id)rebootRequestTLV;
-(id)registrarCurrentTLV;
-(id)registrarEstablishedTLV;
-(id)registrarListTLV;
-(id)registrarMaxTLV;
-(id)registrarNonceTLV;
-(id)requestTypeTLV;
-(id)responseTypeTLV;
-(id)rfBandsTLV;
-(id)registrarHash1TLV;
-(id)registrarHash2TLV;
-(id)registrarSNonce1TLV;
-(id)registrarSNonce2TLV;
-(id)selectedRegistrarTLV;
-(id)serialNumberTLV;
-(id)wpsSetupStateTLV;
-(id)ssidTLV;
-(id)totalNetworksTLV;
-(id)enrolleeUUIDTLV;
-(id)registrarUUIDTLV;
-(id)vendorExtensionsTLV;
-(id)versionTLV;
-(id)x509CertificateRequestTLV;
-(id)x509CertificateTLV;
-(id)EAPIdentityTLV;
-(id)messageCounterTLV;
-(id)publicKeyHashTLV;
-(id)rekeyKeyTLV;
-(id)keyLifetimeTLV;
-(id)permittedConfigMethodsTLV;
-(id)selectedRegistrarConfigMethodsTLV;
-(id)primaryDeviceTypesTLV;
-(id)secondaryDeviceTypesTLV;
-(id)portableDeviceTLV;
-(id)apSetupLockedTLV;
-(id)applicationExtensionTLV;
-(id)EAPTypeTLV;
-(id)initializationVectorTLV;
-(id)keyProvidedAutomaticallyTLV;
-(id)enabled8021XTLV;
-(id)appSessionKeyTLV;
-(id)wepTransmitKeyTLV;
-(NSData *)rawTLVs;
-(NSNumber *)apChannel;
-(void)setApChannel:(NSNumber *)arg1 ;
-(NSNumber *)associationState;
-(void)setAssociationState:(NSNumber *)arg1 ;
-(void)setAuthenticationType:(NSNumber *)arg1 ;
-(NSNumber *)authenticationTypeFlags;
-(void)setAuthenticationTypeFlags:(NSNumber *)arg1 ;
-(NSData *)authenticator;
-(void)setAuthenticator:(NSData *)arg1 ;
-(NSNumber *)configMethods;
-(void)setConfigMethods:(NSNumber *)arg1 ;
-(NSNumber *)configurationError;
-(void)setConfigurationError:(NSNumber *)arg1 ;
-(NSData *)confirmationURL4;
-(void)setConfirmationURL4:(NSData *)arg1 ;
-(NSData *)confirmationURL6;
-(void)setConfirmationURL6:(NSData *)arg1 ;
-(NSNumber *)connectionTypeFlags;
-(void)setConnectionTypeFlags:(NSNumber *)arg1 ;
-(NSMutableArray *)credentials;
-(void)setCredentials:(NSMutableArray *)arg1 ;
-(NSNumber *)devicePasswordID;
-(void)setDevicePasswordID:(NSNumber *)arg1 ;
-(NSData *)enrolleeHash1;
-(void)setEnrolleeHash1:(NSData *)arg1 ;
-(NSData *)enrolleeHash2;
-(void)setEnrolleeHash2:(NSData *)arg1 ;
-(NSData *)enrolleeSNonce1;
-(void)setEnrolleeSNonce1:(NSData *)arg1 ;
-(NSData *)enrolleeSNonce2;
-(void)setEnrolleeSNonce2:(NSData *)arg1 ;
-(NSData *)encryptedSettings;
-(void)setEncryptedSettings:(NSData *)arg1 ;
-(NSMutableData *)decryptedSettings;
-(void)setDecryptedSettings:(NSMutableData *)arg1 ;
-(NSNumber *)encryptionType;
-(void)setEncryptionType:(NSNumber *)arg1 ;
-(NSNumber *)encryptionTypeFlags;
-(void)setEncryptionTypeFlags:(NSNumber *)arg1 ;
-(NSData *)enrolleeNonce;
-(void)setEnrolleeNonce:(NSData *)arg1 ;
-(void)setFeatureID:(NSNumber *)arg1 ;
-(void)setIdentity:(NSData *)arg1 ;
-(NSData *)identityProof;
-(void)setIdentityProof:(NSData *)arg1 ;
-(NSData *)keyWrapAuthenticator;
-(void)setKeyWrapAuthenticator:(NSData *)arg1 ;
-(void)setKeyIdentifier:(NSData *)arg1 ;
-(void)setMACAddress:(NSData *)arg1 ;
-(void)setModelName:(NSData *)arg1 ;
-(NSData *)modelNumber;
-(void)setModelNumber:(NSData *)arg1 ;
-(NSNumber *)networkIndex;
-(void)setNetworkIndex:(NSNumber *)arg1 ;
-(NSData *)networkKey;
-(void)setNetworkKey:(NSData *)arg1 ;
-(NSNumber *)networkKeyIndex;
-(void)setNetworkKeyIndex:(NSNumber *)arg1 ;
-(NSData *)updatedDeviceName;
-(void)setUpdatedDeviceName:(NSData *)arg1 ;
-(NSData *)updatedPassword;
-(void)setUpdatedPassword:(NSData *)arg1 ;
-(NSData *)oobDevicePassword;
-(void)setOobDevicePassword:(NSData *)arg1 ;
-(NSNumber *)powerLevel;
-(void)setPowerLevel:(NSNumber *)arg1 ;
-(NSNumber *)pskCurrent;
-(void)setPskCurrent:(NSNumber *)arg1 ;
-(NSNumber *)pskMax;
-(void)setPskMax:(NSNumber *)arg1 ;
-(NSData *)publicKey;
-(void)setPublicKey:(NSData *)arg1 ;
-(NSNumber *)radioEnabled;
-(void)setRadioEnabled:(NSNumber *)arg1 ;
-(NSNumber *)rebootRequest;
-(void)setRebootRequest:(NSNumber *)arg1 ;
-(NSNumber *)registrarCurrent;
-(void)setRegistrarCurrent:(NSNumber *)arg1 ;
-(NSNumber *)registrarEstablished;
-(void)setRegistrarEstablished:(NSNumber *)arg1 ;
-(NSData *)registrarList;
-(void)setRegistrarList:(NSData *)arg1 ;
-(NSNumber *)registrarMax;
-(void)setRegistrarMax:(NSNumber *)arg1 ;
-(NSData *)registrarNonce;
-(void)setRegistrarNonce:(NSData *)arg1 ;
-(NSNumber *)responseType;
-(NSNumber *)rfBands;
-(void)setRfBands:(NSNumber *)arg1 ;
-(NSData *)registrarHash1;
-(void)setRegistrarHash1:(NSData *)arg1 ;
-(NSData *)registrarHash2;
-(void)setRegistrarHash2:(NSData *)arg1 ;
-(NSData *)registrarSNonce1;
-(void)setRegistrarSNonce1:(NSData *)arg1 ;
-(NSData *)registrarSNonce2;
-(void)setRegistrarSNonce2:(NSData *)arg1 ;
-(NSNumber *)selectedRegistrar;
-(void)setSelectedRegistrar:(NSNumber *)arg1 ;
-(NSNumber *)wpsSetupState;
-(void)setWpsSetupState:(NSNumber *)arg1 ;
-(void)setSsid:(NSData *)arg1 ;
-(NSNumber *)totalNetworks;
-(void)setTotalNetworks:(NSNumber *)arg1 ;
-(NSData *)enrolleeUUID;
-(void)setEnrolleeUUID:(NSData *)arg1 ;
-(NSData *)registrarUUID;
-(void)setRegistrarUUID:(NSData *)arg1 ;
-(NSMutableArray *)vendorExtensions;
-(void)setVendorExtensions:(NSMutableArray *)arg1 ;
-(NSData *)x509CertificateRequest;
-(void)setX509CertificateRequest:(NSData *)arg1 ;
-(NSData *)x509Certificate;
-(void)setX509Certificate:(NSData *)arg1 ;
-(NSData *)EAPIdentity;
-(void)setEAPIdentity:(NSData *)arg1 ;
-(NSData *)messageCounter;
-(void)setMessageCounter:(NSData *)arg1 ;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(NSData *)rekeyKey;
-(void)setRekeyKey:(NSData *)arg1 ;
-(NSNumber *)keyLifetime;
-(void)setKeyLifetime:(NSNumber *)arg1 ;
-(NSNumber *)permittedConfigMethods;
-(void)setPermittedConfigMethods:(NSNumber *)arg1 ;
-(NSNumber *)selectedRegistrarConfigMethods;
-(void)setSelectedRegistrarConfigMethods:(NSNumber *)arg1 ;
-(NSMutableArray *)primaryDeviceTypes;
-(void)setPrimaryDeviceTypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)secondaryDeviceTypes;
-(void)setSecondaryDeviceTypes:(NSMutableArray *)arg1 ;
-(NSNumber *)portableDevice;
-(void)setPortableDevice:(NSNumber *)arg1 ;
-(NSNumber *)apSetupLocked;
-(void)setApSetupLocked:(NSNumber *)arg1 ;
-(NSData *)applicationExtension;
-(void)setApplicationExtension:(NSData *)arg1 ;
-(NSData *)EAPType;
-(void)setEAPType:(NSData *)arg1 ;
-(NSData *)initializationVector;
-(void)setInitializationVector:(NSData *)arg1 ;
-(NSNumber *)keyProvidedAutomatically;
-(void)setKeyProvidedAutomatically:(NSNumber *)arg1 ;
-(NSNumber *)enabled8021X;
-(void)setEnabled8021X:(NSNumber *)arg1 ;
-(NSData *)appSessionKey;
-(void)setAppSessionKey:(NSData *)arg1 ;
-(NSNumber *)wepTransmitKey;
-(void)setWepTransmitKey:(NSNumber *)arg1 ;
-(NSNumber *)featureID;
-(NSData *)keyIdentifier;
-(NSData *)ssid;
-(NSNumber *)authenticationType;
-(NSNumber *)requestType;
-(NSNumber *)messageType;
-(void)setMessageType:(NSNumber *)arg1 ;
-(void)setRequestType:(NSNumber *)arg1 ;
-(NSNumber *)osVersion;
-(void)setOsVersion:(NSNumber *)arg1 ;
-(void)setManufacturer:(NSData *)arg1 ;
-(NSData *)manufacturer;
-(void)setDeviceName:(NSData *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setVersion:(NSNumber *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(char)isValid;
-(NSNumber *)version;
-(NSData *)identity;
-(void)setResponseType:(NSNumber *)arg1 ;
-(NSData *)deviceName;
@end

