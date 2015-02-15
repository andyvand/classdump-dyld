/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSData, NSArray, NSString, NSNumber, NSDate;

@interface IDSSendParameters : NSObject <NSCopying> {

	NSMutableDictionary* _params;

}

@property (nonatomic,retain) NSDictionary * message; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSDictionary * protobuf; 
@property (nonatomic,retain) NSArray * destinations; 
@property (nonatomic,retain) NSString * accountUUID; 
@property (assign,nonatomic) char wantsAppAck; 
@property (assign,nonatomic) char encryptPayload; 
@property (assign,nonatomic) char compressPayload; 
@property (assign,nonatomic) double timeout; 
@property (assign,nonatomic) long long priority; 
@property (assign,nonatomic) char localDelivery; 
@property (assign,nonatomic) char requireBluetooth; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) char bypassDuet; 
@property (assign,nonatomic) char bypassStorage; 
@property (assign,nonatomic) char activityContinuation; 
@property (assign,nonatomic) char nonWaking; 
@property (nonatomic,retain) NSString * queueOneIdentifier; 
@property (assign,nonatomic) char fireAndForget; 
@property (assign,nonatomic) char expectsPeerResponse; 
@property (nonatomic,retain) NSString * peerResponseIdentifier; 
@property (assign,nonatomic) char compressed; 
@property (nonatomic,retain) NSString * fromID; 
@property (assign,nonatomic) char useDictAsTopLevel; 
@property (assign,nonatomic) char wantsResponse; 
@property (nonatomic,retain) NSData * dataToEncrypt; 
@property (nonatomic,retain) NSData * messageUUID; 
@property (nonatomic,retain) NSString * alternateCallbackID; 
@property (nonatomic,retain) NSNumber * command; 
@property (assign,nonatomic) char wantsDeliveryStatus; 
@property (nonatomic,retain) NSDictionary * deliveryStatusContext; 
@property (nonatomic,retain) NSArray * interestingRegistrationProperties; 
@property (nonatomic,retain) NSArray * requireAllRegistrationProperties; 
@property (nonatomic,retain) NSArray * bulkedPayload; 
@property (assign,nonatomic) char daemonDeathResend; 
@property (assign,nonatomic) char bypassSizeCheck; 
@property (nonatomic,retain,readonly) NSDate * expirationDate; 
@property (nonatomic,retain,readonly) NSDictionary * dictionaryRepresentation; 
-(void)setCommand:(NSNumber *)arg1 ;
-(NSDate *)expirationDate;
-(void)setDataToEncrypt:(NSData *)arg1 ;
-(void)setWantsResponse:(char)arg1 ;
-(void)setFromID:(NSString *)arg1 ;
-(void)setWantsAppAck:(char)arg1 ;
-(void)setWantsDeliveryStatus:(char)arg1 ;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(void)setMessageUUID:(NSData *)arg1 ;
-(void)setAlternateCallbackID:(NSString *)arg1 ;
-(void)setEncryptPayload:(char)arg1 ;
-(void)setCompressPayload:(char)arg1 ;
-(void)setLocalDelivery:(char)arg1 ;
-(void)setRequireBluetooth:(char)arg1 ;
-(void)setUseDictAsTopLevel:(char)arg1 ;
-(void)setExpectsPeerResponse:(char)arg1 ;
-(void)setPeerResponseIdentifier:(NSString *)arg1 ;
-(void)setBypassDuet:(char)arg1 ;
-(void)setNonWaking:(char)arg1 ;
-(void)setFireAndForget:(char)arg1 ;
-(void)setBypassStorage:(char)arg1 ;
-(void)setActivityContinuation:(char)arg1 ;
-(void)setQueueOneIdentifier:(NSString *)arg1 ;
-(void)setInterestingRegistrationProperties:(NSArray *)arg1 ;
-(void)setRequireAllRegistrationProperties:(NSArray *)arg1 ;
-(void)setAccountUUID:(NSString *)arg1 ;
-(NSString *)alternateCallbackID;
-(void)setProtobuf:(NSDictionary *)arg1 ;
-(void)setDaemonDeathResend:(char)arg1 ;
-(char)wantsAppAck;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setDestinations:(NSArray *)arg1 ;
-(NSArray *)destinations;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(NSData *)data;
-(NSDictionary *)dictionaryRepresentation;
-(long long)priority;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)command;
-(NSDictionary *)message;
-(void)setMessage:(NSDictionary *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(char)wantsDeliveryStatus;
-(NSDictionary *)deliveryStatusContext;
-(char)expectsPeerResponse;
-(char)compressed;
-(void)setCompressed:(char)arg1 ;
-(NSData *)messageUUID;
-(NSString *)peerResponseIdentifier;
-(NSDictionary *)protobuf;
-(NSString *)fromID;
-(NSString *)accountUUID;
-(NSData *)dataToEncrypt;
-(void)setBulkedPayload:(NSArray *)arg1 ;
-(NSArray *)bulkedPayload;
-(NSArray *)requireAllRegistrationProperties;
-(NSArray *)interestingRegistrationProperties;
-(NSString *)queueOneIdentifier;
-(char)useDictAsTopLevel;
-(char)encryptPayload;
-(char)compressPayload;
-(char)wantsResponse;
-(char)localDelivery;
-(char)requireBluetooth;
-(char)bypassDuet;
-(char)bypassStorage;
-(char)activityContinuation;
-(char)nonWaking;
-(char)daemonDeathResend;
-(void)setBypassSizeCheck:(char)arg1 ;
-(char)bypassSizeCheck;
-(char)fireAndForget;
@end

