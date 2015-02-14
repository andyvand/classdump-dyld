/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation {

	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;
	/*^block*/id _modifySubscriptionsCompletionBlock;
	NSMutableArray* _savedSubscriptions;
	NSMutableArray* _deletedSubscriptionIDs;
	NSMutableDictionary* _subscriptionsBySubscriptionIDs;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,copy) NSArray * subscriptionsToSave;                                       //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionIDsToDelete;                                   //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifySubscriptionsCompletionBlock;                               //@synthesize modifySubscriptionsCompletionBlock=_modifySubscriptionsCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * savedSubscriptions;                               //@synthesize savedSubscriptions=_savedSubscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedSubscriptionIDs;                           //@synthesize deletedSubscriptionIDs=_deletedSubscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionIDs;              //@synthesize subscriptionsBySubscriptionIDs=_subscriptionsBySubscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                          //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 ;
-(void)setModifySubscriptionsCompletionBlock:(id)arg1 ;
-(NSArray *)subscriptionsToSave;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(NSArray *)subscriptionIDsToDelete;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(NSMutableDictionary *)subscriptionsBySubscriptionIDs;
-(NSMutableDictionary *)subscriptionErrors;
-(NSMutableArray *)deletedSubscriptionIDs;
-(NSMutableArray *)savedSubscriptions;
-(id)modifySubscriptionsCompletionBlock;
-(void)setSavedSubscriptions:(NSMutableArray *)arg1 ;
-(void)setDeletedSubscriptionIDs:(NSMutableArray *)arg1 ;
-(void)setSubscriptionsBySubscriptionIDs:(NSMutableDictionary *)arg1 ;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

