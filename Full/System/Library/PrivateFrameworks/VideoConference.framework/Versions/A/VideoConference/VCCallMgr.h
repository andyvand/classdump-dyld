/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VideoConference/VideoConference-Structs.h>
@class NSLock, NSMutableDictionary, NSMutableArray, SDPAnalyzer, NSDate, NSString, VideoConferenceMultiController;

@interface VCCallMgr : NSObject {

	NSLock* lock;
	NSMutableDictionary* dictIncomingCalls;
	NSMutableDictionary* dictOutgoingCalls;
	NSMutableDictionary* _globalAttributesDictionary;
	NSMutableDictionary* dictHangupCalls;
	NSMutableDictionary* _confStatusMap;
	NSMutableDictionary* mapUserIDToCallID;
	NSMutableDictionary* participantUserIDToConfIndex;
	NSMutableDictionary* mapUserIDToSecurityInfo;
	NSLock* _SecurityInfoLock;
	char fSecurityInfoPaused;
	char fSecurityEnabledValue;
	char fSecurityValidValue;
	NSMutableArray* participantUpdateQueue;
	SDPAnalyzer* _callerSDP;
	SDPAnalyzer* _calleeSDP;
	int _curCallID;
	int _callIDIter;
	int _microphoneDevice;
	unsigned _speakerDevice;
	NSDate* _callStartTime;
	double _lastCallDuration;
	tagRTPHANDLES* _localRTPHandles;
	NSString* _localUserName;
	NSLock* _initiateLock;
	NSLock* _confStatusLock;
	NSLock* _determineFocusCapabilityLock;
	NSLock* _BWDThreadLock;
	NSLock* _deferVideoFormatLock;
	NSLock* _delegateLock;
	NSLock* _participantUserIDToConfIndexLock;
	NSLock* _userIDToCallIDMapLock;
	NSLock* _vcCameraLock;
	char _didStartTransmitForNonFocus;
	char _multiPartyConference;
	char _isTransmitting;
	char _BWDThreadRunning;
	char _confStatusConnected;
	char _startedAuxiliaryInput;
	VideoConferenceMultiController* _vcControllerInstance;
	id _vcDelegate;
	id _vcRenderDelegate;
	char _vcDelegateConformsToDelegateProtocol;
	int _confUpstream;
	int _confDownstream;
	VCFocusCapability _focusCapability;
	unsigned long long _lastCameraGUID;
	unsigned _lastCameraDevice;
	char _usePCMUWideband;
	char _useSpeex;
	char _useSpeex32K;
	int _auxVideoInputMode;
	char _sideShowEnabled;
	char _replacementMode;
	int _commNATResult;
	int _iPreviewing;
	int _iResumePreview;
	NSString* _SNATMAPIPAddress;
	unsigned short _SNATMAPPort;
	unsigned long long _ipSNATMAP;
	char _multiwayBWDPauseEnabled;

}

