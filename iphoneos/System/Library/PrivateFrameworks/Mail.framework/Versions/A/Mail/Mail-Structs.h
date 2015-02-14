/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct OpaqueSecIdentityRef* OpaqueSecIdentityRefRef;

typedef struct __CFNetDiagnostic* CFNetDiagnosticRef;

typedef struct _NSZone* NSZoneRef;

typedef struct AOSAccount* AOSAccountRef;

typedef struct AOSTransactionC* AOSTransactionCRef;

typedef struct __CFString* CFStringRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct sqlite3* sqlite3Ref;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	char field3;
	char field4;
} SCD_Struct_MF8;

typedef struct {
	long long field1;
	unsigned long long field2;
} SCD_Struct_MF9;

typedef struct __LSMMap* LSMMapRef;

typedef struct __MDQuery* MDQueryRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	unsigned field1 : 27;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
} SCD_Struct_MF13;

typedef struct __CFTree* CFTreeRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

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
} SCD_Struct_MF17;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_MF18;

typedef struct {
	unsigned short field1[64];
	_ field2;
	_ field3;
	CFString field4;
	unsigned short field5;
	char* field6;
	SCD_Struct_MF18 field7;
	long long field8;
	long long field9;
} SCD_Struct_MF19;

typedef struct {
	int version;
	int count;
	int timeStamp;
	float tocHeight;
	unsigned sortOrder;
	unsigned sortedAscending;
	int unused1;
	int unused2;
} SCD_Struct_MF20;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

