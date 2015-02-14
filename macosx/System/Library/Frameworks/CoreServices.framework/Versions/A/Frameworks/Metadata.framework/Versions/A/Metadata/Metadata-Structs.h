/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/Metadata.framework/Versions/A/Metadata
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _MDPlistContainer* MDPlistContainerRef;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned short field9;
	unsigned long long field10[0];
} SCD_Struct_MD1;

typedef struct {
	unsigned embeddedReference;
	unsigned char type;
} SCD_Struct_MD2;

typedef struct {
	char* containerBytes;
	SCD_Struct_MD2 reference;
} SCD_Struct_MD3;

typedef struct {
	unsigned short field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned short field5;
	unsigned short field6;
	unsigned short field7;
	unsigned long long field8;
	unsigned long long field9;
	unsigned long long field10;
	unsigned long long field11;
} SCD_Struct_MD4;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
	unsigned short field6;
	unsigned short field7;
	unsigned short field8;
} SCD_Struct_MD5;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __MDPlistBytes* MDPlistBytesRef;

typedef struct __CFData* CFDataRef;

typedef struct dispatch_data_s* dispatch_data_sRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFUUID* CFUUIDRef;

typedef struct {
	unsigned isMutuallyExclusiveSetMember : 1;
	unsigned isPublicVisibility : 1;
	unsigned hasPreviewIcon : 1;
	unsigned hasFinderColor : 1;
	unsigned setFinderColor : 3;
	unsigned hasExtendedFinderColor : 1;
	unsigned reservedBits1 : 8;
	unsigned reservedBits2 : 16;
	unsigned reservedBits3 : 32;
} SCD_Struct_MD13;

typedef union {
	SCD_Struct_MD13 field1;
	long long payload;
} SCD_Union_MD14;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	unsigned char field13;
	unsigned char field14;
	unsigned char field15;
	unsigned char field16;
} SCD_Struct_MD15;

typedef struct __CFString* CFStringRef;

typedef struct __CFURL* CFURLRef;

typedef struct __CFNotificationCenter* CFNotificationCenterRef;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct _xpc_connection_s* xpc_connection_sRef;

