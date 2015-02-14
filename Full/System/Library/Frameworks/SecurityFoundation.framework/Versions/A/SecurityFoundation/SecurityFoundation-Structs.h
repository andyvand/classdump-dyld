/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct AuthorizationOpaqueRef* AuthorizationOpaqueRefRef;

typedef struct {
	unsigned field1;
	/*function pointer*/void* field2;
} SCD_Struct_SF1;

typedef struct OpaqueSecKeychainRef* OpaqueSecKeychainRefRef;

typedef struct OpaqueSecIdentityRef* OpaqueSecIdentityRefRef;

typedef struct cssm_data {
	unsigned long long Length;
	char* Data;
} cssm_data;

typedef struct OpaqueSecAccessRef* OpaqueSecAccessRefRef;

typedef struct OpaqueSecCertificateRef* OpaqueSecCertificateRefRef;

typedef struct OpaqueSecKeychainItemRef* OpaqueSecKeychainItemRefRef;

typedef struct OpaqueSecKeyRef* OpaqueSecKeyRefRef;

typedef struct cssm_guid {
	unsigned Data1;
	unsigned short Data2;
	unsigned short Data3;
	unsigned char Data4[8];
} cssm_guid;

typedef struct cssm_date {
	unsigned char Year[4];
	unsigned char Month[2];
	unsigned char Day[2];
} cssm_date;

typedef struct cssm_keyheader {
	unsigned HeaderVersion;
	cssm_guid CspId;
	unsigned BlobType;
	unsigned Format;
	unsigned AlgorithmId;
	unsigned KeyClass;
	unsigned LogicalKeySizeInBits;
	unsigned KeyAttr;
	unsigned KeyUsage;
	cssm_date StartDate;
	cssm_date EndDate;
	unsigned WrapAlgorithmId;
	unsigned WrapMode;
	unsigned Reserved;
} cssm_keyheader;

typedef struct cssm_key {
	cssm_keyheader KeyHeader;
	cssm_data KeyData;
} cssm_key;

typedef struct __SecTrust* SecTrustRef;

typedef struct OpaqueSecPolicyRef* OpaqueSecPolicyRefRef;

typedef struct __CFArray* CFArrayRef;

