/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTCaptureOutput.h>

@class QTCaptureFileOutputInternal;

@interface QTCaptureFileOutput : QTCaptureOutput {

	QTCaptureFileOutputInternal* _fileOutputInternal;
	id _delegate;
	long long _reserved4;
	long long _reserved5;
	long long _reserved6;

}
-(id)outputFileURL;
-(char)isRecordingPaused;
-(SCD_Struct_QT12)recordedDuration;
-(unsigned long long)recordedFileSize;
-(void)pauseRecording;
-(void)resumeRecording;
-(double)minimumVideoFrameInterval;
-(CGSize)maximumVideoSize;
-(SCD_Struct_QT12)maximumRecordedDuration;
-(unsigned long long)maximumRecordedFileSize;
-(void)recordToOutputFileURL:(id)arg1 bufferDestination:(unsigned long long)arg2 ;
-(void)recordToOutputFileURL:(id)arg1 ;
-(id)compressionOptionsForConnection:(id)arg1 ;
-(void)setCompressionOptions:(id)arg1 forConnection:(id)arg2 ;
-(void)setMaximumVideoSize:(CGSize)arg1 ;
-(void)setMinimumVideoFrameInterval:(double)arg1 ;
-(void)setMaximumRecordedDuration:(SCD_Struct_QT12)arg1 ;
-(void)setMaximumRecordedFileSize:(unsigned long long)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)delegate;
@end

