/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTKeyValueProxy.h>

@class QTMovie;

@interface QTMoviePlaybackControllerMovieProxy : QTKeyValueProxy {

	SCD_Struct_QT71 _internal;
	SCD_Struct_QT72 _configuration;
	SCD_Struct_QT74 _properties;

}

@property (nonatomic,readonly) QTMovie * movie; 
+(char)automaticallyNotifiesObserversOfRate;
+(id)keyPathsForValuesAffectingPlaybackRangeDuration;
+(id)keyPathsForValuesAffectingPlaybackRangeCurrentTime;
+(id)keyPathsForValuesAffectingPlaybackRangeRemainingTime;
+(id)proxyForMovie:(id)arg1 ;
+(char)accessesIvarsDirectly;
+(char)shouldProxyValueForDuration;
+(char)automaticallyNotifiesObserversOfDuration;
+(char)shouldProxyValueForCurrentTime;
+(char)automaticallyNotifiesObserversOfCurrentTime;
+(char)shouldProxyValueForPlaybackRange;
+(char)automaticallyNotifiesObserversOfPlaybackRange;
+(char)shouldProxyValueForPlaybackRangeDuration;
+(char)shouldProxyValueForPlaybackRangeCurrentTime;
+(char)automaticallyNotifiesObserversOfPlaybackRangeCurrentTime;
+(char)shouldProxyValueForPlaybackRangeRemainingTime;
+(char)shouldProxyValueForRate;
+(char)shouldProxyValueForNaturalSize;
+(char)automaticallyNotifiesObserversOfNaturalSize;
+(char)shouldProxyValueForVolume;
+(char)automaticallyNotifiesObserversOfVolume;
+(char)shouldProxyValueForMuted;
+(char)automaticallyNotifiesObserversOfMuted;
+(char)shouldProxyValueForCanChangeVolume;
+(char)shouldProxyValueForCanChangePlayingRate;
+(char)shouldProxyValueForAvailableRanges;
+(char)automaticallyNotifiesObserversOfAvailableRanges;
+(char)shouldProxyValueForLoadedRanges;
+(char)automaticallyNotifiesObserversOfLoadedRanges;
+(char)shouldProxyValueForStatusString;
+(char)automaticallyNotifiesObserversOfStatusString;
+(char)shouldProxyValueForPlaying;
+(char)automaticallyNotifiesObserversOfPlaying;
+(void)initialize;
-(CGSize)naturalSize;
-(void)setMuted:(char)arg1 ;
-(void)endScrubbing;
-(char)isMuted;
-(id)availableRanges;
-(id)loadedRanges;
-(SCD_Struct_QT16)playbackRange;
-(void)setPlaybackRange:(SCD_Struct_QT16)arg1 ;
-(id)playbackRangeDuration;
-(id)playbackRangeCurrentTime;
-(void)setPlaybackRangeCurrentTime:(id)arg1 ;
-(id)playbackRangeRemainingTime;
-(void)_movieNaturalSizeDidChange:(id)arg1 ;
-(void)_evaluateMovieSleepCharacteristics:(id)arg1 ;
-(void)_movieDurationDidChange:(id)arg1 ;
-(void)_movieTimeDidChange:(id)arg1 ;
-(void)_movieRateDidChange:(id)arg1 ;
-(void)_movieVolumeDidChange:(id)arg1 ;
-(void)_movieMutedDidChange:(id)arg1 ;
-(void)_movieCanChangeVolumeDidChange:(id)arg1 ;
-(void)_movieCanChangePlayingRateDidChange:(id)arg1 ;
-(void)_movieAvailableRangesDidChange:(id)arg1 ;
-(void)_movieLoadedRangesDidChange:(id)arg1 ;
-(void)_movieStatusStringDidChange:(id)arg1 ;
-(void)_stopListeningToSessionResignActive;
-(void)_updateNominalRate:(double)arg1 ;
-(void)_startScrubbing;
-(void)_stopScrubbing;
-(void)_syncIdleSleepAssertions;
-(void)_sessionDidResignActive:(id)arg1 ;
-(void)_startListeningToSessionResignActive;
-(void)_moviePlaybackRangeDidChange;
-(void)beginScrubbing;
-(void)preventIdleSleepWhilePlaying;
-(void)allowIdleSleepWhilePlaying;
-(void)enablePauseWhenSessionResignsActive;
-(void)disablePauseWhenSessionResignsActive;
-(char)canChangeVolume;
-(char)canChangePlayingRate;
-(QTMovie *)movie;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)duration;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTarget:(id)arg1 ;
-(id)initWithMovie:(id)arg1 ;
-(char)isPlaying;
-(void)setVolume:(float)arg1 ;
-(id)currentTime;
-(void)setCurrentTime:(id)arg1 ;
-(float)volume;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(id)statusString;
-(void)setPlaying:(char)arg1 ;
@end

