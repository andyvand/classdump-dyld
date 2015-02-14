/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString, NSDictionary;

@interface AVVoiceController : NSObject {

	void* _impl;

}

@property (getter=isBargeInDetectEnabled) char bargeInDetectEnabled; 
@property (getter=isStopOnBargeInEnabled) char stopOnBargeInEnabled; 
@property (copy,readonly) NSString * recordRoute; 
@property (readonly) unsigned long long lastRecordStartTime; 
@property (readonly) NSDictionary * voiceTriggerInfo; 
@property (getter=isSynchronousCallbackEnabled) char synchronousCallbackEnabled; 
@property (readonly) NSDictionary * recordSettings; 
@property (getter=isRecording,readonly) char recording; 
@property (retain) id<Endpointer> endpointerDelegate; 
@property (assign) int recordEndpointMode; 
@property (assign) double recordStartWaitTime; 
@property (assign) double recordInterspeechWaitTime; 
@property (assign) double recordEndWaitTime; 
@property (assign) id<AVVoiceControllerRecordDelegate> recordDelegate; 
@property (getter=isMeteringEnabled) char meteringEnabled; 
@property (readonly) NSDictionary * playbackSettings; 
@property (getter=isPlaying,readonly) char playing; 
@property (assign) id<AVVoiceControllerPlaybackDelegate> playbackDelegate; 
@property (assign) float playbackVolume; 
@property (getter=isStopOnEndpointEnabled) char stopOnEndpointEnabled; 
@property (assign) float alertVolume; 
-(ControllerImpl*)impl;
-(void)stopRecording;
-(char)isRecording;
-(void)beganRecording;
-(void)recordBufferReceived:(MyAudioQueueBuffer*)arg1 ;
-(void)finishedRecording;
-(void)startpointDetected;
-(void)interspeechPointDetected;
-(void)endpointDetected;
-(void)encodeError;
-(void)beganPlaying;
-(void)playbackBufferReceived:(MyAudioQueueBuffer*)arg1 ;
-(void)finishedPlaying;
-(void)decodeError;
-(NSString *)recordRoute;
-(unsigned long long)lastRecordStartTime;
-(NSDictionary *)voiceTriggerInfo;
-(char)isBargeInDetectEnabled;
-(void)setBargeInDetectEnabled:(char)arg1 ;
-(char)isStopOnBargeInEnabled;
-(void)setStopOnBargeInEnabled:(char)arg1 ;
-(char)isSynchronousCallbackEnabled;
-(void)setSynchronousCallbackEnabled:(char)arg1 ;
-(id)initWithRecordDevice:(id)arg1 error:(id*)arg2 ;
-(char)prepareRecordWithSettings:(id)arg1 error:(id*)arg2 ;
-(char)setAlertSoundFromURL:(id)arg1 forType:(int)arg2 ;
-(char)playAlertSoundForType:(int)arg1 ;
-(char)preparePlaybackWithSettings:(id)arg1 error:(id*)arg2 ;
-(char)preparePlaybackFromURL:(id)arg1 error:(id*)arg2 ;
-(id<AVVoiceControllerRecordDelegate>)recordDelegate;
-(void)setRecordDelegate:(id<AVVoiceControllerRecordDelegate>)arg1 ;
-(NSDictionary *)recordSettings;
-(double)getRecordBufferDuration;
-(char)setRecordBufferDuration:(double)arg1 ;
-(id<Endpointer>)endpointerDelegate;
-(void)setEndpointerDelegate:(id<Endpointer>)arg1 ;
-(int)recordEndpointMode;
-(void)setRecordEndpointMode:(int)arg1 ;
-(double)recordStartWaitTime;
-(void)setRecordStartWaitTime:(double)arg1 ;
-(double)recordInterspeechWaitTime;
-(void)setRecordInterspeechWaitTime:(double)arg1 ;
-(double)recordEndWaitTime;
-(void)setRecordEndWaitTime:(double)arg1 ;
-(id<AVVoiceControllerPlaybackDelegate>)playbackDelegate;
-(void)setPlaybackDelegate:(id<AVVoiceControllerPlaybackDelegate>)arg1 ;
-(NSDictionary *)playbackSettings;
-(double)getPlaybackBufferDuration;
-(char)setPlaybackBufferDuration:(double)arg1 ;
-(void)setAlertVolume:(float)arg1 ;
-(float)alertVolume;
-(void)setPlaybackVolume:(float)arg1 ;
-(float)playbackVolume;
-(char)isMeteringEnabled;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(char)isStopOnEndpointEnabled;
-(void)setStopOnEndpointEnabled:(char)arg1 ;
-(char)startRecording;
-(void)setMeteringEnabled:(char)arg1 ;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(char)startPlaying;
-(void)stopPlaying;
-(void)finalize;
-(void)dealloc;
-(char)isPlaying;
@end

