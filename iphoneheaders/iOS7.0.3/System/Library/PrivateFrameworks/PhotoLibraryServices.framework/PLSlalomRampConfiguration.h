/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface PLSlalomRampConfiguration : NSObject {

	unsigned _playbackNumIntermediateSteps;
	unsigned _exportNumIntermediateSteps;
	float _playbackRampCurveExponent;
	float _exportRampCurveExponent;
	double _rampTime;
	double _introTime;
	double _outroTime;
	double _volumeSuppressionIntroTime;
	double _volumeSuppressionOutroTime;

}

@property (assign,nonatomic) double rampTime;                                    //@synthesize rampTime=_rampTime - In the implementation block
@property (assign,nonatomic) double introTime;                                   //@synthesize introTime=_introTime - In the implementation block
@property (assign,nonatomic) double outroTime;                                   //@synthesize outroTime=_outroTime - In the implementation block
@property (assign,nonatomic) double volumeSuppressionIntroTime;                  //@synthesize volumeSuppressionIntroTime=_volumeSuppressionIntroTime - In the implementation block
@property (assign,nonatomic) double volumeSuppressionOutroTime;                  //@synthesize volumeSuppressionOutroTime=_volumeSuppressionOutroTime - In the implementation block
@property (assign,nonatomic) unsigned playbackNumIntermediateSteps;              //@synthesize playbackNumIntermediateSteps=_playbackNumIntermediateSteps - In the implementation block
@property (assign,nonatomic) unsigned exportNumIntermediateSteps;                //@synthesize exportNumIntermediateSteps=_exportNumIntermediateSteps - In the implementation block
@property (assign,nonatomic) float playbackRampCurveExponent;                    //@synthesize playbackRampCurveExponent=_playbackRampCurveExponent - In the implementation block
@property (assign,nonatomic) float exportRampCurveExponent;                      //@synthesize exportRampCurveExponent=_exportRampCurveExponent - In the implementation block
-(id)init;
-(void)setRampTime:(double)arg1 ;
-(void)setIntroTime:(double)arg1 ;
-(void)setOutroTime:(double)arg1 ;
-(void)setVolumeSuppressionIntroTime:(double)arg1 ;
-(void)setVolumeSuppressionOutroTime:(double)arg1 ;
-(void)setPlaybackNumIntermediateSteps:(unsigned)arg1 ;
-(void)setExportNumIntermediateSteps:(unsigned)arg1 ;
-(void)setPlaybackRampCurveExponent:(float)arg1 ;
-(void)setExportRampCurveExponent:(float)arg1 ;
-(id)initForRampDown:(BOOL)arg1 ;
-(unsigned)exportNumIntermediateSteps;
-(unsigned)playbackNumIntermediateSteps;
-(double)rampTime;
-(double)introTime;
-(double)outroTime;
-(float)exportRampCurveExponent;
-(float)playbackRampCurveExponent;
-(void)_computeRampToTargetRate:(float)arg1 forExport:(BOOL)arg2 outTimeSteps:(id*)arg3 outIntermediateRates:(id*)arg4 ;
-(double)volumeSuppressionIntroTime;
-(double)volumeSuppressionOutroTime;
@end
