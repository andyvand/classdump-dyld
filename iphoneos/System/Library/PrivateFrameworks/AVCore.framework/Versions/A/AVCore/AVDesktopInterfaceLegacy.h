/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVCore.framework/Versions/A/AVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVCore/AVCore-Structs.h>
#import <AVCore/AVInterface.h>
#import <AVCore/VideoConferenceDelegateProtocol.h>

@class FZVideoConferenceController;

@interface AVDesktopInterfaceLegacy : AVInterface <VideoConferenceDelegateProtocol> {

	FZVideoConferenceController* _vcc;
	unsigned _idleDisplaySleepAssertion;
	char _duringInit;

}

@property (nonatomic,readonly) FZVideoConferenceController * controller; 
+(void)initialize;
+(id)bestChatForVCPartyID:(id)arg1 errorString:(id)arg2 ;
-(void)vcc:(id)arg1 initiateConferenceStartedForParty:(id)arg2 ;
-(void)vcc:(id)arg1 initiateConferenceCompletedForParty:(id)arg2 partyInfo:(id)arg3 ;
-(void)vcc:(id)arg1 partyConnected:(id)arg2 ;
-(void)vcc:(id)arg1 partyHungUp:(id)arg2 ;
-(void)vcc:(id)arg1 party:(id)arg2 didMute:(char)arg3 ;
-(void)vcc:(id)arg1 party:(id)arg2 didPause:(char)arg3 ;
-(void)vcc:(id)arg1 partyCancelled:(id)arg2 ;
-(void)vcc:(id)arg1 conferenceAttempted:(id)arg2 ;
-(void)vccInsufficientBandwidth:(id)arg1 forParty:(id)arg2 partyInfo:(id)arg3 ;
-(void)vccNetworkTimeout:(id)arg1 ;
-(void)vccLocalVideoError:(id)arg1 ;
-(void)vcc:(id)arg1 noPacketsFromParty:(id)arg2 partyInfo:(id)arg3 ;
-(void)vcc:(id)arg1 party:(id)arg2 didStall:(char)arg3 ;
-(char)shouldAcceptIncomingVideoConferenceRequestFromUser:(id)arg1 callbackInfo:(id)arg2 ;
-(char)shouldAcceptIncomingVideoConferenceRequestFromUser:(id)arg1 ;
-(char)vcc:(id)arg1 isRemoteCertificateValid:(OpaqueSecCertificateRefRef)arg2 forUser:(id)arg3 ;
-(void)vcc:(id)arg1 securityChangedForUser:(id)arg2 ;
-(void)vccLocalCertNotAccepted:(id)arg1 ;
-(void)vccRemoteCertNotAccepted:(id)arg1 forParty:(id)arg2 ;
-(char)vcc:(id)arg1 userRequestedAuxiliaryInput:(id)arg2 ;
-(void)vcc:(id)arg1 user:(id)arg2 approvedAuxiliaryInput:(char)arg3 ;
-(void)setMaxBitrate:(unsigned)arg1 ;
-(char)openCamera;
-(unsigned)maxBitrate;
-(unsigned)externalSIPPort;
-(id)externalIPAddress;
-(char)closeCamera;
-(void)vcc:(id)arg1 userBeganAuxiliaryInput:(id)arg2 ;
-(char)vcc:(id)arg1 isUserLikelyAIM59OrBelow:(id)arg2 ;
-(id)userIDForPartyID:(id)arg1 ;
-(void)vcc:(id)arg1 userEndedAuxiliaryInput:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(FZVideoConferenceController *)controller;
-(unsigned long long)capabilities;
-(id)getNatIPFromICEData:(id)arg1 ;
-(id)natTypeForAVChat:(id)arg1 ;
-(id)avChat:(id)arg1 IPAndPortDataWithCallerIPAndPortData:(id)arg2 shouldFindExternalIP:(char)arg3 ;
-(id)avChat:(id)arg1 IPAndPortDataWithCallerIP:(id)arg2 callerSIPPort:(unsigned)arg3 shouldFindExternalIP:(char)arg4 ;
-(void)avChat:(id)arg1 setAllowsVideo:(char)arg2 ;
-(void)avChat:(id)arg1 enableSoftwareCamera:(char)arg2 ;
-(void)avChat:(id)arg1 enableSoftwareMicrophone:(char)arg2 ;
-(char)systemCanHostMultiwayVideo;
-(char)systemCanHostMultiwayAudio;
-(void)chatStateUpdated;
-(int)endConferenceForAVChat:(id)arg1 ;
-(char)isAVInterfaceReady;
-(void)initAVInterface;
-(void)avChat:(id)arg1 prepareConnectionWithRemoteConnectionData:(id)arg2 localConnectionData:(id)arg3 ;
-(id)avChat:(id)arg1 localICEDataForHandleID:(id)arg2 service:(id)arg3 usingRelay:(char)arg4 supportsARDMuxing:(char)arg5 ;
-(void)_conferenceWillStart:(id)arg1 ;
-(void)_conferenceEnded:(id)arg1 ;
-(char)allowsVideoForAVChat:(id)arg1 ;
-(char)systemCanRecordAudio;
-(char)systemCanRecordVideo;
-(float)audioVolumeForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setAudioVolume:(float)arg2 ;
-(char)isMuteForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setMute:(char)arg2 ;
-(char)isPausedForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setPaused:(char)arg2 ;
-(char)isRemoteMuteForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setRemoteMute:(char)arg2 ;
-(char)isRemotePausedForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setRemotePaused:(char)arg2 ;
-(char)isSendingAudioForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setSendingAudio:(char)arg2 ;
-(char)isSendingVideoForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setSendingVideo:(char)arg2 ;
-(void)avChat:(id)arg1 setValidatedIdentity:(OpaqueSecIdentityRefRef)arg2 ;
-(char)lockCameraForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setLockCamera:(char)arg2 ;
-(unsigned long long)capabilitiesOfNetwork;
-(unsigned long long)capabilitiesOfCPU;
-(char)avChat:(id)arg1 startConferenceWithUserID:(id)arg2 ;
-(int)avChat:(id)arg1 endConferenceForUserID:(id)arg2 ;
-(unsigned)avChat:(id)arg1 enableAudioReflector:(char)arg2 ;
-(void)avChat:(id)arg1 setUserName:(id)arg2 ;
-(char)supportsRelay;
-(void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(CGSize)arg2 localPortraitAspectRatio:(CGSize)arg3 ;
-(void)_disableDisplayIdleSleep;
-(void)_pauseMediaPlayback;
-(void)_disableIdleStatus;
-(void)_enableDisplayIdleSleep;
-(void)_resumeMediaPlayback;
-(void)_enableIdleStatus;
-(char)isSecurityEnabledForAVChat:(id)arg1 ;
-(char)isSecurityValidForAVChat:(id)arg1 ;
-(OpaqueSecCertificateRefRef)avChat:(id)arg1 remoteCertificateForUser:(id)arg2 ;
-(void)vcc:(id)arg1 remoteCameraBeingChangedForParty:(id)arg2 ;
-(void)vcc:(id)arg1 party:(id)arg2 statsForEndingConference:(id)arg3 ;
@end

