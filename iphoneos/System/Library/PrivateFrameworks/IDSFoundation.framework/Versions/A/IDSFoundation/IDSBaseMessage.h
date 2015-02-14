/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/NSCopying.h>

@class NSDictionary, NSData, NSDate, NSString, NSArray, NSMutableArray;

@interface IDSBaseMessage : NSObject <NSCopying> {

	char _forceCellular;
	char _usingOutgoingPush;
	char _wantsResponse;
	char _wantsBinaryPush;
	char _wantsIntegerUniqueIDs;
	char _highPriority;
	char _hasReceivedPushAck;
	int _timeoutRetries;
	id _context;
	NSDictionary* _clientInfo;
	NSData* _serviceData;
	unsigned long long _uniqueID;
	NSDictionary* _userInfo;
	NSDate* _creationDate;
	NSString* _topic;
	double _timeout;
	/*^block*/id _completionBlock;
	/*^block*/id _deliveryAcknowledgementBlock;
	NSDictionary* _cachedBody;
	NSString* _dsAuthID;
	double _timeSent;
	NSString* _dataUsageBundleIdentifier;
	NSDictionary* _responseAlert;

}

@property (readonly) char wantsIDSServer; 
@property (readonly) char isValidMessage; 
@property (readonly) char payloadCanBeLogged; 
@property (assign) unsigned long long uniqueID;                                                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (retain,readonly) NSString * uniqueIDString; 
@property (retain,readonly) NSString * dataUsageBundleIdentifier;                                 //@synthesize dataUsageBundleIdentifier=_dataUsageBundleIdentifier - In the implementation block
@property (assign) double timeout;                                                                //@synthesize timeout=_timeout - In the implementation block
@property (assign) double timeSent;                                                               //@synthesize timeSent=_timeSent - In the implementation block
@property (copy) id completionBlock;                                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (copy) id deliveryAcknowledgementBlock;                                                 //@synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock - In the implementation block
@property (retain,readonly) NSString * bagKey; 
@property (retain) NSString * topic;                                                              //@synthesize topic=_topic - In the implementation block
@property (readonly) long long command; 
@property (readonly) long long responseCommand; 
@property (assign) char hasReceivedPushAck;                                                       //@synthesize hasReceivedPushAck=_hasReceivedPushAck - In the implementation block
@property (assign) char forceCellular;                                                            //@synthesize forceCellular=_forceCellular - In the implementation block
@property (assign) char highPriority;                                                             //@synthesize highPriority=_highPriority - In the implementation block
@property (readonly) char wantsSignature; 
@property (readonly) char wantsBodySignature; 
@property (readonly) char wantsCFNetworkTimeout; 
@property (readonly) char wantsManagedRetries; 
@property (readonly) char wantsExtraTimeoutRetry; 
@property (readonly) int maxTimeoutRetries; 
@property (readonly) char wantsHTTPHeaders; 
@property (readonly) char wantsCompressedBody; 
@property (assign) char wantsBinaryPush;                                                          //@synthesize wantsBinaryPush=_wantsBinaryPush - In the implementation block
@property (assign) char wantsIntegerUniqueIDs;                                                    //@synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs - In the implementation block
@property (readonly) char wantsJSONBody; 
@property (readonly) char wantsBagKey; 
@property (readonly) char wantsUserAgentInHeaders; 
@property (readonly) char wantsHTTPGet; 
@property (readonly) char wantsAPSRetries; 
@property (assign) char wantsResponse;                                                            //@synthesize wantsResponse=_wantsResponse - In the implementation block
@property (assign) int timeoutRetries;                                                            //@synthesize timeoutRetries=_timeoutRetries - In the implementation block
@property (readonly) char ignoresNetworkConnectivity; 
@property (readonly) char wantsCustomRetryInterval; 
@property (readonly) double customRetryInterval; 
@property (retain,readonly) NSArray * requiredKeys; 
@property (copy) NSDictionary * responseAlertInfo;                                                //@synthesize responseAlert=_responseAlert - In the implementation block
@property (retain,readonly) NSDictionary * messageBody; 
@property (retain,readonly) NSDictionary * messageBodyUsingCache; 
@property (retain,readonly) NSDictionary * additionalMessageHeaders; 
@property (retain,readonly) NSDictionary * additionalQueryStringParameters; 
@property (retain,readonly) NSDictionary * additionalInternalHeaders; 
@property (retain,readonly) NSDictionary * additionalMessageHeadersForOutgoingPush; 
@property (retain,readonly) NSDictionary * nonStandardMessageHeadersForOutgoingPush; 
@property (assign,nonatomic) OpaqueSecKeyRefRef pushPrivateKey; 
@property (assign,nonatomic) OpaqueSecKeyRefRef pushPublicKey; 
@property (nonatomic,copy) NSData * pushCertificate; 
@property (nonatomic,copy) NSData * pushToken; 
@property (nonatomic,copy) NSMutableArray * certDataArray; 
@property (nonatomic,copy) NSMutableArray * publicKeyArray; 
@property (nonatomic,copy) NSMutableArray * privateKeyArray; 
@property (nonatomic,copy) NSMutableArray * userIDArray; 
@property (nonatomic,readonly) OpaqueSecKeyRefRef identityPrivateKey; 
@property (nonatomic,readonly) OpaqueSecKeyRefRef identityPublicKey; 
@property (nonatomic,copy,readonly) NSData * IDCertificate; 
@property (setter=setDSAuthID:,nonatomic,copy) NSString * dsAuthID;                               //@synthesize dsAuthID=_dsAuthID - In the implementation block
@property (copy) NSData * serviceData;                                                            //@synthesize serviceData=_serviceData - In the implementation block
@property (copy) NSDictionary * clientInfo;                                                       //@synthesize clientInfo=_clientInfo - In the implementation block
@property (retain,readonly) NSString * userAgentHeaderString; 
@property (copy) NSDictionary * userInfo;                                                         //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) NSDate * creationDate;                                                         //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) id context;                                                                    //@synthesize context=_context - In the implementation block
@property (setter=_setUsingOutgoingPush:) char _usingOutgoingPush;                                //@synthesize usingOutgoingPush=_usingOutgoingPush - In the implementation block
@property (setter=_setCachedBody:,retain) NSDictionary * _cachedBody;                             //@synthesize cachedBody=_cachedBody - In the implementation block
-(NSArray *)requiredKeys;
-(void)setTimeSent:(double)arg1 ;
-(void)setWantsResponse:(char)arg1 ;
-(char)highPriority;
-(void)setHighPriority:(char)arg1 ;
-(NSString *)topic;
-(void)setClientInfo:(NSDictionary *)arg1 ;
-(char)ignoresNetworkConnectivity;
-(double)timeSent;
-(void)setUniqueID:(unsigned long long)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setTopic:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)context;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)uniqueID;
-(long long)command;
-(void)setCompletionBlock:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)completionBlock;
-(NSDictionary *)messageBody;
-(NSData *)pushToken;
-(void)setPushToken:(NSData *)arg1 ;
-(void)setWantsIntegerUniqueIDs:(char)arg1 ;
-(void)setWantsBinaryPush:(char)arg1 ;
-(char)wantsAPSRetries;
-(char)wantsHTTPHeaders;
-(NSString *)userAgentHeaderString;
-(char)wantsUserAgentInHeaders;
-(char)wantsResponse;
-(void)setServiceData:(NSData *)arg1 ;
-(void)setDeliveryAcknowledgementBlock:(id)arg1 ;
-(void)_setCachedBody:(id)arg1 ;
-(void)setResponseAlertInfo:(NSDictionary *)arg1 ;
-(NSString *)dsAuthID;
-(void)setDSAuthID:(id)arg1 ;
-(char)forceCellular;
-(void)setForceCellular:(char)arg1 ;
-(int)timeoutRetries;
-(void)setTimeoutRetries:(int)arg1 ;
-(NSData *)serviceData;
-(NSDictionary *)clientInfo;
-(char)wantsBinaryPush;
-(char)wantsIntegerUniqueIDs;
-(id)deliveryAcknowledgementBlock;
-(NSDictionary *)responseAlertInfo;
-(void)_cacheBody;
-(NSDictionary *)messageBodyUsingCache;
-(NSString *)uniqueIDString;
-(char)wantsIDSServer;
-(char)wantsCompressedBody;
-(char)wantsJSONBody;
-(char)wantsHTTPGet;
-(char)wantsBagKey;
-(char)wantsCFNetworkTimeout;
-(int)maxTimeoutRetries;
-(char)wantsExtraTimeoutRetry;
-(char)wantsManagedRetries;
-(char)wantsSignature;
-(char)wantsBodySignature;
-(char)wantsCustomRetryInterval;
-(double)customRetryInterval;
-(NSString *)dataUsageBundleIdentifier;
-(char)payloadCanBeLogged;
-(char)isValidMessage;
-(OpaqueSecKeyRefRef)pushPrivateKey;
-(void)setPushPrivateKey:(OpaqueSecKeyRefRef)arg1 ;
-(OpaqueSecKeyRefRef)pushPublicKey;
-(void)setPushPublicKey:(OpaqueSecKeyRefRef)arg1 ;
-(NSData *)pushCertificate;
-(void)setPushCertificate:(NSData *)arg1 ;
-(NSMutableArray *)certDataArray;
-(void)setCertDataArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)publicKeyArray;
-(void)setPublicKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)privateKeyArray;
-(void)setPrivateKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)userIDArray;
-(void)setUserIDArray:(NSMutableArray *)arg1 ;
-(OpaqueSecKeyRefRef)identityPrivateKey;
-(OpaqueSecKeyRefRef)identityPublicKey;
-(NSData *)IDCertificate;
-(char)hasRequiredKeys:(id*)arg1 ;
-(long long)responseCommand;
-(NSString *)bagKey;
-(NSDictionary *)additionalMessageHeaders;
-(NSDictionary *)additionalQueryStringParameters;
-(NSDictionary *)additionalMessageHeadersForOutgoingPush;
-(NSDictionary *)nonStandardMessageHeadersForOutgoingPush;
-(NSDictionary *)additionalInternalHeaders;
-(void)handleResponseHeaders:(id)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(char)_usingOutgoingPush;
-(void)_setUsingOutgoingPush:(char)arg1 ;
-(NSDictionary *)_cachedBody;
-(char)hasReceivedPushAck;
-(void)setHasReceivedPushAck:(char)arg1 ;
-(void)setContext:(id)arg1 ;
@end

