/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@interface CAExtendedKeyUsageExtension : NSObject {

	char _caDoneCAExtendedKUExts;
	int _caExtendedKUEPresent;
	int _caExtendedKUEIsCritical;
	int _caExtendedKUEEmailProtection;
	int _caExtendedKUESSLClientAuth;
	int _caExtendedKUESSLServerAuth;
	int _caExtendedKUECodeSigning;
	int _caExtendedKUECodeSigningDevelopment;
	int _caExtendedKUECodeSigningApple;
	int _caExtendedKUEiChatSigning;
	int _caExtendedKUEiChatEncryption;
	int _caExtendedKUEDotMacEmailSigning;
	int _caExtendedKUEClAuthPKINIT;
	int _caExtendedKUESrvrAuthPKINIT;
	int _caExtendedKUEDotMacEmailEncryption;
	int _caExtendedKUEAny;
	cssm_data _caExtendedKUEOIDs[14];
	int _caCertAuthorityExtendedKUEPresent;
	int _caCertAuthorityExtendedKUEIsCritical;
	int _caCertAuthorityExtendedKUEEmailProtection;
	int _caCertAuthorityExtendedKUESSLClientAuth;
	int _caCertAuthorityExtendedKUESSLServerAuth;
	int _caCertAuthorityExtendedKUECodeSigning;
	int _caCertAuthorityExtendedKUECodeSigningDevelopment;
	int _caCertAuthorityExtendedKUECodeSigningApple;
	int _caCertAuthorityExtendedKUEiChatSigning;
	int _caCertAuthorityExtendedKUEiChatEncryption;
	int _caCertAuthorityExtendedKUEDotMacEmailSigning;
	int _caCertAuthorityExtendedKUEClAuthPKINIT;
	int _caCertAuthorityExtendedKUESrvrAuthPKINIT;
	int _caCertAuthorityExtendedKUEDotMacEmailEncryption;
	int _caCertAuthorityExtendedKUEAny;
	int _caUserExtendedKUEPresent;
	int _caUserExtendedKUEIsCritical;
	int _caUserExtendedKUEEmailProtection;
	int _caUserExtendedKUESSLClientAuth;
	int _caUserExtendedKUESSLServerAuth;
	int _caUserExtendedKUECodeSigning;
	int _caUserExtendedKUECodeSigningDevelopment;
	int _caUserExtendedKUECodeSigningApple;
	int _caUserExtendedKUEiChatSigning;
	int _caUserExtendedKUEiChatEncryption;
	int _caUserExtendedKUEDotMacEmailSigning;
	int _caUserExtendedKUEClAuthPKINIT;
	int _caUserExtendedKUESrvrAuthPKINIT;
	int _caUserExtendedKUEDotMacEmailEncryption;
	int _caUserExtendedKUEAny;

}
-(void)_setToDefaults;
-(void)_fillInValuesInExtension:(_CE_DataAndType*)arg1 isCACertBeingCreated:(char)arg2 extensionIsPresent:(char*)arg3 ;
-(void)_setAlreadySpecifiedCertAuthorityValues:(char)arg1 ;
-(char)_alreadySpecifiedCertAuthorityValues;
-(void)_saveCertAuthorityPanelValues;
-(void)_updatePanelToCertAuthorityValues;
-(void)_saveUserPanelValues;
-(void)_updatePanelToUserValues;
-(char)_isPresent;
-(void)_setIsPresent:(id)arg1 ;
-(void)_setToPresentCritical;
-(void)_setToSSLServer;
-(void)_setToSSLClient;
-(void)_setToSMIME;
-(void)_setToCodeSigning;
-(void)_setIsCritical:(id)arg1 ;
-(char)_emailProtectionUsage;
-(void)_setEmailProtectionUsage:(id)arg1 ;
-(char)_sslClientAuthUsage;
-(void)_setSSLClientAuthUsage:(id)arg1 ;
-(char)_sslServerAuthUsage;
-(void)_setSSLServerAuthUsage:(id)arg1 ;
-(char)_codeSigningUsage;
-(void)_setCodeSigningUsage:(id)arg1 ;
-(char)_codeSigningDevelopmentUsage;
-(void)_setExtendedKUECodeSigningDevelopment:(id)arg1 ;
-(char)_codeSigningAppleUsage;
-(void)_setExtendedKUECodeSigningApple:(id)arg1 ;
-(char)_iChatSigningUsage;
-(void)_setIChatSigningUsage:(id)arg1 ;
-(char)_iChatEncryptionUsage;
-(void)_setIChatEncryptionUsage:(id)arg1 ;
-(char)_dotMacEmailSigningUsage;
-(void)_setEDotMacEmailSigningUsage:(id)arg1 ;
-(char)_dotMacEmailEncryptionUsage;
-(void)_setDotMacEmailEncryptionUsage:(id)arg1 ;
-(char)_pkinitServerAuthUsage;
-(void)_setPKINITServerAuthUsage:(id)arg1 ;
-(char)_pkinitClientAuthUsage;
-(void)_setPKINITClientAuthUsage:(id)arg1 ;
-(char)_anyUsage;
-(void)_setAnyUsage:(id)arg1 ;
-(char)_isCritical;
-(char)_validate;
@end

