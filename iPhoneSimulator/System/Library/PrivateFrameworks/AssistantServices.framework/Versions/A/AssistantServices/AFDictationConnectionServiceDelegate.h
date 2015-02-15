/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFDictationServiceDelegate.h>

@class AFDictationConnection, NSString;

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate> {

	AFDictationConnection* _dictationConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)speechRecordingWillBegin;
-(oneway void)speechRecordingDidBegin;
-(oneway void)speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(oneway void)speechRecordingDidEnd;
-(oneway void)speechRecordingDidCancel;
-(oneway void)speechRecordingDidFail:(id)arg1 ;
-(oneway void)speechRecognitionDidFail:(id)arg1 ;
-(id)initWithDictationConnection:(id)arg1 ;
-(oneway void)speechDidRecognizePhrases:(id)arg1 usingSpeechModel:(id)arg2 correctionContext:(id)arg3 ;
@end

