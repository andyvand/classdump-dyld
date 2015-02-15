/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, AVCaptureConnection, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {

	AVCaptureVideoPreviewLayerInternal* _internal;

}

@property (nonatomic,retain) AVCaptureSession * session; 
@property (nonatomic,readonly) AVCaptureConnection * connection; 
@property (copy) NSString * videoGravity; 
+(id)layerWithSession:(id)arg1 ;
+(id)layerWithSessionWithNoConnection:(id)arg1 ;
+(void)initialize;
-(void)setVideoGravity:(NSString *)arg1 ;
-(NSString *)videoGravity;
-(id)pixelBufferAttributes;
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(id)notReadyError;
-(long long)defaultVideoOrientationForConnection:(id)arg1 ;
-(char)defaultVideoMirroringForConnection:(id)arg1 ;
-(long long)defaultVideoFieldModeForConnection:(id)arg1 ;
-(void)initCommonStorage;
-(char)supportsVideoMirroringForConnection:(id)arg1 ;
-(char)supportsVideoOrientationForConnection:(id)arg1 ;
-(char)supportsVideoFieldModeForConnection:(id)arg1 ;
-(char)supportsVideoMinFrameDurationForConnection:(id)arg1 ;
-(char)supportsVideoMaxFrameDurationForConnection:(id)arg1 ;
-(id)videoDecompressionSettingsForVideoConnection:(id)arg1 ;
-(int)videoDecompressionRequirementForConnection:(id)arg1 ;
-(char)resumePreviewForConnection:(id)arg1 ;
-(char)pausePreviewForConnection:(id)arg1 ;
-(id)initWithSessionWithNoConnection:(id)arg1 ;
-(void)setSessionWithNoConnection:(id)arg1 ;
-(void)positionSublayer;
-(void)refreshFormatDescriptionFromInputPort:(id)arg1 ;
-(char)shouldMirrorPreviewForConnection:(id)arg1 ;
-(id)_videoPreviewUnitPixelBufferAttributes;
-(char)setPaused:(char)arg1 forConnection:(id)arg2 ;
-(void)inputFormatDescriptionChanged:(id)arg1 ;
-(id)subLayer;
-(void)didStopForSession:(id)arg1 error:(id)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(AVCaptureConnection *)connection;
-(void)setPixelBufferAttributes:(id)arg1 ;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSublayers;
-(id)initWithLayer:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVCaptureSession *)session;
-(id)initWithSession:(id)arg1 ;
@end

