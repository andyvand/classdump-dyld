/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:23:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Keychain Access.app/Contents/MacOS/Keychain Access
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct OpaqueSecIdentityRef* OpaqueSecIdentityRefRef;

typedef struct OpaqueSecCertificateRef* OpaqueSecCertificateRefRef;

typedef struct OpaqueSecKeyRef* OpaqueSecKeyRefRef;

typedef struct OpaqueSecKeychainRef* OpaqueSecKeychainRefRef;

typedef struct OpaqueSecKeychainItemRef* OpaqueSecKeychainItemRefRef;

typedef struct OpaqueSecAccessRef* OpaqueSecAccessRefRef;

typedef struct OpaqueSecKeychainSearchRef* OpaqueSecKeychainSearchRefRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFString* CFStringRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 31;
} SCD_Struct_As10;

typedef struct {
	double field1;
	double field2;
	double field3;
	SCD_Struct_As10 field4;
} SCD_Struct_As11;

typedef struct AuthorizationOpaqueRef* AuthorizationOpaqueRefRef;

typedef struct __TISInputSource* TISInputSourceRef;

typedef struct OpaqueSecTrustedApplicationRef* OpaqueSecTrustedApplicationRefRef;

typedef struct OpaqueSecTrustRef* OpaqueSecTrustRefRef;

typedef struct cssm_acl_keychain_prompt_selector {
	unsigned short version;
	unsigned short flags;
} cssm_acl_keychain_prompt_selector;
