/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioNode.h>
#import <libAVFAudio.dylib/AVAudioMixing.h>

@class AVAudioEnvironmentDistanceAttenuationParameters, AVAudioEnvironmentReverbParameters, NSString;

@interface AVAudioEnvironmentNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) unsigned long long nextAvailableInputBus; 
@property (assign,nonatomic) AVAudio3DPoint listenerPosition; 
@property (assign,nonatomic) AVAudio3DVectorOrientation listenerVectorOrientation; 
@property (assign,nonatomic) AVAudio3DAngularOrientation listenerAngularOrientation; 
@property (nonatomic,readonly) AVAudioEnvironmentDistanceAttenuationParameters * distanceAttenuationParameters; 
@property (nonatomic,readonly) AVAudioEnvironmentReverbParameters * reverbParameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(float)outputVolume;
-(void)setOutputVolume:(float)arg1 ;
-(unsigned long long)nextAvailableInputBus;
-(id)applicableRenderingAlgorithms;
-(void)setListenerPosition:(AVAudio3DPoint)arg1 ;
-(AVAudio3DPoint)listenerPosition;
-(void)setListenerVectorOrientation:(AVAudio3DVectorOrientation)arg1 ;
-(AVAudio3DVectorOrientation)listenerVectorOrientation;
-(void)setListenerAngularOrientation:(AVAudio3DAngularOrientation)arg1 ;
-(AVAudio3DAngularOrientation)listenerAngularOrientation;
-(AVAudioEnvironmentDistanceAttenuationParameters *)distanceAttenuationParameters;
-(AVAudioEnvironmentReverbParameters *)reverbParameters;
-(id)init;
@end

