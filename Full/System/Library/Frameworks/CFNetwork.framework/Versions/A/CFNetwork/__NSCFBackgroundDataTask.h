/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFBackgroundSessionTask.h>
#import <CFNetwork/NSStreamDelegate.h>

@class NSInputStream, NSFileHandle, NSString;

@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate> {

	NSInputStream* _requestBodyStream;
	NSInputStream* _initialStream;
	dispatch_queue_sRef _writeQueue;
	dispatch_io_sRef _pipeIO;
	unsigned long long _bytesRead;
	char _streamBased;
	NSFileHandle* _readHandle;

}

@property (readonly) NSFileHandle * readHandle;                          //@synthesize readHandle=_readHandle - In the implementation block
@property (getter=isStreamBased,readonly) char streamBased;              //@synthesize streamBased=_streamBased - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(char)isKindOfClass:(Class)arg1 ;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_onqueue_needNewBodyStream:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned long long)arg4 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_didReceiveData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_willBeRetried;
-(void)captureStream:(id)arg1 ;
-(void)_onqueue_openStream;
-(void)finishStream:(char)arg1 ;
-(void)readFromStream;
-(NSFileHandle *)readHandle;
-(char)isStreamBased;
@end

