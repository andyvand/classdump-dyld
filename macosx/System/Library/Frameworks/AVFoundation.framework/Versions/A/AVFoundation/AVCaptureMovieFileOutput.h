/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureFileOutput.h>

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {

	AVCaptureMovieFileOutputInternal* _internal;

}

@property (assign,nonatomic) SCD_Struct_CM5 movieFragmentInterval; 
@property (nonatomic,copy) NSArray * metadata; 
+(id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1 ;
+(char)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3 ;
+(void)initialize;
-(NSArray *)metadata;
-(SCD_Struct_CM5)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_CM5)arg1 ;
-(void)_updateCompressorNodesForConnection:(id)arg1 ;
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(char)getAudioSplitterNode:(int*)arg1 andAudioMixerNode:(int*)arg2 forConnection:(id)arg3 ;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(id)outputFileURL;
-(void)setOutputSettings:(id)arg1 forConnection:(id)arg2 ;
-(id)_activeConnections;
-(id)_stopError;
-(void)_setStopError:(id)arg1 ;
-(void)_handleCanceledOperations:(id)arg1 ;
-(id)_noDataConnections;
-(void)_forciblyStopFileWritingForRunningRecordingOperation;
-(SCD_Struct_CM5)_syncTime;
-(void)_startFileControlCallbackTimeoutTimer;
-(void)_refreshRecordingState;
-(void)_setPaused:(char)arg1 ;
-(id)_runningRecordingOperationDescriptor;
-(void)_fileControlCallbackTimeout:(id)arg1 ;
-(void)_cancelAllOperations;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)_addActiveConnection:(id)arg1 ;
-(unsigned)_fileWriterUnitElementForConnection:(id)arg1 ;
-(void)_removeActiveConnection:(id)arg1 ;
-(void)stopRecording;
-(void)_setNoDataConnections:(id)arg1 ;
-(void)_cancelFileControlCallbackTimeoutTimer;
-(char)_removeRunningRecordingOperationDescriptorEqualTo:(id)arg1 ;
-(void)_stopFileWritingForConnection:(id)arg1 fileControlToken:(OpaqueFileWritingControlTokenRef)arg2 runningRecordingOperationDescriptor:(id)arg3 stopWritingFlags:(unsigned)arg4 stopError:(id)arg5 ;
-(void)_setRunningRecordingOperationDescriptor:(id)arg1 ;
-(void)_startFileWritingForConnection:(id)arg1 fileControlToken:(OpaqueFileWritingControlTokenRef)arg2 runningRecordingOperationDescriptor:(id)arg3 ;
-(void)_operationFailed:(id)arg1 ;
-(char)isRecording;
-(char)isRecordingPaused;
-(SCD_Struct_CM5)recordedDuration;
-(long long)recordedFileSize;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(void)pauseRecording;
-(void)resumeRecording;
-(char)setEnabled:(char)arg1 forConnection:(id)arg2 ;
-(void)graphWillStartForSession:(id)arg1 ;
-(void)graphWillStopForSession:(id)arg1 error:(id)arg2 ;
-(void)_controlFileWritingForConnection:(id)arg1 busNumber:(unsigned)arg2 fileControlToken:(OpaqueFileWritingControlTokenRef)arg3 ;
-(void)_filesCompleted:(id)arg1 ;
-(int)_compressorDidRenderConnection:(id)arg1 busNumber:(unsigned)arg2 processHints:(unsigned*)arg3 sampleBuffer:(opaqueCMSampleBuffer*)arg4 ;
-(char)supportsVideoMirroringForConnection:(id)arg1 ;
-(char)supportsVideoOrientationForConnection:(id)arg1 ;
-(char)supportsVideoFieldModeForConnection:(id)arg1 ;
-(char)supportsVideoMinFrameDurationForConnection:(id)arg1 ;
-(char)supportsVideoMaxFrameDurationForConnection:(id)arg1 ;
-(void)_updateVideoDecompressorNodeForConnection:(id)arg1 ;
-(void)_updateVideoFrameRateGovernorNodeForConnection:(id)arg1 ;
-(void)_addFileWriterUnitElement:(unsigned)arg1 forConnection:(id)arg2 ;
-(void)_removeFileWriterUnitElementForConnection:(id)arg1 ;
-(id)outputSettingsForConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setMetadata:(NSArray *)arg1 ;
@end

