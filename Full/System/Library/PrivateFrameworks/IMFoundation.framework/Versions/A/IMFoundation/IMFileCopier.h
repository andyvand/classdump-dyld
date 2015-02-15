/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMFileCopierDelegate;
#import <IMFoundation/IMFoundation-Structs.h>
@class NSURL;

@interface IMFileCopier : NSObject {

	char _shouldCancel;
	char _didErrorOccur;
	char _inProgress;
	id<IMFileCopierDelegate> _delegate;
	NSURL* _inputURL;
	NSURL* _outputURL;
	id _identifier;
	unsigned long long _operation;
	void* _BOMCopier;
	dispatch_queue_sRef _queue;
	/*^block*/id _callback;

}

@property (assign) id<IMFileCopierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSURL * inputURL;                             //@synthesize inputURL=_inputURL - In the implementation block
@property (readonly) NSURL * outputURL;                            //@synthesize outputURL=_outputURL - In the implementation block
@property (readonly) id identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char wasCancelled;                  //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,readonly) char didErrorOccur;                 //@synthesize didErrorOccur=_didErrorOccur - In the implementation block
@property (assign) void* _BOMCopier;                               //@synthesize BOMCopier=_BOMCopier - In the implementation block
@property (assign) char inProgress;                                //@synthesize inProgress=_inProgress - In the implementation block
@property (assign) unsigned long long operation;                   //@synthesize operation=_operation - In the implementation block
@property (assign) id _callback;                                   //@synthesize callback=_callback - In the implementation block
@property (assign) dispatch_queue_sRef _queue;                     //@synthesize queue=_queue - In the implementation block
-(dispatch_queue_sRef)_queue;
-(void)set_callback:(id)arg1 ;
-(id)_callback;
-(NSURL *)outputURL;
-(char)inProgress;
-(void)_fillOutputURLFromInputURL;
-(NSURL *)inputURL;
-(id)_temporaryCopierPath;
-(void)_worker_doCopy;
-(void)_main_copierFinishedWithResult:(id)arg1 ;
-(id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 delegate:(id)arg5 ;
-(id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 queue:(dispatch_queue_sRef)arg6 ;
-(char)wasCancelled;
-(char)didErrorOccur;
-(void)setInProgress:(char)arg1 ;
-(unsigned long long)operation;
-(void*)_BOMCopier;
-(void)set_BOMCopier:(void*)arg1 ;
-(void)set_queue:(dispatch_queue_sRef)arg1 ;
-(void)setDelegate:(id<IMFileCopierDelegate>)arg1 ;
-(void)dealloc;
-(void)start;
-(void)cancel;
-(id)identifier;
-(id<IMFileCopierDelegate>)delegate;
-(void)setOperation:(unsigned long long)arg1 ;
-(void)cleanup;
@end

