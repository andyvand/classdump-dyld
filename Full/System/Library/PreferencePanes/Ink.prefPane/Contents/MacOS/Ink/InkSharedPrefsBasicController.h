/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Ink.prefPane/Contents/MacOS/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Ink/Ink-Structs.h>
@class InkSharedPrefsDetailsController, InkSharedPrefsServerPrefsController, InkSharedPrefsLoggingController;

@interface InkSharedPrefsBasicController : NSObject {

	unsigned _prefsVersion;
	char _recognitionEnabled;
	InkSharedPrefsDetailsController* _inkSharedDetailsPrefs;
	InkSharedPrefsServerPrefsController* _inkServerPrefs;
	InkSharedPrefsLoggingController* _inkLoggingPrefs;

}

@property (readonly) unsigned prefsVersion;              //@synthesize prefsVersion=_prefsVersion - In the implementation block
-(unsigned)gesturesTargeted;
-(id)getLoggingPrefsController;
-(char)setInkWindowVisible:(char)arg1 ;
-(char)showCursorInProximity;
-(char)showCursorOutOfProximity;
-(char)showCursorInking;
-(char)setUserInkOnDemandMode:(unsigned)arg1 ;
-(char)setInkSounds:(char)arg1 ;
-(unsigned)userInkOnDemandMode;
-(char)setRecognitionEnabled:(char)arg1 ;
-(char)inkWindowVisible;
-(unsigned short)inkPadFont;
-(char)inkMenuVisible;
-(char)inkSounds;
-(char)setInkPadFont:(unsigned short)arg1 ;
-(unsigned)prefsVersion;
-(char)setRecognizeEuropeanChars:(char)arg1 ;
-(id)getServerPrefsController;
-(char)setInkBarVisible:(char)arg1 ;
-(char)setInkPadVisible:(char)arg1 ;
-(float)endOfPhraseTimeout;
-(char)recognizeEuropeanChars;
-(char)setShowCursorOutOfProximity:(char)arg1 ;
-(id)getDetailsPrefsController;
-(void)updateWithDictionary:(CFDictionaryRef)arg1 ;
-(float)penToMouseTimeout;
-(char)setShowCursorInProximity:(char)arg1 ;
-(char)setProximityTermination:(char)arg1 ;
-(char)recognitionEnabled;
-(char)setInkMenuVisible:(char)arg1 ;
-(char)setEndOfPhraseTimeout:(float)arg1 ;
-(char)setShowCursorInking:(char)arg1 ;
-(char)setPenToInkDistance:(float)arg1 ;
-(char)setPenToMouseTimeout:(float)arg1 ;
-(char)proximityTermination;
-(char)erasing;
-(char)setErasing:(char)arg1 ;
-(char)inkBarVisible;
-(float)penToInkDistance;
-(char)inkPadVisible;
-(void)registerForNotifications;
-(unsigned)userInkOnDemandButtonMask;
-(char)setUserInkOnDemandButtonMask:(unsigned)arg1 ;
-(unsigned short)wordSpacing;
-(char)setWordSpacing:(unsigned short)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(unsigned short)language;
-(char)setLanguage:(unsigned short)arg1 ;
-(unsigned)gesturesEnabled;
@end
