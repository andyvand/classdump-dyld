/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol ISOperationDelegate;
@class NSError, NSLock, NSRunLoop, SSOperationProgress, ISServiceProxy, ISStoreAccount, ISStoreClient, NSString;

@interface ISOperation : NSOperation {

	NSError* _error;
	NSLock* _lock;
	NSRunLoop* _operationRunLoop;
	ISOperation* _parentOperation;
	SSOperationProgress* _progress;
	ISOperation* _subOperation;
	char _success;
	void* _operationContext;
	ISServiceProxy* _serviceProxy;
	NSLock* _serviceProxyLock;
	ISStoreAccount* _storeAccount;
	NSLock* _storeAccountLock;
	id _xpcReplyObject;
	int _requiredBagType;
	id<ISOperationDelegate> _delegate;
	ISStoreClient* _storeClient;
	/*^block*/id _completionHandler;
	/*^block*/id _progressHandler;

}

@property (__weak) id<ISOperationDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) ISServiceProxy * serviceProxy; 
@property (retain) ISStoreClient * storeClient;                             //@synthesize storeClient=_storeClient - In the implementation block
@property (nonatomic,retain) ISStoreAccount * storeAccount; 
@property (assign) void* operationContext;                                  //@synthesize operationContext=_operationContext - In the implementation block
@property (readonly) NSString * uniqueKey; 
@property (readonly) id xpcReplyObject;                                     //@synthesize xpcReplyObject=_xpcReplyObject - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (assign) char success;                                            //@synthesize success=_success - In the implementation block
@property (readonly) long long progressWeight; 
@property (readonly) double earlyTimeRemainingEstimate; 
@property (retain) ISOperation * parentOperation;                           //@synthesize parentOperation=_parentOperation - In the implementation block
@property (copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign) int requiredBagType;                                     //@synthesize requiredBagType=_requiredBagType - In the implementation block
@property (nonatomic,readonly) SSOperationProgress * progress; 
@property (retain) NSRunLoop * operationRunLoop;                            //@synthesize operationRunLoop=_operationRunLoop - In the implementation block
@property (retain) ISOperation * subOperation;                              //@synthesize subOperation=_subOperation - In the implementation block
-(ISOperation *)parentOperation;
-(void)setParentOperation:(ISOperation *)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(void)setSuccess:(char)arg1 ;
-(char)success;
-(id)initWithStoreClient:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<ISOperationDelegate>)arg1 ;
-(void)cancel;
-(void)lock;
-(void)unlock;
-(id<ISOperationDelegate>)delegate;
-(void)run;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(SSOperationProgress *)progress;
-(void)main;
-(void)run:(char)arg1 ;
-(id)valueForURLBagKey:(id)arg1 ;
-(ISStoreClient *)storeClient;
-(void)setStoreClient:(ISStoreClient *)arg1 ;
-(id)urlForURLBagKey:(id)arg1 ;
-(int)requiredBagType;
-(char)runSyncReturningError:(id*)arg1 ;
-(void)setRequiredBagType:(int)arg1 ;
-(ISServiceProxy *)serviceProxy;
-(ISStoreAccount *)storeAccount;
-(void)setStoreAccount:(ISStoreAccount *)arg1 ;
-(char)runSubOperation:(id)arg1 returningError:(id*)arg2 ;
-(void)setSubOperation:(ISOperation *)arg1 ;
-(NSRunLoop *)operationRunLoop;
-(ISOperation *)subOperation;
-(void)stopRunLoop;
-(NSString *)uniqueKey;
-(char)_loadRequredBagReturningError:(id*)arg1 ;
-(void)_main:(char)arg1 ;
-(void)_failAfterException;
-(void)_sendErrorToDelegate:(id)arg1 ;
-(void)setOperationRunLoop:(NSRunLoop *)arg1 ;
-(double)earlyTimeRemainingEstimate;
-(void)sendProgressToDelegate;
-(void)_sendSuccessToDelegate;
-(long long)progressWeight;
-(int)runRunLoopUntilStopped;
-(void*)operationContext;
-(void)setOperationContext:(void*)arg1 ;
-(id)xpcReplyObject;
-(char)showDialogInSeperateProcessForOperation:(id)arg1 ;
@end

