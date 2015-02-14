/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class _IDSDevice, NSString, NSArray, NSUUID, NSData;

@interface IDSDevice : NSObject {

	_IDSDevice* _internal;

}

@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,retain,readonly) NSString * modelIdentifier; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * service; 
@property (nonatomic,retain,readonly) NSString * deviceColor; 
@property (nonatomic,retain,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) char isDefaultPairedDevice; 
@property (nonatomic,readonly) unsigned long long pairingProtocolVersion; 
@property (getter=isNearby,nonatomic,readonly) char nearby; 
@property (nonatomic,readonly) char locallyPresent; 
@property (nonatomic,retain,readonly) NSArray * linkedUserURIs; 
@property (setter=setNSUUID:,nonatomic,retain) NSUUID * nsuuid; 
@property (nonatomic,readonly) char supportsTethering; 
@property (nonatomic,readonly) char supportsHandoff; 
@property (nonatomic,readonly) char supportsiCloudPairing; 
@property (nonatomic,readonly) char supportsSMSRelay; 
@property (nonatomic,readonly) char supportsMMSRelay; 
@property (nonatomic,readonly) char supportsPhoneCalls; 
@property (nonatomic,retain,readonly) NSArray * identities; 
@property (nonatomic,retain,readonly) NSData * pushToken; 
-(NSString *)productName;
-(NSString *)productVersion;
-(NSString *)deviceColor;
-(char)isDefaultPairedDevice;
-(id)_internal;
-(NSUUID *)nsuuid;
-(NSArray *)identities;
-(char)isDefaultLocalDevice;
-(char)supportsiCloudPairing;
-(char)isNearby;
-(void)_updateNSUUID:(id)arg1 ;
-(void)_addIdentity:(id)arg1 ;
-(NSString *)modelIdentifier;
-(NSArray *)linkedUserURIs;
-(char)supportsSMSRelay;
-(char)supportsMMSRelay;
-(char)supportsPhoneCalls;
-(NSString *)enclosureColor;
-(char)locallyPresent;
-(char)supportsTethering;
-(char)supportsHandoff;
-(void)closeSocket:(int)arg1 ;
-(unsigned long long)pairingProtocolVersion;
-(void)setNSUUID:(id)arg1 ;
-(int)socketForDomain:(id)arg1 ;
-(void)openSocketWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 onQueue:(dispatch_queue_sRef)arg3 ;
-(void)closeSocketForDomain:(id)arg1 ;
-(int)openSocketForDomain:(id)arg1 transportType:(long long)arg2 ;
-(void)establishStreamPairWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 onQueue:(dispatch_queue_sRef)arg3 ;
-(void)cleanupStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(int)openSocketForDomain:(id)arg1 ;
-(NSString *)service;
-(void)_setAccount:(id)arg1 ;
-(NSString *)productBuildVersion;
-(id)_initWithDictionary:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)uniqueID;
-(NSData *)pushToken;
@end

