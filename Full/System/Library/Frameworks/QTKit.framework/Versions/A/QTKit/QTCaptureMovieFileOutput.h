/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTCaptureFileOutput.h>

@class QTCaptureMovieFileOutputInternal;

@interface QTCaptureMovieFileOutput : QTCaptureFileOutput {

	QTCaptureMovieFileOutputInternal* _internal;
	long long _reserved8;

}
-(void)_updateCompressorNodesForConnection:(id)arg1 ;
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(id)outputFileURL;
-(id)_activeConnections;
-(id)_stopError;
-(void)_setStopError:(id)arg1 ;
-(void)_handleCanceledOperations:(id)arg1 ;
-(id)_noDataConnections;
-(void)_forciblyStopFileWritingForRunningRecordingOperation;
-(SCD_Struct_QT36)_syncTime;
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
-(void)_setNoDataConnections:(id)arg1 ;
-(void)_cancelFileControlCallbackTimeoutTimer;
-(char)_removeRunningRecordingOperationDescriptorEqualTo:(id)arg1 ;
-(void)_stopFileWritingForConnection:(id)arg1 fileControlToken:(OpaqueFileWritingControlTokenRef)arg2 runningRecordingOperationDescriptor:(id)arg3 stopWritingFlags:(unsigned)arg4 stopError:(id)arg5 ;
-(void)_setRunningRecordingOperationDescriptor:(id)arg1 ;
-(void)_startFileWritingForConnection:(id)arg1 fileControlToken:(OpaqueFileWritingControlTokenRef)arg2 runningRecordingOperationDescriptor:(id)arg3 ;
-(void)_operationFailed:(id)arg1 ;
-(char)isRecordingPaused;
-(SCD_Struct_QT12)recordedDuration;
-(unsigned long long)recordedFileSize;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)graphWillStartForSession:(id)arg1 ;
-(void)_controlFileWritingForConnection:(id)arg1 busNumber:(unsigned)arg2 fileControlToken:(OpaqueFileWritingControlTokenRef)arg3 ;
-(void)_filesCompleted:(id)arg1 ;
-(int)_compressorDidRenderConnection:(id)arg1 busNumber:(unsigned)arg2 processHints:(unsigned*)arg3 sampleBuffer:(opaqueCMSampleBuffer*)arg4 ;
-(void)_updateVideoDecompressorNodeForConnection:(id)arg1 ;
-(void)_updateVideoFrameRateGovernorNodeForConnection:(id)arg1 ;
-(int)videoDecompressionRequirementForConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(char)getAudioMixerNode:(int*)arg1 andUnitElement:(unsigned*)arg2 forConnection:(id)arg3 ;
-(void)graphWillStopForSession:(id)arg1 dueToError:(id)arg2 ;
-(id)videoDecompressionAttributesForVideoConnection:(id)arg1 ;
-(void)recordToOutputFileURL:(id)arg1 bufferDestination:(unsigned long long)arg2 ;
-(void)setCompressionOptions:(id)arg1 forConnection:(id)arg2 ;
-(void)setMaximumVideoSize:(CGSize)arg1 ;
-(void)setMinimumVideoFrameInterval:(double)arg1 ;
-(void)outputConnectionFormatDescriptionDidChange:(id)arg1 ;
-(void)inputConnectionFormatDescriptionDidChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)connections;
@end

