/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct OpaqueSecIdentityRef* OpaqueSecIdentityRefRef;

typedef struct __asl_object_s* asl_object_sRef;

typedef struct __CFString* CFStringRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct OpaqueSecPolicyRef* OpaqueSecPolicyRefRef;

typedef struct OpaqueSecCertificateRef* OpaqueSecCertificateRefRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 8;
	unsigned field4 : 8;
	unsigned field5 : 8;
	unsigned field6 : 1;
	unsigned field7 : 2;
	unsigned field8 : 1;
	unsigned field9 : 2;
} SCD_Struct_MC8;

typedef struct {
	id field1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 2;
} SCD_Struct_MC9;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_MC10;

typedef struct {
	unsigned short buffer[64];
	__CFString theString;
	unsigned short directUniCharBuffer;
	char* directCStringBuffer;
	SCD_Struct_MC10 rangeToBuffer;
	long long bufferedRangeStart;
	long long bufferedRangeEnd;
} SCD_Struct_MC11;

typedef struct _CMSDecoder* CMSDecoderRef;

typedef struct _CMSEncoder* CMSEncoderRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct {
	long long count;
	unsigned long long size;
} SCD_Struct_MC16;

typedef struct {
	unsigned field1 : 27;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
} SCD_Struct_MC17;

typedef struct sasl_conn* sasl_connRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct __CFHost* CFHostRef;

