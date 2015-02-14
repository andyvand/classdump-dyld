/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBApplication.h>

@class _AMiTunes8Encoder, _AMiTunes8EQPreset, _AMiTunes8Playlist, NSString, _AMiTunes8Track, _AMiTunes8Visual, SBObject;

@interface _AMiTunes8Application : SBApplication

@property (copy) _AMiTunes8Encoder * currentEncoder; 
@property (copy) _AMiTunes8EQPreset * currentEQPreset; 
@property (copy,readonly) _AMiTunes8Playlist * currentPlaylist; 
@property (copy,readonly) NSString * currentStreamTitle; 
@property (copy,readonly) NSString * currentStreamURL; 
@property (copy,readonly) _AMiTunes8Track * currentTrack; 
@property (copy) _AMiTunes8Visual * currentVisual; 
@property (assign) char EQEnabled; 
@property (assign) char fixedIndexing; 
@property (assign) char frontmost; 
@property (assign) char fullScreen; 
@property (copy,readonly) NSString * name; 
@property (assign) char mute; 
@property (assign) long long playerPosition; 
@property (readonly) int playerState; 
@property (copy,readonly) SBObject * selection; 
@property (assign) long long soundVolume; 
@property (copy,readonly) NSString * version; 
@property (assign) char visualsEnabled; 
@property (assign) int visualSize; 
-(id)classNamesForCodes;
-(id)codesForPropertyNames;
-(char)frontmost;
-(void)printPrintDialog:(char)arg1 withProperties:(id)arg2 kind:(int)arg3 theme:(id)arg4 ;
-(void)playOnce:(char)arg1 ;
-(id)browserWindows;
-(id)encoders;
-(id)EQPresets;
-(id)EQWindows;
-(id)playlistWindows;
-(id)visuals;
-(_AMiTunes8Encoder *)currentEncoder;
-(void)setCurrentEncoder:(_AMiTunes8Encoder *)arg1 ;
-(_AMiTunes8EQPreset *)currentEQPreset;
-(void)setCurrentEQPreset:(_AMiTunes8EQPreset *)arg1 ;
-(_AMiTunes8Playlist *)currentPlaylist;
-(NSString *)currentStreamTitle;
-(NSString *)currentStreamURL;
-(_AMiTunes8Track *)currentTrack;
-(_AMiTunes8Visual *)currentVisual;
-(void)setCurrentVisual:(_AMiTunes8Visual *)arg1 ;
-(char)EQEnabled;
-(void)setEQEnabled:(char)arg1 ;
-(char)fixedIndexing;
-(void)setFixedIndexing:(char)arg1 ;
-(void)setFrontmost:(char)arg1 ;
-(char)fullScreen;
-(void)setFullScreen:(char)arg1 ;
-(char)mute;
-(void)setMute:(char)arg1 ;
-(long long)playerPosition;
-(void)setPlayerPosition:(long long)arg1 ;
-(int)playerState;
-(long long)soundVolume;
-(void)setSoundVolume:(long long)arg1 ;
-(char)visualsEnabled;
-(void)setVisualsEnabled:(char)arg1 ;
-(int)visualSize;
-(void)setVisualSize:(int)arg1 ;
-(void)backTrack;
-(id)convert:(id)arg1 ;
-(void)fastForward;
-(void)nextTrack;
-(void)playpause;
-(void)previousTrack;
-(void)rewind;
-(void)updateAllPodcasts;
-(void)updatePodcast;
-(void)openLocation:(id)arg1 ;
-(void)subscribe:(id)arg1 ;
-(void)quit;
-(id)add:(id)arg1 to:(id)arg2 ;
-(void)stop;
-(NSString *)name;
-(id)windows;
-(void)update;
-(void)resume;
-(void)run;
-(void)eject;
-(NSString *)version;
-(SBObject *)selection;
-(void)pause;
-(id)sources;
@end

