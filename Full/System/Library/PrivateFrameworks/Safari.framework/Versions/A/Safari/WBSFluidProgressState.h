/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface WBSFluidProgressState : NSObject {

	long long _fluidProgressType;
	NSString* _loadURL;
	double _webKitProgressValue;
	double _linearFunctionM;
	double _linearFunctionB;
	double _startTimeForFluidProgress;
	double _lastTimeProgressValueWasUpdated;
	long long _fluidProgressAnimationPhase;
	double _previousDestinationPosition;
	double _animationDuration;
	double _minProgressPosition;
	char _hasCompletedLoad;
	char _hasCanceledLoad;
	char _hasCommittedLoad;
	char _shouldAnimateUsingInitialPosition;

}

@property (assign) long long fluidProgressType;                         //@synthesize fluidProgressType=_fluidProgressType - In the implementation block
@property (retain) NSString * loadURL;                                  //@synthesize loadURL=_loadURL - In the implementation block
@property (assign) double minProgressPosition; 
@property (assign) long long fluidProgressAnimationPhase; 
@property (assign) char hasCompletedLoad;                               //@synthesize hasCompletedLoad=_hasCompletedLoad - In the implementation block
@property (assign) char hasCanceledLoad;                                //@synthesize hasCanceledLoad=_hasCanceledLoad - In the implementation block
@property (assign) char hasCommittedLoad;                               //@synthesize hasCommittedLoad=_hasCommittedLoad - In the implementation block
@property (assign) char shouldAnimateUsingInitialPosition;              //@synthesize shouldAnimateUsingInitialPosition=_shouldAnimateUsingInitialPosition - In the implementation block
+(double)_estimatedLoadTimeRemainingFromProgressValue:(double)arg1 ;
-(void)setLoadURL:(NSString *)arg1 ;
-(void)setFluidProgressAnimationPhase:(long long)arg1 ;
-(void)setHasCompletedLoad:(char)arg1 ;
-(long long)fluidProgressAnimationPhase;
-(id)nextFluidProgressAnimation;
-(void)setShouldAnimateUsingInitialPosition:(char)arg1 ;
-(void)setMinProgressPosition:(double)arg1 ;
-(double)fluidProgressValue;
-(char)shouldAnimateUsingInitialPosition;
-(NSString *)loadURL;
-(char)hasCompletedLoad;
-(void)setWebKitProgressValue:(double)arg1 ;
-(char)hasCommittedLoad;
-(void)setHasCanceledLoad:(char)arg1 ;
-(char)isFluidProgressStalled;
-(void)setFluidProgressType:(long long)arg1 ;
-(void)setHasCommittedLoad:(char)arg1 ;
-(char)hasCanceledLoad;
-(void)_updateLinearFunction;
-(double)secondsElapsedSinceLoadBegan;
-(double)_fractionCompleteAtElapsedTime:(double)arg1 ;
-(double)_adjustProgressPosition:(double)arg1 ;
-(double)_nextProgressPosition:(double)arg1 ;
-(double)minProgressPosition;
-(long long)fluidProgressType;
-(double)_estimatedLoadTimeRemaining;
-(id)description;
-(id)initWithType:(long long)arg1 ;
-(double)_animationDuration;
@end

