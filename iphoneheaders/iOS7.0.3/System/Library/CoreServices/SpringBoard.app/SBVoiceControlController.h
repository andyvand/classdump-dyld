/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface SBVoiceControlController : NSObject {

	BOOL _delayedAssistantActivationPending;
	BOOL _headsetDownDelayedActionPerformed;

}
+(id)sharedInstance;
-(void)configureVoiceControl;
-(void)preheatForMenuButtonWithFireDate:(id)arg1 ;
-(void)headsetAvailabilityChanged;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(void)_updateNextRecognitionAudioInputPaths:(id)arg1 ;
-(void)_assistantActivationSettingsDidChange:(id)arg1 ;
-(void)_performDelayedHeadsetActionForAssistant;
-(void)_performDelayedHeadsetActionForVoiceControl;
-(void)_prepareDelayedHeadsetAction;
-(void)_cancelDelayedHeadsetAction;
-(BOOL)handleHomeButtonHeld;
-(void)handleHeadsetButtonDownWithClickCount:(unsigned)arg1 ;
-(BOOL)handleHeadsetButtonUp;
-(BOOL)handleHeadsetButtonUpNotInCall;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
-(id)init;
@end
