/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKStoreAccess.framework/Versions/A/BKStoreAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKStoreAccess/MZBookKeeperOperationDelegate.h>
#import <BKStoreAccess/IMCloudsyncDeserializeOperationDelegate.h>

@protocol MZBookKeeperControllerDelegate, OS_dispatch_queue;
@class NSURL, NSString, MZBookKeeperStoreAuthenticationController, NSMutableArray, MZBookKeeperTransaction, MZBookKeeperClampsController, NSOperationQueue, MZBookKeeperDeserializer, NSObject;

@interface MZBookKeeperController : NSObject <MZBookKeeperOperationDelegate, IMCloudsyncDeserializeOperationDelegate> {

	char _enabled;
	char _resolvingError;
	id<MZBookKeeperControllerDelegate> _delegate;
	NSURL* _defaultGetURL;
	NSURL* _defaultSetURL;
	NSString* _defaultDomain;
	MZBookKeeperStoreAuthenticationController* _authenticationController;
	NSMutableArray* _pendingTransactions;
	MZBookKeeperTransaction* _currentTransaction;
	MZBookKeeperClampsController* _clampsController;
	NSOperationQueue* _operationQueue;
	MZBookKeeperDeserializer* _currentDeserializer;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (__weak) id<MZBookKeeperControllerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSURL * defaultGetURL;                                                             //@synthesize defaultGetURL=_defaultGetURL - In the implementation block
@property (retain) NSURL * defaultSetURL;                                                             //@synthesize defaultSetURL=_defaultSetURL - In the implementation block
@property (copy) NSString * defaultDomain;                                                            //@synthesize defaultDomain=_defaultDomain - In the implementation block
@property (getter=isEnabled) char enabled;                                                            //@synthesize enabled=_enabled - In the implementation block
@property (retain) MZBookKeeperStoreAuthenticationController * authenticationController;              //@synthesize authenticationController=_authenticationController - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingTransactions;                                    //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (nonatomic,retain) MZBookKeeperTransaction * currentTransaction;                            //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (nonatomic,retain) MZBookKeeperClampsController * clampsController;                         //@synthesize clampsController=_clampsController - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) MZBookKeeperDeserializer * currentDeserializer;                          //@synthesize currentDeserializer=_currentDeserializer - In the implementation block
@property (assign,getter=isResolvingError,nonatomic) char resolvingError;                             //@synthesize resolvingError=_resolvingError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDefaultGetURL:(NSURL *)arg1 ;
-(void)setDefaultSetURL:(NSURL *)arg1 ;
-(NSURL *)defaultGetURL;
-(NSURL *)defaultSetURL;
-(void)_processPendingTransactions;
-(void)_cancelAllTransactions:(id)arg1 ;
-(id)_scheduleTransactionWithType:(int)arg1 URL:(id)arg2 keys:(id)arg3 processor:(id)arg4 ;
-(char)_delegateShouldScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_scheduleTransaction:(id)arg1 ;
-(void)_transactionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)_cancelTransaction:(id)arg1 error:(id)arg2 ;
-(void)_resolveError:(id)arg1 resolution:(int)arg2 ;
-(MZBookKeeperClampsController *)clampsController;
-(MZBookKeeperTransaction *)currentTransaction;
-(NSMutableArray *)pendingTransactions;
-(void)_endBackgroundTask;
-(void)setCurrentTransaction:(MZBookKeeperTransaction *)arg1 ;
-(char)isResolvingError;
-(void)_processCurrentTransaction;
-(char)_authenticationCanProcessTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_requestForTransaction:(id)arg1 ;
-(void)_beginBackgroundTask;
-(MZBookKeeperStoreAuthenticationController *)authenticationController;
-(char)_canScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_addPendingTransaction:(id)arg1 ;
-(char)_isEnabledForTransaction:(id)arg1 error:(id*)arg2 ;
-(char)_isTransactionValid:(id)arg1 error:(id*)arg2 ;
-(char)_clampsCanScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)scheduleTransaction:(id)arg1 ;
-(void)_delegateTransactionDidFinish:(id)arg1 ;
-(char)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)resolveError:(id)arg1 resolution:(int)arg2 ;
-(void)setCurrentDeserializer:(MZBookKeeperDeserializer *)arg1 ;
-(void)setResolvingError:(char)arg1 ;
-(void)_errorResolutionRetry:(id)arg1 ;
-(void)_errorResolutionCancel:(id)arg1 ;
-(void)_errorResolutionDefault:(id)arg1 ;
-(void)_processOperationOutput:(id)arg1 operationAuthenticated:(char)arg2 ;
-(void)_currentTransactionDidFinish;
-(MZBookKeeperDeserializer *)currentDeserializer;
-(void)cloudSyncOperation:(id)arg1 scheduleURLOperation:(id)arg2 ;
-(void)cloudSyncOperationOperationDidFinish:(id)arg1 ;
-(void)deserializeOperationDidFinish:(id)arg1 shouldReschedule:(char)arg2 ;
-(void)cancelScheduledTransaction:(id)arg1 ;
-(void)setAuthenticationController:(MZBookKeeperStoreAuthenticationController *)arg1 ;
-(void)setPendingTransactions:(NSMutableArray *)arg1 ;
-(void)setClampsController:(MZBookKeeperClampsController *)arg1 ;
-(NSString *)defaultDomain;
-(void)setDefaultDomain:(NSString *)arg1 ;
-(id)scheduleGetTransactionWithKeys:(id)arg1 processor:(id)arg2 ;
-(id)scheduleSetTransactionWithKeys:(id)arg1 processor:(id)arg2 ;
-(char)isIdle;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)setDelegate:(id<MZBookKeeperControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id<MZBookKeeperControllerDelegate>)delegate;
-(void)reset;
-(NSOperationQueue *)operationQueue;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

