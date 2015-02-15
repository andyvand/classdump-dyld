/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@interface SFCertificateData : NSObject {

	id _reserved_SFCertificateData;

}
+(char)isOCSPStatusCode:(int)arg1 ;
+(char)isCRLStatusCode:(int)arg1 ;
+(char)isCA:(OpaqueSecCertificateRefRef)arg1 ;
+(id)trustPolicies;
+(id)policyValuesForTrust:(SecTrustRef)arg1 ;
+(char)isRevocationStatusCode:(int)arg1 ;
+(char)isPolicySpecificStatusCode:(int)arg1 ;
+(int)createTrustWithCertificates:(id)arg1 policy:(void*)arg2 trust:(_SecTrust*)arg3 ;
+(id)statusStringForCode:(int)arg1 domain:(unsigned)arg2 ;
+(id)_sharedOidParser;
+(void)_releaseSharedOidParser;
+(char)isRoot:(OpaqueSecCertificateRefRef)arg1 ;
+(unsigned)trustDomainForKeychain:(OpaqueSecKeychainRefRef)arg1 ;
+(long long)logLevel;
+(void)setLogLevel:(long long)arg1 ;
-(OpaqueSecCertificateRefRef)certificate;
-(id)expirationDate;
-(id)oidParser;
-(char)isRootCertificate;
-(char)isAuthorityCertificate;
-(void)setTrust:(SecTrustRef)arg1 ;
-(void)setCertificate:(OpaqueSecCertificateRefRef)arg1 ;
-(void)setCertData:(cssm_data*)arg1 ;
-(id)initWithCertData:(cssm_data*)arg1 ;
-(cssm_data*)certData;
-(char)isEqualToSFCertificateData:(id)arg1 ;
-(void)addFieldIndex:(int)arg1 forKey:(id)arg2 ;
-(void)parseX509Name:(const cssm_x509_name*)arg1 setTitle:(char)arg2 indent:(int)arg3 ;
-(void)parseRelativeDistinguishedName:(const cssm_data*)arg1 indent:(int)arg2 ;
-(int)parsePrintableBERSequence:(const cssm_data*)arg1 label:(id)arg2 indent:(int)arg3 ;
-(void)parseGeneralNames:(_CE_GeneralNames*)arg1 indent:(int)arg2 ;
-(void)parseDistributionPoint:(const _CE_CRLDistributionPoint*)arg1 ;
-(int)parseAccessDescription:(const cssm_data*)arg1 index:(int)arg2 ;
-(int)parsePolicyConstraints:(const cssm_data*)arg1 ;
-(int)parsePrivateKeyUsagePeriod:(const cssm_data*)arg1 ;
-(int)parseEntrustVersInfo:(const cssm_data*)arg1 ;
-(int)parseAuthorityInfoAccess:(const cssm_data*)arg1 ;
-(id)fieldDataForOid:(const cssm_data*)arg1 ;
-(void)parseKeyHeader:(const cssm_keyheader*)arg1 ;
-(int)parseExtensionCommon:(const cssm_data*)arg1 expect:(char)arg2 ;
-(void)parseKeyUsage:(const cssm_data*)arg1 ;
-(void)parseBasicConstraints:(const cssm_data*)arg1 ;
-(void)parseExtKeyUsage:(const cssm_data*)arg1 ;
-(void)parseAuthorityKeyId:(const cssm_data*)arg1 ;
-(void)parseAlternativeName:(const cssm_data*)arg1 ;
-(int)parseCrlDistributionPoints:(const cssm_data*)arg1 ;
-(void)parseCertPolicies:(const cssm_data*)arg1 ;
-(void)parseNetscapeCertType:(const cssm_data*)arg1 ;
-(void)parseExtension:(const cssm_data*)arg1 ;
-(id)fieldDataForOid:(const cssm_data*)arg1 inCert:(const cssm_data*)arg2 auxData:(id*)arg3 ;
-(long long)clHandle;
-(unsigned long long)numCertFields;
-(void)minimalParseCert:(const cssm_data*)arg1 ;
-(void)parseField:(const cssm_field*)arg1 atIndex:(unsigned)arg2 ;
-(void)parseCert:(const cssm_data*)arg1 ;
-(void)setPolicies:(id)arg1 ;
-(OpaqueSecPolicyRefRef)copyPolicyForOid:(const cssm_data*)arg1 ;
-(id)policies;
-(id)trustValuesForDomain:(unsigned)arg1 cached:(char)arg2 ;
-(unsigned)trustDomain;
-(char)existsInKeychain:(void*)arg1 path:(id*)arg2 ;
-(int)certStatusFromDomainTrustSettings:(unsigned)arg1 isMixed:(char*)arg2 hasBasic:(char*)arg3 names:(id*)arg4 ;
-(char)certificate:(OpaqueSecCertificateRefRef)arg1 isEqualTo:(OpaqueSecCertificateRefRef)arg2 ;
-(char)ignorableStatusCode:(int)arg1 ;
-(unsigned long long)numLines;
-(id)evaluateStatus;
-(id)policyValues;
-(unsigned long long)certIssuerIndex;
-(id)contentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)certExpirationDateIndex;
-(long long)indentAtIndex:(unsigned long long)arg1 ;
-(id)initWithCertificate:(OpaqueSecCertificateRefRef)arg1 ;
-(void)parseGeneralNamesSequence:(const cssm_data*)arg1 indent:(int)arg2 ;
-(id)userIdentityFieldIndexes;
-(unsigned long long)certTitleIndex;
-(unsigned long long)certSerialNumberIndex;
-(char)isLeafCertificate;
-(cssm_x509_name*)issuer;
-(id)firstValidDate;
-(OpaqueSecKeychainRefRef)keychain;
-(id)policyNames;
-(id)trustValuesForDomain:(unsigned)arg1 ;
-(id)trustValues;
-(void)setTrustValues:(id)arg1 ;
-(void)saveUserTrustValues;
-(void)setTrustDomain:(unsigned)arg1 ;
-(void)saveTrustValuesInDomain:(unsigned)arg1 ;
-(void)saveTrustValues;
-(char)trustChanged;
-(int)certStatus;
-(char)existsInKeychain:(void*)arg1 ;
-(id)policyString;
-(id)authorityString;
-(id)expirationString;
-(id)extensionLabelString;
-(id)tabDelimitedTextData;
-(id)pemEncodedTextData;
-(id)initWithCertificate:(OpaqueSecCertificateRefRef)arg1 trust:(SecTrustRef)arg2 parse:(char)arg3 ;
-(char)expired;
-(SecTrustRef)trust;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(cssm_data*)data;
-(id)initWithData:(cssm_data*)arg1 ;
-(void)setLeaf:(char)arg1 ;
-(void)setData:(cssm_data*)arg1 ;
-(id)statusString;
-(cssm_x509_name*)subject;
@end

