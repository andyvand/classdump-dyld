/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VideoConference/VideoConference-Structs.h>
#import <VideoConference/VideoConferenceController.h>

@interface VideoConferenceMultiController : VideoConferenceController
+(id)makeIPAndPortDataFromIP:(id)arg1 port:(unsigned short)arg2 ;
-(id)statistics;
-(id)initWithRectTexture:(int)arg1 ;
-(unsigned)localSIPPort;
-(unsigned)externalSIPPort;
-(id)externalIPAddress;
-(int)DoVCIncomingConference:(void*)arg1 ;
-(char)isFocus;
-(char)isSecurityEnabledForUser:(id)arg1 ;
-(char)isSecurityValidForUser:(id)arg1 ;
-(OpaqueSecCertificateRefRef)getRemoteCertificateForUser:(id)arg1 ;
-(id)statistics:(int)arg1 ;
-(void)hangupThreadProc:(id)arg1 ;
-(void)launchHangupThread:(int)arg1 ;
-(void)setAudioHalfRate:(char)arg1 forConfIndex:(int)arg2 ;
-(void)determineFocusCapability:(VCFocusCapability*)arg1 isVideoHardwareCapable:(char*)arg2 ;
-(void)updateFocusCapabilityForBandwidth:(VCFocusCapability*)arg1 upstreamKbits:(int)arg2 downstreamKbits:(int)arg3 ;
-(void)updateFocusTransmitParameters:(int)arg1 ;
-(void)determineFocusCapabilityOfCPU:(VCFocusCapability*)arg1 ;
-(void)determineFocusCapabilityOfNetwork:(VCFocusCapability*)arg1 ;
-(void)handleCleanupForUser:(id)arg1 withCallID:(int)arg2 endTransmit:(char)arg3 andSendSIPHangup:(char)arg4 ;
-(void)printCapabilities:(unsigned long long)arg1 ;
-(int)doPeerToPeerBandwidthDetectionForIndex:(int)arg1 pUpstreamKbits:(int*)arg2 pDownstreamKbits:(int*)arg3 withSNATMAPIP:(unsigned long long)arg4 withCallID:(int)arg5 withUserID:(id)arg6 ;
-(OpaqueSecIdentityRefRef)localSecIdentityRef;
-(void)determineFocusCapabilityProc:(id)arg1 ;
-(void)openNetworkMonitor;
-(void)closeNetworkMonitor;
-(id)IPAndPortDataWithCallerIPAndPortData:(id)arg1 shouldFindExternalIP:(char)arg2 ;
-(int)initiateConferenceToUser:(id)arg1 withIPAndPortData:(id)arg2 oneWayOnly:(char)arg3 withValidatedCert:(OpaqueSecCertificateRefRef)arg4 shouldFindExternalIP:(char)arg5 ;
-(id)connectionDataForIPAndPortData:(id)arg1 ;
-(void)initiateConferenceToUserWithVCConnectionDataProc:(id)arg1 ;
-(int)initiateConferenceToUser:(id)arg1 withIPAndPortData:(id)arg2 oneWayOnly:(char)arg3 shouldFindExternalIP:(char)arg4 ;
-(unsigned long long)vcCapabilitiesOfCPU;
-(unsigned long long)vcCapabilitiesOfNetwork;
-(unsigned long long)vcCapabilitiesOfRouter;
-(char)startConferenceWithIndex:(int)arg1 userAtIndexIsCaller:(char)arg2 userIDAtIndex:(id)arg3 ;
-(id)IPAndPortDataWithCallerIP:(id)arg1 callerSIPPort:(unsigned)arg2 shouldFindExternalIP:(char)arg3 ;
-(void)setValidatedIdentity:(OpaqueSecIdentityRefRef)arg1 ;
-(OpaqueSecIdentityRefRef)getValidatedIdentity;
-(char)isSecurityEnabled;
-(char)isSecurityValid;
-(id)IPAndPortDataWithCallerIPAndPortData:(id)arg1 ;
-(int)initiateConferenceToUser:(id)arg1 withIPAndPortData:(id)arg2 oneWayOnly:(char)arg3 withValidatedCert:(OpaqueSecCertificateRefRef)arg4 ;
-(int)initiateConferenceToUser:(id)arg1 withIPAndPortData:(id)arg2 oneWayOnly:(char)arg3 ;
-(int)endConference;
-(int)endConferenceForUserID:(id)arg1 ;
-(char)startReflector;
-(char)stopReflector;
-(int)reflectorChannelForUserID:(id)arg1 ;
-(void)setReflectorIconForUserID:(id)arg1 icon:(CFDataRef)arg2 ;
-(unsigned long long)vcCapabilities;
-(char)startConferenceWithUserID:(id)arg1 ;
-(double)conferenceUptime;
-(id)audioLevelForUserID:(id)arg1 ;
-(char)getLocalVideoTextureBuffer:(SCD_Struct_Vi6*)arg1 ;
-(char)isLocalVideoChanged;
-(char)isRemoteVideoChangedForUser:(id)arg1 ;
-(char)lockVideoBufferForUser:(id)arg1 ;
-(char)unlockVideoBufferForUser:(id)arg1 ;
-(char)lockVideoBufferForUser:(id)arg1 lockID:(int*)arg2 ;
-(char)unlockVideoBufferForUser:(id)arg1 lockID:(int)arg2 ;
-(char)getRemoteVideoTextureBuffer:(SCD_Struct_Vi6*)arg1 forUser:(id)arg2 ;
-(char)getRemoteVideoTextureBuffer:(SCD_Struct_Vi6*)arg1 forUser:(id)arg2 freezeFlag:(char)arg3 ;
-(id)IPAndPortDataWithCallerIP:(id)arg1 callerSIPPort:(unsigned)arg2 ;
-(id)localIPs;
-(id)extractConnectionDataFromVCConnectionData:(id)arg1 ;
-(id)extractObjectFromVCConnectionData:(id)arg1 byKey:(id)arg2 ;
-(id)extractVersionFromVCConnectionData:(id)arg1 ;
-(id)extractIPAndPortDataFromVCConnectionData:(id)arg1 ;
-(int)callIDForVCConnectionData:(id)arg1 ;
-(id)extractBandwidthInfoFromVCConnectionData:(id)arg1 ;
-(id)IPAndPortDataForConnectionData:(id)arg1 ;
-(int)initiateConferenceCallUsingConnectionDataWithErrorInfoToUser:(id)arg1 withRemoteVCConnectionData:(id)arg2 withLocalVCConnectionData:(id)arg3 oneWayOnly:(char)arg4 errorInfo:(id*)arg5 shouldFindExternalIP:(char)arg6 ;
-(id)extractVCChannelExtraFromVCConnectionData:(id)arg1 ;
-(tagHANDLE*)extractVCChannelHandleFromVCConnectionData:(id)arg1 ;
-(id)bandwidthDictionary;
-(id)VCChannelExtraDictionary:(id)arg1 withHandle:(tagHANDLE*)arg2 ;
-(id)SIPICEDataForCallID:(int)arg1 shouldFindExternalIP:(char)arg2 relayInfo:(id)arg3 ;
-(id)generateVCConnectionDataWithVersion:(int)arg1 SIPICEData:(id)arg2 bandwidthDictionary:(id)arg3 connectionHelper:(id)arg4 VCChannelExtraObj:(id)arg5 relayInfo:(id)arg6 ;
-(id)extractRelayIDFromVCConnectionData:(id)arg1 ;
-(id)extractConnectionHelperInfoFromVCConnectionData:(id)arg1 ;
-(char)hasVCChannelExtraInVCConnectionData:(id)arg1 ;
-(void)cacheConnectionData:(id)arg1 andCallID:(int)arg2 ;
-(void)VCChannelExtraPreparationProc:(id)arg1 ;
-(id)VCConnectionData;
-(id)VCConnectionDataWithExtraChannels:(id)arg1 shouldFindExternalIP:(char)arg2 ;
-(id)VCConnectionData:(char)arg1 ;
-(id)VCConnectionDataWithAttributes:(id)arg1 ;
-(int)initiateConferenceToUser:(id)arg1 withRemoteVCConnectionData:(id)arg2 withLocalVCConnectionData:(id)arg3 conferenceSettings:(id)arg4 shouldFindExternalIP:(char)arg5 ;
-(id)VCConnectionDataWithExtraChannels:(id)arg1 ;
-(void)prepareConnectionWithRemoteConnectionData:(id)arg1 localConnectionData:(id)arg2 ;
-(void)cancelPreparingConnection:(id)arg1 ;
-(int)initiateConferenceToUser:(id)arg1 withRemoteVCConnectionData:(id)arg2 withLocalVCConnectionData:(id)arg3 conferenceSettings:(id)arg4 ;
-(id)extraChannelsForVCConnectionData:(id)arg1 ;
-(void)registerForNetworkChanges;
-(id)init;
-(void)dealloc;
@end

