/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IMAVCore/IMAVCore-Structs.h>
#import <IMAVCore/IMSystemMonitorListener.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, IMHandle, IMAVChatParticipant, NSMutableDictionary, NSNumber, NSDate, NSDictionary, IMTimingCollection, NSObject, NSTimer, NSError, IMPair, IMAccount, NSArray;

@interface IMAVChat : NSObject <IMSystemMonitorListener> {

	NSString* _GUID;
	NSString* _conferenceID;
	NSMutableArray* _participants;
	IMHandle* _initiator;
	IMAVChatParticipant* _localParticipant;
	NSMutableDictionary* _conferenceStateCache;
	NSNumber* _natType;
	NSMutableDictionary* _extraServerContext;
	NSDate* _dateCreated;
	NSDate* _dateStartedConnecting;
	NSDate* _dateConnected;
	NSDate* _dateEnded;
	NSDate* _dateReceivedRelayInitiate;
	NSDate* _dateReceivedRelayUpdate;
	NSDate* _interruptionBegan;
	NSDictionary* _pingTestResults;
	NSNumber* _frontCameraCaptureTime;
	NSNumber* _backCameraCaptureTime;
	NSNumber* _dataRate;
	NSNumber* _dataUploaded;
	NSNumber* _dataDownloaded;
	IMTimingCollection* _timingCollection;
	unsigned _localNetworkConnectionType;
	unsigned _remoteNetworkConnectionType;
	int _pingTestResult;
	int _networkCheckResult;
	NSDictionary* _callerProperties;
	NSObject<OS_dispatch_queue>* _conferenceQueue;
	NSTimer* _inviteTimeoutTimer;
	NSDate* _inviteTimeoutTimerStart;
	NSTimer* _firstFrameTimeoutTimer;
	NSTimer* _connectionTimeoutTimer;
	NSTimer* _breakBeforeMakeTimeoutTimer;
	id _conferenceController;
	unsigned _sessionID;
	NSError* _error;
	unsigned _localState;
	unsigned _lastPostedState;
	IMPair* _pendingPreemptiveRelayInitate;
	NSString* _callStatisticsGUID;
	CGSize _portraitAspectRatios;
	CGSize _landscapeAspectRatios;
	double _connectionTimeoutTime;
	double _invitationTimeoutTime;
	BOOL _hasGatheredInfo;
	BOOL _hasReceivedFirstFrame;
	BOOL _hasPendingAccept;
	BOOL _hasPendingInit;
	BOOL _isTerminating;
	BOOL _isCaller;
	BOOL _isVideo;
	BOOL _didRemoteMute;
	BOOL _didRemotePause;
	int _connectionType;
	BOOL _needsVideoRestart;
	BOOL _needsAudioRestart;
	BOOL _airplaneModeEnabled;
	BOOL _isVideoInterrupted;
	BOOL _isAudioInterrupted;
	BOOL _isCallUpgrade;
	BOOL _startedAudioSession;
	BOOL _connectionStarted;

}

