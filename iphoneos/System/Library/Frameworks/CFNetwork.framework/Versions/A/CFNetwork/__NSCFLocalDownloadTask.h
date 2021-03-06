/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFLocalSessionTask.h>
#import <CFNetwork/NSURLSessionDownloadTaskSubclass.h>
#import <CFNetwork/__NSCFLocalDownloadFileOpener.h>

@class __NSCFLocalDownloadFile, NSDictionary, NSString;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {

	BOOL _canWrite;
	BOOL _suppressProgress;
	BOOL _needFinish;
	BOOL _didIssueNeedFinish;
	int _seqNo;
	/*^block*/id _fileCompletion;
	__NSCFLocalDownloadFile* _downloadFile;
	dispatch_data_sRef _writeBuffer;
	unsigned long long _ioSuspend;
	unsigned long long _totalWrote;
	/*^block*/id _resumeCallback;
	long long _initialResumeSize;
	NSDictionary* _originalResumeInfo;
	unsigned long long __transientWriteProgress;
	/*^block*/id __afterDidReportProgressOnQueue;

}

@property (copy) id fileCompletion;                                         //@synthesize fileCompletion=_fileCompletion - In the implementation block
@property (retain) __NSCFLocalDownloadFile * downloadFile;                  //@synthesize downloadFile=_downloadFile - In the implementation block
@property (assign) BOOL canWrite;                                           //@synthesize canWrite=_canWrite - In the implementation block
@property (assign) BOOL suppressProgress;                                   //@synthesize suppressProgress=_suppressProgress - In the implementation block
@property (assign) dispatch_data_sRef writeBuffer;                          //@synthesize writeBuffer=_writeBuffer - In the implementation block
@property (assign) unsigned long long ioSuspend;                            //@synthesize ioSuspend=_ioSuspend - In the implementation block
@property (assign) int seqNo;                                               //@synthesize seqNo=_seqNo - In the implementation block
@property (assign) BOOL needFinish;                                         //@synthesize needFinish=_needFinish - In the implementation block
@property (assign) BOOL didIssueNeedFinish;                                 //@synthesize didIssueNeedFinish=_didIssueNeedFinish - In the implementation block
@property (assign) unsigned long long totalWrote;                           //@synthesize totalWrote=_totalWrote - In the implementation block
@property (copy) id resumeCallback;                                         //@synthesize resumeCallback=_resumeCallback - In the implementation block
@property (assign) long long initialResumeSize;                             //@synthesize initialResumeSize=_initialResumeSize - In the implementation block
@property (retain) NSDictionary * originalResumeInfo;                       //@synthesize originalResumeInfo=_originalResumeInfo - In the implementation block
@property (assign) unsigned long long _transientWriteProgress;              //@synthesize _transientWriteProgress=__transientWriteProgress - In the implementation block
@property (copy) id _afterDidReportProgressOnQueue;                         //@synthesize _afterDidReportProgressOnQueue=__afterDidReportProgressOnQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(__NSCFLocalDownloadFile *)downloadFile;
-(void)setCanWrite:(BOOL)arg1 ;
-(BOOL)canWrite;
-(id)initWithTask:(id)arg1 ;
-(void)dealloc;
-(char)isKindOfClass:(Class)arg1 ;
-(void)_onqueue_completeInitialization;
-(id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4 ;
-(id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3 ;
-(void)setFileCompletion:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(dispatch_data_sRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDownloadFile:(__NSCFLocalDownloadFile *)arg1 ;
-(void)setInitialResumeSize:(long long)arg1 ;
-(BOOL)setupForNewDownload:(id)arg1 ;
-(void)setTotalWrote:(unsigned long long)arg1 ;
-(long long)initialResumeSize;
-(void)setOriginalResumeInfo:(NSDictionary *)arg1 ;
-(void)setWriteBuffer:(dispatch_data_sRef)arg1 ;
-(void)setResumeCallback:(id)arg1 ;
-(NSDictionary *)originalResumeInfo;
-(BOOL)needFinish;
-(void)setNeedFinish:(BOOL)arg1 ;
-(void)checkWrite;
-(id)resumeCallback;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(unsigned long long)totalWrote;
-(unsigned long long)_transientWriteProgress;
-(void)set_transientWriteProgress:(unsigned long long)arg1 ;
-(BOOL)suppressProgress;
-(void)setSuppressProgress:(BOOL)arg1 ;
-(id)fileCompletion;
-(id)_afterDidReportProgressOnQueue;
-(void)reportProgress:(unsigned long long)arg1 ;
-(void)set_afterDidReportProgressOnQueue:(id)arg1 ;
-(dispatch_data_sRef)writeBuffer;
-(int)seqNo;
-(void)setSeqNo:(int)arg1 ;
-(id)createResumeInformation:(id)arg1 ;
-(void)_private_errorCompletion;
-(void)writeAndResume;
-(unsigned long long)ioSuspend;
-(void)setIoSuspend:(unsigned long long)arg1 ;
-(BOOL)didIssueNeedFinish;
-(void)setDidIssueNeedFinish:(BOOL)arg1 ;
-(void)_private_fileCompletion;
-(int)openItemForPath:(id)arg1 mode:(int)arg2 ;
-(id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3 ;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)_private_posixError:(int)arg1 ;
@end

