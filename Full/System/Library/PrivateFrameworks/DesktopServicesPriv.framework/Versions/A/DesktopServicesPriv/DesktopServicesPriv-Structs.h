/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMetadataQuery, FITNode;

typedef struct TNSRef<NSMetadataQuery *> {
	NSMetadataQuery* fRef;
} TNSRef<NSMetadataQuery *>;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueNodeRef* OpaqueNodeRefRef;

typedef struct TNSRef<FITNode *> {
	FITNode* fRef;
} TNSRef<FITNode *>;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct TDSMutex {
	opaque_pthread_mutex_t fMutex;
	BOOL fRecursive;
	_opaque_pthread_t fOwnerThread;
	int fLockCount;
} TDSMutex;

