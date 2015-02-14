/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@interface CKFetchUserQuotaOperation : CKDatabaseOperation {

	/*^block*/id _fetchUserQuotaCompletionBlock;
	unsigned long long _quotaAvailable;

}

@property (nonatomic,copy) id fetchUserQuotaCompletionBlock;                 //@synthesize fetchUserQuotaCompletionBlock=_fetchUserQuotaCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned long long quotaAvailable;              //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)performCKOperation;
-(Class)operationInfoClass;
-(void)_handleCompletionCallback:(id)arg1 ;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(id)fetchUserQuotaCompletionBlock;
-(void)setFetchUserQuotaCompletionBlock:(id)arg1 ;
-(id)init;
-(unsigned long long)quotaAvailable;
@end

