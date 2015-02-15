/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@interface CertificateUtilities : NSObject
+(id)extendedValidationOrganizationNameForHost:(id)arg1 withCertificates:(id)arg2 ;
+(RetainPtr<OpaqueSecPolicyRef *>*)sslPolicyForHost:(id)arg1 client:(char)arg2 ;
+(id)identitiesWithPolicy:(OpaqueSecPolicyRefRef)arg1 ;
+(id)labelForCertificates:(id)arg1 ;
+(RetainPtr<__SecTrust *>*)trustReferenceWithCertificates:(id)arg1 forPolicy:(OpaqueSecPolicyRefRef)arg2 ;
+(char)hasClientCertificateIdentity;
+(id)issuerOrganizationNameForCertificate:(OpaqueSecCertificateRefRef)arg1 ;
+(id)subjectFullLocationForCertificate:(OpaqueSecCertificateRefRef)arg1 ;
+(RetainPtr<OpaqueSecPolicyRef *>*)ocspPolicyWithOptions:(unsigned)arg1 ;
+(char)isRevocationServerMetaError:(int)arg1 ;
+(id)subjectNameForCertificate:(OpaqueSecCertificateRefRef)arg1 ;
+(id)_potentialEVChainWithCertificates:(id)arg1 ;
+(RetainPtr<OpaqueSecCertificateRef *>*)_rootCertificateWithSubjectOfCertificate:(OpaqueSecCertificateRefRef)arg1 ;
+(cssm_data*)_copyFieldDataForOid:(cssm_data*)arg1 inCert:(cssm_data*)arg2 withHandle:(long long)arg3 ;
+(void)_freeFieldData:(cssm_data*)arg1 forOid:(cssm_data*)arg2 withHandle:(long long)arg3 ;
+(id)_evCAOidDict;
+(id)_oidStringForCertificatePolicies:(const _CE_CertPolicies*)arg1 ;
+(id)_allowedRootCertificatesForOidString:(id)arg1 ;
+(id)_decimalStringForOid:(cssm_data*)arg1 ;
+(char)isCertificateChain:(id)arg1 trustedForHost:(id)arg2 ;
@end

