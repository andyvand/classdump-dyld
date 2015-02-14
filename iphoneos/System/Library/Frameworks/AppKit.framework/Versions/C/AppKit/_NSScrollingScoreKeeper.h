/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSWindowController.h>

@class NSString, _NSScrollingScore, NSDictionary;

@interface _NSScrollingScoreKeeper : NSWindowController {

	NSString* _perfCategory;
	double _userFPS;
	double _frameVariation;
	long long _holdCount;
	long long _slipCount;
	long long _zeroDeltaCount;
	double _durationInSec;
	double _scrollDelayInMs;
	_NSScrollingScore* _scrollingScore;
	NSString* _scoreString;
	NSDictionary* _currentOperationResults;
	double _gestureStartTime;
	double _gestureEndTime;

}

@property (copy) NSString * perfCategory;                                //@synthesize perfCategory=_perfCategory - In the implementation block
@property (assign) double frameRate;                                     //@synthesize userFPS=_userFPS - In the implementation block
@property (assign) double normalizedFrameDurationVariation;              //@synthesize frameVariation=_frameVariation - In the implementation block
@property (assign) long long holdCount;                                  //@synthesize holdCount=_holdCount - In the implementation block
@property (assign) long long slipCount;                                  //@synthesize slipCount=_slipCount - In the implementation block
@property (assign) long long zeroDeltaCount;                             //@synthesize zeroDeltaCount=_zeroDeltaCount - In the implementation block
@property (assign) double durationInSec;                                 //@synthesize durationInSec=_durationInSec - In the implementation block
@property (assign) double scrollDelayInMs;                               //@synthesize scrollDelayInMs=_scrollDelayInMs - In the implementation block
@property (retain) NSString * scoreString;                               //@synthesize scoreString=_scoreString - In the implementation block
+(void)initialize;
+(id)sharedScrollingScoreKeeper;
+(void)playScrollRecordingData:(id)arg1 atWindow:(id)arg2 location:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)scrollRecordingDataFromEventArray:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setFrameRate:(double)arg1 ;
-(double)frameRate;
-(void)endScrollGesture;
-(void)beginScrollGesture:(id)arg1 ;
-(void)markPointOfInterest:(id)arg1 ;
-(void)beginIdlePrefetch;
-(void)endIdlePrefetch;
-(void)beginScrollFrame;
-(void)endScrollFrame;
-(void)markBackgroundThreadLayerHold;
-(void)markScrollDelta:(CGPoint)arg1 ;
-(void)beginBackgroundThreadFrame:(id)arg1 ;
-(void)endBackgroundThreadFrame;
-(void)beginBackgroundThreadLayerMove;
-(void)endBackgroundThreadLayerMove;
-(void)markRemovePresentationProperties;
-(void)markScrollEventDelta:(CGPoint)arg1 phase:(unsigned long long)arg2 momentumPhase:(unsigned long long)arg3 ;
-(void)markBackgroundThreadMainThreadSynchIssued;
-(NSString *)scoreString;
-(long long)holdCount;
-(void)setHoldCount:(long long)arg1 ;
-(long long)slipCount;
-(void)setSlipCount:(long long)arg1 ;
-(double)scrollDelayInMs;
-(void)setScrollDelayInMs:(double)arg1 ;
-(void)setZeroDeltaCount:(long long)arg1 ;
-(void)setDurationInSec:(double)arg1 ;
-(void)setPerfCategory:(NSString *)arg1 ;
-(NSString *)perfCategory;
-(void)setScoreString:(NSString *)arg1 ;
-(void)writeTimelineFileToURL:(id)arg1 error:(id*)arg2 ;
-(void)showScoreWindow;
-(void)setNormalizedFrameDurationVariation:(double)arg1 ;
-(void)markScrollEvent;
-(void)exportTimeLine:(id)arg1 ;
-(double)normalizedFrameDurationVariation;
-(long long)zeroDeltaCount;
-(double)durationInSec;
@end

