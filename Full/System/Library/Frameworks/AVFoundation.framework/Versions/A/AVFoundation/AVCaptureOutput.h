/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject {

	AVCaptureOutputInternal* _outputInternal;

}

@property (nonatomic,readonly) NSArray * connections; 
+(void)initialize;
-(id)connectionWithMediaType:(id)arg1 ;
-(id)avCaptureOutputSettingsForConnection:(id)arg1 fileType:(id)arg2 ;
-(void)_updateCompressorNodesForConnection:(id)arg1 ;
-(int)configureAudioSplitter:(int)arg1 mixer:(int)arg2 converter:(int)arg3 forGraph:(OpaqueCMIOGraphRef)arg4 connection:(id)arg5 withSettings:(id)arg6 audioFileType:(unsigned)arg7 forceConverterToPassThru:(char)arg8 setClientSequenceID:(char)arg9 ;
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(char)getAudioSplitterNode:(int*)arg1 andAudioMixerNode:(int*)arg2 forConnection:(id)arg3 ;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(id)outputGraphNodeDescriptionForConnection:(id)arg1 ;
-(id)activeConnections;
-(id)firstEnabledConnectionForMediaType:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(id)notReadyError;
-(char)setEnabled:(char)arg1 forConnection:(id)arg2 ;
-(void)graphWillStartForSession:(id)arg1 ;
-(void)graphWillStopForSession:(id)arg1 error:(id)arg2 ;
-(long long)defaultVideoOrientationForConnection:(id)arg1 ;
-(char)defaultVideoMirroringForConnection:(id)arg1 ;
-(long long)defaultVideoFieldModeForConnection:(id)arg1 ;
-(char)supportsVideoMirroringForConnection:(id)arg1 ;
-(char)supportsVideoOrientationForConnection:(id)arg1 ;
-(char)supportsVideoFieldModeForConnection:(id)arg1 ;
-(char)supportsVideoMinFrameDurationForConnection:(id)arg1 ;
-(char)supportsVideoMaxFrameDurationForConnection:(id)arg1 ;
-(void)_updateVideoDecompressorNodeForConnection:(id)arg1 ;
-(id)videoDecompressionSettingsForVideoConnection:(id)arg1 ;
-(long long)h264BitRateForConnection:(id)arg1 ;
-(id)h264ProfileLevelForBitRate:(long long)arg1 ;
-(id)insertConnection:(id)arg1 atIndex:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)inputPortFormatDescriptionDidChange:(id)arg1 ;
-(CGSize)_videoOutputSettingsSizeForConnection:(id)arg1 ;
-(id)_vtCompressionPropertiesForConnection:(id)arg1 ;
-(id)_preferredInputPixelBufferAttributesForConnection:(id)arg1 ;
-(char)prefersMixedAudio;
-(id)firstActiveConnection;
-(int)videoDecompressionRequirementForConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(void)setSession:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)connections;
-(id)session;
@end

