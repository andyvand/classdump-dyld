/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTCaptureSessionInternal, QTCaptureSessionInternalState;

@interface QTCaptureSession : NSObject {

	QTCaptureSessionInternal* _internal;
	QTCaptureSessionInternalState* _internalState;
	long long _reserved1;
	long long _reserved2;
	long long _reserved3;

}
-(void)applicationWillTerminate:(id)arg1 ;
-(id)_stopError;
-(void)decompressionRequirementsDidChangeForConnection:(id)arg1 ;
-(OpaqueCMIOGraphRef)captureGraph;
-(char)_graphIsInitialized;
-(char)_graphIsRunning;
-(void)_endSessionUpdates;
-(void)_beginSessionUpdates;
-(void)_stopAndTearDownGraph;
-(void)_buildAndRunGraph;
-(void)_postRuntimeError:(id)arg1 ;
-(void)_setupMasterSynchronizers;
-(void)_configureAudioDecoderConverters;
-(void)_rebuildGraph;
-(void)decompressionOptionsDidChangeForConnection:(id)arg1 ;
-(id)inputConnectionForOutputConnection:(id)arg1 ;
-(void)sessionIsReadyToBuildAndRunGraph:(id)arg1 ;
-(void)_createOutputConnectionsForInputConnection:(id)arg1 ;
-(void)_removeOutputConnectionsForInputConnection:(id)arg1 ;
-(void)_createConnectionForOutput:(id)arg1 fromInputConnection:(id)arg2 ;
-(void)_removeConnectionFromOutput:(id)arg1 ;
-(void)_deferredBuildAndRunGraph;
-(char)_buildGraphUnitsForInputConnection:(id)arg1 error:(id*)arg2 ;
-(char)_buildGraphUnitsForOutputConnection:(id)arg1 error:(id*)arg2 ;
-(void)setRunning:(char)arg1 ;
-(char)_buildSupportUnitsForVideoInputConnection:(id)arg1 error:(id*)arg2 ;
-(char)_buildSupportUnitsForAudioInputConnection:(id)arg1 error:(id*)arg2 ;
-(char)_buildSupportUnitsForGenericInputConnection:(id)arg1 error:(id*)arg2 ;
-(char)_connectGraphUnitsForVideoOutputConnection:(id)arg1 error:(id*)arg2 ;
-(char)_connectGraphUnitsForAudioOutputConnection:(id)arg1 error:(id*)arg2 ;
-(char)_connectGraphUnitsForGenericOutputConnection:(id)arg1 error:(id*)arg2 ;
-(id)_resolvedDecompressionOptionsForInputConnection:(id)arg1 alsoRequiresDeviceNative:(char*)arg2 ;
-(char)addInput:(id)arg1 error:(id*)arg2 ;
-(char)addOutput:(id)arg1 error:(id*)arg2 ;
-(void)startRunning;
-(void)stopRunning;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isRunning;
-(id)inputs;
-(id)outputs;
-(void)removeInput:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
@end

