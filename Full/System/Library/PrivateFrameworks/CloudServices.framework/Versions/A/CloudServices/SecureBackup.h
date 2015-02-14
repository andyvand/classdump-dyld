/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Versions/A/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SecureBackup : NSObject {

	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> replyQueue;
	NSObject*<OS_dispatch_queue> syncQueue;

}

@property (assign,nonatomic) NSObject*<OS_dispatch_queue> replyQueue; 
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> syncQueue; 
-(id)enableWithInfo:(id)arg1 ;
-(id)disableWithInfo:(id)arg1 ;
-(id)recoverWithInfo:(id)arg1 results:(id*)arg2 ;
-(id)startSMSChallengeWithInfo:(id)arg1 results:(id*)arg2 ;
-(id)changeSMSTargetWithInfo:(id)arg1 ;
-(id)getAccountInfoWithInfo:(id)arg1 results:(id*)arg2 ;
-(id)_CreateSecureBackupConnection:(id)arg1 ;
-(void)_getAccountInfoWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_enableWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_recoverWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_disableWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_cachePassphraseWithInfoAsync:(id)arg1 completionQueue:(id)arg2 ;
-(void)_cachePassphraseWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_uncachePassphraseWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_uncachePassphraseWithInfoAsync:(id)arg1 completionQueue:(id)arg2 ;
-(void)_startSMSChallengeWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_changeSMSTargetWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_backupWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(void)getAccountInfoWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)enableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)recoverWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(void)recoverWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)disableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)cachePassphraseWithInfo:(id)arg1 ;
-(void)cachePassphraseWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)uncachePassphraseWithInfo:(id)arg1 ;
-(void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)backupWithInfo:(id)arg1 ;
-(void)backupWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)replyQueue;
@end

