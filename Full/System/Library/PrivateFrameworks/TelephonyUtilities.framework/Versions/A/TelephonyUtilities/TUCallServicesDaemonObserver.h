/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TUCallServicesDaemonObserver
@required
-(void)handleWantsHoldMusicChangedTo:(char)arg1 forCallWithUUID:(id)arg2;
-(void)handleEndpointOnCurrentDeviceChangedTo:(char)arg1 forCallWithUUID:(id)arg2;
-(void)handleDisconnectedReasonChangedTo:(int)arg1 forCallWithUUID:(id)arg2;
-(void)handleLocalFrequencyChangedTo:(id)arg1;
-(void)handleRemoteFrequencyChangedTo:(id)arg1;
-(void)handleMutedChangedTo:(char)arg1;
-(void)handleHardPauseDigitsAvailibilityChangedTo:(unsigned short)arg1 digits:(id)arg2;
-(void)handleCallStatusChangedForProxyCall:(id)arg1;
-(void)handleCallContinuityStateChangedForProxyCall:(id)arg1;
-(void)handleCurrentProxyCallsChanged:(id)arg1;
-(void)handleCallModelStateChanged:(id)arg1;

@end

