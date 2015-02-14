/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSResponder.h>
#import <AVKit/NSUserInterfaceValidations.h>

@class AVPlayer, NSError;

@interface AVPlayerController : NSResponder <NSUserInterfaceValidations> {

	AVPlayer* _player;
	long long _status;
	NSError* _error;

}

@property (readonly) AVPlayer * player;              //@synthesize player=_player - In the implementation block
@property (readonly) long long status;               //@synthesize status=_status - In the implementation block
@property (readonly) NSError * error;                //@synthesize error=_error - In the implementation block
+(void)initialize;
-(id)metadata;
-(id)initWithPlayer:(id)arg1 ;
-(char)hasTrimmableContent;
-(CGSize)contentDimensions;
-(char)hasShareableContent;
-(char)canHandleSelector:(SEL)arg1 withEvent:(id)arg2 shouldIgnoreSpaceKey:(char)arg3 ;
-(char)hasAudioMediaSelectionOptions;
-(char)hasLegibleMediaSelectionOptions;
-(id)audioMediaSelectionOptions;
-(id)legibleMediaSelectionOptions;
-(char)hasMediaSelectionOptions;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(id)currentAudioMediaSelectionOption;
-(id)currentLegibleMediaSelectionOption;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(double)minTime;
-(double)maxTime;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(void)setRateWithThrottling:(double)arg1 ;
-(char)canPlay;
-(char)canTogglePlayback;
-(void)togglePlayback:(id)arg1 ;
-(char)isLooping;
-(void)setLooping:(char)arg1 ;
-(void)increaseVolume:(id)arg1 ;
-(void)decreaseVolume:(id)arg1 ;
-(double)contentDuration;
-(void)setContentDuration:(double)arg1 ;
-(double)contentDurationWithinEndTimes;
-(char)hasContentChapters;
-(char)hasLiveStreamingContent;
-(char)canSeek;
-(char)isSeeking;
-(void)seekByTimeInterval:(double)arg1 ;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(char)canScanForward;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(char)canScanBackward;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(char)canSeekToBeginning;
-(void)seekToBeginning:(id)arg1 ;
-(char)canSeekToEnd;
-(void)seekToEnd:(id)arg1 ;
-(char)canSeekFrameForward;
-(void)seekFrameForward:(id)arg1 ;
-(char)canSeekFrameBackward;
-(void)seekFrameBackward:(id)arg1 ;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(id)contentChapters;
-(void)seekToChapter:(id)arg1 ;
-(char)canSeekChapterForward;
-(void)seekChapterForward:(id)arg1 ;
-(char)canSeekChapterBackward;
-(void)seekChapterBackward:(id)arg1 ;
-(id)timing;
-(char)hasContent;
-(id)seekableTimeRanges;
-(AVPlayer *)player;
-(void)seekToTime:(double)arg1 ;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(id)loadedTimeRanges;
-(char)hasEnabledVideo;
-(char)hasEnabledAudio;
-(void)autoplay:(id)arg1 ;
-(void)scanForward:(id)arg1 ;
-(void)scanBackward:(id)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(long long)status;
-(NSError *)error;
-(char)isPlaying;
-(void)setVolume:(double)arg1 ;
-(double)volume;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void)play:(id)arg1 ;
-(void)setPlaying:(char)arg1 ;
-(void)pause:(id)arg1 ;
-(void)setCanPause:(char)arg1 ;
-(char)canPause;
@end

