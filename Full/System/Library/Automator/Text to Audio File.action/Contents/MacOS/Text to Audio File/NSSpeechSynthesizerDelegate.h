/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:58:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Text to Audio File.action/Contents/MacOS/Text to Audio File
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(char)arg2;
-(void)speechSynthesizer:(id)arg1 willSpeakWord:(NSRange)arg2 ofString:(id)arg3;
-(void)speechSynthesizer:(id)arg1 willSpeakPhoneme:(short)arg2;
-(void)speechSynthesizer:(id)arg1 didEncounterErrorAtIndex:(unsigned long long)arg2 ofString:(id)arg3 message:(id)arg4;
-(void)speechSynthesizer:(id)arg1 didEncounterSyncMessage:(id)arg2;

@end

