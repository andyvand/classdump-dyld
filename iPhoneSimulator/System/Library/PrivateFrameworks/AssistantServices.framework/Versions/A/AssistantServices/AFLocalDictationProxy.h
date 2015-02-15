/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFDictationService.h>

@protocol AFDictationDelegate;
@class AFDictationConnection, NSString, NSXPCConnection;

@interface AFLocalDictationProxy : NSObject <AFDictationService> {

	AFDictationConnection* _dictationConnection;
	NSString* _actualLanguageModel;
	char _prepared;
	id<AFDictationDelegate> _delegate;

}

@property (nonatomic,readonly) NSXPCConnection * connection; 
@property (assign,nonatomic,__weak) id<AFDictationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)localDictationIsAvailableForLanguage:(id)arg1 ;
+(id)_phrasesForRecognizedText:(id)arg1 ;
-(oneway void)endSession;
-(NSXPCConnection *)connection;
-(oneway void)preheat;
-(oneway void)updateSpeechOptions:(id)arg1 ;
-(oneway void)stopSpeechWithOptions:(id)arg1 ;
-(oneway void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 ;
-(oneway void)sendSpeechCorrectionInfo:(id)arg1 forCorrectionContext:(id)arg2 ;
-(oneway void)preheatWithRecordDeviceIdentifier:(id)arg1 ;
-(oneway void)_startDictationWithURL:(id)arg1 isNarrowBand:(char)arg2 language:(id)arg3 options:(id)arg4 ;
-(id)initWithDictationConnection:(id)arg1 ;
-(oneway void)speechRecognitionServiceHypothesizedText:(id)arg1 ;
-(oneway void)speechRecognitionServiceRecognitionRecognizedText:(id)arg1 correctionKey:(id)arg2 ;
-(oneway void)speechRecognitionServiceComputedLatency:(double)arg1 ;
-(oneway void)speechRecognitionServiceUpdatedAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(oneway void)speechRecognitionServiceRecordingDidBegin;
-(oneway void)speechRecognitionServiceRecordingDidFail:(id)arg1 ;
-(oneway void)speechRecognitionServiceRecognitionDidBegin;
-(oneway void)speechRecognitionServiceRecognitionDidFail:(id)arg1 ;
-(oneway void)cancelSpeech;
-(void)setDelegate:(id<AFDictationDelegate>)arg1 ;
-(id<AFDictationDelegate>)delegate;
@end

