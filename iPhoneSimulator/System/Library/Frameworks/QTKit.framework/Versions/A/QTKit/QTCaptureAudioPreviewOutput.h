/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTCaptureOutput.h>

@class QTCaptureAudioPreviewOutputInternal;

@interface QTCaptureAudioPreviewOutput : QTCaptureOutput {

	QTCaptureAudioPreviewOutputInternal* _internal;
	long long _reserved4;
	long long _reserved5;
	long long _reserved6;

}
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(id)outputDeviceUniqueID;
-(void)_updateOutputDeviceUniqueID;
-(void)_updateVolume;
-(void)_updateOutputDeviceUniqueIDFromPropertyListener;
-(void)setOutputDeviceUniqueID:(id)arg1 ;
-(void)_updateVolumeFromPropertyListener;
-(void)removeConnection:(id)arg1 ;
-(char)getAudioMixerNode:(int*)arg1 andUnitElement:(unsigned*)arg2 forConnection:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)connections;
-(void)setVolume:(float)arg1 ;
-(float)volume;
@end

