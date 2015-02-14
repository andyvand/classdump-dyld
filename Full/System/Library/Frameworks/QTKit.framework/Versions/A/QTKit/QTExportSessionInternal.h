/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QTExportSessionDelegate;
#import <QTKit/QTKit-Structs.h>
@class QTMutableExportOptions, NSURL, NSError;

@interface QTExportSessionInternal : NSObject {

	QTMutableExportOptions* _exportOptions;
	OpaqueRFExportSessionRef _exportSessionRef;
	id<QTExportSessionDelegate> _delegate;
	NSURL* _destination;
	NSError* _completionError;
	int _runState;
	double _progress;

}

@property (nonatomic,retain) QTMutableExportOptions * exportOptions;              //@synthesize exportOptions=_exportOptions - In the implementation block
@property (assign,nonatomic) id<QTExportSessionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign) OpaqueRFExportSessionRef exportSessionRef;                     //@synthesize exportSessionRef=_exportSessionRef - In the implementation block
@property (copy) NSURL * destination;                                             //@synthesize destination=_destination - In the implementation block
@property (copy) NSError * completionError;                                       //@synthesize completionError=_completionError - In the implementation block
@property (assign) double progress;                                               //@synthesize progress=_progress - In the implementation block
@property (assign) int runState;                                                  //@synthesize runState=_runState - In the implementation block
-(void)setExportOptions:(QTMutableExportOptions *)arg1 ;
-(id)initWithExportOptions:(id)arg1 ;
-(OpaqueRFExportSessionRef)exportSessionRef;
-(void)setExportSessionRef:(OpaqueRFExportSessionRef)arg1 ;
-(QTMutableExportOptions *)exportOptions;
-(int)runState;
-(void)setRunState:(int)arg1 ;
-(NSError *)completionError;
-(void)setCompletionError:(NSError *)arg1 ;
-(id)init;
-(void)setDelegate:(id<QTExportSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<QTExportSessionDelegate>)delegate;
-(double)progress;
-(NSURL *)destination;
-(void)setDestination:(NSURL *)arg1 ;
-(void)setProgress:(double)arg1 ;
@end

