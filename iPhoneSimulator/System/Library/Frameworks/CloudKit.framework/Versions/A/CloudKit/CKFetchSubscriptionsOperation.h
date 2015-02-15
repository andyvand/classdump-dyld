/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation {

	char _isFetchAllSubscriptionsOperation;
	NSArray* _subscriptionIDs;
	/*^block*/id _fetchSubscriptionCompletionBlock;
	NSArray* _subscriptions;
	NSMutableDictionary* _subscriptionsBySubscriptionID;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,copy) NSArray * subscriptionIDs;                                          //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (nonatomic,copy) id fetchSubscriptionCompletionBlock;                                //@synthesize fetchSubscriptionCompletionBlock=_fetchSubscriptionCompletionBlock - In the implementation block
@property (nonatomic,retain) NSArray * subscriptions;                                          //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionID;              //@synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                         //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
@property (assign,nonatomic) char isFetchAllSubscriptionsOperation;                            //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
+(id)fetchAllSubscriptionsOperation;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithSubscriptionIDs:(id)arg1 ;
-(void)setFetchSubscriptionCompletionBlock:(id)arg1 ;
-(NSMutableDictionary *)subscriptionErrors;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
-(void)setIsFetchAllSubscriptionsOperation:(char)arg1 ;
-(NSArray *)subscriptionIDs;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(char)isFetchAllSubscriptionsOperation;
-(id)fetchSubscriptionCompletionBlock;
-(NSMutableDictionary *)subscriptionsBySubscriptionID;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(void)setSubscriptionsBySubscriptionID:(NSMutableDictionary *)arg1 ;
-(NSArray *)subscriptions;
-(id)init;
@end

