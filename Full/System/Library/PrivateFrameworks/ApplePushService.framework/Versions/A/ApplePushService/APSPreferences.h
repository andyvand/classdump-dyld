/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/Versions/A/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSString, NSNumber, NSData;

@interface APSPreferences : NSObject

@property (nonatomic,retain) NSDictionary * acknowledgedTokenHashes; 
@property (nonatomic,retain) NSArray * activationRecordListeners; 
@property (nonatomic,readonly) NSString * albertName; 
@property (nonatomic,retain) NSDictionary * allTokenTopics; 
@property (nonatomic,retain) NSDictionary * appIds; 
@property (nonatomic,retain) NSString * certificateName; 
@property (nonatomic,readonly) char detailedLogs; 
@property (nonatomic,readonly) char disableAPSKeepAlives; 
@property (nonatomic,readonly) char disableFrameworkLogging; 
@property (nonatomic,readonly) char enableTCPKeepAlives; 
@property (nonatomic,retain) NSDictionary * environments; 
@property (nonatomic,readonly) char forceAnEarlyExpiration; 
@property (nonatomic,readonly) NSString * keepAliveEnvironment; 
@property (nonatomic,readonly) NSNumber * logLevel; 
@property (nonatomic,retain) NSString * machineUniqueIdentifier; 
@property (nonatomic,retain) NSDictionary * persistentTopics; 
@property (nonatomic,retain) NSData * platformSerial; 
@property (nonatomic,readonly) NSNumber * statusDumpInterval; 
@property (nonatomic,retain) NSData * storageId; 
@property (nonatomic,readonly) char writeLogs; 
+(id)preferences;
-(id)dataForKey:(id)arg1 ;
-(NSString *)certificateName;
-(NSString *)machineUniqueIdentifier;
-(NSData *)storageId;
-(void)setStorageId:(NSData *)arg1 ;
-(char)detailedLogs;
-(char)disableFrameworkLogging;
-(char)writeLogs;
-(id)numberForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 havingClass:(Class)arg2 ;
-(NSDictionary *)acknowledgedTokenHashes;
-(void)setAcknowledgedTokenHashes:(NSDictionary *)arg1 ;
-(NSArray *)activationRecordListeners;
-(void)setActivationRecordListeners:(NSArray *)arg1 ;
-(NSString *)albertName;
-(NSDictionary *)allTokenTopics;
-(void)setAllTokenTopics:(NSDictionary *)arg1 ;
-(void)setCertificateName:(NSString *)arg1 ;
-(char)disableAPSKeepAlives;
-(char)enableTCPKeepAlives;
-(NSDictionary *)environments;
-(void)setEnvironments:(NSDictionary *)arg1 ;
-(char)forceAnEarlyExpiration;
-(NSString *)keepAliveEnvironment;
-(void)setMachineUniqueIdentifier:(NSString *)arg1 ;
-(NSDictionary *)persistentTopics;
-(void)setPersistentTopics:(NSDictionary *)arg1 ;
-(NSData *)platformSerial;
-(void)setPlatformSerial:(NSData *)arg1 ;
-(NSNumber *)statusDumpInterval;
-(NSNumber *)logLevel;
-(NSDictionary *)appIds;
-(void)setAppIds:(NSDictionary *)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)boolForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
@end

