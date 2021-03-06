/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, AVPlayer, AVPlayerLayer, AVPlayerItem;

@interface KPFMovie : NSObject {

	int mLooping;
	double mVolume;
	NSString* mName;
	AVPlayer* mPlayer;
	AVPlayerLayer* mPlayerLayer;
	double mQueuedPlaybackTime;
	char mMoviePlaybackIsQueued;
	char mMoviePlaybackHasStarted;
	char mMoviePlaybackIsPaused;
	char mIsObservingPlayerItemStatus;
	char mAudioOnly;
	id mMovieEndCallbackTarget;
	SEL mMovieEndCallbackSelector;
	AVPlayerItem* mPlayerItem;

}

@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) char isPlaying; 
-(AVPlayerLayer *)playerLayer;
-(char)p_showsClosedCaptions;
-(id)initWithURL:(id)arg1 looping:(id)arg2 volume:(double)arg3 name:(id)arg4 audioOnly:(char)arg5 drmContext:(id)arg6 ;
-(void)registerForMovieEndCallback:(SEL)arg1 target:(id)arg2 ;
-(void)p_setupEnhancedCaptionsInformation;
-(void)p_setShowsClosedCaptions:(char)arg1 ;
-(void)p_tearDownMoviePlayback;
-(void)p_setupPosterFrame;
-(void)p_playerItemDidPlayToEndTime:(id)arg1 ;
-(void)p_playMovie;
-(void)playAfterDelay:(double)arg1 ;
-(char)showsClosedCaptions;
-(void)dealloc;
-(void)stop;
-(NSString *)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)resume;
-(char)isPlaying;
-(void)pause;
@end

