/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSArray, AFVoiceInfo;

@interface AFSettingsConnection : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _voicesQueue;
	NSArray* _voices;
	AFVoiceInfo* _selectedVoice;

}
-(id)accounts;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(id)_connection;
-(void)_clearConnection;
-(void)setAssistantEnabled:(char)arg1 ;
-(void)barrier;
-(void)setDictationEnabled:(char)arg1 ;
-(void)setOutputVoice:(id)arg1 ;
-(void)fetchSupportedLanguageCodes:(/*^block*/id)arg1 ;
-(void)deleteAccountWithIdentifier:(id)arg1 ;
-(id)_settingsServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_settingsService;
-(void)_setVoices:(id)arg1 ;
-(id)_voices;
-(id)_filterVoices:(id)arg1 forLanguage:(id)arg2 ;
-(void)_updateVoicesWithCompletion:(/*^block*/id)arg1 ;
-(void)saveAccount:(id)arg1 setActive:(char)arg2 ;
-(void)killDaemon;
-(void)_updateVoicesSync;
-(void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)setLanguage:(id)arg1 ;
@end

