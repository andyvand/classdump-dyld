/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct OpaqueSecIdentityRef* OpaqueSecIdentityRefRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct tagRTPHANDLES {
	tagHANDLE hRTPVideo;
	tagHANDLE hRTPAudio;
} tagRTPHANDLES;

typedef struct VCFocusCapability {
	char audioHardwareCapable;
	int maxAudioParticipantsBasedOnHardware;
	char audioNetworkCapable;
	int maxAudioParticipants;
	char canBeAudioMultipointParticipant;
	char videoHardwareCapable;
	int maxVideoParticipantsBasedOnHardware;
	char videoNetworkCapable;
	int maxVideoParticipants;
	char canBeVideoMultipointParticipant;
	int detectedUpstreamKbits;
	int detectedDownstreamKbits;
} VCFocusCapability;

typedef struct OpaqueSecCertificateRef* OpaqueSecCertificateRefRef;

typedef struct __CFData* CFDataRef;

typedef struct {
	char* field1;
	int field2;
	int field3;
	int field4;
	int field5;
	int field6;
	int field7;
} SCD_Struct_Vi6;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct _DNSServiceRef_t* DNSServiceRef_tRef;

typedef struct __CFSocket* CFSocketRef;

typedef struct tagNetAddrMapInfo {
	_DNSServiceRef_t sdRef;
	unsigned flags;
	unsigned interfaceIndex;
	int errorCode;
	unsigned publicAddress;
	unsigned protocol;
	unsigned short privatePort;
	unsigned short requestedPublicPort;
	unsigned short publicPort;
	unsigned ttl;
	int hResult;
	int queryAnswered;
} tagNetAddrMapInfo;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;
