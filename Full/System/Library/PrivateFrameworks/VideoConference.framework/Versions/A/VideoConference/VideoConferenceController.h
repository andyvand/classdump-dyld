/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VideoConference/VideoConference-Structs.h>
@class NSString, NSMutableDictionary, VCNotificationGateway, NATTraversal;

@interface VideoConferenceController : NSObject {

	NSString* _localIPAddress;
	NSString* _userName;
	char _allowsVideoRecv;
	char _allowsAudioRecv;
	char _allowsVideoSend;
	char _allowsAudioSend;
	char _enableEchoCancellation;
	char _enableOldAudioProcessing;
	char _enableNewAudioProcessing;
	unsigned _bitrate;
	unsigned _framerate;
	unsigned _keyrate;
	unsigned _maxBitrate;
	unsigned _maxFramerate;
	int _optimalImageSize;
	char _doNotDisturb;
	char _preFilter;
	char _postFilter;
	int _lightingProfile;
	int _defaultPayload;
	int _defaultWidth;
	int _defaultHeight;
	NSString* _remoteUserName;
	int _audioQuality;
	char _useEncryption;
	OpaqueSecIdentityRefRef _localSecIdentityRef;
	char _autoDetectBandwidth;
	NSMutableDictionary* _statsDictionary;
	VCNotificationGateway* _notificationGateway;
	NATTraversal* _NATTraversal;
	SCDynamicStoreRef _dynamicStore;
	NSMutableDictionary* _connectionDataAndCallIDDictionary;
	char _oneWayOnly;
	char _SDForced;
	NSString* _cameraName;
	NSString* _cameraGUID;
	unsigned _cameraDeviceID;

}
+(id)newcameraList;
+(id)microphoneList;
+(id)speakerList;
+(id)cameraList;
+(id)micList;
+(id)soundOutputDeviceList;
+(void)initialize;
-(float)audioVolume;
-(int)setAudioVolume:(float)arg1 ;
-(float)brightness;
-(float)focus;
-(void)setIgnoreNoRemotePackets:(char)arg1 ;
-(char)ignoreNoRemotePackets;
-(int)processCVPixelBuffer:(void*)arg1 intoCVPixelBuffer:(void*)arg2 withHint:(id)arg3 ;
-(void)setLocalIPAddress:(id)arg1 ;
-(void)setAllowsVideo:(char)arg1 ;
-(void)setAllowsAudio:(char)arg1 ;
-(void)setEnableEchoCancellation:(char)arg1 ;
-(void)setBitrate:(unsigned)arg1 ;
-(void)setFramerate:(unsigned)arg1 ;
-(void)setMaxFramerate:(unsigned)arg1 ;
-(void)setKeyrate:(unsigned)arg1 ;
-(void)setMaxBitrate:(unsigned)arg1 ;
-(void)setOptimalImageSize:(int)arg1 ;
-(void)setPreFilter:(int)arg1 enabled:(char)arg2 ;
-(void)setPostFilter:(char)arg1 ;
-(void)setAudioQuality:(int)arg1 ;
-(void)setAutoDetectBandwidth:(char)arg1 ;
-(void)setEncryption:(char)arg1 ;
-(void)setDoNotDisturb:(char)arg1 ;
-(void)setRemoteUserName:(id)arg1 ;
-(void)doInitialCPUUpdate;
-(void)updateCPUPower:(float)arg1 cpuCount:(int)arg2 scheduleLimit:(float)arg3 ;
-(int)userIDMapCount;
-(void)cpuUpdateProc:(id)arg1 ;
-(void)setConferenceBitrate:(int)arg1 ;
-(id)initWithRectTexture:(int)arg1 ;
-(void)setInternalSamplingRateFromDefaults;
-(void)handleFrameworkNotification:(id)arg1 ;
-(void)handleWorkspaceNotification:(id)arg1 ;
-(void)resetVars;
-(unsigned)bitrate;
-(char)enableEchoCancellation;
-(char)allowsVideoSend;
-(unsigned)localSIPPort;
-(void)freeVars;
-(char)_openCamera;
-(char)_closeCamera;
-(id)selectedMicrophone;
-(char)selectMicrophone:(id)arg1 ;
-(unsigned)currentCameraDeviceID;
-(int)getCameraFeature:(int)arg1 enabled:(int*)arg2 value:(float*)arg3 automatic:(int*)arg4 ;
-(int)setCameraFeature:(int)arg1 enabled:(int)arg2 value:(float)arg3 automatic:(int)arg4 ;
-(char)isPartyMuted:(int)arg1 ;
-(char)isPartyPaused:(int)arg1 ;
-(int)cancelPreview;
-(char)openCamera;
-(int)startPreview;
-(void)discardPreservedPortBindingForCallID:(int)arg1 ;
-(id)bandwidthDictionaryForUserID:(id)arg1 ;
-(id)dictionaryForUserID:(id)arg1 ;
-(char)_selectCameraByGUID:(id)arg1 ;
-(char)selectCameraWithCMIODeviceID:(unsigned)arg1 ;
-(char)_selectCameraWithCMIODeviceID:(unsigned)arg1 ;
-(id)_selectedCamera;
-(void)setCurrentCameraName:(id)arg1 ;
-(id)currentCameraName;
-(id)selectedSpeaker;
-(void)setRenderDelegate:(id)arg1 ;
-(id)renderDelegate;
-(void)setRectTexture:(int)arg1 ;
-(void)setCPUResize:(int)arg1 ;
-(id)initWithLocalIPAddress:(id)arg1 ;
-(id)localIPAddress;
-(char)allowsVideo;
-(char)allowsAudio;
-(void)setAllowsVideoSend:(char)arg1 ;
-(void)setAllowsAudioSend:(char)arg1 ;
-(char)allowsAudioSend;
-(void)setAllowsVideoRecv:(char)arg1 ;
-(char)allowsVideoRecv;
-(void)setAllowsAudioRecv:(char)arg1 ;
-(char)allowsAudioRecv;
-(unsigned)framerate;
-(unsigned)keyrate;
-(int)optimalImageSize;
-(unsigned)maxBitrate;
-(unsigned)maxFramerate;
-(void)setEnableNoiseReduction:(char)arg1 ;
-(char)enableNoiseReduction;
-(unsigned)externalSIPPort;
-(id)externalIPAddress;
-(id)remoteUserName;
-(char)canStartPreview;
-(char)fixCameraProperties:(char)arg1 ;
-(char)fixCameraFeature:(int)arg1 isFixed:(char)arg2 ;
-(int)audioQuality;
-(char)autoDetectBandwidth;
-(char)doNotDisturb;
-(int)cancelInitiatedConferenceCallWithRemoteIPAddress:(id)arg1 remoteSIPPort:(unsigned short)arg2 ;
-(int)DoVCIncomingConference:(void*)arg1 ;
-(void)muteParty:(int)arg1 shouldMute:(char)arg2 ;
-(void)pauseParty:(int)arg1 shouldPause:(char)arg2 ;
-(void)VCSendMessageProc:(id)arg1 ;
-(int)setMicrophoneGain:(float)arg1 ;
-(float)microphoneGain;
-(float)microphoneLevel;
-(float)speakerLevel;
-(int)upstreamBandwidthToUserID:(id)arg1 ;
-(int)upstreamAudioBandwidthToUserID:(id)arg1 ;
-(char)closeCamera;
-(char)selectCameraByGUID:(id)arg1 ;
-(char)selectCameraWithTundraDeviceID:(unsigned)arg1 ;
-(id)selectedCamera;
-(char)selectCamera:(id)arg1 ;
-(id)cameraName;
-(id)findMovieMic;
-(char)selectMic:(id)arg1 ;
-(id)micName;
-(char)selectSpeaker:(id)arg1 ;
-(char)selectSoundOutputDevice:(id)arg1 ;
-(id)soundOutputDeviceName;
-(char)setContrast:(float)arg1 ;
-(float)contrast;
-(char)setFocus:(float)arg1 ;
-(char)setSharpness:(float)arg1 ;
-(float)sharpness;
-(void)setLightingProfile:(int)arg1 ;
-(int)lightingProfile;
-(void)iChatWillFileTransfer;
-(void)iChatDidFileTransfer;
-(id)snatmapDataObj;
-(void)setSNATMAPData:(id)arg1 ;
-(int)properConfIndexForUser:(id)arg1 ;
-(id)getErrorReport;
-(void)shutdownAV;
-(void)releaseRouterMappings;
-(char)setAudioAndVideoPayload:(id)arg1 forConferenceIndex:(int)arg2 forUserAgent:(id)arg3 forPeerSDP:(id)arg4 ;
-(void)setCurrentCameraDeviceID:(unsigned)arg1 ;
-(void)setCurrentCameraGUID:(id)arg1 ;
-(id)currentCameraGUID;
-(int)createVTPAndGetRealPort:(unsigned short*)arg1 forInterface:(tagIPPORT*)arg2 ;
-(void)createUPnPMappings;
-(int)getNATMappedPorts:(tagIPPORT*)arg1 numPortsOut:(int*)arg2 ;
-(char)setAudioAndVideoPayload:(id)arg1 forConferenceIndex:(int)arg2 forUserAgent:(id)arg3 ;
-(id)getSIPDataAndIPListFromRemoteIPAndPortData:(id)arg1 ipList:(id)arg2 ;
-(char)selectMovieMic;
-(void)updateDictionaryForUserID:(id)arg1 withSubKey:(id)arg2 andValue:(id)arg3 ;
-(void)clearUserIDToCallIDMap;
-(char)removeUserIDFromMap:(id)arg1 ;
-(void)setAuxiliaryVideoInputMode:(int)arg1 ;
-(void)allowGSM:(char)arg1 ;
-(void)allowG711:(char)arg1 ;
-(void)allowPureVoice:(char)arg1 ;
-(int)cameraFeatureID:(id)arg1 ;
-(int)getCameraFeatureDefaults:(int)arg1 enabled:(int*)arg2 value:(float*)arg3 automatic:(int*)arg4 ;
-(int)getCameraFeatureRange:(int)arg1 minValue:(float*)arg2 maxValue:(float*)arg3 hasManual:(int*)arg4 hasAuto:(int*)arg5 ;
-(int)setCameraFocusPoint:(float)arg1 y:(float)arg2 ;
-(int)getCameraFocusPoint:(float*)arg1 y:(float*)arg2 ;
-(int)getCameraFocusPointDefaults:(float*)arg1 y:(float*)arg2 ;
-(int)setCameraAreaOfInterest:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 ;
-(int)getCameraAreaOfInterest:(float*)arg1 y:(float*)arg2 width:(float*)arg3 height:(float*)arg4 ;
-(int)getCameraAreaOfInterestDefaults:(float*)arg1 y:(float*)arg2 width:(float*)arg3 height:(float*)arg4 ;
-(char)encryption;
-(void)setEchoCancellation:(char)arg1 ;
-(char)echoCancellation;
-(void)setAGC:(char)arg1 ;
-(char)AGC;
-(void)setOldAudioProcessing:(char)arg1 ;
-(char)oldAudioProcessing;
-(void)setNewAudioProcessing:(char)arg1 ;
-(char)newAudioProcessing;
-(char)preFilter:(int)arg1 ;
-(char)postFilter;
-(id)cameraSettingsData;
-(char)setCameraSettingsData:(id)arg1 ;
-(char)enableFocus:(char)arg1 ;
-(int)sendChatMessage:(id)arg1 ;
-(char)addUserIDToMap:(id)arg1 withInfo:(id)arg2 ;
-(void)invalidateCallIDForUserID:(id)arg1 ;
-(char)existUserIDInUserIDMap:(id)arg1 ;
-(id)dictionaryForPeer;
-(char)enableU2Input;
-(void)disableU2Input;
-(void)sendHardwareCapsChange:(char)arg1 ;
-(CGSize)auxVideoBufferSizeForParty:(id)arg1 replacementOnly:(char)arg2 ;
-(void)stopAuxiliaryReflector;
-(id)audioReflectorChannels:(int)arg1 ;
-(id)audioReflectorGUID;
-(char)IsSideShowAvailable;
-(char)enableReplacementVideoInputWithName:(id)arg1 ;
-(void)disableReplacementInput;
-(void)requestAuxiliaryVideoInput;
-(void)auxiliaryInputReady;
-(void)disableAuxiliaryVideoInput;
-(int)audioReflectorChannel;
-(char)requestReflectorChannels:(id)arg1 ;
-(int)startAuxiliaryReflector;
-(void)muteAuxiliaryAudio:(char)arg1 ;
-(void)muteAuxiliaryAudioLocalPlayback:(char)arg1 ;
-(void)setAuxiliaryAudioVolume:(float)arg1 ;
-(float)auxiliaryAudioVolume;
-(void)setSDForced:(char)arg1 ;
-(char)isSDForced;
-(char)hasCamera;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(char)setColor:(float)arg1 ;
-(float)color;
-(char)setBrightness:(float)arg1 ;
-(id)userName;
-(void)setUserName:(id)arg1 ;
@end

