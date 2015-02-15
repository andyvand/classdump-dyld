/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class QTExportSessionInternal, QTExportOptions;

@interface QTExportSession : NSObject {

	QTExportSessionInternal* _internal;

}

@property (assign) id<QTExportSessionDelegate> delegate; 
@property (copy,readonly) QTExportOptions * exportOptions; 
@property (readonly) double progress; 
@property (getter=isRunning,readonly) char running; 
@property (getter=isFinished,readonly) char finished; 
@property (getter=isCancelled,readonly) char cancelled; 
-(QTExportOptions *)exportOptions;
-(int)runState;
-(void)setRunState:(int)arg1 ;
-(id)initWithOptions:(id)arg1 outputURL:(id)arg2 error:(id*)arg3 ;
-(char)validateDestinationFileType:(id*)arg1 ;
-(void)setExportCompleted:(int)arg1 ;
-(id)errorForRainForestError:(int)arg1 ;
-(id)initWithMovie:(id)arg1 exportOptions:(id)arg2 outputURL:(id)arg3 error:(id*)arg4 ;
-(char)waitUntilFinished:(id*)arg1 ;
-(id)localizedExportSessionOutputSummary;
-(void)setDelegate:(id<QTExportSessionDelegate>)arg1 ;
-(void)dealloc;
-(void)cancel;
-(id<QTExportSessionDelegate>)delegate;
-(char)isRunning;
-(void)run;
-(char)isCancelled;
-(char)isFinished;
-(double)progress;
-(void)setProgress:(double)arg1 ;
@end