@property (setter=NATMAPIPAddress,copy) NSString * _SNATMAPIPAddress;                   //@synthesize SNATMAPIPAddress=_SNATMAPIPAddress - In the implementation block
@property (setter=NATMAPPort) unsigned short _SNATMAPPort;                              //@synthesize SNATMAPPort=_SNATMAPPort - In the implementation block
@property (assign) unsigned long long _ipSNATMAP;                                       //@synthesize ipSNATMAP=_ipSNATMAP - In the implementation block
@property (assign) int _iPreviewing;                                                    //@synthesize iPreviewing=_iPreviewing - In the implementation block
@property (assign) int _iResumePreview;                                                 //@synthesize iResumePreview=_iResumePreview - In the implementation block
@property (getter=isMultiwayBWDPauseEnabled) char multiwayBWDPauseEnabled;              //@synthesize multiwayBWDPauseEnabled=_multiwayBWDPauseEnabled - In the implementation block
+(id)defaultCallMgr;
-(void)setVCDelegate:(id)arg1 ;
-(id)vcDelegate;
-(void)setVCRenderDelegate:(id)arg1 ;
-(id)vcRenderDelegate;
-(char)getReplacementMode;
-(char)getSideShowEnabled;
-(int)auxiliaryVideoInputMode;
-(char)useSpeex32K;
-(char)useSpeex;
-(int)microphoneDevice;
-(int)speakerDevice;
-(void)setLocalUserName:(id)arg1 ;
-(id)globalAttributesDictionary;
-(void)smallestNonfocusBitrate:(int*)arg1 framerate:(int*)arg2 ;
-(char)vcDelegateConformsToDelegateProtocol;
-(id)vcControllerInstance;
-(void)set_iPreviewing:(int)arg1 ;
-(int)callIDIter;
-(char)isMultiwayBWDPauseEnabled;
-(int)curCallID;
-(int)_iPreviewing;
-(void)set_iResumePreview:(int)arg1 ;
-(int)_iResumePreview;
-(void)setSpeakerDevice:(unsigned)arg1 ;
-(int)callIDFromMapForUserID:(id)arg1 ;
-(int)confIndexFromMapForUserID:(id)arg1 ;
-(int)confIndexForUserID:(id)arg1 ;
-(id)vcCameraLock;
-(void)set_SNATMAPIPAddress:(NSString *)arg1 ;
-(void)set_SNATMAPPort:(unsigned short)arg1 ;
-(NSString *)_SNATMAPIPAddress;
-(unsigned short)_SNATMAPPort;
-(void)set_ipSNATMAP:(unsigned long long)arg1 ;
-(id)userIDForConfIndex:(unsigned)arg1 ;
-(char)startedAuxiliaryInput;
-(void)setStartedAuxiliaryInput:(char)arg1 ;
-(void)setDidStartTransmitForNonFocus:(char)arg1 ;
-(void)setMultiPartyConference:(char)arg1 ;
-(void)setIsTransmitting:(char)arg1 ;
-(void)clearConfIndexForUserID;
-(void)confStatusMapRemoveAll;
-(void)setConfStatusConnected:(char)arg1 ;
-(void)clearSecurityInfo;
-(void)endCallTimer;
-(void)setCurCallID:(int)arg1 ;
-(id)userIDToCallIDMap;
-(id)userIDToCallIDMapLock;
-(void)setConfIndex:(int)arg1 forUserID:(id)arg2 ;
-(void)sendConfStatusUpdateToiChat;
-(char)isSecurityEnabledForUser:(id)arg1 ;
-(char)isSecurityValidForUser:(id)arg1 ;
-(void)addCall:(int)arg1 withData:(id)arg2 ;
-(id)getCallData:(int)arg1 ;
-(char)existCallID:(int)arg1 ;
-(char)acceptCallID:(int)arg1 ;
-(char)cancelCallID:(int)arg1 ;
-(void)addOutgoingCall:(int)arg1 ;
-(char)existOutgoingCallID:(int)arg1 andRemove:(char)arg2 ;
-(char)hangupCall:(int)arg1 ;
-(void)finishedCallHangup:(int)arg1 ;
-(int)getIncrementedCallIDIter;
-(void)setRTPHandles:(tagRTPHANDLES*)arg1 ;
-(tagRTPHANDLES*)RTPHandles;
-(void)startCallTimer;
-(id)callStartTime;
-(double)lastCallDuration;
-(char)BWDThreadRunning;
-(void)setBWDThreadRunning:(char)arg1 ;
-(id)localUserName;
-(void)setPeerToPeerInfoInMapForUserID:(id)arg1 payload:(int)arg2 transmitWidth:(int)arg3 transmitHeight:(int)arg4 transmitBitrate:(int)arg5 transmitFramerate:(int)arg6 ;
-(void)peerToPeerInfoFromMapForUserID:(id)arg1 payload:(int*)arg2 transmitWidth:(int*)arg3 transmitHeight:(int*)arg4 transmitBitrate:(int*)arg5 transmitFramerate:(int*)arg6 ;
-(id)hardwareInfoArrayFromMap;
-(id)userIDForCallID:(unsigned)arg1 ;
-(id)getParticipantUpdateQueue;
-(void)setVCControllerInstance:(id)arg1 ;
-(id)initiateLock;
-(id)confStatusLock;
-(id)determineFocusCapabilityLock;
-(id)deferVideoFormatLock;
-(char)didStartTransmitForNonFocus;
-(char)isMultiPartyConference;
-(char)isTransmitting;
-(int)BWDUpstreamKbits;
-(int)BWDDownstreamKbits;
-(void)setFocusCapability:(VCFocusCapability*)arg1 ;
-(void)getFocusCapability:(VCFocusCapability*)arg1 ;
-(void)addConfStatusForUserID:(id)arg1 status:(int)arg2 confIndex:(int)arg3 userInfo:(id)arg4 ;
-(void)removeConfStatus:(id)arg1 ;
-(void)setSecurityInfoCertificate:(OpaqueSecCertificateRefRef)arg1 forUser:(id)arg2 ;
-(void)setSecurityInfoEnabled:(char)arg1 forUser:(id)arg2 ;
-(void)setSecurityInfoValid:(char)arg1 forUser:(id)arg2 ;
-(OpaqueSecCertificateRefRef)getRemoteCertificateForUser:(id)arg1 ;
-(void)setSecurityInfoPaused:(char)arg1 ;
-(void)setLastCameraGUID:(unsigned long long)arg1 ;
-(unsigned long long)lastCameraGUID;
-(void)setLastCameraDevice:(unsigned)arg1 ;
-(unsigned)lastCameraDevice;
-(char)usePCMUWideband;
-(void)setUsePCMUWideband:(char)arg1 ;
-(void)setUseSpeex:(char)arg1 ;
-(void)setUseSpeex32K:(char)arg1 ;
-(void)setSideShowEnabled:(char)arg1 ;
-(void)setReplacementMode:(char)arg1 ;
-(void)setAuxiliaryVideoInputMode:(int)arg1 ;
-(void)setCommNATResult:(int)arg1 ;
-(int)commNATResult;
-(void)addCommNATResultToErrorReporter;
-(unsigned long long)_ipSNATMAP;
-(void)setMultiwayBWDPauseEnabled:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(int)size;
@end

