/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTCaptureOutput.h>

@class QTCaptureDecompressedAudioOutputInternal;

@interface QTCaptureDecompressedAudioOutput : QTCaptureOutput {

	QTCaptureDecompressedAudioOutputInternal* _internal;
	id _delegate;
	long long _reserved4;
	long long _reserved5;
	long long _reserved6;

}
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(id)connectionMediaTypes;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(void)backgroundQueue:(id)arg1 invocationWasCanceled:(id)arg2 ;
-(id)compressionOptionsForConnection:(id)arg1 ;
-(void)setCompressionOptions:(id)arg1 forConnection:(id)arg2 ;
-(void)_applyCompressionOptionsForConnection:(id)arg1 ;
-(void)outputAudioSampleBuffer:(id)arg1 fromConnection:(id)arg2 ;
-(void)_outputAudioSampleBuffer:(id)arg1 fromConnection:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)connections;
@end

