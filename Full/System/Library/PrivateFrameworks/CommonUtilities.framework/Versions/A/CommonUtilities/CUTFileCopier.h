/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CUTFileCopierDelegate;
@class NSURL;

@interface CUTFileCopier : NSObject {

	char _shouldCancel;
	char _didErrorOccur;
	char _inProgress;
	unsigned _operation;
	id<CUTFileCopierDelegate> _delegate;
	NSURL* _inputURL;
	NSURL* _outputURL;
	id _identifier;
	void* _BOMCopier;

}

@property (assign) id<CUTFileCopierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSURL * inputURL;                              //@synthesize inputURL=_inputURL - In the implementation block
@property (readonly) NSURL * outputURL;                             //@synthesize outputURL=_outputURL - In the implementation block
@property (readonly) id identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char wasCancelled;                   //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,readonly) char didErrorOccur;                  //@synthesize didErrorOccur=_didErrorOccur - In the implementation block
@property (assign) void* _BOMCopier;                                //@synthesize BOMCopier=_BOMCopier - In the implementation block
@property (assign) char inProgress;                                 //@synthesize inProgress=_inProgress - In the implementation block
@property (assign) unsigned operation;                              //@synthesize operation=_operation - In the implementation block
-(NSURL *)outputURL;
-(char)inProgress;
-(void)_fillOutputURLFromInputURL;
-(NSURL *)inputURL;
-(id)_temporaryCopierPath;
-(void)_worker_doCopy;
-(void)_main_copierFinishedWithResult:(id)arg1 ;
-(id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned)arg4 delegate:(id)arg5 ;
-(char)wasCancelled;
-(char)didErrorOccur;
-(void)setInProgress:(char)arg1 ;
-(unsigned)operation;
-(void*)_BOMCopier;
-(void)set_BOMCopier:(void*)arg1 ;
-(void)setDelegate:(id<CUTFileCopierDelegate>)arg1 ;
-(void)dealloc;
-(void)start;
-(void)cancel;
-(id)identifier;
-(id<CUTFileCopierDelegate>)delegate;
-(void)setOperation:(unsigned)arg1 ;
-(void)cleanup;
@end

