/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSDate, NSError, NSURL, NSURLConnection, NSURLResponse, NSMutableData, NSMutableArray, NSNumber;

@interface APSConfiguration : NSObject {

	NSString* _name;
	NSDictionary* _plist;
	NSDate* _expiry;
	NSDate* _fetchDate;
	NSError* _loadingError;
	char _isLoaded;
	char _hasValidSignature;
	char _isLoadBalanced;
	NSURL* _url;
	NSURLConnection* _urlConnection;
	NSURLResponse* _urlResponse;
	NSMutableData* _urlData;
	NSMutableArray* _pendingCompletionBlocks;

}

@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) unsigned long long serverCount; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) NSNumber * numberOfCriticalMessageKeepAlivesBeforeDisconnecting; 
@property (nonatomic,readonly) NSNumber * criticalMessageKeepAliveTimerDuration; 
@property (nonatomic,readonly) NSNumber * criticalMessageTimeout; 
@property (nonatomic,readonly) NSNumber * lowPriorityMessageBatchSize; 
@property (nonatomic,readonly) NSNumber * maximumLowPriorityBatchesPerHour; 
@property (nonatomic,readonly) NSNumber * wwanTrackedLinkQualityTimeInterval; 
@property (nonatomic,readonly) NSNumber * wwanTrackedLinkQualityOffTransitions; 
@property (nonatomic,readonly) NSNumber * awdSlowReceiveThreshold; 
@property (nonatomic,readonly) NSNumber * activeInterval; 
@property (nonatomic,readonly) NSNumber * forcedShortTimeoutInterval; 
@property (nonatomic,readonly) NSNumber * costDrivenDualChannelAttempts; 
@property (nonatomic,readonly) NSNumber * piggybackDualChannelAttempts; 
@property (nonatomic,readonly) NSNumber * disableCostDrivenDualChannelAttempts; 
@property (nonatomic,copy) NSDate * expiry;                                                                  //@synthesize expiry=_expiry - In the implementation block
@property (nonatomic,copy) NSDate * fetchDate;                                                               //@synthesize fetchDate=_fetchDate - In the implementation block
@property (assign,nonatomic) char hasValidSignature;                                                         //@synthesize hasValidSignature=_hasValidSignature - In the implementation block
+(id)_onQueue_configurationForEnvironment:(id)arg1 ;
+(id)configurationForEnvironment:(id)arg1 ;
+(void)loadConfigurationForEnvironment:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)invalidateConfigurationForEnvironment:(id)arg1 ;
+(void)initialize;
-(void)_callCompletionBlocksWithError:(id)arg1 ;
-(unsigned long long)serverCount;
-(void)_finishLoadWithResponse:(id)arg1 urlHost:(id)arg2 data:(id)arg3 ;
-(id)pendingCompletionBocks;
-(NSNumber *)numberOfCriticalMessageKeepAlivesBeforeDisconnecting;
-(NSNumber *)criticalMessageKeepAliveTimerDuration;
-(NSNumber *)criticalMessageTimeout;
-(NSNumber *)lowPriorityMessageBatchSize;
-(NSNumber *)maximumLowPriorityBatchesPerHour;
-(NSNumber *)wwanTrackedLinkQualityTimeInterval;
-(NSNumber *)wwanTrackedLinkQualityOffTransitions;
-(NSNumber *)awdSlowReceiveThreshold;
-(NSNumber *)activeInterval;
-(NSNumber *)forcedShortTimeoutInterval;
-(NSNumber *)costDrivenDualChannelAttempts;
-(NSNumber *)piggybackDualChannelAttempts;
-(NSNumber *)disableCostDrivenDualChannelAttempts;
-(NSDate *)fetchDate;
-(void)setFetchDate:(NSDate *)arg1 ;
-(NSDate *)expiry;
-(void)setExpiry:(NSDate *)arg1 ;
-(char)hasValidSignature;
-(void)setHasValidSignature:(char)arg1 ;
-(NSString *)hostname;
-(id)initWithEnvironment:(id)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(void)dealloc;
-(char)_isLoaded;
-(int)status;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(char)_isExpired;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end
