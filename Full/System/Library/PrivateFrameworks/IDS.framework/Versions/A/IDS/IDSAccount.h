/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class _IDSAccount, NSString, NSArray, NSDictionary, NSData, NSDate;

@interface IDSAccount : NSObject {

	_IDSAccount* _internal;

}

@property (readonly) char idIsRedwood; 
@property (nonatomic,retain) NSString * loginID; 
@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (nonatomic,readonly) char isActive; 
@property (nonatomic,readonly) char canSend; 
@property (nonatomic,retain,readonly) NSArray * devices; 
@property (nonatomic,retain,readonly) NSArray * nearbyDevices; 
@property (nonatomic,retain,readonly) NSArray * aliases; 
@property (nonatomic,retain,readonly) NSArray * aliasStrings; 
@property (nonatomic,retain,readonly) NSArray * vettedAliases; 
@property (nonatomic,retain,readonly) NSDictionary * profileInfo; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (nonatomic,readonly) NSData * registrationCertificate; 
@property (nonatomic,readonly) NSDate * dateRegistered; 
@property (nonatomic,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSString * regionID; 
@property (nonatomic,readonly) NSString * regionBasePhoneNumber; 
@property (nonatomic,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,readonly) NSString * profileID; 
@property (nonatomic,retain,readonly) NSString * primaryServiceName; 
-(char)idIsRedwood;
-(NSArray *)aliases;
-(int)accountType;
-(NSString *)serviceName;
-(void)removeDelegate:(id)arg1 ;
-(id)_internal;
-(NSArray *)aliasStrings;
-(id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)_setIsEnabled:(char)arg1 ;
-(NSString *)primaryServiceName;
-(char)canSend;
-(NSArray *)nearbyDevices;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(NSData *)registrationCertificate;
-(NSString *)regionID;
-(NSString *)regionBasePhoneNumber;
-(NSDictionary *)regionServerContext;
-(NSString *)profileID;
-(void)addRegistrationDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(void)passwordUpdated;
-(void)_reregisterAndReidentify:(char)arg1 ;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSArray *)registeredURIs;
-(void)addDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(NSDictionary *)profileInfo;
-(NSArray *)vettedAliases;
-(int)registrationStatus;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(NSString *)loginID;
-(void)setLoginID:(NSString *)arg1 ;
-(NSDictionary *)accountInfo;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(void)setAuthToken:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isActive;
-(char)_isEnabled;
-(NSString *)displayName;
-(NSString *)uniqueID;
-(void)setPassword:(id)arg1 ;
-(NSData *)pushToken;
-(NSArray *)devices;
@end

