/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TUCallServicesProxyCallActions <NSObject>
@required
-(void)sendHardPauseDigits;
-(void)dialCall:(id)arg1;
-(void)answerCall:(id)arg1;
-(void)holdCall:(id)arg1;
-(void)unholdCall:(id)arg1;
-(void)disconnectCall:(id)arg1;
-(void)conferenceCall:(id)arg1;
-(void)unconferenceCall:(id)arg1;
-(void)swapCalls;
-(void)playDTMFToneForCall:(id)arg1 key:(unsigned char)arg2;
-(void)endActiveAndAnswerCall:(id)arg1;
-(void)endHeldAndAnswerCall:(id)arg1;
-(void)disconnectCurrentCallAndActivateHeld;
-(void)disconnectAllCalls;
-(void)muteCall:(id)arg1;
-(void)unmuteCall:(id)arg1;
-(void)setIsSendingAudio:(char)arg1 forCall:(id)arg2;

@end

