/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSSpeechSynthesizer : NSObject {

	id _privateNSSpeechSynthesizerVars;

}

@property (getter=isSpeaking,readonly) char speaking; 
@property (assign) id<NSSpeechSynthesizerDelegate> delegate; 
@property (assign) float rate; 
@property (assign) float volume; 
@property (assign) char usesFeedbackWindow; 
+(id)defaultVoice;
+(id)availableVoices;
+(char)isAnyApplicationSpeaking;
+(id)attributesForVoice:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<NSSpeechSynthesizerDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id<NSSpeechSynthesizerDelegate>)delegate;
-(id)initWithVoice:(id)arg1 ;
-(char)startSpeakingString:(id)arg1 ;
-(char)isSpeaking;
-(void)stopSpeaking;
-(float)_volume;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(void)_handleDefaultVoiceChange;
-(char)_beginSpeakingString:(id)arg1 optionallyToURL:(id)arg2 ;
-(void)_handleSpeechDoneCallback;
-(id)_objectForProperty:(unsigned)arg1 usingDataSize:(int)arg2 withRequestedObjectClass:(Class)arg3 ;
-(char)_setObject:(id)arg1 forProperty:(unsigned)arg2 usingDataSize:(int)arg3 ;
-(char)usesFeedbackWindow;
-(void)setUsesFeedbackWindow:(char)arg1 ;
-(char)setVoice:(id)arg1 ;
-(char)_feedbackWindowIsVisible;
-(void)_setupCallbacks;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)stopSpeakingAtBoundary:(unsigned long long)arg1 ;
-(void)pauseSpeakingAtBoundary:(unsigned long long)arg1 ;
-(void)continueSpeaking;
-(char)startSpeakingString:(id)arg1 toURL:(id)arg2 ;
-(id)voice;
-(void)addSpeechDictionary:(id)arg1 ;
-(id)phonemesFromText:(id)arg1 ;
-(id)objectForProperty:(id)arg1 error:(id*)arg2 ;
-(char)setObject:(id)arg1 forProperty:(id)arg2 error:(id*)arg3 ;
-(void)_handleWordCallbackWithParams:(id)arg1 ;
-(void)_handlePhonemeCallbackWithOpcode:(short)arg1 ;
-(void)_handleErrorCallbackWithParams:(id)arg1 ;
-(void)_handleSyncCallbackWithMessage:(unsigned)arg1 ;
-(float)_normalSpeakingRate;
-(void)_setPitchBase:(float)arg1 ;
-(float)_pitchBase;
-(void)_setRate:(float)arg1 ;
-(float)_rate;
-(void)_setVolume:(float)arg1 ;
-(void)_stopSpeakingAtBoundary:(unsigned long long)arg1 ;
-(void)_pauseSpeakingAtBoundary:(unsigned long long)arg1 ;
-(void)_continueSpeaking;
@end

