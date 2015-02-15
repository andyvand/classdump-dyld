/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSString;

@interface CASubjectAltNameExtension : NSObject {

	char _caDoneCASubjectAltNameExts;
	_CE_GeneralName* _subjectAltNames;
	int _caSubjectAltNamePresent;
	int _caSubjectAltNameIsCritical;
	NSString* _caRFC822Name;
	char* _caRFC822NamesArray;
	int _caNumRFC822Names;
	NSString* _caURI;
	char* _caURIArray;
	int _caNumURIs;
	NSString* _caDNSName;
	char* _caDNSNameArray;
	int _caNumDNSNames;
	NSString* _caIPAddress;
	unsigned* _ipAddressIntArray;
	int _caNumIPAddresses;
	int _caCertAuthoritySubjectAltNamePresent;
	int _caCertAuthoritySubjectAltNameIsCritical;
	NSString* _caCertAuthorityRFC822Name;
	NSString* _caCertAuthorityURI;
	NSString* _caCertAuthorityDNSName;
	NSString* _caCertAuthorityIPAddress;
	int _caUserSubjectAltNamePresent;
	int _caUserSubjectAltNameIsCritical;
	NSString* _caUserRFC822Name;
	NSString* _caUserURI;
	NSString* _caUserDNSName;
	NSString* _caUserIPAddress;

}
-(void)_setToDefaults;
-(void)_fillInValuesInExtension:(_CE_DataAndType*)arg1 isCACertBeingCreated:(char)arg2 extensionIsPresent:(char*)arg3 ;
-(void)_setAlreadySpecifiedCertAuthorityValues:(char)arg1 ;
-(char)_alreadySpecifiedCertAuthorityValues;
-(void)_saveCertAuthorityPanelValues;
-(void)_updatePanelToCertAuthorityValues;
-(void)_saveUserPanelValues;
-(void)_updatePanelToUserValues;
-(int)_isPresent;
-(void)_setIsPresent:(id)arg1 ;
-(void)_setIsCritical:(id)arg1 ;
-(void)_setRFC822Name:(id)arg1 ;
-(void)_setDNSName:(id)arg1 ;
-(void)_setIPAddress:(id)arg1 ;
-(char)_areIPAddressesValid:(char)arg1 ;
-(id)_rfc822Name;
-(id)_uri;
-(id)_dnsName;
-(id)_ipAddress;
-(void)_setUserRFC822Name:(id)arg1 ;
-(void)_setUserURIs:(id)arg1 ;
-(void)_setUserDNSNames:(id)arg1 ;
-(void)_setUserIPAddrs:(id)arg1 ;
-(void)_releaseRFC822NamesArray;
-(void)_releaseURIArray;
-(void)_releaseDNSNamesArray;
-(void)_setupRFC822Names:(id)arg1 inCEGeneralNames:(_CE_GeneralNames*)arg2 ;
-(void)_setupURIs:(id)arg1 inCEGeneralNames:(_CE_GeneralNames*)arg2 ;
-(void)_setupDNSNames:(id)arg1 inCEGeneralNames:(_CE_GeneralNames*)arg2 ;
-(void)_setupIPAddresses:(unsigned*)arg1 numIPAddresses:(int)arg2 inCEGeneralNames:(_CE_GeneralNames*)arg3 ;
-(void)_setServerDNSNameSetting:(id)arg1 ;
-(void)_setToSMIMEWithRFC822Name:(id)arg1 ;
-(int)_isCritical;
-(void)_setURI:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

