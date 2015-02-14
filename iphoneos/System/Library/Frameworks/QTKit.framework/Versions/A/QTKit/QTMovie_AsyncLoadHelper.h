/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTMovieMediaHelper.h>

@class QTMovie, QTMovieMediaHelper, NSDictionary, NSError, NSString, NSColor;

@interface QTMovie_AsyncLoadHelper : QTMovieMediaHelper {

	QTMovie* _parent;
	QTMovieMediaHelper* _loadingMediaHelper;
	char _instantiateOnLoadingThread;
	Class _loadingMediaHelperClass;
	NSDictionary* _initAttributesForLoadingMediaHelper;
	NSError* _loadingError;
	char _wasInvalidated;
	char _autoplayWasRequested;
	char _autoplayAtRateWasRequested;
	float _autoplayRate;
	char _delegateWasSet;
	char _volumeWasSet;
	char _mutedWasSet;
	char _activeWasSet;
	char _activeAndVisibleWasSet;
	char _apertureModeWasSet;
	char _editableWasSet;
	char _languageWasSet;
	char _loopsWasSet;
	char _loopsBackAndForthWasSet;
	char _playsAllFramesWasSet;
	char _playsSelectionOnlyWasSet;
	char _usesPreferredLanguageWasSet;
	char _visualHueWasSet;
	char _visualSaturationWasSet;
	char _visualBrightnessWasSet;
	char _visualContrastWasSet;
	char _visualBackgroundColorWasSet;
	char _visualMovieBoxBackgroundColorWasSet;
	char _visualDrawsMovieBoxBackgroundColorWasSet;
	char _balanceWasSet;
	char _bassWasSet;
	char _gainWasSet;
	char _trebleWasSet;
	float _volume;
	char _muted;
	char _active;
	char _activeAndVisible;
	NSString* _apertureMode;
	char _editable;
	long long _language;
	char _loops;
	char _loopsBackAndForth;
	char _playsAllFrames;
	char _playsSelectionOnly;
	char _usesPreferredLanguage;
	float _visualHue;
	float _visualSaturation;
	float _visualBrightness;
	float _visualContrast;
	NSColor* _visualBackgroundColor;
	NSColor* _visualMovieBoxBackgroundColor;
	char _visualDrawsMovieBoxBackgroundColor;
	float _balance;
	float _bass;
	float _gain;
	float _treble;

}
-(void)setApertureMode:(id)arg1 ;
-(void)setMuted:(char)arg1 ;
-(id)apertureMode;
-(char)isMuted;
-(id)initWithAttributes:(id)arg1 error:(id*)arg2 forParent:(id)arg3 ;
-(id)diagnosticString;
-(id)copyWithZone:(NSZone*)arg1 forParent:(id)arg2 ;
-(void)autoplay;
-(void)autoplay:(float)arg1 ;
-(SCD_Struct_QT12)maxTimeLoaded;
-(char)playsAllFrames;
-(char)playsSelectionOnly;
-(char)loopsBackAndForth;
-(long long)loadState;
-(id)loadStateError;
-(void)setActiveAndVisible:(char)arg1 ;
-(void)setLoopsBackAndForth:(char)arg1 ;
-(void)setPlaysAllFrames:(char)arg1 ;
-(void)setPlaysSelectionOnly:(char)arg1 ;
-(void)setUsesPreferredLanguage:(char)arg1 ;
-(float)balance;
-(float)bass;
-(float)gain;
-(float)treble;
-(void)setBalance:(float)arg1 ;
-(void)setBass:(float)arg1 ;
-(void)setGain:(float)arg1 ;
-(void)setTreble:(float)arg1 ;
-(char)usesVisualContext;
-(char)wouldUseVisualContext;
-(float)visualHue;
-(void)setVisualHue:(float)arg1 ;
-(float)visualSaturation;
-(void)setVisualSaturation:(float)arg1 ;
-(float)visualBrightness;
-(void)setVisualBrightness:(float)arg1 ;
-(float)visualContrast;
-(void)setVisualContrast:(float)arg1 ;
-(id)visualBackgroundColor;
-(void)setVisualBackgroundColor:(id)arg1 ;
-(id)visualMovieBoxBackgroundColor;
-(void)setVisualMovieBoxBackgroundColor:(id)arg1 ;
-(char)visualDrawsMovieBoxBackgroundColor;
-(void)setVisualDrawsMovieBoxBackgroundColor:(char)arg1 ;
-(void)copyStateFromMediaHelper:(id)arg1 ;
-(void)_loadMediaHelperOnBackgroundThreadWithAttributes:(id)arg1 ;
-(void)_mediaHelperFinishedLoadingWithError:(id)arg1 ;
-(void)transferStateToMediaHelper:(id)arg1 ;
-(char)editable;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(SCD_Struct_QT12)duration;
-(void)invalidate;
-(char)isActive;
-(void)setEditable:(char)arg1 ;
-(int)status;
-(void)setActive:(char)arg1 ;
-(long long)language;
-(void)setVolume:(float)arg1 ;
-(void)setCurrentTime:(SCD_Struct_QT12)arg1 ;
-(float)volume;
-(void)setLoops:(char)arg1 ;
-(char)loops;
-(void)setRate:(float)arg1 ;
-(void)setLanguage:(long long)arg1 ;
@end

