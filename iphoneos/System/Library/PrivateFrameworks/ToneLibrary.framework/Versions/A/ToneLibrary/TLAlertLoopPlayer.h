/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/Versions/A/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVQueuePlayer;

@interface TLAlertLoopPlayer : NSObject {

	char _playing;
	AVQueuePlayer* _player;

}

@property (assign,getter=isPlaying,nonatomic) char playing;                           //@synthesize playing=_playing - In the implementation block
@property (setter=_setPlayer:,nonatomic,retain) AVQueuePlayer * _player;              //@synthesize player=_player - In the implementation block
-(AVQueuePlayer *)_player;
-(void)_setPlaying:(char)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isPlaying;
-(void)_performBlockOnMainThread:(/*^block*/id)arg1 ;
-(void)startPlayingRepeatedlyAssetWithURL:(id)arg1 ;
-(void)stopPlayingWithFadeOutDuration:(double)arg1 ;
-(void)_setPlayer:(id)arg1 ;
@end

