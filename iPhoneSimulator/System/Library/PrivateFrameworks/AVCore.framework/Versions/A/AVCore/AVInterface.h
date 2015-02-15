/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVCore.framework/Versions/A/AVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVCore/AVCore-Structs.h>
@class NSString, AVMicrophone, AVCamera;

@interface AVInterface : NSObject {

	id _delegate;

}

@property (nonatomic,readonly) char systemCanVideoChat; 
@property (nonatomic,readonly) char systemCanAudioChat; 
@property (nonatomic,readonly) char systemCanHostMultiwayVideo; 
@property (nonatomic,readonly) char systemCanHostMultiwayAudio; 
@property (nonatomic,readonly) char systemCanRecordVideo; 
@property (nonatomic,readonly) char systemCanRecordAudio; 
@property (nonatomic,readonly) char systemCanARD; 
@property (nonatomic,readonly) char systemCanHostARD; 
@property (assign,nonatomic) void* localVideoBackLayer; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) char shouldKeepCameraRunning; 
@property (assign,nonatomic) unsigned maxBitrate; 
@property (nonatomic,readonly) id controller; 
@property (nonatomic,readonly) unsigned overallChatState; 
@property (nonatomic,readonly) char supportsRelay; 
@property (assign) id delegate;                                                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * externalIPAddress; 
@property (nonatomic,readonly) unsigned externalSIPPort; 
@property (setter=_setCurrentMicrophone:,nonatomic,retain) AVMicrophone * _currentMicrophone; 
@property (setter=_setCurrentCamera:,nonatomic,retain) AVCamera * _currentCamera; 
@property (nonatomic,readonly) char _previewStarted; 
@property (nonatomic,readonly) char supportsLayers; 
@property (nonatomic,readonly) char isAVInterfaceReady; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) unsigned long long capabilitiesOfNetwork; 
@property (nonatomic,readonly) unsigned long long capabilitiesOfCPU; 
@property (nonatomic,readonly) id _controller; 
+(id)alloc;
+(id)sharedInstance;
-(id)_controller;
-(void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3 ;
-(void)setMaxBitrate:(unsigned)arg1 ;
-(char)openCamera;
-(unsigned)maxBitrate;
-(unsigned)externalSIPPort;
-(NSString *)externalIPAddress;
-(char)closeCamera;
-(char)stopPreview;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)controller;
-(id)delegate;
-(unsigned long long)capabilities;
-(id)getNatIPFromICEData:(id)arg1 ;
-(id)natTypeForAVChat:(id)arg1 ;
-(id)avChat:(id)arg1 IPAndPortDataWithCallerIPAndPortData:(id)arg2 shouldFindExternalIP:(char)arg3 ;
-(id)avChat:(id)arg1 IPAndPortDataWithCallerIP:(id)arg2 callerSIPPort:(unsigned)arg3 shouldFindExternalIP:(char)arg4 ;
-(void)avChat:(id)arg1 setAllowsVideo:(char)arg2 ;
-(void)avChat:(id)arg1 enableSoftwareCamera:(char)arg2 ;
-(void)avChat:(id)arg1 enableSoftwareMicrophone:(char)arg2 ;
-(void)_notifyAboutPotentialCallForChat:(id)arg1 ;
-(char)systemCanHostMultiwayVideo;
-(char)systemCanHostMultiwayAudio;
-(char)systemCanVideoChat;
-(char)systemCanAudioChat;
-(void)_avChatDealloc:(id)arg1 ;
-(void)chatStateUpdated;
-(void)unsetDelegate:(id)arg1 ;
-(int)endConferenceForAVChat:(id)arg1 ;
-(char)isAVInterfaceReady;
-(void)initAVInterface;
-(void)avChat:(id)arg1 prepareConnectionWithRemoteConnectionData:(id)arg2 localConnectionData:(id)arg3 ;
-(id)avChat:(id)arg1 localICEDataForHandleID:(id)arg2 service:(id)arg3 usingRelay:(char)arg4 supportsARDMuxing:(char)arg5 ;
-(void)cleanupAVInterface;
-(void)_conferenceWillStart:(id)arg1 ;
-(void)_conferenceEnded:(id)arg1 ;
-(unsigned)overallChatState;
-(char)systemCanARD;
-(char)systemCanHostARD;
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
-(char)startPreviewWithError:(id*)arg1 ;
-(char)avChat:(id)arg1 startConferenceWithUserID:(id)arg2 ;
-(int)avChat:(id)arg1 endConferenceForUserID:(id)arg2 ;
-(unsigned)avChat:(id)arg1 enableAudioReflector:(char)arg2 ;
-(void)avChat:(id)arg1 setUserName:(id)arg2 ;
-(char)supportsLayers;
-(void*)remoteVideoLayerForChat:(id)arg1 ;
-(void)setRemoteVideoLayer:(void*)arg1 forChat:(id)arg2 ;
-(void*)remoteVideoBackLayerForChat:(id)arg1 ;
-(void)setRemoteVideoBackLayer:(void*)arg1 forChat:(id)arg2 ;
-(void*)localVideoLayer;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2 ;
-(char)supportsRelay;
-(void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 ;
-(void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 ;
-(void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 ;
-(void)setShouldKeepCameraRunning:(char)arg1 ;
-(char)shouldKeepCameraRunning;
-(void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(CGSize)arg2 localPortraitAspectRatio:(CGSize)arg3 ;
-(char)_submitLoggingInformation:(id)arg1 forChat:(id)arg2 ;
-(char)_submitEndCallMetric:(id)arg1 forChat:(id)arg2 ;
-(long long)_checkNetworkForChat:(id)arg1 requiresWifi:(char)arg2 ;
-(long long)_runPingTestForChat:(id)arg1 ;
-(void)_setCurrentMicrophone:(id)arg1 ;
-(AVMicrophone *)_currentMicrophone;
-(void)_setCurrentCamera:(id)arg1 ;
-(AVCamera *)_currentCamera;
-(char)_previewStarted;
@end

