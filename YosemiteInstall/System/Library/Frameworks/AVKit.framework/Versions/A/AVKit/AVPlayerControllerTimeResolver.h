/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/NSCoding.h>

@class AVPlayerController, NSTimer;

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding> {

	AVPlayerController* _playerController;
	double _interval;
	double _resolution;
	double _currentTime;
	NSTimer* _timer;

}

@property (assign) double currentTimeWithinEndTimes; 
@property (readonly) double remainingTime; 
@property (readonly) double remainingTimeWithinEndTimes; 
@property (getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges,readonly) char thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges; 
@property (getter=isCurrentTimeAtEndOfSeekableTimeRanges,readonly) char currentTimeAtEndOfSeekableTimeRanges; 
@property (retain) AVPlayerController * playerController; 
@property (assign) double interval; 
@property (assign) double resolution; 
@property (assign) double currentTime; 
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
+(id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
+(char)automaticallyNotifiesObserversOfCurrentTime;
+(id)keyPathsForValuesAffectingRemainingTime;
+(void)initialize;
-(void)setInterval:(double)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(double)currentTimeWithinEndTimes;
-(void)setCurrentTimeWithinEndTimes:(double)arg1 ;
-(double)remainingTimeWithinEndTimes;
-(char)isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
-(char)isCurrentTimeAtEndOfSeekableTimeRanges;
-(double)remainingTime;
-(double)resolution;
-(void)setResolution:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)interval;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
@end

