/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Versions/A/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CloudServices : NSObject {

	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> replyQueue;

}

@property (assign,nonatomic) NSObject*<OS_dispatch_queue> replyQueue; 
+(id)_CreateLakituConnection;
-(id)getAccountInfoWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)startSMSChallengeWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)changeSMSTargetWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)storeRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)recoverRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)updateRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)deleteRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)listSMSTargetsWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)verifyCertificateWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)replyQueue;
@end

