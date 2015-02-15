/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSession.h>
#import <CFNetwork/NDBackgroundSessionClient.h>
#import <CFNetwork/NSURLSessionSubclass.h>

@protocol NDBackgroundSessionProtocol;
@class NSXPCConnection, NSMutableDictionary, NSMutableArray, NSString, NSURL;

@interface __NSURLBackgroundSession : NSURLSession <NDBackgroundSessionClient, NSURLSessionSubclass> {

	unsigned long long _identSeed;
	id<NDBackgroundSessionProtocol> _remoteSession;
	NSXPCConnection* _xpcConn;
	NSMutableDictionary* _tasks;
	NSMutableArray* _taskIDsToFailOnReconnection;
	dispatch_queue_sRef _invalidateQueue;
	/*^block*/id _invalidateCallback;
	NSString* _appWakeUUID;
	NSURL* _downloadDirectory;
	char _isPrivileged;
	char _isInvalid;

}

@property (copy) NSString * appWakeUUID;                            //@synthesize appWakeUUID=_appWakeUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_onqueue_invokeInvalidateCallback;
-(id)copyTasks;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)_onqueue_invalidateSession:(char)arg1 withQueue:(dispatch_queue_sRef)arg2 completion:(/*^block*/id)arg3 ;
-(id)dataTaskForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_streamTaskForHost:(id)arg1 port:(long long)arg2 tls:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_onqueue_flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_completeInvalidation:(char)arg1 ;
-(void)_onqueue_resetStorageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)backgroundDownloadsDirectory;
-(id)cachesDirectory;
-(void)setupXPCConnection;
-(void)setupBackgroundSession;
-(void)sendInvalidationRequest;
-(void)cleanupConfig;
-(void)recreateExistingTasks:(id)arg1 ;
-(void)failDisconnectedTasks;
-(id)taskForIdentifier:(unsigned long long)arg1 ;
-(id)disconnectedErrorWithURL:(id)arg1 ;
-(id)_onqueue_dataTaskForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performBlockOnQueueAndRethrowExceptions:(/*^block*/id)arg1 ;
-(void)validateSerializabilityForRequest:(id)arg1 completion:(id)arg2 ;
-(id)_onqueue_dummyTaskForClass:(Class)arg1 withError:(id)arg2 ;
-(id)requestWithCookiesApplied:(id)arg1 ;
-(id)placeholderErrorWithURL:(id)arg1 ;
-(id)_onqueue_uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)validateUploadFile:(id)arg1 ;
-(id)_onqueue_downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)backgroundResumeDataFromClientResumeData:(id)arg1 ;
-(id)_downloadTaskForResumeData:(id)arg1 ;
-(id)_downloadTaskForRequest:(id)arg1 ;
-(void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2 ;
-(void)backgroundTaskDidResume:(unsigned long long)arg1 ;
-(void)backgroundTaskDidSuspend:(unsigned long long)arg1 ;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)backgroundTask:(unsigned long long)arg1 willPerformHTTPRedirection:(id)arg2 withNewRequest:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)backgroundTask:(unsigned long long)arg1 _willSendRequestForEstablishedConnection:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)backgroundTaskHasConnectionWaiting:(unsigned long long)arg1 ;
-(void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithReason:(long long)arg2 ;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 ;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4 ;
-(void)backgroundTask:(unsigned long long)arg1 needNewBodyStream:(char)arg2 withReply:(/*^block*/id)arg3 ;
-(void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(id)arg2 timingData:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)backgroundDataTask:(unsigned long long)arg1 didReceiveData:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)backgroundDataTaskDidBecomeDownloadTask:(unsigned long long)arg1 ;
-(void)willRetryBackgroundDataTask:(unsigned long long)arg1 withError:(id)arg2 timingData:(id)arg3 ;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3 ;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)openFileAtPath:(id)arg1 mode:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)backgroundSessionDidStartAppWake:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)credStorage_getInitialCredentialDictionariesWithReply:(/*^block*/id)arg1 ;
-(void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)credStorage_allCredentialsWithReply:(/*^block*/id)arg1 ;
-(void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(id)clientResumeDataFromBackgroundResumeData:(id)arg1 ;
-(void)_onqueue_disavowTask:(id)arg1 ;
-(NSString *)appWakeUUID;
-(void)setAppWakeUUID:(NSString *)arg1 ;
@end
