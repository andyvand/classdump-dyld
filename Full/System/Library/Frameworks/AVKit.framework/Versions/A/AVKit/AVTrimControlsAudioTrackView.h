/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVTrimControlsTrackView.h>

@class AVPlayerController, AVAudioAmplitudeExtractionSession, CATiledLayer, CALayer, AVDataPool;

@interface AVTrimControlsAudioTrackView : AVTrimControlsTrackView {

	AVPlayerController* _playerController;
	AVAudioAmplitudeExtractionSession* _audioAmplitudeExtractionSession;
	CATiledLayer* _waveformLayer;
	CALayer* _centerLineLayer;
	CGSize _lastPreviewLayerBoundsSize;
	AVDataPool* _rectListPool;
	CGRect _pendingDirtyRect;

}
+(void)drawAudioWaveformLayer:(id)arg1 inContext:(CGContextRef)arg2 withAudioAmplitudeExtractionSession:(id)arg3 duration:(SCD_Struct_AV3)arg4 rectListPool:(id)arg5 ;
-(id)playerController;
-(void)setPlayerController:(id)arg1 ;
-(void)setAudioAmplitudeExtractionSession:(id)arg1 ;
-(void)audioAmplitudeSamplesDidBecomeAvailable:(id)arg1 ;
-(id)audioAmplitudeExtractionSession;
-(id)init;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewDidEndLiveResize;
-(void)layoutSublayersOfLayer:(id)arg1 ;
@end

