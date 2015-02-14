/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput {

	AVCaptureFileOutputInternal* _fileOutputInternal;

}

@property (assign,nonatomic) id<AVCaptureFileOutputDelegate> delegate; 
@property (nonatomic,readonly) NSURL * outputFileURL; 
@property (getter=isRecording,nonatomic,readonly) char recording; 
@property (getter=isRecordingPaused,nonatomic,readonly) char recordingPaused; 
@property (nonatomic,readonly) SCD_Struct_CM5 recordedDuration; 
@property (nonatomic,readonly) long long recordedFileSize; 
@property (assign,nonatomic) SCD_Struct_CM5 maxRecordedDuration; 
@property (assign,nonatomic) long long maxRecordedFileSize; 
@property (assign,nonatomic) long long minFreeDiskSpaceLimit; 
-(id)avCaptureOutputSettingsForConnection:(id)arg1 fileType:(id)arg2 ;
-(NSURL *)outputFileURL;
-(void)setOutputSettings:(id)arg1 forConnection:(id)arg2 ;
-(void)stopRecording;
-(int)compressorNodesMode;
-(char)delegateRequiresFrameAccurateStart;
-(void)setCompressorNodesMode:(int)arg1 ;
-(SCD_Struct_CM5)maxRecordedDuration;
-(long long)maxRecordedFileSize;
-(char)isRecording;
-(char)isRecordingPaused;
-(SCD_Struct_CM5)recordedDuration;
-(long long)recordedFileSize;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(void)pauseRecording;
-(void)resumeRecording;
-(long long)minFreeDiskSpaceLimit;
-(char)hasOutputSettingsForConnection:(id)arg1 ;
-(void)setMaxRecordedDuration:(SCD_Struct_CM5)arg1 ;
-(void)setMaxRecordedFileSize:(long long)arg1 ;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
-(id)init;
-(void)setDelegate:(id<AVCaptureFileOutputDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id<AVCaptureFileOutputDelegate>)delegate;
@end

