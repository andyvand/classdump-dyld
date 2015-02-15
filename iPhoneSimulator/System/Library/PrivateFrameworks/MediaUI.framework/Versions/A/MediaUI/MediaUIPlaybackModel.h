/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaUI/MediaUI-Structs.h>
@class NSArray, MediaUIValueTiming, NSError, NSLocale;

@interface MediaUIPlaybackModel : NSObject {

	double _contentDuration;
	CGSize _contentDimensions;
	double _contentFrameRate;
	NSArray* _contentChapters;
	MediaUIValueTiming* _playbackTiming;
	double _playbackVolume;
	NSError* _playbackError;
	double _minimumPlaybackRate;
	double _maximumPlaybackRate;
	double _minimumSeekableTime;
	double _maximumSeekableTime;
	NSLocale* _audioLocale;
	NSLocale* _subtitleLocale;
	NSArray* _contentAudioLocales;
	NSArray* _contentSubtitleLocales;
	char _contentHasClosedCaptions;

}

@property (assign) double contentDuration;                         //@synthesize contentDuration=_contentDuration - In the implementation block
@property (assign) CGSize contentDimensions;                       //@synthesize contentDimensions=_contentDimensions - In the implementation block
@property (assign) double contentFrameRate;                        //@synthesize contentFrameRate=_contentFrameRate - In the implementation block
@property (copy) NSArray * contentChapters;                        //@synthesize contentChapters=_contentChapters - In the implementation block
@property (copy) MediaUIValueTiming * playbackTiming;              //@synthesize playbackTiming=_playbackTiming - In the implementation block
@property (copy) NSError * playbackError;                          //@synthesize playbackError=_playbackError - In the implementation block
@property (assign) double playbackVolume;                          //@synthesize playbackVolume=_playbackVolume - In the implementation block
@property (assign) double minimumPlaybackRate;                     //@synthesize minimumPlaybackRate=_minimumPlaybackRate - In the implementation block
@property (assign) double maximumPlaybackRate;                     //@synthesize maximumPlaybackRate=_maximumPlaybackRate - In the implementation block
@property (assign) double minimumSeekableTime;                     //@synthesize minimumSeekableTime=_minimumSeekableTime - In the implementation block
@property (assign) double maximumSeekableTime;                     //@synthesize maximumSeekableTime=_maximumSeekableTime - In the implementation block
@property (copy) NSLocale * audioLocale;                           //@synthesize audioLocale=_audioLocale - In the implementation block
@property (copy) NSLocale * subtitleLocale;                        //@synthesize subtitleLocale=_subtitleLocale - In the implementation block
@property (copy) NSArray * contentAudioLocales;                    //@synthesize contentAudioLocales=_contentAudioLocales - In the implementation block
@property (copy) NSArray * contentSubtitleLocales;                 //@synthesize contentSubtitleLocales=_contentSubtitleLocales - In the implementation block
@property (assign) char contentHasClosedCaptions;                  //@synthesize contentHasClosedCaptions=_contentHasClosedCaptions - In the implementation block
-(CGSize)contentDimensions;
-(double)contentDuration;
-(void)setContentDuration:(double)arg1 ;
-(NSArray *)contentChapters;
-(void)setContentChapters:(NSArray *)arg1 ;
-(char)contentHasClosedCaptions;
-(NSLocale *)audioLocale;
-(void)setAudioLocale:(NSLocale *)arg1 ;
-(NSLocale *)subtitleLocale;
-(void)setSubtitleLocale:(NSLocale *)arg1 ;
-(NSArray *)contentAudioLocales;
-(NSArray *)contentSubtitleLocales;
-(double)minimumPlaybackRate;
-(double)maximumPlaybackRate;
-(double)contentFrameRate;
-(double)maximumSeekableTime;
-(double)minimumSeekableTime;
-(id)makeVideoLayer;
-(void)beginGroupingValueChanges;
-(void)finishGroupingValueChanges;
-(void)setVolume:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRate:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)selectSubtitleLocale:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)selectAudioLocale:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDisplaysSubtitles:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDisplaysClosedCaptions:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setContentDimensions:(CGSize)arg1 ;
-(void)setContentFrameRate:(double)arg1 ;
-(MediaUIValueTiming *)playbackTiming;
-(void)setPlaybackTiming:(MediaUIValueTiming *)arg1 ;
-(NSError *)playbackError;
-(void)setPlaybackError:(NSError *)arg1 ;
-(void)setMinimumPlaybackRate:(double)arg1 ;
-(void)setMaximumPlaybackRate:(double)arg1 ;
-(void)setMinimumSeekableTime:(double)arg1 ;
-(void)setMaximumSeekableTime:(double)arg1 ;
-(void)setContentAudioLocales:(NSArray *)arg1 ;
-(void)setContentSubtitleLocales:(NSArray *)arg1 ;
-(void)setContentHasClosedCaptions:(char)arg1 ;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setPlaybackVolume:(double)arg1 ;
-(double)playbackVolume;
-(id)init;
-(void)dealloc;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
@end

