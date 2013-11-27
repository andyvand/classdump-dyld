/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Ubiquity.framework/Versions/A/Support/ubd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSMutableArray;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	NSMutableDictionary* _browsers;
	NSMutableSet* _resolvingNetServices;
	NSMutableDictionary* _monitoredNetServices;
} SCD_Struct_UB1;

typedef struct {
	NSMutableArray* _netServices;
} SCD_Struct_UB2;

typedef struct {
	NSMutableDictionary* _byFQDN;
	NSMutableDictionary* _byEndPoint;
	NSMutableDictionary* _byUUID;
} SCD_Struct_UB3;

typedef struct {
	SCD_Struct_UB3 _foundServices;
	NSMutableDictionary* _preferredFQDN;
} SCD_Struct_UB4;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecIdentity* SecIdentityRef;
