/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionTask.h>
#import <CFNetwork/NSURLSessionTaskSubclass.h>
#import <CFNetwork/NSURLSessionDataTaskSubclass.h>
#import <CFNetwork/NSURLSessionUploadTaskSubclass.h>
#import <CFNetwork/SessionConnectionDelegate.h>

@class __NSCFURLSessionConnection, NSURL, NSData, NSInputStream, __NSURLSessionLocal, NSString, NSURLSessionConfiguration;

@interface __NSCFLocalSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass, NSURLSessionDataTaskSubclass, NSURLSessionUploadTaskSubclass, SessionConnectionDelegate> {

	char _pendingResponseDisposition;
	char _pendingResponseDisposition_didFinish;
	char _duetAccountingIsDiscretionary;
	char _didIssueDidFinish;
	__NSCFURLSessionConnection* _cfConn;
	NSURL* _uploadFile;
	NSData* _uploadData;
	NSInputStream* _uploadDataStream;
	dispatch_data_sRef _dataTaskData;
	/*^block*/id _dataTaskCompletion;
	dispatch_data_sRef _pendingResponseBytes;
	__NSURLSessionLocal* _localSession;
	unsigned long long _suspendCount;
	/*^block*/id _async_initialization;
	dispatch_source_sRef _resourceTimeout;
	NSString* _duetAccountedBundleID;
	HTTPConnectionCacheKey* _connKey;
	NSURLSessionConfiguration* __configuration;

}

