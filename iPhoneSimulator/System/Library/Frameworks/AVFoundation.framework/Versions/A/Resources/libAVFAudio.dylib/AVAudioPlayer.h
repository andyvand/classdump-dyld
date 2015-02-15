/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSData, NSDictionary;

@interface AVAudioPlayer : NSObject {

	id _impl;

}

@property (getter=isPlaying,readonly) char playing; 
@property (readonly) unsigned long long numberOfChannels; 
@property (readonly) double duration; 
@property (assign) id<AVAudioPlayerDelegate> delegate; 
@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
@property (assign) float pan; 
@property (assign) float volume; 
@property (assign) char enableRate; 
@property (assign) float rate; 
@property (assign) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (assign) long long numberOfLoops; 
@property (readonly) NSDictionary * settings; 
@property (getter=isMeteringEnabled) char meteringEnabled; 
-(NSDictionary *)settings;
-(id)impl;
-(float)pan;
-(void)setPan:(float)arg1 ;
-(char)isMeteringEnabled;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(id)initBase;
-(void)finishedPlaying:(id)arg1 ;
-(void)decodeError:(id)arg1 ;
-(id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(char)prepareToPlay;
-(char)playAtTime:(double)arg1 ;
-(void)setEnableRate:(char)arg1 ;
-(char)enableRate;
-(double)deviceCurrentTime;
-(void)setNumberOfLoops:(long long)arg1 ;
-(long long)numberOfLoops;
-(char)mixToUplink;
-(void)setMixToUplink:(char)arg1 ;
-(void)setMeteringEnabled:(char)arg1 ;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(unsigned long long)numberOfChannels;
-(void)setDelegate:(id<AVAudioPlayerDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)stop;
-(double)duration;
-(NSURL *)url;
-(id<AVAudioPlayerDelegate>)delegate;
-(NSData *)data;
-(char)play;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(char)isPlaying;
-(void)setVolume:(float)arg1 ;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)pause;
-(float)volume;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
@end

