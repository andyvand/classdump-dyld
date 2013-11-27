/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AFDictationServiceDelegate <NSObject>
@required
-(oneway void)speechRecordingWillBegin;
-(oneway void)speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
-(oneway void)speechRecordingDidEnd;
-(oneway void)speechRecordingDidCancel;
-(oneway void)speechRecordingDidFail:(id)arg1;
-(oneway void)speechRecognitionDidFail:(id)arg1;
-(oneway void)speechRecordingDidBegin;
-(oneway void)speechDidRecognizePhrases:(id)arg1 usingSpeechModel:(id)arg2 correctionContext:(id)arg3;
@end