@property (retain) __NSCFURLSessionConnection * cfConn;                     //@synthesize cfConn=_cfConn - In the implementation block
@property (retain) NSURL * uploadFile;                                      //@synthesize uploadFile=_uploadFile - In the implementation block
@property (retain) NSData * uploadData;                                     //@synthesize uploadData=_uploadData - In the implementation block
@property (retain) NSInputStream * uploadDataStream;                        //@synthesize uploadDataStream=_uploadDataStream - In the implementation block
@property (assign) dispatch_data_sRef dataTaskData;                         //@synthesize dataTaskData=_dataTaskData - In the implementation block
@property (copy) id dataTaskCompletion;                                     //@synthesize dataTaskCompletion=_dataTaskCompletion - In the implementation block
@property (assign) char pendingResponseDisposition;                         //@synthesize pendingResponseDisposition=_pendingResponseDisposition - In the implementation block
@property (assign) char pendingResponseDisposition_didFinish;               //@synthesize pendingResponseDisposition_didFinish=_pendingResponseDisposition_didFinish - In the implementation block
@property (assign) dispatch_data_sRef pendingResponseBytes;                 //@synthesize pendingResponseBytes=_pendingResponseBytes - In the implementation block
@property (retain) __NSURLSessionLocal * localSession;                      //@synthesize localSession=_localSession - In the implementation block
@property (assign) unsigned long long suspendCount;                         //@synthesize suspendCount=_suspendCount - In the implementation block
@property (copy) id async_initialization;                                   //@synthesize async_initialization=_async_initialization - In the implementation block
@property (assign) dispatch_source_sRef resourceTimeout;                    //@synthesize resourceTimeout=_resourceTimeout - In the implementation block
@property (retain) NSString * duetAccountedBundleID;                        //@synthesize duetAccountedBundleID=_duetAccountedBundleID - In the implementation block
@property (assign) char duetAccountingIsDiscretionary;                      //@synthesize duetAccountingIsDiscretionary=_duetAccountingIsDiscretionary - In the implementation block
@property (assign) char didIssueDidFinish;                                  //@synthesize didIssueDidFinish=_didIssueDidFinish - In the implementation block
@property (assign) HTTPConnectionCacheKey* connKey;                         //@synthesize connKey=_connKey - In the implementation block
@property (retain) NSURLSessionConfiguration * _configuration;              //@synthesize _configuration=__configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTask:(id)arg1 ;
-(void)setConnection:(id)arg1 ;
-(unsigned long long)suspendCount;
-(void)dealloc;
-(NSString *)description;
-(__NSCFURLSessionConnection *)cfConn;
-(id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4 ;
-(void)setDataTaskCompletion:(id)arg1 ;
-(void)setUploadFile:(NSURL *)arg1 ;
-(id)_onqueue_strippedMutableRequest;
-(void)setAsync_initialization:(id)arg1 ;
-(void)_onqueue_completeInitialization;
-(void)_private_onqueue_didReceiveResponse:(id)arg1 ;
-(id)dataTaskCompletion;
-(__NSURLSessionLocal *)localSession;
-(void)_onqueue_suspend;
-(void)setPendingResponseDisposition:(char)arg1 ;
-(void)_private_onqueue_didReceiveResponseDisposition:(long long)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLocalSession:(__NSURLSessionLocal *)arg1 ;
-(void)setSuspendCount:(unsigned long long)arg1 ;
-(dispatch_source_sRef)resourceTimeout;
-(void)setCfConn:(__NSCFURLSessionConnection *)arg1 ;
-(void)setUploadData:(NSData *)arg1 ;
-(void)setUploadDataStream:(NSInputStream *)arg1 ;
-(void)setDataTaskData:(dispatch_data_sRef)arg1 ;
-(void)setPendingResponseBytes:(dispatch_data_sRef)arg1 ;
-(HTTPConnectionCacheKey*)connKey;
-(void)setConnKey:(HTTPConnectionCacheKey*)arg1 ;
-(void)_onqueue_resume;
-(char)pendingResponseDisposition_didFinish;
-(void)setPendingResponseDisposition_didFinish:(char)arg1 ;
-(void)_task_onqueue_didFinish;
-(void)_onqueue_cancel;
-(dispatch_data_sRef)pendingResponseBytes;
-(void)_finishAllow;
-(void)_task_onqueue_didReceiveDispatchData:(dispatch_data_sRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishBecomeStream:(id)arg1 ;
-(void)_finishBecomeDownload:(id)arg1 ;
-(char)pendingResponseDisposition;
-(dispatch_data_sRef)dataTaskData;
-(char)didIssueDidFinish;
-(void)setDidIssueDidFinish:(char)arg1 ;
-(id)async_initialization;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(id)canceledError;
-(void)_onqueue_cancel_with_error:(id)arg1 ;
-(id)error:(id)arg1 code:(long long)arg2 ;
-(void)startResourceTimer;
-(void)setResourceTimeout:(dispatch_source_sRef)arg1 ;
-(id)timeoutError;
-(void)cancel_with_error:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_onqueue_didReceiveDispatchData:(dispatch_data_sRef)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_connectionWaitingWithReason:(long long)arg1 ;
-(void)_onqueue_conditionalRequirementsChanged:(char)arg1 ;
-(void)_onqueue_adjustPoolPriority;
-(void)_onqueue_disavow;
-(void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(/*^block*/id)arg4 ;
-(void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)connectionWillFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveConnectionCacheKey:(HTTPConnectionCacheKey*)arg2 ;
-(void)connection:(id)arg1 challenged:(id)arg2 authCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveData:(dispatch_data_sRef)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4 ;
-(void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 waitingWithReason:(long long)arg2 ;
-(void)connection:(id)arg1 _conditionalRequirementsChanged:(char)arg2 ;
-(void)_onqueue_adjustPriorityHint:(float)arg1 ;
-(id)nsurlError:(int)arg1 ;
-(id)posixError:(int)arg1 ;
-(NSURL *)uploadFile;
-(NSData *)uploadData;
-(NSInputStream *)uploadDataStream;
-(NSString *)duetAccountedBundleID;
-(void)setDuetAccountedBundleID:(NSString *)arg1 ;
-(char)duetAccountingIsDiscretionary;
-(void)setDuetAccountingIsDiscretionary:(char)arg1 ;
-(NSURLSessionConfiguration *)_configuration;
-(void)set_configuration:(NSURLSessionConfiguration *)arg1 ;
@end

