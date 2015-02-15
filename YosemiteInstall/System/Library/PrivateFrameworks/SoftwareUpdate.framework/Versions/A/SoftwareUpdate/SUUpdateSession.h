/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
@class NSMutableDictionary, NSDictionary, NSMutableSet;

@interface SUUpdateSession : NSObject {

	NSMutableDictionary* _updateStatusByKey;
	NSMutableDictionary* _initiatedDownloads;
	NSDictionary* _completeUpdatesByKey;
	dispatch_semaphore_sRef _foregroundConcurrentDownloadSemaphore;
	NSMutableSet* _backgroundKeys;
	NSMutableDictionary* _initiatedInstalls;
	NSMutableDictionary* _factoredInstallSizeByKey;
	NSMutableDictionary* _downloadDoneBlocksByKey;
	NSMutableDictionary* _completionSemaphoreByKey;
	long long _foregroundTransactions;
	long long _backgroundTransactions;
	NSMutableDictionary* _assertionByTransactionID;
	dispatch_queue_sRef _updateStatusQueue;
	dispatch_queue_sRef _clientNotifyQueue;
	dispatch_queue_sRef _transactionQueue;
	char _isPreparingForReboot;
	char _nowIsLater;
	char _pendingStageInstallCancelled;
	/*^block*/id _transactionCountDidChangeHandler;
	/*^block*/id _installStateDidChangeHandler;

}

@property (copy) id transactionCountDidChangeHandler;              //@synthesize transactionCountDidChangeHandler=_transactionCountDidChangeHandler - In the implementation block
@property (copy) id installStateDidChangeHandler;                  //@synthesize installStateDidChangeHandler=_installStateDidChangeHandler - In the implementation block
@property (assign) char isPreparingForReboot;                      //@synthesize isPreparingForReboot=_isPreparingForReboot - In the implementation block
@property (assign) char nowIsLater;                                //@synthesize nowIsLater=_nowIsLater - In the implementation block
@property (assign) char pendingStageInstallCancelled;              //@synthesize pendingStageInstallCancelled=_pendingStageInstallCancelled - In the implementation block
+(id)sharedUpdateSession;
-(void)cancelUpdatesForProductKeys:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)archiveToCoder:(id)arg1 ;
-(void)restoreFromCoder:(id)arg1 ;
-(void)dumpDebugInfo;
-(void)setTransactionCountDidChangeHandler:(id)arg1 ;
-(void)setInstallStateDidChangeHandler:(id)arg1 ;
-(char)nowIsLater;
-(id)statusForUpdateWithProductKey:(id)arg1 ;
-(unsigned long long)diskSpaceRequiredForProducts:(id)arg1 includingInstall:(char)arg2 ;
-(void)startDownloadingForProducts:(id)arg1 inForeground:(char)arg2 replyWhenDone:(/*^block*/id)arg3 ;
-(void)startUpdateForProducts:(id)arg1 usingClientAuthorization:(AuthorizationOpaqueRefRef)arg2 inForeground:(char)arg3 holdingBoostDuringInstall:(char)arg4 stageInstall:(char)arg5 clientBlocksRestart:(char)arg6 allowOnlyAppleSigned:(char)arg7 packageScriptUserID:(unsigned)arg8 sendingStatusUpdates:(char)arg9 replyWhenDone:(/*^block*/id)arg10 ;
-(void)setIsPreparingForReboot:(char)arg1 ;
-(void)setNowIsLater:(char)arg1 ;
-(id)combinedStatusForUpdatesWithProductKeys:(id)arg1 individualStatus:(id*)arg2 ;
-(void)setupStatusForAvailableProducts:(id)arg1 afterScan:(char)arg2 ;
-(char)isPreparingForReboot;
-(long long)activeForegroundTransactions;
-(void)updateStatusChangedExternally:(id)arg1 ;
-(void)finishStagingProduct:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)_shouldResetStatus:(id)arg1 afterScan:(char)arg2 ;
-(void)setPendingStageInstallCancelled:(char)arg1 ;
-(void)_installStateDidChangeForKey:(id)arg1 ;
-(long long)_startTransactionForForeground:(char)arg1 withProducts:(id)arg2 includingInstall:(char)arg3 ;
-(void)_startDownloadingUpdateWithProduct:(id)arg1 inForeground:(char)arg2 forActivePhases:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_cancelBackgroundDownloadOperations;
-(void)_stopTransactionWithID:(long long)arg1 ;
-(id)_updateStatusForProducts:(id)arg1 ;
-(char)pendingStageInstallCancelled;
-(void)_installProducts:(id)arg1 authorization:(AuthorizationOpaqueRefRef)arg2 holdingBoostDuringInstall:(char)arg3 stageInstall:(char)arg4 clientBlocksRestart:(char)arg5 allowOnlyAppleSigned:(char)arg6 packageScriptUserID:(unsigned)arg7 ;
-(id)_nonatomicStatusForUpdateWithProductKey:(id)arg1 averageDownloadSpeed:(float*)arg2 ;
-(long long)activeBackgroundTransactions;
-(id)transactionCountDidChangeHandler;
-(id)installStateDidChangeHandler;
-(id)init;
-(void)dealloc;
-(void)resetState;
@end
