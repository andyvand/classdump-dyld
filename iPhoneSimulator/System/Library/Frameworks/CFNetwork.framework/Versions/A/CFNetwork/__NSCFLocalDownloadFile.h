/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol __NSCFLocalDownloadFileOpener;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSString;

@interface __NSCFLocalDownloadFile : NSObject {

	stat _stat;
	BOOL _finished;
	char _skipUnlink;
	BOOL _truncateFile;
	int _error;
	dispatch_io_sRef _writeIO;
	dispatch_queue_sRef _workQueue;
	NSString* _path;
	id<__NSCFLocalDownloadFileOpener> _fileProvider;
	/*^block*/id _finishCompletion;

}

@property (assign) dispatch_io_sRef writeIO;                                    //@synthesize writeIO=_writeIO - In the implementation block
@property (assign) dispatch_queue_sRef workQueue;                               //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) BOOL finished;                                               //@synthesize finished=_finished - In the implementation block
@property (retain) NSString * path;                                             //@synthesize path=_path - In the implementation block
@property (assign) char skipUnlink;                                             //@synthesize skipUnlink=_skipUnlink - In the implementation block
@property (assign) BOOL truncateFile;                                           //@synthesize truncateFile=_truncateFile - In the implementation block
@property (assign) int error;                                                   //@synthesize error=_error - In the implementation block
@property (assign) id<__NSCFLocalDownloadFileOpener> fileProvider;              //@synthesize fileProvider=_fileProvider - In the implementation block
@property (copy) id finishCompletion;                                           //@synthesize finishCompletion=_finishCompletion - In the implementation block
-(dispatch_queue_sRef)workQueue;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)fileURL;
-(void)setFinished:(BOOL)arg1 ;
-(int)error;
-(void)setError:(int)arg1 ;
-(BOOL)finished;
-(id)initWithExistingUnopenableFile:(id)arg1 fileProvider:(id)arg2 ;
-(void)truncate;
-(id)initTempFileWithDirectory:(id)arg1 ;
-(void)setSkipUnlink:(char)arg1 ;
-(id)initWithExistingFile:(id)arg1 expectedSize:(long long)arg2 ;
-(void)writeBytes:(dispatch_data_sRef)arg1 completionQueue:(dispatch_queue_sRef)arg2 completion:(/*^block*/id)arg3 ;
-(void)captureFile:(id*)arg1 outStat:(stat*)arg2 ;
-(void)finishOnQueue:(dispatch_queue_sRef)arg1 completion:(/*^block*/id)arg2 ;
-(void)setWorkQueue:(dispatch_queue_sRef)arg1 ;
-(id)initQueues;
-(void)setFileProvider:(id<__NSCFLocalDownloadFileOpener>)arg1 ;
-(dispatch_io_sRef)writeIO;
-(BOOL)truncateFile;
-(void)setTruncateFile:(BOOL)arg1 ;
-(id<__NSCFLocalDownloadFileOpener>)fileProvider;
-(id)finishCompletion;
-(void)setFinishCompletion:(id)arg1 ;
-(void)setWriteIO:(dispatch_io_sRef)arg1 ;
-(char)skipUnlink;
-(dispatch_io_sRef)ioChannel;
@end

