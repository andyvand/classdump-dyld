/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFManagedStore.h>

@protocol AFAssistantUIService, AFSpeechDelegate;
@class NSXPCConnection, NSString, NSMutableDictionary;

@interface AFConnection : NSObject <AFManagedStore> {

	NSXPCConnection* _connection;
	id<AFAssistantUIService> _delegate;
	id<AFSpeechDelegate> _speechDelegate;
	float _averagePower;
	float _peakPower;
	NSString* _outstandingRequestClass;
	unsigned _stateInSync : 1;
	unsigned _shouldSpeak : 1;
	unsigned _isCapturingSpeech : 1;
	unsigned _hasOutstandingRequest : 1;
	unsigned _replyContextMayInitiateCall : 1;
	char _hasActiveRequest;
	NSMutableDictionary* _replyHandlerForAceId;

}

@property (assign,nonatomic,__weak) id<AFAssistantUIService> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AFSpeechDelegate> speechDelegate;              //@synthesize speechDelegate=_speechDelegate - In the implementation block
@property (nonatomic,readonly) char isRecording; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)beginMonitoringAvailability;
+(id)outputVoice;
+(char)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(char)assistantIsSupported;
+(char)isAvailable;
+(void)stopMonitoringAvailability;
+(char)userDataSyncNeeded;
+(char)isReadyForLanguageCode:(id)arg1 ;
+(void)defrost;
+(void)initialize;
+(id)currentLanguageCode;
-(void)endSession;
-(char)isRecording;
-(id)_connection;
-(void)_requestStateUpdate;
-(void)_clearConnection;
-(void)_willStartRequestForSpeech:(char)arg1 ;
-(void)_cancelRequestTimeout;
-(char)shouldSpeak;
-(void)_tellDelegateShouldSpeakChanged:(char)arg1 ;
-(void)_willCompleteRequest;
-(void)_willFailRequestWithError:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)_requestDidEnd;
-(void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2 ;
-(void)preheat;
-(void)startSpeechRequestWithOptions:(id)arg1 ;
-(void)updateSpeechOptions:(id)arg1 ;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(void)clearAndSetApplicationContextWithBulletins:(id)arg1 ;
-(void)checkLanguageReady:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)undoRequest;
-(void)redoRequest;
-(void)_invokeRequestTimeout;
-(id)_clientService;
-(void)_setShouldSpeak:(char)arg1 ;
-(void)_willCancelRequest;
-(void)_requestWillBeginWithRequestClass:(id)arg1 logAggregateData:(char)arg2 isSpeechRequest:(char)arg3 ;
-(void)_scheduleRequestTimeout:(double)arg1 ;
-(void)startRequestWithText:(id)arg1 timeout:(double)arg2 ;
-(void)_checkAndSetIsCapturingSpeech:(char)arg1 ;
-(void)sendGenericAceCommand:(id)arg1 conflictHandler:(/*^block*/id)arg2 ;
-(id)_clientServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)domainObjectForKey:(id)arg1 ;
-(void)setDomainObject:(id)arg1 forKey:(id)arg2 ;
-(void)_doCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_requestReplyContextMayInitiateCall;
-(void)_speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(void)_tellDelegateRequestFinished;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_tellSpeechDelegateRecordingDidBegin;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateSpeechRecognized:(id)arg1 ;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(char)setLanguageCode:(id)arg1 error:(id*)arg2 ;
-(void)setLockState:(char)arg1 screenLocked:(char)arg2 ;
-(void)startDirectActionRequestWithString:(id)arg1 forBundleID:(id)arg2 timeout:(double)arg3 ;
-(void)startRequestWithText:(id)arg1 ;
-(void)stopSpeech;
-(void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 ;
-(float)averagePower;
-(float)peakPower;
-(char)replyContextMayInitiateCall;
-(void)sendGenericAceCommand:(id)arg1 ;
-(void)sendReplyCommand:(id)arg1 ;
-(void)clearAndSetApplicationContext;
-(id<AFSpeechDelegate>)speechDelegate;
-(void)setSpeechDelegate:(id<AFSpeechDelegate>)arg1 ;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(char)arg2 ;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 ;
-(void)_barrier;
-(void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1 ;
-(void)cancelRequest;
-(void)cancelSpeech;
-(void)clearContext;
-(void)rollbackRequest;
-(id)init;
-(void)setDelegate:(id<AFAssistantUIService>)arg1 ;
-(void)dealloc;
-(id<AFAssistantUIService>)delegate;
@end
