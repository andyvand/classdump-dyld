/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class AVAudioOutputNode, AVAudioInputNode, AVAudioMixerNode;

@interface AVAudioEngine : NSObject {

	void* _impl;

}

@property (assign,nonatomic) OpaqueMusicSequenceRef musicSequence; 
@property (nonatomic,readonly) AVAudioOutputNode * outputNode; 
@property (nonatomic,readonly) AVAudioInputNode * inputNode; 
@property (nonatomic,readonly) AVAudioMixerNode * mainMixerNode; 
@property (getter=isRunning,nonatomic,readonly) char running; 
-(AVAudioEngineImpl*)implementation;
-(void)attachNode:(id)arg1 ;
-(void)detachNode:(id)arg1 ;
-(AVAudioOutputNode *)outputNode;
-(AVAudioInputNode *)inputNode;
-(AVAudioMixerNode *)mainMixerNode;
-(void)connect:(id)arg1 to:(id)arg2 fromBus:(unsigned long long)arg3 toBus:(unsigned long long)arg4 format:(id)arg5 ;
-(void)connect:(id)arg1 to:(id)arg2 format:(id)arg3 ;
-(void)disconnectNodeInput:(id)arg1 bus:(unsigned long long)arg2 ;
-(void)disconnectNodeOutput:(id)arg1 bus:(unsigned long long)arg2 ;
-(void)disconnectNodeInput:(id)arg1 ;
-(void)disconnectNodeOutput:(id)arg1 ;
-(char)startAndReturnError:(id*)arg1 ;
-(void)setMusicSequence:(OpaqueMusicSequenceRef)arg1 ;
-(OpaqueMusicSequenceRef)musicSequence;
-(id)init;
-(void)dealloc;
-(void)stop;
-(id)description;
-(void)prepare;
-(char)isRunning;
-(void)reset;
-(void)pause;
@end

