/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaUI/MediaUI-Structs.h>
#import <AppKit/NSResponder.h>
#import <MediaUI/NSUserInterfaceValidations.h>

@class MediaUIPlaybackControllerCore, NSArray, MediaUIValueTiming, NSLocale;

@interface MediaUIPlaybackController : NSResponder <NSUserInterfaceValidations> {

	MediaUIPlaybackControllerCore* _core;
	unsigned _scrubbing : 1;
	unsigned _preventsIdleSleep : 1;
	unsigned _isPreventingIdleSystemSleep : 1;
	unsigned _isPreventingIdleDisplaySleep : 1;
	unsigned _isDisablingAutomaticTermination : 1;

}

@property (getter=isSeeking,readonly) char seeking; 
@property (assign) double rate; 
@property (getter=isPlaying) char playing; 
@property (assign) double volume; 
@property (readonly) CGSize contentDimensions; 
@property (readonly) double contentDuration; 
@property (readonly) NSArray * contentChapters; 
@property (readonly) MediaUIValueTiming * timing; 
@property (readonly) char canPlay; 
@property (readonly) char canPause; 
@property (readonly) char canTogglePlayback; 
@property (readonly) char canScanForward; 
@property (readonly) char canScanBackward; 
@property (readonly) char canSeekFrameForward; 
@property (readonly) char canSeekFrameBackward; 
@property (readonly) char canSeekChapterForward; 
@property (readonly) char canSeekChapterBackward; 
@property (readonly) char canSeekToBeginning; 
@property (readonly) char canSeekToEnd; 
@property (copy) NSLocale * audioLocale; 
@property (copy) NSLocale * subtitleLocale; 
@property (readonly) NSArray * contentAudioLocales; 
@property (readonly) NSArray * contentSubtitleLocales; 
@property (readonly) char contentHasClosedCaptions; 
+(id)keyPathsForValuesAffectingCanPlay;
+(id)keyPathsForValuesAffectingCanPause;
+(id)keyPathsForValuesAffectingCanTogglePlayback;
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanScanBackward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingCanSeekFrameForward;
+(id)keyPathsForValuesAffectingCanSeekFrameBackward;
+(id)keyPathsForValuesAffectingCanSeekChapterForward;
+(id)keyPathsForValuesAffectingCanSeekChapterBackward;
+(id)keyPathsForValuesAffectingShouldPreventIdleSystemSleep;
+(id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+(id)keyPathsForValuesAffectingShouldDisableAutomaticTermination;
+(id)keyPathsForValuesAffectingSeeking;
+(id)keyPathsForValuesAffectingDisplaysClosedCaptions;
+(id)keyPathsForValuesAffectingDisplaysSubtitles;
+(id)keyPathsForValuesAffectingHasClosedCaptions;
+(id)keyPathsForValuesAffectingAudioLocale;
+(id)keyPathsForValuesAffectingSubtitleLocale;
+(id)keyPathsForValuesAffectingContentChapters;
+(id)keyPathsForValuesAffectingTiming;
+(id)keyPathsForValuesAffectingContentAudioLocales;
+(id)keyPathsForValuesAffectingContentSubtitleLocales;
+(id)keyPathsForValuesAffectingRate;
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingMuted;
+(id)keyPathsForValuesAffectingPlaying;
-(CGSize)contentDimensions;
-(char)canPlay;
-(char)canTogglePlayback;
-(void)togglePlayback:(id)arg1 ;
-(double)contentDuration;
-(char)isSeeking;
-(void)seekByTimeInterval:(double)arg1 ;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(char)canScanForward;
-(char)canScanBackward;
-(char)canSeekToBeginning;
-(void)seekToBeginning:(id)arg1 ;
-(char)canSeekToEnd;
-(void)seekToEnd:(id)arg1 ;
-(char)canSeekFrameForward;
-(void)seekFrameForward:(id)arg1 ;
-(char)canSeekFrameBackward;
-(void)seekFrameBackward:(id)arg1 ;
-(NSArray *)contentChapters;
-(char)canSeekChapterForward;
-(void)seekChapterForward:(id)arg1 ;
-(char)canSeekChapterBackward;
-(void)seekChapterBackward:(id)arg1 ;
-(MediaUIValueTiming *)timing;
-(char)preventsIdleSleep;
-(char)shouldPreventIdleSystemSleep;
-(char)shouldPreventIdleDisplaySleep;
-(char)shouldDisableAutomaticTermination;
-(id)playbackModel;
-(char)displaysClosedCaptions;
-(void)setDisplaysClosedCaptions:(char)arg1 ;
-(char)displaysSubtitles;
-(void)setDisplaysSubtitles:(char)arg1 ;
-(char)contentHasClosedCaptions;
-(NSLocale *)audioLocale;
-(void)setAudioLocale:(NSLocale *)arg1 ;
-(NSLocale *)subtitleLocale;
-(void)setSubtitleLocale:(NSLocale *)arg1 ;
-(NSArray *)contentAudioLocales;
-(NSArray *)contentSubtitleLocales;
-(void)setPlaybackModel:(id)arg1 ;
-(void)setPreventsIdleSleep:(char)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)scanForward:(id)arg1 ;
-(void)scanBackward:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)noResponderFor:(SEL)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(char)isPlaying;
-(void)setVolume:(double)arg1 ;
-(double)volume;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(id)_core;
-(void)play:(id)arg1 ;
-(void)setPlaying:(char)arg1 ;
-(void)pause:(id)arg1 ;
-(char)canPause;
@end

