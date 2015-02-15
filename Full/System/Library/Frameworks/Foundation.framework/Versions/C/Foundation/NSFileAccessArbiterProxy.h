/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFileAccessArbiter.h>

@class NSMutableDictionary, NSString;

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {

	xpc_connection_sRef _server;
	dispatch_queue_sRef _serverQueue;
	/*^block*/id _serverEventHandler;
	dispatch_queue_sRef _queue;
	NSMutableDictionary* _presentersByID;
	NSMutableDictionary* _providersByID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_idForReactor:(id)arg1 ;
+(id)_fileReactorDebuggingInformation;
+(void)_accessPresenterOperationRecordsUsingBlock:(/*^block*/id)arg1 ;
+(id)_willBeginOperationForReactor:(id)arg1 withDescription:(id)arg2 ;
-(id)idForFileReactor:(id)arg1 ;
-(void)cancelAccessClaimForID:(id)arg1 ;
-(dispatch_semaphore_sRef)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(char)arg2 ;
-(void)revokeAccessClaimForID:(id)arg1 ;
-(void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(void)revokeSubarbitrationClaimForID:(id)arg1 ;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(xpc_connection_sRef)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(void)addFileProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeFileProvider:(id)arg1 ;
-(id)fileProviders;
-(void)getDebugInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleMessage:(void*)arg1 ;
-(void)handleCanceledServer;
-(id)initWithServer:(xpc_connection_sRef)arg1 queue:(dispatch_queue_sRef)arg2 eventHandler:(/*^block*/id)arg3 ;
-(void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(/*^block*/id)arg2 ;
-(id)_readRelinquishmentForPresenter:(id)arg1 ;
-(void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 ifNecessaryUsingSelector:(SEL)arg3 recordingRelinquishment:(id)arg4 continuer:(/*^block*/id)arg5 ;
-(void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(/*^block*/id)arg2 ;
-(id)_writeRelinquishmentForPresenter:(id)arg1 ;
-(void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned long long)arg3 subitemURL:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_makePresenter:(id)arg1 reacquireFromReadingClaimForID:(id)arg2 ;
-(void)_makePresenter:(id)arg1 reacquireFromWritingClaimForID:(id)arg2 ;
-(void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2 ;
-(void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3 ;
-(void)_makePresenterObserveDisconnection:(id)arg1 ;
-(void)_makePresenterObserveReconnection:(id)arg1 ;
-(void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2 ;
-(void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5 ;
-(void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2 ;
-(void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 forAccessClaimWithID:(id)arg3 processIdentifier:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_makeProvider:(id)arg1 cancelProvidingItemAtURL:(id)arg2 forAccessClaimWithID:(id)arg3 ;
-(void)_makeProvider:(id)arg1 providePhysicalURLForURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_makeProvider:(id)arg1 observePresentationChangeOfKind:(id)arg2 withPresenterID:(id)arg3 processIdentifier:(int)arg4 url:(id)arg5 newURL:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_makeProvider:(id)arg1 observeEndOfWriteAtURL:(id)arg2 forAccessClaimWithID:(id)arg3 processIdentifier:(int)arg4 ;
-(void)finalize;
-(void)dealloc;
-(void)addFilePresenter:(id)arg1 ;
-(id)filePresenters;
-(void)removeFilePresenter:(id)arg1 ;
@end