@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* localVideoBackLayer; 
@property (assign,nonatomic) unsigned cameraOrientation; 
@property (assign,nonatomic) unsigned cameraType; 
@property (assign,nonatomic) double invitationTimeoutTime; 
@property (assign,nonatomic) double connectionTimeoutTime; 
@property (assign,setter=setMute:,nonatomic) BOOL isMute; 
@property (assign,setter=setRemoteMute:,nonatomic) BOOL isRemoteMute; 
@property (assign,nonatomic) BOOL isSendingAudio; 
@property (nonatomic,readonly) BOOL didRemoteMute; 
@property (assign,setter=setPaused:,nonatomic) BOOL isPaused; 
@property (nonatomic,readonly) BOOL hasReceivedFirstFrame; 
@property (assign,nonatomic) BOOL isSendingVideo; 
@property (nonatomic,readonly) BOOL didRemotePause; 
@property (nonatomic,readonly) BOOL _allParticipantsUsingICE; 
@property (nonatomic,readonly) unsigned sessionID;                                                                       //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * conferenceID;                                                                    //@synthesize conferenceID=_conferenceID - In the implementation block
@property (getter=UID,nonatomic,retain) NSString * GUID;                                                                 //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) IMHandle * initiatorIMHandle;                                                             //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,readonly) IMHandle * otherIMHandle; 
@property (nonatomic,readonly) IMAccount * account; 
@property (nonatomic,@dynamic,readonly) IMAVChatParticipant * initiatorParticipant; 
@property (nonatomic,readonly) IMAVChatParticipant * localParticipant;                                                   //@synthesize localParticipant=_localParticipant - In the implementation block
@property (nonatomic,readonly) NSArray * participants;                                                                   //@synthesize participants=_participants - In the implementation block
@property (nonatomic,@dynamic,readonly) NSArray * remoteParticipants; 
@property (nonatomic,readonly) unsigned state;                                                                           //@synthesize localState=_localState - In the implementation block
@property (nonatomic,@dynamic,readonly) BOOL isActive; 
@property (nonatomic,@dynamic,readonly) BOOL isStateFinal; 
@property (nonatomic,readonly) int endedError; 
@property (nonatomic,readonly) unsigned endedReason; 
@property (nonatomic,readonly) NSDate * dateCreated;                                                                     //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,readonly) NSDate * dateConnected;                                                                   //@synthesize dateConnected=_dateConnected - In the implementation block
@property (nonatomic,readonly) NSDate * dateEnded;                                                                       //@synthesize dateEnded=_dateEnded - In the implementation block
@property (nonatomic,readonly) BOOL isCaller;                                                                            //@synthesize isCaller=_isCaller - In the implementation block
@property (nonatomic,readonly) BOOL isVideo;                                                                             //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,readonly) BOOL isUsingWifi; 
@property (readonly) NSDictionary * _extraServerContext;                                                                 //@synthesize extraServerContext=_extraServerContext - In the implementation block
@property (setter=_setCallStatisticsGUID:,nonatomic,retain) NSString * _callStatisticsGUID;                              //@synthesize callStatisticsGUID=_callStatisticsGUID - In the implementation block
@property (assign,setter=_setConferenceController:,nonatomic) id _conferenceController;                                  //@synthesize conferenceController=_conferenceController - In the implementation block
@property (setter=_setNatType:,nonatomic,retain) NSNumber * _natType;                                                    //@synthesize natType=_natType - In the implementation block
@property (nonatomic,readonly) NSNumber * _remoteNatType; 
@property (nonatomic,readonly) NSNumber * _currentNatType; 
@property (assign,setter=_setConnectionType:,nonatomic) int _connectionType;                                             //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) int _bustedCallID; 
@property (nonatomic,readonly) NSNumber * _connectDuration; 
@property (nonatomic,readonly) NSNumber * _callDuration; 
@property (nonatomic,readonly) NSNumber * _relayConnectDuration; 
@property (nonatomic,readonly) BOOL _usesRelay; 
@property (nonatomic,readonly) BOOL _isProxy; 
@property (setter=_setInterruptionBegan:,nonatomic,retain) NSDate * _interruptionBegan;                                  //@synthesize interruptionBegan=_interruptionBegan - In the implementation block
@property (setter=_setFrontCameraCaptureTime:,nonatomic,retain) NSNumber * _frontCameraCaptureTime;                      //@synthesize frontCameraCaptureTime=_frontCameraCaptureTime - In the implementation block
@property (setter=_setBackCameraCaptureTime:,nonatomic,retain) NSNumber * _backCameraCaptureTime;                        //@synthesize backCameraCaptureTime=_backCameraCaptureTime - In the implementation block
@property (setter=_setDataRate:,nonatomic,retain) NSNumber * _dataRate;                                                  //@synthesize dataRate=_dataRate - In the implementation block
@property (setter=_setDataUploaded:,nonatomic,retain) NSNumber * _dataUploaded;                                          //@synthesize dataUploaded=_dataUploaded - In the implementation block
@property (setter=_setDataDownloaded:,nonatomic,retain) NSNumber * _dataDownloaded;                                      //@synthesize dataDownloaded=_dataDownloaded - In the implementation block
@property (assign,setter=_setIsVideoInterrupted:,nonatomic) BOOL _isVideoInterrupted;                                    //@synthesize isVideoInterrupted=_isVideoInterrupted - In the implementation block
@property (assign,setter=_setIsAudioInterrupted:,nonatomic) BOOL _isAudioInterrupted;                                    //@synthesize isAudioInterrupted=_isAudioInterrupted - In the implementation block
@property (assign,setter=_setIsCallUpgrade:,nonatomic) BOOL _isCallUpgrade;                                              //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,setter=_setStartedAudioSession:,nonatomic) BOOL _startedAudioSession;                                  //@synthesize startedAudioSession=_startedAudioSession - In the implementation block
@property (assign,setter=_setLocalNetworkConnectionType:,nonatomic) unsigned _localNetworkConnectionType;                //@synthesize localNetworkConnectionType=_localNetworkConnectionType - In the implementation block
@property (assign,setter=_setRemoteNetworkConnectionType:,nonatomic) unsigned _remoteNetworkConnectionType;              //@synthesize remoteNetworkConnectionType=_remoteNetworkConnectionType - In the implementation block
@property (assign,setter=_setNeedsAudioRestart:,nonatomic) BOOL _needsAudioRestart;                                      //@synthesize needsAudioRestart=_needsAudioRestart - In the implementation block
@property (assign,setter=_setNeedsVideoRestart:,nonatomic) BOOL _needsVideoRestart;                                      //@synthesize needsVideoRestart=_needsVideoRestart - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * _conferenceQueue;                                           //@synthesize conferenceQueue=_conferenceQueue - In the implementation block
@property (setter=_setPingTestResults:,nonatomic,retain) NSDictionary * _pingTestResults;                                //@synthesize pingTestResults=_pingTestResults - In the implementation block
@property (assign,setter=_setPingTestResult:,nonatomic) int _pingTestResult;                                             //@synthesize pingTestResult=_pingTestResult - In the implementation block
@property (assign,setter=_setNetworkCheckResult:,nonatomic) int _networkCheckResult;                                     //@synthesize networkCheckResult=_networkCheckResult - In the implementation block
@property (setter=_setCallerProperties:,nonatomic,retain) NSDictionary * callerProperties;                               //@synthesize callerProperties=_callerProperties - In the implementation block
@property (assign,setter=_setConnectionStarted:,nonatomic) BOOL _connectionStarted;                                      //@synthesize connectionStarted=_connectionStarted - In the implementation block
@property (nonatomic,readonly) NSArray * _imHandles; 
+(id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2 ;
+(id)_avChatWithConferenceID:(id)arg1 ;
+(id)_avChatConnectingFromIMHandle:(id)arg1 ;
+(id)_activeChat;
+(id)_nonFinalChat;
+(id)_connectedChat;
+(id)_avChatArray;
+(id)_incomingInvitations;
+(id)_outgoingInvitations;
+(id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned)arg3 properties:(id)arg4 ;
+(id)_imHandleFromProxyRepresentation:(id)arg1 ;
+(id)_avChatWithGUID:(id)arg1 ;
+(double)defaultConnectionTimeoutTime;
+(double)defaultInvitationTimeoutTime;
+(int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2 ;
+(id)_avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2 ;
+(id)_proxyRepresentationForIMHandle:(id)arg1 ;
+(id)_acceptedChats;
+(id)_connectingChats;
+(id)_connectedChats;
+(id)_chatListLock;
+(id)_chatList;
+(void)setDefaultInvitationTimeoutTime:(double)arg1 ;
+(void)setDefaultConnectionTimeoutTime:(double)arg1 ;
+(id)activeChat;
+(id)chatList;
+(id)chatsWithIMAVChatState:(unsigned)arg1 ;
+(id)connectingChats;
+(id)connectedChats;
+(id)_chatsWithIMAVChatState:(unsigned)arg1 ;
+(id)_chatWithSessionID:(unsigned)arg1 ;
+(id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2 ;
+(id)connectedChat;
+(id)nonFinalChat;
+(id)incomingInvitations;
+(id)outgoingInvitations;
+(id)acceptedChats;
+(id)avChatWithGUID:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isPaused;
-(id)participants;
-(void)_clearCache;
-(void)dealloc;
-(id)description;
-(unsigned)state;
-(BOOL)isActive;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isVideo;
-(BOOL)isCaller;
-(unsigned)sessionID;
-(void)setCameraType:(unsigned)arg1 ;
-(BOOL)stopPreview;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(id)conferenceID;
-(void)systemWillShutdown;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)notificationCenterWillAppear;
-(void)notificationCenterDidDisappear;
-(void)systemDidFastUserSwitchOut;
-(id)participantMatchingIMHandle:(id)arg1 ;
-(id)localParticipant;
-(id)otherIMHandle;
-(id)remoteParticipants;
-(id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3 ;
-(void)_setConferenceID:(id)arg1 ;
-(BOOL)_isVideoUpgradeTo:(id)arg1 ;
-(void)_setIsCallUpgrade:(BOOL)arg1 ;
-(void)beginChat;
-(void)cancelInvitation;
-(void)endChat;
-(void)declineInvitationWithResponse:(unsigned)arg1 ;
-(void)_responseToVCInvite:(id)arg1 ;
-(void)_cancelInvitationWithReason:(unsigned)arg1 error:(int)arg2 ;
-(void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned)arg2 userInfo:(id)arg3 ;
-(void)_peerID:(id)arg1 changedTo:(id)arg2 ;
-(id)initiatorIMHandle;
-(void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(BOOL)arg2 isVideo:(BOOL)arg3 ;
-(id)_timings;
-(id)_initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 GUID:(id)arg3 ;
-(void)inviteAll;
-(void)invite:(id)arg1 additionalPeers:(id)arg2 ;
-(void)setInvitationTimeoutTime:(double)arg1 ;
-(void)setConnectionTimeoutTime:(double)arg1 ;
-(void)_handleAVError:(id)arg1 ;
-(void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 ;
-(void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 ;
-(void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 ;
-(void)setLocalAspectRatio:(CGSize)arg1 cameraOrientation:(unsigned)arg2 cameraType:(unsigned)arg3 ;
-(BOOL)_isCallUpgrade;
-(void)_setCreationDate;
-(void)_initParticipantsWithIMHandles:(id)arg1 ;
-(BOOL)_participantsCheckOut;
-(id)initiatorParticipant;
-(void)_airplaneModeChanged:(id)arg1 ;
-(void)_entitlementsChanged:(id)arg1 ;
-(id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned)arg3 GUID:(id)arg4 video:(BOOL)arg5 extraProperties:(id)arg6 ;
-(void)_setCallerProperties:(id)arg1 ;
-(void)_clearConnectionTimeoutTimer;
-(void)_clearFirstFrameTimeoutTimer;
-(void)_clearInvitationTimeoutTimer;
-(void)_clearBreakBeforeMakeTimer;
-(void)_endChatWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)_submitCallEndedLoggingWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)_postStateToDelegateIfNecessary;
-(BOOL)_isCallUpgradeTo:(id)arg1 ;
-(void)endChatWithReason:(unsigned)arg1 ;
-(void)_setActiveConference;
-(void)setMute:(BOOL)arg1 ;
-(void)_breakCallsIfNecessary:(BOOL)arg1 ;
-(void)_vccInitDidFinish:(id)arg1 ;
-(void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)endChatWithReason:(unsigned)arg1 error:(int)arg2 ;
-(int)endedError;
-(BOOL)_processVCResponseDict:(id)arg1 ;
-(void)__responseToVCInvite:(id)arg1 ;
-(void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned)arg2 userInfo:(id)arg3 handled:(BOOL)arg4 ;
-(id)_participantMatchingVCPartyID:(id)arg1 ;
-(id)_natType;
-(id)dateConnected;
-(id)dateEnded;
-(int)_connectionType;
-(unsigned)_localNetworkConnectionType;
-(id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)endChatWithError:(int)arg1 ;
-(id)inviteesInfo;
-(void)invite:(id)arg1 ;
-(void)_setStateDisconnected;
-(void)_applicationWillTerminate:(id)arg1 ;
-(id)participantWithAVConferenceCallID:(int)arg1 ;
-(id)participantWithID:(id)arg1 ;
-(id)vcPartyIDForIMHandle:(id)arg1 ;
-(BOOL)_isProxy;
-(void)_setDateConnected;
-(int)_bustedCallID;
-(BOOL)isConferenceSilent;
-(id)_remoteNatType;
-(id)_currentNatType;
-(id)_connectDuration;
-(id)_callDuration;
-(id)_relayConnectDuration;
-(BOOL)_usesRelay;
-(BOOL)isUsingWifi;
-(id)_imHandles;
-(void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3 ;
-(void)_noteFirstFrame;
-(void)_cacheBool:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)_hasCachedBoolForKey:(id)arg1 ;
-(BOOL)_cachedBoolForKey:(id)arg1 ;
-(id)_conferenceQueue;
-(void)_setConnectionType:(int)arg1 ;
-(id)_callStatisticsGUID;
-(void)_setCallStatisticsGUID:(id)arg1 ;
-(BOOL)_startedAudioSession;
-(void)_setStartedAudioSession:(BOOL)arg1 ;
-(id)callerProperties;
-(void)_setNatType:(id)arg1 ;
-(void)_setLocalNetworkConnectionType:(unsigned)arg1 ;
-(unsigned)_remoteNetworkConnectionType;
-(void)_setRemoteNetworkConnectionType:(unsigned)arg1 ;
-(BOOL)_needsAudioRestart;
-(void)_setNeedsAudioRestart:(BOOL)arg1 ;
-(BOOL)_needsVideoRestart;
-(void)_setNeedsVideoRestart:(BOOL)arg1 ;
-(id)_interruptionBegan;
-(void)_setInterruptionBegan:(id)arg1 ;
-(id)_frontCameraCaptureTime;
-(void)_setFrontCameraCaptureTime:(id)arg1 ;
-(id)_backCameraCaptureTime;
-(void)_setBackCameraCaptureTime:(id)arg1 ;
-(void)_setDataRate:(id)arg1 ;
-(id)_dataUploaded;
-(void)_setDataUploaded:(id)arg1 ;
-(id)_dataDownloaded;
-(void)_setDataDownloaded:(id)arg1 ;
-(BOOL)_isVideoInterrupted;
-(void)_setIsVideoInterrupted:(BOOL)arg1 ;
-(BOOL)_isAudioInterrupted;
-(void)_setIsAudioInterrupted:(BOOL)arg1 ;
-(BOOL)_connectionStarted;
-(void)_setConnectionStarted:(BOOL)arg1 ;
-(void)_setGUID:(id)arg1 ;
-(id)_conferenceController;
-(void)_setConferenceController:(id)arg1 ;
-(id)_extraServerContext;
-(id)_pingTestResults;
-(void)_setPingTestResults:(id)arg1 ;
-(int)_pingTestResult;
-(void)_setPingTestResult:(int)arg1 ;
-(int)_networkCheckResult;
-(void)_setNetworkCheckResult:(int)arg1 ;
-(void)conferencePersonWithID:(id)arg1 mediaDidStall:(BOOL)arg2 ;
-(void)_reduceInvitationTimeoutTime;
-(void)participant:(id)arg1 changedFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)_setBreakBeforeMakeTimer;
-(CGSize)localAspectRatioForCameraOrientation:(unsigned)arg1 cameraType:(unsigned)arg2 ;
-(BOOL)isSendingAudio;
-(BOOL)isSendingVideo;
-(BOOL)startPreviewWithError:(id*)arg1 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(BOOL)isStateFinal;
-(double)invitationTimeoutTime;
-(double)connectionTimeoutTime;
-(void)setIsSendingAudio:(BOOL)arg1 ;
-(void)setIsSendingVideo:(BOOL)arg1 ;
-(id)_proxyRepresentation;
-(void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned)arg6 orientation:(unsigned)arg7 aspect:(CGSize)arg8 ;
-(void)_setInvitationTimeoutTimer;
-(void)_setConnectionTimeoutTimer;
-(void)_connectionTimeout:(id)arg1 ;
-(void)_invitationTimeout:(id)arg1 ;
-(void)_firstFrameTimeout:(id)arg1 ;
-(void)_submitCallConnectedLogging;
-(void)_breakBeforeMakeTimer:(id)arg1 ;
-(void)_setFirstFrameTimeoutTimer;
-(void)_conferenceOtherParticipant:(id)arg1 didConnect:(BOOL)arg2 ;
-(void)conferenceDidStopWithCallID:(int)arg1 error:(id)arg2 ;
-(void)conferenceAVConferenceCallID:(int)arg1 didConnect:(BOOL)arg2 ;
-(void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2 ;
-(void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2 ;
-(void)conferencePersonWithID:(id)arg1 didDegrade:(BOOL)arg2 ;
-(void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2 ;
-(void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2 ;
-(void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2 ;
-(void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2 ;
-(BOOL)isMute;
-(void)toggleMute;
-(void)setRemoteMute:(BOOL)arg1 ;
-(BOOL)isRemoteMute;
-(BOOL)didRemoteMute;
-(BOOL)hasReceivedFirstFrame;
-(void)togglePaused;
-(BOOL)didRemotePause;
-(void)_resumeAudioState;
-(void)_resumeVideoState;
-(void)_saveVideoRestartState;
-(void)_saveAudioRestartState;
-(void)_updateIMHandleInBuddyList:(id)arg1 ;
-(BOOL)_moveVCPartyID:(id)arg1 toIndex:(unsigned)arg2 inCount:(unsigned)arg3 ;
-(BOOL)_allParticipantsUsingICE;
-(void)_submitCallInterruptionBeganLogging;
-(void)_submitCallInterruptionEndedLogging;
-(id)_proxyRepresentationForIMAVChatParticipant:(id)arg1 ;
-(void)__sendEndCallMetricToAWDWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)__sendEndCallMetricToViceroyWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)acceptInvitation;
-(void)declineInvitation;
-(id)account;
-(unsigned)cameraType;
-(unsigned)cameraOrientation;
-(void)setCameraOrientation:(unsigned)arg1 ;
-(id)dateCreated;
-(id)GUID;
-(id)_dataRate;
-(unsigned)endedReason;
@end
